/* Static recompiler runtime: CPU state, memory, flags. Included by generated code. */
#ifndef RC_CPU_H
#define RC_CPU_H

#include <stdint.h>
#include <string.h>

typedef struct {
    uint16_t ax, cx, dx, bx, sp, bp, si, di;
    uint16_t es, cs, ss, ds;
    uint8_t cf, pf, af, zf, sf, of, df, if_, tf;
} CPU;

extern CPU cpu;

/* 1 MB + HMA of conventional memory; segment A000 is redirected to vga_mem */
#define RC_RAM_SIZE 0x110000
extern uint8_t rc_ram[RC_RAM_SIZE];
extern uint8_t vga_mem[0x10000];

#define AL (((uint8_t *)&cpu.ax)[0])
#define AH (((uint8_t *)&cpu.ax)[1])
#define CL (((uint8_t *)&cpu.cx)[0])
#define CH (((uint8_t *)&cpu.cx)[1])
#define DL (((uint8_t *)&cpu.dx)[0])
#define DH (((uint8_t *)&cpu.dx)[1])
#define BL (((uint8_t *)&cpu.bx)[0])
#define BH (((uint8_t *)&cpu.bx)[1])

static inline uint8_t *MEM(uint16_t seg, uint16_t ofs)
{
    if (seg == 0xA000) return &vga_mem[ofs];
    return &rc_ram[((uint32_t)seg << 4) + ofs];
}
static inline uint8_t RB(uint16_t s, uint16_t o) { return *MEM(s, o); }
static inline uint16_t RW(uint16_t s, uint16_t o)
{
    return (uint16_t)(RB(s, o) | (RB(s, (uint16_t)(o + 1)) << 8));
}
static inline uint32_t RD(uint16_t s, uint16_t o)
{
    return RW(s, o) | ((uint32_t)RW(s, (uint16_t)(o + 2)) << 16);
}
static inline void WB(uint16_t s, uint16_t o, uint8_t v) { *MEM(s, o) = v; }
static inline void WW(uint16_t s, uint16_t o, uint16_t v)
{
    WB(s, o, (uint8_t)v);
    WB(s, (uint16_t)(o + 1), (uint8_t)(v >> 8));
}
static inline void WD(uint16_t s, uint16_t o, uint32_t v)
{
    WW(s, o, (uint16_t)v);
    WW(s, (uint16_t)(o + 2), (uint16_t)(v >> 16));
}

static inline void PUSH(uint16_t v) { cpu.sp -= 2; WW(cpu.ss, cpu.sp, v); }
static inline uint16_t POP(void) { uint16_t v = RW(cpu.ss, cpu.sp); cpu.sp += 2; return v; }

extern const uint8_t rc_parity[256];

/* ---- flags ---- */
static inline void SZP8(uint8_t r) { cpu.zf = r == 0; cpu.sf = r >> 7; cpu.pf = rc_parity[r]; }
static inline void SZP16(uint16_t r) { cpu.zf = r == 0; cpu.sf = r >> 15; cpu.pf = rc_parity[r & 0xff]; }

static inline uint16_t FLAGS(void)
{
    return (uint16_t)(0xf002 | cpu.cf | (cpu.pf << 2) | (cpu.af << 4) | (cpu.zf << 6) | (cpu.sf << 7) |
                      (cpu.tf << 8) | (cpu.if_ << 9) | (cpu.df << 10) | (cpu.of << 11));
}
static inline void SETFLAGS(uint16_t f)
{
    cpu.cf = f & 1; cpu.pf = (f >> 2) & 1; cpu.af = (f >> 4) & 1; cpu.zf = (f >> 6) & 1;
    cpu.sf = (f >> 7) & 1; cpu.tf = (f >> 8) & 1; cpu.if_ = (f >> 9) & 1; cpu.df = (f >> 10) & 1;
    cpu.of = (f >> 11) & 1;
}

/* ---- ALU ---- */
#define DEF_ADD(N, T, BITS)                                                                     \
    static inline T add##N(T a, T b, int c)                                                     \
    {                                                                                           \
        uint32_t r = (uint32_t)a + b + c;                                                       \
        T t = (T)r;                                                                             \
        cpu.cf = (r >> BITS) & 1;                                                               \
        cpu.of = (((a ^ t) & (b ^ t)) >> (BITS - 1)) & 1;                                       \
        cpu.af = ((a ^ b ^ t) >> 4) & 1;                                                        \
        SZP##N(t);                                                                              \
        return t;                                                                               \
    }                                                                                           \
    static inline T sub##N(T a, T b, int c)                                                     \
    {                                                                                           \
        uint32_t r = (uint32_t)a - b - c;                                                       \
        T t = (T)r;                                                                             \
        cpu.cf = (r >> BITS) & 1;                                                               \
        cpu.of = (((a ^ b) & (a ^ t)) >> (BITS - 1)) & 1;                                       \
        cpu.af = ((a ^ b ^ t) >> 4) & 1;                                                        \
        SZP##N(t);                                                                              \
        return t;                                                                               \
    }                                                                                           \
    static inline T logic##N(T r) { cpu.cf = cpu.of = cpu.af = 0; SZP##N(r); return r; }        \
    static inline T inc##N(T a) { int c = cpu.cf; T r = add##N(a, 1, 0); cpu.cf = c; return r; } \
    static inline T dec##N(T a) { int c = cpu.cf; T r = sub##N(a, 1, 0); cpu.cf = c; return r; } \
    static inline T neg##N(T a) { T r = sub##N(0, a, 0); cpu.cf = a != 0; return r; }
