#!/usr/bin/env python3
"""Static recompiler: 16-bit real-mode Borland C executable -> C.

  recomp.py --exe GAME.EXE --out gen --entries entries.txt
  recomp.py --exe GAME.EXE --drivers FILE:NAME[,FILE:NAME] --out gen --entries entries.txt

A Borland VROOMM (FBOV) overlaid exe is flattened in memory first (unfbov.py).
The relocated load image is written to OUT/image.c and embedded in the binary.
Seeds: the program entry and the entries file (one SEG:OFS, or DRIVER:OFS, per line;
the runtime appends unknown call targets to missing_entries.txt, see discover.sh).
"""
import os, re, sys, glob, struct, collections
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from x86 import decode, DecodeError, CC

HERE = os.path.dirname(os.path.abspath(__file__))
LOAD_SEG = 0x1000


def arg(name, default):
    return sys.argv[sys.argv.index(name) + 1] if name in sys.argv else default


EXE = arg('--exe', os.environ.get('RC_EXE', 'EUROPE.EXE'))

# ---------------------------------------------------------------- image
exe = open(EXE, 'rb').read()
_h = struct.unpack('<2s13H', exe[:28])
_loaded = _h[2] * 512 - ((512 - _h[1]) if _h[1] else 0)
if exe[_loaded:_loaded + 4] == b'FBOV':
    import unfbov
    exe, _ = unfbov.flatten(exe, verbose=False)
hdr = struct.unpack('<2s13H', exe[:28])
nrel, hdr_paras, relofs = hdr[3], hdr[4], hdr[12]
entry_cs, entry_ip = hdr[11] + LOAD_SEG, hdr[10]
mem = bytearray(0x110000)
img = exe[hdr_paras * 16:]
mem[LOAD_SEG * 16: LOAD_SEG * 16 + len(img)] = img
for i in range(nrel):
    o, s = struct.unpack('<HH', exe[relofs + 4 * i: relofs + 4 * i + 4])
    a = LOAD_SEG * 16 + s * 16 + o
    w = (mem[a] | (mem[a + 1] << 8)) + LOAD_SEG
    mem[a], mem[a + 1] = w & 0xff, (w >> 8) & 0xff
IMAGE_END = LOAD_SEG * 16 + len(img)


def seg_bytes(cs):
    return bytes(mem[cs * 16: cs * 16 + 0x10000])


_segcache = {}


def code_of(cs):
    if cs not in _segcache:
        _segcache[cs] = seg_bytes(cs)
    return _segcache[cs]


# ---------------------------------------------------------------- analysis
DRIVER_SEG = 0xF800     # pseudo segment raw drivers are decoded at (their runtime CS varies)
PREFIX = {}             # cs -> function name prefix (drivers)


class Func:
    def __init__(self, cs, ip):
        self.cs, self.ip = cs, ip
        self.insns = {}
        self.tables = {}      # jmpi addr -> [targets]
        self.targets = set()  # label targets
        self.calls = set()    # (cs, ip)
        self.errors = []
        self.computed = set()  # jmpi with heuristic (immediate-derived) targets

    @property
    def name(self):
        if self.cs in PREFIX:
            return '%s_%04x' % (PREFIX[self.cs], self.ip)
        return 'f_%04x_%04x' % (self.cs, self.ip)


