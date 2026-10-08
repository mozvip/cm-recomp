#!/usr/bin/env python3
"""Compile a C (or assembly) file and line up one function's code with the original's.

  fdiff.py FILE.C [--func NAME] [--json] [--as PATH] [--exe GAME.EXE] [--cc bc31|bc30|bc402] [--flags "..."]

The game's executable, compiler and options come from the decomp/Makefile above FILE
(or above --as PATH, when FILE is a copy of it elsewhere, e.g. an editor's unsaved text)
and the file's own @flags, as in the build. A function is f_SSSS_OOOO or a name of
names.txt / symbols.txt. Without --func, the first function that differs (or the first
one) is shown.

The two instruction lists are aligned on their shape (the mnemonic and operands with the
numbers left out), then each pair is classed:
  same     the bytes are equal, leaving out the ones the linker fills in; a jump is the
           same if it goes to the instructions paired with each other
  operand  the same shape, other numbers (a stack offset, a constant...)
  diff     another instruction
  del/ins  only in the original / only in the compiled code
Whether the function matches is decided as fcheck.py does, byte by byte in place.
Each compiled instruction has the source line it comes from, each function the range of
its lines: from a second compile with -y (TASM /zd). -y can change the code (BCC then
merges less identical code); the lines are then carried over by lining up the two codes
("lines": "aligned"), and an instruction -y does not make has none.
--json prints all of it for tools (the VS Code extension in tools/vscode-decomp), --all
with the rows of every function.
"""
import argparse, bisect, difflib, glob, json, os, re, sys
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
sys.path.insert(0, os.path.dirname(HERE))
import build, fcheck, mkblobs, x86

FPU_MEM = ['fadd fmul fcom fcomp fsub fsubr fdiv fdivr', 'fld ? fst fstp fldenv fldcw fstenv fstcw',
           'fiadd fimul ficom ficomp fisub fisubr fidiv fidivr', 'fild ? fist fistp ? fld ? fstp',
           'fadd fmul fcom fcomp fsub fsubr fdiv fdivr', 'fld ? fst fstp frstor ? fsave fstsw',
           'fiadd fimul ficom ficomp fisub fisubr fidiv fidivr', 'fild ? fist fistp fbld fild fbstp fistp']
FPU_REG = {0: 'fadd fmul fcom fcomp fsub fsubr fdiv fdivr', 4: 'fadd fmul fcom fcomp fsubr fsub fdivr fdiv',
           5: 'ffree ? fst fstp fucom fucomp ? ?', 6: 'faddp fmulp ? fcompp fsubrp fsubp fdivrp fdivp'}
FPU_D9 = {(0, None): 'fld', (1, None): 'fxch', (2, 0): 'fnop', (4, 0): 'fchs', (4, 1): 'fabs', (4, 4): 'ftst',
          (4, 5): 'fxam', (5, 0): 'fld1', (5, 1): 'fldl2t', (5, 2): 'fldl2e', (5, 3): 'fldpi', (5, 4): 'fldlg2',
          (5, 5): 'fldln2', (5, 6): 'fldz'}
FPU_D9.update({(6, k): n for k, n in enumerate('f2xm1 fyl2x fptan fpatan fxtract fprem1 fdecstp fincstp'.split())})
FPU_D9.update({(7, k): n for k, n in enumerate('fprem fyl2xp1 fsqrt fsincos frndint fscale fsin fcos'.split())})
# the 8087 emulator fixups (Borland's EMU.LIB): TLINK adds these to an 8087 opcode's bytes,
# turning them into the INT 34h-3Dh the emulator catches
EMU = {'FIARQQ': 0xfe32, 'FJARQQ': 0x4000, 'FICRQQ': 0x0e32, 'FJCRQQ': 0xc000, 'FIDRQQ': 0x5c32,
       'FIERQQ': 0x1632, 'FISRQQ': 0x0632, 'FJSRQQ': 0x8000, 'FIWRQQ': 0xa23d}
NUM = re.compile(r'\b(0x[0-9a-f]+|[0-9a-f]{4}|\d+)\b')


