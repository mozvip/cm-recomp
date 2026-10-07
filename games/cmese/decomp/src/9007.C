/* @at 9007:0000 */
/* @data 69da:2f7c */
/* @module */

/* Overlay 9007 (CM93's 8AA1.C, from CM1's 8352.C): transfers and contracts: the cup group
 * tables, the week's loans and transfer news, picking and approaching players to buy or to
 * take on loan, bids, fees, asking prices and tribunals, contract and wage talks, the offer
 * and factfile screens, completing transfers, and the player-actions menu (f_9007_511f, the
 * things to do with one of your own players, which is still original bytes in CM1 and
 * CM93). Its data is the steps of the digits a value is set with, the initialiser of
 * f_9007_3aa8's factors, then its literal pool. Jump optimisation is off from 4ad8 on. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <math.h>
#include <stdlib.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_9007_0000(void);
void f_9007_021e(void);
unsigned char f_9007_054e(unsigned char skip);
void f_9007_061e(void);
void f_9007_06d6(void);
void f_9007_0908(void);
void f_9007_0d1c(int n);
char f_9007_0f7d(int team);
void f_9007_1001(int team);
int f_9007_10a0(int team);
void f_9007_11c8(void);
void f_9007_13f8(int p);
char f_9007_15fa(int p, int team);
void f_9007_17fd(int p, char all);
void f_9007_193f(int team);
int f_9007_1a61(int team, int p);
void f_9007_1abb(void);
void f_9007_1d9a(int team, int player, char loan);
char f_9007_27e4(int p, int team, int n);
int f_9007_29b8(int a, int b);
char f_9007_2aae(int x, int team, int p);
void f_9007_2c4c(int team);
long f_9007_31bc(int player, int club, long fee);
long f_9007_344b(int club, int player, long fee);
void f_9007_366e(int player, int club);
int f_9007_3aa8(int player, int team);
int f_9007_3c28(int age);
void f_9007_3c71(int mode, int player);
void f_9007_3dcf(int player, char lit);
int f_9007_3e8f(int mode, int value, int lo, int player);
void f_9007_417a(int n, char draw);
void f_9007_4276(int colour, char far *s);
void f_9007_430d(int player, int to, int from, long fee, unsigned char kind);
void f_9007_4ad8(int player, int from, int to, char kind);
void f_9007_4da1(int player, int a);
char f_9007_4f89(int player, char flag);
void f_9007_511f(int player);

void f_2162_13fc(void far *a, void far *b, int n);
void far *f_2162_1634(int handle, int page);
long f_2162_1367(long a, long b);
long f_2162_0da1(long n);
int f_1a70_68a4(int x);
char f_1a70_2bc7(int x);
char f_1a70_6783(int x);
char f_1a70_68f0(int player, char c);
int f_1a70_6d45(int player, int club);
char f_b8da_4a37(int player);
char f_9661_052c(int player);
char f_9661_084b(int player);
void f_9661_09b7(int player, char c, char d);
void f_9661_0aa7(int player);
void f_9661_0000(int player, int club, int v);
long f_1a70_0cb8(long v, char c);
void f_b8da_61ff(char a);
void f_b8da_6369(char a, int i, int n);
void f_b8da_66aa(void);
void f_1a70_5688(int a);
void f_1a70_0b80(char far *s);
extern int d_69da_d996;
extern int d_69da_d9d2;
extern int d_69da_d9a0;
extern int d_69da_d9ea;
extern int d_69da_da6e;
extern int d_69da_dbb6;
extern int d_69da_dbb8;
extern int d_69da_dbba;
extern int d_69da_dbbc;
extern int d_69da_dafc;
extern int d_69da_dafe;
extern int d_69da_dbbe;
extern int d_69da_dbc0;
extern int d_69da_dbc2;
extern int d_69da_dbc4;
extern int d_69da_d9ae;
extern int d_69da_d99a;
extern int d_69da_d98e;
extern int d_69da_dfe6;
extern int d_69da_dfec;
extern char d_69da_ddeb;
extern char d_69da_ddb3;
extern long far *d_69da_df9a;
extern int (far *d_69da_dfa6)[1860];
extern unsigned char far d_4512_a074[][2][4];
extern int far d_4512_a064[][4];
extern unsigned char far d_4512_a2c0[][6][5];
extern int far d_4512_a0a4[][5];
extern int far d_4512_6004[];
extern int far d_4512_61e4[];
extern int far d_3668_cb70[];
extern int far d_4512_1a30[];
extern unsigned char far d_3668_0000[][1860];
int f_1a70_4559(int team);
char f_1a70_2d0e(int x);
long f_1a70_01d9(int p, int n);
long f_1a70_588f(int team);
char f_1a70_6d23(int player);
void f_b8da_3f3d(int player, char team);
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
extern struct flags_w far d_4512_bdc8[];
extern unsigned char far d_28da_2a78[][1860];
extern unsigned char far d_28da_ad40[];
extern int d_69da_da0c;
extern int d_69da_db58;
extern int d_69da_d9d6;
extern char d_69da_de39;
extern char d_69da_de3e;
extern char d_69da_dded;
extern char d_69da_ddec;
extern float d_69da_de4d;
extern long far d_4512_1e90[][80];
extern int far d_4512_1ad0[];
extern unsigned char far d_4512_01ec[];
extern unsigned char far d_4512_023e[];
extern unsigned char far d_4512_06ba[];
extern unsigned char far d_4512_1480[];
extern int far d_4512_637c[][16];
extern char far d_4512_6d7c[][16];
extern unsigned char far d_4512_16be[];
int f_2162_13ba(int a, int b);
void f_2162_0dfb(int ticks);
int f_1a70_2ccc(int x);
float f_1a70_2bff(int x);
char f_1a70_6514(int a, int b);
long f_1a70_21d1(int a, int team, char pos, char second);
char far *f_1a70_4592(int player);
char far *f_1a70_4739(int player);
void f_1a70_598c(int team, char far *title, char far *text);
void f_1a70_4a41(char far *title);
void f_1a70_442b(float x, float y, int team);
void f_1a70_0adb(int line, char far *s);
void f_1a70_0b46(char far *s);
void f_1a70_2eaa(int n, char far *title, char far *items);
void f_1a70_3226(int last);
char f_b8da_4ad7(int player, char team);
char far *f_b8da_5f44(int player);
char f_b8da_5e02(int player);
char f_9661_00f1(int player, int team, char loan);
extern int d_69da_d990;
extern int d_69da_d992;
extern int d_69da_d9be;
extern int d_69da_d9f6;
extern int d_69da_dab4;
extern int d_69da_dbca;
extern int d_69da_dbcc;
extern int d_69da_dbce;
extern int d_69da_dbd0;
extern int d_69da_dbd2;
extern int d_69da_dbd4;
extern int d_69da_dbd6;
extern int d_69da_dbd8;
extern int d_69da_dbda;
extern int d_69da_dd98;
extern char d_69da_ddd3;
extern char d_69da_ddee;
extern char d_69da_ddef;
extern char d_69da_ddf0;
extern char d_69da_ddf1;
extern char d_69da_ddf2;
extern char d_69da_ddf3;
extern float d_69da_de99;
extern float d_69da_de9d;
extern long d_69da_df01;
extern long d_69da_df15;
extern long d_69da_df19;
extern long d_69da_df1d;
extern long d_69da_df21;
extern char near *d_69da_b1fc[];
extern unsigned char far d_4512_4726[][3][14];
extern int far d_28da_00b0[][2][13];
extern unsigned char far d_4512_2b2e[];
extern unsigned char far d_5dbf_0932[][10];
extern char far d_536d_4ed1[];
extern char far d_536d_4f20[];
extern char far d_536d_4f21[];
extern int far d_4512_a0de[];
extern int far d_4512_a0e0[];
extern long far d_4512_a17c[];
extern long d_69da_df29;
int f_2162_134e(int a, int b);
extern int d_69da_dbdc;
float f_2162_1390(float a, float b);
long f_2162_13d3(long a, long b);
void f_aac9_42ed(int player, int a, char b);
void f_7dd6_2dcf(int team);
extern int d_69da_dbde;
extern int d_69da_dbe0;
extern int d_69da_dbe2;
extern int d_69da_dbfe;
extern char d_69da_ddf7;
extern char d_69da_ddf6;
extern char d_69da_ddf5;
extern char d_69da_ddbe;
extern long d_69da_df25;
extern char d_69da_ddf4;
extern char d_69da_ddf8;
extern int d_69da_dbf4;
extern int d_69da_dbf2;
extern int d_69da_dbf0;
extern int d_69da_dbee;
extern int d_69da_dbec;
extern int d_69da_dbea;
extern int d_69da_dbe8;
extern int d_69da_dbe6;
extern int d_69da_dbe4;
void f_2162_0897();
void f_2162_08b5(int x1, int y1, int x2, int y2);
void f_2162_08a6();
void f_2162_090f(int x1, int y1, int x2, int y2);
int f_2162_0c1f(void);
int f_2162_0c13(void);
void f_1a70_344b(int x, int y, int colour, char far *s);
void f_1a70_3554(float x, float y, int bg, int fg, int w, char far *s);
void f_1a70_3d0c(float x, float y, int bg, int fg, int w, char far *s);
void f_1a70_4ede(int a, float x, float y, int c, int d, int e, char far *s);
int f_1a70_53de(int a);
void f_1a70_525f(int a, char b);
void f_1a70_4e4b(void);
extern char far d_536d_5a0f[];
extern int d_69da_dbfc;
extern int d_69da_dbfa;
extern int d_69da_dbf6;
void f_2162_1196(unsigned x, int y, unsigned x2, unsigned y2, int dy, int colour);
void f_2162_1021(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_b085_33dc(int player);
void f_9c01_4864(int player, int from, int to, long fee);
void f_9c01_48e4(int player, int from, int to, long fee);
void f_1a70_0e4d(int p);
int f_1a70_1dc1(int player);
void f_1a70_1600(int p);
void f_1a70_12cd(int player);
void f_1a70_18e0(int player);
extern char (far *d_69da_dfce)[151];
extern float d_69da_de55;
extern int d_69da_db92;
extern char d_69da_ddb7;
extern long (far *d_69da_dfae)[80];
extern int d_69da_da14;
extern int d_69da_dc00;
extern int d_69da_da4c;
extern char d_69da_ddf9;
struct news { int player; char from; char to; long fee; };
void f_b085_4566(char a, char b, int player, char team, long fee, char c);
void f_b085_6084(char team, int player);
void f_b8da_66d3(char n);
void f_b8da_31f2(int player, char team);
void f_b8da_31a2(int player, char team);
void f_b8da_3fe4(int player, unsigned char n);
extern int d_69da_dff6;
extern int d_69da_dff0;
extern unsigned char (far *d_69da_dfba)[1860];
extern unsigned char far d_4512_0334[];
char f_1a70_0c2c(void);
unsigned f_2162_0b1b(char far *s, char far *set);
void f_b8da_0994(int player);
void f_9661_0b09(int player);
void f_9661_0ebd(int player);
void f_9661_11c2(int player, int c);
long f_9661_13f2(int player);
extern char d_69da_ddfa;
extern char d_69da_ddbc;
extern int d_69da_da4e;
extern int d_69da_dc04;
extern int d_69da_db6a;
extern int d_69da_e002;
extern int d_69da_e000;
extern long d_69da_df2d;
extern char (far *d_69da_dfd2)[151];
extern char far d_536d_50cd[];
extern float far d_28d3_0000[];
extern char far d_536d_5cad[];
extern char far d_536d_6c53[];
extern char far d_536d_6cf3[];
extern char far d_536d_6ca3[];
extern char far d_536d_86c5[][40];
extern unsigned char far d_28da_28bc[];
struct transfers { int in[6], out[6]; /* the players */ unsigned char in_club[6], out_club[6]; /* the other club */ long in_fee[6], out_fee[6]; /* the fee, 1 for a loan */ unsigned char n_in, n_out; /* how many so far */ };
extern struct transfers far d_536d_0000[];
extern struct news far d_536d_1ae0[];
extern long far d_4512_1fd0[];
extern long far d_4512_2110[];
extern char far d_536d_a49d[];
extern FILE *d_69da_0094;
void f_2162_19f6();
extern char d_69da_ddfb;
extern int far d_28da_10f0[][26];
extern unsigned char far d_4512_142e[];
extern int far d_4512_549a[][14];
extern char far d_536d_69d1[];
extern char far d_536d_968d[][80];

