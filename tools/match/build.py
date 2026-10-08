#!/usr/bin/env python3
"""Matching decompilation build: compile C with Borland C++ 3.1, put the code in place
of the original bytes, relink with TLINK 5.0 and compare with the original executable.

  build.py --exe GAME.EXE --dir DECOMP_DIR [--names names.txt] [--date MM-DD-YYYY]
           [--cflags "..."] [--only FILE.C]

DECOMP_DIR/src/*.c   the decompiled sources (8.3 names). Each says where its code goes:
                         /* @at 1680:0003 */            runtime SEG:OFS (as tools/recomp.py)
                     where its initialised data (_DATA: string literals, constants,
                     initialised variables) goes, if it has any:
                         /* @data 5d9c:2a40 */          a DGROUP address
                     and may add compiler options:     /* @flags -O2 */
                     A file that is a whole original module can say /* @module */: it is
                     then linked as the compiler's own object in the module's place,
                     instead of being merged into the blobs.
DECOMP_DIR/src/*.asm assembly modules, with the same comments (after ';'). Assembled with
                     TASM 3.1 /ml, or TASM 3.0 if the file says @tasm30; @flags adds
                     options. An @module file names its code segment CSEG_: the build
                     defines it as the original module's segment name.
DECOMP_DIR/build/    objects, the relinked executable, reports

Symbols a C file uses (without the leading underscore the compiler adds):
    f_SSSS_OOOO / d_SSSS_OOOO   a function / data at runtime SEG:OFS
    names from --names          SEG:OFS name (games/<game>/names.txt)
    names from --symbols        the same, any symbol (compiler helpers such as F_FTOL@)
    functions of other C files  by their name
Exit status: 0 if the executable is identical to the original.
"""
import argparse, glob, os, re, shlex, struct, subprocess, sys
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
sys.path.insert(0, os.path.dirname(HERE))
import omf, mkblobs, exemodel
from mkblobs import Fx

ROOT = os.path.dirname(os.path.dirname(HERE))
TCDOS = os.path.join(ROOT, '.claude', 'skills', 'turbo-cpp', 'scripts', 'tcdos.sh')
SYM = re.compile(r'^_?([fd])_([0-9a-f]{4})_([0-9a-f]{4})$')


class CFile:
    def __init__(self, path, default_flags, cc='bc31'):
        self.path = path
        self.name = os.path.basename(path)
        base = os.path.splitext(self.name)[0]
        if not re.fullmatch(r'[A-Za-z0-9_$~-]{1,8}\.([cC]|[aA][sS][mM])', self.name):
            raise SystemExit('%s: DOS needs 8.3 file names (.C or .ASM)' % self.name)
        self.asm = self.name.upper().endswith('.ASM')
        text = open(path, encoding='latin1').read()
        m = re.search(r'@at\s+([0-9a-fA-F]{4}):([0-9a-fA-F]{4})', text)
        if not m:
            raise SystemExit('%s: no "@at SEG:OFS" placement comment' % self.name)
        self.rt = (int(m.group(1), 16), int(m.group(2), 16))
        m = re.search(r'@data\s+([0-9a-fA-F]{4}):([0-9a-fA-F]{4})', text)
        self.rt_data = (int(m.group(1), 16), int(m.group(2), 16)) if m else None
        fl = re.search(r'@flags\s+([^*\n]*)', text)
        self.flags = ('/ml' if self.asm else default_flags) + (' ' + fl.group(1).strip() if fl else '')
        self.toolchain = 'tasm' if self.asm and re.search(r'@tasm30\b', text) else 'bc31' if self.asm else cc
        self.module = bool(re.search(r'@module\b', text))
        self.obj = base.upper() + '.OBJ'


def run(cmd, **kw):
    return subprocess.run(cmd, capture_output=True, text=True, **kw)


