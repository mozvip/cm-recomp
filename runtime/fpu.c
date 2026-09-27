/* x87 FPU for translated code (8087/287 instruction set, host long double = 80-bit). */
#include "rt.h"
#include <math.h>
#include <stdio.h>

static long double st[8];
static int top;
static uint16_t cw = 0x037f, sw;
static uint8_t empty[8] = { 1, 1, 1, 1, 1, 1, 1, 1 };

#define ST(i) st[(top + (i)) & 7]
#define C0 0x0100
#define C1 0x0200
#define C2 0x0400
#define C3 0x4000

static void push(long double v) { top = (top - 1) & 7; st[top] = v; empty[top] = 0; }
static void pop(void) { empty[top] = 1; top = (top + 1) & 7; }

static long double round_cw(long double v)
{
    switch ((cw >> 10) & 3) {
    case 0: return nearbyintl(v);
    case 1: return floorl(v);
    case 2: return ceill(v);
    default: return truncl(v);
    }
}

static float f32(uint16_t s, uint16_t o) { uint32_t u = RD(s, o); float f; memcpy(&f, &u, 4); return f; }
static double f64(uint16_t s, uint16_t o)
{
    uint64_t u = RD(s, o) | ((uint64_t)RD(s, (uint16_t)(o + 4)) << 32);
    double d;
    memcpy(&d, &u, 8);
    return d;
}
static long double f80(uint16_t s, uint16_t o)
{
    uint8_t b[16] = { 0 };
    long double v;
    int i;
    for (i = 0; i < 10; i++) b[i] = RB(s, (uint16_t)(o + i));
    memcpy(&v, b, sizeof(v) < 16 ? sizeof(v) : 16);
    return v;
}
static void w32(uint16_t s, uint16_t o, long double v) { float f = (float)v; uint32_t u; memcpy(&u, &f, 4); WD(s, o, u); }
static void w64(uint16_t s, uint16_t o, long double v)
{
    double d = (double)v;
    uint64_t u;
    memcpy(&u, &d, 8);
    WD(s, o, (uint32_t)u);
    WD(s, (uint16_t)(o + 4), (uint32_t)(u >> 32));
}
static void w80(uint16_t s, uint16_t o, long double v)
{
    uint8_t b[16] = { 0 };
    int i;
    memcpy(b, &v, sizeof(v) < 16 ? sizeof(v) : 16);
    for (i = 0; i < 10; i++) WB(s, (uint16_t)(o + i), b[i]);
}

static void compare(long double a, long double b)
{
    sw &= ~(C0 | C2 | C3);
    if (isnan(a) || isnan(b)) sw |= C0 | C2 | C3;
    else if (a < b) sw |= C0;
    else if (a == b) sw |= C3;
}

static int64_t to_int(long double v, int64_t lo, int64_t hi, int64_t indef)
{
    long double r = round_cw(v);
    if (isnan(r) || r < (long double)lo || r > (long double)hi) return indef;
    return (int64_t)r;
}

static uint16_t status(void) { return (uint16_t)((sw & ~0x3800) | ((top & 7) << 11)); }
static uint16_t tagword(void)
{
    uint16_t t = 0;
    int i;
    for (i = 0; i < 8; i++) t |= (empty[i] ? 3 : 0) << (2 * i);
    return t;
}

static void arith(int op, long double *dst, long double src, int reversed_ok)
{
    (void)reversed_ok;
    switch (op) {
    case 0: *dst = *dst + src; break;
    case 1: *dst = *dst * src; break;
    case 4: *dst = *dst - src; break;
    case 5: *dst = src - *dst; break;
    case 6: *dst = *dst / src; break;
    case 7: *dst = src / *dst; break;
    }
}

