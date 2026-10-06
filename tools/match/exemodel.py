#!/usr/bin/env python3
"""Model of a TLINK 5.0 VROOMM executable (Borland C++ 3.x, FBOV overlays).

  exemodel.py GAME.EXE        print the segment layout, stubs and overlays

Everything is in *file* numbering (load segment 0), except where a name says
"rt" (runtime numbering, load segment 0x1000, as used by tools/recomp.py).

Exe.segs is the list of TLINK logical segments, rebuilt from the overlay
manager's segment table (_EXEINFO_), which TLINK writes with one entry per
segment in link-map order:
    flags 1: code, 0: data / first segment of a group (maxoff = group size),
    3: overlay stub, 4: further segment of a group (start only).
"""
import struct, sys
from collections import namedtuple

Stub = namedtuple('Stub', 'index seg fileoff codesize nfix entries fixups code')
#   index: segment table index, seg: stub frame, entries: [code offsets],
#   fixups: [offset of each segment word in code], code: overlay bytes (selectors as stored)


class Seg:
    def __init__(self, index, frame, maxoff, flags, minoff):
        self.index, self.frame, self.maxoff, self.flags, self.minoff = index, frame, maxoff, flags, minoff
        self.start = frame * 16 + minoff          # linear image offset
        self.end = None                           # filled in by Exe
        self.kind = None                          # code | fardata | ovrinfo | stub | dgroup | stack
        self.name = None
        self.cls = None

    @property
    def size(self):
        return self.end - self.start

    def __repr__(self):
        return '<%d %s %05x-%05x %s>' % (self.index, self.name, self.start, self.end, self.cls)


class Exe:
    def __init__(self, path):
        d = self.raw = open(path, 'rb').read()
        h = struct.unpack('<2s13H', d[:28])
        self.hdr = h
        self.cblp, self.cp, self.nrel, self.hdr_paras = h[1], h[2], h[3], h[4]
        self.minalloc, self.maxalloc, self.ss, self.sp, self.csum, self.ip, self.cs, self.relofs = h[5:13]
        self.loaded = self.cp * 512 - ((512 - self.cblp) if self.cblp else 0)
        self.image = d[self.hdr_paras * 16:self.loaded]
        self.relocs = [struct.unpack('<HH', d[self.relofs + 4 * i:self.relofs + 4 * i + 4]) for i in range(self.nrel)]
        fb = d[self.loaded:]
        assert fb[:4] == b'FBOV', 'no FBOV block'
        self.ovrsize, self.exeinfo, self.segnum = struct.unpack('<IIH', fb[4:14])
        self.fbov_hdr = fb[:16]
        self.ovdata = fb[16:16 + self.ovrsize]
        self.trailer = fb[16 + self.ovrsize:]
        t = self.exeinfo - self.hdr_paras * 16          # image offset of the table
        self.segtab_at = t
        self.segs = [Seg(i, *struct.unpack('<4H', self.image[t + 8 * i:t + 8 * i + 8])) for i in range(self.segnum)]
        # TLINK's __EXENAME__ (the output file name) and __EXEDATE__ follow the table
        end = t + 8 * self.segnum
        self.link_name = self.image[end:end + 12].split(b'\0')[0].decode('latin1').upper()
        day, month, year = struct.unpack('<BBH', self.image[end + 12:end + 16])
        self.link_date = '%02d-%02d-%04d' % (month, day, year)
        self._classify()
        self.stubs = []
        for s in self.segs:
            if s.flags == 3:
                o = s.start
                fileoff, codesize, relsize, nent = struct.unpack('<IHHH', self.image[o + 4:o + 14])
                ents = [struct.unpack('<H', self.image[o + 0x22 + 5 * k:o + 0x24 + 5 * k])[0] for k in range(nent)]
                code = self.ovdata[fileoff:fileoff + codesize]
                fx = [struct.unpack('<H', self.ovdata[fileoff + codesize + 2 * k:fileoff + codesize + 2 * k + 2])[0]
                      for k in range(relsize // 2)]
                self.stubs.append(Stub(s.index, s.frame, fileoff, codesize, relsize // 2, ents, fx, code))
        self.stub_by_frame = {st.seg: st for st in self.stubs}

    def _classify(self):
        segs = self.segs
        n = len(segs)
        # Extents. Table order is memory order. Code/data/stub entries (flags 1, 0, 3) give
        # maxoff = end offset in their frame, except a group leader (flag 0 followed by
        # flag 4 entries), whose maxoff is the size of the whole group. Group members
        # (flag 4) only give their start: they end where the next entry starts, and the
        # last one where the group ends.
        group_end = None
        for i, s in enumerate(segs):
            nxt = segs[i + 1] if i + 1 < n else None
            if s.flags == 0 and nxt is not None and nxt.flags == 4:
                group_end = s.frame * 16 + s.maxoff
                s.group_end = group_end
                s.end = nxt.start
            elif s.flags == 4:
                s.end = nxt.start if nxt is not None and nxt.flags == 4 else group_end
            else:
                s.end = s.frame * 16 + s.maxoff
        # kinds, by position in the class order TLINK uses for a Borland C++ program:
        # CODE, FAR_DATA, FAR_BSS, OVRINFO, STUBSEG, DGROUP (DATA..BSSEND), STACK
        first_data = next(i for i, s in enumerate(segs) if s.flags == 0)
        stub1 = next(i for i, s in enumerate(segs) if s.flags == 3) - 1      # _1STUB_
        last_stub = max(i for i, s in enumerate(segs) if s.flags == 3)
        ovr = next(i for i in range(stub1 - 1, 0, -1) if segs[i].flags == 0 and segs[i + 1].flags == 4)
        for i, s in enumerate(segs):
            if i < first_data:
                s.kind = 'code'
            elif i < ovr - 2:
                s.kind = 'fardata'
            elif i < stub1:
                s.kind = 'ovrinfo'
            elif i <= last_stub:
                s.kind = 'stub'
            elif i == n - 1:
                s.kind = 'stack'
            else:
                s.kind = 'dgroup'
        self.ovrinfo_first = ovr - 2          # _FARBSS, _OVERLAY_, then _OVRDATA_ (group leader)
        self.dgroup = segs[last_stub + 1]

    def rt(self, frame):
        return frame + 0x1000

    def word(self, a):
        return struct.unpack('<H', self.image[a:a + 2])[0]


def main(path):
    e = Exe(path)
    print('image %05x bytes, %d relocs, FBOV exeinfo %x segnum %d, ovrsize %x, trailer %d'
          % (len(e.image), e.nrel, e.exeinfo, e.segnum, e.ovrsize, len(e.trailer)))
    for s in e.segs:
        print('%2d %-8s fl%d %04x:%04x  %05x-%05x  len %05x' % (s.index, s.kind, s.flags, s.frame, s.minoff,
                                                            s.start, s.end, s.end - s.start))
    for st in e.stubs:
        print('stub %04x fileoff %05x code %04x fixups %4d entries %d' % (st.seg, st.fileoff, st.codesize, st.nfix,
                                                                          len(st.entries)))


if __name__ == '__main__':
    if sys.argv[1] in ('--link-name', '--link-date'):     # for makefiles
        e = Exe(sys.argv[2])
        print(e.link_name if sys.argv[1] == '--link-name' else e.link_date)
    else:
        main(sys.argv[1])
