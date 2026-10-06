"""Link the Borland runtime from its libraries instead of copying its bytes.

The runtime, the floating-point emulator and the overlay manager are stock library modules
(CM1: Borland C++ 3.1's; CM93: 3.0's; CM94: 4.02's). TLINK put them after the game's own
modules, in the order it pulled them out of the libraries. Given the libraries (and the
startup object), this finds every module in the executable, cuts its code and data out of
the blobs, and links the module itself in its place: the startup code right after U00,
the others after the game, in the original order. TLINK then lays them out, relocations
and all, as it did originally.

    apply(model, ['.../C0L.OBJ', '.../EMU.LIB', '.../MATHL.LIB', '.../CL.LIB', '.../OVERLAY.LIB'])

Finding the modules: a module's code must occur exactly once (fixup bytes are wildcards,
and a far call may have become TLINK's 90 0E E8). Tiny modules that occur in many places
(stubs of a few bytes) fill the gaps left between found ones, in the alphabetical order the
library passes extracted them in. Identical modules (MEMCPY and FMEMCPY...) at the same
place: the one whose names other modules need.

The order: by each module's first relocation; modules without relocations stay after
their predecessor in their segment.

The data: the startup code's contributions start each segment; the library modules' are
the tail of each segment, packed in that order with their alignments. The packing is
checked against the original bytes.
"""
import os, re, struct
import omf

SIZE = {'off16': 2, 'seg16': 2, 'ptr32': 4, 'off8': 1, 'off16l': 2, 'hi8': 1}
ALIGNS = {1: 1, 2: 2, 3: 16, 4: 256, 5: 4}


class LibModule:
    def __init__(self, mod, lib):
        self.mod, self.lib, self.name = mod, lib, mod.name
        self.code_si = next((i for i, s in enumerate(mod.segs, 1) if s[1] == 'CODE' and s[2] > 0), None)
        self.at = None                          # image offset of its code
        self.places = {}                        # segment index (module) -> image offset

    @property
    def code(self):
        return bytes(self.mod.data.get(self.code_si, b''))

    def pattern(self, si=None):
        si = si or self.code_si
        code = bytes(self.mod.data.get(si, b''))
        fx, calls = set(), set()
        for f in self.mod.fixups:
            if f[0] == si:
                fx.update(range(f[1], f[1] + SIZE.get(f[2], 2)))
                if f[2] == 'ptr32' and f[1] > 0 and code[f[1] - 1] in (0x9a, 0xea):
                    calls.add(f[1] - 1)
        out, i = [], 0
        while i < len(code):
            if i in calls:
                out.append(b'(?:\\x9a....|\\x90\\x0e\\xe8..)' if code[i] == 0x9a else b'(?:\\xea....|\\x90\\x90\\xe9..)')
                i += 5
                continue
            out.append(b'.' if i in fx else re.escape(code[i:i + 1]))
            i += 1
        return re.compile(b''.join(out), re.S)

    def contributions(self, empty=False):
        """(module segment index, name, class, length, alignment) of its segments; empty
        ones only with empty=True (they still align what follows)."""
        return [(i, s[0], s[1], s[2], ALIGNS.get(s[3] >> 5, 1)) for i, s in enumerate(self.mod.segs, 1)
                if s[2] > 0 or empty]


def load(paths):
    out = []
    for li, p in enumerate(paths):
        for k, mod in enumerate(omf.read_obj(open(p, 'rb').read())):
            lm = LibModule(mod, os.path.basename(p).upper())
            lm.rank = (li, k)                   # library, position in it
            out.append(lm)
    return out


