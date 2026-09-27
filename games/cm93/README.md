# Championship Manager 93

Build from your copy of the game (the directory with `CMEXE.EXE`, `ADLIB.DRV`,
`LEAGUE.DAT`, `PLHIST`, `CLRECS`, `*.LBM`, ...):

```bash
make -j$(nproc) GAME_DIR=/path/to/cm93
make run GAME_DIR=/path/to/cm93               # AdLib music; ARGS=n for no sound
```

- `CMEXE.EXE` has 14 VROOMM overlays (10 835 fixups, 457 stub entries); they are
  flattened at build time into segments `60A9`..`AE31` (runtime `70A9`..`BE31`).
- About 1 080 functions and 136 000 instructions, all found from the entry point plus
  the pointer-only entries in `entries.txt`.
- It needs the same start-up heap fix as CM1, at the same addresses (`DS:0089`/`DS:008D`).
- A jump-table form specific to this game: a sparse `switch` on a 32-bit value.
- Every menu choice asks "Confirm Y/N"; the Y button is at (84,183).
- With a sound driver loaded the menus include Music options, which moves the buttons.
  The scripted run below is for `n` (no sound).

Scripted headless run through a demo game (title → protection → menus → season):

```bash
CLK="160,100@3000;160,100@6000;60,63@9500;84,183@11000;250,43@13000;84,183@14500;60,43@17000;84,183@18500;60,43@21000;84,183@22500"
for t in $(seq 26000 2500 90000); do CLK="$CLK;160,190@$t"; done
cd /path/to/cm93 && SDL_VIDEODRIVER=offscreen SDL_AUDIODRIVER=dummy \
  CM_TEST_CLICKS="$CLK" CM_TEST_KEYS="7500:123^" CM_DUMP_FRAMES=/tmp/frames \
  timeout 95 /path/to/cm-recomp/games/cm93/cm93_rc n
```
The protection screen asks for a match result from the manual; the keys given at 7.5 s
are typed as the answer.

## Mods

Changes to the game's behaviour, in [src/mods.c](src/mods.c). They are on by default.

| Mod | Variable | Effect |
|---|---|---|
| Fast Latest Results | `CM_FAST_RESULTS=0` turns it off | The evening's results are typed one character at a time, about 18 a second (20 s for one screen). The mod draws each line at once and pauses `CM_RESULTS_LINE_MS` ms after it (default 150; 0 for no pause, but then the screen scrolls past faster than it can be read) |
| Wait after Latest Results | `CM_RESULTS_WAIT=0` turns it off | Once all of a match day's results are shown, the Latest Results screen stays up until a mouse click, instead of moving on by itself |
