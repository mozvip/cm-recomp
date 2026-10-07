# Shared build rules for a statically recompiled game. games/<game>/Makefile sets:
#   EXE_NAME  the game's executable (file name inside GAME_DIR, any case)
#   DRIVERS   runtime-loaded drivers as FILE:NAME (space separated, files inside GAME_DIR)
#   TARGET    binary to build
# and provides hooks.c and entries.txt, and optionally overrides.txt + src/*.c (functions
# replaced by hand-written C, see docs/handwritten.md) and names.txt. GAME_DIR (your copy
# of the game) is given on the command line or in the environment:  make GAME_DIR=/path/to/game
ROOT := $(abspath $(dir $(lastword $(MAKEFILE_LIST)))/..)
RT := $(ROOT)/runtime
TOOLS := $(ROOT)/tools
IMGUI := $(ROOT)/third_party/imgui
CC ?= gcc
CXX ?= g++
SDL_CFLAGS := $(shell pkg-config --cflags sdl2)
SDL_LIBS := $(shell pkg-config --libs sdl2)
CFLAGS ?= -O1 -g -w -fno-strict-aliasing
RT_CFLAGS ?= -O2 -g -Wall -Wno-unused -Wno-format-truncation -Wno-misleading-indentation -fno-strict-aliasing
UI_CXXFLAGS ?= -O2 -g -fno-strict-aliasing
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

GEN := $(wildcard recomp/seg_*.c) recomp/dispatch.c recomp/image.c $(wildcard recomp/drv_*.c) recomp/drivers.c
HAND := $(wildcard src/*.c)
RTSRC := rt fpu dos bios main opl2 audio verify mod
# the overlay (Dear ImGui, a git submodule)
IMGUI_SRC := imgui imgui_draw imgui_tables imgui_widgets backends/imgui_impl_sdl2 backends/imgui_impl_sdlrenderer2
UI_OBJ := build/rt/ui.o $(IMGUI_SRC:%=build/imgui/%.o)
OBJ := $(patsubst %.c,build/%.o,$(GEN) $(HAND)) $(RTSRC:%=build/rt/%.o) $(UI_OBJ) build/hooks.o
META := $(wildcard overrides.txt names.txt)
RECOMP_OPTS := $(if $(wildcard overrides.txt),--overrides overrides.txt) $(if $(wildcard names.txt),--names names.txt)

all: recomp/.stamp
	@$(MAKE) --no-print-directory $(TARGET)

# generation is a separate make pass so the object list sees the new sources
recomp/.stamp: $(TOOLS)/recomp.py $(TOOLS)/x86.py $(TOOLS)/unfbov.py $(EXE) entries.txt $(META) $(DRV_FILES)
	@test -n "$(GAME_DIR)" || { echo "set GAME_DIR to your copy of the game, e.g. make GAME_DIR=~/dos/cm93"; exit 1; }
	@test -n "$(EXE)" || { echo "$(EXE_NAME) not found in $(GAME_DIR)"; exit 1; }
	python3 $(TOOLS)/recomp.py --exe $(EXE) --out recomp --entries entries.txt $(RECOMP_OPTS)
	python3 $(TOOLS)/recomp.py --exe $(EXE) --drivers "$(DRV_SPEC)" --out recomp --entries entries.txt
	@touch $@

$(TARGET): $(OBJ)
	$(CXX) -o $@ $(OBJ) $(SDL_LIBS) -lm

build/recomp/%.o: recomp/%.c $(RT)/cpu.h
	@mkdir -p build/recomp
	@echo "CC $<"
	@$(CC) $(CFLAGS) -I$(RT) -Irecomp -c $< -o $@

# hand-written replacements: compiled with warnings, unlike the generated code
build/src/%.o: src/%.c $(RT)/cpu.h $(RT)/hand.h $(RT)/mod.h recomp/.stamp
	@mkdir -p build/src
	$(CC) $(RT_CFLAGS) -Wextra -I$(RT) -Irecomp -c $< -o $@

build/rt/%.o: $(RT)/%.c $(RT)/cpu.h $(RT)/rt.h $(RT)/opl2.h $(RT)/hand.h $(RT)/mod.h $(RT)/ui.h
	@mkdir -p build/rt
	$(CC) $(RT_CFLAGS) -I$(RT) $(SDL_CFLAGS) -c $< -o $@

build/rt/ui.o: $(RT)/ui.cpp $(RT)/ui.h $(RT)/mod.h $(IMGUI)/imgui.h
	@mkdir -p build/rt
	$(CXX) $(UI_CXXFLAGS) -Wall -I$(RT) -I$(IMGUI) -I$(IMGUI)/backends $(SDL_CFLAGS) -c $< -o $@

build/imgui/%.o: $(IMGUI)/%.cpp
	@mkdir -p $(dir $@)
	@echo "CXX $(notdir $<)"
	@$(CXX) $(UI_CXXFLAGS) -I$(IMGUI) $(SDL_CFLAGS) -c $< -o $@

$(IMGUI)/imgui.h:
	@echo "Dear ImGui is missing: run  git submodule update --init"; exit 1

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
	rm -rf build recomp $(TARGET)

.PHONY: all run discover clean