def find(model, mods, log):
    img = bytes(model.e.image)
    placed, multi = [], []
    for lm in mods:
        if lm.code_si is None:
            continue
        hits = [m.start() for m in lm.pattern().finditer(img)]
        if len(hits) == 1:
            lm.at = hits[0]
            placed.append(lm)
        elif hits:
            multi.append(lm)
    placed.sort(key=lambda lm: lm.at)
    # a module starting inside another one's code: a coincidence (small modules)
    keep = []
    end = lambda x: x.at + len(x.code)
    for lm in placed:
        # overlapping matches (not identical modules at the same place): the shorter ones
        # are coincidences
        over = [k for k in keep if k.at < end(lm) and lm.at < end(k) and
                not (k.at == lm.at and len(k.code) == len(lm.code))]
        if not over:
            keep.append(lm)
        elif len(lm.code) > max(len(k.code) for k in over):
            gone = [k for k in keep if any(k.at == o.at and len(k.code) == len(o.code) for o in over)]
            for k in gone:
                log('  dropped %s (%s) at %05x: overlaps %s' % (k.name, k.lib, k.at, lm.name))
                keep.remove(k)
            keep.append(lm)
        else:
            log('  dropped %s (%s) at %05x: overlaps %s' % (lm.name, lm.lib, lm.at, over[0].name))
    placed = keep
    # a match whose names are defined by no library given and lead nowhere in the original
    # is a coincidence (GREGISTR, which needs the BGI library, where DEL and DELARRAY are)
    known = set()
    for lm in mods:
        known.update(lm.mod.publics)
    keep = []
    for lm in placed:
        lm.places = {lm.code_si: lm.at}
        foreign = {}
        for f in lm.mod.fixups:
            if f[5][0] == 'ext' and f[0] == lm.code_si:
                n = lm.mod.externs[f[5][1]]
                if n not in known and not n.startswith('__SEG') and n not in ('__EXENAME__', '__EXEDATE__'):
                    foreign.setdefault(n, []).append(ref_target(model, lm, f))
        if any(all(t is None for t in ts) for ts in foreign.values()):
            tiles = tiling(img, multi, lm.at, lm.at + len(lm.code))
            if tiles:
                log('  %s (%s) at %05x needs %s: it is %s' % (lm.name, lm.lib, lm.at, ', '.join(foreign),
                                                           ' + '.join(t.name for t in tiles)))
                keep.extend(tiles)
                for t in tiles:
                    multi.remove(t)
                continue
        keep.append(lm)
    placed = keep
    # gaps between found modules of a segment: tiny modules, by alphabetical position
    changed = True
    while changed:
        changed = False
        by_seg = {}
        for lm in placed:
            by_seg.setdefault(model.seg_of(lm.at).index, []).append(lm)
        for si, lst in by_seg.items():
            lst.sort(key=lambda x: x.at)
            seg = model.segs[si]
            for k, lm in enumerate(lst):
                lo = lm.at + len(lm.code)
                hi = lst[k + 1].at if k + 1 < len(lst) else seg.end
                if hi - lo < 1:
                    continue
                prev = lm.name.upper()
                nxt = lst[k + 1].name.upper() if k + 1 < len(lst) else '\x7f'
                for c in multi:
                    if c in placed or c.lib != lm.lib and (k + 1 >= len(lst) or c.lib != lst[k + 1].lib):
                        continue
                    n = len(c.code)
                    if n > hi - lo or not c.pattern().match(img, lo):
                        continue
                    if not (prev < c.name.upper() < nxt) and hi - lo - n >= 2:
                        continue
                    c.at = lo
                    placed.append(c)
                    changed = True
                    break
                if changed:
                    break
            if changed:
                break
    placed.sort(key=lambda lm: lm.at)
    return placed


def tiling(img, cands, lo, hi, depth=3):
    """Modules (each matching where the previous one ends) that cover [lo, hi) exactly."""
    if lo == hi:
        return []
    if depth == 0:
        return None
    for c in cands:
        n = len(c.code)
        if n and lo + n <= hi and c.pattern().match(img, lo):
            rest = tiling(img, [x for x in cands if x is not c], lo + n, hi, depth - 1)
            if rest is not None:
                c.at = lo
                return [c] + rest
    return None


