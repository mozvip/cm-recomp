#!/usr/bin/env bash
# Run Borland C++ 3.1 / Turbo C++ 3.0 tools (or any DOS command) headlessly in DOSBox-X.
#
#   tcdos.sh [-T bc30|bc31|bc402|tc|tasm] [-C dir] [-D MM-DD-YYYY] [-t seconds] [-k] -- COMMAND [ARGS...]
#   tcdos.sh -C src BCC -ml -O2 -c FOO.C
#
# Toolchains (-T, default bc31; or TOOLCHAIN=):
#   bc30   tools/BC30    Borland C++ 3.0 (BCC, TLINK 5.0, TASM, TLIB, MAKE; from the 1991 disks)
#   bc31   tools/BCC31   Borland C++ 3.1 (BCC, TLINK, TASM, TLIB, MAKE)
#   bc402  tools/BC402   Borland C++ 4.02 (BCC, TLINK 6.1, TLIB, MAKE; from the CD's BC4 tree)
#   tc     tools/TC      Turbo C++ 3.0  (TCC, TLINK, TLIB, MAKE)
#   tasm   tools/TASM    Turbo Assembler 3.0, Nov 1991 (TASM, TASMX); BCC 3.1 has TASM 3.1
# The install is mounted where its BIN\TURBOC.CFG expects it (e.g. I:\BORLANDC or
# C:\TC), through a symlink, so the config files work unmodified. Its BIN is on PATH.
# tasm has no config: it is mounted as C:\TASM, itself on PATH.
#
# Other drives:
#   D:  -> working directory (-C, default: $PWD); DOS cwd is D:\
#   E:  -> private temp dir holding the generated batch file and log
#
# -D sets the DOS date first (TLINK stores the link date in an overlaid executable).
#
# Several commands can be chained with a literal ';;' argument, e.g.
#   tcdos.sh BCC -c A.C ';;' BCC -c B.C ';;' TLINK ...
# Execution stops at the first command that returns a non-zero ERRORLEVEL.
#
# Captured stdout of the DOS commands is printed; exit status is 0 on success,
# 1 if a command failed, 124 on timeout / emulator failure, 2 on usage errors.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
REPO_ROOT="$(cd "$SCRIPT_DIR/../../../.." && pwd)"

DOSBOX="${DOSBOX:-}"
if [[ -z "$DOSBOX" ]]; then
  DOSBOX="$(ls -1 /mnt/Games/emu/dosbox-x/DOSBox-X-*.AppImage 2>/dev/null | sort | tail -n1 || true)"
fi

TOOLCHAIN="${TOOLCHAIN:-bc31}"
WORK="$PWD"
TIMEOUT=120
KEEP=0
DOSDATE=""
while getopts ":T:C:D:t:k" opt; do
  case $opt in
    T) TOOLCHAIN="$OPTARG" ;;
    C) WORK="$(cd "$OPTARG" && pwd)" ;;
    D) DOSDATE="$OPTARG" ;;
    t) TIMEOUT="$OPTARG" ;;
    k) KEEP=1 ;;
    *) echo "usage: $0 [-T bc30|bc31|bc402|tc|tasm] [-C dir] [-D MM-DD-YYYY] [-t seconds] [-k] -- COMMAND [ARGS...]" >&2; exit 2 ;;
  esac
done
shift $((OPTIND - 1))
[[ "${1:-}" == "--" ]] && shift
[[ $# -gt 0 ]] || { echo "tcdos.sh: no command given" >&2; exit 2; }

case "$TOOLCHAIN" in
  bc30) TC_DIR="${TC_DIR:-$REPO_ROOT/tools/BC30}" ;;
  bc31) TC_DIR="${TC_DIR:-$REPO_ROOT/tools/BCC31}" ;;
  bc402) TC_DIR="${TC_DIR:-$REPO_ROOT/tools/BC402}" ;;
  tc)   TC_DIR="${TC_DIR:-$REPO_ROOT/tools/TC}" ;;
  tasm) TC_DIR="${TC_DIR:-$REPO_ROOT/tools/TASM}" ;;
  *) echo "tcdos.sh: unknown toolchain '$TOOLCHAIN' (bc30|bc31|bc402|tc|tasm)" >&2; exit 2 ;;
esac

[[ -x "$DOSBOX" ]] || { echo "tcdos.sh: DOSBox-X not found/executable: '$DOSBOX' (set DOSBOX=)" >&2; exit 2; }
if [[ "$TOOLCHAIN" == tasm ]]; then
  [[ -f "$TC_DIR/TASM.EXE" ]] || { echo "tcdos.sh: no TASM.EXE in $TC_DIR" >&2; exit 2; }
  TDRIVE=C; TDIR=TASM; TBIN=""
