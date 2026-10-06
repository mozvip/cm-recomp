# Matching decompilation of Championship Manager 94 End of Season: CMEXE.EXE (see docs/matching.md)
# Built with Borland C++ 4.02 (tools/BC4): TLINK 6.1 wrote it as CMAN93.EXE on 30 Sep 1994.
EXE_NAME := CMEXE.EXE
CC_TC := bc4
LD_TC := bc4
BCCFLAGS := -ml -1 -O1 -Y
# the runtime, emulator and overlay manager: Borland C++ 4.02's own modules
LIBS := $(addprefix tools/BC4/LIB/,C0L.OBJ EMU.LIB MATHL.LIB CL.LIB OVERLAY.LIB)
include ../../../tools/match/decomp.mk
