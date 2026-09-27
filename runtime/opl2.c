/* YM3812 (OPL2) emulation, written from the chip's documented behaviour.
   Phase is kept in 20-bit fixed point (one wave cycle = 2^20), waveform index in
   10 bits; attenuation is handled in dB. Output rate is the chip's 49716 Hz. */
#include "opl2.h"
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265358979323846

enum { EG_OFF, EG_ATTACK, EG_DECAY, EG_SUSTAIN, EG_RELEASE };

typedef struct {
    /* registers */
    int am, vib, egt, ksr, mult, ksl, tl, ar, dr, sl, rr, wave;
    /* state */
    uint32_t phase;
    int eg;
    double env;             /* attenuation in dB, 0..96 */
    int out[2];             /* last two outputs (feedback) */
    int key;                /* key-on sources: bit0 melodic, bit1 rhythm */
} op_t;

typedef struct {
    int fnum, block, key, fb, cnt;
    op_t *op[2];
} ch_t;

static op_t ops[18];
static ch_t chs[9];
static uint8_t regs[256];
static int addr;
static int wave_enable, note_sel, am_depth, vib_depth, rhythm;
static double sine[1024];
static double am_phase, vib_phase;
static uint32_t noise = 1;
static double rate_step[64], attack_k[64];
/* timers */
static int t1_val, t2_val, t1_on, t2_on, t1_mask, t2_mask, status;
static double t1_left, t2_left;   /* microseconds */

