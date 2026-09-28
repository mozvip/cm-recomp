# Championship Manager 94 (End of Season Edition)

Build from your copy of the game (the directory with `CMEXE.EXE`, `ADLIB.DRV`,
`LEAGUE.DAT`, `PLHIST`, `CLRECS`, `*.LBM`, ...):

```bash
make -j$(nproc) GAME_DIR=/path/to/cm94
make run GAME_DIR=/path/to/cm94               # AdLib music; ARGS=n for no sound
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
cd /path/to/cm94 && SDL_VIDEODRIVER=offscreen SDL_AUDIODRIVER=dummy \
  CM_TEST_CLICKS="$CLK" CM_TEST_KEYS="15000:3;15600:0;25000:Test^;27000:Player^" \
  CM_DUMP_FRAMES=/tmp/frames timeout 70 /path/to/cm-recomp/games/cm94/cm94_rc
```
The protection question was the same (page 13, match 1) in every run so far.
