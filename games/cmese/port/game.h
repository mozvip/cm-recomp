/* Championship Manager 94 (End of Season Edition), CMEXE.EXE 4.04: what the shared
 * platform (../../../port) needs to know of this game. Included by port.h before
 * anything else. */
#ifndef GAME_H
#define GAME_H

#define GAME_TITLE   "Championship Manager '94"
#define GAME_EXE     "CMEXE.EXE"
#define GAME_VERSION "CMEXE.EXE 4.04"
#define GAME_ENV     "CM94"             /* $CM94_DIR, $CM94_DATA */
#define GAME_ARGS    "A|R"              /* main()'s argument: AdLib or Roland music */
#define GAME_FILE    "TITLE.LBM"        /* checked for in the game's directory */

/* port_image: from the first far data segment to the end of DGROUP (../decomp's map,
 * file numbering), as segments.txt and meson.build have them */
#define IMAGE_START 0x18c70L
#define IMAGE_END   0x6811cL
#define DGROUP_SEG  0x59da

/* The platform's names are CM1's. The assembly modules are the same code in CM1, CM93
 * and this game (../decomp/src/2306.ASM ... 23A7.ASM): their functions and data, as
 * this game names them. */
#define draw_line_vga256         f_2306_000e     /* 2306.ASM, graphics primitives */
#define draw_line_planar         f_2306_00f6
#define draw_glyph_planar        f_2306_027b
#define save_planar_rect         f_2306_032c
#define restore_planar_rect      f_2306_03b7
#define unpack_ilbm              f_2352_000c     /* 2352.ASM, ILBM pictures */
#define show_ilbm                f_2352_0158
#define copy_screen_page         f_2352_0312
#define picture_palette          d_69da_b0de
#define mt32_music_setup         f_2385_000c     /* 2385.ASM, music driver interface */
#define install_music_driver     f_2385_0014
#define start_music              f_2385_0027
#define music_on                 f_2385_0049
#define remove_music_driver      f_2385_005a
#define music_off                f_2385_0065
#define install_keyboard_handler f_238c_0002     /* 238C.ASM, keyboard driver */
#define remove_keyboard_handler  f_238c_003c
#define ems_init                 f_23a7_0006     /* 23A7.ASM, EMS library */
#define ems_alloc                f_23a7_0161
#define ems_free                 f_23a7_01a0
#define ems_write                f_23a7_02d8
#define ems_read                 f_23a7_0438
#define ems_error                d_69da_cde3

#endif
