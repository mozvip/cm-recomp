/* @at 8aa1:0000 */
/* @data 60ae:30cc */
/* @module */

/* Overlay 5: transfers and contracts: the cup group tables, picking and approaching
 * players, bids, fees, asking prices and tribunals, contract and wage talks, the offer
 * and factfile screens, completing transfers and the shortlist, and the menu of things
 * to do with one of your own players (f_8aa1_5253, whose branches' identical endings BCC
 * merges as the original only with -y: see the Makefile). CM93's version of CM1's
 * 8352.C. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <math.h>
#include <stdlib.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_8aa1_0000(void);
void f_8aa1_0238(void);
unsigned char f_8aa1_05d0(unsigned char skip);
void f_8aa1_06be(void);
void f_8aa1_0778(void);
void f_8aa1_099a(void);
void f_8aa1_0dc3(int n);
char f_8aa1_102a(int team);
void f_8aa1_10ad(int team);
int f_8aa1_1144(int team);
void f_8aa1_124c(void);
void f_8aa1_146b(int p);
char f_8aa1_1667(int p, int team);
void f_8aa1_1865(int p, char all);
void f_8aa1_198d(int team);
int f_8aa1_1a8b(int team, int p);
void f_8aa1_1ade(void);
void f_8aa1_1d9c(int team, int player, char loan);
char f_8aa1_27e3(int p, int team, int n);
int f_8aa1_299a(int a, int b);
char f_8aa1_2a9d(int x, int team, int p);
void f_8aa1_2c6a(int team);
long f_8aa1_31e2(int player, int club, long fee);
long f_8aa1_3488(int club, int player, long fee);
void f_8aa1_36d2(int player, int club);
int f_8aa1_3b46(int player, int team);
int f_8aa1_3cc7(int age);
void f_8aa1_3d10(int mode, int player);
void f_8aa1_3ea2(int player, char lit);
int f_8aa1_3f81(int mode, int value, int lo, int player);
void f_8aa1_42e5(int n, char draw);
void f_8aa1_43f6(int colour, char far *s);
void f_8aa1_44ad(int player, int to, int from, long fee, unsigned char kind);
void f_8aa1_4c5d(int player, int from, int to, char kind);
void f_8aa1_4f06(int player, int a);
char f_8aa1_50f4(int player, char flag);
void f_8aa1_5253(int player);

struct pbits { unsigned b0 : 1; /* ddbf bit 0 */ unsigned b1 : 1; unsigned b2 : 1; unsigned : 1; unsigned b4 : 1; unsigned : 11; unsigned c0 : 1; /* ddc1 bit 0 */ unsigned : 5; unsigned c6 : 1; unsigned : 9; };
extern struct pbits d_60ae_ddbf[];
void f_1bd3_13a3(void far *a, void far *b, int n);
void far *f_1bd3_1617(int handle, int page);
long f_1bd3_131c(long a, long b);
long f_1bd3_0d69(long n);
int f_14bc_6b05(int x);
char f_14bc_2cc0(int x);
char f_14bc_69ec(int x);
char f_14bc_6b4a(int player, char c);
int f_14bc_6f9a(int player, int club);
char f_b628_4f4c(int player);
char f_9107_052e(int player);
char f_9107_0854(int player);
void f_9107_09dc(int player, char c, char d);
void f_9107_0aad(int player);
void f_9107_0000(int player, int club, int v);
long f_14bc_0d32(long v, char c);
void f_b628_674e(char a);
void f_b628_68ca(char a, int i, int n);
void f_b628_6ced(void);
void f_14bc_58db(int a);
void f_14bc_0b83(char far *s);
extern int d_60ae_dd9c;
extern int d_60ae_dd60;
extern int d_60ae_dd92;
extern int d_60ae_dd48;
extern int d_60ae_dcc4;
extern int d_60ae_db7c;
extern int d_60ae_db7a;
extern int d_60ae_db78;
extern int d_60ae_db76;
extern int d_60ae_dc36;
extern int d_60ae_dc34;
extern int d_60ae_db74;
extern int d_60ae_db72;
extern int d_60ae_db70;
extern int d_60ae_db6e;
extern int d_60ae_dd84;
extern int d_60ae_dd98;
extern int d_60ae_dda4;
extern int d_60ae_fdec;
extern int d_60ae_fde6;
extern char d_60ae_d948;
extern char d_60ae_d980;
extern long far *d_60ae_faf2;
extern int (far *d_60ae_fae6)[1860];
extern unsigned char far d_2289_bde0[][2][4];
extern int far d_2289_be10[][4];
extern unsigned char far d_2289_bb10[][6][5];
extern int far d_2289_bda4[][5];
extern int far d_323f_01e0[];
extern int far d_323f_03c0[];
extern int far d_323f_824a[];
extern int far d_323f_47b4[];
extern unsigned char far d_471b_0000[][1860];
extern unsigned char far d_3c35_0000[][1860];
int f_1bd3_1369(int a, int b);
int f_14bc_46ce(int team);
char f_14bc_2dfc(int x);
long f_14bc_020c(int p, int n);
long f_14bc_5af6(int team);
int f_14bc_2db8(int x);
float f_14bc_2cf4(int x);
char f_14bc_679d(int a, int b);
long f_14bc_22f4(int a, int team, char pos, char second);
char f_14bc_6f7c(int player);
void f_b628_4503(int player, char team);
char f_b628_4fde(int player, char team);
struct flags_a { unsigned char b0; unsigned f8 : 1; unsigned f9 : 1; unsigned : 6; unsigned : 2; unsigned f18 : 1; unsigned : 5; unsigned : 0; unsigned f24 : 1; unsigned : 3; unsigned f28 : 1; unsigned : 1; unsigned f30 : 1; unsigned : 1; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
extern union flags d_60ae_ddbe[];
extern int d_60ae_dd26;
extern int d_60ae_dbda;
extern int d_60ae_dd5c;
extern int d_60ae_dd74;
extern int d_60ae_dd3c;
extern int d_60ae_dc7e;
extern int d_60ae_db66;
extern int d_60ae_db68;
extern int d_60ae_dda2;
extern char d_60ae_d8fa;
extern char d_60ae_d8f5;
extern char d_60ae_d946;
extern char d_60ae_d947;
extern char d_60ae_d960;
extern float d_60ae_d8e3;
extern float d_60ae_d893;
extern float d_60ae_d897;
extern unsigned char far d_323f_0e8a[][3][14];
extern unsigned char far d_323f_23a6[];
extern long far d_323f_3f94[][80];
extern int far d_323f_4854[];
extern unsigned char far d_323f_4e00[];
extern unsigned char far d_323f_4e52[];
extern unsigned char far d_323f_52ce[];
extern unsigned char far d_323f_6094[];
extern unsigned char far d_323f_62d2[];
extern int far d_2289_f108[][16];
extern char far d_2289_ec08[][16];
extern int far d_471b_c7e8[][2][13];
extern unsigned char far d_54d9_08a0[][10];
void f_14bc_2f90(int n, char far *title, char far *items);
void f_14bc_3334(int last);
void f_14bc_4587(float x, float y, int team);
void f_1bd3_0dbc(int ticks);
char far *f_14bc_4703(int player);
char far *f_14bc_48b4(int player);
char f_9107_00fa(int player, int team, char loan);
void f_14bc_0ac0(int line, char far *s);
void f_14bc_0b30(char far *s);
extern char near *d_60ae_b572[];
extern char d_60ae_d940;
extern char d_60ae_d941;
extern char d_60ae_d942;
extern char d_60ae_d943;
extern char d_60ae_d944;
extern char d_60ae_d945;
extern int d_60ae_dda0;
extern int d_60ae_d99a;
extern int d_60ae_db58;
extern int d_60ae_db5a;
extern int d_60ae_db5c;
extern int d_60ae_db5e;
extern int d_60ae_db60;
extern int d_60ae_db62;
extern int d_60ae_db64;
extern long d_60ae_d80f;
extern long d_60ae_d813;
extern long d_60ae_d817;
extern long d_60ae_d81b;
extern long d_60ae_d82f;
int f_1bd3_1307(int a, int b);
extern int d_60ae_db56;
void f_14bc_4bd3(char far *title);
extern char far d_2289_55f4[];
extern char far d_2289_55a4[];
extern char far d_2289_55a3[];
extern int far d_2289_bd04[];
extern int far d_2289_bd02[];
extern long far d_2289_bbc0[];
char far *f_b628_644b(int player);
char f_b628_62f4(int player);
void f_14bc_5bfe(int team, char far *title, char far *text);
float f_1bd3_1341(float a, float b);
long f_1bd3_137e(long a, long b);
void f_a694_49c9(int player, int a, char b);
void f_7732_31e2(int team);
extern int d_60ae_db54;
extern int d_60ae_db52;
extern int d_60ae_db50;
extern int d_60ae_db34;
extern char d_60ae_d93c;
extern char d_60ae_d93d;
extern char d_60ae_d93e;
extern char d_60ae_d975;
extern long d_60ae_d807;
extern long d_60ae_d80b;
extern char far d_2289_55f3[];
extern int d_60ae_dd7e;
extern unsigned char far d_2289_fcb5[][8][5];
extern int far d_2289_ff85[][5];
extern char far d_2289_9118[];
extern char far d_2289_9e64[];
extern char far d_2289_abb0[];
extern float far d_2282_0000[];
extern int d_60ae_db6a;
extern int d_60ae_db6c;
extern char far d_2289_97be[];
extern char far d_2289_ccee[];
extern char far d_2289_d394[];
void f_a694_22e9(char far *title);
extern char far d_2289_5878[];
extern char far d_2289_5877[];
extern char far d_2289_58c8[];
extern int far d_2289_fee5[];
extern int far d_2289_fee3[];
extern long far d_2289_fda1[];
extern char far d_2289_58c7[];
extern char d_60ae_d93f;
extern char d_60ae_d93b;
extern int d_60ae_db3e;
extern int d_60ae_db40;
extern int d_60ae_db42;
extern int d_60ae_db44;
extern int d_60ae_db46;
extern int d_60ae_db48;
extern int d_60ae_db4a;
extern int d_60ae_db4c;
extern int d_60ae_db4e;
void f_1bd3_08cb(int c);
void f_1bd3_08e1(int x1, int y1, int x2, int y2);
void f_1bd3_08d6(int c);
void f_1bd3_0928(int x1, int y1, int x2, int y2);
int f_1bd3_0c0e(void);
int f_1bd3_0c06(void);
void f_14bc_356a(int x, int y, int colour, char far *s);
void f_14bc_3672(float x, float y, int bg, int fg, int w, char far *s);
void f_14bc_3e40(float x, float y, int bg, int fg, int w, char far *s);
void f_14bc_60da(void);
void f_14bc_50f8(int a, float x, float y, int c, int d, int e, char far *s);
int f_14bc_5635(int a);
void f_14bc_548f(int a, char b);
extern char far d_2289_4030[];
extern char far d_2289_4080[];
extern char far d_2289_40d0[];
extern char far d_2289_4818[];
extern char far d_2289_3872[];
void f_14bc_5053(void);
extern char far d_2289_37d2[];
extern char far d_2289_3822[];
extern char far d_2289_4ae8[];
extern char far d_2289_0e88[][40];
extern unsigned char far d_471b_ae8b[];
extern int d_60ae_db36;
extern int d_60ae_db38;
extern int d_60ae_db3a;
extern int d_60ae_db3c;
extern unsigned char far *d_60ae_dd8e;
extern int d_60ae_fdce;
void f_1bd3_114b(unsigned x, int y, unsigned x2, unsigned y2, int dy, int colour);
void f_1bd3_0fe2(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_ad38_2f53(int player);
void f_96bb_4c07(int player, int from, int to, long fee);
void f_96bb_4c87(int player, int from, int to, long fee);
void f_14bc_0ecb(int p);
int f_14bc_1eb7(int player);
void f_14bc_16af(int p);
void f_14bc_1365(int player);
void f_14bc_1993(int player);
extern char (far *d_60ae_ddae)[151];
extern float d_60ae_d8db;
extern char far d_2289_4fcc[];
extern int d_60ae_dba0;
extern int d_60ae_fde4;
extern char d_60ae_d97c;
extern char far d_2289_a50a[];
extern char far d_2289_b256[];
extern char far d_2289_c648[];
extern char far d_2289_e0e0[];
extern char far d_2289_3fe0[];
extern long (far *d_60ae_fade)[80];
extern char (far *d_60ae_faea)[82][391];
extern int d_60ae_dd1e;
extern char far d_2289_5be8[][0x6a6];
extern char far d_2289_8a72[];
extern int d_60ae_db32;
extern int d_60ae_dce6;
extern char d_60ae_d93a;
struct moves { int in[6]; int out[6]; char infrom[6]; char outto[6]; long infee[6]; long outfee[6]; unsigned char nin; unsigned char nout; };
extern struct moves far d_2289_7b16[];
struct news { int player; char from; char to; long fee; };
extern struct news far d_2289_7986[];
void f_ad38_428a(char a, char b, int player, char team, long fee, char c);
void f_ad38_6337(char team, int player);
void f_b628_6d15(char n);
void f_b628_372a(int player, char team);
void f_b628_36d3(int player, char team);
void f_b628_45a6(int player, unsigned char n);
extern int d_60ae_fddc;
extern int d_60ae_fde2;
extern unsigned char (far *d_60ae_fad2)[1860];
extern int far d_471b_b7a8[][26];
extern int far d_323f_0592[][14];
extern unsigned char far d_323f_4f48[];
extern unsigned char far d_323f_6042[];
extern long far d_323f_40d4[];
extern long far d_323f_4214[];
char f_14bc_0c5e(void);
unsigned f_1bd3_0b1b(char far *s, char far *set);
void f_b628_09ef(int player);
void f_9107_0af9(int player);
void f_9107_0e89(int player);
void f_9107_117d(int player, int c);
long f_9107_1391(int player);
extern char d_60ae_d939;
extern char d_60ae_d938;
extern char d_60ae_d977;
extern int d_60ae_dce4;
extern int d_60ae_db2e;
extern int d_60ae_dbc8;
extern int d_60ae_fdd0;
extern int d_60ae_fdd2;
extern long d_60ae_d803;
extern char (far *d_60ae_ddaa)[151];
extern char far d_2289_5308[];
extern char far d_2289_0848[][80];
extern char far d_2289_3af4[];

/* the steps of the digits a value is set with (+/- on the offer screen) */
static int d_60ae_30cc[] = { 1, 10, 100, 1000, 10000 };



void f_8aa1_0000(void)
{
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= 1; d_60ae_dd60++) {
        for (d_60ae_dd92 = 0; d_60ae_dd92 <= 2; d_60ae_dd92++) {
            for (d_60ae_dd48 = d_60ae_dd92 + 1; d_60ae_dd48 <= 3; d_60ae_dd48++) {
                d_60ae_db7c = d_2289_bde0[1][d_60ae_dd60][d_60ae_dd92] * 2 + d_2289_bde0[2][d_60ae_dd60][d_60ae_dd92];
                d_60ae_db7a = d_2289_bde0[1][d_60ae_dd60][d_60ae_dd48] * 2 + d_2289_bde0[2][d_60ae_dd60][d_60ae_dd48];
                d_60ae_db78 = d_2289_bde0[4][d_60ae_dd60][d_60ae_dd92];
                d_60ae_db76 = d_2289_bde0[4][d_60ae_dd60][d_60ae_dd48];
                d_60ae_dc36 = d_2289_bde0[5][d_60ae_dd60][d_60ae_dd92];
                d_60ae_dc34 = d_2289_bde0[5][d_60ae_dd60][d_60ae_dd48];
                if (d_60ae_db7c < d_60ae_db7a ||
                    (d_60ae_db7c == d_60ae_db7a && d_60ae_db78 - d_60ae_dc36 < d_60ae_db76 - d_60ae_dc34) ||
                    (d_60ae_db7c == d_60ae_db7a && d_60ae_db78 - d_60ae_dc36 == d_60ae_db76 - d_60ae_dc34 &&
                     d_60ae_db78 < d_60ae_db76)) {
                    f_1bd3_13a3(&d_2289_be10[d_60ae_dd60][d_60ae_dd92], &d_2289_be10[d_60ae_dd60][d_60ae_dd48], 2);
                    for (d_60ae_dcc4 = 0; d_60ae_dcc4 <= 5; d_60ae_dcc4++)
                        f_1bd3_13a3(&d_2289_bde0[d_60ae_dcc4][d_60ae_dd60][d_60ae_dd92],
                                    &d_2289_bde0[d_60ae_dcc4][d_60ae_dd60][d_60ae_dd48], 1);
                }
            }
        }
    }
    if (d_60ae_dd9c == 81) {
        d_323f_03c0[0] = d_2289_be10[0][0];
        d_323f_03c0[1] = d_2289_be10[1][0];
    }
}

void f_8aa1_0238(void)
{
    unsigned char groups, teams, k, g;

    groups = d_60ae_dd9c <= 37 ? 6 : 4;
    teams = d_60ae_dd9c <= 37 ? 3 : 4;
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= groups - 1; d_60ae_dd60++) {
        for (d_60ae_dd92 = 0; d_60ae_dd92 <= teams - 2; d_60ae_dd92++) {
            for (d_60ae_dd48 = d_60ae_dd92 + 1; d_60ae_dd48 <= teams - 1; d_60ae_dd48++) {
                if (d_2289_bb10[0][d_60ae_dd60][d_60ae_dd92] > 0)
                    d_60ae_db7c = d_2289_bb10[1][d_60ae_dd60][d_60ae_dd92] * 2 + d_2289_bb10[2][d_60ae_dd60][d_60ae_dd92];
                else
                    d_60ae_db7c = -1;
                if (d_2289_bb10[0][d_60ae_dd60][d_60ae_dd48] > 0)
                    d_60ae_db7a = d_2289_bb10[1][d_60ae_dd60][d_60ae_dd48] * 2 + d_2289_bb10[2][d_60ae_dd60][d_60ae_dd48];
                else
                    d_60ae_db7a = -1;
                d_60ae_db78 = d_2289_bb10[4][d_60ae_dd60][d_60ae_dd92];
                d_60ae_db76 = d_2289_bb10[4][d_60ae_dd60][d_60ae_dd48];
                d_60ae_dc36 = d_2289_bb10[5][d_60ae_dd60][d_60ae_dd92];
                d_60ae_dc34 = d_2289_bb10[5][d_60ae_dd60][d_60ae_dd48];
                if (d_60ae_db7c < d_60ae_db7a ||
                    (d_60ae_db7c == d_60ae_db7a && d_60ae_db78 - d_60ae_dc36 < d_60ae_db76 - d_60ae_dc34) ||
                    (d_60ae_db7c == d_60ae_db7a && d_60ae_db78 - d_60ae_dc36 == d_60ae_db76 - d_60ae_dc34 &&
                     d_60ae_db78 < d_60ae_db76)) {
                    f_1bd3_13a3(&d_2289_bda4[d_60ae_dd60][d_60ae_dd92], &d_2289_bda4[d_60ae_dd60][d_60ae_dd48], 2);
                    for (d_60ae_dcc4 = 0; d_60ae_dcc4 <= 5; d_60ae_dcc4++)
                        f_1bd3_13a3(&d_2289_bb10[d_60ae_dcc4][d_60ae_dd60][d_60ae_dd92],
                                    &d_2289_bb10[d_60ae_dcc4][d_60ae_dd60][d_60ae_dd48], 1);
                }
            }
        }
    }
    if (d_60ae_dd9c == 37) {
        k = 0;
        for (d_60ae_dd60 = 0; d_60ae_dd60 <= 5; d_60ae_dd60++) {
            d_323f_01e0[k] = d_2289_bda4[d_60ae_dd60][0];
            k++;
        }
        g = f_8aa1_05d0(-1);
        d_323f_01e0[k] = d_2289_bda4[g][1];
        k++;
        d_323f_01e0[k] = d_2289_bda4[f_8aa1_05d0(g)][1];
    } else if (d_60ae_dd9c == 61) {
        d_323f_01e0[0] = d_2289_bda4[0][0];
        d_323f_01e0[1] = d_2289_bda4[2][0];
        d_323f_01e0[2] = d_2289_bda4[1][0];
        d_323f_01e0[3] = d_2289_bda4[3][0];
    }
}

