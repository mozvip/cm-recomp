# Championship Manager Italia: native port

The matching decompilation (`../decomp/src`) rebuilt as a native Linux program with
SDL3, on the platform layer shared with the other games' ports
([`../../../port`](../../../port/README.md)). The decompiled sources are left as they are:
`src/` holds a copy, converted by `tools/port/convert.py` and then edited by hand. It
works as CM1's port does; see [its README](../../cm1/port/README.md#how-the-16-bit-code-runs-natively)
for how the 16-bit code runs natively. CM Italia is CM93's code, changed for the Italian
leagues and built with the same compiler, and each module of the port is CM93's port
module for module ([`../../cm93/port`](../../cm93/port/README.md)).

**No game files are included.** The port's data segments are extracted once from your
copy of `CM.EXE` (`make data`); at run time the game's directory must hold the rest of
the game (`*.LBM`, `LEAGUE.DAT`, `PLHIST`, `CLRECS`, `SVGAME`...), not `CM.EXE`.

## Building and running

Needs meson, ninja, a C compiler, Python 3 and SDL3 (`pkg-config sdl3`).

```bash
make -C games/cmitalia/port                                     # build/cmitalia
make -C games/cmitalia/port data GAME_DIR=/path/to/cmitalia     # CM.EXE's data -> build/data
make -C games/cmitalia/port run GAME_DIR=/path/to/cmitalia ARGS=n
games/cmitalia/port/build/cmitalia -g /path/to/cmitalia n       # -g: the game's directory (or $CMITALIA_DIR)
```

The data files are looked for in `data` next to the executable; `-d DATADIR` (or
`$CMITALIA_DATA`) names another directory. `CM.EXE` and the original `CM.EX_` have the
same data, and either will do. The argument is the game's own: `A` or `R` (AdLib,
Roland) for music, anything else for none. This release of the game has no music
drivers or music files, and the port's music is silent anyway (see
`../../../port/music.c`): run it with `n`.

F11 (full screen), + and - (match speed), a click to show the Latest Results at once,
`CM_SQUARE_PIXELS`, `CM_TEST_CLICKS`, `CM_TEST_KEYS` and `CM_DUMP_FRAMES` work as for
CM1. The scripted run of `../README.md` works with the port too (`-d` for the data, `n`
for no sound).

As in the original, a new game rewrites the game's files: test in a copy of its
directory.

Status: Intelek and title pictures, the menus, a demo game played through 30 weeks of
the season with the league and cup fixtures and results, loading the original `SVGAME`,
playing on from it, and saving it again (byte-identical). No protection screen (as
`CM.EXE`). VGA only, no music.

## Layout

| Path | Content |
|---|---|
| `src/*.c` | The game's 17 C modules, from `../decomp/src/*.C` |
| `game.h` | CM Italia for the platform: the executable, where its data segments are, its names for the assembly modules' symbols |
| `segments.txt` | The data segments of `CM.EXE`: where each goes, its size and CRC-32 |
| `../../../port/` | The platform: start-up, SDL3, DOS, and the five assembly modules (`1F04` ... `1FA5`) in C |

The sources keep the decompilation's names (`f_SSSS_OOOO`, `d_SSSS_OOOO`), and, as for
CM93, `meson.build` gives `tools/port/mkdata.py` no names file: the data symbols are
placed from the `d_SSSS_OOOO` the sources use.

`port_image` runs from `S18_DATA` (0x14010) to the end of DGROUP (0x5b34c). DGROUP is
segment 0x4d51 (runtime 0x5d51, as in the `d_5d51_` names). The overlay manager's tables
and stubs (0x4c650-0x4d510) have no file.

## Hand-written changes

Each is marked `port:` in `src/`, or explained where it is made. They are CM93's, in the
same places (CM93's module in brackets):

- `1d5e.c` (`1bd3.c`): the BIOS video, mouse and palette calls; the screen copies
  without assembly; the virtual memory slots (`d_5d51_dc08`) made native.
- `1446.c`: `main` is `game_main`; `d_5d51_0094` and `d_5d51_0098` (the open `PLHIST`,
  two of them where CM93 has one) are `FILE *`.
- `8119.c` (`8683.c`): `f_8119_16ae`, given with `__emit__` jumps in the decompilation,
  is the C they stand for.
- `76ea.c` (`7c74.c`): `f_76ea_4602` gets its prototype; `port_speed_control` around the
  match (`f_76ea_2010`) in the week's matches; a click shows the Latest Results at once
  (`f_76ea_074a`).
- `b8e8.c` (`be31.c`): the protection check returns at once, as `CM.EXE`'s patch makes
  it (`b8e8:20b3`, `push bp` -> `retf`); the decompilation is of the unpatched `CM.EX_`.
- `9182.c`, `a13d.c` (`96bb.c`, `a694.c`): copies of near pointers between tables copy
  the raw entries.
- `7c1d.c` (`817e.c`): `(x = ...) * x` keeps Borland's order and its 16-bit product;
  `a13d.c` (`a694.c`): `sprintf` arguments in Borland's order (right to left), where one
  assigns.
- `a7f0.c` (`ad38.c`): three formats end in a lone `%`, which Borland printed and glibc
  drops: `%%`.
- `struct flags_a` (player flags, in ten modules): without its `: 0` bit field, which BCC
  ignores at a byte boundary but GCC makes start the next field at the next 16-bit unit.
- `8119.c`: two writes one past the end of a row of `d_4f37_1200` (`[1][0][100]`,
  `[1][1][100]`, in the original) are written as the words they reach.

CM93's other `__emit__` function (`f_14bc_4b12`, the division names: Italia's
`f_1646_4b1e`) and its `asm db` jump (in the match set-up) are plain C in CM Italia's
decompilation (`1646.c`, `76ea.c`): nothing to change.

## Regenerating `src/`

`src/` is maintained by hand from now on. To start again from the decompilation,
convert it again and redo the changes above:

```bash
D=games/cmitalia/decomp/src
NEAR=$(grep -hoE "^\s*extern[^;]*near\s*\*\s*\w+\s*\[" $D/*.C | grep -oE "d_\w+" | sort -u | paste -sd,)
FAR=$(grep -hoE "^\s*extern\s+char\s+far\s*\*\s*far\s+\w+\s*\[" $D/*.C | grep -oE "\w+\s*\[$" | tr -d '[ ' | sort -u | paste -sd,)
for f in $D/*.C; do b=$(basename $f .C)
  python3 tools/port/convert.py $f games/cmitalia/port/src/$(echo $b | tr A-Z a-z).c \
    --near $NEAR --far $FAR --origin decomp/src/$b.C
done
```

The changes can be carried over mechanically, as they were made: diff CM93's converted
sources against `../../cm93/port/src` and apply each hunk to the module above, with
Italia's names.