def compile_all(cfiles, ddir, force, model):
    objdir = os.path.join(ddir, 'build', 'obj')
    os.makedirs(objdir, exist_ok=True)
    stale = [c for c in cfiles if force or not os.path.exists(os.path.join(objdir, c.obj)) or
             os.path.getmtime(os.path.join(objdir, c.obj)) < os.path.getmtime(c.path)]
    if not stale:
        return True
    ok, outs = True, []
    for tc in sorted({c.toolchain for c in stale}):
        args = []
        for c in stale:
            if c.toolchain != tc:
                continue
            if args:
                args.append(';;')
            rel = os.path.relpath(c.path, ddir).replace('/', '\\')
            seg = None
            if c.module:                # the code segment gets the original module's name
                w = model.where(*c.rt)
                seg = w[2].name if w[0] == 'root' else model.segs[model.e.stubs[w[1]].index].name
            if c.asm:
                args += ['TASM'] + shlex.split(c.flags) + (['/dCSEG_=' + seg] if seg else []) + \
                        [rel, 'BUILD\\OBJ\\' + c.obj]
            else:
                args += ['BCC', '-c'] + shlex.split(c.flags) + (['-zC' + seg] if seg else []) + \
                        ['-nBUILD\\OBJ', rel]
        if not args:
            continue
        r = run([TCDOS, '-T', tc, '-C', ddir, '--'] + args)
        outs.append(r)
        ok = ok and r.returncode == 0
    out = '\n'.join(l for r in outs for l in r.stdout.splitlines()
                    if l.strip() and not l.startswith(('Borland C++', 'Available memory', 'Turbo Assembler',
                                                       'Assembling file', 'Error messages:  ',
                                                       'Warning messages:', 'Passes:', 'Remaining memory')))
    if not ok or re.search(r'^(Error|Fatal|\*\*Error|\*\*Fatal)', out, re.M):
        print(out)
        for r in outs:
            print(r.stderr, end='')
        for c in stale:                        # do not keep objects of a failed run
            p = os.path.join(objdir, c.obj)
            if os.path.exists(p) and os.path.getmtime(p) < os.path.getmtime(c.path):
                os.remove(p)
        return False
    if out.strip():
        print(out)
    return True


def read_names(path):
    names = {}
    if path and os.path.exists(path):
        for line in open(path):
            line = line.split('#')[0].split()
            if len(line) >= 2 and ':' in line[0]:
                s, o = line[0].split(':')
                if re.fullmatch(r'[0-9a-fA-F]{1,4}', s):
                    names[line[1]] = (int(s, 16), int(o, 16))
    return names


class Part:
    """One segment of a compiled C file and where it goes."""

    def __init__(self, si, data, where):
        self.si, self.bytes, self.where = si, data, where
        self.lo = where[1] if where[0] == 'root' else where[2]
        self.hi = self.lo + len(data)

    def target_where(self, model, off):
        """Where offset off of this part is, as Model.where gives it."""
        if self.where[0] == 'ovl':
            return ('ovl', self.where[1], self.lo + off)
        return ('root', self.lo + off, model.seg_of(self.lo + off))


class Placed:
    """A compiled C file placed in the model: its code and, with @data, its _DATA."""

    def __init__(self, c, mod, model):
        self.c, self.mod = c, mod
        code_segs = [i for i, s in enumerate(mod.segs, 1) if s[1] == 'CODE' and s[2] > 0]
        data_segs = [i for i, s in enumerate(mod.segs, 1) if s[0] == '_DATA' and s[2] > 0]
        other = [s[0] for s in mod.segs if s[2] > 0 and s[1] != 'CODE' and s[0] != '_DATA']
        if other:
            raise SystemExit('%s: segments %s are not supported yet (uninitialised variables '
                             'defined here: declare them extern)' % (c.name, ', '.join(other)))
        if len(code_segs) != 1:
            raise SystemExit('%s: expected one code segment, got %d' % (c.name, len(code_segs)))
        self.code = Part(code_segs[0], bytes(mod.data[code_segs[0]]), model.where(*c.rt))
        self.data = None
        if data_segs:
            if not c.rt_data:
                raise SystemExit('%s: has initialised data (string literals, constants...): '
                                 'say where it goes with /* @data SSSS:OOOO */' % c.name)
            w = model.where(*c.rt_data)
            if w[0] != 'root' or w[2].group != 'DGROUP':
                raise SystemExit('%s: @data must be a DGROUP address' % c.name)
            self.data = Part(data_segs[0], bytes(mod.data[data_segs[0]]), w)
        self.parts = [x for x in (self.code, self.data) if x]
        # compatibility with the reports
        self.si, self.where, self.lo, self.hi = self.code.si, self.code.where, self.code.lo, self.code.hi

    def part_of(self, si):
        return next((p for p in self.parts if p.si == si), None)

    def publics(self):
        """name -> runtime (seg, off) of this file's functions and data."""
        out = {}
        for n, (si, off) in self.mod.publics.items():
            if si == self.code.si:
                out[n] = (self.c.rt[0], self.c.rt[1] + off)
            elif self.data and si == self.data.si:
                out[n] = (self.c.rt_data[0], self.c.rt_data[1] + off)
        return out


