/* Replaces the graphics primitives (CM1's 1AB9.ASM, CM93's 1D79.ASM, CM94's 2306.ASM,
 * Italia's 1F04.ASM): Bresenham lines in mode 13h (as the original draws them, pixel for
 * pixel). The 16-colour planar mode's lines, glyphs and rectangle saves, which only the
 * EGA used, are left out: the ports always run in VGA mode. The names are CM1's: another
 * game's game.h maps them to its own. */
#include "port.h"

/* The byte of pixel (x, y) in A000: offsets wrap in the 64K segment. */
static uint16_t vga_addr(uint16_t x, uint16_t y)
{
    return (uint16_t)(y * 320 + x);
}

/* line (x1, y1, x2, y2, colour), 320x200 256 colours */
void draw_line_vga256(uint16_t from_x, uint16_t from_y, uint16_t to_x, uint16_t to_y, int16_t colour)
{
    unsigned char *vga = port_vga_memory();
    int16_t dx, dy, step = 320, err, two_minor, both, tmp;
    uint16_t di, n;

    dx = to_x - from_x;
    if (dx == 0) {                      /* vertical: from the higher end down */
        dy = to_y - from_y;
        tmp = from_y;
        if (dy < 0) {
            dy = -dy;
            tmp = to_y;
        }
        di = vga_addr(from_x, tmp);
        for (n = dy + 1; n; n--) {
            vga[di] = colour;
            di += 320;
        }
        return;
    }
    if (dx < 0) {                       /* left to right */
        dx = -dx;
        tmp = from_x; from_x = to_x; to_x = tmp;
        tmp = from_y; from_y = to_y; to_y = tmp;
    }
    dy = to_y - from_y;
    if (dy == 0) {                      /* horizontal */
        di = vga_addr(from_x, from_y);
        for (n = dx + 1; n; n--)
            vga[di++] = colour;
        return;
    }
    if (dy < 0) {
        dy = -dy;
        step = -320;
    }
    di = vga_addr(from_x, from_y);
    if (dy <= dx) {                     /* x major */
        two_minor = 2 * dy;
        err = two_minor - dx;
        both = err - dx;
        for (n = dx + 1; n; n--) {
            vga[di++] = colour;
            if (err < 0)
                err += two_minor;
            else {
                err += both;
                di += step;
            }
        }
    } else {                            /* y major */
        two_minor = 2 * dx;
        err = two_minor - dy;
        both = err - dy;
        for (n = dy + 1; n; n--) {
            vga[di++] = colour;
            di += step;
            if (err < 0) {
                err += two_minor;
                di--;
            } else
                err += both;
        }
    }
}
