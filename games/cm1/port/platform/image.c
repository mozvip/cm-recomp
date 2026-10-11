/* The game's data segments (port_image, laid out by data_symbols.S): copied at start-up
 * from the executable they were linked into, EUROPE.EXE, in the game's directory. Far
 * pointers in it stay as the file has them (segment numbers from load segment 0), which
 * is what FAR_PTR() expects. */
#include "port.h"

#define IMAGE_CRC32 0x2c0a1127u         /* EUROPE.EXE, version 1.02 */

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

void port_load_image(void)
{
    unsigned char hdr[32];
    FILE *f = fopen("EUROPE.EXE", "rb");
    uint32_t loaded, start, crc;

    if (f == NULL) {
        fprintf(stderr, "EUROPE.EXE not found: run the game from its directory (or give -g DIR)\n");
        exit(1);
    }
    if (fread(hdr, 1, sizeof(hdr), f) != sizeof(hdr) || hdr[0] != 'M' || hdr[1] != 'Z') {
        fprintf(stderr, "EUROPE.EXE: not an MZ executable\n");
        exit(1);
    }
    loaded = (hdr[4] | hdr[5] << 8) * 512u - ((hdr[2] | hdr[3] << 8) ? 512u - (hdr[2] | hdr[3] << 8) : 0);
    start = (hdr[8] | hdr[9] << 8) * 16u;
    if (loaded - start < IMAGE_END || fseek(f, start + IMAGE_START, SEEK_SET) != 0 ||
        fread(port_image, 1, IMAGE_END - IMAGE_START, f) != (size_t)(IMAGE_END - IMAGE_START)) {
        fprintf(stderr, "EUROPE.EXE: too short, not the right game\n");
        exit(1);
    }
    fclose(f);
    crc = crc32(port_image, IMAGE_END - IMAGE_START);
    if (crc != IMAGE_CRC32)
        fprintf(stderr, "warning: EUROPE.EXE is not the version this port was made from (data crc %08x)\n", crc);
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
