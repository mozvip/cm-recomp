/* @at 1a70:000a */
/* @data 69da:01d0 */
/* @module */

/* Root module 1a70: CM94's version of CM93's root module 14bc (CM1's 1680 with the functions
 * CM93 moved into the root from CM1's overlays 88c9, 992a, a1c3 and 67ee): text drawing,
 * boxes, buttons and menus, input waits, number and money formatting, player values and
 * ratings, squad slots and positions, the fixture calendar tests by week, player, manager,
 * division and number names, the player shirt, the players' complaints and the wages they
 * ask. Built with Borland C++ 4.02. 33ed, 4183, 43be and 5812 are never called (CM93's
 * 350e, 42c1, 4503 and 5a7a); 33ed is public, the other three static as in CM93. */
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
void f_1a70_000a(float x, int team, char far *title);
void f_1a70_0137(int x1, int y1, int x2, int y2);
long f_1a70_01d9(int p, int n);
void f_1a70_0adb(int line, char far *s);
void f_1a70_0b46(char far *s);
void f_1a70_0b80(char far *s);
char f_1a70_0c2c(void);
long f_1a70_0cb8(long v, char c);
long f_1a70_0d58(long v);
char far *f_1a70_0dfe(long amount);
void f_1a70_0e4d(int p);
void f_1a70_11cd(unsigned char team, unsigned char pos);
void f_1a70_12cd(register int player);
void f_1a70_1600(int p);
void f_1a70_18e0(int p);
void f_1a70_1cda(int p);
int f_1a70_1dc1(int player);
int f_1a70_1e39(int player);
int f_1a70_1eda(int a, int player, int c);
long f_1a70_21d1(int player, int team, unsigned char pos, unsigned char second);
int f_1a70_2342(unsigned char a);
char f_1a70_237e(volatile int w) /* volatile + ternary: the value through AX (mov ax,[bp+6] / sub ax,12 / mov bx,ax) */;
char f_1a70_243f(int w);
char f_1a70_2490(int w);
char f_1a70_24c5(int w);
char f_1a70_2522(int w);
char f_1a70_257b(int w);
char f_1a70_25dc(int w);
char f_1a70_2631(int w);
char f_1a70_268e(int w, int n);
char f_1a70_2737(int w, int n);
char f_1a70_27c8(int w, int n);
char f_1a70_2855(int w, int n);
char f_1a70_28f3(int w);
char f_1a70_2950(int w);
char f_1a70_29ad(int w, int n);
char f_1a70_29fa(int x);
char f_1a70_2a20(int w, int n);
char f_1a70_2a7d(int x);
char f_1a70_2a9e(int w, int n);
char f_1a70_2b1e(int x);
int f_1a70_2b3f(int a, int b);
char f_1a70_2bc7(int x);
float f_1a70_2bff(int x);
int f_1a70_2ccc(int x);
char f_1a70_2d0e(int player);
char f_1a70_2d83(int player);
char far *f_1a70_2e4a(int x, char c);
void f_1a70_2eaa(int n, char far *title, char far *items);
void f_1a70_31ce(int a, int b, int line);
void f_1a70_3226(int last);
void f_1a70_33ed(int i);
char far *f_1a70_3404(int x);
void f_1a70_344b(int x, int y, int colour, char far *s);
void f_1a70_3554(float x, float y, int bg, int fg, int w, char far *s);
void f_1a70_379b(float x, float y, int colour, char far *s);
void f_1a70_390f(float x, float y, int bg, int fg, int w, char far *s);
void f_1a70_3b47(float x, float y, int colour, char far *s);
void f_1a70_3d0c(float x, float y, int bg, int fg, int w, char far *s);
static void f_1a70_4183(float x, float y, int bg, int fg, int w, int len, char far *s);
static void f_1a70_43be(float x, float y, int team);
void f_1a70_442b(float x, float y, int team);
char far *f_1a70_448e(int n, char far *s);
int f_1a70_4513(int team);
int f_1a70_4559(int team);
char far *f_1a70_4592(int player);
char far *f_1a70_46c1(int player);
char far *f_1a70_4739(int player);
char far *f_1a70_4793(int manager, char full);
char far *f_1a70_488b(int player);
char far *f_1a70_48f5(int division);
char far *f_1a70_4983(int division, char full);
void f_1a70_4a41(char far *title);
void f_1a70_4b7d(float x, int w, char far *prompt);
void f_1a70_4bf2(int x, float y, int colour, int maxlen);
void f_1a70_4e4b(void);
void f_1a70_4ede(int a, float x, float y, int c, int d, int e, char far *s);
void f_1a70_525f(int n, char swap);
int f_1a70_53de(int a);
void f_1a70_5641(int team);
void f_1a70_565a(void);
void f_1a70_5688(int a);
void f_1a70_57e3(void);
static char far *f_1a70_5812(char far *s);
long f_1a70_588f(int team);
void f_1a70_598c(int team, char far *title, char far *text);
int f_1a70_5b36(FILE *fp);
char f_1a70_5b76(int player);
char f_1a70_5b94(int player);
int f_1a70_5baa(int player);
unsigned char f_1a70_5bc8(int player);
unsigned char f_1a70_5be7(int player, unsigned char a);
void f_1a70_5cda(void);
void f_1a70_5d1e(int a, int b, char far *s);
void f_1a70_5e32(void);
void f_1a70_5e46(void);
char f_1a70_5e5a(int p);
char f_1a70_5ea2(unsigned char team, unsigned char week, unsigned char n);
void f_1a70_5f14(unsigned char team, unsigned char player, unsigned x, unsigned y);
char f_1a70_6514(int a, int b);
char f_1a70_66a9(int x);
char f_1a70_66cf(int x);
char f_1a70_66f0(int x);
char f_1a70_6711(int x);
char f_1a70_6737(int x);
char f_1a70_675d(int x);
char f_1a70_6783(int x);
double f_1a70_6798(int x, int y);
int f_1a70_6856(int a, int b, int c);
int f_1a70_68a4(int x);
float f_1a70_68b6(int x);
char f_1a70_68f0(int player, char c);
char f_1a70_6d23(int player);
int f_1a70_6d45(int player, int club);
char f_1a70_6ee4(void);

