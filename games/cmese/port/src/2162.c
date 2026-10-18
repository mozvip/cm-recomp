/* Native port of decomp/src/2162.C (see ../README.md). */
/* @at 2162:000b */
/* @data 69da:92b2 */
/* @module */

#include "port.h"

char *f_2162_0f38(void);
int16_t f_2162_1436(int32_t size);                 /* allocate a block (EMS/extended memory) */
void *f_2162_1634(int16_t handle, int16_t page);
void f_2162_1899(void);
void f_238c_0002(void);
void f_2385_0014(void);
void f_2162_129d(void);
void f_2162_07bc(void);
void f_2162_065d(void);
int16_t f_2162_0c2b(void);
void f_2162_0dfb(int16_t ticks);
void f_2162_0b0c();                     /* no prototype: callers pass an int */
void f_2385_0065(void);
void f_2352_000c(char *src, char *dst);   /* LBM picture decoder */
void f_2162_18ca(void);
void f_2162_197b(void);
void f_2162_1021(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2);
void f_2162_0a0f(int16_t colour, int16_t x, int16_t y, char *s);
void f_2162_0a59(int16_t colour, int16_t x, int16_t y, char c);
void f_2162_19ae(void);
void f_2162_0c48(int16_t a);
int32_t f_2162_0e32(void);
void f_2306_000e(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, int16_t colour);
void f_1a70_4b7d(float x, int16_t w, char *prompt);
void f_2162_1256(void);
void f_23a7_01a0(int16_t handle);
void f_2385_005a(void);
void f_238c_003c(void);
void f_2385_0027(char *music);
void f_2385_000c(void);
int16_t f_23a7_0006(void);                                  /* EMS present: 0 */
int16_t f_23a7_0161(int32_t size);                             /* allocate EMS */
void f_23a7_02d8(int32_t size, char *buf, int16_t handle, int32_t off);   /* write to EMS */
void f_23a7_0438(int32_t size, int16_t handle, int32_t off, char *buf);   /* read from EMS */

extern char *d_69da_e006;           /* screen buffer */
extern char d_69da_e01c;                /* video mode at start-up */
extern char d_69da_e01d;                /* 0 none, 1 EGA, 2 VGA */
extern int16_t d_69da_dffa, d_69da_dfe6, d_69da_dfe8, d_69da_dff6;
extern int16_t d_69da_dffc, d_69da_dffe, d_69da_dfe4, d_69da_e000, d_69da_e002, d_69da_e004;
extern int16_t d_69da_dff2, d_69da_dff4, d_69da_dfee, d_69da_dff0, d_69da_dfea, d_69da_dff8;
extern int16_t d_69da_dfec, d_69da_e008;
extern int16_t d_69da_e00a;                 /* virtual memory blocks (f_2162_1436) */
extern char d_69da_de32;                /* the picture's palette is to be set */
extern int16_t d_69da_da48, d_69da_da46;    /* palette brightness, tint */
extern int16_t d_69da_d9d2, d_69da_d9a0, d_69da_dad8, d_69da_db6a;
extern int16_t d_69da_b0de[];               /* the picture's palette, 0RGB */
extern char d_536d_8229[];          /* the picture shown */
extern char d_536d_591f[];          /* the picture wanted */
extern char d_69da_93d8[], d_69da_99d8[], d_69da_a1d8[];  /* the fonts (another module's data) */
extern int16_t d_69da_e2ce;
extern char *d_69da_e010;           /* sound driver memory */
extern char *d_69da_e00c;           /* the driver, paragraph aligned */
extern char d_69da_929f;                /* sound device letter */
extern char *d_69da_e086;           /* VGA memory */
extern unsigned char d_69da_e2c3, d_69da_e2c2;     /* drawing and fill colours */
extern int16_t d_69da_db74, d_69da_e01e;
extern struct window *d_69da_e08a;  /* current font */
extern char d_69da_929e;                /* 1: text drawn with its background */
extern unsigned char d_69da_ddaf;
extern char d_536d_9ccd[6][320];    /* text buffers */
extern char d_69da_e022[64];            /* 8x8 block under the mouse pointer */
extern int16_t d_69da_92a0;                 /* virtual memory in EMS/extended memory */
extern int16_t d_69da_e020;
extern char *d_69da_e018;           /* music memory */
extern char *d_69da_e014;           /* the music, paragraph aligned */
extern char *d_69da_e08e;          /* virtual memory work buffer (64124 bytes) */
extern char d_69da_cde3;                /* EMS library error */
extern char d_69da_929c;                /* mouse initialised */
extern char d_69da_929d;                /* the mouse driver counts x in 0-639 */
extern int16_t d_69da_e2ca, d_69da_e2cc;    /* where the pointer is drawn */

