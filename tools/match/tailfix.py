#!/usr/bin/env python3
"""Search for the source form that makes BCC keep the copies of identical branch endings
(tail merging / cross-jumping) that the original kept.

  tailfix.py GAME.EXE SSSS:OOOO-END FILE.C [--cc bc31|bc30|bc4] [--flags "..."]
             [score | zero | goto | greedy [N] | groups] [--out OUT.C] [--jobs 6]

FILE.C is a standalone file (compiles on its own) that defines f_SSSS_OOOO, whose original
code runs from OOOO to END. A variant's score is dd-style: the number of instructions that
differ from the original (addresses ignored) plus the jumps that go to the wrong place;
0 means the code is byte-identical (fixup bytes aside, as fcheck).

  score    the file as it is
  groups   the statements that occur more than once in the function (the candidate tails)
  zero     one `0;` after each statement of the function, one place per variant
  goto     each copy of a repeated statement replaced by `goto Tn;` to another copy
  greedy   up to N rounds (default 8): try every single `0;` insertion and every
           goto-to-first-copy, keep the best, repeat until nothing improves; writes the
           best source to --out (default FILE.tailfix.c)

Found with CM1's f_8352_46de (docs/matching.md, "merged tails"): try the file with -y
in --flags first, which changes BCC 3.x's cross-jumping choices by itself.
"""
import argparse, concurrent.futures, difflib, io, os, re, sys, tempfile
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
sys.path.insert(0, os.path.dirname(HERE))
import fcheck, mkblobs, build

NUM = re.compile(r'0x[0-9a-f]+')
STMT = re.compile(r'^(\s*)(?:\{\s*0;\s*)?(?:T\d+:\s*)?([^{};]+;)(\s*\})?\s*$')


class Target:
    def __init__(self, exe, seg, off, end, cc, flags):
        m = mkblobs.Model(exe)
        w = m.where(seg, off)
        img = m.e.image if w[0] == 'root' else m.e.stubs[w[1]].code
        base = w[1] if w[0] == 'root' else w[2]
        self.orig = bytes(img[base:base + end - off])
        self.name = '_f_%04x_%04x' % (seg, off)
        self.cc, self.flags = cc, flags
        self.a = norm(self.orig)

    def score(self, text, workdir):
        """(score, size) of a source text, or (None, error) when it does not compile."""
        fd, path = tempfile.mkstemp(suffix='.c', dir=workdir)
        try:
            os.write(fd, text.encode()); os.close(fd)
            mod, errs = fcheck.compile_obj(path, self.cc, self.flags)
        finally:
            os.unlink(path)
        if mod is None:
            return None, ' / '.join(e for e in errs if 'rror' in e)[:160]
        si, code, fx, funcs = fcheck.masked_code(mod)
        starts = [o for o, n in funcs if n == self.name]
        if not starts:
            return None, '%s not defined' % self.name
        off = starts[0]
        nxt = [o for o, n in funcs if o > off]
        code = code[off:nxt[0] if nxt else len(code)]
        if len(code) == len(self.orig) and all(code[i] == self.orig[i] for i in range(len(code)) if off + i not in fx):
            return 0, len(code)
        b = norm(code)
        sm = difflib.SequenceMatcher(None, [x[1] for x in self.a], [x[1] for x in b], autojunk=False)
        ops = sm.get_opcodes()
        mp = {}
        for tag, i1, i2, j1, j2 in ops:
            if tag == 'equal':
                mp.update(zip(range(i1, i2), range(j1, j2)))
        bad = sum(1 for i, j in mp.items() if self.a[i][2] is not None and jtarget(mp, self.a[i][2]) != b[j][2])
        nd = sum(max(i2 - i1, j2 - j1) for t, i1, i2, j1, j2 in ops if t != 'equal')
        return nd + bad, len(code)


def norm(code):
    """[(offset, text with numbers masked, index of the jump target or None)]"""
    d = build.disasm(code, 0, 0, len(code))
    ins = [x for x in d if x[2].split(' ')[0] not in ('fwait', 'nop')]
    idx = {x[0]: k for k, x in enumerate(ins)}
    out = []
    for x in ins:
        t = x[2]
        mo = re.search(r'->([0-9a-f]+)$', t)
        tgt = None
        if mo and ':' not in t[mo.start():]:
            tgt = idx.get(int(mo.group(1), 16), '?')
            t = t[:mo.start()]
        t = re.sub(r'->\S+', '', t)
        t = NUM.sub('N', t).replace('+N]', ']')
        out.append((x[0], t, tgt))
    return out


