#!/usr/bin/env python3
"""Cut a TLINK 5.0 VROOMM executable into OMF object modules that TLINK links back
into the same executable, byte for byte.

  mkblobs.py GAME.EXE OUTDIR          writes OUTDIR/U??.OBJ, OUTDIR/OV??.OBJ, OUTDIR/LINK.RSP

build.py uses the same model and replaces parts of the pieces by compiled C
(Piece.replace). How it works (details in docs/matching.md):

  - every TLINK logical segment of the original (the _EXEINFO_ segment table lists them)
    gets a segment of the same class, alignment and group. Names the executable does not
    record are invented.
  - U00 declares all root segments in their original order, so TLINK lays them out the
    same way, and holds the startup code piece and every segment without relocations.
  - TLINK writes MZ relocations in the order it meets the fixups, module by module and
    record by record. The original relocation table is cut into runs ("visits") of one
    segment; each visit becomes one unit (U01, U02, ...) holding that piece of the
    segment, with its fixups in the original order.
  - each overlay becomes OV??.OBJ, linked inside /o ... /o-. Its public symbols are exactly
    the original stub entries (TLINK makes one stub entry per public, in reverse order).
  - TLINK 5.0 turns a far call to the same segment (9A off seg) into 90 0E E8 rel16 but
    keeps the relocation / overlay fixup slot it reserved for it, which shows as padding.
    The far calls are given back to TLINK so it does the same.
  - fixups target __segNN (start of segment NN, a public of U00) plus a displacement, an
    overlay entry f_SSSS_OOOO (runtime numbering, as tools/recomp.py), or the segment itself.
"""
import os, struct, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import exemodel
from omfw import ObjWriter, Fix

RT = 0x1000

OVRINFO_NAMES = ['_FARBSS', '_OVERLAY_', '_OVRDATA_', '_STUB_', '_EXTSEG_', '_EMSSEG_', '_VDISKSEG_', '_EXEINFO_']
OVRINFO_CLASSES = ['FAR_BSS'] + ['OVRINFO'] * 7
DGROUP_NAMES = [('_DATA', 'DATA'), ('_CVTSEG', 'DATA'), ('_SCNSEG', 'DATA'), ('_CONST', 'CONST'),
                ('_INIT_', 'INITDATA'), ('_INITEND_', 'INITDATA'), ('_EXIT_', 'EXITDATA'),
                ('_EXITEND_', 'EXITDATA'), ('_BSS', 'BSS'), ('_BSSEND', 'BSSEND')]
ALIGN = {1: 0x20, 2: 0x40, 16: 0x60}
PUBLIC, STACK = 0x08, 0x14
BYTE_PUBLIC = 0x20 | PUBLIC
LOCSIZE = {'off8': 1, 'off16': 2, 'seg16': 2, 'ptr32': 4}


class Fx:
    """A fixup of a piece.
    at:    address of the location (image address for root pieces, code offset in overlays)
    loc:   'off8' | 'off16' | 'seg16' | 'ptr32'
    tgt:   ('ext', symbol) | ('seg', segment index) | ('self',)  (this segment; disp is the
           target address, in the same address space as at)
    disp:  displacement added to the target
    frame: None (the target's frame) | ('grp', name) | ('seg', segment index)
    rel:   self-relative
    call:  a far call to this segment that TLINK rewrites (needs the 9A opcode in the record)
    """
    __slots__ = ('at', 'loc', 'tgt', 'disp', 'frame', 'rel', 'call')

    def __init__(self, at, loc, tgt, disp=0, frame=None, rel=False, call=False):
        self.at, self.loc, self.tgt, self.disp, self.frame, self.rel, self.call = at, loc, tgt, disp, frame, rel, call

    @property
    def span(self):
        lo = self.at - 1 if self.call else self.at
        return lo, self.at + LOCSIZE[self.loc]

    def makes_reloc(self):
        return self.loc in ('seg16', 'ptr32') and not self.call

    @property
    def site(self):
        """Address of the segment word this fixup relocates."""
        return self.at + 2 if self.loc == 'ptr32' else self.at


