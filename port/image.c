/* The game's data segments (port_image, laid out by data_symbols.S): loaded at start-up
 * from the data directory, one file per segment of segments.txt (NAME.bin), as
 * tools/port/extract.py cut them out of the game's executable (GAME_EXE). Far pointers
 * in them stay as the executable has them (segment numbers from load segment 0), which
 * is what FAR_PTR() expects. The segments without a file were all zeros, and stay so. */
#include <SDL3/SDL.h>

#include "port.h"

#undef fopen

/* 0000:0000 to 0000:FFFF: where a null far pointer points (see tools/port/mkdata.py) */
unsigned char port_null_page[65536];

static uint32_t crc32(const unsigned char *p, size_t n)
{
    uint32_t c = 0xffffffffu;
    int k;

    while (n--) {
        c ^= *p++;
        for (k = 0; k < 8; k++)
            c = (c >> 1) ^ (0xedb88320u & -(c & 1));
    }
    return ~c;
}

/* dir: the data directory (NULL: "data" next to the executable) */
void port_load_image(const char *dir)
{
    const struct port_segment *s;
    char path[4096], extra;
    uint32_t crc;
    FILE *f;

    if (dir == NULL) {
        const char *base = SDL_GetBasePath();

        snprintf(path, sizeof(path), "%sdata", base ? base : "");
        dir = SDL_strdup(path);
    }
    for (s = port_segments; s->name; s++) {
        snprintf(path, sizeof(path), "%s/%s.bin", dir, s->name);
        if ((f = fopen(path, "rb")) == NULL) {
            fprintf(stderr, "%s not found: extract the game's data from " GAME_EXE " first "
                    "(make data, see README.md), or give its directory (-d DIR)\n", path);
            exit(1);
        }
        if (fread(port_image + s->offset, 1, s->size, f) != s->size || fread(&extra, 1, 1, f) != 0) {
            fprintf(stderr, "%s: not %u bytes long, not the right game\n", path, (unsigned)s->size);
            exit(1);
        }
        fclose(f);
        crc = crc32(port_image + s->offset, s->size);
        if (crc != s->crc32)
            fprintf(stderr, "warning: %s is not from the version this port was made from "
                    "(" GAME_VERSION "; crc %08x)\n", path, crc);
    }
}

nearptr to_near_ptr(const void *p)
{
    long off = (const char *)p - NEAR_PTR(0);

    if (off < 0 || off > 0xffff) {
        fprintf(stderr, "to_near_ptr: %p is not in DGROUP\n", p);
        abort();
    }
    return (nearptr)off;
}
