#!/usr/bin/env python3
"""Minimal Intel OMF (16-bit, Borland flavour) reader.

  omf.py FILE.OBJ|FILE.LIB        dump records, segments, publics, externs

As a module: read_obj(bytes) -> list of Module (a .LIB yields one per member).
Module fields: name, lnames, segs [(name, class, length, attr)], grps, publics
{name: (segidx, off)}, externs [name], data {segidx: bytearray}, fixups
[(segidx, off, loc, frame, target, disp)] (loc: 'off16'|'seg16'|'ptr32'|'off8'|...),
lines [(segidx, off, line)] (LINNUM: BCC -y, TASM /zd).
"""
import struct, sys


class Module:
    def __init__(self):
        self.name = ''
        self.lnames = ['']
        self.segs = []          # (name, class, length, attrbyte)
        self.grps = []          # (name, [segidx])
        self.publics = {}
        self.externs = ['']
        self.data = {}
        self.fixups = []
        self.comments = []
        self.lines = []
        self.raw = b''          # the module's records, THEADR to MODEND (a standalone .OBJ)


def _index(b, p):
    v = b[p]
    if v & 0x80:
        return ((v & 0x7f) << 8) | b[p + 1], p + 2
    return v, p + 1


def _name(b, p):
    n = b[p]
    return b[p + 1:p + 1 + n].decode('latin1'), p + 1 + n


LOCS = {0: 'off8', 1: 'off16', 2: 'seg16', 3: 'ptr32', 4: 'hi8', 5: 'off16l'}


