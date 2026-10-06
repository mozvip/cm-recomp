#!/usr/bin/env python3
"""Compile a C (or assembly) file and compare each of its functions with the original.

  fcheck.py GAME.EXE FILE.C [--cc bc31|bc30|bc4] [--flags "-ml -O1 -k -Ol"] [--show NAME ...] [-v]

Every public f_SSSS_OOOO of the object is compared with the original code at SSSS:OOOO
(a root segment or an overlay), for the length it has in the object. Bytes the linker
fills in (fixups, the near calls within the module, the far calls TLINK makes near) are
not compared. Prints each function's state, and with --show NAME the original | compiled
disassembly of those functions (-v: of every one that differs). Quicker than a build: no
link, and it works on files that are not placed yet.
"""
import argparse, os, re, shutil, subprocess, sys, tempfile
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
sys.path.insert(0, os.path.dirname(HERE))
import omf, mkblobs

TCDOS = os.path.join(os.path.dirname(os.path.dirname(HERE)), '.claude', 'skills', 'turbo-cpp', 'scripts', 'tcdos.sh')
SIZE = {'ptr32': 4, 'off16': 2, 'seg16': 2, 'off8': 1, 'hi8': 1, 'off16l': 2}
NAME = re.compile(r'^_f_([0-9a-f]{4})_([0-9a-f]{4})$')


# each compiler's options when --flags is not given: the games' (CM94's for bc4)
DEFAULT_FLAGS = {'bc4': '-ml -1 -O2 -k -O-i -O-v -O-g'}


def default_flags(cc):
    return DEFAULT_FLAGS.get(cc, '-ml -O1 -k -Ol')


def compile_obj(src, cc, flags, lines=False):
    """Compile (or assemble) src: (the object module or None, the error and warning lines).
    With lines, a second compile with -y (/zd) in the same run gives the C (or assembly)
    line numbers of the code: the module's lines if its code is the same, else (-y can keep
    BCC from merging identical code) its lines_from is that compile's module."""
    work = tempfile.mkdtemp(prefix='fcheck.')
    try:
        ext = os.path.splitext(src)[1].upper()
        shutil.copy(src, os.path.join(work, 'T' + ext))
        if ext == '.ASM':
            text = open(src, errors='replace').read()      # @flags (/m2...) as build.py honours it
            fl = re.search(r'@flags\s+([^*\n]*)', text)
            cmd = ['TASM', '/ml'] + (fl.group(1).split() if fl else []) + ['T.ASM', 'T.OBJ']
            ycmd = cmd[:2] + ['/zd'] + cmd[2:-1] + ['L.OBJ']
        else:
            cmd = ['BCC', '-c'] + flags.split() + ['T.C']
            ycmd = cmd[:-1] + ['-y', '-oL.OBJ', 'T.C']
        r = subprocess.run([TCDOS, '-T', cc, '-C', work, '--'] + cmd + ([';;'] + ycmd if lines else []),
                           capture_output=True, text=True)
        errs = [l for l in r.stdout.splitlines() if l.startswith(('Error', 'Fatal', '**Error', 'Warning'))
                and not l.startswith(('Error messages:', 'Warning messages:'))]     # TASM's summary
        errs = list(dict.fromkeys(errs))                  # the second compile says it all again
        p = os.path.join(work, 'T.OBJ')
        if any(not l.startswith('Warning') for l in errs) or not os.path.exists(p):
            return None, errs or r.stdout[-2000:].splitlines()
        mod = omf.read_obj(open(p, 'rb').read())[0]
        y = os.path.join(work, 'L.OBJ')
        if lines and os.path.exists(y):
            ym = omf.read_obj(open(y, 'rb').read())[0]
            if ym.segs == mod.segs and ym.fixups == mod.fixups and \
                    all(bytes(ym.data.get(i, b'')) == bytes(d) for i, d in mod.data.items()):
                mod.lines = ym.lines
            else:
                mod.lines_from = ym
        return mod, errs
    finally:
        shutil.rmtree(work)


def compile_file(src, cc, flags):
    mod, errs = compile_obj(src, cc, flags)
    if mod is None:
        print('\n'.join(errs))
        sys.exit(2)
    return mod


def masked_code(mod):
    """The object's code segment: (its index, its bytes, the offsets the linker fills in,
    its public (offset, name)s in order)."""
    si = next(i for i, s in enumerate(mod.segs, 1) if s[1] == 'CODE' and s[2] > 0)
    code = bytes(mod.data[si])
    fx = set()
    for f in mod.fixups:
        if f[0] == si:
            fx.update(range(f[1], f[1] + SIZE.get(f[2], 2)))
            if f[2] == 'ptr32' and f[1] > 0 and code[f[1] - 1] in (0x9a, 0xea):
                fx.add(f[1] - 1)
    for i in range(len(code) - 3):
        if code[i] == 0x0e and code[i + 1] == 0xe8:
            fx.update((i + 2, i + 3))
    funcs = sorted((off, n) for n, (s, off) in mod.publics.items() if s == si)
    return si, code, fx, funcs


def disasm(code):
    import build
    return build.disasm(code, 0, 0, 1 << 20)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('exe')
    ap.add_argument('src')
    ap.add_argument('--cc', default='bc31')
    ap.add_argument('--flags', help='BCC options (default: -ml -O1 -k -Ol; with bc4 CM94\'s)')
    ap.add_argument('--show', nargs='*', default=[])
    ap.add_argument('-v', action='store_true')
    a = ap.parse_args()
    m = mkblobs.Model(a.exe)
    mod = compile_file(a.src, a.cc, a.flags or default_flags(a.cc))
    si, code, fx, funcs = masked_code(mod)
    good = bad = 0
    for k, (off, n) in enumerate(funcs):
        end = funcs[k + 1][0] if k + 1 < len(funcs) else len(code)
        mo = NAME.match(n)
        if not mo:
            continue
        w = m.where(int(mo.group(1), 16), int(mo.group(2), 16))
        img = m.e.image if w[0] == 'root' else m.e.stubs[w[1]].code
        base = w[1] if w[0] == 'root' else w[2]
        orig = bytes(img[base:base + end - off])
        diff = [i for i in range(end - off) if off + i not in fx and (i >= len(orig) or orig[i] != code[off + i])]
        name = n.lstrip('_')
        if diff:
            bad += 1
            print('  DIFF %-14s %5d bytes, first at +%04x' % (name, end - off, diff[0]))
        else:
            good += 1
            print('  ok   %-14s %5d bytes' % (name, end - off))
        if name in a.show or (a.v and diff):
            x = disasm(orig + bytes(8))
            y = disasm(code[off:end])
            for j in range(max(len(x), len(y))):
                p = x[j] if j < len(x) else (0, '', '')
                q = y[j] if j < len(y) else (0, '', '')
                if p[0] >= end - off + 8 and q == (0, '', ''):
                    break
                print('   %s %04x %-18s %-28s| %-18s %s' % (' ' if p[1:] == q[1:] else '*', p[0], p[1],
                                                           p[2][:28], q[1], q[2][:34]))
    print('%d/%d functions match' % (good, good + bad))
    return 0 if bad == 0 else 1


if __name__ == '__main__':
    sys.exit(main())