/* the best second-placed team of the six groups, other than group skip's */
unsigned char f_8aa1_05d0(unsigned char skip)
{
    unsigned char best, pts, a, b, g, f, ag;

    pts = 0;
    a = 0;
    b = 0;
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= 5; d_60ae_dd60++) {
        if (skip == d_60ae_dd60)
            continue;
        g = d_2289_bb10[1][d_60ae_dd60][1] * 2 + d_2289_bb10[2][d_60ae_dd60][1];
        f = d_2289_bb10[4][d_60ae_dd60][1];
        ag = d_2289_bb10[5][d_60ae_dd60][1];
        if (g > pts || (g == pts && f - ag > a - b) || (g == pts && f - ag == a - b && f > a))
            best = d_60ae_dd60;
    }
    return best;
}

void f_8aa1_06be(void)
{
    f_b628_6ced();
    d_60ae_db74 = f_14bc_6b05(d_60ae_dd9c);
    d_60ae_db72 = 0;
    f_8aa1_1ade();
    f_8aa1_0778();
    if (!f_14bc_69ec(d_60ae_dd9c)) {
        f_8aa1_099a();
        f_8aa1_124c();
        if (f_1bd3_0d69(13) == 0 && d_60ae_dd9c >= 10 && d_60ae_dd9c != 66)
            f_14bc_0b83("No transfer news this week");
        else
            f_8aa1_0dc3((int)f_1bd3_0d69(7) + ((d_60ae_dd9c <= 8 ? 15 : 0) + (d_60ae_dd9c == 66 ? 25 : 0)) + 9);
    }
    if (d_60ae_db72 > 0)
        f_14bc_58db(0);
}

void f_8aa1_0778(void)
{
    int v;

    d_60ae_db74 = f_14bc_6b05(d_60ae_dd9c);
    for (d_60ae_dd84 = 0; d_60ae_dd84 <= d_60ae_dda4 - 1; d_60ae_dd84++) {
        if (d_3c35_0000[7][d_60ae_dd84] == 0xff) {
            if (f_14bc_2cc0(d_471b_0000[18][d_60ae_dd84]) == 0) {
                if (d_323f_824a[d_60ae_dd84] == 0) {
                    if (!d_60ae_ddbf[d_60ae_dd84].b0 && f_14bc_6b4a(d_60ae_dd84, -1) == 0 && f_b628_4f4c(d_60ae_dd84) == 0) {
                        if (f_8aa1_50f4(d_60ae_dd84, 0) == 0) {
                            f_8aa1_36d2(d_60ae_dd84, d_471b_0000[18][d_60ae_dd84]);
                            if (d_60ae_d948) {
                                d_323f_824a[d_60ae_dd84] = (d_60ae_dd98 + d_60ae_db70) * 100 + d_60ae_db74;
                                d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 1);
                                d_60ae_fae6[4][d_60ae_dd84] = d_60ae_db6e;
                                f_8aa1_1865(d_60ae_dd84, 0);
                            }
                        } else
                            f_9107_09dc(d_60ae_dd84, 0, 0);
                    }
                } else {
                    v = f_14bc_6f9a(d_60ae_dd84, d_471b_0000[18][d_60ae_dd84]);
                    d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 1);
                    if (d_60ae_fae6[4][d_60ae_dd84] < v)
                        d_60ae_fae6[4][d_60ae_dd84] = v;
                }
            } else if (d_323f_824a[d_60ae_dd84] == 0 && !d_60ae_ddbf[d_60ae_dd84].b0 &&
                       f_14bc_6b4a(d_60ae_dd84, -1) == 0 && f_b628_4f4c(d_60ae_dd84) == 0)
                f_9107_0000(d_60ae_dd84, d_471b_0000[18][d_60ae_dd84],
                            d_323f_47b4[d_471b_0000[18][d_60ae_dd84]] - 646);
        }
    }
}

