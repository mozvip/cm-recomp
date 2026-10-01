#!/usr/bin/env python3
"""Disassemble an original function for decompiling, with symbolic references.

  disasm.py GAME.EXE SSSS:OOOO [--len N] [--funcs gen/funcs.h]

SSSS:OOOO is the runtime address (tools/recomp.py numbering). The function ends at the
next known function start (from --funcs, default games/<game>/gen/funcs.h next to the
exe) or after N bytes. References are shown as the names a C file uses:
    f_SSSS_OOOO   far calls (root, overlay entries, and same-segment calls TLINK made near)
    d_SSSS_OOOO   DS-relative data (DGROUP)
    seg XX        a segment value (e.g. far data: then the offset is in the operand)
"""
import argparse, os, re, struct, sys
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
sys.path.insert(0, os.path.dirname(HERE))
import mkblobs, x86

RT = 0x1000

ARITH = ['fadd', 'fmul', 'fcom', 'fcomp', 'fsub', 'fsubr', 'fdiv', 'fdivr']
FPU_MEM = {0: ARITH, 1: ['fld', '?', 'fst', 'fstp', 'fldenv', 'fldcw', 'fnstenv', 'fnstcw'],
           2: ['fi' + a[1:] for a in ARITH], 3: ['fild', '?', 'fist', 'fistp', '?', 'fld', '?', 'fstp'],
           4: ARITH, 5: ['fld', '?', 'fst', 'fstp', 'frstor', '?', 'fnsave', 'fnstsw'],
           6: ['fi' + a[1:] for a in ARITH], 7: ['fild', '?', 'fist', 'fistp', 'fbld', 'fild', 'fbstp', 'fistp']}
FPU_MEMTYPE = {0: 'float', 1: 'float', 2: 'long', 3: 'long', 4: 'double', 5: 'double', 6: 'int', 7: 'int'}
D9_REG = {4: ['fchs', 'fabs', '?', '?', 'ftst', 'fxam', '?', '?'],
          5: ['fld1', 'fldl2t', 'fldl2e', 'fldpi', 'fldlg2', 'fldln2', 'fldz', '?'],
          6: ['f2xm1', 'fyl2x', 'fptan', 'fpatan', 'fxtract', 'fprem1', 'fdecstp', 'fincstp'],
          7: ['fprem', 'fyl2xp1', 'fsqrt', 'fsincos', 'frndint', 'fscale', 'fsin', 'fcos']}


def fpu_text(i):
    """8087 mnemonic of a decoded instruction (also the INT 34h-3Dh emulator forms)."""
    esc, mod, reg, rm = i.fpu
    if mod != 3:
        t = FPU_MEMTYPE[esc]
        if (esc, reg) in ((3, 5), (3, 7)):
            t = 'tbyte'
        if (esc, reg) in ((7, 5), (7, 7)):
            t = 'qword'
        return '%s %s %s' % (FPU_MEM[esc][reg], t, i.ops[0] if i.ops else '')
    st = 'st(%d)' % rm
    if esc == 0:
        return '%s st, %s' % (ARITH[reg], st)
    if esc == 1:
        if reg in (0, 1):
            return ('fld ', 'fxch ')[reg] + st
        return D9_REG[reg][rm] if reg in D9_REG else 'fnop'
    if esc == 3 and reg == 4:
        return {2: 'fclex', 3: 'finit'}.get(rm, '?')
    if esc == 4:
        return '%s %s, st' % (['fadd', 'fmul', 'fcom', 'fcomp', 'fsubr', 'fsub', 'fdivr', 'fdiv'][reg], st)
    if esc == 5:
        return {0: 'ffree', 2: 'fst', 3: 'fstp', 4: 'fucom', 5: 'fucomp'}.get(reg, '?') + ' ' + st
    if esc == 6:
        if reg == 3 and rm == 1:
            return 'fcompp'
        return '%s %s, st' % (['faddp', 'fmulp', '?', '?', 'fsubrp', 'fsubp', 'fdivrp', 'fdivp'][reg], st)
    if esc == 7 and reg == 4:
        return 'fnstsw ax'
    return '?'


def func_starts(path):
    out = []
    if path and os.path.exists(path):
        for m in re.finditer(r'\bf_([0-9a-f]{4})_([0-9a-f]{4})\(void\)', open(path).read()):
            out.append((int(m.group(1), 16), int(m.group(2), 16)))
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('exe')
    ap.add_argument('addr')
    ap.add_argument('--len', type=lambda v: int(v, 0))
    ap.add_argument('--funcs')
    a = ap.parse_args()
    s, o = (int(x, 16) for x in a.addr.split(':'))
    m = mkblobs.Model(a.exe)
    funcs = a.funcs or os.path.join(os.path.dirname(os.path.abspath(a.exe)), 'gen', 'funcs.h')
    hi, rows = listing(m, s, o, a.len, func_starts(funcs))
    print('%04x:%04x  %d bytes%s' % (s, o, hi - o, '' if hi is not None else ' (end unknown, give --len)'))
    for ip, raw, txt, note, _ in rows:
        print('  %04x  %-20s %-34s %s' % (ip, raw.hex(' '), txt, ('; ' + ', '.join(note)) if note else ''))


