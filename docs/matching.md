# Matching decompilation

The goal: C sources that Borland C++ compiles and TLINK links into an executable that is
**byte-identical** to the original `EUROPE.EXE`. The work is gradual. The original is cut
into object modules made of its own bytes ("blobs"), and decompiled C replaces those bytes
one function at a time. After every step, the relinked executable is compared with the
original.

This is separate from the static recompiler (`tools/recomp.py`, `games/*/gen`). The
recompiler produces a native Linux program. The matching decompilation produces the DOS
program again, from C.

## Quick start

```bash
make -C games/cm1/decomp                 # compile src/*.c, relink, compare
make -C games/cm1/decomp identity        # relink without any C: must say IDENTICAL
make -C games/cm1/decomp progress        # how much is done (LIST=1680, TODO=5)
python3 tools/match/disasm.py games/cm1/EUROPE.EXE 1680:1a91    # a function to decompile
python3 tools/match/try.py --show games/cm1/EUROPE.EXE 1680:0003 FILE.C "-ml -O1 -k -Ol"
```

`GAME_DIR` defaults to `games/cm1`, the directory that holds `EUROPE.EXE`. DOS tools run
headless in DOSBox-X (`.claude/skills/turbo-cpp/scripts/tcdos.sh`). A build takes a few
seconds.

Output:

```
  ok   1680.C (1680:0003, 52 bytes)
  ok   67EE5608.C (67ee:5608, 57 bytes)
  DIFF 67EE44B1.C (67ee:44b1, 17 bytes): 2 bytes differ, first at +0009
   * 0009 7d 25   jge ->0030     | 7f 25   jg ->0030
3/3 C files match; executable IDENTICAL
```

## Toolchain

The toolchain was identified from the executable:

| What | Evidence | Tool used |
|---|---|---|
| Compiler | Code only reproduces with the global optimiser (a variable kept in `DX`, `ES` loads not repeated). Turbo C++ 3.0 lacks it. | Borland C++ 3.1 `BCC`, `tools/BCC31` |
| Options | `-ml -O1 -k -Ol`: large model, size optimisation with register allocation (`-Oe`), a standard stack frame, and loop compaction into `rep stosw`. No string merging. `-O2` duplicates epilogues; `-O -Z` lacks `-Oe`. CM1 and CM93 add `-y` (line numbers in the objects): it changes which copy of identical branch endings BCC keeps, which 8352:46de and 8aa1:5253 need (see merged tails below). | per file: `@flags` |
| Linker | Header signature `FB 50 "jr"`, VROOMM overlays | TLINK **5.0** (Turbo C++ 3.0, `tools/TC`). BCC 3.1 ships 5.1. |
| Link date | `__EXEDATE__` in the overlay table = `1A 08 C8 07` | DOS date set to 26 Aug 1992 |
| Runtime, emulator, overlay manager | Byte for byte the stock modules: CM1 Borland C++ 3.1's, CM93 3.0's, CM94 4.02's | linked from the libraries (see below) |

## How the relink reproduces the executable

[`tools/match/exemodel.py`](../tools/match/exemodel.py) reads the executable.
[`tools/match/mkblobs.py`](../tools/match/mkblobs.py) writes the objects.

- **Segments.** The overlay manager's segment table (`_EXEINFO_`, 55 entries) is TLINK's
  list of logical segments in map order, so it gives every segment's start, size and kind:
  - 16 root code segments;
  - the far data segments;
  - `_OVRGROUP_` (`_OVRDATA_` … `_EXEINFO_`);
  - 10 stubs;
  - DGROUP (`_DATA` … `_BSSEND`);
  - `_STACK`.

  Alignment follows from the gaps. The first object module (`U00`) declares every root
  segment in this order, which fixes the layout.
- **Relocation order.** TLINK writes MZ relocations in the order it meets fixups, module
  by module. The original table is therefore a sequence of runs, one per module and
  segment: `c0`, each game module (code, then its DGROUP and far data), the runtime
  library, the overlay manager. Each run becomes one object module holding that piece of
  the segment, with its fixups in the original order (Borland emits code fixups in
  descending address order, data fixups in ascending order).