def absolute_symbols():
    """Absolute publics the linker adds into the code: the 8087 emulator fixups (FIDRQQ...
    turn 8087 opcodes into INT 34h-3Dh), from Borland's EMU.LIB, as the game uses."""
    out = {}
    for name in ('EMU.LIB', 'MATHL.LIB', 'CL.LIB'):     # EMU.LIB first: its FIxRQQ values
        lib = os.path.join(ROOT, 'tools', 'BCC31', 'LIB', name)
        for m in omf.read_obj(open(lib, 'rb').read()):
            for n, (si, off) in m.publics.items():
                if si == 0:
                    out.setdefault(n, off)
    return out


ABSOLUTE = None


def make_target(model, w, locw, what):
    """Target and displacement of a fixup at a location in locw pointing at w."""
    if w[0] == 'root':
        s = w[2]
        if locw[0] == 'root' and locw[2] is s:
            return ('self',), w[1]
        if s.group == '_OVRGROUP_':
            return ('seg', s.index), w[1] - s.start
        return ('ext', '__seg%02d' % s.index), w[1] - s.start
    k, co = w[1], w[2]
    if locw[0] == 'ovl' and locw[1] == k:
        return ('self',), co
    if co in model.entry_sym[k]:
        return ('ext', model.entry_sym[k][co]), 0
    raise SystemExit('%s is in overlay %d but not one of its entries (the original could not '
                     'reach it from here either)' % (what, k))


