# Championship Manager (1992)

Build from your copy of the game (the directory with `EUROPE.EXE`, `ADLIB.DRV`,
`HISTORY`, `MATCHFAX`, `RECORDS`, `*.LBM`, ...):

```bash
make -j$(nproc) GAME_DIR=/path/to/champman
make run GAME_DIR=/path/to/champman            # AdLib music; ARGS=n for no sound
```

- `EUROPE.EXE` has 10 VROOMM overlays; they are flattened at build time.
- `entries.txt` lists entry points only reachable through pointers. Some were found by
  running the game, others come from an earlier Ghidra analysis of the executable.
- DOS sees the program as `C:\EUROPE.EXE`; the overlay manager opens it at start-up,
  so it must be in the game directory.

Scripted headless run through a demo game (title → protection → menus → season):

```bash
CLK="160,100@6000;60,43@9500;60,43@11500;60,43@13500;60,43@15500"
for t in $(seq 18000 2500 60000); do CLK="$CLK;160,190@$t"; done
cd /path/to/champman && SDL_VIDEODRIVER=offscreen SDL_AUDIODRIVER=dummy \
  CM_TEST_CLICKS="$CLK" CM_TEST_KEYS="8000:ANSWER^" CM_DUMP_FRAMES=/tmp/frames \
  timeout 60 /path/to/cm-recomp/games/cm1/cm1_rc
```
Replace `ANSWER` with the answer to the protection question (from the box lid).
