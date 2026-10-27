/* The native ports' common header: every source of a game's port (games/<game>/port/src)
 * includes it in place of the Borland headers. It brings the C library, the fixed-width
 * types the 16-bit code is written in (int16_t for int, int32_t for long), the Borland
 * library functions that have no standard equivalent, and the platform layer (port/,
 * SDL3), shared by the games. What differs from one game to another (where its data
 * segments are, the names of its symbols the platform uses) is in the game's own
 * game.h (games/<game>/port/game.h), included first. */
#ifndef PORT_H
#define PORT_H

#include <ctype.h>
#include <fcntl.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#include "game.h"

/* ---- the original data segments --------------------------------------------------
 * DGROUP and the far data segments, byte for byte as the game's executable (GAME_EXE)
 * has them, loaded at start-up (image.c) from the files tools/port/extract.py cuts out
 * of it, one per segment (the game's segments.txt). Every data symbol the C does not
 * define itself is placed at its original address in it (data_symbols.S, made by
 * tools/port/mkdata.py), so arrays that run into each other still do. game.h gives
 * IMAGE_START (linear, file numbering: the first far data), IMAGE_END (the end of
 * DGROUP) and DGROUP_SEG (DGROUP's segment, file numbering). */
extern unsigned char port_image[];

struct port_segment {                   /* a file of the data directory: NAME.bin */
    const char *name;
    uint32_t offset, size, crc32;       /* where in port_image; the bytes' CRC-32 */
};
extern const struct port_segment port_segments[];   /* data_segments.c, from segments.txt */

/* Pointers kept in the original data, as they were: a near pointer is an offset in
 * DGROUP, a far pointer segment:offset. */
typedef uint16_t nearptr;
typedef uint32_t farptr;
#define NEAR_PTR(v) ((char *)port_image + (DGROUP_SEG * 16L - IMAGE_START) + (uint16_t)(v))
#define FAR_PTR(v) ((char *)port_image + ((((uint32_t)(v) >> 16) * 16L + ((uint32_t)(v) & 0xffff)) - IMAGE_START))
nearptr to_near_ptr(const void *p);     /* the DGROUP offset of a pointer into DGROUP */

/* ---- Borland C library ----------------------------------------------------------- */
#ifndef S_IREAD
#define S_IREAD S_IRUSR
#define S_IWRITE S_IWUSR
#endif
#define _fmemset memset
#define _fmemcpy memcpy
#define _fstrcmp strcmp
#define _fstrcpy strcpy
#define _fstrlen strlen
#define _fstrstr strstr
#define farcalloc calloc
#define farmalloc malloc
#define farfree free

char *strupr(char *s);
int stricmp(const char *a, const char *b);

/* Borland's strcpy and strcat copy forwards a byte at a time, and the game counts on it
 * to shift a string left within itself (strcpy(s, s + 1)): glibc's may not. */
char *port_strcpy(char *dst, const char *src);
char *port_strcat(char *dst, const char *src);
#define strcpy port_strcpy
#define strcat port_strcat
int16_t kbhit(void);
int16_t getch(void);
void _bios_timeofday(int16_t cmd, int32_t *ticks);
void _OvrInitEms(uint16_t a, uint16_t b, uint16_t c);
int16_t _bios_printer(int16_t cmd, int16_t port, int16_t abyte);   /* to PRINTER.TXT */

/* Borland's rand(): 0..0x7fff (the game divides it by 32767.0) */
int port_rand(void);
void port_srand(unsigned seed);
#define rand port_rand
#define srand port_srand

/* DOS file names are not case sensitive: the files are found whatever their case */
int port_open(const char *path, int flags, ...);
FILE *port_fopen(const char *path, const char *mode);
int port_access(const char *path, int mode);
int port_remove(const char *path);
#define open port_open
#define fopen port_fopen
#define access port_access
#define remove port_remove

/* ---- the database (db.c) ----------------------------------------------------------
 * The game's players and teams, in SQLite (game.db, made by tools/port/mkdb.py): the
 * game's sources read it in place of TEAM.DAT, LEAGUE.DAT and FOREIGN.DAT. A query's
 * parameters (?) are ints, given after the SQL. */
typedef struct port_rows port_rows;
port_rows *port_db_query(const char *sql, ...);
int port_db_next(port_rows *r);         /* the next row; 0: no more */
int port_db_int(port_rows *r, const char *column);
const char *port_db_text(port_rows *r, const char *column);
void port_db_done(port_rows *r);        /* NULL: nothing */
int port_db_count(const char *sql, ...); /* the first column of the first row */
/* for port_game_db(), called at start-up: CM1's (games/cm1/port/db.c), the others' (db93.c) */
void port_game_db(void);
void port_db_check_teams(int n);
void port_db_check_players(int teams, int league, int abroad);
void port_db_near_names(const char *sql, nearptr *table, int n);
void port_db_far_names(const char *sql, farptr *table, int n);
/* the later games' players and careers (db93.c), a row at a time */
#define PORT_DB_LEAGUE (-1)             /* all the league's teams' players */
#define PORT_DB_ABROAD (-2)             /* the players abroad (FOREIGN.DAT) */
struct port_player {
    int id, first_name, surname, settled, club, star;
    int position[7];                    /* gk, def, mid, att, right, left, centre */
    int age, character, nationality, ability;
    int attribute[14];                  /* passing ... attr14, the game's rows 1-14 */
    int stamina;
};
struct port_career { int season, club, apps, goals; };
int port_db_count_players(int team);    /* a team's, or PORT_DB_LEAGUE, PORT_DB_ABROAD */
port_rows *port_db_players(int team);   /* the same, by id */
int port_db_next_player(port_rows *r, struct port_player *p);   /* 0: no more */
port_rows *port_db_careers(int player); /* the player's seasons, by id */
int port_db_next_career(port_rows *r, struct port_career *c);   /* 0: no more */

/* ---- platform -------------------------------------------------------------------- */
void port_pump(void);                   /* events, mouse, keys, and the screen shown */
void port_vga_set_palette(int first, int count, const unsigned char *rgb6);
void port_vga_restore_text_mode(void);
void port_mouse_state(int16_t *buttons, int16_t *x, int16_t *y);
void port_mouse_show(int show);
void port_speed_control(int on);        /* + and - set the game's speed: on during a match */
unsigned char *port_vga_memory(void);   /* 64000 bytes of mode 13h, A000:0000 */

/* ---- the games' system module (system.c, system93.c) ------------------------------ */
struct window {                         /* a font: the game's module defines its three */
    char *buf;
    int16_t pad[2];
    int16_t w, h, base;
};

#pragma pack(push, 1)                   /* Borland lays structures out byte by byte */

#endif
