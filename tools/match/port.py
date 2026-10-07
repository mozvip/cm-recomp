#!/usr/bin/env python3
"""Port decompiled sources from one game to another built from the same sources.

  port.py FROM.EXE TO.EXE FILE.C[@SSSS:OOOO] [...] [--out DIR] [--symbols FROM_SYMBOLS.TXT]

For each file, finds the code of the file's module in FROM.EXE (its segment with @module,
otherwise its functions), finds where the same code is in TO.EXE (any root segment or
overlay), and aligns the two instruction streams with addresses ignored. The aligned
instructions give the address pairs: function starts, call targets, DGROUP data, far data
segments and offsets. The file is then written to DIR (default: TO.EXE's
decomp/src) with every f_SSSS_OOOO / d_SSSS_OOOO and its @at / @data renamed for TO.EXE,
named after its new @at segment (14D2.C -> 1BD3.C). A file whose code mostly has no
counterpart (the game rewrote it) is not written; @SSSS:OOOO names the counterpart.

Prints what it could not map exactly:
    guessed   d_ symbols placed by the offset of the nearest mapped address (data blocks
              move as a whole between builds, so these are usually right)
    collision two names that would get the same new name: the one paired by aligned code
              keeps it, the others are unmapped
    unmapped  symbols renamed unmapped_f_SSSS_OOOO (FROM's address), so that the build
              stops on them: find their counterpart by hand

  port.py FROM.EXE TO.EXE --segment SSSS [--src DIR] [--min 0.65] [--out FILE]

With --segment, ports function by function instead, for a segment or overlay of TO whose
code comes from several FROM modules or was partly rewritten (CM93's 14bc gathers functions
of CM1's 1680, a1c3, 992a...). Each of its functions gets the C of the most similar function
defined in FROM's sources (DIR, default FROM.EXE's decomp/src), compared by instruction
stream with addresses ignored, if at least --min similar; the pair is aligned and the text
renamed as above, the function taking TO's address. The file also gets the declarations
those functions use, from the FROM files they come from (static dropped in a root segment,
where every function can be public). Functions with no counterpart are left as comments
naming the closest one. Written to FILE (default: TO.EXE's decomp/wip/SSSS/base.C), with
@at its first function and no @data or @module: a starting point to check with fcheck.py
and finish by hand. Prints each function's source and similarity, and its unmapped names.

With --symbols, also prints the entries of FROM's symbols.txt (runtime functions found by
hand) translated through the call pairs or an identical function, for TO's symbols.txt.

The C itself is not changed: where the games' code differs, the build shows DIFF.
"""
import argparse, bisect, collections, difflib, glob, math, os, re, sys
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
sys.path.insert(0, os.path.dirname(HERE))
import mkblobs, disasm, names


def read_src(path):
    """A FROM source with the address names (f_SSSS_OOOO...) its game's names.txt replaced."""
    return names.load(path).to_addresses(open(path, encoding='latin1').read())

RT = 0x1000
PREFIX = 'unmapped_'                    # the build then stops on these: fix them by hand
SYM = re.compile(r'(?<![0-9A-Za-z])([fd])_([0-9a-f]{4})_([0-9a-f]{4})\b')   # also _f_… (asm)
NUM = re.compile(r'0x([0-9a-f]+)')


def norm(txt):
    """An instruction's text with the addresses taken out."""
    t = re.sub(r'->[0-9a-f]+(:[0-9a-f]+)?', '->J', txt)
    return re.sub(r'0x[0-9a-f]{3,4}\b', 'A', t)


class Game:
    def __init__(self, exe):
        self.exe = exe
        self.m = mkblobs.Model(exe)
        self.dg = self.m.e.dgroup.frame + RT
        funcs = os.path.join(os.path.dirname(os.path.abspath(exe)), 'recomp', 'funcs.h')
        self.starts = disasm.func_starts(funcs)
        self._regions = None

    def code(self, s, o, length):
        """Listing of runtime s:o for length bytes: [(rt_seg, ip, raw, text, notes)]."""
        _, rows = disasm.listing(self.m, s, o, length, self.starts)
        return [(s, ip, raw, txt, note) for ip, raw, txt, note, _ in rows]

    def regions(self):
        """Every root code segment and overlay: (name, rt_seg, start_off, length)."""
        if self._regions is None:
            out = []
            for sg in self.m.segs:
                if sg.kind == 'code' and sg.end > sg.start:
                    out.append(('%04x' % (sg.frame + RT), sg.frame + RT, sg.start - sg.frame * 16,
                                sg.end - sg.start))
            for st in self.m.e.stubs:
                rs = self.m.overlay_rt_seg(st)
                out.append(('%04x' % rs, rs, 0, st.codesize))
            self._regions = out
        return self._regions

    def rows(self, s, o):
        """Listing of the function at runtime s:o, to its next start (None if unreadable)."""
        nxt = sorted(x for rs, x in self.starts if rs == s and x > o)
        try:
            return self.code(s, o, (nxt[0] - o) if nxt else None)
        except BaseException:
            return None

    def body(self, s, o):
        """Normalised instructions of the function at runtime s:o, to its next start."""
        rows = self.rows(s, o)
        return tuple(norm(x[3]) for x in rows) if rows is not None else None

    def fingerprints(self):
        """normalised body -> the functions that have it."""
        if not hasattr(self, '_fp'):
            self._fp = collections.defaultdict(list)
            for s, o in self.starts:
                bd = self.body(s, o)
                if bd:
                    self._fp[bd].append((s, o))
        return self._fp

    def data(self, off, n):
        base = self.m.e.dgroup.start
        return bytes(self.m.e.image[base + off:base + off + n])