void f_8aa1_099a(void)
{
    if (d_60ae_d980)
        f_b628_674e(9);
    d_60ae_db74 = f_14bc_6b05(d_60ae_dd9c);
    for (d_60ae_dd84 = 0; d_60ae_dd84 <= d_60ae_dda4 - 1; d_60ae_dd84++) {
        unsigned char c;
        int n;

        c = d_471b_0000[18][d_60ae_dd84];
        if (d_60ae_d980)
            f_b628_68ca(9, d_60ae_dd84, d_60ae_dda4 + 1999);
        if ((d_60ae_dd84 + 1) % 4 != d_60ae_db74 % 4 && d_60ae_d980 == 0)
            continue;
        if (f_14bc_2cc0(c) && d_60ae_d980)
            continue;
        if (d_3c35_0000[7][d_60ae_dd84] == 0xff) {
            if (!d_60ae_ddbf[d_60ae_dd84].b0 && !d_60ae_ddbf[d_60ae_dd84].b1 && !d_60ae_ddbf[d_60ae_dd84].c6) {
                if (d_3c35_0000[19][d_60ae_dd84] < 2) {
                    n = f_14bc_2cc0(c) ? 2 : 0;
                    if (d_3c35_0000[14][d_60ae_dd84] > n && f_14bc_6b4a(d_60ae_dd84, -1)) {
                        if (f_9107_052e(d_60ae_dd84))
                            f_9107_09dc(d_60ae_dd84, -1, 0);
                        else
                            d_3c35_0000[14][d_60ae_dd84] = 0;
                        d_3c35_0000[19][d_60ae_dd84]++;
                    }
                }
            } else if (d_60ae_ddbf[d_60ae_dd84].b0 && d_60ae_ddbf[d_60ae_dd84].b2) {
                n = f_14bc_2cc0(c) ? 2 : 0;
                if (d_3c35_0000[15][d_60ae_dd84] > n && f_14bc_6b4a(d_60ae_dd84, -1) == 0) {
                    if (f_9107_0854(d_60ae_dd84))
                        f_9107_0aad(d_60ae_dd84);
                    else
                        d_3c35_0000[15][d_60ae_dd84] = 0;
                }
            }
            if (!d_60ae_ddbf[d_60ae_dd84].b0 && !d_60ae_ddbf[d_60ae_dd84].b1 && !d_60ae_ddbf[d_60ae_dd84].c6) {
                if (f_14bc_2cc0(c))
                    continue;
                if (f_8aa1_50f4(d_60ae_dd84, 0))
                    f_9107_09dc(d_60ae_dd84, 0, 0);
                else if (f_8aa1_50f4(d_60ae_dd84, -1))
                    f_9107_09dc(d_60ae_dd84, 0, -1);
            } else if (d_60ae_ddbf[d_60ae_dd84].b0 && !d_60ae_ddbf[d_60ae_dd84].b2 && f_14bc_2cc0(c) == 0) {
                if (!d_60ae_ddbf[d_60ae_dd84].b4 && !d_60ae_ddbf[d_60ae_dd84].c0 &&
                    (d_3c35_0000[11][d_60ae_dd84] == 4 || d_3c35_0000[11][d_60ae_dd84] == 8)) {
                    d_60ae_faf2 = f_1bd3_1617(d_60ae_fdec, 1);
                    d_60ae_faf2[d_60ae_dd84] = f_1bd3_131c(f_14bc_0d32(d_60ae_faf2[d_60ae_dd84] * 0.75, -1), 1000L);
                    if (d_60ae_faf2[d_60ae_dd84] < 10000L) {
                        d_60ae_faf2[d_60ae_dd84] = 0;
                        d_60ae_ddbf[d_60ae_dd84].b4 = 1;
                    }
                }
                if (f_8aa1_50f4(d_60ae_dd84, d_60ae_ddbf[d_60ae_dd84].c0) == 0)
                    f_9107_0aad(d_60ae_dd84);
            }
        }
    }
}

void f_8aa1_0dc3(int n)
{
    float best = 0;
    int count = 0;
    int k;

    for (d_60ae_dd26 = 0; d_60ae_dd26 <= 79; d_60ae_dd26++) {
        if (d_323f_4e52[d_60ae_dd26] < f_14bc_46ce(d_60ae_dd26) - 1 && f_14bc_2cc0(d_60ae_dd26) == 0
            && f_8aa1_102a(d_60ae_dd26) && count < n) {
            f_8aa1_10ad(d_60ae_dd26);
            if (d_60ae_d947)
                count++;
        }
    }
    for (k = 0; count < n && k < 80; k++) {
        d_60ae_dd26 = -1;
        for (d_60ae_dbda = 1; d_60ae_dbda <= 10; d_60ae_dbda++) {
            d_60ae_dd5c = f_1bd3_0d69(80);
            switch (d_60ae_dd5c / 20) {
            case 0:
                d_60ae_d8fa = d_323f_3f94[0][d_60ae_dd5c] > 3000000L ? -1 : 0;
                break;
            case 1:
                d_60ae_d8fa = d_323f_3f94[0][d_60ae_dd5c] > 1000000L ? -1 : 0;
                break;
            case 2:
            case 3:
                d_60ae_d8fa = d_323f_3f94[0][d_60ae_dd5c] > 500000L ? -1 : 0;
                break;
            }
            d_60ae_d8e3 = (d_2289_f108[d_60ae_dd5c][0] * 0.5 + (100 - d_323f_4e00[d_60ae_dd5c]) * 0.1
                           + f_14bc_46ce(d_60ae_dd5c) - d_323f_4e52[d_60ae_dd5c] + f_1bd3_0d69(5))
                          * (d_60ae_d8fa ? 3 : 1);
            if (d_60ae_d8e3 > best || d_60ae_dd26 == -1) {
                best = d_60ae_d8e3;
                d_60ae_dd26 = d_60ae_dd5c;
            }
        }
        if (f_14bc_2cc0(d_60ae_dd26) == 0 && f_8aa1_102a(d_60ae_dd26)) {
            f_8aa1_10ad(d_60ae_dd26);
            if (d_60ae_d947)
                count++;
        }
    }
}

char f_8aa1_102a(int team)
{
    char r = 0;

    if (d_323f_52ce[team] < 3 && d_2289_f108[team][0] > 0
        && (d_323f_4e52[team] + d_323f_6094[team] < 26 || f_14bc_2cc0(team))
        && d_323f_4e00[team] >= 30 && d_323f_4854[team] < 0x28a)
        r = -1;
    return r;
}

void f_8aa1_10ad(int team)
{
    int k;

    k = f_8aa1_1144(team);
    d_60ae_d947 = 0;
    if (k > -1) {
        d_60ae_dd84 = d_2289_f108[team][k];
        if (f_14bc_6f7c(d_60ae_dd84)) {
            d_60ae_d8f5 = 0;
            f_b628_4503(d_60ae_dd84, team);
            if (d_60ae_d8f5)
                d_60ae_d946 = -1;
        } else
            f_8aa1_1d9c(team, d_60ae_dd84, d_2289_ec08[team][k] == 1 ? -1 : 0);
        if (d_60ae_d946)
            d_60ae_d947 = -1;
    }
}

int f_8aa1_1144(int team)
{
    char k;
    char found;
    char tries;

    found = 0;
    tries = 0;
    do {
        k = f_1bd3_0d69(d_2289_f108[team][0]) + 1;
        d_60ae_dd84 = d_2289_f108[team][k];
        if (!d_60ae_ddbe[d_60ae_dd84].a.f9 && !d_60ae_ddbe[d_60ae_dd84].a.f30 && d_3c35_0000[7][d_60ae_dd84] == 0xff
            && f_14bc_2dfc(d_60ae_dd84) == 0
            && (d_2289_ec08[team][k] == 1 && d_323f_62d2[team] < 5
                || f_14bc_020c(d_60ae_dd84, -1) <= f_14bc_5af6(team)))
            found = 1;
        tries++;
    } while (found == 0 && tries < 20);
    return found == 1 ? k : -1;
}

void f_8aa1_124c(void)
{
    int i;
    int n;

    n = 0;
    for (d_60ae_dd84 = 0; d_60ae_dd84 <= d_60ae_dda4 - 1; d_60ae_dd84++)
        if (d_60ae_ddbe[d_60ae_dd84].a.f8 && !d_60ae_ddbe[d_60ae_dd84].a.f9 && !d_60ae_ddbe[d_60ae_dd84].a.f30
            && d_3c35_0000[23][d_60ae_dd84] < 3)
            n++;
    for (i = 1; i <= (d_60ae_d980 ? 2000 : 30); i++) {
        if (d_60ae_d980)
            f_b628_68ca(9, d_60ae_dda4 + i - 1, d_60ae_dda4 + 1999);
        do {
            d_60ae_dd84 = f_1bd3_0d69(17) == 0 ? f_1bd3_0d69(d_60ae_dda2) + 1700 : f_1bd3_0d69(d_60ae_dda4);
            d_60ae_d960 = 0;
            if (d_3c35_0000[23][d_60ae_dd84] < 3 && !d_60ae_ddbe[d_60ae_dd84].a.f9 && !d_60ae_ddbe[d_60ae_dd84].a.f30) {
                if (f_14bc_6f7c(d_60ae_dd84))
                    d_60ae_d960 = -1;
                else if (d_60ae_d980 == 0) {
                    if (f_1bd3_1369(20, n) < i) {
                        if (d_471b_0000[23][d_60ae_dd84] > 1)
                            d_60ae_d960 = -1;
                        else if (d_60ae_ddbe[d_60ae_dd84].a.f18)
                            d_60ae_d960 = -1;
                    }
                } else if (d_60ae_d980) {
                    if (fabs(f_14bc_2db8(d_60ae_dd84) - f_14bc_2cf4(d_471b_0000[18][d_60ae_dd84])) > 3)
                        d_60ae_d960 = -1;
                }
                if (d_60ae_ddbe[d_60ae_dd84].a.f8)
                    d_60ae_d960 = -1;
            }
        } while (d_60ae_d960 == 0 && d_60ae_d980 == 0);
        if (d_60ae_d960)
            f_8aa1_146b(d_60ae_dd84);
    }
}

void f_8aa1_146b(int p)
{
    char m;
    char used[80];

    memset(used, 0, 80);
    for (d_60ae_db68 = 1; d_60ae_db68 <= 40; d_60ae_db68++) {
        d_60ae_dd5c = f_1bd3_0d69(80);
        if (used[d_60ae_dd5c] == 0) {
            if (d_471b_0000[18][p] != d_60ae_dd5c && f_14bc_2cc0(d_60ae_dd5c) == 0
                && d_2289_f108[d_60ae_dd5c][0] < 10
                && d_54d9_08a0[d_323f_23a6[d_323f_47b4[d_60ae_dd5c]]][d_3c35_0000[17][p]] < 8
                && f_8aa1_1a8b(d_60ae_dd5c, p) == 0 && d_323f_4854[d_60ae_dd5c] < 0x28a) {
                d_60ae_d897 = f_14bc_2db8(p);
                d_60ae_d893 = f_14bc_2cf4(d_60ae_dd5c);
                if (d_60ae_d893 - 4 < d_60ae_d897 && d_60ae_d893 + 8 > d_60ae_d897) {
                    m = f_8aa1_1667(p, d_60ae_dd5c);
                    if (m > 0) {
                        d_3c35_0000[23][p]++;
                        d_2289_f108[d_60ae_dd5c][0]++;
                        d_2289_f108[d_60ae_dd5c][d_2289_f108[d_60ae_dd5c][0]] = p;
                        d_2289_ec08[d_60ae_dd5c][d_2289_f108[d_60ae_dd5c][0]] = m;
                        if (d_3c35_0000[23][p] == 3)
                            d_60ae_db68 = 40;
                    }
                }
            }
            used[d_60ae_dd5c] = -1;
        }
    }
}

char f_8aa1_1667(int p, int team)
{
    char r = 0;
    char m;
    long a;
    long b;

    for (d_60ae_dc7e = 0; d_60ae_dc7e <= 1; d_60ae_dc7e++) {
        if (f_14bc_6f7c(p))
            m = f_b628_4fde(p, team) ? 2 : 0;
        else
            m = f_8aa1_27e3(p, team, d_60ae_dc7e + 1);
        if (m > 0) {
            for (d_60ae_dd74 = 0; d_60ae_dd74 <= 10; d_60ae_dd74++) {
                d_60ae_dd3c = d_323f_0e8a[team][0][d_60ae_dd74];
                if (f_14bc_679d(p, d_60ae_dd3c)) {
                    a = f_14bc_22f4(d_471b_c7e8[team][d_60ae_dc7e][d_60ae_dd74], team, d_60ae_dd3c,
                                    d_60ae_dc7e == 1 ? 1 : 0);
                    b = f_14bc_22f4(p, team, d_60ae_dd3c, d_60ae_dc7e == 1 ? 1 : 0);
                    if (b > a && m == 2 && (!d_60ae_ddbe[p].a.f8 || !d_60ae_ddbe[p].a.f24)) {
                        r = 2;
                        d_60ae_dd74 = 10;
                        d_60ae_dc7e = 1;
                    } else if (b > a && f_14bc_6f7c(p) == 0 && d_60ae_ddbe[p].a.f8 && d_60ae_ddbe[p].a.f24
                               && d_323f_62d2[team] < 5) {
                        char d;

                        d = abs(f_14bc_2cf4(team) - f_14bc_2cf4(d_471b_0000[18][p]));
                        if (d > 2) {
                            r = 1;
                            d_60ae_dd74 = 10;
                            d_60ae_dc7e = 1;
                        }
                    }
                }
            }
        }
    }
    return r;
}

