/* Championship Manager (1992), EUROPE.EXE 1.02: what the shared platform (../../../port)
 * needs to know of this game. Included by port.h before anything else. */
#ifndef GAME_H
#define GAME_H

#define GAME_TITLE   "Championship Manager"
#define GAME_EXE     "EUROPE.EXE"
#define GAME_VERSION "EUROPE.EXE 1.02"
#define GAME_ENV     "CM1"              /* $CM1_DIR, $CM1_DATA */
#define GAME_ARGS    "A|R"              /* main()'s argument: AdLib or Roland music */
#define GAME_FILE    "TITLE.LBM"        /* checked for in the game's directory */

/* port_image: from the first far data segment to the end of DGROUP (../decomp's map,
 * file numbering), as segments.txt and meson.build have them */
#define IMAGE_START 0x0f330L
#define IMAGE_END   0x57dc0L
#define DGROUP_SEG  0x4d9c

/* The platform's names are this game's (../names.txt), but for three variables of the
 * system module (../../../port/system.c) that names.txt leaves unnamed. */
#define picture_palette_pending d_5d9c_9b1a     /* the picture's palette is to be set */
#define palette_green           d_5d9c_9e67     /* set_picture_palette's */
#define palette_red             d_5d9c_9dd7
#define FONT_FIRST_CHAR    32                   /* the fonts start at the space */
#define DEFAULT_BRIGHTNESS 4                    /* a new picture's */

#endif