class SourceFile:
    def __init__(self, path):
        self.path = path
        self.text = read_src(path)
        m = re.search(r'@at\s+([0-9a-fA-F]{4}):([0-9a-fA-F]{4})', self.text)
        self.at = (int(m.group(1), 16), int(m.group(2), 16))
        m = re.search(r'@data\s+([0-9a-fA-F]{4}):([0-9a-fA-F]{4})', self.text)
        self.data = (int(m.group(1), 16), int(m.group(2), 16)) if m else None
        self.module = bool(re.search(r'@module\b', self.text))
        # functions defined here (a name at the start of a line, followed by its body)
        self.defined = sorted({(int(a, 16), int(b, 16)) for a, b in re.findall(
            r'^[A-Za-z_][\w \t\*]*\bf_([0-9a-f]{4})_([0-9a-f]{4})\s*\([^;{]*\)\s*\{', self.text, re.M)} |
            {(int(a, 16), int(b, 16)) for a, b in re.findall(
                r'^_f_([0-9a-f]{4})_([0-9a-f]{4})\s+proc\b', self.text, re.M)})


def file_range(g, sf):
    """The FROM code of a source file: (rt_seg, start_off, length)."""
    s, o = sf.at
    w = g.m.where(s, o)
    if w[0] == 'root':
        seg = w[2]
        if sf.module:
            return s, seg.start - seg.frame * 16, seg.end - seg.start
        end = seg.end - seg.frame * 16
    else:
        end = g.m.e.stubs[w[1]].codesize
    last = max(off for seg, off in sf.defined if seg == s) if sf.defined else o
    nxt = sorted(x for rs, x in g.starts if rs == s and x > last)
    return s, o, (nxt[0] if nxt else end) - o


def best_region(a_norm, b, k=6, tries=3):
    """The TO region whose code aligns with most of a_norm: the `tries` regions holding
    most of its k-grams, compared in full."""
    grams = {tuple(a_norm[i:i + k]) for i in range(len(a_norm) - k + 1)}
    cands = []
    for r in b.regions():
        rows = b.code(r[1], r[2], r[3])
        bn = [norm(x[3]) for x in rows]
        hits = sum(tuple(bn[i:i + k]) in grams for i in range(len(bn) - k + 1))
        if hits:
            cands.append((hits, r, rows, bn))
    cands.sort(key=lambda c: -c[0])
    best = (0, None, None)
    for hits, r, rows, bn in cands[:tries]:
        sm = difflib.SequenceMatcher(None, a_norm, bn, autojunk=False)
        same = sum(blk.size for blk in sm.get_matching_blocks())
        if same > best[0]:
            best = (same, r, rows)
    return best


class Maps:
    def __init__(self):
        self.addr = {}                                  # code address pairs, this module
        self.f = collections.defaultdict(collections.Counter)   # called functions
        self.d = collections.defaultdict(collections.Counter)   # DGROUP offsets
        self.seg = collections.defaultdict(collections.Counter)
        self.far = collections.defaultdict(collections.Counter)  # (seg, off) far data
        self.imm = collections.defaultdict(collections.Counter)  # immediates that differ

    def add(self, ar, br):
        a_seg, a_ip, _, a_txt, a_note = ar
        b_seg, b_ip, _, b_txt, b_note = br
        self.addr[(a_seg, a_ip)] = (b_seg, b_ip)
        for x, y in zip(a_note, b_note):
            kx, ky = x.split(' ')[0][:2], y.split(' ')[0][:2]
            if kx != ky:
                continue
            if kx == 'f_':
                self.f[x[:11]][y[:11]] += 1
            elif kx == 'd_':
                self.d[int(x[7:11], 16)][int(y[7:11], 16)] += 1
            elif kx == 'se':
                self.seg[int(x[4:8], 16)][int(y[4:8], 16)] += 1
        return a_note, b_note