struct vmblock {                        /* a virtual memory block */
    int32_t size;
    int32_t off;                           /* in EMS or VM.$$$ */
};
extern struct vmblock d_69da_e182[40];

struct vmslot {                         /* a block in the work buffer */
    signed char block;
    char dirty;
    char *p;
};
struct vmslot d_69da_e092[40];          /* port: native, it holds a pointer */

struct window {                         /* a font */
    char *buf;
    int16_t pad[2];
    int16_t w, h, base;
};

unsigned char d_69da_92b2[16] = { 0, 15, 12, 10, 9, 11, 14, 13, 7, 6, 1, 5, 3, 4, 8, 2 };  /* EGA colours (unused: VGA only) */
struct window d_69da_92c2 = { d_69da_93d8, { 0, 0 }, 5, 5, 1 };
struct window d_69da_92d0 = { d_69da_99d8, { 0, 0 }, 7, 7, -1 };
struct window d_69da_92de = { d_69da_a1d8, { 0, 0 }, 7, 14, 0 };
char d_69da_92ec = 1;
int16_t d_69da_92ed = 0;                    /* mouse x */
int16_t d_69da_92ef = 0;                    /* mouse y */
int16_t d_69da_92f1 = 0;
int16_t d_69da_92f3 = 0;                    /* clicks since last asked */
uint32_t d_69da_92f5 = 1;          /* random seed */
int32_t d_69da_92f9 = 0;                   /* ticks added after midnight */
int32_t d_69da_92fd = 0;                   /* last time returned */
int16_t d_69da_9301 = 0;                    /* virtual memory blocks allocated */
uint32_t d_69da_9303 = 0;          /* bytes of the work buffer in use */

/* Take the top bit of each of four plane bytes into one pixel value. */
char f_2162_000b(char *p0, char *p1, char *p2, char *p3)
{
    char r = 0;

    if (*p0 & 0x80)
        r |= 1;
    if (*p1 & 0x80)
        r |= 2;
    if (*p2 & 0x80)
        r |= 4;
    if (*p3 & 0x80)
        r |= 8;
    *p0 <<= 1;
    *p1 <<= 1;
    *p2 <<= 1;
    *p3 <<= 1;
    return r;
}

/* Planar (4 x 8000 bytes) to one byte per pixel. */
void f_2162_005a(char *src)
{
    char *s;
    char *d;
    uint16_t i, j;
    char p0, p1, p2, p3;

    s = src;
    d = d_69da_e006 + 0x7d00;
    for (i = 0; i < 8000; i++) {
        *d++ = *s++;
        *d++ = s[7999];
        *d++ = s[15999];
        *d++ = s[23999];
    }
    s = d_69da_e006 + 0x7d00;
    d = d_69da_e006;
    for (i = 0; i < 8000; i++) {
        p0 = *s++;
        p1 = *s++;
        p2 = *s++;
        p3 = *s++;
        for (j = 0; j < 8; j++)
            *d++ = f_2162_000b(&p0, &p1, &p2, &p3);
    }
}

char *f_2162_0160(char c)
{
    char *p;

    p = f_2162_0f38();
    p[0] = c;
    p[1] = 0;
    return p;
}

/* 0: no EGA, 1: EGA (mode 0Dh set), 2: VGA (mode 13h set).
 * Port: always VGA (the platform layer shows mode 13h); started from text mode 3. */
int16_t f_2162_0188(void)
{
    d_69da_e01c = 3;
    return 2;
}