def game_config(src, where=None):
    """(exe, cc, flags, {name: (seg, off)}) from the nearest decomp/Makefile above where
    (default: src), src's @flags and the game's names.txt and symbols.txt."""
    d = os.path.dirname(os.path.abspath(where or src))
    while d != '/':
        mk = os.path.join(d, 'Makefile')
        if os.path.exists(mk) and 'EXE_NAME' in open(mk).read():
            break
        d = os.path.dirname(d)
    else:
        raise SystemExit('no decomp/Makefile above ' + src)
    var = dict(re.findall(r'^(\w+)\s*:?=\s*(.*?)\s*$', open(mk).read(), re.M))
    game = os.path.dirname(d)
    exe = [p for p in glob.glob(os.path.join(game, '*')) if os.path.basename(p).lower() == var['EXE_NAME'].lower()]
    if not exe:
        raise SystemExit('%s not found in %s' % (var['EXE_NAME'], game))
    flags = var.get('BCCFLAGS', '-ml -O1 -k -Ol')
    fl = re.search(r'@flags\s+([^*\n]*)', open(src, errors='replace').read())
    if fl and not src.lower().endswith('.asm'):
        flags += ' ' + fl.group(1).strip()
    names = build.read_names(os.path.join(game, 'names.txt'))
    names.update(build.read_names(os.path.join(d, var.get('SYMBOLS', 'symbols.txt'))))
    return exe[0], var.get('CC_TC', 'bc31'), flags, names


def address(public, names):
    """The original's SEG:OFS of a public: f_SSSS_OOOO or a known name, else None."""
    m = fcheck.NAME.match(public)
    if m:
        return int(m.group(1), 16), int(m.group(2), 16)
    return names.get(public[1:] if public.startswith('_') else public) or names.get(public)


def line_map(mod, si, code):
    """{module code offset of an instruction: its source line}, and how they were found."""
    own = sorted((off, line) for s, off, line in mod.lines if s == si)
    how = 'exact'
    if not own:
        ym = getattr(mod, 'lines_from', None)
        ysi = ym and next((i for i, sg in enumerate(ym.segs, 1) if sg[1] == 'CODE' and sg[2] > 0), None)
        ylines = sorted((off, line) for s, off, line in ym.lines if s == ysi) if ysi else []
        if not ylines:
            return {}, None
        # the -y code's lines, carried over to the instructions lined up with its own
        a, b = disasm(code, ()), disasm(bytes(ym.data[ysi]), ())
        sm = difflib.SequenceMatcher(None, [shape(i) for i in a], [shape(i) for i in b], autojunk=False)
        pairs = {}
        for op, a0, a1, b0, b1 in sm.get_opcodes():
            if op in ('equal', 'replace'):
                pairs.update((x['off'], y['off']) for x, y in zip(a[a0:a1], b[b0:b1]))
        keys = [o for o, _ in ylines]
        out = {}
        for o, yo in pairs.items():
            k = bisect.bisect_right(keys, yo)
            if k:
                out[o] = ylines[k - 1][1]
        return out, 'aligned'
    keys = [o for o, _ in own]
    out = {}
    for i in disasm(code, ()):
        k = bisect.bisect_right(keys, i['off'])
        if k:
            out[i['off']] = own[k - 1][1]
    return out, how

def fpu_name(esc, mod, reg, rm):
    if mod != 3:
        return FPU_MEM[esc].split()[reg]
    if esc == 1:
        return FPU_D9.get((reg, None if reg < 2 else rm), '?')
    if esc == 2 and reg == 5 and rm == 1:
        return 'fucompp'
    if esc == 3:
        return {2: 'fclex', 3: 'finit'}.get(rm, '?') if reg == 4 else '?'
    if esc == 7:
        return 'fstsw ax' if reg == 4 and rm == 0 else '?'
    n = FPU_REG.get(esc, '').split()
    return '%s st(%d)' % (n[reg] if reg < len(n) else '?', rm)


def insn_text(i):
    ops = ', '.join(repr(o) for o in i.ops)
    op = fpu_name(*i.fpu) if i.fpu else i.op
    t = ' ->%04x' % i.target if i.target is not None else ' ->%04x:%04x' % i.far if i.far is not None else ''
    return ('rep%s ' % i.rep if i.rep else '') + op + (' ' + ops if ops else '') + t


