# Borland VROOMM overlays (FBOV) and how they are flattened

Both games are Borland C++ programs that use Borland's **VROOMM** overlay manager:
part of the code is stored after the DOS load image and loaded on demand. The
recompiler needs every function at a fixed `segment:offset`, so
[`tools/unfbov.py`](../tools/unfbov.py) turns the overlaid executable into a plain
MZ image first (in memory, at build time). It reproduces the transformation of the
`mzap` tool: run on CM1's `EUROPE.EXE`, its output has the same load image,
relocation set and header as mzap's `europe_unfbov.exe`.

The numbers below are for CM1 (`EUROPE.EXE`). CM93 (`CMEXE.EXE`) has the same
layout with 14 overlays: 10 835 fixups, 457 stub entries, overlays at segments
`60A9`..`AE31`.

---

## 1. The original binary: `EUROPE.EXE`

`EUROPE.EXE` was built with Borland C/C++ and uses Borland's **VROOMM** overlay
manager. The file has two parts:

| Part | File offset | Size | Content |
|---|---|---|---|
| MZ header + relocations | `0x00000` | `0x2C00` (11 264) | 2 580 relocation entries |
| Load image (root) | `0x02C00` | `0x57ED0` | Code and data that are always in memory |
| **FBOV overlay block** | `0x5AAD0` | `0x41CB0` (269 488) | Code that is loaded on demand |

DOS loads only the part described by `e_cp`/`e_cblp`, which ends at `0x5AAD0`.
The overlay block after it is never loaded by DOS. Borland's overlay manager
reads it from disk at run time.

### MZ header (both files)

These are the fields at the start of every DOS `MZ` executable. Each field is a
16-bit little-endian word.

| Offset | Name | Meaning | `EUROPE.EXE` | `europe_unfbov.exe` |
|---|---|---|---|---|
| `00` | `e_magic` | Signature `"MZ"` (the initials of Mark Zbikowski, one of the designers of MS-DOS) | `MZ` | `MZ` |
| `02` | `e_cblp` | Number of bytes used in the last 512-byte page. 0 means the page is full. | `0x00D0` | `0x0120` |
| `04` | `e_cp` | Number of 512-byte pages, **counting the header** | `0x02D6` | `0x052E` |
| `06` | `e_crlc` | Number of relocation entries | **2 580** | **12 246** |
| `08` | `e_cparhdr` | Header size in 16-byte paragraphs. This includes the relocation table. | `0x2C0` → 0x2C00 bytes | `0xBFA` → 0xBFA0 bytes |
| `0A` | `e_minalloc` | Minimum extra paragraphs the program needs in memory after the image | 0 | 0 |
| `0C` | `e_maxalloc` | Maximum extra paragraphs it wants | `0xFFFF` | `0xFFFF` |
| `0E` | `e_ss` | Initial SS, relative to the load segment | `0x57DC` | `0x57DC` |
| `10` | `e_sp` | Initial SP | `0x0080` | `0x0080` |
| `12` | `e_csum` | Checksum. DOS ignores it and linkers usually write 0. | 0 | 0 |
| `14` | `e_ip` | Initial IP (entry point offset) | 0 | 0 |
| `16` | `e_cs` | Initial CS, relative to the load segment | 0 | 0 |
| `18` | `e_lfarlc` | File offset of the relocation table | `0x3E` | `0x3E` |
| `1A` | `e_ovno` | Overlay number. 0 means the main program. | 0 | 0 |
| | | *File size* | 640 896 | 678 688 |

#### How the fields work together

**How much DOS loads.** Two fields give the size of the part of the file that
DOS loads (header included):

```
size = e_cp × 512 − (512 − e_cblp)      (when e_cblp ≠ 0)
EUROPE.EXE:        0x2D6 × 512 − 0x130 = 0x5AAD0
europe_unfbov.exe: 0x52E × 512 − 0x0E0 = 0xA5B20   (= file size)
```

- **`EUROPE.EXE`:** the file is `0x9C780` bytes long, so the last 269 488 bytes
  (the FBOV overlay block) are *not* covered by these two fields. DOS never
  loads them.
- **`europe_unfbov.exe`:** the size matches the file size. That is how mzap made
  the overlays part of the loaded program.

**Where the code starts.** The load image is the loaded part minus the header
(`e_cparhdr × 16` bytes). DOS copies it into memory at a segment called the
*load segment*, which is the PSP segment + 0x10. In the file, the load image
starts at `0x2C00` in `EUROPE.EXE` and at `0xBFA0` in `europe_unfbov.exe`. The
header grew because 9 666 relocation entries of 4 bytes each were added.

**Relocations.** The table at `e_lfarlc` holds `e_crlc` entries. Each entry is
4 bytes, `{offset, segment}`, and points to a 16-bit word inside the image. At
load time, DOS adds the load segment to each of those words.

- This is how far pointers and far calls, which the linker writes as if the
  program were loaded at segment 0, get fixed up for the real load address.
