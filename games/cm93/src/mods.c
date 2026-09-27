/* Championship Manager 93: gameplay mods. These change the game's behaviour on purpose, so
 * they are plain wrappers around the translation, not RC_REPLACE replacements. */
#include "hand.h"
#include <stdlib.h>
#include <string.h>

/* on unless the variable is set to 0 */
static int mod_enabled(const char *var)
{
    const char *e = getenv(var);
    return !e || strcmp(e, "0") != 0;
}

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

void f_1bd3_0dbc_orig(void);

void f_1bd3_0dbc(void)
{
    static int fast = -1, line_n;
    if (fast < 0) {
        const char *ms = getenv("CM_RESULTS_LINE_MS");
        fast = mod_enabled("CM_FAST_RESULTS");
        line_n = ms ? (atoi(ms) + 19) / 20 : 8; /* delay() counts in 20 ms units */
        if (line_n < 0)
            line_n = 0;
    }
    if (fast && RW(cpu.ss, cpu.sp) == RESULTS_CHAR_RET_IP &&
        RW(cpu.ss, (uint16_t)(cpu.sp + 2)) == RESULTS_CHAR_RET_CS) {
        /* the caller's frame: void print_line(char instant, char far *line) */
        rc_ptr line = { RW(cpu.ss, (uint16_t)(cpu.bp + 0xa)), RW(cpu.ss, (uint16_t)(cpu.bp + 8)) };
        uint16_t len = 0;
        while (PTR_RB(line, len))
            len++;
        if (line_n == 0 || RW(cpu.ds, RESULTS_CHAR_INDEX) < len) {
            RET_FAR();
            return;
        }
        /* last character: wait once for the whole line (the caller pops the argument) */
        WW(cpu.ss, (uint16_t)(cpu.sp + 4), (uint16_t)line_n);
    }
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

void f_7c74_00eb_orig(void);
void f_1bd3_0c16(void);

static uint16_t mouse_clicks(void)
{
    CALLF(0x1bd3, 0, f_1bd3_0c16());
    return cpu.ax;
}

void f_7c74_00eb(void)
{
    static int wait = -1;
    if (wait < 0)
        wait = mod_enabled("CM_RESULTS_WAIT");
    f_7c74_00eb_orig();
    if (wait && RW(cpu.ds, RESULTS_NEXT_LINE) > 1) {
        mouse_clicks();
        while (!mouse_clicks())
            POLL();
    }
}
