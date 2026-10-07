/* @at 2162:000b */
/* @data 69da:92b2 */
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

char far *f_2162_0f38(void);
int f_2162_1436(long size);                 /* allocate a block (EMS/extended memory) */
void far *f_2162_1634(int handle, int page);
void f_2162_1899(void);
void f_238c_0002(void);
void f_2385_0014(void);
void f_2162_129d(void);
void f_2162_07bc(void);
void f_2162_065d(void);
int f_2162_0c2b(void);
void f_2162_0dfb(int ticks);
void f_2162_0b0c();                     /* no prototype: callers pass an int */
void f_2385_0065(void);
void f_2352_000c(char far *src, char far *dst);   /* LBM picture decoder */
void f_2162_18ca(void);
void f_2162_197b(void);
void f_2162_1021(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_2162_0a0f(int colour, int x, int y, char far *s);
void f_2162_0a59(int colour, int x, int y, char c);
void f_2162_19ae(void);
void f_2162_0c48(int a);
long f_2162_0e32(void);
void f_2306_000e(unsigned x1, unsigned y1, unsigned x2, unsigned y2, int colour);
void f_1a70_4b7d(float x, int w, char far *prompt);
void f_2162_1256(void);
void f_23a7_01a0(int handle);
void f_2385_005a(void);
void f_238c_003c(void);
void f_2385_0027(char far *music);
void f_2385_000c(void);
int f_23a7_0006(void);                                  /* EMS present: 0 */
int f_23a7_0161(long size);                             /* allocate EMS */
void f_23a7_02d8(long size, char far *buf, int handle, long off);   /* write to EMS */
void f_23a7_0438(long size, int handle, long off, char far *buf);   /* read from EMS */

extern char far *d_69da_e006;           /* screen buffer */
extern char d_69da_e01c;                /* video mode at start-up */
extern char d_69da_e01d;                /* 0 none, 1 EGA, 2 VGA */
extern int d_69da_dffa, d_69da_dfe6, d_69da_dfe8, d_69da_dff6;
extern int d_69da_dffc, d_69da_dffe, d_69da_dfe4, d_69da_e000, d_69da_e002, d_69da_e004;
extern int d_69da_dff2, d_69da_dff4, d_69da_dfee, d_69da_dff0, d_69da_dfea, d_69da_dff8;
extern int d_69da_dfec, d_69da_e008;
extern int d_69da_e00a;                 /* virtual memory blocks (f_2162_1436) */
extern char d_69da_de32;                /* the picture's palette is to be set */
extern int d_69da_da48, d_69da_da46;    /* palette brightness, tint */
extern int d_69da_d9d2, d_69da_d9a0, d_69da_dad8, d_69da_db6a;
extern int d_69da_b0de[];               /* the picture's palette, 0RGB */
extern char far d_536d_8229[];          /* the picture shown */
extern char far d_536d_591f[];          /* the picture wanted */
extern char d_69da_93d8[], d_69da_99d8[], d_69da_a1d8[];  /* the fonts (another module's data) */
extern int d_69da_e2ce;
extern char far *d_69da_e010;           /* sound driver memory */
extern char far *d_69da_e00c;           /* the driver, paragraph aligned */
extern char d_69da_929f;                /* sound device letter */
extern char far *d_69da_e086;           /* VGA memory */
extern unsigned char d_69da_e2c3, d_69da_e2c2;     /* drawing and fill colours */
extern int d_69da_db74, d_69da_e01e;
extern struct window far *d_69da_e08a;  /* current font */
extern char d_69da_929e;                /* 1: text drawn with its background */
extern unsigned char d_69da_ddaf;
extern char far d_536d_9ccd[6][320];    /* text buffers */
extern char d_69da_e022[64];            /* 8x8 block under the mouse pointer */
extern int d_69da_92a0;                 /* virtual memory in EMS/extended memory */
extern int d_69da_e020;
extern char far *d_69da_e018;           /* music memory */
extern char far *d_69da_e014;           /* the music, paragraph aligned */
extern char huge *d_69da_e08e;          /* virtual memory work buffer (64124 bytes) */
extern char d_69da_cde3;                /* EMS library error */
extern char d_69da_929c;                /* mouse initialised */
extern char d_69da_929d;                /* the mouse driver counts x in 0-639 */
extern int d_69da_e2ca, d_69da_e2cc;    /* where the pointer is drawn */

struct vmblock {                        /* a virtual memory block */
    long size;
    long off;                           /* in EMS or VM.$$$ */
};
extern struct vmblock d_69da_e182[40];

struct vmslot {                         /* a block in the work buffer */
    signed char block;
    char dirty;
    char far *p;
};
extern struct vmslot d_69da_e092[40];

struct window {                         /* a font */
    char far *buf;
    int pad[2];
    int w, h, base;
};

unsigned char d_69da_92b2[16] = { 0, 15, 12, 10, 9, 11, 14, 13, 7, 6, 1, 5, 3, 4, 8, 2 };  /* EGA colours (unused: VGA only) */
struct window d_69da_92c2 = { d_69da_93d8, { 0, 0 }, 5, 5, 1 };
struct window d_69da_92d0 = { d_69da_99d8, { 0, 0 }, 7, 7, -1 };
struct window d_69da_92de = { d_69da_a1d8, { 0, 0 }, 7, 14, 0 };
char d_69da_92ec = 1;
int d_69da_92ed = 0;                    /* mouse x */
int d_69da_92ef = 0;                    /* mouse y */
int d_69da_92f1 = 0;
int d_69da_92f3 = 0;                    /* clicks since last asked */
unsigned long d_69da_92f5 = 1;          /* random seed */
long d_69da_92f9 = 0;                   /* ticks added after midnight */
long d_69da_92fd = 0;                   /* last time returned */
int d_69da_9301 = 0;                    /* virtual memory blocks allocated */
unsigned long d_69da_9303 = 0;          /* bytes of the work buffer in use */

/* Take the top bit of each of four plane bytes into one pixel value. */
char f_2162_000b(char far *p0, char far *p1, char far *p2, char far *p3)
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
void f_2162_005a(char far *src)
{
    char far *s;
    char far *d;
    unsigned i, j;
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

char far *f_2162_0160(char c)
{
    char far *p;

    p = f_2162_0f38();
    p[0] = c;
    p[1] = 0;
    return p;
}

/* 0: no EGA, 1: EGA (mode 0Dh set), 2: VGA (mode 13h set). */
int f_2162_0188(void)
{
    volatile int r = 0;     /* kept in memory: the BIOS calls clobber registers */

    _AH = 0x12;
    _BL = 0x10;
    asm int 10h;
    if (_BL != 0x10) {
        _AH = 0x0f;
        asm int 10h;
        d_69da_e01c = _AL;
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
    d_69da_e00a = f_2162_1436(64000L);
    d_69da_dffa = f_2162_1436(5000L);
    d_69da_dfe6 = f_2162_1436(7440L);
    d_69da_dfe8 = f_2162_1436(2600L);
    d_69da_dff6 = f_2162_1436(18600L);
    d_69da_dffc = f_2162_1436(8282L);
    d_69da_dffe = f_2162_1436(6400L);
    d_69da_dfe4 = f_2162_1436(3720L);
    d_69da_e000 = f_2162_1436(604L);
    d_69da_e002 = f_2162_1436(604L);
    d_69da_e004 = f_2162_1436(604L);
    d_69da_dff2 = f_2162_1436(1000L);
    d_69da_dff4 = f_2162_1436(2240L);
    d_69da_dfee = f_2162_1436(3900L);
    d_69da_dff0 = f_2162_1436(10240L);
    d_69da_dfea = f_2162_1436(1300L);
    d_69da_dff8 = f_2162_1436(5120L);
    d_69da_dfec = f_2162_1436(18600L);
}

/* Blacks the screen out: an all-black palette, then the picture with its own palette. */
void f_2162_0346(void)
{
    char pal[48];

    memset(pal, 0, 48);
    f_2162_0b0c(1);
    if (d_69da_de32) {
        asm push ss
        asm pop es
        asm lea dx, pal
        asm mov bx, 0
        asm mov cx, 16
        asm mov ax, 1012h
        asm int 10h
    }
    f_2162_07bc();
    if (d_69da_de32) {
        f_2162_065d();
        d_69da_de32 = 0;
    }
}

void f_2162_0397(void)
{
}

void f_2162_03a0(int i, char r, char g, char b)
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
void f_2162_03c6(char c)
{
    int h;

    c = toupper(c);
    if (c == 'A' || c == 'R') {
        d_69da_e010 = malloc(6100);
        d_69da_e00c = MK_FP(FP_SEG(d_69da_e010) + 1, 0);
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
    d_69da_e086 = MK_FP(0xa000, 0);
}

/* The Domark and title pictures, until a key or click. */
void f_2162_0470(void)
{
    int h;

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
    int h;

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
    int grey;
    char far *p;

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
    asm push ss
    asm pop es
    asm lea dx, pal
    asm mov bx, 0
    asm mov cx, 16
    asm mov ax, 1012h
    asm int 10h
}

/* The screen buffer to the screen. */
void f_2162_07bc(void)
{
    d_69da_e006 = f_2162_1634(d_69da_e00a, 0);
    f_2162_197b();
    asm push ds
    asm push di
    asm push si
    asm les di, d_69da_e086
    asm lds si, d_69da_e006
    asm mov cx, 0fa00h
    asm rep movsw
    asm pop si
    asm pop di
    asm pop ds
    f_2162_18ca();
}

void f_2162_07f7(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    char far *s;
    char far *d;
    unsigned skip;
    unsigned off;
    unsigned t;

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

void f_2162_08b5(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    unsigned t;
    unsigned y;

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

void f_2162_090f(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    unsigned t;

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

void f_2162_0992(int f)
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

void f_2162_09e2(int x, int y, char far *s)
{
    f_2162_197b();
    f_2162_0a0f(d_69da_e2c3, x, y, s);
    f_2162_18ca();
}

void f_2162_0a0f(int colour, int x, int y, char far *s)
{
    y -= d_69da_e08a->h + d_69da_e08a->base;
    while (*s) {
        f_2162_0a59(colour, x, y, *s++);
        x += d_69da_e08a->w + 1;
    }
}

void f_2162_0a59(int colour, int x, int y, char c)
{
    char far *d;
    char far *g;
    unsigned skip;
    char bits;
    unsigned i, j;

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
unsigned f_2162_0b1b(char far *s, char far *set)
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
unsigned f_2162_0b6f(char far *s, char far *set)
{
    char far *p;
    char far *q;
    unsigned k;
    unsigned t;

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

int f_2162_0c13(void)
{
    return d_69da_92ef;
}

int f_2162_0c1f(void)
{
    return d_69da_92ed;
}

int f_2162_0c2b(void)
{
    int n;

    f_2162_19ae();
    n = d_69da_92f3;
    d_69da_92f3 = 0;
    return n;
}

void f_2162_0c48(int a)
{
}

void f_2162_0c51(void)
{
    do
        f_2162_19ae();
    while (d_69da_92f3 != 0);
}

/* Read a "quoted" field, then skip to the end of the line. */
void f_2162_0c66(FILE *fp, char far *dst)
{
    int c;

    fgetc(fp);
    while ((c = fgetc(fp)) != '"')
        *dst++ = c;
    *dst = 0;
    while (fgetc(fp) != '\n')
        ;
}

void f_2162_0cbe(FILE *fp, char far *buf)
{
    fgets(buf, 160, fp);
    buf[strlen(buf) - 1] = 0;
}

void f_2162_0cf9(FILE *fp, char far *s)
{
    fprintf(fp, "%s\n", s);
}

char far *f_2162_0d1a(void)
{
    char far *p;
    int c;

    p = f_2162_0f38();
    c = 0;
    if (kbhit())
        c = getch();
    p[0] = c;
    p[1] = 0;
    return p;
}

unsigned long f_2162_0d5b(void)
{
    d_69da_92f5 = d_69da_92f5 * 1103515245L + 12345;
    return (d_69da_92f5 >> 16) & 0x7fff;
}

void f_2162_0d8c(void)
{
    d_69da_92f5 = f_2162_0e32();
}

/* A random number below n (two draws make 30 bits). */
unsigned long f_2162_0da1(unsigned long n)
{
    if (n)
        return ((f_2162_0d5b() << 16) + f_2162_0d5b()) % n;
    return 0;
}

int f_2162_0dd7(char far *path)
{
    if (access(path, 0))
        return 0;
    return -1;
}

void f_2162_0dfb(int ticks)
{
    long t;

    t = f_2162_0e32();
    while (f_2162_0e32() < t + ticks * 4)
        ;
}

/* Clock ticks, x 11, not going back at midnight. */
long f_2162_0e32(void)
{
    long t;

    _bios_timeofday(0, &t);
    if (t + d_69da_92f9 < d_69da_92fd)
        d_69da_92f9 += 300000L;
    d_69da_92fd = t + d_69da_92f9;
    return d_69da_92fd * 11;
}

/* s in capitals, accented letters too, in a new string. */
char far *f_2162_0e9b(char far *s)
{
    char far *p;
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
char far *f_2162_0f38(void)
{
    char far *p = d_536d_9ccd[d_69da_ddaf++];

    if (d_69da_ddaf > 5)
        d_69da_ddaf = 0;
    return p;
}

/* The last n characters of s. */
char far *f_2162_0f6e(char far *s, unsigned n)
{
    char far *p;
    unsigned l;

    p = f_2162_0f38();
    l = strlen(s);
    if (n <= l)
        strcpy(p, s + (l - n));
    else
        strcpy(p, s);
    return p;
}

/* n characters of s from position i (1-based). */
char far *f_2162_0fc1(char far *s, unsigned i, unsigned n)
{
    unsigned l;
    char far *p;

    p = f_2162_0f38();
    l = strlen(s);
    if (i > l)
        *p = 0;
    else
        sprintf(p, "%.*s", n, s + (i - 1));
    return p;
}

void f_2162_1021(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    f_2162_197b();
    f_2306_000e(x1, y1, x2, y2, d_69da_e2c3);
    f_2162_18ca();
}

/* s without leading and trailing spaces. */
char far *f_2162_104e(char far *s)
{
    char far *p;
    int i;

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

void f_2162_10ec(int x, int y)
{
    char far *s;
    char far *d;
    unsigned j, i;

    s = d_69da_e086 + y * 320 + x;
    d = d_69da_e022;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++)
            *d++ = *s++;
        s += 312;
    }
}

void f_2162_1141(int x, int y)
{
    char far *s;
    char far *d;
    unsigned j, i;

    d = d_69da_e086 + y * 320 + x;
    s = d_69da_e022;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++)
            *d++ = *s++;
        d += 312;
    }
}

/* Move the rectangle up by dy rows and fill the rows it leaves with colour. */
void f_2162_1196(unsigned x, int y, unsigned x2, unsigned y2, int dy, int colour)
{
    char far *p;
    char far *q;
    char far *a;
    char far *b;
    unsigned j;
    int i;

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
    _AH = 0;
    _AL = d_69da_e01c;
    geninterrupt(0x10);
    if (d_69da_929f)
        f_2385_005a();
    if (d_69da_e2ce == 0)
        f_238c_003c();
}

void f_2162_129d(void)
{
    int h;

    if (d_69da_929f) {
        d_69da_e018 = malloc(11000);
        d_69da_e014 = MK_FP(FP_SEG(d_69da_e018) + 1, 0);
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

int f_2162_134e(int a, int b)
{
    return a > b ? a : b;
}

long f_2162_1367(long a, long b)
{
    return a > b ? a : b;
}

float f_2162_1390(float a, float b)
{
    return a < b ? a : b;
}

int f_2162_13ba(int a, int b)
{
    return a < b ? a : b;
}

long f_2162_13d3(long a, long b)
{
    return a < b ? a : b;
}


void f_2162_13fc(char far *a, char far *b, unsigned n)
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
int f_2162_1436(long size)
{
    int h;
    int i;

    if (d_69da_9301 == 0) {
        if ((d_69da_e08e = farcalloc(64124L, 1L)) == NULL) {
            printf("Not enough memory.\n");
            if (d_69da_929f) {
                printf("Try re-installing the game\n");
                printf("without selecting sound.\n");
            }
            exit(-1);
        }
        if (f_23a7_0006() == 0) {
            d_69da_e020 = f_23a7_0161(250000L);
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
void far *f_2162_1634(int handle, int dirty)
{
    int fd;
    int i;
    char far *p;

    for (i = 0; i < 40; i++)
        if (d_69da_e092[i].block == handle) {
            if (dirty == 1)
                d_69da_e092[i].dirty = dirty;
            return d_69da_e092[i].p;
        }
    if (d_69da_92a0 == 0)
        fd = open("VM.$$$", O_RDWR);
    if (d_69da_9303 + d_69da_e182[handle].size > 64124L) {
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
    asm mov ax, 0                           /* not xor: the flags are not changed */
    geninterrupt(0x33);
    d_69da_e2ce = _AX;
    _CX = 900;                              /* the pointer to (900, 100), read back: */
    _DX = 100;                              /* drivers that count x in 0-639 */
    _AX = 4;
    geninterrupt(0x33);
    _AX = 3;
    geninterrupt(0x33);
    if ((int)_CX >= 400)
        d_69da_929d = 1;
    d_69da_929c = 1;
}

/* Show the mouse pointer (drawn by hand without a mouse driver). */
void f_2162_18ca(void)
{
    int font;
    char colour;
    char mode;

    if (d_69da_e2ce) {
        _AX = 1;
        geninterrupt(0x33);
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
        _AX = 2;
        geninterrupt(0x33);
    } else if (d_69da_92f1) {
        f_2162_1141(d_69da_e2ca, d_69da_e2cc);
        d_69da_92f1 = 0;
    }
}

void f_2162_19ae(void)
{
    if (d_69da_e2ce) {
        _AX = 3;
        geninterrupt(0x33);
        d_69da_92f3 = _BX;
        d_69da_92ed = _CX;
        d_69da_92ef = _DX;
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
