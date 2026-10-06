/* @at 14bc:000b */
/* @data 60ae:01e6 */
/* @module */

/* Root module 14bc: CM93's version of CM1's root module 1680 (text drawing, boxes,
 * buttons and menus, input waits, number and money formatting) with the functions CM93
 * moved into the root from CM1's overlays 88c9, 992a, a1c3 and 67ee: player values and
 * ratings, squad slots and positions, the fixture calendar tests by week, player,
 * manager, division and number names, the player shirt and the players' complaints.
 * 350e, 42c1, 4503 and 5a7a are only reached through pointers. */
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
void f_14bc_000b(float x, int team, char far *title);
void f_14bc_0164(int x1, int y1, int x2, int y2);
long f_14bc_020c(int p, int n);
void f_14bc_0ac0(int line, char far *s);
void f_14bc_0b30(char far *s);
void f_14bc_0b83(char far *s);
char f_14bc_0c5e(void);
long f_14bc_0d32(long v, char c);
long f_14bc_0dd6(long v);
char far *f_14bc_0e7a(long amount);
void f_14bc_0ecb(int p);
void f_14bc_1262(unsigned char team, unsigned char pos);
void f_14bc_1365(register int player);
void f_14bc_16af(int p);
void f_14bc_1993(int p);
void f_14bc_1dd7(int p);
int f_14bc_1eb7(int player);
int f_14bc_1f29(int player);
int f_14bc_1fc3(int a, int player, int c);
long f_14bc_22f4(int player, int team, unsigned char pos, unsigned char second);
int f_14bc_2450(unsigned char a);
char f_14bc_248a(int w);
char f_14bc_2545(int w);
char f_14bc_2594(int w);
char f_14bc_25c5(int w);
char f_14bc_2620(int w);
char f_14bc_2677(int w);
char f_14bc_26d6(int w);
char f_14bc_2729(int w);
char f_14bc_2784(int w, int n);
char f_14bc_2835(int w, int n);
char f_14bc_28cc(int w, int n);
char f_14bc_295d(int w, int n);
char f_14bc_2a01(int w);
char f_14bc_2a5c(int w);
char f_14bc_2ab7(int w, int n);
char f_14bc_2b02(int x);
char f_14bc_2b27(int w, int n);
char f_14bc_2b82(int x);
char f_14bc_2b9f(int w, int n);
char f_14bc_2c1d(int x);
int f_14bc_2c3a(int a, int b);
char f_14bc_2cc0(int x);
float f_14bc_2cf4(int x);
int f_14bc_2db8(int x);
char f_14bc_2dfc(int player);
char f_14bc_2e5e(int player);
char far *f_14bc_2f2c(int x, char c);
void f_14bc_2f90(int n, char far *title, char far *items);
void f_14bc_32d7(int a, int b, int line);
void f_14bc_3334(int last);
static void f_14bc_350e(int i);
char far *f_14bc_3523(int x);
void f_14bc_356a(int x, int y, int colour, char far *s);
void f_14bc_3672(float x, float y, int bg, int fg, int w, char far *s);
void f_14bc_38bc(float x, float y, int colour, char far *s);
void f_14bc_3a36(float x, float y, int bg, int fg, int w, char far *s);
void f_14bc_3c75(float x, float y, int colour, char far *s);
void f_14bc_3e40(float x, float y, int bg, int fg, int w, char far *s);
static void f_14bc_42c1(float x, float y, int bg, int fg, int w, int len, char far *s);
static void f_14bc_4503(float x, float y, int team);
void f_14bc_4587(float x, float y, int team);
char far *f_14bc_4602(int n, char far *s);
int f_14bc_468c(int team);
int f_14bc_46ce(int team);
char far *f_14bc_4703(int player);
char far *f_14bc_483d(int player);
char far *f_14bc_48b4(int player);
char far *f_14bc_490d(int manager, char full);
char far *f_14bc_4a14(int player);
char far *f_14bc_4a83(int division);
char far *f_14bc_4b12(int division, char full);
void f_14bc_4bd3(char far *title);
void f_14bc_4d4c(float x, int w, char far *prompt);
void f_14bc_4de1(int x, float y, int colour, int maxlen);
void f_14bc_5053(void);
void f_14bc_50f8(int a, float x, float y, int c, int d, int e, char far *s);
void f_14bc_548f(int n, char swap);
int f_14bc_5635(int a);
void f_14bc_589c(int team);
void f_14bc_58b1(void);
void f_14bc_58db(int a);
void f_14bc_5a4d(void);
static char far *f_14bc_5a7a(char far *s);
long f_14bc_5af6(int team);
void f_14bc_5bfe(int team, char far *title, char far *text);
int f_14bc_5ddb(FILE *fp);
char f_14bc_5e18(int player);
char f_14bc_5e32(int player);
int f_14bc_5e44(int player);
unsigned char f_14bc_5e60(int player);
unsigned char f_14bc_5e7d(int player, unsigned char a);
void f_14bc_5f79(void);
void f_14bc_5fc1(int a, int b, char far *s);
void f_14bc_60ca(void);
void f_14bc_60da(void);
char f_14bc_60ea(int p);
char f_14bc_612e(unsigned char team, unsigned char week, unsigned char n);
void f_14bc_6199(unsigned char team, unsigned char player, unsigned x, unsigned y);
char f_14bc_679d(int a, int b);
char f_14bc_692a(int x);
char f_14bc_694c(int x);
char f_14bc_6969(int x);
char f_14bc_6986(int x);
char f_14bc_69a8(int x);
char f_14bc_69ca(int x);
char f_14bc_69ec(int x);
double f_14bc_69fd(int x, int y);
int f_14bc_6ab9(int a, int b, int c);
int f_14bc_6b05(int x);
float f_14bc_6b14(int x);
char f_14bc_6b4a(int player, char c);
char f_14bc_6f7c(int player);
int f_14bc_6f9a(int player, int club);
char f_14bc_7136(void);

