# Convenience wrapper around meson (see README.md):
#   make                      build build/cm1
#   make run GAME_DIR=...     run it in the game's directory (default: games/cm1)
GAME_DIR ?= ..
BUILD ?= build

all: $(BUILD)/build.ninja
	meson compile -C $(BUILD)

$(BUILD)/build.ninja:
	meson setup $(BUILD)

run: all
	$(BUILD)/cm1 -g $(GAME_DIR) $(ARGS)

clean:
	rm -rf $(BUILD)

.PHONY: all run clean