def find_reg_table(f, ins):
    """`mov reg, [cs:bx+D]` ... `jmp reg`: bound by the largest unsigned `cmp ax|bx, N` + `ja/jbe`
    in the function (e.g. a driver's INT handler checking the function number first)"""
    r = ins.ops[0].reg
    prev = [f.insns[a] for a in sorted(a for a in f.insns if a < ins.addr)[-4:] if f.insns[a] is not None]
    load = [p for p in prev if p.op == 'mov' and p.ops[0].kind == 'reg' and p.ops[0].reg == r
            and p.ops[1].kind == 'mem' and p.ops[1].seg == 'cs' and p.ops[1].base in (('bx',), ('si',), ('di',))]
    if not load:
        return None
    ins_sorted = [f.insns[a] for a in sorted(f.insns) if f.insns[a] is not None]
    bounds = [ins_sorted[k].ops[1].val for k in range(len(ins_sorted) - 1)
              if ins_sorted[k].op == 'cmp' and ins_sorted[k].ops[0].kind == 'reg' and ins_sorted[k].ops[0].reg in ('ax', 'bx')
              and ins_sorted[k].ops[1].kind == 'imm' and ins_sorted[k + 1].op in ('ja', 'jbe', 'jae', 'jb')]
    if not bounds or max(bounds) > 256:
        return None
    code = code_of(f.cs)
    d = load[-1].ops[1].disp
    return [code[(d + 2 * i) & 0xffff] | (code[(d + 2 * i + 1) & 0xffff] << 8) for i in range(max(bounds) + 1)]


def find_table(f, ins):
    """Bound a jump table used by `jmp word [cs:bx+D]`; returns list of targets or None"""
    m = ins.ops[0]
    if m.kind == 'reg':
        return find_reg_table(f, ins)
    # DS-relative tables only in drivers, where DS == CS
    if m.kind != 'mem' or not (m.seg == 'cs' or (m.seg is None and f.cs in PREFIX)) \
            or m.base not in (('bx',), ('bx', 'si'), ('bx', 'di'), ('si',), ('di',)):
        return None
    prev = sorted(a for a in f.insns if a < ins.addr)[-14:]
    prev = [f.insns[a] for a in prev]
    count = None
    base = m.disp
    # Borland sparse switch: mov cx,N ; mov bx,VALUES ; scan... ; jmp [cs:bx+2N]
    # bx points at the matched value, targets are the parallel table VALUES+2N
    movcx = [p.ops[1].val for p in prev if p.op == 'mov' and p.ops[0].kind == 'reg' and p.ops[0].reg == 'cx' and p.ops[1].kind == 'imm']
    movbx = [p.ops[1].val for p in prev if p.op == 'mov' and p.ops[0].kind == 'reg' and p.ops[0].reg == 'bx' and p.ops[1].kind == 'imm']
    # (32-bit switch values: low words, high words, then targets -> displacement 4N)
    if movcx and movbx and m.base == ('bx',) and m.disp in (2 * movcx[-1], 4 * movcx[-1]):
        count = movcx[-1]
        base = (movbx[-1] + m.disp) & 0xffff
    if count is None:
        # index masked with `and reg, 2^k-1`
        for p in reversed(prev[-6:]):
            if p.op == 'and' and p.ops[0].kind == 'reg' and p.ops[1].kind == 'imm' and ((p.ops[1].val + 1) & p.ops[1].val) == 0:
                count = p.ops[1].val + 1
                break
    if count is None:
        for p in reversed(prev):
            if p.op == 'cmp' and p.ops[1].kind == 'imm' and p.ops[0].kind == 'reg':
                count = p.ops[1].val + 1
                break
    if count is None or count > 512:
        return None
    code = code_of(f.cs)
    return [code[(base + 2 * i) & 0xffff] | (code[(base + 2 * i + 1) & 0xffff] << 8) for i in range(count)]


TERMINATORS = {'ret', 'retf', 'iret', 'jmpf', 'jmpfi', 'hlt'}


