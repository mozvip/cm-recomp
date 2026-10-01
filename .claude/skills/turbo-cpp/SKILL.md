---
name: turbo-cpp
description: Compile, link, and run 16-bit DOS C/C++ programs with Borland C++ 3.1 (BCC, TLINK 5.1, TASM, TLIB, MAKE), Borland C++ 4.02 (BCC, TLINK 6.1) or Turbo C++ 3.0 (TCC, TLINK 5.0), and assemble with Turbo Assembler 3.0 or 3.1, headlessly through DOSBox-X. Use when asked to build something with Borland / Turbo C / Turbo C++ / TASM, produce a real-mode DOS .EXE/.OBJ/.ASM, check what code BCC/TCC generates for a snippet, or run a DOS program and capture its output.
---

# Borland C++ 3.1 / Turbo C++ 3.0 / TASM via DOSBox-X

| `-T` | Install | Tools |
|---|---|---|
| `bc31` (default) | `tools/BCC31` | Borland C++ 3.1: `BCC`, TLINK 5.1, `TASM`, `TLIB`, `MAKE`, `TDUMP` |
| `tc` | `tools/TC` | Turbo C++ 3.0: `TCC`, TLINK 5.0, `TLIB`, `MAKE`. No TASM, no global optimiser (`-Oe`/`-Og`/`-O2` are rejected). |
| `bc30` | `tools/BC30` | Borland C++ 3.0 (1991), from the disk images in `tools/images`: `BCC` 3.00, TLINK 5.0, `TASM`, `TLIB`, `MAKE`, the libraries and the startup sources (`STARTUP`). Config points at `C:\BC30`. |
| `bc4` | `tools/BC4` | Borland C++ 4.02 (1994), DOS 16-bit: `BCC` 4.02, TLINK 6.10, `TLIB`, `MAKE`, `TDUMP`; also its runtime sources (`SOURCE`). Config points at `C:\BC4`. Turn an optimisation off with `-O-x` (not `-Ox-`). |
| `tasm` | `tools/TASM` | Turbo Assembler 3.0 (Nov 1991): `TASM`, `TASMX` (protected mode), `TCREF`, `H2ASH`. `-T bc31` has TASM 3.1 (June 1992). |

Emulator: `/mnt/Games/emu/dosbox-x/DOSBox-X-*.AppImage` (the latest one is picked).

## The wrapper

```bash
.claude/skills/turbo-cpp/scripts/tcdos.sh [-T bc30|bc31|bc4|tc|tasm] [-C dir] [-D MM-DD-YYYY] [-t seconds] [-k] -- COMMAND [ARGS...]
```

- Runs headless (SDL dummy driver, `-silent`), about 1 s per call.
- **Drives:**
  - The toolchain is mounted where its `BIN\TURBOC.CFG` expects it, through a symlink,
    so the config files work unmodified: `I:\BORLANDC` for BC 3.1, `C:\TC` for TC. Its
    `BIN` is on `PATH`. TASM 3.0 has no config: it is `C:\TASM`, on `PATH`.
  - `D:\` is the work dir (`-C`, default `$PWD`) and the DOS cwd.
  - `E:` is a private temp dir (batch + log).
- **Chaining:** separate DOS commands with a literal `';;'` argument to run them in one
  emulator session. The run stops at the first non-zero ERRORLEVEL.
- **`-D`** sets the DOS date first. Host time sync is off, so the date sticks. TLINK stores
  the link date in overlaid executables.
- **Output and exit status:** prints what the DOS commands wrote to stdout. Exits with
  `0` ok, `1` a command failed (including "Bad command or filename"), `124` timeout /
  emulator did not finish (default 120 s, `-t`), `2` usage/setup error.
- `-k` keeps the temp dir (`e/RUN.BAT`, `e/OUT.LOG`, `dosbox.stdout`) for debugging.
- Overrides: `TOOLCHAIN=`, `TC_DIR=`, `DOSBOX=` env vars.

## Examples

```bash
T=.claude/skills/turbo-cpp/scripts/tcdos.sh

$T -C src -- BCC -ml -O -Z -c FOO.C                 # compile only (BC 3.1)
$T -C src -- BCC -ml -S FOO.C                       # FOO.ASM listing
$T -C src -- BCC -ml -eDEMO.EXE MAIN.CPP UTIL.CPP ';;' DEMO   # build and run
$T -C src -- TASM /mx START.ASM                     # assemble (TASM 3.1)
$T -T tasm -C src -- TASM /ml START.ASM START.OBJ   # assemble with TASM 3.0
$T -T tc -C src -- TCC -ms HELLO.C                  # Turbo C++ instead
$T -T tc -C out -D 08-26-1992 -- TLINK @LINK.RSP    # link as TLINK 5.0 on a given date
```

Quote backslashes for the host shell (`'I:\BORLANDC\LIB\CL.LIB'`).

## Constraints / gotchas

- **Names and paths:**
  - **8.3 file names only**: LFN is disabled, and long names show up mangled. Subdirectories
    are fine: `BCC SRC\FOO.C`, and `-nBUILD\OBJ` for the output dir.
  - Files are created in UPPERCASE on the host.
  - Everything must be inside the work dir (D:) or the toolchain.
- **Command lines** are limited to about 126 characters. Use response files for long ones:
  `BCC @FILES.RSP`, `TLINK @LINK.RSP`.
- **Captured output:** only stdout is captured. conio/BGI output that writes directly to
  video memory is not. Interactive programs hang until the timeout, so feed them input:
  `PROG < IN.TXT`.
- **Compiler options:**
  - Memory models: `-mt -ms -mm -mc -ml -mh`.
  - Optimisation, BC 3.1 only: `-O1` (size), `-O2` (speed), and the individual switches
    `-Oe -Og -Oc -Ob -Os -Ot -Z`. `-k` forces a standard stack frame.
  - Other: `-c` compile only, `-S` asm, `-1`/`-2` 186/286, `-f-` no floating point, `-w`
    all warnings, `-DNAME=VAL`, `-zCname` code segment name, `-Y`/`-Yo` overlay code.
- **TASM options:** `/ml` case-sensitive symbols (needed to link with C), `/mx` publics
  and externals only, `/m2` two passes (resolves forward references without `NOP` padding
  after short jumps), `/zi` debug info, `/l` listing (`.LST`), `/d NAME=VAL`. The output
  name is the second argument.
- **Language:** pre-standard C++ (`<iostream.h>`, no namespaces, no STL, no `bool`).
- **Disassembling objects:** `tools/match/omf.py FILE.OBJ` dumps an object's segments,
  publics and fixups. `TDUMP` in BC 3.1 does too.
- `tools/TC/BIN` contains the user's own scratch files (AA.CPP etc.); don't build in there.