def choose_aliases(placed, log):
    """Identical modules found at the same place: keep the one other modules need."""
    groups = {}
    for lm in placed:
        groups.setdefault((lm.at, len(lm.code)), []).append(lm)
    needed = set()
    for lm in placed:
        needed.update(lm.mod.externs[1:])
    out = []
    for key in sorted(groups):
        g = groups[key]
        if len(g) > 1:
            want = [x for x in g if needed & set(x.mod.publics)]
            pick = want[0] if want else g[0]
            log('  %05x: %s (identical: %s)' % (key[0], pick.name, ', '.join(x.name for x in g if x is not pick)))
            g = [pick]
        out.append(g[0])
    return out


def order(model, placed, log=print):
    """Link order, as TLINK extracted the modules: library by library (command line
    order); in a library, pass by pass, each pass in library file order. In each code
    segment the passes show as runs of increasing file position. The relocations (in link
    order) must agree."""
    by_seg = {}
    for lm in placed:
        by_seg.setdefault((lm.rank[0], model.seg_of(lm.at).index), []).append(lm)
    key = {}
    for (li, si), lst in by_seg.items():
        lst.sort(key=lambda x: x.at)
        p, last = 0, -1
        for lm in lst:
            if lm.rank[1] <= last:
                p += 1
            last = lm.rank[1]
            key[id(lm)] = (li, p, lm.rank[1])
    # the libraries' command line order: by where their first module is in the code
    # segment they share (_TEXT), else as given
    shared = min(by_seg, key=lambda k: k[1])[1] if by_seg else None
    lib_at = {}
    for lm in placed:
        if model.seg_of(lm.at).index == shared:
            lib_at[lm.rank[0]] = min(lib_at.get(lm.rank[0], 1 << 30), lm.at)
    lib_order = {li: (lib_at.get(li, 1 << 30), li) for li in {lm.rank[0] for lm in placed}}
    model.lib_order = {li: k for k, li in enumerate(sorted(lib_order, key=lambda li: lib_order[li]))}
    key = {k: (lib_order[v[0]],) + v[1:] for k, v in key.items()}
    out = sorted(placed, key=lambda lm: key[id(lm)])
    first = {}
    for k, (o, sg) in enumerate(model.e.relocs):
        a = sg * 16 + o
        for lm in out:
            if lm.at <= a < lm.at + len(lm.code):
                first.setdefault(id(lm), k)
                break
    seen = [(first[id(lm)], lm.name) for lm in out if id(lm) in first]
    for (a, na), (b, nb) in zip(seen, seen[1:]):
        if b < a:
            log('  warning: %s comes before %s in the relocations' % (nb, na))
    return out


def data_only(mods, linked, log):
    """The modules without code that the linked ones need (by name), with what they need
    in turn: the first library module defining each name."""
    by_name = {}
    for lm in mods:
        for n in lm.mod.publics:
            by_name.setdefault(n, lm)
    out = []
    while True:
        have = set()
        for lm in linked + out:
            have.update(lm.mod.publics)
        new = []
        for lm in linked + out:
            for n in lm.mod.externs[1:]:
                d = by_name.get(n)
                if n not in have and d is not None and d.code_si is None and d not in out and d not in new:
                    new.append(d)
        if not new:
            return out
        out.extend(new)


