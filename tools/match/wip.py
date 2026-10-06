#!/usr/bin/env python3
"""Work folders for decompiling a segment or overlay in parts (one per agent), and the merge
of the parts into the module's source file.

  wip.py prepare GAME.EXE SSSS [--size BYTES | --chunks N] [--data SSSS:OOOO] [--base FILE.C] [--wip DIR]
  wip.py merge GAME.EXE SSSS [--out FILE] [--check] [--partial] [--wip DIR]

prepare writes GAME's decomp/wip/ssss/:
    ov.txt          the annotated disassembly of the whole segment or overlay (disasm.py's)
    chunkN.txt      the same cut at function starts into chunks of about --size bytes
                    (default 3500), or into --chunks N of about the same size
    bounds.txt      the chunks' start offsets and the end
    stub_order.txt  an overlay's stub entries in the stub table's order
    strings.txt     `ADDR 'text'` for the strings of the module's data: from --data (or the
                    lowest literal the code loads with push ds / mov ax (or push), ADDR) to past the
                    highest one
    BRIEF.md        the instructions for the agent of one chunk, filled in for the game
                    (compiler, fcheck's --cc, the matching sources to copy, the entries, the
                    data), with notes.md of the folder (what is known of the module's data
                    tables...) appended when it exists
    wip.json        what merge needs
    partN.c         only with --base (a port.py output), and only for a part not written yet:
                    the functions of the chunk from FILE.C with all its declarations
It leaves partN.c, notes.md, tables.c, protos.c and header.txt alone: those are the agents'
and yours.

merge reads the folder's partN.c (the agent of chunk N writes f_SSSS_OOOO for its range,
and stub definitions of earlier functions of other chunks, which are ignored) and writes the
module file (default: decomp/src/SSSS.C), as one source file: @at, @data and @module; the
description of header.txt; the parts' preprocessor lines; a prototype of each of the
module's functions, in the order of the overlay's stub entries (BCC writes the publics in
the order of their first declaration and TLINK makes an overlay's stub entries from them,
in reverse); the parts' declarations, one per name (a name the parts declare differently
takes the declaration most of the parts whose functions use it have; on a tie the first is
kept and they are listed); the module's initialised tables from
tables.c; and the functions in address order with the comment before each. tables.c
holds sections that start with a line `/* @top */` (before the first function) or
`/* @before f_SSSS_OOOO */`. A module function's prototype is the parts' declaration of it
without parameters if one has it (`void f();`: its callers were compiled with no prototype in
scope), an old-style definition's parameters with their types, or the definition's head; a
line of protos.c naming the function replaces it. An overlay function that is not a stub
entry is made static. --check runs fcheck on the result; --partial writes it even when
functions are missing (a comment in their place), to check the parts done so far.
"""
import argparse, collections, glob, json, math, os, re, subprocess, sys
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
sys.path.insert(0, os.path.dirname(HERE))
import mkblobs, disasm, port

ROOT = os.path.dirname(os.path.dirname(HERE))
RT = 0x1000


def rel(path):
    """path relative to the repository, or absolute when it is outside."""
    r = os.path.relpath(os.path.abspath(path), ROOT)
    return os.path.abspath(path) if r.startswith('..') else r


def game_dirs(exe):
    gdir = os.path.dirname(os.path.abspath(exe))
    return gdir, os.path.join(gdir, 'decomp')


def make_vars(ddir):
    """CC_TC and BCCFLAGS of the game's decomp Makefile (defaults: Borland C++ 3.1)."""
    v = {'CC_TC': 'bc31', 'BCCFLAGS': '-ml -O1 -k -Ol'}
    mk = os.path.join(ddir, 'Makefile')
    if os.path.exists(mk):
        for mo in re.finditer(r'^(CC_TC|BCCFLAGS)\s*:?=\s*(.*)$', open(mk).read(), re.M):
            v[mo.group(1)] = mo.group(2).strip()
    return v


def region(g, seg):
    """(kind, start offset, end offset, stub entries) of runtime segment or overlay seg."""
    starts = sorted(o for s, o in g.starts if s == seg)
    if not starts:
        raise SystemExit('%s has no functions in %04x' % (g.exe, seg))
    w = g.m.where(seg, starts[0])
    if w[0] == 'root':
        s = w[2]
        return 'root', starts, s.end - s.frame * 16, None
    st = g.m.e.stubs[w[1]]
    return 'overlay', starts, st.codesize, list(st.entries)


