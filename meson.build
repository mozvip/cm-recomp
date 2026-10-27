# The games' native ports (port/README.md): one game per build directory, the game
# given by -Dgame. Each game's Makefile (games/<game>/port/Makefile, port/game.mk) sets
# its build directory up:
#   meson setup games/cm93/port/build . -Dgame=cm93
# What a game adds (its name, its sources, the platform files it uses besides the
# common ones) is in its games/<game>/port/meson.build.
project('cm-ports', 'c',
  meson_version: '>= 1.1',              # meson.options
  default_options: ['c_std=gnu11', 'warning_level=1', 'buildtype=debugoptimized'])

game = get_option('game')
if game == ''
  error('no game: meson setup BUILD . -Dgame=cm1|cm93|cmese|cmitalia|cmita95 (or make -C games/<game>/port)')
endif

cc = meson.get_compiler('c')
sdl3 = dependency('sdl3')
sqlite3 = dependency('sqlite3')
libm = cc.find_library('m', required: false)
python = find_program('python3')

# the platform, shared by the games' ports (port/)
platform_srcs = files(
  'port/main.c', 'port/image.c', 'port/db.c', 'port/sdl.c',
  'port/dos.c', 'port/keyboard.c',
  'port/music.c', 'port/gfx.c', 'port/ilbm.c')
# the games' system module, in CM1's names (game.h gives the game's own)
system_srcs = files('port/system.c')
# what the later games (CM93, CM94, Italia, Italia 95) changed in it or added, and what
# they read from the database, in the same way
later_srcs = files('port/system93.c', 'port/db93.c')

# the game: sets game_name, game_srcs, and adds to system_srcs; names is CM1's
# names.txt (the others' sources use d_SSSS_OOOO)
names = []
subdir('games' / game / 'port')

# the game's data symbols at their addresses in the original data (see port/port.h)
# and the files it is loaded from (segments.txt, extracted by tools/port/extract.py);
# port_image's extent is game.h's IMAGE_START and IMAGE_END
segments = files('games' / game / 'port' / 'segments.txt')
game_h = files('games' / game / 'port' / 'game.h')
names_args = names.length() > 0 ? ['--names', names] : []
data_symbols = custom_target('data_symbols',
  input: [names, segments, game_h, game_srcs, system_srcs],
  output: ['data_symbols.S', 'data_native.c', 'data_segments.c'],
  command: [python, files('tools/port/mkdata.py'), names_args, '--aliases', game_h,
            '--segments', segments,
            '@OUTPUT0@', '@OUTPUT1@', '@OUTPUT2@', game_srcs, system_srcs])

# The 16-bit code reads the same bytes through different types, counts on wrapping
# arithmetic, indexes rows past their end into the next ones, and its data is not aligned.
game_args = cc.get_supported_arguments(
  '-fno-strict-aliasing', '-fwrapv', '-fno-tree-vectorize', '-fcommon',
  '-fno-aggressive-loop-optimizations',
  '-Wno-pointer-sign', '-Wno-incompatible-pointer-types', '-Wno-int-conversion',
  '-Wno-address-of-packed-member', '-Wno-format-overflow', '-Wno-unused-result',
  '-Wno-implicit-function-declaration', '-Wno-return-type', '-Wno-builtin-declaration-mismatch',
  '-Wno-unused-parameter', '-Wno-main', '-Wno-pragma-pack')

executable(game_name, game_srcs, platform_srcs, system_srcs, data_symbols,
  include_directories: include_directories('games' / game / 'port', 'port'),
  c_args: game_args,
  dependencies: [sdl3, sqlite3, libm],
  install: true)