def explore(f):
    code = code_of(f.cs)
    work = [f.ip]
    f.targets.add(f.ip)
    while work:
        a = work.pop()
        while a not in f.insns:
            try:
                ins = decode(code, a)
            except (DecodeError, IndexError) as e:
                f.errors.append('%04x: %s' % (a, e))
                f.insns[a] = None
                break
            f.insns[a] = ins
            op = ins.op
            nxt = (a + ins.len) & 0xffff
            if op.startswith('j') and op not in ('jmp', 'jmpf', 'jmpi', 'jmpfi') or op in ('loop', 'loope', 'loopne', 'jcxz'):
                f.targets.add(ins.target)
                work.append(ins.target)
                a = nxt
                continue
            if op == 'jmp':
                f.targets.add(ins.target)
                a = ins.target
                continue
            if op == 'jmpi':
                t = find_table(f, ins)
                if t is not None:
                    f.tables[a] = t
                    for x in t:
                        f.targets.add(x)
                        work.append(x)
                break
            if op == 'jmpf':
                f.calls.add((ins.far[0], ins.far[1]))
            if op in TERMINATORS:
                break
            if op == 'call':
                f.calls.add((f.cs, ins.target))
            elif op == 'callf':
                f.calls.add((ins.far[0], ins.far[1]))
            elif op == 'int' and ins.ops[0].val == 0x20:
                break
            a = nxt
        if not work:
            # computed jumps (jmp [bp-6] etc.): code-address immediates the function stores
            lo = min(k for k in f.insns)
            hi = max(k for k in f.insns) + 0x100
            for ja, ji in list(f.insns.items()):
                if ji is None or ji.op != 'jmpi' or ja in f.tables and not ja in f.computed:
                    continue
                cand = sorted({x.ops[1].val for x in f.insns.values() if x is not None and x.op == 'mov'
                               and len(x.ops) == 2 and x.ops[1].kind == 'imm' and x.ops[1].size == 2
                               and lo <= x.ops[1].val <= hi and x.ops[0].kind == 'mem'})
                new = [c for c in cand if c not in f.insns]
                if cand:
                    f.tables[ja] = cand
                    f.computed.add(ja)
                    for c in cand:
                        f.targets.add(c)
                    work.extend(new)


# ---------------------------------------------------------------- codegen
R16 = {'ax', 'cx', 'dx', 'bx', 'sp', 'bp', 'si', 'di'}
R8 = {'al': 'AL', 'ah': 'AH', 'cl': 'CL', 'ch': 'CH', 'dl': 'DL', 'dh': 'DH', 'bl': 'BL', 'bh': 'BH'}


def ea(o):
    parts = ['cpu.%s' % r for r in o.base]
    if o.disp or not parts:
        parts.append('0x%x' % o.disp)
    return '(uint16_t)(%s)' % ' + '.join(parts)


def segx(o, override=None):
    s = override or o.seg
    if s:
        return 'cpu.%s' % s
    return 'cpu.ss' if 'bp' in o.base else 'cpu.ds'


def rd(o, size=None):
    size = size or o.size
    if o.kind == 'reg':
        return R8[o.reg] if o.reg in R8 else 'cpu.%s' % o.reg
    if o.kind == 'sreg':
        return 'cpu.%s' % o.reg
    if o.kind == 'imm':
        return '0x%x' % o.val
    return '%s(%s, %s)' % ({1: 'RB', 2: 'RW', 4: 'RD'}[size], segx(o), ea(o))


def wr(o, val, size=None):
    size = size or o.size
    if o.kind == 'reg':
        if o.reg in R8:
            return '%s = (uint8_t)(%s);' % (R8[o.reg], val)
        return 'cpu.%s = (uint16_t)(%s);' % (o.reg, val)
    if o.kind == 'sreg':
        return 'cpu.%s = (uint16_t)(%s);' % (o.reg, val)
    return '%s(%s, %s, %s);' % ({1: 'WB', 2: 'WW'}[size], segx(o), ea(o), val)


def opsize(ins):
    for o in ins.ops:
        if o.kind in ('reg', 'mem') and o.size in (1, 2):
            return o.size
    return ins.size


