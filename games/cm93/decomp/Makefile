# Matching decompilation of Championship Manager 93: CMEXE.EXE (see docs/matching.md)
# TLINK wrote it as CMAN93.EXE on 10 May 1993; the relink takes both from the executable.
EXE_NAME := CMEXE.EXE
BCCFLAGS := -ml -O1 -k -Ol
# the game code was compiled with Borland C++ 3.0 (1bd3:0157 reloads DX only with it)
CC_TC := bc30
# the runtime, emulator and overlay manager: Borland C++ 3.0's own modules
LIBS := $(addprefix tools/BC30/LIB/,C0L.OBJ EMU.LIB MATHL.LIB CL.LIB OVERLAY.LIB)
include ../../../tools/match/decomp.mk
