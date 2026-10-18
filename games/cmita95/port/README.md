# Championship Manager Italia 95: native port

The matching decompilation (`../decomp/src`) rebuilt as a native Linux program with
SDL3, on the platform layer shared with the other games' ports
([`../../../port`](../../../port/README.md)). The decompiled sources are left as they are:
`src/` holds a copy, converted by `tools/port/convert.py` and then edited by hand. It
works as CM1's port does; see [its README](../../cm1/port/README.md#how-the-16-bit-code-runs-natively)
for how the 16-bit code runs natively. CM Italia 95 is CM94's code, changed for the
Italian leagues and built with the same compiler (Borland C++ 4.02), and each module of
the port is CM94's port module for module ([`../../cmese/port`](../../cmese/port/README.md)).

**No game files are included.** The port's data segments are extracted once from your
copy of `CM.EXE` (`make data`); at run time the game's directory must hold the rest of
the game (`*.LBM`, `PLHIST*`, `CLRECS*`, `SVGAME*`...), not `CM.EXE`. Its players and teams
(`TEAM.DAT`, `LEAGUE.DAT`, `FOREIGN.DAT`, and the names in the executable) are put in a
database by `make data` as well, and the port reads them from there
([the database](../../../port/README.md#the-database)).

## Building and running

Needs meson, ninja, a C compiler, Python 3, SDL3 (`pkg-config sdl3`) and SQLite 3
(`pkg-config sqlite3`).

```bash
make -C games/cmita95/port                                    # build/cmita95
make -C games/cmita95/port data GAME_DIR=/path/to/cmita95     # CM.EXE's data, game.db -> build/data
make -C games/cmita95/port run GAME_DIR=/path/to/cmita95 ARGS=n
games/cmita95/port/build/cmita95 -g /path/to/cmita95 n        # -g: the game's directory (or $CMITA95_DIR)
```

The data files are looked for in `data` next to the executable; `-d DATADIR` (or
`$CMITA95_DATA`) names another directory, and the database is `game.db` in it (`-b DB`, or
`$CMITA95_DB`, names another). `CM.EXE` and the original `CM.EX_` have the
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

Status: the Domark (`INTELEK.LBM`) and title pictures, protection screen (any answer, as with
`CM.EXE`), Multi-Save and Printer Option screens, a demo game through the preseason to
the Italian Cup's 2nd round, loading the original `SVGAME` and
saving it again (byte-identical), playing on from it to week 7 of the season and the
squad screen before its first match (a live match on screen not tried yet: the save has
no team picked). VGA only, no music.

## Layout

| Path | Content |
|---|---|
| `src/*.c` | The game's 18 C modules, from `../decomp/src/*.C` |
| `game.h` | CM Italia 95 for the platform: the executable, where its data segments are, its names for the assembly modules' symbols |
| `db.c` | What the game's database gives at start-up: the names in the executable's tables (`port_game_db()`) |
| `segments.txt` | The data segments of `CM.EXE`: where each goes, its size and CRC-32 |
| `../../../port/` | The platform: start-up, SDL3, DOS, and the five assembly modules (`2301` ... `23A1`) in C |

The sources keep the decompilation's names (`f_SSSS_OOOO`, `d_SSSS_OOOO`), and, as for
CM93, `meson.build` gives `tools/port/mkdata.py` no names file: the data symbols are
placed from the `d_SSSS_OOOO` the sources use.

`port_image` runs from `S19_DATA` (0x18c10) to the end of DGROUP (0x5fe8e). DGROUP is
segment 0x51eb (runtime 0x61eb, as in the `d_61eb_` names). The overlay manager's tables
and stubs (0x50fc0-0x51eb0) have no file.

## Hand-written changes

Each is marked `port:` in `src/`, or explained where it is made. They are CM94's, in the
same places (CM94's module in brackets; CM94's `b085` is two overlays here, `a7b6` and
`b26d`):

- `215d.c` (`2162.c`): the BIOS video, mouse and palette calls; the screen copies
  without assembly; the virtual memory slots (`d_61eb_dcf4`) made native.
- `18f9.c`: `main` is `game_main`; `d_61eb_0094` (the open `PLHIST`) is a `FILE *`.
- `7a45.c` (`829f.c`): `f_7a45_4357` gets its prototype; `port_speed_control` around the
  match in the week's matches; a click shows the Latest Results at once.
- `b6f6.c` (`c06b.c`): the protection check accepts any answer, as `CM.EXE`'s patch
  makes it (file offset `0xad600`, `jnz` -> `jmp`); the decompilation is of the
  unpatched `CM.EX_`.
- `93a1.c`, `a214.c` (`9c01.c`, `aac9.c`): copies of near pointers between tables copy
  the raw entries.
- `7f4a.c` (`8773.c`): `(x = ...) * x` keeps Borland's order and its 16-bit product;
  `a214.c` (`aac9.c`): `sprintf` arguments in Borland's order (right to left), where one
  assigns.
- `b26d.c` (`b085.c`): three formats end in a lone `%`, which Borland printed and glibc
  drops: `%%`.
- `struct flags_a` (`9a9e.c`, the only module that still declares it): without its `: 0`
  bit field, which BCC ignores at a byte boundary but GCC makes start the next field at
  the next 16-bit unit.
- `struct matchstats` (`7f4a.c`): the padding BCC gives it (a bit field does not
  straddle two 16-bit units), which GCC's `pack(1)` does not: 8 bytes.
- Reads of the player tables `d_3334_0000` and `d_28d4_1958` (`[][1500]`) written as
  `t[0][N * 1500 + i]` (how BCC 4.02 gave the original's code) are `t[N][i]`: the same
  byte, without an index past the row that GCC may take for undefined behaviour (32 of
  them, in six modules; not marked).
- `8402.c`: two writes one past the end of a row of `d_53fc_11fc` (`[1][0][100]`,
  `[1][1][100]`, in the original) are written as the words they reach (the first
  Italia's, [`../../cmitalia/port`](../../cmitalia/port/README.md)).
- `a7b6.c`: the teams (`f_a7b6_0000`), the players (`f_a7b6_0298`, `f_a7b6_09ac`) and
  their careers (`f_a7b6_22f4`) are read from the database (`port_db_query()`), not from
  `TEAM.DAT`, `LEAGUE.DAT` and `FOREIGN.DAT`; the numbers of players are the database's.

The decompilation has no `__emit__` or `asm` outside `215d.c`: nothing else to change.

## Regenerating `src/`

`src/` is maintained by hand from now on. To start again from the decompilation,
convert it again and redo the changes above:

```bash
D=games/cmita95/decomp/src
NEAR=$(grep -hoE "^\s*extern[^;]*near\s*\*\s*\w+\s*\[" $D/*.C | grep -oE "d_\w+" | sort -u | paste -sd,)
FAR=$(grep -hoE "^\s*extern\s+char\s+far\s*\*\s*far\s+\w+\s*\[" $D/*.C | grep -oE "\w+\s*\[$" | tr -d '[ ' | sort -u | paste -sd,)
for f in $D/*.C; do b=$(basename $f .C)
  python3 tools/port/convert.py $f games/cmita95/port/src/$(echo $b | tr A-Z a-z).c \
    --near $NEAR --far $FAR --origin decomp/src/$b.C
done
```

The changes can be carried over mechanically, as they were made: diff CM94's converted
sources against `../../cmese/port/src` and apply each hunk to the module above, with
Italia 95's names (the player-table rows are 1500 here, not 1860).
