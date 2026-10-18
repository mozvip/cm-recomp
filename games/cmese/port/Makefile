# Convenience wrapper around meson (see README.md):
#   make                      build build/cm94
#   make data GAME_DIR=...    extract the data segments from GAME_DIR/CMEXE.EXE to build/data
#   make run GAME_DIR=...     both, then run it in the game's directory (default: games/cmese)
GAME_DIR ?= ..
BUILD ?= build

all: $(BUILD)/build.ninja
	meson compile -C $(BUILD)

$(BUILD)/build.ninja:
	meson setup $(BUILD)

data:
	python3 ../../../tools/port/extract.py --segments segments.txt $(GAME_DIR)/CMEXE.EXE $(BUILD)/data

run: all
	@test -d $(BUILD)/data || $(MAKE) data GAME_DIR=$(GAME_DIR)
	$(BUILD)/cm94 -g $(GAME_DIR) $(ARGS)

clean:
	rm -rf $(BUILD)

.PHONY: all data run clean