void f_8aa1_1865(int p, char all)
{
    if (d_3c35_0000[23][p] > 0) {
        for (d_60ae_dd5c = 0; d_60ae_dd5c <= 79; d_60ae_dd5c++) {
            if ((f_14bc_2cc0(d_60ae_dd5c) == 0 || d_471b_0000[18][p] == d_60ae_dd5c || all)
                && f_8aa1_1a8b(d_60ae_dd5c, p) > 0) {
                if (f_14bc_2cc0(d_60ae_dd5c) == 0)
                    d_3c35_0000[23][p] -= 1;
                d_60ae_db66 = f_8aa1_1a8b(d_60ae_dd5c, p);
                d_2289_f108[d_60ae_dd5c][d_60ae_db66] = d_2289_f108[d_60ae_dd5c][d_2289_f108[d_60ae_dd5c][0]];
                d_2289_ec08[d_60ae_dd5c][d_60ae_db66] = d_2289_ec08[d_60ae_dd5c][d_2289_f108[d_60ae_dd5c][0]];
                d_2289_f108[d_60ae_dd5c][0]--;
            }
        }
    }
}

void f_8aa1_198d(int team)
{
    int k;

    for (k = 1; k <= d_2289_f108[team][0]; k++) {
        if (f_8aa1_1667(d_2289_f108[team][k], team) == 0) {
            d_3c35_0000[23][d_2289_f108[team][k]] -= 1;
            d_2289_f108[team][k] = d_2289_f108[team][d_2289_f108[team][0]];
            d_2289_ec08[team][k] = d_2289_ec08[team][d_2289_f108[team][0]];
            d_2289_f108[team][0]--;
        }
    }
}

int f_8aa1_1a8b(int team, int p)
{
    int r = 0;
    int k;

    for (k = 1; k <= d_2289_f108[team][0]; k++)
        if (d_2289_f108[team][k] == p) {
            r = k;
            k = d_2289_f108[team][0];
        }
    return r;
}

/* the loans of the week: each loaned player's weeks run down; one whose loan has expired
 * (or, at 2 or 4 weeks left, whose club wants him back) returns to his club */
void f_8aa1_1ade(void)
{
    char kind;
    char buf[320];

    for (d_60ae_dd84 = 0; d_60ae_dd84 <= d_60ae_dda4 - 1; d_60ae_dd84++) {
        if (d_3c35_0000[7][d_60ae_dd84] < 255) {
            kind = 0;
            d_3c35_0000[8][d_60ae_dd84]--;
            switch (d_3c35_0000[8][d_60ae_dd84]) {
            case 0:
                kind = 1;
                break;
            case 2:
            case 4:
                if (f_14bc_2cc0(d_3c35_0000[7][d_60ae_dd84]) == 0 &&
                    f_8aa1_299a(d_60ae_dd84, d_471b_0000[25][d_60ae_dd84]) == 1)
                    kind = 2;
                break;
            }
            if (kind > 0) {
                if (f_14bc_2cc0(d_471b_0000[18][d_60ae_dd84])) {
                    if (kind == 1)
                        sprintf(buf, "%s's loan period has expired - he returns to %s.%s",
                                f_14bc_4703(d_60ae_dd84), (char far *)d_60ae_b572[d_3c35_0000[7][d_60ae_dd84]],
                                f_b628_644b(d_60ae_dd84));
                    else if (kind == 2)
                        sprintf(buf, "On-loan %s returns to %s at their request.%s",
                                f_14bc_4703(d_60ae_dd84), (char far *)d_60ae_b572[d_3c35_0000[7][d_60ae_dd84]],
                                f_b628_644b(d_60ae_dd84));
                    f_14bc_5bfe(d_471b_0000[18][d_60ae_dd84], "Squad news", buf);
                } else if (f_14bc_2cc0(d_3c35_0000[7][d_60ae_dd84]) && kind == 1) {
                    sprintf(buf, "%s returns from his loan spell at %s.%s",
                            f_14bc_4703(d_60ae_dd84), (char far *)d_60ae_b572[d_471b_0000[18][d_60ae_dd84]],
                            f_b628_644b(d_60ae_dd84));
                    f_14bc_5bfe(d_3c35_0000[7][d_60ae_dd84], "Squad news", buf);
                }
                f_8aa1_44ad(d_60ae_dd84, d_3c35_0000[7][d_60ae_dd84], d_471b_0000[18][d_60ae_dd84], 0, 2);
                if (kind == 2)
                    d_3c35_0000[9][d_60ae_dd84] = 2;
            } else if (d_3c35_0000[8][d_60ae_dd84] == 1 && !f_14bc_2cc0(d_471b_0000[18][d_60ae_dd84]) &&
                       d_60ae_ddbe[d_60ae_dd84].w.f7 && d_3c35_0000[9][d_60ae_dd84] < 4 &&
                       f_b628_62f4(d_60ae_dd84)) {
                d_3c35_0000[8][d_60ae_dd84] += 4;
                d_3c35_0000[9][d_60ae_dd84]++;
            }
        }
    }
}

/* approaching a player (to buy him, or with loan set, to take him on loan): the human
 * club's menu, the player's answer, the other clubs that also want him, and his choice */
void f_8aa1_1d9c(int team, int player, char loan)
{
    char done;
    char tell;
    unsigned char own;
    int best;
    float bestval;
    char name[80];
    char stays[80];
    char buf[320];
    char but[80];

    bestval = 0;
    memset(d_2289_55f4, 0, 80);
    memset(d_2289_55a4, 0, 80);
    d_60ae_d945 = 0;
    done = 0;
    d_60ae_d946 = 0;
    d_60ae_d944 = 0;
    best = -1;
    own = d_471b_0000[18][player];
    d_60ae_d943 = f_14bc_2cc0(own);
    d_60ae_d942 = f_14bc_2cc0(team);
    d_60ae_db64 = -d_60ae_d943 - d_60ae_d942;
again:
    d_60ae_d941 = 0;
    if (d_60ae_d942 != 0) {
        f_14bc_4bd3("Approach Player");
        f_14bc_4587(1.0, 4.0, team);
        sprintf(buf, "Board limit on spending : %ld", f_14bc_5af6(team));
        f_14bc_0ac0(7, buf);
        sprintf(buf, "Approach %s ?", f_14bc_4703(player));
        f_14bc_0ac0(9, buf);
        f_14bc_2f90(12, "", "*Exit|Approach To Buy|Approach To Loan|");
menu:
        f_14bc_3334(2);
        d_60ae_d941 = 0;
        if (d_60ae_dda0 == 1)
            d_60ae_d941 = 1;
        else if (d_60ae_dda0 == 2) {
            if (d_323f_62d2[team] < 5)
                d_60ae_d941 = 2;
            else {
                f_14bc_0b30("Maximum five loans per season");
                goto menu;
            }
        }
    } else if (loan == 0)
        d_60ae_d941 = 1;
    else
        d_60ae_d941 = 2;
    if (d_60ae_d941 > 0) {
        strcpy(name, f_14bc_48b4(player));
        if (f_9107_00fa(player, team, d_60ae_d941 == 2 ? -1 : 0)) {
            if (d_60ae_d943 == 0 && d_60ae_d942 != 0) {
                sprintf(buf, "%s allow approach", (char far *)d_60ae_b572[own]);
                f_14bc_0b30(buf);
            }
            if (f_8aa1_27e3(player, team, d_60ae_db62 = f_8aa1_299a(player, team)) >= (d_60ae_d941 == 2 ? 1 : 2)) {
                if (d_60ae_d942 != 0 || d_60ae_d943 != 0) {
                    sprintf(buf, "%s is keen on the %s", (char far *)name, d_60ae_d941 == 1 ? "move" : "loan");
                    f_14bc_0b30(buf);
                }
                done = -1;
                goto out;
            }
            if (d_60ae_d942 == 0 && d_60ae_d943 == 0)
                goto out;
            sprintf(buf, "%s rejects the %s", (char far *)name, d_60ae_d941 == 1 ? "move" : "loan");
            if ((d_60ae_d942 && d_60ae_d943) == 0) {
                sprintf(but, "But %s", (char far *)buf);
                strcpy(buf, but);
            }
            f_14bc_0b30(buf);
            if (d_60ae_d942 != 0) {
                if (d_60ae_d943 == 0)
                    goto menu;
                goto again;
            }
        } else if (d_60ae_d942 != 0) {
            if (d_60ae_d943 != 0)
                goto again;
            sprintf(buf, "%s refuse approach", (char far *)d_60ae_b572[own]);
            f_14bc_0b30(buf);
            goto menu;
        }
    }
out:
    if (done == 0) {
        if (d_60ae_d942 == 0) {
            d_3c35_0000[23][player] -= 1;
            d_60ae_db66 = f_8aa1_1a8b(team, player);
            d_2289_f108[team][d_60ae_db66] = d_2289_f108[team][d_2289_f108[team][0]];
            d_2289_ec08[team][d_60ae_db66] = d_2289_ec08[team][d_2289_f108[team][0]];
            d_2289_f108[team][0]--;
        }
    } else {
        d_2289_55f4[0] = -1;
        d_2289_bd04[0] = team;
        d_60ae_db60 = 1;
        d_323f_52ce[team]++;
        if (d_60ae_d941 != 2) {
            for (d_60ae_db5c = 0; d_60ae_db5c <= 79; d_60ae_db5c++) {
                if (d_60ae_db5c != team && f_8aa1_102a(d_60ae_db5c) && f_8aa1_1a8b(d_60ae_db5c, player) > 0) {
                    if (f_14bc_2cc0(d_60ae_db5c))
                        d_60ae_d940 = f_8aa1_2a9d(d_60ae_db5c, team, player) ? -1 : 0;
                    else
                        d_60ae_d940 = d_471b_0000[12][player] != 0 || f_14bc_5af6(d_60ae_db5c) >= f_14bc_020c(player, -1) && f_1bd3_0d69(3) > 0 ? -1 : 0;
                    if (d_60ae_d940 != 0) {
                        if (f_8aa1_27e3(player, d_60ae_db5c, d_60ae_db62 = f_8aa1_299a(player, d_60ae_db5c)) < 2) {
                            if (f_14bc_2cc0(d_60ae_db5c))
                                f_14bc_0b30("He is not interested");
                            else {
                                d_3c35_0000[23][player] -= 1;
                                d_60ae_db66 = f_8aa1_1a8b(d_60ae_db5c, player);
                                d_2289_f108[d_60ae_db5c][d_60ae_db66] = d_2289_f108[d_60ae_db5c][d_2289_f108[d_60ae_db5c][0]];
                                d_2289_ec08[d_60ae_db5c][d_60ae_db66] = d_2289_ec08[d_60ae_db5c][d_2289_f108[d_60ae_db5c][0]];
                                d_2289_f108[d_60ae_db5c][0]--;
                            }
                        } else {
                            if (f_14bc_2cc0(d_60ae_db5c)) {
                                f_14bc_0b30("He is interested");
                                d_60ae_db64++;
                            }
                            d_2289_55f4[d_60ae_db60] = d_60ae_db62 == 1;
                            d_2289_bd04[d_60ae_db60] = d_60ae_db5c;
                            d_60ae_db60++;
                            d_323f_52ce[d_60ae_db5c]++;
                        }
                    }
                }
            }
        }
        if (d_60ae_ddbe[player].w.f12 == 0 && d_60ae_d941 != 2) {
            d_60ae_d81b = 0;
            d_60ae_d817 = 0;
            d_60ae_d813 = f_14bc_0d32(f_14bc_020c(player, own), -1);
            d_60ae_d80f = d_60ae_d813;
            if (d_60ae_db64 > 0) {
                d_60ae_d99a = 0;
                d_60ae_db5a = 7;
                f_8aa1_3d10(0, player);
                if (d_60ae_ddbe[player].w.f8)
                    sprintf(buf, "%s is valued at %ld", f_14bc_48b4(player), d_60ae_d813);
                else
                    sprintf(buf, "%s is not yet valued", f_14bc_48b4(player));
                f_8aa1_43f6(1, buf);
            }
            f_8aa1_2c6a(player);
            tell = 0;
        } else {
            if (d_60ae_db64 > 0) {
                for (d_60ae_db5e = 1; d_60ae_db5e <= d_60ae_db60; d_60ae_db5e++) {
                    d_60ae_dd5c = d_2289_bd02[d_60ae_db5e];
                    if (d_60ae_dd5c != team && f_14bc_2cc0(d_60ae_dd5c) == 0) {
                        sprintf(buf, "%s also want him", (char far *)d_60ae_b572[d_60ae_dd5c]);
                        f_14bc_0b30(buf);
                    }
                }
            }
            tell = -1;
        }
        d_60ae_db58 = 0;
        for (d_60ae_db5e = 1; d_60ae_db5e <= d_60ae_db60; d_60ae_db5e++) {
            d_60ae_dd5c = d_2289_bd02[d_60ae_db5e];
            if (d_2289_55a3[d_60ae_db5e] != 0 || d_60ae_ddbe[player].w.f12 || d_60ae_d941 == 2) {
                d_60ae_d893 = f_14bc_2cf4(d_60ae_dd5c) + (d_60ae_dd5c == team ? 0.5 : 0);
                if (d_60ae_d893 > bestval || best == -1) {
                    bestval = d_60ae_d893;
                    best = d_60ae_dd5c;
                    if (d_60ae_ddbe[player].w.f12 || d_60ae_d941 == 2)
                        d_60ae_d82f = 0;
                    else
                        d_60ae_d82f = d_2289_bbc0[d_60ae_db5e];
                }
                d_60ae_db58++;
            }
        }
        sprintf(stays, "He stays at %s", (char far *)d_60ae_b572[own]);
        if (best > -1) {
            if (d_60ae_db64 > 0) {
                f_1bd3_0dbc(50);
                if (d_60ae_db58 > 1) {
                    sprintf(buf, "He decides to join %s", (char far *)d_60ae_b572[best]);
                    if (tell)
                        f_14bc_0b30(buf);
                    else
                        f_8aa1_43f6(6, buf);
                }
            }
            if (d_60ae_d941 != 2) {
                f_8aa1_36d2(player, best);
                if (f_14bc_2cc0(best))
                    tell = 0;
            }
            if (d_60ae_d948 || d_60ae_d941 == 2) {
                if (d_60ae_db64 > 0) {
                    if (d_60ae_d941 == 1)
                        sprintf(buf, "He signs for %s", (char far *)d_60ae_b572[best]);
                    else
                        strcpy(buf, "He joins on a two month loan");
                    if (tell)
                        f_14bc_0b30(buf);
                    else
                        f_8aa1_43f6(6, buf);
                }
                f_8aa1_44ad(player, best, own, d_60ae_d82f, d_60ae_d941 == 2 ? 1 : 0);
                d_60ae_d946 = -1;
            } else if (tell)
                f_14bc_0b30(stays);
            else
                f_8aa1_43f6(6, stays);
        } else if (d_60ae_db64 > 0)
            f_8aa1_43f6(6, stays);
    }
}