class Piece:
    """A contiguous part of one segment, held by one object module."""

    def __init__(self, seg, lo, hi, data):
        self.seg, self.lo, self.hi = seg, lo, hi
        self.data = bytearray(data)       # bytes of [lo, hi)
        self.fixups = []                  # relocation-producing fixups, in original order
        self.extras = []                  # the others (converted calls, offsets)
        self.publics = []                 # (name, address)
        self.public_combine = False       # force byte/public (second part of the stack)
        self.replaced = []                # (lo, hi, label) ranges supplied by compiled C

    def replace(self, lo, code, fixups, label):
        """Put compiled code (with its fixups, Fx in this piece's address space) at lo.
        Fixups at the locations of original relocations take their place in the original
        order, so the relocation table keeps its order; others are appended."""
        hi = lo + len(code)
        if not (self.lo <= lo and hi <= self.hi):
            raise SystemExit('%s: %05x-%05x does not fit in piece %05x-%05x' % (label, lo, hi, self.lo, self.hi))
        for a, b, other in self.replaced:
            if lo < b and hi > a:
                raise SystemExit('%s overlaps %s' % (label, other))
        self.replaced.append((lo, hi, label))
        self.data[lo - self.lo:hi - self.lo] = code
        inside = lambda f: lo <= f.at < hi
        # matched by the relocated word: a far pointer fixup (ptr32) and a fixup of just
        # its segment word (seg16) give the same relocation
        new = {f.site: f for f in fixups if f.makes_reloc()}
        out = []
        for f in self.fixups:
            if inside(f):
                c = new.pop(f.site, None)
                if c is not None:
                    out.append(c)
            else:
                out.append(f)
        self.fixups = out + sorted(new.values(), key=lambda f: -f.at)
        self.extras = [f for f in self.extras if not inside(f)] + [f for f in fixups if not f.makes_reloc()]


class Unit:
    def __init__(self, name):
        self.name = name
        self.pieces = []
        self.external = None      # path of an object file linked here instead of pieces
        self.overlay = False      # linked between /o and /o- (an overlaid module)


def name_segments(e):
    """Give each segment a name, class, group and ACBP attribute."""
    segs = e.segs
    prev_end = 0
    for s in segs:
        s.group = None
        if s.start == prev_end or s.start == 0:
            al = 1
        elif s.start % 16 == 0 and s.start - prev_end < 16:
            al = 16
        elif s.start % 2 == 0 and s.start - prev_end < 2:
            al = 2
        else:
            raise SystemExit('segment %d: cannot explain gap %05x-%05x' % (s.index, prev_end, s.start))
        s.align = al
        prev_end = max(prev_end, s.end)
    for s in segs:
        k = s.kind
        if k == 'code':
            s.name, s.cls = ('_TEXT' if s.index == 0 else 'S%02d_TEXT' % s.index), 'CODE'
        elif k == 'fardata':
            s.name, s.cls = 'S%02d_DATA' % s.index, 'FAR_DATA'
        elif k == 'ovrinfo':
            j = s.index - e.ovrinfo_first
            s.name, s.cls = OVRINFO_NAMES[j], OVRINFO_CLASSES[j]
            if j >= 2:
                s.group = '_OVRGROUP_'
        elif k == 'stub':
            s.name, s.cls = '_1STUB_', 'STUBSEG'
        elif k == 'dgroup':
            s.name, s.cls = DGROUP_NAMES[s.index - e.dgroup.index]
            s.group = 'DGROUP'
        elif k == 'stack':
            s.name, s.cls = '_STACK', 'STACK'
        s.attr = ALIGN[s.align] | (STACK if k == 'stack' else PUBLIC)
    [s for s in segs if s.kind == 'fardata'][0].name = '_FARDATA'     # the startup code's
    [s for s in segs if s.kind == 'code'][-1].name = '_OVRTEXT_'      # the overlay manager's
    for k, s in enumerate(s for s in segs if s.kind == 'stub' and s.flags == 3):
        s.name, s.cls = 'OV%02d_TEXT' % k, 'CODE'        # the overlaid module's code segment


