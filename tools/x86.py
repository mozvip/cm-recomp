"""16-bit x86 (8086/80186) + x87 instruction decoder for the static recompiler.

Borland's 8087 emulator encodings are decoded as the FPU instructions they stand for:
  CD 34..3B <modrm..>   -> D8..DF <modrm..>        (default segment)
  CD 3C xx <modrm..>    -> seg-override + (xx|C0)  (xx bits 7-6: 00=DS 01=SS 10=CS 11=ES)
  CD 3D                 -> FWAIT
"""

REG8 = ['al', 'cl', 'dl', 'bl', 'ah', 'ch', 'dh', 'bh']
REG16 = ['ax', 'cx', 'dx', 'bx', 'sp', 'bp', 'si', 'di']
SREG = ['es', 'cs', 'ss', 'ds']
EA_BASE = [('bx', 'si'), ('bx', 'di'), ('bp', 'si'), ('bp', 'di'), ('si',), ('di',), ('bp',), ('bx',)]
CC = ['o', 'no', 'b', 'ae', 'e', 'ne', 'be', 'a', 's', 'ns', 'p', 'np', 'l', 'ge', 'le', 'g']
ALU = ['add', 'or', 'adc', 'sbb', 'and', 'sub', 'xor', 'cmp']
SHF = ['rol', 'ror', 'rcl', 'rcr', 'shl', 'shr', 'sal', 'sar']


class DecodeError(Exception):
    pass


class Op:
    """Operand. kind: reg | sreg | mem | imm"""
    __slots__ = ('kind', 'size', 'reg', 'seg', 'base', 'disp', 'val')

    def __init__(self, kind, size=0, reg=None, seg=None, base=(), disp=0, val=0):
        self.kind, self.size, self.reg, self.seg = kind, size, reg, seg
        self.base, self.disp, self.val = base, disp, val

    def __repr__(self):
        if self.kind == 'reg':
            return self.reg
        if self.kind == 'sreg':
            return self.reg
        if self.kind == 'imm':
            return hex(self.val)
        s = '+'.join(self.base)
        if self.disp or not s:
            s += ('+' if s else '') + hex(self.disp)
        return '%s[%s%s]' % ({1: 'b', 2: 'w', 4: 'd', 8: 'q', 10: 't'}.get(self.size, ''),
                             (self.seg + ':') if self.seg else '', s)


class Insn:
    __slots__ = ('addr', 'len', 'op', 'ops', 'rep', 'seg', 'target', 'far', 'fpu', 'size', 'raw')

    def __init__(self, addr):
        self.addr, self.len, self.op, self.ops = addr, 0, None, []
        self.rep = self.seg = self.target = self.far = self.fpu = None
        self.size = 2

    def __repr__(self):
        r = ('rep%s ' % self.rep) if self.rep else ''
        t = ''
        if self.target is not None:
            t = ' ->%04x' % self.target
        if self.far is not None:
            t = ' ->%04x:%04x' % self.far
        if self.fpu:
            return '%04x %s%s %s' % (self.addr, r, self.fpu[0], self.ops)
        return '%04x %s%s %s%s' % (self.addr, r, self.op, self.ops, t)


def s8(v):
    return v - 256 if v & 0x80 else v


def s16(v):
    return v - 65536 if v & 0x8000 else v