/* whether player p would join team, for n (f_8aa1_299a's answer): 2 to move, 1 only on
 * loan, 0 not at all */
char f_8aa1_27e3(int p, int team, int n)
{
    char r;
    float a;
    float b;
    int m;
    unsigned char c2;
    unsigned char c1;

    r = 0;
    c1 = d_3c35_0000[11][p];
    d_60ae_db56 = d_54d9_08a0[d_3c35_0000[17][p]][d_323f_23a6[d_323f_47b4[team]]];
    if (d_60ae_db56 < 8 && f_b628_4f4c(p) == 0) {
        a = f_14bc_2cf4(d_471b_0000[18][p]);
        b = f_14bc_2cf4(team);
        c2 = d_471b_0000[23][p];
        m = f_1bd3_1307(c2, 1 - (c1 > 8 ? 2 : 1) * (d_60ae_ddbe[p].w.f8 ? -1 : 0));
        if (n < m && (m - n + (b + 1) >= a || f_14bc_2db8(p) < 11))
            r = 2;
        else if (n == m && n < 3 && b > a)
            r = 2;
        else if (n > m && n < 3 && a + 1 <= b)
            r = 2;
        else if (a + 2 <= b)
            r = 2;
        else if (n == 1 && m == 3 && a - 2 <= b)
            r = 1;
    }
    return r;
}

int f_8aa1_299a(int a, int b)
{
    long l1;
    long l2;

    d_60ae_db62 = 3;
    for (d_60ae_dc7e = 0; d_60ae_dc7e <= 1; d_60ae_dc7e++) {
        for (d_60ae_dd74 = 0; d_60ae_dd74 <= 10; d_60ae_dd74++) {
            d_60ae_dd3c = d_323f_0e8a[b][0][d_60ae_dd74];
            if (f_14bc_679d(a, d_60ae_dd3c)) {
                l1 = f_14bc_22f4(d_471b_c7e8[b][d_60ae_dc7e][d_60ae_dd74], b, d_60ae_dd3c,
                                 d_60ae_dc7e == 1 ? 1 : 0);
                l2 = f_14bc_22f4(a, b, d_60ae_dd3c, d_60ae_dc7e == 1 ? 1 : 0);
                if (l2 > l1) {
                    d_60ae_db62 = d_60ae_dc7e + 1;
                    d_60ae_dd74 = 10;
                    d_60ae_dc7e = 1;
                }
            }
        }
    }
    return d_60ae_db62;
}

char f_8aa1_2a9d(int x, int team, int p)
{
    char buf[320];

top:
    d_60ae_d940 = 0;
    sprintf(buf, "%s bid", (char far *)d_60ae_b572[team]);
    f_14bc_4bd3(buf);
    f_14bc_4587(1, 4.0, x);
    sprintf(buf, "%s want %s", (char far *)d_60ae_b572[team], f_14bc_4703(p));
    f_14bc_0ac0(7, buf);
    f_14bc_0ac0(9, "He is on your shortlist");
    sprintf(buf, "Approach %s ?", f_14bc_48b4(p));
    f_14bc_0ac0(11, buf);
    f_14bc_2f90(14, "", "View Factfile|View Squad|Ignore|Approach|");
menu:
    f_14bc_3334(3);
    if (d_60ae_dda0 == 0) {
        do
            f_a694_49c9(p, -1, 0);
        while (!d_60ae_d975);
        d_60ae_d975 = 0;
        goto top;
    }
    if (d_60ae_dda0 == 1) {
        f_7732_31e2(x);
        goto top;
    }
    if (d_60ae_dda0 == 3) {
        if (d_323f_4e52[x] + d_323f_6094[x] >= 26) {
            f_14bc_0b30("Maximum squad size is 26");
            if (d_323f_6094[x] > 0) {
                sprintf(buf, "%d player%s loaned out", d_323f_6094[x], d_323f_6094[x] > 1 ? "s" : "");
                f_14bc_0b30(buf);
            }
            goto menu;
        }
        d_60ae_d940 = -1;
    }
    return d_60ae_d940;
}

void f_8aa1_2c6a(int team)
{
    long v;
    char ok;
    char buf[320];

    for (d_60ae_db68 = 1; d_60ae_db68 <= 3; d_60ae_db68++) {
        for (d_60ae_db5e = 1; d_60ae_db5e <= d_60ae_db60; d_60ae_db5e++) {
            if (d_2289_55a3[d_60ae_db5e] != 0 && d_2289_bbc0[d_60ae_db5e] < d_60ae_d81b)
                d_2289_55a3[d_60ae_db5e] = 0;
            if (d_2289_55a3[d_60ae_db5e] == 0) {
                d_60ae_dd5c = d_2289_bd02[d_60ae_db5e];
                if (d_60ae_db68 == 1) {
                    if (d_60ae_d942 != 0 || d_60ae_d943 != 0 || d_323f_824a[team] == 0)
                        v = f_14bc_0d32(f_1bd3_1341(f_14bc_020c(team, d_60ae_dd5c), f_14bc_5af6(d_60ae_dd5c)), 0);
                    else
                        v = f_1bd3_137e(d_60ae_d813, f_14bc_5af6(d_60ae_dd5c));
                    if (v > d_60ae_d813)
                        v = d_60ae_d813;
                } else
                    v = d_2289_bbc0[d_60ae_db5e];
                d_60ae_d93c = d_60ae_db64 > 0 ? -1 : 0;
                d_60ae_d93d = d_2289_55f3[d_60ae_db5e];
                d_2289_bbc0[d_60ae_db5e] = f_8aa1_31e2(d_60ae_dd5c, team, v);
                if (d_60ae_db64 > 0) {
                    if (f_14bc_2cc0(d_60ae_dd5c) == 0)
                        f_1bd3_0dbc(25);
                    sprintf(buf, "%s make a bid of %ld", (char far *)d_60ae_b572[d_60ae_dd5c],
                            d_2289_bbc0[d_60ae_db5e]);
                    f_8aa1_43f6(1, buf);
                }
                if (d_2289_bbc0[d_60ae_db5e] > d_60ae_d81b)
                    d_60ae_d81b = d_2289_bbc0[d_60ae_db5e];
            }
        }
        if (d_60ae_db68 > 1)
            d_60ae_d813 = d_60ae_d817;
        if (d_60ae_d813 < d_60ae_d81b)
            d_60ae_d813 = d_60ae_d81b;
        d_60ae_d93c = d_60ae_db64 > 0 ? -1 : 0;
        d_60ae_d817 = f_8aa1_3488(d_471b_0000[18][team], team, d_60ae_d813);
        ok = 0;
        for (d_60ae_db5e = 1; d_60ae_db5e <= d_60ae_db60; d_60ae_db5e++) {
            d_60ae_dd5c = d_2289_bd02[d_60ae_db5e];
            if (d_2289_bbc0[d_60ae_db5e] < d_60ae_d817 && d_2289_55a3[d_60ae_db5e] != 0)
                d_2289_55a3[d_60ae_db5e] = 0;
            if (d_2289_bbc0[d_60ae_db5e] == d_60ae_d817) {
                if (d_2289_55a3[d_60ae_db5e] == 0) {
                    d_2289_55a3[d_60ae_db5e] = -1;
                    d_60ae_d944 = -1;
                    if (d_60ae_db64 > 0) {
                        f_1bd3_0dbc(25);
                        sprintf(buf, "%s offer is accepted", (char far *)d_60ae_b572[d_60ae_dd5c]);
                        f_8aa1_43f6(1, buf);
                    }
                }
            } else {
                ok = -1;
                if (d_60ae_db64 > 0) {
                    f_1bd3_0dbc(25);
                    sprintf(buf, "%s offer is refused", (char far *)d_60ae_b572[d_60ae_dd5c]);
                    f_8aa1_43f6(1, buf);
                }
            }
        }
        if (ok == 0)
            d_60ae_db68 = 3;
    }
    if (d_323f_824a[team] == 0 && d_60ae_d944 == 0) {
        d_60ae_d82f = f_14bc_0d32(f_14bc_020c(team, -1), 0);
        if (d_60ae_d82f > d_60ae_d817)
            d_60ae_d82f = d_60ae_d817;
        if (d_60ae_db64 > 0) {
            f_1bd3_0dbc(25);
            sprintf(buf, "Tribunal sets fee at %ld", d_60ae_d82f);
            f_8aa1_43f6(6, buf);
        }
        d_60ae_d945 = -1;
        for (d_60ae_db5e = 1; d_60ae_db5e <= d_60ae_db60; d_60ae_db5e++) {
            d_60ae_dd5c = d_2289_bd02[d_60ae_db5e];
            if (f_14bc_5af6(d_60ae_dd5c) >= d_60ae_d82f) {
                d_2289_bbc0[d_60ae_db5e] = d_60ae_d82f;
                d_2289_55a3[d_60ae_db5e] = -1;
                d_60ae_d944 = -1;
            } else if (d_60ae_db64 > 0) {
                sprintf(buf, "The %s board refuse to spend that much", (char far *)d_60ae_b572[d_60ae_dd5c]);
                f_8aa1_43f6(1, buf);
            }
        }
    } else if (d_60ae_d944 == 0 && d_60ae_db64 > 0)
        f_8aa1_43f6(6, "No agreement is reached");
}

long f_8aa1_31e2(int player, int club, long fee)
{
    d_60ae_d80b = fee;
    if (f_14bc_2cc0(player)) {
        do {
            d_60ae_d960 = -1;
            d_60ae_db54 = d_60ae_d80b / 1000;
            d_60ae_db52 = player;
            d_60ae_db50 = f_8aa1_3f81(0, d_60ae_db54, 0, club);
            if (d_60ae_d93e) {
                do
                    f_a694_49c9(club, -1, 0);
                while (!d_60ae_d975);
                d_60ae_d975 = 0;
                d_60ae_d960 = 0;
                f_8aa1_3d10(0, club);
            }
            d_60ae_d80b = (long)d_60ae_db50 * 1000;
            if (d_60ae_d960 && f_14bc_5af6(player) < d_60ae_d80b) {
                f_8aa1_43f6(1, "The board refuse to spend that much");
                d_60ae_d960 = 0;
            }
        } while (!d_60ae_d960);
    } else {
        d_60ae_d807 = d_60ae_d80b;
        if (f_1bd3_0d69(3) > 0)
            d_60ae_d80b = d_60ae_d80b * (f_1bd3_0d69(10) / 100.0 + 1.1);
        if (d_60ae_d80b < d_60ae_d81b)
            d_60ae_d80b = f_1bd3_137e(d_60ae_d81b, d_60ae_d80f * (d_60ae_d93d ? 2.5 : 1.5));
        if (d_60ae_d80b > d_60ae_d817 && d_60ae_db60 == 1)
            d_60ae_d80b = d_60ae_d817;
        if (d_60ae_d80b > d_60ae_d817 * 0.95)
            d_60ae_d80b = d_60ae_d817;
        if (f_14bc_5af6(player) < d_60ae_d80b)
            d_60ae_d80b = f_14bc_5af6(player);
        if (d_60ae_d80b != d_60ae_d817)
            d_60ae_d80b = f_14bc_0d32(d_60ae_d80b, 0);
        if (d_60ae_d80b < d_60ae_d807)
            d_60ae_d80b = d_60ae_d807;
    }
    return d_60ae_d80b;
}