def read_obj(buf):
    mods, m = [], None
    p = 0
    last = None            # (segidx, base offset) of last LEDATA/LIDATA
    threads = {}
    pagesize = None
    while p + 3 <= len(buf):
        typ = buf[p]
        ln = struct.unpack('<H', buf[p + 1:p + 3])[0]
        rec = buf[p + 3:p + 3 + ln - 1]
        start = p
        p += 3 + ln
        if typ == 0xF0:        # library header
            pagesize = ln + 3
            continue
        if typ == 0xF1:
            break
        if typ == 0x80:
            m = Module()
            m.name, _ = _name(rec, 0)
            m.raw_start = start
            mods.append(m)
        elif typ == 0x88:
            m.comments.append(bytes(rec))
        elif typ == 0x96:
            q = 0
            while q < len(rec):
                s, q = _name(rec, q)
                m.lnames.append(s)
        elif typ in (0x98, 0x99):
            attr = rec[0]
            q = 1
            if attr >> 5 == 0:
                q += 3
            if typ == 0x98:
                length = struct.unpack('<H', rec[q:q + 2])[0]; q += 2
            else:
                length = struct.unpack('<I', rec[q:q + 4])[0]; q += 4
            if attr & 2:
                length = 0x10000
            ni, q = _index(rec, q)
            ci, q = _index(rec, q)
            m.segs.append((m.lnames[ni], m.lnames[ci], length, attr))
            m.data[len(m.segs)] = bytearray(length if length <= 0x10000 else 0)
        elif typ == 0x9A:
            ni, q = _index(rec, 0)
            segs = []
            while q < len(rec):
                q += 1
                si, q = _index(rec, q)
                segs.append(si)
            m.grps.append((m.lnames[ni], segs))
        elif typ in (0x90, 0x91, 0xB6, 0xB7):
            gi, q = _index(rec, 0)
            si, q = _index(rec, q)
            if si == 0:
                q += 2
            while q < len(rec):
                s, q = _name(rec, q)
                off = struct.unpack('<H', rec[q:q + 2])[0]; q += 2
                _, q = _index(rec, q)
                m.publics[s] = (si, off)
        elif typ in (0x8C, 0xB4):
            q = 0
            while q < len(rec):
                s, q = _name(rec, q)
                _, q = _index(rec, q)
                m.externs.append(s)
        elif typ in (0xA0, 0xA1):
            si, q = _index(rec, 0)
            off = struct.unpack('<H', rec[q:q + 2])[0]; q += 2
            d = rec[q:]
            buf2 = m.data[si]
            buf2[off:off + len(d)] = d
            last = (si, off)
        elif typ in (0xA2, 0xA3):
            si, q = _index(rec, 0)
            off = struct.unpack('<H', rec[q:q + 2])[0]; q += 2

            def expand(q):
                rep = struct.unpack('<H', rec[q:q + 2])[0]; q += 2
                blk = struct.unpack('<H', rec[q:q + 2])[0]; q += 2
                if blk == 0:
                    n = rec[q]; q += 1
                    out = bytes(rec[q:q + n]); q += n
                else:
                    out = b''
                    for _ in range(blk):
                        o, q = expand(q)
                        out += o
                return out * rep, q
            out = b''
            while q < len(rec):
                o, q = expand(q)
                out += o
            m.data[si][off:off + len(out)] = out
            last = (si, off)
        elif typ in (0x9C, 0x9D):
            q = 0
            while q < len(rec):
                b0 = rec[q]
                if not b0 & 0x80:          # THREAD: D bit 6 (frame), method bits 4-2
                    q += 1
                    meth = (b0 >> 2) & 7
                    idx = None
                    if b0 & 0x40:          # frame thread: F0-F2 have an index
                        if meth < 3:
                            idx, q = _index(rec, q)
                    else:                  # target thread: T0-T3 always have an index
                        meth &= 3
                        idx, q = _index(rec, q)
                    threads[('F' if b0 & 0x40 else 'T', b0 & 3)] = (meth, idx)
                    continue
                loc = (b0 >> 2) & 0xF
                m_ = (b0 >> 6) & 1
                off = ((b0 & 3) << 8) | rec[q + 1]
                q += 2
                fd = rec[q]; q += 1
                if fd & 0x80:
                    frame = threads[('F', (fd >> 4) & 3)]
                else:
                    fm = (fd >> 4) & 7
                    fi = None
                    if fm < 3:
                        fi, q = _index(rec, q)
                    frame = (fm, fi)
                if fd & 0x08:              # target from a thread; P bit from here
                    tm, ti = threads[('T', fd & 3)]
                    tm = (tm & 3) | (fd & 4)
                else:
                    tm = fd & 7
                    ti, q = _index(rec, q)
                disp = 0
                if not tm & 4:
                    disp = struct.unpack('<H', rec[q:q + 2])[0]; q += 2
                kind = {0: 'seg', 1: 'grp', 2: 'ext'}[tm & 3]
                m.fixups.append((last[0], last[1] + off, LOCS.get(loc, loc), 'self' if not m_ else 'seg',
                                 frame, (kind, ti), disp))
        elif typ in (0x94, 0x95):
            _, q = _index(rec, 0)          # base group
            si, q = _index(rec, q)
            fmt, n = ('<HI', 6) if typ == 0x95 else ('<HH', 4)
            while q + n <= len(rec):
                line, off = struct.unpack(fmt, rec[q:q + n])
                m.lines.append((si, off, line))
                q += n
        elif typ in (0x8A, 0x8B):
            m.raw = bytes(buf[m.raw_start:p])
            if pagesize:
                p = ((p + pagesize - 1) // pagesize) * pagesize
    return mods


def dump(path):
    for m in read_obj(open(path, 'rb').read()):
        print('== module %s' % m.name)
        for i, (n, c, l, a) in enumerate(m.segs, 1):
            print('  seg %d %-16s %-8s len %04x attr %02x' % (i, n, c, l, a))
        for n, s in m.grps:
            print('  grp %s %s' % (n, s))
        for n, (s, o) in sorted(m.publics.items(), key=lambda x: x[1]):
            print('  pub %-24s %d:%04x' % (n, s, o))
        print('  ext', ' '.join(m.externs[1:]))
        print('  %d fixups' % len(m.fixups))


if __name__ == '__main__':
    for f in sys.argv[1:]:
        dump(f)
