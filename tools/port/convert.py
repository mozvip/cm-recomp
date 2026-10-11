#!/usr/bin/env python3
"""First, mechanical pass of a matching decompilation's C (16-bit Borland, large model)
towards portable C for a native build (see games/cm1/port/README.md).

  convert.py SRC.C DST.c [--near NAME,...] [--far NAME,...]

What it does, outside comments and string literals unless said otherwise:
  - the Borland includes become one #include "port.h" (which brings the C library, the
    fixed-width types and #pragma pack(1) after them);
  - int -> int16_t, unsigned [int] -> uint16_t, long -> int32_t, unsigned long -> uint32_t,
    so that every variable keeps the size it had in the original (data files and the
    original data segments depend on it);
  - far, near, huge and _seg go;
  - integer constants lose their L suffix (a long is an int now);
  - in string literals, %ld / %lu / %lx... lose their l;
  - tables of 16-bit pointers that live in the original data (--near: offsets in DGROUP,
    --far: segment:offset) are declared nearptr / farptr, and every element read
    becomes NEAR_PTR(...) / FAR_PTR(...) (not under &, which wants the raw entry).

Inline assembly, pseudo-registers and BIOS calls are left for the hand-written pass.
"""
import argparse, re, sys

TYPE_MAP = {
    ('unsigned', 'long', 'int'): 'uint32_t',
    ('unsigned', 'long'): 'uint32_t',
    ('long', 'unsigned', 'int'): 'uint32_t',
    ('signed', 'long'): 'int32_t',
    ('long', 'int'): 'int32_t',
    ('long',): 'int32_t',
    ('unsigned', 'short', 'int'): 'uint16_t',
    ('unsigned', 'short'): 'uint16_t',
    ('short', 'int'): 'int16_t',
    ('short',): 'int16_t',
    ('unsigned', 'int'): 'uint16_t',
    ('unsigned',): 'uint16_t',
    ('signed', 'int'): 'int16_t',
    ('int',): 'int16_t',
}
TYPE_WORDS = {'unsigned', 'signed', 'long', 'short', 'int'}
DROP = {'far', 'near', 'huge', '_seg', 'cdecl', 'pascal'}

TOKEN = re.compile(r'''
    (?P<comment>/\*.*?\*/|//[^\n]*)
  | (?P<string>"(?:\\.|[^"\\\n])*")
  | (?P<char>'(?:\\.|[^'\\\n])*')
  | (?P<number>\b(?:0[xX][0-9a-fA-F]+|\d+)(?:[uU]?[lL]|[lL][uU])\b)
  | (?P<word>\b[A-Za-z_]\w*\b)
  | (?P<ws>\s+)
  | (?P<other>.)
''', re.S | re.M | re.X)

FMT = re.compile(r'%([-+ #0]*(?:\d+|\*)?(?:\.(?:\d+|\*))?)l([diouxX])')


def tokens(text):
    for m in TOKEN.finditer(text):
        yield m.lastgroup, m.group()


def convert_types(text):
    out = []
    toks = list(tokens(text))
    i = 0
    while i < len(toks):
        kind, t = toks[i]
        if kind == 'word' and t == 'asm':     # inline assembly: as it is, to the line's end
            while i < len(toks) and '\n' not in toks[i][1]:
                out.append(toks[i][1])
                i += 1
            continue
        if kind == 'word' and t in TYPE_WORDS:
            # gather a run of type words separated by whitespace
            words, j, last = [t], i + 1, i
            while j < len(toks):
                if toks[j][0] == 'ws':
                    j += 1
                    continue
                if toks[j][0] == 'word' and toks[j][1] in TYPE_WORDS | {'char'}:
                    words.append(toks[j][1])
                    last = j
                    j += 1
                    continue
                break
            if 'char' in words:              # unsigned char / signed char: as they are
                out.append(''.join(x[1] for x in toks[i:last + 1]))
            else:
                key = tuple(words)
                if key not in TYPE_MAP:
                    raise SystemExit('unknown type %r' % (key,))
                out.append(TYPE_MAP[key])
            i = last + 1
            continue
        if kind == 'word' and t in DROP:
            # drop the keyword and the blank after it
            i += 1
            if i < len(toks) and toks[i][0] == 'ws' and '\n' not in toks[i][1]:
                i += 1
            continue
        if kind == 'number':
            t = re.sub(r'[lL]', '', t)
        elif kind == 'string':
            t = FMT.sub(r'%\1\2', t)
        out.append(t)
        i += 1
    return ''.join(out)


def fix_includes(text, name):
    lines = text.split('\n')
    out, done = [], False
    for ln in lines:
        if re.match(r'\s*#\s*include\s*<', ln):
            if not done:
                out.append('#include "port.h"')
                done = True
            continue
        out.append(ln)
    if not done:                             # after the leading comments
        k = 0
        while k < len(out) and (out[k].startswith('/*') or out[k].strip() == ''):
            k += 1
        out.insert(k, '#include "port.h"\n')
    return '\n'.join(out)


def matching_bracket(s, i):
    depth = 0
    for k in range(i, len(s)):
        if s[k] == '[':
            depth += 1
        elif s[k] == ']':
            depth -= 1
            if depth == 0:
                return k
    raise ValueError('unbalanced [')


def wrap_tables(text, names, macro, typename):
    if not names:
        return text
    # declarations: extern <anything> NAME[...]; / NAME;
    decl = re.compile(r'^(\s*extern\s+)[^;()]*?\b(%s)\b(\s*(?:\[[^\]]*\])*)\s*;' % '|'.join(names), re.M)
    text = decl.sub(lambda m: '%s%s %s%s;' % (m.group(1), typename, m.group(2), m.group(3)), text)
    # element reads, not under & or in a declaration
    use = re.compile(r'\b(%s)\s*\[' % '|'.join(names))
    out, pos = [], 0
    for m in use.finditer(text):
        if m.start() < pos:
            continue
        line_start = text.rfind('\n', 0, m.start()) + 1
        line = text[line_start:m.start()]
        before = text[:m.start()].rstrip()
        if before.endswith('&') or re.match(r'\s*extern\b', line):
            continue
        end = matching_bracket(text, m.end() - 1)
        out.append(text[pos:m.start()])
        out.append('%s(%s)' % (macro, text[m.start():end + 1]))
        pos = end + 1
    out.append(text[pos:])
    return ''.join(out)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('src')
    ap.add_argument('dst')
    ap.add_argument('--near', default='', help='tables of near pointers (DGROUP offsets)')
    ap.add_argument('--far', default='', help='tables of far pointers (segment:offset)')
    ap.add_argument('--origin', default=None, help='path written in the header comment')
    a = ap.parse_args()
    text = open(a.src, encoding='latin1').read().replace('\r\n', '\n')
    text = fix_includes(text, a.src)
    text = convert_types(text)
    near = [n for n in a.near.split(',') if n]
    far = [n for n in a.far.split(',') if n]
    text = wrap_tables(text, near, 'NEAR_PTR', 'nearptr')
    text = wrap_tables(text, far, 'FAR_PTR', 'farptr')
    origin = a.origin or a.src
    text = '/* Native port of %s (see ../README.md). */\n%s' % (origin, text)
    open(a.dst, 'w', encoding='latin1').write(text)


if __name__ == '__main__':
    main()