/* the steps of the digits a value is set with (+/- on the offer screen) */
static int d_69da_2f7c[] = { 1, 10, 100, 1000, 10000 };

void f_9007_0000(void)
{
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= 1; d_69da_d9d2++) {
        for (d_69da_d9a0 = 0; d_69da_d9a0 <= 2; d_69da_d9a0++) {
            for (d_69da_d9ea = d_69da_d9a0 + 1; d_69da_d9ea <= 3; d_69da_d9ea++) {
                d_69da_dbb6 = d_4512_a074[1][d_69da_d9d2][d_69da_d9a0] * 2 + d_4512_a074[2][d_69da_d9d2][d_69da_d9a0];
                d_69da_dbb8 = d_4512_a074[1][d_69da_d9d2][d_69da_d9ea] * 2 + d_4512_a074[2][d_69da_d9d2][d_69da_d9ea];
                d_69da_dbba = d_4512_a074[4][d_69da_d9d2][d_69da_d9a0];
                d_69da_dbbc = d_4512_a074[4][d_69da_d9d2][d_69da_d9ea];
                d_69da_dafc = d_4512_a074[5][d_69da_d9d2][d_69da_d9a0];
                d_69da_dafe = d_4512_a074[5][d_69da_d9d2][d_69da_d9ea];
                if (d_69da_dbb6 < d_69da_dbb8 ||
                    (d_69da_dbb6 == d_69da_dbb8 && d_69da_dbba - d_69da_dafc < d_69da_dbbc - d_69da_dafe) ||
                    (d_69da_dbb6 == d_69da_dbb8 && d_69da_dbba - d_69da_dafc == d_69da_dbbc - d_69da_dafe &&
                     d_69da_dbba < d_69da_dbbc)) {
                    f_2162_13fc(&d_4512_a064[d_69da_d9d2][d_69da_d9a0], &d_4512_a064[d_69da_d9d2][d_69da_d9ea], 2);
                    for (d_69da_da6e = 0; d_69da_da6e <= 5; d_69da_da6e++)
                        f_2162_13fc(&d_4512_a074[d_69da_da6e][d_69da_d9d2][d_69da_d9a0],
                                    &d_4512_a074[d_69da_da6e][d_69da_d9d2][d_69da_d9ea], 1);
                }
            }
        }
    }
    if (d_69da_d996 == 81) {
        d_4512_61e4[0] = d_4512_a064[0][0];
        d_4512_61e4[1] = d_4512_a064[1][0];
    }
}

void f_9007_021e(void)
{
    unsigned char groups, teams;

    groups = d_69da_d996 <= 37 ? 6 : 4;
    teams = d_69da_d996 <= 37 ? 3 : 4;
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= groups - 1; d_69da_d9d2++) {
        for (d_69da_d9a0 = 0; d_69da_d9a0 <= teams - 2; d_69da_d9a0++) {
            for (d_69da_d9ea = d_69da_d9a0 + 1; d_69da_d9ea <= teams - 1; d_69da_d9ea++) {
                if (d_4512_a2c0[0][d_69da_d9d2][d_69da_d9a0] > 0)
                    d_69da_dbb6 = d_4512_a2c0[1][d_69da_d9d2][d_69da_d9a0] * 2 + d_4512_a2c0[2][d_69da_d9d2][d_69da_d9a0];
                else
                    d_69da_dbb6 = -1;
                if (d_4512_a2c0[0][d_69da_d9d2][d_69da_d9ea] > 0)
                    d_69da_dbb8 = d_4512_a2c0[1][d_69da_d9d2][d_69da_d9ea] * 2 + d_4512_a2c0[2][d_69da_d9d2][d_69da_d9ea];
                else
                    d_69da_dbb8 = -1;
                d_69da_dbba = d_4512_a2c0[4][d_69da_d9d2][d_69da_d9a0];
                d_69da_dbbc = d_4512_a2c0[4][d_69da_d9d2][d_69da_d9ea];
                d_69da_dafc = d_4512_a2c0[5][d_69da_d9d2][d_69da_d9a0];
                d_69da_dafe = d_4512_a2c0[5][d_69da_d9d2][d_69da_d9ea];
                if (d_69da_dbb6 < d_69da_dbb8 ||
                    (d_69da_dbb6 == d_69da_dbb8 && d_69da_dbba - d_69da_dafc < d_69da_dbbc - d_69da_dafe) ||
                    (d_69da_dbb6 == d_69da_dbb8 && d_69da_dbba - d_69da_dafc == d_69da_dbbc - d_69da_dafe &&
                     d_69da_dbba < d_69da_dbbc)) {
                    f_2162_13fc(&d_4512_a0a4[d_69da_d9d2][d_69da_d9a0], &d_4512_a0a4[d_69da_d9d2][d_69da_d9ea], 2);
                    for (d_69da_da6e = 0; d_69da_da6e <= 5; d_69da_da6e++)
                        f_2162_13fc(&d_4512_a2c0[d_69da_da6e][d_69da_d9d2][d_69da_d9a0],
                                    &d_4512_a2c0[d_69da_da6e][d_69da_d9d2][d_69da_d9ea], 1);
                }
            }
        }
    }
    if (d_69da_d996 == 37) {
        unsigned char k, g;

        k = 0;
        for (d_69da_d9d2 = 0; d_69da_d9d2 <= 5; d_69da_d9d2++) {
            d_4512_6004[k] = d_4512_a0a4[d_69da_d9d2][0];
            k++;
        }
        g = f_9007_054e(-1);
        d_4512_6004[k] = d_4512_a0a4[g][1];
        k++;
        d_4512_6004[k] = d_4512_a0a4[f_9007_054e(g)][1];
    } else if (d_69da_d996 == 61) {
        d_4512_6004[0] = d_4512_a0a4[0][0];
        d_4512_6004[1] = d_4512_a0a4[2][0];
        d_4512_6004[2] = d_4512_a0a4[1][0];
        d_4512_6004[3] = d_4512_a0a4[3][0];
    }
}

/* the best second-placed team of the six groups, other than group skip's */
unsigned char f_9007_054e(unsigned char skip)
{
    unsigned char best, pts, a, b, g, f, ag;

    pts = 0;
    a = 0;
    b = 0;
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= 5; d_69da_d9d2++) {
        if (skip == d_69da_d9d2)
            continue;
        g = d_4512_a2c0[1][d_69da_d9d2][1] * 2 + d_4512_a2c0[2][d_69da_d9d2][1];
        f = d_4512_a2c0[4][d_69da_d9d2][1];
        ag = d_4512_a2c0[5][d_69da_d9d2][1];
        if (g > pts || (g == pts && f - ag > a - b) || (g == pts && f - ag == a - b && f > a))
            best = d_69da_d9d2;
    }
    return best;
}

void f_9007_061e(void)
{
    f_b8da_66aa();
    d_69da_dbbe = f_1a70_68a4(d_69da_d996);
    d_69da_dbc0 = 0;
    f_9007_1abb();
    f_9007_06d6();
    if (!f_1a70_6783(d_69da_d996)) {
        f_9007_0908();
        f_9007_11c8();
        if (f_2162_0da1(13) == 0 && d_69da_d996 >= 10 && d_69da_d996 != 66)
            f_1a70_0b80("No transfer news this week");
        else
            f_9007_0d1c((int)f_2162_0da1(7) + ((d_69da_d996 <= 8 ? 15 : 0) + (d_69da_d996 == 66 ? 25 : 0)) + 9);
    }
    if (d_69da_dbc0 > 0)
        f_1a70_5688(0);
}

void f_9007_06d6(void)
{
    int v;

    d_69da_dbbe = f_1a70_68a4(d_69da_d996);
    for (d_69da_d9ae = 0; d_69da_d9ae <= d_69da_d98e - 1; d_69da_d9ae++) {
        if (d_3668_0000[7][d_69da_d9ae] == 0xff) {
            if (f_1a70_2bc7(d_28da_2a78[0][18 * 1860 + d_69da_d9ae]) == 0) {
                if (d_3668_cb70[d_69da_d9ae] == 0) {
                    if (!d_4512_bdc8[d_69da_d9ae].f8 && f_1a70_68f0(d_69da_d9ae, -1) == 0 && f_b8da_4a37(d_69da_d9ae) == 0) {
                        if (f_9007_4f89(d_69da_d9ae, 0) == 0) {
                            f_9007_366e(d_69da_d9ae, d_28da_ad40[d_69da_d9ae]);
                            if (d_69da_ddeb) {
                                d_3668_cb70[d_69da_d9ae] = (d_69da_d99a + d_69da_dbc2) * 100 + d_69da_dbbe;
                                d_69da_dfa6 = f_2162_1634(d_69da_dfec, 1);
                                d_69da_dfa6[4][d_69da_d9ae] = d_69da_dbc4;
                                f_9007_17fd(d_69da_d9ae, 0);
                            }
                        } else
                            f_9661_09b7(d_69da_d9ae, 0, 0);
                    }
                } else {
                    v = f_1a70_6d45(d_69da_d9ae, d_28da_2a78[0][18 * 1860 + d_69da_d9ae]);
                    d_69da_dfa6 = f_2162_1634(d_69da_dfec, 1);
                    if (d_69da_dfa6[4][d_69da_d9ae] < v)
                        d_69da_dfa6[4][d_69da_d9ae] = v;
                }
            } else if (d_3668_cb70[d_69da_d9ae] == 0 && !d_4512_bdc8[d_69da_d9ae].f8 &&
                       f_1a70_68f0(d_69da_d9ae, -1) == 0 && f_b8da_4a37(d_69da_d9ae) == 0)
                f_9661_0000(d_69da_d9ae, d_28da_ad40[d_69da_d9ae],
                            d_4512_1a30[d_28da_ad40[d_69da_d9ae]] - 646);
        }
    }
}

void f_9007_0908(void)
{
    if (d_69da_ddb3)
        f_b8da_61ff(9);
    d_69da_dbbe = f_1a70_68a4(d_69da_d996);
    for (d_69da_d9ae = 0; d_69da_d9ae <= d_69da_d98e - 1; d_69da_d9ae++) {
        unsigned char c;
        int n;

        c = d_28da_ad40[d_69da_d9ae];
        if (d_69da_ddb3)
            f_b8da_6369(9, d_69da_d9ae, d_69da_d98e + 1999);
        if ((d_69da_d9ae + 1) % 4 != d_69da_dbbe % 4 && d_69da_ddb3 == 0)
            continue;
        if (f_1a70_2bc7(c) && d_69da_ddb3)
            continue;
        if (d_3668_0000[7][d_69da_d9ae] == 0xff) {
            if (!d_4512_bdc8[d_69da_d9ae].f8 && !d_4512_bdc8[d_69da_d9ae].f9 && !d_4512_bdc8[d_69da_d9ae].f30) {
                if (*(d_3668_0000[19] + d_69da_d9ae) < 2) {
                    n = f_1a70_2bc7(c) ? 2 : 0;
                    if (d_3668_0000[14][d_69da_d9ae] > n && f_1a70_68f0(d_69da_d9ae, -1)) {
                        if (f_9661_052c(d_69da_d9ae))
                            f_9661_09b7(d_69da_d9ae, -1, 0);
                        else
                            d_3668_0000[14][d_69da_d9ae] = 0;
                        d_3668_0000[19][d_69da_d9ae]++;
                    }
                }
            } else if (d_4512_bdc8[d_69da_d9ae].f8 && d_4512_bdc8[d_69da_d9ae].f10) {
                n = f_1a70_2bc7(c) ? 2 : 0;
                if (d_3668_0000[15][d_69da_d9ae] > n && f_1a70_68f0(d_69da_d9ae, -1) == 0) {
                    if (f_9661_084b(d_69da_d9ae))
                        f_9661_0aa7(d_69da_d9ae);
                    else
                        d_3668_0000[15][d_69da_d9ae] = 0;
                }
            }
            if (!d_4512_bdc8[d_69da_d9ae].f8 && !d_4512_bdc8[d_69da_d9ae].f9 && !d_4512_bdc8[d_69da_d9ae].f30) {
                if (f_1a70_2bc7(c))
                    continue;
                if (f_9007_4f89(d_69da_d9ae, 0)) {
                    f_9661_09b7(d_69da_d9ae, 0, 0);
                    d_69da_d9ae;
                } else if (f_9007_4f89(d_69da_d9ae, -1))
                    f_9661_09b7(d_69da_d9ae, 0, -1);
            } else if (d_4512_bdc8[d_69da_d9ae].f8 && !d_4512_bdc8[d_69da_d9ae].f10 && f_1a70_2bc7(c) == 0) {
                if (!d_4512_bdc8[d_69da_d9ae].f12 && !d_4512_bdc8[d_69da_d9ae].f24 &&
                    (d_3668_0000[11][d_69da_d9ae] == 4 || d_3668_0000[11][d_69da_d9ae] == 8)) {
                    d_69da_df9a = f_2162_1634(d_69da_dfe6, 1);
                    d_69da_df9a[d_69da_d9ae] = f_2162_1367(f_1a70_0cb8(d_69da_df9a[d_69da_d9ae] * 0.75, -1), 1000L);
                    if (d_69da_df9a[d_69da_d9ae] < 10000L) {
                        d_69da_df9a[d_69da_d9ae] = 0;
                        d_4512_bdc8[d_69da_d9ae].f12 = 1;
                    }
                }
                if (f_9007_4f89(d_69da_d9ae, d_4512_bdc8[d_69da_d9ae].f24) == 0)
                    f_9661_0aa7(d_69da_d9ae);
            }
        }
    }
}