- The recompiler loads the image at segment `0x1000`, so every segment it
  prints or names is the file's segment + `0x1000`.

**Memory allocation.** DOS gives the program the image size plus at least
`e_minalloc` extra paragraphs, and up to `e_maxalloc` extra.

- `e_minalloc = 0` means the image already contains everything the program
  needs, including its stack segment.
- `e_maxalloc = 0xFFFF` is the usual value and means "give me all the free
  conventional memory". Borland's runtime then uses that space for its far heap
  and, in the original, for the overlay buffer.

**Starting registers.**

- `CS:IP = 0000:0000`: execution starts at the first byte of the image, which
  is the Borland C startup code (`c0`).
- `SS:SP = 57DC:0080`: the initial stack is in segment `57DC`. `e_ss` and `e_cs`
  are relative to the load segment, just like relocated values.
- `SP = 0x80` gives only 128 bytes of stack at startup. The Borland startup
  code sets up its real stack right away.

**Unused fields.** `e_csum` and `e_ovno` are not used here. This program's
overlays use Borland's FBOV scheme, not the old `e_ovno` mechanism.

#### Bytes after the standard header

The standard header ends at `0x1C`. In both files, the bytes from `0x1C` to
`0x3D` are:

```
01 00 FB 50 6A 72 00 00 ...
```

This is a signature written by Borland's linker, TLINK. It is the byte `0xFB`,
then a version byte (`0x50`, probably TLINK 5.0), then `"jr"`, followed by zero
padding.

The relocation table starts right after it, at `0x3E`. That is why `e_lfarlc`
is `0x3E` and not the minimum value, `0x1C`.

### 1.1 The FBOV header

The overlay block starts with a 16-byte header:

```
5AAD0: 46 42 4F 56  A0 1C 04 00  40 FA 04 00  37 00 ...
       "FBOV"       ovrsize      exeinfo      segnum
```

| Field | Value | Meaning |
|---|---|---|
| `sig` | `FBOV` | Borland overlay signature |
| `ovrsize` | `0x41CA0` | Size of the overlay data after this header |
| `exeinfo` | `0x4FA40` | **File** offset of the segment info table, which is inside the root image |
| `segnum` | `0x37` = 55 | Number of entries in that table |

### 1.2 The segment info table (`exeinfo`)

The table holds 55 entries of 8 bytes each: `{seg, maxoff, flags, minoff}`.
The overlay manager uses it to convert "selector" values into real segments.
The `flags` values found in this table are:

| flags | Count | Meaning in this file |
|---|---|---|
| `1` | 17 | Root code segments (`0000`…`0E0D`) |
| `0` | 14 | Root data/library segments (`0F33`…`4D9C`, `57DC`) |
| `3` | 10 | **Overlay stub segments** (`4D01`…`4D8B`) |
| `4` | 14 | Small segments (`4CDB`…`4CE4`, `5734`…`5738`, `57DC`/stack). The exact meaning of this flag was not determined. |

(`4D01` appears twice, once with flag 1 and size 0. That looks like a
segment-boundary marker.)

### 1.3 Overlay stubs

Each overlaid module keeps a small **stub segment** in the root image. There
are 10 of them. A stub is a 32-byte header followed by one 5-byte entry for
each function that the module exports:

```
stub header (0x20 bytes)
  +00  CD 3F        INT 3Fh (overlay manager trap)
  +02  word         memswap / reserved
  +04  dword        fileoff  – offset of this overlay's code in the overlay data
  +08  word         codesize
  +0A  word         relsize  – size of the fixup list, in bytes (2 bytes per fixup)
  +0C  word         nentries
  +0E  ...          prevstub / work area used at run time
entries (nentries × 5 bytes)
  CD 3F  <off16>  00       INT 3Fh ; target offset inside the overlay
```

When root code calls a stub entry (`CALL FAR 4D01:0025`), `INT 3Fh` passes
control to the overlay manager. The manager loads the overlay into its buffer if
it is not already there, applies the fixups, and jumps to `<off16>` in the
loaded code.

The 10 overlays in `EUROPE.EXE` are:

| Stub | fileoff | codesize | fixups | entries |
|---|---|---|---|---|
| `4D01` | `0x00000` | `0x61D2` | 705 | 27 |
| `4D0C` | `0x067A0` | `0x6629` | 1 010 | 33 |
| `4D19` | `0x0D670` | `0x471B` | 710 | 40 |
| `4D28` | `0x123A0` | `0x4701` | 621 | 27 |
| `4D33` | `0x16FD0` | `0x41B9` | 552 | 29 |
| `4D3F` | `0x1B640` | `0x50A2` | 797 | 36 |
| `4D4D` | `0x20DB0` | `0x79FD` | 1 125 | 61 |
| `4D63` | `0x29120` | `0x77F2` | 1 331 | 42 |
| `4D73` | `0x313C0` | `0x7F0D` | 1 252 | 69 |
| `4D8B` | `0x39D50` | `0x7608` | 1 153 | 46 |
| **Total** | | | **9 256** | **410** |