class Gen:
    def __init__(self, funcs_by_lin):
        self.by_lin = funcs_by_lin
        self.missing = set()

    def fname(self, cs, ip):
        f = self.by_lin.get((cs * 16 + ip) & 0xfffff)
        if f is None:
            self.missing.add((cs, ip))
            return None
        return f.name

    def call_direct(self, cs, ip):
        n = self.fname(cs, ip)
        return '%s();' % n if n else 'rc_call(0x%04x, 0x%04x);' % (cs, ip)

    def insn(self, f, ins, out):
        op, o = ins.op, ins.ops
        nxt = (ins.addr + ins.len) & 0xffff
        N = {1: '8', 2: '16'}.get(opsize(ins), '16')
        e = out.append
        if op == 'mov':
            e(wr(o[0], rd(o[1])))
        elif op in ('add', 'adc', 'sub', 'sbb', 'cmp'):
            fn = {'add': 'add', 'adc': 'add', 'sub': 'sub', 'sbb': 'sub', 'cmp': 'sub'}[op]
            c = 'cpu.cf' if op in ('adc', 'sbb') else '0'
            x = '%s%s(%s, %s, %s)' % (fn, N, rd(o[0]), rd(o[1], o[0].size), c)
            e(('(void)%s;' % x) if op == 'cmp' else wr(o[0], x))
        elif op in ('and', 'or', 'xor', 'test'):
            sym = {'and': '&', 'or': '|', 'xor': '^', 'test': '&'}[op]
            x = 'logic%s(%s %s %s)' % (N, rd(o[0]), sym, rd(o[1], o[0].size))
            e(('(void)%s;' % x) if op == 'test' else wr(o[0], x))
        elif op in ('inc', 'dec', 'neg'):
            e(wr(o[0], '%s%s(%s)' % (op, N, rd(o[0]))))
        elif op == 'not':
            e(wr(o[0], '~%s' % rd(o[0])))
        elif op in ('rol', 'ror', 'rcl', 'rcr', 'shl', 'shr', 'sal', 'sar'):
            e(wr(o[0], '%s%s(%s, %s)' % (op, N, rd(o[0]), rd(o[1]))))
        elif op in ('mul', 'imul', 'div', 'idiv'):
            e('rc_%s%s(%s);' % (op, N, rd(o[0])))
        elif op == 'imul3':
            e(wr(o[0], 'rc_imul3(%s, %s)' % (rd(o[1]), rd(o[2]))))
        elif op == 'lea':
            e(wr(o[0], ea(o[1])))
        elif op in ('les', 'lds'):
            m = o[1]
            e('{ uint16_t _e = %s, _s = %s; uint16_t _o = RW(_s, _e); cpu.%s = RW(_s, (uint16_t)(_e + 2)); %s }'
              % (ea(m), segx(m), 'es' if op == 'les' else 'ds', wr(o[0], '_o')))
        elif op == 'xchg':
            t = 'uint8_t' if N == '8' else 'uint16_t'
            e('{ %s _t = %s; %s %s }' % (t, rd(o[0]), wr(o[0], rd(o[1])), wr(o[1], '_t')))
        elif op == 'cbw':
            e('cpu.ax = (uint16_t)(int16_t)(int8_t)AL;')
        elif op == 'cwd':
            e('cpu.dx = (cpu.ax & 0x8000) ? 0xffff : 0;')
        elif op == 'push':
            if o[0].kind == 'reg' and o[0].reg == 'sp':
                e('{ uint16_t _v = cpu.sp; PUSH(_v); }')
            else:
                e('PUSH(%s);' % rd(o[0], 2))
        elif op == 'pop':
            e('{ uint16_t _v = POP(); %s }' % wr(o[0], '_v', 2))
        elif op == 'pushf':
            e('PUSH(FLAGS());')
        elif op == 'popf':
            e('SETFLAGS(POP());')
        elif op == 'sahf':
            e('{ uint8_t _f = AH; cpu.cf = _f & 1; cpu.pf = (_f >> 2) & 1; cpu.af = (_f >> 4) & 1; cpu.zf = (_f >> 6) & 1; cpu.sf = (_f >> 7) & 1; }')
        elif op == 'lahf':
            e('AH = (uint8_t)FLAGS();')
        elif op == 'pusha':
            e('{ uint16_t _s = cpu.sp; PUSH(cpu.ax); PUSH(cpu.cx); PUSH(cpu.dx); PUSH(cpu.bx); PUSH(_s); PUSH(cpu.bp); PUSH(cpu.si); PUSH(cpu.di); }')
        elif op == 'popa':
            e('cpu.di = POP(); cpu.si = POP(); cpu.bp = POP(); POP(); cpu.bx = POP(); cpu.dx = POP(); cpu.cx = POP(); cpu.ax = POP();')
        elif op.startswith('j') and op[1:] in CC:
            e('if (CC_%s) { %sgoto L_%04x; }' % (op[1:], self.poll(ins), ins.target))
        elif op == 'jcxz':
            e('if (!cpu.cx) goto L_%04x;' % ins.target)
        elif op in ('loop', 'loope', 'loopne'):
            c = {'loop': '', 'loope': ' && cpu.zf', 'loopne': ' && !cpu.zf'}[op]
            e('if (--cpu.cx%s) { %sgoto L_%04x; }' % (c, self.poll(ins), ins.target))
        elif op == 'jmp':
            e('%sgoto L_%04x;' % (self.poll(ins), ins.target))
        elif op == 'call':
            e('CALLN(0x%04x, %s);' % (nxt, self.call_direct(f.cs, ins.target).rstrip(';')))
        elif op == 'callf':
            s, i = ins.far
            e('CALLF(0x%04x, 0x%04x, %s);' % (s, nxt, self.call_direct(s, i).rstrip(';')))
        elif op == 'calli':
            e('{ uint16_t _t = %s; CALLN(0x%04x, rc_call(cpu.cs, _t)); }' % (rd(o[0], 2), nxt))
        elif op == 'callfi':
            m = o[0]
            e('{ uint16_t _e = %s, _s = %s; uint16_t _o = RW(_s, _e), _g = RW(_s, (uint16_t)(_e + 2)); '
              'CALLF(_g, 0x%04x, rc_call(_g, _o)); }' % (ea(m), segx(m), nxt))
        elif op == 'ret':
            n = o[0].val if o else 0
            e('cpu.sp += %d; return;' % (2 + n))
        elif op == 'retf':
            n = o[0].val if o else 0
            e('POP(); cpu.cs = POP();%s return;' % ((' cpu.sp += %d;' % n) if n else ''))
        elif op == 'iret':
            e('POP(); cpu.cs = POP(); SETFLAGS(POP()); return;')
        elif op == 'jmpf':
            s, i = ins.far
            e('cpu.cs = 0x%04x; %s return;' % (s, self.call_direct(s, i)))
        elif op == 'jmpi':
            v = rd(o[0], 2)
            if ins.addr in f.tables:
                cases = ' '.join('case 0x%04x: goto L_%04x;' % (t, t) for t in sorted(set(f.tables[ins.addr])))
                e('switch (%s) { %s default: if (rc_is_ret_near(%s)) return; rc_bad_jump(cpu.cs, 0x%04x, %s); return; }' % (v, cases, v, ins.addr, v))
            else:
                e('{ uint16_t _t = %s; if (rc_is_ret_near(_t)) return; rc_call(cpu.cs, _t); return; }' % v)
        elif op == 'jmpfi':
            m = o[0]
            e('{ uint16_t _e = %s, _s = %s; uint16_t _o = RW(_s, _e), _g = RW(_s, (uint16_t)(_e + 2)); '
              'if (rc_is_ret_far(_g, _o)) { cpu.cs = _g; return; } cpu.cs = _g; rc_call(_g, _o); return; }' % (ea(m), segx(m)))
        elif op == 'int':
            e('rc_int(0x%02x);' % o[0].val)
        elif op == 'into':
            e('if (cpu.of) rc_int(4);')
        elif op == 'in':
            port = rd(o[0]) if o[0].kind == 'imm' else 'cpu.dx'
            e('AL = rc_in8(%s);' % port if ins.size == 1 else 'cpu.ax = rc_in16(%s);' % port)
        elif op == 'out':
            port = rd(o[0]) if o[0].kind == 'imm' else 'cpu.dx'
            e('rc_out8(%s, AL);' % port if ins.size == 1 else 'rc_out16(%s, cpu.ax);' % port)
        elif op in ('movs', 'lods', 'cmps'):
            s = 'cpu.%s' % (ins.seg or 'ds')
            rep = {None: 0, 'e': 1, 'ne': 2}[ins.rep]
            e('rc_%s(%d, %s, %d);' % (op, ins.size, s, rep))
        elif op in ('stos', 'scas'):
            rep = {None: 0, 'e': 1, 'ne': 2}[ins.rep]
            e('rc_%s(%d, %d);' % (op, ins.size, rep))
        elif op == 'xlat':
            e('AL = RB(cpu.%s, (uint16_t)(cpu.bx + AL));' % (ins.seg or 'ds'))
        elif op in ('clc', 'stc', 'cmc', 'cli', 'sti', 'cld', 'std'):
            e({'clc': 'cpu.cf = 0;', 'stc': 'cpu.cf = 1;', 'cmc': 'cpu.cf ^= 1;', 'cli': 'cpu.if_ = 0;',
               'sti': 'cpu.if_ = 1;', 'cld': 'cpu.df = 0;', 'std': 'cpu.df = 1;'}[op])
        elif op == 'hlt':
            e('rc_hlt(); return;')
        elif op in ('nop', 'fwait', 'bound'):
            pass
        elif op == 'fpu':
            esc, mod, reg, rm = ins.fpu
            if mod == 3:
                e('rc_fpu_r(%d, %d, %d);' % (esc, reg, rm))
            else:
                m = o[0]
                e('rc_fpu_m(%d, %d, %s, %s);' % (esc, reg, segx(m), ea(m)))
        elif op == 'enter':
            e('rc_enter(0x%x, %d);' % (o[0].val, o[1].val))
        elif op == 'leave':
            e('cpu.sp = cpu.bp; cpu.bp = POP();')
        elif op in ('daa', 'das', 'aaa', 'aas'):
            e('rc_%s();' % op)
        elif op in ('aam', 'aad'):
            e('rc_%s(0x%x);' % (op, o[0].val))
        elif op == 'emu3e':
            e('rc_emu3e(0x%02x);' % o[0].val)
        elif op == 'salc':
            e('AL = cpu.cf ? 0xff : 0;')
        elif op in ('insb', 'insw', 'outsb', 'outsw', 'into'):
            f.errors.append('suspicious %r' % ins)
            e('rc_fatal("unsupported %s at %04x:%04x");' % (op, f.cs, ins.addr))
        else:
            raise SystemExit('codegen: unhandled %r' % ins)

    def poll(self, ins):
        """backward branches are safe points for timer/input"""
        return 'POLL(); ' if ins.target is not None and ins.target <= ins.addr else ''

    def func(self, f):
        out = ['void %s(void)' % f.name, '{']
        addrs = sorted(a for a, i in f.insns.items())
        labels = set(f.targets)
        body = []
        for k, a in enumerate(addrs):
            ins = f.insns[a]
            body.append((a, None))
            if ins is None:
                body.append((a, 'rc_fatal("undecodable code at %04x:%04x");' % (f.cs, a)))
                continue
            lines = []
            self.insn(f, ins, lines)
            for l in lines:
                body.append((a, l))
            falls = ins.op not in TERMINATORS and ins.op not in ('jmp', 'jmpi') and not (ins.op == 'int' and ins.ops[0].val == 0x20)
            nxt = (a + ins.len) & 0xffff
            if falls and (k + 1 >= len(addrs) or addrs[k + 1] != nxt):
                body.append((a, 'goto L_%04x;' % nxt))
                labels.add(nxt)
                if nxt not in f.insns:
                    f.errors.append('fallthrough to undecoded %04x' % nxt)
        if addrs and addrs[0] != f.ip:
            out.append('    goto L_%04x;' % f.ip)
        for a, l in body:
            if l is None:
                ins = f.insns[a]
                if a in labels:
                    out.append('L_%04x:' % a)
                if ins is not None:
                    out.append('    /* %s */' % repr(ins).replace('*/', '* /'))
            else:
                out.append('    ' + l)
        for t in sorted(labels):
            if t not in f.insns:
                out.append('L_%04x: rc_fatal("jump to unexplored %04x:%04x"); return;' % (t, f.cs, t))
        out.append('}')
        return out


