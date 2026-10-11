/* The native port's common header: every source of src/ includes it in place of the
 * Borland headers. It brings the C library, the fixed-width types the 16-bit code is
 * written in (int16_t for int, int32_t for long), the Borland library functions that
 * have no standard equivalent, and the platform layer (platform/*.c, SDL3). */
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

/* ---- the original data segments --------------------------------------------------
 * DGROUP and the far data segments, byte for byte as EUROPE.EXE has them, loaded from
 * the game's executable at start-up (image.c). Every data symbol the C does not define
 * itself is placed at its original address in it (data_symbols.S, made by
 * tools/port/mkdata.py), so arrays that run into each other still do. */
#define IMAGE_START 0x0f330L            /* linear (file numbering): the first far data */
#define IMAGE_END   0x57dc0L            /* the end of DGROUP */
#define DGROUP_SEG  0x4d9c              /* DGROUP's segment (file numbering) */
extern unsigned char port_image[];

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
#define farcalloc calloc
#define farmalloc malloc
#define farfree free

char *strupr(char *s);

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

/* ---- platform -------------------------------------------------------------------- */
void port_pump(void);                   /* events, mouse, keys, and the screen shown */
void port_vga_set_palette(int first, int count, const unsigned char *rgb6);
void port_vga_restore_text_mode(void);
void port_mouse_state(int16_t *buttons, int16_t *x, int16_t *y);
void port_mouse_show(int show);
unsigned char *port_vga_memory(void);   /* 64000 bytes of mode 13h, A000:0000 */

#pragma pack(push, 1)                   /* Borland lays structures out byte by byte */

#endif