def align(a_rows, b_rows, maps, dg_a, dg_b):
    an = [norm(x[3]) for x in a_rows]
    bn = [norm(x[3]) for x in b_rows]
    sm = difflib.SequenceMatcher(None, an, bn, autojunk=False)
    same = 0
    last_seg = None                                     # the segment loaded for es: lately
    for blk in sm.get_matching_blocks():
        for k in range(blk.size):
            ar, br = a_rows[blk.a + k], b_rows[blk.b + k]
            same += 1
            an_, bn_ = maps.add(ar, br)
            for x, y in zip(an_, bn_):
                if x.startswith('seg') and y.startswith('seg'):
                    last_seg = (int(x[4:8], 16), int(y[4:8], 16), blk.a + k)
            # numbers that differ: DGROUP offsets in immediates, far data displacements
            xa = [int(v, 16) for v in NUM.findall(ar[3]) if len(v) >= 3]
            xb = [int(v, 16) for v in NUM.findall(br[3]) if len(v) >= 3]
            if len(xa) == len(xb):
                for u, v in zip(xa, xb):
                    if 'es:' in ar[3] and last_seg and blk.a + k - last_seg[2] < 8:
                        maps.far[(last_seg[0], u)][(last_seg[1], v)] += 1
                    elif u != v and not an_:
                        maps.imm[u][v] += 1             # e.g. push ds / mov ax,OFS
    return same, len(a_rows)


def pick(counter):
    return counter.most_common(1)[0][0] if counter else None


def nearest(table, key, limit=0x400):
    """table: {a: b}; b + (key - a) for the nearest a within limit."""
    ks = sorted(table)
    i = bisect.bisect_left(ks, key)
    cands = [ks[j] for j in (i - 1, i) if 0 <= j < len(ks)]
    cands = [c for c in cands if abs(c - key) <= limit]
    if not cands:
        return None
    c = min(cands, key=lambda c: abs(c - key))
    return table[c] + (key - c)