def apply_emulator(mod, si, code, fx):
    """The code with the 8087 emulator fixups applied, and the offsets left for the linker."""
    code, fx = bytearray(code), set(fx)
    for f in mod.fixups:
        if f[0] != si or f[5][0] != 'ext':
            continue
        name = mod.externs[f[5][1]].lstrip('_')
        if name not in EMU:
            continue
        v, at = EMU[name] + f[6], f[1]
        if f[2] == 'off16':
            w = (code[at] | code[at + 1] << 8) + v
            code[at], code[at + 1] = w & 0xff, (w >> 8) & 0xff
            fx -= {at, at + 1}
        elif f[2] in ('off8', 'hi8'):
            code[at] = (code[at] + (v if f[2] == 'off8' else v >> 8)) & 0xff
            fx.discard(at)
    return bytes(code), fx


def disasm(code, mask, selfcalls=(), base=0):
    """The instructions of a function's code. A far call TLINK made near (90 0E E8) is one
    instruction, as is a compiled far call into the module's own segment (an offset in
    selfcalls); both read callf ->OFFSET (in the function: base is its offset in the module)."""
    out, ip = [], 0
    while ip < len(code):
        try:
            if code[ip:ip + 3] == b'\x90\x0e\xe8' and ip + 5 <= len(code):
                n, tgt = 5, (ip + 5 + (code[ip + 3] | code[ip + 4] << 8)) & 0xffff
                text = 'callf ->%04x' % tgt
            elif code[ip] == 0x9a and ip + 1 in selfcalls and ip + 5 <= len(code):
                n, tgt = 5, ((code[ip + 1] | code[ip + 2] << 8) - base) & 0xffff
                text = 'callf ->%04x' % tgt
            else:
                i = x86.decode(code, ip)
                n = i.len
                text = insn_text(i)
                tgt = i.target
        except Exception:
            n, text, tgt = 1, 'db %02x' % code[ip], None
        out.append({'off': ip, 'len': n, 'bytes': code[ip:ip + n].hex(' '), 'text': text, 'target': tgt,
                    'reloc': any(ip + k in mask for k in range(n))})
        ip += n
    return out


def shape(ins):
    return NUM.sub('#', re.sub(r' ->[0-9a-f:]+$', '', ins['text']))


def align(t, c):
    """[(target insn | None, current insn | None)] in order."""
    rows = []
    sm = difflib.SequenceMatcher(None, [shape(i) for i in t], [shape(i) for i in c], autojunk=False)
    for op, a0, a1, b0, b1 in sm.get_opcodes():
        if op == 'equal':
            rows += zip(t[a0:a1], c[b0:b1])
            continue
        n = min(a1 - a0, b1 - b0) if op == 'replace' else 0
        rows += zip(t[a0:a0 + n], c[b0:b0 + n])
        rows += [(x, None) for x in t[a0 + n:a1]] + [(None, y) for y in c[b0 + n:b1]]
    return rows


def classify(rows, tcode, ccode, tmask, cmask):
    c2t = {y['off']: x['off'] for x, y in rows if x and y}
    out = []
    for x, y in rows:
        if x is None or y is None:
            kind = 'del' if y is None else 'ins'
        else:
            same = x['len'] == y['len'] and all(
                tcode[x['off'] + k] == ccode[y['off'] + k] or x['off'] + k in tmask or y['off'] + k in cmask
                for k in range(x['len']))
            if not same and x['target'] is not None and y['target'] is not None:
                same = shape(x) == shape(y) and c2t.get(y['target']) == x['target']
            kind = 'same' if same else 'operand' if shape(x) == shape(y) else 'diff'
        out.append({'kind': kind, 't': x, 'c': y})
    return out


