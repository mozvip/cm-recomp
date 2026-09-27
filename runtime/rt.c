/* Recompiler runtime core: dispatch, interrupts, ports, arithmetic helpers. */
#include "rt.h"
#include "opl2.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

CPU cpu;
uint8_t rc_ram[RC_RAM_SIZE];
uint8_t vga_mem[0x10000];
volatile int rc_poll_pending;
uint32_t rc_sh_ret[RC_SHADOW];
uint16_t rc_sh_sp[RC_SHADOW];
int rc_sh;
int rc_trace;

const uint8_t rc_parity[256] = {
#define P2(n) n, n ^ 1, n ^ 1, n
#define P4(n) P2(n), P2(n ^ 1), P2(n ^ 1), P2(n)
#define P6(n) P4(n), P4(n ^ 1), P4(n ^ 1), P4(n)
    P6(1), P6(0), P6(0), P6(1)
};

void rc_fatal(const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "[RC] FATAL: ");
    vfprintf(stderr, fmt, ap);
    va_end(ap);
    fprintf(stderr, "\n[RC] cs=%04x ds=%04x es=%04x ss=%04x sp=%04x bp=%04x ax=%04x bx=%04x cx=%04x dx=%04x si=%04x di=%04x\n",
            cpu.cs, cpu.ds, cpu.es, cpu.ss, cpu.sp, cpu.bp, cpu.ax, cpu.bx, cpu.cx, cpu.dx, cpu.si, cpu.di);
    rc_dump_stack();
    exit(3);
}

void rc_dump_stack(void)
{
    int i;
    fprintf(stderr, "[RC] stack:");
    for (i = 0; i < 16; i++) fprintf(stderr, " %04x", RW(cpu.ss, (uint16_t)(cpu.sp + 2 * i)));
    fprintf(stderr, "\n");
}

/* ---------------------------------------------------------------- dispatch */
extern const rc_entry rc_funcs[];
extern const int rc_nfuncs;

static rc_fn lookup(uint32_t lin)
{
    int lo = 0, hi = rc_nfuncs - 1;
    while (lo <= hi) {
        int m = (lo + hi) / 2;
        if (rc_funcs[m].lin == lin) return rc_funcs[m].fn;
        if (rc_funcs[m].lin < lin) lo = m + 1; else hi = m - 1;
    }
    return NULL;
}

/* unknown call targets are logged here for tools/discover.sh */
static const char *missing_path(void)
{
    const char *p = getenv("RC_MISSING");
    return p ? p : "rc_missing_entries.txt";
}

/* ---- runtime-loaded drivers: a heap segment whose start matches a translated driver */
extern const rc_driver rc_drivers[];

static rc_fn find_driver_fn(uint16_t seg, uint16_t ofs)
{
    static uint16_t cached_seg;
    static const rc_driver *cached;
    const rc_driver *d = NULL;
    int lo, hi;
    if (seg == cached_seg && cached) d = cached;
    else {
        const rc_driver *p;
        for (p = rc_drivers; p->name; p++) {
            int i;
            for (i = 0; i < p->siglen && RB(seg, (uint16_t)i) == p->sig[i]; i++) ;
            if (i == p->siglen) { d = p; break; }
        }
        if (!d) return NULL;
        cached_seg = seg; cached = d;
        fprintf(stderr, "[DRV] %s at segment %04x\n", d->name, seg);
    }
    lo = 0; hi = d->n - 1;
    while (lo <= hi) {
        int m = (lo + hi) / 2;
        if (d->tab[m].lin == ofs) return d->tab[m].fn;
        if (d->tab[m].lin < ofs) lo = m + 1; else hi = m - 1;
    }
    {
        FILE *f = fopen(missing_path(), "a");
        if (f) { fprintf(f, "%s:%04x\n", d->name, ofs); fclose(f); }
    }
    rc_fatal("driver %s: no translated code at offset %04x (added to %s)", d->name, ofs, missing_path());
    return NULL;
}

static void missing(uint16_t seg, uint16_t ofs)
{
    FILE *f = fopen(missing_path(), "a");
    if (f) { fprintf(f, "%04x:%04x\n", seg, ofs); fclose(f); }
    rc_fatal("no translated code for %04x:%04x (added to %s; see tools/discover.sh)", seg, ofs, missing_path());
}

