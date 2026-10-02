# Championship Manager 94 (End of Season Edition)

Build from your copy of the game (the directory with `CMEXE.EXE`, `ADLIB.DRV`,
`LEAGUE.DAT`, `PLHIST`, `CLRECS`, `*.LBM`, ...):

```bash
make -j$(nproc) GAME_DIR=/path/to/cmese
make run GAME_DIR=/path/to/cmese               # AdLib music; ARGS=n for no sound
```

- `CMEXE.EXE` is a Borland C program with VROOMM overlays, like CM93. `ADLIB.DRV` is
  byte-identical to CM93's.
- About 1 120 functions and 123 000 instructions, all found from the entry point plus
  the pointer-only entries in `entries.txt`.
- The start-up heap fix finds the heap words at `DS:0086`/`DS:008A` (`DS:0089`/`DS:008D`
  in CM1 and CM93).
- The C runtime detects the CPU from the FLAGS register (`1000:2491`, result in
  `DS:D56C`) and has 386 paths (`pushad`, 32-bit registers) that the translator cannot
  decode. The emulated FLAGS always read bits 12-15 as set, so the game sees an 8086 and
  never takes them. They translate to `rc_fatal("undecodable code ...")`.
- The copy protection comes after choosing **Quick Start**, **New Game** or **Continue
  Season**, not at start-up. The answer is a match result; the dash is inserted by the
  game, and no Enter is needed. On success the game returns to the main menu and the
  next choice goes through.

Scripted headless run: title → protection (page 13, match 1: 3-0) → Quick Start →
Default save → Printer Off → manager name → Saturday Fixtures → squad → match:

```bash
CLK="160,100@3000;160,100@6000;240,63@11000;240,63@19000;80,67@21000;240,43@23000;80,55@29000"
for t in $(seq 32000 3000 44000); do CLK="$CLK;160,195@$t"; done
CLK="$CLK;85,178@47000"
cd /path/to/cmese && SDL_VIDEODRIVER=offscreen SDL_AUDIODRIVER=dummy \
  CM_TEST_CLICKS="$CLK" CM_TEST_KEYS="15000:3;15600:0;25000:Test^;27000:Player^" \
  CM_DUMP_FRAMES=/tmp/frames timeout 70 /path/to/cm-recomp/games/cmese/cmese_rc
```
The protection question was the same (page 13, match 1) in every run so far.

## Mods

Changes to the game's behaviour, in [src/mods.c](src/mods.c). They are on by default, and
can be changed while the game runs from the F12 overlay, which saves them to `rc_mods.ini`
in the game directory. The variables below override that file.

| Mod | Variable | Effect |
|---|---|---|
| Fast Latest Results | `CM_FAST_RESULTS=0` turns it off | The evening's results are typed one character at a time, about 18 a second (20 s for one screen). The mod draws each line at once and pauses `CM_RESULTS_LINE_MS` ms after it (default 150; 0 for no pause, but then the screen scrolls past faster than it can be read) |
| Wait after Latest Results | `CM_RESULTS_WAIT=0` turns it off | Once all of a match day's results are shown, the Latest Results screen stays up until a mouse click, instead of moving on by itself |
| Fast match | `CM_FAST_MATCH=0` turns it off | The match clock and the pauses after each commentary line, goal, card, injury and substitution are `CM_MATCH_SPEED` times shorter (default 4; 1 is the original speed). At the original speed the clock alone takes 40 s |

They are the same mods as in CM93, at the addresses of the same functions in this build (see the comments in `src/mods.c`).
