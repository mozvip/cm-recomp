# Convenience wrapper around meson (see README.md):
#   make                      build build/cm1
#   make data GAME_DIR=...    extract the data segments from GAME_DIR/EUROPE.EXE to build/data,
#                             and make the database of its players and teams (build/data/game.db)
#   make run GAME_DIR=...     both, then run it in the game's directory (default: games/cm1)
GAME_DIR ?= ..
BUILD ?= build

all: $(BUILD)/build.ninja
	meson compile -C $(BUILD)

$(BUILD)/build.ninja:
	meson setup $(BUILD)

data:
	python3 ../../../tools/port/extract.py --segments segments.txt $(GAME_DIR)/EUROPE.EXE $(BUILD)/data
	python3 ../../../tools/port/mkdb.py --game cm1 $(GAME_DIR) $(BUILD)/data/game.db

run: all
	@test -d $(BUILD)/data || $(MAKE) data GAME_DIR=$(GAME_DIR)
	$(BUILD)/cm1 -g $(GAME_DIR) $(ARGS)

clean:
	rm -rf $(BUILD)

.PHONY: all data run clean
