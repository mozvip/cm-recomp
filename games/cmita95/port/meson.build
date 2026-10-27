# Championship Manager Italia 95, native: the decompiled sources (src/,
# from ../decomp/src) on Linux with SDL3, on the platform shared with the other games'
# ports (../../../port).
# See README.md.
project('cmita95', 'c',
  version: '5.3i',
  default_options: ['c_std=gnu11', 'warning_level=1', 'buildtype=debugoptimized'])

cc = meson.get_compiler('c')
sdl3 = dependency('sdl3')
sqlite3 = dependency('sqlite3')
libm = cc.find_library('m', required: false)
python = find_program('python3')

game_srcs = files(
  'src/18f9.c', 'src/1a83.c', 'src/215d.c', 'src/6ffe.c', 'src/75a4.c', 'src/7a45.c',
  'src/7f4a.c', 'src/8402.c', 'src/87dc.c', 'src/8e0f.c', 'src/93a1.c', 'src/9a9e.c',
  'src/9f8d.c', 'src/a214.c', 'src/a7b6.c', 'src/ab30.c', 'src/b26d.c', 'src/b6f6.c',
  'db.c')                 # the database, at start-up

# the platform, shared with the other games' ports (../../../port)
platform_srcs = files(
  '../../../port/main.c', '../../../port/image.c', '../../../port/db.c', '../../../port/sdl.c',
  '../../../port/dos.c', '../../../port/keyboard.c',
  '../../../port/music.c', '../../../port/gfx.c', '../../../port/ilbm.c')

# the game's data symbols at their addresses in the original data (see ../../../port/port.h)
# and the files it is loaded from (segments.txt, extracted by tools/port/extract.py)
segments = files('segments.txt')
data_symbols = custom_target('data_symbols',
  input: [segments, game_srcs],
  output: ['data_symbols.S', 'data_native.c', 'data_segments.c'],
  command: [python, files('../../../tools/port/mkdata.py'),
            '--segments', segments, '--start', '0x18c10', '--end', '0x5fe8e',
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

executable('cmita95', game_srcs, platform_srcs, data_symbols,
  include_directories: include_directories('.', '../../../port'),
  c_args: game_args,
  dependencies: [sdl3, sqlite3, libm],
  install: true)