void f_2162_07f7(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_2162_0897();
void f_2162_08a6();
void f_2162_1021(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_2162_08b5(int x1, int y1, int x2, int y2);
unsigned f_2162_0b1b(char far *s, char far *set);
void f_2162_0dfb(int ticks);
int f_2162_134e(int a, int b);
long f_2162_1367(long a, long b);
int f_2162_13ba(int a, int b);
void far *f_2162_1634(int handle, int page);
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
extern struct flags_w far d_4512_bdc8[];
extern int d_69da_dfec;
extern unsigned char far d_3668_0000[][1860];
extern unsigned char far d_28da_2a78[][1860];
extern int far d_28c9_0000[];
extern float far d_28cc_0000[];
extern int far d_3668_cb70[];
extern int far d_4512_1a30[];
extern unsigned char far d_4512_3042[][650];
extern float d_69da_dead;
extern float d_69da_dea9;
extern char far d_536d_57cb[];
extern unsigned char far d_4512_00a4[];
extern char near *d_69da_b1fc[];
extern long d_69da_df41;
extern long d_69da_df3d;
extern float d_69da_deb1;
extern float d_69da_dea5;
extern float d_69da_dea1;
extern float d_69da_de55;
extern char d_69da_de02;
extern int d_69da_dc20;
extern int d_69da_dc1a;
extern int d_69da_dc18;
extern int d_69da_dc16;
extern int d_69da_dc14;
extern int d_69da_dc12;
extern int d_69da_dc10;
extern int d_69da_dc0e;
extern int d_69da_da5e;
extern int d_69da_d9e6;
extern int d_69da_d9be;
extern int d_69da_d99a;
extern int (far *d_69da_dfa6)[1860];
extern long far *d_69da_df9a;
extern int d_69da_dfe6;
char far *f_2162_0f38(void);
extern int far d_28da_10f0[][26];
extern int far d_4512_549a[][14];
extern unsigned char far d_4512_4726[][3][14];
extern unsigned char far d_4512_2db8[];
extern unsigned char far d_4512_023e[];
extern unsigned char far d_4512_a4f8[][80];
extern unsigned char far d_4512_a508[][80];
extern int d_69da_dcfe;
extern int d_69da_dcfc;
extern int d_69da_dcfa;
extern int d_69da_dcf8;
extern int d_69da_dcf6;
extern int d_69da_dcf4;
extern int d_69da_dcf2;
extern int d_69da_dcf0;
extern int d_69da_dcec;
extern int d_69da_dce8;
extern int d_69da_dce6;
extern int d_69da_dce4;
extern int d_69da_dce0;
extern int d_69da_dcde;
extern int d_69da_dcdc;
extern int d_69da_dcda;
extern int d_69da_dcd8;
extern int d_69da_dbd0;
extern int d_69da_da86;
extern int d_69da_da58;
extern int d_69da_da56;
extern int d_69da_da02;
extern int d_69da_d9d8;
extern int d_69da_d9a0;
extern int d_69da_dd08;
extern int d_69da_dd06;
extern int d_69da_dd04;
extern int d_69da_dd02;
extern int d_69da_dd00;
extern int d_69da_dbf6;
extern unsigned char far d_28da_ad40[];
extern int far d_3668_ae60[];
void f_2162_0992(int a);
void f_2162_09e2(int x, int y, char far *s);
void f_2162_0b0c(int on);
int f_2162_0c13(void);
int f_2162_0c1f(void);
int f_2162_0c2b(void);
long f_2162_0e32(void);
char far *f_2162_0e9b(char far *s);
extern char far d_536d_50cd[];
extern char far d_536d_4ebd[];
extern unsigned char far d_4512_a4c8[][5][16];
extern float far d_4512_731c[];
extern float far d_4512_736c[];
extern float far d_4512_73bc[];
extern unsigned char far d_4512_0000[][82];
extern unsigned char far d_4512_0148[];
extern unsigned char far d_4512_0334[][82];
extern unsigned char far d_4512_0386[];
extern unsigned char far d_5dbf_0946[];
extern int far d_5dbf_1290[][2][98];
extern char near *d_69da_b2a4[];
extern float d_69da_de45;
extern float d_69da_de41;
extern char d_69da_de2e;
extern char d_69da_ddb6;
extern int d_69da_dd6e;
extern int d_69da_dd40;
extern int d_69da_dd3e;
extern int d_69da_dd3c;
extern int d_69da_dd3a;
extern int d_69da_db74;
extern int d_69da_da14;
extern int d_69da_d9ea;
extern int d_69da_d9c4;
extern int d_69da_d992;
extern unsigned char far d_4512_6324[][20];
extern int d_69da_dc48;
extern int d_69da_dba2;
extern int d_69da_d9ce;
void f_2162_0346(void);
void f_2162_090f(int x1, int y1, int x2, int y2);
char far *f_2162_0d1a(void);
char far *f_2162_0160(char c);
void f_2162_1a11(void);
void f_2162_1a2f(void);
extern char far *far d_62e5_11f6[];
extern int far d_3668_bce8[];
extern int far d_3668_d9f8[];
extern char far d_536d_6c01[];
extern char far d_536d_5a0f[];
extern unsigned char far d_536d_4f71[];
extern float far d_4512_7484[][100];
extern unsigned char far d_28da_28bc[][100];
extern unsigned char far d_28da_2920[];
extern char d_69da_de03;
extern int d_69da_dd70;
extern int d_69da_daa2;
extern int d_69da_da24;
extern int d_69da_d9dc;
extern int d_69da_d9d4;
extern float d_69da_dee5;
extern float d_69da_dedd;
extern float d_69da_de5d;
extern float d_69da_de51;
extern float d_69da_de4d;
extern int (far *d_69da_dfbe)[2][16];
extern int (far *d_69da_dfaa)[650];
extern int d_69da_dff8;
extern int d_69da_dfee;
long f_2162_0da1(long n);
void f_2162_13fc(void far *a, void far *b, int n);
long f_a83a_1ea1(int team);
void f_aac9_2ece(void);
void f_aac9_2f6d(void);
void f_b085_3f64(void);
extern char far d_536d_7fa9[];
extern struct { int a, b, start, len; } far d_4512_dad8[];
extern long far d_4512_1e90[][80];
extern long d_69da_df81;
extern long d_69da_df7d;
extern long d_69da_df79;
extern long d_69da_df75;
extern float d_69da_deed;
extern float d_69da_dee9;
extern char d_69da_de31;
extern char d_69da_de19;
extern char d_69da_de13;
extern char d_69da_ddb9;
extern char d_69da_ddb8;
extern char d_69da_ddb7;
extern char d_69da_ddb3;
extern int d_69da_dd74;
extern int d_69da_dd72;
extern int d_69da_dd44;
extern int d_69da_dd42;
extern int d_69da_dab4;
extern int d_69da_d9ca;
extern int d_69da_d98e;
extern char far *d_69da_dfc2;
extern unsigned char (far *d_69da_dfba)[1860];
extern long (far *d_69da_dfae)[80];
extern int d_69da_e2ce;
extern int d_69da_dffa;
extern int d_69da_dff6;
extern int d_69da_dff0;
float f_2162_1390(float a, float b);
extern unsigned char far d_5dbf_0b62[];
extern unsigned char far d_3668_e912[][14];
extern int far d_4512_1ad0[];
extern unsigned char far d_4512_2b2e[];
extern unsigned char far d_5dbf_0932[][10];
extern int d_69da_da60;
extern int d_69da_dab0;
extern int d_69da_daae;
extern int d_69da_d996;
extern int d_69da_d990;
extern char d_69da_de00;
extern char d_69da_ddff;
extern char d_69da_ddfd;
extern char d_69da_ddfa;
extern int d_69da_db76;
extern int d_69da_dc0c;
extern int d_69da_dc0a;
extern int d_69da_dc08;
extern int d_69da_dc06;
extern int d_69da_dbf8;
extern unsigned char far d_5dbf_0733[][12][5];
extern int far d_28da_00b0[][2][13];
void f_2162_0397();
extern unsigned far d_28d8_0014;
extern unsigned far d_28d8_0012;
extern char far d_536d_968d[][80];
extern unsigned char far d_28d8_0000[];
extern char far *far d_62e5_0000[];
extern char far d_536d_6c53[];
extern char far d_536d_596f[][4][20];
extern char far d_536d_86ed[][40];
extern char far d_536d_5f2d[];
extern char far d_536d_7635[];
extern char far d_536d_69d1[];
extern float far d_28d3_0000[];
extern char far d_28d8_0018;
extern int far d_28d8_0016;
extern unsigned far d_28d8_0010;


void f_1a70_000a(float x, int team, char far *title)
{
    char buf[320];

    f_1a70_4a41("");
    sprintf(d_536d_57cb, "%s %s", (char far *)d_69da_b1fc[team], title);
    if (x == -1)
        d_69da_de55 = 19 - strlen(d_536d_57cb) / 2;
    else
        d_69da_de55 = x;
    f_2162_0897(16);
    f_2162_08b5((d_69da_de55 * 8 + 6), 7, ((strlen(d_536d_57cb) + d_69da_de55) * 8 + 19), 21);
    sprintf(buf, " %s ", d_536d_57cb);
    f_1a70_3d0c(d_69da_de55, 1.125, -(d_4512_00a4[team] / 16), d_4512_00a4[team] % 16, 0, buf);
}

/* Draws a filled box with a drop shadow and a two-tone border. */
void f_1a70_0137(int x1, int y1, int x2, int y2)
{
    f_2162_0897(16);
    f_2162_08b5(x1 + 4, y1 + 4, x2 + 1, y2 + 1);
    f_2162_0897(d_69da_da5e + 16);
    f_2162_08b5(x1, y1, x2, y2);
    f_2162_08a6(17);
    f_2162_1021(x1, y2, x1, y1);
    f_2162_1021(x1, y1, x2, y1);
    f_2162_08a6(16);
    f_2162_1021(x2, y1, x2, y2);
    f_2162_1021(x2, y2, x1, y2);
}

/* Player p's transfer value to team n (-1: none). CM1's overlay 88c9 player value, reworked: 60-game
   form window, the player flags d_4512_bdc8 in place of CM1's flag rows, more
   attributes. The float m is declared per block: it sits below the temporaries. */
long f_1a70_01d9(int p, int n)
{
    if (p != d_69da_dc0e) {
        float m;

        d_69da_dc10 = f_2162_13ba(d_3668_0000[5][p], 60);
        d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
        if (d_3668_0000[5][p] > 0)
            d_69da_dea1 = d_69da_dfa6[1][p] / (float)d_3668_0000[5][p] * 2.0;
        else
            d_69da_dea1 = 0;
        d_69da_dc12 = f_2162_13ba(d_3668_0000[0][p], 60);
        if (d_3668_0000[0][p] > 0)
            d_69da_dea5 = d_69da_dfa6[0][p] / (float)d_3668_0000[0][p] * 2.0;
        else
            d_69da_dea5 = 0;
        d_69da_dc14 = (d_28da_2a78[0][p] * (60 - d_69da_dc10) * 0.1 + d_69da_dc10 * d_69da_dea1) / 60.0 * 0.5
                    + (d_28da_2a78[0][p] * (60 - d_69da_dc12) * 0.1 + d_69da_dc12 * d_69da_dea5) / 60.0 * 0.5;
        d_69da_dc14 = f_2162_134e(f_2162_13ba(d_69da_dc14, 20), 1);
        if (d_4512_bdc8[p].f0) {
            d_69da_dea9 = 1;
            d_69da_dead = 1;
            d_69da_deb1 = 1;
        } else {
            d_69da_dea9 = d_4512_bdc8[p].f1 / 10.0 + 0.9 + d_4512_bdc8[p].f2 / 10.0 + d_4512_bdc8[p].f3 / 10.0;
            d_69da_dead = d_4512_bdc8[p].f4 / 10.0 + 0.9 + d_4512_bdc8[p].f5 / 10.0 + d_4512_bdc8[p].f6 / 10.0;
            d_69da_deb1 = d_28da_2a78[2][p] / 10.0 * 0.0375 + 0.7
                        + d_28da_2a78[1][p] / 10.0 * 0.06125
                        + d_28da_2a78[3][p] / 10.0 * 0.025
                        + d_28da_2a78[5][p] / 10.0 * 0.1
                        + d_28da_2a78[6][p] / 10.0 * 0.075
                        + d_28da_2a78[7][p] / 10.0 * 0.15
                        + d_28da_2a78[8][p] / 5.0 * 0.06;
        }
        d_69da_de02 = d_4512_bdc8[p].f18 && d_4512_bdc8[p].f19 == 0;
        m = d_28cc_0000[d_28da_2a78[17][p] - 16];
        d_69da_df3d = d_28c9_0000[d_69da_dc14 - 1] * m
                    * d_69da_dea9 * d_69da_dead * d_69da_deb1 * 750.0 * (d_69da_de02 ? 1.5 : 1);
        if (d_4512_bdc8[p].f28 && d_28da_2a78[17][p] < 30)
            d_69da_df3d = d_69da_df3d * 1.25;
        if (d_28da_2a78[18][p] < 80)
            switch (d_28da_2a78[18][p] / 20) {
            case 1:
                d_69da_df3d = d_69da_df3d / 1.5;
                break;
            case 2:
                d_69da_df3d = d_69da_df3d / 2;
                break;
            case 3:
                d_69da_df3d = d_69da_df3d / 3;
                break;
            }
    }
    if (n == -1 || n >= 80)
        d_69da_df41 = d_69da_df3d * (d_28da_2a78[0][23 * 1860 + p] == 1 ? 1.5 : 1);
    else {
        if (d_28da_2a78[18][p] == n) {
            if (!d_4512_bdc8[p].f8 || d_4512_bdc8[p].f8 && d_4512_bdc8[p].f24) {
                float m;

                m = 1;
                d_69da_dc1a = f_2162_134e(d_3668_cb70[p] / 100 - d_69da_d99a, 0);
                m += d_69da_dc1a / 5.0;
                if (d_3668_cb70[p] == 0)
                    m += 0.5;
                if (d_28da_2a78[23][p] == 1)
                    m += 0.5;
                d_69da_df41 = d_69da_df3d * m;
            } else {
                d_69da_df9a = f_2162_1634(d_69da_dfe6, 0);
                d_69da_df41 = d_69da_df9a[p];
            }
        } else {
            float m;

            m = 1;
            d_69da_dc1a = f_2162_134e(d_3668_cb70[p] / 100 - d_69da_d99a, 0);
            m += d_69da_dc1a / 5.0;
            if (d_3668_cb70[p] == 0)
                m += 0.5;
            if (d_28da_2a78[23][p] == 1)
                m += 0.5;
            d_69da_df41 = d_69da_df3d * m;
        }
        if (!d_4512_bdc8[p].f8 && d_28da_2a78[17][p] < (d_4512_bdc8[p].f0 ? 31 : 27)) {
            d_69da_dc16 = f_2162_134e(10.0 - d_4512_3042[0][d_4512_1a30[n]] * 0.05, 1);
            d_69da_dc18 = f_2162_134e(f_2162_13ba(d_28da_2a78[9][p] * 0.1 + p % d_69da_dc16 - d_69da_dc16 * 0.5, 20), 1);
            d_69da_df41 = d_69da_df41 * 0.95 + d_28c9_0000[d_69da_dc18 - 1] * 50L;
        }
    }
    if (!d_4512_bdc8[p].f8 || f_1a70_2bc7(d_28da_2a78[0][18 * 1860 + p]) == 0)
        d_69da_df41 = f_1a70_0cb8(d_69da_df41, -1);
    d_69da_dc0e = p;
    return f_2162_1367(d_69da_df41, d_69da_df41 ? 1000 : 0);
}

void f_1a70_0adb(int line, char far *s)
{
    d_69da_d9e6 = 9;
    if (line == 4)
        d_69da_d9e6 = 1;
    else if (line == 7)
        d_69da_d9e6 = 6;
    else if (line == 9 || line < 0)
        d_69da_d9e6 = 5;
    if (line < 0)
        line = -line;
    f_1a70_3b47(2.0, line, d_69da_d9e6, s);
}

void f_1a70_0b46(char far *s)
{
    f_1a70_3b47(2.0, 22.5, 1, s);
    f_2162_0dfb(75);
    f_2162_07f7(4, 175, 316, 190);
}

void f_1a70_0b80(char far *s)
{
    char buf[80];

    f_1a70_4a41("");
    d_69da_d9be = f_2162_0b1b(s, "|");
    if (d_69da_d9be == 0)
        f_1a70_3b47(-1.0, 12.5, 6, s);
    else {
        strcpy(buf, s);
        buf[d_69da_d9be - 1] = 0;
        f_1a70_3b47(-1.0, 11.5, 6, buf);
        strcpy(buf, s + d_69da_d9be);
        f_1a70_3b47(-1.0, 13.5, 6, buf);
    }
    f_1a70_5688(0);
}

char f_1a70_0c2c(void)
{
    f_1a70_3b47(2.0, 22.5, 5, "Confirm");
    f_1a70_4ede(2, 9.0, 22.5, 6, 2, 0, " Y ");
    f_1a70_4ede(2, 13.0, 22.5, 6, 2, 0, " N ");
    do
        d_69da_dc20 = f_1a70_53de(0);
    while (d_69da_dc20 <= 0);
    f_2162_07f7(4, 174, 160, 191);
    return d_69da_dc20 == 1 ? -1 : 0;
}

long f_1a70_0cb8(long v, char c)
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

long f_1a70_0d58(long v)
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
    return f_2162_1367(v / r * r, v ? 50000L : 0L);
}

char far *f_1a70_0dfe(long amount)
{
    char far *s;

    s = f_2162_0f38();
    if (amount)
        sprintf(s, "%ld", amount);
    else
        strcpy(s, "Free");
    return s;
}

void f_1a70_0e4d(int p)
{
    long best, cur, other;

    d_69da_dcdc = p;
    if (!f_1a70_5b94(d_69da_dcdc)) {
        d_69da_d9d8 = d_28da_2a78[0][18 * 1860 + d_69da_dcdc];
        if (d_4512_bdc8[d_69da_dcdc].f7 == 0)
            return;
        d_4512_bdc8[d_69da_dcdc].f7 = 0;
    } else {
        d_69da_d9d8 = f_1a70_5baa(d_69da_dcdc);
        if (d_4512_a508[d_69da_d9d8][f_1a70_5bc8(d_69da_dcdc)] == 0)
            return;
        d_4512_a508[d_69da_d9d8][f_1a70_5bc8(d_69da_dcdc)] = 0;
    }
    d_69da_dce0 = d_69da_dcde = f_1a70_1dc1(d_69da_dcdc);
again:
    d_4512_549a[d_69da_d9d8][d_69da_dce0] = 1859;
    best = -5000;
    d_69da_dce4 = -1;
    d_69da_dce6 = -1;
    for (d_69da_da02 = 0; d_69da_da02 <= d_4512_023e[d_69da_d9d8] - 1; d_69da_da02++) {
        d_69da_dce8 = d_28da_10f0[d_69da_d9d8][d_69da_da02];
        if (d_28da_2a78[20][d_69da_dce8] == 0) {
            d_69da_da86 = d_4512_4726[d_69da_d9d8][0][d_69da_dce0];
            if (d_69da_da86 > 1 || (d_69da_da86 == 1 && d_4512_bdc8[d_69da_dce8].f0)) {
                cur = f_1a70_1eda(d_69da_da86, d_69da_dce8, d_4512_2db8[d_4512_1a30[d_69da_d9d8]] / 16);
                cur = cur * d_28da_2a78[15][d_69da_dce8];
                if (cur > best) {
                    if (d_4512_bdc8[d_69da_dce8].f7) {
                        d_69da_dcde = f_1a70_1dc1(d_69da_dce8);
                        if ((d_69da_dce0 < 11 && d_69da_dcde < 11) || (d_69da_dce0 > 10 && d_69da_dcde > 10)
                            || (d_69da_dcde > 10 && d_69da_dce0 < 11)) {
                            other = f_1a70_1eda(d_4512_4726[d_69da_d9d8][0][d_69da_dcde], d_69da_dce8,
                                                d_4512_2db8[d_4512_1a30[d_69da_d9d8]] / 16);
                            other = other * d_28da_2a78[15][d_69da_dce8];
                            if (cur > other || (d_69da_dcde > 10 && d_69da_dce0 < 11)) {
                                best = cur;
                                d_69da_dce4 = d_69da_dce8;
                                d_69da_dce6 = d_69da_dcde;
                            }
                        }
                    }
                    if (d_4512_bdc8[d_69da_dce8].f7 == 0) {
                        best = cur;
                        d_69da_dce4 = d_69da_dce8;
                        d_69da_dce6 = -1;
                    }
                }
            }
        }
    }
    if (d_69da_dce4 == -1) {
        f_1a70_11cd(d_69da_d9d8, d_69da_dce0);
    } else {
        d_69da_dcdc = d_69da_dce4;
        d_4512_549a[d_69da_d9d8][d_69da_dce0] = d_69da_dcdc;
        d_4512_bdc8[d_69da_dcdc].f7 = 1;
        if (d_69da_dce6 > -1) {
            d_69da_dce0 = d_69da_dce6;
            goto again;
        }
    }
}

void f_1a70_11cd(unsigned char team, unsigned char pos)
{
    unsigned char i, want, best;
    register int p, found;

    want = d_4512_4726[team][0][pos];
    best = 0;
    for (i = 0; i <= 15; i = i + 1) {
        if (d_4512_a4f8[team][i] == 0 && d_4512_a508[team][i] == 0) {
            p = team * 20 + i + 3000;
            if (f_1a70_5be7(p, want) > best) {
                best = f_1a70_5be7(p, want);
                found = p;
            }
        }
    }
    d_4512_549a[team][pos] = found;
    d_4512_a508[team][f_1a70_5bc8(found)] = -1;
}

void f_1a70_12cd(register int player)
{
    long best, a, b;

    if (d_4512_bdc8[player].f7)
        return;
    d_69da_d9d8 = d_28da_2a78[0][18 * 1860 + player];
again:
    d_69da_dcec = -1;
    best = -5000;
    d_69da_da56 = d_4512_bdc8[player].f0 ? 0 : 1;
    d_69da_da58 = d_4512_bdc8[player].f0 ? 0 : 12;
loop:
    for (d_69da_d9a0 = d_69da_da56; d_69da_d9a0 <= d_69da_da58; d_69da_d9a0++) {
        d_69da_dcd8 = d_4512_549a[d_69da_d9d8][d_69da_d9a0];
        if (!f_1a70_5b94(d_69da_dcd8)) {
            a = f_1a70_1eda(d_4512_4726[d_69da_d9d8][0][d_69da_d9a0], d_69da_dcd8,
                            d_4512_2db8[d_4512_1a30[d_69da_d9d8]] / 16);
            a = a * d_28da_2a78[15][d_69da_dcd8];
        } else
            a = f_1a70_5be7(d_69da_dcd8, d_4512_4726[d_69da_d9d8][0][d_69da_d9a0]);
        b = f_1a70_1eda(d_4512_4726[d_69da_d9d8][0][d_69da_d9a0], player,
                        d_4512_2db8[d_4512_1a30[d_69da_d9d8]] / 16);
        b = b * d_28da_2a78[15][player];
        if (b > a && b - a > best && (d_69da_d9a0 < 11 || (d_69da_d9a0 > 10 && d_69da_dcec == -1))) {
            best = b - a;
            d_69da_dcec = d_69da_d9a0;
        }
    }
    if (d_4512_bdc8[player].f0 && d_69da_da56 == 0) {
        d_69da_da56 = 13;
        d_69da_da58 = 13;
        goto loop;
    }
    if (d_69da_dcec == -1)
        return;
    d_4512_bdc8[player].f7 = 1;
    if (!f_1a70_5b94(d_4512_549a[d_69da_d9d8][d_69da_dcec]))
        d_4512_bdc8[d_4512_549a[d_69da_d9d8][d_69da_dcec]].f7 = 0;
    else
        d_4512_a508[d_69da_d9d8][f_1a70_5bc8(d_4512_549a[d_69da_d9d8][d_69da_dcec])] = 0;
    d_69da_dcf0 = d_4512_549a[d_69da_d9d8][d_69da_dcec];
    d_4512_549a[d_69da_d9d8][d_69da_dcec] = player;
    if (!f_1a70_5b94(d_69da_dcf0)) {
        player = d_69da_dcf0;
        if (d_69da_dcec < 13)
            goto again;
    }
}

void f_1a70_1600(int p)
{
    long cur, best, other;

    d_69da_dcdc = p;
    if (*(d_28da_2a78[23] + d_69da_dcdc) == 3)
        return;
    d_69da_d9d8 = d_28da_2a78[0][18 * 1860 + d_69da_dcdc];
    d_69da_dce0 = d_69da_dcde = f_1a70_1e39(d_69da_dcdc);
    d_69da_dcf2 = d_69da_dcf4;
    d_28da_2a78[23][d_69da_dcdc] = 3;
again:
    d_69da_dcda = 1859;
    d_28da_00b0[d_69da_d9d8][d_69da_dcf2][d_69da_dce0] = d_69da_dcda;
    best = -5000;
    d_69da_dce4 = -1;
    for (d_69da_da02 = 0; d_69da_da02 <= d_4512_023e[d_69da_d9d8] - 1; d_69da_da02++) {
        d_69da_dce8 = d_28da_10f0[d_69da_d9d8][d_69da_da02];
        d_69da_da86 = d_4512_4726[d_69da_d9d8][0][d_69da_dce0];
        if (f_1a70_6514(d_69da_dce8, d_69da_da86)) {
            cur = f_1a70_21d1(d_69da_dce8, d_69da_d9d8, d_69da_da86, d_69da_dcf2 == 1 ? 1 : 0);
            if (cur > best) {
                if ((d_69da_dcf2 == 0 && d_28da_2a78[23][d_69da_dce8] < 3)
                    || (d_69da_dcf2 == 1 && d_28da_2a78[23][d_69da_dce8] == 2)) {
                    d_69da_dcde = f_1a70_1e39(d_69da_dce8);
                    other = f_1a70_21d1(d_69da_dce8, d_69da_d9d8, d_4512_4726[d_69da_d9d8][0][d_69da_dcde],
                                        d_69da_dcf2 == 1 ? 1 : 0);
                    if (cur > other || (d_69da_dcf2 == 0 && d_69da_dcf4 == 1)) {
                        best = cur;
                        d_69da_dce4 = d_69da_dce8;
                        d_69da_dcf6 = d_69da_dcde;
                        d_69da_dcf8 = d_69da_dcf4;
                    }
                }
            }
            if (cur > best && d_28da_2a78[23][d_69da_dce8] == 3) {
                best = cur;
                d_69da_dce4 = d_69da_dce8;
                d_69da_dcf6 = -1;
                d_69da_dcf8 = -1;
            }
        }
    }
    if (d_69da_dce4 > -1 && d_69da_dce4 < 1859) {
        d_69da_dce8 = d_69da_dce4;
        d_28da_00b0[d_69da_d9d8][d_69da_dcf2][d_69da_dce0] = d_69da_dce8;
        d_28da_2a78[23][d_69da_dce8] = d_69da_dcf2 + 1;
        if (d_69da_dcf6 > -1) {
            d_69da_dce0 = d_69da_dcf6;
            d_69da_dcf2 = d_69da_dcf8;
            goto again;
        }
    } else {
        d_69da_dcda = 1859;
        d_28da_00b0[d_69da_d9d8][d_69da_dcf2][d_69da_dce0] = d_69da_dcda;
    }
}

void f_1a70_18e0(int p)
{
    long best, a, b, c;

    d_69da_dcdc = p;
    if (*(d_28da_2a78[23] + d_69da_dcdc) == 1)
        return;
    d_69da_dbd0 = 0;
    d_69da_d9d8 = d_28da_2a78[0][18 * 1860 + d_69da_dcdc];
again:
    d_69da_dcde = f_1a70_1e39(d_69da_dcdc);
    if (d_69da_dcf4 > -1) {
        d_69da_dcda = 1859;
        d_28da_00b0[d_69da_d9d8][d_69da_dcf4][d_69da_dcde] = d_69da_dcda;
    }
    d_28da_2a78[23][d_69da_dcdc] = 3;
    d_69da_dcfa = -1;
    best = -5000;
    if (d_4512_bdc8[d_69da_dcdc].f0) {
        d_69da_da56 = 0;
        d_69da_da58 = 0;
    } else {
        d_69da_da56 = 1;
        d_69da_da58 = 10;
    }
    for (d_69da_d9a0 = d_69da_da56; d_69da_d9a0 <= d_69da_da58; d_69da_d9a0++) {
        if (f_1a70_6514(d_69da_dcdc, d_4512_4726[d_69da_d9d8][0][d_69da_d9a0])) {
            d_69da_dcd8 = d_28da_00b0[d_69da_d9d8][d_69da_dbd0][d_69da_d9a0];
            a = f_1a70_21d1(d_69da_dcd8, d_69da_d9d8, d_4512_4726[d_69da_d9d8][0][d_69da_d9a0],
                            d_69da_dbd0 == 1 ? 1 : 0);
            b = f_1a70_21d1(d_69da_dcdc, d_69da_d9d8, d_4512_4726[d_69da_d9d8][0][d_69da_d9a0],
                            d_69da_dbd0 == 1 ? 1 : 0);
            if (b > a && b > best) {
                best = b;
                d_69da_dcfa = d_69da_d9a0;
            }
        }
    }
    if (d_69da_dcfa == -1) {
        if (d_69da_dbd0 == 0) {
            d_69da_dbd0 = 1;
            goto again;
        }
    } else {
        d_28da_2a78[23][d_69da_dcdc] = d_69da_dbd0 + 1;
        d_28da_2a78[23][d_28da_00b0[d_69da_d9d8][d_69da_dbd0][d_69da_dcfa]] = 3;
        d_69da_dcf0 = d_28da_00b0[d_69da_d9d8][d_69da_dbd0][d_69da_dcfa];
        d_28da_00b0[d_69da_d9d8][d_69da_dbd0][d_69da_dcfa] = d_69da_dcdc;
        d_69da_dcdc = d_69da_dcf0;
        if (d_69da_dcdc > -1 && d_69da_dcdc < 1859) {
            d_69da_dbd0 = 0;
            goto again;
        }
    }
    for (d_69da_dbd0 = 0; d_69da_dbd0 <= 1; d_69da_dbd0++) {
        for (d_69da_d9a0 = 0; d_69da_d9a0 <= 10; d_69da_d9a0++) {
            if (d_28da_00b0[d_69da_d9d8][d_69da_dbd0][d_69da_d9a0] == 1859) {
                best = -5000;
                d_69da_dcfc = 1859;
                for (d_69da_da02 = 0; d_69da_da02 <= d_4512_023e[d_69da_d9d8] - 1; d_69da_da02++) {
                    d_69da_dcfe = d_28da_10f0[d_69da_d9d8][d_69da_da02];
                    if (f_1a70_6514(d_69da_dcfe, d_4512_4726[d_69da_d9d8][0][d_69da_d9a0])
                        && d_28da_2a78[23][d_69da_dcfe] == 3) {
                        c = f_1a70_21d1(d_69da_dcfe, d_69da_d9d8, d_4512_4726[d_69da_d9d8][0][d_69da_d9a0],
                                        d_69da_dbd0 == 1 ? 1 : 0);
                        if (c > best) {
                            best = c;
                            d_69da_dcfc = d_69da_dcfe;
                        }
                    }
                }
                if (d_69da_dcfc < 1859) {
                    d_28da_00b0[d_69da_d9d8][d_69da_dbd0][d_69da_d9a0] = d_69da_dcfc;
                    d_28da_2a78[23][d_69da_dcfc] = d_69da_dbd0 + 1;
                }
            }
        }
    }
}

void f_1a70_1cda(int p)
{
    unsigned char team;

    if (!f_1a70_5b94(p)) {
        team = d_28da_ad40[p];
        if (d_4512_bdc8[p].f7) {
            d_4512_549a[team][f_1a70_1dc1(p)] = 1859;
            d_4512_bdc8[p].f7 = 0;
        }
    } else {
        team = f_1a70_5baa(p);
        if (d_4512_a508[team][f_1a70_5bc8(p)]) {
            d_4512_549a[team][f_1a70_1dc1(p)] = 1859;
            d_4512_a508[team][f_1a70_5bc8(p)] = 0;
        }
    }
}

int f_1a70_1dc1(int player)
{
    unsigned char team;

    if (!f_1a70_5b94(player))
        team = d_28da_ad40[player];
    else
        team = f_1a70_5baa(player);
    d_69da_dcde = -1;
    for (d_69da_dd00 = 0; d_69da_dd00 <= 13; d_69da_dd00++) {
        if (d_4512_549a[team][d_69da_dd00] == player) {
            d_69da_dcde = d_69da_dd00;
            d_69da_dd00 = 13;
        }
    }
    return d_69da_dcde;
}

int f_1a70_1e39(int player)
{
    d_69da_dcde = -1;
    d_69da_dcf4 = -1;
    for (d_69da_dd00 = 0; d_69da_dd00 <= 10; d_69da_dd00++) {
        if (d_28da_00b0[d_28da_ad40[player]][0][d_69da_dd00] == player) {
            d_69da_dcde = d_69da_dd00;
            d_69da_dcf4 = 0;
            d_69da_dd00 = 10;
        } else if (d_28da_00b0[d_28da_2a78[18][player]][1][d_69da_dd00] == player) {
            d_69da_dcde = d_69da_dd00;
            d_69da_dcf4 = 1;
            d_69da_dd00 = 10;
        }
    }
    return d_69da_dcde;
}

int f_1a70_1eda(int a, int player, int c)
{
    d_69da_dd02 = d_3668_0000[16][player] / 16;
    d_69da_dd04 = d_3668_0000[16][player] % 16;
    if (a != d_69da_dd02 || c != d_69da_dd04) {
        d_69da_dd06 = 1500;
        if (a == 1 && !d_4512_bdc8[player].f0 || a > 1 && d_4512_bdc8[player].f0)
            d_69da_dd06 -= 1000;
        else {
            if ((a == 2 || a == 5 || a == 8) && !d_4512_bdc8[player].f4
                || (a == 3 || a == 6 || a == 9) && !d_4512_bdc8[player].f5
                || (a == 4 || a == 7 || a == 10) && !d_4512_bdc8[player].f6)
                d_69da_dd06 -= 400;
            if (a >= 2 && a <= 4 && !d_4512_bdc8[player].f1) {
                d_69da_dd06 -= 400;
                if (d_4512_bdc8[player].f3)
                    d_69da_dd06 = -200;
            } else if (a >= 5 && a <= 7 && !d_4512_bdc8[player].f2
                       || a >= 8 && a <= 10 && !d_4512_bdc8[player].f3)
                d_69da_dd06 -= 400;
            else if ((a == 11 || a == 12) && !d_4512_bdc8[player].f1 && !d_4512_bdc8[player].f2
                     || a == 13 && !d_4512_bdc8[player].f2 && !d_4512_bdc8[player].f3)
                d_69da_dd06 -= 150;
        }
        if (a > 1) {
            unsigned char i;
            int sum;
            int weights;
            long l;

            sum = 0;
            weights = 0;
            for (i = 0; i <= 4; i = i + 1) {
                sum += d_5dbf_0733[c][a][i] * d_28da_2a78[i + 1][player];
                weights += d_5dbf_0733[c][a][i];
            }
            l = sum * 10 / weights;
            d_69da_dd06 += l;
            if (a == 10)
                d_69da_dd06 += d_28da_2a78[7][player] * 5;
        }
        d_3668_0000[16][player] = (a << 4) + c;
        d_3668_ae60[player] = d_69da_dd06;
    } else
        d_69da_dd06 = d_3668_ae60[player];
    return d_69da_dd06 = d_69da_dd06 * (d_28da_2a78[0][21 * 1860 + player] / 100.0);
}

long f_1a70_21d1(int player, int team, unsigned char pos, unsigned char second)
{
    long v;

    v = f_1a70_1eda(pos, player, d_4512_2db8[d_4512_1a30[team]] / 16);
    if (second == 0 || d_28da_2a78[17][player] >= 27)
        d_69da_dbf6 = f_2162_134e(d_28da_2a78[15][player], d_28da_2a78[0][player]) * 0.1;
    else {
        long t;

        t = ((200 - d_4512_3042[0][d_4512_1a30[team]]) * d_3668_0000[18][player]
             + d_4512_3042[0][d_4512_1a30[team]] * d_28da_2a78[9][player]) / 200;
        d_69da_dbf6 = f_2162_134e(d_28da_2a78[15][player], d_28da_2a78[0][player]) * 0.075 + t * 0.025;
    }
    v *= d_69da_dbf6;
    return v;
}

int f_1a70_2342(unsigned char a)
{
    switch (a) {
    case 1:
        d_69da_dd08 = 1700;
        break;
    default:
        d_69da_dd08 = 1700;
        break;
    case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11:
        d_69da_dd08 = 1700;
        break;
    }
    return d_69da_dd08;
}

char f_1a70_237e(volatile int w)   /* volatile + ternary: the value through AX (mov ax,[bp+6] / sub ax,12 / mov bx,ax) */
{
    switch (w ? w : w) {
    case 12: case 13: case 14: case 16: case 17: case 18: case 20: case 22: case 24: case 26:
    case 28: case 30: case 32: case 34: case 35: case 36: case 40: case 42: case 46: case 48:
    case 49: case 50: case 54: case 56: case 60: case 62: case 66: case 68: case 72: case 74:
    case 75: case 76: case 80: case 84: case 85: case 87: case 88: case 90:
        return -1;
    }
    return 0;
}

char f_1a70_243f(int w)
{
    switch (w) {
    case 38: case 44: case 52: case 58: case 64: case 70: case 78: case 92:
        return -1;
    }
    return 0;
}

char f_1a70_2490(int w)
{
    if (f_1a70_243f(w))
        return -1;
    if (f_1a70_29fa(w) && !f_1a70_24c5(w))
        return -1;
    return 0;
}

char f_1a70_24c5(int w)
{
    switch (w) {
    case 15: case 19: case 23: case 27: case 31: case 43: case 55: case 63: case 67: case 82:
    case 83:
        return -1;
    }
    return 0;
}

char f_1a70_2522(int w)
{
    switch (w) {
    case 29: case 33: case 37: case 47: case 51: case 57: case 61: case 69: case 73: case 86:
        return -1;
    }
    return 0;
}

char f_1a70_257b(int w)
{
    switch (w) {
    case 21: case 25: case 37: case 41: case 47: case 51: case 69: case 73: case 77: case 81:
    case 89: case 95:
        return -1;
    }
    return 0;
}

char f_1a70_25dc(int w)
{
    switch (w) {
    case 29: case 33: case 47: case 51: case 69: case 73: case 77: case 81: case 91:
        return -1;
    }
    return 0;
}

char f_1a70_2631(int w)
{
    switch (w) {
    case 29: case 33: case 47: case 51: case 57: case 61: case 69: case 73: case 77: case 81:
    case 97:
        return -1;
    }
    return 0;
}

char f_1a70_268e(int w, int n)
{
    switch (w) {
    case 21: case 25:
        return n >= 1 && n <= 32 ? -1 : 0;
    case 37: case 41:
        return n >= 1 && n <= 16 ? -1 : 0;
    case 47: case 51:
        return n >= 17 && n <= 24 ? -1 : 0;
    case 69: case 73:
        return n >= 9 && n <= 12 ? -1 : 0;
    case 77: case 81:
        return n >= 7 && n <= 8 ? -1 : 0;
    case 89: case 95:
        return n == 1 ? -1 : 0;
    }
    return 0;
}

char f_1a70_2737(int w, int n)
{
    switch (w) {
    case 29: case 33:
        return n >= 17 && n <= 32 ? -1 : 0;
    case 47: case 51:
        return n >= 9 && n <= 16 ? -1 : 0;
    case 69: case 73:
        return n >= 5 && n <= 8 ? -1 : 0;
    case 77: case 81:
        return n >= 5 && n <= 6 ? -1 : 0;
    case 91:
        return n == 1 ? -1 : 0;
    }
    return 0;
}

char f_1a70_27c8(int w, int n)
{
    switch (w) {
    case 29: case 33:
        return n >= 1 && n <= 16 ? -1 : 0;
    case 47: case 51:
        return n >= 1 && n <= 8 ? -1 : 0;
    case 57: case 61: case 69: case 73: case 77: case 81:
        return n >= 1 && n <= 4 ? -1 : 0;
    case 97:
        return n == 1 ? -1 : 0;
    }
    return 0;
}

char f_1a70_2855(int w, int n)
{
    switch (w) {
    case 29: case 33:
        return n >= 33 && n <= 38 ? -1 : 0;
    case 37:
        return n >= 17 && n <= 22 ? -1 : 0;
    case 47: case 51:
        return n >= 25 && n <= 32 ? -1 : 0;
    case 57: case 61:
        return n >= 5 && n <= 12 ? -1 : 0;
    case 69: case 73:
        return n >= 13 && n <= 14 ? -1 : 0;
    case 86:
        return -1;
    }
    return 0;
}

char f_1a70_28f3(int w)
{
    switch (w) {
    case 15: case 21: case 23: case 29: case 37: case 47: case 63: case 69: case 77: case 89:
    case 94:
        return -1;
    }
    return 0;
}

char f_1a70_2950(int w)
{
    switch (w) {
    case 19: case 25: case 27: case 33: case 41: case 51: case 67: case 73: case 81: case 95:
    case 96:
        return -1;
    }
    return 0;
}

char f_1a70_29ad(int w, int n)
{
    switch (w) {
    case 10: case 82: case 83: case 86: case 92: case 93: case 98:
        return -1;
    }
    return 0;
}

char f_1a70_29fa(int x)
{
    if (f_1a70_243f(x - 1) || x - 1 == 82)
        return -1;
    return 0;
}

char f_1a70_2a20(int w, int n)
{
    switch (w) {
    case 10: case 78: case 79: case 82: case 83: case 86: case 91: case 92: case 93:
    case 97: case 98:
        return -1;
    }
    return 0;
}

char f_1a70_2a7d(int x)
{
    if (x == 94 || x == 96 || x == 98)
        return -1;
    return 0;
}

char f_1a70_2a9e(int w, int n)
{
    switch (w) {
    case 29: case 33:
        if (n >= 33)
            return n - 33;
        break;
    case 37:
        if (n >= 17)
            return n - 17;
        break;
    case 47: case 51:
        if (n >= 25)
            return (n - 25) / 4;
        break;
    case 57: case 61:
        if (n >= 5)
            return (n - 5) / 4;
        break;
    }
    return 0;
}

char f_1a70_2b1e(int x)
{
    if (d_5dbf_1290[0][0][x] != -32)
        return -1;
    return 0;
}

int f_1a70_2b3f(int a, int b)
{
    return exp(fabs(10.5 - (a % 20 + 1)) / 2.0) / 10.0 * 0.005 * exp(b / 10.0) * 35.0;
}

char f_1a70_2bc7(int x)
{
    if (x < 80 && d_4512_1a30[x] >= 0x286 && d_4512_1a30[x] < 0x28a)
        return -1;
    return 0;
}

float f_1a70_2bff(int x)
{
    if (x <= 79)
        return f_2162_134e(f_2162_13ba(d_4512_0148[x] - (x / 20 + f_2162_13ba(d_4512_0386[x], 3) - 2) * 2 - 3
                                       + d_4512_0000[0][x] / 16.0 - 0.5, 17), 6);
    if (x <= 479)
        return d_5dbf_0946[x] - 3;
    return d_5dbf_0946[x] - 5;
}

int f_1a70_2ccc(int x)
{
    return f_2162_134e(f_2162_13ba(d_28da_2a78[0][x] / 10.0, 17), 6);
}

char f_1a70_2d0e(int player)
{
    if (f_1a70_6d23(player))
        return -1;
    if (d_4512_023e[d_28da_2a78[18][player]] < 17)
        return -1;
    if (d_4512_bdc8[player].f0 && d_4512_0334[0][d_28da_2a78[18][player]] < 2)
        return -1;
    return 0;
}

char f_1a70_2d83(int player)
{
    unsigned char team;
    unsigned char pos;
    unsigned char keepers;
    unsigned char others;
    unsigned char i;

    team = f_1a70_5baa(player);
    pos = f_1a70_5bc8(player);
    keepers = 0;
    others = 0;
    for (i = 0; i <= 15; i++)
        if (d_4512_a4f8[team][i] == 0) {
            if (d_4512_a4c8[team][0][i] == 1)
                keepers++;
            else
                others++;
        }
    if (d_4512_a4c8[team][0][pos] > 1 && others < 13)
        return -1;
    if (d_4512_a4c8[team][0][pos] == 1 && keepers < 2)
        return -1;
    return 0;
}

char far *f_1a70_2e4a(int x, char c)
{
    char far *s;

    s = f_2162_0f38();
    if (x <= 12)
        sprintf(s, "%02d", x);
    else if (x == 13)
        strcpy(s, "14");
    else
        strcpy(s, c == 0 ? "15" : "GK");
    return s;
}

void f_1a70_2eaa(int n, char far *title, char far *items)
{
    char buf[320];
    int k;

    memset(d_536d_4ebd, 0, 20);
    d_69da_dd3a = -1;
    if (strlen(title) > 1)
        f_1a70_4a41(title);
    d_69da_dd3c = n > 0 ? n - 5 : 0;
    strcpy(d_536d_50cd, items);
    d_69da_da14 = 0;
    for (d_69da_d9ea = 1; d_69da_d9ea <= strlen(items); d_69da_d9ea++)
        if (items[d_69da_d9ea - 1] == '|')
            d_69da_da14++;
    d_69da_da14--;
    d_69da_dd3e = 0;
    while (d_536d_50cd[0]) {
        k = f_2162_0b1b(d_536d_50cd, "|") - 1;
        strncpy(buf, d_536d_50cd, k);
        buf[k] = 0;
        if (buf[0] == '*') {
            strcpy(buf, buf + 1);
            d_69da_de2e = -1;
        } else
            d_69da_de2e = 0;
        if (buf[0] == '$') {
            strcpy(buf, buf + 1);
            d_69da_d9c4 = 110;
        } else
            d_69da_d9c4 = 30;
        sprintf(d_536d_57cb, " %-17s", buf);
        strcpy(d_536d_50cd, &d_536d_50cd[k + 1]);
        if ((d_69da_da14 + 1) / 2 > d_69da_dd3e) {
            d_69da_d9be = 1;
            d_69da_de45 = d_69da_dd3e * 2.5 + d_69da_dd3c + 5.0;
        } else {
            if (d_69da_dd3e == d_69da_da14 && !(d_69da_da14 & 1))
                d_69da_d9be = 11;
            else
                d_69da_d9be = 21;
            d_69da_de45 = (d_69da_dd3e - (d_69da_da14 + 1) / 2) * 2.5 + d_69da_dd3c + 5.0;
        }
        d_4512_731c[d_69da_dd3e] = d_69da_d9be;
        d_4512_736c[d_69da_dd3e] = d_69da_de45;
        strcpy(d_536d_968d[d_69da_dd3e], d_536d_57cb);
        f_2162_0897(16);
        f_2162_08b5(d_69da_d9be * 8 + 6, d_69da_de45 * 8.0 - 2.0,
                    (d_69da_d9be + strlen(d_536d_57cb)) * 8 + 3, d_69da_de45 * 8.0 + 13.0);
        if (d_69da_de2e) {
            d_4512_73bc[d_69da_dd3e] = 24.0;
            f_1a70_31ce(1, 8, d_69da_dd3e);
        } else {
            d_4512_73bc[d_69da_dd3e] = d_69da_d9c4;
            f_1a70_31ce(d_69da_d9c4 / 16, d_69da_d9c4 % 16, d_69da_dd3e);
        }
        d_69da_dd3e++;
    }
    if (strlen(title) > 1)
        f_1a70_3226(d_69da_dd3e - 1);
}

void f_1a70_31ce(int a, int b, int line)
{
    f_1a70_3d0c(d_4512_731c[line], -d_4512_736c[line], a, b, 0, d_536d_968d[line]);
}

void f_1a70_3226(int last)
{
    if (d_69da_dd3a > -1 && last > -1)
        f_1a70_31ce(d_4512_73bc[d_69da_dd3a] / 16.0, (int)d_4512_73bc[d_69da_dd3a] % 16, d_69da_dd3a);
    f_1a70_57e3();
    d_69da_de41 = f_2162_0e32();
    f_2162_0397(0);
    do {
        d_69da_d992 = -1;
        if (f_2162_0c2b() > 0)
            for (d_69da_dd40 = 0; d_69da_dd40 <= abs(last); d_69da_dd40++) {
                d_69da_d9be = d_4512_731c[d_69da_dd40];
                d_69da_de45 = d_4512_736c[d_69da_dd40];
                if (d_536d_4ebd[d_69da_dd40] == 0 && f_2162_0c1f() >= d_69da_d9be * 8 - 2 &&
                    f_2162_0c1f() <= (d_69da_d9be + 17) * 8 + 10 &&
                    f_2162_0c13() >= d_69da_de45 * 8.0 + 15.0 - 20.0 &&
                    f_2162_0c13() <= d_69da_de45 * 8.0 + 31.0 - 20.0)
                    d_69da_d992 = d_69da_dd40;
            }
    } while (d_69da_d992 <= -1);
    f_2162_0397(1);
    if (last > -1 || d_536d_968d[d_69da_d992][0] == '*') {
        f_1a70_31ce(1, 12, d_69da_d992);
        d_69da_dd3a = d_69da_d992;
    }
}

void f_1a70_33ed(int i)
{
    d_536d_4ebd[i] = -1;
}

char far *f_1a70_3404(int x)
{
    char far *p;

    p = f_2162_0f38();
    if (x < 80)
        strcpy(p, d_69da_b1fc[x]);
    else
        strcpy(p, d_69da_b2a4[x]);
    return p;
}

void f_1a70_344b(int x, int y, int colour, char far *s)
{
    if (*s) {
        if (x == -1)
            x = 160 - strlen(s) * 3;
        d_28d8_0012 = x - 8;
        d_28d8_0014 = abs(y) + 1;
        f_2162_0b0c(0);
        if (d_69da_db74)
            f_2162_0992(0);
        if (colour > 0 && y > 0) {
            f_2162_08a6(16);
            f_2162_09e2(x - 9, y, f_2162_0e9b(s));
        }
        f_2162_08a6(colour + 16);
        f_2162_09e2(x - 8, abs(y) + 1, f_2162_0e9b(s));
        f_2162_0b0c(1);
        if (d_69da_ddb6)
            f_1a70_5d1e(d_28d8_0012, d_28d8_0014 - 7, s);
    }
}

void f_1a70_3554(float x, float y, int bg, int fg, int w, char far *s)
{
    if (*s || w > 0) {
        if (w > 0)
            d_69da_dd6e = w;
        else
            d_69da_dd6e = strlen(s) * 6;
        if (x == -1)
            x = (160.0 - d_69da_dd6e / 2.0) / 8.0;
        f_2162_0897(fg + 16);
        f_2162_08b5(x * 8.0 - 1, fabs(y) * 8.0 - 6.0, x * 8.0 - 1 + d_69da_dd6e, fabs(y) * 8.0);
        if (*s) {
            d_28d8_0012 = x * 8.0;
            d_28d8_0014 = fabs(y) * 8.0 + 1;
            f_2162_0b0c(0);
            if (d_69da_db74)
                f_2162_0992(0);
            if (y < 0) {
                f_2162_08a6(16);
                f_2162_09e2(x * 8.0 - 1, fabs(y) * 8.0, f_2162_0e9b(s));
            }
            f_2162_08a6(abs(bg) + 16);
            f_2162_09e2(d_28d8_0012, d_28d8_0014, f_2162_0e9b(s));
            f_2162_0b0c(1);
            if (d_69da_ddb6)
                f_1a70_5d1e(d_28d8_0012, d_28d8_0014 - 7, s);
        }
    }
}

void f_1a70_379b(float x, float y, int colour, char far *s)
{
    if (*s) {
        if (x == -1)
            x = 21.0 - strlen(s) / 2.0;
        d_28d8_0012 = x * 8.0 - 8.0;
        d_28d8_0014 = fabs(y) * 8.0 - 1;
        f_2162_0b0c(0);
        if (d_69da_db74 != 1)
            f_2162_0992(1);
        if (colour > 0 && y > 0) {
            f_2162_08a6(16);
            f_2162_09e2(x * 8.0 - 9.0, y * 8.0 - 1, s);
        }
        f_2162_08a6(colour + 16);
        f_2162_09e2(d_28d8_0012, d_28d8_0014, s);
        f_2162_0b0c(1);
        if (d_69da_ddb6)
            f_1a70_5d1e(d_28d8_0012, d_28d8_0014 - 7, s);
    }
}

void f_1a70_390f(float x, float y, int bg, int fg, int w, char far *s)
{
    if (*s || w > 0) {
        if (w > 0)
            d_69da_dd6e = w;
        else
            d_69da_dd6e = strlen(s) * 8;
        if (x == -1)
            x = (160.0 - d_69da_dd6e / 2.0) / 8.0;
        f_2162_0897(fg + 16);
        f_2162_08b5(x * 8.0 - 2.0, fabs(y) * 8.0 - 8.0, x * 8.0 + d_69da_dd6e + 1, fabs(y) * 8.0);
        if (*s) {
            d_28d8_0012 = x * 8.0;
            d_28d8_0014 = fabs(y) * 8.0 - 1;
            f_2162_0b0c(0);
            if (d_69da_db74 != 1)
                f_2162_0992(1);
            if (y < 0) {
                f_2162_08a6(16);
                f_2162_09e2(x * 8.0 - 1, fabs(y) * 8.0 - 1, s);
            }
            f_2162_08a6(abs(bg) + 16);
            f_2162_09e2(d_28d8_0012, d_28d8_0014, s);
            f_2162_0b0c(1);
            if (d_69da_ddb6)
                f_1a70_5d1e(d_28d8_0012, d_28d8_0014 - 7, s);
        }
    }
}

void f_1a70_3b47(float x, float y, int colour, char far *s)
{
    if (*s) {
        if (x == -1)
            x = 21.0 - strlen(s) / 2.0;
        d_28d8_0012 = x * 8.0 - 8.0;
        d_28d8_0014 = fabs(y) * 8.0 + 10.0;
        f_2162_0b0c(0);
        if (d_69da_db74 != 2)
            f_2162_0992(2);
        if (colour > 0 && y > 0) {
            f_2162_08a6(16);
            f_2162_09e2(x * 8.0 - 8.0 - 2.0, y * 8.0 + 10.0 - 1, s);
            f_2162_09e2(x * 8.0 - 8.0 - 1, y * 8.0 + 10.0 - 1, s);
        }
        f_2162_08a6(colour + 16);
        f_2162_09e2(d_28d8_0012, d_28d8_0014, s);
        f_2162_0b0c(1);
        if (d_69da_ddb6)
            f_1a70_5d1e(d_28d8_0012, d_28d8_0014 - 15, s);
    }
}

void f_1a70_3d0c(float x, float y, int bg, int fg, int w, char far *s)
{
    if (*s || w > 0) {
        if (w > 0)
            d_69da_dd6e = w;
        else
            d_69da_dd6e = strlen(s) * 8;
        if (x == -1)
            x = (160.0 - d_69da_dd6e / 2.0) / 8.0;
        f_2162_0897(fg + 16);
        f_2162_08b5(x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0, x * 8.0 + d_69da_dd6e + 2.0, fabs(y) * 8.0 + 11.0);
        f_2162_08a6(d_28d8_0000[fg] + 16);
        f_2162_1021(x * 8.0 - 2.0, fabs(y) * 8.0 + 11.0, x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0);
        f_2162_1021(x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0, x * 8.0 + d_69da_dd6e + 2.0, fabs(y) * 8.0 - 5.0);
        f_2162_08a6(16);
        f_2162_1021(x * 8.0 + d_69da_dd6e + 2.0, fabs(y) * 8.0 - 5.0, x * 8.0 + d_69da_dd6e + 2.0, fabs(y) * 8.0 + 11.0);
        f_2162_1021(x * 8.0 + d_69da_dd6e + 2.0, fabs(y) * 8.0 + 11.0, x * 8.0 - 2.0, fabs(y) * 8.0 + 11.0);
        if (*s) {
            d_28d8_0012 = x * 8.0;
            d_28d8_0014 = fabs(y) * 8.0 + 10.0;
            f_2162_0b0c(0);
            if (d_69da_db74 != 2)
                f_2162_0992(2);
            if (y < 0) {
                f_2162_08a6(16);
                f_2162_09e2(x * 8.0 - 1, fabs(y) * 8.0 + 9.0, s);
            }
            f_2162_08a6(abs(bg) + 16);
            f_2162_09e2(d_28d8_0012, d_28d8_0014, s);
            f_2162_0b0c(1);
            if (d_69da_ddb6)
                f_1a70_5d1e(d_28d8_0012, d_28d8_0014 - 15, s);
        }
    }
}

static void f_1a70_4183(float x, float y, int bg, int fg, int w, int len, char far *s)
{
    if (*s || w > 0) {
        if (w > 0)
            d_69da_dd6e = w;
        else
            d_69da_dd6e = strlen(s) * 8;
        if (x == -1)
            x = (160.0 - d_69da_dd6e / 2.0) / 8.0;
        f_2162_0897(fg + 16);
        f_2162_08b5(x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0, x * 8.0 + len + 1, fabs(y) * 8.0 + 10.0);
        if (*s) {
            d_28d8_0012 = x * 8.0;
            d_28d8_0014 = fabs(y) * 8.0 + 10.0;
            f_2162_0b0c(0);
            if (d_69da_db74 != 2)
                f_2162_0992(2);
            if (y < 0) {
                f_2162_08a6(16);
                f_2162_09e2(x * 8.0 - 1, fabs(y) * 8.0 + 9.0, s);
            }
            f_2162_08a6(abs(bg) + 16);
            f_2162_09e2(d_28d8_0012, d_28d8_0014, s);
            f_2162_0b0c(1);
            if (d_69da_ddb6)
                f_1a70_5d1e(d_28d8_0012, d_28d8_0014 - 15, s);
        }
    }
}

static void f_1a70_43be(float x, float y, int team)
{
    char buf[160];

    sprintf(buf, " %s ", f_2162_0e9b(d_69da_b1fc[team]));
    f_1a70_390f(x, y, -(d_4512_00a4[team] / 16), d_4512_00a4[team] % 16, 0, buf);
}

void f_1a70_442b(float x, float y, int team)
{
    char buf[160];

    sprintf(buf, " %s ", (char far *)d_69da_b1fc[team]);
    f_1a70_3d0c(x, y, -(d_4512_00a4[team] / 16), d_4512_00a4[team] % 16, 0, buf);
}

char far *f_1a70_448e(int n, char far *s)
{
    char far *buf;
    char tmp[320];

    buf = f_2162_0f38();
    if (strlen(s) > n - 1) {
        sprintf(tmp, "%.*s", n - 1, s);
        sprintf(buf, " %s", tmp);
    } else
        sprintf(buf, " %-*s", n - 1, s);
    return buf;
}

int f_1a70_4513(int team)
{
    d_69da_dc48 = 80;
    for (d_69da_d9ce = 0; d_69da_d9ce <= 79; d_69da_d9ce++) {
        if (d_4512_6324[0][d_69da_d9ce] == team) {
            d_69da_dc48 = d_69da_d9ce;
            d_69da_d9ce = 79;
        }
    }
    return d_69da_dc48;
}

int f_1a70_4559(int team)
{
    switch (team / 20) {
    case 0:
        d_69da_dba2 = 22;
        break;
    case 1:
    case 2:
    case 3:
        d_69da_dba2 = 21;
    }
    return d_69da_dba2;
}

char far *f_1a70_4592(int player)
{
    char far *buf;

    buf = f_2162_0f38();
    if (f_1a70_5b76(player) || f_1a70_6d23(player)) {
        sprintf(buf, "%s %s", d_62e5_0000[d_3668_bce8[player]], d_62e5_11f6[d_3668_d9f8[player]]);
    } else if (f_1a70_5b94(player)) {
        unsigned char a, b;

        a = f_1a70_5baa(player);
        b = f_1a70_5bc8(player);
        d_69da_dfbe = f_2162_1634(d_69da_dff8, 0);
        sprintf(buf, "%s %s", d_62e5_0000[d_69da_dfbe[a][0][b]], d_62e5_11f6[d_69da_dfbe[a][1][b]]);
    } else
        strcpy(buf, "");
    return buf;
}

char far *f_1a70_46c1(int player)
{
    char c;
    char far *buf;

    buf = f_2162_0f38();
    c = f_2162_0b1b(f_1a70_4592(player), " ");
    if (c != 0)
        sprintf(buf, "%c.", *f_1a70_4592(player));
    strcat(buf, f_1a70_4739(player));
    return buf;
}

char far *f_1a70_4739(int player)
{
    char far *buf;
    char tmp[40];

    buf = f_2162_0f38();
    strcpy(tmp, f_1a70_4592(player));
    strcpy(buf, tmp + f_2162_0b1b(tmp, " "));
    return buf;
}

char far *f_1a70_4793(int manager, char full)
{
    char far *buf;
    char tmp[80];

    buf = f_2162_0f38();
    if (manager < 646) {
        d_69da_dfaa = f_2162_1634(d_69da_dfee, 0);
        strcpy(tmp, d_62e5_0000[d_69da_dfaa[0][manager]]);
        strcpy(d_536d_6c53, d_62e5_11f6[d_69da_dfaa[1][manager]]);
    } else {
        strcpy(tmp, d_536d_596f[0][manager - 646]);
        strcpy(d_536d_6c53, d_536d_596f[1][manager - 646]);
    }
    if (!full)
        sprintf(buf, "%s %s", tmp, d_536d_6c53);
    else
        strcpy(buf, d_536d_6c53);
    return buf;
}

/* numbers in words, for 488b (players 1-15): its strings sit in the pool where the table is
 * defined, between 4793's and 488b's literals */
char far *d_69da_01d0[15] = {
    "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
    "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen"
};

char far *f_1a70_488b(int player)
{
    char far *buf;

    buf = f_2162_0f38();
    strcpy(buf, "");
    if (player >= 1 && player <= 15)
        strcpy(buf, d_69da_01d0[player - 1]);
    else
        sprintf(buf, "%d", player);
    return buf;
}

char far *f_1a70_48f5(int division)
{
    char far *buf;

    buf = f_2162_0f38();
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

char far *f_1a70_4983(int division, char full)
{
    char far *buf;

    buf = f_2162_0f38();
    if (division == 1) {
        if (full == 0)
            sprintf(buf, "%s", "FA Premier");
        else if (full == 1 || full == 2)
            sprintf(buf, "%s", "PREM");
        else if (full == 3)
            sprintf(buf, "%s", "PRM");
    } else if (full == 0)
        sprintf(buf, "Division %d", division - 1);
    else if (full == 1)
        sprintf(buf, "DIV%d", division - 1);
    else if (full == 2)
        sprintf(buf, "D%d", division - 1);
    else if (full == 3)
        sprintf(buf, "%s", f_1a70_48f5(division - 1));
    return buf;
}

void f_1a70_4a41(char far *title)
{
    char t[160];
    char t2[320];

    strcpy(t, title);
    f_1a70_4e4b();
    f_2162_0346();
    f_1a70_5cda();
    f_2162_08a6(17);
    f_2162_090f(0, 0, 0x13f, 0xc7);
    if (t[0] != 0) {
        d_69da_de4d = 19.0 - strlen(t) / 2.0;
        f_2162_0897(16);
        f_2162_08b5(d_69da_de4d * 8.0 + 6.0, 6, (strlen(t) + d_69da_de4d) * 8.0 + 19.0, 20);
        sprintf(t2, " %s ", t);
        f_1a70_3d0c(d_69da_de4d, -1.0, 1, 4, 0, t2);
    }
    if (strstr(title, "'93/4"))
        f_1a70_3554(34.375, 24.625, 0, 1, 42, " v4.04");
    d_69da_de03 = -1;
}

void f_1a70_4b7d(float x, int w, char far *prompt)
{
    f_1a70_3b47(x, 21.0, 5, prompt);
    f_1a70_4bf2(x + 1 + strlen(prompt), 21.0, 9, w);
    f_2162_07f7(4, 0xa3, 0x13c, 0xb2);
}

void f_1a70_4bf2(int x, float y, int colour, int maxlen)
{
    register int c;

    f_2162_0397(0);
    f_2162_1a11();
    f_1a70_57e3();
    strcpy(d_536d_5a0f, "");
    do {
        d_69da_de41 = f_2162_0e32();
        do {
            strcpy(d_536d_6c01, f_2162_0d1a());
            if (f_2162_0c2b() == 0)
                d_69da_de41 = f_2162_0e32();
            else if (f_2162_0e32() - d_69da_de41 > 300)
                strcpy(d_536d_6c01, f_2162_0160(13));
        } while (!(d_536d_6c01[0] == 0x7f || d_536d_6c01[0] == 13 || d_536d_6c01[0] == 8
                   || d_536d_6c01[0] == '.' || d_536d_6c01[0] == ' ' || d_536d_6c01[0] == '\''
                   || (d_536d_6c01[0] >= '0' && d_536d_6c01[0] <= '9')
                   || (d_536d_6c01[0] >= 'A' && d_536d_6c01[0] <= 'Z')
                   || (d_536d_6c01[0] >= 'a' && d_536d_6c01[0] <= 'z')));
        c = d_536d_6c01[0];
        if ((c == 0x7f || c == 8) && d_536d_5a0f != "") {
            d_536d_5a0f[strlen(d_536d_5a0f) - 1] = 0;
            f_2162_07f7(x * 8 - 10, y * 8.0 - 5.0, (x + maxlen - 1) * 8 - 1, y * 8.0 + 10.0);
            f_1a70_3b47(x, y, colour, d_536d_5a0f);
        } else if (strlen(d_536d_5a0f) < maxlen && c != 13 && c != 0x7f && c != 8) {
            strcat(d_536d_5a0f, d_536d_6c01);
            f_2162_07f7(x * 8 - 10, y * 8.0 - 5.0, (x + maxlen - 1) * 8 - 1, y * 8.0 + 10.0);
            f_1a70_3b47(x, y, colour, d_536d_5a0f);
        }
    } while (c != 13 && maxlen != 1);
    f_2162_1a2f();
    f_2162_0397(1);
}

void f_1a70_4e4b(void)
{
    unsigned i, j;

    memset(d_28da_28bc, 0, 400);
    memset(d_536d_4f71, 0, 100);
    for (i = 0; i < 7; i++)
        for (j = 0; j < 100; j++)
            d_4512_7484[i][j] = 0;
    for (d_69da_daa2 = 0; d_69da_daa2 <= 99; d_69da_daa2++)
        strcpy(d_536d_86ed[d_69da_daa2], "");
    d_69da_dd70 = 0;
    d_69da_d9dc = 0;
}

void f_1a70_4ede(int a, float x, float y, int c, int d, int e, char far *s)
{
    int o7b, o6b, o19;
    float ox, oy;

    o7b = d_69da_d9c4;
    o6b = d_69da_d9d4;
    ox = d_69da_de4d;
    oy = d_69da_de45;
    o19 = d_69da_da24;
    d_69da_d9c4 = c;
    d_69da_d9d4 = d;
    d_69da_da24 = a;
    d_69da_de4d = x;
    d_69da_de45 = y;
    strcpy(d_536d_5f2d, s);
    if (d_69da_de4d == -1) {
        if (d_69da_da24 > 0)
            d_69da_de4d = 20.0 - strlen(d_536d_5f2d) / 2.0;
        else
            d_69da_de4d = (160 - strlen(d_536d_5f2d) * 3) / 8.0;
    }
    strcpy(d_536d_86ed[d_69da_dd70], d_536d_5f2d);
    d_28da_28bc[0][d_69da_dd70] = (d_69da_d9c4 << 4) + d_69da_d9d4;
    d_28da_2920[d_69da_dd70] = d_69da_da24;
    d_4512_7484[0][d_69da_dd70] = d_69da_de4d;
    d_4512_7484[1][d_69da_dd70] = d_69da_de45;
    if (e > 0)
        d_69da_dd6e = e;
    else
        d_69da_dd6e = strlen(d_536d_5f2d) * (8 - (d_69da_da24 == 0 ? 2 : 0));
    if (d_69da_da24 == 0) {
        d_69da_de5d = d_69da_de4d * 8.0 - 1;
        d_69da_de51 = d_69da_de45 * 8.0 - 6.0;
        d_69da_dedd = d_69da_de4d * 8.0 + d_69da_dd6e - 1;
        d_69da_dee5 = d_69da_de45 * 8.0;
    } else if (d_69da_da24 == 1) {
        d_69da_de5d = d_69da_de4d * 8.0 - 2.0;
        d_69da_de51 = d_69da_de45 * 8.0 - 8.0;
        d_69da_dedd = d_69da_de4d * 8.0 + d_69da_dd6e + 1;
        d_69da_dee5 = d_69da_de45 * 8.0;
    } else if (d_69da_da24 == 2) {
        d_69da_de5d = d_69da_de4d * 8.0 - 2.0;
        d_69da_de51 = d_69da_de45 * 8.0 - 5.0;
        d_69da_dedd = d_69da_de4d * 8.0 + d_69da_dd6e + 1;
        d_69da_dee5 = d_69da_de45 * 8.0 + 10.0;
    }
    d_4512_7484[2][d_69da_dd70] = d_69da_de5d;
    d_4512_7484[3][d_69da_dd70] = d_69da_de51;
    d_4512_7484[4][d_69da_dd70] = d_69da_dedd;
    d_4512_7484[5][d_69da_dd70] = d_69da_dee5;
    d_4512_7484[6][d_69da_dd70] = e;
    d_69da_dd70++;
    f_1a70_525f(d_69da_dd70, 0);
    d_69da_d9c4 = o7b;
    d_69da_d9d4 = o6b;
    d_69da_da24 = o19;
    d_69da_de4d = ox;
    d_69da_de45 = oy;
}

/* Draw button n (1-based), its colours swapped when asked. */
void f_1a70_525f(int n, char swap)
{
    d_69da_d9ca = n - 1;
    if (d_69da_d9ca < 0)
        return;
    d_69da_d9c4 = d_28da_28bc[0][d_69da_d9ca] / 16;
    d_69da_d9d4 = d_28da_28bc[0][d_69da_d9ca] % 16;
    if (d_69da_d9c4 <= 0 && d_69da_d9d4 <= 0)
        return;
    if (swap != 0 && d_69da_d9d4 > 0)
        f_2162_13fc(&d_69da_d9c4, &d_69da_d9d4, 2);
    d_69da_da24 = d_28da_28bc[1][d_69da_d9ca];
    d_69da_de4d = d_4512_7484[0][d_69da_d9ca];
    d_69da_de45 = d_4512_7484[1][d_69da_d9ca];
    d_69da_dab4 = d_4512_7484[6][d_69da_d9ca];
    if (d_69da_da24 == 0)
        f_1a70_3554(d_69da_de4d, d_69da_de45, d_69da_d9c4, d_69da_d9d4, d_69da_dab4,
                    d_536d_86ed[d_69da_d9ca]);
    else if (d_69da_da24 == 1)
        f_1a70_390f(d_69da_de4d, d_69da_de45, d_69da_d9c4, d_69da_d9d4, d_69da_dab4,
                    d_536d_86ed[d_69da_d9ca]);
    else if (d_69da_da24 == 2)
        f_1a70_3d0c(d_69da_de4d, d_69da_de45, d_69da_d9c4, d_69da_d9d4, d_69da_dab4,
                    d_536d_86ed[d_69da_d9ca]);
}

/* Wait for a click on a button; returns its number. */
int f_1a70_53de(int a)
{
    char buf[6];

    f_1a70_57e3();
    d_69da_dd72 = -1;
    d_69da_dee9 = f_2162_0e32();
    d_69da_deed = f_2162_0e32();
    f_2162_0397(0);
    do {
top:
        strcpy(buf, f_2162_0d1a());
        if (buf[0] == 'P' || buf[0] == 'p')
            f_b085_3f64();
        if (f_2162_0c2b() > 0) {
            if (d_69da_e2ce == 0 && f_1a70_6ee4()) {
                f_b085_3f64();
                goto top;
            }
            d_69da_dd72 = 0;
            for (d_69da_daa2 = 0; d_69da_dd70 - 1 >= d_69da_daa2; d_69da_daa2++) {
                if (f_2162_0c1f() >= d_4512_7484[2][d_69da_daa2] &&
                    f_2162_0c1f() <= d_4512_7484[4][d_69da_daa2] &&
                    f_2162_0c13() >= d_4512_7484[3][d_69da_daa2] &&
                    f_2162_0c13() <= d_4512_7484[5][d_69da_daa2]) {
                    if (d_536d_4f71[d_69da_daa2] == 0)
                        d_69da_dd72 = d_69da_daa2 + 1;
                    else
                        d_69da_dd72 = -1;
                    d_69da_daa2 = d_69da_dd70 - 1;
                }
            }
        }
        if (d_69da_de31 != 0 && d_536d_7fa9[0] != 0) {
            if (f_2162_0e32() - d_69da_dee9 > 500) {
                f_aac9_2ece();
                d_69da_dee9 = f_2162_0e32();
            }
            if (f_2162_0e32() - d_69da_deed > 100) {
                f_aac9_2f6d();
                d_69da_deed = f_2162_0e32();
            }
        }
    } while (d_69da_dd72 <= -1);
    f_2162_0397(1);
    if (a > 0)
        f_1a70_525f(a, 0);
    if (d_69da_dd72 > 0 && a > -1)
        f_1a70_525f(d_69da_dd72, -1);
    return d_69da_d9dc = d_69da_dd72;
}

void f_1a70_5641(int team)
{
    d_536d_4f71[team - 1] = 0xff;
}

void f_1a70_565a(void)
{
    for (d_69da_daa2 = 0; d_69da_dd70 - 1 >= d_69da_daa2; d_69da_daa2++)
        d_536d_4f71[d_69da_daa2] = 0;
}

void f_1a70_5688(int a)
{
    int m;

    f_2162_0397(0);
    f_1a70_344b(0xfc, 0xc5, 5, "CLICK MOUSE");
    if (d_69da_ddb8 != 0 && d_69da_ddb7 == 0 && d_69da_de19 == 0 ||
        d_69da_ddb3 != 0 && d_69da_ddb9 != 0 || d_69da_de13 != 0 && d_69da_ddb9 != 0) {
        d_69da_de41 = f_2162_0e32();
        do
            f_2162_0da1(2);
        while (f_2162_0c2b() != 0 || f_2162_0e32() - d_69da_de41 <= 75);
    } else {
        f_1a70_57e3();
        do {
again:
            f_2162_0da1(2);
            strcpy(d_536d_6c01, f_2162_0d1a());
            if (d_536d_6c01[0] == 'P' || d_536d_6c01[0] == 'p')
                f_b085_3f64();
            m = f_2162_0c2b();
            if (d_69da_e2ce == 0 && m > 0 && f_1a70_6ee4()) {
                f_b085_3f64();
                goto again;
            }
        } while (m <= 0 && (d_536d_6c01[0] == 0 || a != 2));
    }
    f_2162_07f7(0xf3, 0xbf, 0x13e, 0xc5);
    if (a == 0)
        f_1a70_344b(0xfc, 0xc5, 5, "PLEASE WAIT");
    f_2162_0397(1);
}

void f_1a70_57e3(void)
{
    char buf[10];

    do
        strcpy(buf, f_2162_0d1a());
    while (buf[0] != 0 || f_2162_0c2b() != 0);
}

/* Copy of s with all but the first letter in lower case (not called). */
static char far *f_1a70_5812(char far *s)
{
    char far *p;

    p = f_2162_0f38();
    strcpy(p, s);
    for (d_69da_dd74 = 1; strlen(p) > d_69da_dd74; d_69da_dd74++)
        if (isupper(p[d_69da_dd74]))
            p[d_69da_dd74] = tolower(p[d_69da_dd74]);
    return p;
}

long f_1a70_588f(int team)
{
    d_69da_dfae = f_2162_1634(d_69da_dff0, 0);
    d_69da_df75 = d_69da_dfae[0][team] + d_69da_dfae[5][team] + d_69da_dfae[2][team];
    d_69da_df79 = d_69da_dfae[9][team] + d_69da_dfae[12][team] + d_69da_dfae[13][team];
    d_69da_df7d = f_2162_1367(d_4512_1e90[0][team] - f_a83a_1ea1(team), 0L) + d_69da_df75 - d_69da_df79;
    d_69da_df81 = f_1a70_0cb8(d_69da_df7d * 0.9, 0);
    return d_69da_df81;
}

void f_1a70_598c(int team, char far *title, char far *text)
{
    char buf[180];
    int x, y;

    f_1a70_4a41("");
    d_69da_dd42 = 4;
    f_2162_0897(16);
    f_2162_08b5(40, 80, 288, d_69da_dd42 * 8 + 104);
    f_2162_0897(19);
    f_2162_08b5(36, 76, 284, d_69da_dd42 * 8 + 100);
    d_69da_d9c4 = d_4512_00a4[team] / 16;
    d_69da_d9d4 = d_4512_00a4[team] % 16;
    if (d_69da_d9d4 == 3)
        f_2162_13fc(&d_69da_d9c4, &d_69da_d9d4, 2);
    f_1a70_3554(5.125, 11.0, d_69da_d9c4, d_69da_d9d4, 240, title);
    sprintf(buf, "%s ", text);
    x = 0;
    y = 100;
    while (f_2162_0b1b(buf, " ") > 0) {
        d_69da_dd44 = f_2162_0b1b(buf, " ");
        strncpy(d_536d_7635, buf, d_69da_dd44 - 1);
        d_536d_7635[d_69da_dd44 - 1] = 0;
        if (x + strlen(d_536d_7635) * 6 > 240) {
            y += 8;
            x = 0;
        }
        f_1a70_344b(x + 49, y, 6, d_536d_7635);
        x += (int)(strlen(d_536d_7635) + 1) * 6;
        strcpy(buf, buf + d_69da_dd44);
    }
    f_1a70_5688(0);
}

/* Read a big-endian word. */
int f_1a70_5b36(FILE *fp)
{
    int v;
    unsigned char hi, lo;

    hi = fgetc(fp);
    lo = fgetc(fp);
    v = (hi << 8) + lo;
    return v;
}

char f_1a70_5b76(int player)
{
    if (player >= 0 && d_69da_d98e - 1 >= player)
        return -1;
    return 0;
}

char f_1a70_5b94(int player)
{
    if (player >= 3000)
        return -1;
    return 0;
}

int f_1a70_5baa(int player)
{
    unsigned char c;

    c = (player - 3000u) / 20;
    return c;
}

unsigned char f_1a70_5bc8(int player)
{
    unsigned char c;

    c = (player - 3000u) % 20;
    return c;
}

unsigned char f_1a70_5be7(int player, unsigned char a)
{
    unsigned char q, r, v, s;

    q = f_1a70_5baa(player);
    r = f_1a70_5bc8(player);
    v = d_4512_a4c8[q][2][r];
    s = d_4512_a4c8[q][0][r];
    if (a == 1) {
        if (s != 1)
            v = v * 0.3;
    } else if (f_1a70_66a9(a)) {
        if (s == 1)
            v = v * 0.3;
        else if (s != 2)
            v = v * 0.6;
    } else if (f_1a70_66cf(a)) {
        if (s == 1)
            v = v * 0.3;
        else if (s != 3)
            v = v * 0.6;
    } else if (f_1a70_66f0(a)) {
        if (s == 1)
            v = v * 0.3;
        else if (s != 4)
            v = v * 0.6;
    }
    return v / 10;
}

void f_1a70_5cda(void)
{
    d_69da_dfc2 = f_2162_1634(d_69da_dffa, 1);
    strcpy(d_69da_dfc2, "");
    d_28d8_0016 = 0;
    d_28d8_0010 = 0;
}

void f_1a70_5d1e(int a, int b, char far *s)
{
    register unsigned char len;

    if (d_28d8_0018 != 0 && d_28d8_0010 < 300 && (len = strlen(s)) + d_28d8_0016 < 990) {
        d_4512_dad8[d_28d8_0010].a = a;
        d_4512_dad8[d_28d8_0010].b = b;
        d_4512_dad8[d_28d8_0010].start = d_28d8_0016;
        d_4512_dad8[d_28d8_0010].len = len;
        d_28d8_0016 = d_28d8_0016 + d_4512_dad8[d_28d8_0010].len;
        d_69da_dfc2 = f_2162_1634(d_69da_dffa, 1);
        strcat(d_69da_dfc2, s);
        d_28d8_0010++;
    }
}

void f_1a70_5e32(void)
{
    d_28d8_0018 = -1;
}

void f_1a70_5e46(void)
{
    d_28d8_0018 = 0;
}

char f_1a70_5e5a(int p)
{
    unsigned char c;

    d_69da_dfba = f_2162_1634(d_69da_dff6, 0);
    c = d_69da_dfba[9][p];
    if (c == 0 || c == 2 || c == 3 || c == 4 || c == 11)
        return 17;
    return 15;
}

char f_1a70_5ea2(unsigned char team, unsigned char week, unsigned char n)
{
    if (f_1a70_237e(week) && team / 20 == 0 || f_1a70_268e(week, n) || f_1a70_2737(week, n) ||
        f_1a70_27c8(week, n))
        return -1;
    return 0;
}

/* draws a player's shirt with his number at x, y (and the arrow of his position) */
void f_1a70_5f14(unsigned char team, unsigned char player, unsigned x, unsigned y)
{
    unsigned char num[6], d1[6], d2[6];
    unsigned char col, col2, col3;

    if (team < 80) {
        col = d_4512_00a4[team] / 16;
        col2 = d_4512_00a4[team] % 16;
    } else {
        col = d_5dbf_0b62[team == d_69da_da60 ? d_69da_daae - 80 : d_69da_dab0 - 80] / 16;
        col2 = d_5dbf_0b62[team == d_69da_da60 ? d_69da_daae - 80 : d_69da_dab0 - 80] % 16;
    }
    if (player == 1) {
        col = col2 == 6 ? 1 : 0;
        col2 = col2 == 6 ? 4 : 6;
    }
    col3 = col == 15 || col == 3 ? 0 : col;
    f_2162_08a6(col2 + 16);
    f_2162_1021(x + 1, y, x + 3, y);
    f_2162_1021(x + 10, y, x + 12, y);
    f_2162_1021(x, y + 1, x + 4, y + 1);
    f_2162_1021(x + 9, y + 1, x + 13, y + 1);
    f_2162_1021(x - 1, y + 2, x + 14, y + 2);
    f_2162_1021(x - 1, y + 3, x + 14, y + 3);
    f_2162_1021(x - 1, y + 4, x, y + 4);
    f_2162_1021(x + 2, y + 4, x + 11, y + 4);
    f_2162_1021(x + 13, y + 4, x + 14, y + 4);
    f_2162_08a6(col3 + 16);
    f_2162_1021(x + 4, y, x + 4, y);
    f_2162_1021(x + 9, y, x + 9, y);
    f_2162_1021(x + 5, y + 1, x + 8, y + 1);
    f_2162_1021(x - 2, y + 3, x - 2, y + 3);
    f_2162_1021(x + 15, y + 3, x + 15, y + 3);
    f_2162_1021(x - 2, y + 4, x - 2, y + 4);
    f_2162_1021(x + 15, y + 4, x + 15, y + 4);
    f_2162_0897(col2 + 16);
    f_2162_08b5(x + 2, y + 5, x + 11, y + 10);
    f_2162_08a6(col2 + 16);
    f_2162_1021(x + 3, y + 11, x + 10, y + 11);
    sprintf(num, "%d", player >= 13 ? player + 1 : player);
    sprintf(d1, "%c", num[0]);
    f_1a70_344b(x + 13 - (player >= 10 ? 4 : 0) - (player == 1 ? 1 : 0), -(y + 14 - 6 + 1), col, d1);
    if (player >= 10) {
        sprintf(d2, "%c", num[1]);
        f_1a70_344b(x + 20 - 6 - (player == 1 ? 1 : 0), -(y + 14 - 6 + 1), col, d2);
    }
    if (d_4512_4726[team][0][player - 1] == 11 || d_4512_4726[team][0][player - 1] == 12) {
        f_2162_08a6(22);
        f_2162_1021(x - 1, y + 7, x - 9, y + 7);
        f_2162_1021(x - 9, y + 7, x - 7, y + 5);
        f_2162_1021(x - 9, y + 7, x - 7, y + 9);
        f_2162_1021(x + 14, y + 7, x + 22, y + 7);
        f_2162_1021(x + 22, y + 7, x + 20, y + 5);
        f_2162_1021(x + 22, y + 7, x + 20, y + 9);
    } else if (d_4512_4726[team][2][player - 1] == 1) {
        f_2162_08a6(22);
        f_2162_1021(x + 7, y - 1, x + 7, y - 9);
        f_2162_1021(x + 7, y - 9, x + 5, y - 7);
        f_2162_1021(x + 7, y - 9, x + 9, y - 7);
    } else if (d_4512_4726[team][2][player - 1] == 2) {
        f_2162_08a6(22);
        f_2162_08a6(22);
        f_2162_1021(x + 7, y + 13, x + 7, y + 21);
        f_2162_1021(x + 7, y + 21, x + 5, y + 19);
        f_2162_1021(x + 7, y + 21, x + 9, y + 19);
    }
}

/* can player a play in position b */
char f_1a70_6514(int a, int b)
{
    char x, y;

    if (!f_1a70_5b94(a)) {
        if (b == 11)
            return -1;
        if (b == 1 && d_4512_bdc8[a].f0)
            return -1;
        x = 0;
        y = 0;
        if ((f_1a70_66a9(b) && d_4512_bdc8[a].f1) || (f_1a70_66cf(b) && d_4512_bdc8[a].f2) ||
            (f_1a70_66f0(b) && d_4512_bdc8[a].f3))
            x = 1;
        if ((f_1a70_6737(b) && d_4512_bdc8[a].f4) || (f_1a70_6711(b) && d_4512_bdc8[a].f5) ||
            (f_1a70_675d(b) && d_4512_bdc8[a].f6))
            y = 1;
        if (x == 1 && y == 1)
            return -1;
    } else {
        x = d_4512_a4c8[f_1a70_5baa(a)][0][f_1a70_5bc8(a)];
        return (b == 1 && x == 1) || (f_1a70_66a9(b) && x == 2) || (f_1a70_66cf(b) && x == 3) ||
               (f_1a70_66f0(b) && x == 4) ? -1 : 0;
    }
    return 0;
}

char f_1a70_66a9(int x)
{
    if (x == 2 || x == 3 || x == 4 || x == 11)
        return -1;
    return 0;
}

char f_1a70_66cf(int x)
{
    if (x == 5 || x == 6 || x == 7)
        return -1;
    return 0;
}

char f_1a70_66f0(int x)
{
    if (x == 8 || x == 9 || x == 10)
        return -1;
    return 0;
}

char f_1a70_6711(int x)
{
    if (x == 3 || x == 6 || x == 9 || x == 11)
        return -1;
    return 0;
}

char f_1a70_6737(int x)
{
    if (x == 2 || x == 5 || x == 8 || x == 11)
        return -1;
    return 0;
}

char f_1a70_675d(int x)
{
    if (x == 4 || x == 7 || x == 10 || x == 11)
        return -1;
    return 0;
}

char f_1a70_6783(int x)
{
    if (x >= 67)
        return -1;
    return 0;
}

double f_1a70_6798(int x, int y)
{
    return (f_2162_1390(d_28da_2a78[15][x], d_28da_2a78[9][x]) * 0.1 + d_28da_2a78[12][x]
            + d_28da_2a78[17][x] * 0.5 + (y == 1 || y == 4 || y == 7 || y > 9 ? 3 : 0)) / 3.0;
}

int f_1a70_6856(int a, int b, int c)
{
    return d_3668_e912[b == 81 ? 1 : 0][a] + (c == 1 || c == 4 || c == 7 || c > 9 ? 2 : 0);
}

int f_1a70_68a4(int x)
{
    return (x + 1) / 2;
}

float f_1a70_68b6(int x)
{
    if (x <= 19 || x >= 80)
        return 1.1;
    if (x <= 39)
        return 1.5;
    if (x <= 59)
        return 2.5;
    return 3.5;
}

/* is the player unhappy: the reason in d_536d_69d1 (unless c), its code in d_69da_db76 */
char f_1a70_68f0(int player, char c)
{
    d_69da_ddfa = 0;
    d_69da_db76 = 0;
    if (f_1a70_6d23(player) == 0 && d_3668_0000[7][player] == 255 && !d_4512_bdc8[player].f30) {
        if (!d_4512_bdc8[player].f11) {
            d_69da_dc06 = d_28da_2a78[0][23 * 1860 + player];
            d_69da_ddfd = f_1a70_2bc7(d_69da_dc08 = d_28da_2a78[0][18 * 1860 + player]);
            if (d_69da_d996 > 18 && !d_4512_bdc8[player].f23) {
                d_69da_ddff = d_4512_bdc8[player].f7 == 0 || f_1a70_1dc1(player) > 10;
                d_69da_de00 = d_28da_2a78[20][player] == 0 && d_28da_2a78[21][player] > 90;
                if (d_69da_ddff && d_69da_de00 && d_69da_dc06 == 1) {
                    if (!c)
                        strcpy(d_536d_69d1, "feels he should be in the team");
                    d_69da_ddfa = -1;
                    d_69da_db76 = 1;
                }
                if (d_69da_ddff && d_69da_de00 && d_69da_dc06 > 1 &&
                    d_28da_2a78[17][player] > (d_4512_bdc8[player].f0 << 2) + 30) {
                    if (!c)
                        strcpy(d_536d_69d1, "wants first team football");
                    d_69da_ddfa = -1;
                    d_69da_db76 = 2;
                }
            }
            if (d_4512_1ad0[d_69da_dc08] == 650) {
                d_69da_dc0a = 0;
                d_69da_dc0c = 0;
            } else {
                d_69da_dc0a = d_5dbf_0932[d_3668_0000[17][player]][d_4512_2b2e[d_4512_1a30[d_69da_dc08]]];
                d_69da_dc0c = d_5dbf_0932[d_3668_0000[17][player]][d_4512_2b2e[d_4512_1ad0[d_69da_dc08]]];
            }
            if (f_1a70_2ccc(player) - f_1a70_2bff(d_69da_dc08) > (d_3668_cb70[player] > 0 ? 8 : 6) &&
                f_1a70_2bff(d_69da_dc08) < 15.0) {
                if (!c)
                    strcpy(d_536d_69d1, "wants to move to a better club");
                d_69da_ddfa = -1;
                d_69da_db76 = 3;
            } else if (d_69da_dc0a > 9) {
                if (!c) {
                    if (d_69da_ddfd)
                        strcpy(d_536d_69d1, "is not happy working for you");
                    else
                        strcpy(d_536d_69d1, "cannot work with his manager");
                }
                d_69da_ddfa = -1;
                d_69da_db76 = 4;
            } else if (d_69da_dc0c > 9) {
                if (!c)
                    sprintf(d_536d_69d1, "cannot work with %s coach", d_69da_ddfd ? "the" : "his");
                d_69da_ddfa = -1;
                d_69da_db76 = 5;
            } else {
                d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
                if (d_69da_dfa6[4][player] < f_1a70_6d45(player, d_69da_dc08) * 0.8 && d_3668_cb70[player] > 0) {
                    if (!c)
                        strcpy(d_536d_69d1, "wants higher wages");
                    d_69da_ddfa = -1;
                    d_69da_db76 = 6;
                }
            }
        }
        if (d_4512_bdc8[player].f16) {
            if (!c)
                strcpy(d_536d_69d1, "feels he's been fined unfairly");
            d_69da_ddfa = -1;
            d_69da_db76 = 7;
        }
    }
    return d_69da_ddfa;
}

/* is the player one of the players abroad (1680..) */
char f_1a70_6d23(int player)
{
    if ((unsigned)player >= 1680 && d_69da_d990 + 1679 >= (unsigned)player)
        return -1;
    return 0;
}

/* the wage a player asks of a club */
int f_1a70_6d45(int player, int club)
{
    unsigned char rep, level;
    unsigned char a = club < 80 ? f_1a70_2bff(club) : 16.0;
    float v;
    float t[4] = { 1.0, 0.7, 0.4, 0.3 };

    rep = d_3668_0000[18][player];
    d_69da_dbf6 = (d_28da_2a78[0][player] * 4 + rep) / 5;
    level = f_2162_134e(f_2162_13ba(19, d_69da_dbf6 / 10), 0);
    v = a * 0.14 * (d_28d3_0000[level] * 400.0) * t[club < 80 ? club / 20 : 0];
    v = v * (d_28da_2a78[17][player] / 100.0 + 1);
    if (d_4512_bdc8[player].f28)
        v = v * 1.3;
    d_69da_dbf8 = (int)(v / 50.0) * 50;
    d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
    if (d_69da_dfa6[4][player] > d_69da_dbf8 && d_28da_2a78[17][player] < 30)
        d_69da_dbf8 = d_69da_dfa6[4][player];
    if (d_69da_dbf8 > 9000)
        d_69da_dbf8 = 9000;
    return d_69da_dbf8;
}

/* waits up to 10 ticks for a key or a click */
char f_1a70_6ee4(void)
{
    char r = 0;
    long t;

    t = f_2162_0e32();
    do {
        if (f_2162_0c2b() > 0)
            r = -1;
    } while (f_2162_0e32() - t < 10 && !r);
    return r;
}