/* register offset (0..0x15) -> operator index */
static const int slot_of_ofs[32] = { 0, 1, 2, 3, 4, 5, -1, -1, 6, 7, 8, 9, 10, 11, -1, -1,
                                     12, 13, 14, 15, 16, 17, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
/* channel -> modulator operator (carrier = +3) */
static const int ch_mod[9] = { 0, 1, 2, 6, 7, 8, 12, 13, 14 };
static const int mult_x2[16] = { 1, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 20, 24, 24, 30, 30 };
static const double ksl_base[16] = { 0, 18, 24, 27.75, 30, 32.25, 33.75, 35.25,
                                     36, 37.5, 38.25, 39, 39.75, 40.5, 41.25, 42 };

void opl_init(void)
{
    int i;
    memset(ops, 0, sizeof(ops));
    memset(chs, 0, sizeof(chs));
    memset(regs, 0, sizeof(regs));
    for (i = 0; i < 1024; i++) sine[i] = sin((i + 0.5) * 2 * PI / 1024);
    for (i = 0; i < 18; i++) { ops[i].env = 96; ops[i].eg = EG_OFF; }
    for (i = 0; i < 9; i++) { chs[i].op[0] = &ops[ch_mod[i]]; chs[i].op[1] = &ops[ch_mod[i] + 3]; }
    /* envelope speeds per effective rate (0..63). Datasheet: 0->96 dB decay takes 39.28 s
       at rate 4 and halves every 4 rates; attack from silence takes 2.826 s at rate 4. */
    for (i = 0; i < 64; i++) {
        if (i < 4) { rate_step[i] = 0; attack_k[i] = 0; continue; }
        {
            double td = 39.28 * pow(2.0, -(i - 4) / 4.0), ta = 2.826 * pow(2.0, -(i - 4) / 4.0);
            rate_step[i] = 96.0 / (td * OPL_RATE);
            attack_k[i] = i >= 60 ? 1.0 : 1.0 - pow(0.1 / 96.0, 1.0 / (ta * OPL_RATE));
        }
    }
    status = 0;
}

static int eff_rate(op_t *o, ch_t *c, int r)
{
    int rof = ((c->block << 1) | ((c->fnum >> (note_sel ? 8 : 9)) & 1)) >> (o->ksr ? 0 : 2);
    int e = 4 * r + rof;
    if (!r) return 0;
    return e > 63 ? 63 : e;
}

static void key_on(op_t *o, int src)
{
    if (!o->key) { o->phase = 0; o->eg = EG_ATTACK; }
    o->key |= src;
}

static void key_off(op_t *o, int src)
{
    if (!o->key) return;
    o->key &= ~src;
    if (!o->key && o->eg != EG_OFF) o->eg = EG_RELEASE;
}

static ch_t *ch_of_op(int s)
{
    int c;
    for (c = 0; c < 9; c++) if (ch_mod[c] == s || ch_mod[c] + 3 == s) return &chs[c];
    return &chs[0];
}

void opl_write_addr(uint8_t a) { addr = a; }

void opl_write_data(uint8_t v)
{
    int r = addr, s;
    static int log = -1;
    if (log < 0) log = getenv("CM_OPL_LOG") != NULL;
    if (log) fprintf(stderr, "[OPL] %02x=%02x\n", r, v);
    regs[r] = v;
    if (r == 0x01) { wave_enable = (v >> 5) & 1; return; }
    if (r == 0x02) { t1_val = v; return; }
    if (r == 0x03) { t2_val = v; return; }
    if (r == 0x04) {
        if (v & 0x80) { status = 0; return; }
        t1_mask = (v >> 6) & 1; t2_mask = (v >> 5) & 1;
        if ((v & 1) && !t1_on) t1_left = (256 - t1_val) * 80.0;
        if ((v & 2) && !t2_on) t2_left = (256 - t2_val) * 320.0;
        t1_on = v & 1; t2_on = (v >> 1) & 1;
        return;
    }
    if (r == 0x08) { note_sel = (v >> 6) & 1; return; }
    if (r >= 0x20 && r <= 0xf5 && (r & 0xe0) != 0xa0 && (r & 0xe0) != 0xc0 && r != 0xbd) {
        s = slot_of_ofs[r & 0x1f];
        if (s < 0) return;
        switch (r & 0xe0) {
        case 0x20: ops[s].am = v >> 7; ops[s].vib = (v >> 6) & 1; ops[s].egt = (v >> 5) & 1; ops[s].ksr = (v >> 4) & 1; ops[s].mult = v & 15; break;
        case 0x40: ops[s].ksl = v >> 6; ops[s].tl = v & 63; break;
        case 0x60: ops[s].ar = v >> 4; ops[s].dr = v & 15; break;
        case 0x80: ops[s].sl = v >> 4; ops[s].rr = v & 15; break;
        case 0xe0: ops[s].wave = v & 3; break;
        }
        return;
    }
    if (r >= 0xa0 && r <= 0xa8) { chs[r - 0xa0].fnum = (chs[r - 0xa0].fnum & 0x300) | v; return; }
    if (r >= 0xb0 && r <= 0xb8) {
        ch_t *c = &chs[r - 0xb0];
        int k = (v >> 5) & 1;
        c->fnum = (c->fnum & 0xff) | ((v & 3) << 8);
        c->block = (v >> 2) & 7;
        if (k && !c->key) { key_on(c->op[0], 1); key_on(c->op[1], 1); }
        if (!k && c->key) { key_off(c->op[0], 1); key_off(c->op[1], 1); }
        c->key = k;
        return;
    }
    if (r >= 0xc0 && r <= 0xc8) { chs[r - 0xc0].fb = (v >> 1) & 7; chs[r - 0xc0].cnt = v & 1; return; }
    if (r == 0xbd) {
        am_depth = v >> 7; vib_depth = (v >> 6) & 1; rhythm = (v >> 5) & 1;
        if (rhythm) {
            /* BD = ch6 (both ops), SD = ch7 carrier, TT = ch8 modulator, CY = ch8 carrier, HH = ch7 modulator */
            if (v & 0x10) { key_on(&ops[12], 2); key_on(&ops[15], 2); } else { key_off(&ops[12], 2); key_off(&ops[15], 2); }
            if (v & 0x08) key_on(&ops[16], 2); else key_off(&ops[16], 2);
            if (v & 0x04) key_on(&ops[14], 2); else key_off(&ops[14], 2);
            if (v & 0x02) key_on(&ops[17], 2); else key_off(&ops[17], 2);
            if (v & 0x01) key_on(&ops[13], 2); else key_off(&ops[13], 2);
        } else {
            int i;
            for (i = 12; i < 18; i++) key_off(&ops[i], 2);
        }
    }
}

uint8_t opl_read_status(void)
{
    /* each status read on the ISA bus takes about 1 us; drivers time the timer test with them */
    opl_timers_advance(1.0);
    return (uint8_t)status;
}

void opl_timers_advance(double us)
{
    if (t1_on) {
        t1_left -= us;
        while (t1_left <= 0) {
            t1_left += (256 - t1_val) * 80.0;
            if (!t1_mask) status |= 0xc0;
        }
    }
    if (t2_on) {
        t2_left -= us;
        while (t2_left <= 0) {
            t2_left += (256 - t2_val) * 320.0;
            if (!t2_mask) status |= 0xa0;
        }
    }
}

static void envelope(op_t *o, ch_t *c)
{
    double sl = o->sl == 15 ? 93.0 : o->sl * 3.0;
    switch (o->eg) {
    case EG_ATTACK: {
        int er = eff_rate(o, c, o->ar);
        o->env -= o->env * attack_k[er];
        if (o->env < 0.05 || er >= 60) { o->env = 0; o->eg = EG_DECAY; }
        break;
    }
    case EG_DECAY:
        o->env += rate_step[eff_rate(o, c, o->dr)];
        if (o->env >= sl) { o->env = sl; o->eg = EG_SUSTAIN; }
        break;
    case EG_SUSTAIN:
        if (!o->egt) {                          /* percussive: keep decaying at the release rate */
            o->env += rate_step[eff_rate(o, c, o->rr)];
        }
        break;
    case EG_RELEASE:
        o->env += rate_step[eff_rate(o, c, o->rr)];
        break;
    }
    if (o->env >= 96) { o->env = 96; if (o->eg == EG_RELEASE) o->eg = EG_OFF; }
}

static double wave(int w, int idx)
{
    idx &= 1023;
    if (!wave_enable) w = 0;
    switch (w) {
    case 1: return idx < 512 ? sine[idx] : 0;
    case 2: return fabs(sine[idx]);
    case 3: return (idx & 256) ? 0 : fabs(sine[idx]);
    }
    return sine[idx];
}

static double atten(op_t *o, ch_t *c, double am)
{
    double a = o->env + o->tl * 0.75;
    if (o->ksl) {
        double k = ksl_base[c->fnum >> 6] - 6.0 * (7 - c->block);
        static const double scale[4] = { 0, 0.5, 0.25, 1.0 };   /* 0, 3, 1.5, 6 dB/octave */
        if (k > 0) a += k * scale[o->ksl];
    }
    if (o->am) a += am;
    return a;
}

/* operator output in -4095..4095; `mod` is a phase offset in waveform-index units */
static int op_out(op_t *o, ch_t *c, int idx, double am)
{
    double a = atten(o, c, am);
    if (a >= 96 || o->eg == EG_OFF) return 0;
    return (int)(wave(o->wave, idx) * 4095.0 * pow(10.0, -a / 20.0));
}

static void advance_phase(op_t *o, ch_t *c, double vibf)
{
    double inc = (double)((uint32_t)c->fnum << c->block) * mult_x2[o->mult] / 2.0;
    if (o->vib) inc *= vibf;
    o->phase += (uint32_t)inc;
}

void opl_generate(int16_t *buf, int n)
{
    int i, k;
    for (i = 0; i < n; i++) {
        double am, vibf, s = 0;
        /* LFOs: tremolo 3.7 Hz (1 / 4.8 dB), vibrato 6.07 Hz (7 / 14 cents) */
        am_phase += 3.7 / OPL_RATE; if (am_phase >= 1) am_phase -= 1;
        vib_phase += 6.07 / OPL_RATE; if (vib_phase >= 1) vib_phase -= 1;
        am = (am_depth ? 4.8 : 1.0) * (am_phase < 0.5 ? am_phase * 2 : 2 - am_phase * 2);
        vibf = pow(2.0, (vib_depth ? 14.0 : 7.0) * sin(2 * PI * vib_phase) / 1200.0);
        /* 23-bit noise LFSR */
        if (noise & 1) noise ^= 0x800302;
        noise >>= 1;

        for (k = 0; k < (rhythm ? 6 : 9); k++) {
            ch_t *c = &chs[k];
            op_t *m = c->op[0], *car = c->op[1];
            int fbm = c->fb ? (m->out[0] + m->out[1]) >> (9 - c->fb) : 0;
            int mo, co;
            envelope(m, c); envelope(car, c);
            mo = op_out(m, c, (int)(m->phase >> 10) + fbm, am);
            m->out[1] = m->out[0]; m->out[0] = mo;
            co = op_out(car, c, (int)(car->phase >> 10) + (c->cnt ? 0 : mo), am);
            s += c->cnt ? mo + co : co;
            advance_phase(m, c, vibf); advance_phase(car, c, vibf);
        }
        if (rhythm) {
            ch_t *c6 = &chs[6], *c7 = &chs[7], *c8 = &chs[8];
            op_t *bdm = &ops[12], *bdc = &ops[15], *hh = &ops[13], *sd = &ops[16], *tt = &ops[14], *cy = &ops[17];
            int nb = noise & 1, fbm, mo, co, p7 = (int)(hh->phase >> 10), p8 = (int)(cy->phase >> 10), ph;
            int b7 = (p7 >> 7) & 1, b3 = (p7 >> 3) & 1, b2 = (p7 >> 2) & 1, r1 = (b2 ^ b7) | b3;
            int r2 = ((p8 >> 3) & 1) ^ ((p8 >> 5) & 1);
            for (k = 12; k < 18; k++) envelope(&ops[k], k == 12 || k == 15 ? c6 : (k == 13 || k == 16) ? c7 : c8);
            /* bass drum: normal 2-op channel 6 */
            fbm = c6->fb ? (bdm->out[0] + bdm->out[1]) >> (9 - c6->fb) : 0;
            mo = op_out(bdm, c6, (int)(bdm->phase >> 10) + fbm, am);
            bdm->out[1] = bdm->out[0]; bdm->out[0] = mo;
            co = op_out(bdc, c6, (int)(bdc->phase >> 10) + (c6->cnt ? 0 : mo), am);
            s += 2 * co;
            /* hi-hat */
            ph = r1 ? (0x200 | (0xd0 >> 2)) : 0xd0;
            if (r2) ph = 0x200 | (0xd0 >> 2);
            if (ph & 0x200) { if (nb) ph = 0x200 | 0xd0; } else if (nb) ph = 0xd0 >> 2;
            s += 2 * op_out(hh, c7, ph, am);
            /* snare */
            ph = ((p7 >> 8) & 1) ? 0x200 : 0x100;
            if (nb) ph ^= 0x100;
            s += 2 * op_out(sd, c7, ph, am);
            /* tom-tom: single operator */
            s += 2 * op_out(tt, c8, (int)(tt->phase >> 10), am);
            /* cymbal */
            ph = (r1 || r2) ? 0x300 : 0x100;
            s += 2 * op_out(cy, c8, ph, am);
            for (k = 12; k < 18; k++) advance_phase(&ops[k], k == 12 || k == 15 ? c6 : (k == 13 || k == 16) ? c7 : c8, vibf);
        }
        if (s > 32767) s = 32767;
        if (s < -32768) s = -32768;
        buf[i] = (int16_t)s;
    }
    opl_timers_advance(n * 1e6 / OPL_RATE);
}
