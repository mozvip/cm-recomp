---
name: decomp
description: Matching decompilation of Championship Manager's EUROPE.EXE, writing C that Borland C++ 3.1 compiles to the original bytes, relinked into a byte-identical executable. Use when asked to decompile a function, add or fix a file in games/cm1/decomp/src, check whether C matches the original, or work on the relink tools in tools/match.
---

# Matching decompilation (CM1 / EUROPE.EXE)

Full background: `docs/matching.md`. Tools: `tools/match/`. Sources: `games/cm1/decomp/src/`.

## Loop

1. Pick a function (runtime `SEG:OFS`, the same numbering as `tools/recomp.py`, `entries.txt`
   and `gen/funcs.h`). `make -C games/cm1/decomp progress LIST=1680` lists a segment's
   functions with their sizes and which are done. `TODO=5` suggests the smallest ones left.
2. `python3 tools/match/disasm.py games/cm1/EUROPE.EXE SSSS:OOOO`: disassembly with the
   names to use:
   - `f_…` calls;
   - `d_5d9c_…` DGROUP data;
   - `seg XXXX` far data;
   - same-segment call notes;
   - 8087 mnemonics for the emulator's `INT 34h-3Dh`.

   The function ends at the next start listed in `games/cm1/gen/funcs.h` (built by
   `make -C games/cm1`), or pass `--len`.
3. Grow the module's C file in address order. `src/1680.C` holds segment `1680` from its
   first function onwards: a C file's code is placed contiguously at `@at`, and callees
   reached with `0E E8` must be defined above the caller. Declare everything else as
   `extern` or with a prototype.
4. `make -C games/cm1/decomp`. For each file it prints `ok` or `DIFF`, with an
   original|rebuilt disassembly around the first difference, and at the end whether the
   whole executable is IDENTICAL.
5. To try source forms or options quickly, without linking, compile a copy of the file:
   `python3 tools/match/try.py --show games/cm1/EUROPE.EXE SSSS:OOOO FILE.C ["opts" ...]`.
   The address is the file's `@at`, not the function's.
6. When a long function differs, `python3 tools/match/icmp.py games/cm1/EUROPE.EXE
   games/cm1/decomp/build/link/EUROPE.EXE SSSS:OOOO` compares the instruction streams of
   the linked executables and shows the first real difference, ignoring shifted jumps and
   addresses. After icmp says "no instruction difference", a remaining byte difference is
   a constant or segment value; `tools/match/exediff.py … -v` shows where.
7. `make -C games/cm1/decomp identity` must always say IDENTICAL. It checks the tools,
   independently of any C.

## Finishing a module

When a C file covers a whole original module (all its code segment, from its first
function, and its data block), add `/* @module */`. The build then links BCC's own object
instead of merging it into the blobs (see docs/matching.md). An identical executable then
also proves the relocation order, that is the function order and layout of the original
source file. `src/144E.C` (`main`), `src/14B7.ASM`, `src/14D2.C`, `src/1680.C`, `src/1A51.ASM`, `src/1AB2.ASM`,
`src/1AB9.ASM`, `src/1B05.ASM`
and the overlays `src/67EE.C`, `src/6E68.C`, `src/7555.C` and `src/7EEB.C`
are linked this way.

- An overlay can be `@module` too (all its code, `@at` its first function). Only the
  functions with a stub entry in the original may be public: make the others `static`
  (the build lists them).
- `@data` is the module's first *even* address: `_DATA` is word aligned, so an odd byte
  before it is the previous module's padding (14d2's table is at `1d00`, not `1cff`).
