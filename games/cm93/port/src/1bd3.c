/* Native port of decomp/src/1BD3.C (see ../README.md). */
/* @at 1bd3:000d */
/* @data 60ae:9628 */
/* @module */

#include "port.h"

char *f_1bd3_0efb(void);
int16_t f_1bd3_13df(int32_t size);                 /* allocate a block (EMS/extended memory) */
void *f_1bd3_1617(int16_t handle, int16_t page);
void f_1bd3_18c4(void);
void f_1dfe_000a(void);
void f_1df8_000c(void);
void f_1bd3_1258(void);
void f_1bd3_07e6(void);
void f_1bd3_067c(void);
int16_t f_1bd3_0c16(void);
void f_1bd3_0dbc(int16_t ticks);
void f_1bd3_0b10();                     /* no prototype: callers pass an int */
void f_1df8_005d(void);
void f_1dc5_0004(char *src, char *dst);   /* LBM picture decoder */
void f_1bd3_18f1(void);
void f_1bd3_19b1(void);
void f_1bd3_0fe2(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2);
void f_1bd3_0a12(int16_t colour, int16_t x, int16_t y, char *s);
void f_1bd3_0a5c(int16_t colour, int16_t x, int16_t y, char c);
void f_1bd3_19df(void);
void f_1bd3_0c31(int16_t a);
int32_t f_1bd3_0df6(void);
void f_1d79_0006(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, int16_t colour);
void f_14bc_4d4c(float x, int16_t w, char *prompt);
void f_1bd3_1215(void);
void f_1df8_0052(void);
void f_1dfe_0044(void);
void f_1df8_001f(char *music);
void f_1df8_0004(void);

extern char *d_60ae_fdca;           /* screen buffer */
extern char d_60ae_fdb7;                /* video mode at start-up */
extern char d_60ae_fdb6;                /* 0 none, 1 EGA, 2 VGA */
extern int16_t d_60ae_fdd8, d_60ae_fdec, d_60ae_fdea, d_60ae_fddc;
extern int16_t d_60ae_fdd6, d_60ae_fdd4, d_60ae_fdee, d_60ae_fdd2, d_60ae_fdd0, d_60ae_fdce;
extern int16_t d_60ae_fde0, d_60ae_fdde, d_60ae_fde4, d_60ae_fde2, d_60ae_fde8, d_60ae_fdda;
extern int16_t d_60ae_fde6, d_60ae_fdcc;
extern int16_t d_60ae_fdc8;                 /* virtual memory blocks (f_1bd3_13df) */
extern char d_60ae_d901;                /* the picture's palette is to be set */
extern int16_t d_60ae_dcea, d_60ae_dcec;    /* palette brightness, tint */
extern int16_t d_60ae_dd60, d_60ae_dd92, d_60ae_dc5a, d_60ae_dbc8;
extern int16_t d_60ae_b454[];               /* the picture's palette, 0RGB */
extern char d_2289_22d8[];          /* the picture shown */
extern char d_2289_4be2[];          /* the picture wanted */
extern char d_60ae_974e[], d_60ae_9d4e[], d_60ae_a54e[];  /* the fonts (another module's data) */
extern int16_t d_60ae_fb04;
extern char *d_60ae_fdc0;           /* sound driver memory */
extern char *d_60ae_fdc4;           /* the driver, paragraph aligned */
extern char d_60ae_9615;                /* sound device letter */
extern char *d_60ae_fd4a;           /* VGA memory */
extern unsigned char d_60ae_fb10, d_60ae_fb11;     /* drawing and fill colours */
extern int16_t d_60ae_dbbe, d_60ae_fdb4;
extern struct window *d_60ae_fd46;  /* current font */
extern char d_60ae_9614;                /* 1: text drawn with its background */
extern unsigned char d_60ae_d984;
extern char d_2289_00c8[6][320];    /* text buffers */
extern char d_60ae_fd4e[64];            /* 8x8 block under the mouse pointer */
extern float d_60ae_d8f1;
extern int32_t d_60ae_0254[];              /* protection answers */
extern char d_2289_4fcc[];          /* text typed in */
extern char *d_60ae_fdb8;           /* music memory */
extern char *d_60ae_fdbc;           /* the music, paragraph aligned */
extern char *d_60ae_fd42;          /* virtual memory work buffer (64124 bytes) */
extern char d_60ae_9612;                /* mouse initialised */
extern char d_60ae_9613;                /* the mouse driver counts x in 0-639 */
extern int16_t d_60ae_fb08, d_60ae_fb06;    /* where the pointer is drawn */