void f_2162_01cd(void)
{
    d_69da_e01d = f_2162_0188();
    if (d_69da_e01d != 2) {
        printf("Requires VGA\n");
        exit(1);
    }
    f_2162_1899();
    if (d_69da_e2ce == 0)
        f_238c_0002();
    d_69da_92c2.buf = d_69da_93d8;
    d_69da_92d0.buf = d_69da_99d8;
    d_69da_92de.buf = d_69da_a1d8;
    d_69da_e00a = f_2162_1436(64000);
    d_69da_dffa = f_2162_1436(5000);
    d_69da_dfe6 = f_2162_1436(7440);
    d_69da_dfe8 = f_2162_1436(2600);
    d_69da_dff6 = f_2162_1436(18600);
    d_69da_dffc = f_2162_1436(8282);
    d_69da_dffe = f_2162_1436(6400);
    d_69da_dfe4 = f_2162_1436(3720);
    d_69da_e000 = f_2162_1436(604);
    d_69da_e002 = f_2162_1436(604);
    d_69da_e004 = f_2162_1436(604);
    d_69da_dff2 = f_2162_1436(1000);
    d_69da_dff4 = f_2162_1436(2240);
    d_69da_dfee = f_2162_1436(3900);
    d_69da_dff0 = f_2162_1436(10240);
    d_69da_dfea = f_2162_1436(1300);
    d_69da_dff8 = f_2162_1436(5120);
    d_69da_dfec = f_2162_1436(18600);
}

/* Blacks the screen out: an all-black palette, then the picture with its own palette. */
void f_2162_0346(void)
{
    char pal[48];

    memset(pal, 0, 48);
    f_2162_0b0c(1);
    if (d_69da_de32)
        port_vga_set_palette(0, 16, (unsigned char *)pal);   /* INT 10h AX=1012h, ES:DX = pal */
    f_2162_07bc();
    if (d_69da_de32) {
        f_2162_065d();
        d_69da_de32 = 0;
    }
}

void f_2162_0397(void)
{
}

void f_2162_03a0(int16_t i, char r, char g, char b)
{
    unsigned char rgb[3];

    rgb[0] = r << 2;
    rgb[1] = g << 2;
    rgb[2] = b << 2;
    port_vga_set_palette(i, 1, rgb);    /* INT 10h AX=1010h */
}

/* The sound driver ('A' AdLib, 'R' Roland MT-32), the virtual memory, the screen. */
void f_2162_03c6(char c)
{
    int16_t h;

    c = toupper(c);
    if (c == 'A' || c == 'R') {
        d_69da_e010 = malloc(6100);
        d_69da_e00c = d_69da_e010;      /* port: paragraph alignment, not needed here */
        d_69da_929f = c;
        if (c == 'A')
            h = open("ADLIB.DRV", O_RDONLY);
        else
            h = open("MT32.DRV", O_RDONLY);
        read(h, d_69da_e00c, 6100);
        close(h);
        f_2385_0014();
    }
    f_2162_129d();
    _OvrInitEms(0, 0, 0);
    d_69da_e086 = (char *)port_vga_memory();
}

/* The Domark and title pictures, until a key or click. */
void f_2162_0470(void)
{
    int16_t h;

    d_69da_e006 = f_2162_1634(d_69da_e00a, 1);
    h = open("domark.lbm", O_RDONLY);
    read(h, d_69da_e006 + 0x7d00, 32000);
    close(h);
    f_2352_000c(d_69da_e006 + 0x7d00, d_69da_e006);
    f_2162_005a(d_69da_e006);
    d_69da_da48 = 4;
    d_69da_da46 = 5;
    f_2162_065d();
    f_2162_07bc();
    f_2162_18ca();
    f_2162_0dfb(200);
    d_69da_e006 = f_2162_1634(d_69da_e00a, 1);
    h = open("title.lbm", O_RDONLY);
    read(h, d_69da_e006 + 0x7d00, 32000);
    close(h);
    f_2352_000c(d_69da_e006 + 0x7d00, d_69da_e006);
    f_2162_005a(d_69da_e006);
    d_69da_da48 = 4;
    d_69da_da46 = 5;
    f_2162_065d();
    f_2162_07bc();
    while (f_2162_0c2b() == 0)
        ;
    if (d_69da_929f)
        f_2385_0065();
}

/* Loads the picture named in d_536d_591f unless it is the one shown (d_536d_8229). */
void f_2162_05a0(char reset)
{
    int16_t h;

    if (strcmp(d_536d_591f, d_536d_8229) != 0) {
        if ((h = open(d_536d_591f, O_RDONLY)) >= 0) {
            d_69da_e006 = f_2162_1634(d_69da_e00a, 1);
            read(h, d_69da_e006 + 0x7d00, 32000);
            close(h);
            f_2352_000c(d_69da_e006 + 0x7d00, d_69da_e006);
            f_2162_005a(d_69da_e006);
        }
        if (reset) {
            d_69da_da46 = 5;
            d_69da_da48 = 2;
        }
        d_69da_de32 = -1;
        strcpy(d_536d_8229, d_536d_591f);
    }
}

