# Matching decompilation

Separately from the recompiler, `games/<game>/decomp/src/` holds the games' source code,
recovered function by function: C (and a few assembly modules) that Borland C++ (3.0, 3.1
or 4.02, as each game was built) compiles, and TLINK links with the stock Borland runtime
and overlay manager, back into a DOS executable **byte-identical** to the original. The
build runs the DOS tools headless in DOSBox-X and compares the result with your copy of
the executable, which is not in the repository. See [docs/matching.md](docs/matching.md)
for the toolchain, the workflow and the techniques.

## Building

```bash
make -C games/cm1/decomp             # compile, relink, compare with the original
make -C games/cm1/decomp progress    # how much is done
```

The other games build the same way from `games/<game>/decomp`.

## Progress

| Game | Functions | Bytes | Not matched yet |
|---|---|---|---|
| Championship Manager (1992) | 723 / 723 | 300,349 / 300,349 (100%) | — |
| Championship Manager 93 | 816 / 816 | 368,424 / 368,424 (100%) | — |
| Championship Manager Italia | 817 / 817 | 374,470 / 374,470 (100%) | — |
| Championship Manager 94 (End of Season) | 855 / 855 | 371,750 / 371,750 (100%) | — |
| Championship Manager Italia 95 | 857 / 857 | 366,493 / 366,493 (100%) | — |

All five games are fully decompiled: every module is linked from its C (or assembly) source
and the executables are byte-identical. The last function in each of the first three was
the same one, ported from game to game: the menu of actions on one of your own players.
Several of its branches end with identical code, and BCC merges them into a different copy
from the one the original keeps, until the game is compiled with `-y` (line numbers in the
objects, which change that choice without leaving anything in the executable). CM94, built
with Borland C++ 4.02, matches it with code-free statements naming a variable
(`9007:511f`). See [docs/matching.md](docs/matching.md) on merged tails.

## Repository layout

| Path | Content |
|---|---|
| `games/<game>/decomp/` | The matching decompilation: `src/` (the C and assembly sources), makefile, symbols |
| `tools/match/` | The decompilation's tools: relink, per-function compare, diff, porting between games |
| `docs/matching.md` | Toolchain, workflow and techniques |

## Legal

The sources in `games/*/decomp/src/` reproduce the games' program code, and the rights in
it belong to the games' owners. See the [README](README.md#legal).
