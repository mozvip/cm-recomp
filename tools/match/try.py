#!/usr/bin/env python3
"""Compile one C file several ways and compare each result with the original bytes.

  try.py [--show] [--cc bc31|bc30|bc4] GAME.EXE SSSS:OOOO FILE.C ["BCC options" ...]
  (default: fcheck.py's options for the compiler)

--show prints original | compiled disassembly around the first difference. --cc picks the
compiler (tcdos.sh -T), as for fcheck.py.

Quicker than a full build when searching for the source form or the options that give
the original code: no link. Fixup locations are not compared, and a far call the compiler
emits (9A) counts as equal to the original's 90 0E E8 (TLINK makes those near calls).
Prints, per option set, MATCH or where the first difference is.
"""
import os, shutil, subprocess, sys, tempfile
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
sys.path.insert(0, os.path.dirname(HERE))
import omf, mkblobs

TCDOS = os.path.join(os.path.dirname(os.path.dirname(HERE)), '.claude', 'skills', 'turbo-cpp', 'scripts', 'tcdos.sh')
SIZE = {'ptr32': 4, 'off16': 2, 'seg16': 2, 'off8': 1, 'hi8': 1}


def main():
    argv = [a for a in sys.argv[1:] if a != '--show']
    show = len(argv) != len(sys.argv) - 1
    cc = 'bc31'
    if '--cc' in argv:
        k = argv.index('--cc')
        cc = argv[k + 1]
        del argv[k:k + 2]
    if len(argv) < 3:
        raise SystemExit(__doc__)
    exe, at, src = argv[:3]
    import fcheck
    flags = argv[3:] or [fcheck.default_flags(cc)]
    m = mkblobs.Model(exe)
    s, o = (int(x, 16) for x in at.split(':'))
    w = m.where(s, o)
    orig = m.e.image if w[0] == 'root' else m.e.stubs[w[1]].code
    base = w[1] if w[0] == 'root' else w[2]
    work = tempfile.mkdtemp(prefix='try.')
    try:
        shutil.copy(src, os.path.join(work, 'T.C'))
        args = []
        for k, fl in enumerate(flags):
            if args:
                args.append(';;')
            args += ['BCC', '-c'] + fl.split() + ['-oT%d.OBJ' % k, 'T.C']
        r = subprocess.run([TCDOS, '-T', cc, '-C', work, '--'] + args, capture_output=True, text=True)
        errs = [l for l in r.stdout.splitlines() if l.startswith(('Error', 'Fatal', 'Warning'))]
        if errs:
            print('\n'.join(errs))
        for k, fl in enumerate(flags):
            p = os.path.join(work, 'T%d.OBJ' % k)
            if not os.path.exists(p):
                print('%-24s no object' % fl)
                continue
            mod = omf.read_obj(open(p, 'rb').read())[0]
            si = next(i for i, sg in enumerate(mod.segs, 1) if sg[1] == 'CODE' and sg[2] > 0)
            code = bytes(mod.data[si])
            skip = set()
            for f in mod.fixups:
                if f[0] == si:
                    skip.update(range(f[1], f[1] + SIZE.get(f[2], 2)))
                    if f[2] == 'ptr32' and f[1] > 0 and code[f[1] - 1] == 0x9a and \
                            orig[base + f[1] - 1:base + f[1] + 2] == b'\x90\x0e\xe8':
                        skip.add(f[1] - 1)
            diff = [i for i in range(len(code)) if i not in skip and
                    (base + i >= len(orig) or code[i] != orig[base + i])]
            print('%-24s %5d bytes  %s' % (fl, len(code), 'MATCH' if not diff else
                                             'differs from +%04x (%d bytes)' % (diff[0], len(diff))))
            if show and diff:
                import build
                d = diff[0]
                a = build.disasm(bytes(orig[base:base + len(code)]), 0, max(0, d - 12), d + 48)
                b = build.disasm(code, 0, max(0, d - 12), d + 48)
                for k in range(max(len(a), len(b))):
                    x = a[k] if k < len(a) else (0, '', '')
                    y = b[k] if k < len(b) else (0, '', '')
                    print('   %s %04x %-20s %-28s| %-20s %s' % (' ' if x[1:] == y[1:] else '*', x[0], x[1],
                                                                x[2][:28], y[1], y[2][:36]))
    finally:
        shutil.rmtree(work)


if __name__ == '__main__':
    main()