/* The palette: the picture's colours (d_69da_b0de, 4 bits each) at brightness d_69da_da48,
   tinted by d_69da_da46 (1-4; 5 and above: as they are). */
void f_2162_065d(void)
{
    char pal[48];
    float f;
    int16_t grey;
    char *p;

    p = pal;
    f = d_69da_da48 * 0.15 + 0.4;
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= 15; d_69da_d9d2++) {
        d_69da_d9a0 = d_69da_b0de[d_69da_d9d2] & 15;
        d_69da_dad8 = d_69da_b0de[d_69da_d9d2] >> 4 & 15;
        d_69da_db6a = d_69da_b0de[d_69da_d9d2] >> 8 & 15;
        grey = (d_69da_db6a + d_69da_dad8 + d_69da_d9a0) / 3;
        if (d_69da_da46 < 5) {
            if (d_69da_da46 == 1) {
                d_69da_db6a = grey / 2;
                d_69da_dad8 = grey / 2;
                d_69da_d9a0 = grey;
            } else if (d_69da_da46 == 2) {
                d_69da_db6a = grey;
                d_69da_dad8 = grey;
                d_69da_d9a0 = grey;
            } else if (d_69da_da46 == 3) {
                d_69da_db6a = grey;
                d_69da_dad8 = grey / 2;
                d_69da_d9a0 = grey / 2;
            } else {
                d_69da_db6a = grey / 2;
                d_69da_dad8 = grey;
                d_69da_d9a0 = grey / 2;
            }
        }
        *p++ = (char)(d_69da_db6a * f) << 2;
        *p++ = (char)(d_69da_dad8 * f) << 2;
        *p++ = (char)(d_69da_d9a0 * f) << 2;
    }
    port_vga_set_palette(0, 16, (unsigned char *)pal);   /* INT 10h AX=1012h, ES:DX = pal */
}

/* The screen buffer to the screen. */
void f_2162_07bc(void)
{
    d_69da_e006 = f_2162_1634(d_69da_e00a, 0);
    f_2162_197b();
    memcpy(d_69da_e086, d_69da_e006, 64000);
    f_2162_18ca();
}

void f_2162_07f7(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2)
{
    char *s;
    char *d;
    uint16_t skip;
    uint16_t off;
    uint16_t t;

    f_2162_197b();
    d_69da_e006 = f_2162_1634(d_69da_e00a, 0);
    s = d_69da_e006;
    d = d_69da_e086;
    if (y1 > y2) {
        t = y1;
        y1 = y2;
        y2 = t;
    }
    off = y1 * 320 + x1;
    s += off;
    d += off;
    skip = 320 - (x2 - x1 + 1);
    for (t = y1; t <= y2; t++) {
        memcpy(d, s, x2 - x1 + 1);
        s += x2 - x1 + 1 + skip;
        d += x2 - x1 + 1 + skip;
    }
    f_2162_18ca();
}

void f_2162_0897(c)                    /* old-style: callers pass an int */
char c;
{
    d_69da_e2c2 = c;
}

void f_2162_08a6(c)                    /* old-style: callers pass an int */
char c;
{
    d_69da_e2c3 = c;
}

void f_2162_08b5(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2)
{
    uint16_t t;
    uint16_t y;

    if (y1 > y2) {
        t = y1;
        y1 = y2;
        y2 = t;
    }
    f_2162_197b();
    for (y = y1; y <= y2; y++)
        f_2306_000e(x1, y, x2, y, d_69da_e2c2);
    f_2162_18ca();
}

void f_2162_090f(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2)
{
    uint16_t t;

    if (y1 > y2) {
        t = y1;
        y1 = y2;
        y2 = t;
    }
    f_2162_197b();
    f_2162_1021(x1, y1, x2, y1);
    f_2162_1021(x1, y2, x2, y2);
    f_2162_1021(x1, y1, x1, y2);
    f_2162_1021(x2, y1, x2, y2);
    f_2162_18ca();
}

