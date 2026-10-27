# Championship Manager Italia (1993), native: the decompiled sources (src/,
# from ../decomp/src) on Linux with SDL3, on the platform shared with the other games'
# ports (../../../port).
# See README.md.
project('cmitalia', 'c',
  version: '1993',
  default_options: ['c_std=gnu11', 'warning_level=1', 'buildtype=debugoptimized'])

cc = meson.get_compiler('c')
sdl3 = dependency('sdl3')
sqlite3 = dependency('sqlite3')
libm = cc.find_library('m', required: false)
python = find_program('python3')

game_srcs = files(
  'src/1446.c', 'src/1646.c', 'src/1d5e.c', 'src/6b47.c', 'src/71c8.c', 'src/76ea.c',
  'src/7c1d.c', 'src/8119.c', 'src/8539.c', 'src/8ba7.c', 'src/9182.c', 'src/9915.c',
  'src/9e79.c', 'src/a13d.c', 'src/a7f0.c', 'src/b0f1.c', 'src/b8e8.c',
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
            '--segments', segments, '--start', '0x14010', '--end', '0x5b34c',
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

executable('cmitalia', game_srcs, platform_srcs, data_symbols,
  include_directories: include_directories('.', '../../../port'),
  c_args: game_args,
  dependencies: [sdl3, sqlite3, libm],
  install: true)