def insert_data_only(order_, extra, log):
    """Put each data-only module where TLINK extracted it: TLINK scans a library from its
    start, extracting what is needed, over and over (a pass per run of increasing library
    positions in the link order); a module comes out in the first pass that reaches its
    position after a module needing it."""
    seq = list(order_)
    for d in sorted(extra, key=lambda x: x.rank):
        names = set(d.mod.publics)
        needers = [i for i, lm in enumerate(seq) if names & set(lm.mod.externs[1:])]
        first = needers[0] if needers else 0
        best = None
        for i in range(first, len(seq) + 1):
            prev = seq[i - 1] if i > 0 else None
            nxt = seq[i] if i < len(seq) else None
            ok_prev = prev is not None and prev.rank[0] == d.rank[0] and prev.rank[1] < d.rank[1]
            ok_next = nxt is None or nxt.rank[0] != d.rank[0] or d.rank[1] < nxt.rank[1]
            starts_run = prev is None or prev.rank[0] != d.rank[0] or prev.rank[1] > d.rank[1]
            if i > first and (ok_prev or starts_run and nxt is not None and nxt.rank[0] == d.rank[0]) and ok_next:
                best = i
                break
        if best is None:
            best = len(seq)
        seq.insert(best, d)
        log('  %-10s (data only) after %s' % (d.name, seq[best - 1].name if best else '-'))
    return seq


class Misfit(Exception):
    def __init__(self, lm, msg, after=(), move=None):
        Exception.__init__(self, msg)
        self.lm = lm
        self.after = list(after)                # the modules placed after it (later in order)
        self.move = move                        # (data-only module, module to put it after)
        self.pos = None                         # where the packing had got to


def group_base(model, name):
    segs = [x for x in model.segs if x.group == name]
    return min(x.start for x in segs) // 16 * 16 if segs else None


def ref_target(model, lm, f, tgt_group=None, tgt_seg=None):
    """The address a fixup of a placed module resolved to in the original (its
    displacement taken off), or None when it cannot tell."""
    if f[0] not in lm.places:
        return None
    img = model.e.image
    a = lm.places[f[0]] + f[1]
    if f[2] == 'ptr32':
        if a >= 1 and img[a - 1] == 0x90 and img[a] in (0x0e, 0x90):
            return None                         # a far call or jump TLINK made near
        off, sg = struct.unpack('<HH', img[a:a + 4])
        t = sg * 16 + off - f[6]
        return t if 0 <= t < len(img) else None
    if f[2] in ('off16', 'off16l') and f[3] == 'seg':
        frame = f[4]
        g = None
        if frame and frame[0] == 1 and frame[1] and frame[1] <= len(lm.mod.grps):
            g = lm.mod.grps[frame[1] - 1][0]
        elif frame and frame[0] == 5:
            g = tgt_group
        base = group_base(model, g) if g else None
        if base is None and frame and frame[0] == 5 and tgt_seg:
            # the target's own segment is the frame (it is in no group)
            sg = next((x for x in model.segs if x.name == tgt_seg), None)
            base = sg.frame * 16 if sg is not None else None
        if base is None:
            return None
        return base + struct.unpack('<H', img[a:a + 2])[0] - f[6]
    return None


def anchor(model, linked, d):
    """Where a data-only module is, from the references to its names in the original:
    {module segment index: image offset}; {} when nothing tells; None when the references
    lead to other bytes (the game defines those names itself)."""
    img = model.e.image
    votes = {}
    for n, (psi, pofs) in d.mod.publics.items():
        grp = next((g for g, members in d.mod.grps if psi in members), None)
        for lm in linked:
            for f in lm.mod.fixups:
                if f[5][0] == 'ext' and lm.mod.externs[f[5][1]] == n:
                    t = ref_target(model, lm, f, grp, d.mod.segs[psi - 1][0])
                    if t is not None:
                        votes.setdefault(psi, {}).setdefault(t - pofs, 0)
                        votes[psi][t - pofs] += 1
    if not votes:
        return {}
    out = {}
    for psi, cands in votes.items():
        best = None
        for t, c in sorted(cands.items(), key=lambda kv: -kv[1]):
            for k in sorted(range(-16, 17), key=abs):   # a reference to a field, or indexed from 1
                if same_data(img, d, psi, t - k):
                    best = t - k
                    break
            if best is not None:
                break
        if best is None:
            return None
        out[psi] = best
    return out