long f_8aa1_3488(int club, int player, long fee)
{
    int n;
    long first;
    int saved;

    saved = d_60ae_db34;
    d_60ae_db34 = club;
    d_60ae_d817 = fee;
    if (f_14bc_2cc0(d_60ae_db34)) {
        do {
            d_60ae_d960 = -1;
            d_60ae_db54 = d_60ae_d817 / 1000;
            n = d_60ae_d81b / 1000;
            d_60ae_db50 = f_8aa1_3f81(1, d_60ae_db54, n, player);
            if (d_60ae_d93e) {
                do
                    f_a694_49c9(player, -1, 0);
                while (!d_60ae_d975);
                d_60ae_d975 = 0;
                d_60ae_d960 = 0;
                f_8aa1_3d10(0, player);
            }
            d_60ae_d817 = (long)d_60ae_db50 * 1000;
            if (d_60ae_d960 && d_60ae_d817 < f_14bc_020c(player, -1) * 0.5) {
                f_8aa1_43f6(1, "The board expect more for him");
                d_60ae_d960 = 0;
            }
        } while (!d_60ae_d960);
    } else {
        first = d_60ae_d817;
        if (f_1bd3_0d69(2) == 0)
            d_60ae_d817 = d_60ae_d817 * (0.9 - f_1bd3_0d69(10) / 100);
        if (d_60ae_d817 * 0.95 < d_60ae_d81b)
            d_60ae_d817 = d_60ae_d81b;
        else if (d_60ae_d817 > d_60ae_d81b)
            d_60ae_d817 = f_14bc_0d32(d_60ae_d817, 0);
        if (d_60ae_d817 > first)
            d_60ae_d817 = first;
    }
    d_60ae_db34 = saved;
    return d_60ae_d817;
}

void f_8aa1_36d2(int player, int club)
{
    d_60ae_db4e = f_8aa1_3cc7(d_471b_0000[17][player]);
    d_60ae_db4c = f_14bc_6f9a(player, club);
    d_60ae_db4a = d_471b_0000[14][player] / 10 + 2.5;
    d_60ae_d948 = 0;
    if (f_14bc_2cc0(club) && d_60ae_d93b == 0) {
        char buf[320];

        d_60ae_d99a = 1;
        d_60ae_db5a = 7;
        f_8aa1_3d10(2, player);
        sprintf(buf, "He wants a %d year contract", d_60ae_db4e);
        f_8aa1_43f6(1, buf);
        d_60ae_db48 = 0;
        d_60ae_db46 = 10;
        d_60ae_db44 = -1;
        do {
            do {
                d_60ae_d960 = -1;
                d_60ae_db54 = d_60ae_db44 == -1 ? d_60ae_db4e : d_60ae_db44;
                d_60ae_db50 = f_8aa1_3f81(2, d_60ae_db54, 1, player);
                if (d_60ae_d93e) {
                    do
                        f_a694_49c9(player, -1, 0);
                    while (!d_60ae_d975);
                    d_60ae_d975 = 0;
                    d_60ae_d960 = 0;
                    f_8aa1_3d10(2, player);
                }
                d_60ae_db44 = d_60ae_db50;
            } while (!d_60ae_d960);
            if (d_60ae_db44 != d_60ae_db4e &&
                (f_1bd3_0d69(abs(d_60ae_db4e - d_60ae_db44) + 2) > 0 ||
                 abs(d_60ae_db4e - d_60ae_db44) >= d_60ae_db46)) {
                sprintf(buf, "He refuses %d year offer", d_60ae_db44);
                f_8aa1_43f6(1, buf);
                d_60ae_db48++;
                if (d_60ae_db48 <= d_60ae_db4a)
                    d_60ae_db46 = abs(d_60ae_db4e - d_60ae_db44);
                d_60ae_d960 = 0;
            }
        } while (d_60ae_db48 <= d_60ae_db4a && d_60ae_d960 == 0);
        if (d_60ae_d960) {
            sprintf(buf, "He accepts %d year offer", d_60ae_db44);
            f_8aa1_43f6(1, buf);
            sprintf(buf, "He wants %d per week", d_60ae_db4c);
            f_8aa1_43f6(1, buf);
            d_60ae_db70 = d_60ae_db44;
            d_60ae_d93c = -1;
            d_60ae_db48 = 0;
            d_60ae_db42 = -1;
            d_60ae_db40 = 0;
            d_60ae_db3e = f_8aa1_3b46(player, club);
            do {
                do {
                    d_60ae_d960 = -1;
                    d_60ae_db54 = d_60ae_db42 == -1 ? d_60ae_db4c : d_60ae_db42;
                    d_60ae_db50 = f_8aa1_3f81(3, d_60ae_db54, 100, player);
                    if (d_60ae_d93e) {
                        do
                            f_a694_49c9(player, -1, 0);
                        while (!d_60ae_d975);
                        d_60ae_d975 = 0;
                        d_60ae_d960 = 0;
                        f_8aa1_3d10(2, player);
                    }
                    d_60ae_db42 = d_60ae_db50;
                    if (d_60ae_d960 && d_60ae_db42 > d_60ae_db3e) {
                        f_8aa1_43f6(1, "The board refuse to spend that per week");
                        d_60ae_d960 = 0;
                    }
                } while (!d_60ae_d960);
                d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
                if ((d_60ae_db4c * (1 - f_1bd3_0d69(6) * 0.05) > d_60ae_db42 ||
                     d_60ae_db42 <= d_60ae_db40 || d_60ae_fae6[4][player] > d_60ae_db42 &&
                     d_471b_0000[17][player] < 30) &&
                    abs(d_60ae_db42 - d_60ae_db4c) > f_1bd3_0d69(20) + 25) {
                    sprintf(buf, "He wants more than %d per week", d_60ae_db42);
                    f_8aa1_43f6(1, buf);
                    d_60ae_db48++;
                    if (d_60ae_db48 <= d_60ae_db4a)
                        d_60ae_db40 = d_60ae_db42;
                    d_60ae_d960 = 0;
                }
            } while (d_60ae_db48 <= d_60ae_db4a && d_60ae_d960 == 0);
            if (d_60ae_d960) {
                sprintf(buf, "He accepts %d per week", d_60ae_db42);
                f_8aa1_43f6(1, buf);
                d_60ae_db6e = d_60ae_db42;
                d_60ae_d948 = -1;
            }
        }
        if (d_60ae_d948 == 0)
            f_8aa1_43f6(6, "No deal");
    } else {
        d_60ae_db70 = d_60ae_db4e;
        d_60ae_db6e = d_60ae_db4c;
        d_60ae_d948 = -1;
    }
}

int f_8aa1_3b46(int player, int team)
{
    unsigned char c;
    unsigned char r;
    unsigned char rep = team < 80 ? f_14bc_2cf4(team) : 16.0;
    float w;
    float t[4] = { 1.0, 0.8, 0.6, 0.5 };

    c = d_3c35_0000[18][player];
    d_60ae_db3c = (d_471b_0000[0][player] * 4 + c) / 5;
    r = f_1bd3_1307(f_1bd3_1369(19, d_60ae_db3c / 10), 0);
    w = rep * 0.14 * (d_2282_0000[r] * 400.0) * t[team < 80 ? team / 20 : 0];
    w = w * (d_471b_0000[17][player] / 100.0 + 1);
    if (d_60ae_ddbe[player].a.f28)
        w = w * 1.3;
    d_60ae_db3e = (int)(w / 50.0) * 50;
    d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
    if (d_60ae_fae6[4][player] > d_60ae_db3e)
        d_60ae_db3e = d_60ae_fae6[4][player];
    return d_60ae_db3e;
}

int f_8aa1_3cc7(int age)
{
    d_60ae_db4e = f_1bd3_0d69(5) + 1;
    if (age >= 27 && age <= 31)
        d_60ae_db4e = f_1bd3_1369(32 - age, d_60ae_db4e);
    else if (age > 31)
        d_60ae_db4e = f_1bd3_1369(d_60ae_db4e, 2);
    return d_60ae_db4e;
}

void f_8aa1_3d10(int mode, int player)
{
    char buf[320];

    if (mode == 0) {
        sprintf(buf, "%s - Transfer Fee", f_14bc_4703(player));
        strcpy(d_2289_4818, "Fee Negotiations");
    } else if (mode == 1) {
        sprintf(buf, "%s - Asking Price", f_14bc_4703(player));
        strcpy(d_2289_4818, "Set Asking Price");
    } else if (mode == 2) {
        sprintf(buf, "%s - Contract", f_14bc_4703(player));
        strcpy(d_2289_4818, "Set Contract");
    } else {
        sprintf(buf, "%s - Wage Increase", f_14bc_4703(player));
        strcpy(d_2289_4818, "Set Weekly Wage");
    }
    f_14bc_4bd3(buf);
    f_1bd3_08cb(16);
    f_1bd3_08e1(14, 36, 314, 127);
    f_1bd3_08cb(31);
    f_1bd3_08e1(10, 32, 310, 123);
    f_1bd3_08d6(19);
    f_1bd3_0928(10, 32, 310, 123);
    sprintf(buf, " %s", d_2289_4818);
    f_14bc_3672(1.625, 5.0, 1, 2, 296, buf);
    f_8aa1_3ea2(player, 0);
    d_60ae_d93c = -1;
    d_60ae_d99a = 0;
}

void f_8aa1_3ea2(int player, char lit)
{
    f_1bd3_08cb(16);
    f_1bd3_08e1(14, 135, 172, 192);
    f_1bd3_08cb(lit ? 28 : 20);
    f_1bd3_08e1(10, 131, 168, 188);
    f_1bd3_08d6(17);
    f_1bd3_0928(10, 131, 168, 188);
    strcpy(d_2289_3872, f_14bc_48b4(player));
    f_14bc_356a(79 - strlen(d_2289_3872) * 3 + 19, 156, 1, d_2289_3872);
    f_14bc_356a(74, 164, 1, "Factfile");
}

int f_8aa1_3f81(int mode, int value, int lo, int player)
{
    d_60ae_d93e = 0;
    d_60ae_db38 = value;
    d_60ae_db36 = mode == 2 ? 5 : 9999;
    if (d_60ae_d93c != 0) {
        f_14bc_5053();
        f_1bd3_08cb(16);
        f_1bd3_08e1(180, 135, 314, 192);
        f_1bd3_08cb(24);
        f_1bd3_08e1(176, 131, 310, 188);
        f_1bd3_08d6(22);
        f_1bd3_0928(176, 131, 310, 188);
        if (mode == 0)
            sprintf(d_2289_3822, "%s Offer", (char far *)d_60ae_b572[d_60ae_db52]);
        else if (mode == 1)
            sprintf(d_2289_3822, "%s Ask", (char far *)d_60ae_b572[d_60ae_db34]);
        else if (mode == 2)
            strcpy(d_2289_3822, " Length");
        else
            strcpy(d_2289_3822, " Wages p/w");
        f_1bd3_08cb(30);
        f_1bd3_08e1(180, 135, 306, 150);
        f_14bc_356a(251 - strlen(d_2289_3822) * 3, 146, 6, d_2289_3822);
        f_14bc_50f8(2, 22.75, 19.625, 1, 14, 26, " - ");
        f_14bc_50f8(2, 34.875, 19.625, 1, 14, 26, " + ");
        f_14bc_50f8(2, 22.75, 21.75, 1, 14, 123, "      DONE");
        f_14bc_3e40(33.125, 19.625, 14, 1, 9, mode == 2 || mode == 3 ? "" : "K");
        strcpy(d_2289_37d2, "    ");
        f_8aa1_42e5(d_60ae_db38, -1);
    }
    do {
        d_60ae_dda0 = f_14bc_5635(-1);
        if (d_60ae_dda0 == 1) {
            d_60ae_db38 = f_1bd3_1307(d_60ae_db38 - d_60ae_30cc[7 - d_60ae_db5a], lo);
            f_8aa1_42e5(d_60ae_db38, 0);
        } else if (d_60ae_dda0 == 2) {
            d_60ae_db38 = f_1bd3_1369(d_60ae_db38 + d_60ae_30cc[7 - d_60ae_db5a], d_60ae_db36);
            f_8aa1_42e5(d_60ae_db38, 0);
        } else if (d_60ae_dda0 >= 4) {
            if ((d_60ae_dda0 == 7 || mode != 2) && d_60ae_db5a != d_60ae_dda0) {
                d_471b_ae8b[d_60ae_db5a] = 0xe1;
                f_14bc_548f(d_60ae_db5a, 0);
                d_60ae_db5a = d_60ae_dda0;
                d_471b_ae8b[d_60ae_db5a] = 1;
                f_14bc_548f(d_60ae_db5a, 0);
            }
        } else if (f_1bd3_0c0e() >= 10 && f_1bd3_0c0e() <= 168 && f_1bd3_0c06() >= 131 && f_1bd3_0c06() <= 188) {
            d_60ae_d93e = -1;
            f_8aa1_3ea2(player, -1);
        }
    } while (d_60ae_dda0 != 3 && d_60ae_d93e == 0);
    d_60ae_d93c = 0;
    return d_60ae_db38;
}

