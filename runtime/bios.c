/* BIOS / mouse / timer services and the SDL platform layer. */
#include "rt.h"
#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SCALE 3

int rc_video_mode = 3;
int rc_mouse_visible = -1;            /* INT 33h cursor counter: visible when 0 */
int plat_mouse_x = 160, plat_mouse_y = 100, plat_mouse_buttons;
static int mouse_clicks;               /* button presses not yet reported by INT 33h AX=3 */
static int mouse_xmin = 0, mouse_xmax = 639, mouse_ymin = 0, mouse_ymax = 199;

static SDL_Window *win;
static SDL_Renderer *ren;
static SDL_Texture *tex;
static uint32_t frame[320 * 200];
static const char *dump_dir;
static int dump_count;
static uint32_t dump_hash;
static int headless;

/* ------------------------------------------------------------ keyboard */
static uint16_t kbuf[64];
static int khead, ktail;
static uint8_t port60 = 0;
static int irq1_pending;

void rc_kbd_push(uint16_t key, uint8_t scancode)
{
    int n = (khead + 1) & 63;
    port60 = scancode;
    if (RW(0, 9 * 4 + 2) != RC_BIOS_SEG) irq1_pending = 1;    /* game hooked INT 9 */
    if (n != ktail && key) { kbuf[khead] = key; khead = n; }
}
int rc_kbd_peek(uint16_t *key) { if (khead == ktail) return 0; *key = kbuf[ktail]; return 1; }
int rc_kbd_get(uint16_t *key) { if (!rc_kbd_peek(key)) return 0; ktail = (ktail + 1) & 63; return 1; }
uint8_t rc_kbd_port60(void) { return port60; }

static int scan_of(SDL_Keycode k)
{
    static const char *row = "1234567890-=";
    static const char *qw = "qwertyuiop[]", *as = "asdfghjkl;'`", *zx = "\\zxcvbnm,./";
    const char *p;
    if (k < 128 && k > 0) {
        if ((p = strchr(row, (int)k))) return 0x02 + (int)(p - row);
        if ((p = strchr(qw, (int)k))) return 0x10 + (int)(p - qw);
        if ((p = strchr(as, (int)k))) return 0x1e + (int)(p - as);
        if ((p = strchr(zx, (int)k))) return 0x2b + (int)(p - zx);
        if (k == ' ') return 0x39;
    }
    return 0;
}

static void key_event(SDL_KeyboardEvent *e)
{
    SDL_Keycode k = e->keysym.sym;
    int shift = (e->keysym.mod & KMOD_SHIFT) != 0;
    static const struct { SDL_Keycode k; uint16_t v; } special[] = {
        { SDLK_RETURN, 0x1c0d }, { SDLK_KP_ENTER, 0x1c0d }, { SDLK_ESCAPE, 0x011b }, { SDLK_BACKSPACE, 0x0e08 },
        { SDLK_TAB, 0x0f09 }, { SDLK_UP, 0x4800 }, { SDLK_DOWN, 0x5000 }, { SDLK_LEFT, 0x4b00 },
        { SDLK_RIGHT, 0x4d00 }, { SDLK_HOME, 0x4700 }, { SDLK_END, 0x4f00 }, { SDLK_PAGEUP, 0x4900 },
        { SDLK_PAGEDOWN, 0x5100 }, { SDLK_INSERT, 0x5200 }, { SDLK_DELETE, 0x5300 },
        { SDLK_F1, 0x3b00 }, { SDLK_F2, 0x3c00 }, { SDLK_F3, 0x3d00 }, { SDLK_F4, 0x3e00 }, { SDLK_F5, 0x3f00 },
        { SDLK_F6, 0x4000 }, { SDLK_F7, 0x4100 }, { SDLK_F8, 0x4200 }, { SDLK_F9, 0x4300 }, { SDLK_F10, 0x4400 },
    };
    unsigned i;
    for (i = 0; i < sizeof(special) / sizeof(special[0]); i++)
        if (special[i].k == k) { rc_kbd_push(special[i].v, (uint8_t)(special[i].v >> 8)); return; }
    if (k > 0 && k < 128) {
        int sc = scan_of(k);
        int ch = (int)k;
        if (shift) {
            static const char *from = "1234567890-=[];'`\\,./", *to = "!@#$%^&*()_+{}:\"~|<>?";
            const char *p = strchr(from, ch);
            if (ch >= 'a' && ch <= 'z') ch -= 32;
            else if (p) ch = to[p - from];
        }
        if (e->keysym.mod & KMOD_CTRL && ch >= 'a' && ch <= 'z') ch -= 96;
        if (e->keysym.mod & KMOD_ALT) ch = 0;
        rc_kbd_push((uint16_t)((sc << 8) | (ch & 0xff)), (uint8_t)sc);
    }
}

