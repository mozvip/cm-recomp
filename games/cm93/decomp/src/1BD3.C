/* @at 1bd3:000d */
/* @data 60ae:9628 */
/* @module */

#include <dos.h>
#include <fcntl.h>
#include <alloc.h>
#include <bios.h>
#include <conio.h>
#include <ctype.h>
#include <io.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

char far *f_1bd3_0efb(void);
int f_1bd3_13df(long size);                 /* allocate a block (EMS/extended memory) */
void far *f_1bd3_1617(int handle, int page);
void f_1bd3_18c4(void);
void f_1dfe_000a(void);
void f_1df8_000c(void);
void f_1bd3_1258(void);
void f_1bd3_07e6(void);
void f_1bd3_067c(void);
int f_1bd3_0c16(void);
void f_1bd3_0dbc(int ticks);
void f_1bd3_0b10();                     /* no prototype: callers pass an int */
void f_1df8_005d(void);
void f_1dc5_0004(char far *src, char far *dst);   /* LBM picture decoder */
void f_1bd3_18f1(void);
void f_1bd3_19b1(void);
void f_1bd3_0fe2(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_1bd3_0a12(int colour, int x, int y, char far *s);
void f_1bd3_0a5c(int colour, int x, int y, char c);
void f_1bd3_19df(void);
void f_1bd3_0c31(int a);
long f_1bd3_0df6(void);
void f_1d79_0006(unsigned x1, unsigned y1, unsigned x2, unsigned y2, int colour);
void f_14bc_4d4c(float x, int w, char far *prompt);
void f_1bd3_1215(void);
void f_1e19_01a8(int handle);
void f_1df8_0052(void);
void f_1dfe_0044(void);
void f_1df8_001f(char far *music);
void f_1df8_0004(void);
int f_1e19_000e(void);                                  /* EMS present: 0 */
int f_1e19_0169(long size);                             /* allocate EMS */
void f_1e19_02e0(long size, char far *buf, int handle, long off);   /* write to EMS */
void f_1e19_0440(long size, int handle, long off, char far *buf);   /* read from EMS */

extern char far *d_60ae_fdca;           /* screen buffer */
extern char d_60ae_fdb7;                /* video mode at start-up */
extern char d_60ae_fdb6;                /* 0 none, 1 EGA, 2 VGA */
extern int d_60ae_fdd8, d_60ae_fdec, d_60ae_fdea, d_60ae_fddc;
extern int d_60ae_fdd6, d_60ae_fdd4, d_60ae_fdee, d_60ae_fdd2, d_60ae_fdd0, d_60ae_fdce;
extern int d_60ae_fde0, d_60ae_fdde, d_60ae_fde4, d_60ae_fde2, d_60ae_fde8, d_60ae_fdda;
extern int d_60ae_fde6, d_60ae_fdcc;
extern int d_60ae_fdc8;                 /* virtual memory blocks (f_1bd3_13df) */
extern char d_60ae_d901;                /* the picture's palette is to be set */
extern int d_60ae_dcea, d_60ae_dcec;    /* palette brightness, tint */
extern int d_60ae_dd60, d_60ae_dd92, d_60ae_dc5a, d_60ae_dbc8;
extern int d_60ae_b454[];               /* the picture's palette, 0RGB */
extern char far d_2289_22d8[];          /* the picture shown */
extern char far d_2289_4be2[];          /* the picture wanted */
extern char d_60ae_974e[], d_60ae_9d4e[], d_60ae_a54e[];  /* the fonts (another module's data) */
extern int d_60ae_fb04;
extern char far *d_60ae_fdc0;           /* sound driver memory */
extern char far *d_60ae_fdc4;           /* the driver, paragraph aligned */
extern char d_60ae_9615;                /* sound device letter */
extern char far *d_60ae_fd4a;           /* VGA memory */
extern unsigned char d_60ae_fb10, d_60ae_fb11;     /* drawing and fill colours */
extern int d_60ae_dbbe, d_60ae_fdb4;
extern struct window far *d_60ae_fd46;  /* current font */
extern char d_60ae_9614;                /* 1: text drawn with its background */
extern unsigned char d_60ae_d984;
extern char far d_2289_00c8[6][320];    /* text buffers */
extern char d_60ae_fd4e[64];            /* 8x8 block under the mouse pointer */
extern float d_60ae_d8f1;
extern long d_60ae_0254[];              /* protection answers */
extern char far d_2289_4fcc[];          /* text typed in */
extern int d_60ae_9616;                 /* virtual memory in EMS/extended memory */
extern int d_60ae_fdb2;
extern char far *d_60ae_fdb8;           /* music memory */
extern char far *d_60ae_fdbc;           /* the music, paragraph aligned */
extern char huge *d_60ae_fd42;          /* virtual memory work buffer (64124 bytes) */
extern char d_60ae_d119;                /* EMS library error */
extern char d_60ae_9612;                /* mouse initialised */
extern char d_60ae_9613;                /* the mouse driver counts x in 0-639 */
extern int d_60ae_fb08, d_60ae_fb06;    /* where the pointer is drawn */

struct vmblock {                        /* a virtual memory block */
    long size;
    long off;                           /* in EMS or VM.$$$ */
};
extern struct vmblock d_60ae_fb12[40];

struct vmslot {                         /* a block in the work buffer */
    signed char block;
    char dirty;
    char far *p;
};
extern struct vmslot d_60ae_fc52[40];

struct window {                         /* a font */
    char far *buf;
    int pad[2];
    int w, h, base;
};

unsigned char d_60ae_9628[16] = { 0, 15, 12, 10, 9, 11, 14, 13, 7, 6, 1, 5, 3, 4, 8, 2 };  /* EGA colours (unused: VGA only) */
struct window d_60ae_9638 = { d_60ae_974e, { 0, 0 }, 5, 5, 1 };
struct window d_60ae_9646 = { d_60ae_9d4e, { 0, 0 }, 7, 7, -1 };
struct window d_60ae_9654 = { d_60ae_a54e, { 0, 0 }, 7, 14, 0 };
char d_60ae_9662 = 1;
int d_60ae_9663 = 0;                    /* mouse x */
int d_60ae_9665 = 0;                    /* mouse y */
int d_60ae_9667 = 0;
int d_60ae_9669 = 0;                    /* clicks since last asked */
unsigned long d_60ae_966b = 1;          /* random seed */
long d_60ae_966f = 0;                   /* ticks added after midnight */
long d_60ae_9673 = 0;                   /* last time returned */
int d_60ae_9677 = 0;                    /* virtual memory blocks allocated */
unsigned long d_60ae_9679 = 0;          /* bytes of the work buffer in use */

/* Take the top bit of each of four plane bytes into one pixel value. */
char f_1bd3_000d(char far *p0, char far *p1, char far *p2, char far *p3)
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
void f_1bd3_005e(char far *src)
{
    char far *s;
    char far *d;
    char p0, p1, p2, p3;
    unsigned i, j;

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

char far *f_1bd3_0157(char c)
{
    char far *p;

    p = f_1bd3_0efb();
    p[0] = c;
    p[1] = 0;
    return p;
}

/* 0: no EGA, 1: EGA (mode 0Dh set), 2: VGA (mode 13h set). */
int f_1bd3_0180(void)
{
    volatile int r = 0;     /* kept in memory: the BIOS calls clobber registers */

    _AH = 0x12;
    _BL = 0x10;
    asm int 10h;
    if (_BL != 0x10) {
        _AH = 0x0f;
        asm int 10h;
        d_60ae_fdb7 = _AL;
        r = 1;
        _AX = 0x1a00;
        asm int 10h;
        if (_AL != 0x1a) {
            _AX = 0x0d;
            asm int 10h;
        } else {
            r = 2;
            _AX = 0x13;
            asm int 10h;
        }
    }
    return r;
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
    d_60ae_fdc8 = f_1bd3_13df(64000L);
    d_60ae_fdd8 = f_1bd3_13df(5000L);
    d_60ae_fdec = f_1bd3_13df(7440L);
    d_60ae_fdea = f_1bd3_13df(2600L);
    d_60ae_fddc = f_1bd3_13df(18600L);
    d_60ae_fdd6 = f_1bd3_13df(8282L);
    d_60ae_fdd4 = f_1bd3_13df(6400L);
    d_60ae_fdee = f_1bd3_13df(3720L);
    d_60ae_fdd2 = f_1bd3_13df(604L);
    d_60ae_fdd0 = f_1bd3_13df(604L);
    d_60ae_fdce = f_1bd3_13df(604L);
    d_60ae_fde0 = f_1bd3_13df(1000L);
    d_60ae_fdde = f_1bd3_13df(2240L);
    d_60ae_fde4 = f_1bd3_13df(3900L);
    d_60ae_fde2 = f_1bd3_13df(10240L);
    d_60ae_fde8 = f_1bd3_13df(1300L);
    d_60ae_fdda = f_1bd3_13df(5120L);
    d_60ae_fde6 = f_1bd3_13df(18600L);
}

/* Blacks the screen out: an all-black palette, then the picture with its own palette. */
void f_1bd3_034d(void)
{
    char pal[48];

    memset(pal, 0, 48);
    f_1bd3_0b10(1);
    if (d_60ae_d901) {
        asm push ss
        asm pop es
        asm lea dx, pal
        asm mov bx, 0
        asm mov cx, 16
        asm mov ax, 1012h
        asm int 10h
    }
    f_1bd3_07e6();
    if (d_60ae_d901) {
        f_1bd3_067c();
        d_60ae_d901 = 0;
    }
}

void f_1bd3_03a2(void)
{
}

void f_1bd3_03a7(int i, char r, char g, char b)
{
    r <<= 2;
    g <<= 2;
    b <<= 2;
    _AX = 0x1010;
    _BX = i;
    _DH = r;
    _CH = g;
    _CL = b;
    geninterrupt(0x10);
}

/* The sound driver ('A' AdLib, 'R' Roland MT-32), the virtual memory, the screen. */
void f_1bd3_03cf(char c)
{
    int h;

    c = toupper(c);
    if (c == 'A' || c == 'R') {
        d_60ae_fdc0 = malloc(6100);
        d_60ae_fdc4 = MK_FP(FP_SEG(d_60ae_fdc0) + 1, 0);
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
    d_60ae_fd4a = MK_FP(0xa000, 0);
}

/* The Domark and title pictures, until a key or click. */
void f_1bd3_0476(void)
{
    int h;

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
    int h;

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
    char far *p;
    int grey;

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
    asm push ss
    asm pop es
    asm lea dx, pal
    asm mov bx, 0
    asm mov cx, 16
    asm mov ax, 1012h
    asm int 10h
}

/* The screen buffer to the screen. */
void f_1bd3_07e6(void)
{
    d_60ae_fdca = f_1bd3_1617(d_60ae_fdc8, 0);
    f_1bd3_19b1();
    asm push ds
    asm push di
    asm push si
    asm les di, d_60ae_fd4a
    asm lds si, d_60ae_fdca
    asm mov cx, 0fa00h
    asm rep movsw
    asm pop si
    asm pop di
    asm pop ds
    f_1bd3_18f1();
}

void f_1bd3_0821(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    char far *s;
    char far *d;
    unsigned skip;
    unsigned off;
    unsigned t;

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
    asm push ds
    asm push es
    asm push si
    asm push di
    asm mov bx, y2
    asm inc bx
    asm sub bx, y1
    asm mov dx, x2
    asm inc dx
    asm sub dx, x1
    asm les di, d
    asm lds si, s
line:
    asm mov cx, dx
    asm rep movsb
    asm add si, skip
    asm add di, skip
    asm dec bx
    asm jnz line
    asm pop di
    asm pop si
    asm pop es
    asm pop ds
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

void f_1bd3_08e1(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    unsigned t;

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

void f_1bd3_0928(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    unsigned t;

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

void f_1bd3_099d(int f)
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

void f_1bd3_09e9(int x, int y, char far *s)
{
    f_1bd3_19b1();
    f_1bd3_0a12(d_60ae_fb10, x, y, s);
    f_1bd3_18f1();
}

void f_1bd3_0a12(int colour, int x, int y, char far *s)
{
    y -= d_60ae_fd46->h + d_60ae_fd46->base;
    while (*s) {
        f_1bd3_0a5c(colour, x, y, *s++);
        x += d_60ae_fd46->w + 1;
    }
}

void f_1bd3_0a5c(int colour, int x, int y, char c)
{
    char far *d;
    char far *g;
    unsigned skip;
    char bits;
    unsigned i, j;

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
unsigned f_1bd3_0b1b(char far *s, char far *set)
{
    char far *p;
    unsigned k;

    p = strstr(s, set);
    if (p != NULL) {
        k = p - s + 1;
        if (strlen(s) >= k)
            return k;
    }
    return 0;
}

/* 1-based position of the last occurrence of set in s, 0 if not found. */
unsigned f_1bd3_0b69(char far *s, char far *set)
{
    char far *p;
    char far *q;
    unsigned t;
    unsigned k;

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

int f_1bd3_0c06(void)
{
    return d_60ae_9665;
}

int f_1bd3_0c0e(void)
{
    return d_60ae_9663;
}

int f_1bd3_0c16(void)
{
    int n;

    f_1bd3_19df();
    n = d_60ae_9669;
    d_60ae_9669 = 0;
    return n;
}

void f_1bd3_0c31(int a)
{
}

void f_1bd3_0c36(void)
{
    do
        f_1bd3_19df();
    while (d_60ae_9669 != 0);
}

/* Read a "quoted" field, then skip to the end of the line. */
void f_1bd3_0c47(FILE *fp, char far *dst)
{
    int c;

    fgetc(fp);
    while ((c = fgetc(fp)) != '"')
        *dst++ = c;
    *dst = 0;
    while (fgetc(fp) != '\n')
        ;
}

void f_1bd3_0c9a(FILE *fp, char far *buf)
{
    fgets(buf, 160, fp);
    buf[strlen(buf) - 1] = 0;
}

void f_1bd3_0cce(FILE *fp, char far *s)
{
    fprintf(fp, "%s\n", s);
}

char far *f_1bd3_0cec(void)
{
    char far *p;
    int c;

    p = f_1bd3_0efb();
    c = 0;
    if (kbhit())
        c = getch();
    p[0] = c;
    p[1] = 0;
    return p;
}

unsigned long f_1bd3_0d2b(void)
{
    d_60ae_966b = d_60ae_966b * 1103515245L + 12345;
    return (d_60ae_966b >> 16) & 0x7fff;
}

void f_1bd3_0d58(void)
{
    d_60ae_966b = f_1bd3_0df6();
}

/* A random number below n (two draws make 30 bits). */
unsigned long f_1bd3_0d69(unsigned long n)
{
    if (n)
        return ((f_1bd3_0d2b() << 16) + f_1bd3_0d2b()) % n;
    return 0;
}

int f_1bd3_0d9b(char far *path)
{
    if (access(path, 0))
        return 0;
    return -1;
}

void f_1bd3_0dbc(int ticks)
{
    long t;

    t = f_1bd3_0df6();
    while (f_1bd3_0df6() < t + ticks * 4)
        ;
}

/* Clock ticks, x 11, not going back at midnight. */
long f_1bd3_0df6(void)
{
    long t;

    _bios_timeofday(0, &t);
    if (t + d_60ae_966f < d_60ae_9673)
        d_60ae_966f += 300000L;
    d_60ae_9673 = t + d_60ae_966f;
    return d_60ae_9673 * 11;
}

/* s in capitals, accented letters too, in a new string. */
char far *f_1bd3_0e5e(char far *s)
{
    char far *p;
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
char far *f_1bd3_0efb(void)
{
    char far *p = d_2289_00c8[d_60ae_d984++];

    if (d_60ae_d984 > 5)
        d_60ae_d984 = 0;
    return p;
}

/* The last n characters of s. */
char far *f_1bd3_0f30(char far *s, unsigned n)
{
    char far *p;
    unsigned l;

    p = f_1bd3_0efb();
    l = strlen(s);
    if (n <= l)
        strcpy(p, s + (l - n));
    else
        strcpy(p, s);
    return p;
}

/* n characters of s from position i (1-based). */
char far *f_1bd3_0f83(char far *s, unsigned i, unsigned n)
{
    unsigned l;
    char far *p;

    p = f_1bd3_0efb();
    l = strlen(s);
    if (i > l)
        *p = 0;
    else
        sprintf(p, "%.*s", n, s + (i - 1));
    return p;
}

void f_1bd3_0fe2(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    f_1bd3_19b1();
    f_1d79_0006(x1, y1, x2, y2, d_60ae_fb10);
    f_1bd3_18f1();
}

/* s without leading and trailing spaces. */
char far *f_1bd3_100b(char far *s)
{
    char far *p;
    int i;

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

void f_1bd3_10a3(int x, int y)
{
    char far *s;
    char far *d;
    unsigned j, i;

    s = d_60ae_fd4a + y * 320 + x;
    d = d_60ae_fd4e;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++)
            *d++ = *s++;
        s += 312;
    }
}

void f_1bd3_10f7(int x, int y)
{
    char far *s;
    char far *d;
    unsigned j, i;

    d = d_60ae_fd4a + y * 320 + x;
    s = d_60ae_fd4e;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++)
            *d++ = *s++;
        d += 312;
    }
}

/* Move the rectangle up by dy rows and fill the rows it leaves with colour. */
void f_1bd3_114b(unsigned x, int y, unsigned x2, unsigned y2, int dy, int colour)
{
    char far *p;
    char far *q;
    char far *a;
    char far *b;
    unsigned j;
    int i;

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
    if (d_60ae_9616)
        f_1e19_01a8(d_60ae_fdb2);
    else
        remove("VM.$$$");
    _AH = 0;
    _AL = d_60ae_fdb7;
    geninterrupt(0x10);
    if (d_60ae_9615)
        f_1df8_0052();
    if (d_60ae_fb04 == 0)
        f_1dfe_0044();
}

void f_1bd3_1258(void)
{
    int h;

    if (d_60ae_9615) {
        d_60ae_fdb8 = malloc(11000);
        d_60ae_fdbc = MK_FP(FP_SEG(d_60ae_fdb8) + 1, 0);
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

int f_1bd3_1307(int a, int b)
{
    return a > b ? a : b;
}

long f_1bd3_131c(long a, long b)
{
    return a > b ? a : b;
}

float f_1bd3_1341(float a, float b)
{
    return a < b ? a : b;
}

int f_1bd3_1369(int a, int b)
{
    return a < b ? a : b;
}

long f_1bd3_137e(long a, long b)
{
    return a < b ? a : b;
}


void f_1bd3_13a3(char far *a, char far *b, unsigned n)
{
    char c;
    unsigned i;

    for (i = 0; i < n; i++) {
        c = *a;
        *a++ = *b;
        *b++ = c;
    }
}

/* Allocate a virtual memory block of size bytes; returns its handle. */
int f_1bd3_13df(long size)
{
    int h;
    int i;

    if (d_60ae_9677 == 0) {
        if ((d_60ae_fd42 = farcalloc(64124L, 1L)) == NULL) {
            printf("Not enough memory.\n");
            if (d_60ae_9615) {
                printf("Try re-installing the game\n");
                printf("without selecting sound.\n");
            }
            exit(-1);
        }
        if (f_1e19_000e() == 0) {
            d_60ae_fdb2 = f_1e19_0169(250000L);
            if (d_60ae_d119 == 0)
                d_60ae_9616 = -1;
        }
        if (d_60ae_9616 == 0) {
            h = open("VM.$$$", O_CREAT | O_TRUNC | O_WRONLY, S_IREAD | S_IWRITE);
            write(h, d_60ae_fd42, 1);
            close(h);
        }
        for (i = 0; i < 40; i++) {
            d_60ae_fc52[i].block = -1;
            d_60ae_fb12[i].size = 0;
        }
    }
    d_60ae_fb12[d_60ae_9677].size = size;
    if (d_60ae_9616) {
        d_60ae_fb12[d_60ae_9677].off = d_60ae_9677 == 0 ? 0 :
            d_60ae_fb12[d_60ae_9677 - 1].off + d_60ae_fb12[d_60ae_9677 - 1].size;
        f_1e19_02e0(d_60ae_fb12[d_60ae_9677].size, d_60ae_fd42, d_60ae_fdb2, d_60ae_fb12[d_60ae_9677].off);
    } else {
        d_60ae_fb12[d_60ae_9677].off = d_60ae_9677 == 0 ? 0 :
            d_60ae_fb12[d_60ae_9677 - 1].off + d_60ae_fb12[d_60ae_9677 - 1].size;
        h = open("VM.$$$", O_RDWR);
        lseek(h, d_60ae_fb12[d_60ae_9677].off, 0);
        write(h, d_60ae_fd42, size);
        close(h);
    }
    return d_60ae_9677++;
}

/* Map a virtual memory block into the work buffer (dirty: it will be changed). */
void far *f_1bd3_1617(int handle, int dirty)
{
    char far *p;
    int i;
    int fd;

    for (i = 0; i < 40; i++)
        if (d_60ae_fc52[i].block == handle) {
            if (dirty == 1)
                d_60ae_fc52[i].dirty = dirty;
            return d_60ae_fc52[i].p;
        }
    if (d_60ae_9616 == 0)
        fd = open("VM.$$$", O_RDWR);
    if (d_60ae_9679 + d_60ae_fb12[handle].size > 64124L) {
        for (i = 0; i < 40; i++)
            if (d_60ae_fc52[i].block >= 0) {
                if (d_60ae_fc52[i].dirty == 1) {
                    if (d_60ae_9616 == 0) {
                        lseek(fd, d_60ae_fb12[d_60ae_fc52[i].block].off, 0);
                        write(fd, d_60ae_fc52[i].p, d_60ae_fb12[d_60ae_fc52[i].block].size);
                    } else
                        f_1e19_02e0(d_60ae_fb12[d_60ae_fc52[i].block].size, d_60ae_fc52[i].p, d_60ae_fdb2,
                                    d_60ae_fb12[d_60ae_fc52[i].block].off);
                }
                d_60ae_fc52[i].block = -1;
            }
        d_60ae_9679 = 0;
    }
    for (i = 0; i < 40; i++)
        if (d_60ae_fc52[i].block == -1)
            break;
    p = d_60ae_fd42 + d_60ae_9679;
    if (d_60ae_9616 == 0) {
        lseek(fd, d_60ae_fb12[handle].off, 0);
        read(fd, p, d_60ae_fb12[handle].size);
        close(fd);
    } else
        f_1e19_0440(d_60ae_fb12[handle].size, d_60ae_fdb2, d_60ae_fb12[handle].off, p);
    d_60ae_fc52[i].block = handle;
    d_60ae_fc52[i].dirty = dirty;
    d_60ae_fc52[i].p = p;
    d_60ae_9679 = d_60ae_9679 + d_60ae_fb12[handle].size;
    return p;
}

void f_1bd3_18c4(void)
{
    asm mov ax, 0                           /* not xor: the flags are not changed */
    geninterrupt(0x33);
    d_60ae_fb04 = _AX;
    _CX = 900;                              /* the pointer to (900, 100), read back: */
    _DX = 100;                              /* drivers that count x in 0-639 */
    _AX = 4;
    geninterrupt(0x33);
    _AX = 3;
    geninterrupt(0x33);
    if ((int)_CX >= 400)
        d_60ae_9613 = 1;
    d_60ae_9612 = 1;
}

/* Show the mouse pointer (drawn by hand without a mouse driver). */
void f_1bd3_18f1(void)
{
    int font;
    char colour;
    char mode;

    if (d_60ae_fb04) {
        _AX = 1;
        geninterrupt(0x33);
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
        _AX = 2;
        geninterrupt(0x33);
    } else if (d_60ae_9667) {
        f_1bd3_10f7(d_60ae_fb08, d_60ae_fb06);
        d_60ae_9667 = 0;
    }
}

void f_1bd3_19df(void)
{
    if (d_60ae_fb04) {
        _AX = 3;
        geninterrupt(0x33);
        d_60ae_9669 = _BX;
        d_60ae_9663 = _CX;
        d_60ae_9665 = _DX;
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