struct vmblock {                        /* a virtual memory block */
    int32_t size;
    int32_t off;                           /* in vm_store */
};
extern struct vmblock d_60ae_fb12[40];

struct vmslot {                         /* a block in the work buffer */
    signed char block;
    char dirty;
    char *p;
};
struct vmslot d_60ae_fc52[40];          /* port: native, it holds a pointer */
static char *vm_store;                  /* port: the blocks, in memory: not in EMS or VM.$$$ */

struct window {                         /* a font */
    char *buf;
    int16_t pad[2];
    int16_t w, h, base;
};

unsigned char d_60ae_9628[16] = { 0, 15, 12, 10, 9, 11, 14, 13, 7, 6, 1, 5, 3, 4, 8, 2 };  /* EGA colours (unused: VGA only) */
struct window d_60ae_9638 = { d_60ae_974e, { 0, 0 }, 5, 5, 1 };
struct window d_60ae_9646 = { d_60ae_9d4e, { 0, 0 }, 7, 7, -1 };
struct window d_60ae_9654 = { d_60ae_a54e, { 0, 0 }, 7, 14, 0 };
char d_60ae_9662 = 1;
int16_t d_60ae_9663 = 0;                    /* mouse x */
int16_t d_60ae_9665 = 0;                    /* mouse y */
int16_t d_60ae_9667 = 0;
int16_t d_60ae_9669 = 0;                    /* clicks since last asked */
uint32_t d_60ae_966b = 1;          /* random seed */
int32_t d_60ae_966f = 0;                   /* ticks added after midnight */
int32_t d_60ae_9673 = 0;                   /* last time returned */
int16_t d_60ae_9677 = 0;                    /* virtual memory blocks allocated */
uint32_t d_60ae_9679 = 0;          /* bytes of the work buffer in use */

/* Take the top bit of each of four plane bytes into one pixel value. */
char f_1bd3_000d(char *p0, char *p1, char *p2, char *p3)
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
void f_1bd3_005e(char *src)
{
    char *s;
    char *d;
    char p0, p1, p2, p3;
    uint16_t i, j;

    s = src;
    d = d_60ae_fdca + 0x7d00;
    for (i = 0; i < 8000; i++) {
        *d++ = *s++;
        *d++ = s[7999];
        *d++ = s[15999];
        *d++ = s[23999];
    }
    s = d_60ae_fdca + 0x7d00;
    d = d_60ae_fdca;
    for (i = 0; i < 8000; i++) {
        p0 = *s++;
        p1 = *s++;
        p2 = *s++;
        p3 = *s++;
        for (j = 0; j < 8; j++)
            *d++ = f_1bd3_000d(&p0, &p1, &p2, &p3);
    }
}

char *f_1bd3_0157(char c)
{
    char *p;

    p = f_1bd3_0efb();
    p[0] = c;
    p[1] = 0;
    return p;
}

/* 0: no EGA, 1: EGA (mode 0Dh set), 2: VGA (mode 13h set).
 * Port: always VGA (the platform layer shows mode 13h); started from text mode 3. */
int16_t f_1bd3_0180(void)
{
    d_60ae_fdb7 = 3;
    return 2;
}