void f_9007_0d1c(int n)
{
    int count;
    int k;
    float best = 0;

    count = 0;

    for (d_69da_da0c = 0; d_69da_da0c <= 79; d_69da_da0c++) {
        if (d_4512_023e[d_69da_da0c] < f_1a70_4559(d_69da_da0c) - 1 && f_1a70_2bc7(d_69da_da0c) == 0
            && f_9007_0f7d(d_69da_da0c) && count < n) {
            f_9007_1001(d_69da_da0c);
            if (d_69da_ddec)
                count++;
        }
    }
    for (k = 0; count < n && k < 80; k++) {
        d_69da_da0c = -1;
        for (d_69da_db58 = 1; d_69da_db58 <= 10; d_69da_db58++) {
            d_69da_d9d6 = f_2162_0da1(80);
            switch (d_69da_d9d6 / 20) {
            case 0:
                d_69da_de39 = d_4512_1e90[0][d_69da_d9d6] > 3000000L ? -1 : 0;
                break;
            case 1:
                d_69da_de39 = d_4512_1e90[0][d_69da_d9d6] > 1000000L ? -1 : 0;
                break;
            case 2:
            case 3:
                d_69da_de39 = d_4512_1e90[0][d_69da_d9d6] > 500000L ? -1 : 0;
                break;
            }
            d_69da_de4d = (d_4512_637c[d_69da_d9d6][0] * 0.5 + (100 - d_4512_01ec[d_69da_d9d6]) * 0.1
                           + f_1a70_4559(d_69da_d9d6) - d_4512_023e[d_69da_d9d6] + f_2162_0da1(5))
                          * (d_69da_de39 ? 3 : 1);
            if (d_69da_de4d > best || d_69da_da0c == -1) {
                best = d_69da_de4d;
                d_69da_da0c = d_69da_d9d6;
            }
        }
        if (f_1a70_2bc7(d_69da_da0c) == 0 && f_9007_0f7d(d_69da_da0c)) {
            f_9007_1001(d_69da_da0c);
            if (d_69da_ddec)
                count++;
        }
    }
}

char f_9007_0f7d(int team)
{
    char r = 0;

    if (d_4512_06ba[team] < 3 && d_4512_637c[team][0] > 0
        && (d_4512_023e[team] + d_4512_1480[team] < 26 || f_1a70_2bc7(team))
        && d_4512_01ec[team] >= 30 && d_4512_1ad0[team] < 0x28a)
        r = -1;
    return r;
}

void f_9007_1001(int team)
{
    int k;

    k = f_9007_10a0(team);
    d_69da_ddec = 0;
    if (k > -1) {
        d_69da_d9ae = d_4512_637c[team][k];
        if (f_1a70_6d23(d_69da_d9ae)) {
            d_69da_de3e = 0;
            f_b8da_3f3d(d_69da_d9ae, team);
            if (d_69da_de3e)
                d_69da_dded = -1;
        } else
            f_9007_1d9a(team, d_69da_d9ae, d_4512_6d7c[team][k] == 1 ? -1 : 0);
        if (d_69da_dded)
            d_69da_ddec = -1;
    }
}

int f_9007_10a0(int team)
{
    char k;
    char found;
    char tries;

    found = 0;
    tries = 0;
    do {
        k = f_2162_0da1(d_4512_637c[team][0]) + 1;
        d_69da_d9ae = d_4512_637c[team][k];
        if (!d_4512_bdc8[d_69da_d9ae].f9
            && (f_1a70_6d23(d_69da_d9ae) || !d_4512_bdc8[d_69da_d9ae].f30 && d_3668_0000[7][d_69da_d9ae] == 0xff)
            && (f_1a70_2d0e(d_69da_d9ae) == 0 || f_1a70_6d23(d_69da_d9ae))
            && (d_4512_6d7c[team][k] == 1 && d_4512_16be[team] < 5
                || f_1a70_01d9(d_69da_d9ae, -1) <= f_1a70_588f(team)))
            found = 1;
        tries++;
    } while (found == 0 && tries < 20);
    return found == 1 ? k : -1;
}

void f_9007_11c8(void)
{
    int n;
    int i;

    n = 0;
    for (d_69da_d9ae = 0; d_69da_d9ae <= d_69da_d98e - 1; d_69da_d9ae++)
        if (d_4512_bdc8[d_69da_d9ae].f8 && !d_4512_bdc8[d_69da_d9ae].f9 && !d_4512_bdc8[d_69da_d9ae].f30
            && d_3668_0000[23][d_69da_d9ae] < 3)
            n++;
    for (i = 1; i <= (d_69da_ddb3 ? 2000 : 30); i++) {
        if (d_69da_ddb3)
            f_b8da_6369(9, d_69da_d98e + i - 1, d_69da_d98e + 1999);
        do {
            d_69da_d9ae = f_2162_0da1(17) == 0 ? f_2162_0da1(d_69da_d990) + 1680 : f_2162_0da1(d_69da_d98e);
            d_69da_ddd3 = 0;
            if (d_3668_0000[23][d_69da_d9ae] < 3 && !d_4512_bdc8[d_69da_d9ae].f9 && !d_4512_bdc8[d_69da_d9ae].f30) {
                if (f_1a70_6d23(d_69da_d9ae))
                    d_69da_ddd3 = -1;
                else if (d_69da_ddb3 == 0) {
                    if (f_2162_13ba(20, n) < i) {
                        if (d_28da_2a78[23][d_69da_d9ae] > 1)
                            d_69da_ddd3 = -1;
                        else if (d_4512_bdc8[d_69da_d9ae].f18)
                            d_69da_ddd3 = -1;
                    }
                } else if (d_69da_ddb3) {
                    if (fabs(f_1a70_2ccc(d_69da_d9ae) - f_1a70_2bff(d_28da_ad40[d_69da_d9ae])) > 3)
                        d_69da_ddd3 = -1;
                }
                if (d_4512_bdc8[d_69da_d9ae].f8)
                    d_69da_ddd3 = -1;
            }
        } while (d_69da_ddd3 == 0 && d_69da_ddb3 == 0);
        if (d_69da_ddd3)
            f_9007_13f8(d_69da_d9ae);
    }
}

void f_9007_13f8(int p)
{
    char m;
    char used[80];

    memset(used, 0, 80);
    for (d_69da_dbca = 1; d_69da_dbca <= 40; d_69da_dbca++) {
        d_69da_d9d6 = f_2162_0da1(80);
        if (used[d_69da_d9d6] == 0) {
            if (d_28da_2a78[18][p] != d_69da_d9d6 && f_1a70_2bc7(d_69da_d9d6) == 0
                && d_4512_637c[d_69da_d9d6][0] < 10
                && d_5dbf_0932[d_4512_2b2e[d_4512_1a30[d_69da_d9d6]]][d_3668_0000[17][p]] < 8
                && f_9007_1a61(d_69da_d9d6, p) == 0 && d_4512_1ad0[d_69da_d9d6] < 0x28a) {
                d_69da_de99 = f_1a70_2ccc(p);
                d_69da_de9d = f_1a70_2bff(d_69da_d9d6);
                if (d_69da_de9d - 4 < d_69da_de99 && d_69da_de9d + 8 > d_69da_de99) {
                    m = f_9007_15fa(p, d_69da_d9d6);
                    if (m > 0) {
                        d_3668_0000[23][p]++;
                        d_4512_637c[d_69da_d9d6][0]++;
                        d_4512_637c[d_69da_d9d6][d_4512_637c[d_69da_d9d6][0]] = p;
                        d_4512_6d7c[d_69da_d9d6][d_4512_637c[d_69da_d9d6][0]] = m;
                        if (d_3668_0000[23][p] == 3)
                            d_69da_dbca = 40;
                    }
                }
            }
            used[d_69da_d9d6] = -1;
        }
    }
}

char f_9007_15fa(int p, int team)
{
    char r = 0;
    char m;
    long a;
    long b;

    for (d_69da_dab4 = 0; d_69da_dab4 <= 1; d_69da_dab4++) {
        if (f_1a70_6d23(p))
            m = f_b8da_4ad7(p, team) ? 2 : 0;
        else
            m = f_9007_27e4(p, team, d_69da_dab4 + 1);
        if (m > 0) {
            for (d_69da_d9be = 0; d_69da_d9be <= 10; d_69da_d9be++) {
                d_69da_d9f6 = d_4512_4726[team][0][d_69da_d9be];
                if (f_1a70_6514(p, d_69da_d9f6)) {
                    a = f_1a70_21d1(d_28da_00b0[team][d_69da_dab4][d_69da_d9be], team, d_69da_d9f6,
                                    d_69da_dab4 == 1 ? 1 : 0);
                    b = f_1a70_21d1(p, team, d_69da_d9f6, d_69da_dab4 == 1 ? 1 : 0);
                    if (b > a && m == 2 && (!d_4512_bdc8[p].f8 || !d_4512_bdc8[p].f24)) {
                        r = 2;
                        d_69da_d9be = 10;
                        d_69da_dab4 = 1;
                    } else if (b > a && f_1a70_6d23(p) == 0 && d_4512_bdc8[p].f8 && d_4512_bdc8[p].f24
                               && d_4512_16be[team] < 5) {
                        char d;

                        d = abs(f_1a70_2bff(team) - f_1a70_2bff(d_28da_ad40[p]));
                        if (d > 2) {
                            r = 1;
                            d_69da_d9be = 10;
                            d_69da_dab4 = 1;
                        }
                    }
                }
            }
        }
    }
    return r;
}

void f_9007_17fd(int p, char all)
{
    if (d_3668_0000[23][p] > 0) {
        for (d_69da_d9d6 = 0; d_69da_d9d6 <= 79; d_69da_d9d6++) {
            if ((f_1a70_2bc7(d_69da_d9d6) == 0 || d_28da_2a78[18][p] == d_69da_d9d6 || all)
                && f_9007_1a61(d_69da_d9d6, p) > 0) {
                if (f_1a70_2bc7(d_69da_d9d6) == 0)
                    d_3668_0000[23][p] -= 1;
                d_69da_dbcc = f_9007_1a61(d_69da_d9d6, p);
                d_4512_637c[d_69da_d9d6][d_69da_dbcc] = d_4512_637c[d_69da_d9d6][d_4512_637c[d_69da_d9d6][0]];
                d_4512_6d7c[d_69da_d9d6][d_69da_dbcc] = d_4512_6d7c[d_69da_d9d6][d_4512_637c[d_69da_d9d6][0]];
                d_4512_637c[d_69da_d9d6][0]--;
            }
        }
    }
}

void f_9007_193f(int team)
{
    int k;

    for (k = 1; k <= d_4512_637c[team][0]; k++) {
        if (f_9007_15fa(d_4512_637c[team][k], team) == 0) {
            d_3668_0000[23][d_4512_637c[team][k]] -= 1;
            d_4512_637c[team][k] = d_4512_637c[team][d_4512_637c[team][0]];
            d_4512_6d7c[team][k] = d_4512_6d7c[team][d_4512_637c[team][0]];
            d_4512_637c[team][0]--;
        }
    }
}

