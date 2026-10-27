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
#define unpack_ilbm              f_234d_0000     /* 234D.ASM, ILBM pictures */
#define picture_palette          d_61eb_afce
#define mt32_music_setup         f_2380_0000     /* 2380.ASM, music driver interface */
#define install_music_driver     f_2380_0008
#define start_music              f_2380_001b
#define music_on                 f_2380_003d
#define remove_music_driver      f_2380_004e
#define music_off                f_2380_0059
#define install_keyboard_handler f_2386_0006     /* 2386.ASM, keyboard driver */
#define remove_keyboard_handler  f_2386_0040

/* The system module (../decomp/src/215D.C) is the platform's too (system.c, system93.c):
 * its functions and data, and the game's that they use, as this game names them. */
#define take_plane_pixel            f_215d_0000
#define planar_to_chunky            f_215d_004f
#define char_to_string              f_215d_0155
#define detect_and_set_video_mode   f_215d_017d
#define blank_and_flip_screen       f_215d_033b
#define input_wait_stub             f_215d_038c
#define set_palette_entry           f_215d_0395
#define init_hardware               f_215d_03bb
#define show_title_screens          f_215d_0465
#define load_title_picture          f_215d_0595
#define set_picture_palette         f_215d_0652
#define present_screen              f_215d_07b1
#define present_screen_rect         f_215d_07ec
#define set_fill_colour             f_215d_088c
#define set_draw_colour             f_215d_089b
#define fill_rect                   f_215d_08aa
#define draw_rect                   f_215d_0904
#define forget_font                 f_215d_0978
#define select_font                 f_215d_0987
#define draw_text                   f_215d_09d7
#define draw_text_in_colour         f_215d_0a04
#define draw_char                   f_215d_0a4e
#define set_text_opaque             f_215d_0b01
#define find_substring              f_215d_0b10
#define find_last_substring         f_215d_0b64
#define get_mouse_y                 f_215d_0c08
#define get_mouse_x                 f_215d_0c14
#define take_mouse_clicks           f_215d_0c20
#define play_effect_stub            f_215d_0c3d
#define wait_mouse_release          f_215d_0c46
#define read_quoted_field           f_215d_0c5b
#define read_line                   f_215d_0cb3
#define write_line                  f_215d_0cee
#define poll_key_string             f_215d_0d0f
#define random_next                 f_215d_0d50
#define seed_random_from_clock      f_215d_0d81
#define random_below                f_215d_0d96
#define file_exists                 f_215d_0dcc
#define wait_ticks                  f_215d_0df0
#define clock_ticks                 f_215d_0e27
#define upper_case                  f_215d_0e90
#define next_text_buffer            f_215d_0f2d
#define right_chars                 f_215d_0f63
#define mid_chars                   f_215d_0fb6
#define draw_line                   f_215d_1016
#define trim_spaces                 f_215d_1043
#define random_fraction             f_215d_10c4
#define save_pointer_background     f_215d_10e1
#define restore_pointer_background  f_215d_1136
#define scroll_rect_up              f_215d_118b
#define restore_system              f_215d_124b
#define load_music                  f_215d_1292
#define max_float                   f_215d_1319
#define max_int                     f_215d_1343
#define max_long                    f_215d_135c
#define min_float                   f_215d_1385
#define min_int                     f_215d_13af
#define min_long                    f_215d_13c8
#define swap_bytes                  f_215d_13f1
#define vm_alloc                    f_215d_142b
#define vm_map                      f_215d_1629
#define init_mouse                  f_215d_188e
#define show_pointer                f_215d_18bf
#define hide_pointer                f_215d_1970
#define poll_mouse                  f_215d_19a3
#define empty_stub_a                f_215d_19eb
#define empty_stub_b                f_215d_19f4
#define empty_stub_c                f_215d_19fd
#define pointer_off_for_typing      f_215d_1a06
#define pointer_on_after_typing     f_215d_1a24
#define screen_buffer               d_61eb_dc68
#define startup_video_mode          d_61eb_dc7e
#define screen_vm_block             d_61eb_dc6c
#define picture_palette_pending     d_61eb_da42
#define background_brightness       d_61eb_d64e
#define background_colour           d_61eb_d64c
#define loop_i                      d_61eb_d5d8
#define loop_j                      d_61eb_d5aa
#define palette_green               d_61eb_d6de
#define palette_red                 d_61eb_d774
#define loaded_picture              d_432e_eb83
#define picture_file                d_432e_c279
#define mouse_driver_present        d_61eb_df30
#define sound_driver_mem            d_61eb_dc72
#define sound_driver                d_61eb_dc6e
#define sound_device                d_61eb_918d
#define vga_memory                  d_61eb_dce8
#define draw_colour                 d_61eb_df25
#define fill_colour                 d_61eb_df24
#define current_font_id             d_61eb_d77e
#define small_font_selected         d_61eb_dc80
#define current_font                d_61eb_dcec
#define text_opaque                 d_61eb_918c
#define text_buffer_index           d_61eb_d9bb
#define text_buffers                d_5313_0640
#define pointer_background          d_61eb_dc84
#define music_mem                   d_61eb_dc7a
#define music_data                  d_61eb_dc76
#define vm_work_buffer              d_61eb_dcf0
#define mouse_initialised           d_61eb_918a
#define pointer_drawn_x             d_61eb_df2c
#define pointer_drawn_y             d_61eb_df2e
#define vm_blocks                   d_61eb_dde4
#define vm_slots                    d_61eb_dcf4
#define small_font                  d_61eb_91b0
#define medium_font                 d_61eb_91be
#define large_font                  d_61eb_91cc
#define mouse_x                     d_61eb_91db
#define mouse_y                     d_61eb_91dd
#define pointer_visible             d_61eb_91df
#define mouse_clicks                d_61eb_91e1
#define random_seed                 d_61eb_91e3
#define midnight_tick_offset        d_61eb_91e7
#define last_clock_ticks            d_61eb_91eb
#define vm_block_count              d_61eb_91ef
#define vm_buffer_used              d_61eb_91f1
#define FONT_FIRST_CHAR    0                   /* the fonts start at character 0 */
#define DEFAULT_BRIGHTNESS 2                   /* a new picture's */
#define LOGO_FILE          "intelek.lbm"      /* the publisher's picture, before the title */

#endif