def line(row):
    ip, raw, txt, note = row[:4]
    return '  %04x  %-20s %-34s %s' % (ip, raw.hex(' '), txt, ('; ' + ', '.join(note)) if note else '')


def listing(g, seg, lo, hi):
    _, rows = disasm.listing(g.m, seg, lo, hi - lo, g.starts)
    return rows


def cut(starts, end, size=None, chunks=None):
    """Chunk boundaries at function starts, of about `size` bytes, or `chunks` of them."""
    total = end - starts[0]
    n = chunks or max(1, math.ceil(total / (size or 3500)))
    bounds = [starts[0]]
    for k in range(1, n):
        want = starts[0] + total * k // n
        best = min((s for s in starts if s > bounds[-1]), key=lambda s: abs(s - want), default=None)
        if best is None or best >= end:
            break
        bounds.append(best)
    return sorted(set(bounds)) + [end]


def literals(g, rows):
    """DGROUP addresses the code loads as far pointers (push ds / mov ax, ADDR, or BCC 4's
    push ds / push ADDR): the densest run of them, the literal pool (the others point at
    variables)."""
    found = set()
    for a, b in zip(rows, rows[1:]):
        if a[2] == 'push [ds]':
            mo = re.match(r'(?:mov \[(?:ax|dx|bx|cx), |push \[)0x([0-9a-f]+)\]$', b[2])
            if mo:
                found.add(int(mo.group(1), 16))
    runs = []
    for x in sorted(found):
        if runs and x - runs[-1][-1] <= 0x400:
            runs[-1].append(x)
        else:
            runs.append([x])
    return set(max(runs, key=len)) if runs else set()


def strings(g, lo, hi):
    """`ADDR 'text'` for each NUL-terminated string from lo to hi in DGROUP."""
    data = g.data(lo, hi - lo + 0x100)
    out, i = [], 0
    while lo + i < hi:
        j = data.index(b'\0', i) if b'\0' in data[i:] else len(data)
        out.append('%04x  %r' % (lo + i, data[i:j].decode('latin1')))
        i = j + 1
    return out


BRIEF = '''# Decompiling {game}'s {kind} {seg} ({exe}) to matching C — one chunk

Repo: {root} (run commands from there). Work ONLY in
{wip}/ (never /tmp). Do not edit anything else: no src/, no tools/.

{Kind} {seg} is compiled {compiler} game code (`{flags}`), {nfuncs} functions,
{lo:04x}-{end:04x}. You write matching C for ONE chunk of it; the parts are merged later into
one module file.

Read first:
- .claude/skills/decomp/SKILL.md ("Codegen facts" especially) and docs/matching.md
  ("Writing C", "Rules").
- {refs}:
  fully matching modules of this game. Copy their style and look up declarations there
  (prototypes of the functions this code calls, with their types and comments). Use the
  same types for the same names.

## Input
- {wip}/chunkN.txt: the annotated disassembly of your range (names `f_SSSS_OOOO` for
  calls, `d_{dg:04x}_XXXX` DGROUP data, `seg XXXX` far data).
  `python3 tools/match/disasm.py {exe} {seg}:OOOO` prints one function. Whole {kind}: ov.txt.
  The chunks: {chunks}.
- {wip}/strings.txt: `ADDR 'text'` for the strings of the module's data (`push ds / mov ax,
  ADDR`, or `push ds / push ADDR`, is the literal at ADDR). Write them as C string literals, in the order the code
  uses them.
- {entries}
- This module's initialised data starts at DGROUP {data}. Report every initialised table
  your code reads (address, element layout, how it is indexed, where its strings sit).
{base}- After fcheck, run `python3 tools/match/fixcheck.py {exe} partN.c --data {dg:04x}:OOOO{cc}`
  (OOOO: where your first literal sits) to check every fixup fcheck leaves out: each
  literal and float constant's address, two swapped float arguments, the segment of each
  far table, every call target.
- strings.txt is only a hint: CHECK every literal's exact bytes (a string may continue past
  what looks like its end).

## Output
{wip}/partN.c: a standalone C file with YOUR functions, named f_{seg}_OOOO, in address
order, all public (no `static`), with the includes, prototypes and externs they need. No
`@at`/`@data`/`@module` lines. Check with:

    python3 tools/match/fcheck.py {exe} {wip}/partN.c{cc} [--show f_{seg}_OOOO]

Iterate until each of your functions says ok.

## Facts
- `0E E8` = a callee defined earlier in the same file. A call to an earlier function of
  ANOTHER chunk: put a stub definition of it above yours (`void f_{seg}_OOOO(void) {{}}`),
  and ignore its mismatch. `90 0E E8` = a later function of the same segment: prototype
  only. `9A` = another segment or overlay: prototype.
- Far data: `extern T far d_SEG_OFF[];` with SEG the runtime segment of the `seg XXXX` note
  and OFF the displacement (one far declaration per line: `far` binds to one declarator).
  DGROUP: `extern int d_{dg:04x}_XXXX;` sized by the access. A 2-D table shows as a stride
  (imul / shl): declare `T far d[][N]`.
- The only initialised data you write is string literals and float constants: declare
  every variable `extern`, including the module's initialised tables (report them).
- try.py compiles a file and compares from one address, quick for testing forms of the
  FIRST function in a file: `python3 tools/match/try.py --show{cc} {exe} {seg}:OOOO FILE.c`.
- If a function resists after real effort (6+ different source forms), leave the closest
  version and say exactly what differs.
{notes}
## Report
The file path, per-function fcheck status, the remaining difference of any function that
doesn't match, the literal strings in the order your code uses them (addresses), and the
externs/prototypes whose types you are unsure of.
'''