void rc_call(uint16_t seg, uint16_t ofs)
{
    rc_fn fn;
    if (seg == RC_BIOS_SEG) {
        /* reached by call/jmp far to a default interrupt vector: service + iret */
        rc_hle_int((uint8_t)ofs);
        POP(); cpu.cs = POP(); SETFLAGS(POP());
        return;
    }
    fn = lookup(((uint32_t)seg << 4) + ofs);
    if (!fn) fn = find_driver_fn(seg, ofs);
    if (!fn) missing(seg, ofs);
    fn();
}

void rc_bad_jump(uint16_t cs, uint16_t from, uint16_t to)
{
    rc_fatal("indirect jump at %04x:%04x to unknown target %04x", cs, from, to);
}

/* ---------------------------------------------------------------- interrupts */
static void do_interrupt(uint8_t n)
{
    uint16_t o = RW(0, n * 4), s = RW(0, n * 4 + 2);
    if (s == RC_BIOS_SEG) {
        rc_hle_int(n);
        return;
    }
    PUSH(FLAGS());
    PUSH(cpu.cs);
    PUSH(0xfffe);           /* return IP is irrelevant: the handler's iret returns to C */
    cpu.if_ = 0;
    cpu.tf = 0;
    cpu.cs = s;
    rc_call(s, o);
}

void rc_int(uint8_t n)
{
    if (rc_trace) fprintf(stderr, "[INT %02x] ax=%04x bx=%04x cx=%04x dx=%04x\n", n, cpu.ax, cpu.bx, cpu.cx, cpu.dx);
    do_interrupt(n);
}

void rc_irq(uint8_t n)
{
    uint16_t save_cs = cpu.cs;
    do_interrupt(n);
    cpu.cs = save_cs;
}

void rc_hlt(void)
{
    rc_fatal("HLT");
}

/* ---------------------------------------------------------------- ports */
static uint8_t dac[256][3];
static int dac_widx, dac_wsub, dac_ridx, dac_rsub;
static uint16_t pit_div = 0;           /* 0 = 65536 */
static int pit_lohi, pit_latch;
static unsigned retrace;
int rc_dac_dirty = 1;

const uint8_t *rc_dac(void) { return &dac[0][0]; }
void rc_dac_set(int i, uint8_t r, uint8_t g, uint8_t b)
{
    dac[i & 255][0] = r & 63; dac[i & 255][1] = g & 63; dac[i & 255][2] = b & 63;
    rc_dac_dirty = 1;
}
void rc_dac_get(int i, uint8_t *r, uint8_t *g, uint8_t *b)
{
    *r = dac[i & 255][0]; *g = dac[i & 255][1]; *b = dac[i & 255][2];
}
double rc_pit_hz(void) { return 1193182.0 / (pit_div ? pit_div : 65536); }

uint8_t rc_in8(uint16_t port)
{
    switch (port) {
    case 0x3da:                        /* input status 1: toggle retrace/display enable */
        retrace++;
        if ((retrace & 63) == 0) rc_poll();
        return (retrace & 1) ? 0x09 : 0x00;
    case 0x3c9: {
        uint8_t v = dac[dac_ridx][dac_rsub];
        if (++dac_rsub == 3) { dac_rsub = 0; dac_ridx = (dac_ridx + 1) & 255; }
        return v;
    }
    case 0x3c7: return 0;
    case 0x3c8: return (uint8_t)dac_widx;
    case 0x60: return rc_kbd_port60();
    case 0x61: return 0;
    case 0x64: return 0x1c;
    case 0x21: return 0;
    case 0x40: {
        /* channel 0 counter read-back: derive from host time */
        uint32_t c = rc_pit_counter();
        uint8_t v = pit_latch ? (uint8_t)(c >> 8) : (uint8_t)c;
        pit_latch ^= 1;
        return v;
    }
    case 0x388: case 0x38a: return opl_read_status();
    case 0x201: return 0xff;           /* no joystick */
    }
    return 0xff;
}

uint16_t rc_in16(uint16_t port) { return rc_in8(port) | (rc_in8(port + 1) << 8); }

