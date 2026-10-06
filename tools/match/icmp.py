#!/usr/bin/env python3
"""Compare the instruction streams of the original and the rebuilt executable, from an
address on, and show the first place where they differ. Unlike a byte compare, this finds
the real difference after a length change (jump displacements and addresses shifted by
it are ignored).

  icmp.py ORIGINAL.EXE REBUILT.EXE SSSS:OOOO [--len N]
"""
import os, re, sys
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
sys.path.insert(0, os.path.dirname(HERE))
import mkblobs, build

NUM = re.compile(r'0x[0-9a-f]+|->[0-9a-f]+(:[0-9a-f]+)?')


def main():
    args = [a for a in sys.argv[1:]]
    n = 0x2000
    if '--len' in args:
        k = args.index('--len')
        n = int(args[k + 1], 0)
        del args[k:k + 2]
    orig, new, at = args
    s, o = (int(x, 16) for x in at.split(':'))
    bufs = []
    for path in (orig, new):
        m = mkblobs.Model(path)
        w = m.where(s, o)
        if w[0] == 'root':
            fb = w[2].frame * 16
            bufs.append((bytes(m.e.image[fb:fb + 0x10000]), o))
        else:
            bufs.append((bytes(m.e.stubs[w[1]].code), w[2]))
    (a, pa), (b, pb) = bufs
    da = build.disasm(a[:pa + n], 0, pa, pa + n)
    db = build.disasm(b[:pb + n], 0, pb, pb + n)
    for k, (x, y) in enumerate(zip(da, db)):
        if NUM.sub('N', x[2]) != NUM.sub('N', y[2]):
            for z in range(max(0, k - 5), min(k + 12, len(da), len(db))):
                print('%s %04x %-20s %-30s| %04x %-20s %s' % ('*' if z == k else ' ', da[z][0], da[z][1], da[z][2][:30],
                                                             db[z][0], db[z][1], db[z][2][:40]))
            return 1
    print('no instruction difference')
    return 0


if __name__ == '__main__':
    sys.exit(main())