def own_anchors(model, lm):
    """Where a placed module's data contributions are, from its code's references to them:
    the original's resolved offset less the offset within the contribution (in the module's
    own bytes) and the fixup's displacement. {module segment index: image offset}"""
    img = model.e.image
    votes = {}
    for f in lm.mod.fixups:
        kind, ti = f[5]
        if kind != 'seg' or ti == lm.code_si or f[0] not in lm.places or ti > len(lm.mod.segs):
            continue
        if lm.mod.segs[ti - 1][1] == 'CODE':
            continue
        own = bytes(lm.mod.data.get(f[0], b''))
        if f[1] + 2 > len(own):
            continue
        addend = struct.unpack('<H', own[f[1]:f[1] + 2])[0]
        grp = next((g for g, mem in lm.mod.grps if ti in mem), None)
        t = ref_target(model, lm, f, grp, lm.mod.segs[ti - 1][0])
        if t is None:
            continue
        gb = group_base(model, grp) if grp else model.seg_of(t).frame * 16
        base = gb + ((t - gb - addend) & 0xffff)     # the offset wraps (a table indexed from -6)
        votes.setdefault(ti, {}).setdefault(base, 0)
        votes[ti][base] += 1
    return {ti: max(v.items(), key=lambda kv: kv[1])[0] for ti, v in votes.items()}


def place_data(model, seq, anchors, startup, log, fillers=()):
    """Image offset of every non-code contribution, and the final link order. The startup
    object's contributions start their segments; the others fill the segments' tails in
    link order, packed backwards from each segment's end with their alignments, around the
    data-only modules whose place the references give (anchors), and checked against the
    original bytes."""
    img = model.e.image
    segs_by_name = {x.name: x for x in model.segs}
    seq = list(seq)
    names = []
    for lm in seq:
        for si, name, cls, n, al in lm.contributions():
            if si != lm.code_si and name not in names and name in segs_by_name:
                names.append(name)
    # segments with anchors first, so that their modules get their place in the order
    names.sort(key=lambda nm: (not any(nm == lm.mod.segs[si - 1][0] for lm in anchors for si in anchors[lm]), nm))
    for name in names:
        seg = segs_by_name.get(name)
        if seg is None:
            raise SystemExit('segment %s is not in the executable' % name)
        exp, fixed = [], []
        for lm in seq:
            for si, nm, cls, n, al in lm.contributions(empty=True):
                if nm != name or si == lm.code_si:
                    continue
                if lm is startup:
                    if name != '_STACK':
                        lm.places[si] = seg.start
                elif lm in anchors and si in anchors[lm]:
                    lm.places[si] = anchors[lm][si]
                    fixed.append((lm, si, n, al))
                else:
                    exp.append((lm, si, n, al))
        if name == '_STACK':
            continue
        # anchored data-only modules: right after the anchored code module before them
        code_fixed = sorted((x[0].places[x[1]], id(x[0]), x[0]) for x in fixed if x[0].code_si is not None and x[2] > 0)
        code_fixed = [(a2, c) for a2, _, c in code_fixed]
        done = []
        # from the top down: a place is good when everything above it packs
        for x in sorted(fixed, key=lambda x: x[0].places[x[1]], reverse=True):
            lm = x[0]
            if lm.code_si is not None or x[2] == 0:
                continue
            before = sorted([(a2, k, c) for k, (a2, c) in enumerate(code_fixed + done) if a2 < lm.places[x[1]]],
                            key=lambda t: (t[0], t[1]))
            before = [c for a2, k, c in before]
            later = sorted([(a2, k, c) for k, (a2, c) in enumerate(code_fixed + done) if a2 > lm.places[x[1]]],
                           key=lambda t: (t[0], t[1]))
            done.append((lm.places[x[1]], lm))
            seq.remove(lm)
            lo = seq.index(before[-1]) + 1 if before else 0
            hi = seq.index(later[0][2]) if later else len(seq)
            # between those two: where the segment packs, library and file order first
            lk = lambda x: (model.lib_order.get(x.rank[0], x.rank[0]), x.rank[1])
            p_ = lo
            while p_ < hi and lk(seq[p_]) < lk(lm):
                p_ += 1
            for c in [p_] + [q for q in range(lo, hi + 1) if q != p_]:
                seq.insert(c, lm)
                e = pack(img, seg, name, seq, exp, fixed, dry=True)
                if e is None or e.pos is not None and e.pos <= lm.places[x[1]] and e.lm is not lm:
                    break
                seq.remove(lm)
            else:
                seq.insert(p_, lm)
        for _ in range(len(exp) + len(fillers) + 1):
            fill = [(f, si, n, al) for f in fillers if f not in seq
                    for si, nm, cls, n, al in f.contributions() if nm == name]
            err = pack(img, seg, name, seq, exp, fixed, fill=fill)
            if not (err and err.move):
                break
            f, x = err.move                     # the filler goes right after x
            if f in seq:
                seq.remove(f)
            seq.insert(seq.index(x) + 1, f)
            log('  %-10s (data only) after %s' % (f.name, x.name))
            exp = [e for e in exp] + [(f, si, n, al) for si, nm, cls, n, al in f.contributions(empty=True)
                                      if nm == name and cls != 'CODE']
            exp.sort(key=lambda e: seq.index(e[0]))
        if err:
            raise SystemExit(str(err))
        pos = min(x[0].places[x[1]] for x in exp + fixed) if exp + fixed else seg.end
        items = exp + fixed
        log('  %-10s %05x-%05x from %d modules' % (name, pos, seg.end, len(items)))
    return seq