def run(src, func=None, exe=None, cc=None, flags=None, where=None, every=False):
    gexe, gcc, gflags, names = game_config(src, where)
    exe, cc, flags = exe or gexe, cc or gcc, flags or gflags
    res = {'src': os.path.abspath(where or src), 'exe': exe, 'cc': cc, 'flags': flags, 'functions': []}
    mod, errs = fcheck.compile_obj(src, cc, flags, lines=True)
    res['messages'] = errs
    if mod is None:
        res['ok'] = False
        return res
    res['ok'] = True
    m = mkblobs.Model(exe)
    si, code, fx, funcs = fcheck.masked_code(mod)
    code, fx = apply_emulator(mod, si, code, fx)
    selfcalls = {f[1] for f in mod.fixups if f[0] == si and f[2] == 'ptr32' and f[5] == ('seg', si)}
    lines, res['lines'] = line_map(mod, si, code)
    chosen = first = None
    for k, (off, n) in enumerate(funcs):
        at = address(n, names)
        if not at:
            continue
        end = funcs[k + 1][0] if k + 1 < len(funcs) else len(code)
        w = m.where(*at)
        if w[0] == 'root':
            img, base, tlen, tmask = m.e.image, w[1], end - off, set()
        else:
            st = m.e.stubs[w[1]]
            img, base = st.code, w[2]
            tlen = min([e for e in st.entries if e > base] + [st.codesize]) - base
            tmask = {r + j - base for r in st.fixups for j in (0, 1) if base <= r + j < base + tlen}
        orig = bytes(img[base:base + max(tlen, end - off)])
        diff = [i for i in range(end - off) if off + i not in fx and (i >= len(orig) or orig[i] != code[off + i])]
        name = n.lstrip('_')
        f = {'name': name, 'len': end - off, 'target_len': tlen,
             'match': not diff and tlen == end - off, 'first_diff': diff[0] if diff else None,
             'diff_bytes': len(diff), 'at': '%04x:%04x' % at}
        ls = [l for o, l in lines.items() if off <= o < end]
        if ls:
            f['first_line'], f['last_line'] = min(ls), max(ls)
        res['functions'].append(f)
        cand = (f, off, end, orig[:tlen], tmask)
        first = first or cand
        if (func and name == func) or (not func and chosen is None and not f['match']):
            chosen = cand
        if every:
            f['rows'], f['score'] = compare(cand, code, fx, selfcalls, lines)
    chosen = chosen or (None if func else first)
    if chosen:
        res['func'] = chosen[0]['name']
        res['rows'], res['score'] = (chosen[0]['rows'], chosen[0]['score']) if every else compare(chosen, code, fx, selfcalls, lines)
    return res


def compare(cand, code, fx, selfcalls, lines):
    """The aligned rows of one function and how many of them differ."""
    f, off, end, orig, tmask = cand
    cc_code = code[off:end]
    cmask = {i - off for i in fx if off <= i < end}
    c = disasm(cc_code, cmask, {i - off for i in selfcalls if off <= i < end}, off)
    for i in c:
        i['line'] = lines.get(off + i['off'])
    rows = classify(align(disasm(orig, tmask), c), orig, cc_code, tmask, cmask)
    return rows, sum(r['kind'] != 'same' for r in rows)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('src')
    ap.add_argument('--func')
    ap.add_argument('--as', dest='where')
    ap.add_argument('--exe')
    ap.add_argument('--cc')
    ap.add_argument('--flags')
    ap.add_argument('--json', action='store_true')
    ap.add_argument('--all', action='store_true', help='with --json: the rows of every function')
    a = ap.parse_args()
    res = run(a.src, a.func, a.exe, a.cc, a.flags, a.where, a.all)
    if a.json:
        json.dump(res, sys.stdout)
        return 0
    print('\n'.join(res['messages']))
    for f in res['functions']:
        print('  %s %-14s %5d bytes (original %d)%s' % ('ok  ' if f['match'] else 'DIFF', f['name'], f['len'],
              f['target_len'], ', first at +%04x' % f['first_diff'] if f['first_diff'] is not None else ''))
    mark = {'same': ' ', 'operand': '~', 'diff': '*', 'del': '-', 'ins': '+'}
    for r in res.get('rows', []):
        x, y = r['t'] or {}, r['c'] or {}
        print(' %s %4s %-30s| %4s %-30s %s' % (mark[r['kind']], '%04x' % x['off'] if x else '', x.get('text', '')[:30],
              '%04x' % y['off'] if y else '', y.get('text', '')[:30], y.get('line') or ''))
    if 'rows' in res:
        print('%s: %d of %d lines differ' % (res['func'], res['score'], len(res['rows'])))
    return 0


if __name__ == '__main__':
    sys.exit(main())
