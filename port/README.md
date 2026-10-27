# The native ports' platform

The layer the native ports of the decompiled games run on, in place of the DOS machine:
DOS and the Borland C library where Linux differs, the BIOS, the VGA in mode 13h, the
mouse driver, the keyboard, the clock, the games' assembly modules rewritten in C, and
the C module they all build their screens, strings and memory on.
It is shared by:

| Game | Port |
|---|---|
| Championship Manager (1992) | [games/cm1/port](../games/cm1/port/README.md) |
| Championship Manager 93 | [games/cm93/port](../games/cm93/port/README.md) |
| Championship Manager 94 (End of Season Edition) | [games/cmese/port](../games/cmese/port/README.md) |
| Championship Manager Italia (1993) | [games/cmitalia/port](../games/cmitalia/port/README.md) |
| Championship Manager Italia 95 | [games/cmita95/port](../games/cmita95/port/README.md) |

How the 16-bit sources are made to run natively (types, the original data segments kept
as one block, near and far pointer tables) is described in
[CM1's README](../games/cm1/port/README.md#how-the-16-bit-code-runs-natively); the
other games' ports follow the same rules.

## Keys every port has

Not keys of the original games; `sdl.c` takes them before the game sees them, so every
port has them:

| Key | |
|---|---|
| F11 | Window or full screen |
| `+`, `-` | During a match: the game's speed, from x1/4 to x16 (shown in the window's title when not x1), kept for the next match. The games time everything from the BIOS clock, and the port runs that clock faster or slower. Either keyboard row, any layout. Outside matches the clock runs at x1 and `+` and `-` are typed as usual |
| Mouse click | While the week's "Latest Results" are typed out a letter at a time: the rest of them show at once, without the delay (the games' `port:` change to their results printer: CM1 `print_results_line`, CM93 `f_7c74_0769`, CM94 `f_829f_06d0`, Italia `f_76ea_074a`, Italia 95 `f_7a45_06aa`) |

The game says when a match starts and ends: its sources call `port_speed_control(1)` and
`port_speed_control(0)` around the match (CM1 `play_match`, CM93 `f_7c74_2043`, CM94
`f_829f_1ef0`, Italia `f_76ea_2010`, Italia 95 `f_7a45_1ec1`, all in the week's matches loop).

## Files

| File | Content |
|---|---|
| `port.h` | Included by every game source in place of the Borland headers; includes the game's `game.h` first |
| `main.c` | Start-up: options, the data segments, the machine, then the game's `main()`, renamed `game_main` |
| `image.c` | Loads the original data segments (`port_image`) from the files `tools/port/extract.py` cut out of the executable |
| `db.c` | The game's database of players and teams (SQLite, below): the queries the games' sources make, and its names put in the executable's tables |
| `sdl.c` | VGA mode 13h, mouse driver (INT 33h), BIOS keyboard and clock, on SDL3; scripted clicks, typing and frame dumps for tests |
| `dos.c` | DOS and Borland library: file names in any case, `rand`, `strcpy`, `stricmp`, the printer (`PRINTER.TXT`) |
| `keyboard.c` | The keyboard driver (CM1 `14B7.ASM`, CM93 `1DFE.ASM`, CM94 `238C.ASM`, Italia `1F89.ASM`, Italia 95 `2386.ASM`): not needed, there is always a mouse |
| `music.c` | The music driver interface (CM1 `1AB2.ASM`, CM93 `1DF8.ASM`, CM94 `2385.ASM`, Italia `1F83.ASM`, Italia 95 `2380.ASM`): silent for now |
| `gfx.c` | The line drawing (CM1 `1AB9.ASM`, CM93 `1D79.ASM`, CM94 `2306.ASM`, Italia `1F04.ASM`, Italia 95 `2301.ASM`), pixel for pixel |
| `ilbm.c` | The `.LBM` picture decoder (CM1 `1B05.ASM`, CM93 `1DC5.ASM`, CM94 `2352.ASM`, Italia `1F50.ASM`, Italia 95 `234D.ASM`) |
| `system.c` | The games' system module (CM1 `14D2.C`, CM93 `1BD3.C`, CM94 `2162.C`, Italia `1D5E.C`, Italia 95 `215D.C`), as far as it is the same in all five: screen buffer, palette, rectangles, lines and text, the mouse pointer, the clock, random numbers, strings, files, the virtual memory |
| `system93.c` | What the later four changed in it or added (CM1 keeps its own): the sound and screen set-up, the title screens, 30-bit random numbers, capitals of accented letters, the music |
| `db93.c` | What the later four read from their database, the same in all of them (CM1 has its own `db.c`): the names put in the executable's tables at start-up, the teams of a new game, and its players and their careers a row at a time |

The games' assembly modules are the same code in CM1, CM93, CM94, Italia and Italia 95 (byte for
byte, apart from addresses), so one C version of each serves them all. Their functions
and data go by CM1's names (`../games/cm1/names.txt`); a game that names them otherwise
maps the names in its `game.h` (CM93's, CM94's and both Italias' sources still use
`f_SSSS_OOOO` / `d_SSSS_OOOO`).