/* memory operand forms */
void rc_fpu_m(int esc, int reg, uint16_t s, uint16_t o)
{
    long double v;
    switch (esc) {
    case 0: case 2: case 4: case 6:
        v = esc == 0 ? f32(s, o) : esc == 4 ? f64(s, o) : esc == 2 ? (int32_t)RD(s, o) : (int16_t)RW(s, o);
        if (reg == 2 || reg == 3) { compare(ST(0), v); if (reg == 3) pop(); }
        else arith(reg, &ST(0), v, 1);
        return;
    case 1:
        switch (reg) {
        case 0: push(f32(s, o)); return;
        case 2: w32(s, o, ST(0)); return;
        case 3: w32(s, o, ST(0)); pop(); return;
        case 4: cw = RW(s, o); sw = RW(s, (uint16_t)(o + 2)); return;          /* fldenv (partial) */
        case 5: cw = RW(s, o); return;
        case 6:                                                                    /* fnstenv */
            WW(s, o, cw); WW(s, (uint16_t)(o + 2), status()); WW(s, (uint16_t)(o + 4), tagword());
            WW(s, (uint16_t)(o + 6), 0); WW(s, (uint16_t)(o + 8), 0); WW(s, (uint16_t)(o + 10), 0); WW(s, (uint16_t)(o + 12), 0);
            return;
        case 7: WW(s, o, cw); return;
        }
        break;
    case 3:
        switch (reg) {
        case 0: push((int32_t)RD(s, o)); return;
        case 2: WD(s, o, (uint32_t)to_int(ST(0), INT32_MIN, INT32_MAX, INT32_MIN)); return;
        case 3: WD(s, o, (uint32_t)to_int(ST(0), INT32_MIN, INT32_MAX, INT32_MIN)); pop(); return;
        case 5: push(f80(s, o)); return;
        case 7: w80(s, o, ST(0)); pop(); return;
        }
        break;
    case 5:
        switch (reg) {
        case 0: push(f64(s, o)); return;
        case 2: w64(s, o, ST(0)); return;
        case 3: w64(s, o, ST(0)); pop(); return;
        case 4: {                                                                   /* frstor */
            int i;
            cw = RW(s, o); sw = RW(s, (uint16_t)(o + 2));
            top = (sw >> 11) & 7;
            for (i = 0; i < 8; i++) { ST(i) = f80(s, (uint16_t)(o + 14 + 10 * i)); empty[(top + i) & 7] = 0; }
            return;
        }
        case 6: {                                                                   /* fnsave */
            int i;
            WW(s, o, cw); WW(s, (uint16_t)(o + 2), status()); WW(s, (uint16_t)(o + 4), tagword());
            for (i = 3; i < 7; i++) WW(s, (uint16_t)(o + 2 * i), 0);
            for (i = 0; i < 8; i++) w80(s, (uint16_t)(o + 14 + 10 * i), ST(i));
            cw = 0x037f; sw = 0; top = 0;
            for (i = 0; i < 8; i++) empty[i] = 1;
            return;
        }
        case 7: WW(s, o, status()); return;
        }
        break;
    case 7:
        switch (reg) {
        case 0: push((int16_t)RW(s, o)); return;
        case 2: WW(s, o, (uint16_t)to_int(ST(0), INT16_MIN, INT16_MAX, INT16_MIN)); return;
        case 3: WW(s, o, (uint16_t)to_int(ST(0), INT16_MIN, INT16_MAX, INT16_MIN)); pop(); return;
        case 5: push((long double)(int64_t)(RD(s, o) | ((uint64_t)RD(s, (uint16_t)(o + 4)) << 32))); return;
        case 7: {
            int64_t r = to_int(ST(0), INT64_MIN, INT64_MAX, INT64_MIN);
            WD(s, o, (uint32_t)r); WD(s, (uint16_t)(o + 4), (uint32_t)((uint64_t)r >> 32)); pop();
            return;
        }
        case 4: {                                                                   /* fbld */
            long double r = 0;
            int i;
            for (i = 8; i >= 0; i--) { uint8_t b = RB(s, (uint16_t)(o + i)); r = r * 100 + (b >> 4) * 10 + (b & 15); }
            push(RB(s, (uint16_t)(o + 9)) & 0x80 ? -r : r);
            return;
        }
        case 6: {                                                                   /* fbstp: 18 digits, sign in byte 9 */
            long double r = round_cw(ST(0));
            int i;
            if (isnan(r) || fabsl(r) > 999999999999999999.0L) {                    /* packed BCD indefinite */
                for (i = 0; i < 7; i++) WB(s, (uint16_t)(o + i), 0);
                WB(s, (uint16_t)(o + 7), 0xc0); WB(s, (uint16_t)(o + 8), 0xff); WB(s, (uint16_t)(o + 9), 0xff);
            } else {
                uint64_t u = (uint64_t)fabsl(r);
                for (i = 0; i < 9; i++) { WB(s, (uint16_t)(o + i), (uint8_t)((u % 10) | ((u / 10 % 10) << 4))); u /= 100; }
                WB(s, (uint16_t)(o + 9), signbit(r) ? 0x80 : 0);
            }
            pop();
            return;
        }
        }
        break;
    }
    rc_fatal("FPU memory op esc=%d reg=%d not implemented", esc, reg);
}

