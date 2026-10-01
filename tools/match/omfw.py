"""Minimal Intel OMF writer (the records TLINK needs for a 16-bit object module).

    w = ObjWriter('U00')
    ln = w.lname('_TEXT'); cl = w.lname('CODE')
    s = w.segdef(ln, cl, length, attr)          # attr: ACBP byte, e.g. 0x28 byte/public
    g = w.grpdef(w.lname('DGROUP'), [s1, s2])
    w.pubdef(s, [('_foo', 0x10)], grp=0)
    x = w.extdef('_bar')
    w.ledata(s, off, bytes, fixups=[Fix(...)])  # fixups apply to this record's data
    w.modend(start=(s, 0))                      # or None
    open('U00.OBJ', 'wb').write(w.bytes())
"""
import struct

LOC = {'off8': 0, 'off16': 1, 'seg16': 2, 'ptr32': 3}
SIZE = {'off8': 1, 'off16': 2, 'seg16': 2, 'ptr32': 4}


class Fix:
    """One fixup. off: offset in the segment (absolute, not record-relative).
    kind: 'seg' (target segdef index), 'grp' (grpdef index), 'ext' (extdef index).
    frame: None = the target's frame (F5), or ('seg'|'grp', index)."""

    def __init__(self, off, loc, kind, index, disp=0, frame=None, self_rel=False):
        self.off, self.loc, self.kind, self.index, self.disp, self.frame, self.self_rel = \
            off, loc, kind, index, disp, frame, self_rel


def _idx(i):
    return bytes([i]) if i < 0x80 else bytes([0x80 | (i >> 8), i & 0xff])


def _name(s):
    b = s.encode('latin1')
    return bytes([len(b)]) + b


class ObjWriter:
    def __init__(self, modname):
        self.recs = []
        self.lnames = {}
        self._pending_lnames = []
        self.nseg = self.ngrp = self.next = 0
        self.rec(0x80, _name(modname))

    def rec(self, typ, body):
        n = len(body) + 1
        data = bytes([typ]) + struct.pack('<H', n) + body
        data += bytes([(-sum(data)) & 0xff])
        self.recs.append(data)

    def lname(self, s):
        if s not in self.lnames:
            self.lnames[s] = len(self.lnames) + 1
            self.rec(0x96, _name(s))
        return self.lnames[s]

    def segdef(self, name_idx, class_idx, length, attr):
        big = length == 0x10000
        a = attr | (2 if big else 0)
        ovl = self.lname('')                      # overlay name: none
        self.rec(0x98, bytes([a]) + struct.pack('<H', 0 if big else length) + _idx(name_idx) + _idx(class_idx) + _idx(ovl))
        self.nseg += 1
        return self.nseg

    def grpdef(self, name_idx, segs):
        body = _idx(name_idx) + b''.join(b'\xff' + _idx(s) for s in segs)
        self.rec(0x9A, body)
        self.ngrp += 1
        return self.ngrp

    def pubdef(self, seg, pubs, grp=0):
        # split to keep records small
        for k in range(0, len(pubs), 32):
            body = _idx(grp) + _idx(seg)
            for n, off in pubs[k:k + 32]:
                body += _name(n) + struct.pack('<H', off) + b'\x00'
            self.rec(0x90, body)

    def pubdef_abs(self, pubs):
        """Absolute publics (no segment: frame 0), e.g. the 8087 emulator's FIDRQQ."""
        for k in range(0, len(pubs), 32):
            body = b'\x00\x00\x00\x00'
            for n, off in pubs[k:k + 32]:
                body += _name(n) + struct.pack('<H', off & 0xffff) + b'\x00'
            self.rec(0x90, body)

    def extdef(self, name):
        self.rec(0x8C, _name(name) + b'\x00')
        self.next += 1
        return self.next

    def ledata(self, seg, off, data, fixups=()):
        assert len(data) <= 1024
        self.rec(0xA0, _idx(seg) + struct.pack('<H', off) + bytes(data))
        if fixups:
            body = b''
            for f in fixups:
                ro = f.off - off
                assert 0 <= ro and ro + SIZE[f.loc] <= len(data), (hex(f.off), hex(off), len(data))
                locat = 0x80 | (0 if f.self_rel else 0x40) | (LOC[f.loc] << 2) | (ro >> 8)
                body += bytes([locat, ro & 0xff])
                tm = {'seg': 0, 'grp': 1, 'ext': 2}[f.kind]
                if f.frame is None:
                    fixdat = 0x50 | tm
                    body += bytes([fixdat]) + _idx(f.index) + struct.pack('<H', f.disp & 0xffff)
                else:
                    fm = {'seg': 0, 'grp': 1}[f.frame[0]]
                    fixdat = (fm << 4) | tm
                    body += bytes([fixdat]) + _idx(f.frame[1]) + _idx(f.index) + struct.pack('<H', f.disp & 0xffff)
            self.rec(0x9C, body)

    def modend(self, start=None):
        if start is None:
            self.rec(0x8A, b'\x00')
        else:
            seg, off = start
            # main module, start address, logical; F0 frame=segdef, T0 target=segdef
            self.rec(0x8A, b'\xc1\x00' + _idx(seg) + _idx(seg) + struct.pack('<H', off))

    def bytes(self):
        return b''.join(self.recs)
