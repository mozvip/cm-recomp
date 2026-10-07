# Matching decompilation of Championship Manager Italia (1993) (see docs/matching.md)
# CM.EX_ is the executable as TLINK 5.0 wrote it (as CMANITA.EXE, 10 Nov 1993); CM.EXE is the
# same with its copy protection patched out (one byte: b8e8:20b3 push bp -> retf).
EXE_NAME := CM.EX_
# -y (line numbers in the objects; TLINK writes nothing of them without /v) changes which
# copy of identical branch endings BCC keeps: f_8539_5313 matches only with it, every
# other function matches either way
BCCFLAGS := -ml -O1 -k -Ol -y
CC_TC := bc30
# the runtime, emulator and overlay manager: Borland C++ 3.0's own modules
LIBS := $(addprefix tools/BC30/LIB/,C0L.OBJ EMU.LIB MATHL.LIB CL.LIB OVERLAY.LIB)
include ../../../tools/match/decomp.mk