void f_1bd3_01c3(void)
{
    d_60ae_fdb6 = f_1bd3_0180();
    if (d_60ae_fdb6 != 2) {
        printf("Requires VGA\n");
        exit(1);
    }
    f_1bd3_18c4();
    if (d_60ae_fb04 == 0)
        f_1dfe_000a();
    d_60ae_9638.buf = d_60ae_974e;
    d_60ae_9646.buf = d_60ae_9d4e;
    d_60ae_9654.buf = d_60ae_a54e;
    d_60ae_fdc8 = f_1bd3_13df(64000);
    d_60ae_fdd8 = f_1bd3_13df(5000);
    d_60ae_fdec = f_1bd3_13df(7440);
    d_60ae_fdea = f_1bd3_13df(2600);
    d_60ae_fddc = f_1bd3_13df(18600);
    d_60ae_fdd6 = f_1bd3_13df(8282);
    d_60ae_fdd4 = f_1bd3_13df(6400);
    d_60ae_fdee = f_1bd3_13df(3720);
    d_60ae_fdd2 = f_1bd3_13df(604);
    d_60ae_fdd0 = f_1bd3_13df(604);
    d_60ae_fdce = f_1bd3_13df(604);
    d_60ae_fde0 = f_1bd3_13df(1000);
    d_60ae_fdde = f_1bd3_13df(2240);
    d_60ae_fde4 = f_1bd3_13df(3900);
    d_60ae_fde2 = f_1bd3_13df(10240);
    d_60ae_fde8 = f_1bd3_13df(1300);
    d_60ae_fdda = f_1bd3_13df(5120);
    d_60ae_fde6 = f_1bd3_13df(18600);
}

/* Blacks the screen out: an all-black palette, then the picture with its own palette. */
void f_1bd3_034d(void)
{
    char pal[48];

    memset(pal, 0, 48);
    f_1bd3_0b10(1);
    if (d_60ae_d901)
        port_vga_set_palette(0, 16, (unsigned char *)pal);   /* INT 10h AX=1012h, ES:DX = pal */
    f_1bd3_07e6();
    if (d_60ae_d901) {
        f_1bd3_067c();
        d_60ae_d901 = 0;
    }
}

void f_1bd3_03a2(void)
{
}

void f_1bd3_03a7(int16_t i, char r, char g, char b)
{
    unsigned char rgb[3];

    rgb[0] = r << 2;
    rgb[1] = g << 2;
    rgb[2] = b << 2;
    port_vga_set_palette(i, 1, rgb);    /* INT 10h AX=1010h */
}

/* The sound driver ('A' AdLib, 'R' Roland MT-32), the virtual memory, the screen. */
void f_1bd3_03cf(char c)
{
    int16_t h;

    c = toupper(c);
    if (c == 'A' || c == 'R') {
        d_60ae_fdc0 = malloc(6100);
        d_60ae_fdc4 = d_60ae_fdc0;      /* port: paragraph alignment, not needed here */
        d_60ae_9615 = c;
        if (c == 'A')
            h = open("ADLIB.DRV", O_RDONLY);
        else
            h = open("MT32.DRV", O_RDONLY);
        read(h, d_60ae_fdc4, 6100);
        close(h);
        f_1df8_000c();
    }
    f_1bd3_1258();
    _OvrInitEms(0, 0, 0);
    d_60ae_fd4a = (char *)port_vga_memory();
}

/* The Domark and title pictures, until a key or click. */
void f_1bd3_0476(void)
{
    int16_t h;

    d_60ae_fdca = f_1bd3_1617(d_60ae_fdc8, 1);
    h = open("domark.lbm", O_RDONLY);
    read(h, d_60ae_fdca + 0x7d00, 32000);
    close(h);
    f_1dc5_0004(d_60ae_fdca + 0x7d00, d_60ae_fdca);
    f_1bd3_005e(d_60ae_fdca);
    d_60ae_dcea = 4;
    d_60ae_dcec = 5;
    f_1bd3_067c();
    f_1bd3_07e6();
    f_1bd3_18f1();
    f_1bd3_0dbc(200);
    d_60ae_fdca = f_1bd3_1617(d_60ae_fdc8, 1);
    h = open("title.lbm", O_RDONLY);
    read(h, d_60ae_fdca + 0x7d00, 32000);
    close(h);
    f_1dc5_0004(d_60ae_fdca + 0x7d00, d_60ae_fdca);
    f_1bd3_005e(d_60ae_fdca);
    d_60ae_dcea = 4;
    d_60ae_dcec = 5;
    f_1bd3_067c();
    f_1bd3_07e6();
    while (f_1bd3_0c16() == 0)
        ;
    if (d_60ae_9615)
        f_1df8_005d();
}

