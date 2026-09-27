#!/bin/bash
# Run a recompiled game headless repeatedly, adding the call targets it could not find
# to entries.txt and rebuilding, until a run finds nothing new. Run from games/<game>/
# (or use "make discover"). Needs GAME_DIR and BIN; extra args are environment settings
# for the game, e.g. CM_TEST_CLICKS="160,100@3000" CM_TEST_KEYS="7500:111^".
set -u
HERE=$PWD
: "${GAME_DIR:?set GAME_DIR}" "${BIN:?set BIN}"
for i in $(seq 1 ${ROUNDS:-20}); do
    rm -f "$HERE/missing_entries.txt"
    (cd "$GAME_DIR" && SDL_VIDEODRIVER=offscreen SDL_AUDIODRIVER=dummy RC_MISSING="$HERE/missing_entries.txt" \
        timeout ${RUN_SECS:-20} env "$@" "$BIN" ${ARGS:-} > /dev/null 2> "$HERE/last_run.log")
    [ -s "$HERE/missing_entries.txt" ] || { echo "round $i: no missing entries"; tail -3 "$HERE/last_run.log"; exit 0; }
    new=$(sort -u "$HERE/missing_entries.txt" | grep -vxFf <(grep -v '^#' "$HERE/entries.txt") || true)
    [ -n "$new" ] || { echo "round $i: missing entries already known:"; cat "$HERE/missing_entries.txt"; tail -5 "$HERE/last_run.log"; exit 1; }
    echo "round $i: adding" $new
    echo "$new" >> "$HERE/entries.txt"
    make -s -j"$(nproc)" GAME_DIR="$GAME_DIR" 2>&1 | grep -E "error|functions" || exit 1
done