- A file's `_DATA` is all its variables, then its literal pool. Data after the literals
  belongs to another module: leave it `extern` (14d2's fonts at `1e90`).
- Pointers in the data are fine: the module's own DGROUP relocations are then made by its
  object.

## Assembly modules

Code with no stack frames, `cli`/`iret`, or `in`/`out` sequences was written in assembly
(14b7 is the keyboard driver). Write `src/SSSS.ASM` with the same `@at`/`@data`/`@module`
comments after `;` (see `src/14B7.ASM`): its code segment is `CSEG_ segment byte public
'CODE'`, its data `_DATA segment word public 'DATA'` in `DGROUP group _DATA`, and it uses
the C names (`_f_…`, `_d_5d9c_…`) as publics and `extrn`s. It is assembled with TASM 3.1
`/ml` (`@tasm30` for 3.0) through the turbo-cpp skill.

- A forward `jmp` with no `NOP` after it is `jmp short`: in its single pass TASM
  reserves 3 bytes for a plain forward `jmp` and pads the short form with `NOP` (`EB xx
  90`). `/m2` (two passes) drops the padding: a module whose forward jumps are short
  with no `NOP` was assembled that way (`; @flags /m2`, as 1ab9).
- Code addresses stored as data (`mov word ptr [bp-6], 0A7h` then `jmp word ptr
  [bp-6]`) are `offset label`; the value is the segment's runtime offset (1ab9's code
  starts at offset 4 of its paragraph).
- Register-to-register forms show the operand order: `xchg al, ah` is `86 C4`, `xchg ah,
  al` is `86 E0`.
- `mov ax, 0` stays `B8 00 00`; TASM picks the short forms itself (`83` with an 8-bit
  immediate, `A1`/`A3` for `AX` with a direct address).
- A call to a `far` proc of the same segment is `0E E8` (TASM makes it near). A forward
  one needs `call far ptr name` and leaves a `NOP` after it (`0E E8 rel 90`); a `90 0E E8`
  can then just be a `jmp` padding followed by a backward call. The `push cs` is part of
  the call: don't write it as well (`0E 0E E8`). Under `/m2` a forward call needs no
  `far ptr` and gets no `NOP` (1b05).
- `jnc ok / jmp err` pairs (`73 03 EB xx 90`) were written that way; TASM does not expand
  conditional jumps without `JUMPS`.
- An asm module's data can hold variables that C modules use (14b7's holds 14d2's flags
  at `1cea`-`1cee`): make those `public`.

## Other games (CM93, CM94)

The games share source modules. Before decompiling a module of another game, port CM1's
file with `tools/match/port.py` (see docs/matching.md, "Porting to another game"), then
fix what it reports:
- `unmapped_…` names: find the counterpart (`disasm.py` on the other game);
- the functions the build lists as differing (`part X.C: n/m functions match`): the game
  changed them, edit the C;
