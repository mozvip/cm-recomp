/* @at 215d:0000 */
/* @data 61eb:91a0 */
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

char far *f_215d_0f2d(void);
int f_215d_142b(long size);                 /* allocate a block (EMS/extended memory) */
void far *f_215d_1629(int handle, int page);
void f_215d_188e(void);
void f_2386_0006(void);
void f_2380_0008(void);
void f_215d_1292(void);
void f_215d_07b1(void);
void f_215d_0652(void);
int f_215d_0c20(void);
void f_215d_0df0(int ticks);
void f_215d_0b01();                     /* no prototype: callers pass an int */
void f_2380_0059(void);
void f_234d_0000(char far *src, char far *dst);   /* LBM picture decoder */
void f_215d_18bf(void);
void f_215d_1970(void);
void f_215d_1016(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_215d_0a04(int colour, int x, int y, char far *s);
void f_215d_0a4e(int colour, int x, int y, char c);
void f_215d_19a3(void);
void f_215d_0c3d(int a);
long f_215d_0e27(void);
void f_2301_0002(unsigned x1, unsigned y1, unsigned x2, unsigned y2, int colour);
void f_1a83_4a35(float x, int w, char far *prompt);
void f_215d_124b(void);
void f_23a1_01a4(int handle);
void f_2380_004e(void);
void f_2386_0040(void);
void f_2380_001b(char far *music);
void f_2380_0000(void);
int f_23a1_000a(void);                                  /* EMS present: 0 */
int f_23a1_0165(long size);                             /* allocate EMS */
void f_23a1_02dc(long size, char far *buf, int handle, long off);   /* write to EMS */
void f_23a1_043c(long size, int handle, long off, char far *buf);   /* read from EMS */

extern char far *d_61eb_dc68;           /* screen buffer */
extern char d_61eb_dc7e;                /* video mode at start-up */
extern char d_61eb_dc7f;                /* 0 none, 1 EGA, 2 VGA */
extern int d_61eb_dc5c, d_61eb_dc48, d_61eb_dc4a, d_61eb_dc58;
extern int d_61eb_dc5e, d_61eb_dc60, d_61eb_dc46, d_61eb_dc62, d_61eb_dc64, d_61eb_dc66;
extern int d_61eb_dc54, d_61eb_dc56, d_61eb_dc50, d_61eb_dc52, d_61eb_dc4c, d_61eb_dc5a;
extern int d_61eb_dc4e, d_61eb_dc6a;
extern int d_61eb_dc6c;                 /* virtual memory blocks (f_215d_142b) */
extern char d_61eb_da42;                /* the picture's palette is to be set */
extern int d_61eb_d64e, d_61eb_d64c;    /* palette brightness, tint */
extern int d_61eb_d5d8, d_61eb_d5aa, d_61eb_d6de, d_61eb_d774;
extern int d_61eb_afce[];               /* the picture's palette, 0RGB */
extern char far d_432e_eb83[];          /* the picture shown */
extern char far d_432e_c279[];          /* the picture wanted */
extern char d_61eb_92c8[], d_61eb_98c8[], d_61eb_a0c8[];  /* the fonts (another module's data) */
extern int d_61eb_df30;
extern char far *d_61eb_dc72;           /* sound driver memory */
extern char far *d_61eb_dc6e;           /* the driver, paragraph aligned */
extern char d_61eb_918d;                /* sound device letter */
extern char far *d_61eb_dce8;           /* VGA memory */
extern unsigned char d_61eb_df25, d_61eb_df24;     /* drawing and fill colours */
extern int d_61eb_d77e, d_61eb_dc80;
extern struct window far *d_61eb_dcec;  /* current font */
extern char d_61eb_918c;                /* 1: text drawn with its background */
extern unsigned char d_61eb_d9bb;
extern char far d_5313_0640[6][320];    /* text buffers */
extern char d_61eb_dc84[64];            /* 8x8 block under the mouse pointer */
extern int d_61eb_918e;                 /* virtual memory in EMS/extended memory */
extern int d_61eb_dc82;
extern char far *d_61eb_dc7a;           /* music memory */
extern char far *d_61eb_dc76;           /* the music, paragraph aligned */
extern char huge *d_61eb_dcf0;          /* virtual memory work buffer (64124 bytes) */
extern char d_61eb_c9d9;                /* EMS library error */
extern char d_61eb_918a;                /* mouse initialised */
extern char d_61eb_918b;                /* the mouse driver counts x in 0-639 */
extern int d_61eb_df2c, d_61eb_df2e;    /* where the pointer is drawn */

struct vmblock {                        /* a virtual memory block */
    long size;
    long off;                           /* in EMS or VM.$$$ */
};
extern struct vmblock d_61eb_dde4[40];

struct vmslot {                         /* a block in the work buffer */
    signed char block;
    char dirty;
    char far *p;
};
extern struct vmslot d_61eb_dcf4[40];

struct window {                         /* a font */
    char far *buf;
    int pad[2];
    int w, h, base;
};

unsigned char d_61eb_91a0[16] = { 0, 15, 12, 10, 9, 11, 14, 13, 7, 6, 1, 5, 3, 4, 8, 2 };  /* EGA colours (unused: VGA only) */
struct window d_61eb_91b0 = { d_61eb_92c8, { 0, 0 }, 5, 5, 1 };
struct window d_61eb_91be = { d_61eb_98c8, { 0, 0 }, 7, 7, -1 };
struct window d_61eb_91cc = { d_61eb_a0c8, { 0, 0 }, 7, 14, 0 };
char d_61eb_91da = 1;
int d_61eb_91db = 0;                    /* mouse x */
int d_61eb_91dd = 0;                    /* mouse y */
int d_61eb_91df = 0;
int d_61eb_91e1 = 0;                    /* clicks since last asked */
unsigned long d_61eb_91e3 = 1;          /* random seed */
long d_61eb_91e7 = 0;                   /* ticks added after midnight */
long d_61eb_91eb = 0;                   /* last time returned */
int d_61eb_91ef = 0;                    /* virtual memory blocks allocated */
unsigned long d_61eb_91f1 = 0;          /* bytes of the work buffer in use */

/* Take the top bit of each of four plane bytes into one pixel value. */
char f_215d_0000(char far *p0, char far *p1, char far *p2, char far *p3)
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
void f_215d_004f(char far *src)
{
    char far *s;
    char far *d;
    unsigned i, j;
    char p0, p1, p2, p3;

    s = src;
    d = d_61eb_dc68 + 0x7d00;
    for (i = 0; i < 8000; i++) {
        *d++ = *s++;
        *d++ = s[7999];
        *d++ = s[15999];
        *d++ = s[23999];
    }
    s = d_61eb_dc68 + 0x7d00;
    d = d_61eb_dc68;
    for (i = 0; i < 8000; i++) {
        p0 = *s++;
        p1 = *s++;
        p2 = *s++;
        p3 = *s++;
        for (j = 0; j < 8; j++)
            *d++ = f_215d_0000(&p0, &p1, &p2, &p3);
    }
}

char far *f_215d_0155(char c)
{
    char far *p;

    p = f_215d_0f2d();
    p[0] = c;
    p[1] = 0;
    return p;
}

/* 0: no EGA, 1: EGA (mode 0Dh set), 2: VGA (mode 13h set). */
int f_215d_017d(void)
{
    volatile int r = 0;     /* kept in memory: the BIOS calls clobber registers */

    _AH = 0x12;
    _BL = 0x10;
    asm int 10h;
    if (_BL != 0x10) {
        _AH = 0x0f;
        asm int 10h;
        d_61eb_dc7e = _AL;
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

void f_215d_01c2(void)
{
    d_61eb_dc7f = f_215d_017d();
    if (d_61eb_dc7f != 2) {
        printf("Requires VGA\n");
        exit(1);
    }
    f_215d_188e();
    if (d_61eb_df30 == 0)
        f_2386_0006();
    d_61eb_91b0.buf = d_61eb_92c8;
    d_61eb_91be.buf = d_61eb_98c8;
    d_61eb_91cc.buf = d_61eb_a0c8;
    d_61eb_dc6c = f_215d_142b(64000L);
    d_61eb_dc5c = f_215d_142b(5000L);
    d_61eb_dc48 = f_215d_142b(6000L);
    d_61eb_dc4a = f_215d_142b(2600L);
    d_61eb_dc58 = f_215d_142b(15000L);
    d_61eb_dc5e = f_215d_142b(4040L);
    d_61eb_dc60 = f_215d_142b(6400L);
    d_61eb_dc46 = f_215d_142b(3000L);
    d_61eb_dc62 = f_215d_142b(604L);
    d_61eb_dc64 = f_215d_142b(604L);
    d_61eb_dc66 = f_215d_142b(604L);
    d_61eb_dc54 = f_215d_142b(200L);
    d_61eb_dc56 = f_215d_142b(2240L);
    d_61eb_dc50 = f_215d_142b(3900L);
    d_61eb_dc52 = f_215d_142b(4864L);
    d_61eb_dc4c = f_215d_142b(1300L);
    d_61eb_dc5a = f_215d_142b(2432L);
    d_61eb_dc4e = f_215d_142b(15000L);
}

/* Blacks the screen out: an all-black palette, then the picture with its own palette. */
void f_215d_033b(void)
{
    char pal[48];

    memset(pal, 0, 48);
    f_215d_0b01(1);
    if (d_61eb_da42) {
        asm push ss
        asm pop es
        asm lea dx, pal
        asm mov bx, 0
        asm mov cx, 16
        asm mov ax, 1012h
        asm int 10h
    }
    f_215d_07b1();
    if (d_61eb_da42) {
        f_215d_0652();
        d_61eb_da42 = 0;
    }
}

void f_215d_038c(void)
{
}

void f_215d_0395(int i, char r, char g, char b)
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
void f_215d_03bb(char c)
{
    int h;

    c = toupper(c);
    if (c == 'A' || c == 'R') {
        d_61eb_dc72 = malloc(6100);
        d_61eb_dc6e = MK_FP(FP_SEG(d_61eb_dc72) + 1, 0);
        d_61eb_918d = c;
        if (c == 'A')
            h = open("ADLIB.DRV", O_RDONLY);
        else
            h = open("MT32.DRV", O_RDONLY);
        read(h, d_61eb_dc6e, 6100);
        close(h);
        f_2380_0008();
    }
    f_215d_1292();
    _OvrInitEms(0, 0, 0);
    d_61eb_dce8 = MK_FP(0xa000, 0);
}

/* The Intelek and title pictures, until a key or click. */
void f_215d_0465(void)
{
    int h;

    d_61eb_dc68 = f_215d_1629(d_61eb_dc6c, 1);
    h = open("intelek.lbm", O_RDONLY);
    read(h, d_61eb_dc68 + 0x7d00, 32000);
    close(h);
    f_234d_0000(d_61eb_dc68 + 0x7d00, d_61eb_dc68);
    f_215d_004f(d_61eb_dc68);
    d_61eb_d64e = 4;
    d_61eb_d64c = 5;
    f_215d_0652();
    f_215d_07b1();
    f_215d_18bf();
    f_215d_0df0(200);
    d_61eb_dc68 = f_215d_1629(d_61eb_dc6c, 1);
    h = open("title.lbm", O_RDONLY);
    read(h, d_61eb_dc68 + 0x7d00, 32000);
    close(h);
    f_234d_0000(d_61eb_dc68 + 0x7d00, d_61eb_dc68);
    f_215d_004f(d_61eb_dc68);
    d_61eb_d64e = 4;
    d_61eb_d64c = 5;
    f_215d_0652();
    f_215d_07b1();
    while (f_215d_0c20() == 0)
        ;
    if (d_61eb_918d)
        f_2380_0059();
}

/* Loads the picture named in d_432e_c279 unless it is the one shown (d_432e_eb83). */
void f_215d_0595(char reset)
{
    int h;

    if (strcmp(d_432e_c279, d_432e_eb83) != 0) {
        if ((h = open(d_432e_c279, O_RDONLY)) >= 0) {
            d_61eb_dc68 = f_215d_1629(d_61eb_dc6c, 1);
            read(h, d_61eb_dc68 + 0x7d00, 32000);
            close(h);
            f_234d_0000(d_61eb_dc68 + 0x7d00, d_61eb_dc68);
            f_215d_004f(d_61eb_dc68);
        }
        if (reset) {
            d_61eb_d64c = 5;
            d_61eb_d64e = 2;
        }
        d_61eb_da42 = -1;
        strcpy(d_432e_eb83, d_432e_c279);
    }
}

/* The palette: the picture's colours (d_61eb_afce, 4 bits each) at brightness d_61eb_d64e,
   tinted by d_61eb_d64c (1-4; 5 and above: as they are). */
void f_215d_0652(void)
{
    char pal[48];
    float f;
    int grey;
    char far *p;

    p = pal;
    f = d_61eb_d64e * 0.15 + 0.4;
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 15; d_61eb_d5d8++) {
        d_61eb_d5aa = d_61eb_afce[d_61eb_d5d8] & 15;
        d_61eb_d6de = d_61eb_afce[d_61eb_d5d8] >> 4 & 15;
        d_61eb_d774 = d_61eb_afce[d_61eb_d5d8] >> 8 & 15;
        grey = (d_61eb_d774 + d_61eb_d6de + d_61eb_d5aa) / 3;
        if (d_61eb_d64c < 5) {
            if (d_61eb_d64c == 1) {
                d_61eb_d774 = grey / 2;
                d_61eb_d6de = grey / 2;
                d_61eb_d5aa = grey;
            } else if (d_61eb_d64c == 2) {
                d_61eb_d774 = grey;
                d_61eb_d6de = grey;
                d_61eb_d5aa = grey;
            } else if (d_61eb_d64c == 3) {
                d_61eb_d774 = grey;
                d_61eb_d6de = grey / 2;
                d_61eb_d5aa = grey / 2;
            } else {
                d_61eb_d774 = grey / 2;
                d_61eb_d6de = grey;
                d_61eb_d5aa = grey / 2;
            }
        }
        *p++ = (char)(d_61eb_d774 * f) << 2;
        *p++ = (char)(d_61eb_d6de * f) << 2;
        *p++ = (char)(d_61eb_d5aa * f) << 2;
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
void f_215d_07b1(void)
{
    d_61eb_dc68 = f_215d_1629(d_61eb_dc6c, 0);
    f_215d_1970();
    asm push ds
    asm push di
    asm push si
    asm les di, d_61eb_dce8
    asm lds si, d_61eb_dc68
    asm mov cx, 0fa00h
    asm rep movsw
    asm pop si
    asm pop di
    asm pop ds
    f_215d_18bf();
}

void f_215d_07ec(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    char far *s;
    char far *d;
    unsigned skip;
    unsigned off;
    unsigned t;

    f_215d_1970();
    d_61eb_dc68 = f_215d_1629(d_61eb_dc6c, 0);
    s = d_61eb_dc68;
    d = d_61eb_dce8;
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
    f_215d_18bf();
}

void f_215d_088c(c)                    /* old-style: callers pass an int */
char c;
{
    d_61eb_df24 = c;
}

void f_215d_089b(c)                    /* old-style: callers pass an int */
char c;
{
    d_61eb_df25 = c;
}

void f_215d_08aa(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    unsigned t;
    unsigned y;

    if (y1 > y2) {
        t = y1;
        y1 = y2;
        y2 = t;
    }
    f_215d_1970();
    for (y = y1; y <= y2; y++)
        f_2301_0002(x1, y, x2, y, d_61eb_df24);
    f_215d_18bf();
}

void f_215d_0904(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    unsigned t;

    if (y1 > y2) {
        t = y1;
        y1 = y2;
        y2 = t;
    }
    f_215d_1970();
    f_215d_1016(x1, y1, x2, y1);
    f_215d_1016(x1, y2, x2, y2);
    f_215d_1016(x1, y1, x1, y2);
    f_215d_1016(x2, y1, x2, y2);
    f_215d_18bf();
}

void f_215d_0978(void)
{
    d_61eb_d77e = -1;
}

void f_215d_0987(int f)
{
    switch (f) {
    case 0:
        d_61eb_dcec = &d_61eb_91b0;
        d_61eb_dc80 = 1;
        break;
    case 1:
        d_61eb_dcec = &d_61eb_91be;
        d_61eb_dc80 = 0;
        break;
    case 2:
        d_61eb_dcec = &d_61eb_91cc;
        d_61eb_dc80 = 0;
        break;
    }
    d_61eb_d77e = f;
}

void f_215d_09d7(int x, int y, char far *s)
{
    f_215d_1970();
    f_215d_0a04(d_61eb_df25, x, y, s);
    f_215d_18bf();
}

void f_215d_0a04(int colour, int x, int y, char far *s)
{
    y -= d_61eb_dcec->h + d_61eb_dcec->base;
    while (*s) {
        f_215d_0a4e(colour, x, y, *s++);
        x += d_61eb_dcec->w + 1;
    }
}

void f_215d_0a4e(int colour, int x, int y, char c)
{
    char far *d;
    char far *g;
    unsigned skip;
    char bits;
    unsigned i, j;

    g = d_61eb_dcec->buf + (c >= 0 ? c : c + 256) * (d_61eb_dcec->h + 1);
    d = d_61eb_dce8 + y * 320 + x;
    skip = 320 - d_61eb_dcec->w - 1;
    for (i = 0; i <= d_61eb_dcec->h; i++) {
        bits = *g++;
        for (j = 0; j <= d_61eb_dcec->w; j++) {
            if (bits & 0x80)
                *d = colour;
            else if (d_61eb_918c == 1)
                *d = d_61eb_df24;
            d++;
            bits <<= 1;
        }
        d += skip;
    }
}

void f_215d_0b01(mode)
char mode;
{
    d_61eb_918c = mode;
}

/* 1-based position of set in s, 0 if not found. */
unsigned f_215d_0b10(char far *s, char far *set)
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
unsigned f_215d_0b64(char far *s, char far *set)
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

int f_215d_0c08(void)
{
    return d_61eb_91dd;
}

int f_215d_0c14(void)
{
    return d_61eb_91db;
}

int f_215d_0c20(void)
{
    int n;

    f_215d_19a3();
    n = d_61eb_91e1;
    d_61eb_91e1 = 0;
    return n;
}

void f_215d_0c3d(int a)
{
}

void f_215d_0c46(void)
{
    do
        f_215d_19a3();
    while (d_61eb_91e1 != 0);
}

/* Read a "quoted" field, then skip to the end of the line. */
void f_215d_0c5b(FILE *fp, char far *dst)
{
    int c;

    fgetc(fp);
    while ((c = fgetc(fp)) != '"')
        *dst++ = c;
    *dst = 0;
    while (fgetc(fp) != '\n')
        ;
}

void f_215d_0cb3(FILE *fp, char far *buf)
{
    fgets(buf, 160, fp);
    buf[strlen(buf) - 1] = 0;
}

void f_215d_0cee(FILE *fp, char far *s)
{
    fprintf(fp, "%s\n", s);
}

char far *f_215d_0d0f(void)
{
    char far *p;
    int c;

    p = f_215d_0f2d();
    c = 0;
    if (kbhit())
        c = getch();
    p[0] = c;
    p[1] = 0;
    return p;
}

unsigned long f_215d_0d50(void)
{
    d_61eb_91e3 = d_61eb_91e3 * 1103515245L + 12345;
    return (d_61eb_91e3 >> 16) & 0x7fff;
}

void f_215d_0d81(void)
{
    d_61eb_91e3 = f_215d_0e27();
}

/* A random number below n (two draws make 30 bits). */
unsigned long f_215d_0d96(unsigned long n)
{
    if (n)
        return ((f_215d_0d50() << 16) + f_215d_0d50()) % n;
    return 0;
}

int f_215d_0dcc(char far *path)
{
    if (access(path, 0))
        return 0;
    return -1;
}

void f_215d_0df0(int ticks)
{
    long t;

    t = f_215d_0e27();
    while (f_215d_0e27() < t + ticks * 4)
        ;
}

/* Clock ticks, x 11, not going back at midnight. */
long f_215d_0e27(void)
{
    long t;

    _bios_timeofday(0, &t);
    if (t + d_61eb_91e7 < d_61eb_91eb)
        d_61eb_91e7 += 300000L;
    d_61eb_91eb = t + d_61eb_91e7;
    return d_61eb_91eb * 11;
}

/* s in capitals, accented letters too, in a new string. */
char far *f_215d_0e90(char far *s)
{
    char far *p;
    char i;

    p = f_215d_0f2d();
    i = 0;
    strcpy(p, s);
    for (; p[i]; i++)
        if (p[i] >= 'a' && p[i] <= 'z' || p[i] >= '\xe0' && p[i] <= '\xff')
            p[i] = p[i] - 32;
    return p;
}

/* The next of six text buffers. */
char far *f_215d_0f2d(void)
{
    char far *p = d_5313_0640[d_61eb_d9bb++];

    if (d_61eb_d9bb > 5)
        d_61eb_d9bb = 0;
    return p;
}

/* The last n characters of s. */
char far *f_215d_0f63(char far *s, unsigned n)
{
    char far *p;
    unsigned l;

    p = f_215d_0f2d();
    l = strlen(s);
    if (n <= l)
        strcpy(p, s + (l - n));
    else
        strcpy(p, s);
    return p;
}

/* n characters of s from position i (1-based). */
char far *f_215d_0fb6(char far *s, unsigned i, unsigned n)
{
    unsigned l;
    char far *p;

    p = f_215d_0f2d();
    l = strlen(s);
    if (i > l)
        *p = 0;
    else
        sprintf(p, "%.*s", n, s + (i - 1));
    return p;
}

void f_215d_1016(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
    f_215d_1970();
    f_2301_0002(x1, y1, x2, y2, d_61eb_df25);
    f_215d_18bf();
}

/* s without leading and trailing spaces. */
char far *f_215d_1043(char far *s)
{
    char far *p;
    int i;

    p = f_215d_0f2d();
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

float f_215d_10c4(void)
{
    return rand() / 32767.0;
}

void f_215d_10e1(int x, int y)
{
    char far *s;
    char far *d;
    unsigned j, i;

    s = d_61eb_dce8 + y * 320 + x;
    d = d_61eb_dc84;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++)
            *d++ = *s++;
        s += 312;
    }
}

void f_215d_1136(int x, int y)
{
    char far *s;
    char far *d;
    unsigned j, i;

    d = d_61eb_dce8 + y * 320 + x;
    s = d_61eb_dc84;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++)
            *d++ = *s++;
        d += 312;
    }
}

/* Move the rectangle up by dy rows and fill the rows it leaves with colour. */
void f_215d_118b(unsigned x, int y, unsigned x2, unsigned y2, int dy, int colour)
{
    char far *p;
    char far *q;
    char far *a;
    char far *b;
    unsigned j;
    int i;

    f_215d_1970();
    p = d_61eb_dce8 + y * 320 + x;
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
    f_215d_18bf();
}


void f_215d_124b(void)
{
    if (d_61eb_918e)
        f_23a1_01a4(d_61eb_dc82);
    else
        remove("VM.$$$");
    _AH = 0;
    _AL = d_61eb_dc7e;
    geninterrupt(0x10);
    if (d_61eb_918d)
        f_2380_004e();
    if (d_61eb_df30 == 0)
        f_2386_0040();
}

void f_215d_1292(void)
{
    int h;

    if (d_61eb_918d) {
        d_61eb_dc7a = malloc(11000);
        d_61eb_dc76 = MK_FP(FP_SEG(d_61eb_dc7a) + 1, 0);
        if (d_61eb_918d == 'A')
            h = open("MUSIC93.ALB", O_RDONLY);
        else
            h = open("MUSIC93.RLD", O_RDONLY);
        read(h, d_61eb_dc76, 11000);
        close(h);
        f_2380_001b(d_61eb_dc76);
        if (d_61eb_918d == 'R')
            f_2380_0000();
    }
}

float f_215d_1319(float a, float b)
{
    return a > b ? a : b;
}

int f_215d_1343(int a, int b)
{
    return a > b ? a : b;
}

long f_215d_135c(long a, long b)
{
    return a > b ? a : b;
}

float f_215d_1385(float a, float b)
{
    return a < b ? a : b;
}

int f_215d_13af(int a, int b)
{
    return a < b ? a : b;
}

long f_215d_13c8(long a, long b)
{
    return a < b ? a : b;
}


void f_215d_13f1(char far *a, char far *b, unsigned n)
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
int f_215d_142b(long size)
{
    int h;
    int i;

    if (d_61eb_91ef == 0) {
        if ((d_61eb_dcf0 = farcalloc(64124L, 1L)) == NULL) {
            printf("Not enough memory.\n");
            if (d_61eb_918d) {
                printf("Try re-installing the game\n");
                printf("without selecting sound.\n");
            }
            exit(-1);
        }
        if (f_23a1_000a() == 0) {
            d_61eb_dc82 = f_23a1_0165(200000L);
            if (d_61eb_c9d9 == 0)
                d_61eb_918e = -1;
        }
        if (d_61eb_918e == 0) {
            h = open("VM.$$$", O_CREAT | O_TRUNC | O_WRONLY, S_IREAD | S_IWRITE);
            write(h, d_61eb_dcf0, 1);
            close(h);
        }
        for (i = 0; i < 40; i++) {
            d_61eb_dcf4[i].block = -1;
            d_61eb_dde4[i].size = 0;
        }
    }
    d_61eb_dde4[d_61eb_91ef].size = size;
    if (d_61eb_918e) {
        d_61eb_dde4[d_61eb_91ef].off = d_61eb_91ef == 0 ? 0 :
            d_61eb_dde4[d_61eb_91ef - 1].off + d_61eb_dde4[d_61eb_91ef - 1].size;
        f_23a1_02dc(d_61eb_dde4[d_61eb_91ef].size, d_61eb_dcf0, d_61eb_dc82, d_61eb_dde4[d_61eb_91ef].off);
    } else {
        d_61eb_dde4[d_61eb_91ef].off = d_61eb_91ef == 0 ? 0 :
            d_61eb_dde4[d_61eb_91ef - 1].off + d_61eb_dde4[d_61eb_91ef - 1].size;
        h = open("VM.$$$", O_RDWR);
        lseek(h, d_61eb_dde4[d_61eb_91ef].off, 0);
        write(h, d_61eb_dcf0, size);
        close(h);
    }
    return d_61eb_91ef++;
}

/* Map a virtual memory block into the work buffer (dirty: it will be changed). */
void far *f_215d_1629(int handle, int dirty)
{
    int fd;
    int i;
    char far *p;

    for (i = 0; i < 40; i++)
        if (d_61eb_dcf4[i].block == handle) {
            if (dirty == 1)
                d_61eb_dcf4[i].dirty = dirty;
            return d_61eb_dcf4[i].p;
        }
    if (d_61eb_918e == 0)
        fd = open("VM.$$$", O_RDWR);
    if (d_61eb_91f1 + d_61eb_dde4[handle].size > 64124L) {
        for (i = 0; i < 40; i++)
            if (d_61eb_dcf4[i].block >= 0) {
                if (d_61eb_dcf4[i].dirty == 1) {
                    if (d_61eb_918e == 0) {
                        lseek(fd, d_61eb_dde4[d_61eb_dcf4[i].block].off, 0);
                        write(fd, d_61eb_dcf4[i].p, d_61eb_dde4[d_61eb_dcf4[i].block].size);
                    } else
                        f_23a1_02dc(d_61eb_dde4[d_61eb_dcf4[i].block].size, d_61eb_dcf4[i].p, d_61eb_dc82,
                                    d_61eb_dde4[d_61eb_dcf4[i].block].off);
                }
                d_61eb_dcf4[i].block = -1;
            }
        d_61eb_91f1 = 0;
    }
    for (i = 0; i < 40; i++)
        if (d_61eb_dcf4[i].block == -1)
            break;
    p = d_61eb_dcf0 + d_61eb_91f1;
    if (d_61eb_918e == 0) {
        lseek(fd, d_61eb_dde4[handle].off, 0);
        read(fd, p, d_61eb_dde4[handle].size);
        close(fd);
    } else
        f_23a1_043c(d_61eb_dde4[handle].size, d_61eb_dc82, d_61eb_dde4[handle].off, p);
    d_61eb_dcf4[i].block = handle;
    d_61eb_dcf4[i].dirty = dirty;
    d_61eb_dcf4[i].p = p;
    d_61eb_91f1 = d_61eb_91f1 + d_61eb_dde4[handle].size;
    return p;
}

void f_215d_188e(void)
{
    asm mov ax, 0                           /* not xor: the flags are not changed */
    geninterrupt(0x33);
    d_61eb_df30 = _AX;
    _CX = 900;                              /* the pointer to (900, 100), read back: */
    _DX = 100;                              /* drivers that count x in 0-639 */
    _AX = 4;
    geninterrupt(0x33);
    _AX = 3;
    geninterrupt(0x33);
    if ((int)_CX >= 400)
        d_61eb_918b = 1;
    d_61eb_918a = 1;
}

/* Show the mouse pointer (drawn by hand without a mouse driver). */
void f_215d_18bf(void)
{
    int font;
    char colour;
    char mode;

    if (d_61eb_df30) {
        _AX = 1;
        geninterrupt(0x33);
    } else if (d_61eb_91df == 0 && d_61eb_918a) {
        font = d_61eb_d77e;
        colour = d_61eb_df25;
        mode = d_61eb_918c;
        d_61eb_df2c = d_61eb_91db;
        d_61eb_df2e = d_61eb_91dd;
        f_215d_10e1(d_61eb_df2c, d_61eb_df2e);
        f_215d_0987(1);
        d_61eb_918c = 0;
        f_215d_089b(17);
        f_215d_0a4e(d_61eb_df25, d_61eb_df2c, d_61eb_df2e, 0x7e);
        f_215d_089b(16);
        f_215d_0a4e(d_61eb_df25, d_61eb_df2c, d_61eb_df2e, 0x7f);
        d_61eb_918c = mode;
        d_61eb_df25 = colour;
        f_215d_0987(font);
        d_61eb_91df = 1;
    }
}

void f_215d_1970(void)
{
    if (d_61eb_df30) {
        _AX = 2;
        geninterrupt(0x33);
    } else if (d_61eb_91df) {
        f_215d_1136(d_61eb_df2c, d_61eb_df2e);
        d_61eb_91df = 0;
    }
}

void f_215d_19a3(void)
{
    if (d_61eb_df30) {
        _AX = 3;
        geninterrupt(0x33);
        d_61eb_91e1 = _BX;
        d_61eb_91db = _CX;
        d_61eb_91dd = _DX;
        if (d_61eb_918b)
            d_61eb_91db >>= 1;
    } else if (d_61eb_df2c != d_61eb_91db || d_61eb_df2e != d_61eb_91dd) {
        f_215d_1970();
        f_215d_18bf();
    }
}

void f_215d_19eb(void)
{
}

void f_215d_19f4(void)
{
}

void f_215d_19fd(void)
{
}

/* Without a mouse driver: the keyboard driver off, and the pointer hidden. */
void f_215d_1a06(void)
{
    if (d_61eb_df30 == 0) {
        d_61eb_918a = 0;
        f_215d_1970();
        f_2386_0040();
    }
}

/* Without a mouse driver: the keyboard driver back, and the pointer. */
void f_215d_1a24(void)
{
    if (d_61eb_df30 == 0) {
        f_2386_0006();
        d_61eb_918a = 1;
        f_215d_18bf();
    }
}