def convert_fixups(pl, part, model, symtab):
    """The fixups of one part of the C object as Fx in its piece's address space; returns
    the part's bytes (with the linker's additions done for absolute symbols) and the Fx."""
    global ABSOLUTE
    if ABSOLUTE is None:
        ABSOLUTE = absolute_symbols()
    mod, buf = pl.mod, bytearray(part.bytes)
    out = []
    grp_names = {i: n for i, (n, _) in enumerate(mod.grps, 1)}
    locw = part.where if part.where[0] == 'ovl' else ('root', part.lo, model.seg_of(part.lo))
    for si, off, loc, mode, frame, (kind, ti), disp in mod.fixups:
        if si != part.si:
            continue
        if kind == 'ext' and mod.externs[ti] in ABSOLUTE:
            v = ABSOLUTE[mod.externs[ti]] + disp
            if loc == 'off16':
                w0 = struct.unpack('<H', buf[off:off + 2])[0]
                buf[off:off + 2] = struct.pack('<H', (w0 + v) & 0xffff)
            elif loc in ('off8', 'hi8'):
                buf[off] = (buf[off] + (v if loc == 'off8' else v >> 8)) & 0xff
            else:
                raise SystemExit('%s: absolute fixup of kind %s' % (pl.c.name, loc))
            continue
        if loc not in mkblobs.LOCSIZE:
            raise SystemExit('%s: unsupported fixup location %s' % (pl.c.name, loc))
        # Borland puts the offset in the data; the linker adds it
        content = 0
        if loc in ('off16', 'ptr32'):
            content = struct.unpack('<H', buf[off:off + 2])[0]
        elif loc == 'off8':
            content = buf[off]
        buf[off:off + mkblobs.LOCSIZE[loc]] = bytes(mkblobs.LOCSIZE[loc])
        d = (content + disp) & 0xffff
        at = part.lo + off
        fr = None                              # F5 (target), F4 (location), F2 (external)
        if frame[0] == 1:
            fr = ('grp', grp_names[frame[1]])
        elif frame[0] == 0 and frame[1] != part.si:
            fp = pl.part_of(frame[1])
            if fp is None or fp.where[0] != 'root':
                raise SystemExit('%s: fixup with the frame of segment %s' % (pl.c.name, mod.segs[frame[1] - 1][0]))
            fr = ('seg', model.seg_of(fp.lo).index)
        sd = d - 0x10000 if d & 0x8000 else d      # displacements wrap: a[i - 16]
        if kind == 'seg':
            tp = pl.part_of(ti)
            if tp is None:
                raise SystemExit('%s: fixup to its empty segment %s' % (pl.c.name, mod.segs[ti - 1][0]))
            w, what = tp.target_where(model, sd if 0 <= tp.lo + sd else d), '%s+%04x' % (mod.segs[ti - 1][0], d)
        elif kind == 'grp':
            if grp_names[ti] != 'DGROUP':
                raise SystemExit('%s: fixup to group %s' % (pl.c.name, grp_names[ti]))
            a = model.e.dgroup.start + d
            w, what = ('root', a, model.seg_of(a)), 'DGROUP+%04x' % d
        else:
            name = mod.externs[ti]
            rt = resolve(name, symtab)
            if rt is None:
                raise SystemExit('%s: unknown symbol %s (use f_SSSS_OOOO / d_SSSS_OOOO, or name it '
                                 'in names.txt / symbols.txt)' % (pl.c.name, name.lstrip('_')))
            w, what = model.where(rt[0], (rt[1] + d) & 0xffff), name
        tgt, tdisp = make_target(model, w, locw, what)
        call = tgt[0] == 'self' and loc == 'ptr32' and off > 0 and part.bytes[off - 1] == 0x9a
        out.append(Fx(at, loc, tgt, tdisp, fr, mode == 'self', call))
    return bytes(buf), out


def link_module(pl, model, symtab, ddir, objpubs):
    """Link a whole-module C file as its own object: it replaces the unit of its code, its
    data replaces the bytes it covers, and its externals become publics at their addresses."""
    global ABSOLUTE
    if ABSOLUTE is None:
        ABSOLUTE = absolute_symbols()
    obj = os.path.join(ddir, 'build', 'obj', pl.c.obj)
    if pl.code.where[0] == 'ovl':
        unit = link_overlay(pl, model, obj)
    else:
        seg = model.seg_of(pl.code.lo)
        if (pl.code.lo, pl.code.hi) != (seg.start, seg.end):
            raise SystemExit('%s: @module code is %05x-%05x, the segment is %05x-%05x' %
                             (pl.c.name, pl.code.lo, pl.code.hi, seg.start, seg.end))
        unit = model.link_object(pl.code.lo, pl.code.hi, obj)
        if pl.c.asm:                    # TLINK reserves no slots for TASM's near calls
            model.reserved -= unit.near_calls
    if pl.data:
        if pl.code.where[0] == 'ovl':
            model.place_overlay(unit, pl.data.lo, pl.data.hi)
        else:
            model.cut_out(pl.data.lo, pl.data.hi, unit)
    defined = objpubs                   # this and the other @module objects define these
    entries = {n for d in model.entry_sym for n in d.values()}
    have = {n for _, n, _ in model.extra_publics} | {n for n, _ in model.abs_publics}
    for name in pl.mod.externs[1:]:
        if name in defined or name in have or name in entries:
            continue
        if name in ABSOLUTE:
            model.abs_publics.append((name, ABSOLUTE[name]))
            continue
        rt = resolve(name, symtab)
        if rt is None:
            raise SystemExit('%s: unknown symbol %s' % (pl.c.name, name.lstrip('_')))
        w = model.where(*rt)
        if w[0] != 'root':
            raise SystemExit('%s: %s is in an overlay but not one of its entries' % (pl.c.name, name))
        model.extra_publics.append((w[2].index, name, w[1] - w[2].start))


