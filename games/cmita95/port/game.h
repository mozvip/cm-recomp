/* Championship Manager Italia 95, CM.EXE (CMANITA.EXE, v5.3i): what the shared
 * platform (../../../port) needs to know of this game. Included by port.h before
 * anything else. */
#ifndef GAME_H
#define GAME_H

#define GAME_TITLE   "Championship Manager Italia 95"
#define GAME_EXE     "CM.EXE"
#define GAME_VERSION "CM.EXE (CMANITA.EXE, v5.3i)"
#define GAME_ENV     "CMITA95"          /* $CMITA95_DIR, $CMITA95_DATA */
#define GAME_ARGS    "A|R"              /* main()'s argument: AdLib or Roland music (this release ships no driver: none) */
#define GAME_FILE    "TITLE.LBM"        /* checked for in the game's directory */

/* port_image: from the first far data segment to the end of DGROUP (../decomp's map,
 * file numbering), as segments.txt and meson.build have them */
#define IMAGE_START 0x18c10L
#define IMAGE_END   0x5fe8eL
#define DGROUP_SEG  0x51eb

/* The platform's names are CM1's. The assembly modules are the same code in CM1, CM93
 * and this game (../decomp/src/2301.ASM ... 23A1.ASM): their functions and data, as
 * this game names them. */
#define draw_line_vga256         f_2301_0002     /* 2301.ASM, graphics primitives */
#define draw_line_planar         f_2301_00ea
#define draw_glyph_planar        f_2301_026f
#define save_planar_rect         f_2301_0320
#define restore_planar_rect      f_2301_03ab
#define unpack_ilbm              f_234d_0000     /* 234D.ASM, ILBM pictures */
#define show_ilbm                f_234d_014c
#define copy_screen_page         f_234d_0306
#define picture_palette          d_61eb_afce
#define mt32_music_setup         f_2380_0000     /* 2380.ASM, music driver interface */
#define install_music_driver     f_2380_0008
#define start_music              f_2380_001b
#define music_on                 f_2380_003d
#define remove_music_driver      f_2380_004e
#define music_off                f_2380_0059
#define install_keyboard_handler f_2386_0006     /* 2386.ASM, keyboard driver */
#define remove_keyboard_handler  f_2386_0040
#define ems_init                 f_23a1_000a     /* 23A1.ASM, EMS library */
#define ems_alloc                f_23a1_0165
#define ems_free                 f_23a1_01a4
#define ems_write                f_23a1_02dc
#define ems_read                 f_23a1_043c
#define ems_error                d_61eb_c9d9

#endif