def pack(img, seg, name, seq, exp, fixed, dry=False, fill=()):
    """Lay a segment's contributions out backwards from its end, strictly in reverse link
    order: anchored ones must end where the next one starts (less its alignment), the
    others go there and must hold the original bytes. Returns a Misfit, or None (and with
    dry=False sets the places)."""
    rank = {id(lm): k for k, lm in enumerate(seq)}
    items = sorted(exp + fixed, key=lambda x: rank[id(x[0])], reverse=True)
    anchored = {id(x[0]) for x in fixed}
    pos, nxt_al, after = seg.end, 16, None     # the segment may end with padding
    out = []
    for lm, si, n, al in items:
        # (what lies between it and the next one is padding: zeros)
        if id(lm) in anchored:
            a = lm.places[si]
            ok = pos - nxt_al < a + n <= pos and not any(img[a + n:pos])
        else:
            # its end may be anywhere the next one's alignment would skip to `pos`
            ok = False
            a = (pos - n) // al * al
            while a + n > pos - nxt_al and a >= 0:
                if same_data(img, lm, si, a, skip=2 if name == '_STUB_' else 0) and not any(img[a + n:pos]):
                    ok = True
                    break
                a -= al
            if not ok:
                a = (pos - n) // al * al
        if not ok:
            # a data-only module nothing anchors (a filler) may go here, between this one
            # and the one after it
            for fl, fsi, fn, fal in fill:
                c = (pos - fn) // fal * fal
                while fn and c + fn > pos - nxt_al and c >= 0:
                    if same_data(img, fl, fsi, c) and not any(img[c + fn:pos]) and \
                            (id(lm) not in anchored or c >= a + n and not any(img[a + n:c])):
                        return Misfit(lm, 'filler', [x[0] for x in out], move=(fl, lm))
                    c -= fal
            e = Misfit(lm, '%s: %s (%s) does not fit before %05x (%s)' %
                       (name, lm.name, lm.lib, pos, after.name if after else 'the end'),
                       [x[0] for x in out])
            e.pos = pos
            return e
        out.append((lm, si, a))
        pos, nxt_al, after = a, al, lm
    if not dry:
        for lm, si, a in out:
            lm.places[si] = a
    return None