class Model:
    """The executable cut into units, with address lookup for build.py."""

    def __init__(self, exe_path, keep_together=(), cut_at=()):
        e = self.e = exemodel.Exe(exe_path)
        name_segments(e)
        self.segs = e.segs
        self.ovl_base = (len(e.image) // 16 + 1) * 16        # image address of overlay data
        self.stub_sym = {}                                   # (stub frame, entry ofs) -> symbol
        self.entry_sym = []                                  # per overlay: {code ofs: symbol}
        for st in e.stubs:
            rs = self.overlay_rt_seg(st)
            d = {}
            for k, off in enumerate(st.entries):
                n = '_f_%04x_%04x' % (rs, off)
                while n in d.values():
                    n += '_'
                d.setdefault(off, n)
                self.stub_sym[(st.seg, 0x20 + 5 * k)] = n
            self.entry_sym.append(d)
        self.frame_seg = {}
        for s in self.segs:
            if s.kind != 'stub' and (s.frame not in self.frame_seg or
                                     (self.frame_seg[s.frame].size == 0 and s.size > 0)):
                self.frame_seg[s.frame] = s
        self.extra_publics = []                              # (segment index, name, offset in segment)
        self.abs_publics = []                                # (name, value)
        self.library_publics = set()                         # names library objects define
        self.startup_linked = False                          # the startup object is linked
        self.library_code = []                               # code linked from libraries
        self.cut_at = list(cut_at)
        self.movable = []                 # (lo, hi, unit) for place_movable
        self._build(keep_together)

    def overlay_rt_seg(self, st):
        return (self.ovl_base + st.fileoff) // 16 + RT

    # ---------------------------------------------------------------- addresses
    def where(self, rt_seg, rt_off):
        """Runtime SEG:OFS -> ('root', image address, segment) | ('ovl', k, code offset)."""
        a = (rt_seg * 16 + rt_off) - RT * 16
        if a >= self.ovl_base:
            fo = a - self.ovl_base
            for k, st in enumerate(self.e.stubs):
                if st.fileoff <= fo < st.fileoff + st.codesize:
                    return ('ovl', k, fo - st.fileoff)
            raise SystemExit('%04x:%04x is in no overlay' % (rt_seg, rt_off))
        for s in self.segs:
            if s.start <= a < s.end:
                return ('root', a, s)
        raise SystemExit('%04x:%04x is in no segment' % (rt_seg, rt_off))

    def seg_of(self, a):
        for s in self.segs:
            if s.start <= a < s.end:
                return s
        raise SystemExit('address %05x in no segment' % a)

    def piece_at(self, where):
        if where[0] == 'ovl':
            return self.ovl_units[where[1]].pieces[0]
        a = where[1]
        for u in self.units:
            if u.overlay:
                continue
            for p in u.pieces:
                if p.lo <= a < p.hi:
                    return p
        raise SystemExit('address %05x in no piece' % a)

    # ---------------------------------------------------------------- cutting
    def _target(self, site, value, buf, base):
        """Fx for the relocated segment word at site (buf[site-base] is the word)."""
        if value in self.e.stub_by_frame:
            off = struct.unpack('<H', buf[site - base - 2:site - base])[0]
            sym = self.stub_sym.get((value, off))
            if sym is None:
                raise SystemExit('reference to stub %04x:%04x is not an entry' % (value, off))
            return Fx(site - 2, 'ptr32', ('ext', sym))
        s = self.frame_seg.get(value)
        if s is None:
            raise SystemExit('segment value %04x is no segment frame' % value)
        if s.group == '_OVRGROUP_':
            # a symbol there would get the frame of its group; the original addresses
            # the segment itself
            return Fx(site, 'seg16', ('seg', s.index))
        return Fx(site, 'seg16', ('ext', '__seg%02d' % s.index))

    def _build(self, keep_together):
        e, segs = self.e, self.segs
        visits = []
        for o, sgm in e.relocs:
            a = sgm * 16 + o
            s = self.seg_of(a)
            if s.name == '_EXEINFO_':
                continue                        # the segment table: written by TLINK
            if not visits or visits[-1][0] is not s:
                visits.append((s, []))
            visits[-1][1].append(a)
        per_seg = {}
        for s, sites in visits:
            per_seg.setdefault(s.index, []).append(sites)
        bounds = {}
        for si, vs in per_seg.items():
            s = segs[si]
            b = [s.start]
            for k in range(len(vs) - 1):
                lo, hi = max(vs[k]) + 2, min(vs[k + 1]) - 2         # the cut can go anywhere here
                if hi < lo:
                    raise SystemExit('segment %d: relocation runs out of address order' % si)
                cut = lo
                for kl, kh in keep_together:                        # keep C ranges in one piece
                    if kl < cut < kh:
                        cut = kh if kh <= hi else kl if kl >= lo else cut
                for c in self.cut_at:                               # asked for (module data)
                    if lo <= c <= hi:
                        cut = c
                b.append(cut)
            b.append(s.end)
            bounds[si] = b
        units = [Unit('U00')]
        seen = {}
        for i, (s, sites) in enumerate(visits):
            k = seen.get(s.index, 0)
            seen[s.index] = k + 1
            lo, hi = bounds[s.index][k], bounds[s.index][k + 1]
            p = Piece(s, lo, hi, e.image[lo:hi])
            p.fixups = [self._target(a, e.word(a), e.image, 0) for a in sites]
            if s.kind == 'code':
                p.extras = converted_calls(p, s.frame * 16)
            if i > 0:                           # the first visit is the startup code, in U00
                units.append(Unit('U%02d' % len(units)))
            units[-1].pieces.append(p)
        for s in segs:                          # segments without relocations: whole, in U00
            if s.kind == 'stub' or s.index in per_seg or s.name == '_EXEINFO_':
                continue
            if s.kind == 'stack' and s.size > e.sp:
                # SS:SP comes from the stack-combined part only, the startup code's _STACK
                # (SP bytes); the rest of the segment is a public-combined contribution
                units[0].pieces.append(Piece(s, s.start, s.start + e.sp, e.image[s.start:s.start + e.sp]))
                rest = Piece(s, s.start + e.sp, s.end, e.image[s.start + e.sp:s.end])
                rest.public_combine = True
                units[-1].pieces.append(rest)
                continue
            p = Piece(s, s.start, s.end, e.image[s.start:s.end])
            if s.kind == 'code':
                p.extras = converted_calls(p, s.frame * 16)
            units[0].pieces.append(p)
        self.units = units
        # relocation slots TLINK reserves besides the relocations: one per far call or jump
        # it makes near (the blobs hand them all back)
        self.reserved = sum(1 for u in units for p in u.pieces for f in p.extras if f.call)
        self.ovl_units = []
        for k, st in enumerate(e.stubs):
            s = segs[st.index]
            u = Unit('OV%02d' % k)
            p = Piece(s, 0, st.codesize, st.code)
            for f in st.fixups:
                sel = struct.unpack('<H', st.code[f:f + 2])[0]
                t = segs[sel // 8]
                if t.flags == 3:
                    off = struct.unpack('<H', st.code[f - 2:f])[0]
                    p.fixups.append(Fx(f - 2, 'ptr32', ('ext', self.stub_sym[(t.frame, off)])))
                elif t.group == '_OVRGROUP_':
                    p.fixups.append(Fx(f, 'seg16', ('seg', t.index)))
                else:
                    p.fixups.append(Fx(f, 'seg16', ('ext', '__seg%02d' % t.index)))
            p.extras = converted_calls(p, 0)
            # TLINK makes the stub entries in the reverse order of the public definitions
            p.publics = [(self.entry_sym[k][off], off) for off in st.entries][::-1]
            u.pieces.append(p)
            u.overlay = True
            self.ovl_units.append(u)
        # the overlaid modules come after the root ones (their data follows the root
        # modules' data in DGROUP) and before the libraries
        self.units.extend(self.ovl_units)

    # ---------------------------------------------------------------- whole modules
    def link_object(self, code_lo, code_hi, obj_path):
        """Link an object file in place of the unit holding exactly [code_lo, code_hi)."""
        for u in self.units[1:]:
            if not u.overlay and len(u.pieces) == 1 and u.pieces[0].lo == code_lo and u.pieces[0].hi == code_hi:
                u.pieces = []
                u.external = obj_path
                return u
        # a segment without relocations is one of U00's pieces: U00 keeps it, empty, so that
        # it still defines the segment in its place, and the object becomes a unit of its own,
        # linked after the root modules until cut_out moves it next to its data
        for u in self.units:
            for k, p in enumerate(u.pieces):
                if not u.overlay and p.lo == code_lo and p.hi == code_hi and not p.fixups:
                    u.pieces[k] = Piece(p.seg, code_lo, code_lo, b'')
                    m = Unit('M%02d' % sum(v.name.startswith('M') for v in self.units))
                    m.external = obj_path
                    m.movable = True
                    ends = [i for i, v in enumerate(self.units)
                            if i > 0 and (v.overlay or getattr(v, 'library', False))]
                    self.units.insert(min(ends + [len(self.units)]), m)
                    return m
        found = [(u.name, '%05x-%05x' % (p.lo, p.hi)) for u in self.units for p in u.pieces
                 if p.lo < code_hi and p.hi > code_lo]
        raise SystemExit('no unit holds exactly %05x-%05x (the original module): %s' % (code_lo, code_hi, found))

    def cut_out(self, lo, hi, unit):
        """Take [lo, hi) out of the blobs, for the object file linked as `unit` to supply it.
        The bytes before it must be linked before that unit and the bytes after it after,
        so the piece holding it is split, and the part on the wrong side of the unit goes
        into a new unit next to it. Relocations keep their order: the part moved has none,
        and the range's own ones (which the object then makes) must be the module's own data
        visit, with no relocations in between.
        A unit link_object made for a segment without relocations has no place of its own
        in the link order: place_movable puts it next to its data, once the other modules
        are in place."""
        if getattr(unit, 'movable', False):
            self.movable.append((lo, hi, unit))
            return
        self._cut_out(lo, hi, unit)

    def place_movable(self):
        """Link each unit of a module without relocations right after the blob piece
        holding its data, whose tail (relocations included) follows it in a new unit: the
        relocation order stays. Done after the other modules have split the data, in address
        order, so the piece is the one between the modules linked before and after it."""
        for lo, hi, unit in sorted(self.movable, key=lambda m: m[0]):
            found = [(u, p) for u in self.units for p in u.pieces
                     if p.seg is self.seg_of(lo) and p.lo <= lo and hi <= p.hi]
            if not found:
                raise SystemExit('no piece holds %05x-%05x' % (lo, hi))
            u, p = found[0]
            if len(u.pieces) > 1 or any(lo <= f.at < hi for f in p.fixups + p.extras):
                raise SystemExit('%05x-%05x: cannot place the module in its blob piece' % (lo, hi))
            unit.movable = False
            self.units.remove(unit)
            k = self.units.index(u)
            self.units.insert(k + 1, unit)
            if hi < p.hi:
                t = Piece(p.seg, hi, p.hi, p.data[hi - p.lo:])
                t.fixups = [f for f in p.fixups if f.at >= hi]
                t.extras = [f for f in p.extras if f.at >= hi]
                v = Unit('X%02d' % sum(w.name.startswith('X') for w in self.units))
                v.pieces.append(t)
                self.units.insert(k + 2, v)
            p.data = p.data[:lo - p.lo]
            p.fixups = [f for f in p.fixups if f.at < lo]
            p.extras = [f for f in p.extras if f.at < lo]
            p.hi = lo
            if p.lo == p.hi:
                self.units.remove(u)
        self.movable = []

    def _cut_out(self, lo, hi, unit):
        ui = self.units.index(unit)
        for k, u in enumerate(self.units):
            for p in u.pieces:
                if not (p.seg is self.seg_of(lo) and p.lo <= lo and hi <= p.hi):
                    continue
                fx = p.fixups + p.extras
                inside = [f for f in fx if lo <= f.at < hi]
                if k < ui:                  # linked before: its tail goes after the unit
                    if any(f.at >= lo for f in fx):
                        raise SystemExit('%05x-%05x has relocations but its blob piece is linked '
                                         'before the module' % (lo, hi))
                    if hi < p.hi:
                        self._new_unit(ui + 1, Piece(p.seg, hi, p.hi, p.data[hi - p.lo:]))
                    p.data = p.data[:lo - p.lo]
                    p.hi = lo
                else:                       # linked after: its head goes before the unit
                    if any(f.at < lo for f in fx):
                        raise SystemExit('%05x-%05x: relocations before it in its blob piece' % (lo, hi))
                    between = self.units[ui + 1:k]
                    if inside and any(v.external or any(q.fixups for q in v.pieces) for v in between):
                        raise SystemExit('%05x-%05x has relocations outside the module\'s own run' % (lo, hi))
                    if lo > p.lo:
                        self._new_unit(ui, Piece(p.seg, p.lo, lo, p.data[:lo - p.lo]))
                    p.data = p.data[hi - p.lo:]
                    p.lo = hi
                    p.fixups = [f for f in p.fixups if f.at >= hi]
                    p.extras = [f for f in p.extras if f.at >= hi]
                if p.lo == p.hi:
                    u.pieces.remove(p)
                    if not u.pieces and u.external is None:
                        self.units.remove(u)
                return
        raise SystemExit('no piece holds %05x-%05x' % (lo, hi))

    # ---------------------------------------------------------------- library modules
    def remove_range(self, lo, hi):
        """Take [lo, hi) out of the blobs (a library module supplies it), with the fixups
        in it. The range must be at the start or the end of the pieces it touches."""
        for u in list(self.units):
            for p in list(u.pieces):
                if p.hi <= lo or p.lo >= hi or p.seg is not self.seg_of(lo):
                    continue
                a, b = max(lo, p.lo), min(hi, p.hi)
                if a > p.lo and b < p.hi:
                    raise SystemExit('%05x-%05x is in the middle of blob piece %05x-%05x' % (lo, hi, p.lo, p.hi))
                keep = lambda f: not (a <= f.at < b)
                p.fixups = [f for f in p.fixups if keep(f)]
                p.extras = [f for f in p.extras if keep(f)]
                if a == p.lo:
                    p.data = p.data[b - p.lo:]
                    p.lo = b
                else:
                    p.data = p.data[:a - p.lo]
                    p.hi = a
                if p.lo >= p.hi:
                    u.pieces.remove(p)
            if not u.pieces and u.external is None and u is not self.units[0]:
                self.units.remove(u)

    def library_unit(self, path, startup):
        """Link an object file of a library: the startup code right after U00, the others
        after everything so far."""
        u = Unit('L%02d' % sum(v.name.startswith('L') for v in self.units))
        u.external = path
        u.library = True
        if startup:
            self.units.insert(1, u)
            self.startup_linked = True
        else:
            self.units.append(u)
        return u

    def place_overlay(self, unit, lo, hi):
        """An overlaid module's object (unit) supplies DGROUP [lo, hi): it is linked right
        after the blob piece holding that range, whose rest (the later modules' data, and
        its relocations) follows it in a new unit. The overlays before it in number are
        linked before it, the others stay after: TLINK numbers overlays in link order. The
        range's own relocations are the object's."""
        for k, u in enumerate(self.units):
            if u.overlay:
                continue
            for p in u.pieces:
                if p.seg is self.seg_of(lo) and p.lo <= lo and hi <= p.hi:
                    break
            else:
                continue
            break
        else:
            raise SystemExit('no piece holds %05x-%05x' % (lo, hi))
        tail = Piece(p.seg, hi, p.hi, p.data[hi - p.lo:])
        tail.fixups = [f for f in p.fixups if f.at >= hi]
        tail.extras = [f for f in p.extras if f.at >= hi]
        p.fixups = [f for f in p.fixups if f.at < lo]
        p.extras = [f for f in p.extras if f.at < lo]
        p.data = p.data[:lo - p.lo]
        p.hi = lo
        idx = self.ovl_units.index(unit)
        # the lower overlays an earlier call placed (next to their own data) stay there
        before = [v for v in self.ovl_units[:idx + 1] if v is unit or not getattr(v, 'placed', False)]
        for v in before:
            self.units.remove(v)
        at = self.units.index(u) + 1
        if any(self.units.index(v) >= at for v in self.ovl_units[:idx] if getattr(v, 'placed', False)):
            raise SystemExit('%05x-%05x: a lower overlay\'s data comes after it' % (lo, hi))
        for v in before:                # the lower ones moved with it keep that place too
            v.placed = True
        self.units[at:at] = before
        if tail.hi > tail.lo:
            t = Unit('X%02d' % sum(v.name.startswith('X') for v in self.units))
            t.pieces.append(tail)
            self.units.insert(at + len(before), t)
        if p.lo == p.hi:
            u.pieces.remove(p)

    def _new_unit(self, at, piece):
        """A unit holding one relocation-free piece, linked at position `at`."""
        u = Unit('X%02d' % sum(v.name.startswith('X') for v in self.units))
        u.pieces.append(piece)
        libs = [k for k, v in enumerate(self.units) if getattr(v, 'library', False) and k > 1]
        self.units.insert(min([at] + libs), u)

    # ---------------------------------------------------------------- output
    def write(self, outdir, exe_name):
        os.makedirs(outdir, exist_ok=True)
        for k, u in enumerate(self.units):
            if u.external:
                import shutil
                shutil.copy(u.external, os.path.join(outdir, u.name + '.OBJ'))
                continue
            write_unit(u, self, outdir, k == 0)
        # the overlaid modules between /o and /o-
        items, inside = [], False
        for u in self.units:
            if u.overlay != inside:
                items.append('/o' if u.overlay else '/o-')
                inside = u.overlay
            items.append(u.name)
        if inside:
            items.append('/o-')
        lines, cur = [], ''
        for it in items:
            if it.startswith('/'):
                cur += (' ' if cur else '') + it
            else:
                if cur and not cur.endswith(('/o', '/o-')):
                    lines.append(cur)
                    cur = ''
                cur += (' ' if cur else '') + it
        lines.append(cur)
        rsp = ' +\r\n'.join(lines) + '\r\n' + \
            '%s\r\n%s\r\n\r\n' % (exe_name, os.path.splitext(exe_name)[0] + '.MAP')
        open(os.path.join(outdir, 'LINK.RSP'), 'w', newline='').write(rsp)


def converted_calls(p, frame_base):
    """The 90 0E E8 rel16 sequences of a piece (see the module comment), turned back into
    far calls (9A in the data, and a fixup to this segment); and the 90 90 E9 rel16 ones
    TLINK makes of far jumps, back into far jumps (EA). TLINK reserves a relocation slot
    for each (the header size shows it)."""
    fixed = set()
    for f in p.fixups:
        fixed.update(range(f.at, f.at + LOCSIZE[f.loc]))
    out = []
    buf = p.data
    for pat, op in ((b'\x90\x0e\xe8', 0x9a), (b'\x90\x90\xe9', 0xea)):
        k = buf.find(pat)
        while k != -1 and k + 5 <= len(buf):
            a = p.lo + k
            if not fixed.intersection(range(a, a + 5)):
                rel = struct.unpack('<h', buf[k + 3:k + 5])[0]
                ofs = (a - frame_base + 5 + rel) & 0xffff
                out.append(Fx(a + 1, 'ptr32', ('self',), disp=frame_base + ofs, call=True))
                buf[k] = op
            k = buf.find(pat, k + 5)
    out.sort(key=lambda f: f.at)
    return out


def windows(p):
    """LEDATA windows (<= 1024 bytes): the relocation fixups in their order (which is the
    order TLINK writes relocations in), then the others wherever they fit."""
    out = []

    def fits(c, fl, fh, among):
        nlo, nhi = min(c[0], fl), max(c[1], fh)
        return nhi - nlo <= 1024 and all(nhi <= o[0] or nlo >= o[1] for o in among if o is not c)
    for f in p.fixups:
        fl, fh = f.span
        if out and fits(out[-1], fl, fh, out):
            c = out[-1]
            c[0], c[1] = min(c[0], fl), max(c[1], fh)
            c[2].append(f)
        else:
            out.append([fl, fh, [f]])
    s = sorted(out)
    if not all(a[1] <= b[0] for a, b in zip(s, s[1:])):
        # Compiled code that does not match puts relocations where the original had none,
        # and the order cannot be kept. The executable differs anyway: cut in address
        # order, keeping the original order inside each record.
        order = {id(f): k for k, f in enumerate(p.fixups)}
        out = []
        for f in sorted(p.fixups, key=lambda f: f.span):
            fl, fh = f.span
            if out and fh - out[-1][0] <= 1024:
                out[-1][1] = max(out[-1][1], fh)
                out[-1][2].append(f)
            else:
                out.append([fl, fh, [f]])
        for c in out:
            c[2].sort(key=lambda f: order[id(f)])
    for f in p.extras:
        fl, fh = f.span
        for c in out:
            if fits(c, fl, fh, out):
                c[0], c[1] = min(c[0], fl), max(c[1], fh)
                c[2].append(f)
                break
        else:
            # a record of its own, over just its bytes: it may overlap another record's
            # plain data (same bytes), never a fixup location
            out.append([fl, fh, [f]])
    return out


def write_unit(u, m, outdir, is_first):
    w = ObjWriter(u.name)
    segs = m.segs
    segidx = {}

    def declare(s, length, attr):
        if s.index not in segidx:
            segidx[s.index] = w.segdef(w.lname(s.name), w.lname(s.cls), length, attr)

    lengths = {p.seg.index: p.hi - p.lo for p in u.pieces}
    if is_first:
        for s in segs:
            # with the startup code linked, its _STACK must be the segment's first instance
            # (EMUVARS's common _STACK is laid over the first one)
            if not (s.kind == 'stub' and s.flags == 3) and not (m.startup_linked and s.kind == 'stack'):
                declare(s, 0 if s.name == '_EXEINFO_' else lengths.get(s.index, 0), s.attr)
    for p in u.pieces:
        s = p.seg
        first = p.lo == s.start or s.kind == 'stub'
        declare(s, p.hi - p.lo, BYTE_PUBLIC if p.public_combine or not first else s.attr)
    allfx = [f for p in u.pieces for f in p.fixups + p.extras]
    for f in allfx:                             # segments a fixup addresses directly
        if f.tgt[0] == 'seg':
            declare(segs[f.tgt[1]], 0, BYTE_PUBLIC)
        if f.frame and f.frame[0] == 'seg':
            declare(segs[f.frame[1]], 0, BYTE_PUBLIC)
    for g in {f.frame[1] for f in allfx if f.frame and f.frame[0] == 'grp'}:
        if not any(s.group == g and s.index in segidx for s in segs):
            declare(next(s for s in segs if s.group == g), 0, BYTE_PUBLIC)
    grpidx = {}
    for g in ('DGROUP', '_OVRGROUP_'):
        members = [segidx[s.index] for s in segs if s.group == g and s.index in segidx]
        if members:
            grpidx[g] = w.grpdef(w.lname(g), members)
    if is_first:
        # TLINK sizes the header for the relocations plus the slots it reserved: if the
        # original reserved more than the blobs explain (fixups in a module's debug
        # information, $$SYMBOLS, which TLINK reserves for and then drops), as many debug
        # fixups, in a segment TLINK does not output
        e = m.e
        need = e.hdr_paras * 16
        extra = 0
        while (0x3e + 4 * (e.nrel + m.reserved + extra) + 511) // 512 * 512 < need:
            extra += 1
        if extra:
            dbg = w.segdef(w.lname('$$SYMBOLS'), w.lname('DEBSYM'), 4 * extra, 0x28)
            data = bytes(4 * extra)
            for k in range(0, len(data), 1000):
                w.ledata(dbg, k, data[k:k + 1000], [Fix(o, 'ptr32', 'seg', segidx[0], 0, ('seg', segidx[0]))
                                                    for o in range(k, min(len(data), k + 1000), 4)])
        for s in segs:
            if s.index in segidx and not (s.kind == 'stub' and s.flags == 3):
                w.pubdef(segidx[s.index], [('__seg%02d' % s.index, 0)])
        # TLINK only builds the overlay structures (stubs, _EXEINFO_) when an overlay
        # manager is present, which it recognises by __OVRTRAP__ (the INT 3Fh handler at
        # the start of _STUB_) and by references to the symbols it defines itself.
        stub = next(s for s in segs if s.name == '_STUB_')
        if '__OVRTRAP__' not in m.library_publics:
            w.pubdef(segidx[stub.index], [('__OVRTRAP__', 0)])
        for n in ('__SEGTABLE__', '__SEGTABEND__', '__EXENAME__', '__EXEDATE__'):
            w.extdef(n)
        # symbols an object file linked whole needs (addresses in the blobs)
        by_seg = {}
        for si, n, off in m.extra_publics:
            by_seg.setdefault(si, []).append((n, off))
        for si, pubs in sorted(by_seg.items()):
            s = segs[si]
            w.pubdef(segidx[si], pubs, grp=grpidx.get(s.group, 0) if s.group == 'DGROUP' else 0)
        absp = [x for x in m.abs_publics if x[0] not in m.library_publics]
        if absp:
            w.pubdef_abs(absp)
    for p in u.pieces:
        if p.publics:
            w.pubdef(segidx[p.seg.index], [(n, a - p.lo) for n, a in p.publics])
    ext = {}
    for f in allfx:
        if f.tgt[0] == 'ext' and f.tgt[1] not in ext:
            ext[f.tgt[1]] = w.extdef(f.tgt[1])
    for p in u.pieces:
        si = segidx[p.seg.index]
        data = bytearray(p.data)
        for f in p.fixups + p.extras:
            data[f.at - p.lo:f.at - p.lo + LOCSIZE[f.loc]] = bytes(LOCSIZE[f.loc])

        def mkfix(f):
            frame = None
            if f.frame:
                frame = ('grp', grpidx[f.frame[1]]) if f.frame[0] == 'grp' else ('seg', segidx[f.frame[1]])
            if f.tgt[0] == 'ext':
                return Fix(f.at - p.lo, f.loc, 'ext', ext[f.tgt[1]], f.disp, frame, f.rel)
            if f.tgt[0] == 'seg':
                t = segidx[f.tgt[1]]
                return Fix(f.at - p.lo, f.loc, 'seg', t, f.disp, frame or ('seg', t), f.rel)
            return Fix(f.at - p.lo, f.loc, 'seg', si, (f.disp - p.lo) & 0xffff, frame, f.rel)
        covered = []
        for lo, hi, fx in windows(p):
            w.ledata(si, lo - p.lo, data[lo - p.lo:hi - p.lo], [mkfix(f) for f in fx])
            covered.append((lo - p.lo, hi - p.lo))
        pos = 0
        for lo, hi in sorted(covered) + [(len(data), len(data))]:
            for k in range(pos, lo, 1024):
                w.ledata(si, k, data[k:min(lo, k + 1024)])
            pos = max(pos, hi)
    w.modend(start=(segidx[0], 0) if is_first and not m.startup_linked else None)
    open(os.path.join(outdir, u.name + '.OBJ'), 'wb').write(w.bytes())


def main(exe, outdir, libs=()):
    m = Model(exe)
    if libs:                    # the runtime linked from its libraries instead of blobs
        import libmods
        found = libmods.apply(m, libs, outdir.rstrip('/\\') + '.lib', log=lambda *a: None)
        print('%d library modules' % len(found))
    m.write(outdir, m.e.link_name)
    print('%d root units, %d overlays' % (len(m.units), len(m.ovl_units)))


if __name__ == '__main__':
    # mkblobs.py GAME.EXE OUTDIR [--libs C0L.OBJ EMU.LIB MATHL.LIB CL.LIB OVERLAY.LIB]
    args = sys.argv[1:]
    libs = args[args.index('--libs') + 1:] if '--libs' in args else []
    main(args[0], args[1], libs)