/* ------------------------------------------------------------ platform */
static Uint32 tick_cb(Uint32 iv, void *p) { (void)p; rc_poll_pending = 1; return iv; }

void plat_init(void)
{
    headless = getenv("SDL_VIDEODRIVER") && !strcmp(getenv("SDL_VIDEODRIVER"), "offscreen");
    dump_dir = getenv("CM_DUMP_FRAMES");
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER) < 0) {
        fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        exit(1);
    }
    win = SDL_CreateWindow(rc_game_title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                           320 * SCALE, 200 * SCALE, 0);
    ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
    if (!ren) ren = SDL_CreateRenderer(win, -1, 0);
    tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, 320, 200);
    SDL_AddTimer(1, tick_cb, NULL);
}

uint32_t plat_ms(void) { return SDL_GetTicks(); }

void plat_pump(void)
{
    SDL_Event e;
    while (SDL_PollEvent(&e)) {
        switch (e.type) {
        case SDL_QUIT: exit(0);
        case SDL_MOUSEMOTION: plat_mouse_x = e.motion.x / SCALE; plat_mouse_y = e.motion.y / SCALE; break;
        case SDL_MOUSEBUTTONDOWN:
        case SDL_MOUSEBUTTONUP: {
            int bit = e.button.button == SDL_BUTTON_LEFT ? 1 : e.button.button == SDL_BUTTON_RIGHT ? 2 : 4;
            if (e.type == SDL_MOUSEBUTTONDOWN) { plat_mouse_buttons |= bit; mouse_clicks |= bit; }
            else plat_mouse_buttons &= ~bit;
            break;
        }
        case SDL_KEYDOWN: key_event(&e.key); break;
        case SDL_KEYUP: {
            int sc = scan_of(e.key.keysym.sym);
            if (sc) { port60 = (uint8_t)(sc | 0x80); if (RW(0, 9 * 4 + 2) != RC_BIOS_SEG) irq1_pending = 1; }
            break;
        }
        }
    }
    /* scripted typing for headless tests: CM_TEST_KEYS="ms:text;..." ('^' = Enter) */
    {
        static const char *keys;
        static int kinit;
        unsigned at;
        int used;
        if (!kinit) { keys = getenv("CM_TEST_KEYS"); kinit = 1; }
        if (keys && *keys && sscanf(keys, "%u:%n", &at, &used) == 1 && plat_ms() >= at) {
            const char *t = keys + used;
            fprintf(stderr, "[TEST] typing at %u ms\n", plat_ms());
            for (; *t && *t != ';'; t++) {
                if (*t == '^') rc_kbd_push(0x1c0d, 0x1c);
                else rc_kbd_push((uint16_t)((scan_of(*t >= 'A' && *t <= 'Z' ? *t + 32 : *t) << 8) | (uint8_t)*t), 0);
            }
            keys = *t ? t + 1 : t;
        }
    }
    /* scripted clicks for headless tests: CM_TEST_CLICKS="x,y@ms;..." */
    {
        static const char *script;
        static int init;
        static uint32_t release_at;
        int x, y, used;
        unsigned at;
        if (!init) { script = getenv("CM_TEST_CLICKS"); init = 1; }
        if (release_at && plat_ms() >= release_at) { plat_mouse_buttons &= ~1; release_at = 0; }
        if (script && *script && !release_at && sscanf(script, "%d,%d@%u%n", &x, &y, &at, &used) == 3 && plat_ms() >= at) {
            plat_mouse_x = x; plat_mouse_y = y; plat_mouse_buttons |= 1; mouse_clicks |= 1; release_at = plat_ms() + 80;
            fprintf(stderr, "[TEST] click %d,%d at %u ms\n", x, y, plat_ms());
            script += used;
            if (*script == ';') script++;
        }
    }
}

static const uint8_t cursor[16][11] = {
#define _ 0,
#define B 1,
#define W 2,
    { B _ _ _ _ _ _ _ _ _ _ }, { B B _ _ _ _ _ _ _ _ _ }, { B W B _ _ _ _ _ _ _ _ }, { B W W B _ _ _ _ _ _ _ },
    { B W W W B _ _ _ _ _ _ }, { B W W W W B _ _ _ _ _ }, { B W W W W W B _ _ _ _ }, { B W W W W W W B _ _ _ },
    { B W W W W W W W B _ _ }, { B W W W W W W W W B _ }, { B W W W W W B B B B B }, { B W W B W W B _ _ _ _ },
    { B W B _ B W W B _ _ _ }, { B B _ _ B W W B _ _ _ }, { B _ _ _ _ B W W B _ _ }, { _ _ _ _ _ B B B _ _ _ },
#undef _
#undef B
#undef W
};