/* Loads the picture named in d_2289_4be2 unless it is the one shown (d_2289_22d8). */
void f_1bd3_05af(char reset)
{
    int16_t h;

    if (strcmp(d_2289_4be2, d_2289_22d8) != 0) {
        if ((h = open(d_2289_4be2, O_RDONLY)) >= 0) {
            d_60ae_fdca = f_1bd3_1617(d_60ae_fdc8, 1);
            read(h, d_60ae_fdca + 0x7d00, 32000);
            close(h);
            f_1dc5_0004(d_60ae_fdca + 0x7d00, d_60ae_fdca);
            f_1bd3_005e(d_60ae_fdca);
        }
        if (reset) {
            d_60ae_dcec = 5;
            d_60ae_dcea = 4;
        }
        d_60ae_d901 = -1;
        strcpy(d_2289_22d8, d_2289_4be2);
    }
}

/* The palette: the picture's colours (d_60ae_b454, 4 bits each) at brightness d_60ae_dcea,
   tinted by d_60ae_dcec (1-4; 5 and above: as they are). */
void f_1bd3_067c(void)
{
    char pal[48];
    float f;
    char *p;
    int16_t grey;

    p = pal;
    f = d_60ae_dcea * 0.15 + 0.4;
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= 15; d_60ae_dd60++) {
        d_60ae_dd92 = d_60ae_b454[d_60ae_dd60] & 15;
        d_60ae_dc5a = d_60ae_b454[d_60ae_dd60] >> 4 & 15;
        d_60ae_dbc8 = d_60ae_b454[d_60ae_dd60] >> 8 & 15;
        grey = (d_60ae_dbc8 + d_60ae_dc5a + d_60ae_dd92) / 3;
        if (d_60ae_dcec < 5) {
            if (d_60ae_dcec == 1) {
                d_60ae_dbc8 = grey / 2;
                d_60ae_dc5a = grey / 2;
                d_60ae_dd92 = grey;
            } else if (d_60ae_dcec == 2) {
                d_60ae_dbc8 = grey;
                d_60ae_dc5a = grey;
                d_60ae_dd92 = grey;
            } else if (d_60ae_dcec == 3) {
                d_60ae_dbc8 = grey;
                d_60ae_dc5a = grey / 2;
                d_60ae_dd92 = grey / 2;
            } else {
                d_60ae_dbc8 = grey / 2;
                d_60ae_dc5a = grey;
                d_60ae_dd92 = grey / 2;
            }
        }
        *p++ = (char)(d_60ae_dbc8 * f) << 2;
        *p++ = (char)(d_60ae_dc5a * f) << 2;
        *p++ = (char)(d_60ae_dd92 * f) << 2;
    }
    port_vga_set_palette(0, 16, (unsigned char *)pal);   /* INT 10h AX=1012h, ES:DX = pal */
}

/* The screen buffer to the screen. */
void f_1bd3_07e6(void)
{
    d_60ae_fdca = f_1bd3_1617(d_60ae_fdc8, 0);
    f_1bd3_19b1();
    memcpy(d_60ae_fd4a, d_60ae_fdca, 64000);
    f_1bd3_18f1();
}

void f_1bd3_0821(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2)
{
    char *s;
    char *d;
    uint16_t skip;
    uint16_t off;
    uint16_t t;

    f_1bd3_19b1();
    d_60ae_fdca = f_1bd3_1617(d_60ae_fdc8, 0);
    s = d_60ae_fdca;
    d = d_60ae_fd4a;
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
    f_1bd3_18f1();
}

void f_1bd3_08cb(c)                    /* old-style: callers pass an int */
char c;
{
    d_60ae_fb11 = c;
}