`fileoff` is relative to the end of the FBOV header, which is file offset
`0x5AAE0`. Each overlay's code is followed by its fixup list: `relsize/2` words,
each the offset of a segment word inside the code.

### 1.4 Overlay fixups use selectors, not segments

In overlay code, the words that the fixup list points to do not hold segment
values. They hold **selectors**, which are indexes into the segment info table
multiplied by 8:

```
selector 0x0028 → entry 5  → segment 04B7
selector 0x0110 → entry 34 → segment 4D01   (a stub: overlay-to-overlay calls go through stubs)
selector 0x0160 → entry 44 → segment 4D9C
```

A disassembler that is given raw overlay code sees segment values like `0x0028`
or `0x0110`. These values point at nothing meaningful. This is the main reason
the overlays cannot be decompiled directly.

---

## 2. What mzap did: `europe_unfbov.exe`

mzap converts the overlaid program into an ordinary flat MZ executable, so that
every function has a fixed `segment:offset`. The output file name means
"un-FBOV". The changes are listed below, and each one was checked against the
two files.

### 2.1 The overlay block becomes part of the load image

The whole block from `0x5AAD0` to the end of the file, including the 16-byte
header, is appended to the load image. The block starts at paragraph `57ED` and
the first overlay's code at `57EE`:

```
old image size   0x57ED0
+ FBOV header    0x00010
+ overlay data   0x41CA0
= new image size 0x99B80   (exactly the new e_cp/e_cblp image size)
```

The appended header is disarmed. `FBOV` is overwritten with `00 00 00 00` and
`ovrsize` becomes `0x41CB0`, so the overlay manager no longer finds an overlay.

Each overlay therefore ends up at the paragraph `0x57EE + fileoff/16`. Because
the layout of the overlay file was kept, the old fixup tables and padding are
still in the image, right after each overlay's code.

| Stub | New code segment | Runtime segment (load base +0x1000) |
|---|---|---|
| `4D01` | `57EE` | `67EE` |
| `4D0C` | `5E68` | `6E68` |
| `4D19` | `6555` | `7555` |
| `4D28` | `6A28` | `7A28` |
| `4D33` | `6EEB` | `7EEB` |
| `4D3F` | `7352` | `8352` |
| `4D4D` | `78C9` | `88C9` |
| `4D63` | `8100` | `9100` |
| `4D73` | `892A` | `992A` |
| `4D8B` | `91C3` | `A1C3` |

### 2.2 Selectors are converted to real segments

At every one of the 9 256 overlay fixup locations, the selector is replaced by
the real segment from the segment info table. For example, `0x0028` becomes
`0x04B7` and `0x0110` becomes `0x4D01`. **No other byte of the overlay code is
changed.** All the differences between the two copies of the code fall on those
fixup words.

### 2.3 Stub entries become far jumps

Each 5-byte `INT 3Fh` entry is rewritten in place as a 5-byte far jump to the
new location:

```
before:  CD 3F 22 06 00        INT 3Fh ; overlay offset 0622
after:   EA 22 06 EE 57        JMP FAR 57EE:0622
```

The 32-byte stub headers are left unchanged. They still begin with `CD 3F`, but
nothing calls them any more. Apart from these stubs, the root image is
byte-for-byte identical. The only differences inside the old image are 2 035
bytes in segments `4D01`–`4D9B`.

### 2.4 New MZ relocations

The 2 580 original relocations are kept, in their original order. mzap appends
9 666 new entries, so that DOS (or the recompiler) relocates the new segment words:

```
9 256  one for each overlay fixup   (segment words inside the overlay code)
+ 410  one for each stub entry      (the segment word of each new JMP FAR)
= 9 666;   2 580 + 9 666 = 12 246 = new e_crlc
```

The relocation table is larger, so the MZ header grows from `0x2C00` to
`0xBFA0` bytes.

### 2.5 Summary of mzap's transformation

```
                EUROPE.EXE                       europe_unfbov.exe
          ┌──────────────────────┐          ┌──────────────────────┐
          │ MZ hdr, 2580 relocs  │          │ MZ hdr, 12246 relocs │
          ├──────────────────────┤          ├──────────────────────┤
0000      │ root code/data       │          │ root code/data       │ identical
4D01..4D8B│ stubs: INT 3Fh xxxx  │   ──▶    │ stubs: JMP FAR s:xxxx│ patched
57DC      │ stack                │          │ stack                │
          ├──────────────────────┤ ← DOS    ├──────────────────────┤
          │ FBOV hdr             │   load   │ (zeroed FBOV hdr)    │ 57ED
          │ ovl 1..10 + fixups   │   ends   │ ovl 1..10 + fixups   │ 57EE..
          │ (selectors)          │   here   │ (real segments)      │ now loaded
          └──────────────────────┘          └──────────────────────┘
```

The overlay manager's initialisation code is still present in the root. In the
recompiled game it runs, opens the original EXE (named by `argv[0]`), reads its
FBOV header and allocates its buffer, all harmlessly: no stub traps into it any more.