void plat_present(void)
{
    const uint8_t *pal = rc_dac();
    uint32_t lut[256];
    int i, x, y;
    for (i = 0; i < 256; i++) {
        uint32_t r = pal[i * 3], g = pal[i * 3 + 1], b = pal[i * 3 + 2];
        lut[i] = 0xff000000u | (((r << 2) | (r >> 4)) << 16) | (((g << 2) | (g >> 4)) << 8) | ((b << 2) | (b >> 4));
    }
    if (rc_video_mode == 0x13) {
        for (i = 0; i < 320 * 200; i++) frame[i] = lut[vga_mem[i]];
    } else {
        memset(frame, 0, sizeof(frame));
    }
    if (rc_mouse_visible >= 0 && rc_video_mode == 0x13) {
        for (y = 0; y < 16; y++)
            for (x = 0; x < 11; x++) {
                int px = plat_mouse_x + x, py = plat_mouse_y + y;
                if (cursor[y][x] && px < 320 && py < 200)
                    frame[py * 320 + px] = cursor[y][x] == 1 ? 0xff000000u : 0xffffffffu;
            }
    }
    if (dump_dir && dump_count < 400) {
        uint32_t h = 2166136261u;
        for (i = 0; i < 320 * 200; i++) h = (h ^ frame[i]) * 16777619u;
        if (h != dump_hash) {
            char path[512];
            FILE *f;
            dump_hash = h;
            snprintf(path, sizeof(path), "%s/frame%03d.ppm", dump_dir, dump_count++);
            if ((f = fopen(path, "wb")) != NULL) {
                fprintf(f, "P6\n320 200\n255\n");
                for (i = 0; i < 320 * 200; i++) { fputc(frame[i] >> 16, f); fputc(frame[i] >> 8, f); fputc(frame[i], f); }
                fclose(f);
            }
            fprintf(stderr, "[FRAME] %s @%ums\n", path, plat_ms());
        }
    }
    SDL_UpdateTexture(tex, NULL, frame, 320 * 4);
    SDL_RenderClear(ren);
    SDL_RenderCopy(ren, tex, NULL, NULL);
    SDL_RenderPresent(ren);
}

/* ------------------------------------------------------------ timer & polling */
static uint32_t t0_ms;
static double tick_accum, last_ms;
static uint32_t last_pump, last_present;

void rc_timer_reprogram(void) { fprintf(stderr, "[PIT] timer 0 -> %.1f Hz\n", rc_pit_hz()); }

uint32_t rc_pit_counter(void)
{
    struct timespec ts;
    double period, t;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    t = ts.tv_sec + ts.tv_nsec * 1e-9;
    period = 1.0 / rc_pit_hz();
    return (uint32_t)((1.0 - fmod(t, period) / period) * (1193182.0 * period)) & 0xffff;
}

void rc_poll(void)
{
    static int in_poll;
    uint32_t now;
    if (rc_verifying) return;       /* stays pending until the comparison is done */
    now = plat_ms();
    rc_poll_pending = 0;
    if (in_poll) return;
    in_poll = 1;
    if (!t0_ms) { t0_ms = now; last_ms = now; }
    tick_accum += (now - last_ms) * rc_pit_hz() / 1000.0;
    last_ms = now;
    if (tick_accum > 8) tick_accum = 8;
    while (tick_accum >= 1 && cpu.if_) {
        tick_accum -= 1;
        rc_irq(8);
    }
    if (now - last_pump >= 5) { plat_pump(); last_pump = now; audio_sync(); }
    if (irq1_pending && cpu.if_) { irq1_pending = 0; rc_irq(9); }
    if (now - last_present >= 16) { plat_present(); last_present = now; }
    in_poll = 0;
}

/* ------------------------------------------------------------ INT 10h */
static void set_default_palette(void)
{
    static const uint8_t ega[16][3] = { { 0, 0, 0 }, { 0, 0, 42 }, { 0, 42, 0 }, { 0, 42, 42 }, { 42, 0, 0 }, { 42, 0, 42 },
                                        { 42, 21, 0 }, { 42, 42, 42 }, { 21, 21, 21 }, { 21, 21, 63 }, { 21, 63, 21 },
                                        { 21, 63, 63 }, { 63, 21, 21 }, { 63, 21, 63 }, { 63, 63, 21 }, { 63, 63, 63 } };
    int i;
    for (i = 0; i < 256; i++) {
        if (i < 16) rc_dac_set(i, ega[i][0], ega[i][1], ega[i][2]);
        else if (i < 32) rc_dac_set(i, (i - 16) * 4, (i - 16) * 4, (i - 16) * 4);
        else rc_dac_set(i, ((i >> 5) & 7) * 9, ((i >> 2) & 7) * 9, (i & 3) * 21);
    }
}

