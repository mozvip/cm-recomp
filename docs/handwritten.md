# Replacing translated functions with hand-written C

The translated code can be replaced one function at a time by C written by hand. Each
replacement is checked against the translation it replaces while the game runs, so the
game keeps working at every step.

## How it fits together

| File | Content |
|---|---|
| `games/<game>/overrides.txt` | One `SEG:OFS name` per line: the functions that are hand-written |
| `games/<game>/src/*.c` | The hand-written functions (compiled with warnings, unlike `recomp/`) |
| `games/<game>/names.txt` | Optional `SEG:OFS name` lines: names for translated functions (see [Naming functions](#naming-functions)) |
| [`runtime/hand.h`](../runtime/hand.h) | `RC_REPLACE`, argument and return helpers |
| [`runtime/verify.c`](../runtime/verify.c) | The `RC_VERIFY` differential check |

For a function listed in `overrides.txt`, `recomp.py` emits the translation as
`f_SSSS_OOOO_orig` instead of `f_SSSS_OOOO`. The direct calls in the translated code and the
dispatch table used for calls through pointers still name `f_SSSS_OOOO`, which is now the
hand-written one. `RC_REPLACE` defines it as a small wrapper that runs the body, or, under
`RC_VERIFY`, runs both versions and compares them.

## Naming functions

A function named in `names.txt`, or in `overrides.txt`, is emitted as `fn_<name>`: the
translation defines it, and every call and the dispatch table use it. `f_SSSS_OOOO` stays a
symbol too, an alias of the same code, so hand-written code can use either name, and a
name can be changed without touching `src/`. The `fn_` prefix keeps names such as `strlen`
or `delay` from clashing with the C library.

For a function in `overrides.txt`, `funcs.h` defines `fn_<name>` as `f_SSSS_OOOO`, so the
calls reach the hand-written version, and the translation is `fn_<name>_orig` (alias
`f_SSSS_OOOO_orig`).

Names are only a change of spelling: the compiled code is the same with or without them.
They show in `recomp/`, in gdb and profilers, and in the runtime's messages, which give an
address as `name+0xN` (the function starting nearest below it; functions are not always
contiguous, so it is a guess). A name must be a C identifier and unique, and the two files
must not give one function different names. A name for an address where no function
starts is reported and ignored.

## The calling convention

A replacement is called exactly like the original: it works on the emulated registers
(`cpu`) and memory, takes its arguments from the emulated stack and must return like the
original did. For the Borland C code in these games:

- Arguments are pushed right to left, and the caller removes them. At entry, SP points at
  the return address, which is 2 bytes for a near call or 4 for a far call.
  `FAR_ARG(k)` / `NEAR_ARG(k)` read argument word `k`, which is `[bp+6+2k]` / `[bp+4+2k]`
  in the disassembly. `FAR_ARG_PTR(k)` reads a far pointer.
- Results are returned in AX (`RET16`) or DX:AX (`RET32`, `RET_PTR`).
- The function ends with `RET_FAR()` / `RET_NEAR()`, which pop the return address. `retf`
  also restores CS. Use `RET_FAR_N(n)` for `retf n` (Pascal convention).
- SI, DI, BP, DS, SS and SP must be the same on return. AX, BX, CX, DX, ES and the flags are
  scratch.

The third argument of `RC_REPLACE` says which registers `RC_VERIFY` compares:
`RC_ABI_VOID`, `RC_ABI_16` (plus AX), `RC_ABI_32` (plus DX:AX), or `RC_ABI_ALL` for an
assembly helper whose callers may rely on any register or flag.

Memory accesses go through `RB`/`RW`/`WB`/`WW` (see [`runtime/cpu.h`](../runtime/cpu.h)).
Offsets wrap inside the segment like on the 8086, and `PTR_RB`/`PTR_WB` do this for far
pointers.

A replacement can call translated code the way the translation does, with
`CALLF(seg, ret, f_SSSS_OOOO())` after pushing the arguments. Include `funcs.h` for the
declarations.

## Workflow

1. **Pick a function.** Start with leaves, which call nothing, and with the Borland
   runtime library (string, memory and conversion functions, the long-arithmetic helpers).
   They are small, easy to recognise and called from everywhere, so they get tested hard.
   Then move on to the game's own utilities, and work up the call graph.
2. **Read it** in `recomp/seg_SSSS.c`, where every statement is preceded by the instruction as
   a comment, or with `tools/emudis.py` or Ghidra.
3. **Add it** to `overrides.txt` and write the replacement in `src/`. At first, keep the
   original's data layout: read and write the game's variables in emulated memory.
4. **Build and check:**
   ```bash
   make -C games/cm1 -j$(nproc) GAME_DIR=/path/to/champman
   cd /path/to/champman && RC_VERIFY=all SDL_VIDEODRIVER=offscreen SDL_AUDIODRIVER=dummy \
       CM_TEST_CLICKS="..." timeout 60 /path/to/cm-recomp/games/cm1/cm1_rc n
   ```
   At exit, a line per replacement gives the number of calls that were identical. On the
   first difference, the game stops with the caller's return address, the arguments, and the
   registers and bytes that differ. `RC_VERIFY=rc_strlen,rc_strcmp` checks only some
   functions. `RC_VERIFY_KEEP_GOING=1` continues with the translation's result.
   Use the scripted runs in the game READMEs to reach the code being replaced.
5. **Commit** `overrides.txt` and `src/`. Write the replacement from your understanding of the
   function; do not copy generated code into `src/`, because `recomp/` is derived from the game
   and is never committed.

## What RC_VERIFY does and does not check

A checked call saves the registers, the 1 MB of memory, VGA memory and the FPU. It runs the
translation, saves the result, restores the saved state, runs the replacement, and compares
the registers selected by `RC_REPLACE`, all of memory, VGA memory and the FPU stack.

- The stack below the caller's SP is ignored, because it holds the callee's dead frame. The
  limit is 4 KB (`RC_VERIFY_STACK`).
- Timer interrupts are held back during the comparison, so that both runs see the same
  state.
- A call whose original uses interrupts or I/O ports (DOS, BIOS, mouse, VGA registers, OPL)
  cannot be run twice. It is reported once and not compared, and the translation's result is
  kept. Such functions have to be checked by running the game: compare frame dumps
  (`CM_DUMP_FRAMES`) and saves with a build without the replacement.
- A replacement called while another one is checked is not checked itself.
- Each checked call copies about 3 MB, so the game runs slower with `RC_VERIFY` on.

## Later steps

Once the code on both sides of a call is hand-written, the call can become an ordinary C
call with typed parameters. Only calls that cross into translated code still need the
emulated stack. Game variables can then move from emulated memory to C globals and
structs, with accessors while translated code still uses them. Championship Manager and
CM93 share much of their code, so a replacement can often be listed in both games'
`overrides.txt`, under each game's own address.

## Mods

Code that changes the game's behaviour on purpose (games/cm93/src/mods.c) is not an
`RC_REPLACE` replacement: it wraps the translation (`f_SSSS_OOOO_orig`) and is never
verified. Its switch and settings are declared as an `rc_mod` and registered with
`RC_MOD_REGISTER` ([`runtime/mod.h`](../runtime/mod.h)), which puts it in the F12 overlay
and the mods file:

```c
static rc_mod_setting pause_settings[] = {
    { .key = "ms", .label = "Pause", .env = "CM_PAUSE_MS", .value = 150, .min = 0, .max = 1000, .format = "%d ms" },
};
static rc_mod pause_mod = {
    .key = "pause", .name = "Pause", .desc = "What the mod does.",
    .env = "CM_PAUSE", .on = 1, .settings = pause_settings, .nsettings = 1,
};
RC_MOD_REGISTER(pause_mod)
```

The overlay can change `on` and the settings at any time, so the mod reads them on every
call rather than once.
