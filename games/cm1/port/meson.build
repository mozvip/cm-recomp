# Championship Manager (1992), native: the decompiled sources (src/, from
# ../decomp/src) on Linux with SDL3. See README.md.
project('cm1', 'c',
  version: '1.02',
  default_options: ['c_std=gnu11', 'warning_level=1', 'buildtype=debugoptimized'])

cc = meson.get_compiler('c')
sdl3 = dependency('sdl3')
libm = cc.find_library('m', required: false)
python = find_program('python3')

game_srcs = files(
  'src/144e.c', 'src/14d2.c', 'src/1680.c', 'src/67ee.c', 'src/6e68.c', 'src/7555.c',
  'src/7a28.c', 'src/7eeb.c', 'src/8352.c', 'src/88c9.c', 'src/9100.c', 'src/992a.c',
  'src/a1c3.c')

platform_srcs = files(
  'platform/main.c', 'platform/image.c', 'platform/sdl.c', 'platform/dos.c',
  'platform/14b7_keyboard.c', 'platform/1a51_ems.c', 'platform/1ab2_music.c',
  'platform/1ab9_gfx.c', 'platform/1b05_ilbm.c')

# the game's data symbols at their addresses in the original data (see platform/port.h)
names = files('../names.txt')
data_symbols = custom_target('data_symbols',
  input: [names, game_srcs],
  output: ['data_symbols.S', 'data_native.c'],
  command: [python, files('../../../tools/port/mkdata.py'), '--names', names,
            '--start', '0x0f330', '--end', '0x57dc0', '@OUTPUT0@', '@OUTPUT1@', game_srcs])

# The 16-bit code reads the same bytes through different types, counts on wrapping
# arithmetic, indexes rows past their end into the next ones, and its data is not aligned.
game_args = cc.get_supported_arguments(
  '-fno-strict-aliasing', '-fwrapv', '-fno-tree-vectorize', '-fcommon',
  '-fno-aggressive-loop-optimizations',
  '-Wno-pointer-sign', '-Wno-incompatible-pointer-types', '-Wno-int-conversion',
  '-Wno-address-of-packed-member', '-Wno-format-overflow', '-Wno-unused-result',
  '-Wno-implicit-function-declaration', '-Wno-return-type', '-Wno-builtin-declaration-mismatch',
  '-Wno-unused-parameter', '-Wno-main', '-Wno-pragma-pack')

executable('cm1', game_srcs, platform_srcs, data_symbols,
  include_directories: include_directories('platform'),
  c_args: game_args,
  dependencies: [sdl3, libm],
  install: true)
