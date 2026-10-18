# Championship Manager 94 (End of Season Edition): native port

The matching decompilation (`../decomp/src`) rebuilt as a native Linux program with
SDL3, on the platform layer shared with the other games' ports
([`../../../port`](../../../port/README.md)). The decompiled sources are left as they are:
`src/` holds a copy, converted by `tools/port/convert.py` and then edited by hand. It
works as CM1's port does; see [its README](../../cm1/port/README.md#how-the-16-bit-code-runs-natively)
for how the 16-bit code runs natively. CM94 is CM93's code built again with Borland C++
4.02, and each module of the port is CM93's port module for module
([`../../cm93/port`](../../cm93/port/README.md)).

**No game files are included.** The port's data segments are extracted once from your
copy of `CMEXE.EXE` (`make data`); at run time the game's directory must hold the rest
of the game (`*.LBM`, `PLHIST*`, `CLRECS*`, `SVGAME*`...), not `CMEXE.EXE`. Its players and teams
(`TEAM.DAT`, `LEAGUE.DAT`, `FOREIGN.DAT`, and the names in the executable) are put in a
database by `make data` as well, and the port reads them from there
([the database](../../../port/README.md#the-database)).

## Building and running

Needs meson, ninja, a C compiler, Python 3, SDL3 (`pkg-config sdl3`) and SQLite 3
(`pkg-config sqlite3`).

```bash
make -C games/cmese/port                                  # build/cm94
make -C games/cmese/port data GAME_DIR=/path/to/cmese     # CMEXE.EXE's data, game.db -> build/data
make -C games/cmese/port run GAME_DIR=/path/to/cmese ARGS=n
games/cmese/port/build/cm94 -g /path/to/cmese n           # -g: the game's directory (or $CM94_DIR)
```

The data files are looked for in `data` next to the executable; `-d DATADIR` (or
`$CM94_DATA`) names another directory, and the database is `game.db` in it (`-b DB`, or
`$CM94_DB`, names another). The argument is the game's own: `A` or `R`
(AdLib, Roland) for music, anything else for none. The music is silent in the port
either way (see `../../../port/music.c`), but `A`/`R` add the Music options to the menus,
which moves the buttons.

F11 (full screen), + and - (match speed), a click to show the Latest Results at once,
`CM_SQUARE_PIXELS`, `CM_TEST_CLICKS`, `CM_TEST_KEYS` and `CM_DUMP_FRAMES` work as for
CM1. The scripted run of `../README.md` works with the port too (`-d` for the data, `n`
for no sound).

As in the original, a new game rewrites the game's files: test in a copy of its
directory.

Status: Domark and title pictures, protection screen (any answer: this copy has the
check patched out), Quick Start, the menus, fixtures, squad, a match played, loading the
original `SVGAME` and saving it again (byte-identical). VGA only, no music.

## Layout

| Path | Content |
|---|---|
| `src/*.c` | The game's 17 C modules, from `../decomp/src/*.C` |
| `game.h` | CM94 for the platform: the executable, where its data segments are, its names for the assembly modules' symbols |
| `db.c` | What the game's database gives at start-up: the names in the executable's tables (`port_game_db()`) |
| `segments.txt` | The data segments of `CMEXE.EXE`: where each goes, its size and CRC-32 |
| `../../../port/` | The platform: start-up, SDL3, DOS, and the five assembly modules (`2306` ... `23A7`) in C |

The sources keep the decompilation's names (`f_SSSS_OOOO`, `d_SSSS_OOOO`), and, as for
CM93, `meson.build` gives `tools/port/mkdata.py` no names file: the data symbols are
placed from the `d_SSSS_OOOO` the sources use.

`port_image` runs from `S19_DATA` (0x18c70) to the end of DGROUP (0x6811c). DGROUP is
segment 0x59da (runtime 0x69da, as in the `d_69da_` names). The overlay manager's tables
and stubs (0x58ed0-0x59da0) have no file.

## Hand-written changes

Each is marked `port:` in `src/`, or explained where it is made. They are CM93's, in the
same places (CM93's module in brackets):

- `2162.c` (`1bd3.c`): the BIOS video, mouse and palette calls; the screen copies
  without assembly; the virtual memory slots (`d_69da_e092`) made native.
- `18f9.c` (`1446.c`): `main` is `game_main`; `d_69da_0094` (the open `PLHIST`) is a
  `FILE *`.
- `829f.c` (`7c74.c`): `f_829f_4146` gets its prototype; `port_speed_control` around the
  match (`f_829f_1ef0`) in the week's matches; a click shows the Latest Results at once
  (`f_829f_06d0`).
- `c06b.c` (`be31.c`): the patched-out protection check without its NOPs.
- `9c01.c`, `aac9.c` (`96bb.c`, `a694.c`): copies of near pointers between tables copy
  the raw entries.
- `8773.c` (`817e.c`): `(x = ...) * x` keeps Borland's order and its 16-bit product;
  `aac9.c` (`a694.c`): `sprintf` arguments in Borland's order (right to left), where one
  assigns.
- `b085.c` (`ad38.c`): three formats end in a lone `%`, which Borland printed and glibc
  drops: `%%`.
- `struct flags_a` (`a330.c`, the only module that still declares it): without its `: 0`
  bit field, which BCC ignores at a byte boundary but GCC makes start the next field at
  the next 16-bit unit.
- Reads of the player tables `d_3668_0000` and `d_28da_2a78` (`[][1860]`) written as
  `t[0][N * 1860 + i]` (how BCC 4.02 gave the original's code) are `t[N][i]`: the same
  byte, without an index past the row that GCC may take for undefined behaviour (63 of
  them, in nine modules; not marked).
- `b085.c`: the teams (`f_b085_0000`), the players (`f_b085_0298`, `f_b085_0caf`) and
  their careers (`f_b085_25df`) are read from the database (`port_db_query()`), not from
  `TEAM.DAT`, `LEAGUE.DAT` and `FOREIGN.DAT`; the numbers of players are the database's.

CM93's two `__emit__` functions (`f_14bc_4b12`, `f_8683_16db`) and its `asm db` jump
are plain C in CM94's decompilation (`1a70.c`, `8c32.c`, `829f.c`): nothing to change.

## Regenerating `src/`

`src/` is maintained by hand from now on. To start again from the decompilation,
convert it again and redo the changes above:

```bash
D=games/cmese/decomp/src
NEAR=$(grep -hoE "^\s*extern[^;]*near\s*\*\s*\w+\s*\[" $D/*.C | grep -oE "d_\w+" | sort -u | paste -sd,)
FAR=$(grep -hoE "^\s*extern\s+char\s+far\s*\*\s*far\s+\w+\s*\[" $D/*.C | grep -oE "\w+\s*\[$" | tr -d '[ ' | sort -u | paste -sd,)
for f in $D/*.C; do b=$(basename $f .C)
  python3 tools/port/convert.py $f games/cmese/port/src/$(echo $b | tr A-Z a-z).c \
    --near $NEAR --far $FAR --origin decomp/src/$b.C
done
```
