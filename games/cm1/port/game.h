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

/* the platform's names are this game's (../names.txt): nothing to map */

#endif
