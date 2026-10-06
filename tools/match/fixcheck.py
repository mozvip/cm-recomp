#!/usr/bin/env python3
"""Check what fcheck leaves out: every fixup of a compiled file against the original.

  fixcheck.py GAME.EXE FILE.C [--data SSSS:OOOO] [--symbols F] [--names F]
              [--cc bc31|bc30|bc4] [--flags "-ml -O1 -k -Ol"] [--only NAME ...] [-v]

fcheck compares a file's code with the original but skips the bytes the linker fills in.
So a wrong string or float constant, two float arguments in swapped order, a table read
from the wrong segment (d_483b_0000 and d_3e42_0000 are both huge [][1702]) or a call to
strcat where the original has strcpy all pass it, and only the full build shows them.
This compiles FILE the same way and works out, for each fixup inside the file's public
f_SSSS_OOOO functions, the word the original must hold there:

  d_SSSS_OOOO + n   offset OOOO+n; segment: the frame of SSSS in root code, its selector
                    (segment index * 8) in overlay code
  f_SSSS_OOOO       a root function: its offset and segment; an entry of another overlay:
                    its stub entry; a function of the same segment: the call TLINK makes
                    near (90 0E E8 rel16) must land on it
  runtime names     strcpy, F_PADD@...: resolved through --symbols (and --names)
  the file's data   literal and table addresses: @data (or --data) plus the offset in _DATA;
                    the whole _DATA is also compared with the original bytes there, which
                    catches wrong text and float constants (and swapped float arguments,
                    whose constants then come out in another order)
  the file's code   jump tables and code addresses: @at plus the offset

and checks the 8087 operations (the emulator's INT 34h-3Bh in the original) opcode for
opcode. A part file whose float constants the merged module shares with earlier code has
its pool shifted: its data check fails there, its addresses after the first shared one
too; check the merged file, or read the report with that in mind.

--symbols and --names default to the symbols.txt and names.txt found above FILE.
"""
import collections, argparse, os, re, struct, sys
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
sys.path.insert(0, os.path.dirname(HERE))
import fcheck, mkblobs, build

RT = 0x1000
DGROUP_NAMES = {'_DATA', 'DATA'}


def find_up(start, name, levels=4):
    d = os.path.dirname(os.path.abspath(start))
    for _ in range(levels):
        for p in (os.path.join(d, name), os.path.join(d, 'decomp', name)):
            if os.path.exists(p):
                return p
        d = os.path.dirname(d)
    return None


