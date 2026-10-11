/* The machine the game runs on, with SDL3: the VGA in mode 13h (320x200, 256 colours,
 * a 6-bit DAC), the mouse driver (INT 33h), the BIOS keyboard (kbhit/getch) and the
 * BIOS clock (18.2 ticks a second).
 *
 * The game draws into video memory and never says when a frame is done: the screen is
 * shown from port_pump(), which the game reaches whenever it polls the mouse, the
 * keyboard or the clock, at most every 16 ms.
 *
 * Environment:
 *   CM_SQUARE_PIXELS=1        show 320x200 as it is (default: stretched to 4:3, as on a CRT)
 *   CM_TEST_CLICKS="x,y@ms;..." scripted left clicks (x, y in 320x200), for headless tests
 *   CM_TEST_KEYS="ms:text;..."  scripted typing, '^' is Enter
 *   CM_DUMP_FRAMES=dir         every new frame shown, as dir/frameNNN.ppm
 */
#include <SDL3/SDL.h>
#include <time.h>

#include "port.h"

static SDL_Window *window;
static SDL_Renderer *renderer;
static SDL_Texture *texture;
static int logical_h = 240;

/* A000:0000. The game's far pointer arithmetic can stray outside the 64000 bytes (text
 * drawn above the top line): the 64K segment has room on both sides. */
static unsigned char vga_alloc[3 * 65536];
#define VGA (vga_alloc + 65536)
static unsigned char dac[256 * 3];
static uint32_t frame[320 * 200];

static int16_t mouse_x, mouse_y;        /* 640x200, as the mouse driver counts */
static int16_t mouse_buttons, mouse_pressed;
static int cursor_level = -1;           /* INT 33h: shown at 0 */

static int keys[64];
static int key_head, key_tail;

static uint64_t last_present, spin_ms;
static int spin_count;
static const char *dump_dir;
static unsigned dump_count;
static uint32_t dump_hash;

static void key_push(int code)
{
    int next = (key_tail + 1) % 64;
    if (next != key_head) {
        keys[key_tail] = code;
        key_tail = next;
    }
}

unsigned char *port_vga_memory(void)
{
    return VGA;
}

void port_vga_set_palette(int first, int count, const unsigned char *rgb6)
{
    int i;
    for (i = 0; i < count * 3 && first * 3 + i < (int)sizeof(dac); i++)
        dac[first * 3 + i] = rgb6[i] & 0x3f;
}

/* SDL is shut down here rather than from atexit(): libraries it loaded in SDL_Init
 * register exit handlers of their own, which would run before it. */
static void shutdown_video(void)
{
    if (renderer == NULL)
        return;
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    texture = NULL;
    renderer = NULL;
    window = NULL;
    SDL_Quit();
}

/* back to text mode: the game is leaving (restore_system) */
void port_vga_restore_text_mode(void)
{
    shutdown_video();
}

void port_mouse_show(int show)
{
    if (show) {
        if (cursor_level < 0)
            cursor_level++;
    } else
        cursor_level--;
}

void port_mouse_state(int16_t *buttons, int16_t *x, int16_t *y)
{
    *buttons = mouse_buttons | mouse_pressed;   /* a click between two polls is not lost */
    mouse_pressed = 0;
    *x = mouse_x;
    *y = mouse_y;
}

/* ---------------------------------------------------------------- the screen */

