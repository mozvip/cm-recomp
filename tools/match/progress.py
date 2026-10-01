#!/usr/bin/env python3
"""Progress of the matching decompilation.

  progress.py GAME.EXE DECOMP_DIR [--funcs gen/funcs.h] [--list SSSS] [--todo N]

Functions come from tools/recomp.py's gen/funcs.h (the ones it found from the entry points);
a function's size runs to the next function start or the end of its segment / overlay.
A function counts as done when it lies inside a C file that matched in the last build, or
inside the library modules linked instead of the original bytes (DECOMP_DIR/build/status.txt,
written by build.py).
  --list SSSS  every function of runtime segment SSSS with its size and state
  --todo N     the N smallest functions not done yet, per segment (candidates)
"""
import argparse, collections, os, re, sys
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import mkblobs

RT = 0x1000


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('exe')
    ap.add_argument('dir')
    ap.add_argument('--funcs')
    ap.add_argument('--list')
    ap.add_argument('--todo', type=int)
    a = ap.parse_args()
    funcs_h = a.funcs or os.path.join(os.path.dirname(os.path.abspath(a.exe)), 'gen', 'funcs.h')
    if not os.path.exists(funcs_h):
        raise SystemExit('%s not found: build the recompiled game first (make -C games/<game>)' % funcs_h)
    m = mkblobs.Model(a.exe)
    starts = sorted({(int(s, 16), int(o, 16)) for s, o in
                     re.findall(r'\bf_([0-9a-f]{4})_([0-9a-f]{4})\(void\)', open(funcs_h).read())})
    # region of each function: (kind, index) -> [(linear, rt)], end of region
    regions = collections.defaultdict(list)
    ends = {}
    skipped = []
    for rs, ro in starts:
        try:
            w = m.where(rs, ro)
        except SystemExit:
            skipped.append('%04x:%04x' % (rs, ro))       # outside the code (a bad entry)
            continue
        if w[0] == 'root' and w[2].kind == 'stub':
            continue                                    # overlay stub entries (TLINK's)
        if w[0] == 'root':
            key = ('root', w[2].frame + RT)
            lin = w[1]
            ends[key] = w[2].end
        else:
            st = m.e.stubs[w[1]]
            key = ('ovl', m.overlay_rt_seg(st))
            lin = w[2]
            ends[key] = st.codesize
        regions[key].append((lin, (rs, ro)))
    done = []                                     # (key, lo, hi) of matched C files
    status = os.path.join(a.dir, 'build', 'status.txt')
    if os.path.exists(status):
        for line in open(status):
            if line.startswith('#'):
                continue
            name, at, size, st = line.split()
            if st != 'ok':
                continue
            s, o = (int(x, 16) for x in at.split(':'))
            w = m.where(s, o)
            key = ('root', w[2].frame + RT) if w[0] == 'root' else ('ovl', m.overlay_rt_seg(m.e.stubs[w[1]]))
            lo = w[1] if w[0] == 'root' else w[2]
            done.append((key, lo, lo + int(size)))
    # adjacent ranges (library modules, padding between them) count as one
    merged = []
    for k, l, h in sorted(done):
        if merged and merged[-1][0] == k and l <= merged[-1][2] + 15:
            merged[-1][2] = max(merged[-1][2], h)
        else:
            merged.append([k, l, h])
    done = [tuple(x) for x in merged]
    tot_f = tot_b = got_f = got_b = 0
    rows = []
    for key in sorted(regions, key=lambda k: (k[0] != 'root', k[1])):
        fl = sorted(regions[key])
        items = []
        for k, (lin, rt) in enumerate(fl):
            hi = fl[k + 1][0] if k + 1 < len(fl) else ends[key]
            ok = any(dk == key and dl <= lin and hi <= dh for dk, dl, dh in done)
            items.append((rt, hi - lin, ok))
        nb = sum(n for _, n, _ in items)
        gb = sum(n for _, n, ok in items if ok)
        gf = sum(1 for *_, ok in items if ok)
        tot_f += len(items); tot_b += nb; got_f += gf; got_b += gb
        rows.append((key, items, gf, gb, nb))
        if a.list and int(a.list, 16) == key[1]:
            for rt, n, ok in items:
                print('  %04x:%04x %6d  %s' % (rt[0], rt[1], n, 'done' if ok else ''))
    if a.list:
        return
    print('%-14s %9s %17s' % ('segment', 'functions', 'bytes'))
    for key, items, gf, gb, nb in rows:
        label = '%s %04x' % ('root' if key[0] == 'root' else 'overlay', key[1])
        print('%-14s %4d/%-4d %7d/%-7d %5.1f%%' % (label, gf, len(items), gb, nb, 100.0 * gb / nb if nb else 0))
        if a.todo:
            for rt, n, ok in sorted((x for x in items if not x[2]), key=lambda x: x[1])[:a.todo]:
                print('      %04x:%04x %5d bytes' % (rt[0], rt[1], n))
    if skipped:
        print('(%d function starts outside any code: %s)' % (len(skipped), ' '.join(skipped)))
    print('%-14s %4d/%-4d %7d/%-7d %5.1f%%' % ('total', got_f, tot_f, got_b, tot_b, 100.0 * got_b / tot_b))


if __name__ == '__main__':
    main()