DEF_ADD(8, uint8_t, 8)
DEF_ADD(16, uint16_t, 16)

/* shifts/rotates: count already masked to 5 bits; count 0 leaves flags */
#define DEF_SHIFT(N, T, BITS)                                                                   \
    static inline T shl##N(T a, unsigned c)                                                     \
    {                                                                                           \
        uint32_t r;                                                                             \
        if (!(c &= 0x1f)) return a;                                                             \
        r = (uint32_t)a << c;                                                                   \
        cpu.cf = c <= BITS ? (r >> BITS) & 1 : 0;                                               \
        SZP##N((T)r);                                                                           \
        cpu.of = (((T)r >> (BITS - 1)) & 1) ^ cpu.cf;                                           \
        return (T)r;                                                                            \
    }                                                                                           \
    static inline T shr##N(T a, unsigned c)                                                     \
    {                                                                                           \
        T r;                                                                                    \
        if (!(c &= 0x1f)) return a;                                                             \
        cpu.cf = c <= BITS ? (a >> (c - 1)) & 1 : 0;                                            \
        r = c < BITS ? (T)(a >> c) : 0;                                                         \
        cpu.of = (a >> (BITS - 1)) & 1;                                                         \
        SZP##N(r);                                                                              \
        return r;                                                                               \
    }                                                                                           \
    static inline T sar##N(T a, unsigned c)                                                     \
    {                                                                                           \
        int32_t s = (int32_t)(a << (32 - BITS)) >> (32 - BITS);                                  \
        T r;                                                                                    \
        if (!(c &= 0x1f)) return a;                                                             \
        if (c > BITS) c = BITS;                                                                 \
        cpu.cf = (s >> (c - 1)) & 1;                                                            \
        r = (T)(s >> c);                                                                        \
        cpu.of = 0;                                                                             \
        SZP##N(r);                                                                              \
        return r;                                                                               \
    }                                                                                           \
    static inline T rol##N(T a, unsigned c)                                                     \
    {                                                                                           \
        if (!(c &= 0x1f)) return a;                                                             \
        c %= BITS;                                                                              \
        a = (T)((a << c) | (a >> ((BITS - c) % BITS)));                                         \
        cpu.cf = a & 1;                                                                         \
        cpu.of = ((a >> (BITS - 1)) & 1) ^ cpu.cf;                                              \
        return a;                                                                               \
    }                                                                                           \
    static inline T ror##N(T a, unsigned c)                                                     \
    {                                                                                           \
        if (!(c &= 0x1f)) return a;                                                             \
        c %= BITS;                                                                              \
        a = (T)((a >> c) | (a << ((BITS - c) % BITS)));                                         \
        cpu.cf = (a >> (BITS - 1)) & 1;                                                         \
        cpu.of = cpu.cf ^ ((a >> (BITS - 2)) & 1);                                              \
        return a;                                                                               \
    }                                                                                           \
    static inline T rcl##N(T a, unsigned c)                                                     \
    {                                                                                           \
        c &= 0x1f;                                                                              \
        c %= (BITS + 1);                                                                        \
        while (c--) {                                                                           \
            int o = (a >> (BITS - 1)) & 1;                                                      \
            a = (T)((a << 1) | cpu.cf);                                                         \
            cpu.cf = o;                                                                         \
        }                                                                                       \
        cpu.of = ((a >> (BITS - 1)) & 1) ^ cpu.cf;                                              \
        return a;                                                                               \
    }                                                                                           \
    static inline T rcr##N(T a, unsigned c)                                                     \
    {                                                                                           \
        c &= 0x1f;                                                                              \
        c %= (BITS + 1);                                                                        \
        while (c--) {                                                                           \
            int o = a & 1;                                                                      \
            a = (T)((a >> 1) | ((T)cpu.cf << (BITS - 1)));                                      \
            cpu.cf = o;                                                                         \
        }                                                                                       \
        cpu.of = ((a >> (BITS - 1)) ^ (a >> (BITS - 2))) & 1;                                   \
        return a;                                                                               \
    }
