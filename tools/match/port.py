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

With --symbols, also prints the entries of FROM's symbols.txt (runtime functions found by
hand) translated through the call pairs or an identical function, for TO's symbols.txt.

The C itself is not changed: where the games' code differs, the build shows DIFF.
"""
import argparse, bisect, collections, difflib, os, re, sys
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
sys.path.insert(0, os.path.dirname(HERE))
import mkblobs, disasm

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
        funcs = os.path.join(os.path.dirname(os.path.abspath(exe)), 'gen', 'funcs.h')
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

    def body(self, s, o):
        """Normalised instructions of the function at runtime s:o, to its next start."""
        nxt = sorted(x for rs, x in self.starts if rs == s and x > o)
        try:
            rows = self.code(s, o, (nxt[0] - o) if nxt else None)
        except BaseException:
            return None
        return tuple(norm(x[3]) for x in rows)

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
        self.text = open(path, encoding='latin1').read()
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
    exact_d = {k: pick(v) for k, v in maps_all.d.items()}     # pairs from all the files
    exact_d.update({k: pick(v) for k, v in maps.d.items()})
    imm = {k: pick(v) for k, v in maps.imm.items()}
    segmap = {k: pick(v) for k, v in maps_all.seg.items()}
    segmap.update({k: pick(v) for k, v in maps.seg.items()})
    far = {k: pick(v) for k, v in maps_all.far.items()}
    far.update({k: pick(v) for k, v in maps.far.items()})
    report = collections.defaultdict(set)

    def new_addr(rs, ro):
        if (rs, ro) in maps_all.addr:
            return maps_all.addr[(rs, ro)]
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

    def sym(mo):
        kind, ss, oo = mo.group(1), int(mo.group(2), 16), int(mo.group(3), 16)
        name = mo.group(0)
        if kind == 'f':
            t = new_addr(ss, oo)
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

    # map every name once, then undo collisions: two names given the same new name keep
    # it only for the one mapped exactly (aligned code), the others become unmapped
    new = {mo.group(0): sym(mo) for mo in SYM.finditer(sf.text)}
    soft = {n for k in ('guessed', 'by similar body') for e in report[k] for n in [e.split(' ')[0]]}
    by_new = collections.defaultdict(list)
    for n, t in new.items():
        if not t.startswith(PREFIX):
            by_new[t].append(n)
    for t, ns in by_new.items():
        if len(ns) > 1:
            hard = [n for n in ns if n not in soft]
            for n in ns:
                if len(hard) != 1 or n != hard[0]:
                    new[n] = PREFIX + n
                    report['collision'].add('%s (also %s)' % (n, t))
    out = SYM.sub(lambda mo: new[mo.group(0)], sf.text)
    # placement comments
    at = new_addr(*sf.at)
    if at is None:
        raise SystemExit('%s: its @at %04x:%04x has no counterpart' % (path, sf.at[0], sf.at[1]))
    out = re.sub(r'@at\s+[0-9a-fA-F]{4}:[0-9a-fA-F]{4}', '@at %04x:%04x' % at, out)
    if sf.data:
        d = data_counterpart(a, b, sf.data[1], exact_d)
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


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('src_exe')
    ap.add_argument('dst_exe')
    ap.add_argument('files', nargs='+')
    ap.add_argument('--out')
    ap.add_argument('--symbols')
    x = ap.parse_args()
    a, b = Game(x.src_exe), Game(x.dst_exe)
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
