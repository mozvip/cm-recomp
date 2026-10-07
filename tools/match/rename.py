#!/usr/bin/env python3
"""Give a game's decompiled sources the names of its names.txt, or take them back.

  rename.py DECOMP_DIR [--names NAMES.TXT] [--undo] [--check]

Renames every f_SSSS_OOOO / d_SSSS_OOOO (and _f_… in assembly) of DECOMP_DIR/src that
names.txt names (default: the game's, games/<game>/names.txt). With --undo, renames them back
to their addresses. --check only reports the problems, which stop the renaming too:
a name that is already used in the sources for something else (a local, a parameter, a
runtime function), a name of the Borland runtime (symbols.txt), or one that is not a
valid C identifier (names already in the sources are not checked again). The build checks
the result: the executable must stay IDENTICAL.
"""
import argparse, glob, os, re, sys
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import names as names_mod

KEYWORDS = set('''asm auto break case cdecl char const continue default do double else enum
extern far float for goto huge if int interrupt long near pascal register return short
signed sizeof static struct switch typedef union unsigned void volatile while _cs _ds _es _ss
_AX _BX _CX _DX _SI _DI _BP _SP _AH _AL _BH _BL _CH _CL _DH _DL _FLAGS'''.split())


def sources(ddir):
    return sorted(p for p in glob.glob(os.path.join(ddir, 'src', '*'))
                  if os.path.splitext(p)[1].upper() in ('.C', '.ASM', '.H'))


def problems(nm, texts, symbols):
    """What stops giving the sources the names they do not have yet."""
    out = []
    used, pending = {}, set()
    for p, t in texts.items():
        pending.update(m.group(0).lstrip('_') for m in names_mod.ADDR.finditer(t))
        for tok in set(re.findall(r'[A-Za-z_][\w@$?]*', names_mod.ADDR.sub('', t))):
            used.setdefault(tok.lstrip('_'), p)
    for name in sorted(n for n, a in nm.by_name.items() if a in pending):
        if not re.fullmatch(r'[A-Za-z_]\w{0,30}', name) or name in KEYWORDS:
            out.append('%s: not a usable identifier' % name)
        elif name in symbols:
            out.append('%s: a runtime name (symbols.txt)' % name)
        elif name in used:
            out.append('%s: already used in %s' % (name, os.path.basename(used[name])))
    return out


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('dir')
    ap.add_argument('--names')
    ap.add_argument('--undo', action='store_true')
    ap.add_argument('--check', action='store_true')
    a = ap.parse_args()
    nm = names_mod.Names(a.names or names_mod.find(a.dir))
    if not nm.path:
        raise SystemExit('no names.txt found above %s' % a.dir)
    texts = {p: open(p, encoding='latin1').read() for p in sources(a.dir)}
    if a.undo:
        new = {p: nm.to_addresses(t) for p, t in texts.items()}
    else:
        sym = os.path.join(a.dir, 'symbols.txt')
        symbols = {l.split()[1] for l in open(sym) if len(l.split()) >= 2} if os.path.exists(sym) else set()
        bad = problems(nm, texts, symbols)
        for b in bad:
            print(b)
        if bad or a.check:
            raise SystemExit(1 if bad else 0)
        new = {p: nm.to_names(t) for p, t in texts.items()}
    n = 0
    for p, t in new.items():
        if t != texts[p]:
            open(p, 'w', encoding='latin1', newline='').write(t)
            n += 1
    print('%d of %d files changed' % (n, len(texts)))


if __name__ == '__main__':
    main()