/* register forms */
void rc_fpu_r(int esc, int reg, int rm)
{
    long double t;
    switch (esc) {
    case 0:                                                           /* op st0, st(i) */
        if (reg == 2 || reg == 3) { compare(ST(0), ST(rm)); if (reg == 3) pop(); return; }
        arith(reg, &ST(0), ST(rm), 0);
        return;
    case 4:                                                           /* op st(i), st0 (Intel: E0 fsubr, E8 fsub, F0 fdivr, F8 fdiv) */
    case 6:                                                           /* ...p */
        if (esc == 6 && reg == 3 && rm == 1) { compare(ST(0), ST(1)); pop(); pop(); return; }   /* fcompp */
        if (reg == 2 || reg == 3) { compare(ST(0), ST(rm)); if (reg == 3) pop(); return; }
        switch (reg) {
        case 0: ST(rm) = ST(rm) + ST(0); break;
        case 1: ST(rm) = ST(rm) * ST(0); break;
        case 4: ST(rm) = ST(0) - ST(rm); break;                       /* fsubr st(i),st0 */
        case 5: ST(rm) = ST(rm) - ST(0); break;                       /* fsub  st(i),st0 */
        case 6: ST(rm) = ST(0) / ST(rm); break;                       /* fdivr st(i),st0 */
        case 7: ST(rm) = ST(rm) / ST(0); break;                       /* fdiv  st(i),st0 */
        }
        if (esc == 6) pop();
        return;
    case 1:
        switch (reg) {
        case 0: t = ST(rm); push(t); return;                          /* fld st(i) */
        case 1: t = ST(0); ST(0) = ST(rm); ST(rm) = t; return;        /* fxch */
        case 2: return;                                               /* fnop */
        case 4:
            switch (rm) {
            case 0: ST(0) = -ST(0); return;
            case 1: ST(0) = fabsl(ST(0)); return;
            case 4: compare(ST(0), 0.0L); return;                     /* ftst */
            case 5: {                                                 /* fxam */
                long double v = ST(0);
                sw &= ~(C0 | C1 | C2 | C3);
                if (signbit(v)) sw |= C1;
                if (empty[top]) sw |= C0 | C3;
                else if (isnan(v)) sw |= C0;
                else if (isinf(v)) sw |= C0 | C2;
                else if (v == 0) sw |= C3;
                else sw |= C2;
                return;
            }
            }
            break;
        case 5: {
            static const long double k[7] = { 1.0L, 3.321928094887362347870L, 1.442695040888963407360L,
                                                3.141592653589793238463L, 0.301029995663981195214L,
                                                0.693147180559945309417L, 0.0L };
            if (rm < 7) { push(k[rm]); return; }
            break;
        }
        case 6:
            switch (rm) {
            case 0: ST(0) = exp2l(ST(0)) - 1.0L; return;              /* f2xm1 */
            case 1: ST(1) = ST(1) * log2l(ST(0)); pop(); return;      /* fyl2x */
            case 2: ST(0) = tanl(ST(0)); push(1.0L); sw &= ~C2; return;   /* fptan */
            case 3: ST(1) = atan2l(ST(1), ST(0)); pop(); return;      /* fpatan */
            case 4: {                                                 /* fxtract */
                int e;
                long double m = frexpl(ST(0), &e);
                ST(0) = (long double)(e - 1);
                push(m * 2.0L);
                return;
            }
            case 5: ST(0) = remainderl(ST(0), ST(1)); sw &= ~C2; return;
            case 6: top = (top - 1) & 7; return;
            case 7: top = (top + 1) & 7; return;
            }
            break;
        case 7:
            switch (rm) {
            case 0: ST(0) = fmodl(ST(0), ST(1)); sw &= ~C2; return;   /* fprem */
            case 1: ST(1) = ST(1) * log2l(ST(0) + 1.0L); pop(); return;
            case 2: ST(0) = sqrtl(ST(0)); return;
            case 3: t = ST(0); ST(0) = sinl(t); push(cosl(t)); return;
            case 4: ST(0) = round_cw(ST(0)); return;                  /* frndint */
            case 5: ST(0) = ldexpl(ST(0), (int)truncl(ST(1))); return; /* fscale */
            case 6: ST(0) = sinl(ST(0)); return;
            case 7: ST(0) = cosl(ST(0)); return;
            }
            break;
        }
        break;
    case 2:
        if (reg == 5 && rm == 1) { compare(ST(0), ST(1)); pop(); pop(); return; }  /* fucompp */
        break;
    case 3:
        if (reg == 4) {
            if (rm == 2) { sw &= 0x7f00; return; }                    /* fclex */
            if (rm == 3) {                                            /* finit */
                int i;
                cw = 0x037f; sw = 0; top = 0;
                for (i = 0; i < 8; i++) empty[i] = 1;
                return;
            }
            return;                                                   /* feni/fdisi/fsetpm */
        }
        break;
    case 5:
        switch (reg) {
        case 0: empty[(top + rm) & 7] = 1; return;                    /* ffree */
        case 2: ST(rm) = ST(0); return;                               /* fst st(i) */
        case 3: ST(rm) = ST(0); pop(); return;                        /* fstp st(i) */
        case 4: compare(ST(0), ST(rm)); return;                       /* fucom */
        case 5: compare(ST(0), ST(rm)); pop(); return;                /* fucomp */
        }
        break;
    case 7:
        if (reg == 4 && rm == 0) { cpu.ax = status(); return; }       /* fnstsw ax */
        if (reg == 0) { empty[(top + rm) & 7] = 1; pop(); return; }   /* ffreep */
        break;
    }
    rc_fatal("FPU register op esc=%d reg=%d rm=%d not implemented", esc, reg, rm);
}

