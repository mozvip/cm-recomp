# The native ports' platform

The layer the native ports of the decompiled games run on, in place of the DOS machine:
DOS and the Borland C library where Linux differs, the BIOS, the VGA in mode 13h, the
mouse driver, the keyboard, the clock, and the games' assembly modules rewritten in C.
It is shared by:

| Game | Port |
|---|---|
| Championship Manager (1992) | [games/cm1/port](../games/cm1/port/README.md) |
| Championship Manager 93 | [games/cm93/port](../games/cm93/port/README.md) |
| Championship Manager 94 (End of Season Edition) | [games/cmese/port](../games/cmese/port/README.md) |

How the 16-bit sources are made to run natively (types, the original data segments kept
as one block, near and far pointer tables) is described in
[CM1's README](../games/cm1/port/README.md#how-the-16-bit-code-runs-natively); CM93's
and CM94's follow the same rules.

## Keys every port has

Not keys of the original games; `sdl.c` takes them before the game sees them, so every
port has them:

| Key | |
|---|---|
| F11 | Window or full screen |
| `+`, `-` | During a match: the game's speed, from x1/4 to x16 (shown in the window's title when not x1), kept for the next match. The games time everything from the BIOS clock, and the port runs that clock faster or slower. Either keyboard row, any layout. Outside matches the clock runs at x1 and `+` and `-` are typed as usual |
| Mouse click | While the week's "Latest Results" are typed out a letter at a time: the rest of them show at once, without the delay (the games' `port:` change to their results printer: CM1 `print_results_line`, CM93 `f_7c74_0769`, CM94 `f_829f_06d0`) |

The game says when a match starts and ends: its sources call `port_speed_control(1)` and
`port_speed_control(0)` around the match (CM1 `play_match`, CM93 `f_7c74_2043`, CM94
`f_829f_1ef0`, all in the week's matches loop).

## Files

| File | Content |
|---|---|
| `port.h` | Included by every game source in place of the Borland headers; includes the game's `game.h` first |
| `main.c` | Start-up: options, the data segments, the machine, then the game's `main()`, renamed `game_main` |
| `image.c` | Loads the original data segments (`port_image`) from the files `tools/port/extract.py` cut out of the executable |
| `sdl.c` | VGA mode 13h, mouse driver (INT 33h), BIOS keyboard and clock, on SDL3; scripted clicks, typing and frame dumps for tests |
| `dos.c` | DOS and Borland library: file names in any case, `rand`, `strcpy`, `stricmp`, the printer (`PRINTER.TXT`) |
| `keyboard.c` | The keyboard driver (CM1 `14B7.ASM`, CM93 `1DFE.ASM`, CM94 `238C.ASM`): not needed, there is always a mouse |
| `ems.c` | The EMS library (CM1 `1A51.ASM`, CM93 `1E19.ASM`, CM94 `23A7.ASM`): plain memory |
| `music.c` | The music driver interface (CM1 `1AB2.ASM`, CM93 `1DF8.ASM`, CM94 `2385.ASM`): silent for now |
| `gfx.c` | The line drawing (CM1 `1AB9.ASM`, CM93 `1D79.ASM`, CM94 `2306.ASM`), pixel for pixel; the EGA's planar primitives are empty |
| `ilbm.c` | The `.LBM` picture decoder (CM1 `1B05.ASM`, CM93 `1DC5.ASM`, CM94 `2352.ASM`) |

The games' assembly modules are the same code in CM1, CM93 and CM94 (byte for byte,
apart from addresses), so one C version of each serves all three. Their functions and
data go by CM1's names (`../games/cm1/names.txt`); a game that names them otherwise maps
the names in its `game.h` (CM93's and CM94's sources still use `f_SSSS_OOOO` /
`d_SSSS_OOOO`).

## What a game provides

A game's port directory (`games/<game>/port`) holds its converted sources (`src/`), its
`segments.txt` (the data segments of its executable, for `tools/port/extract.py` and
`tools/port/mkdata.py`), its `meson.build`, and `game.h`, which defines:

| Macro | |
|---|---|
| `GAME_TITLE` | The window's title |
| `GAME_EXE`, `GAME_VERSION` | The executable the data comes from, and its version, for messages |
| `GAME_ENV` | The prefix of the environment variables: `<GAME_ENV>_DIR` (the game's directory), `<GAME_ENV>_DATA` (the data directory) |
| `GAME_ARGS` | The game's own argument, for the usage line |
| `GAME_FILE` | A file of the game, checked for in its directory before it starts (the game does not check that its files open) |
| `IMAGE_START`, `IMAGE_END`, `DGROUP_SEG` | The extent of `port_image` in the executable's load image (file numbering: the first far data segment, the end of DGROUP) and DGROUP's segment |
| platform names | Optional: `#define draw_line_vga256 f_1d79_0006`... when the game's names for the assembly modules' symbols are not CM1's |

`meson.build` compiles the game's sources with the files above, and gives
`tools/port/mkdata.py` the same `IMAGE_START`/`IMAGE_END`.