def jtarget(mp, t):
    """the index in our code of the original's jump target t ('?': not an instruction start)"""
    return '?' if t == '?' else mp.get(t)


def func_lines(lines, name):
    start = next(i for i, l in enumerate(lines) if re.match(r'\w[\w\s\*]*\b%s\s*\(' % name, l) and not l.rstrip().endswith(';'))
    depth = 0
    for i in range(start, len(lines)):
        depth += lines[i].count('{') - lines[i].count('}')
        if depth == 0 and i > start and '}' in lines[i]:
            return start, i
    return start, len(lines) - 1


def groups(lines, start, end):
    """statement text -> [line indexes] for the statements that occur twice or more."""
    g = {}
    for i in range(start, end + 1):
        m = STMT.match(lines[i])
        if not m:
            continue
        s = m.group(2).strip()
        if s in ('0;', 'break;', 'return;', 'continue;') or s.startswith(('case ', 'default', 'goto ')):
            continue
        g.setdefault(s, []).append(i)
    return sorted(((s, v) for s, v in g.items() if len(v) > 1), key=lambda kv: -len(kv[1]))


def with_goto(lines, s, src, dst, label):
    t = list(lines)
    t[src] = t[src].replace(s, 'goto %s;' % label, 1)
    if label + ':' not in t[dst]:
        t[dst] = t[dst].replace(s, '%s: %s' % (label, s), 1)
    return t


def zero_variants(lines, start, end, flags):
    for i in range(start + 1, end):
        if lines[i].rstrip().endswith(';') and lines[i].startswith(' '):
            ind = ' ' * (len(lines[i]) - len(lines[i].lstrip()))
            yield ('0; after line %d (%s)' % (i + 1, lines[i].strip()[:40]),
                   '\n'.join(lines[:i + 1] + [ind + '0;'] + lines[i + 1:]))


def goto_variants(lines, start, end, first_only=False):
    for k, (s, v) in enumerate(groups(lines, start, end)):
        label = 'T%d' % k
        for src in v:
            for dst in ([v[0]] if first_only else v):
                if src != dst and 'goto' not in lines[src]:
                    yield ('goto line %d -> %d (%s)' % (src + 1, dst + 1, s[:30]), '\n'.join(with_goto(lines, s, src, dst, label)))


def run(tgt, variants, workdir, jobs, quiet=False):
    res = []
    with concurrent.futures.ThreadPoolExecutor(jobs) as ex:
        futs = {ex.submit(tgt.score, t, workdir): (lab, t) for lab, t in variants}
        for fu in concurrent.futures.as_completed(futs):
            lab, t = futs[fu]
            s, size = fu.result()
            if not quiet:
                print('%5s %6s  %s%s' % (s if s is not None else 'ERR', size if s is not None else '', lab,
                                         '  MATCH' if s == 0 else ('  ' + size if s is None else '')), flush=True)
            if s is not None:
                res.append((s, size, lab, t))
    res.sort(key=lambda r: (r[0], r[1]))
    return res


