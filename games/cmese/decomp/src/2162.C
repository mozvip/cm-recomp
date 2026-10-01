/* @at 2162:000b */
/* @data 69da:92b3 */
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
void unmapped_f_1b05_0002(char far *src, char far *dst);
void unmapped_f_1b05_014e(char far *buf, unsigned size);
void unmapped_f_992a_6da2(void);
void f_2162_1899(void);
void f_238c_0002(void);
void f_2385_0014(void);
void f_2162_129d(void);
void f_2162_07bc(int noflip);
void f_2162_18ca(void);
void unmapped_f_a1c3_3505(int a);
void f_2162_197b(void);
void unmapped_f_1b05_0308(void);
void unmapped_f_1ab9_0322(unsigned x1, unsigned y1, unsigned x2, unsigned y2, char far *buf, unsigned seg);
void unmapped_f_1ab9_03ad(unsigned x, unsigned y, char far *buf, unsigned seg);
void f_2162_1021(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_2162_0a0f(int colour, int x, int y, char far *s);
void f_2162_0a59(int colour, int x, int y, char c);
void unmapped_f_1ab9_0271(char far *glyph, int x, int y, int colour, int fill, int mode, int rows);
void f_2162_19ae(void);
void f_2162_0c51(int a);
long f_2162_0e32(void);
void unmapped_f_1ab9_0004(unsigned x1, unsigned y1, unsigned x2, unsigned y2, int colour);
void unmapped_f_1ab9_00ec(unsigned x1, unsigned y1, unsigned x2, unsigned y2, int colour);
void unmapped_f_a1c3_27e4(char far *title);
void unmapped_f_1680_2ea0(float x, float y, int bg, int fg, int w, char far *s);
void unmapped_f_1680_2d78(float x, float y, int colour, char far *s);
void unmapped_f_a1c3_290e(float x, int w, char far *prompt);
void unmapped_f_14d2_12ea(void);
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
extern int d_69da_e00a, d_69da_dffa, d_69da_dfe6, d_69da_dfe8, d_69da_dff6, d_69da_dffc;
extern int d_69da_dffe, d_69da_dfe4, d_69da_e000, d_69da_e002, d_69da_e004, d_69da_dff2;
extern int d_69da_dff4, d_69da_dfee, d_69da_dff0, d_69da_dfea, d_69da_dff8, d_69da_dfec;
extern int unmapped_d_5d9c_a34a, unmapped_d_5d9c_a348, unmapped_d_5d9c_a34e, unmapped_d_5d9c_a338, unmapped_d_5d9c_a334, d_69da_e012;
extern int unmapped_d_5d9c_a330, unmapped_d_5d9c_a344, unmapped_d_5d9c_a336;
extern int d_69da_dc9c, d_69da_dc9e;
extern char d_69da_943e[], d_69da_967e[], unmapped_d_5d9c_23d0[];  /* fonts: another module's data */
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
extern char far d_536d_0000[6][320];    /* text buffers */
extern char d_69da_e022[64];            /* 8x8 block under the mouse pointer */
extern float d_69da_dd1c;
extern long d_69da_0254[];              /* protection answers */
extern char far d_536d_4fcc[];          /* text typed in */
extern int d_69da_92a0;                 /* virtual memory in EMS/extended memory */
extern int d_69da_e020;
extern char far *d_69da_e018;           /* music memory */
extern char far *d_69da_e014;           /* the music, paragraph aligned */
extern char huge *d_69da_e08e;          /* virtual memory work buffer (64124 bytes) */
extern char d_69da_cde3;                /* EMS library error */
extern char d_69da_929d;                /* mouse initialised */
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
    int pad[4];
    int w, h, base;
};