def prepare(a):
    g = port.Game(a.exe)
    seg = int(a.seg, 16)
    kind, starts, end, entries = region(g, seg)
    gdir, ddir = game_dirs(a.exe)
    wip = a.wip or os.path.join(ddir, 'wip', '%04x' % seg)
    os.makedirs(wip, exist_ok=True)
    rows = listing(g, seg, starts[0], end)
    with open(os.path.join(wip, 'ov.txt'), 'w') as fh:
        fh.write(''.join(line(r) + '\n' for r in rows))
    bounds = cut(starts, end, a.size, a.chunks)
    for k in range(len(bounds) - 1):
        with open(os.path.join(wip, 'chunk%d.txt' % k), 'w') as fh:
            fh.write(''.join(line(r) + '\n' for r in rows if bounds[k] <= r[0] < bounds[k + 1]))
    for old in glob.glob(os.path.join(wip, 'chunk*.txt')):
        if int(re.search(r'chunk(\d+)', old).group(1)) >= len(bounds) - 1:
            os.remove(old)
    with open(os.path.join(wip, 'bounds.txt'), 'w') as fh:
        fh.write(' '.join('%04x' % b for b in bounds) + '\n')
    if entries:
        with open(os.path.join(wip, 'stub_order.txt'), 'w') as fh:
            fh.write(' '.join('%04x' % e for e in entries) + '\n')
    lits = literals(g, rows)
    given = a.data
    if not given and a.base:
        mo = re.search(r'@data\s+([0-9a-f]{4}:[0-9a-f]{4})', open(a.base, encoding='latin1').read())
        given = mo and mo.group(1)
    data = int(given.split(':')[1], 16) if given else (min(lits) if lits else None)
    if lits:
        hi = max(lits)
        hi += g.data(hi, 0x400).index(b'\0') + 1
        with open(os.path.join(wip, 'strings.txt'), 'w') as fh:
            fh.write(''.join(s + '\n' for s in strings(g, data, hi)))
    mv = make_vars(ddir)
    cfg = {'exe': rel(a.exe), 'seg': '%04x' % seg, 'kind': kind,
           'bounds': ['%04x' % b for b in bounds], 'entries': ['%04x' % e for e in entries or []],
           'data': '%04x:%04x' % (g.dg, data) if data is not None else None, 'cc': mv['CC_TC']}
    old = os.path.join(wip, 'wip.json')
    if os.path.exists(old) and not given:           # keep a @data given before
        cfg['data'] = json.load(open(old)).get('data') or cfg['data']
    json.dump(cfg, open(old, 'w'), indent=1)
    # the brief
    srcs = sorted(os.path.basename(p) for p in glob.glob(os.path.join(ddir, 'src', '*.[cC]'))
                  if re.search(r'@module\b', open(p, encoding='latin1').read()))
    refs = ', '.join('%s/src/%s' % (rel(ddir), s) for s in srcs) or '(none yet)'
    compiler = {'bc30': 'Borland C++ 3.0', 'bc31': 'Borland C++ 3.1', 'bc4': 'Borland C++ 4.02'}.get(
        mv['CC_TC'], mv['CC_TC'])
    if entries:
        ent = ('Every function start in the overlay is a stub entry (all public): %s (end %04x). '
               'There are no other functions. A switch jump table can sit at the end of a '
               'function.' % (' '.join('%04x' % e for e in sorted(entries)), end))
    else:
        ent = ('The functions start at: %s (end %04x). A gap between two of them can hold a '
               'function the list misses (one only reached through a pointer).' %
               (' '.join('%04x' % s for s in starts), end))
    base = ''
    if a.base:
        base = ('- partN.c starts as the C of another game\'s version of this code (tools/match/port.py):\n'
                '  most functions only need the changes the game made; names it could not pair are\n'
                '  `unmapped_…`: find their counterpart in the disassembly.\n')
    notes = os.path.join(wip, 'notes.md')
    brief = BRIEF.format(
        game=os.path.basename(gdir).upper(), kind=kind, Kind=kind.capitalize(), seg='%04x' % seg,
        exe=cfg['exe'], root=ROOT, wip=rel(wip), compiler=compiler,
        flags=mv['BCCFLAGS'], nfuncs=len(starts), lo=starts[0], end=end, refs=refs, dg=g.dg,
        chunks=', '.join('%d: %s-%s' % (k, cfg['bounds'][k], cfg['bounds'][k + 1])
                         for k in range(len(bounds) - 1)),
        entries=re.sub(r'(.{1,88})(?: |$)', r'\1\n  ', ent).rstrip(),
        data=cfg['data'] or '(unknown: give prepare --data)', base=base,
        cc='' if mv['CC_TC'] == 'bc31' else ' --cc %s' % mv['CC_TC'],
        notes=('\n## About this module\n' + open(notes).read().strip() + '\n') if os.path.exists(notes) else '')
    with open(os.path.join(wip, 'BRIEF.md'), 'w') as fh:
        fh.write(brief)
    # parts seeded from a ported file
    seeded = []
    if a.base:
        items = port.split_top(open(a.base, encoding='latin1').read())
        head = ''.join(it.text for it in items if it.kind != 'func')
        head = re.sub(r'/\*[^*]*@(at|data|module)\b.*?\*/[ \t]*\n?', '', head, flags=re.S)
        for k in range(len(bounds) - 1):
            p = os.path.join(wip, 'part%d.c' % k)
            if os.path.exists(p):
                continue
            mine = [it.text for it in items if it.kind == 'func' and func_off(it.name, seg) is not None
                    and bounds[k] <= func_off(it.name, seg) < bounds[k + 1]]
            with open(p, 'w', encoding='latin1') as fh:
                fh.write(head.strip('\n') + '\n' + ''.join(mine))
            seeded.append(k)
    print('%s: %s %04x, %d functions, %04x-%04x -> %d chunks (%s)' % (
        rel(wip), kind, seg, len(starts), starts[0], end, len(bounds) - 1,
        ' '.join(cfg['bounds'])))
    print('  data %s, %d literals; compiler %s; BRIEF.md%s%s' % (
        cfg['data'], len(lits), mv['CC_TC'], ' + notes.md' if os.path.exists(notes) else
        ' (no notes.md: write what is known of the module there, then prepare again)',
        '; seeded part%s %s from %s' % ('s' if len(seeded) > 1 else '', ' '.join(map(str, seeded)),
                                         os.path.basename(a.base)) if seeded else ''))