void f_8aa1_42e5(int n, char draw)
{
    char s[2];

    s[1] = 0;
    sprintf(d_2289_4ae8, "%04d", n);
    for (d_60ae_dcc4 = 1; d_60ae_dcc4 <= 4; d_60ae_dcc4++) {
        s[0] = d_2289_4ae8[d_60ae_dcc4 - 1];
        if (d_2289_37d2[d_60ae_dcc4 - 1] != s[0]) {
            if (draw) {
                d_60ae_d8db = (d_60ae_dcc4 - 1) * 1.625 + 26.625;
                f_14bc_50f8(2, d_60ae_d8db, 19.625, d_60ae_dcc4 + 3 != d_60ae_db5a ? 14 : 0, 1, 8, s);
            } else {
                strcpy(d_2289_0e88[d_60ae_dcc4 + 2], s);
                f_14bc_548f(d_60ae_dcc4 + 3, 0);
            }
        }
    }
    strcpy(d_2289_37d2, d_2289_4ae8);
}

void f_8aa1_43f6(int colour, char far *s)
{
    if (d_60ae_d99a == 9) {
        for (d_60ae_dba0 = 1; d_60ae_dba0 <= 4; d_60ae_dba0++) {
            f_1bd3_114b(12, 42, 308, 121, 2, 31);
            f_1bd3_08d6(31);
            f_1bd3_0fe2(12, 42, 308, 42);
            f_1bd3_0fe2(12, 43, 308, 43);
        }
        d_60ae_d99a = 8;
    }
    f_14bc_356a(23, d_60ae_d99a * 8 + 50, colour, s);
    d_60ae_d99a++;
    if (colour == 6)
        f_1bd3_0dbc(50);
}

void f_8aa1_44ad(int player, int to, int from, long fee, unsigned char kind)
{
    int saved;

    saved = from;
    d_60ae_db34 = from;
    if (d_60ae_dd9c > 8)
        f_ad38_2f53(player);
    if (to < 80 && f_14bc_2cc0(to) && kind != 2)
        f_ad38_428a(d_323f_47b4[to] + 122, 1, player, d_60ae_db34, kind ? 1L : fee, d_60ae_d945);
    if (d_60ae_db34 < 80 && f_14bc_2cc0(d_60ae_db34) && kind != 2)
        f_ad38_428a(d_323f_47b4[d_60ae_db34] + 122, 2, player, to, kind ? 1L : fee, d_60ae_d945);
    if (kind == 1) {
        d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 1);
        d_60ae_fad2[4][player] = d_3c35_0000[12][player];
        d_60ae_fad2[5][player] = d_3c35_0000[13][player];
        d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 1);
        d_60ae_fae6[3][player] = d_60ae_fae6[2][player];
        d_323f_62d2[to]++;
    }
    if (kind == 2) {
        d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 0);
        d_3c35_0000[12][player] = d_60ae_fad2[4][player];
        d_3c35_0000[13][player] = d_60ae_fad2[5][player];
        d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 1);
        d_60ae_fae6[2][player] = d_60ae_fae6[3][player];
    } else if (kind < 2) {
        d_3c35_0000[12][player] = 0;
        d_3c35_0000[13][player] = 0;
        d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 1);
        d_60ae_fae6[2][player] = 0;
    }
    if (kind == 0) {
        d_323f_824a[player] = (d_60ae_dd98 + d_60ae_db70) * 100 + f_14bc_6b05(d_60ae_dd9c);
        d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 1);
        d_60ae_fae6[4][player] = d_60ae_db6e;
        d_60ae_ddbe[player].w.f9 = 1;
        d_60ae_ddbe[player].w.f11 = 1;
        d_60ae_ddbe[player].w.f12 = 0;
        d_60ae_ddbe[player].w.f13 = 0;
    } else if (kind == 1)
        d_3c35_0000[9][player]++;
    d_3c35_0000[11][player] = 0;
    d_60ae_ddbe[player].w.f8 = 0;
    d_60ae_ddbe[player].w.f10 = 0;
    d_60ae_ddbe[player].w.f20 = kind == 1;
    d_60ae_ddbe[player].w.f24 = 0;
    d_60ae_ddbe[player].w.f16 = 0;
    if (d_60ae_db34 != to) {
        if (kind < 2) {
            long v;
            unsigned char c;

            if (kind == 0) {
                if (d_471b_0000[0][player] > d_471b_0000[15][player])
                    d_471b_0000[15][player] = d_471b_0000[0][player];
                if (d_60ae_db34 < 80 && !d_60ae_d980) {
                    d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
                    d_60ae_fade[2][d_60ae_db34] += fee * 0.9;
                }
                if (to < 80 && !d_60ae_d980) {
                    d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
                    d_60ae_fade[9][to] += fee;
                }
                if (d_60ae_db34 < 80 && to < 80 && !d_60ae_d980)
                    for (d_60ae_dd5c = 0; d_60ae_dd5c <= 79; d_60ae_dd5c++)
                        if (d_60ae_dd5c != to && d_60ae_dd5c != d_60ae_db34) {
                            d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
                            d_60ae_fade[6][d_60ae_dd5c] += fee * (1.0 / 780);
                        }
                if (to < 80) {
                    f_96bb_4c07(player, d_60ae_db34, to, fee);
                    d_323f_40d4[to] += fee;
                }
                if (d_60ae_db34 < 80) {
                    f_96bb_4c87(player, d_60ae_db34, to, fee);
                    d_323f_4214[d_60ae_db34] += fee;
                }
                v = fee;
            } else
                v = 1;
            if (d_60ae_db34 < 80) {
                c = d_2289_7b16[d_60ae_db34].nout % 6;
                d_2289_7b16[d_60ae_db34].out[c] = player;
                d_2289_7b16[d_60ae_db34].outto[c] = to;
                d_2289_7b16[d_60ae_db34].outfee[c] = v;
                d_2289_7b16[d_60ae_db34].nout++;
            }
            if (to < 80) {
                c = d_2289_7b16[to].nin % 6;
                d_2289_7b16[to].in[c] = player;
                d_2289_7b16[to].infrom[c] = d_60ae_db34;
                d_2289_7b16[to].infee[c] = v;
                d_2289_7b16[to].nin++;
            }
        }
        d_3c35_0000[10][player] = d_60ae_db34;
        f_8aa1_4c5d(player, d_60ae_db34, to, kind);
    }
    if (kind == 0)
        f_8aa1_1865(player, 0);
    if (to < 80 && f_14bc_2cc0(to) == 0 && d_60ae_d97c == 0 && kind != 2) {
        unsigned char i;

        for (i = 0; d_2289_7986[i].player != -1; i++)
            ;
        d_2289_7986[i].player = player;
        d_2289_7986[i].from = d_60ae_db34;
        d_2289_7986[i].to = to;
        if (kind == 0)
            d_2289_7986[i].fee = fee;
        else if (kind == 1)
            d_2289_7986[i].fee = 1;
        f_b628_6d15(i);
    }
    if (to < 80 && f_14bc_2cc0(to) == 0)
        f_8aa1_198d(to);
    d_60ae_db34 = saved;
}

void f_8aa1_4c5d(int player, int from, int to, char kind)
{
    if (from != to) {
        if (from < 80) {
            if (f_14bc_6f7c(player) == 0)
                for (d_60ae_dd1e = 0; d_60ae_dd1e <= d_323f_4e52[from] - 1; d_60ae_dd1e++)
                    if (d_471b_b7a8[from][d_60ae_dd1e] == player)
                        d_471b_b7a8[from][d_60ae_dd1e] = d_471b_b7a8[from][d_323f_4e52[from] - 1];
            d_323f_4e52[from]--;
            if (d_60ae_ddbe[player].w.f0)
                d_323f_4f48[from]--;
            if (f_14bc_2cc0(from) && f_14bc_6f7c(player) == 0)
                f_b628_372a(player, from);
        }
        if (to < 80) {
            d_471b_b7a8[to][d_323f_4e52[to]] = player;
            d_323f_4e52[to]++;
            if (d_60ae_ddbe[player].w.f0)
                d_323f_4f48[to]++;
            if (f_14bc_2cc0(to))
                f_b628_36d3(player, to);
        }
    }
    if (from < 80 && f_14bc_6f7c(player) == 0) {
        if (f_14bc_2cc0(from) == 0)
            f_14bc_0ecb(player);
        else if (d_60ae_ddbe[player].w.f7) {
            d_323f_0592[from][f_14bc_1eb7(player)] = 0x743;
            d_60ae_ddbe[player].w.f7 = 0;
        }
        if (d_471b_0000[23][player] < 3)
            f_14bc_16af(player);
    }
    if (from != to) {
        d_471b_0000[18][player] = to;
        if (kind == 1) {
            d_3c35_0000[7][player] = from;
            d_3c35_0000[8][player] = 8;
            d_323f_6094[from]++;
            d_323f_6042[to]++;
        } else if (kind == 2) {
            d_3c35_0000[7][player] = -1;
            d_323f_6042[from]--;
            d_323f_6094[to]--;
        }
        if (to < 80) {
            if (f_14bc_2cc0(to) == 0 && d_471b_0000[20][player] == 0)
                f_14bc_1365(player);
            d_471b_0000[23][player] = 3;
            f_14bc_1993(player);
        }
    }
}

void f_8aa1_4f06(int player, int a)
{
    unsigned char c;
    char s[80];
    char buf[320];

    if (a > 0) {
        if (f_14bc_6f7c(player) == 0)
            f_8aa1_1d9c(a - 1, player, 0);
        else
            f_b628_45a6(player, a - 1);
    } else if (a == -1)
        f_8aa1_50f4(player, 0);
    else if (a < -1) {
        d_60ae_db32 = -a - 2;
        do {
            f_14bc_4bd3("Shortlist/Watch Player");
            f_14bc_4587(1.0, 4.0, d_60ae_db32);
            sprintf(buf, "Shortlist %s ?", f_14bc_4703(player));
            f_14bc_0ac0(7, buf);
            f_14bc_2f90(10, "", "*Exit|Shortlist|Shortlist & Watch|");
            f_14bc_3334(2);
            c = d_60ae_dda0;
            if (c > 0) {
                if (f_8aa1_1a8b(d_60ae_db32, player) > 0)
                    sprintf(buf, "%s already shortlisted", f_14bc_48b4(player));
                else {
                    d_2289_f108[d_60ae_db32][0]++;
                    d_2289_f108[d_60ae_db32][d_2289_f108[d_60ae_db32][0]] = player;
                    sprintf(buf, "Ok - %s shortlisted", f_14bc_48b4(player));
                    if (d_60ae_dce6 > 1) {
                        sprintf(s, "|for %s", (char far *)d_60ae_b572[d_60ae_db32]);
                        strcat(buf, s);
                    }
                }
                f_14bc_0b83(buf);
            }
            if (c == 2) {
                if (f_14bc_6f7c(player) == 0)
                    f_ad38_6337(d_60ae_db32, player);
                else
                    f_14bc_0b83("Can't watch foreign|based players");
            }
        } while (c > 0);
    }
}

char f_8aa1_50f4(int player, char flag)
{
    d_60ae_d93a = 0;
    if (f_14bc_2cc0(d_471b_0000[18][player]))
        f_8aa1_5253(player);
    else if (!d_60ae_ddbe[player].w.f9 && !d_60ae_ddbe[player].w.f30 && f_14bc_2dfc(player) == 0
             && d_471b_0000[23][player] == 3 && d_323f_4854[d_471b_0000[18][player]] < 650) {
        if (flag == 0 && f_14bc_2db8(player) < f_14bc_2cf4(d_471b_0000[18][player]) + 3.0
            || flag != 0 && f_14bc_2db8(player) >= f_14bc_2cf4(d_471b_0000[18][player]) + 3.0
               && d_471b_0000[20][player] == 0 && !d_60ae_ddbe[player].w.f7 && d_3c35_0000[9][player] < 2)
            d_60ae_d93a = -1;
    }
    return d_60ae_d93a;
}

