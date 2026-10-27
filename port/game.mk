# The games' ports' Makefile, a convenience wrapper around meson (see README.md).
# games/<game>/port/Makefile sets GAME (its directory's name), BIN (the executable's)
# and EXE (the game's executable, the data's source), then includes this:
#   make                      build build/$(BIN)
#   make data GAME_DIR=...    extract the data segments from GAME_DIR/$(EXE) to build/data,
#                             and make the database of its players and teams (build/data/game.db)
#   make run GAME_DIR=...     both, then run it in the game's directory (default: games/$(GAME))
ROOT := ../../..
GAME_DIR ?= ..
BUILD ?= build

all: $(BUILD)/build.ninja
	meson compile -C $(BUILD)

# the build directory: the repository's meson.build, for this game
$(BUILD)/build.ninja:
	meson setup $(BUILD) $(ROOT) -Dgame=$(GAME)

data:
	python3 $(ROOT)/tools/port/extract.py --segments segments.txt $(GAME_DIR)/$(EXE) $(BUILD)/data
	python3 $(ROOT)/tools/port/mkdb.py --game $(GAME) $(GAME_DIR) $(BUILD)/data/game.db

run: all
	@test -d $(BUILD)/data || $(MAKE) data GAME_DIR=$(GAME_DIR)
	$(BUILD)/$(BIN) -g $(GAME_DIR) $(ARGS)

clean:
	rm -rf $(BUILD)

.PHONY: all data run clean