def listing(m, s, o, length=None, starts=()):
    """Disassembly of runtime s:o, for `length` bytes or up to the next function start:
    (end, [(ip, bytes, text, notes, insn)]). Notes name what the code refers to:
    f_SSSS_OOOO calls, d_SSSS_OOOO DGROUP data, 'seg SSSS (NAME)' segment values."""
    w = m.where(s, o)
    dgroup_rt = m.e.dgroup.frame + RT
    # everything below is in offsets of the runtime segment s (what jump targets show)
    if w[0] == 'root':
        seg = w[2]
        fb = seg.frame * 16
        buf = bytes(m.e.image[fb:fb + 0x10000])
        frame = seg.frame
        piece_fx = []
        for u in m.units:
            for p in u.pieces:
                if p.seg is seg:
                    for f in p.fixups + p.extras:
                        g = mkblobs.Fx(f.at - fb, f.loc, f.tgt, f.disp - fb if f.call else f.disp, f.frame, f.rel, f.call)
                        piece_fx.append(g)
        limit = seg.end - fb
        ov_rt = None
    else:
        k = w[1]
        st = m.e.stubs[k]
        buf = st.code
        frame = None
        piece_fx = m.ovl_units[k].pieces[0].fixups + m.ovl_units[k].pieces[0].extras
        limit = st.codesize
        ov_rt = m.overlay_rt_seg(st)
    lo = o
    lin = lambda rs, ro: (rs * 16 + ro) - s * 16
    here = o
    nxt = sorted(x for x in (lin(rs, ro) for rs, ro in starts) if here < x <= limit)
    hi = lo + length if length else (nxt[0] if nxt else min(limit, lo + 0x200))
    known = bool(length or nxt)
    fx = {}
    for f in piece_fx:
        for b in range(f.at - (1 if f.call else 0), f.at + mkblobs.LOCSIZE[f.loc]):
            fx[b] = f
    rt_seg = (frame + RT) if frame is not None else ov_rt
    seg_names = {}
    for sg in m.segs:
        seg_names['__seg%02d' % sg.index] = sg
    rows = []
    ip = lo
    while ip < hi:
        try:
            i = x86.decode(buf, ip)
            n, txt = i.len, repr(i).split(' ', 1)[1]
            if i.fpu:
                txt = fpu_text(i)
            elif i.op == 'fwait':
                txt = 'fwait'
        except Exception:
            i, n, txt = None, 1, 'db %02x' % buf[ip]
        note = []
        f = next((fx[b] for b in range(ip, ip + n) if b in fx), None)
        raw = bytes(buf[ip:ip + n])
        if f is not None:
            if f.call:
                if ip == f.at - 1:
                    note.append('f_%04x_%04x (same module, defined AFTER this function: far call '
                                'through a prototype, made near by TLINK)' % (rt_seg, f.disp & 0xffff))
            elif f.tgt[0] == 'ext' and f.tgt[1].startswith('_f_'):
                note.append(f.tgt[1][1:])
            elif f.tgt[0] == 'ext' and f.tgt[1] in seg_names:
                sg = seg_names[f.tgt[1]]
                if f.loc == 'seg16' and raw[:1] == b'\x9a':
                    off = struct.unpack('<H', raw[1:3])[0]
                    note.append('f_%04x_%04x' % (sg.frame + RT, off))
                else:
                    note.append('seg %04x (%s)' % (sg.frame + RT, sg.name))
            elif f.tgt[0] == 'seg':
                sg = m.segs[f.tgt[1]]
                note.append('seg %04x (%s)' % (sg.frame + RT, sg.name))
        if i is not None and raw[:1] == b'\xe8' and not f and ip > 0 and buf[ip - 1] == 0x0e:
            note.append('f_%04x_%04x (same file, defined BEFORE this function)' % (rt_seg, i.target))
        if i is not None and not note:
            for op in i.ops:
                if getattr(op, 'kind', None) == 'mem' and not getattr(op, 'seg', None) \
                        and 'bp' not in ''.join(op.base or ()):
                    note.append('d_%04x_%04x' % (dgroup_rt, (op.disp or 0) & 0xffff))
                    break
        rows.append((ip, raw, txt, note, i))
        ip += n
    return hi, rows


if __name__ == '__main__':
    main()
