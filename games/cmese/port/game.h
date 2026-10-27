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
#define unpack_ilbm              f_2352_000c     /* 2352.ASM, ILBM pictures */
#define picture_palette          d_69da_b0de
#define mt32_music_setup         f_2385_000c     /* 2385.ASM, music driver interface */
#define install_music_driver     f_2385_0014
#define start_music              f_2385_0027
#define music_on                 f_2385_0049
#define remove_music_driver      f_2385_005a
#define music_off                f_2385_0065
#define install_keyboard_handler f_238c_0002     /* 238C.ASM, keyboard driver */
#define remove_keyboard_handler  f_238c_003c

/* The system module (../decomp/src/2162.C) is the platform's too (system.c, system93.c):
 * its functions and data, and the game's that they use, as this game names them. */
#define take_plane_pixel            f_2162_000b
#define planar_to_chunky            f_2162_005a
#define char_to_string              f_2162_0160
#define detect_and_set_video_mode   f_2162_0188
#define blank_and_flip_screen       f_2162_0346
#define input_wait_stub             f_2162_0397
#define set_palette_entry           f_2162_03a0
#define init_hardware               f_2162_03c6
#define show_title_screens          f_2162_0470
#define load_title_picture          f_2162_05a0
#define set_picture_palette         f_2162_065d
#define present_screen              f_2162_07bc
#define present_screen_rect         f_2162_07f7
#define set_fill_colour             f_2162_0897
#define set_draw_colour             f_2162_08a6
#define fill_rect                   f_2162_08b5
#define draw_rect                   f_2162_090f
#define forget_font                 f_2162_0983
#define select_font                 f_2162_0992
#define draw_text                   f_2162_09e2
#define draw_text_in_colour         f_2162_0a0f
#define draw_char                   f_2162_0a59
#define set_text_opaque             f_2162_0b0c
#define find_substring              f_2162_0b1b
#define find_last_substring         f_2162_0b6f
#define get_mouse_y                 f_2162_0c13
#define get_mouse_x                 f_2162_0c1f
#define take_mouse_clicks           f_2162_0c2b
#define play_effect_stub            f_2162_0c48
#define wait_mouse_release          f_2162_0c51
#define read_quoted_field           f_2162_0c66
#define read_line                   f_2162_0cbe
#define write_line                  f_2162_0cf9
#define poll_key_string             f_2162_0d1a
#define random_next                 f_2162_0d5b
#define seed_random_from_clock      f_2162_0d8c
#define random_below                f_2162_0da1
#define file_exists                 f_2162_0dd7
#define wait_ticks                  f_2162_0dfb
#define clock_ticks                 f_2162_0e32
#define upper_case                  f_2162_0e9b
#define next_text_buffer            f_2162_0f38
#define right_chars                 f_2162_0f6e
#define mid_chars                   f_2162_0fc1
#define draw_line                   f_2162_1021
#define trim_spaces                 f_2162_104e
#define random_fraction             f_2162_10cf
#define save_pointer_background     f_2162_10ec
#define restore_pointer_background  f_2162_1141
#define scroll_rect_up              f_2162_1196
#define restore_system              f_2162_1256
#define load_music                  f_2162_129d
#define max_float                   f_2162_1324
#define max_int                     f_2162_134e
#define max_long                    f_2162_1367
#define min_float                   f_2162_1390
#define min_int                     f_2162_13ba
#define min_long                    f_2162_13d3
#define swap_bytes                  f_2162_13fc
#define vm_alloc                    f_2162_1436
#define vm_map                      f_2162_1634
#define init_mouse                  f_2162_1899
#define show_pointer                f_2162_18ca
#define hide_pointer                f_2162_197b
#define poll_mouse                  f_2162_19ae
#define empty_stub_a                f_2162_19f6
#define empty_stub_b                f_2162_19ff
#define empty_stub_c                f_2162_1a08
#define pointer_off_for_typing      f_2162_1a11
#define pointer_on_after_typing     f_2162_1a2f
#define screen_buffer               d_69da_e006
#define startup_video_mode          d_69da_e01c
#define screen_vm_block             d_69da_e00a
#define picture_palette_pending     d_69da_de32
#define background_brightness       d_69da_da48
#define background_colour           d_69da_da46
#define loop_i                      d_69da_d9d2
#define loop_j                      d_69da_d9a0
#define palette_green               d_69da_dad8
#define palette_red                 d_69da_db6a
#define loaded_picture              d_536d_8229
#define picture_file                d_536d_591f
#define mouse_driver_present        d_69da_e2ce
#define sound_driver_mem            d_69da_e010
#define sound_driver                d_69da_e00c
#define sound_device                d_69da_929f
#define vga_memory                  d_69da_e086
#define draw_colour                 d_69da_e2c3
#define fill_colour                 d_69da_e2c2
#define current_font_id             d_69da_db74
#define small_font_selected         d_69da_e01e
#define current_font                d_69da_e08a
#define text_opaque                 d_69da_929e
#define text_buffer_index           d_69da_ddaf
#define text_buffers                d_536d_9ccd
#define pointer_background          d_69da_e022
#define music_mem                   d_69da_e018
#define music_data                  d_69da_e014
#define vm_work_buffer              d_69da_e08e
#define mouse_initialised           d_69da_929c
#define pointer_drawn_x             d_69da_e2ca
#define pointer_drawn_y             d_69da_e2cc
#define vm_blocks                   d_69da_e182
#define vm_slots                    d_69da_e092
#define small_font                  d_69da_92c2
#define medium_font                 d_69da_92d0
#define large_font                  d_69da_92de
#define mouse_x                     d_69da_92ed
#define mouse_y                     d_69da_92ef
#define pointer_visible             d_69da_92f1
#define mouse_clicks                d_69da_92f3
#define random_seed                 d_69da_92f5
#define midnight_tick_offset        d_69da_92f9
#define last_clock_ticks            d_69da_92fd
#define vm_block_count              d_69da_9301
#define vm_buffer_used              d_69da_9303
#define FONT_FIRST_CHAR    0                   /* the fonts start at character 0 */
#define DEFAULT_BRIGHTNESS 2                   /* a new picture's */
#define LOGO_FILE          "domark.lbm"       /* the publisher's picture, before the title */

/* The database (../../../port/db93.c): the names it puts in the executable's tables, and
 * the teams a new game reads (../decomp/src/B085.C's first function), as this game names them. */
#define load_teams                  f_b085_0000
#define team_stats                  d_4512_0000
#define team_seats                  d_4512_1524
#define team_balances               d_4512_1e90
#define team_staff                  d_536d_2b66
#define club_names                  d_69da_b1fc
#define first_names                 d_62e5_0000
#define surnames                    d_62e5_11f6
#define country_names               d_5dbf_0000
#define TEAMS          80                     /* the league's clubs */
#define LEAGUE_PLAYERS 1680                   /* player numbers: league 0-1679, abroad 1680-1859 */
#define ABROAD_PLAYERS 180
#define FIRST_NAMES    452                    /* the executable's tables of names */
#define SURNAMES       1408
#define COUNTRIES      76

#endif
