/* Championship Manager 94: gameplay mods. These change the game's behaviour on purpose, so
 * they are plain wrappers around the translation, not RC_REPLACE replacements. They can be
 * switched while the game runs (F12, see runtime/mod.h), so they read their settings on
 * every call. */
#include "hand.h"
#include "mod.h"
#include "rt.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
static unsigned tr_res, tr_match, tr_wait;

/* ---- Fast "Latest Results" ----
 * void delay(int n) (2162:0dfb) busy-waits until the BIOS tick count x 11 has advanced by 4n,
 * i.e. about 20n ms, rounded up to the next 55 ms timer tick.
 *
 * The Latest Results screen prints the evening's results as they come in, with 829f:06d0
 * printing each line one character at a time and calling delay(1) after every character
 * (return address 829f:07de). That is about 18 characters a second, or 20 s for one screen.
 * The screen scrolls and then moves on by itself, so the lines cannot all be printed at once:
 * they would scroll past unseen. The mod draws each line at once and pauses only after its
 * last character, for CM_RESULTS_LINE_MS milliseconds (default 150, 0 for no pause). Every
 * other delay in the game is kept. CM_FAST_RESULTS=0 restores the original speed. */
#define RESULTS_CHAR_RET_IP 0x07de
#define RESULTS_CHAR_RET_CS 0x829f
#define RESULTS_CHAR_INDEX 0xd9ea /* DS: 1-based index of the character just printed */

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

/* ---- Fast match ----
 * A match is paced by delay() too. The clock, 829f:2b04, moves on half a minute per call
 * and waits delay(9) each time (180 ms, 220 ms after rounding: 40 s for 90 minutes; holding
 * space or both mouse buttons already skips it). The commentary waits after each event:
 * delay(40..100) after a line and delay(100) after a goal in the match engine, 8773, and
 * delay(50..100) for the halves, injuries, cards and substitutions in 829f from 829f:1ef0
 * on. The mod divides these waits by CM_MATCH_SPEED (default 4; 1 is the original speed).
 * The other delays in 829f (the Latest Results screen, 829f:0000) are left alone.
 * CM_FAST_MATCH=0 turns it off. */
#define MATCH_ENGINE_CS 0x8773
#define MATCH_SCREEN_CS 0x829f
#define MATCH_SCREEN_FIRST_IP 0x1ef0

static rc_mod_setting fast_match_settings[] = {
    { .key = "speed", .label = "Speed", .env = "CM_MATCH_SPEED",
      .value = 4, .min = 1, .max = 20, .format = "x%d" },
};
static rc_mod fast_match = {
    .key = "fast_match", .name = "Fast match",
    .desc = "Speeds up the match clock and the pauses after the commentary.",
    .env = "CM_FAST_MATCH", .on = 1, .settings = fast_match_settings, .nsettings = 1,
};
RC_MOD_REGISTER(fast_match)

/* called from the match (the return address is on top of the stack) */
static int is_match_delay(void)
{
    uint16_t ip = RW(cpu.ss, cpu.sp), cs = RW(cpu.ss, (uint16_t)(cpu.sp + 2));
    return cs == MATCH_ENGINE_CS || (cs == MATCH_SCREEN_CS && ip >= MATCH_SCREEN_FIRST_IP);
}

void f_2162_0dfb_orig(void);

void f_2162_0dfb(void)
{
    fprintf(stderr, "TRACE delay n=%u from %04x:%04x\n", FAR_ARG(0), RW(cpu.ss, (uint16_t)(cpu.sp + 2)), RW(cpu.ss, cpu.sp));
    if (fast_results.on && RW(cpu.ss, cpu.sp) == RESULTS_CHAR_RET_IP &&
        RW(cpu.ss, (uint16_t)(cpu.sp + 2)) == RESULTS_CHAR_RET_CS) {
        /* the caller's frame: void print_line(char instant, char far *line) */
        rc_ptr line = { RW(cpu.ss, (uint16_t)(cpu.bp + 0xa)), RW(cpu.ss, (uint16_t)(cpu.bp + 8)) };
        uint16_t len = 0, line_n = (uint16_t)((fast_results_settings[0].value + 19) / 20); /* 20 ms units */
        while (PTR_RB(line, len))
            len++;
        if (!(tr_res++ % 50)) fprintf(stderr, "TRACE results char %u\n", tr_res);
        if (line_n == 0 || RW(cpu.ds, RESULTS_CHAR_INDEX) < len) {
            RET_FAR();
            return;
        }
        /* last character: wait once for the whole line (the caller pops the argument) */
        WW(cpu.ss, (uint16_t)(cpu.sp + 4), line_n);
    }
    if (fast_match.on && fast_match_settings[0].value > 1 && is_match_delay()) {
        /* delay(n) waits about 20n ms; wait on the host clock so short waits are not rounded
           up to a 55 ms timer tick */
        if (1) fprintf(stderr, "TRACE match delay %u n=%u from %04x:%04x\n", tr_match, FAR_ARG(0), RW(cpu.ss, (uint16_t)(cpu.sp + 2)), RW(cpu.ss, cpu.sp));
        uint32_t end = plat_ms() + (uint32_t)FAR_ARG(0) * 20 / (uint32_t)fast_match_settings[0].value;
        while ((int32_t)(plat_ms() - end) < 0)
            POLL();
        RET_FAR();
        return;
    }
    f_2162_0dfb_orig();
}

/* ---- Wait for a click after the Latest Results ----
 * 829f:00ba plays one match day and prints its results on the Latest Results screen, then
 * returns and the game moves on by itself. The mod waits for a mouse click once the last
 * result is shown, if the screen showed any (DS:daba, the next line to print, is set to 1 at
 * the start). The wait uses the game's own mouse poll, 2162:0c2b, which returns the buttons
 * pressed since the last poll in AX; a click made while the results were still printing is
 * dropped. CM_RESULTS_WAIT=0 turns it off. */
#define RESULTS_NEXT_LINE 0xdaba

static rc_mod results_wait = {
    .key = "results_wait", .name = "Wait after Latest Results",
    .desc = "Keeps the Latest Results screen up until a mouse click once all results are shown.",
    .env = "CM_RESULTS_WAIT", .on = 1,
};
RC_MOD_REGISTER(results_wait)

void f_829f_00ba_orig(void);
void f_2162_0c2b(void);

static uint16_t mouse_clicks(void)
{
    CALLF(0x2162, 0, f_2162_0c2b());
    return cpu.ax;
}

void f_829f_00ba(void)
{
    f_829f_00ba_orig();
    fprintf(stderr, "TRACE match day done, next line %u\n", RW(cpu.ds, RESULTS_NEXT_LINE));
    if (results_wait.on && RW(cpu.ds, RESULTS_NEXT_LINE) > 1) {
        mouse_clicks();
        while (!mouse_clicks())
            POLL();
    }
}
