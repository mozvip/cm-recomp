# The static recompiler

The translator turns a 16-bit real-mode Borland C executable into C. Each x86 function
becomes a C function that works on an emulated CPU state and a 1 MB memory array. The
program then runs natively on top of a small runtime that provides DOS, the BIOS and
the hardware.

Why not decompile? Ghidra-style decompilation was tried first on CM1. It fails on
exactly the code this kind of game is full of: floating-point code compiled for
Borland's 8087 emulator (`INT 34h`..`3Dh`), `switch` jump tables, and wrong function
boundaries. It also loses the segment of many memory accesses. A mechanical
translation is correct by construction, and hand-written C can replace individual
functions later.

## Pipeline

| Piece | Role |
|---|---|
| [`tools/unfbov.py`](../tools/unfbov.py) | Flattens the Borland VROOMM overlays into one image with fixed segments ([overlays.md](overlays.md)). |
| [`tools/x86.py`](../tools/x86.py) | 8086/80186 + x87 decoder. The Borland emulator sequences `INT 34h..3Bh`, `INT 3Ch xx` (segment override) and `INT 3Dh` (`FWAIT`) decode as the FPU instructions they stand for. `INT 3Eh FA` (the emulator's fast `exp`) is a pseudo-op. |
| [`tools/recomp.py`](../tools/recomp.py) | Loads the image at segment `1000` **with relocations applied**, so every immediate is its runtime value. It discovers functions, bounds jump tables and writes `recomp/seg_XXXX.c`, `recomp/funcs.h`, a dispatch table sorted by linear address (`recomp/dispatch.c`), and the relocated image to embed (`recomp/image.c`). |
| [`runtime/cpu.h`](../runtime/cpu.h) | Register file, flag-exact ALU/shift helpers, memory access, conditions, and the shadow return stack. |
| [`runtime/rt.c`](../runtime/rt.c) | Dispatch, interrupt delivery through the emulated IVT, driver dispatch, VGA DAC / PIT / OPL ports, mul/div/BCD/string ops. |
| [`runtime/fpu.c`](../runtime/fpu.c) | x87 on the host's 80-bit `long double`: control-word rounding, compare flags via `fstsw`/`sahf`, transcendental ops, `fnsave`/`frstor`. |
| [`runtime/dos.c`](../runtime/dos.c) | DOS `INT 21h`: files mapped case-insensitively onto the current directory, memory blocks, find first/next, date/time, IOCTL, vectors. |
| [`runtime/bios.c`](../runtime/bios.c) | `INT 10h` (mode 13h, DAC, VGA detection), `INT 16h`, `INT 33h` with a drawn cursor, `INT 8`/`1Ch`, `INT 1Ah`; SDL window, input and test scripting. |
| [`runtime/main.c`](../runtime/main.c) | Loader: PSP, environment, IVT (every default vector points at `F000:<n>`), BIOS data area, then the entry point. |
| [`runtime/opl2.c`](../runtime/opl2.c), [`audio.c`](../runtime/audio.c) | OPL2 emulation and audio output ([sound.md](sound.md)). |

## Translation model

- **Functions and control flow.** Each function is the set of instructions reachable
  from its entry through jumps. Every jump target becomes a `goto` label, and code
  shared between functions is duplicated. `call` becomes a C call after pushing the
  return address on the emulated stack; `ret`/`retf`/`iret` pop it and return from C.
  `jmp far` to another function is a tail call.
- **Memory.** `MEM(seg, ofs)` maps to `rc_ram[seg*16 + ofs]`. Segment `A000` is
  redirected to a separate 64 KB VGA buffer, because the flattened images extend past
  `0xA0000` (CM1 to `0xA9B80`, CM93 to `0xC0910`).
- **Flags** are computed exactly, per instruction.
- **Jump tables.** These forms are recognised:
  - dense: `cmp bx,N; ja default; shl bx,1; jmp [cs:bx+T]`;
  - Borland's sparse `switch`: `mov cx,N; mov bx,VALUES; …scan…; jmp [cs:bx+2N]` (targets in a parallel table);
  - the same on 32-bit values, with targets at `bx+4N`;
  - `mov reg,[cs:bx+T]; jmp reg`, bounded by the function's unsigned compare;
  - in drivers only, where DS = CS: DS-relative tables indexed by `and bx,2^k-1`.

  Computed jumps through a local variable (`jmp [bp-6]`) use the code-address
  immediates the function stores as candidate targets. Any target not found raises a
  runtime error.
- **Shadow return stack.** Borland's `_setargv` pops its own return address and later
  returns with `jmp [saved]`. Every call site records its return address, and an
  indirect jump to the innermost one is treated as a `return`.
- **Interrupts.** `int n` goes through the emulated IVT. A vector still pointing at
  `F000:n` is serviced by the runtime; a vector the game or a driver installed runs the
  translated handler. Hardware interrupts (timer at the programmed PIT rate, keyboard
  when `INT 9` is hooked) are delivered at safe points: backward branches and BIOS
  calls.
- **Drivers.** Code the game loads at run time (the AdLib driver) is translated from
  its file with functions keyed by offset. It is dispatched when a call enters a
  segment whose first 64 bytes match the driver ([sound.md](sound.md)).

## Discovering indirect-call targets

Functions reached only through pointers are unknown to the static analysis. Examples
are the C runtime's `#pragma startup` table, `printf` internals, and a driver's
interrupt handlers. When the game calls one, the runtime writes the address to
`RC_MISSING` (default `rc_missing_entries.txt`) and stops.

```bash
make -C games/cm93 discover GAME_DIR=/path/to/cm93 \
     ENV='CM_TEST_CLICKS=160,100@3000;160,100@6000 CM_TEST_KEYS=7500:123^'
```

`discover` runs the game headless, adds new addresses to `entries.txt`, rebuilds, and
repeats until a run finds nothing new. Entries are `SEG:OFS` for the game and
`NAME:OFS` for drivers. Use `RUN_SECS` to change how long each round runs (default 20).

## Startup fixes

- **Heap vs merged overlays.** Borland's `c0` shrinks the program's memory block to
  end at its stack, which is where the resident part of the original EXE ended. In the
  flattened image the overlay segments sit above that, so the heap would overwrite
  them. At the first `setblock` from `c0`, `dos.c` finds every word in DGROUP that
  holds the old heap base (`_heapbase`/`_brklvl`, `DS:0089`/`DS:008D` in both games)
  and moves it past the end of the image. Without this the game exits with
  "No room for virtual memory".
- **The overlay manager** still initialises. It reads the FBOV header from the
  original EXE (via the environment's program name) and allocates its buffer. That is
  harmless, because no stub traps into it any more.

## Per-game configuration

`games/<game>/` holds:
- `Makefile`: the exe name, drivers and target;
- `hooks.c`: the program path DOS reports (`argv[0]`), the window title, and
  `rc_hooks_init()` for hand-written fixes;
- `entries.txt`.

To add another Borland real-mode game, copy one of these directories.

## Disassembling

```bash
RC_EXE=/path/to/EUROPE.EXE python3 tools/emudis.py 1680 150c 1600
```

This prints the relocated code, with runtime segment values and the emulator FPU
instructions decoded, as the translator sees it. It needs `ndisasm` (NASM).
