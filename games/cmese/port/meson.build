# Championship Manager 94 (End of Season Edition), native: the decompiled sources (src/,
# from ../decomp/src) on Linux with SDL3, on the platform shared with the other games'
# ports (../../../port).
# See README.md.
project('cm94', 'c',
  version: '4.04',
  default_options: ['c_std=gnu11', 'warning_level=1', 'buildtype=debugoptimized'])

cc = meson.get_compiler('c')
sdl3 = dependency('sdl3')
libm = cc.find_library('m', required: false)
python = find_program('python3')

game_srcs = files(
  'src/18f9.c', 'src/1a70.c', 'src/2162.c', 'src/7827.c', 'src/7dd6.c', 'src/829f.c',
  'src/8773.c', 'src/8c32.c', 'src/9007.c', 'src/9661.c', 'src/9c01.c', 'src/a330.c',
  'src/a83a.c', 'src/aac9.c', 'src/b085.c', 'src/b8da.c', 'src/c06b.c')

# the platform, shared with the other games' ports (../../../port)
platform_srcs = files(
  '../../../port/main.c', '../../../port/image.c', '../../../port/sdl.c',
  '../../../port/dos.c', '../../../port/keyboard.c', '../../../port/ems.c',
  '../../../port/music.c', '../../../port/gfx.c', '../../../port/ilbm.c')

# the game's data symbols at their addresses in the original data (see ../../../port/port.h)
# and the files it is loaded from (segments.txt, extracted by tools/port/extract.py)
segments = files('segments.txt')
data_symbols = custom_target('data_symbols',
  input: [segments, game_srcs],
  output: ['data_symbols.S', 'data_native.c', 'data_segments.c'],
  command: [python, files('../../../tools/port/mkdata.py'),
            '--segments', segments, '--start', '0x18c70', '--end', '0x6811c',
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

executable('cm94', game_srcs, platform_srcs, data_symbols,
  include_directories: include_directories('.', '../../../port'),
  c_args: game_args,
  dependencies: [sdl3, libm],
  install: true)
