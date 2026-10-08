"""A game's names.txt: the names its decompiled sources give to functions and data.

Each line `SSSS:OOOO name kind` gives a runtime address, the name the C and assembly
sources use for it, and `f` (function) or `d` (data). Lines without a kind (`SSSS:OOOO
name`) name a function only for the recompiler (tools/recomp.py, which skips the data) and
build.py: the runtime functions the sources call by their own names (strcpy...). Without a
name a symbol is `f_SSSS_OOOO` or `d_SSSS_OOOO` (`_f_…` in assembly); build.py resolves both. A name is used for nothing
else in the sources, so the renaming works both ways: to_names() gives the sources their
names, to_addresses() gives them back their address names (port.py works on those).
"""
import os, re

ADDR = re.compile(r'(?<![\w@$?])(_?)([fd])_([0-9a-f]{4})_([0-9a-f]{4})(?![\w@$?])')


class Names:
    def __init__(self, path=None):
        self.path = path
        self.by_addr = {}               # 'f_1680_0386' -> name
        self.by_name = {}               # name -> 'f_1680_0386'
        if path and os.path.exists(path):
            for n, line in enumerate(open(path), 1):
                w = line.split('#')[0].split()
                if not w:
                    continue
                if len(w) == 2:
                    continue            # a name only the recompiler and build.py use
                if len(w) != 3 or not re.fullmatch(r'[0-9a-f]{4}:[0-9a-f]{4}', w[0].lower()) or w[2] not in ('f', 'd'):
                    raise SystemExit('%s:%d: expected SSSS:OOOO name [f|d]' % (path, n))
                a = '%s_%s' % (w[2], w[0].lower().replace(':', '_'))
                if w[1] in self.by_name or a in self.by_addr:
                    raise SystemExit('%s:%d: %s or %s named twice' % (path, n, w[1], w[0]))
                self.by_addr[a], self.by_name[w[1]] = w[1], a

    def name(self, addr_name):
        """'f_1680_0386' (or '_f_1680_0386') -> its name, or itself."""
        u = '_' if addr_name.startswith('_') else ''
        return u + self.by_addr.get(addr_name[len(u):], addr_name[len(u):])

    def addr(self, name):
        """A name (or '_name') -> its address name, or itself."""
        u = '_' if name.startswith('_') and name[1:] in self.by_name else ''
        return u + self.by_name.get(name[len(u):], name[len(u):])

    def to_names(self, text):
        return ADDR.sub(lambda m: m.group(1) + self.by_addr.get(
            '%s_%s_%s' % m.group(2, 3, 4), m.group(0)[len(m.group(1)):]), text)

    def to_addresses(self, text):
        if not self.by_name:
            return text
        pat = re.compile(r'(?<![\w@$?])(_?)(%s)(?![\w@$?])' %
                         '|'.join(sorted(map(re.escape, self.by_name), key=len, reverse=True)))
        return pat.sub(lambda m: m.group(1) + self.by_name[m.group(2)], text)


def find(start, levels=5):
    """The names.txt of the game a file or directory belongs to (games/<game>/names.txt)."""
    d = os.path.abspath(start)
    if not os.path.isdir(d):
        d = os.path.dirname(d)
    for _ in range(levels):
        p = os.path.join(d, 'names.txt')
        if os.path.exists(p):
            return p
        d = os.path.dirname(d)
    return None


def load(start):
    return Names(find(start))
