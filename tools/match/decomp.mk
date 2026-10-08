# Shared rules for a matching decompilation (see docs/matching.md). games/<game>/decomp/Makefile sets:
#   EXE_NAME   the original executable (file name inside GAME_DIR, any case)
#   LINK_DATE  optional: the link date (MM-DD-YYYY); default: the one TLINK stored in it
#   BCCFLAGS   default compiler options (a source can add its own with @flags)
#   CC_TC      optional: compiler (tcdos.sh -T), bc31 (default) or bc402
#   LD_TC      optional: linker, tc (TLINK 5.0, default) or bc402 (TLINK 6.1)
#   LIBS       optional: the startup object and libraries (paths from the repository root,
#              in link order) the runtime is linked from instead of blobs
# GAME_DIR (your copy of the game) defaults to the game's directory, games/<game>.
ROOT := $(abspath $(dir $(lastword $(MAKEFILE_LIST)))/../..)
GAME_DIR ?= ..
NAMES ?= ../names.txt
SYMBOLS ?= symbols.txt
EXE := $(firstword $(shell find $(GAME_DIR) -maxdepth 1 -iname '$(EXE_NAME)' 2>/dev/null))
LINK_DATE ?= $(shell python3 $(ROOT)/tools/match/exemodel.py --link-date "$(EXE)" 2>/dev/null)
LINK_NAME = $(shell python3 $(ROOT)/tools/match/exemodel.py --link-name "$(EXE)")
CC_TC ?= bc31
LD_TC ?= tc
BUILD := python3 $(ROOT)/tools/match/build.py --exe "$(EXE)" --dir . --names $(NAMES) --symbols $(SYMBOLS) \
         --date $(LINK_DATE) --cflags "$(BCCFLAGS)" --cc $(CC_TC) --ld $(LD_TC) \
         $(if $(LIBS),--libs "$(addprefix $(ROOT)/,$(LIBS))")

all: check-exe
	$(BUILD)

# recompile every source
rebuild: check-exe
	$(BUILD) --force

# the relink alone, without any C: must always give the original executable
identity: check-exe
	python3 $(ROOT)/tools/match/mkblobs.py "$(EXE)" build/identity $(if $(LIBS),--libs $(addprefix $(ROOT)/,$(LIBS)))
	$(ROOT)/.claude/skills/turbo-cpp/scripts/tcdos.sh -T $(LD_TC) -C build/identity -D $(LINK_DATE) -- TLINK @LINK.RSP
	python3 $(ROOT)/tools/match/exediff.py "$(EXE)" build/identity/$(LINK_NAME)

# how much is decompiled (after a build); LIST=SSSS lists one segment, TODO=N suggests
progress: check-exe
	python3 $(ROOT)/tools/match/progress.py "$(EXE)" . $(if $(LIST),--list $(LIST)) $(if $(TODO),--todo $(TODO))

check-exe:
	@test -n "$(EXE)" || { echo "$(EXE_NAME) not found in GAME_DIR=$(GAME_DIR)"; exit 2; }

clean:
	rm -rf build

.PHONY: all rebuild identity progress check-exe clean
