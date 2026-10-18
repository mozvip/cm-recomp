# Championship Manager 93, native: the decompiled sources (src/, from ../decomp/src) on
# Linux with SDL3, on the platform shared with the other games' ports (../../../port).
# See README.md.
project('cm93', 'c',
  version: '1.10',
  default_options: ['c_std=gnu11', 'warning_level=1', 'buildtype=debugoptimized'])

cc = meson.get_compiler('c')
sdl3 = dependency('sdl3')
sqlite3 = dependency('sqlite3')
libm = cc.find_library('m', required: false)
python = find_program('python3')

game_srcs = files(
  'src/1446.c', 'src/14bc.c', 'src/1bd3.c', 'src/70a9.c', 'src/7732.c', 'src/7c74.c',
  'src/817e.c', 'src/8683.c', 'src/8aa1.c', 'src/9107.c', 'src/96bb.c', 'src/9e77.c',
  'src/a3de.c', 'src/a694.c', 'src/ad38.c', 'src/b628.c', 'src/be31.c',
  'db.c')                 # the database, at start-up

# the platform, shared with the other games' ports (../../../port)
platform_srcs = files(
  '../../../port/main.c', '../../../port/image.c', '../../../port/db.c', '../../../port/sdl.c',
  '../../../port/dos.c', '../../../port/keyboard.c', '../../../port/ems.c',
  '../../../port/music.c', '../../../port/gfx.c', '../../../port/ilbm.c')

# the game's data symbols at their addresses in the original data (see ../../../port/port.h)
# and the files it is loaded from (segments.txt, extracted by tools/port/extract.py)
segments = files('segments.txt')
data_symbols = custom_target('data_symbols',
  input: [segments, game_srcs],
  output: ['data_symbols.S', 'data_native.c', 'data_segments.c'],
  command: [python, files('../../../tools/port/mkdata.py'),
            '--segments', segments, '--start', '0x12760', '--end', '0x60966',
            '@OUTPUT0@', '@OUTPUT1@', '@OUTPUT2@', game_srcs])

# The 16-bit code reads the same bytes through different types, counts on wrapping
# arithmetic, indexes rows past their end into the next ones, and its data is not aligned.
game_args = cc.get_supported_arguments(
  '-fno-strict-aliasing', '-fwrapv', '-fno-tree-vectorize', '-fcommon',
  '-fno-aggressive-loop-optimizations',
  '-Wno-pointer-sign', '-Wno-incompatible-pointer-types', '-Wno-int-conversion',
  '-Wno-address-of-packed-member', '-Wno-format-overflow', '-Wno-unused-result',
  '-Wno-implicit-function-declaration', '-Wno-return-type', '-Wno-builtin-declaration-mismatch',
  '-Wno-unused-parameter', '-Wno-main', '-Wno-pragma-pack')

executable('cm93', game_srcs, platform_srcs, data_symbols,
  include_directories: include_directories('.', '../../../port'),
  c_args: game_args,
  dependencies: [sdl3, sqlite3, libm],
  install: true)