class Checker:
    def __init__(self, m, symtab):
        self.m, self.symtab = m, symtab
        self.dgroup = m.e.dgroup

    def linear(self, seg, off):
        return seg * 16 + off - RT * 16

    def seg_word(self, rt_seg, rt_off, in_ovl):
        """The word a segment reference to rt_seg:rt_off holds (root frame / overlay selector)."""
        w = self.m.where(rt_seg, rt_off)
        if w[0] == 'ovl':
            return None
        # the segment the name gives, not the one its linear address falls in: d_28da_e886 is
        # inside segment 3668 but is linked (and addressed) as a 28da symbol
        s = self.m.frame_seg.get(rt_seg - RT, w[2])
        return s.index * 8 if in_ovl else s.frame

    def stub_entry(self, rt_seg, rt_off):
        """Another overlay's function -> (stub segment index, stub frame, entry offset)."""
        w = self.m.where(rt_seg, rt_off)
        if w[0] != 'ovl':
            return None
        st = self.m.e.stubs[w[1]]
        if w[2] not in st.entries:
            return 'not an entry'
        return st.index, st.seg, 0x20 + 5 * st.entries.index(w[2])


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('exe')
    ap.add_argument('src')
    ap.add_argument('--data', help='SSSS:OOOO of the file\'s _DATA (default: its @data)')
    ap.add_argument('--symbols')
    ap.add_argument('--names')
    ap.add_argument('--cc', default='bc31')
    ap.add_argument('--flags', help='BCC options (default: fcheck.py\'s for --cc)')
    ap.add_argument('--only', nargs='*', default=[], help='check only these functions')
    ap.add_argument('-v', action='store_true', help='list every fixup, not only the bad ones')
    a = ap.parse_args()

    text = open(a.src, errors='replace').read()
    if a.data:
        s, o = a.data.split(':')
        data_at = (int(s, 16), int(o, 16))
    else:
        mo = re.search(r'@data\s+([0-9a-fA-F]{4}):([0-9a-fA-F]{4})', text)
        data_at = (int(mo.group(1), 16), int(mo.group(2), 16)) if mo else None
    symtab = {}
    for p in (a.names or find_up(a.src, 'names.txt'), a.symbols or find_up(a.src, 'symbols.txt')):
        symtab.update(build.read_names(p))

    m = mkblobs.Model(a.exe)
    ck = Checker(m, symtab)
    mod = fcheck.compile_file(a.src, a.cc, a.flags or fcheck.default_flags(a.cc))
    si = next(i for i, s in enumerate(mod.segs, 1) if s[1] == 'CODE' and s[2] > 0)
    di = next((i for i, s in enumerate(mod.segs, 1) if s[0] in DGROUP_NAMES), None)
    code = bytes(mod.data[si])
    data = bytes(mod.data[di]) if di and di in mod.data else b''
    funcs = sorted((off, n) for n, (s, off) in mod.publics.items() if s == si and fcheck.NAME.match(n))
    if funcs:
        # the placement most functions agree on (address - offset in the object): a part's
        # stubs of other chunks' functions (placed first, called 0E E8) don't decide it; on a
        # tie, the placement of the most code
        votes = collections.defaultdict(lambda: [0, 0])
        ends = [o for o, _ in funcs[1:]] + [len(code)]
        for (off, n), end in zip(funcs, ends):
            mo = fcheck.NAME.match(n)
            key = (int(mo.group(1), 16), int(mo.group(2), 16) - off)
            votes[key][0] += 1
            votes[key][1] += end - off
        key = max(votes, key=lambda k: tuple(votes[k]))
        off0, n0 = next((o, n) for o, n in funcs if (int(fcheck.NAME.match(n).group(1), 16),
                        int(fcheck.NAME.match(n).group(2), 16) - o) == key)
        mo = fcheck.NAME.match(n0)
        fseg, foff = int(mo.group(1), 16), int(mo.group(2), 16)
    else:                                               # main...: the whole code at @at
        mo = re.search(r'@at\s+([0-9a-fA-F]{4}):([0-9a-fA-F]{4})', text)
        if not mo:
            raise SystemExit('%s has no public f_SSSS_OOOO function and no @at' % a.src)
        fseg, foff = int(mo.group(1), 16), int(mo.group(2), 16)
        funcs = sorted((off, n) for n, (s, off) in mod.publics.items() if s == si) or [(0, '_code')]
        if funcs[0][0] != 0:
            funcs.insert(0, (0, '_code'))
        off0 = 0
    w = m.where(fseg, foff)
    in_ovl = w[0] == 'ovl'
    img = m.e.stubs[w[1]].code if in_ovl else m.e.image
    base0 = (w[2] if in_ovl else w[1]) - off0          # image/overlay address of object offset 0
    frame0 = 0 if in_ovl else w[2].frame * 16           # what code offsets are relative to
    code_seg = (w[1] if in_ovl else w[2].index)         # overlay number / root segment index
    dg_lin = ck.linear(*data_at) if data_at else None

    def word(a_):
        return struct.unpack_from('<H', img, a_)[0]

    def owner(o):
        for k, (fo, n) in enumerate(funcs):
            end = funcs[k + 1][0] if k + 1 < len(funcs) else len(code)
            if fo <= o < end:
                return n.lstrip('_')
        return None

    bad, counts = [], {}

    def report(ok, kind, o, what, exp, got):
        counts[kind] = counts.get(kind, 0) + 1
        line = '%-5s %-6s %-14s +%04x %-28s want %s orig %s' % (
            'ok' if ok else 'BAD', kind, owner(o), o - off0, what[:28], exp, got)
        if not ok:
            bad.append(line)
        if a.v or not ok:
            print(line)

    def same_code_seg(rt_seg, rt_off):
        t = m.where(rt_seg, rt_off)
        return t[0] == w[0] and (t[1] if in_ovl else t[2].index) == code_seg

    def check_near_call(o, target_img):
        """A far call within the segment, which TLINK makes 90 0E E8 rel16."""
        p = base0 + o - 1
        if img[p:p + 3] != b'\x90\x0e\xe8':
            return False, 'call (90 0e e8)', img[p:p + 3].hex(' ')
        rel = struct.unpack_from('<h', img, p + 3)[0]
        dest = (p + 5 + rel) & 0xffff if in_ovl else p + 5 + rel
        return dest == target_img, '%05x' % target_img, '%05x' % dest

    for f in mod.fixups:
        seg_i, o, loc, _, frame, tgt, disp = f
        if seg_i != si:
            continue
        who = owner(o)
        if who is None or (a.only and who not in a.only and 'f_' + who not in a.only):
            continue
        kind, ti = tgt
        iw = struct.unpack_from('<H', code, o)[0] if loc in ('off16', 'seg16', 'ptr32') else 0
        site = base0 + o
        if kind == 'ext':
            name = mod.externs[ti]
            if re.match(r'^_?F[IJ][A-Z]RQQ$', name) or name.lstrip('_') in ('__turboFloat',):
                continue                                  # the 8087 emulator's absolute fixups
            rt = build.resolve(name, symtab)
            if rt is None:                                # a library's own data (_ctype...)
                counts['unresolved'] = counts.get('unresolved', 0) + 1
                if a.v:
                    print('skip  ?      %-14s +%04x %s: not in --symbols/--names' % (who, o - off0, name))
                continue
            ts, to = rt
            st = ck.stub_entry(ts, to) if loc in ('off16', 'seg16') else None
            if st and st != 'not an entry':               # the halves of a far call (__emit__)
                sidx, sframe, soff = st
                exp = soff if loc == 'off16' else (sidx * 8 if in_ovl else sframe)
                report(exp == word(site), 'call', o, name, '%04x' % exp, '%04x' % word(site))
            elif loc == 'off16':
                exp = (to + disp + iw) & 0xffff
                report(exp == word(site), 'data', o, name, '%04x' % exp, '%04x' % word(site))
            elif loc == 'seg16':
                exp = ck.seg_word(ts, to, in_ovl)
                report(exp == word(site), 'seg', o, name, '%04x' % (exp or 0), '%04x' % word(site))
            elif loc == 'ptr32':
                is_call = code[o - 1] in (0x9a, 0xea) if o else False
                if is_call and same_code_seg(ts, to):
                    tw = m.where(ts, to)
                    target_img = tw[2] if in_ovl else tw[1]
                    ok, exp, got = check_near_call(o, target_img)
                    report(ok, 'call', o, name, exp, got)
                    continue
                st = ck.stub_entry(ts, to)
                if st == 'not an entry':
                    report(False, 'call', o, name, 'a stub entry', '-')
                    continue
                if st:
                    sidx, sframe, soff = st
                    eo, es = soff, (sidx * 8 if in_ovl else sframe)
                else:
                    eo, es = (to + disp + iw) & 0xffff, ck.seg_word(ts, to, in_ovl)
                got = (word(site), word(site + 2))
                report(got == (eo, es), 'call' if is_call else 'ptr', o, name,
                       '%04x:%04x' % (es or 0, eo), '%04x:%04x' % (got[1], got[0]))
            else:
                report(False, '?', o, name, 'off16/seg16/ptr32', loc)
        elif kind == 'seg' and ti == di:
            t = (disp + iw) & 0xffff
            if dg_lin is None:
                report(False, 'lit', o, 'literal +%04x' % t, '@data or --data', '-')
                continue
            if loc == 'off16':
                exp = (data_at[1] + t) & 0xffff
                report(exp == word(site), 'lit', o, 'literal +%04x' % t, '%04x' % exp, '%04x' % word(site))
            elif loc == 'seg16':
                exp = ck.seg_word(*data_at, in_ovl)
                report(exp == word(site), 'seg', o, '_DATA', '%04x' % exp, '%04x' % word(site))
            else:
                report(False, '?', o, '_DATA', 'off16/seg16', loc)
        elif kind == 'seg' and ti == si:
            t = (disp + iw) & 0xffff
            target_img = base0 + t
            if loc == 'ptr32' and o and code[o - 1] in (0x9a, 0xea):
                ok, exp, got = check_near_call(o, target_img)
                report(ok, 'call', o, 'own +%04x' % t, exp, got)
            elif loc == 'off16':
                exp = (target_img - frame0) & 0xffff
                report(exp == word(site), 'code', o, 'own +%04x' % t, '%04x' % exp, '%04x' % word(site))
            else:
                report(False, '?', o, 'own code', 'off16/ptr32 call', loc)
        elif kind == 'grp' and loc == 'seg16' and mod.grps[ti - 1][0] == 'DGROUP':
            dg = ck.dgroup
            exp = dg.index * 8 if in_ovl else dg.frame
            report(exp == word(site), 'seg', o, 'DGROUP', '%04x' % exp, '%04x' % word(site))
        else:
            report(False, '?', o, repr(tgt), '-', loc)

    # the 8087 operations: INT 34h-3Bh xx in the original, 9B D8-DF xx in the object
    nfp = 0
    for k, (fo, n) in enumerate(funcs):
        if a.only and n.lstrip('_') not in a.only and n not in a.only:
            continue
        end = funcs[k + 1][0] if k + 1 < len(funcs) else len(code)
        for i in range(fo, end - 1):
            b0, b1 = img[base0 + i], img[base0 + i + 1]
            # the same bytes in the object: an operand that happens to read CD 3x, not an INT
            if b0 == 0xcd and 0x34 <= b1 <= 0x3b and (code[i], code[i + 1]) != (b0, b1):
                nfp += 1
                if not (code[i] == 0x9b and code[i + 1] == 0xd8 + b1 - 0x34):
                    report(False, 'fpu', i, 'int %02xh' % b1, '9b %02x' % (0xd8 + b1 - 0x34),
                           code[i:i + 2].hex(' '))

    # the file's data, byte for byte (the bytes its own fixups fill in left out)
    data_note = ''
    if data and dg_lin is not None and not a.only:
        skip = set()
        for f in mod.fixups:
            if f[0] == di:
                skip.update(range(f[1], f[1] + fcheck.SIZE.get(f[2], 2)))
        orig = m.e.image[dg_lin:dg_lin + len(data)]
        diff = [i for i in range(len(data)) if i not in skip and (i >= len(orig) or orig[i] != data[i])]
        if diff:
            i = diff[0]
            bad.append('BAD   _DATA  first difference at +%04x (%04x:%04x): mine %s orig %s' % (
                i, data_at[0], data_at[1] + i, data[i:i + 12].hex(' '), orig[i:i + 12].hex(' ')))
            print(bad[-1])
        data_note = (', _DATA %d of %d bytes differ' % (len(diff), len(data)) if diff else
                     ', _DATA %d bytes identical' % len(data))
    print('%d fixups checked (%s), %d 8087 operations%s: %d bad' % (
        sum(counts.values()), ', '.join('%s %d' % kv for kv in sorted(counts.items())), nfp,
        data_note, len(bad)))
    return 1 if bad else 0


if __name__ == '__main__':
    sys.exit(main())