def drivers_main(spec, outdir, ef):
    """--drivers FILE:NAME[,FILE:NAME]: translate raw, position-independent drivers
    (loaded by the game at seg:0000 of a heap block). Functions are keyed by offset."""
    os.makedirs(outdir, exist_ok=True)
    for old in glob.glob(os.path.join(outdir, 'drv_*.c')):
        os.remove(old)
    regs = []
    for item in [x for x in spec.split(',') if x]:
        path, name = item.split(':')
        raw = open(path, 'rb').read()
        mem[DRIVER_SEG * 16: DRIVER_SEG * 16 + len(raw)] = raw
        _segcache.pop(DRIVER_SEG, None)
        PREFIX[DRIVER_SEG] = 'drv_' + name
        seeds = [0]
        if os.path.exists(ef):
            for line in open(ef):
                line = line.split('#')[0].strip()
                if line.startswith(name + ':'):
                    seeds.append(int(line.split(':')[1], 16))
        funcs, by_lin = {}, {}
        work = [(DRIVER_SEG, o) for o in seeds]
        while work:
            cs, ip = work.pop()
            if cs != DRIVER_SEG or ip >= len(raw):
                continue
            lin = cs * 16 + ip
            if lin in by_lin:
                continue
            f = Func(cs, ip)
            explore(f)
            funcs[(cs, ip)] = f
            by_lin[lin] = f
            work.extend(f.calls)
        gen = Gen(by_lin)
        lines = ['/* generated by tools/recomp.py from %s - do not edit */' % os.path.basename(path),
                 '#include "cpu.h"', '']
        for f in sorted(funcs.values(), key=lambda f: f.ip):
            lines.append('void %s(void);' % f.name)
        lines.append('')
        for f in sorted(funcs.values(), key=lambda f: f.ip):
            lines += gen.func(f)
            lines.append('')
        sig = raw[:64]
        lines.append('const uint8_t rc_drv_%s_sig[%d] = { %s };' % (name, len(sig), ', '.join('0x%02x' % b for b in sig)))
        lines.append('const rc_entry rc_drv_%s_tab[] = {' % name)
        for f in sorted(funcs.values(), key=lambda f: f.ip):
            lines.append('    { 0x%04x, %s },' % (f.ip, f.name))
        lines.append('};')
        open(os.path.join(outdir, 'drv_%s.c' % name), 'w').write('\n'.join(lines) + '\n')
        regs.append((name, len(sig), len(funcs)))
        errs = [e for f in funcs.values() for e in f.errors]
        print('driver %s: %d functions, %d instructions, %d errors %s' % (
            name, len(funcs), sum(len(f.insns) for f in funcs.values()), len(errs), errs[:5]))
    out = ['/* generated: driver registry */', '#include "cpu.h"']
    for name, n, _ in regs:
        out.append('extern const uint8_t rc_drv_%s_sig[%d];' % (name, n))
        out.append('extern const rc_entry rc_drv_%s_tab[];' % name)
    out.append('const rc_driver rc_drivers[] = {')
    for name, n, cnt in regs:
        out.append('    { "%s", rc_drv_%s_sig, %d, rc_drv_%s_tab, %d },' % (name, name, n, name, cnt))
    out.append('    { 0, 0, 0, 0, 0 }')
    out.append('};')
    open(os.path.join(outdir, 'drivers.c'), 'w').write('\n'.join(out) + '\n')