def show_diff(tgt, src, lines):
    """The differing instructions and the jumps to the wrong place, with the source lines
    (from a compile with -y) around them."""
    mod, errs = fcheck.compile_obj(src, tgt.cc, tgt.flags, lines=True)
    si, code, fx, funcs = fcheck.masked_code(mod)
    off = [o for o, n in funcs if n == tgt.name][0]
    a, b = tgt.a, norm(code[off:])
    sm = difflib.SequenceMatcher(None, [x[1] for x in a], [x[1] for x in b], autojunk=False)
    mp, hot = {}, set()
    for tag, i1, i2, j1, j2 in sm.get_opcodes():
        if tag == 'equal':
            mp.update(zip(range(i1, i2), range(j1, j2)))
            continue
        print('--- %s: original %d-%d | compiled %d-%d' % (tag, i1, i2, j1, j2))
        for i in range(i1, i2):
            print('  orig %4d %04x %s' % (i, a[i][0], a[i][1]))
        for j in range(j1, j2):
            print('  ours %4d %04x %s' % (j, b[j][0], b[j][1])); hot.add(b[j][0])
    for i, j in sorted(mp.items()):
        if a[i][2] is not None and jtarget(mp, a[i][2]) != b[j][2]:
            print('jump at %04x (ours %04x): original -> instruction %s (ours %s), ours -> %s'
                  % (a[i][0], b[j][0], a[i][2], jtarget(mp, a[i][2]), b[j][2]))
            hot.add(b[j][0])
            for k in (mp.get(a[i][2]), b[j][2]):
                if isinstance(k, int):
                    hot.add(b[k][0])
    m2 = getattr(mod, 'lines_from', None) or mod
    seen = set()
    for s, o, l in m2.lines:
        if any(abs((o - off) - h) <= 10 for h in hot) and l not in seen:
            seen.add(l)
            print('  %04x line %d: %s' % (o - off, l, lines[l - 1].strip()[:72]))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('exe')
    ap.add_argument('func', help='SSSS:OOOO-END')
    ap.add_argument('src')
    ap.add_argument('mode', nargs='?', default='score', choices=['score', 'diff', 'groups', 'zero', 'goto', 'greedy'])
    ap.add_argument('rounds', nargs='?', type=int, default=8)
    ap.add_argument('--cc', default='bc31')
    ap.add_argument('--flags')
    ap.add_argument('--out')
    ap.add_argument('--jobs', type=int, default=6)
    a = ap.parse_args()
    mo = re.match(r'([0-9a-f]{4}):([0-9a-f]{4})-([0-9a-f]{4})$', a.func)
    seg, off, end = (int(x, 16) for x in mo.groups())
    tgt = Target(a.exe, seg, off, end, a.cc, a.flags or fcheck.default_flags(a.cc))
    text = open(a.src).read()
    lines = text.split('\n')
    start, last = func_lines(lines, 'f_%04x_%04x' % (seg, off))
    workdir = tempfile.mkdtemp(prefix='tailfix.')
    base, size = tgt.score(text, workdir)
    print('%s: score %s, %s bytes (original %d)' % (os.path.basename(a.src), base, size, len(tgt.orig)))
    if a.mode == 'diff' and base:
        show_diff(tgt, a.src, lines)
    if a.mode in ('score', 'diff') or base == 0:
        return
    if a.mode == 'groups':
        for k, (s, v) in enumerate(groups(lines, start, last)):
            print('T%d: %-50s lines %s' % (k, s[:50], ' '.join(str(i + 1) for i in v)))
        return
    out = a.out or re.sub(r'\.[cC]$', '', a.src) + '.tailfix.c'
    if a.mode in ('zero', 'goto'):
        vs = list(zero_variants(lines, start, last, a.flags) if a.mode == 'zero' else goto_variants(lines, start, last))
        print('%d variants' % len(vs))
        res = run(tgt, vs, workdir, a.jobs)
        print('--- best')
        for s, size, lab, t in res[:10]:
            print('%5d %6d  %s' % (s, size, lab))
        if res and res[0][0] < base:
            open(out, 'w').write(res[0][3]); print('best written to', out)
        return
    cur = base
    for rnd in range(a.rounds):
        vs = list(zero_variants(lines, start, last, a.flags)) + list(goto_variants(lines, start, last, first_only=True))
        res = run(tgt, vs, workdir, a.jobs, quiet=True)
        if not res:
            print('nothing compiles'); return
        s, size, lab, t = res[0]
        print('round %d: best %d (%d bytes) %s | next: %s' % (rnd, s, size, lab,
              ', '.join('%d %s' % (r[0], r[2]) for r in res[1:4])), flush=True)
        if s >= cur:
            print('no improvement; best stays', cur); return
        cur, text, lines = s, t, t.split('\n')
        start, last = func_lines(lines, 'f_%04x_%04x' % (seg, off))
        open(out, 'w').write(text)
        print('  written to', out)
        if s == 0:
            print('MATCH'); return


if __name__ == '__main__':
    main()