void f_2162_0983(void)
{
    d_69da_db74 = -1;
}

void f_2162_0992(int16_t f)
{
    switch (f) {
    case 0:
        d_69da_e08a = &d_69da_92c2;
        d_69da_e01e = 1;
        break;
    case 1:
        d_69da_e08a = &d_69da_92d0;
        d_69da_e01e = 0;
        break;
    case 2:
        d_69da_e08a = &d_69da_92de;
        d_69da_e01e = 0;
        break;
    }
    d_69da_db74 = f;
}

void f_2162_09e2(int16_t x, int16_t y, char *s)
{
    f_2162_197b();
    f_2162_0a0f(d_69da_e2c3, x, y, s);
    f_2162_18ca();
}

void f_2162_0a0f(int16_t colour, int16_t x, int16_t y, char *s)
{
    y -= d_69da_e08a->h + d_69da_e08a->base;
    while (*s) {
        f_2162_0a59(colour, x, y, *s++);
        x += d_69da_e08a->w + 1;
    }
}

void f_2162_0a59(int16_t colour, int16_t x, int16_t y, char c)
{
    char *d;
    char *g;
    uint16_t skip;
    char bits;
    uint16_t i, j;

    g = d_69da_e08a->buf + (c >= 0 ? c : c + 256) * (d_69da_e08a->h + 1);
    d = d_69da_e086 + y * 320 + x;
    skip = 320 - d_69da_e08a->w - 1;
    for (i = 0; i <= d_69da_e08a->h; i++) {
        bits = *g++;
        for (j = 0; j <= d_69da_e08a->w; j++) {
            if (bits & 0x80)
                *d = colour;
            else if (d_69da_929e == 1)
                *d = d_69da_e2c2;
            d++;
            bits <<= 1;
        }
        d += skip;
    }
}

void f_2162_0b0c(mode)
char mode;
{
    d_69da_929e = mode;
}

/* 1-based position of set in s, 0 if not found. */
uint16_t f_2162_0b1b(char *s, char *set)
{
    char *p;
    uint16_t k;

    p = strstr(s, set);
    if (p != NULL) {
        k = p - s + 1;
        if (strlen(s) >= k)
            return k;
    }
    return 0;
}

/* 1-based position of the last occurrence of set in s, 0 if not found. */
uint16_t f_2162_0b6f(char *s, char *set)
{
    char *p;
    char *q;
    uint16_t k;
    uint16_t t;

    p = strstr(s, set);
    if (p != NULL) {
        for (;;) {
            if ((q = strstr(p + 1, set)) == NULL)
                break;
            t = q - s + 1;
            if (strlen(s) < t)
                break;
            p = q;
        }
        k = p - s + 1;
        if (strlen(s) >= k)
            return k;
    }
    return 0;
}

int16_t f_2162_0c13(void)
{
    return d_69da_92ef;
}

int16_t f_2162_0c1f(void)
{
    return d_69da_92ed;
}

int16_t f_2162_0c2b(void)
{
    int16_t n;

    f_2162_19ae();
    n = d_69da_92f3;
    d_69da_92f3 = 0;
    return n;
}

void f_2162_0c48(int16_t a)
{
}

void f_2162_0c51(void)
{
    do
        f_2162_19ae();
    while (d_69da_92f3 != 0);
}

/* Read a "quoted" field, then skip to the end of the line. */
void f_2162_0c66(FILE *fp, char *dst)
{
    int16_t c;

    fgetc(fp);
    while ((c = fgetc(fp)) != '"')
        *dst++ = c;
    *dst = 0;
    while (fgetc(fp) != '\n')
        ;
}

void f_2162_0cbe(FILE *fp, char *buf)
{
    fgets(buf, 160, fp);
    buf[strlen(buf) - 1] = 0;
}

void f_2162_0cf9(FILE *fp, char *s)
{
    fprintf(fp, "%s\n", s);
}

char *f_2162_0d1a(void)
{
    char *p;
    int16_t c;

    p = f_2162_0f38();
    c = 0;
    if (kbhit())
        c = getch();
    p[0] = c;
    p[1] = 0;
    return p;
}

uint32_t f_2162_0d5b(void)
{
    d_69da_92f5 = d_69da_92f5 * 1103515245 + 12345;
    return (d_69da_92f5 >> 16) & 0x7fff;
}

