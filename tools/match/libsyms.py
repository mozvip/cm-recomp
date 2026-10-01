#!/usr/bin/env python3
"""Names for the runtime library functions in an executable, found by matching the
modules of a Borland library byte for byte (fixup locations masked).

  libsyms.py GAME.EXE LIB [LIB ...]      prints "SEG:OFS name" lines (runtime numbering)

A module counts only if its code occurs exactly once; its public symbols are listed at
their offsets. Use the output for games/<game>/decomp/symbols.txt.
"""
import os, re, sys
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import omf, mkblobs

SIZE = {'off16': 2, 'seg16': 2, 'ptr32': 4, 'off8': 1, 'off16l': 2, 'hi8': 1}


def pattern(code, fx, calls):
    """Regex for a module's code: fixup bytes are wildcards, and a far call to a fixup
    (9A ptr32) also matches the 90 0E E8 near call TLINK makes of it within a segment,
    and a far jump (EA) the 90 90 E9 near jump."""
    out, i = [], 0
    while i < len(code):
        if i in calls:
            out.append(b'(?:\\x9a....|\\x90\\x0e\\xe8..)' if code[i] == 0x9a else b'(?:\\xea....|\\x90\\x90\\xe9..)')
            i += 5
            continue
        out.append(b'.' if i in fx else re.escape(code[i:i + 1]))
        i += 1
    return b''.join(out)


def main():
    m = mkblobs.Model(sys.argv[1])
    img = m.e.image
    found = {}
    for lib in sys.argv[2:]:
        for mod in omf.read_obj(open(lib, 'rb').read()):
            for si, (n, c, l, a) in enumerate(mod.segs, 1):
                if c != 'CODE' or l < 12:
                    continue
                code = bytes(mod.data[si])
                fx, calls = set(), set()
                for f in mod.fixups:
                    if f[0] == si:
                        fx.update(range(f[1], f[1] + SIZE.get(f[2], 2)))
                        if f[2] == 'ptr32' and f[1] > 0 and code[f[1] - 1] in (0x9a, 0xea): calls.add(f[1] - 1)
                pat = pattern(code, fx, calls)
                hits = [x.start() for x in re.finditer(pat, img, re.S)]
                if len(hits) != 1:
                    continue
                at = hits[0]
                s = m.seg_of(at)
                for name, (psi, off) in mod.publics.items():
                    if psi == si:
                        a = at + off
                        if all(n != name for n, _, _ in found.get(a, [])):
                            found.setdefault(a, []).append((name, s, mod.name))
    for a in sorted(found):                    # every public at the address (aliases too)
        for name, s, modname in found[a]:
            print('%04x:%04x %-20s # %s' % (s.frame + 0x1000, a - s.frame * 16, name, modname))


if __name__ == '__main__':
    main()