int f_9007_1a61(int team, int p)
{
    int r = 0;
    int k;

    for (k = 1; k <= d_4512_637c[team][0]; k++)
        if (d_4512_637c[team][k] == p) {
            r = k;
            k = d_4512_637c[team][0];
        }
    return r;
}

/* the loans of the week: each loaned player's weeks run down; one whose loan has expired
 * (or, at 2 or 4 weeks left, whose club wants him back) returns to his club */
void f_9007_1abb(void)
{
    char kind;
    char buf[320];

    for (d_69da_d9ae = 0; d_69da_d9ae <= d_69da_d98e - 1; d_69da_d9ae++) {
        if (d_3668_0000[7][d_69da_d9ae] < 255) {
            kind = 0;
            d_3668_0000[8][d_69da_d9ae]--;
            switch (d_3668_0000[8][d_69da_d9ae]) {
            case 0:
                kind = 1;
                break;
            case 2:
            case 4:
                if (f_1a70_2bc7(d_3668_0000[7][d_69da_d9ae]) == 0 &&
                    f_9007_29b8(d_69da_d9ae, d_3668_0000[0][25 * 1860 + d_69da_d9ae]) == 1)
                    kind = 2;
                break;
            }
            if (d_69da_d996 > 98)
                kind = 1;
            if (kind > 0) {
                if (f_1a70_2bc7(d_28da_2a78[0][18 * 1860 + d_69da_d9ae])) {
                    if (kind == 1)
                        sprintf(buf, "%s's loan period has expired - he returns to %s.%s",
                                f_1a70_4592(d_69da_d9ae), (char far *)d_69da_b1fc[d_3668_0000[7][d_69da_d9ae]],
                                f_b8da_5f44(d_69da_d9ae));
                    else if (kind == 2)
                        sprintf(buf, "On-loan %s returns to %s at their request.%s",
                                f_1a70_4592(d_69da_d9ae), (char far *)d_69da_b1fc[d_3668_0000[7][d_69da_d9ae]],
                                f_b8da_5f44(d_69da_d9ae));
                    f_1a70_598c(d_28da_ad40[d_69da_d9ae], "Squad news", buf);
                } else if (f_1a70_2bc7(d_3668_0000[7][d_69da_d9ae]) && kind == 1) {
                    sprintf(buf, "%s returns from his loan spell at %s.%s",
                            f_1a70_4592(d_69da_d9ae), (char far *)d_69da_b1fc[d_28da_2a78[18][d_69da_d9ae]],
                            f_b8da_5f44(d_69da_d9ae));
                    f_1a70_598c(d_3668_0000[7][d_69da_d9ae], "Squad news", buf);
                }
                f_9007_430d(d_69da_d9ae, d_3668_0000[7][d_69da_d9ae], d_28da_ad40[d_69da_d9ae], 0, 2);
                if (kind == 2)
                    d_3668_0000[9][d_69da_d9ae] = 2;
            } else if (d_3668_0000[8][d_69da_d9ae] == 1 && !f_1a70_2bc7(d_28da_2a78[0][18 * 1860 + d_69da_d9ae]) &&
                       d_4512_bdc8[d_69da_d9ae].f7 && d_3668_0000[9][d_69da_d9ae] < 4 &&
                       f_b8da_5e02(d_69da_d9ae)) {
                d_3668_0000[8][d_69da_d9ae] += 4;
                d_3668_0000[9][d_69da_d9ae]++;
            }
        }
    }
}

/* approaching a player (to buy him, or with loan set, to take him on loan): the human
 * club's menu, the player's answer, the other clubs that also want him, and his choice */
void f_9007_1d9a(int team, int player, char loan)
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
    memset(d_536d_4ed1, 0, 80);
    memset(d_536d_4f21, 0, 80);
    d_69da_ddee = 0;
    done = 0;
    d_69da_dded = 0;
    d_69da_ddef = 0;
    best = -1;
    own = d_28da_2a78[18][player];
    d_69da_ddf0 = f_1a70_2bc7(own);
    d_69da_ddf1 = f_1a70_2bc7(team);
    d_69da_dbce = -d_69da_ddf0 - d_69da_ddf1;
again:
    d_69da_ddf2 = 0;
    if (d_69da_ddf1 != 0) {
        f_1a70_4a41("Approach Player");
        f_1a70_442b(1.0, 4.0, team);
        sprintf(buf, "Board limit on spending : %ld", f_1a70_588f(team));
        f_1a70_0adb(7, buf);
        sprintf(buf, "Approach %s ?", f_1a70_4592(player));
        f_1a70_0adb(9, buf);
        f_1a70_2eaa(12, "", "*Exit|Approach To Buy|Approach To Loan|");
menu:
        f_1a70_3226(2);
        d_69da_ddf2 = 0;
        if (d_69da_d992 == 1)
            d_69da_ddf2 = 1;
        else if (d_69da_d992 == 2) {
            if (d_4512_16be[team] < 5)
                d_69da_ddf2 = 2;
            else {
                f_1a70_0b46("Maximum five loans per season");
                goto menu;
            }
        }
    } else if (loan == 0)
        d_69da_ddf2 = 1;
    else
        d_69da_ddf2 = 2;
    if (d_69da_ddf2 > 0) {
        strcpy(name, f_1a70_4739(player));
        if (f_9661_00f1(player, team, d_69da_ddf2 == 2 ? -1 : 0)) {
            if (d_69da_ddf0 == 0 && d_69da_ddf1 != 0) {
                sprintf(buf, "%s allow approach", (char far *)d_69da_b1fc[own]);
                f_1a70_0b46(buf);
            }
            if (f_9007_27e4(player, team, d_69da_dbd0 = f_9007_29b8(player, team)) >= (d_69da_ddf2 == 2 ? 1 : 2)) {
                if (d_69da_ddf1 != 0 || d_69da_ddf0 != 0) {
                    sprintf(buf, "%s is keen on the %s", (char far *)name, d_69da_ddf2 == 1 ? "move" : "loan");
                    f_1a70_0b46(buf);
                }
                done = -1;
                goto out;
            }
            if (d_69da_ddf1 == 0 && d_69da_ddf0 == 0)
                goto out;
            sprintf(buf, "%s rejects the %s", (char far *)name, d_69da_ddf2 == 1 ? "move" : "loan");
            if ((d_69da_ddf1 && d_69da_ddf0) == 0) {
                sprintf(but, "But %s", (char far *)buf);
                strcpy(buf, but);
            }
            f_1a70_0b46(buf);
            if (d_69da_ddf1 != 0) {
                if (d_69da_ddf0 == 0)
                    goto menu;
                goto again;
            }
        } else if (d_69da_ddf1 != 0) {
            if (d_69da_ddf0 != 0)
                goto again;
            sprintf(buf, "%s refuse approach", (char far *)d_69da_b1fc[own]);
            f_1a70_0b46(buf);
            goto menu;
        }
    }
out:
    if (done == 0) {
        if (d_69da_ddf1 == 0) {
            d_3668_0000[23][player] -= 1;
            d_69da_dbcc = f_9007_1a61(team, player);
            d_4512_637c[team][d_69da_dbcc] = d_4512_637c[team][d_4512_637c[team][0]];
            d_4512_6d7c[team][d_69da_dbcc] = d_4512_6d7c[team][d_4512_637c[team][0]];
            d_4512_637c[team][0]--;
        }
    } else {
        d_536d_4ed1[0] = -1;
        d_4512_a0e0[0] = team;
        d_69da_dbd2 = 1;
        d_4512_06ba[team]++;
        if (d_69da_ddf2 != 2) {
            for (d_69da_dbd6 = 0; d_69da_dbd6 <= 79; d_69da_dbd6++) {
                if (d_69da_dbd6 != team && f_9007_0f7d(d_69da_dbd6) && f_9007_1a61(d_69da_dbd6, player) > 0) {
                    if (f_1a70_2bc7(d_69da_dbd6))
                        d_69da_ddf3 = f_9007_2aae(d_69da_dbd6, team, player) ? -1 : 0;
                    else
                        d_69da_ddf3 = d_28da_2a78[12][player] != 0 || f_1a70_588f(d_69da_dbd6) >= f_1a70_01d9(player, -1) && f_2162_0da1(3) > 0 ? -1 : 0;
                    if (d_69da_ddf3 != 0) {
                        if (f_9007_27e4(player, d_69da_dbd6, d_69da_dbd0 = f_9007_29b8(player, d_69da_dbd6)) < 2) {
                            if (f_1a70_2bc7(d_69da_dbd6))
                                f_1a70_0b46("He is not interested");
                            else {
                                d_3668_0000[23][player] -= 1;
                                d_69da_dbcc = f_9007_1a61(d_69da_dbd6, player);
                                d_4512_637c[d_69da_dbd6][d_69da_dbcc] = d_4512_637c[d_69da_dbd6][d_4512_637c[d_69da_dbd6][0]];
                                d_4512_6d7c[d_69da_dbd6][d_69da_dbcc] = d_4512_6d7c[d_69da_dbd6][d_4512_637c[d_69da_dbd6][0]];
                                d_4512_637c[d_69da_dbd6][0]--;
                            }
                        } else {
                            if (f_1a70_2bc7(d_69da_dbd6)) {
                                f_1a70_0b46("He is interested");
                                d_69da_dbce++;
                            }
                            d_536d_4ed1[d_69da_dbd2] = d_69da_dbd0 == 1;
                            d_4512_a0e0[d_69da_dbd2] = d_69da_dbd6;
                            d_69da_dbd2++;
                            d_4512_06ba[d_69da_dbd6]++;
                        }
                    }
                }
            }
        }
        if (d_4512_bdc8[player].f12 == 0 && d_69da_ddf2 != 2) {
            d_69da_df15 = 0;
            d_69da_df19 = 0;
            d_69da_df1d = f_1a70_0cb8(f_1a70_01d9(player, own), -1);
            d_69da_df21 = d_69da_df1d;
            if (d_69da_dbce > 0) {
                d_69da_dd98 = 0;
                d_69da_dbd8 = 7;
                f_9007_3c71(0, player);
                if (d_4512_bdc8[player].f8)
                    sprintf(buf, "%s is valued at %ld", f_1a70_4739(player), d_69da_df1d);
                else
                    sprintf(buf, "%s is not yet valued", f_1a70_4739(player));
                f_9007_4276(1, buf);
            }
            f_9007_2c4c(player);
            tell = 0;
        } else {
            if (d_69da_dbce > 0) {
                for (d_69da_dbd4 = 1; d_69da_dbd4 <= d_69da_dbd2; d_69da_dbd4++) {
                    d_69da_d9d6 = d_4512_a0de[d_69da_dbd4];
                    if (d_69da_d9d6 != team && f_1a70_2bc7(d_69da_d9d6) == 0) {
                        sprintf(buf, "%s also want him", (char far *)d_69da_b1fc[d_69da_d9d6]);
                        f_1a70_0b46(buf);
                    }
                }
            }
            tell = -1;
        }
        d_69da_dbda = 0;
        for (d_69da_dbd4 = 1; d_69da_dbd4 <= d_69da_dbd2; d_69da_dbd4++) {
            d_69da_d9d6 = d_4512_a0de[d_69da_dbd4];
            if (d_536d_4f20[d_69da_dbd4] != 0 || d_4512_bdc8[player].f12 || d_69da_ddf2 == 2) {
                d_69da_de9d = f_1a70_2bff(d_69da_d9d6) + (d_69da_d9d6 == team ? 0.5 : 0);
                if (d_69da_de9d > bestval || best == -1) {
                    bestval = d_69da_de9d;
                    best = d_69da_d9d6;
                    if (d_4512_bdc8[player].f12 || d_69da_ddf2 == 2)
                        d_69da_df01 = 0;
                    else
                        d_69da_df01 = d_4512_a17c[d_69da_dbd4];
                }
                d_69da_dbda++;
            }
        }
        sprintf(stays, "He stays at %s", (char far *)d_69da_b1fc[own]);
        if (best > -1) {
            if (d_69da_dbce > 0) {
                f_2162_0dfb(50);
                if (d_69da_dbda > 1) {
                    sprintf(buf, "He decides to join %s", (char far *)d_69da_b1fc[best]);
                    if (tell)
                        f_1a70_0b46(buf);
                    else
                        f_9007_4276(6, buf);
                }
            }
            if (d_69da_ddf2 != 2) {
                f_9007_366e(player, best);
                if (f_1a70_2bc7(best))
                    tell = 0;
            }
            if (d_69da_ddeb || d_69da_ddf2 == 2) {
                if (d_69da_dbce > 0) {
                    if (d_69da_ddf2 == 1)
                        sprintf(buf, "He signs for %s", (char far *)d_69da_b1fc[best]);
                    else
                        strcpy(buf, "He joins on a two month loan");
                    if (tell)
                        f_1a70_0b46(buf);
                    else
                        f_9007_4276(6, buf);
                }
                f_9007_430d(player, best, own, d_69da_df01, d_69da_ddf2 == 2 ? 1 : 0);
                d_69da_dded = -1;
            } else if (tell)
                f_1a70_0b46(stays);
            else
                f_9007_4276(6, stays);
        } else if (d_69da_dbce > 0)
            f_9007_4276(6, stays);
    }
}