void f_2162_0d8c(void)
{
    d_69da_92f5 = f_2162_0e32();
}

/* A random number below n (two draws make 30 bits). */
uint32_t f_2162_0da1(uint32_t n)
{
    if (n)
        return ((f_2162_0d5b() << 16) + f_2162_0d5b()) % n;
    return 0;
}

int16_t f_2162_0dd7(char *path)
{
    if (access(path, 0))
        return 0;
    return -1;
}

void f_2162_0dfb(int16_t ticks)
{
    int32_t t;

    t = f_2162_0e32();
    while (f_2162_0e32() < t + ticks * 4)
        ;
}

/* Clock ticks, x 11, not going back at midnight. */
int32_t f_2162_0e32(void)
{
    int32_t t;

    _bios_timeofday(0, &t);
    if (t + d_69da_92f9 < d_69da_92fd)
        d_69da_92f9 += 300000;
    d_69da_92fd = t + d_69da_92f9;
    return d_69da_92fd * 11;
}

/* s in capitals, accented letters too, in a new string. */
char *f_2162_0e9b(char *s)
{
    char *p;
    char i;

    p = f_2162_0f38();
    i = 0;
    strcpy(p, s);
    for (; p[i]; i++)
        if (p[i] >= 'a' && p[i] <= 'z' || p[i] >= '\xe0' && p[i] <= '\xff')
            p[i] = p[i] - 32;
    return p;
}

/* The next of six text buffers. */
char *f_2162_0f38(void)
{
    char *p = d_536d_9ccd[d_69da_ddaf++];

    if (d_69da_ddaf > 5)
        d_69da_ddaf = 0;
    return p;
}

/* The last n characters of s. */
char *f_2162_0f6e(char *s, uint16_t n)
{
    char *p;
    uint16_t l;

    p = f_2162_0f38();
    l = strlen(s);
    if (n <= l)
        strcpy(p, s + (l - n));
    else
        strcpy(p, s);
    return p;
}

/* n characters of s from position i (1-based). */
char *f_2162_0fc1(char *s, uint16_t i, uint16_t n)
{
    uint16_t l;
    char *p;

    p = f_2162_0f38();
    l = strlen(s);
    if (i > l)
        *p = 0;
    else
        sprintf(p, "%.*s", n, s + (i - 1));
    return p;
}

void f_2162_1021(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2)
{
    f_2162_197b();
    f_2306_000e(x1, y1, x2, y2, d_69da_e2c3);
    f_2162_18ca();
}

/* s without leading and trailing spaces. */
char *f_2162_104e(char *s)
{
    char *p;
    int16_t i;

    p = f_2162_0f38();
    for (i = 0; s[i] == ' '; i++)
        ;
    strcpy(p, s + i);
    if (strlen(p))
        for (i = strlen(p) - 1; i >= 0; i--)
            if (p[i] == ' ')
                p[i] = 0;
            else
                break;
    return p;
}

float f_2162_10cf(void)
{
    return rand() / 32767.0;
}

void f_2162_10ec(int16_t x, int16_t y)
{
    char *s;
    char *d;
    uint16_t j, i;

    s = d_69da_e086 + y * 320 + x;
    d = d_69da_e022;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++)
            *d++ = *s++;
        s += 312;
    }
}

void f_2162_1141(int16_t x, int16_t y)
{
    char *s;
    char *d;
    uint16_t j, i;

    d = d_69da_e086 + y * 320 + x;
    s = d_69da_e022;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++)
            *d++ = *s++;
        d += 312;
    }
}

/* Move the rectangle up by dy rows and fill the rows it leaves with colour. */
void f_2162_1196(uint16_t x, int16_t y, uint16_t x2, uint16_t y2, int16_t dy, int16_t colour)
{
    char *p;
    char *q;
    char *a;
    char *b;
    uint16_t j;
    int16_t i;

    f_2162_197b();
    p = d_69da_e086 + y * 320 + x;
    q = p - dy * 320;
    for (i = y; i <= y2; i++) {
        a = p;
        b = q;
        for (j = x; j <= x2; j++)
            *b++ = *a++;
        p += 320;
        q += 320;
    }
    for (i = 0; i < dy; i++) {
        b = q;
        for (j = x; j <= x2; j++)
            *b++ = colour;
        p += 320;
        q += 320;
    }
    f_2162_18ca();
}