void f_1bd3_08d6(c)                    /* old-style: callers pass an int */
char c;
{
    d_60ae_fb10 = c;
}

void f_1bd3_08e1(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2)
{
    uint16_t t;

    if (y1 > y2) {
        t = y1;
        y1 = y2;
        y2 = t;
    }
    f_1bd3_19b1();
    for (; y1 <= y2; y1++)
        f_1d79_0006(x1, y1, x2, y1, d_60ae_fb11);
    f_1bd3_18f1();
}

void f_1bd3_0928(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2)
{
    uint16_t t;

    if (y1 > y2) {
        t = y1;
        y1 = y2;
        y2 = t;
    }
    f_1bd3_19b1();
    f_1bd3_0fe2(x1, y1, x2, y1);
    f_1bd3_0fe2(x1, y2, x2, y2);
    f_1bd3_0fe2(x1, y1, x1, y2);
    f_1bd3_0fe2(x2, y1, x2, y2);
    f_1bd3_18f1();
}

void f_1bd3_0992(void)
{
    d_60ae_dbbe = -1;
}

void f_1bd3_099d(int16_t f)
{
    switch (f) {
    case 0:
        d_60ae_fd46 = &d_60ae_9638;
        d_60ae_fdb4 = 1;
        break;
    case 1:
        d_60ae_fd46 = &d_60ae_9646;
        d_60ae_fdb4 = 0;
        break;
    case 2:
        d_60ae_fd46 = &d_60ae_9654;
        d_60ae_fdb4 = 0;
        break;
    }
    d_60ae_dbbe = f;
}

void f_1bd3_09e9(int16_t x, int16_t y, char *s)
{
    f_1bd3_19b1();
    f_1bd3_0a12(d_60ae_fb10, x, y, s);
    f_1bd3_18f1();
}

void f_1bd3_0a12(int16_t colour, int16_t x, int16_t y, char *s)
{
    y -= d_60ae_fd46->h + d_60ae_fd46->base;
    while (*s) {
        f_1bd3_0a5c(colour, x, y, *s++);
        x += d_60ae_fd46->w + 1;
    }
}

void f_1bd3_0a5c(int16_t colour, int16_t x, int16_t y, char c)
{
    char *d;
    char *g;
    uint16_t skip;
    char bits;
    uint16_t i, j;

    g = d_60ae_fd46->buf + (c >= 0 ? c : c + 256) * (d_60ae_fd46->h + 1);
    d = d_60ae_fd4a + y * 320 + x;
    skip = 320 - d_60ae_fd46->w - 1;
    for (i = 0; i <= d_60ae_fd46->h; i++) {
        bits = *g++;
        for (j = 0; j <= d_60ae_fd46->w; j++) {
            if (bits & 0x80)
                *d = colour;
            else if (d_60ae_9614 == 1)
                *d = d_60ae_fb11;
            d++;
            bits <<= 1;
        }
        d += skip;
    }
}

void f_1bd3_0b10(mode)
char mode;
{
    d_60ae_9614 = mode;
}