def func_off(name, seg):
    mo = re.fullmatch(r'f_([0-9a-f]{4})_([0-9a-f]{4})', name or '')
    return int(mo.group(2), 16) if mo and int(mo.group(1), 16) == seg else None


# ---------------------------------------------------------------- merge
DECL = re.compile(r'^(extern\s+(?:(?:unsigned|signed|char|int|long|float|double|short|struct\s+\w+)\s+)+)(.*);$')
KW = {'unsigned', 'signed', 'char', 'int', 'long', 'float', 'double', 'void', 'short', 'far', 'near',
      'huge', 'const', 'struct', 'FILE'}


def split_decl(d):
    """`extern int a, b;` -> one declaration per name; others as they are."""
    d = ' '.join(d.split())
    mo = DECL.match(d)
    if mo and '(' not in mo.group(2) and '{' not in d:
        return [mo.group(1) + x + ';' for x in re.split(r',\s*', mo.group(2))]
    return [d]


def decl_name(d):
    for nm in re.findall(r'\b([fd]_[0-9a-f]{4}_[0-9a-f]{4}|struct\s+\w+|[A-Za-z_]\w*)\b', d):
        if re.match(r'[fd]_[0-9a-f]{4}_[0-9a-f]{4}$', nm):
            return nm
    mo = re.match(r'struct\s+(\w+)', d.strip())
    return ('struct ' + mo.group(1)) if mo else d.strip()