unsigned char d_69da_92b3[15] = { 15, 12, 10, 9, 11, 14, 13, 7, 6, 1, 5, 3, 4, 8, 2 };  /* EGA colours of 17..31 */
struct window d_69da_92c2 = { d_69da_943e, { 0, 0, 0, 0 }, 5, 5, 1 };
struct window d_69da_92d0 = { d_69da_967e, { 0, 0, 0, 0 }, 7, 7, 0 };
struct window d_69da_92de = { unmapped_d_5d9c_23d0, { 0, 0, 0, 0 }, 7, 14, 0 };
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
    char p0, p1, p2, p3;
    unsigned i, j;

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
    int h;

    if (!(d_69da_e01d = f_2162_0188())) {
        printf("Requires EGA or VGA\n");
        exit(1);
    }
    d_69da_92c2.buf = d_69da_943e;
    d_69da_92d0.buf = d_69da_967e;
    d_69da_92de.buf = unmapped_d_5d9c_23d0;
    d_69da_e00a = f_2162_1436(d_69da_e01d == 1 ? 32000L : 64000L);
    d_69da_dffa = f_2162_1436(3402L);
    d_69da_dfe6 = f_2162_1436(6804L);
    d_69da_dfe8 = f_2162_1436(2600L);
    d_69da_dff6 = f_2162_1436(6000L);
    d_69da_dffc = f_2162_1436(10240L);
    d_69da_dffe = f_2162_1436(2800L);
    d_69da_dfe4 = f_2162_1436(1000L);
    d_69da_e000 = f_2162_1436(1020L);
    d_69da_e002 = f_2162_1436(768L);
    d_69da_e004 = f_2162_1436(320L);
    d_69da_dff2 = f_2162_1436(400L);
    d_69da_dff4 = f_2162_1436(3200L);
    d_69da_dfee = f_2162_1436(24000L);
    d_69da_dff0 = f_2162_1436(64124L);
    d_69da_dfea = f_2162_1436(4000L);
    d_69da_dff8 = f_2162_1436(1200L);
    d_69da_dfec = f_2162_1436(400L);
    unmapped_d_5d9c_a34a = f_2162_1436(2240L);
    unmapped_d_5d9c_a348 = f_2162_1436(560L);
    unmapped_d_5d9c_a34e = f_2162_1436(3200L);
    unmapped_d_5d9c_a338 = f_2162_1436(1600L);
    unmapped_d_5d9c_a334 = f_2162_1436(604L);
    d_69da_e012 = f_2162_1436(604L);
    unmapped_d_5d9c_a330 = f_2162_1436(604L);
    unmapped_d_5d9c_a344 = f_2162_1436(440L);
    unmapped_d_5d9c_a336 = f_2162_1436(40L);
    d_69da_e006 = f_2162_1634(d_69da_e00a, 1);
    if (d_69da_e01d == 2) {
        h = open("title.lbm", O_RDONLY);
        read(h, d_69da_e006 + 0x7d00, 32000);
        close(h);
        unmapped_f_1b05_0002(d_69da_e006 + 0x7d00, d_69da_e006);
        f_2162_005a(d_69da_e006);
        d_69da_dc9c = 4;
        d_69da_dc9e = 5;
        unmapped_f_992a_6da2();
    } else {
        h = open("titleega.lbm", O_RDONLY);
        read(h, d_69da_e006, 32000);
        close(h);
        unmapped_f_1b05_014e(d_69da_e006, 0xa400);
    }
}

