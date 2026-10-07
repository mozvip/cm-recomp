# Matching decompilation of Championship Manager (1992): EUROPE.EXE (see docs/matching.md)
EXE_NAME := EUROPE.EXE
LINK_DATE := 08-26-1992
# -y (line numbers in the objects; TLINK writes nothing of them without /v) changes which
# copy of identical branch endings BCC keeps: f_8352_46de matches only with it, every
# other function matches either way
BCCFLAGS := -ml -O1 -k -Ol -y
# the runtime, emulator and overlay manager: Borland C++ 3.1's own modules
LIBS := $(addprefix tools/BCC31/LIB/,C0L.OBJ EMU.LIB MATHL.LIB CL.LIB OVERLAY.LIB)
include ../../../tools/match/decomp.mk