class Renamer:
    """Renames the f_/d_ symbols of FROM's C text for TO through the address pairs of
    aligned code: `maps`, those of the code the text was written for, then `maps_all`, those
    of everything ported with it. `fixed` pairs names given in advance (a function's own
    name). What it could not map exactly is collected in `report`."""

    def __init__(self, a, b, maps_all, maps, fixed=None):
        self.a, self.b, self.maps_all = a, b, maps_all
        self.addr = dict(maps_all.addr)
        self.addr.update(maps.addr)
        self.exact_d = {k: pick(v) for k, v in maps_all.d.items()}     # pairs from all the files
        self.exact_d.update({k: pick(v) for k, v in maps.d.items()})
        self.imm = {k: pick(v) for k, v in maps.imm.items()}
        self.segmap = {k: pick(v) for k, v in maps_all.seg.items()}
        self.segmap.update({k: pick(v) for k, v in maps.seg.items()})
        self.far = {k: pick(v) for k, v in maps_all.far.items()}
        self.far.update({k: pick(v) for k, v in maps.far.items()})
        self.fixed = fixed or {}
        self.report = collections.defaultdict(set)

    def new_addr(self, rs, ro):
        a, b, maps_all, report = self.a, self.b, self.maps_all, self.report
        if (rs, ro) in self.addr:
            return self.addr[(rs, ro)]
        nm = 'f_%04x_%04x' % (rs, ro)
        if nm in maps_all.f:
            t = pick(maps_all.f[nm])
            return int(t[2:6], 16), int(t[7:11], 16)
        bd = a.body(rs, ro)                         # a function identical somewhere in TO
        same = b.fingerprints().get(bd, []) if bd and len(bd) > 2 else []
        if len(same) == 1:
            maps_all.f[nm]['f_%04x_%04x' % same[0]] += 1
            report['by body'].add(nm)
            return same[0]
        if bd and len(bd) > 4:                      # or clearly the most similar one
            scores = []
            for obd, fs in b.fingerprints().items():
                if 0.8 * len(bd) <= len(obd) <= 1.25 * len(bd):
                    sm = difflib.SequenceMatcher(None, bd, obd, autojunk=False)
                    if sm.real_quick_ratio() >= 0.9 and sm.quick_ratio() >= 0.9:
                        scores.append((sm.ratio(), fs))
            scores.sort(reverse=True)
            if scores and scores[0][0] >= 0.9 and len(scores[0][1]) == 1 and \
                    (len(scores) == 1 or scores[1][0] < scores[0][0] - 0.05):
                t = scores[0][1][0]
                maps_all.f[nm]['f_%04x_%04x' % t] += 1
                report['by similar body'].add('%s -> f_%04x_%04x (%d%%)' % (nm, t[0], t[1], 100 * scores[0][0]))
                return t
        return None

    def sym(self, mo):
        a, b, report = self.a, self.b, self.report
        exact_d, imm, segmap, far = self.exact_d, self.imm, self.segmap, self.far
        kind, ss, oo = mo.group(1), int(mo.group(2), 16), int(mo.group(3), 16)
        name = mo.group(0)
        if name in self.fixed:
            return self.fixed[name]
        if kind == 'f':
            t = self.new_addr(ss, oo)
            if t is None:
                report['unmapped'].add(name)
                return PREFIX + name
            return 'f_%04x_%04x' % t
        if ss == a.dg:
            if oo in exact_d:
                return 'd_%04x_%04x' % (b.dg, exact_d[oo])
            if oo in imm:
                report['guessed'].add('%s -> d_%04x_%04x (immediate)' % (name, b.dg, imm[oo]))
                return 'd_%04x_%04x' % (b.dg, imm[oo])
            g = nearest(exact_d, oo) if exact_d else None
            if g is None:
                report['unmapped'].add(name)
                return PREFIX + name
            report['guessed'].add('%s -> d_%04x_%04x' % (name, b.dg, g & 0xffff))
            return 'd_%04x_%04x' % (b.dg, g & 0xffff)
        if ss in segmap:                               # far data
            if (ss, oo) in far:
                return 'd_%04x_%04x' % far[(ss, oo)]
            same_seg = {k[1]: v[1] for k, v in far.items() if k[0] == ss}
            g = nearest(same_seg, oo, 0x10000) if same_seg else oo
            report['guessed'].add('%s -> d_%04x_%04x' % (name, segmap[ss], g & 0xffff))
            return 'd_%04x_%04x' % (segmap[ss], g & 0xffff)
        report['unmapped'].add(name)
        return PREFIX + name

    def rename(self, text):
        """text with its names renamed: every name is mapped once, then collisions are undone
        (two names given the same new name keep it only for the one mapped exactly, by
        aligned code; the others become unmapped)."""
        report = self.report
        new = {mo.group(0): self.sym(mo) for mo in SYM.finditer(text)}
        soft = {n for k in ('guessed', 'by similar body') for e in report[k] for n in [e.split(' ')[0]]}
        by_new = collections.defaultdict(list)
        for n, t in new.items():
            if not t.startswith(PREFIX):
                by_new[t].append(n)
        for t, ns in by_new.items():
            if len(ns) > 1:
                hard = [n for n in ns if n in self.fixed] or [n for n in ns if n not in soft]
                for n in ns:
                    if len(hard) != 1 or n != hard[0]:
                        new[n] = PREFIX + n
                        report['collision'].add('%s (also %s)' % (n, t))
        self.names = new                                # the last renaming, FROM -> TO
        return SYM.sub(lambda mo: new[mo.group(0)], text)