void f_2162_1256(void)
{
    if (d_69da_92a0)
        f_23a7_01a0(d_69da_e020);
    else
        remove("VM.$$$");
    port_vga_restore_text_mode();       /* INT 10h AH=0, AL=d_69da_e01c */
    if (d_69da_929f)
        f_2385_005a();
    if (d_69da_e2ce == 0)
        f_238c_003c();
}

void f_2162_129d(void)
{
    int16_t h;

    if (d_69da_929f) {
        d_69da_e018 = malloc(11000);
        d_69da_e014 = d_69da_e018;      /* port: paragraph alignment, not needed here */
        if (d_69da_929f == 'A')
            h = open("MUSIC93.ALB", O_RDONLY);
        else
            h = open("MUSIC93.RLD", O_RDONLY);
        read(h, d_69da_e014, 11000);
        close(h);
        f_2385_0027(d_69da_e014);
        if (d_69da_929f == 'R')
            f_2385_000c();
    }
}

float f_2162_1324(float a, float b)
{
    return a > b ? a : b;
}

int16_t f_2162_134e(int16_t a, int16_t b)
{
    return a > b ? a : b;
}

int32_t f_2162_1367(int32_t a, int32_t b)
{
    return a > b ? a : b;
}

float f_2162_1390(float a, float b)
{
    return a < b ? a : b;
}

int16_t f_2162_13ba(int16_t a, int16_t b)
{
    return a < b ? a : b;
}

int32_t f_2162_13d3(int32_t a, int32_t b)
{
    return a < b ? a : b;
}


void f_2162_13fc(char *a, char *b, uint16_t n)
{
    char c;
    uint16_t i;

    for (i = 0; i < n; i++) {
        c = *a;
        *a++ = *b;
        *b++ = c;
    }
}

/* Allocate a virtual memory block of size bytes; returns its handle. */
int16_t f_2162_1436(int32_t size)
{
    int16_t h;
    int16_t i;

    if (d_69da_9301 == 0) {
        if ((d_69da_e08e = farcalloc(64124, 1)) == NULL) {
            printf("Not enough memory.\n");
            if (d_69da_929f) {
                printf("Try re-installing the game\n");
                printf("without selecting sound.\n");
            }
            exit(-1);
        }
        if (f_23a7_0006() == 0) {
            d_69da_e020 = f_23a7_0161(250000);
            if (d_69da_cde3 == 0)
                d_69da_92a0 = -1;
        }
        if (d_69da_92a0 == 0) {
            h = open("VM.$$$", O_CREAT | O_TRUNC | O_WRONLY, S_IREAD | S_IWRITE);
            write(h, d_69da_e08e, 1);
            close(h);
        }
        for (i = 0; i < 40; i++) {
            d_69da_e092[i].block = -1;
            d_69da_e182[i].size = 0;
        }
    }
    d_69da_e182[d_69da_9301].size = size;
    if (d_69da_92a0) {
        d_69da_e182[d_69da_9301].off = d_69da_9301 == 0 ? 0 :
            d_69da_e182[d_69da_9301 - 1].off + d_69da_e182[d_69da_9301 - 1].size;
        f_23a7_02d8(d_69da_e182[d_69da_9301].size, d_69da_e08e, d_69da_e020, d_69da_e182[d_69da_9301].off);
    } else {
        d_69da_e182[d_69da_9301].off = d_69da_9301 == 0 ? 0 :
            d_69da_e182[d_69da_9301 - 1].off + d_69da_e182[d_69da_9301 - 1].size;
        h = open("VM.$$$", O_RDWR);
        lseek(h, d_69da_e182[d_69da_9301].off, 0);
        write(h, d_69da_e08e, size);
        close(h);
    }
    return d_69da_9301++;
}

