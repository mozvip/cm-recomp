# Usage: [RC_EXE=flat.exe] emudis.py SEG START END   (hex, e.g. 1680 150c 183d)
# Disassembles the relocated image (runtime segment values) with the Borland
# 8087-emulator interrupts decoded as x87 instructions. RC_EXE defaults to
# EUROPE.EXE in the current directory (overlaid exes are flattened first).
import os, sys, subprocess
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
sys.argv, args = sys.argv[:1], sys.argv[1:]
import recomp as R

seg, start, end = (int(x, 16) for x in args[:3])
b = bytearray(R.code_of(seg))
i = 0
while i < len(b) - 2:
    if b[i] == 0xCD and 0x34 <= b[i + 1] <= 0x3B:
        b[i] = 0x9B; b[i + 1] = 0xD8 + (b[i + 1] - 0x34); i += 2; continue
    if b[i] == 0xCD and b[i + 1] == 0x3C:
        t = b[i + 2] >> 6
        b[i] = 0x9B; b[i + 1] = {3: 0x26, 0: 0x3E, 1: 0x36, 2: 0x2E}[t]; b[i + 2] = (b[i + 2] & 0x3F) | 0xC0; i += 3; continue
    if b[i] == 0xCD and b[i + 1] == 0x3D:
        b[i] = 0x9B; b[i + 1] = 0x90; i += 2; continue
    i += 1
tmp = os.path.join(os.path.dirname(os.path.abspath(__file__)), '_emu.bin')
open(tmp, 'wb').write(b[start:end])
out = subprocess.run(['ndisasm', '-b16', '-o%d' % start, tmp], capture_output=True, text=True).stdout
for l in out.splitlines():
    print(l[:8] + ' ' + l[28:])