static void int10(void)
{
    uint8_t r, g, b;
    int i;
    switch (AH) {
    case 0x00:
        rc_video_mode = AL & 0x7f;
        WB(0x40, 0x49, (uint8_t)rc_video_mode);
        WW(0x40, 0x4a, rc_video_mode == 0x13 ? 40 : 80);
        if (!(AL & 0x80)) memset(vga_mem, 0, sizeof(vga_mem));
        set_default_palette();
        fprintf(stderr, "[VIDEO] mode %02x\n", rc_video_mode);
        return;
    case 0x0f: AL = (uint8_t)rc_video_mode; AH = rc_video_mode == 0x13 ? 40 : 80; BH = 0; return;
    case 0x01: case 0x02: case 0x05: case 0x06: case 0x07: case 0x0b: return;
    case 0x03: cpu.cx = 0x0607; cpu.dx = 0; return;
    case 0x08: cpu.ax = 0x0720; return;
    case 0x09: case 0x0a: return;
    case 0x0e: putchar(AL); fflush(stdout); return;
    case 0x10:
        switch (AL) {
        case 0x10: rc_dac_set(cpu.bx, DH, CH, CL); return;
        case 0x12:
            for (i = 0; i < cpu.cx; i++)
                rc_dac_set(cpu.bx + i, RB(cpu.es, (uint16_t)(cpu.dx + 3 * i)), RB(cpu.es, (uint16_t)(cpu.dx + 3 * i + 1)),
                           RB(cpu.es, (uint16_t)(cpu.dx + 3 * i + 2)));
            return;
        case 0x15: rc_dac_get(cpu.bx, &r, &g, &b); DH = r; CH = g; CL = b; return;
        case 0x17:
            for (i = 0; i < cpu.cx; i++) {
                rc_dac_get(cpu.bx + i, &r, &g, &b);
                WB(cpu.es, (uint16_t)(cpu.dx + 3 * i), r); WB(cpu.es, (uint16_t)(cpu.dx + 3 * i + 1), g);
                WB(cpu.es, (uint16_t)(cpu.dx + 3 * i + 2), b);
            }
            return;
        case 0x07: BH = BL; return;
        case 0x1a: cpu.bx = 0; return;
        default: return;               /* EGA attribute registers: no effect in mode 13h */
        }
    case 0x11:
        if (AL == 0x30) { cpu.cx = 8; DL = 24; cpu.es = RC_BIOS_SEG; cpu.bp = 0x8000; }
        return;
    case 0x12:
        if (BL == 0x10) { BH = 0; BL = 3; CH = 0; CL = 9; }
        return;
    case 0x1a:
        if (AL == 0) { AL = 0x1a; BL = 0x08; BH = 0; }
        return;
    case 0x1b: AL = 0x1b; return;
    case 0x4f: cpu.ax = 0x0100; return;   /* no VESA */
    }
    fprintf(stderr, "[BIOS] INT 10h AH=%02x AL=%02x ignored\n", AH, AL);
}