void f_1bd3_0821(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_1bd3_08cb(int c);
void f_1bd3_08d6(int colour);
void f_1bd3_0fe2(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_1bd3_08e1(int x1, int y1, int x2, int y2);
unsigned f_1bd3_0b1b(char far *s, char far *set);
void f_1bd3_0dbc(int ticks);
int f_1bd3_1307(int a, int b);
long f_1bd3_131c(long a, long b);
int f_1bd3_1369(int a, int b);
void far *f_1bd3_1617(int handle, int page);
struct flags_a { unsigned char b0; unsigned f8 : 1; unsigned f9 : 1; unsigned : 6; unsigned : 2; unsigned f18 : 1; unsigned f19 : 1; unsigned : 4; unsigned : 0; unsigned f24 : 1; unsigned : 3; unsigned f28 : 1; unsigned : 1; unsigned f30 : 1; unsigned : 1; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
extern union flags d_60ae_ddbe[];
extern int d_60ae_fde6;
extern unsigned char far d_3c35_0000[][1860];
extern unsigned char far d_471b_0000[][1860];
extern int far d_2278_0000[];
extern float far d_227b_0000[];
extern int far d_323f_824a[];
extern int far d_323f_47b4[];
extern unsigned char far d_323f_28ba[][650];
extern float d_60ae_d883;
extern float d_60ae_d887;
extern char far d_2289_4cfa[];
extern unsigned char far d_323f_4cb8[];
extern char near *d_60ae_b572[];
extern long d_60ae_d7ef;
extern long d_60ae_d7f3;
extern float d_60ae_d87f;
extern float d_60ae_d88b;
extern float d_60ae_d88f;
extern float d_60ae_d8db;
extern char d_60ae_d931;
extern int d_60ae_db12;
extern int d_60ae_db18;
extern int d_60ae_db1a;
extern int d_60ae_db1c;
extern int d_60ae_db1e;
extern int d_60ae_db20;
extern int d_60ae_db22;
extern int d_60ae_db24;
extern int d_60ae_dcd4;
extern int d_60ae_dd4c;
extern int d_60ae_dd74;
extern int d_60ae_dd98;
extern int (far *d_60ae_fae6)[1860];
extern long far *d_60ae_faf2;
extern int d_60ae_fdec;
char far *f_1bd3_0efb(void);
extern int far d_471b_b7a8[][26];
extern int far d_471b_c7e8[][2][13];
extern int far d_323f_0592[][14];
extern unsigned char far d_323f_0e8a[][3][14];
extern unsigned char far d_323f_2630[];
extern unsigned char far d_323f_4e52[];
extern unsigned char far d_2289_a0f6[][80];
extern unsigned char far d_2289_a106[][80];
extern int d_60ae_da34;
extern int d_60ae_da36;
extern int d_60ae_da38;
extern int d_60ae_da3a;
extern int d_60ae_da3c;
extern int d_60ae_da3e;
extern int d_60ae_da40;
extern int d_60ae_da42;
extern int d_60ae_da46;
extern int d_60ae_da4a;
extern int d_60ae_da4c;
extern int d_60ae_da4e;
extern int d_60ae_da52;
extern int d_60ae_da54;
extern int d_60ae_da56;
extern int d_60ae_da58;
extern int d_60ae_da5a;
extern int d_60ae_db62;
extern int d_60ae_dcac;
extern int d_60ae_dcda;
extern int d_60ae_dcdc;
extern int d_60ae_dd30;
extern int d_60ae_dd5a;
extern int d_60ae_dd92;
extern int d_60ae_da2a;
extern int d_60ae_da2c;
extern int d_60ae_da2e;
extern int d_60ae_da30;
extern int d_60ae_da32;
extern int d_60ae_db3c;
extern unsigned char far d_471b_82c8[];
extern int far d_323f_653a[];
extern unsigned char far d_54d9_06a1[][12][5];
void f_1bd3_03a2(char on);
void f_1bd3_099d(int a);
void f_1bd3_09e9(int x, int y, char far *s);
void f_1bd3_0b10(int on);
int f_1bd3_0c06(void);
int f_1bd3_0c0e(void);
int f_1bd3_0c16(void);
long f_1bd3_0df6(void);
char far *f_1bd3_0e5e(char far *s);
extern unsigned far d_2287_0019;
extern unsigned far d_2287_001b;
extern char far d_2289_0848[][80];
extern char far d_2289_5308[];
extern char far d_2289_5644[];
extern unsigned char far d_2289_a0c6[][5][16];
extern float far d_2289_ea78[];
extern float far d_2289_eac8[];
extern float far d_2289_eb18[];
extern unsigned char far d_323f_4c14[][82];
extern unsigned char far d_323f_4d5c[];
extern unsigned char far d_323f_4f48[][82];
extern unsigned char far d_323f_4f9a[];
extern unsigned char far d_54d9_08b4[];
extern int far d_54d9_11fe[][2][98];
extern char near *d_60ae_b61a[];
extern float d_60ae_d8eb;
extern float d_60ae_d8ef;
extern char d_60ae_d905;
extern char d_60ae_d97d;
extern int d_60ae_d9c4;
extern int d_60ae_d9f2;
extern int d_60ae_d9f4;
extern int d_60ae_d9f6;
extern int d_60ae_d9f8;
extern int d_60ae_dbbe;
extern int d_60ae_dd1e;
extern int d_60ae_dd48;
extern int d_60ae_dd6e;
extern int d_60ae_dda0;
extern unsigned char far d_2289_fb10[][20];
extern unsigned char far d_2287_0000[];
extern int d_60ae_daea;
extern int d_60ae_db90;
extern int d_60ae_dd64;
void f_1bd3_034d(void);
void f_1bd3_0928(int x1, int y1, int x2, int y2);
char far *f_1bd3_0cec(void);
char far *f_1bd3_0157();
void f_1bd3_1a32(void);
void f_1bd3_1a4c(void);
extern char far *far d_59f5_0000[];
extern char far *far d_59f5_0fc0[];
extern int far d_323f_73c2[];
extern int far d_323f_90d2[];
extern char far d_2289_0e88[][40];
extern char far d_2289_3872[];
extern char far d_2289_3912[];
extern char far d_2289_4598[];
extern char far d_2289_4ae8[];
extern char far d_2289_4b06[][4][20];
extern unsigned char far d_2289_5540[];
extern float far d_2289_df10[][100];
extern unsigned char far d_471b_ae8c[][100];
extern unsigned char far d_471b_aef0[];
extern char d_60ae_d930;
extern int d_60ae_d9c2;
extern int d_60ae_dc90;
extern int d_60ae_dd0e;
extern int d_60ae_dd56;
extern int d_60ae_dd5e;
extern float d_60ae_d84b;
extern float d_60ae_d853;
extern float d_60ae_d8d3;
extern float d_60ae_d8df;
extern float d_60ae_d8e3;
extern int (far *d_60ae_face)[2][16];
extern int (far *d_60ae_fae2)[650];
extern int d_60ae_fdda;
extern int d_60ae_fde4;
extern char near d_60ae_03e9[];
extern char near d_60ae_03f7[];
extern char near d_60ae_03fa[];
extern char near d_60ae_03ff[];
extern char near d_60ae_0402[];
extern char near d_60ae_0406[];
extern char near d_60ae_0412[];
extern char near d_60ae_0418[];
extern char near d_60ae_041c[];
long f_1bd3_0d69(long n);
void f_1bd3_13a3(void far *a, void far *b, int n);
long f_a3de_21b9(int team);
void f_a694_34cf(void);
void f_a694_35c7(void);
void f_ad38_3c81(void);
extern char far d_2287_0016;
extern int far d_2287_0017;
extern unsigned far d_2287_001d;
extern char far d_2289_251c[];
extern char far d_2289_2e90[];
extern struct { int a, b, start, len; } far d_2289_9766[];
extern long far d_323f_3f94[][80];
extern long d_60ae_d7af;
extern long d_60ae_d7b3;
extern long d_60ae_d7b7;
extern long d_60ae_d7bb;
extern float d_60ae_d843;
extern float d_60ae_d847;
extern char d_60ae_d902;
extern char d_60ae_d91a;
extern char d_60ae_d920;
extern char d_60ae_d97a;
extern char d_60ae_d97b;
extern char d_60ae_d97c;
extern char d_60ae_d980;
extern int d_60ae_d9be;
extern int d_60ae_d9c0;
extern int d_60ae_d9ee;
extern int d_60ae_d9f0;
extern int d_60ae_dc7e;
extern int d_60ae_dd68;
extern int d_60ae_dda4;
extern char far *d_60ae_ddba;
extern unsigned char (far *d_60ae_fad2)[1860];
extern long (far *d_60ae_fade)[80];
extern int d_60ae_fb04;
extern int d_60ae_fdd8;
extern int d_60ae_fddc;
extern int d_60ae_fde2;
float f_1bd3_1341(float a, float b);
extern unsigned char far d_54d9_0ad0[];
extern unsigned char far d_323f_648c[][14];
extern int far d_323f_4854[];
extern unsigned char far d_323f_23a6[];
extern unsigned char far d_54d9_08a0[][10];
extern char far d_2289_3af4[];
extern float far d_2282_0000[];
extern int d_60ae_dcd2;
extern int d_60ae_dc82;
extern int d_60ae_dc84;
extern int d_60ae_dd9c;
extern int d_60ae_dda2;
extern char d_60ae_d933;
extern char d_60ae_d934;
extern char d_60ae_d936;
extern char d_60ae_d939;
extern int d_60ae_dbbc;
extern int d_60ae_db26;
extern int d_60ae_db28;
extern int d_60ae_db2a;
extern int d_60ae_db2c;
extern int d_60ae_db3a;


void f_14bc_000b(float x, int team, char far *title)
{
    char buf[320];

    f_14bc_4bd3("");
    sprintf(d_2289_4cfa, "%s %s", (char far *)d_60ae_b572[team], title);
    if (x == -1)
        d_60ae_d8db = 19 - strlen(d_2289_4cfa) / 2;
    else
        d_60ae_d8db = x;
    f_1bd3_08cb(16);
    f_1bd3_08e1((d_60ae_d8db * 8 + 6), 7, ((strlen(d_2289_4cfa) + d_60ae_d8db) * 8 + 19), 21);
    sprintf(buf, " %s ", d_2289_4cfa);
    f_14bc_3e40(d_60ae_d8db, 1.125, -(d_323f_4cb8[team] / 16), d_323f_4cb8[team] % 16, 0, buf);
}

/* Draws a filled box with a drop shadow and a two-tone border. */
void f_14bc_0164(int x1, int y1, int x2, int y2)
{
    f_1bd3_08cb(16);
    f_1bd3_08e1(x1 + 4, y1 + 4, x2 + 1, y2 + 1);
    f_1bd3_08cb(d_60ae_dcd4 + 16);
    f_1bd3_08e1(x1, y1, x2, y2);
    f_1bd3_08d6(17);
    f_1bd3_0fe2(x1, y2, x1, y1);
    f_1bd3_0fe2(x1, y1, x2, y1);
    f_1bd3_08d6(16);
    f_1bd3_0fe2(x2, y1, x2, y2);
    f_1bd3_0fe2(x2, y2, x1, y2);
}

/* Player p's transfer value to team n (-1: none). CM1's f_88c9_12b3, reworked: 60-game
   form window, the player flags d_60ae_ddbe in place of CM1's d_1f3e_5be8 rows, more
   attributes. The float m is declared per block: it sits below the temporaries. */
long f_14bc_020c(int p, int n)
{
    if (p != d_60ae_db24) {
        float m;

        d_60ae_db22 = f_1bd3_1369(d_3c35_0000[5][p], 60);
        d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
        if (d_3c35_0000[5][p] > 0)
            d_60ae_d88f = d_60ae_fae6[1][p] / (float)d_3c35_0000[5][p] * 2.0;
        else
            d_60ae_d88f = 0;
        d_60ae_db20 = f_1bd3_1369(d_3c35_0000[0][p], 60);
        if (d_3c35_0000[0][p] > 0)
            d_60ae_d88b = d_60ae_fae6[0][p] / (float)d_3c35_0000[0][p] * 2.0;
        else
            d_60ae_d88b = 0;
        d_60ae_db1e = (d_471b_0000[0][p] * (60 - d_60ae_db22) * 0.1 + d_60ae_db22 * d_60ae_d88f) / 60.0 * 0.5
                    + (d_471b_0000[0][p] * (60 - d_60ae_db20) * 0.1 + d_60ae_db20 * d_60ae_d88b) / 60.0 * 0.5;
        d_60ae_db1e = f_1bd3_1307(f_1bd3_1369(d_60ae_db1e, 20), 1);
        if (d_60ae_ddbe[p].w.f0) {
            d_60ae_d887 = 1;
            d_60ae_d883 = 1;
            d_60ae_d87f = 1;
        } else {
            d_60ae_d887 = d_60ae_ddbe[p].w.f1 / 10.0 + 0.9 + d_60ae_ddbe[p].w.f2 / 10.0 + d_60ae_ddbe[p].w.f3 / 10.0;
            d_60ae_d883 = d_60ae_ddbe[p].w.f4 / 10.0 + 0.9 + d_60ae_ddbe[p].w.f5 / 10.0 + d_60ae_ddbe[p].w.f6 / 10.0;
            d_60ae_d87f = d_471b_0000[2][p] / 10.0 * 0.0375 + 0.7
                        + d_471b_0000[1][p] / 10.0 * 0.06125
                        + d_471b_0000[3][p] / 10.0 * 0.025
                        + d_471b_0000[5][p] / 10.0 * 0.1
                        + d_471b_0000[6][p] / 10.0 * 0.075
                        + d_471b_0000[7][p] / 10.0 * 0.15
                        + d_471b_0000[8][p] / 5.0 * 0.06;
        }
        d_60ae_d931 = d_60ae_ddbe[p].w.f18 && d_60ae_ddbe[p].w.f19 == 0;
        m = d_227b_0000[d_471b_0000[17][p] - 16];
        d_60ae_d7f3 = d_2278_0000[d_60ae_db1e - 1] * m
                    * d_60ae_d887 * d_60ae_d883 * d_60ae_d87f * 600.0 * (d_60ae_d931 ? 1.25 : 1);
        if (d_60ae_ddbe[p].w.f28 && d_471b_0000[17][p] < 30)
            d_60ae_d7f3 = d_60ae_d7f3 * 1.25;
        if (d_471b_0000[18][p] < 80)
            switch (d_471b_0000[18][p] / 20) {
            case 1:
                d_60ae_d7f3 = d_60ae_d7f3 / 1.5;
                break;
            case 2:
                d_60ae_d7f3 = d_60ae_d7f3 / 2;
                break;
            case 3:
                d_60ae_d7f3 = d_60ae_d7f3 / 3;
                break;
            }
    }
    if (n == -1 || n >= 80)
        d_60ae_d7ef = d_60ae_d7f3 * (d_471b_0000[23][p] == 1 ? 1.5 : 1);
    else {
        if (d_471b_0000[18][p] == n) {
            if (!d_60ae_ddbe[p].w.f8 || d_60ae_ddbe[p].w.f8 && d_60ae_ddbe[p].w.f24) {
                float m;

                m = 1;
                d_60ae_db18 = f_1bd3_1307(d_323f_824a[p] / 100 - d_60ae_dd98, 0);
                m += d_60ae_db18 / 5.0;
                if (d_323f_824a[p] == 0)
                    m += 0.5;
                if (d_471b_0000[23][p] == 1)
                    m += 0.5;
                d_60ae_d7ef = d_60ae_d7f3 * m;
            } else {
                d_60ae_faf2 = f_1bd3_1617(d_60ae_fdec, 0);
                d_60ae_d7ef = d_60ae_faf2[p];
            }
        } else {
            float m;

            m = 1;
            d_60ae_db18 = f_1bd3_1307(d_323f_824a[p] / 100 - d_60ae_dd98, 0);
            m += d_60ae_db18 / 5.0;
            if (d_323f_824a[p] == 0)
                m += 0.5;
            if (d_471b_0000[23][p] == 1)
                m += 0.5;
            d_60ae_d7ef = d_60ae_d7f3 * m;
        }
        if (!d_60ae_ddbe[p].w.f8 && d_471b_0000[17][p] < (d_60ae_ddbe[p].w.f0 ? 31 : 27)) {
            d_60ae_db1c = f_1bd3_1307(10.0 - d_323f_28ba[0][d_323f_47b4[n]] * 0.05, 1);
            d_60ae_db1a = f_1bd3_1307(f_1bd3_1369(d_471b_0000[9][p] * 0.1 + p % d_60ae_db1c - d_60ae_db1c * 0.5, 20), 1);
            d_60ae_d7ef = d_60ae_d7ef * 0.95 + d_2278_0000[d_60ae_db1a - 1] * 50L;
        }
    }
    if (!d_60ae_ddbe[p].w.f8 || f_14bc_2cc0(d_471b_0000[18][p]) == 0)
        d_60ae_d7ef = f_14bc_0d32(d_60ae_d7ef, -1);
    d_60ae_db24 = p;
    return f_1bd3_131c(d_60ae_d7ef, d_60ae_d7ef ? 1000 : 0);
}

void f_14bc_0ac0(int line, char far *s)
{
    d_60ae_dd4c = 9;
    if (line == 4)
        d_60ae_dd4c = 1;
    else if (line == 7)
        d_60ae_dd4c = 6;
    else if (line == 9 || line < 0)
        d_60ae_dd4c = 5;
    if (line < 0)
        line = -line;
    f_14bc_3c75(2.0, line, d_60ae_dd4c, s);
}

void f_14bc_0b30(char far *s)
{
    f_14bc_3c75(2.0, 22.5, 1, s);
    f_1bd3_0dbc(75);
    f_1bd3_0821(4, 175, 316, 190);
}

void f_14bc_0b83(char far *s)
{
    char buf[80];

    f_14bc_4bd3("");
    d_60ae_dd74 = f_1bd3_0b1b(s, "|");
    if (d_60ae_dd74 == 0)
        f_14bc_3c75(-1.0, 12.5, 6, s);
    else {
        strcpy(buf, s);
        buf[d_60ae_dd74 - 1] = 0;
        f_14bc_3c75(-1.0, 11.5, 6, buf);
        strcpy(buf, s + d_60ae_dd74);
        f_14bc_3c75(-1.0, 13.5, 6, buf);
    }
    f_14bc_58db(0);
}

char f_14bc_0c5e(void)
{
    f_14bc_3c75(2.0, 22.5, 5, "Confirm");
    f_14bc_50f8(2, 9.0, 22.5, 6, 2, 0, " Y ");
    f_14bc_50f8(2, 13.0, 22.5, 6, 2, 0, " N ");
    do
        d_60ae_db12 = f_14bc_5635(0);
    while (d_60ae_db12 <= 0);
    f_1bd3_0821(4, 174, 160, 191);
    return d_60ae_db12 == 1 ? -1 : 0;
}

long f_14bc_0d32(long v, char c)
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

long f_14bc_0dd6(long v)
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
    return f_1bd3_131c(v / r * r, v ? 50000L : 0L);
}

char far *f_14bc_0e7a(long amount)
{
    char far *s;

    s = f_1bd3_0efb();
    if (amount)
        sprintf(s, "%ld", amount);
    else
        strcpy(s, "Free");
    return s;
}

void f_14bc_0ecb(int p)
{
    long best, cur, other;

    d_60ae_da56 = p;
    if (!f_14bc_5e32(d_60ae_da56)) {
        d_60ae_dd5a = d_471b_0000[18][d_60ae_da56];
        if (d_60ae_ddbe[d_60ae_da56].w.f7 == 0)
            return;
        d_60ae_ddbe[d_60ae_da56].w.f7 = 0;
    } else {
        d_60ae_dd5a = f_14bc_5e44(d_60ae_da56);
        if (d_2289_a106[d_60ae_dd5a][f_14bc_5e60(d_60ae_da56)] == 0)
            return;
        d_2289_a106[d_60ae_dd5a][f_14bc_5e60(d_60ae_da56)] = 0;
    }
    d_60ae_da52 = d_60ae_da54 = f_14bc_1eb7(d_60ae_da56);
again:
    d_323f_0592[d_60ae_dd5a][d_60ae_da52] = 1859;
    best = -5000;
    d_60ae_da4e = -1;
    d_60ae_da4c = -1;
    for (d_60ae_dd30 = 0; d_60ae_dd30 <= d_323f_4e52[d_60ae_dd5a] - 1; d_60ae_dd30++) {
        d_60ae_da4a = d_471b_b7a8[d_60ae_dd5a][d_60ae_dd30];
        if (d_471b_0000[20][d_60ae_da4a] == 0) {
            d_60ae_dcac = d_323f_0e8a[d_60ae_dd5a][0][d_60ae_da52];
            if (d_60ae_dcac > 1 || (d_60ae_dcac == 1 && d_60ae_ddbe[d_60ae_da4a].w.f0)) {
                cur = f_14bc_1fc3(d_60ae_dcac, d_60ae_da4a, d_323f_2630[d_323f_47b4[d_60ae_dd5a]] / 16);
                cur = cur * d_471b_0000[15][d_60ae_da4a];
                if (cur > best) {
                    if (d_60ae_ddbe[d_60ae_da4a].w.f7) {
                        d_60ae_da54 = f_14bc_1eb7(d_60ae_da4a);
                        if ((d_60ae_da52 < 11 && d_60ae_da54 < 11) || (d_60ae_da52 > 10 && d_60ae_da54 > 10)
                            || (d_60ae_da54 > 10 && d_60ae_da52 < 11)) {
                            other = f_14bc_1fc3(d_323f_0e8a[d_60ae_dd5a][0][d_60ae_da54], d_60ae_da4a,
                                                d_323f_2630[d_323f_47b4[d_60ae_dd5a]] / 16);
                            other = other * d_471b_0000[15][d_60ae_da4a];
                            if (cur > other || (d_60ae_da54 > 10 && d_60ae_da52 < 11)) {
                                best = cur;
                                d_60ae_da4e = d_60ae_da4a;
                                d_60ae_da4c = d_60ae_da54;
                            }
                        }
                    }
                    if (d_60ae_ddbe[d_60ae_da4a].w.f7 == 0) {
                        best = cur;
                        d_60ae_da4e = d_60ae_da4a;
                        d_60ae_da4c = -1;
                    }
                }
            }
        }
    }
    if (d_60ae_da4e == -1) {
        f_14bc_1262(d_60ae_dd5a, d_60ae_da52);
    } else {
        d_60ae_da56 = d_60ae_da4e;
        d_323f_0592[d_60ae_dd5a][d_60ae_da52] = d_60ae_da56;
        d_60ae_ddbe[d_60ae_da56].w.f7 = 1;
        if (d_60ae_da4c > -1) {
            d_60ae_da52 = d_60ae_da4c;
            goto again;
        }
    }
}

void f_14bc_1262(unsigned char team, unsigned char pos)
{
    unsigned char i, want, best;
    register int p, found;

    want = d_323f_0e8a[team][0][pos];
    best = 0;
    for (i = 0; i <= 15; i = i + 1) {
        if (d_2289_a0f6[team][i] == 0 && d_2289_a106[team][i] == 0) {
            p = team * 20 + i + 3000;
            if (f_14bc_5e7d(p, want) > best) {
                best = f_14bc_5e7d(p, want);
                found = p;
            }
        }
    }
    d_323f_0592[team][pos] = found;
    d_2289_a106[team][f_14bc_5e60(found)] = -1;
}

void f_14bc_1365(register int player)
{
    long best, a, b;

    if (d_60ae_ddbe[player].w.f7)
        return;
    d_60ae_dd5a = d_471b_0000[18][player];
again:
    d_60ae_da46 = -1;
    best = -5000;
    d_60ae_dcdc = d_60ae_ddbe[player].w.f0 ? 0 : 1;
    d_60ae_dcda = d_60ae_ddbe[player].w.f0 ? 0 : 12;
loop:
    for (d_60ae_dd92 = d_60ae_dcdc; d_60ae_dd92 <= d_60ae_dcda; d_60ae_dd92++) {
        d_60ae_da5a = d_323f_0592[d_60ae_dd5a][d_60ae_dd92];
        if (!f_14bc_5e32(d_60ae_da5a)) {
            a = f_14bc_1fc3(d_323f_0e8a[d_60ae_dd5a][0][d_60ae_dd92], d_60ae_da5a,
                            d_323f_2630[d_323f_47b4[d_60ae_dd5a]] / 16);
            a = a * d_471b_0000[15][d_60ae_da5a];
        } else
            a = f_14bc_5e7d(d_60ae_da5a, d_323f_0e8a[d_60ae_dd5a][0][d_60ae_dd92]);
        b = f_14bc_1fc3(d_323f_0e8a[d_60ae_dd5a][0][d_60ae_dd92], player,
                        d_323f_2630[d_323f_47b4[d_60ae_dd5a]] / 16);
        b = b * d_471b_0000[15][player];
        if (b > a && b - a > best && (d_60ae_dd92 < 11 || (d_60ae_dd92 > 10 && d_60ae_da46 == -1))) {
            best = b - a;
            d_60ae_da46 = d_60ae_dd92;
        }
    }
    if (d_60ae_ddbe[player].w.f0 && d_60ae_dcdc == 0) {
        d_60ae_dcdc = 13;
        d_60ae_dcda = 13;
        goto loop;
    }
    if (d_60ae_da46 == -1)
        return;
    d_60ae_ddbe[player].w.f7 = 1;
    if (!f_14bc_5e32(d_323f_0592[d_60ae_dd5a][d_60ae_da46]))
        d_60ae_ddbe[d_323f_0592[d_60ae_dd5a][d_60ae_da46]].w.f7 = 0;
    else
        d_2289_a106[d_60ae_dd5a][f_14bc_5e60(d_323f_0592[d_60ae_dd5a][d_60ae_da46])] = 0;
    d_60ae_da42 = d_323f_0592[d_60ae_dd5a][d_60ae_da46];
    d_323f_0592[d_60ae_dd5a][d_60ae_da46] = player;
    if (!f_14bc_5e32(d_60ae_da42)) {
        player = d_60ae_da42;
        if (d_60ae_da46 < 13)
            goto again;
    }
}

void f_14bc_16af(int p)
{
    long cur, best, other;

    d_60ae_da56 = p;
    if (d_471b_0000[23][d_60ae_da56] == 3)
        return;
    d_60ae_dd5a = d_471b_0000[18][d_60ae_da56];
    d_60ae_da52 = d_60ae_da54 = f_14bc_1f29(d_60ae_da56);
    d_60ae_da40 = d_60ae_da3e;
    d_471b_0000[23][d_60ae_da56] = 3;
again:
    d_60ae_da58 = 1859;
    d_471b_c7e8[d_60ae_dd5a][d_60ae_da40][d_60ae_da52] = d_60ae_da58;
    best = -5000;
    d_60ae_da4e = -1;
    for (d_60ae_dd30 = 0; d_60ae_dd30 <= d_323f_4e52[d_60ae_dd5a] - 1; d_60ae_dd30++) {
        d_60ae_da4a = d_471b_b7a8[d_60ae_dd5a][d_60ae_dd30];
        d_60ae_dcac = d_323f_0e8a[d_60ae_dd5a][0][d_60ae_da52];
        if (f_14bc_679d(d_60ae_da4a, d_60ae_dcac)) {
            cur = f_14bc_22f4(d_60ae_da4a, d_60ae_dd5a, d_60ae_dcac, d_60ae_da40 == 1 ? 1 : 0);
            if (cur > best) {
                if ((d_60ae_da40 == 0 && d_471b_0000[23][d_60ae_da4a] < 3)
                    || (d_60ae_da40 == 1 && d_471b_0000[23][d_60ae_da4a] == 2)) {
                    d_60ae_da54 = f_14bc_1f29(d_60ae_da4a);
                    other = f_14bc_22f4(d_60ae_da4a, d_60ae_dd5a, d_323f_0e8a[d_60ae_dd5a][0][d_60ae_da54],
                                        d_60ae_da40 == 1 ? 1 : 0);
                    if (cur > other || (d_60ae_da40 == 0 && d_60ae_da3e == 1)) {
                        best = cur;
                        d_60ae_da4e = d_60ae_da4a;
                        d_60ae_da3c = d_60ae_da54;
                        d_60ae_da3a = d_60ae_da3e;
                    }
                }
            }
            if (cur > best && d_471b_0000[23][d_60ae_da4a] == 3) {
                best = cur;
                d_60ae_da4e = d_60ae_da4a;
                d_60ae_da3c = -1;
                d_60ae_da3a = -1;
            }
        }
    }
    if (d_60ae_da4e > -1 && d_60ae_da4e < 1859) {
        d_60ae_da4a = d_60ae_da4e;
        d_471b_c7e8[d_60ae_dd5a][d_60ae_da40][d_60ae_da52] = d_60ae_da4a;
        d_471b_0000[23][d_60ae_da4a] = d_60ae_da40 + 1;
        if (d_60ae_da3c > -1) {
            d_60ae_da52 = d_60ae_da3c;
            d_60ae_da40 = d_60ae_da3a;
            goto again;
        }
    } else {
        d_60ae_da58 = 1859;
        d_471b_c7e8[d_60ae_dd5a][d_60ae_da40][d_60ae_da52] = d_60ae_da58;
    }
}

void f_14bc_1993(int p)
{
    long best, a, b, c;

    d_60ae_da56 = p;
    if (d_471b_0000[23][d_60ae_da56] == 1)
        return;
    d_60ae_db62 = 0;
    d_60ae_dd5a = d_471b_0000[18][d_60ae_da56];
again:
    d_60ae_da54 = f_14bc_1f29(d_60ae_da56);
    if (d_60ae_da3e > -1) {
        d_60ae_da58 = 1859;
        d_471b_c7e8[d_60ae_dd5a][d_60ae_da3e][d_60ae_da54] = d_60ae_da58;
    }
    d_471b_0000[23][d_60ae_da56] = 3;
    d_60ae_da38 = -1;
    best = -5000;
    if (d_60ae_ddbe[d_60ae_da56].w.f0) {
        d_60ae_dcdc = 0;
        d_60ae_dcda = 0;
    } else {
        d_60ae_dcdc = 1;
        d_60ae_dcda = 10;
    }
    for (d_60ae_dd92 = d_60ae_dcdc; d_60ae_dd92 <= d_60ae_dcda; d_60ae_dd92++) {
        if (f_14bc_679d(d_60ae_da56, d_323f_0e8a[d_60ae_dd5a][0][d_60ae_dd92])) {
            d_60ae_da5a = d_471b_c7e8[d_60ae_dd5a][d_60ae_db62][d_60ae_dd92];
            a = f_14bc_22f4(d_60ae_da5a, d_60ae_dd5a, d_323f_0e8a[d_60ae_dd5a][0][d_60ae_dd92],
                            d_60ae_db62 == 1 ? 1 : 0);
            b = f_14bc_22f4(d_60ae_da56, d_60ae_dd5a, d_323f_0e8a[d_60ae_dd5a][0][d_60ae_dd92],
                            d_60ae_db62 == 1 ? 1 : 0);
            if (b > a && b > best) {
                best = b;
                d_60ae_da38 = d_60ae_dd92;
            }
        }
    }
    if (d_60ae_da38 == -1) {
        if (d_60ae_db62 == 0) {
            d_60ae_db62 = 1;
            goto again;
        }
    } else {
        d_471b_0000[23][d_60ae_da56] = d_60ae_db62 + 1;
        d_471b_0000[23][d_471b_c7e8[d_60ae_dd5a][d_60ae_db62][d_60ae_da38]] = 3;
        d_60ae_da42 = d_471b_c7e8[d_60ae_dd5a][d_60ae_db62][d_60ae_da38];
        d_471b_c7e8[d_60ae_dd5a][d_60ae_db62][d_60ae_da38] = d_60ae_da56;
        d_60ae_da56 = d_60ae_da42;
        if (d_60ae_da56 > -1 && d_60ae_da56 < 1859) {
            d_60ae_db62 = 0;
            goto again;
        }
    }
    for (d_60ae_db62 = 0; d_60ae_db62 <= 1; d_60ae_db62++) {
        for (d_60ae_dd92 = 0; d_60ae_dd92 <= 10; d_60ae_dd92++) {
            if (d_471b_c7e8[d_60ae_dd5a][d_60ae_db62][d_60ae_dd92] == 1859) {
                best = -5000;
                d_60ae_da36 = 1859;
                for (d_60ae_dd30 = 0; d_60ae_dd30 <= d_323f_4e52[d_60ae_dd5a] - 1; d_60ae_dd30++) {
                    d_60ae_da34 = d_471b_b7a8[d_60ae_dd5a][d_60ae_dd30];
                    if (f_14bc_679d(d_60ae_da34, d_323f_0e8a[d_60ae_dd5a][0][d_60ae_dd92])
                        && d_471b_0000[23][d_60ae_da34] == 3) {
                        c = f_14bc_22f4(d_60ae_da34, d_60ae_dd5a, d_323f_0e8a[d_60ae_dd5a][0][d_60ae_dd92],
                                        d_60ae_db62 == 1 ? 1 : 0);
                        if (c > best) {
                            best = c;
                            d_60ae_da36 = d_60ae_da34;
                        }
                    }
                }
                if (d_60ae_da36 < 1859) {
                    d_471b_c7e8[d_60ae_dd5a][d_60ae_db62][d_60ae_dd92] = d_60ae_da36;
                    d_471b_0000[23][d_60ae_da36] = d_60ae_db62 + 1;
                }
            }
        }
    }
}

void f_14bc_1dd7(int p)
{
    unsigned char team;

    if (!f_14bc_5e32(p)) {
        team = d_471b_82c8[p];
        if (d_60ae_ddbe[p].w.f7) {
            d_323f_0592[team][f_14bc_1eb7(p)] = 1859;
            d_60ae_ddbe[p].w.f7 = 0;
        }
    } else {
        team = f_14bc_5e44(p);
        if (d_2289_a106[team][f_14bc_5e60(p)]) {
            d_323f_0592[team][f_14bc_1eb7(p)] = 1859;
            d_2289_a106[team][f_14bc_5e60(p)] = 0;
        }
    }
}

int f_14bc_1eb7(int player)
{
    unsigned char team;

    if (!f_14bc_5e32(player))
        team = d_471b_82c8[player];
    else
        team = f_14bc_5e44(player);
    d_60ae_da54 = -1;
    for (d_60ae_da32 = 0; d_60ae_da32 <= 13; d_60ae_da32++) {
        if (d_323f_0592[team][d_60ae_da32] == player) {
            d_60ae_da54 = d_60ae_da32;
            d_60ae_da32 = 13;
        }
    }
    return d_60ae_da54;
}

int f_14bc_1f29(int player)
{
    d_60ae_da54 = -1;
    d_60ae_da3e = -1;
    for (d_60ae_da32 = 0; d_60ae_da32 <= 10; d_60ae_da32++) {
        if (d_471b_c7e8[d_471b_82c8[player]][0][d_60ae_da32] == player) {
            d_60ae_da54 = d_60ae_da32;
            d_60ae_da3e = 0;
            d_60ae_da32 = 10;
        } else if (d_471b_c7e8[d_471b_82c8[player]][1][d_60ae_da32] == player) {
            d_60ae_da54 = d_60ae_da32;
            d_60ae_da3e = 1;
            d_60ae_da32 = 10;
        }
    }
    return d_60ae_da54;
}

int f_14bc_1fc3(int a, int player, int c)
{
    d_60ae_da30 = d_3c35_0000[16][player] / 16;
    d_60ae_da2e = d_3c35_0000[16][player] % 16;
    if (a != d_60ae_da30 || c != d_60ae_da2e) {
        d_60ae_da2c = 1500;
        if (a == 1 && !d_60ae_ddbe[player].w.f0 || a > 1 && d_60ae_ddbe[player].w.f0)
            d_60ae_da2c -= 1000;
        else {
            if ((a == 2 || a == 5 || a == 8) && !d_60ae_ddbe[player].w.f4
                || (a == 3 || a == 6 || a == 9) && !d_60ae_ddbe[player].w.f5
                || (a == 4 || a == 7 || a == 10) && !d_60ae_ddbe[player].w.f6)
                d_60ae_da2c -= 400;
            if (a >= 2 && a <= 4 && !d_60ae_ddbe[player].w.f1) {
                d_60ae_da2c -= 400;
                if (d_60ae_ddbe[player].w.f3)
                    d_60ae_da2c = -200;
            } else if (a >= 5 && a <= 7 && !d_60ae_ddbe[player].w.f2
                       || a >= 8 && a <= 10 && !d_60ae_ddbe[player].w.f3)
                d_60ae_da2c -= 400;
            else if ((a == 11 || a == 12) && !d_60ae_ddbe[player].w.f1 && !d_60ae_ddbe[player].w.f2
                     || a == 13 && !d_60ae_ddbe[player].w.f2 && !d_60ae_ddbe[player].w.f3)
                d_60ae_da2c -= 150;
        }
        if (a > 1) {
            unsigned char i;
            int sum;
            int weights;
            long l;

            sum = 0;
            weights = 0;
            for (i = 0; i <= 4; i++) {
                sum += d_54d9_06a1[c][a][i] * d_471b_0000[i + 1][player];
                weights += d_54d9_06a1[c][a][i];
            }
            l = sum * 10 / weights;
            d_60ae_da2c += l;
            if (a == 10)
                d_60ae_da2c += d_471b_0000[7][player] * 5;
        }
        d_3c35_0000[16][player] = (a << 4) + c;
        d_323f_653a[player] = d_60ae_da2c;
    } else
        d_60ae_da2c = d_323f_653a[player];
    return d_60ae_da2c = d_60ae_da2c * (d_471b_0000[21][player] / 100.0);
}

long f_14bc_22f4(int player, int team, unsigned char pos, unsigned char second)
{
    long v;

    v = f_14bc_1fc3(pos, player, d_323f_2630[d_323f_47b4[team]] / 16);
    if (second == 0 || d_471b_0000[17][player] >= 27)
        d_60ae_db3c = f_1bd3_1307(d_471b_0000[15][player], d_471b_0000[0][player]) * 0.1;
    else {
        long t;

        t = ((200 - d_323f_28ba[0][d_323f_47b4[team]]) * d_3c35_0000[18][player]
             + d_323f_28ba[0][d_323f_47b4[team]] * d_471b_0000[9][player]) / 200;
        d_60ae_db3c = f_1bd3_1307(d_471b_0000[15][player], d_471b_0000[0][player]) * 0.075 + t * 0.025;
    }
    v *= d_60ae_db3c;
    return v;
}

int f_14bc_2450(unsigned char a)
{
    switch (a) {
    case 1:
        d_60ae_da2a = 1700;
        break;
    default:
        d_60ae_da2a = 1700;
        break;
    case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11:
        d_60ae_da2a = 1700;
        break;
    }
    return d_60ae_da2a;
}

char f_14bc_248a(int w)
{
    switch (w) {
    case 12: case 13: case 14: case 16: case 17: case 18: case 20: case 22: case 24: case 26:
    case 28: case 30: case 32: case 34: case 35: case 36: case 40: case 42: case 46: case 48:
    case 49: case 50: case 54: case 56: case 60: case 62: case 66: case 68: case 72: case 74:
    case 75: case 76: case 80: case 84: case 85: case 87: case 88: case 90:
        return -1;
    }
    return 0;
}

char f_14bc_2545(int w)
{
    switch (w) {
    case 38: case 44: case 52: case 58: case 64: case 70: case 78: case 92:
        return -1;
    }
    return 0;
}

char f_14bc_2594(int w)
{
    if (f_14bc_2545(w))
        return -1;
    if (f_14bc_2b02(w) && !f_14bc_25c5(w))
        return -1;
    return 0;
}

char f_14bc_25c5(int w)
{
    switch (w) {
    case 15: case 19: case 23: case 27: case 31: case 43: case 55: case 63: case 67: case 82:
    case 83:
        return -1;
    }
    return 0;
}

char f_14bc_2620(int w)
{
    switch (w) {
    case 29: case 33: case 37: case 47: case 51: case 57: case 61: case 69: case 73: case 86:
        return -1;
    }
    return 0;
}

char f_14bc_2677(int w)
{
    switch (w) {
    case 21: case 25: case 37: case 41: case 47: case 51: case 69: case 73: case 77: case 81:
    case 89: case 95:
        return -1;
    }
    return 0;
}

char f_14bc_26d6(int w)
{
    switch (w) {
    case 29: case 33: case 47: case 51: case 69: case 73: case 77: case 81: case 91:
        return -1;
    }
    return 0;
}

char f_14bc_2729(int w)
{
    switch (w) {
    case 29: case 33: case 47: case 51: case 57: case 61: case 69: case 73: case 77: case 81:
    case 97:
        return -1;
    }
    return 0;
}

char f_14bc_2784(int w, int n)
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

char f_14bc_2835(int w, int n)
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

char f_14bc_28cc(int w, int n)
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

char f_14bc_295d(int w, int n)
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

char f_14bc_2a01(int w)
{
    switch (w) {
    case 15: case 21: case 23: case 29: case 37: case 47: case 63: case 69: case 77: case 89:
    case 94:
        return -1;
    }
    return 0;
}

char f_14bc_2a5c(int w)
{
    switch (w) {
    case 19: case 25: case 27: case 33: case 41: case 51: case 67: case 73: case 81: case 95:
    case 96:
        return -1;
    }
    return 0;
}

char f_14bc_2ab7(int w, int n)
{
    switch (w) {
    case 10: case 82: case 83: case 86: case 92: case 93: case 98:
        return -1;
    }
    return 0;
}

char f_14bc_2b02(int x)
{
    if (f_14bc_2545(x - 1) || x - 1 == 82)
        return -1;
    return 0;
}

char f_14bc_2b27(int w, int n)
{
    switch (w) {
    case 10: case 78: case 79: case 82: case 83: case 86: case 91: case 92: case 93:
    case 97: case 98:
        return -1;
    }
    return 0;
}

char f_14bc_2b82(int x)
{
    if (x == 94 || x == 96 || x == 98)
        return -1;
    return 0;
}

char f_14bc_2b9f(int w, int n)
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

char f_14bc_2c1d(int x)
{
    if (d_54d9_11fe[0][0][x] != -32)
        return -1;
    return 0;
}

int f_14bc_2c3a(int a, int b)
{
    return exp(fabs(10.5 - (a % 20 + 1)) / 2.0) / 10.0 * 0.005 * exp(b / 10.0) * 35.0;
}

char f_14bc_2cc0(int x)
{
    if (x < 80 && d_323f_47b4[x] >= 0x286 && d_323f_47b4[x] < 0x28a)
        return -1;
    return 0;
}

float f_14bc_2cf4(int x)
{
    if (x <= 79)
        return f_1bd3_1307(f_1bd3_1369(d_323f_4d5c[x] - (x / 20 + f_1bd3_1369(d_323f_4f9a[x], 3) - 2) * 2 - 3
                                       + d_323f_4c14[0][x] / 16.0 - 0.5, 17), 6);
    if (x <= 479)
        return d_54d9_08b4[x] - 3;
    return d_54d9_08b4[x] - 5;
}

int f_14bc_2db8(int x)
{
    return f_1bd3_1307(f_1bd3_1369(d_471b_0000[0][x] / 10.0, 17), 6);
}

char f_14bc_2dfc(int player)
{
    if (f_14bc_6f7c(player))
        return -1;
    if (d_323f_4e52[d_471b_0000[18][player]] < 17)
        return -1;
    if (d_60ae_ddbe[player].w.f0 && d_323f_4f48[0][d_471b_0000[18][player]] < 2)
        return -1;
    return 0;
}

char f_14bc_2e5e(int player)
{
    unsigned char team;
    unsigned char pos;
    unsigned char keepers;
    unsigned char others;
    unsigned char i;

    team = f_14bc_5e44(player);
    pos = f_14bc_5e60(player);
    keepers = 0;
    others = 0;
    for (i = 0; i <= 15; i++)
        if (d_2289_a0f6[team][i] == 0) {
            if (d_2289_a0c6[team][0][i] == 1)
                keepers++;
            else
                others++;
        }
    if (d_2289_a0c6[team][0][pos] > 1 && others < 13)
        return -1;
    if (d_2289_a0c6[team][0][pos] == 1 && keepers < 2)
        return -1;
    return 0;
}

char far *f_14bc_2f2c(int x, char c)
{
    char far *s;

    s = f_1bd3_0efb();
    if (x <= 12)
        sprintf(s, "%02d", x);
    else if (x == 13)
        strcpy(s, "14");
    else
        strcpy(s, c == 0 ? "15" : "GK");
    return s;
}

void f_14bc_2f90(int n, char far *title, char far *items)
{
    char buf[320];
    int k;

    memset(d_2289_5644, 0, 20);
    d_60ae_d9f8 = -1;
    if (strlen(title) > 1)
        f_14bc_4bd3(title);
    d_60ae_d9f6 = n > 0 ? n - 5 : 0;
    strcpy(d_2289_5308, items);
    d_60ae_dd1e = 0;
    for (d_60ae_dd48 = 1; d_60ae_dd48 <= strlen(items); d_60ae_dd48++)
        if (items[d_60ae_dd48 - 1] == '|')
            d_60ae_dd1e++;
    d_60ae_dd1e--;
    d_60ae_d9f4 = 0;
    while (d_2289_5308[0]) {
        k = f_1bd3_0b1b(d_2289_5308, "|") - 1;
        strncpy(buf, d_2289_5308, k);
        buf[k] = 0;
        if (buf[0] == '*') {
            strcpy(buf, buf + 1);
            d_60ae_d905 = -1;
        } else
            d_60ae_d905 = 0;
        if (buf[0] == '$') {
            strcpy(buf, buf + 1);
            d_60ae_dd6e = 110;
        } else
            d_60ae_dd6e = 30;
        sprintf(d_2289_4cfa, " %-17s", buf);
        strcpy(d_2289_5308, &d_2289_5308[k + 1]);
        if ((d_60ae_dd1e + 1) / 2 > d_60ae_d9f4) {
            d_60ae_dd74 = 1;
            d_60ae_d8eb = d_60ae_d9f4 * 2.5 + d_60ae_d9f6 + 5.0;
        } else {
            if (d_60ae_d9f4 == d_60ae_dd1e && !(d_60ae_dd1e & 1))
                d_60ae_dd74 = 11;
            else
                d_60ae_dd74 = 21;
            d_60ae_d8eb = (d_60ae_d9f4 - (d_60ae_dd1e + 1) / 2) * 2.5 + d_60ae_d9f6 + 5.0;
        }
        d_2289_ea78[d_60ae_d9f4] = d_60ae_dd74;
        d_2289_eac8[d_60ae_d9f4] = d_60ae_d8eb;
        strcpy(d_2289_0848[d_60ae_d9f4], d_2289_4cfa);
        f_1bd3_08cb(16);
        f_1bd3_08e1(d_60ae_dd74 * 8 + 6, d_60ae_d8eb * 8.0 - 2.0,
                    (d_60ae_dd74 + strlen(d_2289_4cfa)) * 8 + 3, d_60ae_d8eb * 8.0 + 13.0);
        if (d_60ae_d905) {
            d_2289_eb18[d_60ae_d9f4] = 24.0;
            f_14bc_32d7(1, 8, d_60ae_d9f4);
        } else {
            d_2289_eb18[d_60ae_d9f4] = d_60ae_dd6e;
            f_14bc_32d7(d_60ae_dd6e / 16, d_60ae_dd6e % 16, d_60ae_d9f4);
        }
        d_60ae_d9f4++;
    }
    if (strlen(title) > 1)
        f_14bc_3334(d_60ae_d9f4 - 1);
}

void f_14bc_32d7(int a, int b, int line)
{
    f_14bc_3e40(d_2289_ea78[line], -d_2289_eac8[line], a, b, 0, d_2289_0848[line]);
}

void f_14bc_3334(int last)
{
    if (d_60ae_d9f8 > -1 && last > -1)
        f_14bc_32d7(d_2289_eb18[d_60ae_d9f8] / 16.0, (int)d_2289_eb18[d_60ae_d9f8] % 16, d_60ae_d9f8);
    f_14bc_5a4d();
    d_60ae_d8ef = f_1bd3_0df6();
    f_1bd3_03a2(0);
    do {
        d_60ae_dda0 = -1;
        if (f_1bd3_0c16() > 0)
            for (d_60ae_d9f2 = 0; d_60ae_d9f2 <= abs(last); d_60ae_d9f2++) {
                d_60ae_dd74 = d_2289_ea78[d_60ae_d9f2];
                d_60ae_d8eb = d_2289_eac8[d_60ae_d9f2];
                if (d_2289_5644[d_60ae_d9f2] == 0 && f_1bd3_0c0e() >= d_60ae_dd74 * 8 - 2 &&
                    f_1bd3_0c0e() <= (d_60ae_dd74 + 17) * 8 + 10 &&
                    f_1bd3_0c06() >= d_60ae_d8eb * 8.0 + 15.0 - 20.0 &&
                    f_1bd3_0c06() <= d_60ae_d8eb * 8.0 + 31.0 - 20.0)
                    d_60ae_dda0 = d_60ae_d9f2;
            }
    } while (d_60ae_dda0 <= -1);
    f_1bd3_03a2(1);
    if (last > -1 || d_2289_0848[d_60ae_dda0][0] == '*') {
        f_14bc_32d7(1, 12, d_60ae_dda0);
        d_60ae_d9f8 = d_60ae_dda0;
    }
}

static void f_14bc_350e(int i)
{
    d_2289_5644[i] = -1;
}

char far *f_14bc_3523(int x)
{
    char far *p;

    p = f_1bd3_0efb();
    if (x < 80)
        strcpy(p, d_60ae_b572[x]);
    else
        strcpy(p, d_60ae_b61a[x]);
    return p;
}

void f_14bc_356a(int x, int y, int colour, char far *s)
{
    if (*s) {
        if (x == -1)
            x = 160 - strlen(s) * 3;
        d_2287_001b = x - 8;
        d_2287_0019 = abs(y) + 1;
        f_1bd3_0b10(0);
        if (d_60ae_dbbe)
            f_1bd3_099d(0);
        if (colour > 0 && y > 0) {
            f_1bd3_08d6(16);
            f_1bd3_09e9(x - 9, y, f_1bd3_0e5e(s));
        }
        f_1bd3_08d6(colour + 16);
        f_1bd3_09e9(x - 8, abs(y) + 1, f_1bd3_0e5e(s));
        f_1bd3_0b10(1);
        if (d_60ae_d97d)
            f_14bc_5fc1(d_2287_001b, d_2287_0019 - 7, s);
    }
}

void f_14bc_3672(float x, float y, int bg, int fg, int w, char far *s)
{
    if (*s || w > 0) {
        if (w > 0)
            d_60ae_d9c4 = w;
        else
            d_60ae_d9c4 = strlen(s) * 6;
        if (x == -1)
            x = (160.0 - d_60ae_d9c4 / 2.0) / 8.0;
        f_1bd3_08cb(fg + 16);
        f_1bd3_08e1(x * 8.0 - 1, fabs(y) * 8.0 - 6.0, d_60ae_d9c4 + (x * 8.0 - 1), fabs(y) * 8.0);
        if (*s) {
            d_2287_001b = x * 8.0;
            d_2287_0019 = fabs(y) * 8.0 + 1;
            f_1bd3_0b10(0);
            if (d_60ae_dbbe)
                f_1bd3_099d(0);
            if (y < 0) {
                f_1bd3_08d6(16);
                f_1bd3_09e9(x * 8.0 - 1, fabs(y) * 8.0, f_1bd3_0e5e(s));
            }
            f_1bd3_08d6(abs(bg) + 16);
            f_1bd3_09e9(d_2287_001b, d_2287_0019, f_1bd3_0e5e(s));
            f_1bd3_0b10(1);
            if (d_60ae_d97d)
                f_14bc_5fc1(d_2287_001b, d_2287_0019 - 7, s);
        }
    }
}

void f_14bc_38bc(float x, float y, int colour, char far *s)
{
    if (*s) {
        if (x == -1)
            x = 21.0 - strlen(s) / 2.0;
        d_2287_001b = x * 8.0 - 8.0;
        d_2287_0019 = fabs(y) * 8.0 - 1;
        f_1bd3_0b10(0);
        if (d_60ae_dbbe != 1)
            f_1bd3_099d(1);
        if (colour > 0 && y > 0) {
            f_1bd3_08d6(16);
            f_1bd3_09e9(x * 8.0 - 9.0, y * 8.0 - 1, s);
        }
        f_1bd3_08d6(colour + 16);
        f_1bd3_09e9(d_2287_001b, d_2287_0019, s);
        f_1bd3_0b10(1);
        if (d_60ae_d97d)
            f_14bc_5fc1(d_2287_001b, d_2287_0019 - 7, s);
    }
}

void f_14bc_3a36(float x, float y, int bg, int fg, int w, char far *s)
{
    if (*s || w > 0) {
        if (w > 0)
            d_60ae_d9c4 = w;
        else
            d_60ae_d9c4 = strlen(s) * 8;
        if (x == -1)
            x = (160.0 - d_60ae_d9c4 / 2.0) / 8.0;
        f_1bd3_08cb(fg + 16);
        f_1bd3_08e1(x * 8.0 - 2.0, fabs(y) * 8.0 - 8.0, d_60ae_d9c4 + x * 8.0 + 1, fabs(y) * 8.0);
        if (*s) {
            d_2287_001b = x * 8.0;
            d_2287_0019 = fabs(y) * 8.0 - 1;
            f_1bd3_0b10(0);
            if (d_60ae_dbbe != 1)
                f_1bd3_099d(1);
            if (y < 0) {
                f_1bd3_08d6(16);
                f_1bd3_09e9(x * 8.0 - 1, fabs(y) * 8.0 - 1, s);
            }
            f_1bd3_08d6(abs(bg) + 16);
            f_1bd3_09e9(d_2287_001b, d_2287_0019, s);
            f_1bd3_0b10(1);
            if (d_60ae_d97d)
                f_14bc_5fc1(d_2287_001b, d_2287_0019 - 7, s);
        }
    }
}

void f_14bc_3c75(float x, float y, int colour, char far *s)
{
    if (*s) {
        if (x == -1)
            x = 21.0 - strlen(s) / 2.0;
        d_2287_001b = x * 8.0 - 8.0;
        d_2287_0019 = fabs(y) * 8.0 + 10.0;
        f_1bd3_0b10(0);
        if (d_60ae_dbbe != 2)
            f_1bd3_099d(2);
        if (colour > 0 && y > 0) {
            f_1bd3_08d6(16);
            f_1bd3_09e9(x * 8.0 - 8.0 - 2.0, y * 8.0 + 10.0 - 1, s);
            f_1bd3_09e9(x * 8.0 - 8.0 - 1, y * 8.0 + 10.0 - 1, s);
        }
        f_1bd3_08d6(colour + 16);
        f_1bd3_09e9(d_2287_001b, d_2287_0019, s);
        f_1bd3_0b10(1);
        if (d_60ae_d97d)
            f_14bc_5fc1(d_2287_001b, d_2287_0019 - 15, s);
    }
}

void f_14bc_3e40(float x, float y, int bg, int fg, int w, char far *s)
{
    if (*s || w > 0) {
        if (w > 0)
            d_60ae_d9c4 = w;
        else
            d_60ae_d9c4 = strlen(s) * 8;
        if (x == -1)
            x = (160.0 - d_60ae_d9c4 / 2.0) / 8.0;
        f_1bd3_08cb(fg + 16);
        f_1bd3_08e1(x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0, d_60ae_d9c4 + x * 8.0 + 2.0, fabs(y) * 8.0 + 11.0);
        f_1bd3_08d6(d_2287_0000[fg] + 16);
        f_1bd3_0fe2(x * 8.0 - 2.0, fabs(y) * 8.0 + 11.0, x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0);
        f_1bd3_0fe2(x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0, d_60ae_d9c4 + x * 8.0 + 2.0, fabs(y) * 8.0 - 5.0);
        f_1bd3_08d6(16);
        f_1bd3_0fe2(d_60ae_d9c4 + x * 8.0 + 2.0, fabs(y) * 8.0 - 5.0, d_60ae_d9c4 + x * 8.0 + 2.0, fabs(y) * 8.0 + 11.0);
        f_1bd3_0fe2(d_60ae_d9c4 + x * 8.0 + 2.0, fabs(y) * 8.0 + 11.0, x * 8.0 - 2.0, fabs(y) * 8.0 + 11.0);
        if (*s) {
            d_2287_001b = x * 8.0;
            d_2287_0019 = fabs(y) * 8.0 + 10.0;
            f_1bd3_0b10(0);
            if (d_60ae_dbbe != 2)
                f_1bd3_099d(2);
            if (y < 0) {
                f_1bd3_08d6(16);
                f_1bd3_09e9(x * 8.0 - 1, fabs(y) * 8.0 + 9.0, s);
            }
            f_1bd3_08d6(abs(bg) + 16);
            f_1bd3_09e9(d_2287_001b, d_2287_0019, s);
            f_1bd3_0b10(1);
            if (d_60ae_d97d)
                f_14bc_5fc1(d_2287_001b, d_2287_0019 - 15, s);
        }
    }
}

static void f_14bc_42c1(float x, float y, int bg, int fg, int w, int len, char far *s)
{
    if (*s || w > 0) {
        if (w > 0)
            d_60ae_d9c4 = w;
        else
            d_60ae_d9c4 = strlen(s) * 8;
        if (x == -1)
            x = (160.0 - d_60ae_d9c4 / 2.0) / 8.0;
        f_1bd3_08cb(fg + 16);
        f_1bd3_08e1(x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0, len + x * 8.0 + 1, fabs(y) * 8.0 + 10.0);
        if (*s) {
            d_2287_001b = x * 8.0;
            d_2287_0019 = fabs(y) * 8.0 + 10.0;
            f_1bd3_0b10(0);
            if (d_60ae_dbbe != 2)
                f_1bd3_099d(2);
            if (y < 0) {
                f_1bd3_08d6(16);
                f_1bd3_09e9(x * 8.0 - 1, fabs(y) * 8.0 + 9.0, s);
            }
            f_1bd3_08d6(abs(bg) + 16);
            f_1bd3_09e9(d_2287_001b, d_2287_0019, s);
            f_1bd3_0b10(1);
            if (d_60ae_d97d)
                f_14bc_5fc1(d_2287_001b, d_2287_0019 - 15, s);
        }
    }
}

static void f_14bc_4503(float x, float y, int team)
{
    char buf[160];

    sprintf(buf, " %s ", f_1bd3_0e5e(d_60ae_b572[team]));
    f_14bc_3a36(x, y, -(d_323f_4cb8[team] / 16), d_323f_4cb8[team] % 16, 0, buf);
}

void f_14bc_4587(float x, float y, int team)
{
    char buf[160];

    sprintf(buf, " %s ", (char far *)d_60ae_b572[team]);
    f_14bc_3e40(x, y, -(d_323f_4cb8[team] / 16), d_323f_4cb8[team] % 16, 0, buf);
}

char far *f_14bc_4602(int n, char far *s)
{
    char far *buf;
    char tmp[320];

    buf = f_1bd3_0efb();
    if (strlen(s) > n - 1) {
        sprintf(tmp, "%.*s", n - 1, s);
        sprintf(buf, " %s", tmp);
    } else
        sprintf(buf, " %-*s", n - 1, s);
    return buf;
}

int f_14bc_468c(int team)
{
    d_60ae_daea = 80;
    for (d_60ae_dd64 = 0; d_60ae_dd64 <= 79; d_60ae_dd64++) {
        if (d_2289_fb10[0][d_60ae_dd64] == team) {
            d_60ae_daea = d_60ae_dd64;
            d_60ae_dd64 = 79;
        }
    }
    return d_60ae_daea;
}

int f_14bc_46ce(int team)
{
    switch (team / 20) {
    case 0:
        d_60ae_db90 = 22;
        break;
    case 1:
    case 2:
    case 3:
        d_60ae_db90 = 21;
    }
    return d_60ae_db90;
}

char far *f_14bc_4703(int player)
{
    char far *buf;
    unsigned char a, b;

    buf = f_1bd3_0efb();
    if (f_14bc_5e18(player) || f_14bc_6f7c(player)) {
        sprintf(buf, "%s %s", d_59f5_0000[d_323f_73c2[player]], d_59f5_0fc0[d_323f_90d2[player]]);
    } else if (f_14bc_5e32(player)) {
        a = f_14bc_5e44(player);
        b = f_14bc_5e60(player);
        d_60ae_face = f_1bd3_1617(d_60ae_fdda, 0);
        sprintf(buf, "%s %s", d_59f5_0000[d_60ae_face[a][0][b]], d_59f5_0fc0[d_60ae_face[a][1][b]]);
    } else
        strcpy(buf, "");
    return buf;
}

char far *f_14bc_483d(int player)
{
    char c;
    char far *buf;

    buf = f_1bd3_0efb();
    c = f_1bd3_0b1b(f_14bc_4703(player), " ");
    if (c != 0)
        sprintf(buf, "%c.", *f_14bc_4703(player));
    strcat(buf, f_14bc_48b4(player));
    return buf;
}

char far *f_14bc_48b4(int player)
{
    char far *buf;
    char tmp[40];

    buf = f_1bd3_0efb();
    strcpy(tmp, f_14bc_4703(player));
    strcpy(buf, tmp + f_1bd3_0b1b(tmp, " "));
    return buf;
}

char far *f_14bc_490d(int manager, char full)
{
    char far *buf;
    char tmp[80];

    buf = f_1bd3_0efb();
    if (manager < 646) {
        d_60ae_fae2 = f_1bd3_1617(d_60ae_fde4, 0);
        strcpy(tmp, d_59f5_0000[d_60ae_fae2[0][manager]]);
        strcpy(d_2289_3872, d_59f5_0fc0[d_60ae_fae2[1][manager]]);
    } else {
        strcpy(tmp, d_2289_4b06[0][manager - 646]);
        strcpy(d_2289_3872, d_2289_4b06[1][manager - 646]);
    }
    if (!full)
        sprintf(buf, "%s %s", tmp, d_2289_3872);
    else
        strcpy(buf, d_2289_3872);
    return buf;
}

/* numbers in words, for 4a14 (players 1-15): its strings sit in the pool where the table is
 * defined, between 490d's and 4a14's literals */
char far *d_60ae_01e6[15] = {
    "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
    "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen"
};

char far *f_14bc_4a14(int player)
{
    char far *buf;

    buf = f_1bd3_0efb();
    strcpy(buf, "");
    if (player >= 1 && player <= 15)
        strcpy(buf, d_60ae_01e6[player - 1]);
    else
        sprintf(buf, "%d", player);
    return buf;
}

char far *f_14bc_4a83(int division)
{
    char far *buf;

    buf = f_1bd3_0efb();
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

/* f_14bc_4b12: a division's name, by length (full 0-3). In C it is
 *
 *     buf = f_1bd3_0efb();
 *     if (division == 1) {
 *         if (full == 0) sprintf(buf, "%s", "FA Premier");
 *         else if (full == 1 || full == 2) sprintf(buf, "%s", "PREM");
 *         else if (full == 3) sprintf(buf, "%s", "PRM");
 *     } else if (full == 0) sprintf(buf, "Division %d", division - 1);
 *     else if (full == 1) sprintf(buf, "DIV%d", division - 1);
 *     else if (full == 2) sprintf(buf, "D%d", division - 1);
 *     else if (full == 3) sprintf(buf, "%s", f_14bc_4a83(division - 1));
 *     return buf;
 *
 * which BCC compiles to these instructions, except that it merges the three
 * `sprintf(buf, fmt, division - 1)` tails into the "Division %d" branch, where the
 * original keeps them in the "D%d" one (and the "Division"/"DIV" branches jump into it).
 * No way of writing it made BCC do that (else-if chains, nested blocks, switches, early
 * returns, `0;`/goto at every point), so the body is given byte for byte, as 7EEB.C's
 * f_7eeb_1afc in CM1, except that BCC 3.0 writes broken fixups for addresses in
 * __emit__: the string loads are `_AX =` assignments and the far calls C calls. Its
 * literals are one string in their place in the pool (the first reference, at 4b33, is
 * "FA Premier" = 03e9 + 3); the other references name their addresses. */
char far *f_14bc_4b12(int division, char full)
{
    char far *buf;

    _SI = division;
    buf = f_1bd3_0efb();
    /* 4b27 */ __emit__((char)0x83, (char)0xfe, 0x01);            /* cmp [si, 0x1] */
    /* 4b2a */ __emit__(0x75, 0x39);                              /* jne [] ->4b65 */
    /* 4b2c */ __emit__((char)0x80, 0x7e, 0x08, 0x00);            /* cmp [b[bp+0x8], 0x0] */
    /* 4b30 */ __emit__(0x75, 0x0b);                              /* jne [] ->4b3d */
    /* 4b32 */ __emit__(0x1e);                                    /* push [ds] */
    /* 4b33 */ _AX = (unsigned)((char near *)"%s\0FA Premier\0%s\0PREM\0%s\0PRM\0Division %d\0DIV%d\0D%d\0%s" + 3);
    /* 4b36 */ __emit__(0x50);                                    /* push [ax] */
    /* 4b37 */ __emit__(0x1e);                                    /* push [ds] */
    /* 4b38 */ _AX = (unsigned)d_60ae_03e9;
    /* 4b3b */ __emit__((char)0xeb, 0x7c);                        /* jmp [] ->4bb9 */
    /* 4b3d */ __emit__((char)0x80, 0x7e, 0x08, 0x01);            /* cmp [b[bp+0x8], 0x1] */
    /* 4b41 */ __emit__(0x74, 0x06);                              /* je [] ->4b49 */
    /* 4b43 */ __emit__((char)0x80, 0x7e, 0x08, 0x02);            /* cmp [b[bp+0x8], 0x2] */
    /* 4b47 */ __emit__(0x75, 0x0b);                              /* jne [] ->4b54 */
    /* 4b49 */ __emit__(0x1e);                                    /* push [ds] */
    /* 4b4a */ _AX = (unsigned)d_60ae_03fa;
    /* 4b4d */ __emit__(0x50);                                    /* push [ax] */
    /* 4b4e */ __emit__(0x1e);                                    /* push [ds] */
    /* 4b4f */ _AX = (unsigned)d_60ae_03f7;
    /* 4b52 */ __emit__((char)0xeb, 0x65);                        /* jmp [] ->4bb9 */
    /* 4b54 */ __emit__((char)0x80, 0x7e, 0x08, 0x03);            /* cmp [b[bp+0x8], 0x3] */
    /* 4b58 */ __emit__(0x75, 0x6e);                              /* jne [] ->4bc8 */
    /* 4b5a */ __emit__(0x1e);                                    /* push [ds] */
    /* 4b5b */ _AX = (unsigned)d_60ae_0402;
    /* 4b5e */ __emit__(0x50);                                    /* push [ax] */
    /* 4b5f */ __emit__(0x1e);                                    /* push [ds] */
    /* 4b60 */ _AX = (unsigned)d_60ae_03ff;
    /* 4b63 */ __emit__((char)0xeb, 0x54);                        /* jmp [] ->4bb9 */
    /* 4b65 */ __emit__((char)0x80, 0x7e, 0x08, 0x00);            /* cmp [b[bp+0x8], 0x0] */
    /* 4b69 */ __emit__(0x75, 0x0a);                              /* jne [] ->4b75 */
    /* 4b6b */ __emit__((char)0x8b, (char)0xc6);                  /* mov [ax, si] */
    /* 4b6d */ __emit__(0x48);                                    /* dec [ax] */
    /* 4b6e */ __emit__(0x50);                                    /* push [ax] */
    /* 4b6f */ __emit__(0x1e);                                    /* push [ds] */
    /* 4b70 */ _AX = (unsigned)d_60ae_0406;
    /* 4b73 */ __emit__((char)0xeb, 0x1e);                        /* jmp [] ->4b93 */
    /* 4b75 */ __emit__((char)0x80, 0x7e, 0x08, 0x01);            /* cmp [b[bp+0x8], 0x1] */
    /* 4b79 */ __emit__(0x75, 0x0a);                              /* jne [] ->4b85 */
    /* 4b7b */ __emit__((char)0x8b, (char)0xc6);                  /* mov [ax, si] */
    /* 4b7d */ __emit__(0x48);                                    /* dec [ax] */
    /* 4b7e */ __emit__(0x50);                                    /* push [ax] */
    /* 4b7f */ __emit__(0x1e);                                    /* push [ds] */
    /* 4b80 */ _AX = (unsigned)d_60ae_0412;
    /* 4b83 */ __emit__((char)0xeb, 0x0e);                        /* jmp [] ->4b93 */
    /* 4b85 */ __emit__((char)0x80, 0x7e, 0x08, 0x02);            /* cmp [b[bp+0x8], 0x2] */
    /* 4b89 */ __emit__(0x75, 0x19);                              /* jne [] ->4ba4 */
    /* 4b8b */ __emit__((char)0x8b, (char)0xc6);                  /* mov [ax, si] */
    /* 4b8d */ __emit__(0x48);                                    /* dec [ax] */
    /* 4b8e */ __emit__(0x50);                                    /* push [ax] */
    /* 4b8f */ __emit__(0x1e);                                    /* push [ds] */
    /* 4b90 */ _AX = (unsigned)d_60ae_0418;
    /* 4b93 */ __emit__(0x50);                                    /* push [ax] */
    /* 4b94 */ __emit__((char)0xff, 0x76, (char)0xfe);            /* push [w[bp+0xfffe]] */
    /* 4b97 */ __emit__((char)0xff, 0x76, (char)0xfc);            /* push [w[bp+0xfffc]] */
    /* 4b9a */ ((void (far *)(void))sprintf)();             /* callf sprintf */
    /* 4b9f */ __emit__((char)0x83, (char)0xc4, 0x0a);            /* add [sp, 0xa] */
    /* 4ba2 */ __emit__((char)0xeb, 0x24);                        /* jmp [] ->4bc8 */
    /* 4ba4 */ __emit__((char)0x80, 0x7e, 0x08, 0x03);            /* cmp [b[bp+0x8], 0x3] */
    /* 4ba8 */ __emit__(0x75, 0x1e);                              /* jne [] ->4bc8 */
    /* 4baa */ __emit__((char)0x8b, (char)0xc6);                  /* mov [ax, si] */
    /* 4bac */ __emit__(0x48);                                    /* dec [ax] */
    /* 4bad */ __emit__(0x50);                                    /* push [ax] */
    /* 4bae */ __emit__(0x0e);                                    /* push [cs] */
    /* 4baf */ __emit__((char)0xe8, (char)0xd1, (char)0xfe);      /* call [] ->4a83 */
    /* 4bb2 */ __emit__(0x59);                                    /* pop [cx] */
    /* 4bb3 */ __emit__(0x52);                                    /* push [dx] */
    /* 4bb4 */ __emit__(0x50);                                    /* push [ax] */
    /* 4bb5 */ __emit__(0x1e);                                    /* push [ds] */
    /* 4bb6 */ _AX = (unsigned)d_60ae_041c;
    /* 4bb9 */ __emit__(0x50);                                    /* push [ax] */
    /* 4bba */ __emit__((char)0xff, 0x76, (char)0xfe);            /* push [w[bp+0xfffe]] */
    /* 4bbd */ __emit__((char)0xff, 0x76, (char)0xfc);            /* push [w[bp+0xfffc]] */
    /* 4bc0 */ ((void (far *)(void))sprintf)();             /* callf sprintf */
    /* 4bc5 */ __emit__((char)0x83, (char)0xc4, 0x0c);            /* add [sp, 0xc] */
    return buf;
}

void f_14bc_4bd3(char far *title)
{
    char t[160];
    char t2[320];

    strcpy(t, title);
    f_14bc_5053();
    f_1bd3_034d();
    f_14bc_5f79();
    f_1bd3_08d6(17);
    f_1bd3_0928(0, 0, 0x13f, 0xc7);
    if (t[0] != 0) {
        d_60ae_d8e3 = 19.0 - strlen(t) / 2.0;
        f_1bd3_08cb(16);
        f_1bd3_08e1(d_60ae_d8e3 * 8.0 + 6.0, 6, (strlen(t) + d_60ae_d8e3) * 8.0 + 19.0, 20);
        sprintf(t2, " %s ", t);
        f_14bc_3e40(d_60ae_d8e3, -1.0, 1, 4, 0, t2);
    }
    if (strstr(title, "'93"))
        f_14bc_3672(34.375, 24.625, 0, 1, 42, " v1.10");
    d_60ae_d930 = -1;
}

void f_14bc_4d4c(float x, int w, char far *prompt)
{
    f_14bc_3c75(x, 21.0, 5, prompt);
    f_14bc_4de1(x + 1 + strlen(prompt), 21.0, 9, w);
    f_1bd3_0821(4, 0xa3, 0x13c, 0xb2);
}

void f_14bc_4de1(int x, float y, int colour, int maxlen)
{
    register int c;

    f_1bd3_03a2(0);
    f_1bd3_1a32();
    f_14bc_5a4d();
    strcpy(d_2289_4ae8, "");
    do {
        d_60ae_d8ef = f_1bd3_0df6();
        do {
            strcpy(d_2289_3912, f_1bd3_0cec());
            if (f_1bd3_0c16() == 0)
                d_60ae_d8ef = f_1bd3_0df6();
            else if (f_1bd3_0df6() - d_60ae_d8ef > 300)
                strcpy(d_2289_3912, f_1bd3_0157(13));
        } while (!(d_2289_3912[0] == 0x7f || d_2289_3912[0] == 13 || d_2289_3912[0] == 8
                   || d_2289_3912[0] == '.' || d_2289_3912[0] == ' ' || d_2289_3912[0] == '\''
                   || (d_2289_3912[0] >= '0' && d_2289_3912[0] <= '9')
                   || (d_2289_3912[0] >= 'A' && d_2289_3912[0] <= 'Z')
                   || (d_2289_3912[0] >= 'a' && d_2289_3912[0] <= 'z')));
        c = d_2289_3912[0];
        if ((c == 0x7f || c == 8) && d_2289_4ae8 != "") {
            d_2289_4ae8[strlen(d_2289_4ae8) - 1] = 0;
            f_1bd3_0821(x * 8 - 10, y * 8.0 - 5.0, (x + maxlen - 1) * 8 - 1, y * 8.0 + 10.0);
            f_14bc_3c75(x, y, colour, d_2289_4ae8);
        } else if (strlen(d_2289_4ae8) < maxlen && c != 13 && c != 0x7f && c != 8) {
            strcat(d_2289_4ae8, d_2289_3912);
            f_1bd3_0821(x * 8 - 10, y * 8.0 - 5.0, (x + maxlen - 1) * 8 - 1, y * 8.0 + 10.0);
            f_14bc_3c75(x, y, colour, d_2289_4ae8);
        }
    } while (c != 13 && maxlen != 1);
    f_1bd3_1a4c();
    f_1bd3_03a2(1);
}

void f_14bc_5053(void)
{
    unsigned i, j;

    memset(d_471b_ae8c, 0, 400);
    memset(d_2289_5540, 0, 100);
    for (i = 0; i < 7; i++)
        for (j = 0; j < 100; j++)
            d_2289_df10[i][j] = 0;
    for (d_60ae_dc90 = 0; d_60ae_dc90 <= 99; d_60ae_dc90++)
        strcpy(d_2289_0e88[d_60ae_dc90], "");
    d_60ae_d9c2 = 0;
    d_60ae_dd56 = 0;
}

void f_14bc_50f8(int a, float x, float y, int c, int d, int e, char far *s)
{
    int o7b, o6b, o19;
    float ox, oy;

    o7b = d_60ae_dd6e;
    o6b = d_60ae_dd5e;
    ox = d_60ae_d8e3;
    oy = d_60ae_d8eb;
    o19 = d_60ae_dd0e;
    d_60ae_dd6e = c;
    d_60ae_dd5e = d;
    d_60ae_dd0e = a;
    d_60ae_d8e3 = x;
    d_60ae_d8eb = y;
    strcpy(d_2289_4598, s);
    if (d_60ae_d8e3 == -1) {
        if (d_60ae_dd0e > 0)
            d_60ae_d8e3 = 20.0 - strlen(d_2289_4598) / 2.0;
        else
            d_60ae_d8e3 = (160 - strlen(d_2289_4598) * 3) / 8.0;
    }
    strcpy(d_2289_0e88[d_60ae_d9c2], d_2289_4598);
    d_471b_ae8c[0][d_60ae_d9c2] = (d_60ae_dd6e << 4) + d_60ae_dd5e;
    d_471b_aef0[d_60ae_d9c2] = d_60ae_dd0e;
    d_2289_df10[0][d_60ae_d9c2] = d_60ae_d8e3;
    d_2289_df10[1][d_60ae_d9c2] = d_60ae_d8eb;
    if (e > 0)
        d_60ae_d9c4 = e;
    else
        d_60ae_d9c4 = strlen(d_2289_4598) * (8 - (d_60ae_dd0e == 0 ? 2 : 0));
    if (d_60ae_dd0e == 0) {
        d_60ae_d8d3 = d_60ae_d8e3 * 8.0 - 1;
        d_60ae_d8df = d_60ae_d8eb * 8.0 - 6.0;
        d_60ae_d853 = d_60ae_d9c4 + d_60ae_d8e3 * 8.0 - 1;
        d_60ae_d84b = d_60ae_d8eb * 8.0;
    } else if (d_60ae_dd0e == 1) {
        d_60ae_d8d3 = d_60ae_d8e3 * 8.0 - 2.0;
        d_60ae_d8df = d_60ae_d8eb * 8.0 - 8.0;
        d_60ae_d853 = d_60ae_d9c4 + d_60ae_d8e3 * 8.0 + 1;
        d_60ae_d84b = d_60ae_d8eb * 8.0;
    } else if (d_60ae_dd0e == 2) {
        d_60ae_d8d3 = d_60ae_d8e3 * 8.0 - 2.0;
        d_60ae_d8df = d_60ae_d8eb * 8.0 - 5.0;
        d_60ae_d853 = d_60ae_d9c4 + d_60ae_d8e3 * 8.0 + 1;
        d_60ae_d84b = d_60ae_d8eb * 8.0 + 10.0;
    }
    d_2289_df10[2][d_60ae_d9c2] = d_60ae_d8d3;
    d_2289_df10[3][d_60ae_d9c2] = d_60ae_d8df;
    d_2289_df10[4][d_60ae_d9c2] = d_60ae_d853;
    d_2289_df10[5][d_60ae_d9c2] = d_60ae_d84b;
    d_2289_df10[6][d_60ae_d9c2] = e;
    d_60ae_d9c2++;
    f_14bc_548f(d_60ae_d9c2, 0);
    d_60ae_dd6e = o7b;
    d_60ae_dd5e = o6b;
    d_60ae_dd0e = o19;
    d_60ae_d8e3 = ox;
    d_60ae_d8eb = oy;
}

/* Draw button n (1-based), its colours swapped when asked. */
void f_14bc_548f(int n, char swap)
{
    d_60ae_dd68 = n - 1;
    if (d_60ae_dd68 < 0)
        return;
    d_60ae_dd6e = d_471b_ae8c[0][d_60ae_dd68] / 16;
    d_60ae_dd5e = d_471b_ae8c[0][d_60ae_dd68] % 16;
    if (d_60ae_dd6e <= 0 && d_60ae_dd5e <= 0)
        return;
    if (swap != 0 && d_60ae_dd5e > 0)
        f_1bd3_13a3(&d_60ae_dd6e, &d_60ae_dd5e, 2);
    d_60ae_dd0e = d_471b_ae8c[1][d_60ae_dd68];
    d_60ae_d8e3 = d_2289_df10[0][d_60ae_dd68];
    d_60ae_d8eb = d_2289_df10[1][d_60ae_dd68];
    d_60ae_dc7e = d_2289_df10[6][d_60ae_dd68];
    if (d_60ae_dd0e == 0)
        f_14bc_3672(d_60ae_d8e3, d_60ae_d8eb, d_60ae_dd6e, d_60ae_dd5e, d_60ae_dc7e,
                    d_2289_0e88[d_60ae_dd68]);
    else if (d_60ae_dd0e == 1)
        f_14bc_3a36(d_60ae_d8e3, d_60ae_d8eb, d_60ae_dd6e, d_60ae_dd5e, d_60ae_dc7e,
                    d_2289_0e88[d_60ae_dd68]);
    else if (d_60ae_dd0e == 2)
        f_14bc_3e40(d_60ae_d8e3, d_60ae_d8eb, d_60ae_dd6e, d_60ae_dd5e, d_60ae_dc7e,
                    d_2289_0e88[d_60ae_dd68]);
}

/* Wait for a click on a button; returns its number. */
int f_14bc_5635(int a)
{
    char buf[6];

    f_14bc_5a4d();
    d_60ae_d9c0 = -1;
    d_60ae_d847 = f_1bd3_0df6();
    d_60ae_d843 = f_1bd3_0df6();
    f_1bd3_03a2(0);
    do {
top:
        strcpy(buf, f_1bd3_0cec());
        if (buf[0] == 'P' || buf[0] == 'p')
            f_ad38_3c81();
        if (f_1bd3_0c16() > 0) {
            if (d_60ae_fb04 == 0 && f_14bc_7136()) {
                f_ad38_3c81();
                goto top;
            }
            d_60ae_d9c0 = 0;
            for (d_60ae_dc90 = 0; d_60ae_d9c2 - 1 >= d_60ae_dc90; d_60ae_dc90++) {
                if (f_1bd3_0c0e() >= d_2289_df10[2][d_60ae_dc90] &&
                    f_1bd3_0c0e() <= d_2289_df10[4][d_60ae_dc90] &&
                    f_1bd3_0c06() >= d_2289_df10[3][d_60ae_dc90] &&
                    f_1bd3_0c06() <= d_2289_df10[5][d_60ae_dc90]) {
                    if (d_2289_5540[d_60ae_dc90] == 0)
                        d_60ae_d9c0 = d_60ae_dc90 + 1;
                    else
                        d_60ae_d9c0 = -1;
                    d_60ae_dc90 = d_60ae_d9c2 - 1;
                }
            }
        }
        if (d_60ae_d902 != 0 && d_2289_251c[0] != 0) {
            if (f_1bd3_0df6() - d_60ae_d847 > 500) {
                f_a694_34cf();
                d_60ae_d847 = f_1bd3_0df6();
            }
            if (f_1bd3_0df6() - d_60ae_d843 > 100) {
                f_a694_35c7();
                d_60ae_d843 = f_1bd3_0df6();
            }
        }
    } while (d_60ae_d9c0 <= -1);
    f_1bd3_03a2(1);
    if (a > 0)
        f_14bc_548f(a, 0);
    if (d_60ae_d9c0 > 0 && a > -1)
        f_14bc_548f(d_60ae_d9c0, -1);
    return d_60ae_dd56 = d_60ae_d9c0;
}

void f_14bc_589c(int team)
{
    d_2289_5540[team - 1] = 0xff;
}

void f_14bc_58b1(void)
{
    for (d_60ae_dc90 = 0; d_60ae_d9c2 - 1 >= d_60ae_dc90; d_60ae_dc90++)
        d_2289_5540[d_60ae_dc90] = 0;
}

void f_14bc_58db(int a)
{
    int m;

    f_1bd3_03a2(0);
    f_14bc_356a(0xfc, 0xc5, 5, "CLICK MOUSE");
    if (d_60ae_d97b != 0 && d_60ae_d97c == 0 && d_60ae_d91a == 0 ||
        d_60ae_d980 != 0 && d_60ae_d97a != 0 || d_60ae_d920 != 0 && d_60ae_d97a != 0) {
        d_60ae_d8ef = f_1bd3_0df6();
        do
            f_1bd3_0d69(2);
        while (f_1bd3_0c16() != 0 || f_1bd3_0df6() - d_60ae_d8ef <= 75);
    } else {
        f_14bc_5a4d();
        do {
again:
            f_1bd3_0d69(2);
            strcpy(d_2289_3912, f_1bd3_0cec());
            if (d_2289_3912[0] == 'P' || d_2289_3912[0] == 'p')
                f_ad38_3c81();
            m = f_1bd3_0c16();
            if (d_60ae_fb04 == 0 && m > 0 && f_14bc_7136()) {
                f_ad38_3c81();
                goto again;
            }
        } while (m <= 0 && (d_2289_3912[0] == 0 || a != 2));
    }
    f_1bd3_0821(0xf3, 0xbf, 0x13e, 0xc5);
    if (a == 0)
        f_14bc_356a(0xfc, 0xc5, 5, "PLEASE WAIT");
    f_1bd3_03a2(1);
}

void f_14bc_5a4d(void)
{
    char buf[10];

    do
        strcpy(buf, f_1bd3_0cec());
    while (buf[0] != 0 || f_1bd3_0c16() != 0);
}

/* Copy of s with all but the first letter in lower case (not called). */
static char far *f_14bc_5a7a(char far *s)
{
    char far *p;

    p = f_1bd3_0efb();
    strcpy(p, s);
    for (d_60ae_d9be = 1; strlen(p) > d_60ae_d9be; d_60ae_d9be++)
        if (isupper(p[d_60ae_d9be]))
            p[d_60ae_d9be] = tolower(p[d_60ae_d9be]);
    return p;
}

long f_14bc_5af6(int team)
{
    d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 0);
    d_60ae_d7bb = d_60ae_fade[0][team] + d_60ae_fade[5][team] + d_60ae_fade[2][team];
    d_60ae_d7b7 = d_60ae_fade[9][team] + d_60ae_fade[12][team] + d_60ae_fade[13][team];
    d_60ae_d7b3 = f_1bd3_131c(d_323f_3f94[0][team] - f_a3de_21b9(team), 0L) + d_60ae_d7bb - d_60ae_d7b7;
    d_60ae_d7af = f_14bc_0d32(d_60ae_d7b3 * 0.9, 0);
    return d_60ae_d7af;
}

void f_14bc_5bfe(int team, char far *title, char far *text)
{
    char buf[180];
    int x, y;

    f_14bc_4bd3("");
    d_60ae_d9f0 = 4;
    f_1bd3_08cb(16);
    f_1bd3_08e1(40, 80, 288, d_60ae_d9f0 * 8 + 104);
    f_1bd3_08cb(19);
    f_1bd3_08e1(36, 76, 284, d_60ae_d9f0 * 8 + 100);
    d_60ae_dd6e = d_323f_4cb8[team] / 16;
    d_60ae_dd5e = d_323f_4cb8[team] % 16;
    if (d_60ae_dd5e == 3)
        f_1bd3_13a3(&d_60ae_dd6e, &d_60ae_dd5e, 2);
    f_14bc_3672(5.125, 11.0, d_60ae_dd6e, d_60ae_dd5e, 240, title);
    sprintf(buf, "%s ", text);
    x = 0;
    y = 100;
    while (f_1bd3_0b1b(buf, " ") > 0) {
        d_60ae_d9ee = f_1bd3_0b1b(buf, " ");
        strncpy(d_2289_2e90, buf, d_60ae_d9ee - 1);
        d_2289_2e90[d_60ae_d9ee - 1] = 0;
        if (x + strlen(d_2289_2e90) * 6 > 240) {
            y += 8;
            x = 0;
        }
        f_14bc_356a(x + 49, y, 6, d_2289_2e90);
        x += (strlen(d_2289_2e90) + 1) * 6;
        strcpy(buf, buf + d_60ae_d9ee);
    }
    f_14bc_58db(0);
}

/* Read a big-endian word. */
int f_14bc_5ddb(FILE *fp)
{
    int v;
    unsigned char hi, lo;

    hi = fgetc(fp);
    lo = fgetc(fp);
    v = (hi << 8) + lo;
    return v;
}

char f_14bc_5e18(int player)
{
    if (player >= 0 && d_60ae_dda4 - 1 >= player)
        return -1;
    return 0;
}

char f_14bc_5e32(int player)
{
    if (player >= 3000)
        return -1;
    return 0;
}

int f_14bc_5e44(int player)
{
    unsigned char c;

    c = (player - 3000u) / 20;
    return c;
}

unsigned char f_14bc_5e60(int player)
{
    unsigned char c;

    c = (player - 3000u) % 20;
    return c;
}

unsigned char f_14bc_5e7d(int player, unsigned char a)
{
    unsigned char q, v, s;
    unsigned char r;

    q = f_14bc_5e44(player);
    r = f_14bc_5e60(player);
    v = d_2289_a0c6[q][2][r];
    s = d_2289_a0c6[q][0][r];
    if (a == 1) {
        if (s != 1)
            v = v * 0.3;
    } else if (f_14bc_692a(a)) {
        if (s == 1)
            v = v * 0.3;
        else if (s != 2)
            v = v * 0.6;
    } else if (f_14bc_694c(a)) {
        if (s == 1)
            v = v * 0.3;
        else if (s != 3)
            v = v * 0.6;
    } else if (f_14bc_6969(a)) {
        if (s == 1)
            v = v * 0.3;
        else if (s != 4)
            v = v * 0.6;
    }
    return v / 10;
}

void f_14bc_5f79(void)
{
    d_60ae_ddba = f_1bd3_1617(d_60ae_fdd8, 1);
    strcpy(d_60ae_ddba, "");
    d_2287_0017 = 0;
    d_2287_001d = 0;
}

void f_14bc_5fc1(int a, int b, char far *s)
{
    if (d_2287_0016 != 0 && d_2287_001d < 300) {
        d_2289_9766[d_2287_001d].a = a;
        d_2289_9766[d_2287_001d].b = b;
        d_2289_9766[d_2287_001d].start = d_2287_0017;
        d_2289_9766[d_2287_001d].len = strlen(s);
        d_2287_0017 = d_2287_0017 + d_2289_9766[d_2287_001d].len;
        d_60ae_ddba = f_1bd3_1617(d_60ae_fdd8, 1);
        strcat(d_60ae_ddba, s);
        d_2287_001d++;
    }
}

void f_14bc_60ca(void)
{
    d_2287_0016 = -1;
}

void f_14bc_60da(void)
{
    d_2287_0016 = 0;
}

char f_14bc_60ea(int p)
{
    unsigned char c;

    d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 0);
    c = d_60ae_fad2[9][p];
    if (c == 0 || c == 2 || c == 3 || c == 4 || c == 11)
        return 17;
    return 15;
}

char f_14bc_612e(unsigned char team, unsigned char week, unsigned char n)
{
    if (f_14bc_248a(week) && team / 20 == 0 || f_14bc_2784(week, n) || f_14bc_2835(week, n) ||
        f_14bc_28cc(week, n))
        return -1;
    return 0;
}

/* draws a player's shirt with his number at x, y (and the arrow of his position) */
void f_14bc_6199(unsigned char team, unsigned char player, unsigned x, unsigned y)
{
    unsigned char num[6], d1[6], d2[6];
    unsigned char col, col2, col3;

    if (team < 80) {
        col = d_323f_4cb8[team] / 16;
        col2 = d_323f_4cb8[team] % 16;
    } else {
        col = d_54d9_0ad0[team == d_60ae_dcd2 ? d_60ae_dc84 - 80 : d_60ae_dc82 - 80] / 16;
        col2 = d_54d9_0ad0[team == d_60ae_dcd2 ? d_60ae_dc84 - 80 : d_60ae_dc82 - 80] % 16;
    }
    if (player == 1) {
        col = col2 == 6 ? 1 : 0;
        col2 = col2 == 6 ? 4 : 6;
    }
    col3 = col == 15 || col == 3 ? 0 : col;
    f_1bd3_08d6(col2 + 16);
    f_1bd3_0fe2(x + 1, y, x + 3, y);
    f_1bd3_0fe2(x + 10, y, x + 12, y);
    f_1bd3_0fe2(x, y + 1, x + 4, y + 1);
    f_1bd3_0fe2(x + 9, y + 1, x + 13, y + 1);
    f_1bd3_0fe2(x - 1, y + 2, x + 14, y + 2);
    f_1bd3_0fe2(x - 1, y + 3, x + 14, y + 3);
    f_1bd3_0fe2(x - 1, y + 4, x, y + 4);
    f_1bd3_0fe2(x + 2, y + 4, x + 11, y + 4);
    f_1bd3_0fe2(x + 13, y + 4, x + 14, y + 4);
    f_1bd3_08d6(col3 + 16);
    f_1bd3_0fe2(x + 4, y, x + 4, y);
    f_1bd3_0fe2(x + 9, y, x + 9, y);
    f_1bd3_0fe2(x + 5, y + 1, x + 8, y + 1);
    f_1bd3_0fe2(x - 2, y + 3, x - 2, y + 3);
    f_1bd3_0fe2(x + 15, y + 3, x + 15, y + 3);
    f_1bd3_0fe2(x - 2, y + 4, x - 2, y + 4);
    f_1bd3_0fe2(x + 15, y + 4, x + 15, y + 4);
    f_1bd3_08cb(col2 + 16);
    f_1bd3_08e1(x + 2, y + 5, x + 11, y + 10);
    f_1bd3_08d6(col2 + 16);
    f_1bd3_0fe2(x + 3, y + 11, x + 10, y + 11);
    sprintf(num, "%d", player >= 13 ? player + 1 : player);
    sprintf(d1, "%c", num[0]);
    f_14bc_356a(x + 13 - (player >= 10 ? 4 : 0) - (player == 1 ? 1 : 0), -(y + 14 - 6 + 1), col, d1);
    if (player >= 10) {
        sprintf(d2, "%c", num[1]);
        f_14bc_356a(x + 20 - 6 - (player == 1 ? 1 : 0), -(y + 14 - 6 + 1), col, d2);
    }
    if (d_323f_0e8a[team][0][player - 1] == 11 || d_323f_0e8a[team][0][player - 1] == 12) {
        f_1bd3_08d6(22);
        f_1bd3_0fe2(x - 1, y + 7, x - 9, y + 7);
        f_1bd3_0fe2(x - 9, y + 7, x - 7, y + 5);
        f_1bd3_0fe2(x - 9, y + 7, x - 7, y + 9);
        f_1bd3_0fe2(x + 14, y + 7, x + 22, y + 7);
        f_1bd3_0fe2(x + 22, y + 7, x + 20, y + 5);
        f_1bd3_0fe2(x + 22, y + 7, x + 20, y + 9);
    } else if (d_323f_0e8a[team][2][player - 1] == 1) {
        f_1bd3_08d6(22);
        f_1bd3_0fe2(x + 7, y - 1, x + 7, y - 9);
        f_1bd3_0fe2(x + 7, y - 9, x + 5, y - 7);
        f_1bd3_0fe2(x + 7, y - 9, x + 9, y - 7);
    } else if (d_323f_0e8a[team][2][player - 1] == 2) {
        f_1bd3_08d6(22);
        f_1bd3_08d6(22);
        f_1bd3_0fe2(x + 7, y + 13, x + 7, y + 21);
        f_1bd3_0fe2(x + 7, y + 21, x + 5, y + 19);
        f_1bd3_0fe2(x + 7, y + 21, x + 9, y + 19);
    }
}

/* can player a play in position b */
char f_14bc_679d(int a, int b)
{
    char x, y;

    if (!f_14bc_5e32(a)) {
        if (b == 11)
            return -1;
        if (b == 1 && d_60ae_ddbe[a].w.f0)
            return -1;
        x = 0;
        y = 0;
        if ((f_14bc_692a(b) && d_60ae_ddbe[a].w.f1) || (f_14bc_694c(b) && d_60ae_ddbe[a].w.f2) ||
            (f_14bc_6969(b) && d_60ae_ddbe[a].w.f3))
            x = 1;
        if ((f_14bc_69a8(b) && d_60ae_ddbe[a].w.f4) || (f_14bc_6986(b) && d_60ae_ddbe[a].w.f5) ||
            (f_14bc_69ca(b) && d_60ae_ddbe[a].w.f6))
            y = 1;
        if (x == 1 && y == 1)
            return -1;
    } else {
        x = d_2289_a0c6[f_14bc_5e44(a)][0][f_14bc_5e60(a)];
        return (b == 1 && x == 1) || (f_14bc_692a(b) && x == 2) || (f_14bc_694c(b) && x == 3) ||
               (f_14bc_6969(b) && x == 4) ? -1 : 0;
    }
    return 0;
}

char f_14bc_692a(int x)
{
    if (x == 2 || x == 3 || x == 4 || x == 11)
        return -1;
    return 0;
}

char f_14bc_694c(int x)
{
    if (x == 5 || x == 6 || x == 7)
        return -1;
    return 0;
}

char f_14bc_6969(int x)
{
    if (x == 8 || x == 9 || x == 10)
        return -1;
    return 0;
}

char f_14bc_6986(int x)
{
    if (x == 3 || x == 6 || x == 9 || x == 11)
        return -1;
    return 0;
}

char f_14bc_69a8(int x)
{
    if (x == 2 || x == 5 || x == 8 || x == 11)
        return -1;
    return 0;
}

char f_14bc_69ca(int x)
{
    if (x == 4 || x == 7 || x == 10 || x == 11)
        return -1;
    return 0;
}

char f_14bc_69ec(int x)
{
    if (x >= 67)
        return -1;
    return 0;
}

double f_14bc_69fd(int x, int y)
{
    return (f_1bd3_1341(d_471b_0000[15][x], d_471b_0000[9][x]) * 0.1 + d_471b_0000[12][x]
            + d_471b_0000[17][x] * 0.5 + (y == 1 || y == 4 || y == 7 || y > 9 ? 3 : 0)) / 3.0;
}

int f_14bc_6ab9(int a, int b, int c)
{
    return d_323f_648c[b == 81][a] + (c == 1 || c == 4 || c == 7 || c > 9 ? 2 : 0);
}

int f_14bc_6b05(int x)
{
    return (x + 1) / 2;
}

float f_14bc_6b14(int x)
{
    if (x <= 19 || x >= 80)
        return 1.1;
    if (x <= 39)
        return 1.5;
    if (x <= 59)
        return 2.5;
    return 3.5;
}

/* is the player unhappy: the reason in d_2289_3af4 (unless c), its code in d_60ae_dbbc */
char f_14bc_6b4a(int player, char c)
{
    d_60ae_d939 = 0;
    d_60ae_dbbc = 0;
    if (f_14bc_6f7c(player) == 0 && d_3c35_0000[7][player] == 255 && !d_60ae_ddbe[player].w.f30) {
        if (!d_60ae_ddbe[player].w.f11) {
            d_60ae_db2c = d_471b_0000[23][player];
            d_60ae_d936 = f_14bc_2cc0(d_60ae_db2a = d_471b_0000[18][player]);
            if (d_60ae_dd9c > 18 && !d_60ae_ddbe[player].w.f23) {
                d_60ae_d934 = d_60ae_ddbe[player].w.f7 == 0 || f_14bc_1eb7(player) > 10;
                d_60ae_d933 = d_471b_0000[20][player] == 0 && d_471b_0000[21][player] > 90;
                if (d_60ae_d934 && d_60ae_d933 && d_60ae_db2c == 1) {
                    if (!c)
                        strcpy(d_2289_3af4, "feels he should be in the team");
                    d_60ae_d939 = -1;
                    d_60ae_dbbc = 1;
                }
                if (d_60ae_d934 && d_60ae_d933 && d_60ae_db2c > 1 &&
                    d_471b_0000[17][player] > (d_60ae_ddbe[player].w.f0 << 2) + 30) {
                    if (!c)
                        strcpy(d_2289_3af4, "wants first team football");
                    d_60ae_d939 = -1;
                    d_60ae_dbbc = 2;
                }
            }
            if (d_323f_4854[d_60ae_db2a] == 650) {
                d_60ae_db28 = 0;
                d_60ae_db26 = 0;
            } else {
                d_60ae_db28 = d_54d9_08a0[d_3c35_0000[17][player]][d_323f_23a6[d_323f_47b4[d_60ae_db2a]]];
                d_60ae_db26 = d_54d9_08a0[d_3c35_0000[17][player]][d_323f_23a6[d_323f_4854[d_60ae_db2a]]];
            }
            if (f_14bc_2db8(player) - f_14bc_2cf4(d_60ae_db2a) > (d_323f_824a[player] > 0 ? 8 : 6) &&
                f_14bc_2cf4(d_60ae_db2a) < 15.0) {
                if (!c)
                    strcpy(d_2289_3af4, "wants to move to a better club");
                d_60ae_d939 = -1;
                d_60ae_dbbc = 3;
            } else if (d_60ae_db28 > 8) {
                if (!c) {
                    if (d_60ae_d936)
                        strcpy(d_2289_3af4, "is not happy working for you");
                    else
                        strcpy(d_2289_3af4, "cannot work with his manager");
                }
                d_60ae_d939 = -1;
                d_60ae_dbbc = 4;
            } else if (d_60ae_db26 > 8) {
                if (!c)
                    sprintf(d_2289_3af4, "cannot work with %s coach", d_60ae_d936 ? "the" : "his");
                d_60ae_d939 = -1;
                d_60ae_dbbc = 5;
            } else {
                d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
                if (d_60ae_fae6[4][player] < f_14bc_6f9a(player, d_60ae_db2a) * 0.8 && d_323f_824a[player] > 0) {
                    if (!c)
                        strcpy(d_2289_3af4, "wants higher wages");
                    d_60ae_d939 = -1;
                    d_60ae_dbbc = 6;
                }
            }
        }
        if (d_60ae_ddbe[player].w.f16) {
            if (!c)
                strcpy(d_2289_3af4, "feels he's been fined unfairly");
            d_60ae_d939 = -1;
            d_60ae_dbbc = 7;
        }
    }
    return d_60ae_d939;
}

/* is the player one of the players abroad (1700..) */
char f_14bc_6f7c(int player)
{
    if ((unsigned)player >= 1700 && d_60ae_dda2 + 1699 >= (unsigned)player)
        return -1;
    return 0;
}

/* the wage a player asks of a club */
int f_14bc_6f9a(int player, int club)
{
    unsigned char rep, level;
    unsigned char a = club < 80 ? f_14bc_2cf4(club) : 16.0;
    float v;
    float t[4] = { 1.0, 0.8, 0.6, 0.5 };

    rep = d_3c35_0000[18][player];
    d_60ae_db3c = (d_471b_0000[0][player] * 4 + rep) / 5;
    level = f_1bd3_1307(f_1bd3_1369(19, d_60ae_db3c / 10), 0);
    v = a * 0.14 * (d_2282_0000[level] * 400.0) * t[club < 80 ? club / 20 : 0];
    v = v * (d_471b_0000[17][player] / 100.0 + 1);
    if (d_60ae_ddbe[player].w.f28)
        v = v * 1.3;
    d_60ae_db3a = (int)(v / 50.0) * 50;
    d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
    if (d_60ae_fae6[4][player] > d_60ae_db3a && d_471b_0000[17][player] < 30)
        d_60ae_db3a = d_60ae_fae6[4][player];
    return d_60ae_db3a;
}

/* waits up to 10 ticks for a key or a click */
char f_14bc_7136(void)
{
    char r = 0;
    long t;

    t = f_1bd3_0df6();
    do {
        if (f_1bd3_0c16() > 0)
            r = -1;
    } while (f_1bd3_0df6() - t < 10 && !r);
    return r;
}
