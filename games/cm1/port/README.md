# Championship Manager (1992): native port

The matching decompilation (`../decomp/src`) rebuilt as a native Linux program with
SDL3. The decompiled sources are left as they are: `src/` holds a copy, converted and
then edited by hand to compile with GCC/Clang on a 64-bit machine. `platform/` replaces
the DOS machine and the five assembly modules.

**No game files are included.** The build needs none. At run time the game's directory
must hold your copy of the game, `EUROPE.EXE` included: the port reads its data segments
from it (see "Data" below).

## Building and running

Needs meson, ninja, a C compiler, Python 3 and SDL3 (`pkg-config sdl3`).

```bash
make -C games/cm1/port                         # or: meson setup build && meson compile -C build
make -C games/cm1/port run GAME_DIR=/path/to/champman
games/cm1/port/build/cm1 -g /path/to/champman  # -g: the game's directory (default: the current one, or $CM1_DIR)
```

| Environment | |
|---|---|
| `CM_SQUARE_PIXELS=1` | 320x200 as it is (default: stretched to 4:3, as a CRT showed it) |
| `CM_TEST_CLICKS`, `CM_TEST_KEYS`, `CM_DUMP_FRAMES` | Scripted clicks and typing, and frame dumps, as for the recompiled build (`../README.md`) |

Printing goes to `PRINTER.TXT` in the game's directory. As in the original, a new game
(the demo too) rewrites `RECORDS`, `HISTORY` and `MATCHFAX`. Test in a copy of the game's
directory.

Status: title, protection screen (any answer: this copy has the check patched out), new
game, demo seasons, loading an original `SAVEGAME`. The music is silent (see below). VGA
only.

## Layout

| Path | Content |
|---|---|
| `src/*.c` | The game's 13 C modules, from `../decomp/src/*.C` |
| `platform/port.h` | Included by every source in place of the Borland headers |
| `platform/main.c`, `image.c` | Start-up; the original data segments, loaded from `EUROPE.EXE` |
| `platform/sdl.c` | VGA mode 13h, mouse driver, keyboard, BIOS clock, on SDL3 |
| `platform/dos.c` | DOS and Borland library: file names in any case, `rand`, `strcpy`, the printer |
| `platform/14b7_keyboard.c` ... `1b05_ilbm.c` | The assembly modules, in C |
| `../../../tools/port/convert.py` | The mechanical first pass from `decomp/src` to `src` |
| `../../../tools/port/mkdata.py` | Generates the data symbols at build time |

## How the 16-bit code runs natively

**Types.** `int` was 16 bits and `long` 32. `convert.py` rewrites every `int` as
`int16_t`, `unsigned` as `uint16_t` and `long` as `int32_t`, drops `far`/`near`/`huge`, the
`L` suffixes, and the `l` of `%ld`. Structures are packed (`#pragma pack(1)`, at the end of
`port.h`). Every variable keeps its size, and so do the savegame, `RECORDS` and `HISTORY`:
the game reads and writes them as raw memory.

**Data.** Only a module's initialised `_DATA` is in C. `_BSS` and the far data segments
come from the original executable (the matching build links them as blobs). The code
also relies on how they are laid out: `team_stats[][82]` runs on into `ground_capacity`,
the savegame is read in blocks that span several arrays. So the port keeps them as they
were. `port_image` is the executable's load image from the first far data segment to the
end of DGROUP (0x48a90 bytes), copied from `EUROPE.EXE` at start-up. `mkdata.py` places
every data symbol of `../names.txt`, and every `d_SSSS_OOOO` the sources use, at its
original offset in it, as weak symbols (`build/data_symbols.S`). A definition in C (a
module's initialised data, a platform variable) takes precedence.

**Pointers in the data.** Tables of pointers stay as the original stored them:
`team_names` and the other names of teams are 16-bit DGROUP offsets (`nearptr`, read
through `NEAR_PTR()`); `first_names`, `country_names`... are segment:offset (`farptr`,
`FAR_PTR()`). The savegame holds `team_names` as it is, so original saves load.
Pointer variables (vm_map's results, `screen_buffer`...) get native storage outside the
image (`build/data_native.c`). They start pointing at a scratch "page zero", because the
game writes through some of them before it sets them (DOS's null far pointer was writable
memory).

**Hand-written changes** in `src/`, each marked `port:` or explained where it is made:

- `14d2.c`: the BIOS video, mouse and palette calls; `present_screen*` without assembly;
  the patched-out protection check without its NOPs; the virtual memory slots made native.
- `a1c3.c`, `992a.c`: setting the palette (INT 10h AX=1012h); the order in which Borland
  evaluates arguments (right to left) where it matters.
- `144e.c`: `main` is `game_main` (`platform/main.c` calls it); `history_file` is a `FILE *`.
- `7555.c`, `7a28.c`: two functions that had no prototype get one; `(j = x) * j` keeps
  Borland's order and its 16-bit product.
- `67ee.c`: two menu labels that the game rewrites are writable strings (Borland's literals were).

**Borland behaviour kept**: `rand()` (15 bits, the game divides it by 32767.0),
`strcpy`/`strcat` copying forwards (the game shifts strings within themselves), file
names in any case. The build adds `-fwrapv -fno-strict-aliasing
-fno-aggressive-loop-optimizations` (the code indexes rows past their end into the next).

**Not the same as DOS**: arithmetic on 16-bit values is done in 32 bits before it is
stored back, so an intermediate that overflowed 16 bits on DOS no longer wraps
(`(int16_t)` casts restore it where it was found to matter). Floating point uses SSE,
not the x87, so a few last-bit roundings can differ.

## Not done yet

- **Music.** `ADLIB.DRV`/`MT32.DRV` are real-mode drivers called through INT 91h.
  `platform/1ab2_music.c` is silent. The recompiled build plays them (`../../../runtime`).
  A native player for `CMAN2.ALB` and an OPL emulator would be needed here.
- **EGA.** The planar mode's primitives are empty: the port always runs in VGA mode.
- **Other games.** `tools/port` is not specific to CM1. CM93 and the Italian versions
  share most of its modules (see `../../../DECOMPILATION.md`), but each needs its own
  `IMAGE_START`/`IMAGE_END` and near/far tables.

## Regenerating `src/`

`src/` is maintained by hand from now on. To start again from the decompilation (after
large changes there), convert it again and redo the hand-written changes listed above:

```bash
NEAR=team_names,foreign_team_names,nonleague_names_from80,nonleague_names_by_team
FAR=position_names,country_names,first_names,surnames,injury_names,character_names,style_names,number_words_base,season_end_step_names
for f in games/cm1/decomp/src/*.C; do b=$(basename $f .C)
  python3 tools/port/convert.py $f games/cm1/port/src/$(echo $b | tr A-Z a-z).c \
    --near $NEAR --far $FAR --origin decomp/src/$b.C
done
```
