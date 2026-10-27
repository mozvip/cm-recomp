# Championship Manager 93: native port

The matching decompilation (`../decomp/src`) rebuilt as a native Linux program with
SDL3, on the platform layer shared with CM1's port ([`../../../port`](../../../port/README.md)).
The decompiled sources are left as they are: `src/` holds a copy, converted by
`tools/port/convert.py` and then edited by hand. It works as CM1's port does; see
[its README](../../cm1/port/README.md#how-the-16-bit-code-runs-natively) for how the
16-bit code runs natively.

**No game files are included.** The port's data segments are extracted once from your
copy of `CMEXE.EXE` (`make data`); at run time the game's directory must hold the rest
of the game (`*.LBM`, `PLHIST`, `CLRECS`, `SVGAME`...), not `CMEXE.EXE`. Its players and teams
(`TEAM.DAT`, `LEAGUE.DAT`, `FOREIGN.DAT`, and the names in the executable) are put in a
database by `make data` as well, and the port reads them from there
([the database](../../../port/README.md#the-database)).

## Building and running

Needs meson, ninja, a C compiler, Python 3, SDL3 (`pkg-config sdl3`) and SQLite 3
(`pkg-config sqlite3`).

```bash
make -C games/cm93/port                                 # build/cm93
make -C games/cm93/port data GAME_DIR=/path/to/cm93     # CMEXE.EXE's data, game.db -> build/data
make -C games/cm93/port run GAME_DIR=/path/to/cm93 ARGS=n
games/cm93/port/build/cm93 -g /path/to/cm93 n           # -g: the game's directory (or $CM93_DIR)
```

The data files are looked for in `data` next to the executable; `-d DATADIR` (or
`$CM93_DATA`) names another directory, and the database is `game.db` in it (`-b DB`, or
`$CM93_DB`, names another). The argument is the game's own: `A` or `R`
(AdLib, Roland) for music, anything else for none. The music is silent in the port
either way (see `../../../port/music.c`), but `A`/`R` add the Music options to the menus,
which moves the buttons.

F11 (full screen), + and - (match speed), `CM_SQUARE_PIXELS`, `CM_TEST_CLICKS`,
`CM_TEST_KEYS` and `CM_DUMP_FRAMES` work as for CM1. The scripted run of `../README.md`
works with the port too (`-d` for the data, `n` for no sound).

As in the original, a new game rewrites the game's files: test in a copy of its
directory.

Status: Domark and title pictures, protection screen (any answer: this copy has the
check patched out), new game, demo seasons with their results and tables, loading the
original `SVGAME` and saving it again (byte-identical). VGA only, no music.

## Layout

| Path | Content |
|---|---|
| `src/*.c` | The game's 17 C modules, from `../decomp/src/*.C` |
| `game.h` | CM93 for the platform: the executable, where its data segments are, its names for the assembly modules' symbols |
| `db.c` | What the game's database gives at start-up: the names in the executable's tables (`port_game_db()`) |
| `segments.txt` | The data segments of `CMEXE.EXE`: where each goes, its size and CRC-32 |
| `../../../port/` | The platform: start-up, SDL3, DOS, and the assembly modules (`1D79` ... `1E19`) in C, but for the EMS library (`1E19`): the virtual memory is kept in memory; most of the system module (`1BD3`) too |

The sources keep the decompilation's names (`f_SSSS_OOOO`, `d_SSSS_OOOO`): CM93 has no
`names.txt` for its data, so `meson.build` gives `tools/port/mkdata.py` no names, and the
data symbols are placed from the `d_SSSS_OOOO` the sources use.

`port_image` runs from `S18_DATA` (0x12760) to the end of DGROUP (0x60966). DGROUP is
segment 0x50ae (runtime 0x60ae, as in the `d_60ae_` names). The overlay manager's tables
and stubs (0x4fc10-0x50ad0) have no file.

## Hand-written changes

Each is marked `port:` in `src/`, or explained where it is made:

- `1bd3.c` (CM1's `14d2.c`): only the fonts and the virtual memory blocks are left; the rest of the
  system module is the platform's (`../../../port/system.c`, `system93.c`).
- `1446.c`: `main` is `game_main`; `d_60ae_0094` (the open `PLHIST`) is a `FILE *`.
- `14bc.c` (`f_14bc_4b12`), `8683.c` (`f_8683_16db`): given byte for byte with `__emit__`
  in the decompilation; here the C they stand for.
- `7c74.c`: a dead jump in `asm db` dropped; `f_7c74_445d` gets its prototype.
- `be31.c`: the patched-out protection check without its NOPs.
- `96bb.c`, `a694.c`: copies of near pointers between tables copy the raw entries.
- `817e.c`: `(x = ...) * x` keeps Borland's order and its 16-bit product; `a694.c`:
  `sprintf` arguments in Borland's order (right to left), where one assigns.
- `ad38.c`: three formats end in a lone `%`, which Borland printed and glibc drops: `%%`.
- `struct flags_a` (player flags, in ten modules): without its `: 0` bit field, which BCC
  ignores at a byte boundary but GCC makes start the next field at the next 16-bit unit.
- `ad38.c`: the teams (`f_ad38_0000`), the players (`f_ad38_0256`, `f_ad38_08d6`) and
  their careers (`f_ad38_2135`) are read from the database (`port_db_query()`), not from
  `TEAM.DAT`, `LEAGUE.DAT` and `FOREIGN.DAT`; the numbers of players are the database's.

## Regenerating `src/`

`src/` is maintained by hand from now on. To start again from the decompilation,
convert it again and redo the changes above. The pointer tables in the original data are
all declared in the decompilation as `char near *` (DGROUP offsets) or
`char far * far` (segment:offset), so their lists can be read from it:

```bash
NEAR=$(grep -hoE "^\s*extern[^;]*near\s*\*\s*\w+\s*\[" games/cm93/decomp/src/*.C | grep -oE "d_\w+" | sort -u | paste -sd,)
FAR=$(grep -hoE "^\s*extern\s+char\s+far\s*\*\s*far\s+\w+\s*\[" games/cm93/decomp/src/*.C | grep -oE "\w+\s*\[$" | tr -d '[ ' | sort -u | paste -sd,)
for f in games/cm93/decomp/src/*.C; do b=$(basename $f .C)
  python3 tools/port/convert.py $f games/cm93/port/src/$(echo $b | tr A-Z a-z).c \
    --near $NEAR --far $FAR --origin decomp/src/$b.C
done
```
