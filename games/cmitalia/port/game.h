/* Championship Manager Italia (1993), CM.EXE (CMANITA.EXE, 10 Nov 1993): what the shared
 * platform (../../../port) needs to know of this game. Included by port.h before
 * anything else. */
#ifndef GAME_H
#define GAME_H

#define GAME_TITLE   "Championship Manager Italia"
#define GAME_EXE     "CM.EXE"
#define GAME_VERSION "CM.EXE (CMANITA.EXE, 10 Nov 1993)"
#define GAME_ENV     "CMITALIA"         /* $CMITALIA_DIR, $CMITALIA_DATA */
#define GAME_ARGS    "A|R"              /* main()'s argument: AdLib or Roland music */
#define GAME_FILE    "TITLE.LBM"        /* checked for in the game's directory */

/* port_image: from the first far data segment to the end of DGROUP (../decomp's map,
 * file numbering), as segments.txt and meson.build have them */
#define IMAGE_START 0x14010L
#define IMAGE_END   0x5b34cL
#define DGROUP_SEG  0x4d51

/* The platform's names are CM1's. The assembly modules are the same code in CM1, CM93
 * and this game (../decomp/src/1F04.ASM ... 1FA5.ASM): their functions and data, as
 * this game names them. */
#define draw_line_vga256         f_1f04_0008     /* 1F04.ASM, graphics primitives */
#define draw_line_planar         f_1f04_00f0
#define draw_glyph_planar        f_1f04_0275
#define save_planar_rect         f_1f04_0326
#define restore_planar_rect      f_1f04_03b1
#define unpack_ilbm              f_1f50_0006     /* 1F50.ASM, ILBM pictures */
#define show_ilbm                f_1f50_0152
#define copy_screen_page         f_1f50_030c
#define picture_palette          d_5d51_b358
#define mt32_music_setup         f_1f83_0006     /* 1F83.ASM, music driver interface */
#define install_music_driver     f_1f83_000e
#define start_music              f_1f83_0021
#define music_on                 f_1f83_0043
#define remove_music_driver      f_1f83_0054
#define music_off                f_1f83_005f
#define install_keyboard_handler f_1f89_000c     /* 1F89.ASM, keyboard driver */
#define remove_keyboard_handler  f_1f89_0046
#define ems_init                 f_1fa5_0000     /* 1FA5.ASM, EMS library */
#define ems_alloc                f_1fa5_015b
#define ems_free                 f_1fa5_019a
#define ems_write                f_1fa5_02d2
#define ems_read                 f_1fa5_0432
#define ems_error                d_5d51_cd79

#endif
