#!/usr/bin/env python3
"""Extract a native port's data from the game's executable (see games/cm1/port/README.md).

  extract.py --segments SEGMENTS.TXT GAME.EXE OUTDIR

The port does not read the executable: its data segments (port_image) are loaded from
one file per segment, OUTDIR/NAME.bin, which this writes. SEGMENTS.TXT lists them:

  NAME  START  SIZE  CRC32|bss

START and SIZE in hex, START in the executable's load image (file numbering, as TLINK's
map has it). A "bss" segment is all zeros in the executable and gets no file. A CRC-32
that does not match means another version of the game: the files are written anyway,
with a warning (the port warns again when it loads them).
"""
import argparse, os, struct, sys, zlib


def parse_segments(path):
    segs = []
    for ln in open(path):
        ln = ln.split('#')[0].split()
        if not ln:
            continue
        if len(ln) != 4:
            raise SystemExit('%s: bad line: %s' % (path, ' '.join(ln)))
        crc = None if ln[3] == 'bss' else int(ln[3], 16)
        segs.append((ln[0], int(ln[1], 16), int(ln[2], 16), crc))
    return segs


def load_image(path):
    """The executable's load image (what DOS copies to memory, without the header)."""
    data = open(path, 'rb').read()
    if data[:2] not in (b'MZ', b'ZM'):
        raise SystemExit('%s: not an MZ executable' % path)
    last, pages, _, hdr_paras = struct.unpack('<4H', data[2:10])
    size = pages * 512 - (512 - last if last else 0)
    return data[hdr_paras * 16:size]


def main():
    ap = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    ap.add_argument('--segments', required=True)
    ap.add_argument('exe')
    ap.add_argument('outdir')
    a = ap.parse_args()

    segs = parse_segments(a.segments)
    image = load_image(a.exe)
    os.makedirs(a.outdir, exist_ok=True)
    bad = 0
    for name, start, size, crc in segs:
        blob = image[start:start + size]
        if len(blob) != size:
            raise SystemExit('%s: too short for %s (%05x+%04x): not the right game' % (a.exe, name, start, size))
        if crc is None:
            if any(blob):
                print('warning: %s is not all zeros in %s' % (name, a.exe), file=sys.stderr)
                bad += 1
            continue
        if zlib.crc32(blob) != crc:
            print('warning: %s differs from the version the port was made from (crc %08x, expected %08x)'
                  % (name, zlib.crc32(blob), crc), file=sys.stderr)
            bad += 1
        with open(os.path.join(a.outdir, name + '.bin'), 'wb') as f:
            f.write(blob)
    n = sum(1 for s in segs if s[3] is not None)
    print('%s: %d segments written to %s%s' % (a.exe, n, a.outdir, ', %d warnings' % bad if bad else ''))


if __name__ == '__main__':
    main()
