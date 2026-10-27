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
#define unpack_ilbm              f_1dc5_0004     /* 1DC5.ASM, ILBM pictures */
#define picture_palette          d_60ae_b454
#define mt32_music_setup         f_1df8_0004     /* 1DF8.ASM, music driver interface */
#define install_music_driver     f_1df8_000c
#define start_music              f_1df8_001f
#define music_on                 f_1df8_0041
#define remove_music_driver      f_1df8_0052
#define music_off                f_1df8_005d
#define install_keyboard_handler f_1dfe_000a     /* 1DFE.ASM, keyboard driver */
#define remove_keyboard_handler  f_1dfe_0044

/* The system module (../decomp/src/1BD3.C) is the platform's too (system.c, system93.c):
 * its functions and data, and the game's that they use, as this game names them. */
#define take_plane_pixel            f_1bd3_000d
#define planar_to_chunky            f_1bd3_005e
#define char_to_string              f_1bd3_0157
#define detect_and_set_video_mode   f_1bd3_0180
#define blank_and_flip_screen       f_1bd3_034d
#define input_wait_stub             f_1bd3_03a2
#define set_palette_entry           f_1bd3_03a7
#define init_hardware               f_1bd3_03cf
#define show_title_screens          f_1bd3_0476
#define load_title_picture          f_1bd3_05af
#define set_picture_palette         f_1bd3_067c
#define present_screen              f_1bd3_07e6
#define present_screen_rect         f_1bd3_0821
#define set_fill_colour             f_1bd3_08cb
#define set_draw_colour             f_1bd3_08d6
#define fill_rect                   f_1bd3_08e1
#define draw_rect                   f_1bd3_0928
#define forget_font                 f_1bd3_0992
#define select_font                 f_1bd3_099d
#define draw_text                   f_1bd3_09e9
#define draw_text_in_colour         f_1bd3_0a12
#define draw_char                   f_1bd3_0a5c
#define set_text_opaque             f_1bd3_0b10
#define find_substring              f_1bd3_0b1b
#define find_last_substring         f_1bd3_0b69
#define get_mouse_y                 f_1bd3_0c06
#define get_mouse_x                 f_1bd3_0c0e
#define take_mouse_clicks           f_1bd3_0c16
#define play_effect_stub            f_1bd3_0c31
#define wait_mouse_release          f_1bd3_0c36
#define read_quoted_field           f_1bd3_0c47
#define read_line                   f_1bd3_0c9a
#define write_line                  f_1bd3_0cce
#define poll_key_string             f_1bd3_0cec
#define random_next                 f_1bd3_0d2b
#define seed_random_from_clock      f_1bd3_0d58
#define random_below                f_1bd3_0d69
#define file_exists                 f_1bd3_0d9b
#define wait_ticks                  f_1bd3_0dbc
#define clock_ticks                 f_1bd3_0df6
#define upper_case                  f_1bd3_0e5e
#define next_text_buffer            f_1bd3_0efb
#define right_chars                 f_1bd3_0f30
#define mid_chars                   f_1bd3_0f83
#define draw_line                   f_1bd3_0fe2
#define trim_spaces                 f_1bd3_100b
#define random_fraction             f_1bd3_1088
#define save_pointer_background     f_1bd3_10a3
#define restore_pointer_background  f_1bd3_10f7
#define scroll_rect_up              f_1bd3_114b
#define restore_system              f_1bd3_1215
#define load_music                  f_1bd3_1258
#define max_float                   f_1bd3_12df
#define max_int                     f_1bd3_1307
#define max_long                    f_1bd3_131c
#define min_float                   f_1bd3_1341
#define min_int                     f_1bd3_1369
#define min_long                    f_1bd3_137e
#define swap_bytes                  f_1bd3_13a3
#define vm_alloc                    f_1bd3_13df
#define vm_map                      f_1bd3_1617
#define init_mouse                  f_1bd3_18c4
#define show_pointer                f_1bd3_18f1
#define hide_pointer                f_1bd3_19b1
#define poll_mouse                  f_1bd3_19df
#define empty_stub_a                f_1bd3_1a23
#define empty_stub_b                f_1bd3_1a28
#define empty_stub_c                f_1bd3_1a2d
#define pointer_off_for_typing      f_1bd3_1a32
#define pointer_on_after_typing     f_1bd3_1a4c
#define screen_buffer               d_60ae_fdca
#define startup_video_mode          d_60ae_fdb7
#define screen_vm_block             d_60ae_fdc8
#define picture_palette_pending     d_60ae_d901
#define background_brightness       d_60ae_dcea
#define background_colour           d_60ae_dcec
#define loop_i                      d_60ae_dd60
#define loop_j                      d_60ae_dd92
#define palette_green               d_60ae_dc5a
#define palette_red                 d_60ae_dbc8
#define loaded_picture              d_2289_22d8
#define picture_file                d_2289_4be2
#define mouse_driver_present        d_60ae_fb04
#define sound_driver_mem            d_60ae_fdc0
#define sound_driver                d_60ae_fdc4
#define sound_device                d_60ae_9615
#define vga_memory                  d_60ae_fd4a
#define draw_colour                 d_60ae_fb10
#define fill_colour                 d_60ae_fb11
#define current_font_id             d_60ae_dbbe
#define small_font_selected         d_60ae_fdb4
#define current_font                d_60ae_fd46
#define text_opaque                 d_60ae_9614
#define text_buffer_index           d_60ae_d984
#define text_buffers                d_2289_00c8
#define pointer_background          d_60ae_fd4e
#define music_mem                   d_60ae_fdb8
#define music_data                  d_60ae_fdbc
#define vm_work_buffer              d_60ae_fd42
#define mouse_initialised           d_60ae_9612
#define pointer_drawn_x             d_60ae_fb08
#define pointer_drawn_y             d_60ae_fb06
#define vm_blocks                   d_60ae_fb12
#define vm_slots                    d_60ae_fc52
#define small_font                  d_60ae_9638
#define medium_font                 d_60ae_9646
#define large_font                  d_60ae_9654
#define mouse_x                     d_60ae_9663
#define mouse_y                     d_60ae_9665
#define pointer_visible             d_60ae_9667
#define mouse_clicks                d_60ae_9669
#define random_seed                 d_60ae_966b
#define midnight_tick_offset        d_60ae_966f
#define last_clock_ticks            d_60ae_9673
#define vm_block_count              d_60ae_9677
#define vm_buffer_used              d_60ae_9679
#define FONT_FIRST_CHAR    0                   /* the fonts start at character 0 */
#define DEFAULT_BRIGHTNESS 4                   /* a new picture's */
#define LOGO_FILE          "domark.lbm"       /* the publisher's picture, before the title */

/* The database (../../../port/db93.c): the names it puts in the executable's tables, and
 * the teams a new game reads (../decomp/src/AD38.C's first function), as this game names them. */
#define load_teams                  f_ad38_0000
#define team_stats                  d_323f_4c14
#define team_seats                  d_323f_6138
#define team_balances               d_323f_3f94
#define team_staff                  d_2289_7486
#define club_names                  d_60ae_b572
#define first_names                 d_59f5_0000
#define surnames                    d_59f5_0fc0
#define country_names               d_54d9_0000
#define TEAMS          80                     /* the league's clubs */
#define LEAGUE_PLAYERS 1700                   /* player numbers: league 0-1699, abroad 1700-1859 */
#define ABROAD_PLAYERS 160
#define FIRST_NAMES    392                    /* the executable's tables of names */
#define SURNAMES       1385
#define COUNTRIES      60

#endif
