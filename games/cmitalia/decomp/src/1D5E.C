/* @at 1d5e:000e */
/* @data 5d51:952a */
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

char far *f_1d5e_0efc(void);
int f_1d5e_13e0(long size);                 /* allocate a block (EMS/extended memory) */
void far *f_1d5e_1618(int handle, int page);
void f_1d5e_18c5(void);
void f_1f89_000c(void);
void f_1f83_000e(void);
void f_1d5e_1259(void);
void f_1d5e_07e7(void);
void f_1d5e_067d(void);
int f_1d5e_0c17(void);
void f_1d5e_0dbd(int ticks);
void f_1d5e_0b11();                     /* no prototype: callers pass an int */
void f_1f83_005f(void);
void f_1f50_0006(char far *src, char far *dst);   /* LBM picture decoder */
void f_1d5e_18f2(void);
void f_1d5e_19b2(void);
void f_1d5e_0fe3(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_1d5e_0a13(int colour, int x, int y, char far *s);
void f_1d5e_0a5d(int colour, int x, int y, char c);
void f_1d5e_19e0(void);
void f_1d5e_0c32(int a);
long f_1d5e_0df7(void);
void f_1f04_0008(unsigned x1, unsigned y1, unsigned x2, unsigned y2, int colour);
void f_1646_4d19(float x, int w, char far *prompt);
void f_1d5e_1216(void);
void f_1fa5_019a(int handle);
void f_1f83_0054(void);
void f_1f89_0046(void);
void f_1f83_0021(char far *music);
void f_1f83_0006(void);
int f_1fa5_0000(void);                                  /* EMS present: 0 */
int f_1fa5_015b(long size);                             /* allocate EMS */
void f_1fa5_02d2(long size, char far *buf, int handle, long off);   /* write to EMS */
void f_1fa5_0432(long size, int handle, long off, char far *buf);   /* read from EMS */

extern char far *d_5d51_dd80;           /* screen buffer */
extern char d_5d51_dd6d;                /* video mode at start-up */
extern char d_5d51_dd6c;                /* 0 none, 1 EGA, 2 VGA */
extern int d_5d51_dd8e, d_5d51_dda2, d_5d51_dda0, d_5d51_dd92;
extern int d_5d51_dd8c, d_5d51_dd8a, d_5d51_dda4, d_5d51_dd88, d_5d51_dd86, d_5d51_dd84;
extern int d_5d51_dd96, d_5d51_dd94, d_5d51_dd9a, d_5d51_dd98, d_5d51_dd9e, d_5d51_dd90;
extern int d_5d51_dd9c, d_5d51_dd82;
extern int d_5d51_dd7e;                 /* virtual memory blocks (f_1d5e_13e0) */
extern char d_5d51_d567;                /* the picture's palette is to be set */
extern int d_5d51_d95a, d_5d51_d95c;    /* palette brightness, tint */
extern int d_5d51_d9d0, d_5d51_d9fe, d_5d51_d8ca, d_5d51_d834;
extern int d_5d51_b358[];               /* the picture's palette, 0RGB */
extern char far d_2414_2134[];          /* the picture shown */
extern char far d_2414_4a3e[];          /* the picture wanted */
extern char d_5d51_9652[], d_5d51_9c52[], d_5d51_a452[];  /* the fonts (another module's data) */
extern int d_5d51_daba;
extern char far *d_5d51_dd76;           /* sound driver memory */
extern char far *d_5d51_dd7a;           /* the driver, paragraph aligned */
extern char d_5d51_9517;                /* sound device letter */
extern char far *d_5d51_dd00;           /* VGA memory */
extern unsigned char d_5d51_dac6, d_5d51_dac7;     /* drawing and fill colours */
extern int d_5d51_d82a, d_5d51_dd6a;
extern struct window far *d_5d51_dcfc;  /* current font */
extern char d_5d51_9516;                /* 1: text drawn with its background */
extern unsigned char d_5d51_d5ee;
extern char far d_2414_00c8[6][320];    /* text buffers */
extern char d_5d51_dd04[64];            /* 8x8 block under the mouse pointer */
extern float d_5d51_d557;
extern long d_5d51_0254[];              /* protection answers */
extern char far d_2414_4fcc[];          /* text typed in */
extern int d_5d51_9518;                 /* virtual memory in EMS/extended memory */
extern int d_5d51_dd68;
extern char far *d_5d51_dd6e;           /* music memory */
extern char far *d_5d51_dd72;           /* the music, paragraph aligned */
extern char huge *d_5d51_dcf8;          /* virtual memory work buffer (64124 bytes) */
extern char d_5d51_cd79;                /* EMS library error */
extern char d_5d51_9514;                /* mouse initialised */
extern char d_5d51_9515;                /* the mouse driver counts x in 0-639 */
extern int d_5d51_dabe, d_5d51_dabc;    /* where the pointer is drawn */

struct vmblock {                        /* a virtual memory block */
    long size;
    long off;                           /* in EMS or VM.$$$ */
};
extern struct vmblock d_5d51_dac8[40];

struct vmslot {                         /* a block in the work buffer */
    signed char block;
    char dirty;
    char far *p;
};
extern struct vmslot d_5d51_dc08[40];

struct window {                         /* a font */
    char far *buf;
    int pad[2];
    int w, h, base;
};

unsigned char d_5d51_952a[16] = { 0, 15, 12, 10, 9, 11, 14, 13, 7, 6, 1, 5, 3, 4, 8, 2 };  /* EGA colours (unused: VGA only) */
struct window d_5d51_953a = { d_5d51_9652, { 0, 0 }, 5, 5, 1 };
struct window d_5d51_9548 = { d_5d51_9c52, { 0, 0 }, 7, 7, -1 };
struct window d_5d51_9556 = { d_5d51_a452, { 0, 0 }, 7, 14, 0 };
char d_5d51_9564 = 1;
int d_5d51_9565 = 0;                    /* mouse x */
int d_5d51_9567 = 0;                    /* mouse y */
int d_5d51_9569 = 0;
int d_5d51_956b = 0;                    /* clicks since last asked */
unsigned long d_5d51_956d = 1;          /* random seed */
long d_5d51_9571 = 0;                   /* ticks added after midnight */
long d_5d51_9575 = 0;                   /* last time returned */
int d_5d51_9579 = 0;                    /* virtual memory blocks allocated */
unsigned long d_5d51_957b = 0;          /* bytes of the work buffer in use */

/* Take the top bit of each of four plane bytes into one pixel value. */
char f_1d5e_000e(char far *p0, char far *p1, char far *p2, char far *p3)
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
void f_1d5e_005f(char far *src)
{
    char far *s;
    char far *d;
    char p0, p1, p2, p3;
    unsigned i, j;

    s = src;
    d = d_5d51_dd80 + 0x7d00;
    for (i = 0; i < 8000; i++) {
        *d++ = *s++;
        *d++ = s[7999];
        *d++ = s[15999];
        *d++ = s[23999];
    }
    s = d_5d51_dd80 + 0x7d00;
    d = d_5d51_dd80;
    for (i = 0; i < 8000; i++) {
        p0 = *s++;
        p1 = *s++;
        p2 = *s++;
        p3 = *s++;
        for (j = 0; j < 8; j++)
            *d++ = f_1d5e_000e(&p0, &p1, &p2, &p3);
    }
}

char far *f_1d5e_0158(char c)
{
    char far *p;

    p = f_1d5e_0efc();
    p[0] = c;
    p[1] = 0;
    return p;
}

/* 0: no EGA, 1: EGA (mode 0Dh set), 2: VGA (mode 13h set). */
int f_1d5e_0181(void)
{
    volatile int r = 0;     /* kept in memory: the BIOS calls clobber registers */

    _AH = 0x12;
    _BL = 0x10;
    asm int 10h;
    if (_BL != 0x10) {
        _AH = 0x0f;
        asm int 10h;
        d_5d51_dd6d = _AL;
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

void f_1d5e_01c4(void)
{
    d_5d51_dd6c = f_1d5e_0181();
    if (d_5d51_dd6c != 2) {
        printf("Requires VGA\n");
        exit(1);
    }
    f_1d5e_18c5();
    if (d_5d51_daba == 0)
        f_1f89_000c();
    d_5d51_953a.buf = d_5d51_9652;
    d_5d51_9548.buf = d_5d51_9c52;
    d_5d51_9556.buf = d_5d51_a452;
    d_5d51_dd7e = f_1d5e_13e0(64000L);
    d_5d51_dd8e = f_1d5e_13e0(5000L);
    d_5d51_dda2 = f_1d5e_13e0(6000L);
    d_5d51_dda0 = f_1d5e_13e0(2600L);
    d_5d51_dd92 = f_1d5e_13e0(15000L);
    d_5d51_dd8c = f_1d5e_13e0(4040L);
    d_5d51_dd8a = f_1d5e_13e0(6400L);
    d_5d51_dda4 = f_1d5e_13e0(3000L);
    d_5d51_dd88 = f_1d5e_13e0(604L);
    d_5d51_dd86 = f_1d5e_13e0(604L);
    d_5d51_dd84 = f_1d5e_13e0(604L);
    d_5d51_dd96 = f_1d5e_13e0(200L);
    d_5d51_dd94 = f_1d5e_13e0(2240L);
    d_5d51_dd9a = f_1d5e_13e0(3900L);
    d_5d51_dd98 = f_1d5e_13e0(4864L);
    d_5d51_dd9e = f_1d5e_13e0(1300L);
    d_5d51_dd90 = f_1d5e_13e0(2432L);
    d_5d51_dd9c = f_1d5e_13e0(15000L);
}

/* Blacks the screen out: an all-black palette, then the picture with its own palette. */
void f_1d5e_034e(void)
{
    char pal[48];

    memset(pal, 0, 48);
    f_1d5e_0b11(1);
    if (d_5d51_d567) {
        asm push ss
        asm pop es
        asm lea dx, pal
        asm mov bx, 0
        asm mov cx, 16
        asm mov ax, 1012h
        asm int 10h
    }
    f_1d5e_07e7();
    if (d_5d51_d567) {
        f_1d5e_067d();
        d_5d51_d567 = 0;
    }
}

void f_1d5e_03a3(void)
{
}

void f_1d5e_03a8(int i, char r, char g, char b)
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
void f_1d5e_03d0(char c)
{
    int h;

    c = toupper(c);
    if (c == 'A' || c == 'R') {
        d_5d51_dd76 = malloc(6100);
        d_5d51_dd7a = MK_FP(FP_SEG(d_5d51_dd76) + 1, 0);
        d_5d51_9517 = c;
        if (c == 'A')
            h = open("ADLIB.DRV", O_RDONLY);
        else
            h = open("MT32.DRV", O_RDONLY);
        read(h, d_5d51_dd7a, 6100);
        close(h);
        f_1f83_000e();
    }
    f_1d5e_1259();
    _OvrInitEms(0, 0, 0);
    d_5d51_dd00 = MK_FP(0xa000, 0);
}

/* The Intelek and title pictures, until a key or click. */
void f_1d5e_0477(void)
{
    int h;

    d_5d51_dd80 = f_1d5e_1618(d_5d51_dd7e, 1);
    h = open("intelek.lbm", O_RDONLY);
    read(h, d_5d51_dd80 + 0x7d00, 32000);
    close(h);
    f_1f50_0006(d_5d51_dd80 + 0x7d00, d_5d51_dd80);
    f_1d5e_005f(d_5d51_dd80);
    d_5d51_d95a = 4;
    d_5d51_d95c = 5;
    f_1d5e_067d();
    f_1d5e_07e7();
    f_1d5e_18f2();
    f_1d5e_0dbd(200);
    d_5d51_dd80 = f_1d5e_1618(d_5d51_dd7e, 1);
    h = open("title.lbm", O_RDONLY);
    read(h, d_5d51_dd80 + 0x7d00, 32000);
    close(h);
    f_1f50_0006(d_5d51_dd80 + 0x7d00, d_5d51_dd80);
    f_1d5e_005f(d_5d51_dd80);
    d_5d51_d95a = 4;
    d_5d51_d95c = 5;
    f_1d5e_067d();
    f_1d5e_07e7();
    while (f_1d5e_0c17() == 0)
        ;
    if (d_5d51_9517)
        f_1f83_005f();
}

/* Loads the picture named in d_2414_4a3e unless it is the one shown (d_2414_2134). */
void f_1d5e_05b0(char reset)
{
    int h;

    if (strcmp(d_2414_4a3e, d_2414_2134) != 0) {
        if ((h = open(d_2414_4a3e, O_RDONLY)) >= 0) {
            d_5d51_dd80 = f_1d5e_1618(d_5d51_dd7e, 1);
            read(h, d_5d51_dd80 + 0x7d00, 32000);
            close(h);
            f_1f50_0006(d_5d51_dd80 + 0x7d00, d_5d51_dd80);
            f_1d5e_005f(d_5d51_dd80);
        }
        if (reset) {
            d_5d51_d95c = 5;
            d_5d51_d95a = 2;
        }
        d_5d51_d567 = -1;
        strcpy(d_2414_2134, d_2414_4a3e);
    }
}

/* The palette: the picture's colours (d_5d51_b358, 4 bits each) at brightness d_5d51_d95a,
   tinted by d_5d51_d95c (1-4; 5 and above: as they are). */
void f_1d5e_067d(void)
{
    char pal[48];
    float f;
    char far *p;
    int grey;

    p = pal;
    f = d_5d51_d95a * 0.15 + 0.4;
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 15; d_5d51_d9d0++) {
        d_5d51_d9fe = d_5d51_b358[d_5d51_d9d0] & 15;
        d_5d51_d8ca = d_5d51_b358[d_5d51_d9d0] >> 4 & 15;
        d_5d51_d834 = d_5d51_b358[d_5d51_d9d0] >> 8 & 15;
        grey = (d_5d51_d834 + d_5d51_d8ca + d_5d51_d9fe) / 3;
        if (d_5d51_d95c < 5) {
            if (d_5d51_d95c == 1) {
                d_5d51_d834 = grey / 2;
                d_5d51_d8ca = grey / 2;
                d_5d51_d9fe = grey;
            } else if (d_5d51_d95c == 2) {
                d_5d51_d834 = grey;
                d_5d51_d8ca = grey;
                d_5d51_d9fe = grey;
            } else if (d_5d51_d95c == 3) {
                d_5d51_d834 = grey;
                d_5d51_d8ca = grey / 2;
                d_5d51_d9fe = grey / 2;
            } else {
                d_5d51_d834 = grey / 2;
                d_5d51_d8ca = grey;
                d_5d51_d9fe = grey / 2;
            }
        }
        *p++ = (char)(d_5d51_d834 * f) << 2;
        *p++ = (char)(d_5d51_d8ca * f) << 2;
        *p++ = (char)(d_5d51_d9fe * f) << 2;
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
void f_1d5e_07e7(void)
{
    d_5d51_dd80 = f_1d5e_1618(d_5d51_dd7e, 0);
    f_1d5e_19b2();
    asm push ds
    asm push di
    asm push si
    asm les di, d_5d51_dd00
    asm lds si, d_5d51_dd80
    asm mov cx, 0fa00h
    asm rep movsw
    asm pop si
    asm pop di
    asm pop ds
    f_1d5e_18f2();
}

void f_1d5e_0822(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    char far *s;
    char far *d;
    unsigned skip;
    unsigned off;
    unsigned t;

    f_1d5e_19b2();
    d_5d51_dd80 = f_1d5e_1618(d_5d51_dd7e, 0);
    s = d_5d51_dd80;
    d = d_5d51_dd00;
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
    f_1d5e_18f2();
}

void f_1d5e_08cc(c)                    /* old-style: callers pass an int */
char c;
{
    d_5d51_dac7 = c;
}

void f_1d5e_08d7(c)                    /* old-style: callers pass an int */
char c;
{
    d_5d51_dac6 = c;
}

void f_1d5e_08e2(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    unsigned t;

    if (y1 > y2) {
        t = y1;
        y1 = y2;
        y2 = t;
    }
    f_1d5e_19b2();
    for (; y1 <= y2; y1++)
        f_1f04_0008(x1, y1, x2, y1, d_5d51_dac7);
    f_1d5e_18f2();
}

void f_1d5e_0929(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    unsigned t;

    if (y1 > y2) {
        t = y1;
        y1 = y2;
        y2 = t;
    }
    f_1d5e_19b2();
    f_1d5e_0fe3(x1, y1, x2, y1);
    f_1d5e_0fe3(x1, y2, x2, y2);
    f_1d5e_0fe3(x1, y1, x1, y2);
    f_1d5e_0fe3(x2, y1, x2, y2);
    f_1d5e_18f2();
}

void f_1d5e_0993(void)
{
    d_5d51_d82a = -1;
}

void f_1d5e_099e(int f)
{
    switch (f) {
    case 0:
        d_5d51_dcfc = &d_5d51_953a;
        d_5d51_dd6a = 1;
        break;
    case 1:
        d_5d51_dcfc = &d_5d51_9548;
        d_5d51_dd6a = 0;
        break;
    case 2:
        d_5d51_dcfc = &d_5d51_9556;
        d_5d51_dd6a = 0;
        break;
    }
    d_5d51_d82a = f;
}

void f_1d5e_09ea(int x, int y, char far *s)
{
    f_1d5e_19b2();
    f_1d5e_0a13(d_5d51_dac6, x, y, s);
    f_1d5e_18f2();
}

void f_1d5e_0a13(int colour, int x, int y, char far *s)
{
    y -= d_5d51_dcfc->h + d_5d51_dcfc->base;
    while (*s) {
        f_1d5e_0a5d(colour, x, y, *s++);
        x += d_5d51_dcfc->w + 1;
    }
}

void f_1d5e_0a5d(int colour, int x, int y, char c)
{
    char far *d;
    char far *g;
    unsigned skip;
    char bits;
    unsigned i, j;

    g = d_5d51_dcfc->buf + (c >= 0 ? c : c + 256) * (d_5d51_dcfc->h + 1);
    d = d_5d51_dd00 + y * 320 + x;
    skip = 320 - d_5d51_dcfc->w - 1;
    for (i = 0; i <= d_5d51_dcfc->h; i++) {
        bits = *g++;
        for (j = 0; j <= d_5d51_dcfc->w; j++) {
            if (bits & 0x80)
                *d = colour;
            else if (d_5d51_9516 == 1)
                *d = d_5d51_dac7;
            d++;
            bits <<= 1;
        }
        d += skip;
    }
}

void f_1d5e_0b11(mode)
char mode;
{
    d_5d51_9516 = mode;
}

/* 1-based position of set in s, 0 if not found. */
unsigned f_1d5e_0b1c(char far *s, char far *set)
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
unsigned f_1d5e_0b6a(char far *s, char far *set)
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

int f_1d5e_0c07(void)
{
    return d_5d51_9567;
}

int f_1d5e_0c0f(void)
{
    return d_5d51_9565;
}

int f_1d5e_0c17(void)
{
    int n;

    f_1d5e_19e0();
    n = d_5d51_956b;
    d_5d51_956b = 0;
    return n;
}

void f_1d5e_0c32(int a)
{
}

void f_1d5e_0c37(void)
{
    do
        f_1d5e_19e0();
    while (d_5d51_956b != 0);
}

/* Read a "quoted" field, then skip to the end of the line. */
void f_1d5e_0c48(FILE *fp, char far *dst)
{
    int c;

    fgetc(fp);
    while ((c = fgetc(fp)) != '"')
        *dst++ = c;
    *dst = 0;
    while (fgetc(fp) != '\n')
        ;
}

void f_1d5e_0c9b(FILE *fp, char far *buf)
{
    fgets(buf, 160, fp);
    buf[strlen(buf) - 1] = 0;
}

void f_1d5e_0ccf(FILE *fp, char far *s)
{
    fprintf(fp, "%s\n", s);
}

char far *f_1d5e_0ced(void)
{
    char far *p;
    int c;

    p = f_1d5e_0efc();
    c = 0;
    if (kbhit())
        c = getch();
    p[0] = c;
    p[1] = 0;
    return p;
}

unsigned long f_1d5e_0d2c(void)
{
    d_5d51_956d = d_5d51_956d * 1103515245L + 12345;
    return (d_5d51_956d >> 16) & 0x7fff;
}

void f_1d5e_0d59(void)
{
    d_5d51_956d = f_1d5e_0df7();
}

/* A random number below n (two draws make 30 bits). */
unsigned long f_1d5e_0d6a(unsigned long n)
{
    if (n)
        return ((f_1d5e_0d2c() << 16) + f_1d5e_0d2c()) % n;
    return 0;
}

int f_1d5e_0d9c(char far *path)
{
    if (access(path, 0))
        return 0;
    return -1;
}

void f_1d5e_0dbd(int ticks)
{
    long t;

    t = f_1d5e_0df7();
    while (f_1d5e_0df7() < t + ticks * 4)
        ;
}

/* Clock ticks, x 11, not going back at midnight. */
long f_1d5e_0df7(void)
{
    long t;

    _bios_timeofday(0, &t);
    if (t + d_5d51_9571 < d_5d51_9575)
        d_5d51_9571 += 300000L;
    d_5d51_9575 = t + d_5d51_9571;
    return d_5d51_9575 * 11;
}

/* s in capitals, accented letters too, in a new string. */
char far *f_1d5e_0e5f(char far *s)
{
    char far *p;
    char i;

    p = f_1d5e_0efc();
    i = 0;
    strcpy(p, s);
    for (; p[i]; i++)
        if (p[i] >= 'a' && p[i] <= 'z' || p[i] >= '\xe0' && p[i] <= '\xff')
            p[i] = p[i] - 32;
    return p;
}

/* The next of six text buffers. */
char far *f_1d5e_0efc(void)
{
    char far *p = d_2414_00c8[d_5d51_d5ee++];

    if (d_5d51_d5ee > 5)
        d_5d51_d5ee = 0;
    return p;
}

/* The last n characters of s. */
char far *f_1d5e_0f31(char far *s, unsigned n)
{
    char far *p;
    unsigned l;

    p = f_1d5e_0efc();
    l = strlen(s);
    if (n <= l)
        strcpy(p, s + (l - n));
    else
        strcpy(p, s);
    return p;
}

/* n characters of s from position i (1-based). */
char far *f_1d5e_0f84(char far *s, unsigned i, unsigned n)
{
    unsigned l;
    char far *p;

    p = f_1d5e_0efc();
    l = strlen(s);
    if (i > l)
        *p = 0;
    else
        sprintf(p, "%.*s", n, s + (i - 1));
    return p;
}

void f_1d5e_0fe3(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    f_1d5e_19b2();
    f_1f04_0008(x1, y1, x2, y2, d_5d51_dac6);
    f_1d5e_18f2();
}

/* s without leading and trailing spaces. */
char far *f_1d5e_100c(char far *s)
{
    char far *p;
    int i;

    p = f_1d5e_0efc();
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

float f_1d5e_1089(void)
{
    return rand() / 32767.0;
}

void f_1d5e_10a4(int x, int y)
{
    char far *s;
    char far *d;
    unsigned j, i;

    s = d_5d51_dd00 + y * 320 + x;
    d = d_5d51_dd04;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++)
            *d++ = *s++;
        s += 312;
    }
}

void f_1d5e_10f8(int x, int y)
{
    char far *s;
    char far *d;
    unsigned j, i;

    d = d_5d51_dd00 + y * 320 + x;
    s = d_5d51_dd04;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++)
            *d++ = *s++;
        d += 312;
    }
}

/* Move the rectangle up by dy rows and fill the rows it leaves with colour. */
void f_1d5e_114c(unsigned x, int y, unsigned x2, unsigned y2, int dy, int colour)
{
    char far *p;
    char far *q;
    char far *a;
    char far *b;
    unsigned j;
    int i;

    f_1d5e_19b2();
    p = d_5d51_dd00 + y * 320 + x;
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
    f_1d5e_18f2();
}


void f_1d5e_1216(void)
{
    if (d_5d51_9518)
        f_1fa5_019a(d_5d51_dd68);
    else
        remove("VM.$$$");
    _AH = 0;
    _AL = d_5d51_dd6d;
    geninterrupt(0x10);
    if (d_5d51_9517)
        f_1f83_0054();
    if (d_5d51_daba == 0)
        f_1f89_0046();
}

void f_1d5e_1259(void)
{
    int h;

    if (d_5d51_9517) {
        d_5d51_dd6e = malloc(11000);
        d_5d51_dd72 = MK_FP(FP_SEG(d_5d51_dd6e) + 1, 0);
        if (d_5d51_9517 == 'A')
            h = open("MUSIC93.ALB", O_RDONLY);
        else
            h = open("MUSIC93.RLD", O_RDONLY);
        read(h, d_5d51_dd72, 11000);
        close(h);
        f_1f83_0021(d_5d51_dd72);
        if (d_5d51_9517 == 'R')
            f_1f83_0006();
    }
}

float f_1d5e_12e0(float a, float b)
{
    return a > b ? a : b;
}

int f_1d5e_1308(int a, int b)
{
    return a > b ? a : b;
}

long f_1d5e_131d(long a, long b)
{
    return a > b ? a : b;
}

float f_1d5e_1342(float a, float b)
{
    return a < b ? a : b;
}

int f_1d5e_136a(int a, int b)
{
    return a < b ? a : b;
}

long f_1d5e_137f(long a, long b)
{
    return a < b ? a : b;
}


void f_1d5e_13a4(char far *a, char far *b, unsigned n)
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
int f_1d5e_13e0(long size)
{
    int h;
    int i;

    if (d_5d51_9579 == 0) {
        if ((d_5d51_dcf8 = farcalloc(64124L, 1L)) == NULL) {
            printf("Not enough memory.\n");
            if (d_5d51_9517) {
                printf("Try re-installing the game\n");
                printf("without selecting sound.\n");
            }
            exit(-1);
        }
        if (f_1fa5_0000() == 0) {
            d_5d51_dd68 = f_1fa5_015b(200000L);
            if (d_5d51_cd79 == 0)
                d_5d51_9518 = -1;
        }
        if (d_5d51_9518 == 0) {
            h = open("VM.$$$", O_CREAT | O_TRUNC | O_WRONLY, S_IREAD | S_IWRITE);
            write(h, d_5d51_dcf8, 1);
            close(h);
        }
        for (i = 0; i < 40; i++) {
            d_5d51_dc08[i].block = -1;
            d_5d51_dac8[i].size = 0;
        }
    }
    d_5d51_dac8[d_5d51_9579].size = size;
    if (d_5d51_9518) {
        d_5d51_dac8[d_5d51_9579].off = d_5d51_9579 == 0 ? 0 :
            d_5d51_dac8[d_5d51_9579 - 1].off + d_5d51_dac8[d_5d51_9579 - 1].size;
        f_1fa5_02d2(d_5d51_dac8[d_5d51_9579].size, d_5d51_dcf8, d_5d51_dd68, d_5d51_dac8[d_5d51_9579].off);
    } else {
        d_5d51_dac8[d_5d51_9579].off = d_5d51_9579 == 0 ? 0 :
            d_5d51_dac8[d_5d51_9579 - 1].off + d_5d51_dac8[d_5d51_9579 - 1].size;
        h = open("VM.$$$", O_RDWR);
        lseek(h, d_5d51_dac8[d_5d51_9579].off, 0);
        write(h, d_5d51_dcf8, size);
        close(h);
    }
    return d_5d51_9579++;
}

/* Map a virtual memory block into the work buffer (dirty: it will be changed). */
void far *f_1d5e_1618(int handle, int dirty)
{
    char far *p;
    int i;
    int fd;

    for (i = 0; i < 40; i++)
        if (d_5d51_dc08[i].block == handle) {
            if (dirty == 1)
                d_5d51_dc08[i].dirty = dirty;
            return d_5d51_dc08[i].p;
        }
    if (d_5d51_9518 == 0)
        fd = open("VM.$$$", O_RDWR);
    if (d_5d51_957b + d_5d51_dac8[handle].size > 64124L) {
        for (i = 0; i < 40; i++)
            if (d_5d51_dc08[i].block >= 0) {
                if (d_5d51_dc08[i].dirty == 1) {
                    if (d_5d51_9518 == 0) {
                        lseek(fd, d_5d51_dac8[d_5d51_dc08[i].block].off, 0);
                        write(fd, d_5d51_dc08[i].p, d_5d51_dac8[d_5d51_dc08[i].block].size);
                    } else
                        f_1fa5_02d2(d_5d51_dac8[d_5d51_dc08[i].block].size, d_5d51_dc08[i].p, d_5d51_dd68,
                                    d_5d51_dac8[d_5d51_dc08[i].block].off);
                }
                d_5d51_dc08[i].block = -1;
            }
        d_5d51_957b = 0;
    }
    for (i = 0; i < 40; i++)
        if (d_5d51_dc08[i].block == -1)
            break;
    p = d_5d51_dcf8 + d_5d51_957b;
    if (d_5d51_9518 == 0) {
        lseek(fd, d_5d51_dac8[handle].off, 0);
        read(fd, p, d_5d51_dac8[handle].size);
        close(fd);
    } else
        f_1fa5_0432(d_5d51_dac8[handle].size, d_5d51_dd68, d_5d51_dac8[handle].off, p);
    d_5d51_dc08[i].block = handle;
    d_5d51_dc08[i].dirty = dirty;
    d_5d51_dc08[i].p = p;
    d_5d51_957b = d_5d51_957b + d_5d51_dac8[handle].size;
    return p;
}

void f_1d5e_18c5(void)
{
    asm mov ax, 0                           /* not xor: the flags are not changed */
    geninterrupt(0x33);
    d_5d51_daba = _AX;
    _CX = 900;                              /* the pointer to (900, 100), read back: */
    _DX = 100;                              /* drivers that count x in 0-639 */
    _AX = 4;
    geninterrupt(0x33);
    _AX = 3;
    geninterrupt(0x33);
    if ((int)_CX >= 400)
        d_5d51_9515 = 1;
    d_5d51_9514 = 1;
}

/* Show the mouse pointer (drawn by hand without a mouse driver). */
void f_1d5e_18f2(void)
{
    int font;
    char colour;
    char mode;

    if (d_5d51_daba) {
        _AX = 1;
        geninterrupt(0x33);
    } else if (d_5d51_9569 == 0 && d_5d51_9514) {
        font = d_5d51_d82a;
        colour = d_5d51_dac6;
        mode = d_5d51_9516;
        d_5d51_dabe = d_5d51_9565;
        d_5d51_dabc = d_5d51_9567;
        f_1d5e_10a4(d_5d51_dabe, d_5d51_dabc);
        f_1d5e_099e(1);
        d_5d51_9516 = 0;
        f_1d5e_08d7(17);
        f_1d5e_0a5d(d_5d51_dac6, d_5d51_dabe, d_5d51_dabc, 0x7e);
        f_1d5e_08d7(16);
        f_1d5e_0a5d(d_5d51_dac6, d_5d51_dabe, d_5d51_dabc, 0x7f);
        d_5d51_9516 = mode;
        d_5d51_dac6 = colour;
        f_1d5e_099e(font);
        d_5d51_9569 = 1;
    }
}

void f_1d5e_19b2(void)
{
    if (d_5d51_daba) {
        _AX = 2;
        geninterrupt(0x33);
    } else if (d_5d51_9569) {
        f_1d5e_10f8(d_5d51_dabe, d_5d51_dabc);
        d_5d51_9569 = 0;
    }
}

void f_1d5e_19e0(void)
{
    if (d_5d51_daba) {
        _AX = 3;
        geninterrupt(0x33);
        d_5d51_956b = _BX;
        d_5d51_9565 = _CX;
        d_5d51_9567 = _DX;
        if (d_5d51_9515)
            d_5d51_9565 >>= 1;
    } else if (d_5d51_dabe != d_5d51_9565 || d_5d51_dabc != d_5d51_9567) {
        f_1d5e_19b2();
        f_1d5e_18f2();
    }
}

void f_1d5e_1a24(void)
{
}

void f_1d5e_1a29(void)
{
}

void f_1d5e_1a2e(void)
{
}

/* Without a mouse driver: the keyboard driver off, and the pointer hidden. */
void f_1d5e_1a33(void)
{
    if (d_5d51_daba == 0) {
        d_5d51_9514 = 0;
        f_1d5e_19b2();
        f_1f89_0046();
    }
}

/* Without a mouse driver: the keyboard driver back, and the pointer. */
void f_1d5e_1a4d(void)
{
    if (d_5d51_daba == 0) {
        f_1f89_000c();
        d_5d51_9514 = 1;
        f_1d5e_18f2();
    }
}