/* 1-based position of set in s, 0 if not found. */
uint16_t f_1bd3_0b1b(char *s, char *set)
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
uint16_t f_1bd3_0b69(char *s, char *set)
{
    char *p;
    char *q;
    uint16_t t;
    uint16_t k;

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

int16_t f_1bd3_0c06(void)
{
    return d_60ae_9665;
}

int16_t f_1bd3_0c0e(void)
{
    return d_60ae_9663;
}

int16_t f_1bd3_0c16(void)
{
    int16_t n;

    f_1bd3_19df();
    n = d_60ae_9669;
    d_60ae_9669 = 0;
    return n;
}

void f_1bd3_0c31(int16_t a)
{
}

void f_1bd3_0c36(void)
{
    do
        f_1bd3_19df();
    while (d_60ae_9669 != 0);
}

/* Read a "quoted" field, then skip to the end of the line. */
void f_1bd3_0c47(FILE *fp, char *dst)
{
    int16_t c;

    fgetc(fp);
    while ((c = fgetc(fp)) != '"')
        *dst++ = c;
    *dst = 0;
    while (fgetc(fp) != '\n')
        ;
}

void f_1bd3_0c9a(FILE *fp, char *buf)
{
    fgets(buf, 160, fp);
    buf[strlen(buf) - 1] = 0;
}

void f_1bd3_0cce(FILE *fp, char *s)
{
    fprintf(fp, "%s\n", s);
}

char *f_1bd3_0cec(void)
{
    char *p;
    int16_t c;

    p = f_1bd3_0efb();
    c = 0;
    if (kbhit())
        c = getch();
    p[0] = c;
    p[1] = 0;
    return p;
}

uint32_t f_1bd3_0d2b(void)
{
    d_60ae_966b = d_60ae_966b * 1103515245 + 12345;
    return (d_60ae_966b >> 16) & 0x7fff;
}

void f_1bd3_0d58(void)
{
    d_60ae_966b = f_1bd3_0df6();
}

/* A random number below n (two draws make 30 bits). */
uint32_t f_1bd3_0d69(uint32_t n)
{
    if (n)
        return ((f_1bd3_0d2b() << 16) + f_1bd3_0d2b()) % n;
    return 0;
}

int16_t f_1bd3_0d9b(char *path)
{
    if (access(path, 0))
        return 0;
    return -1;
}

void f_1bd3_0dbc(int16_t ticks)
{
    int32_t t;

    t = f_1bd3_0df6();
    while (f_1bd3_0df6() < t + ticks * 4)
        ;
}

/* Clock ticks, x 11, not going back at midnight. */
int32_t f_1bd3_0df6(void)
{
    int32_t t;

    _bios_timeofday(0, &t);
    if (t + d_60ae_966f < d_60ae_9673)
        d_60ae_966f += 300000;
    d_60ae_9673 = t + d_60ae_966f;
    return d_60ae_9673 * 11;
}

/* s in capitals, accented letters too, in a new string. */
char *f_1bd3_0e5e(char *s)
{
    char *p;
    char i;

    p = f_1bd3_0efb();
    i = 0;
    strcpy(p, s);
    for (; p[i]; i++)
        if (p[i] >= 'a' && p[i] <= 'z' || p[i] >= '\xe0' && p[i] <= '\xff')
            p[i] = p[i] - 32;
    return p;
}

/* The next of six text buffers. */
char *f_1bd3_0efb(void)
{
    char *p = d_2289_00c8[d_60ae_d984++];

    if (d_60ae_d984 > 5)
        d_60ae_d984 = 0;
    return p;
}

/* The last n characters of s. */
char *f_1bd3_0f30(char *s, uint16_t n)
{
    char *p;
    uint16_t l;

    p = f_1bd3_0efb();
    l = strlen(s);
    if (n <= l)
        strcpy(p, s + (l - n));
    else
        strcpy(p, s);
    return p;
}

/* n characters of s from position i (1-based). */
char *f_1bd3_0f83(char *s, uint16_t i, uint16_t n)
{
    uint16_t l;
    char *p;

    p = f_1bd3_0efb();
    l = strlen(s);
    if (i > l)
        *p = 0;
    else
        sprintf(p, "%.*s", n, s + (i - 1));
    return p;
}

void f_1bd3_0fe2(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2)
{
    f_1bd3_19b1();
    f_1d79_0006(x1, y1, x2, y2, d_60ae_fb10);
    f_1bd3_18f1();
}

/* s without leading and trailing spaces. */
char *f_1bd3_100b(char *s)
{
    char *p;
    int16_t i;

    p = f_1bd3_0efb();
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

float f_1bd3_1088(void)
{
    return rand() / 32767.0;
}

void f_1bd3_10a3(int16_t x, int16_t y)
{
    char *s;
    char *d;
    uint16_t j, i;

    s = d_60ae_fd4a + y * 320 + x;
    d = d_60ae_fd4e;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++)
            *d++ = *s++;
        s += 312;
    }
}