/* whether player p would join team, for n (f_9007_29b8's answer): 2 to move, 1 only on
 * loan, 0 not at all */
char f_9007_27e4(int p, int team, int n)
{
    char r;
    float a;
    float b;
    int m;
    unsigned char c2;
    unsigned char c1;

    r = 0;
    c1 = d_3668_0000[11][p];
    d_69da_dbdc = d_5dbf_0932[d_3668_0000[17][p]][d_4512_2b2e[d_4512_1a30[team]]];
    if (d_69da_dbdc < 8 && f_b8da_4a37(p) == 0) {
        a = f_1a70_2bff(d_28da_2a78[0][18 * 1860 + p]);
        b = f_1a70_2bff(team);
        c2 = d_28da_2a78[23][p];
        m = f_2162_134e(c2, 1 - (c1 > 8 ? 2 : 1) * (d_4512_bdc8[p].f8 ? -1 : 0));
        if (n < m && (m - n + (b + 1) >= a || f_1a70_2ccc(p) < 11))
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

int f_9007_29b8(int a, int b)
{
    long l1;
    long l2;

    d_69da_dbd0 = 3;
    for (d_69da_dab4 = 0; d_69da_dab4 <= 1; d_69da_dab4++) {
        for (d_69da_d9be = 0; d_69da_d9be <= 10; d_69da_d9be++) {
            d_69da_d9f6 = d_4512_4726[b][0][d_69da_d9be];
            if (f_1a70_6514(a, d_69da_d9f6)) {
                l1 = f_1a70_21d1(d_28da_00b0[b][d_69da_dab4][d_69da_d9be], b, d_69da_d9f6,
                                 d_69da_dab4 == 1 ? 1 : 0);
                l2 = f_1a70_21d1(a, b, d_69da_d9f6, d_69da_dab4 == 1 ? 1 : 0);
                if (l2 > l1) {
                    d_69da_dbd0 = d_69da_dab4 + 1;
                    d_69da_d9be = 10;
                    d_69da_dab4 = 1;
                }
            }
        }
    }
    return d_69da_dbd0;
}

char f_9007_2aae(int x, int team, int p)
{
    char buf[320];

top:
    d_69da_ddf3 = 0;
    sprintf(buf, "%s bid", (char far *)d_69da_b1fc[team]);
    f_1a70_4a41(buf);
    f_1a70_442b(1, 4.0, x);
    sprintf(buf, "%s want %s", (char far *)d_69da_b1fc[team], f_1a70_4592(p));
    f_1a70_0adb(7, buf);
    f_1a70_0adb(9, "He is on your shortlist");
    sprintf(buf, "Approach %s ?", f_1a70_4739(p));
    f_1a70_0adb(11, buf);
    f_1a70_2eaa(14, "", "View Factfile|View Squad|Ignore|Approach|");
menu:
    f_1a70_3226(3);
    if (d_69da_d992 == 0) {
        do
            f_aac9_42ed(p, -1, 0);
        while (!d_69da_ddbe);
        d_69da_ddbe = 0;
        goto top;
    }
    if (d_69da_d992 == 1) {
        f_7dd6_2dcf(x);
        goto top;
    }
    if (d_69da_d992 == 3) {
        if (d_4512_023e[x] + d_4512_1480[x] >= 26) {
            f_1a70_0b46("Maximum squad size is 26");
            if (d_4512_1480[x] > 0) {
                sprintf(buf, "%d player%s loaned out", d_4512_1480[x], d_4512_1480[x] > 1 ? "s" : "");
                f_1a70_0b46(buf);
            }
            goto menu;
        }
        d_69da_ddf3 = -1;
    }
    return d_69da_ddf3;
}

void f_9007_2c4c(int team)
{
    long v;
    char ok;
    char buf[320];

    for (d_69da_dbca = 1; d_69da_dbca <= 3; d_69da_dbca++) {
        for (d_69da_dbd4 = 1; d_69da_dbd4 <= d_69da_dbd2; d_69da_dbd4++) {
            if (d_536d_4f21[d_69da_dbd4 - 1] != 0 && d_4512_a17c[d_69da_dbd4] < d_69da_df15)
                d_536d_4f21[d_69da_dbd4 - 1] = 0;
            if (d_536d_4f21[d_69da_dbd4 - 1] == 0) {
                d_69da_d9d6 = d_4512_a0de[d_69da_dbd4];
                if (d_69da_dbca == 1) {
                    if (d_69da_ddf1 != 0 || d_69da_ddf0 != 0 || d_3668_cb70[team] == 0)
                        v = f_1a70_0cb8(f_2162_1390(f_1a70_01d9(team, d_69da_d9d6), f_1a70_588f(d_69da_d9d6)), 0);
                    else
                        v = f_2162_13d3(d_69da_df1d, f_1a70_588f(d_69da_d9d6));
                    if (v > d_69da_df1d)
                        v = d_69da_df1d;
                } else
                    v = d_4512_a17c[d_69da_dbd4];
                d_69da_ddf7 = d_69da_dbce > 0 ? -1 : 0;
                d_69da_ddf6 = d_536d_4ed1[d_69da_dbd4 - 1];
                d_4512_a17c[d_69da_dbd4] = f_9007_31bc(d_69da_d9d6, team, v);
                if (d_69da_dbce > 0) {
                    if (f_1a70_2bc7(d_69da_d9d6) == 0)
                        f_2162_0dfb(25);
                    sprintf(buf, "%s make a bid of %ld", (char far *)d_69da_b1fc[d_69da_d9d6],
                            d_4512_a17c[d_69da_dbd4]);
                    f_9007_4276(1, buf);
                }
                if (d_4512_a17c[d_69da_dbd4] > d_69da_df15)
                    d_69da_df15 = d_4512_a17c[d_69da_dbd4];
            }
        }
        if (d_69da_dbca > 1)
            d_69da_df1d = d_69da_df19;
        if (d_69da_df1d < d_69da_df15)
            d_69da_df1d = d_69da_df15;
        d_69da_ddf7 = d_69da_dbce > 0 ? -1 : 0;
        d_69da_df19 = f_9007_344b(d_28da_2a78[0][18 * 1860 + team], team, d_69da_df1d);
        ok = 0;
        for (d_69da_dbd4 = 1; d_69da_dbd4 <= d_69da_dbd2; d_69da_dbd4++) {
            d_69da_d9d6 = d_4512_a0de[d_69da_dbd4];
            if (d_4512_a17c[d_69da_dbd4] < d_69da_df19 && d_536d_4f21[d_69da_dbd4 - 1] != 0)
                d_536d_4f21[d_69da_dbd4 - 1] = 0;
            if (d_4512_a17c[d_69da_dbd4] == d_69da_df19) {
                if (d_536d_4f21[d_69da_dbd4 - 1] == 0) {
                    d_536d_4f21[d_69da_dbd4 - 1] = -1;
                    d_69da_ddef = -1;
                    if (d_69da_dbce > 0) {
                        f_2162_0dfb(25);
                        sprintf(buf, "%s offer is accepted", (char far *)d_69da_b1fc[d_69da_d9d6]);
                        f_9007_4276(1, buf);
                    }
                }
            } else {
                ok = -1;
                if (d_69da_dbce > 0) {
                    f_2162_0dfb(25);
                    sprintf(buf, "%s offer is refused", (char far *)d_69da_b1fc[d_69da_d9d6]);
                    f_9007_4276(1, buf);
                }
            }
        }
        if (ok == 0)
            d_69da_dbca = 3;
    }
    if (d_3668_cb70[team] == 0 && d_69da_ddef == 0) {
        d_69da_df01 = f_1a70_0cb8(f_1a70_01d9(team, -1), 0);
        if (d_69da_df01 > d_69da_df19)
            d_69da_df01 = d_69da_df19;
        if (d_69da_dbce > 0) {
            f_2162_0dfb(25);
            sprintf(buf, "Tribunal sets fee at %ld", d_69da_df01);
            f_9007_4276(6, buf);
        }
        d_69da_ddee = -1;
        for (d_69da_dbd4 = 1; d_69da_dbd4 <= d_69da_dbd2; d_69da_dbd4++) {
            d_69da_d9d6 = d_4512_a0de[d_69da_dbd4];
            if (f_1a70_588f(d_69da_d9d6) >= d_69da_df01) {
                d_4512_a17c[d_69da_dbd4] = d_69da_df01;
                d_536d_4f21[d_69da_dbd4 - 1] = -1;
                d_69da_ddef = -1;
            } else if (d_69da_dbce > 0) {
                sprintf(buf, "The %s board refuse to spend that much", (char far *)d_69da_b1fc[d_69da_d9d6]);
                f_9007_4276(1, buf);
            }
        }
    } else if (d_69da_ddef == 0 && d_69da_dbce > 0)
        f_9007_4276(6, "No agreement is reached");
}

long f_9007_31bc(int player, int club, long fee)
{
    d_69da_df25 = fee;
    if (f_1a70_2bc7(player)) {
        do {
            d_69da_ddd3 = -1;
            d_69da_dbde = d_69da_df25 / 1000;
            d_69da_dbe0 = player;
            d_69da_dbe2 = f_9007_3e8f(0, d_69da_dbde, 0, club);
            if (d_69da_ddf5) {
                do
                    f_aac9_42ed(club, -1, 0);
                while (!d_69da_ddbe);
                d_69da_ddbe = 0;
                d_69da_ddd3 = 0;
                f_9007_3c71(0, club);
            }
            d_69da_df25 = (long)d_69da_dbe2 * 1000;
            if (d_69da_ddd3 && f_1a70_588f(player) < d_69da_df25) {
                f_9007_4276(1, "The board refuse to spend that much");
                d_69da_ddd3 = 0;
            }
        } while (!d_69da_ddd3);
    } else {
        d_69da_df29 = d_69da_df25;
        if (f_2162_0da1(3) > 0)
            d_69da_df25 = d_69da_df25 * (f_2162_0da1(10) / 100.0 + 1.1);
        if (d_69da_df25 < d_69da_df15)
            d_69da_df25 = f_2162_13d3(d_69da_df15, d_69da_df21 * (d_69da_ddf6 ? 2.5 : 1.5));
        if (d_69da_df25 > d_69da_df19 && d_69da_dbd2 == 1)
            d_69da_df25 = d_69da_df19;
        if (d_69da_df25 > d_69da_df19 * 0.95)
            d_69da_df25 = d_69da_df19;
        if (f_1a70_588f(player) < d_69da_df25)
            d_69da_df25 = f_1a70_588f(player);
        if (d_69da_df25 != d_69da_df19)
            d_69da_df25 = f_1a70_0cb8(d_69da_df25, 0);
        if (d_69da_df25 < d_69da_df29)
            d_69da_df25 = d_69da_df29;
    }
    return d_69da_df25;
}

long f_9007_344b(int club, int player, long fee)
{
    int n;
    long first;
    int saved;

    saved = d_69da_dbfe;
    d_69da_dbfe = club;
    d_69da_df19 = fee;
    if (f_1a70_2bc7(d_69da_dbfe)) {
        do {
            d_69da_ddd3 = -1;
            d_69da_dbde = d_69da_df19 / 1000;
            n = d_69da_df15 / 1000;
            d_69da_dbe2 = f_9007_3e8f(1, d_69da_dbde, n, player);
            if (d_69da_ddf5) {
                do
                    f_aac9_42ed(player, -1, 0);
                while (!d_69da_ddbe);
                d_69da_ddbe = 0;
                d_69da_ddd3 = 0;
                f_9007_3c71(0, player);
            }
            d_69da_df19 = (long)d_69da_dbe2 * 1000;
            if (d_69da_ddd3 && d_69da_df19 < f_1a70_01d9(player, -1) * 0.5) {
                f_9007_4276(1, "The board expect more for him");
                d_69da_ddd3 = 0;
            }
        } while (!d_69da_ddd3);
    } else {
        first = d_69da_df19;
        if (f_2162_0da1(2) == 0)
            d_69da_df19 = d_69da_df19 * (0.9 - f_2162_0da1(10) / 100);
        if (d_69da_df19 * 0.95 < d_69da_df15)
            d_69da_df19 = d_69da_df15;
        else if (d_69da_df19 > d_69da_df15)
            d_69da_df19 = f_1a70_0cb8(d_69da_df19, 0);
        if (d_69da_df19 > first)
            d_69da_df19 = first;
    }
    d_69da_dbfe = saved;
    return d_69da_df19;
}

void f_9007_366e(int player, int club)
{
    d_69da_dbe4 = f_9007_3c28(d_28da_2a78[17][player]);
    d_69da_dbe6 = f_1a70_6d45(player, club);
    d_69da_dbe8 = d_28da_2a78[14][player] / 10 + 2.5;
    d_69da_ddeb = 0;
    if (f_1a70_2bc7(club) && d_69da_ddf8 == 0) {
        char buf[320];

        d_69da_dd98 = 1;
        d_69da_dbd8 = 7;
        f_9007_3c71(2, player);
        sprintf(buf, "He wants a %d year contract", d_69da_dbe4);
        f_9007_4276(1, buf);
        d_69da_dbea = 0;
        d_69da_dbec = 10;
        d_69da_dbee = -1;
        do {
            do {
                d_69da_ddd3 = -1;
                if (d_69da_dbee == -1)
                    d_69da_dbde = d_69da_dbe4;
                else
                    d_69da_dbde = d_69da_dbee;
                d_69da_dbe2 = f_9007_3e8f(2, d_69da_dbde, 1, player);
                if (d_69da_ddf5) {
                    do
                        f_aac9_42ed(player, -1, 0);
                    while (!d_69da_ddbe);
                    d_69da_ddbe = 0;
                    d_69da_ddd3 = 0;
                    f_9007_3c71(2, player);
                }
                d_69da_dbee = d_69da_dbe2;
            } while (!d_69da_ddd3);
            if (d_69da_dbee != d_69da_dbe4 &&
                (f_2162_0da1(abs(d_69da_dbe4 - d_69da_dbee) + 2) > 0 ||
                 abs(d_69da_dbe4 - d_69da_dbee) >= d_69da_dbec)) {
                sprintf(buf, "He refuses %d year offer", d_69da_dbee);
                f_9007_4276(1, buf);
                d_69da_dbea++;
                if (d_69da_dbea <= d_69da_dbe8)
                    d_69da_dbec = abs(d_69da_dbe4 - d_69da_dbee);
                d_69da_ddd3 = 0;
            }
        } while (d_69da_dbea <= d_69da_dbe8 && d_69da_ddd3 == 0);
        if (d_69da_ddd3) {
            sprintf(buf, "He accepts %d year offer", d_69da_dbee);
            f_9007_4276(1, buf);
            sprintf(buf, "He wants %d per week", d_69da_dbe6);
            f_9007_4276(1, buf);
            d_69da_dbc2 = d_69da_dbee;
            d_69da_ddf7 = -1;
            d_69da_dbea = 0;
            d_69da_dbf0 = -1;
            d_69da_dbf2 = 0;
            d_69da_dbf4 = f_9007_3aa8(player, club);
            do {
                do {
                    d_69da_ddd3 = -1;
                    if (d_69da_dbf0 == -1)
                        d_69da_dbde = d_69da_dbe6;
                    else
                        d_69da_dbde = d_69da_dbf0;
                    d_69da_dbe2 = f_9007_3e8f(3, d_69da_dbde, 100, player);
                    if (d_69da_ddf5) {
                        do
                            f_aac9_42ed(player, -1, 0);
                        while (!d_69da_ddbe);
                        d_69da_ddbe = 0;
                        d_69da_ddd3 = 0;
                        f_9007_3c71(2, player);
                    }
                    d_69da_dbf0 = d_69da_dbe2;
                    if (d_69da_ddd3 && d_69da_dbf0 > d_69da_dbf4) {
                        f_9007_4276(1, "The board refuse to spend that per week");
                        d_69da_ddd3 = 0;
                    }
                } while (!d_69da_ddd3);
                d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
                if ((d_69da_dbe6 * (1 - f_2162_0da1(6) * 0.05) > d_69da_dbf0 ||
                     d_69da_dbf0 <= d_69da_dbf2 || d_69da_dfa6[4][player] > d_69da_dbf0 &&
                     d_28da_2a78[17][player] < 30) &&
                    abs(d_69da_dbf0 - d_69da_dbe6) > f_2162_0da1(20) + 25) {
                    sprintf(buf, "He wants more than %d per week", d_69da_dbf0);
                    f_9007_4276(1, buf);
                    d_69da_dbea++;
                    if (d_69da_dbea <= d_69da_dbe8)
                        d_69da_dbf2 = d_69da_dbf0;
                    d_69da_ddd3 = 0;
                }
            } while (d_69da_dbea <= d_69da_dbe8 && d_69da_ddd3 == 0);
            if (d_69da_ddd3) {
                sprintf(buf, "He accepts %d per week", d_69da_dbf0);
                f_9007_4276(1, buf);
                d_69da_dbc4 = d_69da_dbf0;
                d_69da_ddeb = -1;
            }
        }
        if (d_69da_ddeb == 0)
            f_9007_4276(6, "No deal");
    } else {
        d_69da_dbc2 = d_69da_dbe4;
        d_69da_dbc4 = d_69da_dbe6;
        d_69da_ddeb = -1;
    }
}

int f_9007_3aa8(int player, int team)
{
    unsigned char c;
    unsigned char r;
    unsigned char rep = team < 80 ? f_1a70_2bff(team) : 16.0;
    float w;
    float t[4] = { 1.0, 0.7, 0.4, 0.3 };

    c = d_3668_0000[18][player];
    d_69da_dbf6 = (d_28da_2a78[0][player] * 4 + c) / 5;
    r = f_2162_134e(f_2162_13ba(19, d_69da_dbf6 / 10), 0);
    w = rep * 0.14 * (d_28d3_0000[r] * 400.0) * t[team < 80 ? team / 20 : 0];
    w = w * (d_28da_2a78[17][player] / 100.0 + 1);
    if (d_4512_bdc8[player].f28)
        w = w * 1.3;
    d_69da_dbf4 = (int)(w / 50.0) * 50;
    d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
    if (d_69da_dfa6[4][player] > d_69da_dbf4)
        d_69da_dbf4 = d_69da_dfa6[4][player];
    if (d_69da_dbf4 > 9000)
        d_69da_dbf4 = 9000;
    return d_69da_dbf4;
}

int f_9007_3c28(int age)
{
    d_69da_dbe4 = f_2162_0da1(5) + 1;
    if (age >= 27 && age <= 31)
        d_69da_dbe4 = f_2162_13ba(32 - age, d_69da_dbe4);
    else if (age > 31)
        d_69da_dbe4 = f_2162_13ba(d_69da_dbe4, 2);
    return d_69da_dbe4;
}

void f_9007_3c71(int mode, int player)
{
    char buf[320];

    if (mode == 0) {
        sprintf(buf, "%s - Transfer Fee", f_1a70_4592(player));
        strcpy(d_536d_5cad, "Fee Negotiations");
    } else if (mode == 1) {
        sprintf(buf, "%s - Asking Price", f_1a70_4592(player));
        strcpy(d_536d_5cad, "Set Asking Price");
    } else if (mode == 2) {
        sprintf(buf, "%s - Contract", f_1a70_4592(player));
        strcpy(d_536d_5cad, "Set Contract");
    } else {
        sprintf(buf, "%s - Wage Increase", f_1a70_4592(player));
        strcpy(d_536d_5cad, "Set Weekly Wage");
    }
    f_1a70_4a41(buf);
    f_2162_0897(16);
    f_2162_08b5(14, 36, 314, 127);
    f_2162_0897(31);
    f_2162_08b5(10, 32, 310, 123);
    f_2162_08a6(19);
    f_2162_090f(10, 32, 310, 123);
    sprintf(buf, " %s", d_536d_5cad);
    f_1a70_3554(1.625, 5.0, 1, 2, 296, buf);
    f_9007_3dcf(player, 0);
    d_69da_ddf7 = -1;
    d_69da_dd98 = 0;
}

void f_9007_3dcf(int player, char lit)
{
    f_2162_0897(16);
    f_2162_08b5(14, 135, 172, 192);
    f_2162_0897(lit ? 28 : 20);
    f_2162_08b5(10, 131, 168, 188);
    f_2162_08a6(17);
    f_2162_090f(10, 131, 168, 188);
    strcpy(d_536d_6c53, f_1a70_4739(player));
    f_1a70_344b(79 - strlen(d_536d_6c53) * 3 + 19, 156, 1, d_536d_6c53);
    f_1a70_344b(74, 164, 1, "Factfile");
}

int f_9007_3e8f(int mode, int value, int lo, int player)
{
    d_69da_ddf5 = 0;
    d_69da_dbfa = value;
    d_69da_dbfc = mode == 2 ? 5 : 9999;
    if (d_69da_ddf7 != 0) {
        f_1a70_4e4b();
        f_2162_0897(16);
        f_2162_08b5(180, 135, 314, 192);
        f_2162_0897(24);
        f_2162_08b5(176, 131, 310, 188);
        f_2162_08a6(22);
        f_2162_090f(176, 131, 310, 188);
        if (mode == 0)
            sprintf(d_536d_6ca3, "%s Offer", (char far *)d_69da_b1fc[d_69da_dbe0]);
        else if (mode == 1)
            sprintf(d_536d_6ca3, "%s Ask", (char far *)d_69da_b1fc[d_69da_dbfe]);
        else if (mode == 2)
            strcpy(d_536d_6ca3, " Length");
        else
            strcpy(d_536d_6ca3, " Wages p/w");
        f_2162_0897(30);
        f_2162_08b5(180, 135, 306, 150);
        f_1a70_344b(251 - strlen(d_536d_6ca3) * 3, 146, 6, d_536d_6ca3);
        f_1a70_4ede(2, 22.75, 19.625, 1, 14, 26, " - ");
        f_1a70_4ede(2, 34.875, 19.625, 1, 14, 26, " + ");
        f_1a70_4ede(2, 22.75, 21.75, 1, 14, 123, "      DONE");
        f_1a70_3d0c(33.125, 19.625, 14, 1, 9, mode == 2 || mode == 3 ? "" : "K");
        strcpy(d_536d_6cf3, "    ");
        f_9007_417a(d_69da_dbfa, -1);
    }
    do {
        d_69da_d992 = f_1a70_53de(-1);
        if (d_69da_d992 == 1) {
            d_69da_dbfa = f_2162_134e(d_69da_dbfa - d_69da_2f7c[7 - d_69da_dbd8], lo);
            f_9007_417a(d_69da_dbfa, 0);
        } else if (d_69da_d992 == 2) {
            d_69da_dbfa = f_2162_13ba(d_69da_dbfa + d_69da_2f7c[7 - d_69da_dbd8], d_69da_dbfc);
            f_9007_417a(d_69da_dbfa, 0);
        } else if (d_69da_d992 >= 4) {
            if (d_69da_d992 != 7 && mode == 2)
                continue;
            if (d_69da_dbd8 != d_69da_d992) {
                d_28da_28bc[d_69da_dbd8 - 1] = 0xe1;
                f_1a70_525f(d_69da_dbd8, 0);
                d_69da_dbd8 = d_69da_d992;
                d_28da_28bc[d_69da_dbd8 - 1] = 1;
                f_1a70_525f(d_69da_dbd8, 0);
            }
        } else if (f_2162_0c1f() >= 10 && f_2162_0c1f() <= 168 && f_2162_0c13() >= 131 && f_2162_0c13() <= 188) {
            d_69da_ddf5 = -1;
            f_9007_3dcf(player, -1);
        }
    } while (d_69da_d992 != 3 && d_69da_ddf5 == 0);
    d_69da_ddf7 = 0;
    return d_69da_dbfa;
}

void f_9007_417a(int n, char draw)
{
    char s[2];

    s[1] = 0;
    sprintf(d_536d_5a0f, "%04d", n);
    for (d_69da_da6e = 1; d_69da_da6e <= 4; d_69da_da6e++) {
        s[0] = d_536d_5a0f[d_69da_da6e - 1];
        if (d_536d_6cf3[d_69da_da6e - 1] != s[0]) {
            if (draw) {
                d_69da_de55 = (d_69da_da6e - 1) * 1.625 + 26.625;
                f_1a70_4ede(2, d_69da_de55, 19.625, d_69da_da6e + 3 != d_69da_dbd8 ? 14 : 0, 1, 8, s);
            } else {
                strcpy(d_536d_86c5[d_69da_da6e + 3], s);
                f_1a70_525f(d_69da_da6e + 3, 0);
            }
        }
    }
    strcpy(d_536d_6cf3, d_536d_5a0f);
}

void f_9007_4276(int colour, char far *s)
{
    if (d_69da_dd98 == 9) {
        for (d_69da_db92 = 1; d_69da_db92 <= 4; d_69da_db92++) {
            f_2162_1196(12, 42, 308, 121, 2, 31);
            f_2162_08a6(31);
            f_2162_1021(12, 42, 308, 42);
            f_2162_1021(12, 43, 308, 43);
        }
        d_69da_dd98 = 8;
    }
    f_1a70_344b(23, d_69da_dd98 * 8 + 50, colour, s);
    d_69da_dd98++;
    if (colour == 6)
        f_2162_0dfb(50);
}

void f_9007_430d(int player, int to, int from, long fee, unsigned char kind)
{
    int saved;

    saved = from;
    if (player >= 1860)
        player = 1860;
    d_69da_dbfe = from;
    if (d_69da_d996 > 8) {
        f_2162_19f6(2);
        d_69da_0094 = fopen(d_536d_a49d, "rb+");
        f_b085_33dc(player);
        fclose(d_69da_0094);
    }
    if (to < 80 && f_1a70_2bc7(to) && kind != 2)
        f_b085_4566(d_4512_1a30[to] + 122, 1, player, d_69da_dbfe, kind ? 1L : fee, d_69da_ddee);
    if (d_69da_dbfe < 80 && f_1a70_2bc7(d_69da_dbfe) && kind != 2)
        f_b085_4566(d_4512_1a30[d_69da_dbfe] + 122, 2, player, to, kind ? 1L : fee, d_69da_ddee);
    if (kind == 1) {
        d_69da_dfba = f_2162_1634(d_69da_dff6, 1);
        d_69da_dfba[4][player] = d_3668_0000[12][player];
        d_69da_dfba[5][player] = d_3668_0000[13][player];
        d_69da_dfa6 = f_2162_1634(d_69da_dfec, 1);
        d_69da_dfa6[3][player] = d_69da_dfa6[2][player];
        d_4512_16be[to]++;
    }
    if (kind == 2) {
        d_69da_dfba = f_2162_1634(d_69da_dff6, 0);
        d_3668_0000[12][player] = d_69da_dfba[4][player];
        d_3668_0000[13][player] = d_69da_dfba[5][player];
        d_69da_dfa6 = f_2162_1634(d_69da_dfec, 1);
        d_69da_dfa6[2][player] = d_69da_dfa6[3][player];
    } else if (kind < 2) {
        d_3668_0000[12][player] = 0;
        d_3668_0000[13][player] = 0;
        d_69da_dfa6 = f_2162_1634(d_69da_dfec, 1);
        d_69da_dfa6[2][player] = 0;
    }
    if (kind == 0) {
        d_3668_cb70[player] = (d_69da_d99a + d_69da_dbc2) * 100 + f_1a70_68a4(d_69da_d996);
        d_69da_dfa6 = f_2162_1634(d_69da_dfec, 1);
        d_69da_dfa6[4][player] = d_69da_dbc4;
        d_4512_bdc8[player].f9 = 1;
        d_4512_bdc8[player].f11 = 1;
        d_4512_bdc8[player].f12 = 0;
        d_4512_bdc8[player].f13 = 0;
    } else if (kind == 1)
        d_3668_0000[9][player]++;
    d_3668_0000[11][player] = 0;
    d_4512_bdc8[player].f8 = 0;
    d_4512_bdc8[player].f10 = 0;
    d_4512_bdc8[player].f20 = kind == 1;
    d_4512_bdc8[player].f24 = 0;
    d_4512_bdc8[player].f16 = 0;
    if (d_69da_dbfe != to) {
        if (kind < 2) {
            long v;

            if (kind == 0) {
                if (d_28da_2a78[0][player] > d_28da_2a78[15][player])
                    d_28da_2a78[15][player] = d_28da_2a78[0][player];
                if (d_69da_dbfe < 80 && !d_69da_ddb3) {
                    d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
                    d_69da_dfae[2][d_69da_dbfe] += fee * 0.9;
                }
                if (to < 80 && !d_69da_ddb3) {
                    d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
                    d_69da_dfae[9][to] += fee;
                }
                if (d_69da_dbfe < 80 && to < 80 && !d_69da_ddb3)
                    for (d_69da_d9d6 = 0; d_69da_d9d6 <= 79; d_69da_d9d6++)
                        if (d_69da_d9d6 != to && d_69da_d9d6 != d_69da_dbfe) {
                            d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
                            d_69da_dfae[6][d_69da_d9d6] += fee * (1.0 / 780);
                        }
                if (to < 80) {
                    f_9c01_4864(player, d_69da_dbfe, to, fee);
                    d_4512_1fd0[to] += fee;
                }
                if (d_69da_dbfe < 80) {
                    f_9c01_48e4(player, d_69da_dbfe, to, fee);
                    d_4512_2110[d_69da_dbfe] += fee;
                }
                v = fee;
            } else
                v = 1;
            if (d_69da_dbfe < 80) {
                unsigned char c;

                c = d_536d_0000[d_69da_dbfe].n_out % 6;
                d_536d_0000[d_69da_dbfe].out[c] = player;
                d_536d_0000[d_69da_dbfe].out_club[c] = to;
                d_536d_0000[d_69da_dbfe].out_fee[c] = v;
                d_536d_0000[d_69da_dbfe].n_out++;
            }
            if (to < 80) {
                unsigned char c;

                c = d_536d_0000[to].n_in % 6;
                d_536d_0000[to].in[c] = player;
                d_536d_0000[to].in_club[c] = d_69da_dbfe;
                d_536d_0000[to].in_fee[c] = v;
                d_536d_0000[to].n_in++;
            }
        }
        d_3668_0000[10][player] = d_69da_dbfe;
        f_9007_4ad8(player, d_69da_dbfe, to, kind);
    }
    if (kind == 0)
        f_9007_17fd(player, 0);
    if (to < 80 && f_1a70_2bc7(to) == 0 && d_69da_ddb7 == 0 && kind != 2) {
        unsigned char i;

        for (i = 0; d_536d_1ae0[i].player != -1; i++)
            ;
        d_536d_1ae0[i].player = player;
        d_536d_1ae0[i].from = d_69da_dbfe;
        d_536d_1ae0[i].to = to;
        if (kind == 0)
            d_536d_1ae0[i].fee = fee;
        else if (kind == 1)
            d_536d_1ae0[i].fee = 1;
        f_b8da_66d3(i);
    }
    if (to < 80 && f_1a70_2bc7(to) == 0)
        f_9007_193f(to);
    d_69da_dbfe = saved;
}

#pragma option -O-
void f_9007_4ad8(int player, int from, int to, char kind)
{
    if (from != to) {
        if (from < 80) {
            if (f_1a70_6d23(player) == 0)
                for (d_69da_da14 = 0; d_69da_da14 <= d_4512_023e[from] - 1; d_69da_da14++)
                    if (d_28da_10f0[from][d_69da_da14] == player)
                        d_28da_10f0[from][d_69da_da14] = d_28da_10f0[from][d_4512_023e[from] - 1];
            d_4512_023e[from]--;
            if (d_4512_bdc8[player].f0)
                d_4512_0334[from]--;
            if (f_1a70_2bc7(from) && f_1a70_6d23(player) == 0)
                f_b8da_31f2(player, from);
        }
        if (to < 80) {
            d_28da_10f0[to][d_4512_023e[to]] = player;
            d_4512_023e[to]++;
            if (d_4512_bdc8[player].f0)
                d_4512_0334[to]++;
            if (f_1a70_2bc7(to))
                f_b8da_31a2(player, to);
        }
    }
    if (from < 80 && f_1a70_6d23(player) == 0) {
        if (f_1a70_2bc7(from) == 0)
            f_1a70_0e4d(player);
        else if (d_4512_bdc8[player].f7) {
            d_4512_549a[from][f_1a70_1dc1(player)] = 0x743;
            d_4512_bdc8[player].f7 = 0;
        }
        if (*(d_28da_2a78[23] + player) < 3)
            f_1a70_1600(player);
    }
    if (from != to) {
        d_28da_2a78[18][player] = to;
        if (kind == 1) {
            d_3668_0000[7][player] = from;
            d_3668_0000[8][player] = 8;
            d_4512_1480[from]++;
            d_4512_142e[to]++;
        } else if (kind == 2) {
            d_3668_0000[7][player] = -1;
            d_4512_142e[from]--;
            d_4512_1480[to]--;
        }
        if (to < 80) {
            if (f_1a70_2bc7(to) == 0 && *(d_28da_2a78[20] + player) == 0)
                f_1a70_12cd(player);
            d_28da_2a78[23][player] = 3;
            f_1a70_18e0(player);
        }
    }
}

void f_9007_4da1(int player, int a)
{
    unsigned char c;
    char s[80];
    char buf[320];

    if (a > 0) {
        if (f_1a70_6d23(player) == 0)
            f_9007_1d9a(a - 1, player, 0);
        else
            f_b8da_3fe4(player, a - 1);
    } else if (a == -1) {
        d_69da_ddf9 = 0;
        f_9007_511f(player);
    } else if (a < -1) {
        d_69da_dc00 = -a - 2;
        do {
            f_1a70_4a41("Shortlist/Watch Player");
            f_1a70_442b(1.0, 4.0, d_69da_dc00);
            sprintf(buf, "Shortlist %s ?", f_1a70_4592(player));
            f_1a70_0adb(7, buf);
            f_1a70_2eaa(10, "", "*Exit|Shortlist|Shortlist & Watch|");
            f_1a70_3226(2);
            c = d_69da_d992;
            if (c > 0) {
                if (f_9007_1a61(d_69da_dc00, player) > 0)
                    sprintf(buf, "%s already shortlisted", f_1a70_4739(player));
                else {
                    d_4512_637c[d_69da_dc00][0]++;
                    d_4512_637c[d_69da_dc00][d_4512_637c[d_69da_dc00][0]] = player;
                    sprintf(buf, "Ok - %s shortlisted", f_1a70_4739(player));
                    if (d_69da_da4c > 1) {
                        sprintf(s, "|for %s", (char far *)d_69da_b1fc[d_69da_dc00]);
                        strcat(buf, s);
                    }
                }
                f_1a70_0b80(buf);
            }
            if (c == 2) {
                if (f_1a70_6d23(player) == 0)
                    f_b085_6084(d_69da_dc00, player);
                else
                    f_1a70_0b80("Can't watch foreign|based players");
            }
        } while (c > 0);
    }
}

char f_9007_4f89(int player, char flag)
{
    d_69da_ddf9 = 0;
    if (f_1a70_2bc7(d_28da_2a78[0][18 * 1860 + player]))
        f_9007_511f(player);
    else if (!d_4512_bdc8[player].f9 && !d_4512_bdc8[player].f30 && f_1a70_2d0e(player) == 0
             && *(d_28da_2a78[23] + player) == 3 && d_4512_1ad0[*(d_28da_2a78[18] + player)] < 650) {
        if (flag == 0 && f_1a70_2ccc(player) < f_1a70_2bff(d_28da_2a78[0][18 * 1860 + player]) + 3.0
            || flag != 0 && f_1a70_2ccc(player) >= f_1a70_2bff(d_28da_2a78[0][18 * 1860 + player]) + 3.0
               && *(d_28da_2a78[20] + player) == 0 && !d_4512_bdc8[player].f7 && d_3668_0000[9][player] < 2)
            d_69da_ddf9 = -1;
    }
    return d_69da_ddf9;
}

void f_9007_511f(int player)
{
    unsigned char n;
    unsigned char club;
    unsigned char c;
    char buf[320];
    char item[30];

    do {
        n = 0;
        d_69da_ddf4 = 0;
        d_69da_ddfa = f_1a70_68f0(player, 0);
        f_1a70_4a41("Transfer Status");
        club = d_3668_0000[7][player] < 255 ? d_3668_0000[7][player] : d_28da_2a78[18][player];
        f_1a70_442b(1.0, 4.0, club);
        f_1a70_0adb(7, f_1a70_4592(player));
        if (d_3668_0000[7][player] < 255) {
            sprintf(buf, "On loan to %s", (char far *)d_69da_b1fc[*(d_28da_2a78[18] + player)]);
            f_1a70_0adb(9, buf);
            if (d_3668_0000[8][player] < 3) {
                strcpy(d_536d_50cd, "Terminate Loan|Extend Loan|");
                n += 2;
            } else {
                strcpy(d_536d_50cd, "Terminate Loan|");
                n++;
            }
        } else {
            if (d_4512_bdc8[player].f8 && !d_4512_bdc8[player].f24) {
                d_69da_df9a = f_2162_1634(d_69da_dfe6, 0);
                if (d_69da_df9a[player] > 0)
                    sprintf(buf, "For sale at %ld", d_69da_df9a[player]);
                else
                    strcpy(buf, "Available for free transfer");
                f_1a70_0adb(9, buf);
                strcpy(d_536d_50cd, "Revalue Him|Remove From List|");
                n += 2;
            } else if (d_4512_bdc8[player].f8 && d_4512_bdc8[player].f24) {
                strcpy(buf, "Available for loan");
                f_1a70_0adb(9, buf);
                strcpy(d_536d_50cd, "Remove From List|");
                n++;
            } else if (d_4512_bdc8[player].f9 || d_4512_bdc8[player].f30) {
                f_1a70_0adb(9, "Not for sale at any price");
                strcpy(d_536d_50cd, "Allow Approaches|");
                n++;
            } else {
                f_1a70_0adb(9, "Currently open to approach");
                strcpy(d_536d_50cd, "List/Loan Him|Not For Sale|");
                n += 2;
            }
            strcat(d_536d_50cd, "Fine Him|");
            n++;
            if (!d_4512_bdc8[player].f20)
                strcat(d_536d_50cd, "Insure Him|");
            else
                strcat(d_536d_50cd, "Uninsure Him|");
            n++;
            if (d_3668_cb70[player] == 0 || d_3668_cb70[player] / 100 == d_69da_d99a) {
                strcat(d_536d_50cd, "Renew Contract|");
                n++;
            }
            if (d_3668_cb70[player] > 0 && !d_4512_bdc8[player].f8) {
                strcat(d_536d_50cd, "Increase Wages|");
                n++;
            }
            if (*(d_28da_2a78[20] + player) > 0 && *(d_28da_2a78[19] + player) < 26) {
                strcat(d_536d_50cd, "Rehabilitate|");
                n++;
            }
        }
        sprintf(buf, "*Exit|%s", d_536d_50cd);
        n++;
        f_1a70_2eaa(12, "", buf);
        do {
            d_69da_ddbc = -1;
            f_1a70_3226(n - 1);
            strcpy(item, d_536d_968d[d_69da_d992]);
            if (strstr(item, "Terminate")) {
                if (f_1a70_0c2c()) {
                    sprintf(buf, "%s returns from loan", f_1a70_4739(player));
                    f_1a70_0b46(buf);
                    f_9007_430d(player, d_3668_0000[7][player], d_28da_2a78[0][18 * 1860 + player], 0L, 2);
                } else
                    d_69da_ddbc = 0;
            } else if (strstr(item, "Extend")) {
                if (f_1a70_0c2c()) {
                    c = d_3668_0000[7][player];
                    if (f_b8da_5e02(player)) {
                        d_3668_0000[8][player] += 4;
                        d_3668_0000[9][player]++;
                        sprintf(buf, "%s accept your request", (char far *)d_69da_b1fc[c]);
                        f_1a70_0b46(buf);
                        f_1a70_0b46("The loan is extended by a month");
                    } else {
                        sprintf(buf, "%s refuse your request", (char far *)d_69da_b1fc[c]);
                        f_1a70_0b46(buf);
                    }
                    if (f_1a70_2bc7(c))
                        d_69da_ddf4 = -1;
                    else
                        d_69da_ddbc = 0;
                } else
                    d_69da_ddbc = 0;
            } else if (strstr(item, "Revalue")) {
                f_9661_0b09(player);
                d_69da_ddf4 = -1;
            } else if (strstr(item, "Allow")) {
                if (f_1a70_0c2c()) {
                    sprintf(buf, "%s now approachable", f_1a70_4739(player));
                    f_1a70_0b46(buf);
                    d_4512_bdc8[player].f9 = 0;
                    d_69da_ddf4 = -1;
                } else
                    d_69da_ddbc = 0;
            } else if (strstr(item, "List/Loan")) {
                f_1a70_2eaa(0, "List/Loan Him", "*Exit|List Him|Loan Him|");
                if (d_69da_d992 == 1) {
                    sprintf(buf, "%s now transfer listed", f_1a70_4739(player));
                    f_1a70_0b46(buf);
                    f_9661_09b7(player, 0, 0);
                } else if (d_69da_d992 == 2) {
                    sprintf(buf, "%s now available for loan", f_1a70_4739(player));
                    f_1a70_0b46(buf);
                    f_9661_09b7(player, 0, -1);
                }
                d_69da_d992;
                d_69da_ddf4 = -1;
            } else if (strstr(item, "Remove")) {
                if (f_1a70_0c2c()) {
                    if (d_4512_bdc8[player].f10) {
                        if (d_69da_ddfa && d_3668_cb70[player] == 0) {
                            sprintf(buf, "%s refuses", f_1a70_4739(player));
                            f_1a70_0b46(buf);
                            sprintf(buf, "He %s", d_536d_69d1);
                            f_1a70_0b46(buf);
                            d_69da_ddbc = 0;
                            d_69da_ddbc;
                        } else if (d_69da_ddfa && d_3668_cb70[player] > 0) {
                            sprintf(buf, "%s told to stay", f_1a70_4739(player));
                            f_1a70_0b46(buf);
                            f_1a70_0b46("But he's still unhappy");
                            f_9661_0aa7(player);
                            d_69da_ddf4 = -1;
                        } else {
                            sprintf(buf, "%s agrees to stay", f_1a70_4739(player));
                            f_1a70_0b46(buf);
                            f_9661_0aa7(player);
                            d_69da_ddf4 = -1;
                        }
                    } else {
                        sprintf(buf, "%s removed from list", f_1a70_4739(player));
                        f_1a70_0b46(buf);
                        f_9661_0aa7(player);
                        d_69da_ddf4 = -1;
                    }
                } else
                    d_69da_ddbc = 0;
            } else if (strstr(item, "Not For")) {
                if (d_3668_cb70[player] == 0) {
                    sprintf(buf, "%s must sign a new contract", f_1a70_4739(player));
                    f_1a70_0b46(buf);
                    d_69da_ddbc = 0;
                } else if (f_1a70_0c2c()) {
                    sprintf(buf, "%s now unapproachable", f_1a70_4739(player));
                    f_1a70_0b46(buf);
                    d_4512_bdc8[player].f9 = 1;
                    d_69da_ddf4 = -1;
                } else
                    d_69da_ddbc = 0;
            } else if (strstr(item, "Fine")) {
                if (f_1a70_0c2c()) {
                    d_69da_da4e = d_4512_1a30[*(d_28da_2a78[18] + player)] - 646;
                    sprintf(buf, "%04d", player);
                    d_69da_dfd2 = f_2162_1634(d_69da_e002, 0);
                    d_69da_ddfb = f_2162_0b1b(d_69da_dfd2[d_69da_da4e], buf) > 0;
                    if (d_69da_ddfb) {
                        f_1a70_0b46("Maximum one fine per week");
                        d_69da_ddbc = 0;
                    } else {
                        sprintf(buf, "%s fined a weeks wages", f_1a70_4739(player));
                        f_1a70_0b46(buf);
                        f_9661_11c2(player, d_4512_bdc8[player].f15);
                        sprintf(buf, "%04d", player);
                        d_69da_dfd2 = f_2162_1634(d_69da_e002, 1);
                        strcat(d_69da_dfd2[d_69da_da4e], buf);
                        if (d_69da_dc04 == 3 || !d_4512_bdc8[player].f15) {
                            switch (d_69da_db6a = f_2162_0da1(3)) {
                            case 0:
                                strcpy(buf, "He cannot believe it");
                                break;
                            case 1:
                                strcpy(buf, "He is astonished");
                                break;
                            case 2:
                                strcpy(buf, "He feels it is unfair");
                                buf;
                                break;
                            }
                        } else if (d_69da_dc04 == 2) {
                            switch (d_69da_db6a = f_2162_0da1(3)) {
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
                            d_69da_db6a;
                        } else {
                            d_69da_ddbc = 0;
                            continue;
                        }
                        f_1a70_0b46(buf);
                        d_69da_ddbc = 0;
                    }
                } else
                    d_69da_ddbc = 0;
            } else if (strstr(item, "Insure")) {
                if (*(d_28da_2a78[20] + player) > 0 && *(d_28da_2a78[19] + player) < 26) {
                    f_1a70_0b46("Insurance refused - player injured");
                    d_69da_ddbc = 0;
                } else {
                    d_69da_df2d = f_9661_13f2(player);
                    sprintf(buf, "Insurance would cost %ld p/w", d_69da_df2d);
                    f_1a70_0b46(buf);
                    if (f_1a70_0c2c()) {
                        sprintf(buf, "%s now insured", f_1a70_4739(player));
                        f_1a70_0b46(buf);
                        d_4512_bdc8[player].f20 = 1;
                        d_69da_ddf4 = -1;
                    } else
                        d_69da_ddbc = 0;
                }
            } else if (strstr(item, "Uninsure")) {
                if (f_1a70_0c2c()) {
                    sprintf(buf, "%s now uninsured", f_1a70_4739(player));
                    f_1a70_0b46(buf);
                    d_4512_bdc8[player].f20 = 0;
                    d_69da_ddf4 = -1;
                } else
                    d_69da_ddbc = 0;
            } else if (strstr(item, "Renew")) {
                d_69da_da4e = d_4512_1a30[*(d_28da_2a78[18] + player)] - 646;
                sprintf(buf, "%04d", player);
                d_69da_dfce = f_2162_1634(d_69da_e000, 0);
                d_69da_ddfb = strstr(d_69da_dfce[d_69da_da4e], buf) ? 1 : 0;
                if (d_69da_ddfb || d_69da_ddfa || f_b8da_4a37(player)) {
                    sprintf(buf, "%s refuses to negotiate", f_1a70_4739(player));
                    f_1a70_0b46(buf);
                    if (d_69da_ddfa)
                        sprintf(buf, "He %s", d_536d_69d1);
                    else if (f_b8da_4a37(player))
                        strcpy(buf, "He is expected to move abroad");
                    else
                        strcpy(buf, "He may resume talks next week");
                    f_1a70_0b46(buf);
                    d_69da_ddbc = 0;
                } else {
                    sprintf(buf, "%s agrees to negotiate", f_1a70_4739(player));
                    f_1a70_0b46(buf);
                    f_9661_0000(player, d_28da_2a78[0][18 * 1860 + player], d_69da_da4e);
                    d_69da_ddf4 = -1;
                }
            } else if (strstr(item, "Increase")) {
                f_9661_0ebd(player);
                d_69da_ddf4 = -1;
            } else if (strstr(item, "Rehab")) {
                f_b8da_0994(player);
                d_69da_ddf4 = -1;
            }
        } while (!d_69da_ddbc);
    } while (d_69da_ddf4 != 0);
}
