/* @at 14d2:0008 */
/* @data 5d9c:1d00 */
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

char far *f_14d2_0d40(void);
int f_14d2_14cb(long size);                 /* allocate a block (EMS/extended memory) */
void far *f_14d2_16bc(int handle, int page);
void f_1b05_0002(char far *src, char far *dst);
void f_1b05_014e(char far *buf, unsigned size);
void f_992a_6da2(void);
void f_14d2_1951(void);
void f_14b7_0004(void);
void f_1ab2_0016(void);
void f_14d2_132d(void);
void f_14d2_05af(int noflip);
void f_14d2_1963(void);
void f_a1c3_3505(int a);
void f_14d2_1a56(void);
void f_1b05_0308(void);
void f_1ab9_0322(unsigned x1, unsigned y1, unsigned x2, unsigned y2, char far *buf, unsigned seg);
void f_1ab9_03ad(unsigned x, unsigned y, char far *buf, unsigned seg);
void f_14d2_0e27(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_14d2_0899(int colour, int x, int y, char far *s);
void f_14d2_08e3(int colour, int x, int y, char c);
void f_1ab9_0271(char far *glyph, int x, int y, int colour, int fill, int mode, int rows);
void f_14d2_1aa6(void);
void f_14d2_0af4(int a);
long f_14d2_0ca0(void);
void f_1ab9_0004(unsigned x1, unsigned y1, unsigned x2, unsigned y2, int colour);
void f_1ab9_00ec(unsigned x1, unsigned y1, unsigned x2, unsigned y2, int colour);
void f_a1c3_27e4(char far *title);
void f_1680_2ea0(float x, float y, int bg, int fg, int w, char far *s);
void f_1680_2d78(float x, float y, int colour, char far *s);
void f_a1c3_290e(float x, int w, char far *prompt);
void f_14d2_12ea(void);
void f_1a51_019c(int handle);
void f_1ab2_005c(void);
void f_14b7_003e(void);
void f_1ab2_0029(char far *music);
void f_1ab2_000e(void);
int f_1a51_0002(void);                                  /* EMS present: 0 */
int f_1a51_015d(long size);                             /* allocate EMS */
void f_1a51_02d4(long size, char far *buf, int handle, long off);   /* write to EMS */
void f_1a51_0434(long size, int handle, long off, char far *buf);   /* read from EMS */

extern char far *d_5d9c_a366;           /* screen buffer */
extern char d_5d9c_a31f;                /* video mode at start-up */
extern char d_5d9c_a31e;                /* 0 none, 1 EGA, 2 VGA */
extern int d_5d9c_a364, d_5d9c_a362, d_5d9c_a360, d_5d9c_a35e, d_5d9c_a35a, d_5d9c_a35c;
extern int d_5d9c_a358, d_5d9c_a342, d_5d9c_a340, d_5d9c_a346, d_5d9c_a33e, d_5d9c_a33c;
extern int d_5d9c_a356, d_5d9c_a354, d_5d9c_a352, d_5d9c_a350, d_5d9c_a34c, d_5d9c_a33a;
extern int d_5d9c_a34a, d_5d9c_a348, d_5d9c_a34e, d_5d9c_a338, d_5d9c_a334, d_5d9c_a332;
extern int d_5d9c_a330, d_5d9c_a344, d_5d9c_a336;
extern int d_5d9c_9ef5, d_5d9c_9ef7;
extern char d_5d9c_1e90[], d_5d9c_20d0[], d_5d9c_23d0[];  /* fonts: another module's data */
extern int d_5d9c_a06c;
extern char far *d_5d9c_a328;           /* sound driver memory */
extern char far *d_5d9c_a32c;           /* the driver, paragraph aligned */
extern char d_5d9c_1cec;                /* sound device letter */
extern char far *d_5d9c_a2b2;           /* VGA memory */
extern unsigned char d_5d9c_a078, d_5d9c_a079;     /* drawing and fill colours */
extern int d_5d9c_9dcd, d_5d9c_a31c;
extern struct window far *d_5d9c_a2ae;  /* current font */
extern char d_5d9c_1ceb;                /* 1: text drawn with its background */
extern unsigned char d_5d9c_9b93;
extern char far d_1f3e_0000[6][320];    /* text buffers */
extern char d_5d9c_a2b6[64];            /* 8x8 block under the mouse pointer */
extern float d_5d9c_9b00;
extern long d_5d9c_0254[];              /* protection answers */
extern char far d_1f3e_4fcc[];          /* text typed in */
extern int d_5d9c_1ced;                 /* virtual memory in EMS/extended memory */
extern int d_5d9c_a31a;
extern char far *d_5d9c_a320;           /* music memory */
extern char far *d_5d9c_a324;           /* the music, paragraph aligned */
extern char huge *d_5d9c_a2aa;          /* virtual memory work buffer (64124 bytes) */
extern char d_5d9c_2c17;                /* EMS library error */
extern char d_5d9c_1cea;                /* mouse initialised */
extern int d_5d9c_a070, d_5d9c_a06e;    /* where the pointer is drawn */

struct vmblock {                        /* a virtual memory block */
    long size;
    long off;                           /* in EMS or VM.$$$ */
};
extern struct vmblock d_5d9c_a07a[40];

struct vmslot {                         /* a block in the work buffer */
    signed char block;
    char dirty;
    char far *p;
};
extern struct vmslot d_5d9c_a1ba[40];

struct window {                         /* a font */
    char far *buf;
    int pad[4];
    int w, h, base;
};

unsigned char d_5d9c_1d00[15] = { 15, 12, 10, 9, 11, 14, 13, 7, 6, 1, 5, 3, 4, 8, 2 };  /* EGA colours of 17..31 */
struct window d_5d9c_1d0f = { d_5d9c_1e90, { 0, 0, 0, 0 }, 5, 5, 1 };
struct window d_5d9c_1d21 = { d_5d9c_20d0, { 0, 0, 0, 0 }, 7, 7, 0 };
struct window d_5d9c_1d33 = { d_5d9c_23d0, { 0, 0, 0, 0 }, 7, 14, 0 };
char d_5d9c_1d45 = 1;
int d_5d9c_1d46 = 0;                    /* mouse x */
int d_5d9c_1d48 = 0;                    /* mouse y */
int d_5d9c_1d4a = 0;
int d_5d9c_1d4c = 0;                    /* clicks since last asked */
unsigned long d_5d9c_1d4e = 1;          /* random seed */
long d_5d9c_1d52 = 0;                   /* ticks added after midnight */
long d_5d9c_1d56 = 0;                   /* last time returned */
int d_5d9c_1d5a = 0;                    /* virtual memory blocks allocated */
unsigned long d_5d9c_1d5c = 0;          /* bytes of the work buffer in use */

/* Take the top bit of each of four plane bytes into one pixel value. */
char f_14d2_0008(char far *p0, char far *p1, char far *p2, char far *p3)
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
void f_14d2_0059(char far *src)
{
    char far *s;
    char far *d;
    char p0, p1, p2, p3;
    unsigned i, j;

    s = src;
    d = d_5d9c_a366 + 0x7d00;
    for (i = 0; i < 8000; i++) {
        *d++ = *s++;
        *d++ = s[7999];
        *d++ = s[15999];
        *d++ = s[23999];
    }
    s = d_5d9c_a366 + 0x7d00;
    d = d_5d9c_a366;
    for (i = 0; i < 8000; i++) {
        p0 = *s++;
        p1 = *s++;
        p2 = *s++;
        p3 = *s++;
        for (j = 0; j < 8; j++)
            *d++ = f_14d2_0008(&p0, &p1, &p2, &p3);
    }
}

char far *f_14d2_0152(char c)
{
    char far *p;

    p = f_14d2_0d40();
    p[0] = c;
    p[1] = 0;
    return p;
}

/* 0: no EGA, 1: EGA (mode 0Dh set), 2: VGA (mode 13h set). */
int f_14d2_0178(void)
{
    volatile int r = 0;     /* kept in memory: the BIOS calls clobber registers */

    _AH = 0x12;
    _BL = 0x10;
    asm int 10h;
    if (_BL != 0x10) {
        _AH = 0x0f;
        asm int 10h;
        d_5d9c_a31f = _AL;
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

void f_14d2_01bb(void)
{
    int h;

    if (!(d_5d9c_a31e = f_14d2_0178())) {
        printf("Requires EGA or VGA\n");
        exit(1);
    }
    d_5d9c_1d0f.buf = d_5d9c_1e90;
    d_5d9c_1d21.buf = d_5d9c_20d0;
    d_5d9c_1d33.buf = d_5d9c_23d0;
    d_5d9c_a364 = f_14d2_14cb(d_5d9c_a31e == 1 ? 32000L : 64000L);
    d_5d9c_a362 = f_14d2_14cb(3402L);
    d_5d9c_a360 = f_14d2_14cb(6804L);
    d_5d9c_a35e = f_14d2_14cb(2600L);
    d_5d9c_a35a = f_14d2_14cb(6000L);
    d_5d9c_a35c = f_14d2_14cb(10240L);
    d_5d9c_a358 = f_14d2_14cb(2800L);
    d_5d9c_a342 = f_14d2_14cb(1000L);
    d_5d9c_a340 = f_14d2_14cb(1020L);
    d_5d9c_a346 = f_14d2_14cb(768L);
    d_5d9c_a33e = f_14d2_14cb(320L);
    d_5d9c_a33c = f_14d2_14cb(400L);
    d_5d9c_a356 = f_14d2_14cb(3200L);
    d_5d9c_a354 = f_14d2_14cb(24000L);
    d_5d9c_a352 = f_14d2_14cb(64124L);
    d_5d9c_a350 = f_14d2_14cb(4000L);
    d_5d9c_a34c = f_14d2_14cb(1200L);
    d_5d9c_a33a = f_14d2_14cb(400L);
    d_5d9c_a34a = f_14d2_14cb(2240L);
    d_5d9c_a348 = f_14d2_14cb(560L);
    d_5d9c_a34e = f_14d2_14cb(3200L);
    d_5d9c_a338 = f_14d2_14cb(1600L);
    d_5d9c_a334 = f_14d2_14cb(604L);
    d_5d9c_a332 = f_14d2_14cb(604L);
    d_5d9c_a330 = f_14d2_14cb(604L);
    d_5d9c_a344 = f_14d2_14cb(440L);
    d_5d9c_a336 = f_14d2_14cb(40L);
    d_5d9c_a366 = f_14d2_16bc(d_5d9c_a364, 1);
    if (d_5d9c_a31e == 2) {
        h = open("title.lbm", O_RDONLY);
        read(h, d_5d9c_a366 + 0x7d00, 32000);
        close(h);
        f_1b05_0002(d_5d9c_a366 + 0x7d00, d_5d9c_a366);
        f_14d2_0059(d_5d9c_a366);
        d_5d9c_9ef5 = 4;
        d_5d9c_9ef7 = 5;
        f_992a_6da2();
    } else {
        h = open("titleega.lbm", O_RDONLY);
        read(h, d_5d9c_a366, 32000);
        close(h);
        f_1b05_014e(d_5d9c_a366, 0xa400);
    }
}

void f_14d2_04a9(int i, char r, char g, char b)
{
    if (d_5d9c_a31e == 2) {
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

void f_14d2_04d1(char c)
{
    int h;

    f_14d2_1951();
    if (d_5d9c_a06c == 0)
        f_14b7_0004();
    c = toupper(c);
    if (c == 'A' || c == 'R') {
        d_5d9c_a328 = malloc(6000);
        d_5d9c_a32c = MK_FP(FP_SEG(d_5d9c_a328) + 1, 0);
        d_5d9c_1cec = c;
        if (c == 'A')
            h = open("ADLIB.DRV", O_RDONLY);
        else
            h = open("MT32.DRV", O_RDONLY);
        read(h, d_5d9c_a32c, 6000);
        close(h);
        f_1ab2_0016();
    }
    f_14d2_132d();
    _OvrInitEms(0, 0, 0);
    d_5d9c_a2b2 = MK_FP(0xa000, 0);
}

void f_14d2_0589(void)
{
    f_14d2_05af(0);
    f_14d2_1963();
    f_a1c3_3505(1);
    f_14d2_05af(0);
}

void f_14d2_05af(int noflip)
{
    if (d_5d9c_a31e == 2) {
        d_5d9c_a366 = f_14d2_16bc(d_5d9c_a364, 0);
        if (noflip == 0) {
            f_14d2_1a56();
            asm push ds
            asm push di
            asm push si
            asm les di, d_5d9c_a2b2
            asm lds si, d_5d9c_a366
            asm mov cx, 0fa00h
            asm rep movsw
            asm pop si
            asm pop di
            asm pop ds
            f_14d2_1963();
        }
    } else if (noflip == 0) {
        f_14d2_1a56();
        f_1b05_0308();
        f_14d2_1963();
    }
}

void f_14d2_0609(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    char far *s;
    char far *d;
    unsigned skip;
    unsigned off;
    unsigned t;

    f_14d2_1a56();
    if (d_5d9c_a31e == 2) {
        d_5d9c_a366 = f_14d2_16bc(d_5d9c_a364, 0);
        s = d_5d9c_a366;
        d = d_5d9c_a2b2;
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
        d_5d9c_a366 = f_14d2_16bc(d_5d9c_a364, 0);
        f_1ab9_0322(x1, y1, x2, y2, d_5d9c_a366, 0xa400);
        f_1ab9_03ad(x1, y1, d_5d9c_a366, 0xa000);
    }
    f_14d2_1963();
}

void f_14d2_0722(int c)
{
    d_5d9c_a079 = d_5d9c_a31e == 2 ? c : d_5d9c_1d00[c - 17];
}

void f_14d2_073e(int c)
{
    d_5d9c_a078 = d_5d9c_a31e == 2 ? c : d_5d9c_1d00[c - 17];
}

void f_14d2_075a(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    unsigned t;

    if (y1 > y2) {
        t = y1;
        y1 = y2;
        y2 = t;
    }
    t = d_5d9c_a078;
    d_5d9c_a078 = d_5d9c_a079;
    f_14d2_1a56();
    for (; y1 <= y2; y1++)
        f_14d2_0e27(x1, y1, x2, y1);
    f_14d2_1963();
    d_5d9c_a078 = t;
}

void f_14d2_07af(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    unsigned t;

    if (y1 > y2) {
        t = y1;
        y1 = y2;
        y2 = t;
    }
    f_14d2_1a56();
    f_14d2_0e27(x1, y1, x2, y1);
    f_14d2_0e27(x1, y2, x2, y2);
    f_14d2_0e27(x1, y1, x1, y2);
    f_14d2_0e27(x2, y1, x2, y2);
    f_14d2_1963();
}

void f_14d2_0819(void)
{
    d_5d9c_9dcd = -1;
}

void f_14d2_0824(int f)
{
    switch (f) {
    case 0:
        d_5d9c_a2ae = &d_5d9c_1d0f;
        d_5d9c_a31c = 1;
        break;
    case 1:
        d_5d9c_a2ae = &d_5d9c_1d21;
        d_5d9c_a31c = 0;
        break;
    case 2:
        d_5d9c_a2ae = &d_5d9c_1d33;
        d_5d9c_a31c = 0;
        break;
    }
    d_5d9c_9dcd = f;
}

void f_14d2_0870(int x, int y, char far *s)
{
    f_14d2_1a56();
    f_14d2_0899(d_5d9c_a078, x, y, s);
    f_14d2_1963();
}

void f_14d2_0899(int colour, int x, int y, char far *s)
{
    y -= d_5d9c_a2ae->h + d_5d9c_a2ae->base;
    while (*s) {
        f_14d2_08e3(colour, x, y, *s++);
        x += d_5d9c_a2ae->w + 1;
    }
}

void f_14d2_08e3(int colour, int x, int y, char c)
{
    char far *d;
    char far *g;
    unsigned skip;
    char bits;
    unsigned i, j;

    g = d_5d9c_a2ae->buf + (c - 32) * (d_5d9c_a2ae->h + 1);
    if (d_5d9c_a31e == 2) {
        d = d_5d9c_a2b2 + y * 320 + x;
        skip = 320 - d_5d9c_a2ae->w - 1;
        for (i = 0; i <= d_5d9c_a2ae->h; i++) {
            bits = *g++;
            for (j = 0; j <= d_5d9c_a2ae->w; j++) {
                if (bits & 0x80)
                    *d = colour;
                else if (d_5d9c_1ceb == 1)
                    *d = d_5d9c_a079;
                d++;
                bits <<= 1;
            }
            d += skip;
        }
    } else
        f_1ab9_0271(g, x, y, colour, d_5d9c_a079, d_5d9c_1ceb, d_5d9c_a2ae->h + 1);
}

void f_14d2_09c3(char mode)
{
    d_5d9c_1ceb = mode;
}

/* 1-based position of set in s, 0 if not found. */
unsigned f_14d2_09ce(char far *s, char far *set)
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
unsigned f_14d2_0a1c(char far *s, char far *set)
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

int f_14d2_0ab9(void)
{
    return d_5d9c_1d48;
}

int f_14d2_0ac1(void)
{
    return d_5d9c_1d46;
}

int f_14d2_0ac9(void)
{
    int n;

    f_14d2_1aa6();
    n = d_5d9c_1d4c;
    d_5d9c_1d4c = 0;
    if (n)
        f_14d2_0af4(3);
    return n;
}

void f_14d2_0aef(void)
{
}

void f_14d2_0af4(int a)
{
}

void f_14d2_0af9(void)
{
    do
        f_14d2_1aa6();
    while (d_5d9c_1d4c != 0);
}

/* Read a "quoted" field, then skip to the end of the line. */
void f_14d2_0b0a(FILE *fp, char far *dst)
{
    int c;

    fgetc(fp);
    while ((c = fgetc(fp)) != '"')
        *dst++ = c;
    *dst = 0;
    while (fgetc(fp) != '\n')
        ;
}

void f_14d2_0b5d(FILE *fp, char far *buf)
{
    fgets(buf, 160, fp);
    buf[strlen(buf) - 1] = 0;
}

void f_14d2_0b91(FILE *fp, char far *s)
{
    fprintf(fp, "%s\n", s);
}

char far *f_14d2_0baf(void)
{
    char far *p;
    int c;

    p = f_14d2_0d40();
    c = 0;
    if (kbhit())
        c = getch();
    p[0] = c;
    p[1] = 0;
    return p;
}

int f_14d2_0bee(void)
{
    d_5d9c_1d4e = d_5d9c_1d4e * 1103515245L + 12345;
    return (d_5d9c_1d4e >> 16) & 0x7fff;
}

void f_14d2_0c19(void)
{
    d_5d9c_1d4e = f_14d2_0ca0();
}

int f_14d2_0c2a(int n)
{
    if (n)
        return f_14d2_0bee() % n;
    return 0;
}

int f_14d2_0c45(char far *path)
{
    if (access(path, 0))
        return 0;
    return -1;
}

void f_14d2_0c66(int ticks)
{
    long t;

    t = f_14d2_0ca0();
    while (f_14d2_0ca0() < t + ticks * 4)
        ;
}

/* Clock ticks, x 11, not going back at midnight. */
long f_14d2_0ca0(void)
{
    long t;

    _bios_timeofday(0, &t);
    if (t + d_5d9c_1d52 < d_5d9c_1d56)
        d_5d9c_1d52 += 300000L;
    d_5d9c_1d56 = t + d_5d9c_1d52;
    return d_5d9c_1d56 * 11;
}

char far *f_14d2_0d08(char far *s)
{
    char far *p;

    p = f_14d2_0d40();
    strcpy(p, s);
    strupr(p);
    return p;
}

/* The next of six text buffers. */
char far *f_14d2_0d40(void)
{
    char far *p = d_1f3e_0000[d_5d9c_9b93++];

    if (d_5d9c_9b93 > 5)
        d_5d9c_9b93 = 0;
    return p;
}

/* The last n characters of s. */
char far *f_14d2_0d75(char far *s, unsigned n)
{
    char far *p;
    unsigned l;

    p = f_14d2_0d40();
    l = strlen(s);
    if (n <= l)
        strcpy(p, s + (l - n));
    else
        strcpy(p, s);
    return p;
}

/* n characters of s from position i (1-based). */
char far *f_14d2_0dc8(char far *s, unsigned i, unsigned n)
{
    unsigned l;
    char far *p;

    p = f_14d2_0d40();
    l = strlen(s);
    if (i > l)
        *p = 0;
    else
        sprintf(p, "%.*s", n, s + (i - 1));
    return p;
}

void f_14d2_0e27(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    f_14d2_1a56();
    if (d_5d9c_a31e == 2)
        f_1ab9_0004(x1, y1, x2, y2, d_5d9c_a078);
    else
        f_1ab9_00ec(x1, y1, x2, y2, d_5d9c_a078);
    f_14d2_1963();
}

/* s without leading and trailing spaces. */
char far *f_14d2_0e72(char far *s)
{
    char far *p;
    int i;

    p = f_14d2_0d40();
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

float f_14d2_0eef(void)
{
    return rand() / 32767.0;
}

void f_14d2_0f0a(int x, int y)
{
    char far *s;
    char far *d;
    unsigned j, i;

    s = d_5d9c_a2b2 + y * 320 + x;
    d = d_5d9c_a2b6;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++)
            *d++ = *s++;
        s += 312;
    }
}

void f_14d2_0f5e(int x, int y)
{
    char far *s;
    char far *d;
    unsigned j, i;

    d = d_5d9c_a2b2 + y * 320 + x;
    s = d_5d9c_a2b6;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++)
            *d++ = *s++;
        d += 312;
    }
}

/* Move the rectangle up by dy rows and fill the rows it leaves with colour. */
void f_14d2_0fb2(unsigned x, int y, unsigned x2, unsigned y2, int dy, int colour)
{
    char far *p;
    char far *q;
    char far *a;
    char far *b;
    char c;
    unsigned j;

    f_14d2_1a56();
    if (d_5d9c_a31e == 2) {
        p = d_5d9c_a2b2 + y * 320 + x;
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
        c = d_5d9c_a078;
        d_5d9c_a366 = f_14d2_16bc(d_5d9c_a364, 0);
        f_1ab9_0322(x, y, x2, y2, d_5d9c_a366, 0xa000);
        f_1ab9_03ad(x, y - dy, d_5d9c_a366, 0xa000);
        d_5d9c_a078 = d_5d9c_1d00[colour - 17];
        for (y = y2 - dy + 1; y <= y2; y++)
            f_14d2_0e27(x, y, x2, y);
        d_5d9c_a078 = c;
    }
    f_14d2_1963();
}

void f_14d2_1105(void)
{
    long t;
    unsigned q;
    unsigned page;
    char buf[160];
    register unsigned n;

    _SI = 0;                                /* tries: never counted since the patch */
    f_a1c3_27e4("PROTECTION SCREEN");
    n = f_14d2_0c2a(180);
    q = n % 45;
    page = n / 45;
    d_5d9c_9b00 = 11.0;
    f_14d2_0722(16);
    f_14d2_075a(d_5d9c_9b00 * 8.0 + 6.0, 40, (d_5d9c_9b00 + 16.0) * 8.0 + 19.0, 54);
    f_1680_2ea0(d_5d9c_9b00, -5.0, 1, 4, 0, " REFER TO BOX LID ");
    sprintf(buf, "What was the league attendance in");
    f_1680_2d78(5.0, 10.0, 6, buf);
    sprintf(buf, "division %d in %d/%d season.", page + 1, q + 46, q + 47);
    f_1680_2d78(8.0, 13.0, 6, buf);
    f_14d2_073e(17);
    f_14d2_0824(0);
    f_14d2_0870(273, 199, "V 1.02");
    f_a1c3_290e(2.0, 10, "Input");
    t = atol(d_1f3e_4fcc);
    /* The comparison with the answer, d_5d9c_0254[n], is patched out in this copy of
       the game (a crack: the jump and what followed are NOPs, and the tries in SI are
       never counted). No C gives these bytes; they are reproduced as they are. */
    asm db 8Bh, 0DFh                    /* mov bx, di (n): the compiler's encoding */
    asm mov cl, 2
    asm shl bx, cl
    asm mov ax, word ptr d_5d9c_0254[bx+2]
    asm mov dx, word ptr d_5d9c_0254[bx]
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
        f_14d2_12ea();
        exit(0);
    }
}

void f_14d2_12ea(void)
{
    if (d_5d9c_1ced)
        f_1a51_019c(d_5d9c_a31a);
    else
        remove("VM.$$$");
    _AH = 0;
    _AL = d_5d9c_a31f;
    geninterrupt(0x10);
    if (d_5d9c_1cec)
        f_1ab2_005c();
    if (d_5d9c_a06c == 0)
        f_14b7_003e();
}

void f_14d2_132d(void)
{
    int h;

    if (d_5d9c_1cec) {
        d_5d9c_a320 = malloc(d_5d9c_1cec == 'A' ? 9100 : 22232);
        d_5d9c_a324 = MK_FP(FP_SEG(d_5d9c_a320) + 1, 0);
        if (d_5d9c_1cec == 'A')
            h = open("CMAN2.ALB", O_RDONLY);
        else
            h = open("CMANRLD.RLD", O_RDONLY);
        read(h, d_5d9c_a324, 25000);
        close(h);
        f_1ab2_0029(d_5d9c_a324);
        if (d_5d9c_1cec == 'R')
            f_1ab2_000e();
    }
}

float f_14d2_13c3(float a, float b)
{
    return a > b ? a : b;
}

int f_14d2_13eb(int a, int b)
{
    return a > b ? a : b;
}

long f_14d2_1400(long a, long b)
{
    return a > b ? a : b;
}

float f_14d2_1425(float a, float b)
{
    return a < b ? a : b;
}

int f_14d2_144d(int a, int b)
{
    return a < b ? a : b;
}

long f_14d2_1462(long a, long b)
{
    return a < b ? a : b;
}

int f_14d2_1487(void)
{
    return 1;
}

void f_14d2_148f(char far *a, char far *b, unsigned n)
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
int f_14d2_14cb(long size)
{
    int h;

    if (d_5d9c_1d5a == 0) {
        if ((d_5d9c_a2aa = farcalloc(64124L, 1L)) == NULL) {
            printf("No room for virtual memory\n");
            exit(-1);
        }
        if (f_1a51_0002() == 0) {
            d_5d9c_a31a = f_1a51_015d(300000L);
            if (d_5d9c_2c17 == 0)
                d_5d9c_1ced = -1;
        }
        if (d_5d9c_1ced == 0) {
            h = open("VM.$$$", O_CREAT | O_TRUNC | O_WRONLY, S_IREAD | S_IWRITE);
            write(h, d_5d9c_a2aa, 1);
            close(h);
        }
        for (h = 0; h < 40; h++) {
            d_5d9c_a1ba[h].block = -1;
            d_5d9c_a07a[h].size = 0;
        }
    }
    d_5d9c_a07a[d_5d9c_1d5a].size = size;
    if (d_5d9c_1ced) {
        d_5d9c_a07a[d_5d9c_1d5a].off = d_5d9c_1d5a == 0 ? 0 :
            d_5d9c_a07a[d_5d9c_1d5a - 1].off + d_5d9c_a07a[d_5d9c_1d5a - 1].size;
        f_1a51_02d4(d_5d9c_a07a[d_5d9c_1d5a].size, d_5d9c_a2aa, d_5d9c_a31a, d_5d9c_a07a[d_5d9c_1d5a].off);
    } else {
        d_5d9c_a07a[d_5d9c_1d5a].off = d_5d9c_1d5a == 0 ? 0 :
            d_5d9c_a07a[d_5d9c_1d5a - 1].off + d_5d9c_a07a[d_5d9c_1d5a - 1].size;
        h = open("VM.$$$", O_RDWR);
        lseek(h, d_5d9c_a07a[d_5d9c_1d5a].off, 0);
        write(h, d_5d9c_a2aa, size);
        close(h);
    }
    return d_5d9c_1d5a++;
}

/* Map a virtual memory block into the work buffer (dirty: it will be changed). */
void far *f_14d2_16bc(int handle, int dirty)
{
    char far *p;
    int i;
    int fd;

    for (i = 0; i < 40; i++)
        if (d_5d9c_a1ba[i].block == handle) {
            if (dirty == 1)
                d_5d9c_a1ba[i].dirty = dirty;
            return d_5d9c_a1ba[i].p;
        }
    if (d_5d9c_1ced == 0)
        fd = open("VM.$$$", O_RDWR);
    if (d_5d9c_1d5c + d_5d9c_a07a[handle].size > 64124L) {
        for (i = 0; i < 40; i++)
            if (d_5d9c_a1ba[i].block >= 0) {
                if (d_5d9c_a1ba[i].dirty == 1) {
                    if (d_5d9c_1ced == 0) {
                        lseek(fd, d_5d9c_a07a[d_5d9c_a1ba[i].block].off, 0);
                        write(fd, d_5d9c_a1ba[i].p, d_5d9c_a07a[d_5d9c_a1ba[i].block].size);
                    } else
                        f_1a51_02d4(d_5d9c_a07a[d_5d9c_a1ba[i].block].size, d_5d9c_a1ba[i].p, d_5d9c_a31a,
                                    d_5d9c_a07a[d_5d9c_a1ba[i].block].off);
                }
                d_5d9c_a1ba[i].block = -1;
            }
        d_5d9c_1d5c = 0;
    }
    for (i = 0; i < 40; i++)
        if (d_5d9c_a1ba[i].block == -1)
            break;
    p = d_5d9c_a2aa + d_5d9c_1d5c;
    if (d_5d9c_1ced == 0) {
        lseek(fd, d_5d9c_a07a[handle].off, 0);
        read(fd, p, d_5d9c_a07a[handle].size);
        close(fd);
    } else
        f_1a51_0434(d_5d9c_a07a[handle].size, d_5d9c_a31a, d_5d9c_a07a[handle].off, p);
    d_5d9c_a1ba[i].block = handle;
    d_5d9c_a1ba[i].dirty = dirty;
    d_5d9c_a1ba[i].p = p;
    d_5d9c_1d5c = d_5d9c_1d5c + d_5d9c_a07a[handle].size;
    return p;
}

void f_14d2_1951(void)
{
    asm mov ax, 0                           /* not xor: the flags are not changed */
    geninterrupt(0x33);
    d_5d9c_a06c = _AX;
    d_5d9c_1cea = 1;
}

/* Show the mouse pointer (drawn by hand without a mouse driver). */
void f_14d2_1963(void)
{
    int font;
    char colour;
    char mode;

    if (d_5d9c_a06c) {
        _AX = 1;
        geninterrupt(0x33);
    } else if (d_5d9c_1d4a == 0 && d_5d9c_1cea) {
        font = d_5d9c_9dcd;
        colour = d_5d9c_a078;
        mode = d_5d9c_1ceb;
        d_5d9c_a070 = d_5d9c_1d46;
        d_5d9c_a06e = d_5d9c_1d48;
        if (d_5d9c_a31e == 1)
            f_1ab9_0322(d_5d9c_a070, d_5d9c_a06e, d_5d9c_a070 + 8, d_5d9c_a06e + 8, d_5d9c_a2b6, 0xa000);
        else
            f_14d2_0f0a(d_5d9c_a070, d_5d9c_a06e);
        f_14d2_0824(1);
        d_5d9c_1ceb = 0;
        f_14d2_073e(17);
        f_14d2_08e3(d_5d9c_a078, d_5d9c_a070, d_5d9c_a06e, 0x7e);
        f_14d2_073e(16);
        f_14d2_08e3(d_5d9c_a078, d_5d9c_a070, d_5d9c_a06e, 0x7f);
        d_5d9c_1ceb = mode;
        d_5d9c_a078 = colour;
        f_14d2_0824(font);
        d_5d9c_1d4a = 1;
    }
}

void f_14d2_1a56(void)
{
    if (d_5d9c_a06c) {
        _AX = 2;
        geninterrupt(0x33);
    } else if (d_5d9c_1d4a) {
        if (d_5d9c_a31e == 1)
            f_1ab9_03ad(d_5d9c_a070, d_5d9c_a06e, d_5d9c_a2b6, 0xa000);
        else
            f_14d2_0f5e(d_5d9c_a070, d_5d9c_a06e);
        d_5d9c_1d4a = 0;
    }
}

void f_14d2_1aa6(void)
{
    if (d_5d9c_a06c) {
        _AX = 3;
        geninterrupt(0x33);
        d_5d9c_1d4c = _BX;
        d_5d9c_1d46 = _CX;
        d_5d9c_1d48 = _DX;
        d_5d9c_1d46 >>= 1;
    } else if (d_5d9c_a070 != d_5d9c_1d46 || d_5d9c_a06e != d_5d9c_1d48) {
        f_14d2_1a56();
        f_14d2_1963();
    }
}