void f_1bd3_10f7(int16_t x, int16_t y)
{
    char *s;
    char *d;
    uint16_t j, i;

    d = d_60ae_fd4a + y * 320 + x;
    s = d_60ae_fd4e;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++)
            *d++ = *s++;
        d += 312;
    }
}

/* Move the rectangle up by dy rows and fill the rows it leaves with colour. */
void f_1bd3_114b(uint16_t x, int16_t y, uint16_t x2, uint16_t y2, int16_t dy, int16_t colour)
{
    char *p;
    char *q;
    char *a;
    char *b;
    uint16_t j;
    int16_t i;

    f_1bd3_19b1();
    p = d_60ae_fd4a + y * 320 + x;
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
    f_1bd3_18f1();
}


void f_1bd3_1215(void)
{
    port_vga_restore_text_mode();       /* INT 10h AH=0, AL=d_60ae_fdb7 */
    if (d_60ae_9615)
        f_1df8_0052();
    if (d_60ae_fb04 == 0)
        f_1dfe_0044();
}

void f_1bd3_1258(void)
{
    int16_t h;

    if (d_60ae_9615) {
        d_60ae_fdb8 = malloc(11000);
        d_60ae_fdbc = d_60ae_fdb8;      /* port: paragraph alignment, not needed here */
        if (d_60ae_9615 == 'A')
            h = open("MUSIC93.ALB", O_RDONLY);
        else
            h = open("MUSIC93.RLD", O_RDONLY);
        read(h, d_60ae_fdbc, 11000);
        close(h);
        f_1df8_001f(d_60ae_fdbc);
        if (d_60ae_9615 == 'R')
            f_1df8_0004();
    }
}

float f_1bd3_12df(float a, float b)
{
    return a > b ? a : b;
}

int16_t f_1bd3_1307(int16_t a, int16_t b)
{
    return a > b ? a : b;
}

int32_t f_1bd3_131c(int32_t a, int32_t b)
{
    return a > b ? a : b;
}

float f_1bd3_1341(float a, float b)
{
    return a < b ? a : b;
}

int16_t f_1bd3_1369(int16_t a, int16_t b)
{
    return a < b ? a : b;
}

int32_t f_1bd3_137e(int32_t a, int32_t b)
{
    return a < b ? a : b;
}


void f_1bd3_13a3(char *a, char *b, uint16_t n)
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
int16_t f_1bd3_13df(int32_t size)
{
    int16_t i;

    if (d_60ae_9677 == 0) {
        if ((d_60ae_fd42 = farcalloc(64124, 1)) == NULL) {
            printf("Not enough memory.\n");
            if (d_60ae_9615) {
                printf("Try re-installing the game\n");
                printf("without selecting sound.\n");
            }
            exit(-1);
        }
        for (i = 0; i < 40; i++) {
            d_60ae_fc52[i].block = -1;
            d_60ae_fb12[i].size = 0;
        }
    }
    d_60ae_fb12[d_60ae_9677].size = size;
    d_60ae_fb12[d_60ae_9677].off = d_60ae_9677 == 0 ? 0 :
        d_60ae_fb12[d_60ae_9677 - 1].off + d_60ae_fb12[d_60ae_9677 - 1].size;
    if ((vm_store = realloc(vm_store, d_60ae_fb12[d_60ae_9677].off + size)) == NULL) {
        printf("Not enough memory.\n");
        exit(-1);
    }
    memcpy(vm_store + d_60ae_fb12[d_60ae_9677].off, d_60ae_fd42, size);
    return d_60ae_9677++;
}

