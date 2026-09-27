#!/usr/bin/env python3
"""Flatten a Borland VROOMM (FBOV) overlaid MZ executable into a plain MZ.

Usage: unfbov.py IN.EXE OUT.EXE

Same transformation mzap applied to CM1 (see OVERLAY_UNPACKING.md):
  - the FBOV block (header + overlay data) is appended to the load image, header disarmed
  - overlay i gets the fixed code segment  base + fileoff/16  (base = paragraph after the header)
  - every overlay fixup word (a selector = segment-table index * 8) becomes the real segment
  - every 5-byte stub entry "CD 3F off16 00" becomes "EA off16 seg16" (JMP FAR)
  - one MZ relocation is added per overlay fixup and per stub entry
"""
import struct, sys


def flatten(d, verbose=True):
    h = list(struct.unpack('<2s13H', d[:28]))
    cblp, cp, nrel, hdr_paras, relofs = h[1], h[2], h[3], h[4], h[12]
    loaded = cp * 512 - ((512 - cblp) if cblp else 0)
    image = bytearray(d[hdr_paras * 16:loaded])
    fb = d[loaded:]
    if fb[:4] != b'FBOV':
        raise SystemExit('no FBOV block at 0x%x' % loaded)
    ovrsize, exeinfo, segnum = struct.unpack('<IIH', fb[4:14])
    if len(image) % 16:
        raise SystemExit('load image not paragraph aligned')
    relocs = [struct.unpack('<HH', d[relofs + 4 * i: relofs + 4 * i + 4]) for i in range(nrel)]

    table = [struct.unpack('<4H', d[exeinfo + 8 * i: exeinfo + 8 * i + 8]) for i in range(segnum)]
    ov_data = fb[16:16 + ovrsize]
    base = len(image) // 16 + 1                     # overlay data starts after the 16-byte header
    hdr = bytearray(fb[:16])
    hdr[0:4] = b'\0\0\0\0'
    struct.pack_into('<I', hdr, 4, ovrsize + 16)
    image += hdr + ov_data
    image += bytes((-len(image)) % 16)

    new_relocs = []
    nfix = nent = 0
    stubs = [e[0] for e in table if e[2] == 3]
    for s in stubs:
        so = s * 16
        if image[so:so + 2] != b'\xcd\x3f':
            continue
        fileoff, codesize, relsize, nentries = struct.unpack('<IHHH', image[so + 4: so + 14])
        seg = base + fileoff // 16
        if fileoff % 16:
            raise SystemExit('overlay at stub %04x not paragraph aligned' % s)
        co = seg * 16
        fix = [struct.unpack('<H', image[co + codesize + 2 * k: co + codesize + 2 * k + 2])[0] for k in range(relsize // 2)]
        for f in fix:
            sel = struct.unpack('<H', image[co + f: co + f + 2])[0]
            if sel % 8 or sel // 8 >= len(table):
                raise SystemExit('bad selector %04x at %04x:%04x' % (sel, seg, f))
            struct.pack_into('<H', image, co + f, table[sel // 8][0])
            new_relocs.append((f, seg))
        nfix += len(fix)
        for k in range(nentries):
            eo = so + 0x20 + 5 * k
            if image[eo:eo + 2] != b'\xcd\x3f':
                raise SystemExit('stub %04x entry %d is not INT 3Fh' % (s, k))
            off = struct.unpack('<H', image[eo + 2: eo + 4])[0]
            image[eo] = 0xea
            struct.pack_into('<HH', image, eo + 1, off, seg)
            new_relocs.append((eo + 3 - so, s))
        nent += nentries
        if verbose:
            print('  stub %04x -> overlay seg %04x  code %5x  fixups %4d  entries %3d' % (s, seg, codesize, len(fix), nentries))
    relocs += new_relocs
    if verbose:
        print('%d overlays, %d fixups, %d stub entries, %d relocations total' % (len(stubs), nfix, nent, len(relocs)))

    # new header: keep bytes 0x1C..relofs (TLINK signature), relocation table, pad to paragraph
    head = bytearray(d[:relofs])
    rel = b''.join(struct.pack('<HH', o, s) for o, s in relocs)
    head_len = relofs + len(rel)
    head_len += (-head_len) % 16
    total = head_len + len(image)
    struct.pack_into('<H', head, 2, total % 512)
    struct.pack_into('<H', head, 4, (total + 511) // 512)
    struct.pack_into('<H', head, 6, len(relocs))
    struct.pack_into('<H', head, 8, head_len // 16)
    out = head + rel + bytes(head_len - relofs - len(rel)) + image
    return bytes(out), base


if __name__ == '__main__':
    src, dst = sys.argv[1], sys.argv[2]
    out, base = flatten(open(src, 'rb').read())
    open(dst, 'wb').write(out)
    print('wrote %s (%d bytes), overlays from paragraph %04x' % (dst, len(out), base))
