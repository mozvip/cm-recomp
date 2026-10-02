# Championship Manager Italia

Build from your copy of the game (the directory with `CM.EXE`, `LEAGUE.DAT`, `PLHIST`,
`CLRECS`, `*.LBM`, ...):

```bash
make -j$(nproc) GAME_DIR=/path/to/cmitalia
make run GAME_DIR=/path/to/cmitalia ARGS=n
```

- The build uses `CM.EXE`: the original executable, `CM.EX_`, with the copy protection
  check patched out (`b8e8:20b3`, `push bp` -> `retf`). The matching decompilation in
  `decomp/` works on `CM.EX_`.
- The game has no sound driver in this release: run it with `n` (no sound).
- `CM.EXE` is of the CM93 family (Borland C++ 3.0 runtime, TLINK 5.0, VROOMM overlays,
  linked 10 Nov 1993 as `CMANITA.EXE`). About 1 080 functions and 139 000 instructions,
  all found from the entry point plus the pointer-only entries in `entries.txt` (the same
  runtime entries as CM93's, found with `tools/discover.sh`).
- The recompiler reports a few "errors" in segment 1000: the Borland startup code's data
  at `1000:0269` decoded as instructions, as in the other games. They are harmless.

Scripted headless run (title -> new game -> season, about 40 s):

```bash
CLK="160,100@3000;160,100@6000;60,63@9500;84,183@11000;250,43@13000;84,183@14500;60,43@17000;84,183@18500;60,43@21000;84,183@22500"
for t in $(seq 26000 2500 40000); do CLK="$CLK;160,190@$t"; done
cd /path/to/cmitalia && SDL_VIDEODRIVER=offscreen SDL_AUDIODRIVER=dummy \
  CM_TEST_CLICKS="$CLK" CM_DUMP_FRAMES=/tmp/frames \
  timeout 42 /path/to/cm-recomp/games/cmitalia/cmitalia_rc n
```
It reaches the Italian Cup first round fixtures.