/* Borland emulator shortcut INT 3Eh <code> */
void rc_emu3e(uint8_t code)
{
    switch (code) {
    case 0xfa: ST(0) = expl(ST(0)); return;       /* exp(): e^ST0 (argument range-checked by caller) */
    }
    rc_fatal("emulator shortcut INT 3Eh %02x not implemented", code);
}

/* ---- state snapshot for RC_VERIFY (verify.c) */
struct rc_fpu_state { long double st[8]; int top; uint16_t cw, sw; uint8_t empty[8]; };
static struct rc_fpu_state fpu_saved[2];

void rc_fpu_save(int slot)
{
    struct rc_fpu_state *s = &fpu_saved[slot];
    memcpy(s->st, st, sizeof st); s->top = top; s->cw = cw; s->sw = sw; memcpy(s->empty, empty, sizeof empty);
}

void rc_fpu_restore(int slot)
{
    struct rc_fpu_state *s = &fpu_saved[slot];
    memcpy(st, s->st, sizeof st); top = s->top; cw = s->cw; sw = s->sw; memcpy(empty, s->empty, sizeof empty);
}

/* 1 if the current state differs from the saved one (values of empty registers ignored) */
int rc_fpu_differs(int slot)
{
    struct rc_fpu_state *s = &fpu_saved[slot];
    int i;
    if (s->top != top || s->cw != cw || s->sw != sw || memcmp(s->empty, empty, sizeof empty)) return 1;
    for (i = 0; i < 8; i++)
        if (!empty[i] && !(st[i] == s->st[i] || (isnan(st[i]) && isnan(s->st[i])))) return 1;
    return 0;
}