def main():
    outdir = arg('--out', os.path.join('recomp', 'gen'))
    if '--drivers' in sys.argv:
        return drivers_main(arg('--drivers', ''), outdir, arg('--entries', os.path.join('recomp', 'entries.txt')))
    ef = arg('--entries', os.path.join('recomp', 'entries.txt'))
    os.makedirs(outdir, exist_ok=True)

    seeds = [(entry_cs, entry_ip)]
    if os.path.exists(ef):
        for line in open(ef):
            line = line.split('#')[0].strip()
            if line:
                s, o = line.split(':')
                if not re.fullmatch(r'[0-9a-fA-F]{1,4}', s):
                    continue            # "driver:offset" entries are for --drivers
                seeds.append((int(s, 16), int(o, 16)))

    funcs, by_lin = {}, {}

    def discover(work):
        while work:
            cs, ip = work.pop()
            lin = (cs * 16 + ip) & 0xfffff
            if lin in by_lin or lin >= IMAGE_END or lin < LOAD_SEG * 16:
                continue
            f = Func(cs, ip)
            explore(f)
            funcs[(cs, ip)] = f
            by_lin[lin] = f
            work.extend(f.calls)

    discover(list(dict.fromkeys(seeds)))

    gen = Gen(by_lin)
    byseg = collections.defaultdict(list)
    for f in funcs.values():
        byseg[f.cs].append(f)
    hdr_lines = ['/* generated by tools/recomp.py */', '#include "cpu.h"']
    for f in sorted(funcs.values(), key=lambda f: (f.cs, f.ip)):
        hdr_lines.append('void %s(void);' % f.name)
    open(os.path.join(outdir, 'funcs.h'), 'w').write('\n'.join(hdr_lines) + '\n')
    for old in glob.glob(os.path.join(outdir, 'seg_*.c')):
        os.remove(old)
    ninsn = 0
    for cs, fl in sorted(byseg.items()):
        lines = ['/* generated by tools/recomp.py - do not edit */', '#include "funcs.h"', '']
        for f in sorted(fl, key=lambda f: f.ip):
            lines += gen.func(f)
            lines.append('')
            ninsn += len(f.insns)
        open(os.path.join(outdir, 'seg_%04x.c' % cs), 'w').write('\n'.join(lines))
    tab = ['/* generated */', '#include "funcs.h"',
           'const rc_entry rc_funcs[] = {']
    for lin, f in sorted(by_lin.items()):
        tab.append('    { 0x%05x, %s },' % (lin, f.name))
    tab += ['};', 'const int rc_nfuncs = %d;' % len(by_lin)]
    open(os.path.join(outdir, 'dispatch.c'), 'w').write('\n'.join(tab) + '\n')

    # the relocated load image, embedded in the binary
    with open(os.path.join(outdir, 'image.c'), 'w') as out:
        n = IMAGE_END - LOAD_SEG * 16
        out.write('/* generated: relocated load image of %s */\n#include <stdint.h>\n' % os.path.basename(EXE))
        out.write('const uint32_t rc_image_size = %d;\n' % n)
        out.write('const uint16_t rc_image_entry[4] = { 0x%04x, 0x%04x, 0x%04x, 0x%04x };  /* cs ip ss sp */\n'
                  % (entry_cs, entry_ip, hdr[7] + LOAD_SEG, hdr[8]))
        out.write('const uint8_t rc_image[%d] = {\n' % n)
        img_bytes = mem[LOAD_SEG * 16: IMAGE_END]
        for k in range(0, n, 32):
            out.write(','.join(str(b) for b in img_bytes[k:k + 32]) + ',\n')
        out.write('};\n')

    errs = [(f.name, e) for f in funcs.values() for e in f.errors]
    print('%d functions, %d instructions, %d segments, %d errors' % (len(funcs), ninsn, len(byseg), len(errs)))
    for n, e in errs[:40]:
        print('  %s: %s' % (n, e))
    untab = [(f.name, '%04x' % a) for f in funcs.values() for a, i in f.insns.items()
             if i is not None and i.op == 'jmpi' and a not in f.tables]
    if untab:
        print('%d indirect jumps without table bound:' % len(untab), untab[:20])


if __name__ == '__main__':
    main()