def link_overlay(pl, model, obj):
    """An overlaid module's object in place of its overlay's unit. TLINK gives each public
    of an overlaid module a stub entry, in the reverse order of the public definitions:
    the functions that have an entry in the original must be the public ones, in that
    order, the others static. (An overlay is one object: with several, TLINK lists the
    entries of the first object, then those of the others from the last to the second.)"""
    k = pl.code.where[1]
    st = model.e.stubs[k]
    if (pl.code.lo, pl.code.hi) != (0, st.codesize):
        raise SystemExit('%s: @module code is %04x bytes from +%04x, the overlay is %04x bytes' %
                         (pl.c.name, pl.code.hi - pl.code.lo, pl.code.lo, st.codesize))
    pubs = [(off, n) for n, (si, off) in pl.mod.publics.items() if si == pl.code.si]
    have, want = [off for off, n in pubs], list(st.entries)
    extra = sorted(set(have) - set(want))
    missing = sorted(set(want) - set(have))
    if extra or missing:
        name = lambda off: 'f_%04x_%04x' % (model.overlay_rt_seg(st), off)
        raise SystemExit('%s: the stub entries would differ:%s%s' % (
            pl.c.name, (' make static: ' + ', '.join(map(name, extra))) if extra else '',
            (' make public: ' + ', '.join(map(name, missing))) if missing else ''))
    if have[::-1] != want:
        raise SystemExit('%s: its public functions come in another order than the stub entries '
                         '(BCC writes them in the order of their first declarations)' % pl.c.name)
    unit = model.ovl_units[k]
    unit.pieces = []
    unit.external = obj
    return unit


def resolve(name, symtab):
    n = name[1:] if name.startswith('_') else name
    m = SYM.match(n)
    if m:
        return int(m.group(2), 16), int(m.group(3), 16)
    return symtab.get(name, symtab.get(n))


def disasm(code, base, lo, hi):
    import x86
    out, ip = [], 0
    while ip < len(code):
        try:
            i = x86.decode(code, ip)
            n = i.len
            txt = repr(i).split(' ', 1)[1]
        except Exception:
            n, txt = 1, 'db %02x' % code[ip]
        out.append((base + ip, code[ip:ip + n].hex(' '), txt))
        ip += n
    return [x for x in out if lo <= x[0] < hi]


def report(pl, orig, new, rt):
    """Compare the linked bytes of a C file with the original."""
    if orig == new:
        return True
    d = next(i for i in range(len(orig)) if orig[i] != new[i])
    ndiff = sum(1 for a, b in zip(orig, new) if a != b)
    print('  DIFF %s (%04x:%04x, %d bytes): %d bytes differ, first at +%04x' %
          (pl.c.name, rt[0], rt[1], len(orig), ndiff, d))
    a = disasm(orig, 0, max(0, d - 12), d + 40)
    b = disasm(new, 0, max(0, d - 12), d + 40)
    for k in range(max(len(a), len(b))):
        x = a[k] if k < len(a) else (0, '', '')
        y = b[k] if k < len(b) else (0, '', '')
        mark = ' ' if x[1:] == y[1:] else '*'
        print('   %s %04x %-18s %-28s| %-18s %s' % (mark, x[0], x[1], x[2][:28], y[1], y[2][:40]))
    return False


FSIZE = {'ptr32': 4, 'off16': 2, 'seg16': 2, 'off8': 1, 'hi8': 1}


