# Championship Manager Italia 95

Build from your copy of the game (the directory with `CM.EXE`, `LEAGUE.DAT`, `PLHIST`,
`CLRECS`, `*.LBM`, ...):

```bash
make -j$(nproc) GAME_DIR=/path/to/cmita95
make run GAME_DIR=/path/to/cmita95
```

- Version `v5.3i`, 1994/95 season. `CM.EXE` is linked as `cmanita.exe`, like CM Italia,
  but with TLINK 6.1 and the Borland C++ 4.0x runtime ("Copyright 1993"): the CM94
  toolchain, not CM Italia's Borland C++ 3.0. VROOMM overlays.
- The `CM.EXE` used here is already cracked: `CRACK.COM` (shipped with this copy)
  changes one byte at file offset `0xad600`, `75` (`jnz`) -> `EB` (`jmp`). The copy
  protection screen still appears, but any answer is accepted. The unpatched original
  would have `75` there.
- The game has no sound driver in this release, so `hooks.c` makes `n` (no sound) the
  default command line.
- About 1 130 functions and 123 000 instructions, all found from the entry point plus
  the pointer-only entries in `entries.txt`: those found with `tools/discover.sh`, and
  the Borland runtime vectors at `DS:D542`-`D550` (`1000:8731` is `jmp [D542]`, printf's
  floating-point formatting at `1000:0600`; the others are scanf's float helpers and the
  "not linked" message stubs).
- The recompiler reports 3 "errors", the same as CM94's: the C runtime detects the CPU
  from the FLAGS register (`1000:2491`, result in `DS:D16C`) and has 386 paths (`pushad`,
  `pop fs`/`gs`) at `1000:24bd` and in `1000:60f3` that the translator cannot decode.
  The emulated FLAGS make the game see an older CPU, so it never takes those paths. They
  translate to `rc_fatal("undecodable code ...")`.
- New Game goes through a **Multi-Save** screen (pick a save slot) and a **Printer
  Option** screen before the player choice.

Scripted headless run: title -> protection (any answer) -> New Game -> Default save ->
Printer Off -> 1994/95 Players -> Demo Game -> preseason -> season (about 50 s):

```bash
CLK="160,100@10000;60,63@14000;84,183@15500;50,66@17500;250,43@19500;84,183@21000;60,43@23500;84,183@25000;60,43@27500;84,183@29000"
for t in $(seq 32000 2500 50000); do CLK="$CLK;160,190@$t"; done
cd /path/to/cmita95 && SDL_VIDEODRIVER=offscreen SDL_AUDIODRIVER=dummy \
  CM_TEST_KEYS="7000:1-0^" CM_TEST_CLICKS="$CLK" CM_DUMP_FRAMES=/tmp/frames \
  timeout 52 /path/to/cm-recomp/games/cmita95/cmita95_rc
```
It reaches the Italian Cup 1st round results and the 2nd round fixtures. The game writes
its saves (`SVGAME`, `VM.$$$`, ...) in the game directory: run it on a copy.