else
  [[ -f "$TC_DIR/BIN/TURBOC.CFG" ]] || { echo "tcdos.sh: no BIN/TURBOC.CFG in $TC_DIR" >&2; exit 2; }
  # Where does the config expect the install?  "-IC:\TC\INCLUDE" -> drive C, dir TC
  inc="$(tr -d '\r' < "$TC_DIR/BIN/TURBOC.CFG" | grep -o -- '-I[A-Za-z]:\\[^ ;]*' | head -n1)"
  [[ -n "$inc" ]] || { echo "tcdos.sh: cannot find -I<drive>:\\... in TURBOC.CFG" >&2; exit 2; }
  TDRIVE="${inc:2:1}"; TDRIVE="${TDRIVE^^}"
  tpath="${inc:5}"; TDIR="${tpath%%\\*}"; TBIN='\BIN'
fi
case "$TDRIVE" in D|E|Z) echo "tcdos.sh: toolchain drive $TDRIVE clashes with D:/E:/Z:" >&2; exit 2 ;; esac

TMP="$(mktemp -d "${TMPDIR:-/tmp}/tcdos.XXXXXX")"
cleanup() { [[ $KEEP -eq 1 ]] && echo "tcdos.sh: kept $TMP" >&2 || rm -rf "$TMP"; }
trap cleanup EXIT
mkdir -p "$TMP/tool" "$TMP/e"
ln -s "$TC_DIR" "$TMP/tool/$TDIR"

# Build RUN.BAT (CRLF line endings). Each command's output goes to E:\OUT.LOG.
{
  printf '@ECHO OFF\r\n'
  printf 'SET PATH=%s:\\%s%s;Z:\\\r\n' "$TDRIVE" "$TDIR" "$TBIN"
  [[ -n "$DOSDATE" ]] && printf 'DATE %s\r\n' "${DOSDATE//-//}"
  printf 'D:\r\nCD \\\r\n'
  printf 'ECHO 0> E:\\RC.TXT\r\n'
  cmd=()
  emit() {
    [[ ${#cmd[@]} -eq 0 ]] && return
    printf '%s >> E:\\OUT.LOG\r\n' "${cmd[*]}"
    printf 'IF ERRORLEVEL 1 GOTO FAIL\r\n'
    cmd=()
  }
  for a in "$@"; do
    if [[ "$a" == ";;" ]]; then emit; else cmd+=("$a"); fi
  done
  emit
  printf 'GOTO DONE\r\n'
  printf ':FAIL\r\nECHO 1> E:\\RC.TXT\r\n'
  printf ':DONE\r\nECHO END> E:\\DONE.TXT\r\n'
} > "$TMP/e/RUN.BAT"
: > "$TMP/e/OUT.LOG"

set +e
SDL_VIDEODRIVER="${SDL_VIDEODRIVER:-dummy}" SDL_AUDIODRIVER="${SDL_AUDIODRIVER:-dummy}" \
timeout $((TIMEOUT + 10)) "$DOSBOX" -defaultconf -nogui -nomenu -fastlaunch -silent \
  -time-limit "$TIMEOUT" \
  -set "cpu cycles=max" -set "cpu core=dynamic" \
  -set "dos lfn=false" -set "dos ver=6.22" \
  -set "sdl output=surface" -set "dosbox synchronize time=false" \
  -c "MOUNT $TDRIVE \"$TMP/tool\"" \
  -c "MOUNT D \"$WORK\"" \
  -c "MOUNT E \"$TMP/e\"" \
  -c "CALL E:\\RUN.BAT" \
  >"$TMP/dosbox.stdout" 2>&1
set -e

# Print tool output (strip CRs and DOS EOF markers).
tr -d '\r\032' < "$TMP/e/OUT.LOG"

if [[ ! -f "$TMP/e/DONE.TXT" ]]; then
  echo "tcdos.sh: DOSBox-X did not complete (timeout ${TIMEOUT}s or emulator error)" >&2
  tail -n 20 "$TMP/dosbox.stdout" >&2
  exit 124
fi
rc="$(tr -dc '0-9' < "$TMP/e/RC.TXT")"
# COMMAND.COM does not set ERRORLEVEL for an unknown command
grep -q 'Bad command or filename' "$TMP/e/OUT.LOG" && rc=1
exit "${rc:-1}"
