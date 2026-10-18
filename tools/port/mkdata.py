#!/usr/bin/env python3
"""Data symbols of a native port (see port/README.md).

  mkdata.py [--names NAMES.TXT] --segments SEGMENTS.TXT --start 0x0f330 --end 0x57dc0
            OUT.S OUT.c OUT_SEGMENTS.c SRC.c...

The port keeps the game's data segments as one block, port_image (the bytes from
IMAGE_START to IMAGE_END of the executable's load image, loaded at start-up from the
files tools/port/extract.py makes, one per segment of SEGMENTS.TXT; OUT_SEGMENTS.c is
that list, for the loader). OUT.S places every data symbol the sources use at its
original address in it:

  - the names of NAMES.TXT ("SSSS:OOOO name d", runtime numbering: load segment 0x1000)
  - the d_SSSS_OOOO names the sources use;

all as weak symbols, so that a definition in C (a module's own initialised data, a
platform variable) takes precedence.

Variables the sources declare as pointers are not placed in the image: a native
pointer is 8 bytes where the original had 2 or 4, and would overwrite what follows it.
OUT.c gives each of them its own weak storage instead, pointing at port_null_page (the
DOS null far pointer, 0000:0000, was memory the game could write to).

OUT.S also reserves port_pool, right after port_image: where port/db.c writes the names
the game's database changes, within reach of DGROUP's offsets and of segment:offset
pointers.
"""
import argparse, os, re

RT_BASE = 0x1000
POOL = 0x20000                  # port_pool's size


def parse_names(path):
    syms = {}
    for ln in open(path):
        ln = ln.split('#')[0].split()
        if len(ln) == 3 and ln[2] == 'd':
            seg, off = (int(x, 16) for x in ln[0].split(':'))
            syms[ln[1]] = (seg - RT_BASE) * 16 + off
    return syms


def parse_segments(path, start, end):
    """The segments of extract.py's list that have a file: (name, offset in port_image,
    size, crc32)."""
    segs, prev = [], start
    for ln in open(path):
        ln = ln.split('#')[0].split()
        if not ln:
            continue
        name, lin, size = ln[0], int(ln[1], 16), int(ln[2], 16)
        if lin < prev or lin + size > end:
            raise SystemExit('%s: %s overlaps or is outside %#x-%#x' % (path, name, start, end))
        prev = lin + size
        if ln[3] != 'bss':
            segs.append((name, lin - start, size, int(ln[3], 16)))
    return segs


def strip_comments(text):
    text = re.sub(r'/\*.*?\*/', ' ', text, flags=re.S)
    text = re.sub(r'//[^\n]*', ' ', text)
    return re.sub(r'"(?:\\.|[^"\\\n])*"', '""', text)


def split_top(s):
    parts, depth, cur = [], 0, ''
    for ch in s:
        if ch in '([{':
            depth += 1
        elif ch in ')]}':
            depth -= 1
        if ch == ',' and depth == 0:
            parts.append(cur)
            cur = ''
        else:
            cur += ch
    parts.append(cur)
    return parts


def defined_pointer_arrays(text):
    """Arrays of pointers a source defines (with their native layout)."""
    return set(re.findall(r'^(?!extern\b)(?:static\s+)?[\w ]+\*\s*(\w+)\s*\[', text, re.M))


