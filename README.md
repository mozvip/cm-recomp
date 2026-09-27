# cm-recomp

Static recompilation of **Championship Manager (1992)** and **Championship Manager 93**
(Domark / Intelek, MS-DOS) into native C, running on Linux with SDL2.

The original 16-bit x86 machine code is translated instruction by instruction into C
at build time. The resulting program runs natively: there is no emulator loop, the
game logic is the original code, and DOS, the BIOS, the VGA card, the mouse, the timer
and the AdLib card are provided by a small runtime.

**No game files are included.** You need your own copy of the game: the build reads
its executable and sound driver, and the game reads its data files at run time.

| Game | Executable | Status |
|---|---|---|
| Championship Manager (1992) | `EUROPE.EXE` | Plays through title, protection screen, menus, new game, season, results and cup fixtures; AdLib music |
| Championship Manager 93 | `CMEXE.EXE` | Same flow; AdLib title music |

Tested headless with scripted input, and by building and running on Linux. Real play
sessions, and a listening comparison of the music against DOSBox, have not been done
yet: see [Status](#status).

## Building

Requirements: `gcc` (or `clang`), GNU make, Python 3, SDL2 development files
(`pkg-config sdl2`).

```bash
# Championship Manager (1992)
make -C games/cm1 -j$(nproc) GAME_DIR=/path/to/champman        # contains EUROPE.EXE, ADLIB.DRV, data files
make -C games/cm1 run GAME_DIR=/path/to/champman

# Championship Manager 93
make -C games/cm93 -j$(nproc) GAME_DIR=/path/to/cm93           # contains CMEXE.EXE, ADLIB.DRV, data files
make -C games/cm93 run GAME_DIR=/path/to/cm93
```

The first build takes under a minute. The binaries are `games/cm1/cm1_rc` and
`games/cm93/cm93_rc`. They must be started **from the game directory**, because the
game opens its data files and writes its saves (`SAVEGAME`/`SVGAME`, `VM.$$$`) there.
`make run` does that for you. Work on a copy of the game directory if you want to keep
the original untouched.

Arguments are passed to the game like on DOS. The default is `a` (AdLib), as in the
original `MANAGER.BAT` / `CM.BAT`. Any other letter, e.g. `make run ARGS=n`, starts
without sound. The MT-32 option (`r`) is not supported.

The copy-protection screen asks for information from the game's manual or box.

## How it works

```
EUROPE.EXE ─ unfbov.py ─▶ flat MZ image ─ recomp.py ─▶ gen/seg_XXXX.c ─┐
(overlaid MZ)           (in memory)                   gen/image.c       ├─ gcc ─▶ cm1_rc
ADLIB.DRV ──────────────────────────── recomp.py ─▶  gen/drv_adlib.c ──┤
                                         runtime/*.c (DOS, BIOS, VGA, OPL2) ┘
```

1. **Flatten the overlays** ([docs/overlays.md](docs/overlays.md)): the Borland
   VROOMM overlays are merged into a single image with fixed segments.
2. **Translate** ([docs/recompiler.md](docs/recompiler.md)): functions are found by
   recursive descent. Each x86 function becomes a C function over an emulated
   register file and a 1 MB memory array, with exact flags, the x87 FPU, `switch`
   jump tables and the Borland 8087-emulator instructions.
3. **Run** on the runtime: DOS file and memory services, VGA mode 13h, mouse, keyboard
   and timer interrupts, and an OPL2 emulator for the music
   ([docs/sound.md](docs/sound.md)).

Functions that are only reached through pointers cannot all be found statically.
They are listed per game in `games/<game>/entries.txt`, which `make discover` extends
by running the game headless (see [docs/recompiler.md](docs/recompiler.md#discovering-indirect-call-targets)).

## Repository layout

| Path | Content |
|---|---|
| `tools/unfbov.py` | Flattens a VROOMM-overlaid executable |
| `tools/x86.py`, `tools/recomp.py` | 8086/80186 + x87 decoder, and the translator |
| `tools/discover.sh` | Finds pointer-only entry points by running the game headless |
| `tools/emudis.py` | Disassembler for the relocated image, with emulator FPU ops decoded |
| `runtime/` | CPU helpers, FPU, DOS/BIOS/mouse/VGA services, OPL2 emulation, SDL output, shared makefile |
| `games/cm1/`, `games/cm93/` | Per-game makefile, configuration and hooks (`hooks.c`), known entry points |
| `docs/` | Technical documentation |

## Debug and test options

Environment variables read by the recompiled games:

| Variable | Effect |
|---|---|
| `CM_TEST_CLICKS="x,y@ms;..."` | Scripted left clicks (320×200 coordinates, time in ms since start) |
| `CM_TEST_KEYS="ms:text;..."` | Scripted typing (`^` = Enter) |
| `CM_DUMP_FRAMES=dir` | Write every distinct frame as a PPM |
| `CM_DUMP_AUDIO=file.wav` | Record the rendered audio |
| `CM_OPL_LOG=1` | Log every OPL register write |
| `RC_TRACE=1` | Log every software interrupt |
| `RC_MISSING=file` | Where unknown call targets are logged (default `rc_missing_entries.txt`) |

`SDL_VIDEODRIVER=offscreen SDL_AUDIODRIVER=dummy` runs a game headless.

## Status

- Both games run through a new game and several weeks of a season under scripted input.
- AdLib music plays. The OPL2 emulation has been checked by measurement only (levels,
  spectrum, register traffic), not yet compared by ear against a reference emulator.
- Not supported: MT-32 music, the EGA display path (a VGA card is reported), printing.
- Screens that the scripted runs did not reach may still call a function that is not
  in `entries.txt` yet; the game then stops with `no translated code for SSSS:OOOO`.
  Add the address with `make discover`, or by hand, and rebuild.

## Legal

This project contains no code or data from the original games. The translated C is
generated on your machine from your own copy of the game and is not part of the
repository. Championship Manager is a trademark of its respective owners; this project
is not affiliated with or endorsed by them.

The code in this repository is released under the [MIT License](LICENSE).
