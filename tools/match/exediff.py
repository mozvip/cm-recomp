#!/usr/bin/env python3
"""Compare a relinked executable with the original, part by part.

  exediff.py ORIGINAL.EXE REBUILT.EXE [-v]

Parts: MZ header, relocation table, load image (per segment of the original),
FBOV header, overlay code and fixup lists (per overlay). Exit status 0 if identical.
"""
import os, struct, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import exemodel


def first_diff(a, b):
    n = min(len(a), len(b))
    for i in range(n):
        if a[i] != b[i]:
            return i
    return None if len(a) == len(b) else n


def main():
    verbose = '-v' in sys.argv
    args = [a for a in sys.argv[1:] if a != '-v']
    ra, rb = open(args[0], 'rb').read(), open(args[1], 'rb').read()
    if ra == rb:
        print('IDENTICAL (%d bytes)' % len(ra))
        return 0
    a, b = exemodel.Exe(args[0]), exemodel.Exe(args[1])
    print('files differ: %d vs %d bytes' % (len(ra), len(rb)))
    names = 'magic cblp cp crlc cparhdr minalloc maxalloc ss sp csum ip cs lfarlc ovno'.split()
    for n, x, y in zip(names, a.hdr, b.hdr):
        if x != y:
            print('  header %-8s %s vs %s' % (n, x if n == 'magic' else '%04x' % x, y if n == 'magic' else '%04x' % y))
    if ra[0x1c:a.relofs] != rb[0x1c:b.relofs]:
        print('  header bytes 1C..%x differ: %s vs %s' % (a.relofs, ra[0x1c:a.relofs].hex(), rb[0x1c:b.relofs].hex()))
    if a.relocs != b.relocs:
        la, lb = [s * 16 + o for o, s in a.relocs], [s * 16 + o for o, s in b.relocs]
        k = first_diff(a.relocs, b.relocs)
        print('  relocations: %d vs %d, first difference at #%d' % (len(a.relocs), len(b.relocs), k))
        if set(la) != set(lb):
            print('    only in original: %s' % ' '.join('%05x' % x for x in sorted(set(la) - set(lb))[:20]))
            print('    only in rebuilt:  %s' % ' '.join('%05x' % x for x in sorted(set(lb) - set(la))[:20]))
        else:
            print('    same set, different order; orig #%d.. = %s' % (k, ' '.join('%05x' % x for x in la[k:k + 8])))
            print('                               rebuilt  = %s' % ' '.join('%05x' % x for x in lb[k:k + 8]))
    if a.image != b.image:
        print('  load image: %05x vs %05x bytes' % (len(a.image), len(b.image)))
        for s in a.segs:
            if s.end <= s.start:
                continue
            x, y = a.image[s.start:s.end], b.image[s.start:s.end]
            d = first_diff(x, y)
            if d is not None:
                nd = sum(1 for i in range(min(len(x), len(y))) if x[i] != y[i])
                print('    seg %2d %-7s %04x (%05x-%05x): %d bytes differ, first at %05x' %
                      (s.index, s.kind, s.frame, s.start, s.end, nd, s.start + d))
                if verbose:
                    o = s.start + d
                    print('      orig    %s' % a.image[o:o + 16].hex(' '))
                    print('      rebuilt %s' % b.image[o:o + 16].hex(' '))
        if len(b.image) > len(a.image):
            print('    rebuilt image has %d extra bytes' % (len(b.image) - len(a.image)))
    if a.fbov_hdr != b.fbov_hdr:
        print('  FBOV header: %s vs %s' % (a.fbov_hdr.hex(' '), b.fbov_hdr.hex(' ')))
    for sa, sb in zip(a.stubs, b.stubs):
        what = []
        if (sa.fileoff, sa.codesize, sa.nfix) != (sb.fileoff, sb.codesize, sb.nfix):
            what.append('fileoff/code/fixups %x/%x/%d vs %x/%x/%d' % (sa.fileoff, sa.codesize, sa.nfix,
                                                                       sb.fileoff, sb.codesize, sb.nfix))
        if sa.entries != sb.entries:
            what.append('entries differ')
        if sa.code != sb.code:
            d = first_diff(sa.code, sb.code)
            what.append('code differs from +%04x' % d)
        if sa.fixups != sb.fixups:
            what.append('fixup list differs' + (' (order only)' if sorted(sa.fixups) == sorted(sb.fixups) else ''))
        if what:
            print('  overlay %04x: %s' % (sa.seg, '; '.join(what)))
    if len(a.stubs) != len(b.stubs):
        print('  overlays: %d vs %d' % (len(a.stubs), len(b.stubs)))
    if a.ovdata != b.ovdata and all(x.code == y.code and x.fixups == y.fixups for x, y in zip(a.stubs, b.stubs)):
        d = first_diff(a.ovdata, b.ovdata)
        print('  overlay data (padding) differs at +%05x' % d)
    return 1


if __name__ == '__main__':
    sys.exit(main())