def pointer_externs(text, defined, bad):
    """Names of the file-scope 'extern' variables declared as pointers (arrays of
    pointers, which cannot be in the image, go to bad). A declaration the source does
    not use is left out: another module may use the same memory as something else."""
    out = set()
    used = lambda name: len(re.findall(r'\b%s\b' % re.escape(name), text)) > 1
    for m in re.finditer(r'^\s*extern\s+([^;]*);', text, re.M):
        body = m.group(1)
        # the base type: up to the first declarator
        dm = re.match(r'((?:(?:const|volatile|signed|unsigned|struct\s+\w+|union\s+\w+|\w+)\s+)+?)(?=[*(]|\w+\s*(?:[\[,;=]|$))', body)
        decls = body[dm.end():] if dm else body
        for d in split_top(decls):
            d = d.strip()
            fm = re.match(r'^\(\s*\*\s*(\w+)\s*\)\s*\(', d)
            if fm:                               # function pointer
                if used(fm.group(1)):
                    out.add(fm.group(1))
                continue
            am = re.match(r'^\(\s*\*\s*(\w+)\s*\)\s*\[', d)
            if am:                               # pointer to array
                if used(am.group(1)):
                    out.add(am.group(1))
                continue
            pm = re.match(r'^\*+\s*(\w+)\s*$', d)
            if pm:                               # plain pointer (not an array of pointers)
                if used(pm.group(1)):
                    out.add(pm.group(1))
                continue
            am = re.match(r'^\*+\s*(\w+)\s*\[', d)
            if am and am.group(1) not in defined and used(am.group(1)):
                bad.add(d)
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--names', help='the game\'s names.txt, if its data symbols are named')
    ap.add_argument('--segments', required=True)
    ap.add_argument('--start', required=True, type=lambda x: int(x, 0))
    ap.add_argument('--end', required=True, type=lambda x: int(x, 0))
    ap.add_argument('out_s')
    ap.add_argument('out_c')
    ap.add_argument('out_segments')
    ap.add_argument('srcs', nargs='+')
    a = ap.parse_args()

    syms = parse_names(a.names) if a.names else {}
    native = set()
    texts = [strip_comments(open(p, encoding='latin1').read()) for p in a.srcs]
    defined, bad = set(), set()
    for text in texts:
        defined |= defined_pointer_arrays(text)
    for text in texts:
        for m in re.finditer(r'\bd_([0-9a-f]{4})_([0-9a-f]{4})\b', text):
            syms.setdefault(m.group(0), (int(m.group(1), 16) - RT_BASE) * 16 + int(m.group(2), 16))
        native |= pointer_externs(text, defined, bad)
    if bad:
        raise SystemExit('arrays of native pointers in the image (make them nearptr/farptr or '
                         'define them in C):\n  ' + '\n  '.join(sorted(bad)))

    size = a.end - a.start
    lines = [
        '/* Generated by tools/port/mkdata.py: the game\'s data symbols at their original',
        '   addresses in port_image (weak: a definition in C takes precedence). */',
        '        .section .bss.port_image,"aw",@nobits',
        '        .globl  port_image',
        '        .balign 16',
        '        .type   port_image, @object',
        '        .size   port_image, %#x' % (size + POOL),
        'port_image:',
        '        .zero   %#x' % size,
        '/* room for the names the database changes (port/db.c): after the image, so that',
        '   DGROUP\'s offsets and segment:offset pointers reach it */',
        '        .globl  port_pool, port_pool_end',
        'port_pool:',
        '        .zero   %#x' % POOL,
        'port_pool_end:',
    ]
    for name, lin in sorted(syms.items(), key=lambda kv: (kv[1], kv[0])):
        if name in native or not (a.start <= lin < a.end):
            continue
        lines.append('        .weak   %s' % name)
        lines.append('        .set    %s, port_image + %#x' % (name, lin - a.start))
    lines.append('        .section .note.GNU-stack,"",@progbits')
    open(a.out_s, 'w').write('\n'.join(lines) + '\n')

    c = ['/* Generated by tools/port/mkdata.py: storage for the pointer variables of the',
         '   original data, kept out of port_image (a native pointer is wider). They start',
         '   as DOS\'s null far pointer did, pointing at 0000:0000: the game writes through',
         '   some before it sets them. */',
         'extern unsigned char port_null_page[];']
    for name in sorted(native):
        c.append('__attribute__((weak)) void *%s = port_null_page;' % name)
    open(a.out_c, 'w').write('\n'.join(c) + '\n')

    c = ['/* Generated by tools/port/mkdata.py from %s: the files port_image is loaded'
         % os.path.basename(a.segments),
         '   from (platform/image.c), each at its offset in it. */',
         '#include "port.h"',
         '',
         'const struct port_segment port_segments[] = {']
    for name, off, size, crc in parse_segments(a.segments, a.start, a.end):
        c.append('    { "%s", %#07x, %#06x, 0x%08xu },' % (name, off, size, crc))
    c += ['    { 0 }', '};']
    open(a.out_segments, 'w').write('\n'.join(c) + '\n')


if __name__ == '__main__':
    main()
