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
#define unpack_ilbm              f_1f50_0006     /* 1F50.ASM, ILBM pictures */
#define picture_palette          d_5d51_b358
#define mt32_music_setup         f_1f83_0006     /* 1F83.ASM, music driver interface */
#define install_music_driver     f_1f83_000e
#define start_music              f_1f83_0021
#define music_on                 f_1f83_0043
#define remove_music_driver      f_1f83_0054
#define music_off                f_1f83_005f
#define install_keyboard_handler f_1f89_000c     /* 1F89.ASM, keyboard driver */
#define remove_keyboard_handler  f_1f89_0046

/* The system module (../decomp/src/1D5E.C) is the platform's too (system.c, system93.c):
 * its functions and data, and the game's that they use, as this game names them. */
#define take_plane_pixel            f_1d5e_000e
#define planar_to_chunky            f_1d5e_005f
#define char_to_string              f_1d5e_0158
#define detect_and_set_video_mode   f_1d5e_0181
#define blank_and_flip_screen       f_1d5e_034e
#define input_wait_stub             f_1d5e_03a3
#define set_palette_entry           f_1d5e_03a8
#define init_hardware               f_1d5e_03d0
#define show_title_screens          f_1d5e_0477
#define load_title_picture          f_1d5e_05b0
#define set_picture_palette         f_1d5e_067d
#define present_screen              f_1d5e_07e7
#define present_screen_rect         f_1d5e_0822
#define set_fill_colour             f_1d5e_08cc
#define set_draw_colour             f_1d5e_08d7
#define fill_rect                   f_1d5e_08e2
#define draw_rect                   f_1d5e_0929
#define forget_font                 f_1d5e_0993
#define select_font                 f_1d5e_099e
#define draw_text                   f_1d5e_09ea
#define draw_text_in_colour         f_1d5e_0a13
#define draw_char                   f_1d5e_0a5d
#define set_text_opaque             f_1d5e_0b11
#define find_substring              f_1d5e_0b1c
#define find_last_substring         f_1d5e_0b6a
#define get_mouse_y                 f_1d5e_0c07
#define get_mouse_x                 f_1d5e_0c0f
#define take_mouse_clicks           f_1d5e_0c17
#define play_effect_stub            f_1d5e_0c32
#define wait_mouse_release          f_1d5e_0c37
#define read_quoted_field           f_1d5e_0c48
#define read_line                   f_1d5e_0c9b
#define write_line                  f_1d5e_0ccf
#define poll_key_string             f_1d5e_0ced
#define random_next                 f_1d5e_0d2c
#define seed_random_from_clock      f_1d5e_0d59
#define random_below                f_1d5e_0d6a
#define file_exists                 f_1d5e_0d9c
#define wait_ticks                  f_1d5e_0dbd
#define clock_ticks                 f_1d5e_0df7
#define upper_case                  f_1d5e_0e5f
#define next_text_buffer            f_1d5e_0efc
#define right_chars                 f_1d5e_0f31
#define mid_chars                   f_1d5e_0f84
#define draw_line                   f_1d5e_0fe3
#define trim_spaces                 f_1d5e_100c
#define random_fraction             f_1d5e_1089
#define save_pointer_background     f_1d5e_10a4
#define restore_pointer_background  f_1d5e_10f8
#define scroll_rect_up              f_1d5e_114c
#define restore_system              f_1d5e_1216
#define load_music                  f_1d5e_1259
#define max_float                   f_1d5e_12e0
#define max_int                     f_1d5e_1308
#define max_long                    f_1d5e_131d
#define min_float                   f_1d5e_1342
#define min_int                     f_1d5e_136a
#define min_long                    f_1d5e_137f
#define swap_bytes                  f_1d5e_13a4
#define vm_alloc                    f_1d5e_13e0
#define vm_map                      f_1d5e_1618
#define init_mouse                  f_1d5e_18c5
#define show_pointer                f_1d5e_18f2
#define hide_pointer                f_1d5e_19b2
#define poll_mouse                  f_1d5e_19e0
#define empty_stub_a                f_1d5e_1a24
#define empty_stub_b                f_1d5e_1a29
#define empty_stub_c                f_1d5e_1a2e
#define pointer_off_for_typing      f_1d5e_1a33
#define pointer_on_after_typing     f_1d5e_1a4d
#define screen_buffer               d_5d51_dd80
#define startup_video_mode          d_5d51_dd6d
#define screen_vm_block             d_5d51_dd7e
#define picture_palette_pending     d_5d51_d567
#define background_brightness       d_5d51_d95a
#define background_colour           d_5d51_d95c
#define loop_i                      d_5d51_d9d0
#define loop_j                      d_5d51_d9fe
#define palette_green               d_5d51_d8ca
#define palette_red                 d_5d51_d834
#define loaded_picture              d_2414_2134
#define picture_file                d_2414_4a3e
#define mouse_driver_present        d_5d51_daba
#define sound_driver_mem            d_5d51_dd76
#define sound_driver                d_5d51_dd7a
#define sound_device                d_5d51_9517
#define vga_memory                  d_5d51_dd00
#define draw_colour                 d_5d51_dac6
#define fill_colour                 d_5d51_dac7
#define current_font_id             d_5d51_d82a
#define small_font_selected         d_5d51_dd6a
#define current_font                d_5d51_dcfc
#define text_opaque                 d_5d51_9516
#define text_buffer_index           d_5d51_d5ee
#define text_buffers                d_2414_00c8
#define pointer_background          d_5d51_dd04
#define music_mem                   d_5d51_dd6e
#define music_data                  d_5d51_dd72
#define vm_work_buffer              d_5d51_dcf8
#define mouse_initialised           d_5d51_9514
#define pointer_drawn_x             d_5d51_dabe
#define pointer_drawn_y             d_5d51_dabc
#define vm_blocks                   d_5d51_dac8
#define vm_slots                    d_5d51_dc08
#define small_font                  d_5d51_953a
#define medium_font                 d_5d51_9548
#define large_font                  d_5d51_9556
#define mouse_x                     d_5d51_9565
#define mouse_y                     d_5d51_9567
#define pointer_visible             d_5d51_9569
#define mouse_clicks                d_5d51_956b
#define random_seed                 d_5d51_956d
#define midnight_tick_offset        d_5d51_9571
#define last_clock_ticks            d_5d51_9575
#define vm_block_count              d_5d51_9579
#define vm_buffer_used              d_5d51_957b
#define FONT_FIRST_CHAR    0                   /* the fonts start at character 0 */
#define DEFAULT_BRIGHTNESS 2                   /* a new picture's */
#define LOGO_FILE          "intelek.lbm"      /* the publisher's picture, before the title */

/* The database (../../../port/db93.c): the names it puts in the executable's tables, and
 * the teams a new game reads (../decomp/src/A7F0.C's first function), as this game names them. */
#define load_teams                  f_a7f0_0000
#define team_stats                  d_3404_443a
#define team_seats                  d_3404_4e8a
#define team_balances               d_3404_3e4a
#define team_staff                  d_2414_84c2
#define club_names                  d_5d51_b476
#define first_names                 d_56d9_0000
#define surnames                    d_56d9_13b9
#define country_names               d_4f37_0000
#define TEAMS          38                     /* the league's clubs */
#define LEAGUE_PLAYERS 1000                   /* player numbers: league 0-999, abroad 1000-1499 */
#define ABROAD_PLAYERS 500
#define FIRST_NAMES    447                    /* the executable's tables of names */
#define SURNAMES       1176
#define COUNTRIES      76

#endif