- **Overlays.** Each overlay is its own object module, linked inside `/o … /o-`. TLINK
  gives every public symbol of an overlaid module a stub entry, in reverse order of the
  public definitions. So the object defines exactly the original entries as publics
  (`f_SSSS_OOOO`), in reverse. Calls into an overlay are fixups to those symbols.
- **Far calls within a segment.** TLINK 5.0 rewrites `CALL FAR seg:off` to a function of
  the same segment as `NOP / PUSH CS / CALL NEAR` (`90 0E E8`). It still keeps the
  relocation slot, or overlay fixup slot, that it reserved. That is why the original header
  is one 512-byte block longer than its 2580 relocations need, and why each overlay's
  fixup list is followed by zeros. The blobs hand TLINK the far calls back, with the `9A`
  opcode in the same record, and TLINK redoes the rewrite.
- **Symbols TLINK wants.** TLINK only generates the stubs and `_EXEINFO_` if an overlay
  manager is present. It recognises one by `__OVRTRAP__` (at `_STUB_:0`) and by
  references to the symbols it defines itself (`__SEGTABLE__`, `__SEGTABEND__`,
  `__EXENAME__`, `__EXEDATE__`). `__EXENAME__` is the output file name, so the output must
  be called `EUROPE.EXE`.
- **Segment words.** Fixups to `_OVRGROUP_` members address the segment itself.
  Through a symbol they would get the group's frame.
- **Header size.** TLINK sizes the header for the relocations plus a slot for each far call
  or far jump it makes near (`90 0E E8`, `90 90 E9`; the blobs hand both back), rounded up
  to 512 bytes. It also reserves slots for fixups in debug information (`$$SYMBOLS`), which
  it then drops. CM Italia's header has one slot more than its far calls explain (a module
  compiled with `-v`, probably): U00 then carries that many debug fixups, in a segment TLINK
  does not output.
- **Stack.** `SS:SP` comes from the stack-combined part only: `c0`'s 0x80-byte `_STACK`.
  The other 0x90 bytes of the segment are a public contribution.

## The runtime from its libraries

The Borland runtime, the 8087 emulator and the overlay manager are stock library modules,
linked after the game's own modules. With `LIBS` set in a game's Makefile (the startup
object and the libraries, in any order), the build links those modules themselves instead
of blobs of their bytes ([`tools/match/libmods.py`](../tools/match/libmods.py)):

```make
LIBS := $(addprefix tools/BCC31/LIB/,C0L.OBJ EMU.LIB MATHL.LIB CL.LIB OVERLAY.LIB)
```

| Game | Libraries | Linker | Modules |
|---|---|---|---|
| CM1 | Borland C++ 3.1 (`tools/BCC31`) | TLINK 5.0 (`tools/TC`) | 124 |
| CM93 | Borland C++ 3.0 (`tools/BC30`) | TLINK 5.0 | 125 |
| CM94 | Borland C++ 4.02 (`tools/BC4`) | TLINK 6.10 (`LD_TC := bc4`) | 149 |
| CM Italia | Borland C++ 3.0 | TLINK 5.0 | 127 |

How the modules are found and put back where they were:

- **Code.** Each module's code must occur exactly once in the executable (fixup bytes are
  wildcards; a far call or jump may have become TLINK's `90 0E E8` / `90 90 E9`). Tiny
  modules that occur in many places fill the gaps left, in library order. Identical modules
  at one place (`MEMCPY`/`FMEMCPY`): the one other modules need. Overlapping matches: the
  longer one; a match needing names no given library defines is replaced by modules that
  tile its range (`GREGISTR`, which needs the BGI library, where `DEL`+`DELARRAY` are).
- **Order.** TLINK extracts modules library by library (in command line order, which differs
  between the games and is read from the order of the code), pass by pass, each pass in
  library file order: in each code segment the passes show as runs of increasing file
  position.