def decl_key(d):
    """A declaration without parameter names, to tell a real difference of type."""
    def arg(x):
        toks = re.findall(r'\w+|\*|\[[^\]]*\]|\(|\)', x)
        for i in range(len(toks) - 1, -1, -1):
            t = toks[i]
            if re.match(r'[A-Za-z_]\w*$', t) and t not in KW and not (i > 0 and toks[i - 1] == 'struct'):
                return ' '.join(toks[:i] + toks[i + 1:])
        return ' '.join(toks)
    mo = re.match(r'^(.*?\b(\w+))\s*\((.*)\)\s*;$', d)
    if not mo or re.search(r'\(\s*far\s*\*', d):
        return ' '.join(re.findall(r'\w+|\S', d))
    args = mo.group(3).strip()
    args = 'void' if args in ('', 'void') else ','.join(arg(x) for x in args.split(','))
    return ' '.join(re.findall(r'\w+|\S', mo.group(1))) + '(' + args + ')'


def lead_split(text):
    """(the last comment before the code, the code) of an item's text."""
    i, last = 0, None
    while True:
        while i < len(text) and text[i].isspace():
            i += 1
        if text.startswith('/*', i):
            j = text.index('*/', i) + 2
            last, i = text[i:j], j
        elif text.startswith('//', i):
            j = text.find('\n', i)
            j = len(text) if j < 0 else j
            last, i = text[i:j], j
        else:
            return last, text[i:]


def prototype(body, parts, name):
    """The prototype of a module function: a declaration without parameters (`void f();`)
    if a part has one (its callers were compiled without a prototype in scope: kept with
    its line's comment); for an old-style definition, its parameters with their declared
    types (`f(a, b) int a; register char b;` -> `f(int a, char b);`); else the definition's
    head."""
    for src in parts:
        mo = re.search(r'^(?:static\s+)?(?:void|char|int|unsigned|signed|long|short|float|double|struct)'
                       r'\b[^\n;{}=]*\b%s\s*\(\s*\)\s*;.*$' % name, src, re.M)
        if mo:
            return mo.group(0).rstrip()
    code = port.code_only(body)
    head = code[:code.index('{')]
    close = head.rindex(')')
    if head[close + 1:].strip():                    # old style
        open_ = head.index('(')
        names = [x.strip() for x in head[open_ + 1:close].split(',')]
        types = {}
        for d in head[close + 1:].split(';'):
            d = re.sub(r'\bregister\s+', '', ' '.join(d.split()))
            if not d:
                continue
            base = re.match(r'((?:unsigned|signed|char|int|long|float|double|short|struct\s+\w+)\s+)+', d)
            for decl in d[base.end():].split(','):
                nm = re.search(r'\w+', decl).group(0)
                types[nm] = (base.group(0) + decl.strip()).strip()
        return ' '.join(head[:open_].split()) + '(%s);' % ', '.join(types.get(n, 'int ' + n) for n in names)
    return ' '.join(body[:body.index('{')].split()) + ';'


