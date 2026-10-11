/* The parts of DOS and of the Borland C library the game uses that Linux does not
 * have, or has differently. */
#include <dirent.h>
#include <stdarg.h>
#include <strings.h>

#include "port.h"

#undef open
#undef fopen
#undef access
#undef remove
#undef rand
#undef srand

/* ---------------------------------------------------------------- file names */

/* DOS names are not case sensitive, and the game's files are named in either case
 * (it opens "title.lbm", the disk has TITLE.LBM). A name in the current directory is
 * looked for whatever its case; a new file is made in upper case, as DOS would. */
static const char *dos_name(const char *path, char *buf, size_t size)
{
    DIR *dir;
    struct dirent *de;
    size_t i;

    snprintf(buf, size, "%s", path);
    for (i = 0; buf[i]; i++)
        if (buf[i] == '\\')
            buf[i] = '/';
    if (strchr(buf, '/'))
        return buf;
    if ((dir = opendir(".")) != NULL) {
        while ((de = readdir(dir)) != NULL)
            if (strcasecmp(de->d_name, buf) == 0) {
                snprintf(buf, size, "%s", de->d_name);
                closedir(dir);
                return buf;
            }
        closedir(dir);
    }
    for (i = 0; buf[i]; i++)
        buf[i] = toupper((unsigned char)buf[i]);
    return buf;
}

int port_open(const char *path, int flags, ...)
{
    char buf[256];
    int mode = 0;

    if (flags & O_CREAT) {
        va_list ap;
        va_start(ap, flags);
        mode = va_arg(ap, int);
        va_end(ap);
        mode |= S_IRGRP | S_IROTH;
    }
    return open(dos_name(path, buf, sizeof(buf)), flags, mode);
}

FILE *port_fopen(const char *path, const char *mode)
{
    char buf[256];
    return fopen(dos_name(path, buf, sizeof(buf)), mode);
}

int port_access(const char *path, int mode)
{
    char buf[256];
    return access(dos_name(path, buf, sizeof(buf)), mode);
}

int port_remove(const char *path)
{
    char buf[256];
    return remove(dos_name(path, buf, sizeof(buf)));
}

/* ---------------------------------------------------------------- the library */

char *strupr(char *s)
{
    char *p;
    for (p = s; *p; p++)
        *p = toupper((unsigned char)*p);
    return s;
}

#undef strcpy
#undef strcat

char *port_strcpy(char *dst, const char *src)
{
    char *d = dst;
    while ((*d++ = *src++) != 0)
        ;
    return dst;
}

char *port_strcat(char *dst, const char *src)
{
    port_strcpy(dst + strlen(dst), src);
    return dst;
}

static uint32_t rand_seed = 1;

/* Borland's: a 32-bit LCG, 15 bits out */
int port_rand(void)
{
    rand_seed = rand_seed * 22695477u + 1;
    return (rand_seed >> 16) & 0x7fff;
}

void port_srand(unsigned seed)
{
    rand_seed = seed;
}

/* The overlay manager's EMS cache: there are no overlays here. */
void _OvrInitEms(uint16_t a, uint16_t b, uint16_t c)
{
    (void)a;
    (void)b;
    (void)c;
}

/* INT 17h: the printer is a file, PRINTER.TXT in the game's directory. Status 90h:
 * selected, not busy. */
int16_t _bios_printer(int16_t cmd, int16_t port, int16_t abyte)
{
    static FILE *printer;

    (void)port;
    if (cmd == 0) {                     /* print a character */
        if (printer == NULL && (printer = fopen("PRINTER.TXT", "ab")) == NULL)
            return 0x08;                /* I/O error */
        fputc(abyte & 0xff, printer);
        fflush(printer);
    }
    return 0x90;
}
