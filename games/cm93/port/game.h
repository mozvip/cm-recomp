/* Championship Manager 93, CMEXE.EXE 1.10: what the shared platform (../../../port)
 * needs to know of this game. Included by port.h before anything else. */
#ifndef GAME_H
#define GAME_H

#define GAME_TITLE   "Championship Manager '93"
#define GAME_EXE     "CMEXE.EXE"
#define GAME_VERSION "CMEXE.EXE 1.10"
#define GAME_ENV     "CM93"             /* $CM93_DIR, $CM93_DATA */
#define GAME_ARGS    "A|R"              /* main()'s argument: AdLib or Roland music */
#define GAME_FILE    "TITLE.LBM"        /* checked for in the game's directory */

/* port_image: from the first far data segment to the end of DGROUP (../decomp's map,
 * file numbering), as segments.txt and meson.build have them */
#define IMAGE_START 0x12760L
#define IMAGE_END   0x60966L
#define DGROUP_SEG  0x50ae

/* The platform's names are CM1's. The assembly modules are the same code in both games
 * (../decomp/src/1D79.ASM ... 1E19.ASM): their functions and data, as this game names
 * them. */
#define draw_line_vga256         f_1d79_0006     /* 1D79.ASM, graphics primitives */
#define draw_line_planar         f_1d79_00ee
#define draw_glyph_planar        f_1d79_0273
#define save_planar_rect         f_1d79_0324
#define restore_planar_rect      f_1d79_03af
#define unpack_ilbm              f_1dc5_0004     /* 1DC5.ASM, ILBM pictures */
#define show_ilbm                f_1dc5_0150
#define copy_screen_page         f_1dc5_030a
#define picture_palette          d_60ae_b454
#define mt32_music_setup         f_1df8_0004     /* 1DF8.ASM, music driver interface */
#define install_music_driver     f_1df8_000c
#define start_music              f_1df8_001f
#define music_on                 f_1df8_0041
#define remove_music_driver      f_1df8_0052
#define music_off                f_1df8_005d
#define install_keyboard_handler f_1dfe_000a     /* 1DFE.ASM, keyboard driver */
#define remove_keyboard_handler  f_1dfe_0044

#endif