- data the other game keeps in another module (a ported file's data must be exactly its
  module's block there).

`games/cm93/decomp` works like CM1's (`make`, `make identity`, `make progress`); its game
code was compiled with Borland C++ 3.0 (`CC_TC := bc30`). `src/1BD3.C` is complete.

## The runtime

The Borland runtime, emulator and overlay manager are linked from the stock libraries
(`LIBS` in each game's Makefile; `tools/match/libmods.py`, docs/matching.md "The runtime
from its libraries"): never decompile segment 1000's runtime or the overlay manager. If a
change to the tools breaks it, `make identity` says so; its error names the module and
segment that do not fit.

## Names

- `games/cm1/decomp/symbols.txt` holds the Borland runtime (`strcpy`, `memset`,
  `sprintf`, `F_FTOL@`...), generated by `tools/match/libsyms.py`. Include the standard
  headers (`<string.h>`, `<stdio.h>`, `<mem.h>`) and call the functions by name.
- Anything else: `f_SSSS_OOOO`, `d_SSSS_OOOO` (runtime numbering), or a name from
  `games/cm1/names.txt`.

## Codegen facts (Borland C++ 3.1, `-ml -O1 -k -Ol`)

- **Options:** `-O1 -k -Ol` is the only set that has matched everything so far.
  - `-Oe` (register allocation, in `-O1`) makes parameters and locals live in `DX`/`CX`.
  - `-Ol` turns clear/fill loops into `rep stosw` (the loop variable's final value is then
    stored after it).
  - `-O2` duplicates epilogues; `-O1` without `-k` drops the stack frame of functions
    without parameters; plain `-O -Z` misses `-Oe`.
- **Calls within a module:**
  - `0E E8` (push cs / call near): the callee is defined *earlier in the same C file*.
  - `90 0E E8` (nop / push cs / call near): TLINK rewrote a far call to a *later* function
    of the same segment. A prototype is enough.
  - `9A off seg`: a far call to another segment, or to an entry `f_SSSS_OOOO` of another
    overlay.
- **Data:**
  - DGROUP data is DS-relative: `extern int d_5d9c_XXXX;`.
  - Far data (`mov ax,SEG / mov es,ax / es:[…]`) is `extern T far d_SEG_OFF[];`.
  - In `extern char far a[], b[];` **only `a` is far** (Borland binds `far` to the
    declarator). Declare far arrays one per line.
  - `huge` arrays (every index goes through `F_PADD@`) are often 2-D tables with
    constant rows: `0x84F8` = 20 × 1702 means `h[20][i]` of `unsigned char huge h[][1702]`.
    Look for a row size that divides all the constants.
  - A stride (`imul 0x34`, `shl 5`...) gives the inner dimension: `int far t[][26]`.
- **Far-pointer arguments:** `push ds / mov ax,OFS / push ax` is `&x[i]` of DGROUP data as
  a far pointer. If the offset is computed *before* `push ds`, the source had a cast,
  `(void *)&x[i]`.
- **Conditions:**
  - `cmp x,4Fh / jle` is `x <= 79`; `cmp x,50h / jl` is `x < 80`. Keep the original's
    constants.
  - A chain `cmp ax,2 / je … cmp ax,3 / je …` in `AX` (short `3D` form) is an `if (x == 2
    || x == 3 …)` compiled with `-Oe`. A `switch` gives a jump table here.
  - Testing a `char` function's result with `or al,al` is `if (f())` or `if (f() == 0)`;
    `!f()` gives `cbw / or ax,ax`.
- **Values and expressions:**
  - A constant loaded into `CX` once and stored several times is a local variable
    (`int n; n = 1700; a = n; b = n;`), which `-Oe` keeps in `CX`.
  - `char` functions returning `mov al,0FFh` / `mov al,0` are `return -1` / `return 0`.
  - The operand order of `+` shows in which register ends up the destination: `x / 20 +
    f()` and `f() + x / 20` compile differently.
  - `float`/`double` functions return in `ST(0)`. Arguments declared `float` in a
    prototype are pushed as 4 bytes (`sub sp,4 / fstp dword`).
- **More source-form tells:**
  - `x == -1` on a float compares with a 4-byte constant; `x == -1.0` stores an 8-byte one.
  - A boolean used as a value (`mov ax,1 / xor ax,ax`) is `a == 0`, `a && b`...;
    `mov al,1 / mov al,0` is a `char` ternary. The branch order shows which condition was
    written: `jne` to the 0 means `x == 0 ? 1 : 0`.
  - A near pointer passed to a varargs function (`sprintf`) is pushed with `push ds`
    only if the source cast it: `(char far *)names[i]`.
  - Two calls that differ only in one argument, with a shared tail, are an `if/else` of
    two calls (the compiler merged the tails), not a `?:` argument.
  - `jcc next / jmp X` (a jump over a jump, even when a short `jcc X` would reach) ends an
    `if`/`else if` whose body the compiler merged with an identical body elsewhere: write
    the statement again in its own branch. A condition that jumps straight to `X` is an
    `||` term of the same branch. Chains of `else if (…) f();` with the same `f()` look
    like one big condition this way.
  - A jump into the middle of a loop body (menu code entering the week loop) is a `goto`.
  - `while (x < N)` with a long body compiles as `jmp cond … cond: cmp / jge out / jmp
    body`.
- **Statement shapes:**
  - `char far *p = buf[n++];` (an initialiser) and `p = buf[n++];` (an assignment) place
    the increment differently.
  - `x = x + y` and `x += y` can compile differently; so can `for (;;) { … break; }` and
    `while (…)`.
  - An assignment inside the condition (`if ((c = f()) …)`) keeps the value in a
    register; a separate statement reloads it from memory.
  - The declaration order of locals decides which ones `-Oe` puts in `SI`/`DI`.
- **Prototypes and calls:**
  - A `char` argument pushed as `mov ax,N` (a word) where the callee reads only the byte
    means no prototype was in scope: declare the callee without parameters (`void f();`)
    and define it old-style (`void f(c) char c; {...}`), whose code is the same.
  - Loop counters in `CX` while `SI`/`DI` hold other variables: the loop had its own
    variable (`for (i = y; ...)`), not the parameter or the handle it starts from.
  - A pseudo-register compared signed (`jl`) needs a cast: `(int)_CX >= 400`.
- **Inline asm and BIOS calls:**
  - A function with `asm` keeps no register variables of its own: write `_SI` for a
    counter the original keeps in `SI`.
  - Stack locals read around `asm int 10h` need `volatile`, and a BIOS call written as
    `asm int 10h` rather than `geninterrupt` avoids tail merging.
  - `_AX = 0` compiles to `xor ax,ax`, `asm mov ax, 0` to `B8 00 00`. The built-in
    assembler has its own encodings (`31 C0`, `89 D1`); raw `asm db …` bytes reproduce
    anything else.
  - `EUROPE.EXE` is a cracked copy: the protection check at `14d2:12c6`-`12d0` is patched
    with NOPs, so `14D2.C` writes those bytes with `asm db`.
- **Functions the recompiler missed:** a gap between two listed functions can hold one
  that is only reached through a pointer (`1680:1A82`, `1680:331C`). Some listed starts
  are really in the middle of a function (bad `entries.txt` lines, like `1680:2D8E`).
  Follow the code, not the list.
- **Initialised tables** (pointer tables, button positions) come first in `_DATA`, in
  definition order, but their initialiser strings go into the literal pool where the
  definition appears in the source. A table whose strings sit between two functions'
  literals was defined between them: write it there (`static` in an overlay, whose only
  publics are its stub entries). 67EE.C has five.
- **Float constants are shared by their bytes**: a constant whose 4 bytes already sit in
  the pool (the end of a string and the start of another float) takes no slot of its
  own (6e68's 2.0 at 43df). Write it as a literal; BCC does the same.
- **A table read from entry 1** (`t[i - 1]`, or `(t - 1)[i]`) is folded into positive
  displacements in the original, but BCC computes a negative odd field offset at run
  time (`mov dx,-6 / inc dx`): read it through an `extern` one entry before the table
  (6E68.C's `d_5d9c_3afe`, the linker resolves it by address).
- **A call with more arguments than the callee reads** (`38b3` passes two to `4165(int)`)
  had no prototype in scope: declare the callee `void f();` (7555.C).
- **Register order SI/DI** that no declaration order gives: an old-style definition with
  `register` parameters (`f(a, b, team, n) int a, b; register int team; int n;`, 7555:38b3).
- **Tail merging:** when BCC merges identical call tails into the *first* copy where the
  original kept the *last*, a code-free statement (`0;`) after a `for` loop that ends its
  block changes the choice (67ee:4060).
- **Locals:** later declarations get lower addresses; a local declared in an inner block
  is placed below the function's own temporaries (`FILE *fp` in 67ee:4e10, `k` in
  67ee:0e4c).
- **Literals** go to the file's `_DATA` in the order the functions use them: exact
  float constants as 4 bytes, others (0.1) as 8, strings not merged (no `-d`). Give the
  address with `/* @data 5d9c:OOOO */`: the first literal of the module's pool.

## Constraints (tools reject or cannot match otherwise)

- Initialised data only with `@data`. No `_BSS`: define no uninitialised variables in C;
  declare them `extern`.
- One code segment per file, placed contiguously at `@at`.
- From an overlay, only the entries of other overlays can be called, as in the original.
- A C file never spans two original modules (the relocation runs); the build reports it.

## When a tool, not the C, is wrong

`make identity` failing, or `build.py` raising instead of reporting `DIFF`, is a bug in
`tools/match`. The TLINK behaviours they reproduce are listed in `docs/matching.md`.
`tools/match/exediff.py ORIG REBUILT -v` shows which part of the executable differs:
header, relocations, per-segment image, overlays.
