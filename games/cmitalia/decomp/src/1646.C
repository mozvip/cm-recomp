/* @at 1646:0003 */
/* @data 5d51:0322 */
/* @module */

/* Root module 1646: CM93's root module 14bc (games/cm93/decomp/src/14BC.C) changed for CM
 * Italia: text drawing, boxes, buttons and menus, input waits, number and money
 * formatting, player values and ratings, squad slots and positions, the fixture calendar
 * tests by week, player, manager, division and number names, the player shirt and the
 * players' complaints, and Italia's league helpers (716c, 717d). */
#include <string.h>
#include <fcntl.h>
#include <alloc.h>
#include <bios.h>
#include <conio.h>
#include <ctype.h>
#include <io.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <math.h>
#include <mem.h>

/* the functions of the segment */
void f_1646_0003(float x, int team, char far *title);
void f_1646_015c(int x1, int y1, int x2, int y2);
long f_1646_0204(int p, int n);
void f_1646_0b2f(int line, char far *s);
void f_1646_0b9f(char far *s);
void f_1646_0bf2(char far *s);
char f_1646_0ccd(void);
long f_1646_0da1(long v, char c);
long f_1646_0e45(long v);
char far *f_1646_0ee9(long amount);
void f_1646_0f3a(int p);
void f_1646_12ef(unsigned char team, unsigned char pos);
void f_1646_13f1(register int player);
void f_1646_174b(int p);
void f_1646_1a2f(int p);
void f_1646_1e79(int p);
int f_1646_1f63(int player);
int f_1646_1fdb(int player);
int f_1646_2075(int a, int player, int c);
long f_1646_23f5(int player, int team, unsigned char pos, unsigned char second);
int f_1646_2551(unsigned char a);
char f_1646_258b(int w);
char f_1646_2646(int w);
char f_1646_2674(int w);
char f_1646_26cf(int w);
char f_1646_2726(int w);
char f_1646_2785(int w);
char f_1646_27d8(int w);
char f_1646_2833(int w, int n);
char f_1646_28e4(int w, int n);
char f_1646_297b(int w, int n);
char f_1646_2a0c(int w, int n);
char f_1646_2aa7(int w);
char f_1646_2b06(int w);
char f_1646_2b65(int w, int n);
char f_1646_2ba4(int w);
char f_1646_2bb5(int w, int n);
char f_1646_2c1c(int x);
int f_1646_2c39(int a, int b);
char f_1646_2cc9(int x);
float f_1646_2cfd(int x);
int f_1646_2dce(int x);
char f_1646_2e15(int player);
char f_1646_2e7d(int player);
char far *f_1646_2f4b(int x, char c);
void f_1646_2fa4(int n, char far *title, char far *items);
void f_1646_32eb(int a, int b, int line);
void f_1646_3348(int last);
static void f_1646_3522(int i);
char far *f_1646_3537(int x);
void f_1646_357e(int x, int y, int colour, char far *s);
void f_1646_3686(float x, float y, int bg, int fg, int w, char far *s);
void f_1646_38d0(float x, float y, int colour, char far *s);
void f_1646_3a4a(float x, float y, int bg, int fg, int w, char far *s);
void f_1646_3c89(float x, float y, int colour, char far *s);
void f_1646_3e54(float x, float y, int bg, int fg, int w, char far *s);
static void f_1646_42d5(float x, float y, int bg, int fg, int w, int len, char far *s);
static void f_1646_4517(float x, float y, int team);
void f_1646_459b(float x, float y, int team);
char far *f_1646_4616(int n, char far *s);
int f_1646_46a0(int team);
int f_1646_46e2(int team);
char far *f_1646_470f(int player);
char far *f_1646_4849(int player);
char far *f_1646_48c0(int player);
char far *f_1646_4919(int manager, char full);
char far *f_1646_4a20(int player);
char far *f_1646_4a8f(int division);
char far *f_1646_4b1e(int division, char full);
void f_1646_4ba0(char far *title);
void f_1646_4d19(float x, int w, char far *prompt);
void f_1646_4dae(int x, float y, int colour, int maxlen);
void f_1646_5020(void);
void f_1646_50c5(int a, float x, float y, int c, int d, int e, char far *s);
void f_1646_545c(int n, char swap);
int f_1646_5602(int a);
void f_1646_5869(int team);
void f_1646_587e(void);
void f_1646_58a8(int a);
void f_1646_5a1a(void);
static char far *f_1646_5a47(char far *s);
long f_1646_5ac3(int team);
void f_1646_5bcb(int team, char far *title, char far *text);
int f_1646_5da8(FILE *fp);
char f_1646_5de5(int player);
char f_1646_5dff(int player);
int f_1646_5e11(int player);
unsigned char f_1646_5e2d(int player);
unsigned char f_1646_5e4a(int player, unsigned char a);
void f_1646_5f46(void);
void f_1646_5f8e(int a, int b, char far *s);
void f_1646_6097(void);
void f_1646_60a7(void);
char f_1646_60b7(int p);
char f_1646_60fb(char team, char week, char n);
void f_1646_6102(unsigned char team, unsigned char player, unsigned x, unsigned y);
char f_1646_66f8(int a, int b);
char f_1646_68af(int x);
char f_1646_68d1(int x);
char f_1646_68ee(int x);
char f_1646_690b(int x);
char f_1646_692d(int x);
char f_1646_694f(int x);
char f_1646_6971(char x);
double f_1646_69a0(int x, int y);
int f_1646_6a5c(int a, int b, int c);
int f_1646_6aa9(int x);
float f_1646_6ab8(int x);
char f_1646_6ae2(int player, char c);
char f_1646_6f38(int player);
char f_1646_6f56(int player);
int f_1646_6f80(int player, int club);
char f_1646_7125(void);
unsigned char f_1646_716c(unsigned char league);
unsigned char f_1646_717d(char team);