void f_2162_0346(int i, char r, char g, char b)
{
    if (d_69da_e01d == 2) {
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
}

void f_2162_03c6(char c)
{
    int h;

    f_2162_1899();
    if (d_69da_e2ce == 0)
        f_238c_0002();
    c = toupper(c);
    if (c == 'A' || c == 'R') {
        d_69da_e010 = malloc(6000);
        d_69da_e00c = MK_FP(FP_SEG(d_69da_e010) + 1, 0);
        d_69da_929f = c;
        if (c == 'A')
            h = open("ADLIB.DRV", O_RDONLY);
        else
            h = open("MT32.DRV", O_RDONLY);
        read(h, d_69da_e00c, 6000);
        close(h);
        f_2385_0014();
    }
    f_2162_129d();
    _OvrInitEms(0, 0, 0);
    d_69da_e086 = MK_FP(0xa000, 0);
}

void f_2162_0470(void)
{
    f_2162_07bc(0);
    f_2162_18ca();
    unmapped_f_a1c3_3505(1);
    f_2162_07bc(0);
}

void f_2162_07bc(int noflip)
{
    if (d_69da_e01d == 2) {
        d_69da_e006 = f_2162_1634(d_69da_e00a, 0);
        if (noflip == 0) {
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
    } else if (noflip == 0) {
        f_2162_197b();
        unmapped_f_1b05_0308();
        f_2162_18ca();
    }
}

void f_2162_07f7(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    char far *s;
    char far *d;
    unsigned skip;
    unsigned off;
    unsigned t;

    f_2162_197b();
    if (d_69da_e01d == 2) {
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
    } else {
        if (y1 > y2) {
            t = y1;
            y1 = y2;
            y2 = t;
        }
        d_69da_e006 = f_2162_1634(d_69da_e00a, 0);
        unmapped_f_1ab9_0322(x1, y1, x2, y2, d_69da_e006, 0xa400);
        unmapped_f_1ab9_03ad(x1, y1, d_69da_e006, 0xa000);
    }
    f_2162_18ca();
}

void unmapped_f_14d2_0722(int c)
{
    d_69da_e2c2 = d_69da_e01d == 2 ? c : d_69da_92b3[c - 17];
}

void f_2162_08a6(int c)
{
    d_69da_e2c3 = d_69da_e01d == 2 ? c : d_69da_92b3[c - 17];
}

void f_2162_090f(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    unsigned t;

    if (y1 > y2) {
        t = y1;
        y1 = y2;
        y2 = t;
    }
    t = d_69da_e2c3;
    d_69da_e2c3 = d_69da_e2c2;
    f_2162_197b();
    for (; y1 <= y2; y1++)
        f_2162_1021(x1, y1, x2, y1);
    f_2162_18ca();
    d_69da_e2c3 = t;
}

void unmapped_f_14d2_07af(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
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

void unmapped_f_14d2_0819(void)
{
    d_69da_db74 = -1;
}

void unmapped_f_14d2_0824(int f)
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

    g = d_69da_e08a->buf + (c - 32) * (d_69da_e08a->h + 1);
    if (d_69da_e01d == 2) {
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
    } else
        unmapped_f_1ab9_0271(g, x, y, colour, d_69da_e2c2, d_69da_929e, d_69da_e08a->h + 1);
}

void f_2162_0b1b(char mode)
{
    d_69da_929e = mode;
}

/* 1-based position of set in s, 0 if not found. */
unsigned unmapped_f_14d2_09ce(char far *s, char far *set)
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

int f_2162_0c13(void)
{
    return d_69da_92ef;
}

int unmapped_f_14d2_0ac1(void)
{
    return d_69da_92ed;
}

int f_2162_0c1f(void)
{
    int n;

    f_2162_19ae();
    n = d_69da_92f3;
    d_69da_92f3 = 0;
    if (n)
        f_2162_0c51(3);
    return n;
}

void f_2162_0c2b(void)
{
}

void f_2162_0c51(int a)
{
}

void unmapped_f_14d2_0af9(void)
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

int f_2162_0d5b(void)
{
    d_69da_92f5 = d_69da_92f5 * 1103515245L + 12345;
    return (d_69da_92f5 >> 16) & 0x7fff;
}

void f_2162_0d8c(void)
{
    d_69da_92f5 = f_2162_0e32();
}

int f_2162_0da1(int n)
{
    if (n)
        return f_2162_0d5b() % n;
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

char far *f_2162_0e9b(char far *s)
{
    char far *p;

    p = f_2162_0f38();
    strcpy(p, s);
    strupr(p);
    return p;
}

/* The next of six text buffers. */
char far *f_2162_0f38(void)
{
    char far *p = d_536d_0000[d_69da_ddaf++];

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
    if (d_69da_e01d == 2)
        unmapped_f_1ab9_0004(x1, y1, x2, y2, d_69da_e2c3);
    else
        unmapped_f_1ab9_00ec(x1, y1, x2, y2, d_69da_e2c3);
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
    char c;
    unsigned j;

    f_2162_197b();
    if (d_69da_e01d == 2) {
        p = d_69da_e086 + y * 320 + x;
        q = p - dy * 320;
        for (; y <= y2; y++) {
            a = p;
            b = q;
            for (j = x; j <= x2; j++)
                *b++ = *a++;
            p += 320;
            q += 320;
        }
        for (y = 0; y < dy; y++) {
            b = q;
            for (j = x; j <= x2; j++)
                *b++ = colour;
            p += 320;
            q += 320;
        }
    } else {
        c = d_69da_e2c3;
        d_69da_e006 = f_2162_1634(d_69da_e00a, 0);
        unmapped_f_1ab9_0322(x, y, x2, y2, d_69da_e006, 0xa000);
        unmapped_f_1ab9_03ad(x, y - dy, d_69da_e006, 0xa000);
        d_69da_e2c3 = d_69da_92b3[colour - 17];
        for (y = y2 - dy + 1; y <= y2; y++)
            f_2162_1021(x, y, x2, y);
        d_69da_e2c3 = c;
    }
    f_2162_18ca();
}

void f_2162_1256(void)
{
    long t;
    unsigned q;
    unsigned page;
    char buf[160];
    register unsigned n;

    _SI = 0;                                /* tries: never counted since the patch */
    unmapped_f_a1c3_27e4("PROTECTION SCREEN");
    n = f_2162_0da1(180);
    q = n % 45;
    page = n / 45;
    d_69da_dd1c = 11.0;
    unmapped_f_14d2_0722(16);
    f_2162_090f(d_69da_dd1c * 8.0 + 6.0, 40, (d_69da_dd1c + 16.0) * 8.0 + 19.0, 54);
    unmapped_f_1680_2ea0(d_69da_dd1c, -5.0, 1, 4, 0, " REFER TO BOX LID ");
    sprintf(buf, "What was the league attendance in");
    unmapped_f_1680_2d78(5.0, 10.0, 6, buf);
    sprintf(buf, "division %d in %d/%d season.", page + 1, q + 46, q + 47);
    unmapped_f_1680_2d78(8.0, 13.0, 6, buf);
    f_2162_08a6(17);
    unmapped_f_14d2_0824(0);
    f_2162_09e2(273, 199, "V 1.02");
    unmapped_f_a1c3_290e(2.0, 10, "Input");
    t = atol(d_536d_4fcc);
    /* The comparison with the answer, d_69da_0254[n], is patched out in this copy of
       the game (a crack: the jump and what followed are NOPs, and the tries in SI are
       never counted). No C gives these bytes; they are reproduced as they are. */
    asm db 8Bh, 0DFh                    /* mov bx, di (n): the compiler's encoding */
    asm mov cl, 2
    asm shl bx, cl
    asm mov ax, word ptr d_69da_0254[bx+2]
    asm mov dx, word ptr d_69da_0254[bx]
    asm cmp ax, word ptr t+2
    asm jne patched
    asm cmp dx, word ptr t
    asm nop
    asm nop
patched:
    asm nop
    asm nop
    asm nop
    asm nop
    asm nop
    asm nop
    asm nop
    asm nop
    asm nop
    if (_SI == 3) {
        unmapped_f_14d2_12ea();
        exit(0);
    }
}

void unmapped_f_14d2_12ea(void)
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
        d_69da_e018 = malloc(d_69da_929f == 'A' ? 9100 : 22232);
        d_69da_e014 = MK_FP(FP_SEG(d_69da_e018) + 1, 0);
        if (d_69da_929f == 'A')
            h = open("CMAN2.ALB", O_RDONLY);
        else
            h = open("CMANRLD.RLD", O_RDONLY);
        read(h, d_69da_e014, 25000);
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

int unmapped_f_14d2_1487(void)
{
    return 1;
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

    if (d_69da_9301 == 0) {
        if ((d_69da_e08e = farcalloc(64124L, 1L)) == NULL) {
            printf("No room for virtual memory\n");
            exit(-1);
        }
        if (f_23a7_0006() == 0) {
            d_69da_e020 = f_23a7_0161(300000L);
            if (d_69da_cde3 == 0)
                d_69da_92a0 = -1;
        }
        if (d_69da_92a0 == 0) {
            h = open("VM.$$$", O_CREAT | O_TRUNC | O_WRONLY, S_IREAD | S_IWRITE);
            write(h, d_69da_e08e, 1);
            close(h);
        }
        for (h = 0; h < 40; h++) {
            d_69da_e092[h].block = -1;
            d_69da_e182[h].size = 0;
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
    char far *p;
    int i;
    int fd;

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
    d_69da_929d = 1;
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
    } else if (d_69da_92f1 == 0 && d_69da_929d) {
        font = d_69da_db74;
        colour = d_69da_e2c3;
        mode = d_69da_929e;
        d_69da_e2ca = d_69da_92ed;
        d_69da_e2cc = d_69da_92ef;
        if (d_69da_e01d == 1)
            unmapped_f_1ab9_0322(d_69da_e2ca, d_69da_e2cc, d_69da_e2ca + 8, d_69da_e2cc + 8, d_69da_e022, 0xa000);
        else
            f_2162_10ec(d_69da_e2ca, d_69da_e2cc);
        unmapped_f_14d2_0824(1);
        d_69da_929e = 0;
        f_2162_08a6(17);
        f_2162_0a59(d_69da_e2c3, d_69da_e2ca, d_69da_e2cc, 0x7e);
        f_2162_08a6(16);
        f_2162_0a59(d_69da_e2c3, d_69da_e2ca, d_69da_e2cc, 0x7f);
        d_69da_929e = mode;
        d_69da_e2c3 = colour;
        unmapped_f_14d2_0824(font);
        d_69da_92f1 = 1;
    }
}

void f_2162_197b(void)
{
    if (d_69da_e2ce) {
        _AX = 2;
        geninterrupt(0x33);
    } else if (d_69da_92f1) {
        if (d_69da_e01d == 1)
            unmapped_f_1ab9_03ad(d_69da_e2ca, d_69da_e2cc, d_69da_e022, 0xa000);
        else
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
        d_69da_92ed >>= 1;
    } else if (d_69da_e2ca != d_69da_92ed || d_69da_e2cc != d_69da_92ef) {
        f_2162_197b();
        f_2162_18ca();
    }
}