void rc_out8(uint16_t port, uint8_t v)
{
    switch (port) {
    case 0x3c8: dac_widx = v; dac_wsub = 0; return;
    case 0x3c7: dac_ridx = v; dac_rsub = 0; return;
    case 0x3c9:
        dac[dac_widx][dac_wsub] = v & 63;
        rc_dac_dirty = 1;
        if (++dac_wsub == 3) { dac_wsub = 0; dac_widx = (dac_widx + 1) & 255; }
        return;
    case 0x43:
        if ((v & 0xc0) == 0 && (v & 0x30) == 0) pit_latch = 0;     /* latch ch0 */
        if ((v & 0xc0) == 0 && (v & 0x30)) pit_lohi = 0;
        return;
    case 0x40:
        if (pit_lohi == 0) { pit_div = (pit_div & 0xff00) | v; pit_lohi = 1; }
        else { pit_div = (uint16_t)((pit_div & 0xff) | (v << 8)); pit_lohi = 0; rc_timer_reprogram(); }
        return;
    case 0x388: opl_write_addr(v); return;
    case 0x389: audio_sync(); opl_write_data(v); return;
    }
    /* 20h PIC EOI, VGA sequencer/GC/CRTC, printer: ignored */
}

void rc_out16(uint16_t port, uint16_t v) { rc_out8(port, (uint8_t)v); rc_out8(port + 1, (uint8_t)(v >> 8)); }

/* ---------------------------------------------------------------- arithmetic helpers */
void rc_mul8(uint8_t v)
{
    cpu.ax = (uint16_t)(AL * v);
    cpu.cf = cpu.of = AH != 0;
}
void rc_mul16(uint16_t v)
{
    uint32_t r = (uint32_t)cpu.ax * v;
    cpu.ax = (uint16_t)r; cpu.dx = (uint16_t)(r >> 16);
    cpu.cf = cpu.of = cpu.dx != 0;
}
void rc_imul8(uint8_t v)
{
    int16_t r = (int16_t)((int8_t)AL * (int8_t)v);
    cpu.ax = (uint16_t)r;
    cpu.cf = cpu.of = r != (int8_t)r;
}
void rc_imul16(uint16_t v)
{
    int32_t r = (int32_t)(int16_t)cpu.ax * (int16_t)v;
    cpu.ax = (uint16_t)r; cpu.dx = (uint16_t)((uint32_t)r >> 16);
    cpu.cf = cpu.of = r != (int16_t)r;
}
uint16_t rc_imul3(uint16_t a, uint16_t b)
{
    int32_t r = (int32_t)(int16_t)a * (int16_t)b;
    cpu.cf = cpu.of = r != (int16_t)r;
    return (uint16_t)r;
}
static void divide_error(void) { rc_int(0); }
void rc_div8(uint8_t v)
{
    unsigned q;
    if (!v) { divide_error(); return; }
    q = cpu.ax / v;
    if (q > 0xff) { divide_error(); return; }
    AH = (uint8_t)(cpu.ax % v); AL = (uint8_t)q;
}
void rc_div16(uint16_t v)
{
    uint32_t n = ((uint32_t)cpu.dx << 16) | cpu.ax, q;
    if (!v) { divide_error(); return; }
    q = n / v;
    if (q > 0xffff) { divide_error(); return; }
    cpu.dx = (uint16_t)(n % v); cpu.ax = (uint16_t)q;
}
void rc_idiv8(uint8_t v)
{
    int n = (int16_t)cpu.ax, q;
    if (!v) { divide_error(); return; }
    q = n / (int8_t)v;
    if (q > 127 || q < -128) { divide_error(); return; }
    AH = (uint8_t)(n % (int8_t)v); AL = (uint8_t)q;
}
void rc_idiv16(uint16_t v)
{
    int32_t n = (int32_t)(((uint32_t)cpu.dx << 16) | cpu.ax), q;
    if (!v) { divide_error(); return; }
    q = n / (int16_t)v;
    if (q > 32767 || q < -32768) { divide_error(); return; }
    cpu.dx = (uint16_t)(n % (int16_t)v); cpu.ax = (uint16_t)q;
}
void rc_daa(void)
{
    uint8_t a = AL; int c = cpu.cf;
    if ((a & 15) > 9 || cpu.af) { AL += 6; cpu.af = 1; } else cpu.af = 0;
    if (a > 0x99 || c) { AL += 0x60; cpu.cf = 1; } else cpu.cf = 0;
    SZP8(AL);
}
void rc_das(void)
{
    uint8_t a = AL; int c = cpu.cf;
    if ((a & 15) > 9 || cpu.af) { AL -= 6; cpu.af = 1; } else cpu.af = 0;
    if (a > 0x99 || c) { AL -= 0x60; cpu.cf = 1; } else cpu.cf = 0;
    SZP8(AL);
}
void rc_aaa(void)
{
    if ((AL & 15) > 9 || cpu.af) { cpu.ax += 0x106; cpu.af = cpu.cf = 1; } else cpu.af = cpu.cf = 0;
    AL &= 15;
}
void rc_aas(void)
{
    if ((AL & 15) > 9 || cpu.af) { cpu.ax -= 6; AH -= 1; cpu.af = cpu.cf = 1; } else cpu.af = cpu.cf = 0;
    AL &= 15;
}
void rc_aam(uint8_t b)
{
    if (!b) { divide_error(); return; }
    AH = AL / b; AL = AL % b; SZP8(AL);
}
void rc_aad(uint8_t b)
{
    AL = (uint8_t)(AH * b + AL); AH = 0; SZP8(AL);
}