static const uint8_t cursor[16][11] = {        /* the mouse driver's arrow */
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

static void dump_frame(void)
{
    uint32_t h = 2166136261u;
    char path[512];
    FILE *f;
    int i;

    for (i = 0; i < 320 * 200; i++)
        h = (h ^ frame[i]) * 16777619u;
    if (h == dump_hash || dump_count >= 1000)
        return;
    dump_hash = h;
    snprintf(path, sizeof(path), "%s/frame%03u.ppm", dump_dir, dump_count++);
    if ((f = fopen(path, "wb")) != NULL) {
        fprintf(f, "P6\n320 200\n255\n");
        for (i = 0; i < 320 * 200; i++) {
            fputc(frame[i] >> 16, f);
            fputc(frame[i] >> 8, f);
            fputc(frame[i], f);
        }
        fclose(f);
    }
    fprintf(stderr, "[FRAME] %s @%ums\n", path, (unsigned)SDL_GetTicks());
}

static void present(void)
{
    uint32_t lut[256];
    SDL_FRect dst = { 0, 0, 320, (float)logical_h };
    int i, x, y;

    for (i = 0; i < 256; i++) {
        uint32_t r = dac[i * 3], g = dac[i * 3 + 1], b = dac[i * 3 + 2];
        lut[i] = 0xff000000u | (((r << 2) | (r >> 4)) << 16) | (((g << 2) | (g >> 4)) << 8) | ((b << 2) | (b >> 4));
    }
    for (i = 0; i < 320 * 200; i++)
        frame[i] = lut[VGA[i]];
    if (cursor_level >= 0)
        for (y = 0; y < 16; y++)
            for (x = 0; x < 11; x++) {
                int px = mouse_x / 2 + x, py = mouse_y + y;
                if (cursor[y][x] && px < 320 && py < 200)
                    frame[py * 320 + px] = cursor[y][x] == 1 ? lut[0] : lut[15];
            }
    if (dump_dir)
        dump_frame();
    SDL_UpdateTexture(texture, NULL, frame, 320 * 4);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    SDL_RenderTexture(renderer, texture, NULL, &dst);
    SDL_RenderPresent(renderer);
}

/* ---------------------------------------------------------------- input */

static void key_down(const SDL_KeyboardEvent *k)
{
    static const struct { SDL_Keycode key; int code; } map[] = {
        { SDLK_RETURN, 13 }, { SDLK_KP_ENTER, 13 }, { SDLK_BACKSPACE, 8 }, { SDLK_ESCAPE, 27 },
        { SDLK_TAB, 9 },
        /* extended keys: 0, then the scan code */
        { SDLK_UP, 0x4800 }, { SDLK_DOWN, 0x5000 }, { SDLK_LEFT, 0x4b00 }, { SDLK_RIGHT, 0x4d00 },
        { SDLK_HOME, 0x4700 }, { SDLK_END, 0x4f00 }, { SDLK_PAGEUP, 0x4900 }, { SDLK_PAGEDOWN, 0x5100 },
        { SDLK_INSERT, 0x5200 }, { SDLK_DELETE, 0x5300 },
        { SDLK_F1, 0x3b00 }, { SDLK_F2, 0x3c00 }, { SDLK_F3, 0x3d00 }, { SDLK_F4, 0x3e00 },
        { SDLK_F5, 0x3f00 }, { SDLK_F6, 0x4000 }, { SDLK_F7, 0x4100 }, { SDLK_F8, 0x4200 },
        { SDLK_F9, 0x4300 }, { SDLK_F10, 0x4400 },
    };
    size_t i;

    for (i = 0; i < sizeof(map) / sizeof(map[0]); i++)
        if (k->key == map[i].key) {
            if (map[i].code > 0xff) {
                key_push(0);
                key_push(map[i].code >> 8);
            } else
                key_push(map[i].code);
            return;
        }
    if ((k->mod & SDL_KMOD_CTRL) && k->key >= 'a' && k->key <= 'z')
        key_push(k->key - 'a' + 1);
}

static void test_scripts(void)
{
    static const char *clicks, *typing;
    static int init;
    static uint64_t release_at;
    uint64_t now = SDL_GetTicks();
    unsigned at;
    int x, y, used;

    if (!init) {
        clicks = getenv("CM_TEST_CLICKS");
        typing = getenv("CM_TEST_KEYS");
        init = 1;
    }
    if (release_at && now >= release_at) {
        mouse_buttons &= ~1;
        release_at = 0;
    }
    if (clicks && *clicks && !release_at && sscanf(clicks, "%d,%d@%u%n", &x, &y, &at, &used) == 3 && now >= at) {
        mouse_x = x * 2;
        mouse_y = y;
        mouse_buttons |= 1;
        mouse_pressed |= 1;
        release_at = now + 80;
        fprintf(stderr, "[TEST] click %d,%d at %u ms\n", x, y, (unsigned)now);
        clicks += used;
        if (*clicks == ';')
            clicks++;
    }
    if (typing && *typing && sscanf(typing, "%u:%n", &at, &used) == 1 && now >= at) {
        const char *t = typing + used;
        fprintf(stderr, "[TEST] typing at %u ms\n", (unsigned)now);
        for (; *t && *t != ';'; t++)
            key_push(*t == '^' ? 13 : (unsigned char)*t);
        typing = *t ? t + 1 : t;
    }
}

void port_pump(void)
{
    SDL_Event e;
    uint64_t now;

    if (renderer == NULL)               /* after restore_system: nothing to show */
        return;
    while (SDL_PollEvent(&e)) {
        SDL_ConvertEventToRenderCoordinates(renderer, &e);
        switch (e.type) {
        case SDL_EVENT_QUIT:
            shutdown_video();
            exit(0);
        case SDL_EVENT_MOUSE_MOTION:
            mouse_x = (int16_t)SDL_clamp(e.motion.x, 0, 319) * 2;
            mouse_y = (int16_t)SDL_clamp(e.motion.y * 200 / logical_h, 0, 199);
            break;
        case SDL_EVENT_MOUSE_BUTTON_DOWN:
        case SDL_EVENT_MOUSE_BUTTON_UP: {
            int bit = e.button.button == SDL_BUTTON_LEFT ? 1 : e.button.button == SDL_BUTTON_RIGHT ? 2 : 4;
            if (e.type == SDL_EVENT_MOUSE_BUTTON_DOWN) {
                mouse_buttons |= bit;
                mouse_pressed |= bit;
            } else
                mouse_buttons &= ~bit;
            break;
        }
        case SDL_EVENT_KEY_DOWN:
            key_down(&e.key);
            break;
        case SDL_EVENT_TEXT_INPUT: {
            const unsigned char *t = (const unsigned char *)e.text.text;
            for (; *t; t++)
                if (*t >= 32 && *t < 127)
                    key_push(*t);
            break;
        }
        }
    }
    test_scripts();
    now = SDL_GetTicks();
    if (now - last_present >= 16) {
        present();
        last_present = now;
    }
    /* the game waits by polling: let the CPU rest when it spins */
    if (now != spin_ms) {
        spin_ms = now;
        spin_count = 0;
    } else if (++spin_count > 200) {
        SDL_Delay(1);
        spin_count = 0;
    }
}

int16_t kbhit(void)
{
    port_pump();
    return key_head != key_tail;
}

int16_t getch(void)
{
    int code;

    while (key_head == key_tail) {
        port_pump();
        SDL_Delay(1);
    }
    code = keys[key_head];
    key_head = (key_head + 1) % 64;
    return code;
}

/* ---------------------------------------------------------------- the clock */

static uint64_t midnight_ms;            /* SDL ticks at the last midnight */

void _bios_timeofday(int16_t cmd, int32_t *ticks)
{
    uint64_t ms;

    (void)cmd;
    port_pump();
    ms = SDL_GetTicks() - midnight_ms;
    if (ms >= 86400000u) {              /* the BIOS starts again from 0 at midnight */
        midnight_ms += 86400000u;
        ms -= 86400000u;
    }
    *ticks = (int32_t)(ms * 1193180 / 65536 / 1000);
}

/* ---------------------------------------------------------------- start-up */

void port_platform_init(void)
{
    time_t t = time(NULL);
    struct tm *lt = localtime(&t);
    const char *sq = getenv("CM_SQUARE_PIXELS");

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        exit(1);
    }
    if (sq && *sq && *sq != '0')
        logical_h = 200;
    if (!SDL_CreateWindowAndRenderer("Championship Manager", 320 * 3, logical_h * 3, SDL_WINDOW_RESIZABLE,
                                     &window, &renderer)) {
        fprintf(stderr, "SDL_CreateWindowAndRenderer: %s\n", SDL_GetError());
        exit(1);
    }
    SDL_SetRenderLogicalPresentation(renderer, 320, logical_h, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_SetRenderVSync(renderer, 0);
    texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_XRGB8888, SDL_TEXTUREACCESS_STREAMING, 320, 200);
    SDL_SetTextureScaleMode(texture, logical_h == 200 ? SDL_SCALEMODE_NEAREST : SDL_SCALEMODE_LINEAR);
    SDL_HideCursor();
    SDL_StartTextInput(window);
    dump_dir = getenv("CM_DUMP_FRAMES");
    midnight_ms = 0;
    if (lt)                             /* the clock counts from midnight, as the BIOS does */
        midnight_ms = (uint64_t)0 - (uint64_t)(lt->tm_hour * 3600 + lt->tm_min * 60 + lt->tm_sec) * 1000;
}