def decode(code, ip):
    """Decode one instruction at offset ip of a 64K segment image `code`."""
    ins = Insn(ip)
    p = ip

    def byte():
        nonlocal p
        if p >= len(code):
            raise DecodeError('eof')
        v = code[p]
        p += 1
        return v

    def word():
        lo = byte()
        return lo | (byte() << 8)

    seg = None
    while True:
        b = byte()
        if b in (0x26, 0x2e, 0x36, 0x3e):
            seg = SREG[(b >> 3) & 3]
        elif b == 0xf3:
            ins.rep = 'e'
        elif b == 0xf2:
            ins.rep = 'ne'
        elif b == 0xf0:
            pass  # lock
        else:
            break

    def modrm(size):
        """returns (reg field, rm operand)"""
        m = byte()
        mod, reg, rm = m >> 6, (m >> 3) & 7, m & 7
        if mod == 3:
            if size == 1:
                return reg, Op('reg', 1, REG8[rm])
            return reg, Op('reg', 2, REG16[rm])
        if mod == 0 and rm == 6:
            return reg, Op('mem', size, seg=seg, base=(), disp=word())
        base = EA_BASE[rm]
        disp = 0
        if mod == 1:
            disp = s8(byte()) & 0xffff
        elif mod == 2:
            disp = word()
        return reg, Op('mem', size, seg=seg, base=base, disp=disp)

    def r8(i):
        return Op('reg', 1, REG8[i])

    def r16(i):
        return Op('reg', 2, REG16[i])

    def imm(v, size):
        return Op('imm', size, val=v)

    def fpu(esc, segov):
        """x87: esc = 0..7 (D8..DF)"""
        nonlocal seg
        if segov is not None:
            seg = segov
        m = code[p] if p < len(code) else 0
        mod = m >> 6
        size = 0
        if mod != 3:
            reg = (m >> 3) & 7
            FPU_MEMSIZE = {
                0: [4] * 8,                          # D8 m32real arith
                1: [4, 4, 4, 4, 14, 2, 14, 2],       # D9 fld/fst/fstp m32, fldenv, fldcw, fnstenv, fnstcw
                2: [4] * 8,                          # DA m32int arith
                3: [4, 4, 4, 4, 10, 10, 10, 10],     # DB fild/fist/fistp m32, fld/fstp m80
                4: [8] * 8,                          # DC m64real arith
                5: [8, 8, 8, 8, 94, 8, 94, 2],       # DD fld/fst/fstp m64, frstor, fnsave, fnstsw
                6: [2] * 8,                          # DE m16int arith
                7: [2, 2, 2, 2, 10, 8, 10, 8],       # DF fild/fist/fistp m16, fbld, fild m64, fbstp, fistp m64
            }
            size = FPU_MEMSIZE[esc][reg]
            reg, rm = modrm(size)
            ins.ops = [rm]
        else:
            byte()
            reg, rm = (m >> 3) & 7, m & 7
        ins.op = 'fpu'
        ins.fpu = (esc, mod, reg, m & 7)

    if 0xd8 <= b <= 0xdf:
        fpu(b - 0xd8, None)
    elif b == 0xcd:
        n = byte()
        if 0x34 <= n <= 0x3b:
            fpu(n - 0x34, None)
        elif n == 0x3c:
            x = byte()
            fpu((x & 7), {0: 'ds', 1: 'ss', 2: 'cs', 3: 'es'}[x >> 6])
        elif n == 0x3d:
            ins.op = 'fwait'
        elif n == 0x3e:
            ins.op = 'emu3e'   # Borland emulator shortcut: INT 3Eh <function byte>
            ins.ops = [imm(byte(), 1)]
        else:
            ins.op = 'int'
            ins.ops = [imm(n, 1)]
    elif b < 0x40 and (b & 7) < 6:
        o = ALU[b >> 3]
        k = b & 7
        if k == 0:
            reg, rm = modrm(1); ins.ops = [rm, r8(reg)]; ins.size = 1
        elif k == 1:
            reg, rm = modrm(2); ins.ops = [rm, r16(reg)]
        elif k == 2:
            reg, rm = modrm(1); ins.ops = [r8(reg), rm]; ins.size = 1
        elif k == 3:
            reg, rm = modrm(2); ins.ops = [r16(reg), rm]
        elif k == 4:
            ins.ops = [r8(0), imm(byte(), 1)]; ins.size = 1
        else:
            ins.ops = [r16(0), imm(word(), 2)]
        ins.op = o
    elif b in (0x06, 0x0e, 0x16, 0x1e):
        ins.op = 'push'; ins.ops = [Op('sreg', 2, SREG[b >> 3])]
    elif b in (0x07, 0x17, 0x1f):
        ins.op = 'pop'; ins.ops = [Op('sreg', 2, SREG[b >> 3])]
    elif b in (0x27, 0x2f, 0x37, 0x3f):
        ins.op = {0x27: 'daa', 0x2f: 'das', 0x37: 'aaa', 0x3f: 'aas'}[b]
    elif 0x40 <= b <= 0x4f:
        ins.op = 'inc' if b < 0x48 else 'dec'; ins.ops = [r16(b & 7)]
    elif 0x50 <= b <= 0x57:
        ins.op = 'push'; ins.ops = [r16(b & 7)]
    elif 0x58 <= b <= 0x5f:
        ins.op = 'pop'; ins.ops = [r16(b & 7)]
    elif b == 0x60:
        ins.op = 'pusha'
    elif b == 0x61:
        ins.op = 'popa'
    elif b == 0x62:
        reg, rm = modrm(4); ins.op = 'bound'; ins.ops = [r16(reg), rm]
    elif b == 0x68:
        ins.op = 'push'; ins.ops = [imm(word(), 2)]
    elif b == 0x6a:
        ins.op = 'push'; ins.ops = [imm(s8(byte()) & 0xffff, 2)]
    elif b in (0x69, 0x6b):
        reg, rm = modrm(2)
        v = word() if b == 0x69 else s8(byte()) & 0xffff
        ins.op = 'imul3'; ins.ops = [r16(reg), rm, imm(v, 2)]
    elif b in (0x6c, 0x6d, 0x6e, 0x6f):
        ins.op = ['insb', 'insw', 'outsb', 'outsw'][b - 0x6c]; ins.size = 1 + (b & 1)
    elif 0x70 <= b <= 0x7f:
        d = s8(byte()); ins.op = 'j' + CC[b & 15]; ins.target = (p + d) & 0xffff
    elif 0x80 <= b <= 0x83:
        size = 1 if b in (0x80, 0x82) else 2
        reg, rm = modrm(size)
        if b == 0x81:
            v = word()
        elif b == 0x83:
            v = s8(byte()) & 0xffff
        else:
            v = byte()
        ins.op = ALU[reg]; ins.ops = [rm, imm(v, size)]; ins.size = size
    elif b in (0x84, 0x85):
        size = 1 if b == 0x84 else 2
        reg, rm = modrm(size); ins.op = 'test'; ins.size = size
        ins.ops = [rm, r8(reg) if size == 1 else r16(reg)]
    elif b in (0x86, 0x87):
        size = 1 if b == 0x86 else 2
        reg, rm = modrm(size); ins.op = 'xchg'; ins.size = size
        ins.ops = [rm, r8(reg) if size == 1 else r16(reg)]
    elif 0x88 <= b <= 0x8b:
        size = 1 if b in (0x88, 0x8a) else 2
        reg, rm = modrm(size); ins.op = 'mov'; ins.size = size
        r = r8(reg) if size == 1 else r16(reg)
        ins.ops = [rm, r] if b in (0x88, 0x89) else [r, rm]
    elif b == 0x8c:
        reg, rm = modrm(2); ins.op = 'mov'; ins.ops = [rm, Op('sreg', 2, SREG[reg & 3])]
    elif b == 0x8d:
        reg, rm = modrm(2); ins.op = 'lea'; ins.ops = [r16(reg), rm]
        if rm.kind != 'mem':
            raise DecodeError('lea reg')
    elif b == 0x8e:
        reg, rm = modrm(2); ins.op = 'mov'; ins.ops = [Op('sreg', 2, SREG[reg & 3]), rm]
    elif b == 0x8f:
        reg, rm = modrm(2); ins.op = 'pop'; ins.ops = [rm]
    elif b == 0x90:
        ins.op = 'nop'
    elif 0x91 <= b <= 0x97:
        ins.op = 'xchg'; ins.ops = [r16(0), r16(b & 7)]
    elif b == 0x98:
        ins.op = 'cbw'
    elif b == 0x99:
        ins.op = 'cwd'
    elif b == 0x9a:
        o = word(); s = word(); ins.op = 'callf'; ins.far = (s, o)
    elif b == 0x9b:
        ins.op = 'fwait'
    elif b == 0x9c:
        ins.op = 'pushf'
    elif b == 0x9d:
        ins.op = 'popf'
    elif b == 0x9e:
        ins.op = 'sahf'
    elif b == 0x9f:
        ins.op = 'lahf'
    elif 0xa0 <= b <= 0xa3:
        size = 1 if b in (0xa0, 0xa2) else 2
        m = Op('mem', size, seg=seg, base=(), disp=word())
        r = r8(0) if size == 1 else r16(0)
        ins.op = 'mov'; ins.size = size
        ins.ops = [r, m] if b < 0xa2 else [m, r]
    elif 0xa4 <= b <= 0xaf and b not in (0xa8, 0xa9):
        ins.op = {0xa4: 'movs', 0xa6: 'cmps', 0xaa: 'stos', 0xac: 'lods', 0xae: 'scas'}[b & 0xfe]
        ins.size = 1 + (b & 1)
    elif b in (0xa8, 0xa9):
        size = 1 if b == 0xa8 else 2
        ins.op = 'test'; ins.size = size
        ins.ops = [r8(0), imm(byte(), 1)] if size == 1 else [r16(0), imm(word(), 2)]
    elif 0xb0 <= b <= 0xb7:
        ins.op = 'mov'; ins.size = 1; ins.ops = [r8(b & 7), imm(byte(), 1)]
    elif 0xb8 <= b <= 0xbf:
        ins.op = 'mov'; ins.ops = [r16(b & 7), imm(word(), 2)]
    elif b in (0xc0, 0xc1, 0xd0, 0xd1, 0xd2, 0xd3):
        size = 1 if b in (0xc0, 0xd0, 0xd2) else 2
        reg, rm = modrm(size)
        if b in (0xc0, 0xc1):
            c = imm(byte(), 1)
        elif b in (0xd0, 0xd1):
            c = imm(1, 1)
        else:
            c = r8(1)
        ins.op = SHF[reg]; ins.size = size; ins.ops = [rm, c]
    elif b == 0xc2:
        ins.op = 'ret'; ins.ops = [imm(word(), 2)]
    elif b == 0xc3:
        ins.op = 'ret'
    elif b in (0xc4, 0xc5):
        reg, rm = modrm(4); ins.op = 'les' if b == 0xc4 else 'lds'; ins.ops = [r16(reg), rm]
    elif b in (0xc6, 0xc7):
        size = 1 if b == 0xc6 else 2
        reg, rm = modrm(size)
        ins.op = 'mov'; ins.size = size; ins.ops = [rm, imm(byte() if size == 1 else word(), size)]
    elif b == 0xc8:
        a = word(); c = byte(); ins.op = 'enter'; ins.ops = [imm(a, 2), imm(c, 1)]
    elif b == 0xc9:
        ins.op = 'leave'
    elif b == 0xca:
        ins.op = 'retf'; ins.ops = [imm(word(), 2)]
    elif b == 0xcb:
        ins.op = 'retf'
    elif b == 0xcc:
        ins.op = 'int'; ins.ops = [imm(3, 1)]
    elif b == 0xce:
        ins.op = 'into'
    elif b == 0xcf:
        ins.op = 'iret'
    elif b in (0xd4, 0xd5):
        ins.op = 'aam' if b == 0xd4 else 'aad'; ins.ops = [imm(byte(), 1)]
    elif b == 0xd6:
        ins.op = 'salc'
    elif b == 0xd7:
        ins.op = 'xlat'
    elif 0xe0 <= b <= 0xe3:
        d = s8(byte())
        ins.op = ['loopne', 'loope', 'loop', 'jcxz'][b - 0xe0]; ins.target = (p + d) & 0xffff
    elif b in (0xe4, 0xe5, 0xec, 0xed):
        ins.op = 'in'; ins.size = 1 + (b & 1)
        ins.ops = [imm(byte(), 1)] if b < 0xec else [r16(2)]
    elif b in (0xe6, 0xe7, 0xee, 0xef):
        ins.op = 'out'; ins.size = 1 + (b & 1)
        ins.ops = [imm(byte(), 1)] if b < 0xee else [r16(2)]
    elif b == 0xe8:
        d = s16(word()); ins.op = 'call'; ins.target = (p + d) & 0xffff
    elif b == 0xe9:
        d = s16(word()); ins.op = 'jmp'; ins.target = (p + d) & 0xffff
    elif b == 0xea:
        o = word(); s = word(); ins.op = 'jmpf'; ins.far = (s, o)
    elif b == 0xeb:
        d = s8(byte()); ins.op = 'jmp'; ins.target = (p + d) & 0xffff
    elif b == 0xf4:
        ins.op = 'hlt'
    elif b == 0xf5:
        ins.op = 'cmc'
    elif b in (0xf6, 0xf7):
        size = 1 if b == 0xf6 else 2
        reg, rm = modrm(size)
        ins.size = size
        ins.op = ['test', 'test', 'not', 'neg', 'mul', 'imul', 'div', 'idiv'][reg]
        if reg < 2:
            ins.ops = [rm, imm(byte() if size == 1 else word(), size)]
        else:
            ins.ops = [rm]
    elif b in (0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd):
        ins.op = ['clc', 'stc', 'cli', 'sti', 'cld', 'std'][b - 0xf8]
    elif b == 0xfe:
        reg, rm = modrm(1)
        if reg > 1:
            raise DecodeError('FE /%d' % reg)
        ins.op = 'inc' if reg == 0 else 'dec'; ins.size = 1; ins.ops = [rm]
    elif b == 0xff:
        m = code[p] if p < len(code) else 0
        reg = (m >> 3) & 7
        size = 4 if reg in (3, 5) else 2
        reg, rm = modrm(size)
        if reg == 7:
            raise DecodeError('FF /7')
        ins.op = ['inc', 'dec', 'calli', 'callfi', 'jmpi', 'jmpfi', 'push', '?'][reg]
        ins.ops = [rm]
    else:
        raise DecodeError('opcode %02x' % b)

    if seg and ins.op in ('movs', 'cmps', 'lods', 'outsb', 'outsw', 'xlat'):
        ins.seg = seg
    ins.len = p - ip
    return ins