/* f_8aa1_5253: the `0;`s and the gotos to a label on the first copy of a statement are
 * code-free: they make BCC keep the copies of the branches' identical endings that the
 * original keeps (docs/matching.md, merged tails; the module is compiled with -y). */
void f_8aa1_5253(int player)
{
    unsigned char n;
    unsigned char club;
    unsigned char c;
    char buf[320];
    char item[30];

    do {
        n = 0;
        d_60ae_d93f = 0;
        d_60ae_d939 = f_14bc_6b4a(player, 0);
        f_14bc_4bd3("Transfer Status");
        club = d_3c35_0000[7][player] < 255 ? d_3c35_0000[7][player] : d_471b_0000[18][player];
        f_14bc_4587(1.0, 4.0, club);
        f_14bc_0ac0(7, f_14bc_4703(player));
        if (d_3c35_0000[7][player] < 255) {
            sprintf(buf, "On loan to %s", (char far *)d_60ae_b572[d_471b_0000[18][player]]);
            f_14bc_0ac0(9, buf);
            if (d_3c35_0000[8][player] < 3) {
                strcpy(d_2289_5308, "Terminate Loan|Extend Loan|");
                n += 2;
            } else {
                strcpy(d_2289_5308, "Terminate Loan|");
                n++;
            }
        } else {
            if (d_60ae_ddbe[player].w.f8 && !d_60ae_ddbe[player].w.f24) {
                d_60ae_faf2 = f_1bd3_1617(d_60ae_fdec, 0);
                if (d_60ae_faf2[player] > 0)
                    sprintf(buf, "For sale at %ld", d_60ae_faf2[player]);
                else
                    strcpy(buf, "Available for free transfer");
                f_14bc_0ac0(9, buf);
                strcpy(d_2289_5308, "Revalue Him|Remove From List|");
                n += 2;
            } else if (d_60ae_ddbe[player].w.f8 && d_60ae_ddbe[player].w.f24) {
                strcpy(buf, "Available for loan");
                f_14bc_0ac0(9, buf);
                strcpy(d_2289_5308, "Remove From List|");
                n++;
            } else if (d_60ae_ddbe[player].w.f9 || d_60ae_ddbe[player].w.f30) {
                f_14bc_0ac0(9, "Not for sale at any price");
                strcpy(d_2289_5308, "Allow Approaches|");
                n++;
            } else {
                f_14bc_0ac0(9, "Currently open to approach");
                strcpy(d_2289_5308, "List/Loan Him|Not For Sale|");
                n += 2;
            }
            strcat(d_2289_5308, "Fine Him|");
            n++;
            if (!d_60ae_ddbe[player].w.f20)
                strcat(d_2289_5308, "Insure Him|");
            else
                strcat(d_2289_5308, "Uninsure Him|");
            n++;
            if (d_323f_824a[player] == 0 || d_323f_824a[player] / 100 == d_60ae_dd98) {
                strcat(d_2289_5308, "Renew Contract|");
                n++;
            }
            if (d_323f_824a[player] > 0 && !d_60ae_ddbe[player].w.f8) {
                strcat(d_2289_5308, "Increase Wages|");
                n++;
            }
            if (d_471b_0000[20][player] > 0 && d_471b_0000[19][player] < 26) {
                strcat(d_2289_5308, "Rehabilitate|");
                n++;
            }
        }
        sprintf(buf, "*Exit|%s", d_2289_5308);
        n++;
        f_14bc_2f90(12, "", buf);
        do {
            d_60ae_d977 = -1;
            f_14bc_3334(n - 1);
            strcpy(item, d_2289_0848[d_60ae_dda0]);
            if (strstr(item, "Terminate")) {
                if (f_14bc_0c5e()) {
                    sprintf(buf, "%s returns from loan", f_14bc_48b4(player));
                    f_14bc_0b30(buf);
                    f_8aa1_44ad(player, d_3c35_0000[7][player], d_471b_0000[18][player], 0L, 2);
                } else
                    d_60ae_d977 = 0;
            } else if (strstr(item, "Extend")) {
                if (f_14bc_0c5e()) {
                    c = d_3c35_0000[7][player];
                    if (f_b628_62f4(player)) {
                        d_3c35_0000[8][player] += 4;
                        d_3c35_0000[9][player]++;
                        sprintf(buf, "%s accept your request", (char far *)d_60ae_b572[c]);
                        f_14bc_0b30(buf);
                        f_14bc_0b30("The loan is extended by a month");
                    } else {
                        sprintf(buf, "%s refuse your request", (char far *)d_60ae_b572[c]);
                        f_14bc_0b30(buf);
                    }
                    if (f_14bc_2cc0(c))
                        T2: d_60ae_d93f = -1;
                    else
                        d_60ae_d977 = 0;
                } else
                    d_60ae_d977 = 0;
            } else if (strstr(item, "Revalue")) {
                f_9107_0af9(player);
                d_60ae_d93f = -1;
            } else if (strstr(item, "Allow")) {
                if (f_14bc_0c5e()) {
                    sprintf(buf, "%s now approachable", f_14bc_48b4(player));
                    f_14bc_0b30(buf);
                    d_60ae_ddbe[player].w.f9 = 0;
                    d_60ae_d93f = -1;
                } else
                    d_60ae_d977 = 0;
            } else if (strstr(item, "List/Loan")) {
                f_14bc_2f90(0, "List/Loan Him", "*Exit|List Him|Loan Him|");
                if (d_60ae_dda0 == 1) {
                    sprintf(buf, "%s now transfer listed", f_14bc_48b4(player));
                    f_14bc_0b30(buf);
                    f_9107_09dc(player, 0, 0);
                } else if (d_60ae_dda0 == 2) {
                    sprintf(buf, "%s now available for loan", f_14bc_48b4(player));
                    f_14bc_0b30(buf);
                    f_9107_09dc(player, 0, -1);
                }
                d_60ae_d93f = -1;
            } else if (strstr(item, "Remove")) {
                if (f_14bc_0c5e()) {
                    if (d_60ae_ddbe[player].w.f10) {
                        if (d_60ae_d939 && d_323f_824a[player] == 0) {
                            sprintf(buf, "%s refuses", f_14bc_48b4(player));
                            f_14bc_0b30(buf);
                            sprintf(buf, "He %s", d_2289_3af4);
                            f_14bc_0b30(buf);
                            d_60ae_d977 = 0;
                        } else if (d_60ae_d939 && d_323f_824a[player] > 0) {
                            sprintf(buf, "%s told to stay", f_14bc_48b4(player));
                            f_14bc_0b30(buf);
                            f_14bc_0b30("But he's still unhappy");
                            goto agreed;
                        } else {
                            sprintf(buf, "%s agrees to stay", f_14bc_48b4(player));
                            f_14bc_0b30(buf);
                        agreed:
                            f_9107_0aad(player);
                            d_60ae_d93f = -1;
                        }
                    } else {
                        sprintf(buf, "%s removed from list", f_14bc_48b4(player));
                        f_14bc_0b30(buf);
                        f_9107_0aad(player);
                        d_60ae_d93f = -1;
                    }
                } else
                    d_60ae_d977 = 0;
            } else if (strstr(item, "Not For")) {
                if (d_323f_824a[player] == 0) {
                    sprintf(buf, "%s must sign a new contract", f_14bc_48b4(player));
                    f_14bc_0b30(buf);
                    d_60ae_d977 = 0;
                } else if (f_14bc_0c5e()) {
                    sprintf(buf, "%s now unapproachable", f_14bc_48b4(player));
                    f_14bc_0b30(buf);
                    d_60ae_ddbe[player].w.f9 = 1;
                notfor_done:
                    goto T2;
                } else
                    d_60ae_d977 = 0;
            } else if (strstr(item, "Fine")) {
                if (f_14bc_0c5e()) {
                    d_60ae_dce4 = d_323f_47b4[d_471b_0000[18][player]] - 646;
                    sprintf(buf, "%04d", player);
                    d_60ae_ddaa = f_1bd3_1617(d_60ae_fdd0, 0);
                    d_60ae_d938 = f_1bd3_0b1b(d_60ae_ddaa[d_60ae_dce4], buf) > 0;
                    if (d_60ae_d938)
                        f_14bc_0b30("Maximum one fine per week");
                    else {
                        sprintf(buf, "%s fined a weeks wages", f_14bc_48b4(player));
                        f_14bc_0b30(buf);
                        f_9107_117d(player, d_60ae_ddbe[player].w.f15);
                        sprintf(buf, "%04d", player);
                        d_60ae_ddaa = f_1bd3_1617(d_60ae_fdd0, 1);
                        strcat(d_60ae_ddaa[d_60ae_dce4], buf);
                        if (d_60ae_db2e == 3 || !d_60ae_ddbe[player].w.f15) {
                            switch (d_60ae_dbc8 = f_1bd3_0d69(3)) {
                            case 0:
                                strcpy(buf, "He cannot believe it");
                                break;
                            case 1:
                                strcpy(buf, "He is astonished");
                                break;
                            case 2:
                                strcpy(buf, "He feels it is unfair");
                                break;
                            }
                            f_14bc_0b30(buf);
                        } else if (d_60ae_db2e != 2) {
                            d_60ae_d977 = 0;
                            continue;
                        } else {
                            switch (d_60ae_dbc8 = f_1bd3_0d69(3)) {
                            case 0:
                                strcpy(buf, "He is not happy");
                                break;
                            case 1:
                                strcpy(buf, "He is disappointed");
                                break;
                            case 2:
                                strcpy(buf, "He is upset");
                                break;
                            }
                            0;
                            f_14bc_0b30(buf);
                        }
                    }
                    0;
                    d_60ae_d977 = 0;
                } else
                    d_60ae_d977 = 0;
            } else if (strstr(item, "Insure")) {
                if (d_471b_0000[20][player] > 0 && d_471b_0000[19][player] < 26) {
                    f_14bc_0b30("Insurance refused - player injured");
                    d_60ae_d977 = 0;
                } else {
                    d_60ae_d803 = f_9107_1391(player);
                    sprintf(buf, "Insurance would cost %ld p/w", d_60ae_d803);
                    f_14bc_0b30(buf);
                    if (f_14bc_0c5e()) {
                        sprintf(buf, "%s now insured", f_14bc_48b4(player));
                        f_14bc_0b30(buf);
                        d_60ae_ddbe[player].w.f20 = 1;
                        goto notfor_done;
                    } else
                        d_60ae_d977 = 0;
                }
            } else if (strstr(item, "Uninsure")) {
                if (f_14bc_0c5e()) {
                    sprintf(buf, "%s now uninsured", f_14bc_48b4(player));
                    f_14bc_0b30(buf);
                    d_60ae_ddbe[player].w.f20 = 0;
                    d_60ae_d93f = -1;
                } else
                    d_60ae_d977 = 0;
            } else if (strstr(item, "Renew")) {
                d_60ae_dce4 = d_323f_47b4[d_471b_0000[18][player]] - 646;
                sprintf(buf, "%04d", player);
                d_60ae_ddae = f_1bd3_1617(d_60ae_fdd2, 0);
                d_60ae_d938 = strstr(d_60ae_ddae[d_60ae_dce4], buf) ? 1 : 0;
                if (d_60ae_d938 || d_60ae_d939 || f_b628_4f4c(player)) {
                    sprintf(buf, "%s refuses to negotiate", f_14bc_48b4(player));
                    f_14bc_0b30(buf);
                    if (d_60ae_d939)
                        sprintf(buf, "He %s", d_2289_3af4);
                    else if (f_b628_4f4c(player))
                        strcpy(buf, "He is expected to move abroad");
                    else
                        strcpy(buf, "He may resume talks next week");
                    f_14bc_0b30(buf);
                    d_60ae_d977 = 0;
                } else {
                    sprintf(buf, "%s agrees to negotiate", f_14bc_48b4(player));
                    f_14bc_0b30(buf);
                    f_9107_0000(player, d_471b_0000[18][player], d_60ae_dce4);
                    d_60ae_d93f = -1;
                }
            } else if (strstr(item, "Increase")) {
                f_9107_0e89(player);
                d_60ae_d93f = -1;
            } else if (strstr(item, "Rehab")) {
                f_b628_09ef(player);
                d_60ae_d93f = -1;
            }
        } while (!d_60ae_d977);
    } while (d_60ae_d93f != 0);
}