/* Map a virtual memory block into the work buffer (dirty: it will be changed). */
void *f_1bd3_1617(int16_t handle, int16_t dirty)
{
    char *p;
    int16_t i;

    for (i = 0; i < 40; i++)
        if (d_60ae_fc52[i].block == handle) {
            if (dirty == 1)
                d_60ae_fc52[i].dirty = dirty;
            return d_60ae_fc52[i].p;
        }
    if (d_60ae_9679 + d_60ae_fb12[handle].size > 64124) {
        for (i = 0; i < 40; i++)
            if (d_60ae_fc52[i].block >= 0) {
                if (d_60ae_fc52[i].dirty == 1)
                    memcpy(vm_store + d_60ae_fb12[d_60ae_fc52[i].block].off, d_60ae_fc52[i].p,
                           d_60ae_fb12[d_60ae_fc52[i].block].size);
                d_60ae_fc52[i].block = -1;
            }
        d_60ae_9679 = 0;
    }
    for (i = 0; i < 40; i++)
        if (d_60ae_fc52[i].block == -1)
            break;
    p = d_60ae_fd42 + d_60ae_9679;
    memcpy(p, vm_store + d_60ae_fb12[handle].off, d_60ae_fb12[handle].size);
    d_60ae_fc52[i].block = handle;
    d_60ae_fc52[i].dirty = dirty;
    d_60ae_fc52[i].p = p;
    d_60ae_9679 = d_60ae_9679 + d_60ae_fb12[handle].size;
    return p;
}

void f_1bd3_18c4(void)
{
    d_60ae_fb04 = -1;                       /* INT 33h AX=0: the platform's mouse */
    d_60ae_9613 = 1;                        /* it counts x in 0-639 (AX=4 to 900, AX=3 reads 639) */
    d_60ae_9612 = 1;
}

/* Show the mouse pointer (drawn by hand without a mouse driver). */
void f_1bd3_18f1(void)
{
    int16_t font;
    char colour;
    char mode;

    if (d_60ae_fb04) {
        port_mouse_show(1);                 /* INT 33h AX=1 */
    } else if (d_60ae_9667 == 0 && d_60ae_9612) {
        font = d_60ae_dbbe;
        colour = d_60ae_fb10;
        mode = d_60ae_9614;
        d_60ae_fb08 = d_60ae_9663;
        d_60ae_fb06 = d_60ae_9665;
        f_1bd3_10a3(d_60ae_fb08, d_60ae_fb06);
        f_1bd3_099d(1);
        d_60ae_9614 = 0;
        f_1bd3_08d6(17);
        f_1bd3_0a5c(d_60ae_fb10, d_60ae_fb08, d_60ae_fb06, 0x7e);
        f_1bd3_08d6(16);
        f_1bd3_0a5c(d_60ae_fb10, d_60ae_fb08, d_60ae_fb06, 0x7f);
        d_60ae_9614 = mode;
        d_60ae_fb10 = colour;
        f_1bd3_099d(font);
        d_60ae_9667 = 1;
    }
}

void f_1bd3_19b1(void)
{
    if (d_60ae_fb04) {
        port_mouse_show(0);                 /* INT 33h AX=2 */
    } else if (d_60ae_9667) {
        f_1bd3_10f7(d_60ae_fb08, d_60ae_fb06);
        d_60ae_9667 = 0;
    }
}

void f_1bd3_19df(void)
{
    port_pump();
    if (d_60ae_fb04) {
        port_mouse_state(&d_60ae_9669, &d_60ae_9663, &d_60ae_9665);   /* INT 33h AX=3 */
        if (d_60ae_9613)
            d_60ae_9663 >>= 1;
    } else if (d_60ae_fb08 != d_60ae_9663 || d_60ae_fb06 != d_60ae_9665) {
        f_1bd3_19b1();
        f_1bd3_18f1();
    }
}

void f_1bd3_1a23(void)
{
}

void f_1bd3_1a28(void)
{
}

void f_1bd3_1a2d(void)
{
}

/* Without a mouse driver: the keyboard driver off, and the pointer hidden. */
void f_1bd3_1a32(void)
{
    if (d_60ae_fb04 == 0) {
        d_60ae_9612 = 0;
        f_1bd3_19b1();
        f_1dfe_0044();
    }
}

/* Without a mouse driver: the keyboard driver back, and the pointer. */
void f_1bd3_1a4c(void)
{
    if (d_60ae_fb04 == 0) {
        f_1dfe_000a();
        d_60ae_9612 = 1;
        f_1bd3_18f1();
    }
}
