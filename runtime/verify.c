/* RC_VERIFY: differential check of hand-written replacements against their translation.
 *
 *   RC_VERIFY=all              check every replacement
 *   RC_VERIFY=rc_strlen,...    check these (names given to RC_REPLACE)
 *   RC_VERIFY_STACK=bytes      stack below the caller's SP ignored in the comparison (4096)
 *   RC_VERIFY_KEEP_GOING=1     report a mismatch, keep the translation's result and go on
 *
 * A checked call snapshots registers, memory, VGA memory and the FPU, runs the translated
 * original, restores the snapshot, runs the replacement and compares. A call whose original
 * does I/O (interrupts, ports) cannot be repeated: it is reported once and not compared. */
#include "rt.h"
#include "hand.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rc_verifying;

static uint8_t ram_in[RC_RAM_SIZE], ram_orig[RC_RAM_SIZE];
static uint8_t vga_in[sizeof vga_mem], vga_orig[sizeof vga_mem];

#define MAX_STATS 256
static struct { const char *name; unsigned ok, io; } stats[MAX_STATS];
static int nstats;

static const char *spec;
static int keep_going;
static unsigned stack_ignore = 4096;

static void report(void)
{
    int i;
    for (i = 0; i < nstats; i++)
        fprintf(stderr, "[VERIFY] %-24s %u calls identical%s\n", stats[i].name, stats[i].ok,
                stats[i].io ? " (original does I/O: not compared)" : "");
}

static int enabled(const char *name)
{
    static int init;
    size_t n = strlen(name);
    const char *p;
    if (!init) {
        const char *e;
        init = 1;
        spec = getenv("RC_VERIFY");
        if (spec && !*spec) spec = NULL;
        keep_going = getenv("RC_VERIFY_KEEP_GOING") != NULL;
        if ((e = getenv("RC_VERIFY_STACK"))) stack_ignore = (unsigned)strtoul(e, NULL, 0);
        if (spec) atexit(report);
    }
    if (!spec) return 0;
    if (!strcmp(spec, "all") || !strcmp(spec, "1")) return 1;
    for (p = spec; (p = strstr(p, name)); p += n)
        if ((p == spec || p[-1] == ',') && (p[n] == ',' || !p[n])) return 1;
    return 0;
}

static int stat_index(const char *name)
{
    int i;
    for (i = 0; i < nstats; i++)
        if (stats[i].name == name) return i;
    if (nstats == MAX_STATS) return MAX_STATS - 1;
    stats[nstats].name = name;
    return nstats++;
}

static uint16_t reg(const CPU *c, int i)
{
    const uint16_t v[] = { c->ax, c->cx, c->dx, c->bx, c->sp, c->bp, c->si, c->di, c->es, c->cs, c->ss, c->ds };
    if (i < 12) return v[i];
    return (uint16_t)(c->cf | c->pf << 2 | c->af << 4 | c->zf << 6 | c->sf << 7 | c->df << 10 | c->of << 11);
}
static const char *const reg_names[] = { "ax", "cx", "dx", "bx", "sp", "bp", "si", "di",
                                         "es", "cs", "ss", "ds", "flags" };

void rc_verified_call(const char *name, rc_fn fn, rc_fn orig, unsigned regs)
{
    CPU in, out;
    int sh, s, i, bad = 0, shown = 0;
    unsigned io;
    uint32_t lo, hi, a;

    /* replacements called while another one is checked just run */
    if (rc_verifying || !enabled(name)) { fn(); return; }
    s = stat_index(name);

    rc_verifying = 1;
    in = cpu;
    sh = rc_sh;
    memcpy(ram_in, rc_ram, sizeof rc_ram);
    memcpy(vga_in, vga_mem, sizeof vga_mem);
    rc_fpu_save(0);
    io = rc_io_count;

    orig();
    if (rc_io_count != io) {
        if (!stats[s].io) fprintf(stderr, "[VERIFY] %s: the original does I/O, calls are not compared\n", name);
        stats[s].io++;
        rc_verifying = 0;
        return;
    }
    out = cpu;
    memcpy(ram_orig, rc_ram, sizeof rc_ram);
    memcpy(vga_orig, vga_mem, sizeof vga_mem);
    rc_fpu_save(1);

    cpu = in;
    rc_sh = sh;
    memcpy(rc_ram, ram_in, sizeof rc_ram);
    memcpy(vga_mem, vga_in, sizeof vga_mem);
    rc_fpu_restore(0);
    fn();
    rc_verifying = 0;

    for (i = 0; i < 13; i++)
        if ((regs & (1u << i)) && reg(&cpu, i) != reg(&out, i)) bad = 1;
    /* the callee's dead stack frame below the caller's SP is not compared */
    hi = ((uint32_t)in.ss << 4) + in.sp;
    lo = ((uint32_t)in.ss << 4) + (in.sp > stack_ignore ? in.sp - stack_ignore : 0);
    if (memcmp(rc_ram, ram_orig, lo) || memcmp(rc_ram + hi, ram_orig + hi, sizeof rc_ram - hi)) bad = 1;
    if (memcmp(vga_mem, vga_orig, sizeof vga_mem)) bad = 1;
    if (rc_fpu_differs(1)) bad = 1;
    if (!bad) { stats[s].ok++; return; }

    fprintf(stderr, "[VERIFY] %s differs from the translation (call %u), returning to %04x:%04x %s "
            "(the segment, and so the function, are the caller's for a far call)\n", name, stats[s].ok + 1,
            RW(in.ss, (uint16_t)(in.sp + 2)), RW(in.ss, in.sp), rc_where(RW(in.ss, (uint16_t)(in.sp + 2)), RW(in.ss, in.sp)));
    fprintf(stderr, "[VERIFY]   stack at entry (return address, arguments):");
    for (i = 0; i < 10; i++) fprintf(stderr, " %04x", RW(in.ss, (uint16_t)(in.sp + 2 * i)));
    fprintf(stderr, "\n");
    for (i = 0; i < 13; i++)
        if ((regs & (1u << i)) && reg(&cpu, i) != reg(&out, i))
            fprintf(stderr, "[VERIFY]   %-5s translation %04x  hand-written %04x\n", reg_names[i], reg(&out, i), reg(&cpu, i));
    for (a = 0; a < sizeof rc_ram; a++) {
        if ((a >= lo && a < hi) || rc_ram[a] == ram_orig[a]) continue;
        if (shown++ < 16)
            fprintf(stderr, "[VERIFY]   mem %05x     translation %02x    hand-written %02x\n", a, ram_orig[a], rc_ram[a]);
    }
    for (a = 0; a < sizeof vga_mem; a++)
        if (vga_mem[a] != vga_orig[a] && shown++ < 16)
            fprintf(stderr, "[VERIFY]   vga %04x      translation %02x    hand-written %02x\n", a, vga_orig[a], vga_mem[a]);
    if (shown > 16) fprintf(stderr, "[VERIFY]   ... %d bytes differ\n", shown);
    if (rc_fpu_differs(1)) fprintf(stderr, "[VERIFY]   FPU state differs\n");
    if (!keep_going) rc_fatal("RC_VERIFY: %s mismatch", name);

    /* continue with the translation's result */
    cpu = out;
    memcpy(rc_ram, ram_orig, sizeof rc_ram);
    memcpy(vga_mem, vga_orig, sizeof vga_mem);
    rc_fpu_restore(1);
}
