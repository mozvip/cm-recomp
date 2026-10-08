# Matching decompilation of Championship Manager Italia 95 (see docs/matching.md)
# CM.EX_ is the executable as TLINK 6.1 wrote it (as cmanita.exe); CM.EXE is the same with
# CRACK.COM's patch (one byte at file offset 0xad600: jnz -> jmp).
EXE_NAME := CM.EX_
CC_TC := bc402
LD_TC := bc402
BCCFLAGS := -ml -1 -O1 -Y
# the runtime, emulator and overlay manager: Borland C++ 4.02's own modules
LIBS := $(addprefix tools/BC402/LIB/,C0L.OBJ EMU.LIB MATHL.LIB CL.LIB OVERLAY.LIB)
include ../../../tools/match/decomp.mk