DEF_SHIFT(8, uint8_t, 8)
DEF_SHIFT(16, uint16_t, 16)
#define sal8 shl8
#define sal16 shl16

/* ---- conditions ---- */
#define CC_o (cpu.of)
#define CC_no (!cpu.of)
#define CC_b (cpu.cf)
#define CC_ae (!cpu.cf)
#define CC_e (cpu.zf)
#define CC_ne (!cpu.zf)
#define CC_be (cpu.cf | cpu.zf)
#define CC_a (!(cpu.cf | cpu.zf))
#define CC_s (cpu.sf)
#define CC_ns (!cpu.sf)
#define CC_p (cpu.pf)
#define CC_np (!cpu.pf)
#define CC_l (cpu.sf != cpu.of)
#define CC_ge (cpu.sf == cpu.of)
#define CC_le (cpu.zf | (cpu.sf != cpu.of))
#define CC_g (!cpu.zf && cpu.sf == cpu.of)

/* ---- runtime services (rt.c) ---- */
typedef void (*rc_fn)(void);
typedef struct { uint32_t lin; rc_fn fn; const char *name; } rc_entry;  /* lin = linear address, or offset for drivers */
typedef struct { const char *name; const uint8_t *sig; int siglen; const rc_entry *tab; int n; } rc_driver;
void rc_call(uint16_t seg, uint16_t ofs);     /* dispatch to translated code (CS already set) */
const char *rc_where(uint16_t seg, uint16_t ofs); /* "name+0xN" of the function around an address */
void rc_int(uint8_t n);                       /* software interrupt */
void rc_poll(void);                           /* safe point: timers, input, display */
uint8_t rc_in8(uint16_t port);
uint16_t rc_in16(uint16_t port);
void rc_out8(uint16_t port, uint8_t v);
void rc_out16(uint16_t port, uint16_t v);
void rc_fatal(const char *fmt, ...);
void rc_bad_jump(uint16_t cs, uint16_t from, uint16_t to);
void rc_mul8(uint8_t v);
void rc_mul16(uint16_t v);
void rc_imul8(uint8_t v);
void rc_imul16(uint16_t v);
void rc_div8(uint8_t v);
void rc_div16(uint16_t v);
void rc_idiv8(uint8_t v);
void rc_idiv16(uint16_t v);
uint16_t rc_imul3(uint16_t a, uint16_t b);
void rc_daa(void);
void rc_das(void);
void rc_aaa(void);
void rc_aas(void);
void rc_aam(uint8_t b);
void rc_aad(uint8_t b);
void rc_movs(int size, uint16_t sseg, int rep);
void rc_stos(int size, int rep);
void rc_lods(int size, uint16_t sseg, int rep);
void rc_cmps(int size, uint16_t sseg, int rep);   /* rep: 0 none, 1 repe, 2 repne */
void rc_scas(int size, int rep);
void rc_enter(uint16_t size, uint8_t level);
void rc_fpu_m(int esc, int reg, uint16_t seg, uint16_t ofs);
void rc_fpu_r(int esc, int reg, int rm);
void rc_hlt(void);
void rc_emu3e(uint8_t code);
extern volatile int rc_poll_pending;

#define POLL() do { if (rc_poll_pending) rc_poll(); } while (0)

/* Shadow return stack: lets `jmp [saved_return]` (e.g. Borland _setargv) act as a return */
#define RC_SHADOW 8192
extern uint32_t rc_sh_ret[RC_SHADOW];
extern uint16_t rc_sh_sp[RC_SHADOW];
extern int rc_sh;
#define CALLN(ret, call) do { rc_sh_ret[rc_sh] = ((uint32_t)cpu.cs << 16) | (ret); PUSH(ret); \
    rc_sh_sp[rc_sh++] = cpu.sp; call; rc_sh--; } while (0)
#define CALLF(seg, ret, call) do { rc_sh_ret[rc_sh] = ((uint32_t)cpu.cs << 16) | (ret); PUSH(cpu.cs); PUSH(ret); \
    rc_sh_sp[rc_sh++] = cpu.sp; cpu.cs = (seg); call; rc_sh--; } while (0)
static inline int rc_is_ret_near(uint16_t t)
{
    /* SP is not compared: _setargv returns with argv storage left on the stack */
    return rc_sh > 0 && rc_sh_ret[rc_sh - 1] == (((uint32_t)cpu.cs << 16) | t);
}
static inline int rc_is_ret_far(uint16_t s, uint16_t o)
{
    return rc_sh > 0 && rc_sh_ret[rc_sh - 1] == (((uint32_t)s << 16) | o);
}

#endif