/* Map a virtual memory block into the work buffer (dirty: it will be changed). */
void *f_2162_1634(int16_t handle, int16_t dirty)
{
    int16_t fd;
    int16_t i;
    char *p;

    for (i = 0; i < 40; i++)
        if (d_69da_e092[i].block == handle) {
            if (dirty == 1)
                d_69da_e092[i].dirty = dirty;
            return d_69da_e092[i].p;
        }
    if (d_69da_92a0 == 0)
        fd = open("VM.$$$", O_RDWR);
    if (d_69da_9303 + d_69da_e182[handle].size > 64124) {
        for (i = 0; i < 40; i++)
            if (d_69da_e092[i].block >= 0) {
                if (d_69da_e092[i].dirty == 1) {
                    if (d_69da_92a0 == 0) {
                        lseek(fd, d_69da_e182[d_69da_e092[i].block].off, 0);
                        write(fd, d_69da_e092[i].p, d_69da_e182[d_69da_e092[i].block].size);
                    } else
                        f_23a7_02d8(d_69da_e182[d_69da_e092[i].block].size, d_69da_e092[i].p, d_69da_e020,
                                    d_69da_e182[d_69da_e092[i].block].off);
                }
                d_69da_e092[i].block = -1;
            }
        d_69da_9303 = 0;
    }
    for (i = 0; i < 40; i++)
        if (d_69da_e092[i].block == -1)
            break;
    p = d_69da_e08e + d_69da_9303;
    if (d_69da_92a0 == 0) {
        lseek(fd, d_69da_e182[handle].off, 0);
        read(fd, p, d_69da_e182[handle].size);
        close(fd);
    } else
        f_23a7_0438(d_69da_e182[handle].size, d_69da_e020, d_69da_e182[handle].off, p);
    d_69da_e092[i].block = handle;
    d_69da_e092[i].dirty = dirty;
    d_69da_e092[i].p = p;
    d_69da_9303 = d_69da_9303 + d_69da_e182[handle].size;
    return p;
}

void f_2162_1899(void)
{
    d_69da_e2ce = -1;                       /* INT 33h AX=0: the platform's mouse */
    d_69da_929d = 1;                        /* it counts x in 0-639 (AX=4 to 900, AX=3 reads 639) */
    d_69da_929c = 1;
}

/* Show the mouse pointer (drawn by hand without a mouse driver). */
void f_2162_18ca(void)
{
    int16_t font;
    char colour;
    char mode;

    if (d_69da_e2ce) {
        port_mouse_show(1);                 /* INT 33h AX=1 */
    } else if (d_69da_92f1 == 0 && d_69da_929c) {
        font = d_69da_db74;
        colour = d_69da_e2c3;
        mode = d_69da_929e;
        d_69da_e2ca = d_69da_92ed;
        d_69da_e2cc = d_69da_92ef;
        f_2162_10ec(d_69da_e2ca, d_69da_e2cc);
        f_2162_0992(1);
        d_69da_929e = 0;
        f_2162_08a6(17);
        f_2162_0a59(d_69da_e2c3, d_69da_e2ca, d_69da_e2cc, 0x7e);
        f_2162_08a6(16);
        f_2162_0a59(d_69da_e2c3, d_69da_e2ca, d_69da_e2cc, 0x7f);
        d_69da_929e = mode;
        d_69da_e2c3 = colour;
        f_2162_0992(font);
        d_69da_92f1 = 1;
    }
}

void f_2162_197b(void)
{
    if (d_69da_e2ce) {
        port_mouse_show(0);                 /* INT 33h AX=2 */
    } else if (d_69da_92f1) {
        f_2162_1141(d_69da_e2ca, d_69da_e2cc);
        d_69da_92f1 = 0;
    }
}

void f_2162_19ae(void)
{
    port_pump();
    if (d_69da_e2ce) {
        port_mouse_state(&d_69da_92f3, &d_69da_92ed, &d_69da_92ef);   /* INT 33h AX=3 */
        if (d_69da_929d)
            d_69da_92ed >>= 1;
    } else if (d_69da_e2ca != d_69da_92ed || d_69da_e2cc != d_69da_92ef) {
        f_2162_197b();
        f_2162_18ca();
    }
}

void f_2162_19f6(void)
{
}

void f_2162_19ff(void)
{
}

void f_2162_1a08(void)
{
}

/* Without a mouse driver: the keyboard driver off, and the pointer hidden. */
void f_2162_1a11(void)
{
    if (d_69da_e2ce == 0) {
        d_69da_929c = 0;
        f_2162_197b();
        f_238c_003c();
    }
}

/* Without a mouse driver: the keyboard driver back, and the pointer. */
void f_2162_1a2f(void)
{
    if (d_69da_e2ce == 0) {
        f_238c_0002();
        d_69da_929c = 1;
        f_2162_18ca();
    }
}
