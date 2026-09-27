# Shared build rules for a statically recompiled game. games/<game>/Makefile sets:
#   EXE_NAME  the game's executable (file name inside GAME_DIR, any case)
#   DRIVERS   runtime-loaded drivers as FILE:NAME (space separated, files inside GAME_DIR)
#   TARGET    binary to build
# and provides hooks.c and entries.txt. GAME_DIR (your copy of the game) is given on the
# command line or in the environment:  make GAME_DIR=/path/to/game
ROOT := $(abspath $(dir $(lastword $(MAKEFILE_LIST)))/..)
RT := $(ROOT)/runtime
TOOLS := $(ROOT)/tools
CC ?= gcc
SDL_CFLAGS := $(shell pkg-config --cflags sdl2)
SDL_LIBS := $(shell pkg-config --libs sdl2)
CFLAGS ?= -O1 -g -w -fno-strict-aliasing
RT_CFLAGS ?= -O2 -g -Wall -Wno-unused -Wno-format-truncation -Wno-misleading-indentation -fno-strict-aliasing
DRIVERS ?=
GAME_DIR ?=

# game files are looked up case-insensitively
findfile = $(firstword $(shell find $(GAME_DIR) -maxdepth 1 -iname '$(1)' 2>/dev/null))
EXE := $(if $(GAME_DIR),$(call findfile,$(EXE_NAME)))
empty :=
space := $(empty) $(empty)
comma := ,
DRV_SPEC := $(subst $(space),$(comma),$(foreach d,$(DRIVERS),$(call findfile,$(firstword $(subst :, ,$(d)))):$(lastword $(subst :, ,$(d)))))
DRV_FILES := $(foreach d,$(subst $(comma), ,$(DRV_SPEC)),$(firstword $(subst :, ,$(d))))

GEN := $(wildcard gen/seg_*.c) gen/dispatch.c gen/image.c $(wildcard gen/drv_*.c) gen/drivers.c
RTSRC := rt fpu dos bios main opl2 audio
OBJ := $(patsubst %.c,build/%.o,$(GEN)) $(RTSRC:%=build/rt/%.o) build/hooks.o

all: gen/.stamp
	@$(MAKE) --no-print-directory $(TARGET)

# generation is a separate make pass so the object list sees the new sources
gen/.stamp: $(TOOLS)/recomp.py $(TOOLS)/x86.py $(TOOLS)/unfbov.py $(EXE) entries.txt $(DRV_FILES)
	@test -n "$(GAME_DIR)" || { echo "set GAME_DIR to your copy of the game, e.g. make GAME_DIR=~/dos/cm93"; exit 1; }
	@test -n "$(EXE)" || { echo "$(EXE_NAME) not found in $(GAME_DIR)"; exit 1; }
	python3 $(TOOLS)/recomp.py --exe $(EXE) --out gen --entries entries.txt
	python3 $(TOOLS)/recomp.py --exe $(EXE) --drivers "$(DRV_SPEC)" --out gen --entries entries.txt
	@touch $@

$(TARGET): $(OBJ)
	$(CC) -o $@ $(OBJ) $(SDL_LIBS) -lm

build/gen/%.o: gen/%.c $(RT)/cpu.h
	@mkdir -p build/gen
	@echo "CC $<"
	@$(CC) $(CFLAGS) -I$(RT) -Igen -c $< -o $@

build/rt/%.o: $(RT)/%.c $(RT)/cpu.h $(RT)/rt.h $(RT)/opl2.h
	@mkdir -p build/rt
	$(CC) $(RT_CFLAGS) -I$(RT) $(SDL_CFLAGS) -c $< -o $@

build/hooks.o: hooks.c $(RT)/cpu.h $(RT)/rt.h
	@mkdir -p build
	$(CC) $(RT_CFLAGS) -I$(RT) $(SDL_CFLAGS) -c $< -o $@

# run from the game directory (the game reads its data files and writes saves there)
run: all
	cd $(GAME_DIR) && $(CURDIR)/$(TARGET) $(ARGS)

# add runtime-discovered entry points to entries.txt (headless; pass test input via ENV="...")
discover: all
	GAME_DIR=$(GAME_DIR) BIN=$(CURDIR)/$(TARGET) $(TOOLS)/discover.sh $(foreach e,$(ENV),'$(e)')

clean:
	rm -rf build gen $(TARGET)

.PHONY: all run discover clean
