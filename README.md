# cm-recomp

Five **Championship Manager** games (Domark / Intelek, MS-DOS, 1992-1995), worked on in
two independent ways:

- **Static recompilation** ([RECOMPILATION.md](RECOMPILATION.md)). The original 16-bit
  x86 machine code is translated instruction by instruction into C at build time, and
  runs natively on Linux with SDL2. There is no emulator loop: the game logic is the
  original code, and DOS, the BIOS, the VGA card, the mouse, the timer and the AdLib card
  are provided by a small runtime.
- **Complete matching decompilation** ([DECOMPILATION.md](DECOMPILATION.md)). Every
  function of all five games has been rewritten as C (and a few assembly modules) that
  the original Borland compilers turn back into the original code: compiled and linked,
  the sources give a DOS executable **byte-identical** to the one shipped.

**No game files are included.** You need your own copy of the game: the recompiler reads
its executable and sound driver, the game reads its data files at run time, and the
decompilation's build compares its output with the original executable.

## Games

| Game | Executable | Recompiled build | Decompilation |
|---|---|---|---|
| Championship Manager (1992) | `EUROPE.EXE` | Plays through title, protection screen, menus, new game, season, results and cup fixtures; AdLib music | Complete, byte-identical |
| Championship Manager 93 | `CMEXE.EXE` | Same flow; AdLib title music | Complete, byte-identical |
| Championship Manager Italia | `CM.EXE` | Reaches the Italian Cup first round fixtures (no sound driver in this release) | Complete, byte-identical |
| Championship Manager 94 (End of Season) | `CMEXE.EXE` | Builds and runs, AdLib music: see [its README](games/cmese/README.md) | Complete, byte-identical |
| Championship Manager Italia 95 | `CM.EXE` | Reaches the Italian Cup second round (no sound driver in this release) | Complete, byte-identical |

## Decompilation: 100%

| Game | Functions | Bytes |
|---|---|---|
| Championship Manager (1992) | 723 / 723 | 300,349 / 300,349 (100%) |
| Championship Manager 93 | 816 / 816 | 368,424 / 368,424 (100%) |
| Championship Manager Italia | 817 / 817 | 374,470 / 374,470 (100%) |
| Championship Manager 94 (End of Season) | 855 / 855 | 371,750 / 371,750 (100%) |
| Championship Manager Italia 95 | 857 / 857 | 366,493 / 366,493 (100%) |

All five games are fully decompiled: every module is linked from its C (or assembly)
source and the executables are byte-identical to the originals.

## Documentation

- [RECOMPILATION.md](RECOMPILATION.md): building and running the recompiled games, how
  the recompiler works, hand-written replacements, debug options, status
- [DECOMPILATION.md](DECOMPILATION.md): building the decompiled sources, progress,
  layout
- [docs/](docs/): technical documentation (overlays, recompiler, sound, hand-written
  replacements, matching decompilation)
- `games/<game>/README.md`: per-game notes, required files, mods

## Legal

The repository contains none of the games' files: no executables, data files, graphics,
music or drivers. You need your own copy of each game.

- **Recompilation.** The translated C is generated on your machine from your own copy of
  the game and is not part of the repository.
- **Decompilation.** The sources in `games/*/decomp/src/` are a reconstruction of the
  games' program code, written to compile back into the original executables. They
  therefore reproduce that code, including the strings and data tables it contains, and
  the rights in it belong to the games' owners. They are published for preservation,
  study and interoperability; building them needs your copy of the original executable.

Championship Manager is a trademark of its respective owners; this project is not
affiliated with or endorsed by them.

The tools, the runtime and the other code written for this project are released under
the [MIT License](LICENSE). The license does not cover the decompiled game code.
