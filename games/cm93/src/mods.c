/* Championship Manager 93: gameplay mods. These change the game's behaviour on purpose, so
 * they are plain wrappers around the translation, not RC_REPLACE replacements. They can be
 * switched while the game runs (F12, see runtime/mod.h), so they read their settings on
 * every call. */
#include "hand.h"
#include "mod.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* ---- Fast "Latest Results" ----
 * void delay(int n) (1bd3:0dbc) busy-waits until the BIOS tick count x 11 has advanced by 4n,
 * i.e. about 20n ms, rounded up to the next 55 ms timer tick.
 *
 * The Latest Results screen prints the evening's results as they come in, with 7c74:0769
 * printing each line one character at a time and calling delay(1) after every character
 * (return address 7c74:08a5). That is about 18 characters a second, or 20 s for one screen.
 * The screen scrolls and then moves on by itself, so the lines cannot all be printed at once:
 * they would scroll past unseen. The mod draws each line at once and pauses only after its
 * last character, for CM_RESULTS_LINE_MS milliseconds (default 150, 0 for no pause). Every
 * other delay in the game is kept. CM_FAST_RESULTS=0 restores the original speed. */
#define RESULTS_CHAR_RET_IP 0x08a5
#define RESULTS_CHAR_RET_CS 0x7c74
#define RESULTS_CHAR_INDEX 0xdd48 /* DS: 1-based index of the character just printed */

static rc_mod_setting fast_results_settings[] = {
    { .key = "line_ms", .label = "Pause after each line", .env = "CM_RESULTS_LINE_MS",
      .value = 150, .min = 0, .max = 1000, .format = "%d ms" },
};
static rc_mod fast_results = {
    .key = "fast_results", .name = "Fast Latest Results",
    .desc = "Draws each result line at once instead of one character at a time, then pauses.",
    .env = "CM_FAST_RESULTS", .on = 1, .settings = fast_results_settings, .nsettings = 1,
};
RC_MOD_REGISTER(fast_results)

void f_1bd3_0dbc_orig(void);

void f_1bd3_0dbc(void)
{
    if (fast_results.on && RW(cpu.ss, cpu.sp) == RESULTS_CHAR_RET_IP &&
        RW(cpu.ss, (uint16_t)(cpu.sp + 2)) == RESULTS_CHAR_RET_CS) {
        /* the caller's frame: void print_line(char instant, char far *line) */
        rc_ptr line = { RW(cpu.ss, (uint16_t)(cpu.bp + 0xa)), RW(cpu.ss, (uint16_t)(cpu.bp + 8)) };
        uint16_t len = 0, line_n = (uint16_t)((fast_results_settings[0].value + 19) / 20); /* 20 ms units */
        while (PTR_RB(line, len))
            len++;
        if (line_n == 0 || RW(cpu.ds, RESULTS_CHAR_INDEX) < len) {
            RET_FAR();
            return;
        }
        /* last character: wait once for the whole line (the caller pops the argument) */
        WW(cpu.ss, (uint16_t)(cpu.sp + 4), line_n);
    }
    if (getenv("CM_DEBUG_DELAY")) fprintf(stderr, "[DELAY] %04x:%04x n=%d\n", RW(cpu.ss, (uint16_t)(cpu.sp + 2)), RW(cpu.ss, cpu.sp), RW(cpu.ss, (uint16_t)(cpu.sp + 4)));
    f_1bd3_0dbc_orig();
}

/* ---- Wait for a click after the Latest Results ----
 * 7c74:00eb plays one match day and prints its results on the Latest Results screen, then
 * returns and the game moves on by itself. The mod waits for a mouse click once the last
 * result is shown, if the screen showed any (DS:dc78, the next line to print, is set to 1 at
 * the start). The wait uses the game's own mouse poll, 1bd3:0c16, which returns the buttons
 * pressed since the last poll in AX; a click made while the results were still printing is
 * dropped. CM_RESULTS_WAIT=0 turns it off. */
#define RESULTS_NEXT_LINE 0xdc78

static rc_mod results_wait = {
    .key = "results_wait", .name = "Wait after Latest Results",
    .desc = "Keeps the Latest Results screen up until a mouse click once all results are shown.",
    .env = "CM_RESULTS_WAIT", .on = 1,
};
RC_MOD_REGISTER(results_wait)

void f_7c74_00eb_orig(void);
void f_1bd3_0c16(void);

static uint16_t mouse_clicks(void)
{
    CALLF(0x1bd3, 0, f_1bd3_0c16());
    return cpu.ax;
}

void f_7c74_00eb(void)
{
    {
        static int day;
        void f_9e77_2c88(void);
        if (getenv("CM_DEBUG_LOAD") && ++day == 1) {
            fprintf(stderr, "[DEBUG] loading\n");
            PUSH(0); CALLF(0x9e77, 0, f_9e77_2c88()); POP();
            return;
        }
    }
    f_7c74_00eb_orig();
    if (results_wait.on && RW(cpu.ds, RESULTS_NEXT_LINE) > 1) {
        mouse_clicks();
        while (!mouse_clicks())
            POLL();
    }
}