def port_file(path, a, b, outdir, maps_all, write=True):
    path, _, where = path.partition('@')
    sf = SourceFile(path)
    s, o, n = file_range(a, sf)
    a_rows = a.code(s, o, n)
    a_norm = [norm(x[3]) for x in a_rows]
    if where:                                   # FILE@SSSS:OOOO: the counterpart given
        bs, bo = (int(v, 16) for v in where.split(':'))
        region = next((r for r in b.regions() if r[1] == bs), None)
        if region is None:
            raise SystemExit('%s: no code segment or overlay %04x in %s' % (path, bs, b.exe))
        region = (region[0], bs, bo, region[2] + region[3] - bo)
        b_rows = b.code(*region[1:])
    else:
        hits, region, b_rows = best_region(a_norm, b)
    if not region:
        print('%s: no counterpart found' % os.path.basename(path))
        return
    maps = Maps()
    same, tot = align(a_rows, b_rows, maps, a.dg, b.dg)
    print_head = lambda: print('%s: %04x:%04x (%d instructions) -> %s, %d%% of the instructions aligned' %
                               (os.path.basename(path), s, o, tot, region[0], 100 * same // max(tot, 1)))
    if same < tot // 2 and not where:
        if write:
            print_head()
            print('  not written: under half the code has a counterpart there, so the game changed '
                  'this module; port it by hand, or name the counterpart: %s@SSSS:OOOO' %
                  os.path.basename(path))
        return
    maps_all.addr.update(maps.addr)
    if not write:
        for k, v in maps.f.items():
            maps_all.f[k].update(v)
        for k, v in maps.d.items():
            maps_all.d[k].update(v)
        for k, v in maps.far.items():
            maps_all.far[k].update(v)
        for k, v in maps.seg.items():
            maps_all.seg[k].update(v)
        return
    print_head()
    rn = Renamer(a, b, maps_all, maps)
    out = rn.rename(sf.text)
    report = rn.report
    # placement comments
    at = rn.new_addr(*sf.at)
    if at is None:
        raise SystemExit('%s: its @at %04x:%04x has no counterpart' % (path, sf.at[0], sf.at[1]))
    out = re.sub(r'@at\s+[0-9a-fA-F]{4}:[0-9a-fA-F]{4}', '@at %04x:%04x' % at, out)
    if sf.data:
        d = data_counterpart(a, b, sf.data[1], rn.exact_d)
        if d is None:
            report['unmapped'].add('@data')
        else:
            out = re.sub(r'@data\s+[0-9a-fA-F]{4}:[0-9a-fA-F]{4}', '@data %04x:%04x' % (b.dg, d), out)
    ext = os.path.splitext(path)[1].upper()
    name = '%04X%s' % (at[0], ext) if sf.module else '%04X%04X%s' % (at[0], at[1], ext)
    name = name if len(name) <= 12 else os.path.basename(path)
    dst = os.path.join(outdir, name)
    with open(dst, 'w', encoding='latin1') as fh:
        fh.write(out)
    print('  wrote %s (@at %04x:%04x)' % (os.path.relpath(dst), at[0], at[1]))
    for k in ('by body', 'by similar body', 'guessed', 'collision', 'unmapped'):
        if report[k]:
            print('  %s (%d): %s' % (k, len(report[k]), ', '.join(sorted(report[k]))))


def data_counterpart(a, b, off, exact_d):
    """Where FROM's DGROUP data at off is in TO: the nearest mapped address's offset,
    corrected by searching TO's DGROUP for FROM's bytes nearby."""
    guess = nearest(exact_d, off, 0x1000) if exact_d else None
    want = a.data(off, 24)
    dsize = b.m.e.dgroup.end - b.m.e.dgroup.start
    whole = b.data(0, dsize)
    hits = [m.start() for m in re.finditer(re.escape(want), whole)]
    if guess is not None and hits:
        return min(hits, key=lambda h: abs(h - guess))
    return hits[0] if len(hits) == 1 else guess


# ---------------------------------------------------------------- function by function
KEYWORDS = set('''auto break case char const continue default do double else enum extern far
    float for goto huge if int interrupt long near pascal cdecl register return short signed
    sizeof static struct switch typedef union unsigned void volatile while'''.split())
IDENT = re.compile(r'\b[A-Za-z_]\w*\b')
HEADER = re.compile(r'/\*[^*]*@(at|data|module)\b.*?\*/[ \t]*\n?', re.S)
COMMENTS = re.compile(r'/\*.*?\*/|//[^\n]*|"(\\.|[^"\\])*"|\'(\\.|[^\'\\])*\'', re.S)


class Item:
    """A top-level part of a C file: 'pp' (a preprocessor line), 'func' (a function
    definition, `name` its name) or 'decl'; `text` includes the comments before it."""

    def __init__(self, kind, text, name=None):
        self.kind, self.text, self.name = kind, text, name


def code_only(text):
    """text without its comments, strings and character constants."""
    return COMMENTS.sub(' ', text)


def split_top(text):
    """The top-level items of a C file. A function is recognised by the `{` that opens it:
    after a `)` (prototype style), or right after declarations that follow a parameter list
    (old style: `f(a, b) int a; char b; {`)."""
    items, start, i, n = [], 0, 0, len(text)
    depth = paren = 0
    func_open = False
    line_start = True
    while i < n:
        c = text[i]
        if text.startswith('/*', i):
            i = text.index('*/', i + 2) + 2
            continue
        if text.startswith('//', i):
            i = text.find('\n', i)
            i = n if i < 0 else i
            continue
        if c in '"\'':
            j = i + 1
            while j < n and text[j] != c:
                j += 2 if text[j] == '\\' else 1
            i = j + 1
            line_start = False
            continue
        if c == '#' and depth == 0 and line_start:
            j = i
            while True:
                j = text.find('\n', j)
                if j < 0 or text[j - 1] != '\\':
                    break
                j += 1
            j = n if j < 0 else j + 1
            items.append(Item('pp', text[start:j]))
            start = i = j
            continue
        if c == '\n':
            line_start = True
        elif not c.isspace():
            line_start = False
        if c == '(':
            paren += 1
        elif c == ')':
            paren -= 1
        elif c == '{':
            if depth == 0:
                pending = code_only(text[start:i]).strip()
                if pending.endswith(')'):
                    func_open = True
                elif not pending:               # old style: join the declarations above
                    k = len(items)
                    while k > 0 and items[k - 1].kind == 'decl' and '(' not in code_only(items[k - 1].text):
                        k -= 1
                    if k > 0 and items[k - 1].kind == 'decl':
                        start = sum(len(x.text) for x in items[:k - 1])
                        del items[k - 1:]
                        func_open = True
            depth += 1
        elif c == '}':
            depth -= 1
            if depth == 0 and func_open:
                body = text[start:i + 1]
                code = code_only(body)
                mo = re.search(r'(\w+)\s*\(', code[:code.index('{')])
                items.append(Item('func', body, mo.group(1) if mo else None))
                start, func_open = i + 1, False
        elif c == ';' and depth == 0 and paren == 0:
            items.append(Item('decl', text[start:i + 1]))
            start = i + 1
        i += 1
    if text[start:].strip() or not items:
        items.append(Item('decl', text[start:]))
    elif text[start:]:                  # trailing blank lines
        items[-1].text += text[start:]
    return items


def best_function(b_body, cands, counters):
    """The FROM function most like b_body: the four with the closest instruction counts,
    compared in full. (ratio, key), or (0, None)."""
    cb = collections.Counter(b_body)
    nb = math.sqrt(sum(v * v for v in cb.values()))

    def cos(k):
        ca, na = counters[k]
        return sum(v * ca.get(t, 0) for t, v in cb.items()) / (na * nb) if na and nb else 0

    best = (0, None)
    for k in sorted(cands, key=lambda k: -cos(k))[:4]:
        sm = difflib.SequenceMatcher(None, cands[k], b_body, autojunk=False)
        if sm.real_quick_ratio() > best[0] and sm.quick_ratio() > best[0]:
            best = max(best, (sm.ratio(), k))
    return best


def port_segment(a, b, seg, srcdir, out, minr):
    """Write one C file for TO's segment or overlay `seg`, function by function: each of
    its functions gets the C of the most similar function FROM's sources define, renamed
    through the alignment of the two (FROM's function name pairs with TO's address), and
    the file gets the declarations those functions use, from the FROM files they come from.
    Functions with no counterpart of at least `minr` are left as comments."""
    tos = sorted(o for s, o in b.starts if s == seg)
    if not tos:
        raise SystemExit('%s has no functions in segment %04x' % (b.exe, seg))
    defs, decls = {}, []
    for path in sorted(glob.glob(os.path.join(srcdir, '*.[cC]'))):
        for it in split_top(read_src(path)):
            mo = re.fullmatch(r'f_([0-9a-f]{4})_([0-9a-f]{4})', it.name or '')
            if it.kind == 'func' and mo:
                defs[(int(mo.group(1), 16), int(mo.group(2), 16))] = (path, it)
            elif it.kind != 'func':
                decls.append((path, it))
    # what the FROM files' modules give where they still align as a whole: most data
    # pairs, which a single function's code may not show
    seed = Maps()
    for path in sorted(glob.glob(os.path.join(srcdir, '*.[cC]'))):
        try:
            port_file(path, a, b, None, seed, write=False)
        except SystemExit:
            pass
    cands = {k: a.body(*k) for k in defs}
    cands = {k: v for k, v in cands.items() if v}
    counters = {}
    for k, v in cands.items():
        c = collections.Counter(v)
        counters[k] = (c, math.sqrt(sum(x * x for x in c.values())))
    # pair each function and align the pair; the address pairs of all of them together
    # rename what a single pair does not show
    pairs, maps_all = {}, seed
    for o in tos:
        bd = b.body(seg, o)
        r, k = best_function(bd, cands, counters) if bd else (0, None)
        pairs[o] = (r, k, None)
        if k is None or r < minr:
            continue
        maps = Maps()
        align(a.rows(*k), b.rows(seg, o), maps, a.dg, b.dg)
        pairs[o] = (r, k, maps)
        for attr in ('f', 'd', 'far', 'seg'):
            for x, v in getattr(maps, attr).items():
                getattr(maps_all, attr)[x].update(v)
        maps_all.addr.update(maps.addr)
    root = b.m.where(seg, tos[0])[0] == 'root'
    # a FROM function ported to several of TO's: its best pair names it in the others' calls
    best_of = {}
    for o in tos:
        r, k, maps = pairs[o]
        if maps is not None and (k not in best_of or r > pairs[best_of[k]][0]):
            best_of[k] = o
    for k, o in best_of.items():
        maps_all.f['f_%04x_%04x' % k]['f_%04x_%04x' % (seg, o)] += 1000
        maps_all.addr[k] = (seg, o)
    funcs, table = [], []
    to_names = collections.defaultdict(set)     # FROM name -> the TO names the bodies use
    users = collections.defaultdict(collections.Counter)   # TO name -> FROM files using it
    used = set()
    for o in tos:
        r, k, maps = pairs[o]
        name = 'f_%04x_%04x' % (seg, o)
        if maps is None:
            close = ' (closest: f_%04x_%04x, %d%%)' % (k[0], k[1], 100 * r) if k else ''
            size = len(b.rows(seg, o) or [])
            funcs.append('/* %s: no counterpart%s, %d instructions */\n' % (name, close, size))
            table.append((name, r, '-', ''))
            continue
        path, it = defs[k]
        rn = Renamer(a, b, maps_all, maps, fixed={it.name: name})
        txt = HEADER.sub('', rn.rename(it.text))
        for x, y in rn.names.items():
            to_names[x].add(y)
            users[y][path] += 1
        if root:                        # every function of a root segment can be public
            txt = re.sub(r'^((?:\s|/\*.*?\*/)*)static\s+', r'\1', txt, flags=re.S)
        funcs.append(txt.strip('\n') + '\n')
        used |= set(IDENT.findall(code_only(txt)))
        notes = '; '.join('%s: %s' % (kk, ', '.join(sorted(rn.report[kk])))
                          for kk in ('collision', 'unmapped') if rn.report[kk])
        if best_of[k] != o:
            notes = ('also the source of f_%04x_%04x; ' % (seg, best_of[k]) + notes).rstrip('; ')
        table.append((name, r, '%s (%s)' % (it.name, os.path.basename(path)), notes))
    includes, kept, data, clash = declarations(decls, to_names, users, used, root)
    text = ('/* @at %04x:%04x */\n'
            '/* Ported function by function from %s by tools/match/port.py --segment: each function\n'
            '   is the C of the most similar one there. */\n\n' % (seg, tos[0], os.path.basename(a.exe)) +
            ''.join(i + '\n' for i in includes) + '\n' + ''.join(kept) + '\n' + '\n'.join(funcs))
    os.makedirs(os.path.dirname(os.path.abspath(out)), exist_ok=True)
    with open(out, 'w', encoding='latin1') as fh:
        fh.write(text)
    print('%04x: %d functions, %d ported (at least %d%% similar) -> %s' %
          (seg, len(table), sum(1 for x in table if x[2] != '-'), 100 * minr, os.path.relpath(out)))
    for name, r, src, notes in table:
        print('  %s %4d%%  %s%s' % (name, 100 * r, src, ('   ' + notes) if notes else ''))
    if data:
        print('  data definitions carried (check which module owns them): %s' % ', '.join(data))
    for c in clash:
        print('  declared differently by the FROM files (the one kept is that of most of its '
              'users): %s' % c)


DECL_BASE = re.compile(r'\s*((?:(?:extern|static|const|volatile|register|unsigned|signed|short|'
                       r'long|char|int|float|double|void|(?:struct|union|enum)\s+\w+)\s+)+)')


def single_declarations(code):
    """A declaration statement as one statement per declarator (`extern int a, b[];` ->
    `extern int a;`, `extern int b[];`); others as they are."""
    bare = code_only(code)
    if '(' in bare or '=' in bare or '{' in bare or ',' not in bare:
        return [code]
    mo = DECL_BASE.match(code)
    if not mo:
        return [code]
    base, rest = mo.group(1), code[mo.end():].rstrip().rstrip(';')
    parts, depth, cur = [], 0, ''
    for c in rest:
        if c == ',' and depth == 0:
            parts.append(cur)
            cur = ''
            continue
        depth += c in '[' and 1 or c in ']' and -1 or 0
        cur += c
    parts.append(cur)
    return ['%s%s;' % (base, x.strip()) for x in parts]


def shape(decl):
    """A declaration without its spacing and parameter names, to compare two."""
    def params(mo):
        if mo.group(1) in KEYWORDS:             # long (far *p)[80]: not a parameter list
            return mo.group(0)
        out = []
        for p in mo.group(2).split(','):
            words = re.findall(r'\w+|\*', p)
            if len(words) > 1 and words[-1] not in KEYWORDS and words[-1] != '*':
                words = words[:-1]
            out.append(' '.join(words))
        return '%s(%s)' % (mo.group(1), ', '.join(out))
    return re.sub(r'(\w+)\s*\(([^()]*)\)', params, re.sub(r'\s+', ' ', decl).strip())


def declarations(decls, to_names, users, used, root):
    """The includes, declarations and definitions FROM's files give the ported functions:
    for each TO name the bodies use, its declaration in the FROM file most of its users come
    from, renamed as the bodies renamed it; the types and macros those need. Returns
    (includes, declarations, data definitions carried)."""
    includes, types, per_name, other = [], {}, {}, []
    for path, it in decls:
        code = re.sub(r'/\*.*?\*/|//[^\n]*', ' ', HEADER.sub('', it.text), flags=re.S).strip()
        if not code_only(code).strip():
            continue
        if it.kind == 'pp':
            mo = re.match(r'#\s*(include|define)\s+(\S+)', code)
            if mo and mo.group(1) == 'include':
                if code not in includes:
                    includes.append(code)
            elif mo:
                types.setdefault(re.match(r'\w+', mo.group(2)).group(0), it.text.strip('\n'))
            continue
        if '{' in code_only(code) or code.startswith('typedef'):    # a type
            mo = re.match(r'typedef\b.*?(\w+)\s*;$', code, re.S) if code.startswith('typedef') else \
                re.match(r'(?:struct|union|enum)\s+(\w+)', code)
            if mo and not SYM.search(code.split('{')[0]):
                types.setdefault(mo.group(1), it.text.strip('\n'))
                continue
        for one in single_declarations(code):
            names = [m.group(0) for m in SYM.finditer(one)]
            if not names:
                other.append((path, one))
                continue
            # each TO name the bodies gave the declared (first) name
            for y in sorted(to_names.get(names[0], ())):
                txt = SYM.sub(lambda m: y if m.group(0) == names[0] else
                              min(to_names.get(m.group(0), {m.group(0)})), one)
                per_name.setdefault(y, []).append((path, txt))
    kept, data, clash = [], [], []
    for y in sorted(per_name, key=lambda y: (y[0] != 'f', y)):
        if y not in used:
            continue
        cands = per_name[y]
        path, txt = max(cands, key=lambda c: (users[y][c[0]], -cands.index(c)))
        shapes = {shape(t) for _, t in cands}
        if len(shapes) > 1:
            clash.append('%s (%s)' % (y, ' | '.join(sorted(shapes))))
        if root and '(' in txt:
            txt = re.sub(r'\bstatic\s+', '', txt)
        if '=' in txt and not txt.startswith('extern'):
            data.append(y)
        kept.append(txt)
    for path, one in other:
        if (set(IDENT.findall(one)) - KEYWORDS) & used:
            kept.append(one)
    # the types and macros the kept text and the bodies use, and those they use
    need, out_types, todo = set(used), [], True
    for t in kept:
        need |= set(IDENT.findall(t))
    while todo:
        todo = False
        for nm, txt in types.items():
            if nm in need and txt not in out_types:
                out_types.append(txt)
                need |= set(IDENT.findall(code_only(txt)))
                todo = True
    order = {txt: k for k, txt in enumerate(types.values())}
    out_types.sort(key=lambda t: order[t])
    return includes, [t + '\n' for t in out_types] + [t + '\n' for t in kept], data, clash

def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('src_exe')
    ap.add_argument('dst_exe')
    ap.add_argument('files', nargs='*')
    ap.add_argument('--out')
    ap.add_argument('--symbols')
    ap.add_argument('--segment', help='port function by function into this TO segment or overlay')
    ap.add_argument('--src', help='--segment: the FROM sources (default: FROM.EXE\'s decomp/src)')
    ap.add_argument('--min', type=float, default=0.65, help='--segment: least similarity (default 0.65)')
    x = ap.parse_args()
    a, b = Game(x.src_exe), Game(x.dst_exe)
    if x.segment:
        seg = int(x.segment, 16)
        src = x.src or os.path.join(os.path.dirname(os.path.abspath(x.src_exe)), 'decomp', 'src')
        out = x.out or os.path.join(os.path.dirname(os.path.abspath(x.dst_exe)), 'decomp', 'wip',
                                    '%04x' % seg, 'base.C')
        port_segment(a, b, seg, src, out, x.min)
        return
    if not x.files:
        ap.error('give the files to port, or --segment')
    outdir = x.out or os.path.join(os.path.dirname(os.path.abspath(x.dst_exe)), 'decomp', 'src')
    os.makedirs(outdir, exist_ok=True)
    maps_all = Maps()
    for f in x.files:                   # first all alignments, so files can refer to each other
        port_file(f, a, b, outdir, maps_all, write=False)
    for f in x.files:
        port_file(f, a, b, outdir, maps_all)
    if x.symbols:
        print('# from %s, through the calls of the ported code:' % x.symbols)
        for line in open(x.symbols):
            mo = re.match(r'([0-9a-f]{4}):([0-9a-f]{4})\s+(\S+)(.*)', line)
            if mo:
                k = 'f_%s_%s' % (mo.group(1), mo.group(2))
                if k in maps_all.f:
                    t = pick(maps_all.f[k])
                    print('%s:%s %-20s %s' % (t[2:6], t[7:11], mo.group(3), mo.group(4).strip()))
                    continue
                bd = a.body(int(mo.group(1), 16), int(mo.group(2), 16))
                same = b.fingerprints().get(bd, []) if bd and len(bd) > 2 else []
                if len(same) == 1:
                    print('%04x:%04x %-20s %s (same code)' % (same[0][0], same[0][1], mo.group(3),
                                                              mo.group(4).strip()))


if __name__ == '__main__':
    main()