/* ------------------------------------------------------------ INT 33h */
static void int33(void)
{
    switch (cpu.ax) {
    case 0x00: case 0x21:
        cpu.ax = 0xffff; cpu.bx = 2; rc_mouse_visible = -1; mouse_clicks = 0;
        mouse_xmin = 0; mouse_xmax = 639; mouse_ymin = 0; mouse_ymax = 199;
        return;
    case 0x01: if (rc_mouse_visible < 0) rc_mouse_visible++; return;
    case 0x02: rc_mouse_visible--; return;
    case 0x03: {
        static unsigned polls;
        int x = plat_mouse_x * 2, y = plat_mouse_y;
        if ((++polls & 31) == 0) SDL_Delay(1);    /* the game busy-polls the mouse while waiting */
        plat_pump();
        x = plat_mouse_x * 2; y = plat_mouse_y;
        if (x < mouse_xmin) x = mouse_xmin; if (x > mouse_xmax) x = mouse_xmax;
        if (y < mouse_ymin) y = mouse_ymin; if (y > mouse_ymax) y = mouse_ymax;
        /* Both games poll the button level and act on the first "down" without waiting for
           the release, so a held button would also click whatever the next screen puts under
           the cursor. Report each physical press exactly once instead. */
        cpu.bx = (uint16_t)mouse_clicks; mouse_clicks = 0;
        cpu.cx = (uint16_t)x; cpu.dx = (uint16_t)y;
        return;
    }
    case 0x04: plat_mouse_x = cpu.cx / 2; plat_mouse_y = cpu.dx; return;
    case 0x05: case 0x06:
        cpu.ax = (uint16_t)plat_mouse_buttons; cpu.bx = 0; cpu.cx = (uint16_t)(plat_mouse_x * 2); cpu.dx = (uint16_t)plat_mouse_y;
        return;
    case 0x07: mouse_xmin = cpu.cx; mouse_xmax = cpu.dx; return;
    case 0x08: mouse_ymin = cpu.cx; mouse_ymax = cpu.dx; return;
    case 0x0b: cpu.cx = 0; cpu.dx = 0; return;
    case 0x0c: fprintf(stderr, "[MOUSE] event handler %04x:%04x mask %04x ignored\n", cpu.es, cpu.dx, cpu.cx); return;
    case 0x09: case 0x0a: case 0x0f: case 0x10: case 0x13: case 0x1a: case 0x1d: return;
    case 0x24: cpu.bx = 0x0626; CH = 4; CL = 0; return;
    }
    fprintf(stderr, "[MOUSE] INT 33h AX=%04x ignored\n", cpu.ax);
}

/* ------------------------------------------------------------ dispatcher */
void rc_hle_int(uint8_t n)
{
    uint16_t k;
    switch (n) {
    case 0x21: dos_int21(); return;
    case 0x10: int10(); return;
    case 0x33: int33(); return;
    case 0x16:
        switch (AH) {
        case 0x00: case 0x10:
            while (!rc_kbd_get(&k)) { plat_pump(); plat_present(); SDL_Delay(5); rc_poll(); }
            cpu.ax = k; return;
        case 0x01: case 0x11:
            rc_poll();
            if (rc_kbd_peek(&k)) { cpu.ax = k; cpu.zf = 0; } else cpu.zf = 1;
            return;
        case 0x02: case 0x12: AL = RB(0x40, 0x17); return;
        case 0x03: return;
        case 0x05: rc_kbd_push(cpu.cx, CH); AL = 0; return;
        }
        break;
    case 0x1a:
        if (AH == 0) { cpu.cx = RW(0x40, 0x6e); cpu.dx = RW(0x40, 0x6c); AL = RB(0x40, 0x70); WB(0x40, 0x70, 0); return; }
        if (AH == 2 || AH == 4) {
            time_t t = time(NULL); struct tm *tm = localtime(&t);
#define BCD(v) (uint8_t)((((v) / 10) << 4) | ((v) % 10))
            if (AH == 2) { CH = BCD(tm->tm_hour); CL = BCD(tm->tm_min); DH = BCD(tm->tm_sec); DL = 0; }
            else { CH = BCD((tm->tm_year + 1900) / 100); CL = BCD(tm->tm_year % 100); DH = BCD(tm->tm_mon + 1); DL = BCD(tm->tm_mday); }
            cpu.cf = 0;
            return;
        }
        return;
    case 0x08: {                       /* BIOS timer tick */
        uint32_t t = RD(0x40, 0x6c) + 1;
        if (t >= 0x1800b0) { t = 0; WB(0x40, 0x70, 1); }
        WD(0x40, 0x6c, t);
        rc_irq(0x1c);
        return;
    }
    case 0x09: {                       /* BIOS keyboard IRQ: key already queued by the platform layer */
        return;
    }
    case 0x11: cpu.ax = 0x0003; return;
    case 0x12: cpu.ax = 640; return;
    case 0x15: if (AH == 0x88) { cpu.ax = 0; cpu.cf = 0; } else { cpu.cf = 1; AH = 0x86; } return;
    case 0x17: AH = 0x90; return;
    case 0x2f: if (cpu.ax == 0x1600 || cpu.ax == 0x4300) AL = 0; return;
    case 0x67: AH = 0x84; return;
    case 0x1c: case 0x1b: case 0x23: case 0x05: case 0x28: return;
    case 0x24: AL = 3; return;
    case 0x00: rc_fatal("divide error");
    case 0x20: fprintf(stderr, "[DOS] INT 20h exit\n"); exit(0);
    }
    fprintf(stderr, "[BIOS] INT %02xh AX=%04x not implemented\n", n, cpu.ax);
}