The EMS library (CM1 `1A51.ASM`, CM93 `1E19.ASM`, CM94 `23A7.ASM`, Italia `1FA5.ASM`,
Italia 95 `23A1.ASM`) has no counterpart: the games' virtual memory (CM1's `vm_alloc` and
`vm_map`), which kept its blocks in expanded memory or in a file, `VM.$$$`, keeps them in
memory (`vm_store`, in `system.c`). Blocks are still mapped through the 64124-byte work
buffer, as in the original, so what the game sees is unchanged.

The games' system module is C, decompiled with each game, but all five have it, nearly the
same: `system.c` and `system93.c` replace it, in CM1's names as well (with a few new
ones, for what CM1 does not have). What is a game's own stays in its `src/`: its fonts,
its virtual memory blocks, CM1's protection check and the functions CM1 has in its own
way. The build gives `tools/port/mkdata.py` these two files (and `db93.c`) and
`game.h`, whose mappings it applies to them, so that their data is placed at the game's
addresses.

There is no EGA: the ports always run in VGA mode, and CM1's EGA paths (the planar
primitives, `TITLEEGA.LBM`, `PICEGA.LBM`) are gone.

## What a game provides

A game's port directory (`games/<game>/port`) holds its converted sources (`src/`), its
`segments.txt` (the data segments of its executable, for `tools/port/extract.py` and
`tools/port/mkdata.py`), its `meson.build` and `Makefile` (below), for CM1 a `db.c`
(`port_game_db()`, what the database gives at start-up, see below; the later games' is
`db93.c`'s), and `game.h`, which defines:

| Macro | |
|---|---|
| `GAME_TITLE` | The window's title |
| `GAME_EXE`, `GAME_VERSION` | The executable the data comes from, and its version, for messages |
| `GAME_ENV` | The prefix of the environment variables: `<GAME_ENV>_DIR` (the game's directory), `<GAME_ENV>_DATA` (the data directory), `<GAME_ENV>_DB` (the database) |
| `GAME_ARGS` | The game's own argument, for the usage line |
| `GAME_FILE` | A file of the game, checked for in its directory before it starts (the game does not check that its files open) |
| `IMAGE_START`, `IMAGE_END`, `DGROUP_SEG` | The extent of `port_image` in the executable's load image (file numbering: the first far data segment, the end of DGROUP) and DGROUP's segment |
| platform names | `#define draw_line_vga256 f_1d79_0006`... when the game's names for the assembly modules' and the system module's symbols are not CM1's (CM1 maps three variables `names.txt` leaves unnamed) |
| `FONT_FIRST_CHAR`, `DEFAULT_BRIGHTNESS` | The fonts' first character (CM1: 32, the others 0), a new picture's brightness (`system.c`) |
| `LOGO_FILE` | The publisher's picture shown before the title (`system93.c`; not CM1) |
| `TEAMS`, `LEAGUE_PLAYERS`, `ABROAD_PLAYERS`, `FIRST_NAMES`, `SURNAMES`, `COUNTRIES` | The league's clubs, the players the game has room for in the league and abroad, and the sizes of the executable's tables of names (`db93.c`; not CM1) |
| database names | `#define load_teams f_ad38_0000`, `team_stats`, `team_seats`, `team_balances`, `team_staff`, `club_names`, `first_names`, `surnames`, `country_names`: the game's new-game team loader and the tables `db93.c` fills (not CM1) |

### The build

One meson project, the repository's `meson.build`, builds every port, one game per build
directory: `-Dgame=<game>` (`meson.options`) picks it. It holds what is the same for all
five: the platform's files, the compiler's options, `tools/port/mkdata.py`'s data symbols
(from `game.h`, `--aliases`, which gives `IMAGE_START`/`IMAGE_END` as well, and
`segments.txt`) and the executable. The game's `meson.build`, read with `subdir()`,
gives only its name (`game_name`), its sources (`game_srcs`), and adds to `system_srcs`
the later games' files (`later_srcs`: `system93.c`, `db93.c`); CM1's gives its
`names.txt` (`names`).

The game's `Makefile` gives its directory's name (`GAME`), its executable's (`BIN`) and
the original executable the data comes from (`EXE`), and includes `game.mk`, which sets
the build directory up and does the rest (`make`, `make data`, `make run`):

```bash
make -C games/cm93/port                 # meson setup games/cm93/port/build . -Dgame=cm93, then meson compile
```

## The database

The players and teams the games start from are in an SQLite database, `game.db` in the
data directory, and the ports read them from there: not from the game's `TEAM.DAT`,
`LEAGUE.DAT` and `FOREIGN.DAT`, nor from the tables of names and teams in its
executable. `make data` makes it from your copy of the game, with
`tools/port/mkdb.py`; `-b DB` (or `$<GAME_ENV>_DB`) names another database, an edited
copy for instance.

```bash
python3 tools/port/mkdb.py --game cm93 --check /path/to/cm93 build/data/game.db
sqlite3 build/data/game.db "SELECT * FROM player_list WHERE team = 'Man Utd'"
```

`--check` writes the database back into the game's formats and compares them with the
originals: every value is kept as the game has it (255 in a player's attribute: made up
by the game), so the files come back byte for byte, and with the database as made, the
games do exactly what they did with their files.

| Table | Content | Read |
|---|---|---|
| `teams` | The league's clubs, by the game's number: name, and `TEAM.DAT` (capacity, seats, colours, strength, reputation, money, board confidence, manager and coach); CM1: name, reputation, capacity, colours, strength | A new game (CM1: start-up) |
| `players` | `LEAGUE.DAT` then `FOREIGN.DAT` (`team` NULL: plays abroad), in the order the game reads them: names (numbers in `first_names`, `surnames`), positions and sides, age, character, nationality, ability, potential and the other attributes. Not in CM1, which makes its players up | A new game with the real players |
| `careers` | Each player's seasons before the game's: season, club, appearances, goals | Likewise |
| `clubs` | CM1: the 460 other clubs (80-539) of the cups and careers: name, country, rating, colours | Start-up |
| `first_names`, `surnames`, `countries` | The executable's tables of names, which the players refer to (CM1 draws its players' names from them) | Start-up |
| `player_list` | A view: the players with their names, team and nationality | |

The later games read it in place of their `fopen`/`fgetc`. Their teams are read whole by
`db93.c`'s `load_teams()`, which is the first function of the new-game module (CM93
`f_ad38_0000`; CM94 `b085`, Italia `a7f0`, Italia 95 `a7b6`). The players and their
careers are read a row at a time by the module's own code, through `port_db_players()`
and `port_db_careers()` (`port.h`), which hand it each row as a `struct port_player` or
a `struct port_career`: for CM93 `f_ad38_0256` and `f_ad38_08d6` the players,
`f_ad38_2135` the careers, and the same functions in the other three. Their numbers of
players follow the database, within the game's arrays (`port_game_db()` checks it:
CM93 1700 in the league and 160 abroad, CM94 1680 and 180, the Italias 1000 and 500).
What the executable held is put in place by `port_game_db()` at start-up, before the
game runs: the names, and CM1's teams and clubs.

A name the database changes is written after the original data (`port_pool`, 128K,
reserved by `tools/port/mkdata.py`) and its table entry pointed there; the others stay
where they are. The teams' names are DGROUP offsets, so a changed one must fit in what is
left of DGROUP's 64K after the game's data: 23K for CM1, 7-8K for CM94 and the Italias,
only 378 bytes for CM93 (failing that, a name no longer than the one it replaces is
written in its place). The database's text is UTF-8; the games' is code page 437.
A save that holds a table of names (CM1's holds the teams') keeps the pointers to the
pool: it loads again with the same database.