def function_report(pl, model):
    """For a whole-module file that does not fill its segment yet (its game differs from the
    one the C was written for, or it is unfinished): compare each compiled function with the
    original function its name gives the address of. Bytes the linker fills in (fixups,
    near calls within the module) are not compared. A function matches if its bytes do and
    the next one starts where the original's next one does."""
    code = pl.code.bytes
    fx = set()
    for f in pl.mod.fixups:
        if f[0] == pl.code.si:
            fx.update(range(f[1], f[1] + FSIZE.get(f[2], 2)))
            if f[2] == 'ptr32' and f[1] > 0 and code[f[1] - 1] == 0x9a:
                fx.add(f[1] - 1)                    # far call TLINK makes 90 0E E8
    for i in range(len(code) - 3):
        if code[i] == 0x0e and code[i + 1] == 0xe8:
            fx.update((i + 2, i + 3))               # near call within the module
    funcs = sorted((off, n) for n, (si, off) in pl.mod.publics.items() if si == pl.code.si)
    good, bad, other = [], [], []
    for k, (off, n) in enumerate(funcs):
        end = funcs[k + 1][0] if k + 1 < len(funcs) else len(code)
        m = SYM.match(n)
        if not m or m.group(1) != 'f':
            other.append(n.lstrip('_'))
            continue
        rs, ro = int(m.group(2), 16), int(m.group(3), 16)
        w = model.where(rs, ro)
        img = model.e.image if w[0] == 'root' else model.e.stubs[w[1]].code
        base = w[1] if w[0] == 'root' else w[2]
        orig = img[base:base + end - off]
        diff = [i for i in range(end - off) if off + i not in fx and
                (i >= len(orig) or orig[i] != code[off + i])]
        nxt = SYM.match(funcs[k + 1][1]) if k + 1 < len(funcs) else None
        place_ok = nxt is None or (int(nxt.group(2), 16), int(nxt.group(3), 16)) == (rs, ro + end - off)
        if diff or not place_ok:
            bad.append('%s%s' % (n.lstrip('_'), ' (+%04x)' % diff[0] if diff else ' (length)'))
        else:
            good.append(n.lstrip('_'))
    print('  part %s: %d/%d functions match (fixups not compared); not linked: its code '
          'does not fill the segment' % (pl.c.name, len(good), len(good) + len(bad)))
    if bad:
        print('       differ: %s' % ', '.join(bad))
    if other:
        print('       not checked: %s' % ', '.join(other))
    return len(good), len(good) + len(bad)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--exe', required=True)
    ap.add_argument('--dir', required=True)
    ap.add_argument('--names')
    ap.add_argument('--symbols', help='SEG:OFS name lines for symbols that are not C '
                    'identifiers, e.g. compiler helpers (F_FTOL@)')
    ap.add_argument('--date', default='')
    ap.add_argument('--cflags', default='-ml -O1 -k -Ol')
    ap.add_argument('--force', action='store_true')
    ap.add_argument('--cc', default='bc31', help='compiler toolchain (tcdos.sh -T): bc31, bc402')
    ap.add_argument('--ld', default='tc', help='linker toolchain: tc (TLINK 5.0), bc402 (TLINK 6.1)')
    ap.add_argument('--libs', default='', help='startup object and libraries the runtime is '
                    'linked from instead of blobs (tools/match/libmods.py), in link order')
    a = ap.parse_args()
    ddir = os.path.abspath(a.dir)
    srcs = [p for pat in ('*.[cC]', '*.[aA][sS][mM]') for p in glob.glob(os.path.join(ddir, 'src', pat))]
    cfiles = [CFile(p, a.cflags, a.cc) for p in sorted(srcs)]
    probe = mkblobs.Model(a.exe)
    if not compile_all(cfiles, ddir, a.force, probe):
        return 2
    # first pass: where does each file go (the cut between units must not split it)
    placed = []
    for c in cfiles:
        mod = omf.read_obj(open(os.path.join(ddir, 'build', 'obj', c.obj), 'rb').read())[0]
        placed.append(Placed(c, mod, probe))
    keep = [(x.lo, x.hi) for p in placed if not p.c.module for x in p.parts if x.where[0] == 'root']
    cuts = [p.data.hi for p in placed if p.c.module and p.data]
    model = mkblobs.Model(a.exe, keep_together=keep, cut_at=cuts) if keep or cuts else probe
    if a.libs:
        import libmods
        libmods.apply(model, a.libs.split(), os.path.join(ddir, 'build', 'libobj'), log=lambda *x: None)
    symtab = read_names(a.names)
    symtab.update(read_names(a.symbols))
    for p in placed:
        for n, rt in p.publics().items():
            symtab[n.lstrip('_')] = rt
    for p in placed:                    # whole modules that do not fill their segment yet
        if p.code.where[0] == 'root':
            seg = probe.seg_of(p.code.lo)
            whole = (seg.start, seg.end)
        else:                           # an overlaid module: the whole overlay
            whole = (0, probe.e.stubs[p.code.where[1]].codesize)
        p.partial = p.c.module and (p.code.lo, p.code.hi) != whole
    objpubs = {n for p in placed if p.c.module and not p.partial for n in p.mod.publics} | model.library_publics
    # names the library modules take from the game, now defined by whole-module objects
    model.extra_publics = [x for x in model.extra_publics if x[1] not in objpubs]
    for p in placed:
        if p.partial:
            continue
        if p.c.module:
            link_module(p, model, symtab, ddir, objpubs)
            continue
        for part in p.parts:
            data, fx = convert_fixups(p, part, model, symtab)
            model.piece_at(part.where).replace(part.lo, data, fx, p.c.name)
    model.place_movable()
    linkdir = os.path.join(ddir, 'build', 'link')
    for old in glob.glob(os.path.join(linkdir, '*')):
        os.remove(old)
    exe_name = model.e.link_name              # TLINK stores the output name in the executable
    model.write(linkdir, exe_name)
    cmd = [TCDOS, '-T', a.ld, '-C', linkdir] + (['-D', a.date] if a.date else []) + ['--', 'TLINK', '@LINK.RSP']
    r = run(cmd)
    lout = '\n'.join(l for l in r.stdout.splitlines() if l.strip() and not l.startswith('Turbo Link'))
    if lout:
        print(lout)
    out_exe = os.path.join(linkdir, exe_name)
    if r.returncode != 0 or not os.path.exists(out_exe) or re.search(r'^(Error|Fatal)', lout, re.M):
        print('link failed')
        return 2
    # per-file report
    orig, new = exemodel.Exe(a.exe), exemodel.Exe(out_exe)
    good = 0
    for p in placed:
        if p.partial:
            p.status = 'diff'
            function_report(p, probe)
            continue
        if p.where[0] == 'root':
            o, n = orig.image[p.lo:p.hi], new.image[p.lo:p.hi]
        else:
            k = p.where[1]
            o, n = orig.stubs[k].code[p.lo:p.hi], new.stubs[k].code[p.lo:p.hi] if k < len(new.stubs) else b''
        p.status = 'diff'
        data_ok = True
        if p.data:
            do, dn = orig.image[p.data.lo:p.data.hi], new.image[p.data.lo:p.data.hi]
            if do != dn:
                data_ok = False
                k = next(i for i in range(len(do)) if do[i] != dn[i])
                print('  DIFF %s data (%04x:%04x, %d bytes): first difference at +%04x' %
                      (p.c.name, p.c.rt_data[0], p.c.rt_data[1], len(do), k))
                print('       orig    %s' % do[k:k + 16].hex(' '))
                print('       rebuilt %s' % dn[k:k + 16].hex(' '))
        if report(p, o, n, p.c.rt) and data_ok:
            p.status = 'ok'
            good += 1
            print('  ok   %s (%04x:%04x, %d bytes%s)' % (p.c.name, p.c.rt[0], p.c.rt[1], len(o),
                                               ', data %d bytes' % len(p.data.bytes) if p.data else ''))
    same = open(a.exe, 'rb').read() == open(out_exe, 'rb').read()
    with open(os.path.join(ddir, 'build', 'status.txt'), 'w') as f:
        f.write('# file seg:off bytes ok|diff (written by build.py, read by progress.py)\n')
        for p in placed:
            f.write('%s %04x:%04x %d %s\n' % (p.c.name, p.c.rt[0], p.c.rt[1], p.hi - p.lo, p.status))
        for name, lib, at, n in getattr(model, 'library_code', []):     # linked from a library
            sg = model.seg_of(at)
            f.write('%s/%s %04x:%04x %d ok\n' % (lib, name.replace(' ', '_'), sg.frame + 0x1000,
                                                 at - sg.frame * 16, n))
    print('%d/%d sources match; %s' % (good, len(placed), 'executable IDENTICAL' if same else
                                       'executable DIFFERS (tools/match/exediff.py %s %s)'
                                       % (os.path.relpath(a.exe), os.path.relpath(out_exe))))
    return 0 if same else 1


if __name__ == '__main__':
    sys.exit(main())