def same_data(img, lm, si, at, skip=0):
    data = bytes(lm.mod.data.get(si, b''))
    if lm.mod.segs[si - 1][1] == 'CODE' and data:     # a second code segment (_TEXTC)
        return at >= 0 and lm.pattern(si).match(bytes(img[at:at + len(data)])) is not None
    fx = set(range(skip))
    for f in lm.mod.fixups:
        if f[0] == si:
            fx.update(range(f[1], f[1] + SIZE.get(f[2], 2)))
    if at < 0 or at + len(data) > len(img):
        return False
    return all(i in fx or img[at + i] == data[i] for i in range(len(data)))


def apply(model, paths, outdir, log=print):
    """Cut the modules found out of the blobs and link them instead. Returns their names."""
    mods = load(paths)
    placed = find(model, mods, log)
    placed = choose_aliases(placed, log)
    placed = order(model, placed, log)
    for lm in placed:
        if lm.code_si is not None:
            lm.places[lm.code_si] = lm.at
    extra = data_only(mods, placed, log)
    anchors, floating = {}, []
    for d in extra:
        a = anchor(model, placed, d)
        if a is None:
            log('  %-10s (data only) not linked: the game defines its names' % d.name)
        elif a:
            anchors[d] = a
            floating.append(d)
        else:
            floating.append(d)
    # unanchored ones fill the gaps the packing finds; those only in _STACK (not packed:
    # EMUVARS, the emulator's data on the stack) go where the library order puts them
    stack_only = [d for d in floating if d not in anchors and
                  all(c[1] == '_STACK' for c in d.contributions())]
    fillers = [d for d in floating if d not in anchors and d not in stack_only]
    placed = insert_data_only(placed, [d for d in floating if d in anchors or d in stack_only], log)
    startup = next((lm for lm in placed if lm.lib.endswith('.OBJ') and lm.at == 0), None)
    for lm in placed:
        if lm.code_si is not None and lm is not startup:
            own = own_anchors(model, lm)
            if own:
                anchors.setdefault(lm, {}).update(own)
    model.data_only = set(id(d) for d in floating)
    # second code segments (BC4's C++ modules: _TEXTC): the segment holding them
    img = bytes(model.e.image)
    for lm in placed:
        for si, name, cls, n, al in lm.contributions():
            if cls == 'CODE' and si != lm.code_si and n and not any(x.name == name for x in model.segs):
                hits = [h.start() for h in lm.pattern(si).finditer(img)]
                if len(hits) == 1:
                    sg = model.seg_of(hits[0])
                    log('  segment %s is %s' % (sg.name, name))
                    sg.name, sg.cls = name, cls
    placed = place_data(model, placed, anchors, startup, log, fillers)
    for d in fillers:
        if d not in placed:
            log('  %-10s (data only) not linked: nothing needs its place' % d.name)
    # the segments get their real names (EMU_PROG, E87_PROG...)
    for lm in placed:
        for si, name, cls, n, al in lm.contributions():
            s = model.seg_of(lm.places.get(si, -1)) if si in lm.places else None
            if s is not None and s.name != name and s.kind == 'code':
                log('  segment %s is %s' % (s.name, name))
                for o in model.segs:            # a guessed name elsewhere (_OVRTEXT_) goes
                    if o.name == name and o is not s:
                        o.name = 'S%02d_TEXT' % o.index
                s.name, s.cls = name, cls
    # the ranges to take out: every contribution, and the gaps between them (padding)
    ranges = {}
    for lm in placed:
        for si, name, cls, n, al in lm.contributions():
            if si in lm.places:
                a = lm.places[si]
                ranges.setdefault(model.seg_of(a).index, []).append((a, a + n, lm is startup))
    if startup:
        st = next(s for s in model.segs if s.kind == 'stack')
        # c0's stack-combined part and EMUVARS's common one (laid over it) make the segment
        ranges.setdefault(st.index, []).append((st.start, st.end, True))
    for si, rs in ranges.items():
        rs.sort()
        seg = model.segs[si]
        # library modules fill their segment's tail: padding between them goes too
        lib = [r[:2] for r in rs if not r[2]]
        cut = [r[:2] for r in rs]
        for (a0, a1), (b0, b1) in zip(lib, lib[1:]):
            if b0 > a1:
                pad = bytes(model.e.image[a1:b0])
                if b0 - a1 >= 16 or any(pad):
                    raise SystemExit('%05x-%05x between library modules is not padding' % (a1, b0))
                cut.append((a1, b0))
        if lib and lib[-1][1] < seg.end:
            cut.append((lib[-1][1], seg.end))
        merged = []
        for lo, hi in sorted(cut):
            if merged and lo <= merged[-1][1]:
                merged[-1][1] = max(merged[-1][1], hi)
            else:
                merged.append([lo, hi])
        for lo, hi in merged:
            model.remove_range(lo, hi)
    # the objects
    os.makedirs(outdir, exist_ok=True)
    units = []
    for lm in placed:
        path = os.path.join(outdir, (lm.name[:8].upper().replace('.', '_') or 'MOD') + '.OBJ')
        k = 1
        while os.path.basename(path) in {os.path.basename(u.external) for u in units}:
            path = os.path.join(outdir, '%s%d.OBJ' % (lm.name[:6].upper(), k))
            k += 1
        open(path, 'wb').write(lm.mod.raw)
        units.append(model.library_unit(path, lm is startup))
    if startup:
        # U00 only declares the segments (their order); its pieces (whole segments without
        # relocations, the game's _BSS...) follow the startup code, whose labels (edata@...)
        # start those segments
        u00 = model.units[0]
        if u00.pieces:
            from mkblobs import Unit
            rest = Unit('U00B')
            rest.pieces, u00.pieces = u00.pieces, []
            model.units.insert(model.units.index(units[[lm is startup for lm in placed].index(True)]) + 1, rest)
    # a segment U00 declares takes the attributes (alignment, combine type) of its first
    # real contributor when that is the startup code or a library module
    game_pieces = {p.seg.index for u in model.units if not getattr(u, 'library', False) for p in u.pieces}
    for seg in model.segs:
        if seg.kind == 'stub':
            continue
        firsts = [lm.mod.segs[si - 1][3] for lm in placed for si, name, cls, n, al in lm.contributions(empty=True)
                  if name == seg.name and (lm is startup or seg.index not in game_pieces)]
        if firsts and firsts[0] != seg.attr:
            seg.attr = firsts[0]
    publics = set()
    for lm in placed:
        publics.update(lm.mod.publics)
    model.library_publics = publics
    # code ranges, for progress reports: (module, library, image offset, length)
    model.library_code = [(lm.name, lm.lib, lm.places[si], n) for lm in placed
                          for si, name, cls, n, al in lm.contributions() if cls == 'CODE' and si in lm.places]
    # names the modules need that the game defines: their addresses, from the original
    groups = {}
    for lm in mods:                 # a name's group, from the module that would define it
        for n, (psi, _) in lm.mod.publics.items():
            groups.setdefault(n, next((g for g, mem in lm.mod.grps if psi in mem), None))
    have = publics | {p for p, _ in model.abs_publics} | {x for _, x, _ in model.extra_publics} | \
        {'__SEGTABLE__', '__SEGTABEND__', '__EXENAME__', '__EXEDATE__'}     # TLINK's own
    for lm in placed:
        for f in lm.mod.fixups:
            kind, ti = f[5]
            if kind != 'ext':
                continue
            n = lm.mod.externs[ti]
            if n in have:
                continue
            tgt = ref_target(model, lm, f, groups.get(n) or 'DGROUP')
            if tgt is None:
                continue
            s_ = model.seg_of(tgt)
            model.extra_publics.append((s_.index, n, tgt - s_.start))
            have.add(n)
            log('  %-16s the game\'s, at %05x' % (n, tgt))
    return placed
