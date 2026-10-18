/* Replaces the IFF ILBM pictures (the .LBM files; CM1's 1B05.ASM, CM93's 1DC5.ASM,
 * CM94's 2352.ASM): find the FORM ILBM, turn CMAP into 16 12-bit palette entries (0RGB,
 * one nibble per colour), and unpack the ByteRun1 BODY, four plane rows of 40 bytes per
 * line, 200 lines. As the original, chunk ids are compared as little-endian words
 * (stepping two bytes at a time), sizes are big-endian, and BMHD is read past. show_ilbm
 * and copy_screen_page draw through the EGA's planes: the ports always run in VGA mode,
 * so they do nothing. The names are CM1's: another game's game.h maps them to its own. */
#include "port.h"

extern uint16_t picture_palette[16];    /* CMAP as 0RGB words, unused entries 0 */

static uint16_t lodsw(const unsigned char **si)
{
    uint16_t v = (*si)[0] | (*si)[1] << 8;
    *si += 2;
    return v;
}

static uint16_t big_endian(uint16_t v)
{
    return (uint16_t)(v >> 8 | v << 8);
}

/* one plane row: ByteRun1 data into 40 bytes */
static void unpack_row(const unsigned char **si, unsigned char *dst)
{
    int left = 40;
    uint16_t count;
    signed char n;
    unsigned char v;

    for (;;) {
        n = (signed char)*(*si)++;
        if (n < 0) {
            count = (unsigned char)-n + 1;
            v = *(*si)++;
            while (count--) {
                *dst++ = v;
                if (--left == 0)
                    return;
            }
        } else {
            count = n + 1;
            while (count--) {
                *dst++ = *(*si)++;
                if (--left == 0)
                    return;
            }
        }
    }
}

/* unpack an ILBM (char far *file, char far *screen), 320x200 planar: plane p of line y
 * at screen + p * 8000 + y * 40 */
void unpack_ilbm(char *file, char *screen)
{
    const unsigned char *si = (const unsigned char *)file;
    unsigned char *di = (unsigned char *)screen;
    uint16_t id1, id2, size, i, left;
    const unsigned char *data;
    int row, plane;

    do {
        while (lodsw(&si) != 0x4f46)    /* 'FO' */
            ;
    } while (lodsw(&si) != 0x4d52);     /* 'RM' */
    si += 4;
    do {
        while (lodsw(&si) != 0x4c49)    /* 'IL' */
            ;
    } while (lodsw(&si) != 0x4d42);     /* 'BM' */
    for (;;) {
        id1 = lodsw(&si);
        id2 = lodsw(&si);
        if (id1 == 0x4f42 && id2 == 0x5944)     /* BODY */
            break;
        lodsw(&si);
        size = big_endian(lodsw(&si));
        data = si;
        if (id1 == 0x4d43 && id2 == 0x5041) {   /* CMAP */
            left = size;
            for (i = 0; i < 16; i++) {
                picture_palette[i] = (data[0] & 0xf0) << 4 | (data[1] & 0xf0) | data[2] >> 4;
                data += 3;
                left -= 3;
                if (left == 0) {
                    while (++i < 16)
                        picture_palette[i] = 0;
                    break;
                }
            }
        }
        si += (uint16_t)(size + 1) & 0xfffe;    /* BMHD and the others: past them */
    }
    si += 4;
    for (row = 0; row < 200; row++)
        for (plane = 0; plane < 4; plane++)
            unpack_row(&si, di + plane * 8000 + row * 40);
}

void show_ilbm(char *buf, uint16_t size)
{
    (void)buf;
    (void)size;
}

void copy_screen_page(void)
{
}