char unmapped_f_14bc_248a(int w);
char unmapped_f_14bc_2545(int w);
char unmapped_f_14bc_2ab7(int w, int n);
char unmapped_f_14bc_2b02(int x);
char unmapped_f_14bc_2b82(int x);
void f_1d5e_0822(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_1d5e_08cc(int c);
void f_1d5e_08d7(int colour);
void f_1d5e_0fe3(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_1d5e_08e2(int x1, int y1, int x2, int y2);
unsigned f_1d5e_0b1c(char far *s, char far *set);
void f_1d5e_0dbd(int ticks);
int f_1d5e_1308(int a, int b);
long f_1d5e_131d(long a, long b);
int f_1d5e_136a(int a, int b);
void far *f_1d5e_1618(int handle, int page);
struct flags_a { unsigned char b0; unsigned f8 : 1; unsigned f9 : 1; unsigned : 6; unsigned : 2; unsigned f18 : 1; unsigned f19 : 1; unsigned : 4; unsigned : 0; unsigned f24 : 1; unsigned : 3; unsigned f28 : 1; unsigned : 1; unsigned f30 : 1; unsigned : 1; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
extern union flags far d_2414_af3c[];
extern int d_5d51_dd9c;
extern unsigned char far d_3c0d_0000[][1500];
extern unsigned char far d_44d7_0000[][1500];
extern int far d_2403_0000[];
extern float far d_2406_0000[];
extern int far d_3404_691c[];
extern int far d_3404_4226[];
extern unsigned char far d_3404_2770[][650];
extern float d_5d51_d4e9;
extern float d_5d51_d4ed;
extern char far d_2414_4b56[];
extern unsigned char far d_3404_448a[];
extern char near *d_5d51_b476[];
extern long d_5d51_d455;
extern long d_5d51_d459;
extern float d_5d51_d4e5;
extern float d_5d51_d4f1;
extern float d_5d51_d4f5;
extern float d_5d51_d541;
extern char d_5d51_d597;
extern int d_5d51_d77e;
extern int d_5d51_d784;
extern int d_5d51_d786;
extern int d_5d51_d788;
extern int d_5d51_d78a;
extern int d_5d51_d78c;
extern int d_5d51_d78e;
extern int d_5d51_d790;
extern int d_5d51_d944;
extern int d_5d51_d9bc;
extern int d_5d51_d9e4;
extern int d_5d51_da04;
extern int (far *d_5d51_da4c)[1500];
extern long far *d_5d51_da58;
extern int d_5d51_dda2;
char far *f_1d5e_0efc(void);
extern int far d_44d7_9624[][26];
extern int far d_44d7_9ddc[][2][13];
extern int far d_3404_0e34[][16];
extern unsigned char far d_3404_1334[][3][16];
extern unsigned char far d_3404_24e6[];
extern unsigned char far d_3404_4552[];
extern unsigned char far d_2414_c6dc[][80];
extern unsigned char far d_2414_c6ec[][80];
extern int d_5d51_d6a0;
extern int d_5d51_d6a2;
extern int d_5d51_d6a4;
extern int d_5d51_d6a6;
extern int d_5d51_d6a8;
extern int d_5d51_d6aa;
extern int d_5d51_d6ac;
extern int d_5d51_d6ae;
extern int d_5d51_d6b2;
extern int d_5d51_d6b6;
extern int d_5d51_d6b8;
extern int d_5d51_d6ba;
extern int d_5d51_d6be;
extern int d_5d51_d6c0;
extern int d_5d51_d6c2;
extern int d_5d51_d6c4;
extern int d_5d51_d6c6;
extern int d_5d51_d7ce;
extern int d_5d51_d91c;
extern int d_5d51_d94a;
extern int d_5d51_d94c;
extern int d_5d51_d9a0;
extern int d_5d51_d9ca;
extern int d_5d51_d9fe;
extern int d_5d51_d696;
extern int d_5d51_d698;
extern int d_5d51_d69a;
extern int d_5d51_d69c;
extern int d_5d51_d69e;
extern int d_5d51_d7a8;
extern unsigned char far d_44d7_6978[];
extern int far d_3404_51ac[];
extern unsigned char far d_4f37_0761[][12][5];
void f_1d5e_03a3(char on);
void f_1d5e_099e(int a);
void f_1d5e_09ea(int x, int y, char far *s);
void f_1d5e_0b11(int on);
int f_1d5e_0c07(void);
int f_1d5e_0c0f(void);
int f_1d5e_0c17(void);
long f_1d5e_0df7(void);
char far *f_1d5e_0e5f(char far *s);
extern unsigned far d_2412_0019;
extern unsigned far d_2412_001b;
extern char far d_2414_0848[][80];
extern char far d_2414_5164[];
extern char far d_2414_544c[];
extern unsigned char far d_2414_c6ac[][5][16];
extern float far d_2414_fd6c[];
extern float far d_2414_fdbc[];
extern float far d_2414_fe0c[];
extern unsigned char far d_3404_443a[][82];
extern unsigned char far d_3404_44da[];
extern unsigned char far d_3404_45ca[][82];
extern unsigned char far d_3404_45f2[];
extern unsigned char far d_4f37_099e[];
extern int far d_4f37_1390[][2][98];
extern char near *d_5d51_b4ca[];
extern float d_5d51_d551;
extern float d_5d51_d555;
extern char d_5d51_d56b;
extern char d_5d51_d5e7;
extern int d_5d51_d630;
extern int d_5d51_d65e;
extern int d_5d51_d660;
extern int d_5d51_d662;
extern int d_5d51_d664;
extern int d_5d51_d82a;
extern int d_5d51_d98e;
extern int d_5d51_d9b8;
extern int d_5d51_d9de;
extern int d_5d51_da0a;
extern unsigned char far d_3404_0728[];
extern unsigned char far d_2412_0000[];
extern int d_5d51_d756;
extern int d_5d51_d7fc;
extern int d_5d51_d9d4;
void f_1d5e_034e(void);
void f_1d5e_0929(int x1, int y1, int x2, int y2);
char far *f_1d5e_0ced(void);
char far *f_1d5e_0158();
void f_1d5e_1a33(void);
void f_1d5e_1a4d(void);
extern char far *far d_56d9_0000[];
extern char far *far d_56d9_13b9[];
extern int far d_3404_5d64[];
extern int far d_3404_74d4[];
extern char far d_2414_0e88[][40];
extern char far d_2414_36ce[];
extern char far d_2414_376e[];
extern char far d_2414_43f4[];
extern char far d_2414_4944[];
extern char far d_2414_4962[][4][20];
extern unsigned char far d_2414_539c[];
extern float far d_2414_f1f4[][100];
extern unsigned char far d_44d7_8cd0[][100];
extern unsigned char far d_44d7_8d34[];
extern char d_5d51_d596;
extern int d_5d51_d62e;
extern int d_5d51_d900;
extern int d_5d51_d97e;
extern int d_5d51_d9c6;
extern int d_5d51_d9ce;
extern float d_5d51_d4b1;
extern float d_5d51_d4b9;
extern float d_5d51_d539;
extern float d_5d51_d545;
extern float d_5d51_d549;
extern int (far *d_5d51_da34)[2][16];
extern int (far *d_5d51_da48)[650];
extern int d_5d51_dd90;
extern int d_5d51_dd9a;
extern char near d_5d51_0522[];
extern char near d_5d51_053a[];
extern char near d_5d51_052a[];
extern char near d_5d51_052d[];
extern char near d_5d51_053f[];
extern char near d_5d51_0534[];
extern char near d_5d51_0540[];
extern char near d_5d51_0546[];
extern char near d_5d51_054a[];
long f_1d5e_0d6a(long n);
void f_1d5e_13a4(void far *a, void far *b, int n);
long f_9e79_2216(int team);
void f_a13d_3539(void);
void f_a13d_3631(void);
void f_a7f0_3cfa(void);
extern char far d_2412_0016;
extern int far d_2412_0017;
extern unsigned far d_2412_001d;
extern char far d_2414_2378[];
extern char far d_2414_2cec[];
extern struct { int a, b, start, len; } far d_2414_a5dc[];
extern long far d_3404_3e4a[][38];
extern long d_5d51_d415;
extern long d_5d51_d419;
extern long d_5d51_d41d;
extern long d_5d51_d421;
extern float d_5d51_d4a9;
extern float d_5d51_d4ad;
extern char d_5d51_d568;
extern char d_5d51_d580;
extern char d_5d51_d586;
extern char d_5d51_d5e4;
extern char d_5d51_d5e5;
extern char d_5d51_d5e6;
extern char d_5d51_d5ea;
extern int d_5d51_d62a;
extern int d_5d51_d62c;
extern int d_5d51_d65a;
extern int d_5d51_d65c;
extern int d_5d51_d8ee;
extern int d_5d51_d9d8;
extern int d_5d51_da1a;
extern char far *d_5d51_da30;
extern unsigned char (far *d_5d51_da38)[1500];
extern long (far *d_5d51_da44)[38];
extern int d_5d51_daba;
extern int d_5d51_dd8e;
extern int d_5d51_dd92;
extern int d_5d51_dd98;
float f_1d5e_1342(float a, float b);
extern unsigned char far d_4f37_0bba[];
extern unsigned char far d_3404_50e2[][16];
extern int far d_3404_4272[];
extern unsigned char far d_3404_225c[];
extern unsigned char far d_4f37_0960[][10];
extern char far d_2414_3950[];
extern float far d_240d_0000[];
extern int d_5d51_d942;
extern int d_5d51_d8f2;
extern int d_5d51_d8f4;
extern int d_5d51_da06;
extern int d_5d51_da18;
extern char d_5d51_d599;
extern char d_5d51_d59a;
extern char d_5d51_d59c;
extern char d_5d51_d59f;
extern int d_5d51_d828;
extern int d_5d51_d792;
extern int d_5d51_d794;
extern int d_5d51_d796;
extern int d_5d51_d798;
extern int d_5d51_d7a6;


void f_1646_0003(float x, int team, char far *title)
{
    char buf[320];

    f_1646_4ba0("");
    sprintf(d_2414_4b56, "%s %s", (char far *)d_5d51_b476[team], title);
    if (x == -1)
        d_5d51_d541 = 19 - strlen(d_2414_4b56) / 2;
    else
        d_5d51_d541 = x;
    f_1d5e_08cc(16);
    f_1d5e_08e2((d_5d51_d541 * 8 + 6), 7, ((strlen(d_2414_4b56) + d_5d51_d541) * 8 + 19), 21);
    sprintf(buf, " %s ", d_2414_4b56);
    f_1646_3e54(d_5d51_d541, 1.125, -(d_3404_448a[team] / 16), d_3404_448a[team] % 16, 0, buf);
}

/* Draws a filled box with a drop shadow and a two-tone border. */
void f_1646_015c(int x1, int y1, int x2, int y2)
{
    f_1d5e_08cc(16);
    f_1d5e_08e2(x1 + 4, y1 + 4, x2 + 1, y2 + 1);
    f_1d5e_08cc(d_5d51_d944 + 16);
    f_1d5e_08e2(x1, y1, x2, y2);
    f_1d5e_08d7(17);
    f_1d5e_0fe3(x1, y2, x1, y1);
    f_1d5e_0fe3(x1, y1, x2, y1);
    f_1d5e_08d7(16);
    f_1d5e_0fe3(x2, y1, x2, y2);
    f_1d5e_0fe3(x2, y2, x1, y2);
}

/* Player p's transfer value to team n (-1: none). CM1's unmapped_f_88c9_12b3, reworked: 60-game
   form window, the player flags d_2414_af3c in place of CM1's unmapped_d_1f3e_5be8 rows, more
   attributes. The float m is declared per block: it sits below the temporaries. Italia: base
   1000 (CM93 600), d597 also set by the paged row d_5d51_da38[9][p] (status 2, 3, 8, 11, 30,
   57, 59, 60), Serie B players (f_1646_717d) halved where CM93 cut by division, 38 clubs. */
long f_1646_0204(int p, int n)
{
    if (p != d_5d51_d790) {
        float m;

        d_5d51_d78e = f_1d5e_136a(d_3c0d_0000[5][p], 60);
        d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
        if (d_3c0d_0000[5][p] > 0)
            d_5d51_d4f5 = d_5d51_da4c[1][p] / (float)d_3c0d_0000[5][p] * 2.0;
        else
            d_5d51_d4f5 = 0;
        d_5d51_d78c = f_1d5e_136a(d_3c0d_0000[0][p], 60);
        if (d_3c0d_0000[0][p] > 0)
            d_5d51_d4f1 = d_5d51_da4c[0][p] / (float)d_3c0d_0000[0][p] * 2.0;
        else
            d_5d51_d4f1 = 0;
        d_5d51_d78a = (d_44d7_0000[0][p] * (60 - d_5d51_d78e) * 0.1 + d_5d51_d78e * d_5d51_d4f5) / 60.0 * 0.5
                    + (d_44d7_0000[0][p] * (60 - d_5d51_d78c) * 0.1 + d_5d51_d78c * d_5d51_d4f1) / 60.0 * 0.5;
        d_5d51_d78a = f_1d5e_1308(f_1d5e_136a(d_5d51_d78a, 20), 1);
        if (d_2414_af3c[p].w.f0) {
            d_5d51_d4ed = 1;
            d_5d51_d4e9 = 1;
            d_5d51_d4e5 = 1;
        } else {
            d_5d51_d4ed = d_2414_af3c[p].w.f1 / 10.0 + 0.9 + d_2414_af3c[p].w.f2 / 10.0 + d_2414_af3c[p].w.f3 / 10.0;
            d_5d51_d4e9 = d_2414_af3c[p].w.f4 / 10.0 + 0.9 + d_2414_af3c[p].w.f5 / 10.0 + d_2414_af3c[p].w.f6 / 10.0;
            d_5d51_d4e5 = d_44d7_0000[2][p] / 10.0 * 0.0375 + 0.7
                        + d_44d7_0000[1][p] / 10.0 * 0.06125
                        + d_44d7_0000[3][p] / 10.0 * 0.025
                        + d_44d7_0000[5][p] / 10.0 * 0.1
                        + d_44d7_0000[6][p] / 10.0 * 0.075
                        + d_44d7_0000[7][p] / 10.0 * 0.15
                        + d_44d7_0000[8][p] / 5.0 * 0.06;
        }
        if (d_2414_af3c[p].w.f18 && d_2414_af3c[p].w.f19 == 0
                || d_5d51_da38[9][p] == 2 || d_5d51_da38[9][p] == 3 || d_5d51_da38[9][p] == 8
                || d_5d51_da38[9][p] == 11 || d_5d51_da38[9][p] == 30 || d_5d51_da38[9][p] == 57
                || d_5d51_da38[9][p] == 59 || d_5d51_da38[9][p] == 60)
            d_5d51_d597 = -1;
        else
            d_5d51_d597 = 0;
        m = d_2406_0000[d_44d7_0000[17][p] - 16];
        d_5d51_d459 = d_2403_0000[d_5d51_d78a - 1] * m
                    * d_5d51_d4ed * d_5d51_d4e9 * d_5d51_d4e5 * 1000.0 * (d_5d51_d597 ? 1.25 : 1);
        if (d_2414_af3c[p].w.f28 && d_44d7_0000[17][p] < 30)
            d_5d51_d459 = d_5d51_d459 * 1.25;
        if (d_44d7_0000[18][p] < 38 && (int)f_1646_717d(d_44d7_0000[18][p]) == 1)
            d_5d51_d459 = d_5d51_d459 / 2;
    }
    if (n == -1 || n >= 38)
        d_5d51_d455 = d_5d51_d459 * (d_44d7_0000[23][p] == 1 ? 1.5 : 1);
    else {
        if (d_44d7_0000[18][p] == n) {
            if (!d_2414_af3c[p].w.f8 || d_2414_af3c[p].w.f8 && d_2414_af3c[p].w.f24) {
                float m;

                m = 1;
                d_5d51_d784 = f_1d5e_1308(d_3404_691c[p] / 100 - d_5d51_da04, 0);
                m += d_5d51_d784 / 5.0;
                if (d_3404_691c[p] == 0)
                    m += 0.5;
                if (d_44d7_0000[23][p] == 1)
                    m += 0.5;
                d_5d51_d455 = d_5d51_d459 * m;
            } else {
                d_5d51_da58 = f_1d5e_1618(d_5d51_dda2, 0);
                d_5d51_d455 = d_5d51_da58[p];
            }
        } else {
            float m;

            m = 1;
            d_5d51_d784 = f_1d5e_1308(d_3404_691c[p] / 100 - d_5d51_da04, 0);
            m += d_5d51_d784 / 5.0;
            if (d_3404_691c[p] == 0)
                m += 0.5;
            if (d_44d7_0000[23][p] == 1)
                m += 0.5;
            d_5d51_d455 = d_5d51_d459 * m;
        }
        if (!d_2414_af3c[p].w.f8 && d_44d7_0000[17][p] < (d_2414_af3c[p].w.f0 ? 31 : 27)) {
            d_5d51_d788 = f_1d5e_1308(10.0 - d_3404_2770[0][d_3404_4226[n]] * 0.05, 1);
            d_5d51_d786 = f_1d5e_1308(f_1d5e_136a(d_44d7_0000[9][p] * 0.1 + p % d_5d51_d788 - d_5d51_d788 * 0.5, 20), 1);
            d_5d51_d455 = d_5d51_d455 * 0.95 + d_2403_0000[d_5d51_d786 - 1] * 50L;
        }
    }
    if (!d_2414_af3c[p].w.f8 || f_1646_2cc9(d_44d7_0000[18][p]) == 0)
        d_5d51_d455 = f_1646_0da1(d_5d51_d455, -1);
    d_5d51_d790 = p;
    return f_1d5e_131d(d_5d51_d455, d_5d51_d455 ? 1000 : 0);
}

void f_1646_0b2f(int line, char far *s)
{
    d_5d51_d9bc = 9;
    if (line == 4)
        d_5d51_d9bc = 1;
    else if (line == 7)
        d_5d51_d9bc = 6;
    else if (line == 9 || line < 0)
        d_5d51_d9bc = 5;
    if (line < 0)
        line = -line;
    f_1646_3c89(2.0, line, d_5d51_d9bc, s);
}

void f_1646_0b9f(char far *s)
{
    f_1646_3c89(2.0, 22.5, 1, s);
    f_1d5e_0dbd(75);
    f_1d5e_0822(4, 175, 316, 190);
}

void f_1646_0bf2(char far *s)
{
    char buf[80];

    f_1646_4ba0("");
    d_5d51_d9e4 = f_1d5e_0b1c(s, "|");
    if (d_5d51_d9e4 == 0)
        f_1646_3c89(-1.0, 12.5, 6, s);
    else {
        strcpy(buf, s);
        buf[d_5d51_d9e4 - 1] = 0;
        f_1646_3c89(-1.0, 11.5, 6, buf);
        strcpy(buf, s + d_5d51_d9e4);
        f_1646_3c89(-1.0, 13.5, 6, buf);
    }
    f_1646_58a8(0);
}

char f_1646_0ccd(void)
{
    f_1646_3c89(2.0, 22.5, 5, "Confirm");
    f_1646_50c5(2, 9.0, 22.5, 6, 2, 0, " Y ");
    f_1646_50c5(2, 13.0, 22.5, 6, 2, 0, " N ");
    do
        d_5d51_d77e = f_1646_5602(0);
    while (d_5d51_d77e <= 0);
    f_1d5e_0822(4, 174, 160, 191);
    return d_5d51_d77e == 1 ? -1 : 0;
}

long f_1646_0da1(long v, char c)
{
    long r;

    if (v < 10000L)
        r = 1000;
    else if (v < 100000L)
        r = c ? 10000 : 5000;
    else if (v < 1000000L)
        r = c ? 50000L : 10000L;
    else
        r = c ? 100000L : 25000L;
    return v / r * r;
}

long f_1646_0e45(long v)
{
    long r;

    if (v <= 100000L)
        r = 50000L;
    else if (v <= 500000L)
        r = 100000L;
    else if (v <= 1000000L)
        r = 250000L;
    else
        r = 500000L;
    return f_1d5e_131d(v / r * r, v ? 50000L : 0L);
}

char far *f_1646_0ee9(long amount)
{
    char far *s;

    s = f_1d5e_0efc();
    if (amount)
        sprintf(s, "%ld", amount);
    else
        strcpy(s, "Free");
    return s;
}

void f_1646_0f3a(int p)
{
    long best, cur, other;

    d_5d51_d6c2 = p;
    if (!f_1646_5dff(d_5d51_d6c2)) {
        d_5d51_d9ca = d_44d7_0000[18][d_5d51_d6c2];
        if (d_2414_af3c[d_5d51_d6c2].w.f7 == 0)
            return;
        d_2414_af3c[d_5d51_d6c2].w.f7 = 0;
    } else {
        d_5d51_d9ca = f_1646_5e11(d_5d51_d6c2);
        if (d_2414_c6ec[d_5d51_d9ca][f_1646_5e2d(d_5d51_d6c2)] == 0)
            return;
        d_2414_c6ec[d_5d51_d9ca][f_1646_5e2d(d_5d51_d6c2)] = 0;
    }
    d_5d51_d6be = d_5d51_d6c0 = f_1646_1f63(d_5d51_d6c2);
again:
    d_3404_0e34[d_5d51_d9ca][d_5d51_d6be] = 1499;
    best = -5000;
    d_5d51_d6ba = -1;
    d_5d51_d6b8 = -1;
    for (d_5d51_d9a0 = 0; d_5d51_d9a0 <= d_3404_4552[d_5d51_d9ca] - 1; d_5d51_d9a0++) {
        d_5d51_d6b6 = d_44d7_9624[d_5d51_d9ca][d_5d51_d9a0];
        if (d_44d7_0000[20][d_5d51_d6b6] == 0) {
            d_5d51_d91c = d_3404_1334[d_5d51_d9ca][0][d_5d51_d6be];
            if (d_5d51_d91c > 1 || (d_5d51_d91c == 1 && d_2414_af3c[d_5d51_d6b6].w.f0)) {
                cur = f_1646_2075(d_5d51_d91c, d_5d51_d6b6, d_3404_24e6[d_3404_4226[d_5d51_d9ca]] / 16);
                cur = cur * d_44d7_0000[15][d_5d51_d6b6];
                if (cur > best) {
                    if (d_2414_af3c[d_5d51_d6b6].w.f7) {
                        d_5d51_d6c0 = f_1646_1f63(d_5d51_d6b6);
                        if ((d_5d51_d6be < 11 && d_5d51_d6c0 < 11) || (d_5d51_d6be > 10 && d_5d51_d6c0 > 10)
                            || (d_5d51_d6c0 > 10 && d_5d51_d6be < 11)) {
                            other = f_1646_2075(d_3404_1334[d_5d51_d9ca][0][d_5d51_d6c0], d_5d51_d6b6,
                                                d_3404_24e6[d_3404_4226[d_5d51_d9ca]] / 16);
                            other = other * d_44d7_0000[15][d_5d51_d6b6];
                            if (cur > other || (d_5d51_d6c0 > 10 && d_5d51_d6be < 11)) {
                                best = cur;
                                d_5d51_d6ba = d_5d51_d6b6;
                                d_5d51_d6b8 = d_5d51_d6c0;
                            }
                        }
                    }
                    if (d_2414_af3c[d_5d51_d6b6].w.f7 == 0) {
                        best = cur;
                        d_5d51_d6ba = d_5d51_d6b6;
                        d_5d51_d6b8 = -1;
                    }
                }
            }
        }
    }
    if (d_5d51_d6ba == -1) {
        f_1646_12ef(d_5d51_d9ca, d_5d51_d6be);
    } else {
        d_5d51_d6c2 = d_5d51_d6ba;
        d_3404_0e34[d_5d51_d9ca][d_5d51_d6be] = d_5d51_d6c2;
        d_2414_af3c[d_5d51_d6c2].w.f7 = 1;
        if (d_5d51_d6b8 > -1) {
            d_5d51_d6be = d_5d51_d6b8;
            goto again;
        }
    }
}

void f_1646_12ef(unsigned char team, unsigned char pos)
{
    unsigned char i, want, best;
    register int p, found;

    want = d_3404_1334[team][0][pos];
    best = 0;
    for (i = 0; i <= 15; i = i + 1) {
        if (d_2414_c6dc[team][i] == 0 && d_2414_c6ec[team][i] == 0) {
            p = team * 20 + i + 3000;
            if (f_1646_5e4a(p, want) > best) {
                best = f_1646_5e4a(p, want);
                found = p;
            }
        }
    }
    d_3404_0e34[team][pos] = found;
    d_2414_c6ec[team][f_1646_5e2d(found)] = -1;
}

void f_1646_13f1(register int player)
{
    long best, a, b;

    if (d_2414_af3c[player].w.f7)
        return;
    d_5d51_d9ca = d_44d7_0000[18][player];
again:
    d_5d51_d6b2 = -1;
    best = -5000;
    d_5d51_d94c = d_2414_af3c[player].w.f0 ? 0 : 1;
    d_5d51_d94a = d_2414_af3c[player].w.f0 ? 0 : 14;
loop:
    for (d_5d51_d9fe = d_5d51_d94c; d_5d51_d9fe <= d_5d51_d94a; d_5d51_d9fe++) {
        d_5d51_d6c6 = d_3404_0e34[d_5d51_d9ca][d_5d51_d9fe];
        if (!f_1646_5dff(d_5d51_d6c6)) {
            a = f_1646_2075(d_3404_1334[d_5d51_d9ca][0][d_5d51_d9fe], d_5d51_d6c6,
                            d_3404_24e6[d_3404_4226[d_5d51_d9ca]] / 16);
            a = a * d_44d7_0000[15][d_5d51_d6c6];
        } else
            a = f_1646_5e4a(d_5d51_d6c6, d_3404_1334[d_5d51_d9ca][0][d_5d51_d9fe]);
        b = f_1646_2075(d_3404_1334[d_5d51_d9ca][0][d_5d51_d9fe], player,
                        d_3404_24e6[d_3404_4226[d_5d51_d9ca]] / 16);
        b = b * d_44d7_0000[15][player];
        if (b > a && b - a > best && (d_5d51_d9fe < 11 || (d_5d51_d9fe > 10 && d_5d51_d6b2 == -1))) {
            best = b - a;
            d_5d51_d6b2 = d_5d51_d9fe;
        }
    }
    if (d_2414_af3c[player].w.f0 && d_5d51_d94c == 0) {
        d_5d51_d94c = 15;
        d_5d51_d94a = 15;
        goto loop;
    }
    if (d_5d51_d6b2 == -1)
        return;
    d_2414_af3c[player].w.f7 = 1;
    if (!f_1646_5dff(d_3404_0e34[d_5d51_d9ca][d_5d51_d6b2]))
        d_2414_af3c[d_3404_0e34[d_5d51_d9ca][d_5d51_d6b2]].w.f7 = 0;
    else
        d_2414_c6ec[d_5d51_d9ca][f_1646_5e2d(d_3404_0e34[d_5d51_d9ca][d_5d51_d6b2])] = 0;
    d_5d51_d6ae = d_3404_0e34[d_5d51_d9ca][d_5d51_d6b2];
    d_3404_0e34[d_5d51_d9ca][d_5d51_d6b2] = player;
    if (!f_1646_5dff(d_5d51_d6ae)) {
        player = d_5d51_d6ae;
        if (d_5d51_d6b2 < 13)
            goto again;
    }
}

void f_1646_174b(int p)
{
    long cur, best, other;

    d_5d51_d6c2 = p;
    if (d_44d7_0000[23][d_5d51_d6c2] == 3)
        return;
    d_5d51_d9ca = d_44d7_0000[18][d_5d51_d6c2];
    d_5d51_d6be = d_5d51_d6c0 = f_1646_1fdb(d_5d51_d6c2);
    d_5d51_d6ac = d_5d51_d6aa;
    d_44d7_0000[23][d_5d51_d6c2] = 3;
again:
    d_5d51_d6c4 = 1499;
    d_44d7_9ddc[d_5d51_d9ca][d_5d51_d6ac][d_5d51_d6be] = d_5d51_d6c4;
    best = -5000;
    d_5d51_d6ba = -1;
    for (d_5d51_d9a0 = 0; d_5d51_d9a0 <= d_3404_4552[d_5d51_d9ca] - 1; d_5d51_d9a0++) {
        d_5d51_d6b6 = d_44d7_9624[d_5d51_d9ca][d_5d51_d9a0];
        d_5d51_d91c = d_3404_1334[d_5d51_d9ca][0][d_5d51_d6be];
        if (f_1646_66f8(d_5d51_d6b6, d_5d51_d91c)) {
            cur = f_1646_23f5(d_5d51_d6b6, d_5d51_d9ca, d_5d51_d91c, d_5d51_d6ac == 1 ? 1 : 0);
            if (cur > best) {
                if ((d_5d51_d6ac == 0 && d_44d7_0000[23][d_5d51_d6b6] < 3)
                    || (d_5d51_d6ac == 1 && d_44d7_0000[23][d_5d51_d6b6] == 2)) {
                    d_5d51_d6c0 = f_1646_1fdb(d_5d51_d6b6);
                    other = f_1646_23f5(d_5d51_d6b6, d_5d51_d9ca, d_3404_1334[d_5d51_d9ca][0][d_5d51_d6c0],
                                        d_5d51_d6ac == 1 ? 1 : 0);
                    if (cur > other || (d_5d51_d6ac == 0 && d_5d51_d6aa == 1)) {
                        best = cur;
                        d_5d51_d6ba = d_5d51_d6b6;
                        d_5d51_d6a8 = d_5d51_d6c0;
                        d_5d51_d6a6 = d_5d51_d6aa;
                    }
                }
            }
            if (cur > best && d_44d7_0000[23][d_5d51_d6b6] == 3) {
                best = cur;
                d_5d51_d6ba = d_5d51_d6b6;
                d_5d51_d6a8 = -1;
                d_5d51_d6a6 = -1;
            }
        }
    }
    if (d_5d51_d6ba > -1 && d_5d51_d6ba < 1499) {
        d_5d51_d6b6 = d_5d51_d6ba;
        d_44d7_9ddc[d_5d51_d9ca][d_5d51_d6ac][d_5d51_d6be] = d_5d51_d6b6;
        d_44d7_0000[23][d_5d51_d6b6] = d_5d51_d6ac + 1;
        if (d_5d51_d6a8 > -1) {
            d_5d51_d6be = d_5d51_d6a8;
            d_5d51_d6ac = d_5d51_d6a6;
            goto again;
        }
    } else {
        d_5d51_d6c4 = 1499;
        d_44d7_9ddc[d_5d51_d9ca][d_5d51_d6ac][d_5d51_d6be] = d_5d51_d6c4;
    }
}

void f_1646_1a2f(int p)
{
    long best, a, b, c;

    d_5d51_d6c2 = p;
    if (d_44d7_0000[23][d_5d51_d6c2] == 1)
        return;
    d_5d51_d7ce = 0;
    d_5d51_d9ca = d_44d7_0000[18][d_5d51_d6c2];
again:
    d_5d51_d6c0 = f_1646_1fdb(d_5d51_d6c2);
    if (d_5d51_d6aa > -1) {
        d_5d51_d6c4 = 1499;
        d_44d7_9ddc[d_5d51_d9ca][d_5d51_d6aa][d_5d51_d6c0] = d_5d51_d6c4;
    }
    d_44d7_0000[23][d_5d51_d6c2] = 3;
    d_5d51_d6a4 = -1;
    best = -5000;
    if (d_2414_af3c[d_5d51_d6c2].w.f0) {
        d_5d51_d94c = 0;
        d_5d51_d94a = 0;
    } else {
        d_5d51_d94c = 1;
        d_5d51_d94a = 10;
    }
    for (d_5d51_d9fe = d_5d51_d94c; d_5d51_d9fe <= d_5d51_d94a; d_5d51_d9fe++) {
        if (f_1646_66f8(d_5d51_d6c2, d_3404_1334[d_5d51_d9ca][0][d_5d51_d9fe])) {
            d_5d51_d6c6 = d_44d7_9ddc[d_5d51_d9ca][d_5d51_d7ce][d_5d51_d9fe];
            a = f_1646_23f5(d_5d51_d6c6, d_5d51_d9ca, d_3404_1334[d_5d51_d9ca][0][d_5d51_d9fe],
                            d_5d51_d7ce == 1 ? 1 : 0);
            b = f_1646_23f5(d_5d51_d6c2, d_5d51_d9ca, d_3404_1334[d_5d51_d9ca][0][d_5d51_d9fe],
                            d_5d51_d7ce == 1 ? 1 : 0);
            if (b > a && b > best) {
                best = b;
                d_5d51_d6a4 = d_5d51_d9fe;
            }
        }
    }
    if (d_5d51_d6a4 == -1) {
        if (d_5d51_d7ce == 0) {
            d_5d51_d7ce = 1;
            goto again;
        }
    } else {
        d_44d7_0000[23][d_5d51_d6c2] = d_5d51_d7ce + 1;
        d_44d7_0000[23][d_44d7_9ddc[d_5d51_d9ca][d_5d51_d7ce][d_5d51_d6a4]] = 3;
        d_5d51_d6ae = d_44d7_9ddc[d_5d51_d9ca][d_5d51_d7ce][d_5d51_d6a4];
        d_44d7_9ddc[d_5d51_d9ca][d_5d51_d7ce][d_5d51_d6a4] = d_5d51_d6c2;
        d_5d51_d6c2 = d_5d51_d6ae;
        if (d_5d51_d6c2 > -1 && d_5d51_d6c2 < 1499) {
            d_5d51_d7ce = 0;
            goto again;
        }
    }
    for (d_5d51_d7ce = 0; d_5d51_d7ce <= 1; d_5d51_d7ce++) {
        for (d_5d51_d9fe = 0; d_5d51_d9fe <= 10; d_5d51_d9fe++) {
            if (d_44d7_9ddc[d_5d51_d9ca][d_5d51_d7ce][d_5d51_d9fe] == 1499) {
                best = -5000;
                d_5d51_d6a2 = 1499;
                for (d_5d51_d9a0 = 0; d_5d51_d9a0 <= d_3404_4552[d_5d51_d9ca] - 1; d_5d51_d9a0++) {
                    d_5d51_d6a0 = d_44d7_9624[d_5d51_d9ca][d_5d51_d9a0];
                    if (f_1646_66f8(d_5d51_d6a0, d_3404_1334[d_5d51_d9ca][0][d_5d51_d9fe])
                        && d_44d7_0000[23][d_5d51_d6a0] == 3) {
                        c = f_1646_23f5(d_5d51_d6a0, d_5d51_d9ca, d_3404_1334[d_5d51_d9ca][0][d_5d51_d9fe],
                                        d_5d51_d7ce == 1 ? 1 : 0);
                        if (c > best) {
                            best = c;
                            d_5d51_d6a2 = d_5d51_d6a0;
                        }
                    }
                }
                if (d_5d51_d6a2 < 1499) {
                    d_44d7_9ddc[d_5d51_d9ca][d_5d51_d7ce][d_5d51_d9fe] = d_5d51_d6a2;
                    d_44d7_0000[23][d_5d51_d6a2] = d_5d51_d7ce + 1;
                }
            }
        }
    }
}

void f_1646_1e79(int p)
{
    unsigned char team;

    if (!f_1646_5dff(p)) {
        team = d_44d7_6978[p];
        if (d_2414_af3c[p].w.f7) {
            d_3404_0e34[team][f_1646_1f63(p)] = 1499;
            d_2414_af3c[p].w.f7 = 0;
        }
    } else {
        team = f_1646_5e11(p);
        if (d_2414_c6ec[team][f_1646_5e2d(p)]) {
            d_3404_0e34[team][f_1646_1f63(p)] = 1499;
            d_2414_c6ec[team][f_1646_5e2d(p)] = 0;
        }
    }
}

int f_1646_1f63(int player)
{
    unsigned char team;

    if (!f_1646_5dff(player))
        team = d_44d7_6978[player];
    else
        team = f_1646_5e11(player);
    d_5d51_d6c0 = -1;
    for (d_5d51_d69e = 0; d_5d51_d69e <= 15; d_5d51_d69e++) {
        if (d_3404_0e34[team][d_5d51_d69e] == player) {
            d_5d51_d6c0 = d_5d51_d69e;
            d_5d51_d69e = 15;
        }
    }
    return d_5d51_d6c0;
}

int f_1646_1fdb(int player)
{
    d_5d51_d6c0 = -1;
    d_5d51_d6aa = -1;
    for (d_5d51_d69e = 0; d_5d51_d69e <= 10; d_5d51_d69e++) {
        if (d_44d7_9ddc[d_44d7_6978[player]][0][d_5d51_d69e] == player) {
            d_5d51_d6c0 = d_5d51_d69e;
            d_5d51_d6aa = 0;
            d_5d51_d69e = 10;
        } else if (d_44d7_9ddc[d_44d7_6978[player]][1][d_5d51_d69e] == player) {
            d_5d51_d6c0 = d_5d51_d69e;
            d_5d51_d6aa = 1;
            d_5d51_d69e = 10;
        }
    }
    return d_5d51_d6c0;
}

int f_1646_2075(int a, int player, int c)
{
    d_5d51_d69c = d_3c0d_0000[16][player] / 16;
    d_5d51_d69a = d_3c0d_0000[16][player] % 16;
    if (a != d_5d51_d69c || c != d_5d51_d69a) {
        d_5d51_d698 = 1500;
        if (a == 1 && !d_2414_af3c[player].w.f0 || a > 1 && d_2414_af3c[player].w.f0)
            d_5d51_d698 -= 1000;
        else {
            if ((a == 2 || a == 5 || a == 8) && !d_2414_af3c[player].w.f4
                || (a == 3 || a == 6 || a == 9) && !d_2414_af3c[player].w.f5
                || (a == 4 || a == 7 || a == 10) && !d_2414_af3c[player].w.f6)
                d_5d51_d698 -= 400;
            if (a >= 2 && a <= 4 && !d_2414_af3c[player].w.f1) {
                d_5d51_d698 -= 400;
                if (d_2414_af3c[player].w.f3)
                    d_5d51_d698 = -200;
            } else if (a >= 5 && a <= 7 && !d_2414_af3c[player].w.f2
                       || a >= 8 && a <= 10 && !d_2414_af3c[player].w.f3)
                d_5d51_d698 -= 400;
            else if ((a == 11 || a == 12) && !d_2414_af3c[player].w.f1 && !d_2414_af3c[player].w.f2
                     || a == 13 && !d_2414_af3c[player].w.f2 && !d_2414_af3c[player].w.f3)
                d_5d51_d698 -= 150;
        }
        if (a > 1) {
            unsigned char i;
            int sum;
            int weights;
            long l;

            sum = 0;
            weights = 0;
            for (i = 0; i <= 4; i++) {
                sum += d_4f37_0761[c][a][i] * d_44d7_0000[i + 1][player];
                weights += d_4f37_0761[c][a][i];
            }
            l = sum * 10 / weights;
            d_5d51_d698 += l;
            if (a == 10)
                d_5d51_d698 += d_44d7_0000[7][player] * 5;
        }
        d_3c0d_0000[16][player] = (a << 4) + c;
        d_3404_51ac[player] = d_5d51_d698;
    } else
        d_5d51_d698 = d_3404_51ac[player];
    return d_5d51_d698 = d_5d51_d698 * (d_44d7_0000[21][player] / 100.0);
}

long f_1646_23f5(int player, int team, unsigned char pos, unsigned char second)
{
    long v;

    v = f_1646_2075(pos, player, d_3404_24e6[d_3404_4226[team]] / 16);
    if (second == 0 || d_44d7_0000[17][player] >= 27)
        d_5d51_d7a8 = f_1d5e_1308(d_44d7_0000[15][player], d_44d7_0000[0][player]) * 0.1;
    else {
        long t;

        t = ((200 - d_3404_2770[0][d_3404_4226[team]]) * d_3c0d_0000[18][player]
             + d_3404_2770[0][d_3404_4226[team]] * d_44d7_0000[9][player]) / 200;
        d_5d51_d7a8 = f_1d5e_1308(d_44d7_0000[15][player], d_44d7_0000[0][player]) * 0.075 + t * 0.025;
    }
    v *= d_5d51_d7a8;
    return v;
}

int f_1646_2551(unsigned char a)
{
    switch (a) {
    case 1:
        d_5d51_d696 = 1700;
        break;
    default:
        d_5d51_d696 = 1700;
        break;
    case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11:
        d_5d51_d696 = 1700;
        break;
    }
    return d_5d51_d696;
}

char f_1646_258b(int w)
{
    switch (w) {
    case 18: case 20: case 22: case 24: case 26: case 30: case 32: case 34: case 36: case 40:
    case 42: case 44: case 46: case 52: case 54: case 56: case 58: case 60: case 62: case 64:
    case 68: case 70: case 72: case 74: case 76: case 78: case 80: case 82: case 84: case 88:
    case 90: case 92: case 94: case 96:
        return -1;
    }
    return 0;
}

char f_1646_2646(int w)
{
    if (f_1646_258b(w))
        return -1;
    if (w == 28 || w == 38 || w == 66 || w == 86)
        return -1;
    return 0;
}

char f_1646_2674(int w)
{
    switch (w) {
    case 14: case 15: case 17: case 27: case 33: case 59: case 63: case 71: case 77: case 98:
    case 100:
        return -1;
    }
    return 0;
}

char f_1646_26cf(int w)
{
    switch (w) {
    case 19: case 23: case 29: case 37: case 41: case 45: case 47: case 61: case 65: case 75:
        return -1;
    }
    return 0;
}

char f_1646_2726(int w)
{
    switch (w) {
    case 21: case 25: case 31: case 35: case 41: case 45: case 69: case 73: case 79: case 83:
    case 87: case 91:
        return -1;
    }
    return 0;
}

char f_1646_2785(int w)
{
    switch (w) {
    case 21: case 25: case 31: case 35: case 69: case 73: case 79: case 83: case 89:
        return -1;
    }
    return 0;
}

char f_1646_27d8(int w)
{
    switch (w) {
    case 21: case 25: case 31: case 35: case 41: case 45: case 69: case 73: case 79: case 83:
    case 93:
        return -1;
    }
    return 0;
}

char f_1646_2833(int w, int n)
{
    switch (w) {
    case 21: case 25:
        return n >= 33 && n <= 64 ? -1 : 0;
    case 31: case 35:
        return n >= 17 && n <= 32 ? -1 : 0;
    case 41: case 45:
        return n >= 5 && n <= 12 ? -1 : 0;
    case 69: case 73:
        return n >= 9 && n <= 12 ? -1 : 0;
    case 79: case 83:
        return n >= 7 && n <= 8 ? -1 : 0;
    case 87: case 91:
        return n == 1 ? -1 : 0;
    }
    return 0;
}

char f_1646_28e4(int w, int n)
{
    switch (w) {
    case 21: case 25:
        return n >= 17 && n <= 32 ? -1 : 0;
    case 31: case 35:
        return n >= 9 && n <= 16 ? -1 : 0;
    case 69: case 73:
        return n >= 5 && n <= 8 ? -1 : 0;
    case 79: case 83:
        return n >= 5 && n <= 6 ? -1 : 0;
    case 89:
        return n == 1 ? -1 : 0;
    }
    return 0;
}

char f_1646_297b(int w, int n)
{
    switch (w) {
    case 21: case 25:
        return n >= 1 && n <= 16 ? -1 : 0;
    case 31: case 35:
        return n >= 1 && n <= 8 ? -1 : 0;
    case 41: case 45: case 69: case 73: case 79: case 83:
        return n >= 1 && n <= 4 ? -1 : 0;
    case 93:
        return n == 1 ? -1 : 0;
    }
    return 0;
}

char f_1646_2a0c(int w, int n)
{
    switch (w) {
    case 19: case 23: case 29:
        return n >= 1 && n <= 6 ? -1 : 0;
    case 37: case 47:
        return n >= 1 && n <= 8 ? -1 : 0;
    case 41: case 45:
        return n >= 13 && n <= 20 ? -1 : 0;
    case 61: case 65:
        return n >= 1 && n <= 2 ? -1 : 0;
    case 75:
        return n == 1 ? -1 : 0;
    }
    return 0;
}

char f_1646_2aa7(int w)
{
    switch (w) {
    case 15: case 21: case 27: case 31: case 41: case 59: case 61: case 69: case 71: case 79:
    case 87: case 98:
        return -1;
    }
    return 0;
}

char f_1646_2b06(int w)
{
    switch (w) {
    case 17: case 25: case 33: case 35: case 45: case 63: case 65: case 73: case 77: case 83:
    case 91: case 100:
        return -1;
    }
    return 0;
}

char f_1646_2b65(int w, int n)
{
    switch (w) {
    case 75: case 89: case 93: case 97:
        return -1;
    }
    return 0;
}

char f_1646_2ba4(int w)
{
    if (w == 97)
        return -1;
    return 0;
}

char f_1646_2bb5(int w, int n)
{
    switch (w) {
    case 19: case 23: case 29:
        return n - 1;
    case 37: case 47:
        return (n - 1) / 4;
    case 41: case 45:
        if (n >= 13)
            return (n - 13) / 4;
        break;
    }
    return 0;
}

char f_1646_2c1c(int x)
{
    if (d_4f37_1390[0][0][x] != -32)
        return -1;
    return 0;
}

int f_1646_2c39(int a, int b)
{
    return exp(fabs(10.5 - (a - (a >= 18 ? 18 : 0) + 1)) / 2.0) / 10.0 * 0.005 * exp(b / 10.0) * 35.0;
}

char f_1646_2cc9(int x)
{
    if (x < 38 && d_3404_4226[x] >= 0x286 && d_3404_4226[x] < 0x28a)
        return -1;
    return 0;
}

float f_1646_2cfd(int x)
{
    if (x <= 37)
        return f_1d5e_1308(f_1d5e_136a(d_3404_44da[x] - (f_1646_717d(x) + f_1d5e_136a(d_3404_45f2[x], 3) - 2) * 2 - 3
                                       + d_3404_443a[0][x] / 16.0 - 0.5, 17), 6);
    if (x <= 437)
        return d_4f37_099e[x] - 3;
    return d_4f37_099e[x] - 5;
}

int f_1646_2dce(int x)
{
    return f_1d5e_1308(f_1d5e_136a((d_44d7_0000[0][x] - 30) / 10.0, 17), 6);
}

char f_1646_2e15(int player)
{
    if (f_1646_6f38(player))
        return -1;
    if (d_3404_4552[d_44d7_0000[18][player]] < 17)
        return -1;
    if (d_2414_af3c[player].w.f0 && d_3404_45ca[0][d_44d7_0000[18][player]] < 2)
        return -1;
    return 0;
}

char f_1646_2e7d(int player)
{
    unsigned char team;
    unsigned char pos;
    unsigned char keepers;
    unsigned char others;
    unsigned char i;

    team = f_1646_5e11(player);
    pos = f_1646_5e2d(player);
    keepers = 0;
    others = 0;
    for (i = 0; i <= 15; i++)
        if (d_2414_c6dc[team][i] == 0) {
            if (d_2414_c6ac[team][0][i] == 1)
                keepers++;
            else
                others++;
        }
    if (d_2414_c6ac[team][0][pos] > 1 && others < 13)
        return -1;
    if (d_2414_c6ac[team][0][pos] == 1 && keepers < 2)
        return -1;
    return 0;
}

char far *f_1646_2f4b(int x, char c)
{
    char far *s;

    s = f_1d5e_0efc();
    if (x <= 15)
        sprintf(s, "%02d", x);
    else
        strcpy(s, c == 0 ? "16" : "GK");
    return s;
}

void f_1646_2fa4(int n, char far *title, char far *items)
{
    char buf[320];
    int k;

    memset(d_2414_544c, 0, 20);
    d_5d51_d664 = -1;
    if (strlen(title) > 1)
        f_1646_4ba0(title);
    d_5d51_d662 = n > 0 ? n - 5 : 0;
    strcpy(d_2414_5164, items);
    d_5d51_d98e = 0;
    for (d_5d51_d9b8 = 1; d_5d51_d9b8 <= strlen(items); d_5d51_d9b8++)
        if (items[d_5d51_d9b8 - 1] == '|')
            d_5d51_d98e++;
    d_5d51_d98e--;
    d_5d51_d660 = 0;
    while (d_2414_5164[0]) {
        k = f_1d5e_0b1c(d_2414_5164, "|") - 1;
        strncpy(buf, d_2414_5164, k);
        buf[k] = 0;
        if (buf[0] == '*') {
            strcpy(buf, buf + 1);
            d_5d51_d56b = -1;
        } else
            d_5d51_d56b = 0;
        if (buf[0] == '$') {
            strcpy(buf, buf + 1);
            d_5d51_d9de = 110;
        } else
            d_5d51_d9de = 30;
        sprintf(d_2414_4b56, " %-17s", buf);
        strcpy(d_2414_5164, &d_2414_5164[k + 1]);
        if ((d_5d51_d98e + 1) / 2 > d_5d51_d660) {
            d_5d51_d9e4 = 1;
            d_5d51_d551 = d_5d51_d660 * 2.5 + d_5d51_d662 + 5.0;
        } else {
            if (d_5d51_d660 == d_5d51_d98e && !(d_5d51_d98e & 1))
                d_5d51_d9e4 = 11;
            else
                d_5d51_d9e4 = 21;
            d_5d51_d551 = (d_5d51_d660 - (d_5d51_d98e + 1) / 2) * 2.5 + d_5d51_d662 + 5.0;
        }
        d_2414_fd6c[d_5d51_d660] = d_5d51_d9e4;
        d_2414_fdbc[d_5d51_d660] = d_5d51_d551;
        strcpy(d_2414_0848[d_5d51_d660], d_2414_4b56);
        f_1d5e_08cc(16);
        f_1d5e_08e2(d_5d51_d9e4 * 8 + 6, d_5d51_d551 * 8.0 - 2.0,
                    (d_5d51_d9e4 + strlen(d_2414_4b56)) * 8 + 3, d_5d51_d551 * 8.0 + 13.0);
        if (d_5d51_d56b) {
            d_2414_fe0c[d_5d51_d660] = 24.0;
            f_1646_32eb(1, 8, d_5d51_d660);
        } else {
            d_2414_fe0c[d_5d51_d660] = d_5d51_d9de;
            f_1646_32eb(d_5d51_d9de / 16, d_5d51_d9de % 16, d_5d51_d660);
        }
        d_5d51_d660++;
    }
    if (strlen(title) > 1)
        f_1646_3348(d_5d51_d660 - 1);
}

void f_1646_32eb(int a, int b, int line)
{
    f_1646_3e54(d_2414_fd6c[line], -d_2414_fdbc[line], a, b, 0, d_2414_0848[line]);
}

void f_1646_3348(int last)
{
    if (d_5d51_d664 > -1 && last > -1)
        f_1646_32eb(d_2414_fe0c[d_5d51_d664] / 16.0, (int)d_2414_fe0c[d_5d51_d664] % 16, d_5d51_d664);
    f_1646_5a1a();
    d_5d51_d555 = f_1d5e_0df7();
    f_1d5e_03a3(0);
    do {
        d_5d51_da0a = -1;
        if (f_1d5e_0c17() > 0)
            for (d_5d51_d65e = 0; d_5d51_d65e <= abs(last); d_5d51_d65e++) {
                d_5d51_d9e4 = d_2414_fd6c[d_5d51_d65e];
                d_5d51_d551 = d_2414_fdbc[d_5d51_d65e];
                if (d_2414_544c[d_5d51_d65e] == 0 && f_1d5e_0c0f() >= d_5d51_d9e4 * 8 - 2 &&
                    f_1d5e_0c0f() <= (d_5d51_d9e4 + 17) * 8 + 10 &&
                    f_1d5e_0c07() >= d_5d51_d551 * 8.0 + 15.0 - 20.0 &&
                    f_1d5e_0c07() <= d_5d51_d551 * 8.0 + 31.0 - 20.0)
                    d_5d51_da0a = d_5d51_d65e;
            }
    } while (d_5d51_da0a <= -1);
    f_1d5e_03a3(1);
    if (last > -1 || d_2414_0848[d_5d51_da0a][0] == '*') {
        f_1646_32eb(1, 12, d_5d51_da0a);
        d_5d51_d664 = d_5d51_da0a;
    }
}

/* only reached through a pointer (CM93's 350e); it ends at 3537, inside the range the start
 * list gives 3348 */
static void f_1646_3522(int i)
{
    d_2414_544c[i] = -1;
}

char far *f_1646_3537(int x)
{
    char far *p;

    p = f_1d5e_0efc();
    if (x < 38)                         /* 38 clubs (CM93: 80) */
        strcpy(p, d_5d51_b476[x]);
    else
        strcpy(p, d_5d51_b4ca[x]);
    return p;
}

void f_1646_357e(int x, int y, int colour, char far *s)
{
    if (*s) {
        if (x == -1)
            x = 160 - strlen(s) * 3;
        d_2412_001b = x - 8;
        d_2412_0019 = abs(y) + 1;
        f_1d5e_0b11(0);
        if (d_5d51_d82a)
            f_1d5e_099e(0);
        if (colour > 0 && y > 0) {
            f_1d5e_08d7(16);
            f_1d5e_09ea(x - 9, y, f_1d5e_0e5f(s));
        }
        f_1d5e_08d7(colour + 16);
        f_1d5e_09ea(x - 8, abs(y) + 1, f_1d5e_0e5f(s));
        f_1d5e_0b11(1);
        if (d_5d51_d5e7)
            f_1646_5f8e(d_2412_001b, d_2412_0019 - 7, s);
    }
}

void f_1646_3686(float x, float y, int bg, int fg, int w, char far *s)
{
    if (*s || w > 0) {
        if (w > 0)
            d_5d51_d630 = w;
        else
            d_5d51_d630 = strlen(s) * 6;
        if (x == -1)
            x = (160.0 - d_5d51_d630 / 2.0) / 8.0;
        f_1d5e_08cc(fg + 16);
        f_1d5e_08e2(x * 8.0 - 1, fabs(y) * 8.0 - 6.0, d_5d51_d630 + (x * 8.0 - 1), fabs(y) * 8.0);
        if (*s) {
            d_2412_001b = x * 8.0;
            d_2412_0019 = fabs(y) * 8.0 + 1;
            f_1d5e_0b11(0);
            if (d_5d51_d82a)
                f_1d5e_099e(0);
            if (y < 0) {
                f_1d5e_08d7(16);
                f_1d5e_09ea(x * 8.0 - 1, fabs(y) * 8.0, f_1d5e_0e5f(s));
            }
            f_1d5e_08d7(abs(bg) + 16);
            f_1d5e_09ea(d_2412_001b, d_2412_0019, f_1d5e_0e5f(s));
            f_1d5e_0b11(1);
            if (d_5d51_d5e7)
                f_1646_5f8e(d_2412_001b, d_2412_0019 - 7, s);
        }
    }
}

void f_1646_38d0(float x, float y, int colour, char far *s)
{
    if (*s) {
        if (x == -1)
            x = 21.0 - strlen(s) / 2.0;
        d_2412_001b = x * 8.0 - 8.0;
        d_2412_0019 = fabs(y) * 8.0 - 1;
        f_1d5e_0b11(0);
        if (d_5d51_d82a != 1)
            f_1d5e_099e(1);
        if (colour > 0 && y > 0) {
            f_1d5e_08d7(16);
            f_1d5e_09ea(x * 8.0 - 9.0, y * 8.0 - 1, s);
        }
        f_1d5e_08d7(colour + 16);
        f_1d5e_09ea(d_2412_001b, d_2412_0019, s);
        f_1d5e_0b11(1);
        if (d_5d51_d5e7)
            f_1646_5f8e(d_2412_001b, d_2412_0019 - 7, s);
    }
}

void f_1646_3a4a(float x, float y, int bg, int fg, int w, char far *s)
{
    if (*s || w > 0) {
        if (w > 0)
            d_5d51_d630 = w;
        else
            d_5d51_d630 = strlen(s) * 8;
        if (x == -1)
            x = (160.0 - d_5d51_d630 / 2.0) / 8.0;
        f_1d5e_08cc(fg + 16);
        f_1d5e_08e2(x * 8.0 - 2.0, fabs(y) * 8.0 - 8.0, d_5d51_d630 + x * 8.0 + 1, fabs(y) * 8.0);
        if (*s) {
            d_2412_001b = x * 8.0;
            d_2412_0019 = fabs(y) * 8.0 - 1;
            f_1d5e_0b11(0);
            if (d_5d51_d82a != 1)
                f_1d5e_099e(1);
            if (y < 0) {
                f_1d5e_08d7(16);
                f_1d5e_09ea(x * 8.0 - 1, fabs(y) * 8.0 - 1, s);
            }
            f_1d5e_08d7(abs(bg) + 16);
            f_1d5e_09ea(d_2412_001b, d_2412_0019, s);
            f_1d5e_0b11(1);
            if (d_5d51_d5e7)
                f_1646_5f8e(d_2412_001b, d_2412_0019 - 7, s);
        }
    }
}

void f_1646_3c89(float x, float y, int colour, char far *s)
{
    if (*s) {
        if (x == -1)
            x = 21.0 - strlen(s) / 2.0;
        d_2412_001b = x * 8.0 - 8.0;
        d_2412_0019 = fabs(y) * 8.0 + 10.0;
        f_1d5e_0b11(0);
        if (d_5d51_d82a != 2)
            f_1d5e_099e(2);
        if (colour > 0 && y > 0) {
            f_1d5e_08d7(16);
            f_1d5e_09ea(x * 8.0 - 8.0 - 2.0, y * 8.0 + 10.0 - 1, s);
            f_1d5e_09ea(x * 8.0 - 8.0 - 1, y * 8.0 + 10.0 - 1, s);
        }
        f_1d5e_08d7(colour + 16);
        f_1d5e_09ea(d_2412_001b, d_2412_0019, s);
        f_1d5e_0b11(1);
        if (d_5d51_d5e7)
            f_1646_5f8e(d_2412_001b, d_2412_0019 - 15, s);
    }
}

void f_1646_3e54(float x, float y, int bg, int fg, int w, char far *s)
{
    if (*s || w > 0) {
        if (w > 0)
            d_5d51_d630 = w;
        else
            d_5d51_d630 = strlen(s) * 8;
        if (x == -1)
            x = (160.0 - d_5d51_d630 / 2.0) / 8.0;
        f_1d5e_08cc(fg + 16);
        f_1d5e_08e2(x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0, d_5d51_d630 + x * 8.0 + 2.0, fabs(y) * 8.0 + 11.0);
        f_1d5e_08d7(d_2412_0000[fg] + 16);
        f_1d5e_0fe3(x * 8.0 - 2.0, fabs(y) * 8.0 + 11.0, x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0);
        f_1d5e_0fe3(x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0, d_5d51_d630 + x * 8.0 + 2.0, fabs(y) * 8.0 - 5.0);
        f_1d5e_08d7(16);
        f_1d5e_0fe3(d_5d51_d630 + x * 8.0 + 2.0, fabs(y) * 8.0 - 5.0, d_5d51_d630 + x * 8.0 + 2.0, fabs(y) * 8.0 + 11.0);
        f_1d5e_0fe3(d_5d51_d630 + x * 8.0 + 2.0, fabs(y) * 8.0 + 11.0, x * 8.0 - 2.0, fabs(y) * 8.0 + 11.0);
        if (*s) {
            d_2412_001b = x * 8.0;
            d_2412_0019 = fabs(y) * 8.0 + 10.0;
            f_1d5e_0b11(0);
            if (d_5d51_d82a != 2)
                f_1d5e_099e(2);
            if (y < 0) {
                f_1d5e_08d7(16);
                f_1d5e_09ea(x * 8.0 - 1, fabs(y) * 8.0 + 9.0, s);
            }
            f_1d5e_08d7(abs(bg) + 16);
            f_1d5e_09ea(d_2412_001b, d_2412_0019, s);
            f_1d5e_0b11(1);
            if (d_5d51_d5e7)
                f_1646_5f8e(d_2412_001b, d_2412_0019 - 15, s);
        }
    }
}

static void f_1646_42d5(float x, float y, int bg, int fg, int w, int len, char far *s)
{
    if (*s || w > 0) {
        if (w > 0)
            d_5d51_d630 = w;
        else
            d_5d51_d630 = strlen(s) * 8;
        if (x == -1)
            x = (160.0 - d_5d51_d630 / 2.0) / 8.0;
        f_1d5e_08cc(fg + 16);
        f_1d5e_08e2(x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0, len + x * 8.0 + 1, fabs(y) * 8.0 + 10.0);
        if (*s) {
            d_2412_001b = x * 8.0;
            d_2412_0019 = fabs(y) * 8.0 + 10.0;
            f_1d5e_0b11(0);
            if (d_5d51_d82a != 2)
                f_1d5e_099e(2);
            if (y < 0) {
                f_1d5e_08d7(16);
                f_1d5e_09ea(x * 8.0 - 1, fabs(y) * 8.0 + 9.0, s);
            }
            f_1d5e_08d7(abs(bg) + 16);
            f_1d5e_09ea(d_2412_001b, d_2412_0019, s);
            f_1d5e_0b11(1);
            if (d_5d51_d5e7)
                f_1646_5f8e(d_2412_001b, d_2412_0019 - 15, s);
        }
    }
}

static void f_1646_4517(float x, float y, int team)
{
    char buf[160];

    sprintf(buf, " %s ", f_1d5e_0e5f(d_5d51_b476[team]));
    f_1646_3a4a(x, y, -(d_3404_448a[team] / 16), d_3404_448a[team] % 16, 0, buf);
}

void f_1646_459b(float x, float y, int team)
{
    char buf[160];

    sprintf(buf, " %s ", (char far *)d_5d51_b476[team]);
    f_1646_3e54(x, y, -(d_3404_448a[team] / 16), d_3404_448a[team] % 16, 0, buf);
}

char far *f_1646_4616(int n, char far *s)
{
    char far *buf;
    char tmp[320];

    buf = f_1d5e_0efc();
    if (strlen(s) > n - 1) {
        sprintf(tmp, "%.*s", n - 1, s);
        sprintf(buf, " %s", tmp);
    } else
        sprintf(buf, " %-*s", n - 1, s);
    return buf;
}

int f_1646_46a0(int team)
{
    d_5d51_d756 = 38;
    for (d_5d51_d9d4 = 0; d_5d51_d9d4 <= 37; d_5d51_d9d4++) {
        if (d_3404_0728[d_5d51_d9d4] == team) {
            d_5d51_d756 = d_5d51_d9d4;
            d_5d51_d9d4 = 37;
        }
    }
    return d_5d51_d756;
}

int f_1646_46e2(int team)
{
    switch (f_1646_717d(team)) {
    case 0:
        d_5d51_d7fc = 22;
        break;
    case 1:
        d_5d51_d7fc = 21;
    }
    return d_5d51_d7fc;
}

char far *f_1646_470f(int player)
{
    char far *buf;
    unsigned char a, b;

    buf = f_1d5e_0efc();
    if (f_1646_5de5(player) || f_1646_6f38(player)) {
        sprintf(buf, "%s %s", d_56d9_0000[d_3404_5d64[player]], d_56d9_13b9[d_3404_74d4[player]]);
    } else if (f_1646_5dff(player)) {
        a = f_1646_5e11(player);
        b = f_1646_5e2d(player);
        d_5d51_da34 = f_1d5e_1618(d_5d51_dd90, 0);
        sprintf(buf, "%s %s", d_56d9_0000[d_5d51_da34[a][0][b]], d_56d9_13b9[d_5d51_da34[a][1][b]]);
    } else
        strcpy(buf, "");
    return buf;
}

char far *f_1646_4849(int player)
{
    char c;
    char far *buf;

    buf = f_1d5e_0efc();
    c = f_1d5e_0b1c(f_1646_470f(player), " ");
    if (c != 0)
        sprintf(buf, "%c.", *f_1646_470f(player));
    strcat(buf, f_1646_48c0(player));
    return buf;
}

char far *f_1646_48c0(int player)
{
    char far *buf;
    char tmp[40];

    buf = f_1d5e_0efc();
    strcpy(tmp, f_1646_470f(player));
    strcpy(buf, tmp + f_1d5e_0b1c(tmp, " "));
    return buf;
}

char far *f_1646_4919(int manager, char full)
{
    char far *buf;
    char tmp[80];

    buf = f_1d5e_0efc();
    if (manager < 646) {
        d_5d51_da48 = f_1d5e_1618(d_5d51_dd9a, 0);
        strcpy(tmp, d_56d9_0000[d_5d51_da48[0][manager]]);
        strcpy(d_2414_36ce, d_56d9_13b9[d_5d51_da48[1][manager]]);
    } else {
        strcpy(tmp, d_2414_4962[0][manager - 646]);
        strcpy(d_2414_36ce, d_2414_4962[1][manager - 646]);
    }
    if (!full)
        sprintf(buf, "%s %s", tmp, d_2414_36ce);
    else
        strcpy(buf, d_2414_36ce);
    return buf;
}

/* numbers in words, for 4a20 (players 1-15): its strings sit in the pool where the table is
 * defined, before 4a20's literals */
char far *d_5d51_0322[15] = {
    "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
    "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen"
};

char far *f_1646_4a20(int player)
{
    char far *buf;

    buf = f_1d5e_0efc();
    strcpy(buf, "");
    if (player >= 1 && player <= 15)
        strcpy(buf, d_5d51_0322[player - 1]);
    else
        sprintf(buf, "%d", player);
    return buf;
}

char far *f_1646_4a8f(int division)
{
    char far *buf;

    buf = f_1d5e_0efc();
    sprintf(buf, "%d", division);
    if (division % 10 == 1 && division != 11)
        strcat(buf, "ST");
    else if (division % 10 == 2 && division != 12)
        strcat(buf, "ND");
    else if (division % 10 == 3 && division != 13)
        strcat(buf, "RD");
    else
        strcat(buf, "TH");
    return buf;
}

/* a division's name, by length (full 0-3): Serie A (division 1) or Serie B */
char far *f_1646_4b1e(int division, char full)
{
    char far *buf;

    buf = f_1d5e_0efc();
    if (division == 1) {
        if (full == 0)
            strcpy(buf, "Serie A");
        else if (full == 1 || full == 2)
            strcpy(buf, "SR/A");
        else if (full == 3)
            strcpy(buf, " A");
    } else if (full == 0)
        strcpy(buf, "Serie B");
    else if (full == 1 || full == 2)
        strcpy(buf, "SR/B");
    else if (full == 3)
        strcpy(buf, " B");
    return buf;
}

void f_1646_4ba0(char far *title)
{
    char t[160];
    char t2[320];

    strcpy(t, title);
    f_1646_5020();
    f_1d5e_034e();
    f_1646_5f46();
    f_1d5e_08d7(17);
    f_1d5e_0929(0, 0, 0x13f, 0xc7);
    if (t[0] != 0) {
        d_5d51_d549 = 19.0 - strlen(t) / 2.0;
        f_1d5e_08cc(16);
        f_1d5e_08e2(d_5d51_d549 * 8.0 + 6.0, 6, (strlen(t) + d_5d51_d549) * 8.0 + 19.0, 20);
        sprintf(t2, " %s ", t);
        f_1646_3e54(d_5d51_d549, -1.0, 1, 4, 0, t2);
    }
    if (strstr(title, "Manager Italia"))
        f_1646_3686(34.375, 24.625, 0, 1, 42, " vITA1");
    d_5d51_d596 = -1;
}

void f_1646_4d19(float x, int w, char far *prompt)
{
    f_1646_3c89(x, 21.0, 5, prompt);
    f_1646_4dae(x + 1 + strlen(prompt), 21.0, 9, w);
    f_1d5e_0822(4, 0xa3, 0x13c, 0xb2);
}

void f_1646_4dae(int x, float y, int colour, int maxlen)
{
    register int c;

    f_1d5e_03a3(0);
    f_1d5e_1a33();
    f_1646_5a1a();
    strcpy(d_2414_4944, "");
    do {
        d_5d51_d555 = f_1d5e_0df7();
        do {
            strcpy(d_2414_376e, f_1d5e_0ced());
            if (f_1d5e_0c17() == 0)
                d_5d51_d555 = f_1d5e_0df7();
            else if (f_1d5e_0df7() - d_5d51_d555 > 300)
                strcpy(d_2414_376e, f_1d5e_0158(13));
        } while (!(d_2414_376e[0] == 0x7f || d_2414_376e[0] == 13 || d_2414_376e[0] == 8
                   || d_2414_376e[0] == '.' || d_2414_376e[0] == ' ' || d_2414_376e[0] == '\''
                   || (d_2414_376e[0] >= '0' && d_2414_376e[0] <= '9')
                   || (d_2414_376e[0] >= 'A' && d_2414_376e[0] <= 'Z')
                   || (d_2414_376e[0] >= 'a' && d_2414_376e[0] <= 'z')));
        c = d_2414_376e[0];
        if ((c == 0x7f || c == 8) && d_2414_4944 != "") {
            d_2414_4944[strlen(d_2414_4944) - 1] = 0;
            f_1d5e_0822(x * 8 - 10, y * 8.0 - 5.0, (x + maxlen - 1) * 8 - 1, y * 8.0 + 10.0);
            f_1646_3c89(x, y, colour, d_2414_4944);
        } else if (strlen(d_2414_4944) < maxlen && c != 13 && c != 0x7f && c != 8) {
            strcat(d_2414_4944, d_2414_376e);
            f_1d5e_0822(x * 8 - 10, y * 8.0 - 5.0, (x + maxlen - 1) * 8 - 1, y * 8.0 + 10.0);
            f_1646_3c89(x, y, colour, d_2414_4944);
        }
    } while (c != 13 && maxlen != 1);
    f_1d5e_1a4d();
    f_1d5e_03a3(1);
}

void f_1646_5020(void)
{
    unsigned i, j;

    memset(d_44d7_8cd0, 0, 400);
    memset(d_2414_539c, 0, 100);
    for (i = 0; i < 7; i++)
        for (j = 0; j < 100; j++)
            d_2414_f1f4[i][j] = 0;
    for (d_5d51_d900 = 0; d_5d51_d900 <= 99; d_5d51_d900++)
        strcpy(d_2414_0e88[d_5d51_d900], "");
    d_5d51_d62e = 0;
    d_5d51_d9c6 = 0;
}

void f_1646_50c5(int a, float x, float y, int c, int d, int e, char far *s)
{
    int o7b, o6b, o19;
    float ox, oy;

    o7b = d_5d51_d9de;
    o6b = d_5d51_d9ce;
    ox = d_5d51_d549;
    oy = d_5d51_d551;
    o19 = d_5d51_d97e;
    d_5d51_d9de = c;
    d_5d51_d9ce = d;
    d_5d51_d97e = a;
    d_5d51_d549 = x;
    d_5d51_d551 = y;
    strcpy(d_2414_43f4, s);
    if (d_5d51_d549 == -1) {
        if (d_5d51_d97e > 0)
            d_5d51_d549 = 20.0 - strlen(d_2414_43f4) / 2.0;
        else
            d_5d51_d549 = (160 - strlen(d_2414_43f4) * 3) / 8.0;
    }
    strcpy(d_2414_0e88[d_5d51_d62e], d_2414_43f4);
    d_44d7_8cd0[0][d_5d51_d62e] = (d_5d51_d9de << 4) + d_5d51_d9ce;
    d_44d7_8d34[d_5d51_d62e] = d_5d51_d97e;
    d_2414_f1f4[0][d_5d51_d62e] = d_5d51_d549;
    d_2414_f1f4[1][d_5d51_d62e] = d_5d51_d551;
    if (e > 0)
        d_5d51_d630 = e;
    else
        d_5d51_d630 = strlen(d_2414_43f4) * (8 - (d_5d51_d97e == 0 ? 2 : 0));
    if (d_5d51_d97e == 0) {
        d_5d51_d539 = d_5d51_d549 * 8.0 - 1;
        d_5d51_d545 = d_5d51_d551 * 8.0 - 6.0;
        d_5d51_d4b9 = d_5d51_d630 + d_5d51_d549 * 8.0 - 1;
        d_5d51_d4b1 = d_5d51_d551 * 8.0;
    } else if (d_5d51_d97e == 1) {
        d_5d51_d539 = d_5d51_d549 * 8.0 - 2.0;
        d_5d51_d545 = d_5d51_d551 * 8.0 - 8.0;
        d_5d51_d4b9 = d_5d51_d630 + d_5d51_d549 * 8.0 + 1;
        d_5d51_d4b1 = d_5d51_d551 * 8.0;
    } else if (d_5d51_d97e == 2) {
        d_5d51_d539 = d_5d51_d549 * 8.0 - 2.0;
        d_5d51_d545 = d_5d51_d551 * 8.0 - 5.0;
        d_5d51_d4b9 = d_5d51_d630 + d_5d51_d549 * 8.0 + 1;
        d_5d51_d4b1 = d_5d51_d551 * 8.0 + 10.0;
    }
    d_2414_f1f4[2][d_5d51_d62e] = d_5d51_d539;
    d_2414_f1f4[3][d_5d51_d62e] = d_5d51_d545;
    d_2414_f1f4[4][d_5d51_d62e] = d_5d51_d4b9;
    d_2414_f1f4[5][d_5d51_d62e] = d_5d51_d4b1;
    d_2414_f1f4[6][d_5d51_d62e] = e;
    d_5d51_d62e++;
    f_1646_545c(d_5d51_d62e, 0);
    d_5d51_d9de = o7b;
    d_5d51_d9ce = o6b;
    d_5d51_d97e = o19;
    d_5d51_d549 = ox;
    d_5d51_d551 = oy;
}

/* Draw button n (1-based), its colours swapped when asked. */
void f_1646_545c(int n, char swap)
{
    d_5d51_d9d8 = n - 1;
    if (d_5d51_d9d8 < 0)
        return;
    d_5d51_d9de = d_44d7_8cd0[0][d_5d51_d9d8] / 16;
    d_5d51_d9ce = d_44d7_8cd0[0][d_5d51_d9d8] % 16;
    if (d_5d51_d9de <= 0 && d_5d51_d9ce <= 0)
        return;
    if (swap != 0 && d_5d51_d9ce > 0)
        f_1d5e_13a4(&d_5d51_d9de, &d_5d51_d9ce, 2);
    d_5d51_d97e = d_44d7_8cd0[1][d_5d51_d9d8];
    d_5d51_d549 = d_2414_f1f4[0][d_5d51_d9d8];
    d_5d51_d551 = d_2414_f1f4[1][d_5d51_d9d8];
    d_5d51_d8ee = d_2414_f1f4[6][d_5d51_d9d8];
    if (d_5d51_d97e == 0)
        f_1646_3686(d_5d51_d549, d_5d51_d551, d_5d51_d9de, d_5d51_d9ce, d_5d51_d8ee,
                    d_2414_0e88[d_5d51_d9d8]);
    else if (d_5d51_d97e == 1)
        f_1646_3a4a(d_5d51_d549, d_5d51_d551, d_5d51_d9de, d_5d51_d9ce, d_5d51_d8ee,
                    d_2414_0e88[d_5d51_d9d8]);
    else if (d_5d51_d97e == 2)
        f_1646_3e54(d_5d51_d549, d_5d51_d551, d_5d51_d9de, d_5d51_d9ce, d_5d51_d8ee,
                    d_2414_0e88[d_5d51_d9d8]);
}

/* Wait for a click on a button; returns its number. */
int f_1646_5602(int a)
{
    char buf[6];

    f_1646_5a1a();
    d_5d51_d62c = -1;
    d_5d51_d4ad = f_1d5e_0df7();
    d_5d51_d4a9 = f_1d5e_0df7();
    f_1d5e_03a3(0);
    do {
top:
        strcpy(buf, f_1d5e_0ced());
        if (buf[0] == 'P' || buf[0] == 'p')
            f_a7f0_3cfa();
        if (f_1d5e_0c17() > 0) {
            if (d_5d51_daba == 0 && f_1646_7125()) {
                f_a7f0_3cfa();
                goto top;
            }
            d_5d51_d62c = 0;
            for (d_5d51_d900 = 0; d_5d51_d62e - 1 >= d_5d51_d900; d_5d51_d900++) {
                if (f_1d5e_0c0f() >= d_2414_f1f4[2][d_5d51_d900] &&
                    f_1d5e_0c0f() <= d_2414_f1f4[4][d_5d51_d900] &&
                    f_1d5e_0c07() >= d_2414_f1f4[3][d_5d51_d900] &&
                    f_1d5e_0c07() <= d_2414_f1f4[5][d_5d51_d900]) {
                    if (d_2414_539c[d_5d51_d900] == 0)
                        d_5d51_d62c = d_5d51_d900 + 1;
                    else
                        d_5d51_d62c = -1;
                    d_5d51_d900 = d_5d51_d62e - 1;
                }
            }
        }
        if (d_5d51_d568 != 0 && d_2414_2378[0] != 0) {
            if (f_1d5e_0df7() - d_5d51_d4ad > 500) {
                f_a13d_3539();
                d_5d51_d4ad = f_1d5e_0df7();
            }
            if (f_1d5e_0df7() - d_5d51_d4a9 > 100) {
                f_a13d_3631();
                d_5d51_d4a9 = f_1d5e_0df7();
            }
        }
    } while (d_5d51_d62c <= -1);
    f_1d5e_03a3(1);
    if (a > 0)
        f_1646_545c(a, 0);
    if (d_5d51_d62c > 0 && a > -1)
        f_1646_545c(d_5d51_d62c, -1);
    return d_5d51_d9c6 = d_5d51_d62c;
}

void f_1646_5869(int team)
{
    d_2414_539c[team - 1] = 0xff;
}

void f_1646_587e(void)
{
    for (d_5d51_d900 = 0; d_5d51_d62e - 1 >= d_5d51_d900; d_5d51_d900++)
        d_2414_539c[d_5d51_d900] = 0;
}

void f_1646_58a8(int a)
{
    int m;

    f_1d5e_03a3(0);
    f_1646_357e(0xfc, 0xc5, 5, "CLICK MOUSE");
    if (d_5d51_d5e5 != 0 && d_5d51_d5e6 == 0 && d_5d51_d580 == 0 ||
        d_5d51_d5ea != 0 && d_5d51_d5e4 != 0 || d_5d51_d586 != 0 && d_5d51_d5e4 != 0) {
        d_5d51_d555 = f_1d5e_0df7();
        do
            f_1d5e_0d6a(2);
        while (f_1d5e_0c17() != 0 || f_1d5e_0df7() - d_5d51_d555 <= 75);
    } else {
        f_1646_5a1a();
        do {
again:
            f_1d5e_0d6a(2);
            strcpy(d_2414_376e, f_1d5e_0ced());
            if (d_2414_376e[0] == 'P' || d_2414_376e[0] == 'p')
                f_a7f0_3cfa();
            m = f_1d5e_0c17();
            if (d_5d51_daba == 0 && m > 0 && f_1646_7125()) {
                f_a7f0_3cfa();
                goto again;
            }
        } while (m <= 0 && (d_2414_376e[0] == 0 || a != 2));
    }
    f_1d5e_0822(0xf3, 0xbf, 0x13e, 0xc5);
    if (a == 0)
        f_1646_357e(0xfc, 0xc5, 5, "PLEASE WAIT");
    f_1d5e_03a3(1);
}

void f_1646_5a1a(void)
{
    char buf[10];

    do
        strcpy(buf, f_1d5e_0ced());
    while (buf[0] != 0 || f_1d5e_0c17() != 0);
}

/* Copy of s with all but the first letter in lower case (only reached through a pointer). */
static char far *f_1646_5a47(char far *s)
{
    char far *p;

    p = f_1d5e_0efc();
    strcpy(p, s);
    for (d_5d51_d62a = 1; strlen(p) > d_5d51_d62a; d_5d51_d62a++)
        if (isupper(p[d_5d51_d62a]))
            p[d_5d51_d62a] = tolower(p[d_5d51_d62a]);
    return p;
}

long f_1646_5ac3(int team)
{
    d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 0);
    d_5d51_d421 = d_5d51_da44[0][team] + d_5d51_da44[5][team] + d_5d51_da44[2][team];
    d_5d51_d41d = d_5d51_da44[9][team] + d_5d51_da44[12][team] + d_5d51_da44[13][team];
    d_5d51_d419 = f_1d5e_131d(d_3404_3e4a[0][team] - f_9e79_2216(team), 0L) + d_5d51_d421 - d_5d51_d41d;
    d_5d51_d415 = f_1646_0da1(d_5d51_d419 * 0.9, 0);
    return d_5d51_d415;
}

void f_1646_5bcb(int team, char far *title, char far *text)
{
    char buf[180];
    int x, y;

    f_1646_4ba0("");
    d_5d51_d65c = 4;
    f_1d5e_08cc(16);
    f_1d5e_08e2(40, 80, 288, d_5d51_d65c * 8 + 104);
    f_1d5e_08cc(19);
    f_1d5e_08e2(36, 76, 284, d_5d51_d65c * 8 + 100);
    d_5d51_d9de = d_3404_448a[team] / 16;
    d_5d51_d9ce = d_3404_448a[team] % 16;
    if (d_5d51_d9ce == 3)
        f_1d5e_13a4(&d_5d51_d9de, &d_5d51_d9ce, 2);
    f_1646_3686(5.125, 11.0, d_5d51_d9de, d_5d51_d9ce, 240, title);
    sprintf(buf, "%s ", text);
    x = 0;
    y = 100;
    while (f_1d5e_0b1c(buf, " ") > 0) {
        d_5d51_d65a = f_1d5e_0b1c(buf, " ");
        strncpy(d_2414_2cec, buf, d_5d51_d65a - 1);
        d_2414_2cec[d_5d51_d65a - 1] = 0;
        if (x + strlen(d_2414_2cec) * 6 > 240) {
            y += 8;
            x = 0;
        }
        f_1646_357e(x + 49, y, 6, d_2414_2cec);
        x += (strlen(d_2414_2cec) + 1) * 6;
        strcpy(buf, buf + d_5d51_d65a);
    }
    f_1646_58a8(0);
}

/* Read a big-endian word. */
int f_1646_5da8(FILE *fp)
{
    int v;
    unsigned char hi, lo;

    hi = fgetc(fp);
    lo = fgetc(fp);
    v = (hi << 8) + lo;
    return v;
}

char f_1646_5de5(int player)
{
    if (player >= 0 && d_5d51_da1a - 1 >= player)
        return -1;
    return 0;
}

char f_1646_5dff(int player)
{
    if (player >= 3000)
        return -1;
    return 0;
}

int f_1646_5e11(int player)
{
    unsigned char c;

    c = (player - 3000u) / 20;
    return c;
}

unsigned char f_1646_5e2d(int player)
{
    unsigned char c;

    c = (player - 3000u) % 20;
    return c;
}

unsigned char f_1646_5e4a(int player, unsigned char a)
{
    unsigned char q, v, s;
    unsigned char r;

    q = f_1646_5e11(player);
    r = f_1646_5e2d(player);
    v = d_2414_c6ac[q][2][r];
    s = d_2414_c6ac[q][0][r];
    if (a == 1) {
        if (s != 1)
            v = v * 0.3;
    } else if (f_1646_68af(a)) {
        if (s == 1)
            v = v * 0.3;
        else if (s != 2)
            v = v * 0.6;
    } else if (f_1646_68d1(a)) {
        if (s == 1)
            v = v * 0.3;
        else if (s != 3)
            v = v * 0.6;
    } else if (f_1646_68ee(a)) {
        if (s == 1)
            v = v * 0.3;
        else if (s != 4)
            v = v * 0.6;
    }
    return v / 10;
}

void f_1646_5f46(void)
{
    d_5d51_da30 = f_1d5e_1618(d_5d51_dd8e, 1);
    strcpy(d_5d51_da30, "");
    d_2412_0017 = 0;
    d_2412_001d = 0;
}

void f_1646_5f8e(int a, int b, char far *s)
{
    if (d_2412_0016 != 0 && d_2412_001d < 300) {
        d_2414_a5dc[d_2412_001d].a = a;
        d_2414_a5dc[d_2412_001d].b = b;
        d_2414_a5dc[d_2412_001d].start = d_2412_0017;
        d_2414_a5dc[d_2412_001d].len = strlen(s);
        d_2412_0017 = d_2412_0017 + d_2414_a5dc[d_2412_001d].len;
        d_5d51_da30 = f_1d5e_1618(d_5d51_dd8e, 1);
        strcat(d_5d51_da30, s);
        d_2412_001d++;
    }
}

void f_1646_6097(void)
{
    d_2412_0016 = -1;
}

void f_1646_60a7(void)
{
    d_2412_0016 = 0;
}

char f_1646_60b7(int p)
{
    unsigned char c;

    d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 0);
    c = d_5d51_da38[9][p];
    if (c == 0 || c == 2 || c == 3 || c == 4 || c == 11)
        return 17;
    return 15;
}

char f_1646_60fb(char team, char week, char n)
{
    return -1;
}

/* draws a player's shirt with his number at x, y (and the arrow of his position) */
void f_1646_6102(unsigned char team, unsigned char player, unsigned x, unsigned y)
{
    unsigned char num[6], d1[6], d2[6];
    unsigned char col, col2, col3;

    if (team < 38) {
        col = d_3404_448a[team] / 16;
        col2 = d_3404_448a[team] % 16;
    } else {
        col = d_4f37_0bba[team == d_5d51_d942 ? d_5d51_d8f4 - 38 : d_5d51_d8f2 - 38] / 16;
        col2 = d_4f37_0bba[team == d_5d51_d942 ? d_5d51_d8f4 - 38 : d_5d51_d8f2 - 38] % 16;
    }
    if (player == 1) {
        col = col2 == 6 ? 1 : 0;
        col2 = col2 == 6 ? 4 : 6;
    }
    col3 = col == 15 || col == 3 ? 0 : col;
    f_1d5e_08d7(col2 + 16);
    f_1d5e_0fe3(x + 1, y, x + 3, y);
    f_1d5e_0fe3(x + 10, y, x + 12, y);
    f_1d5e_0fe3(x, y + 1, x + 4, y + 1);
    f_1d5e_0fe3(x + 9, y + 1, x + 13, y + 1);
    f_1d5e_0fe3(x - 1, y + 2, x + 14, y + 2);
    f_1d5e_0fe3(x - 1, y + 3, x + 14, y + 3);
    f_1d5e_0fe3(x - 1, y + 4, x, y + 4);
    f_1d5e_0fe3(x + 2, y + 4, x + 11, y + 4);
    f_1d5e_0fe3(x + 13, y + 4, x + 14, y + 4);
    f_1d5e_08d7(col3 + 16);
    f_1d5e_0fe3(x + 4, y, x + 4, y);
    f_1d5e_0fe3(x + 9, y, x + 9, y);
    f_1d5e_0fe3(x + 5, y + 1, x + 8, y + 1);
    f_1d5e_0fe3(x - 2, y + 3, x - 2, y + 3);
    f_1d5e_0fe3(x + 15, y + 3, x + 15, y + 3);
    f_1d5e_0fe3(x - 2, y + 4, x - 2, y + 4);
    f_1d5e_0fe3(x + 15, y + 4, x + 15, y + 4);
    f_1d5e_08cc(col2 + 16);
    f_1d5e_08e2(x + 2, y + 5, x + 11, y + 10);
    f_1d5e_08d7(col2 + 16);
    f_1d5e_0fe3(x + 3, y + 11, x + 10, y + 11);
    sprintf(num, "%d", player);
    sprintf(d1, "%c", num[0]);
    f_1646_357e(x + 13 - (player >= 10 ? 4 : 0) - (player == 1 ? 1 : 0), -(y + 14 - 6 + 1), col, d1);
    if (player >= 10) {
        sprintf(d2, "%c", num[1]);
        f_1646_357e(x + 20 - 6 - (player == 1 ? 1 : 0), -(y + 14 - 6 + 1), col, d2);
    }
    if (d_3404_1334[team][0][player - 1] == 11 || d_3404_1334[team][0][player - 1] == 12) {
        f_1d5e_08d7(22);
        f_1d5e_0fe3(x - 1, y + 7, x - 9, y + 7);
        f_1d5e_0fe3(x - 9, y + 7, x - 7, y + 5);
        f_1d5e_0fe3(x - 9, y + 7, x - 7, y + 9);
        f_1d5e_0fe3(x + 14, y + 7, x + 22, y + 7);
        f_1d5e_0fe3(x + 22, y + 7, x + 20, y + 5);
        f_1d5e_0fe3(x + 22, y + 7, x + 20, y + 9);
    } else if (d_3404_1334[team][2][player - 1] == 1) {
        f_1d5e_08d7(22);
        f_1d5e_0fe3(x + 7, y - 1, x + 7, y - 9);
        f_1d5e_0fe3(x + 7, y - 9, x + 5, y - 7);
        f_1d5e_0fe3(x + 7, y - 9, x + 9, y - 7);
    } else if (d_3404_1334[team][2][player - 1] == 2) {
        f_1d5e_08d7(22);
        f_1d5e_08d7(22);
        f_1d5e_0fe3(x + 7, y + 13, x + 7, y + 21);
        f_1d5e_0fe3(x + 7, y + 21, x + 5, y + 19);
        f_1d5e_0fe3(x + 7, y + 21, x + 9, y + 19);
    }
}

/* can player a play in position b */
char f_1646_66f8(int a, int b)
{
    char x, y;

    if (!f_1646_5dff(a)) {
        if (b == 11)
            return -1;
        if (b == 1 && d_2414_af3c[a].w.f0)
            return -1;
        x = 0;
        y = 0;
        if ((f_1646_68af(b) && d_2414_af3c[a].w.f1) || (f_1646_68d1(b) && d_2414_af3c[a].w.f2) ||
            (f_1646_68ee(b) && d_2414_af3c[a].w.f3))
            x = 1;
        if ((f_1646_692d(b) && d_2414_af3c[a].w.f4) || (f_1646_690b(b) && d_2414_af3c[a].w.f5) ||
            (f_1646_694f(b) && d_2414_af3c[a].w.f6))
            y = 1;
        if (x == 1 && y == 1)
            return -1;
    } else {
        x = d_2414_c6ac[f_1646_5e11(a)][0][f_1646_5e2d(a)];
        return (b == 1 && x == 1) || (f_1646_68af(b) && x == 2) || (f_1646_68d1(b) && x == 3) ||
               (f_1646_68ee(b) && x == 4) ? -1 : 0;
    }
    return 0;
}

char f_1646_68af(int x)
{
    if (x == 2 || x == 3 || x == 4 || x == 11)
        return -1;
    return 0;
}

char f_1646_68d1(int x)
{
    if (x == 5 || x == 6 || x == 7)
        return -1;
    return 0;
}

char f_1646_68ee(int x)
{
    if (x == 8 || x == 9 || x == 10)
        return -1;
    return 0;
}

char f_1646_690b(int x)
{
    if (x == 3 || x == 6 || x == 9 || x == 11)
        return -1;
    return 0;
}

char f_1646_692d(int x)
{
    if (x == 2 || x == 5 || x == 8 || x == 11)
        return -1;
    return 0;
}

char f_1646_694f(int x)
{
    if (x == 4 || x == 7 || x == 10 || x == 11)
        return -1;
    return 0;
}

/* is it the transfer window (weeks 5-36 or from 39 on; from week 13 when x) */
char f_1646_6971(char x)
{
    if (x == 0) {
        if ((d_5d51_da06 >= 5 && d_5d51_da06 <= 36) || d_5d51_da06 >= 39)
            return -1;
        else
            return 0;
    } else if (d_5d51_da06 >= 13)
        return -1;
    return 0;
}

double f_1646_69a0(int x, int y)
{
    return (f_1d5e_1342(d_44d7_0000[15][x], d_44d7_0000[9][x]) * 0.1 + d_44d7_0000[12][x]
            + d_44d7_0000[17][x] * 0.5 + (y == 1 || y == 4 || y == 7 || y > 9 ? 3 : 0)) / 3.0;
}

int f_1646_6a5c(int a, int b, int c)
{
    return d_3404_50e2[b == 39][a] + (c == 1 || c == 4 || c == 7 || c > 9 ? 2 : 0);
}

int f_1646_6aa9(int x)
{
    return (x + 1) / 2;
}

float f_1646_6ab8(int x)
{
    if (x <= 17 || x >= 38)
        return 1.1;
    if (x <= 37)
        return 2.5;
    return 3.5;
}

/* is the player unhappy: the reason in d_2414_3950 (unless c), its code in d_5d51_d828 */
char f_1646_6ae2(int player, char c)
{
    d_5d51_d59f = 0;
    d_5d51_d828 = 0;
    if (f_1646_6f38(player) == 0 && d_3c0d_0000[7][player] == 255 && !d_2414_af3c[player].w.f30) {
        if (!d_2414_af3c[player].w.f11) {
            d_5d51_d798 = d_44d7_0000[23][player];
            d_5d51_d59c = f_1646_2cc9(d_5d51_d796 = d_44d7_0000[18][player]);
            if (d_5d51_da06 > 18 && !d_2414_af3c[player].w.f23) {
                d_5d51_d59a = d_2414_af3c[player].w.f7 == 0 || f_1646_1f63(player) > 10;
                d_5d51_d599 = d_44d7_0000[20][player] == 0 && d_44d7_0000[21][player] > 90;
                if (d_5d51_d59a && d_5d51_d599 && d_5d51_d798 == 1) {
                    if (!c)
                        strcpy(d_2414_3950, "feels he should be in the team");
                    d_5d51_d59f = -1;
                    d_5d51_d828 = 1;
                }
                if (d_5d51_d59a && d_5d51_d599 && d_5d51_d798 > 1 &&
                    d_44d7_0000[17][player] > (d_2414_af3c[player].w.f0 << 2) + 30) {
                    if (!c)
                        strcpy(d_2414_3950, "wants first team football");
                    d_5d51_d59f = -1;
                    d_5d51_d828 = 2;
                }
            }
            if (d_3404_4272[d_5d51_d796] == 650) {
                d_5d51_d794 = 0;
                d_5d51_d792 = 0;
            } else {
                d_5d51_d794 = d_4f37_0960[d_3c0d_0000[17][player]][d_3404_225c[d_3404_4226[d_5d51_d796]]];
                d_5d51_d792 = d_4f37_0960[d_3c0d_0000[17][player]][d_3404_225c[d_3404_4272[d_5d51_d796]]];
            }
            if (f_1646_2dce(player) - f_1646_2cfd(d_5d51_d796) > (d_3404_691c[player] > 0 ? 8 : 6) &&
                f_1646_2cfd(d_5d51_d796) < 15.0) {
                if (!c)
                    strcpy(d_2414_3950, "wants to move to a better club");
                d_5d51_d59f = -1;
                d_5d51_d828 = 3;
            } else if (d_5d51_d794 > 8) {
                if (!c) {
                    if (d_5d51_d59c)
                        strcpy(d_2414_3950, "is not happy working for you");
                    else
                        strcpy(d_2414_3950, "cannot work with his manager");
                }
                d_5d51_d59f = -1;
                d_5d51_d828 = 4;
            } else if (d_5d51_d792 > 8) {
                if (!c)
                    sprintf(d_2414_3950, "cannot work with %s coach", d_5d51_d59c ? "the" : "his");
                d_5d51_d59f = -1;
                d_5d51_d828 = 5;
            } else {
                d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
                if (d_5d51_da4c[4][player] < f_1646_6f80(player, d_5d51_d796) * 0.8 && d_3404_691c[player] > 0) {
                    if (!c)
                        strcpy(d_2414_3950, "wants higher wages");
                    d_5d51_d59f = -1;
                    d_5d51_d828 = 6;
                }
            }
        }
        if (d_2414_af3c[player].w.f16) {
            if (!c)
                strcpy(d_2414_3950, "feels he's been fined unfairly");
            d_5d51_d59f = -1;
            d_5d51_d828 = 7;
        }
    }
    return d_5d51_d59f;
}

/* is the player one of the players abroad (1000..) */
char f_1646_6f38(int player)
{
    if ((unsigned)player >= 1000 && d_5d51_da18 + 999 >= (unsigned)player)
        return -1;
    return 0;
}

/* is the player's club outside 141..212 */
char f_1646_6f56(int player)
{
    if (d_44d7_0000[18][player] <= 140)
        return -1;
    if (d_44d7_0000[18][player] >= 213)
        return -1;
    return 0;
}

/* the wage a player asks of a club */
int f_1646_6f80(int player, int club)
{
    unsigned char rep, level;
    unsigned char a = club < 38 ? f_1646_2cfd(club) : 16.0;
    float v;
    float t[4] = { 1.0, 0.7, 0.4, 0.3 };

    rep = d_3c0d_0000[18][player];
    d_5d51_d7a8 = (d_44d7_0000[0][player] * 4 + rep) / 5;
    level = f_1d5e_1308(f_1d5e_136a(19, d_5d51_d7a8 / 10), 0);
    v = a * 0.14 * (d_240d_0000[level] * 400.0) * t[club < 38 ? f_1646_717d(club) : 0];
    v = v * (d_44d7_0000[17][player] / 100.0 + 1);
    if (d_2414_af3c[player].w.f28)
        v = v * 1.3;
    d_5d51_d7a6 = (int)(v / 50.0) * 50;
    d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
    if (d_5d51_da4c[4][player] > d_5d51_d7a6 && d_44d7_0000[17][player] < 30)
        d_5d51_d7a6 = d_5d51_da4c[4][player];
    return d_5d51_d7a6;
}

/* waits up to 10 ticks for a key or a click */
char f_1646_7125(void)
{
    char r = 0;
    long t;

    t = f_1d5e_0df7();
    do {
        if (f_1d5e_0c17() > 0)
            r = -1;
    } while (f_1d5e_0df7() - t < 10 && !r);
    return r;
}

/* the number of clubs in a league: 18 in Serie A, 20 in Serie B */
unsigned char f_1646_716c(unsigned char league)
{
    return league == 0 ? 18 : 20;
}

/* is the team in Serie B */
unsigned char f_1646_717d(char team)
{
    return (unsigned char)team <= 17 ? 0 : 1;
}