def merge(a):
    seg = int(a.seg, 16)
    gdir, ddir = game_dirs(a.exe)
    wip = a.wip or os.path.join(ddir, 'wip', '%04x' % seg)
    cfg = json.load(open(os.path.join(wip, 'wip.json')))
    bounds = [int(b, 16) for b in cfg['bounds']]
    entries = [int(e, 16) for e in cfg['entries']]
    g = port.Game(a.exe)
    kind, starts, end, _ = region(g, seg)
    parts = []
    for k in range(len(bounds) - 1):
        p = os.path.join(wip, 'part%d.c' % k)
        if not os.path.exists(p):
            raise SystemExit('%s: no part%d.c (%04x-%04x)' % (rel(wip), k, bounds[k], bounds[k + 1]))
        parts.append(open(p, encoding='latin1').read())
    funcs, pps, decls, conflicts = {}, [], collections.OrderedDict(), collections.defaultdict(list)
    for k, src in enumerate(parts):
        for it in port.split_top(src):
            com, code = lead_split(it.text)
            if it.kind == 'pp':
                if code.strip() not in pps:
                    pps.append(code.strip())
            elif it.kind == 'func':
                off = func_off(it.name, seg)
                if off is not None and bounds[k] <= off < bounds[k + 1]:   # its owner (others: stubs)
                    if it.name in funcs:
                        raise SystemExit('%s is defined twice in part%d.c' % (it.name, k))
                    funcs[it.name] = (code.rstrip(), com)
            else:
                for d in split_decl(code):
                    bare = ' '.join(re.sub(r'/\*.*?\*/|//[^\n]*', ' ', d, flags=re.S).split())
                    nm, kk = decl_name(bare), decl_key(bare)
                    if nm in decls:
                        if decls[nm][2] != kk and (k, d) not in conflicts[nm]:
                            if not conflicts[nm]:
                                conflicts[nm].append((decls[nm][0], decls[nm][1]))
                            conflicts[nm].append((k, d))
                    else:
                        decls[nm] = (k, d, kk)
    want = {'f_%04x_%04x' % (seg, s) for s in set(starts) | set(entries)}
    starts = sorted(set(starts) | set(entries))
    missing = sorted(want - set(funcs))
    extra = sorted(set(funcs) - want)
    if missing and not a.partial:
        raise SystemExit('missing from the parts: %s (--partial writes the file without them)' %
                         ' '.join(missing))
    for n in missing:
        funcs[n] = (None, None)
    order = sorted(funcs, key=lambda n: func_off(n, seg))
    # the module's own tables and description
    tables, tnames = {}, set()
    tp = os.path.join(wip, 'tables.c')
    if os.path.exists(tp):
        for mo in re.finditer(r'^/\* @(top|before (f_\w+)) \*/\n(.*?)(?=^/\* @(?:top|before f_\w+) \*/\n|\Z)',
                              open(tp, encoding='latin1').read(), re.S | re.M):
            t = mo.group(3).strip('\n')
            tables[mo.group(2) or 'top'] = t + '\n' if t else ''
        for t in tables.values():
            for it in port.split_top(t):
                if it.kind == 'decl':
                    tnames.add(decl_name(' '.join(port.code_only(it.text).split())))
    hp = os.path.join(wip, 'header.txt')
    header = open(hp, encoding='latin1').read().strip('\n') if os.path.exists(hp) else \
        '/* %s %04x. */' % ('Overlay' if kind == 'overlay' else 'Segment', seg)
    public = set(entries) if kind == 'overlay' else set(starts)
    static = lambda n: '' if func_off(n, seg) in public else 'static '
    data = cfg.get('data')
    out = ['/* @at %04x:%04x */\n%s/* @module */\n\n%s' % (
        seg, starts[0], '/* @data %s */\n' % data if data else '', header)]
    out += pps
    if kind == 'overlay':
        # BCC 3.x lists the publics so that the stub table comes out in their first declaration
        # order; BCC 4.02 the other way round, so its prototypes go in the reverse order
        rev = cfg.get('cc') == 'bc4'
        out.append("\n/* the functions, in the %sorder of the overlay's stub entries: BCC writes the public "
                   "definitions (TLINK makes\n * the overlay's stub entries from them) in the order of "
                   "the first declarations */" % ('reverse ' if rev else ''))
        stubs = entries[::-1] if rev else entries
        names = ['f_%04x_%04x' % (seg, e) for e in stubs] + \
                [n for n in order if func_off(n, seg) not in public]
    else:
        out.append('\n/* the functions of the segment */')
        names = order
    fixed = {}                                       # protos.c: prototypes chosen by hand
    pp = os.path.join(wip, 'protos.c')
    if os.path.exists(pp):
        for ln in open(pp, encoding='latin1').read().splitlines():
            mo = re.search(r'\b(f_%04x_[0-9a-f]{4})\s*\(' % seg, ln)
            if mo and not ln.startswith((' ', '\t', '/*', '//')):
                fixed[mo.group(1)] = ln.rstrip()
    out += [fixed.get(n) or static(n) + prototype(funcs[n][0], parts, n) for n in names if funcs[n][0]]
    out.append('')
    # a name declared differently: the declaration of a part whose own functions use it (the
    # others are usually leftovers, e.g. of a ported file's declarations)
    uses = collections.defaultdict(set)
    for n, (body, _) in funcs.items():
        if body:
            k = next(i for i in range(len(bounds) - 1) if bounds[i] <= func_off(n, seg) < bounds[i + 1])
            for w in set(re.findall(r'\b\w+\b', port.code_only(body))):
                uses[w].add(k)
    unsettled = []
    for nm, v in conflicts.items():
        users = [(k, d) for k, d in v if k in uses.get(nm, ())]
        votes = collections.Counter(decl_key(' '.join(d.split())) for _, d in users).most_common()
        if votes and (len(votes) == 1 or votes[0][1] > votes[1][1]):   # all, or most, of its users
            k, d = next((k, d) for k, d in users if decl_key(' '.join(d.split())) == votes[0][0])
            decls[nm] = (k, d, None)
            if len(votes) > 1:
                print('  %s: the declaration of most of the parts that use it (part%d): %s' % (nm, k, d))
        else:
            unsettled.append(nm)
    kept = [d for nm, (k, d, kk) in decls.items() if func_off(nm, seg) is None and nm not in tnames]
    for i in range(len(kept)):                      # a struct defined after a declaration using it
        mo = re.match(r'struct\s+(\w+)\s*\{', kept[i])
        if mo:
            first = next(j for j in range(i + 1) if re.search(r'\bstruct\s+%s\b' % mo.group(1), kept[j]))
            if first < i:
                kept.insert(first, kept.pop(i))
    out += kept
    out.append('')
    out.append(tables.get('top', ''))
    for n in order:
        if n in tables:
            out.append(tables[n])
        body, com = funcs[n]
        if body is None:
            out.append('/* %s: not written yet */\n' % n)
            continue
        if com:
            out.append(com)
        out.append(static(n) + body + '\n')
    dst = a.out or os.path.join(ddir, 'src', '%04X.C' % seg)
    with open(dst, 'w', encoding='latin1') as fh:
        fh.write('\n'.join(out))
    print('%s: %d functions from %d parts, %d declarations -> %s' % (
        rel(wip), len(order), len(parts), len(decls), rel(dst)))
    if extra:
        print('  not functions of %04x (kept): %s' % (seg, ' '.join(extra)))
    if missing:
        print('  not written yet: %s' % ' '.join(missing))
    for nm in unsettled:
        if func_off(nm, seg) is not None:          # the module's own: its definition decides
            continue
        print('  declared differently, and not settled by which parts use it (the first is kept): %s' % nm)
        for k, d in conflicts[nm]:
            print('      part%d%s: %s' % (k, ' (uses it)' if k in uses.get(nm, ()) else '', d))
    if a.check:
        cc = ['--cc', cfg['cc']] if cfg.get('cc') and cfg['cc'] != 'bc31' else []
        subprocess.run([sys.executable, os.path.join(HERE, 'fcheck.py'), a.exe, dst] + cc)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest='cmd', required=True)
    p = sub.add_parser('prepare')
    p.add_argument('exe')
    p.add_argument('seg')
    p.add_argument('--size', type=lambda v: int(v, 0))
    p.add_argument('--chunks', type=int)
    p.add_argument('--data')
    p.add_argument('--base')
    p.add_argument('--wip', help='the folder (default: decomp/wip/ssss)')
    p = sub.add_parser('merge')
    p.add_argument('exe')
    p.add_argument('seg')
    p.add_argument('--out')
    p.add_argument('--check', action='store_true')
    p.add_argument('--partial', action='store_true', help='write the file with the functions missing')
    p.add_argument('--wip', help='the folder (default: decomp/wip/ssss)')
    a = ap.parse_args()
    (prepare if a.cmd == 'prepare' else merge)(a)


if __name__ == '__main__':
    main()