- **Data.** The startup object's contributions start their segments; the library modules'
  fill the segments' tails in link order. A module's references to its own data, and the
  references to the data-only modules (`_streams`, `_ctype`, `_openfd`...), give their
  addresses in the original; the rest is packed backwards from each segment's end, with the
  segment alignments (an empty paragraph-aligned contribution still aligns what follows),
  against the original bytes. Data-only modules nothing anchors are linked only where a gap
  needs exactly their bytes; names the game defines itself (`_stklen`, `_ovrbuffer` in
  some games) leave the library's module out.
- **Segments.** The library segments get their real names (`EMU_PROG`, `E87_PROG`, BC4's
  second code segment `_TEXTC`). U00 then only declares segments, with the attributes of
  their first real contributor; the startup object follows it, and U00's pieces come after
  that (c0's labels, `edata@`..., start their segments). The stack is c0's stack-combined
  `_STACK` with EMUVARS's common one laid over it, so U00 does not declare it.
- **Names.** Library externals the game defines (`_main`, `_errProc`) are defined at the
  addresses the original's fixups resolved to.

`make identity` and the builds use `LIBS` when it is set; `make progress` counts the
library code as done.

## Writing C

Put files in `games/cm1/decomp/src/`. Names must be 8.3; by address (`67EE5608.C`) or by
module is fine. Each file states where its code goes:

```c
/* @at 67ee:5608 */          /* runtime SEG:OFS of the first function, as in tools/recomp.py */
/* @flags -O1 -k */          /* optional extra BCC options */

extern int d_5d9c_9f67;      /* DGROUP data at 5d9c:9f67 */
void f_1680_1ad8(int);       /* a root function */
void f_6e68_33d9(int);       /* an entry of another overlay */
void f_67ee_5641(int);       /* same overlay, defined after this one */

void f_67ee_5608(void) { ... }
```

The compiled code replaces the original bytes from `@at` onwards, for the code's own
length. The file's initialised data (`_DATA`: initialised variables, string literals,
floating-point constants) replaces the bytes from `/* @data SSSS:OOOO */` onwards. Borland
lays out the variables in source order, then the literal pool in the order the functions
use it: exact float constants as 4 bytes, identical constants shared, strings not merged. So a module's
file reproduces the module's own data block, from its start. `1680.C` starts at `2970`
with a tactics table, followed by the literal pool.

Symbols are resolved by address:
- `f_SSSS_OOOO` and `d_SSSS_OOOO` in runtime numbering;
- names from `games/cm1/names.txt`, then from `games/cm1/decomp/symbols.txt`, which holds
  the Borland runtime found by `tools/match/libsyms.py` (so the C calls `strcpy`,
  `memset` or `sprintf` through the standard headers);
- the functions and data of other C files, by name.

Absolute symbols are added in by the linker. That covers the 8087 emulator fixups
(`FIDRQQ`...), which turn 8087 opcodes into `INT 34h`–`3Dh`, as the game uses.

Runtime numbering is what the recompiler, `entries.txt` and the IDA/Ghidra databases use:
load segment `0x1000`, overlays at their flattened segments `67ee`…`a1c3`, DGROUP `5d9c`.

`disasm.py` prints a function with these names already filled in.

### Whole modules