/* ---------------------------------------------------------------- string ops */
#define STEP(sz) (cpu.df ? -(sz) : (sz))
void rc_movs(int size, uint16_t sseg, int rep)
{
    do {
        if (rep && !cpu.cx) return;
        if (size == 1) WB(cpu.es, cpu.di, RB(sseg, cpu.si));
        else WW(cpu.es, cpu.di, RW(sseg, cpu.si));
        cpu.si += STEP(size); cpu.di += STEP(size);
        if (rep) cpu.cx--;
    } while (rep);
}
void rc_stos(int size, int rep)
{
    do {
        if (rep && !cpu.cx) return;
        if (size == 1) WB(cpu.es, cpu.di, AL); else WW(cpu.es, cpu.di, cpu.ax);
        cpu.di += STEP(size);
        if (rep) cpu.cx--;
    } while (rep);
}
void rc_lods(int size, uint16_t sseg, int rep)
{
    do {
        if (rep && !cpu.cx) return;
        if (size == 1) AL = RB(sseg, cpu.si); else cpu.ax = RW(sseg, cpu.si);
        cpu.si += STEP(size);
        if (rep) cpu.cx--;
    } while (rep);
}
void rc_cmps(int size, uint16_t sseg, int rep)
{
    do {
        if (rep && !cpu.cx) return;
        if (size == 1) sub8(RB(sseg, cpu.si), RB(cpu.es, cpu.di), 0);
        else sub16(RW(sseg, cpu.si), RW(cpu.es, cpu.di), 0);
        cpu.si += STEP(size); cpu.di += STEP(size);
        if (rep) {
            cpu.cx--;
            if (rep == 1 && !cpu.zf) return;
            if (rep == 2 && cpu.zf) return;
        }
    } while (rep);
}
void rc_scas(int size, int rep)
{
    do {
        if (rep && !cpu.cx) return;
        if (size == 1) sub8(AL, RB(cpu.es, cpu.di), 0);
        else sub16(cpu.ax, RW(cpu.es, cpu.di), 0);
        cpu.di += STEP(size);
        if (rep) {
            cpu.cx--;
            if (rep == 1 && !cpu.zf) return;
            if (rep == 2 && cpu.zf) return;
        }
    } while (rep);
}
void rc_enter(uint16_t size, uint8_t level)
{
    uint16_t fp;
    PUSH(cpu.bp);
    fp = cpu.sp;
    level &= 31;
    if (level) {
        int i;
        for (i = 1; i < level; i++) { cpu.bp -= 2; PUSH(RW(cpu.ss, cpu.bp)); }
        PUSH(fp);
    }
    cpu.bp = fp;
    cpu.sp -= size;
}