A file that is a complete original module says `/* @module */` (with its `@at` and
`@data`). It is then not merged into the blobs: BCC compiles it with the code segment named
after the original module's (`-zC`), and TLINK links that object, unmodified, in the
module's place in the link order. The blob unit holding the module's code is dropped, the
DGROUP bytes its `_DATA` covers are cut out of the blob before it, and every external the
object uses becomes a public of `U00` at its address, including absolute ones (the 8087
emulator's `FIDRQQ`…, `__turboFloat`).

The blob piece holding a module's data is split around it: the bytes before the data go
into a new unit linked just before the object, and the bytes after it into one just after,
as needed, so DGROUP keeps the link order. The part moved never has relocations. A module
whose data holds pointers has its own DGROUP relocation run after its code; the object then
makes those relocations, which keeps their order as long as no other relocations lie in
between. A code segment without relocations has no unit of its own (U00 holds it with
the other ones): U00 keeps it as an empty piece, which still declares the segment in its
place, and the object is linked right after the blob piece holding its data, whose tail
follows it in a new unit (1a51, 1ab2, 1ab9). This is done last, in address order, once the
modules that have units of their own have split the data: their data then sits between
them in the right order (1b05's palette follows 1a51's and 1ab2's data but its code unit
comes before the data blob). Other `@module`
objects' publics are not redefined in `U00`, so whole modules can call each other.

An overlay's object goes right after the blob piece holding its data. TLINK numbers the
overlays in link order, so the lower overlays not placed yet are linked just before it,
and keep that place; those already placed stay where they are (67ee, then 7eeb, both in
the big `_DATA` piece; 8352, linked as blobs, goes before 88c9 and stays there when 9100
is placed).

`_DATA` is word aligned: a module's data starts at an even address, and an odd byte before
it is the previous module's padding. Borland lays out all of a file's variables first and
its literal pool after them, so data after a module's literals belongs to another module
(the fonts at `5d9c:1e90`-`2970`, between `14d2` and `1680`, come from a data-only module).

`games/cm1/decomp/src/144E.C` (`main`), `14D2.C` and `1680.C` are linked this way. The executable is still identical,
relocation table included. So BCC wrote the module's 2197 fixups in the order the original
object had them, which means the file has the original's function order and record
boundaries.

### Whole overlaid modules

An overlaid module (one overlay: its whole code) can be `@module` too. Its `@at` is the
overlay's first function (`/* @at 7eeb:0000 */`), and BCC names its code segment after
the overlay's (`-zC`). TLINK gives each public of an overlaid module a stub entry, in the
reverse order of the public definitions. BCC writes the publics in reverse order of each
function's *first declaration*, so the entries come out in that order: declare the file's
functions (prototypes) in address order at the top. The functions with an entry in the
original must be the public ones, the others `static`. The build checks both and names
the functions to change.

An overlaid module must be one object. With several objects in one overlay, TLINK lists
the first object's entries, then the other objects' from the last to the second, so no
link order of three or more files both lays out the code and gives the original entries.

In the original link the overlaid modules came after the root modules and before the
libraries (their data lies there in DGROUP, and their data relocations sit in the same
relocation run as 1680's). The relink keeps them there: the overlay units follow the root
ones between `/o` and `/o-`. An overlay whose object has data is linked right after the
blob piece holding the bytes before its data, with the overlays before it in number; the
rest of that piece follows it, then the remaining overlays in a second `/o` block. CM1's
overlay 4 (`src/7EEB.C`, 0x41b9 bytes of code and 0x311 of data) is linked this way.

### Assembly modules

Some modules were written in assembly (14b7, the keyboard driver; the ones after 1a51).
`src/*.ASM` files take the same comments after `;` and are assembled with TASM 3.1 `/ml`
(`@tasm30` for TASM 3.0, `@flags` for more options). An `@module` file names its code
segment `CSEG_`, which the build defines (`/dCSEG_=S05_TEXT`) as the original module's
segment name, and declares `DGROUP group _DATA` with `_DATA segment word public 'DATA'`.
Publics and externals follow the C names (`_f_14b7_0004`, `_d_5d9c_1d46`).

`src/14B7.ASM`, `src/1A51.ASM` (James W. Birdsall's EMS interface library 2.16, whose
version and copyright strings end its data), `src/1AB2.ASM` (the music driver interface),
`src/1AB9.ASM` (lines, glyphs and screen saves) and `src/1B05.ASM` (the ILBM loader) are
linked this way; 1ab9 and 1b05 were assembled with `/m2`. TASM 3.0 and 3.1 give the
same executable for 14b7.

A call to a `far` procedure of the same segment is `0E E8` (push cs / call near), made by
TASM: backward, `call name`; forward, `call far ptr name`, which leaves a `NOP` after it
(`0E E8 rel 90`, the 5 bytes it reserved).

TASM is no way into a C module: `BCC -B` (compile via assembly) changes the code (for one,
TASM writes a call to a later function in the segment as `90 0E E8` itself, where BCC writes
`0E E8`).

### A function the compiler will not reproduce: `__emit__`

When C gives the right instructions but BCC lays them out differently, the function can
stay in its C file as the original bytes. `__emit__(...)` puts constants into the code
(a constant up to 0xff is one byte; cast bytes 0x80 and up to `(char)`), and also
addresses with their fixups:

- `(char near *)"text"`: the DGROUP offset of a string literal, which lands in the module's
  literal pool in code order, as the compiler's own would;
- `(char _seg *)d_1f3e_4806` and `(char near *)d_1f3e_4806`: the segment and the offset of
  far data;
- `(char)0x9a, f_992a_700a`: a far call to another segment (an offset and a segment fixup,
  where BCC would write one ptr32 fixup: the executable is the same).

Not a far call within the segment: TLINK only makes `90 0E E8` (reserving a relocation)
of a ptr32 fixup. Write those calls in C between the `__emit__`s, with the register the
original pushes (`f_7eeb_1d0d(_SI, 0x4c, 0x4d)`). `_SI = team; _DI = b;` at the start make
BCC save SI and DI and load the parameters as the original does, and the epilogue follows
the last `__emit__`; jumps are written as their original bytes. CM1's `f_7eeb_1afc` was done
this way until `-y` was found (below): written in C, BCC merged seven identical call tails
into the first copy, where the original has them in the last one (BCC keeps the last copy
only when an earlier jump to the same place has nothing in common with the code before
it; no source form gave that without `-y`).

Small test functions (an `if`/`else if` chain whose branches end in identical calls, like
1afc's) show what decides it: the groups of identical endings are not independent. With a
first branch and trailing branches that end in `strcpy` (1afc's Division and Playoff/
Friendly branches), BCC keeps the cups' shared ending in the first cup; a `return;` after
the chain moves it to the last cup but then sends the `strcpy` group to its first copy
(531 bytes against 529); a first branch ending in an unrelated call keeps both last, as no
other change does. None of 528 placements of one or two code-free statements (`0;`,
`return;`, `goto` to a label after the chain) keeps both groups last, the original's
layout. 8352:46de was the same kind of case, but mixed: the original keeps the first copy
of its `d_5d9c_9b8a = 0` endings and a later one of a message call; no single `0;` among
its 129 statements gives its 2500 bytes, nor any `#pragma option`, nor any single `goto`
between copies. What does is **`-y`**: with line numbers in the object (nothing of them
reaches the executable) BCC's cross-jumping makes other choices, and two `goto`s to the
first `= 0` copy plus two `0;`s then give the original's 2500 bytes. `-y` is in CM1's
`BCCFLAGS` for the whole game: no other function changes with it.

### Rules that come from the compiler and the linker

- **Calls inside one module.** Borland compiles a call to a function *defined earlier in
  the same file* as `PUSH CS / CALL NEAR` (`0E E8`), with no fixup. A call to a function
  only *declared* is a `CALL FAR`, which TLINK makes `90 0E E8` if the callee is in the
  same segment. So:
  - `0E E8` in the original: the callee must be defined before the caller, in the same C
    file;
  - `90 0E E8`: the callee comes later (a prototype is enough).

  `disasm.py` marks both.
- **Overlays.** An overlaid function can only be called from outside its overlay through
  one of that overlay's entries, as in the original. A C file in an overlay may call
  anything inside its own overlay.
- **One code segment and one data block per file.** Initialised data needs `@data`.
  Uninitialised variables (`_BSS`) cannot be placed yet: declare them `extern`.
- **Relocation order.** The compiled fixups take the places of the original ones, matched
  by the relocated word. So a function that matches also keeps the relocation table as it
  was, even when the C file does not line up with the original object's record
  boundaries.

## Porting to another game

CM1, CM93 and CM94 share source modules. CM93 was built with the same compiler and options,
so CM1's C compiles to CM93's code wherever the game did not change.

CM94 was built with **Borland C++ 4.02** (`tools/BC4`, from the Borland C++ 4.0 CD,
volume `BORLANDC_402`): its header signature is `FB 61` (TLINK 6.1; CM1 and CM93 have
`FB 50`, TLINK 5.0), and its startup code says "Copyright 1993". The options are
**`-ml -1 -O1 -Y`**: 186 instructions, smallest code (`-O1`), overlay-compatible code (`-Y`,
the program is overlaid). `games/cmese/decomp/Makefile` sets them with `CC_TC := bc4` and
`LD_TC := bc4`; the identity relink with TLINK 6.10 is identical. The whole game is
decompiled: each module was ported from its CM93 file (one `port.py` run of all of them;
7732, 9E77 and A694 named by hand) and finished in parts with `wip.py`, and every C and
assembly module is linked whole. Some modules turn jump optimisation off part-way
(`#pragma option -O-`, see below), which `wip.py merge` keeps in place.

BCC 4.02 codegen facts (CM94):

- **`-O1`, not `-O2`.** `-O2` (`-Ot`) matches many small functions but not the
  register choices: it keeps a `char` local in `CL` and caches a parameter in `CX`, where
  `-O1` (`-Os`) keeps them in their stack slots (2162:13fc's `char c` at `[bp-1]`, 0c66's
  `int c = fgetc()` stored to `[bp-2]` and compared from `AX`) while an `int` loop counter
  still goes to `DX`. `-Os` also pops a 2-byte argument with `pop cx` (`-Ot`: `add sp,2`).
  `-O-i -O-v -O-g` make no difference under `-O1`.
- **`-Y` suppresses `enter`.** Plain `-1 -O1` makes every frame with locals `enter N,0`;
  the original has `push bp / mov bp,sp / sub sp,N` but still ends with `leave`, which is
  what `-Y` (`-Yo` too) gives. `-Y` also forces the standard frame (`-k`/`-k-` change
  nothing).
- **`push si / push di` in every function** comes from `-Oe` (global register allocation,
  in `-O1`): `-O-e` saves only the registers used, and matches nothing. `-O-l` (5
  functions), `-O-c` (1) and `-Z-` (20) lose matches too.
- **Locals:** scalars are placed in declaration order from `[bp-2]` down (the first
  declared is the highest), as with BCC 3.1; arrays go below all the scalars whatever
  their place in the declarations (2162:065d's `pal[48]`). A swapped pair of stack slots
  is the declaration order (`unsigned k; unsigned t;`).
- A loop over a separate stack variable (`for (y = y1; y <= y2; y++)`, a slot of its
  own) rather than over the parameter (2162:08b5).

```bash
python3 tools/match/port.py games/cm1/EUROPE.EXE games/cm93/CMEXE.EXE \
    games/cm1/decomp/src/14D2.C games/cm1/decomp/src/14B7.ASM --symbols games/cm1/decomp/symbols.txt
```

`port.py` finds where each file's code is in the other game, aligns the two instruction
streams with addresses ignored, and reads the address pairs off the aligned instructions:
function starts, calls, DGROUP variables, far data. It writes the file to the other game's
`decomp/src` with every `f_`/`d_` name and `@at`/`@data` translated (`14D2.C` →
`1BD3.C`), and reports what it could not pair exactly. Unpaired names become
`unmapped_f_SSSS_OOOO`, so the build stops on them. A file whose code mostly has no
counterpart (the game rewrote it, as CM93 did with `main` and reorganised 1680) is not
written; `FILE@SSSS:OOOO` names the counterpart by hand.

A ported whole module usually does not fill its segment at first, because some of its
functions changed. The build then compares each function with the original one its name
gives (`part 1BD3.C: 35/61 functions match`) and leaves the module out of the link until it
matches. Fixing the listed functions, and moving data the other game keeps elsewhere, is
left to hand work.

A segment whose code comes from several of the other game's modules, or that the game
partly rewrote, is ported function by function instead:

```bash
python3 tools/match/port.py games/cm1/EUROPE.EXE games/cm93/CMEXE.EXE --segment 14bc
```

Each function of the segment gets the C of the most similar function defined in CM1's
sources (instruction streams compared with addresses ignored, at least `--min`, default
65%). The pair is aligned and the text renamed as above, the function taking its new
address; the module alignments of all of CM1's files supply the data pairs a single
function does not show. The declarations come from the CM1 file most of a name's users
come from, one per name, renamed as the bodies renamed it, with the types and macros they
need; in a root segment `static` is dropped. Functions with no counterpart stay as
comments naming the closest one. The file goes to `decomp/wip/SSSS/base.C` with only
`@at`, to check with `fcheck.py` and finish by hand. The report lists each function's
source and similarity, a CM1 function used for several (the best pair names it in calls),
unmapped names, and names the CM1 files declare differently (`int t[]` in one, `int
t[][80]` in another), of which the one most users come from is kept. For CM93's 14bc
(111 functions), 58 are ported and 25 of those match at once; the others are game changes
and callees not ported yet.

Other games' link name and date are read from the executable (TLINK's `__EXENAME__` and
`__EXEDATE__`: CM93 was linked as `CMAN93.EXE` on 10 May 1993). CM93's `decomp/` has its
own `symbols.txt`: the library matches plus CM1's hand-found names with identical code
(`port.py --symbols`).

CM Italia (`games/cmitalia`, linked as `CMANITA.EXE` on 10 Nov 1993 with Borland C++ 3.0's
runtime) is the same family as CM93: `CM.EX_` is the executable as linked (the target),
`CM.EXE` the same with its copy protection patched out (`b8e8:20b3`, `push bp` → `retf`).
Its game code was compiled with Borland C++ 3.0 too. Ported: the keyboard driver
(`1F89.ASM`, from CM1) and CM93's `1BD3.C` as `1D5E.C` (99% of the code aligned; seven
values changed: the logo picture `intelek.lbm`, the virtual memory sizes, the EMS size,
two far data addresses), both linked whole.

CM93's game code was compiled with **Borland C++ 3.0** (`CC_TC := bc30` in its Makefile),
like its runtime: BCC 3.0 and 3.1 differ in small register-reuse decisions (1bd3:0157
reloads `DX` before returning a far pointer only with 3.0).

`games/cm93/decomp/src/1BD3.C` (CM1's 14d2, as CM93 changed it) is complete and linked
as a whole module: CM93 requires VGA (the EGA paths are gone), split the start-up into
the title, sound-driver, picture and palette functions (`034d`-`07e6`, partly from an
overlay of CM1), uses a mouse driver when there is one, and dropped the protection screen
from this module.

Status on CM93: the identity relink is identical; `1DFE.ASM` (CM1's keyboard driver) links
as a whole module; `1BD3.C` (CM1's 14d2) has 35 of its 61 functions matching as ported.

## Working in parts

A whole overlay is decompiled in parts, one per agent, then merged into its module file.
`tools/match/wip.py` makes the work folder and does the merge:

```bash
python3 tools/match/wip.py prepare games/cm93/CMEXE.EXE 70a9 [--base ported.C] [--data 60ae:05b9]
# agents write games/cm93/decomp/wip/70a9/partN.c from BRIEF.md and chunkN.txt
python3 tools/match/wip.py merge games/cm93/CMEXE.EXE 70a9 --check [--partial]
```

`prepare` writes `decomp/wip/ssss/`: the disassembly (`ov.txt`) cut at function starts into
chunks of about 3500 bytes (`chunkN.txt`, `bounds.txt`), the strings of the module's data
(`strings.txt`, from the densest run of the addresses the code loads with `push ds / mov
ax, ADDR`), the overlay's stub order, and `BRIEF.md`, the agents' instructions filled in for
the game: compiler and fcheck's `--cc`, the game's matching modules to copy, the entries,
the chunks, the data start, and `notes.md` of the folder (what is known of the module's
tables) when there is one. With `--base` (a `port.py` output) it starts each `partN.c`
from the ported functions of its chunk. It never overwrites `partN.c` or the files below.

`merge` writes `decomp/src/SSSS.C` from the parts: each part's functions of its own chunk
(the stubs of other chunks' functions are dropped), in address order with the comment
before each; the parts' preprocessor lines; the module's prototypes in the order of the
overlay's stub entries (the order of the publics, which TLINK reverses into the stub table);
the parts' declarations, one per name, with the parts that declare a name differently
listed; and from the folder `header.txt` (the module's description), `tables.c` (its
initialised tables, in sections `/* @top */` or `/* @before f_SSSS_OOOO */`) and
`protos.c` (prototypes chosen by hand). A module function's prototype is a parts'
declaration of it without parameters if there is one (callers compiled with no prototype
in scope), an old-style definition's parameters with their types, or the definition's head.
Merging the parts of CM1's overlays a1c3, 992a, 9100, 88c9 and 7a28 gives their files in
`src/` byte for byte.

## Files

| Path | What |
|---|---|
| `tools/match/exemodel.py` | Reads an FBOV executable: segment table, stubs, overlays, relocations |
| `tools/match/mkblobs.py` | Cuts it into OMF objects TLINK relinks into the same executable |
| `tools/match/build.py` | Compiles C, merges it into the blobs, links, reports per C file |
| `tools/match/disasm.py` | A function's disassembly with the symbols to use in C, 8087 mnemonics included |
| `tools/match/icmp.py` | First instruction-level difference between two linked executables |
| `tools/match/try.py` | Compiles one file with several option sets and compares, without linking |
| `tools/match/fcheck.py` | Compiles a file and compares each of its functions with the original, without linking (fixups left out) |
| `tools/match/fdiff.py` | Lines up one function's compiled code with the original's, instruction by instruction (`--json` for tools) |
| `tools/vscode-decomp/` | VS Code extension: a match view of the C being edited, compiled live, next to the original (see its README) |
| `tools/match/fixcheck.py` | Checks each fixup fcheck leaves out (literal and constant addresses, far segments, call targets, 8087 operations) and the file's `_DATA` against the original |
| `tools/match/progress.py` | Functions and bytes done, per segment and overlay |
| `tools/match/libmods.py` | Links the runtime from its libraries instead of blobs |
| `tools/match/port.py` | Ports decompiled files to another game built from the same sources, or a segment function by function |
| `tools/match/wip.py` | Work folders for decompiling a segment in parts (chunks, strings, brief), and the merge of the parts |
| `tools/match/libsyms.py` | Names of the runtime library functions, from byte-identical library modules |
| `tools/match/exediff.py` | Compares two executables part by part |
| `tools/match/omf.py`, `omfw.py` | OMF object/library reader and writer |
| `tools/match/decomp.mk` | Make rules shared by `games/*/decomp/Makefile` |
| `games/cm1/decomp/src/*.c`, `*.asm` | The decompiled C, and the assembly modules |

## Not done yet

- **Uninitialised and far data.** `_BSS` and the far data segments are not placed from
  C yet, so a module's globals stay `extern`.
- **What is not library or C yet.** The game's own modules (most of the code), and the game's
  assembly modules after 1680 in CM1 (1a51-1b05: graphics and EMS support).
- **CM94.** Complete: every module is matching C or assembly linked whole (see "Porting to
  another game"). Shared facts the parts' agents found (data names the port gets wrong,
  BCC 4.02 source forms) were kept in a notes file appended to each brief.
