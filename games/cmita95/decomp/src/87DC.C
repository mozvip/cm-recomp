/* @at 87dc:0000 */
/* @data 61eb:3066 */
/* @module */

/* Overlay 87dc (CM94's 9007.C, the first CM Italia's 8539.C, CM93's 8AA1.C, from CM1's
 * 8352.C): transfers and contracts: the cup group tables, the week's loans and transfer
 * news, picking and approaching players to buy or to take on loan, bids, fees, asking prices
 * and tribunals, contract and wage talks, the offer and factfile screens, completing
 * transfers, and the player-actions menu (f_87dc_4fea). Its data is the steps of the digits
 * a value is set with, the initialiser of f_87dc_3a09's factors, then its literal pool.
 * Jump optimisation is off from 49e4 on (CM94's 4ad8; only 4fea needs it). */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <math.h>
#include <stdlib.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_87dc_0000(void);
void f_87dc_021e(void);
unsigned char f_87dc_054e(unsigned char skip);
void f_87dc_061e(void);
void f_87dc_0699(void);
void f_87dc_08ba(void);
void f_87dc_0cc9(int n);
char f_87dc_0f01(int team);
void f_87dc_0f85(int team);
int f_87dc_1060(int team);
void f_87dc_11b5(void);
void f_87dc_1427(int p);
char f_87dc_1629(int p, int team);
void f_87dc_182c(int p, char all);
void f_87dc_196e(int team);
int f_87dc_1a90(int team, int p);
void f_87dc_1aea(void);
void f_87dc_1d05(int team, int player, char loan);
char f_87dc_274f(int p, int team, int n);
int f_87dc_291e(int a, int b);
char f_87dc_2a14(int x, int team, int p);
void f_87dc_2bb2(int team);
long f_87dc_311d(int player, int club, long fee);
long f_87dc_33ac(int club, int player, long fee);
void f_87dc_35cf(int player, int club);
int f_87dc_3a09(int player, int team);
int f_87dc_3b88(int age);
void f_87dc_3bd1(int mode, int player);
void f_87dc_3d2f(int player, char lit);
int f_87dc_3def(int mode, int value, int lo, int player);
void f_87dc_40a7(int n, char draw);
void f_87dc_41a3(int colour, char far *s);
void f_87dc_423a(int player, int to, int from, long fee, unsigned char kind);
void f_87dc_49e4(int player, int from, int to, char kind);
void f_87dc_4c9b(int player, int a);
char f_87dc_4e83(int player, char flag);
void f_87dc_4fea(int player);

void f_215d_13f1(void far *a, void far *b, int n);
void far *f_215d_1629(int handle, int page);
long f_215d_135c(long a, long b);
long f_215d_0d96(long n);
int f_1a83_66e8(int x);
char f_1a83_2ad4(int x);
char f_1a83_65a9(char div);
char f_1a83_6728(int player, char c);
int f_1a83_6b9e(int player, int club);
char f_1a83_6b6e(int player);
char f_ab30_482b(int player);
char f_8e0f_0522(int player);
char f_8e0f_0835(int player);
void f_8e0f_099c(int player, char c, char d);
void f_8e0f_0a8c(int player);
void f_8e0f_0000(int player, int club, int v);
long f_1a83_0cef(long v, char c);
void f_ab30_5ded(char a);
void f_ab30_5f57(char a, int i, int n);
void f_ab30_6298(void);
void f_1a83_5540(int a);
void f_1a83_0bb7(char far *s);
extern int d_61eb_d5a2;
extern int d_61eb_d5d8;
extern int d_61eb_d5aa;
extern int d_61eb_d5f0;
extern int d_61eb_d674;
extern int d_61eb_d7c0;
extern int d_61eb_d7c2;
extern int d_61eb_d7c4;
extern int d_61eb_d7c6;
extern int d_61eb_d702;
extern int d_61eb_d704;
extern int d_61eb_d7c8;
extern int d_61eb_d7ca;
extern int d_61eb_d7cc;
extern int d_61eb_d7ce;
extern int d_61eb_d5b8;
extern int d_61eb_d5a4;
extern int d_61eb_d58e;
extern int d_61eb_dc48;
extern int d_61eb_dc4e;
extern char d_61eb_d9fb;
extern char d_61eb_d9bf;
extern long far *d_61eb_dbac;
extern int (far *d_61eb_dbb8)[1500];
extern unsigned char far d_432e_36a6[][2][4];
extern int far d_432e_3696[][4];
extern unsigned char far d_432e_37f6[][6][5];
extern int far d_432e_36d6[][5];
extern int far d_432e_0258[];
extern int far d_432e_04b0[];
extern int far d_3334_a410[];
extern int far d_3334_ca6e[];
extern unsigned char far d_3334_0000[][1500];
int f_1a83_4455(int team);
char f_1a83_2c20(int x);
long f_1a83_01d6(int p, int n);
long f_1a83_5747(int team);
char f_1a83_6b4c(int player);
void f_ab30_3e2f(int player, char team);
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
extern struct flags_w far d_432e_45de[];
extern unsigned char far d_28d4_1958[][1500];
extern unsigned char far d_28d4_82d0[];
extern int d_61eb_d612;
extern int d_61eb_d75e;
extern int d_61eb_d5dc;
extern char d_61eb_da49;
extern char d_61eb_da4e;
extern char d_61eb_d9fd;
extern char d_61eb_d9fc;
extern float d_61eb_da5d;
extern long far d_3334_cc82[][38];
extern int far d_3334_caba[];
extern unsigned char far d_3334_bea2[];
unsigned char f_1a83_6d8b(unsigned char team);
extern unsigned char far d_3334_beca[];
extern unsigned char far d_3334_c0fa[];
extern unsigned char far d_3334_c7b2[];
extern int far d_432e_066e[][16];
extern char far d_432e_0b2e[][16];
extern unsigned char far d_3334_c8ca[];
int f_215d_13af(int a, int b);
void f_215d_0df0(int ticks);
int f_1a83_2bdb(int x);
float f_1a83_2b0c(int x);
char f_1a83_633a(int a, int b);
long f_1a83_21df(int a, int team, char pos, char second);
char far *f_1a83_4485(int player);
char far *f_1a83_462c(int player);
void f_1a83_5844(int team, char far *title, char far *text);
void f_1a83_48f9(char far *title);
void f_1a83_4327(float x, float y, int team);
void f_1a83_0b12(int line, char far *s);
void f_1a83_0b7d(char far *s);
void f_1a83_2da6(int n, char far *title, char far *items);
void f_1a83_3122(int last);
char f_ab30_48a4(int player, char team);
char far *f_ab30_5b32(int player);
char unmapped_f_b8da_5e02(int player);
char f_8e0f_00f1(int player, int team, char loan);
extern int d_61eb_d590;
extern int d_61eb_d59e;
extern int d_61eb_d5c4;
extern int d_61eb_d5fc;
extern int d_61eb_d6ba;
extern int d_61eb_d7d4;
extern int d_61eb_d7d6;
extern int d_61eb_d7d8;
extern int d_61eb_d7da;
extern int d_61eb_d7dc;
extern int d_61eb_d7de;
extern int d_61eb_d7e0;
extern int d_61eb_d7e2;
extern int d_61eb_d7e4;
extern int d_61eb_d9a2;
extern char d_61eb_d9df;
extern char d_61eb_d9fe;
extern char d_61eb_d9ff;
extern char d_61eb_da00;
extern char d_61eb_da01;
extern char d_61eb_da02;
extern char d_61eb_da03;
extern float d_61eb_daa9;
extern float d_61eb_daad;
extern long d_61eb_db11;
extern long d_61eb_db25;
extern long d_61eb_db29;
extern long d_61eb_db2d;
extern long d_61eb_db31;
extern char near *d_61eb_b0ec[];
extern unsigned char far d_3334_f278[][3][16];
extern int far d_28d4_bd3c[][2][13];
extern unsigned char far d_3334_d680[];
extern unsigned char far d_53fc_095c[][10];
extern char far d_5313_b87f[];
extern char far d_5313_b87a[];
extern char far d_5313_b87b[];
extern int far d_432e_3710[];
extern int far d_432e_3712[];
extern long far d_432e_375a[];
extern long d_61eb_db39;
int f_215d_1343(int a, int b);
extern int d_61eb_d7e6;
float f_215d_1385(float a, float b);
long f_215d_13c8(long a, long b);
void f_a214_4120(int player, int a, char b);
void f_75a4_2bd7(int team);
extern int d_61eb_d7e8;
extern int d_61eb_d7ea;
extern int d_61eb_d7ec;
extern int d_61eb_d808;
extern char d_61eb_da07;
extern char d_61eb_da06;
extern char d_61eb_da05;
extern char d_61eb_d9ca;
extern long d_61eb_db35;
extern char d_61eb_da04;
extern char d_61eb_da08;
extern int d_61eb_d7fe;
extern int d_61eb_d7fc;
extern int d_61eb_d7fa;
extern int d_61eb_d7f8;
extern int d_61eb_d7f6;
extern int d_61eb_d7f4;
extern int d_61eb_d7f2;
extern int d_61eb_d7f0;
extern int d_61eb_d7ee;
void f_215d_088c();
void f_215d_08aa(int x1, int y1, int x2, int y2);
void f_215d_089b();
void f_215d_0904(int x1, int y1, int x2, int y2);
int f_215d_0c14(void);
int f_215d_0c08(void);
void f_1a83_3347(int x, int y, int colour, char far *s);
void f_1a83_3450(float x, float y, int bg, int fg, int w, char far *s);
void f_1a83_3c08(float x, float y, int bg, int fg, int w, char far *s);
void f_1a83_4d96(int a, float x, float y, int c, int d, int e, char far *s);
int f_1a83_5296(int a);
void f_1a83_5117(int a, char b);
void f_1a83_4d03(void);
extern char far d_432e_c369[];
extern int d_61eb_d806;
extern int d_61eb_d804;
extern int d_61eb_d800;
void f_215d_118b(unsigned x, int y, unsigned x2, unsigned y2, int dy, int colour);
void f_215d_1016(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_a7b6_30ee(int player);
void f_93a1_467a(int player, int from, int to, long fee);
void f_93a1_46fa(int player, int from, int to, long fee);
void f_1a83_0e84(int p);
int f_1a83_1dd9(int player);
void f_1a83_1625(int p);
void f_1a83_12f6(int player);
void f_1a83_18fd(int player);
extern char (far *d_61eb_dbe0)[151];
extern float d_61eb_da65;
extern int d_61eb_d79c;
extern char d_61eb_d9c3;
extern long (far *d_61eb_dbc0)[38];
extern int d_61eb_d61a;
extern int d_61eb_d80a;
extern int d_61eb_d652;
extern char d_61eb_da09;
struct news { int player; char from; char to; long fee; };
void f_b26d_0e1c(char a, char b, int player, char team, long fee, char c);
void f_b26d_27fd(char team, int player);
void f_ab30_62c1(char n);
void f_ab30_30f0(int player, char team);
void f_ab30_30a0(int player, char team);
void f_ab30_3ed6(int player, unsigned char n);
extern int d_61eb_dc58;
extern int d_61eb_dc52;
extern unsigned char (far *d_61eb_dbcc)[1500];
extern unsigned char far d_432e_bf42[];
char f_1a83_0c63(void);
unsigned f_215d_0b10(char far *s, char far *set);
void f_ab30_0979(int player);
void f_8e0f_0aee(int player);
void f_8e0f_0e88(int player);
void f_8e0f_1172(int player, int c);
long f_8e0f_138d(int player);
extern char d_61eb_da0a;
extern char d_61eb_d9c8;
extern int d_61eb_d654;
extern int d_61eb_d80e;
extern int d_61eb_d774;
extern int d_61eb_dc64;
extern int d_61eb_dc62;
extern long d_61eb_db3d;
extern char (far *d_61eb_dbe4)[151];
extern char far d_432e_ba27[];
extern float far d_28cd_0000[];
extern char far d_5313_c607[];
extern char far d_5313_d5ad[];
extern char far d_5313_d64d[];
extern char far d_5313_d5fd[];
extern char far d_5313_f01f[][40];
extern unsigned char far d_28d4_1798[];
struct transfers { int in[6], out[6]; /* the players */ unsigned char in_club[6], out_club[6]; /* the other club */ long in_fee[6], out_fee[6]; /* the fee, 1 for a loan */ unsigned char n_in, n_out; /* how many so far */ };
extern struct transfers far d_5313_69ae[];
extern struct news far d_5313_848e[];
extern long far d_432e_cdc2[];
extern long far d_432e_cf02[];
extern char far d_5313_0df7[];
extern FILE *d_61eb_0094;
void f_215d_19eb();
extern char d_61eb_da0b;
extern int far d_28d4_081c[][26];
extern unsigned char far d_432e_1530[];
extern int far d_3334_f9f8[][16];
extern char far d_5313_d32b[];
extern char far d_5313_ffe7[][80];
extern char far d_432e_b87f[];
extern char far d_432e_b8a4[];
extern char far d_432e_b8a5[];
extern unsigned char far d_432e_01ec[];
extern unsigned char far d_432e_beca[];
extern unsigned char far d_432e_0552[];
extern unsigned char far d_432e_1582[];
extern int far d_28d4_0064[][2][13];
extern char far d_432e_c607[];
extern char far d_432e_d5ad[];
extern char far d_432e_d64d[];
extern char far d_432e_d5fd[];
extern char far d_432e_eea3[][40];
extern struct transfers far d_432e_681e[];
extern struct news far d_432e_74e2[];
extern long far d_3334_cd1a[];
extern long far d_3334_cdb2[];
extern char far d_5313_0e10[];
extern unsigned char far d_3334_bf42[];
extern unsigned char far d_3334_c78a[];
extern char far d_432e_d32b[];
extern char far d_5313_0000[][80];

/* the steps of the digits a value is set with (+/- on the offer screen) */
static int d_61eb_3066[] = { 1, 10, 100, 1000, 10000 };

void f_87dc_0000(void)
{
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 1; d_61eb_d5d8++) {
        for (d_61eb_d5aa = 0; d_61eb_d5aa <= 2; d_61eb_d5aa++) {
            for (d_61eb_d5f0 = d_61eb_d5aa + 1; d_61eb_d5f0 <= 3; d_61eb_d5f0++) {
                d_61eb_d7c0 = d_432e_36a6[1][d_61eb_d5d8][d_61eb_d5aa] * 2 + d_432e_36a6[2][d_61eb_d5d8][d_61eb_d5aa];
                d_61eb_d7c2 = d_432e_36a6[1][d_61eb_d5d8][d_61eb_d5f0] * 2 + d_432e_36a6[2][d_61eb_d5d8][d_61eb_d5f0];
                d_61eb_d7c4 = d_432e_36a6[4][d_61eb_d5d8][d_61eb_d5aa];
                d_61eb_d7c6 = d_432e_36a6[4][d_61eb_d5d8][d_61eb_d5f0];
                d_61eb_d702 = d_432e_36a6[5][d_61eb_d5d8][d_61eb_d5aa];
                d_61eb_d704 = d_432e_36a6[5][d_61eb_d5d8][d_61eb_d5f0];
                if (d_61eb_d7c0 < d_61eb_d7c2 ||
                    (d_61eb_d7c0 == d_61eb_d7c2 && d_61eb_d7c4 - d_61eb_d702 < d_61eb_d7c6 - d_61eb_d704) ||
                    (d_61eb_d7c0 == d_61eb_d7c2 && d_61eb_d7c4 - d_61eb_d702 == d_61eb_d7c6 - d_61eb_d704 &&
                     d_61eb_d7c4 < d_61eb_d7c6)) {
                    f_215d_13f1(&d_432e_3696[d_61eb_d5d8][d_61eb_d5aa], &d_432e_3696[d_61eb_d5d8][d_61eb_d5f0], 2);
                    for (d_61eb_d674 = 0; d_61eb_d674 <= 5; d_61eb_d674++)
                        f_215d_13f1(&d_432e_36a6[d_61eb_d674][d_61eb_d5d8][d_61eb_d5aa],
                                    &d_432e_36a6[d_61eb_d674][d_61eb_d5d8][d_61eb_d5f0], 1);
                }
            }
        }
    }
    if (d_61eb_d5a2 == 83) {
        d_432e_04b0[0] = d_432e_3696[0][0];
        d_432e_04b0[1] = d_432e_3696[1][0];
    }
}

void f_87dc_021e(void)
{
    unsigned char groups, teams;

    groups = d_61eb_d5a2 <= 29 ? 6 : 4;
    teams = d_61eb_d5a2 <= 29 ? 3 : 4;
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= groups - 1; d_61eb_d5d8++) {
        for (d_61eb_d5aa = 0; d_61eb_d5aa <= teams - 2; d_61eb_d5aa++) {
            for (d_61eb_d5f0 = d_61eb_d5aa + 1; d_61eb_d5f0 <= teams - 1; d_61eb_d5f0++) {
                if (d_432e_37f6[0][d_61eb_d5d8][d_61eb_d5aa] > 0)
                    d_61eb_d7c0 = d_432e_37f6[1][d_61eb_d5d8][d_61eb_d5aa] * 2 + d_432e_37f6[2][d_61eb_d5d8][d_61eb_d5aa];
                else
                    d_61eb_d7c0 = -1;
                if (d_432e_37f6[0][d_61eb_d5d8][d_61eb_d5f0] > 0)
                    d_61eb_d7c2 = d_432e_37f6[1][d_61eb_d5d8][d_61eb_d5f0] * 2 + d_432e_37f6[2][d_61eb_d5d8][d_61eb_d5f0];
                else
                    d_61eb_d7c2 = -1;
                d_61eb_d7c4 = d_432e_37f6[4][d_61eb_d5d8][d_61eb_d5aa];
                d_61eb_d7c6 = d_432e_37f6[4][d_61eb_d5d8][d_61eb_d5f0];
                d_61eb_d702 = d_432e_37f6[5][d_61eb_d5d8][d_61eb_d5aa];
                d_61eb_d704 = d_432e_37f6[5][d_61eb_d5d8][d_61eb_d5f0];
                if (d_61eb_d7c0 < d_61eb_d7c2 ||
                    (d_61eb_d7c0 == d_61eb_d7c2 && d_61eb_d7c4 - d_61eb_d702 < d_61eb_d7c6 - d_61eb_d704) ||
                    (d_61eb_d7c0 == d_61eb_d7c2 && d_61eb_d7c4 - d_61eb_d702 == d_61eb_d7c6 - d_61eb_d704 &&
                     d_61eb_d7c4 < d_61eb_d7c6)) {
                    f_215d_13f1(&d_432e_36d6[d_61eb_d5d8][d_61eb_d5aa], &d_432e_36d6[d_61eb_d5d8][d_61eb_d5f0], 2);
                    for (d_61eb_d674 = 0; d_61eb_d674 <= 5; d_61eb_d674++)
                        f_215d_13f1(&d_432e_37f6[d_61eb_d674][d_61eb_d5d8][d_61eb_d5aa],
                                    &d_432e_37f6[d_61eb_d674][d_61eb_d5d8][d_61eb_d5f0], 1);
                }
            }
        }
    }
    if (d_61eb_d5a2 == 29) {
        unsigned char k, g;

        k = 0;
        for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 5; d_61eb_d5d8++) {
            d_432e_0258[k] = d_432e_36d6[d_61eb_d5d8][0];
            k++;
        }
        g = f_87dc_054e(-1);
        d_432e_0258[k] = d_432e_36d6[g][1];
        k++;
        d_432e_0258[k] = d_432e_36d6[f_87dc_054e(g)][1];
    } else if (d_61eb_d5a2 == 47) {
        d_432e_0258[0] = d_432e_36d6[0][0];
        d_432e_0258[1] = d_432e_36d6[2][0];
        d_432e_0258[2] = d_432e_36d6[1][0];
        d_432e_0258[3] = d_432e_36d6[3][0];
    }
}

/* the best second-placed team of the six groups, other than group skip's */
unsigned char f_87dc_054e(unsigned char skip)
{
    unsigned char best, pts, a, b, g, f, ag;

    pts = 0;
    a = 0;
    b = 0;
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 5; d_61eb_d5d8++) {
        if (skip == d_61eb_d5d8)
            continue;
        g = d_432e_37f6[1][d_61eb_d5d8][1] * 2 + d_432e_37f6[2][d_61eb_d5d8][1];
        f = d_432e_37f6[4][d_61eb_d5d8][1];
        ag = d_432e_37f6[5][d_61eb_d5d8][1];
        if (g > pts || (g == pts && f - ag > a - b) || (g == pts && f - ag == a - b && f > a))
            best = d_61eb_d5d8;
    }
    return best;
}

void f_87dc_061e(void)
{
    register unsigned char n;

    f_ab30_6298();
    d_61eb_d7c8 = f_1a83_66e8(d_61eb_d5a2);
    d_61eb_d7ca = 0;
    f_87dc_1aea();
    f_87dc_0699();
    if (d_61eb_d5a2 <= 38) {
        f_87dc_08ba();
        f_87dc_11b5();
    }
    if (f_1a83_65a9(0) == 0 || f_1a83_65a9(1) == 0) {
        if (d_61eb_d5a2 <= 12)
            n = 30;
        else
            n = 40;
        f_87dc_0cc9(n);
    }
    if (d_61eb_d7ca > 0)
        f_1a83_5540(0);
}

void f_87dc_0699(void)
{
    int v;

    d_61eb_d7c8 = f_1a83_66e8(d_61eb_d5a2);
    for (d_61eb_d5b8 = 0; d_61eb_d5b8 <= d_61eb_d58e - 1; d_61eb_d5b8++) {
        if (d_3334_0000[7][d_61eb_d5b8] == 0xff) {
            if (f_1a83_2ad4(d_28d4_1958[18][d_61eb_d5b8]) == 0) {
                if (d_3334_a410[d_61eb_d5b8] == 0) {
                    if (!d_432e_45de[d_61eb_d5b8].f8 && f_1a83_6728(d_61eb_d5b8, -1) == 0 && f_ab30_482b(d_61eb_d5b8) == 0) {
                        if (f_87dc_4e83(d_61eb_d5b8, 0) == 0) {
                            f_87dc_35cf(d_61eb_d5b8, d_28d4_82d0[d_61eb_d5b8]);
                            if (d_61eb_d9fb) {
                                d_3334_a410[d_61eb_d5b8] = (d_61eb_d5a4 + d_61eb_d7cc) * 100 + d_61eb_d7c8;
                                d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 1);
                                d_61eb_dbb8[4][d_61eb_d5b8] = d_61eb_d7ce;
                                f_87dc_182c(d_61eb_d5b8, 0);
                            }
                        } else
                            f_8e0f_099c(d_61eb_d5b8, 0, 0);
                    }
                } else {
                    v = f_1a83_6b9e(d_61eb_d5b8, d_28d4_1958[18][d_61eb_d5b8]);
                    d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 1);
                    if (d_61eb_dbb8[4][d_61eb_d5b8] < v)
                        d_61eb_dbb8[4][d_61eb_d5b8] = v;
                }
            } else if (d_3334_a410[d_61eb_d5b8] == 0 && !d_432e_45de[d_61eb_d5b8].f8 &&
                       f_1a83_6728(d_61eb_d5b8, -1) == 0 && f_ab30_482b(d_61eb_d5b8) == 0)
                f_8e0f_0000(d_61eb_d5b8, d_28d4_82d0[d_61eb_d5b8],
                            d_3334_ca6e[d_28d4_82d0[d_61eb_d5b8]] - 646);
        }
    }
}

void f_87dc_08ba(void)
{
    if (d_61eb_d9bf)
        f_ab30_5ded(9);
    d_61eb_d7c8 = f_1a83_66e8(d_61eb_d5a2);
    for (d_61eb_d5b8 = 0; d_61eb_d5b8 <= d_61eb_d58e - 1; d_61eb_d5b8++) {
        unsigned char c;
        int n;

        c = d_28d4_82d0[d_61eb_d5b8];
        if (d_61eb_d9bf)
            f_ab30_5f57(9, d_61eb_d5b8, d_61eb_d58e + 1999);
        if ((d_61eb_d5b8 + 1) % 4 != d_61eb_d7c8 % 4 && d_61eb_d9bf == 0)
            continue;
        if (f_1a83_2ad4(c) && d_61eb_d9bf)
            continue;
        if (d_3334_0000[7][d_61eb_d5b8] == 0xff) {
            if (!d_432e_45de[d_61eb_d5b8].f8 && !d_432e_45de[d_61eb_d5b8].f9 && !d_432e_45de[d_61eb_d5b8].f30) {
                if (*(d_3334_0000[19] + d_61eb_d5b8) < 2) {
                    n = f_1a83_2ad4(c) ? 2 : 0;
                    if (d_3334_0000[14][d_61eb_d5b8] > n && f_1a83_6728(d_61eb_d5b8, -1)) {
                        if (f_8e0f_0522(d_61eb_d5b8))
                            f_8e0f_099c(d_61eb_d5b8, -1, 0);
                        else
                            d_3334_0000[14][d_61eb_d5b8] = 0;
                        d_3334_0000[19][d_61eb_d5b8]++;
                    }
                }
            } else if (d_432e_45de[d_61eb_d5b8].f8 && d_432e_45de[d_61eb_d5b8].f10) {
                n = f_1a83_2ad4(c) ? 2 : 0;
                if (d_3334_0000[15][d_61eb_d5b8] > n && f_1a83_6728(d_61eb_d5b8, -1) == 0) {
                    if (f_8e0f_0835(d_61eb_d5b8))
                        f_8e0f_0a8c(d_61eb_d5b8);
                    else
                        d_3334_0000[15][d_61eb_d5b8] = 0;
                }
            }
            if (!d_432e_45de[d_61eb_d5b8].f8 && !d_432e_45de[d_61eb_d5b8].f9 && !d_432e_45de[d_61eb_d5b8].f30) {
                if (f_1a83_2ad4(c))
                    continue;
                if (f_87dc_4e83(d_61eb_d5b8, 0)) {
                    f_8e0f_099c(d_61eb_d5b8, 0, 0);
                    d_61eb_d5b8;
                } else if (f_87dc_4e83(d_61eb_d5b8, -1))
                    f_8e0f_099c(d_61eb_d5b8, 0, -1);
            } else if (d_432e_45de[d_61eb_d5b8].f8 && !d_432e_45de[d_61eb_d5b8].f10 && f_1a83_2ad4(c) == 0) {
                if (!d_432e_45de[d_61eb_d5b8].f12 && !d_432e_45de[d_61eb_d5b8].f24 &&
                    (d_3334_0000[11][d_61eb_d5b8] == 4 || d_3334_0000[11][d_61eb_d5b8] == 8)) {
                    d_61eb_dbac = f_215d_1629(d_61eb_dc48, 1);
                    d_61eb_dbac[d_61eb_d5b8] = f_215d_135c(f_1a83_0cef(d_61eb_dbac[d_61eb_d5b8] * 0.75, -1), 1000L);
                    if (d_61eb_dbac[d_61eb_d5b8] < 10000L) {
                        d_61eb_dbac[d_61eb_d5b8] = 0;
                        d_432e_45de[d_61eb_d5b8].f12 = 1;
                    }
                }
                if (f_87dc_4e83(d_61eb_d5b8, d_432e_45de[d_61eb_d5b8].f24) == 0)
                    f_8e0f_0a8c(d_61eb_d5b8);
            }
        }
    }
}

void f_87dc_0cc9(int n)
{
    int count;
    int k;
    float best = 0;

    count = 0;

    for (d_61eb_d612 = 0; d_61eb_d612 <= 37; d_61eb_d612++) {
        if (d_3334_beca[d_61eb_d612] < f_1a83_4455(d_61eb_d612) - 1 && f_1a83_2ad4(d_61eb_d612) == 0
            && f_87dc_0f01(d_61eb_d612) && count < n) {
            f_87dc_0f85(d_61eb_d612);
            if (d_61eb_d9fc)
                count++;
        }
    }
    for (k = 0; count < n && k < 38; k++) {
        d_61eb_d612 = -1;
        for (d_61eb_d75e = 1; d_61eb_d75e <= 10; d_61eb_d75e++) {
            d_61eb_d5dc = f_215d_0d96(38);
            switch (f_1a83_6d8b(d_61eb_d5dc)) {
            case 0:
                d_61eb_da49 = d_3334_cc82[0][d_61eb_d5dc] > 5000000L ? -1 : 0;
                break;
            case 1:
                d_61eb_da49 = d_3334_cc82[0][d_61eb_d5dc] > 1000000L ? -1 : 0;
                break;
            }
            d_61eb_da5d = (d_432e_066e[d_61eb_d5dc][0] * 0.5 + (100 - d_3334_bea2[d_61eb_d5dc]) * 0.1
                           + f_1a83_4455(d_61eb_d5dc) - d_3334_beca[d_61eb_d5dc] + f_215d_0d96(5))
                          * (d_61eb_da49 ? 3 : 1);
            if (d_61eb_da5d > best || d_61eb_d612 == -1) {
                best = d_61eb_da5d;
                d_61eb_d612 = d_61eb_d5dc;
            }
        }
        if (f_1a83_2ad4(d_61eb_d612) == 0 && f_87dc_0f01(d_61eb_d612)) {
            f_87dc_0f85(d_61eb_d612);
            if (d_61eb_d9fc)
                count++;
        }
    }
}

char f_87dc_0f01(int team)
{
    char r = 0;

    if (d_3334_c0fa[team] < 3 && d_432e_066e[team][0] > 0
        && (d_3334_beca[team] + d_3334_c7b2[team] < 26 || f_1a83_2ad4(team))
        && d_3334_bea2[team] >= 30 && d_3334_caba[team] < 0x28a)
        r = -1;
    return r;
}

void f_87dc_0f85(int team)
{
    int k;

    k = f_87dc_1060(team);
    d_61eb_d9fc = 0;
    if (k > -1) {
        d_61eb_d5b8 = d_432e_066e[team][k];
        if (f_1a83_6b4c(d_61eb_d5b8) && f_1a83_65a9(f_1a83_6b6e(d_61eb_d5b8) == 0 ? 1 : 0) == 0) {
            d_61eb_da4e = 0;
            f_ab30_3e2f(d_61eb_d5b8, team);
            if (d_61eb_da4e)
                d_61eb_d9fd = -1;
        } else if (f_1a83_6b4c(d_61eb_d5b8) == 0 && f_1a83_65a9(0) == 0)
            f_87dc_1d05(team, d_61eb_d5b8, d_432e_0b2e[team][k] == 1 ? -1 : 0);
        if (d_61eb_d9fd)
            d_61eb_d9fc = -1;
    }
}

int f_87dc_1060(int team)
{
    char k;
    char found;
    char tries;

    found = 0;
    tries = 0;
    do {
        k = f_215d_0d96(d_432e_066e[team][0]) + 1;
        d_61eb_d5b8 = d_432e_066e[team][k];
        if (f_1a83_65a9(f_1a83_6b4c(d_61eb_d5b8) && f_1a83_6b6e(d_61eb_d5b8) == 0 ? 1 : 0) == 0
            && !d_432e_45de[d_61eb_d5b8].f9
            && (f_1a83_6b4c(d_61eb_d5b8) || !d_432e_45de[d_61eb_d5b8].f30 && d_3334_0000[7][d_61eb_d5b8] == 0xff)
            && (f_1a83_2c20(d_61eb_d5b8) == 0 || f_1a83_6b4c(d_61eb_d5b8))
            && (d_432e_0b2e[team][k] == 1 && d_3334_c8ca[team] < 5
                || f_1a83_01d6(d_61eb_d5b8, -1) <= f_1a83_5747(team)))
            found = 1;
        tries++;
    } while (found == 0 && tries < 20);
    return found == 1 ? k : -1;
}

void f_87dc_11b5(void)
{
    int n;
    int i;
    int lim;

    n = 0;
    for (d_61eb_d5b8 = 0; d_61eb_d5b8 <= d_61eb_d58e - 1; d_61eb_d5b8++)
        if (d_432e_45de[d_61eb_d5b8].f8 && !d_432e_45de[d_61eb_d5b8].f9 && !d_432e_45de[d_61eb_d5b8].f30
            && d_3334_0000[23][d_61eb_d5b8] < 3)
            n++;
    if (d_61eb_d9bf)
        lim = 1500;
    else
        lim = d_61eb_d5a2 <= 12 ? 150 : 20;
    for (i = 1; i <= lim; i++) {
        if (d_61eb_d9bf)
            f_ab30_5f57(9, d_61eb_d58e + i - 1, d_61eb_d58e + 1499);
        if (f_215d_0d96(10) == 0) {
            do
                d_61eb_d5b8 = f_215d_0d96(d_61eb_d590) + 1000;
            while (f_1a83_6b6e(d_61eb_d5b8));
        } else if (f_215d_0d96(12) == 0) {
            do
                d_61eb_d5b8 = f_215d_0d96(d_61eb_d590) + 1000;
            while (f_1a83_6b6e(d_61eb_d5b8) == 0);
        } else
            d_61eb_d5b8 = f_215d_0d96(d_61eb_d58e);
        d_61eb_d9df = 0;
        if (d_3334_0000[23][d_61eb_d5b8] < 3 && !d_432e_45de[d_61eb_d5b8].f9 && !d_432e_45de[d_61eb_d5b8].f30) {
            if (f_1a83_6b4c(d_61eb_d5b8))
                d_61eb_d9df = -1;
            else if (d_61eb_d9bf == 0) {
                if (f_215d_13af(20, n) < i) {
                    if (d_28d4_1958[23][d_61eb_d5b8] > 1)
                        d_61eb_d9df = -1;
                    else if (d_432e_45de[d_61eb_d5b8].f18)
                        d_61eb_d9df = -1;
                }
            } else if (d_61eb_d9bf) {
                if (fabs(f_1a83_2bdb(d_61eb_d5b8) - f_1a83_2b0c(d_28d4_82d0[d_61eb_d5b8])) > 3)
                    d_61eb_d9df = -1;
            }
            if (d_432e_45de[d_61eb_d5b8].f8)
                d_61eb_d9df = -1;
        }
        if (d_61eb_d9df)
            f_87dc_1427(d_61eb_d5b8);
    }
}

void f_87dc_1427(int p)
{
    char m;
    char used[38];

    memset(used, 0, 38);
    for (d_61eb_d7d4 = 1; d_61eb_d7d4 <= 40; d_61eb_d7d4++) {
        d_61eb_d5dc = f_215d_0d96(38);
        if (used[d_61eb_d5dc] == 0) {
            if (d_28d4_1958[18][p] != d_61eb_d5dc && f_1a83_2ad4(d_61eb_d5dc) == 0
                && d_432e_066e[d_61eb_d5dc][0] < 10
                && d_53fc_095c[d_3334_d680[d_3334_ca6e[d_61eb_d5dc]]][d_3334_0000[17][p]] < 8
                && f_87dc_1a90(d_61eb_d5dc, p) == 0 && d_3334_caba[d_61eb_d5dc] < 0x28a) {
                d_61eb_daa9 = f_1a83_2bdb(p);
                d_61eb_daad = f_1a83_2b0c(d_61eb_d5dc);
                if (d_61eb_daad - 4 < d_61eb_daa9 && d_61eb_daad + 8 > d_61eb_daa9) {
                    m = f_87dc_1629(p, d_61eb_d5dc);
                    if (m > 0) {
                        d_3334_0000[23][p]++;
                        d_432e_066e[d_61eb_d5dc][0]++;
                        d_432e_066e[d_61eb_d5dc][d_432e_066e[d_61eb_d5dc][0]] = p;
                        d_432e_0b2e[d_61eb_d5dc][d_432e_066e[d_61eb_d5dc][0]] = m;
                        if (d_3334_0000[23][p] == 3)
                            d_61eb_d7d4 = 40;
                    }
                }
            }
            used[d_61eb_d5dc] = -1;
        }
    }
}

char f_87dc_1629(int p, int team)
{
    char r = 0;
    char m;
    long a;
    long b;

    for (d_61eb_d6ba = 0; d_61eb_d6ba <= 1; d_61eb_d6ba++) {
        if (f_1a83_6b4c(p))
            m = f_ab30_48a4(p, team) ? 2 : 0;
        else
            m = f_87dc_274f(p, team, d_61eb_d6ba + 1);
        if (m > 0) {
            for (d_61eb_d5c4 = 0; d_61eb_d5c4 <= 10; d_61eb_d5c4++) {
                d_61eb_d5fc = d_3334_f278[team][0][d_61eb_d5c4];
                if (f_1a83_633a(p, d_61eb_d5fc)) {
                    a = f_1a83_21df(d_28d4_0064[team][d_61eb_d6ba][d_61eb_d5c4], team, d_61eb_d5fc,
                                    d_61eb_d6ba == 1 ? 1 : 0);
                    b = f_1a83_21df(p, team, d_61eb_d5fc, d_61eb_d6ba == 1 ? 1 : 0);
                    if (b > a && m == 2 && (!d_432e_45de[p].f8 || !d_432e_45de[p].f24)) {
                        r = 2;
                        d_61eb_d5c4 = 10;
                        d_61eb_d6ba = 1;
                    } else if (b > a && f_1a83_6b4c(p) == 0 && d_432e_45de[p].f8 && d_432e_45de[p].f24
                               && d_3334_c8ca[team] < 5) {
                        char d;

                        d = abs(f_1a83_2b0c(team) - f_1a83_2b0c(d_28d4_82d0[p]));
                        if (d > 2) {
                            r = 1;
                            d_61eb_d5c4 = 10;
                            d_61eb_d6ba = 1;
                        }
                    }
                }
            }
        }
    }
    return r;
}

void f_87dc_182c(int p, char all)
{
    if (d_3334_0000[23][p] > 0) {
        for (d_61eb_d5dc = 0; d_61eb_d5dc <= 37; d_61eb_d5dc++) {
            if ((f_1a83_2ad4(d_61eb_d5dc) == 0 || d_28d4_1958[18][p] == d_61eb_d5dc || all)
                && f_87dc_1a90(d_61eb_d5dc, p) > 0) {
                if (f_1a83_2ad4(d_61eb_d5dc) == 0)
                    d_3334_0000[23][p] -= 1;
                d_61eb_d7d6 = f_87dc_1a90(d_61eb_d5dc, p);
                d_432e_066e[d_61eb_d5dc][d_61eb_d7d6] = d_432e_066e[d_61eb_d5dc][d_432e_066e[d_61eb_d5dc][0]];
                d_432e_0b2e[d_61eb_d5dc][d_61eb_d7d6] = d_432e_0b2e[d_61eb_d5dc][d_432e_066e[d_61eb_d5dc][0]];
                d_432e_066e[d_61eb_d5dc][0]--;
            }
        }
    }
}

void f_87dc_196e(int team)
{
    int k;

    for (k = 1; k <= d_432e_066e[team][0]; k++) {
        if (f_87dc_1629(d_432e_066e[team][k], team) == 0) {
            d_3334_0000[23][d_432e_066e[team][k]] -= 1;
            d_432e_066e[team][k] = d_432e_066e[team][d_432e_066e[team][0]];
            d_432e_0b2e[team][k] = d_432e_0b2e[team][d_432e_066e[team][0]];
            d_432e_066e[team][0]--;
        }
    }
}

int f_87dc_1a90(int team, int p)
{
    int r = 0;
    int k;

    for (k = 1; k <= d_432e_066e[team][0]; k++)
        if (d_432e_066e[team][k] == p) {
            r = k;
            k = d_432e_066e[team][0];
        }
    return r;
}

/* the loans of the week: loans last the season: in weeks 37 and 38 a club that wants its
 * loaned player back recalls him, and after week 100 every loan has expired and the player
 * returns to his club */
void f_87dc_1aea(void)
{
    char kind;
    char buf[320];

    for (d_61eb_d5b8 = 0; d_61eb_d5b8 <= d_61eb_d58e - 1; d_61eb_d5b8++) {
        if (d_3334_0000[7][d_61eb_d5b8] < 255) {
            kind = 0;
            if (d_61eb_d5a2 == 37 || d_61eb_d5a2 == 38) {
                if (f_1a83_2ad4(d_3334_0000[7][d_61eb_d5b8]) == 0 &&
                    f_87dc_291e(d_61eb_d5b8, d_3334_0000[0][25 * 1500 + d_61eb_d5b8]) == 1)
                    kind = 2;
            } else if (d_61eb_d5a2 > 100)
                kind = 1;
            if (kind > 0) {
                if (f_1a83_2ad4(d_28d4_1958[18][d_61eb_d5b8])) {
                    if (kind == 1)
                        sprintf(buf, "%s's loan period has expired - he returns to %s.%s",
                                f_1a83_4485(d_61eb_d5b8), (char far *)d_61eb_b0ec[d_3334_0000[7][d_61eb_d5b8]],
                                f_ab30_5b32(d_61eb_d5b8));
                    else if (kind == 2)
                        sprintf(buf, "On-loan %s returns to %s at their request.%s",
                                f_1a83_4485(d_61eb_d5b8), (char far *)d_61eb_b0ec[d_3334_0000[7][d_61eb_d5b8]],
                                f_ab30_5b32(d_61eb_d5b8));
                    f_1a83_5844(d_28d4_1958[18][d_61eb_d5b8], "Squad news", buf);
                } else if (f_1a83_2ad4(d_3334_0000[7][d_61eb_d5b8]) && kind == 1) {
                    sprintf(buf, "%s returns from his loan spell at %s.%s",
                            f_1a83_4485(d_61eb_d5b8), (char far *)d_61eb_b0ec[d_28d4_1958[18][d_61eb_d5b8]],
                            f_ab30_5b32(d_61eb_d5b8));
                    f_1a83_5844(d_3334_0000[7][d_61eb_d5b8], "Squad news", buf);
                }
                f_87dc_423a(d_61eb_d5b8, d_3334_0000[7][d_61eb_d5b8], d_28d4_1958[18][d_61eb_d5b8], 0, 2);
            }
        }
    }
}

/* approaching a player (to buy him, or with loan set, to take him on loan): the human
 * club's menu, the player's answer, the other clubs that also want him, and his choice */
void f_87dc_1d05(int team, int player, char loan)
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
    memset(d_432e_b87f, 0, 38);
    memset(d_432e_b8a5, 0, 38);
    d_61eb_d9fe = 0;
    done = 0;
    d_61eb_d9fd = 0;
    d_61eb_d9ff = 0;
    best = -1;
    own = d_28d4_1958[18][player];
    d_61eb_da00 = f_1a83_2ad4(own);
    d_61eb_da01 = f_1a83_2ad4(team);
    d_61eb_d7d8 = -d_61eb_da00 - d_61eb_da01;
again:
    d_61eb_da02 = 0;
    if (d_61eb_da01 != 0) {
        f_1a83_48f9("Approach Player");
        f_1a83_4327(1.0, 4.0, team);
        sprintf(buf, "Board limit on spending : %ld", f_1a83_5747(team));
        f_1a83_0b12(7, buf);
        sprintf(buf, "Approach %s ?", f_1a83_4485(player));
        f_1a83_0b12(9, buf);
        f_1a83_2da6(12, "", "*Exit|Approach To Buy|Approach To Loan|");
menu:
        f_1a83_3122(2);
        d_61eb_da02 = 0;
        if (d_61eb_d59e == 1)
            d_61eb_da02 = 1;
        else if (d_61eb_d59e == 2) {
            if (d_3334_c8ca[team] < 5)
                d_61eb_da02 = 2;
            else {
                f_1a83_0b7d("Maximum five loans per season");
                goto menu;
            }
        }
    } else if (loan == 0)
        d_61eb_da02 = 1;
    else
        d_61eb_da02 = 2;
    if (d_61eb_da02 > 0) {
        strcpy(name, f_1a83_462c(player));
        if (f_8e0f_00f1(player, team, d_61eb_da02 == 2 ? -1 : 0)) {
            if (d_61eb_da00 == 0 && d_61eb_da01 != 0) {
                sprintf(buf, "%s allow approach", (char far *)d_61eb_b0ec[own]);
                f_1a83_0b7d(buf);
            }
            if (f_87dc_274f(player, team, d_61eb_d7da = f_87dc_291e(player, team)) >= (d_61eb_da02 == 2 ? 1 : 2)) {
                if (d_61eb_da01 != 0 || d_61eb_da00 != 0) {
                    sprintf(buf, "%s is keen on the %s", (char far *)name, d_61eb_da02 == 1 ? "move" : "loan");
                    f_1a83_0b7d(buf);
                }
                done = -1;
                goto out;
            }
            if (d_61eb_da01 == 0 && d_61eb_da00 == 0)
                goto out;
            sprintf(buf, "%s rejects the %s", (char far *)name, d_61eb_da02 == 1 ? "move" : "loan");
            if ((d_61eb_da01 && d_61eb_da00) == 0) {
                sprintf(but, "But %s", (char far *)buf);
                strcpy(buf, but);
            }
            f_1a83_0b7d(buf);
            if (d_61eb_da01 != 0) {
                if (d_61eb_da00 == 0)
                    goto menu;
                goto again;
            }
        } else if (d_61eb_da01 != 0) {
            if (d_61eb_da00 != 0)
                goto again;
            sprintf(buf, "%s refuse approach", (char far *)d_61eb_b0ec[own]);
            f_1a83_0b7d(buf);
            goto menu;
        }
    }
out:
    if (done == 0) {
        if (d_61eb_da01 == 0) {
            d_3334_0000[23][player] -= 1;
            d_61eb_d7d6 = f_87dc_1a90(team, player);
            d_432e_066e[team][d_61eb_d7d6] = d_432e_066e[team][d_432e_066e[team][0]];
            d_432e_0b2e[team][d_61eb_d7d6] = d_432e_0b2e[team][d_432e_066e[team][0]];
            d_432e_066e[team][0]--;
        }
    } else {
        d_432e_b87f[0] = -1;
        d_432e_3712[0] = team;
        d_61eb_d7dc = 1;
        d_3334_c0fa[team]++;
        if (d_61eb_da02 != 2) {
            for (d_61eb_d7e0 = 0; d_61eb_d7e0 <= 37; d_61eb_d7e0++) {
                if (d_61eb_d7e0 != team && f_87dc_0f01(d_61eb_d7e0) && f_87dc_1a90(d_61eb_d7e0, player) > 0) {
                    if (f_1a83_2ad4(d_61eb_d7e0))
                        d_61eb_da03 = f_87dc_2a14(d_61eb_d7e0, team, player) ? -1 : 0;
                    else
                        d_61eb_da03 = d_28d4_1958[12][player] != 0 || f_1a83_5747(d_61eb_d7e0) >= f_1a83_01d6(player, -1) && f_215d_0d96(3) > 0 ? -1 : 0;
                    if (d_61eb_da03 != 0) {
                        if (f_87dc_274f(player, d_61eb_d7e0, d_61eb_d7da = f_87dc_291e(player, d_61eb_d7e0)) < 2) {
                            if (f_1a83_2ad4(d_61eb_d7e0))
                                f_1a83_0b7d("He is not interested");
                            else {
                                d_3334_0000[23][player] -= 1;
                                d_61eb_d7d6 = f_87dc_1a90(d_61eb_d7e0, player);
                                d_432e_066e[d_61eb_d7e0][d_61eb_d7d6] = d_432e_066e[d_61eb_d7e0][d_432e_066e[d_61eb_d7e0][0]];
                                d_432e_0b2e[d_61eb_d7e0][d_61eb_d7d6] = d_432e_0b2e[d_61eb_d7e0][d_432e_066e[d_61eb_d7e0][0]];
                                d_432e_066e[d_61eb_d7e0][0]--;
                            }
                        } else {
                            if (f_1a83_2ad4(d_61eb_d7e0)) {
                                f_1a83_0b7d("He is interested");
                                d_61eb_d7d8++;
                            }
                            d_432e_b87f[d_61eb_d7dc] = d_61eb_d7da == 1;
                            d_432e_3712[d_61eb_d7dc] = d_61eb_d7e0;
                            d_61eb_d7dc++;
                            d_3334_c0fa[d_61eb_d7e0]++;
                        }
                    }
                }
            }
        }
        if (d_432e_45de[player].f12 == 0 && d_61eb_da02 != 2) {
            d_61eb_db25 = 0;
            d_61eb_db29 = 0;
            d_61eb_db2d = f_1a83_0cef(f_1a83_01d6(player, own), -1);
            d_61eb_db31 = d_61eb_db2d;
            if (d_61eb_d7d8 > 0) {
                d_61eb_d9a2 = 0;
                d_61eb_d7e2 = 8;
                f_87dc_3bd1(0, player);
                if (d_432e_45de[player].f8)
                    sprintf(buf, "%s is valued at %ld", f_1a83_462c(player), d_61eb_db2d);
                else
                    sprintf(buf, "%s is not yet valued", f_1a83_462c(player));
                f_87dc_41a3(1, buf);
            }
            f_87dc_2bb2(player);
            tell = 0;
        } else {
            if (d_61eb_d7d8 > 0) {
                for (d_61eb_d7de = 1; d_61eb_d7de <= d_61eb_d7dc; d_61eb_d7de++) {
                    d_61eb_d5dc = d_432e_3710[d_61eb_d7de];
                    if (d_61eb_d5dc != team && f_1a83_2ad4(d_61eb_d5dc) == 0) {
                        sprintf(buf, "%s also want him", (char far *)d_61eb_b0ec[d_61eb_d5dc]);
                        f_1a83_0b7d(buf);
                    }
                }
            }
            tell = -1;
        }
        d_61eb_d7e4 = 0;
        for (d_61eb_d7de = 1; d_61eb_d7de <= d_61eb_d7dc; d_61eb_d7de++) {
            d_61eb_d5dc = d_432e_3710[d_61eb_d7de];
            if (d_432e_b8a4[d_61eb_d7de] != 0 || d_432e_45de[player].f12 || d_61eb_da02 == 2) {
                d_61eb_daad = f_1a83_2b0c(d_61eb_d5dc) + (d_61eb_d5dc == team ? 0.5 : 0);
                if (d_61eb_daad > bestval || best == -1) {
                    bestval = d_61eb_daad;
                    best = d_61eb_d5dc;
                    if (d_432e_45de[player].f12 || d_61eb_da02 == 2)
                        d_61eb_db11 = 0;
                    else
                        d_61eb_db11 = d_432e_375a[d_61eb_d7de];
                }
                d_61eb_d7e4++;
            }
        }
        sprintf(stays, "He stays at %s", (char far *)d_61eb_b0ec[own]);
        if (best > -1) {
            if (d_61eb_d7d8 > 0) {
                f_215d_0df0(50);
                if (d_61eb_d7e4 > 1) {
                    sprintf(buf, "He decides to join %s", (char far *)d_61eb_b0ec[best]);
                    if (tell)
                        f_1a83_0b7d(buf);
                    else
                        f_87dc_41a3(6, buf);
                }
            }
            if (d_61eb_da02 != 2) {
                f_87dc_35cf(player, best);
                if (f_1a83_2ad4(best))
                    tell = 0;
            }
            if (d_61eb_d9fb || d_61eb_da02 == 2) {
                if (d_61eb_d7d8 > 0) {
                    if (d_61eb_da02 == 1)
                        sprintf(buf, "He signs for %s", (char far *)d_61eb_b0ec[best]);
                    else
                        strcpy(buf, "He joins on loan for the season");
                    if (tell)
                        f_1a83_0b7d(buf);
                    else
                        f_87dc_41a3(6, buf);
                }
                f_87dc_423a(player, best, own, d_61eb_db11, d_61eb_da02 == 2 ? 1 : 0);
                d_61eb_d9fd = -1;
            } else if (tell)
                f_1a83_0b7d(stays);
            else
                f_87dc_41a3(6, stays);
        } else if (d_61eb_d7d8 > 0)
            f_87dc_41a3(6, stays);
    }
}

/* whether player p would join team, for n (f_87dc_291e's answer): 2 to move, 1 only on
 * loan, 0 not at all */
char f_87dc_274f(int p, int team, int n)
{
    char r;
    float a;
    float b;
    int m;
    unsigned char c2;
    unsigned char c1;

    r = 0;
    c1 = d_3334_0000[11][p];
    d_61eb_d7e6 = d_53fc_095c[d_3334_0000[17][p]][d_3334_d680[d_3334_ca6e[team]]];
    if (d_61eb_d7e6 < 8 && f_ab30_482b(p) == 0) {
        a = f_1a83_2b0c(d_28d4_1958[18][p]);
        b = f_1a83_2b0c(team);
        c2 = d_28d4_1958[23][p];
        m = f_215d_1343(c2, 1 - (c1 > 8 ? 2 : 1) * (d_432e_45de[p].f8 ? -1 : 0));
        if (n < m && (m - n + (b + 1) >= a || f_1a83_2bdb(p) < 11))
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

int f_87dc_291e(int a, int b)
{
    long l1;
    long l2;

    d_61eb_d7da = 3;
    for (d_61eb_d6ba = 0; d_61eb_d6ba <= 1; d_61eb_d6ba++) {
        for (d_61eb_d5c4 = 0; d_61eb_d5c4 <= 10; d_61eb_d5c4++) {
            d_61eb_d5fc = d_3334_f278[b][0][d_61eb_d5c4];
            if (f_1a83_633a(a, d_61eb_d5fc)) {
                l1 = f_1a83_21df(d_28d4_0064[b][d_61eb_d6ba][d_61eb_d5c4], b, d_61eb_d5fc,
                                 d_61eb_d6ba == 1 ? 1 : 0);
                l2 = f_1a83_21df(a, b, d_61eb_d5fc, d_61eb_d6ba == 1 ? 1 : 0);
                if (l2 > l1) {
                    d_61eb_d7da = d_61eb_d6ba + 1;
                    d_61eb_d5c4 = 10;
                    d_61eb_d6ba = 1;
                }
            }
        }
    }
    return d_61eb_d7da;
}

char f_87dc_2a14(int x, int team, int p)
{
    char buf[320];

top:
    d_61eb_da03 = 0;
    sprintf(buf, "%s bid", (char far *)d_61eb_b0ec[team]);
    f_1a83_48f9(buf);
    f_1a83_4327(1, 4.0, x);
    sprintf(buf, "%s want %s", (char far *)d_61eb_b0ec[team], f_1a83_4485(p));
    f_1a83_0b12(7, buf);
    f_1a83_0b12(9, "He is on your shortlist");
    sprintf(buf, "Approach %s ?", f_1a83_462c(p));
    f_1a83_0b12(11, buf);
    f_1a83_2da6(14, "", "View Factfile|View Squad|Ignore|Approach|");
menu:
    f_1a83_3122(3);
    if (d_61eb_d59e == 0) {
        do
            f_a214_4120(p, -1, 0);
        while (!d_61eb_d9ca);
        d_61eb_d9ca = 0;
        goto top;
    }
    if (d_61eb_d59e == 1) {
        f_75a4_2bd7(x);
        goto top;
    }
    if (d_61eb_d59e == 3) {
        if (d_3334_beca[x] + d_3334_c7b2[x] >= 26) {
            f_1a83_0b7d("Maximum squad size is 26");
            if (d_3334_c7b2[x] > 0) {
                sprintf(buf, "%d player%s loaned out", d_3334_c7b2[x], d_3334_c7b2[x] > 1 ? "s" : "");
                f_1a83_0b7d(buf);
            }
            goto menu;
        }
        d_61eb_da03 = -1;
    }
    return d_61eb_da03;
}

void f_87dc_2bb2(int team)
{
    long v;
    char ok;
    char buf[320];

    for (d_61eb_d7d4 = 1; d_61eb_d7d4 <= 3; d_61eb_d7d4++) {
        for (d_61eb_d7de = 1; d_61eb_d7de <= d_61eb_d7dc; d_61eb_d7de++) {
            if (d_432e_b8a5[d_61eb_d7de - 1] != 0 && d_432e_375a[d_61eb_d7de] < d_61eb_db25)
                d_432e_b8a5[d_61eb_d7de - 1] = 0;
            if (d_432e_b8a5[d_61eb_d7de - 1] == 0) {
                d_61eb_d5dc = d_432e_3710[d_61eb_d7de];
                if (d_61eb_d7d4 == 1) {
                    if (d_61eb_da01 != 0 || d_61eb_da00 != 0 || d_3334_a410[team] == 0)
                        v = f_1a83_0cef(f_215d_1385(f_1a83_01d6(team, d_61eb_d5dc), f_1a83_5747(d_61eb_d5dc)), 0);
                    else
                        v = f_215d_13c8(d_61eb_db2d, f_1a83_5747(d_61eb_d5dc));
                    if (v > d_61eb_db2d)
                        v = d_61eb_db2d;
                } else
                    v = d_432e_375a[d_61eb_d7de];
                d_61eb_da07 = d_61eb_d7d8 > 0 ? -1 : 0;
                d_61eb_da06 = d_432e_b87f[d_61eb_d7de - 1];
                d_432e_375a[d_61eb_d7de] = f_87dc_311d(d_61eb_d5dc, team, v);
                if (d_61eb_d7d8 > 0) {
                    if (f_1a83_2ad4(d_61eb_d5dc) == 0)
                        f_215d_0df0(25);
                    sprintf(buf, "%s make a bid of %ld", (char far *)d_61eb_b0ec[d_61eb_d5dc],
                            d_432e_375a[d_61eb_d7de]);
                    f_87dc_41a3(1, buf);
                }
                if (d_432e_375a[d_61eb_d7de] > d_61eb_db25)
                    d_61eb_db25 = d_432e_375a[d_61eb_d7de];
            }
        }
        if (d_61eb_d7d4 > 1)
            d_61eb_db2d = d_61eb_db29;
        if (d_61eb_db2d < d_61eb_db25)
            d_61eb_db2d = d_61eb_db25;
        d_61eb_da07 = d_61eb_d7d8 > 0 ? -1 : 0;
        d_61eb_db29 = f_87dc_33ac(d_28d4_1958[18][team], team, d_61eb_db2d);
        ok = 0;
        for (d_61eb_d7de = 1; d_61eb_d7de <= d_61eb_d7dc; d_61eb_d7de++) {
            d_61eb_d5dc = d_432e_3710[d_61eb_d7de];
            if (d_432e_375a[d_61eb_d7de] < d_61eb_db29 && d_432e_b8a5[d_61eb_d7de - 1] != 0)
                d_432e_b8a5[d_61eb_d7de - 1] = 0;
            if (d_432e_375a[d_61eb_d7de] == d_61eb_db29) {
                if (d_432e_b8a5[d_61eb_d7de - 1] == 0) {
                    d_432e_b8a5[d_61eb_d7de - 1] = -1;
                    d_61eb_d9ff = -1;
                    if (d_61eb_d7d8 > 0) {
                        f_215d_0df0(25);
                        sprintf(buf, "%s offer is accepted", (char far *)d_61eb_b0ec[d_61eb_d5dc]);
                        f_87dc_41a3(1, buf);
                    }
                }
            } else {
                ok = -1;
                if (d_61eb_d7d8 > 0) {
                    f_215d_0df0(25);
                    sprintf(buf, "%s offer is refused", (char far *)d_61eb_b0ec[d_61eb_d5dc]);
                    f_87dc_41a3(1, buf);
                }
            }
        }
        if (ok == 0)
            d_61eb_d7d4 = 3;
    }
    if (d_3334_a410[team] == 0 && d_61eb_d9ff == 0) {
        d_61eb_db11 = f_1a83_0cef(f_1a83_01d6(team, -1), 0);
        if (d_61eb_db11 > d_61eb_db29)
            d_61eb_db11 = d_61eb_db29;
        if (d_61eb_d7d8 > 0) {
            f_215d_0df0(25);
            sprintf(buf, "Tribunal sets fee at %ld", d_61eb_db11);
            f_87dc_41a3(6, buf);
        }
        d_61eb_d9fe = -1;
        for (d_61eb_d7de = 1; d_61eb_d7de <= d_61eb_d7dc; d_61eb_d7de++) {
            d_61eb_d5dc = d_432e_3710[d_61eb_d7de];
            if (f_1a83_5747(d_61eb_d5dc) >= d_61eb_db11) {
                d_432e_375a[d_61eb_d7de] = d_61eb_db11;
                d_432e_b8a5[d_61eb_d7de - 1] = -1;
                d_61eb_d9ff = -1;
            } else if (d_61eb_d7d8 > 0) {
                sprintf(buf, "The %s board refuse to spend that much", (char far *)d_61eb_b0ec[d_61eb_d5dc]);
                f_87dc_41a3(1, buf);
            }
        }
    } else if (d_61eb_d9ff == 0 && d_61eb_d7d8 > 0)
        f_87dc_41a3(6, "No agreement is reached");
}

long f_87dc_311d(int player, int club, long fee)
{
    d_61eb_db35 = fee;
    if (f_1a83_2ad4(player)) {
        do {
            d_61eb_d9df = -1;
            d_61eb_d7e8 = d_61eb_db35 / 1000;
            d_61eb_d7ea = player;
            d_61eb_d7ec = f_87dc_3def(0, d_61eb_d7e8, 0, club);
            if (d_61eb_da05) {
                do
                    f_a214_4120(club, -1, 0);
                while (!d_61eb_d9ca);
                d_61eb_d9ca = 0;
                d_61eb_d9df = 0;
                f_87dc_3bd1(0, club);
            }
            d_61eb_db35 = (long)d_61eb_d7ec * 1000;
            if (d_61eb_d9df && f_1a83_5747(player) < d_61eb_db35) {
                f_87dc_41a3(1, "The board refuse to spend that much");
                d_61eb_d9df = 0;
            }
        } while (!d_61eb_d9df);
    } else {
        d_61eb_db39 = d_61eb_db35;
        if (f_215d_0d96(3) > 0)
            d_61eb_db35 = d_61eb_db35 * (f_215d_0d96(10) / 100.0 + 1.1);
        if (d_61eb_db35 < d_61eb_db25)
            d_61eb_db35 = f_215d_13c8(d_61eb_db25, d_61eb_db31 * (d_61eb_da06 ? 2.5 : 1.5));
        if (d_61eb_db35 > d_61eb_db29 && d_61eb_d7dc == 1)
            d_61eb_db35 = d_61eb_db29;
        if (d_61eb_db35 > d_61eb_db29 * 0.95)
            d_61eb_db35 = d_61eb_db29;
        if (f_1a83_5747(player) < d_61eb_db35)
            d_61eb_db35 = f_1a83_5747(player);
        if (d_61eb_db35 != d_61eb_db29)
            d_61eb_db35 = f_1a83_0cef(d_61eb_db35, 0);
        if (d_61eb_db35 < d_61eb_db39)
            d_61eb_db35 = d_61eb_db39;
    }
    return d_61eb_db35;
}

long f_87dc_33ac(int club, int player, long fee)
{
    int n;
    long first;
    int saved;

    saved = d_61eb_d808;
    d_61eb_d808 = club;
    d_61eb_db29 = fee;
    if (f_1a83_2ad4(d_61eb_d808)) {
        do {
            d_61eb_d9df = -1;
            d_61eb_d7e8 = d_61eb_db29 / 1000;
            n = d_61eb_db25 / 1000;
            d_61eb_d7ec = f_87dc_3def(1, d_61eb_d7e8, n, player);
            if (d_61eb_da05) {
                do
                    f_a214_4120(player, -1, 0);
                while (!d_61eb_d9ca);
                d_61eb_d9ca = 0;
                d_61eb_d9df = 0;
                f_87dc_3bd1(0, player);
            }
            d_61eb_db29 = (long)d_61eb_d7ec * 1000;
            if (d_61eb_d9df && d_61eb_db29 < f_1a83_01d6(player, -1) * 0.5) {
                f_87dc_41a3(1, "The board expect more for him");
                d_61eb_d9df = 0;
            }
        } while (!d_61eb_d9df);
    } else {
        first = d_61eb_db29;
        if (f_215d_0d96(2) == 0)
            d_61eb_db29 = d_61eb_db29 * (0.9 - f_215d_0d96(10) / 100);
        if (d_61eb_db29 * 0.95 < d_61eb_db25)
            d_61eb_db29 = d_61eb_db25;
        else if (d_61eb_db29 > d_61eb_db25)
            d_61eb_db29 = f_1a83_0cef(d_61eb_db29, 0);
        if (d_61eb_db29 > first)
            d_61eb_db29 = first;
    }
    d_61eb_d808 = saved;
    return d_61eb_db29;
}

void f_87dc_35cf(int player, int club)
{
    d_61eb_d7ee = f_87dc_3b88(d_28d4_1958[17][player]);
    d_61eb_d7f0 = f_1a83_6b9e(player, club);
    d_61eb_d7f2 = d_28d4_1958[14][player] / 10 + 2.5;
    d_61eb_d9fb = 0;
    if (f_1a83_2ad4(club) && d_61eb_da08 == 0) {
        char buf[320];

        d_61eb_d9a2 = 1;
        d_61eb_d7e2 = 8;
        f_87dc_3bd1(2, player);
        sprintf(buf, "He wants a %d year contract", d_61eb_d7ee);
        f_87dc_41a3(1, buf);
        d_61eb_d7f4 = 0;
        d_61eb_d7f6 = 10;
        d_61eb_d7f8 = -1;
        do {
            do {
                d_61eb_d9df = -1;
                if (d_61eb_d7f8 == -1)
                    d_61eb_d7e8 = d_61eb_d7ee;
                else
                    d_61eb_d7e8 = d_61eb_d7f8;
                d_61eb_d7ec = f_87dc_3def(2, d_61eb_d7e8, 1, player);
                if (d_61eb_da05) {
                    do
                        f_a214_4120(player, -1, 0);
                    while (!d_61eb_d9ca);
                    d_61eb_d9ca = 0;
                    d_61eb_d9df = 0;
                    f_87dc_3bd1(2, player);
                }
                d_61eb_d7f8 = d_61eb_d7ec;
            } while (!d_61eb_d9df);
            if (d_61eb_d7f8 != d_61eb_d7ee &&
                (f_215d_0d96(abs(d_61eb_d7ee - d_61eb_d7f8) + 2) > 0 ||
                 abs(d_61eb_d7ee - d_61eb_d7f8) >= d_61eb_d7f6)) {
                sprintf(buf, "He refuses %d year offer", d_61eb_d7f8);
                f_87dc_41a3(1, buf);
                d_61eb_d7f4++;
                if (d_61eb_d7f4 <= d_61eb_d7f2)
                    d_61eb_d7f6 = abs(d_61eb_d7ee - d_61eb_d7f8);
                d_61eb_d9df = 0;
            }
        } while (d_61eb_d7f4 <= d_61eb_d7f2 && d_61eb_d9df == 0);
        if (d_61eb_d9df) {
            sprintf(buf, "He accepts %d year offer", d_61eb_d7f8);
            f_87dc_41a3(1, buf);
            sprintf(buf, "He wants %d per week", d_61eb_d7f0);
            f_87dc_41a3(1, buf);
            d_61eb_d7cc = d_61eb_d7f8;
            d_61eb_da07 = -1;
            d_61eb_d7f4 = 0;
            d_61eb_d7fa = -1;
            d_61eb_d7fc = 0;
            d_61eb_d7fe = f_87dc_3a09(player, club);
            do {
                do {
                    d_61eb_d9df = -1;
                    if (d_61eb_d7fa == -1)
                        d_61eb_d7e8 = d_61eb_d7f0;
                    else
                        d_61eb_d7e8 = d_61eb_d7fa;
                    d_61eb_d7ec = f_87dc_3def(3, d_61eb_d7e8, 100, player);
                    if (d_61eb_da05) {
                        do
                            f_a214_4120(player, -1, 0);
                        while (!d_61eb_d9ca);
                        d_61eb_d9ca = 0;
                        d_61eb_d9df = 0;
                        f_87dc_3bd1(2, player);
                    }
                    d_61eb_d7fa = d_61eb_d7ec;
                    if (d_61eb_d9df && d_61eb_d7fa > d_61eb_d7fe) {
                        f_87dc_41a3(1, "The board refuse to spend that per week");
                        d_61eb_d9df = 0;
                    }
                } while (!d_61eb_d9df);
                d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
                if ((d_61eb_d7f0 * (1 - f_215d_0d96(6) * 0.05) > d_61eb_d7fa ||
                     d_61eb_d7fa <= d_61eb_d7fc || d_61eb_dbb8[4][player] > d_61eb_d7fa &&
                     d_28d4_1958[17][player] < 30) &&
                    abs(d_61eb_d7fa - d_61eb_d7f0) > f_215d_0d96(20) + 25) {
                    sprintf(buf, "He wants more than %d per week", d_61eb_d7fa);
                    f_87dc_41a3(1, buf);
                    d_61eb_d7f4++;
                    if (d_61eb_d7f4 <= d_61eb_d7f2)
                        d_61eb_d7fc = d_61eb_d7fa;
                    d_61eb_d9df = 0;
                }
            } while (d_61eb_d7f4 <= d_61eb_d7f2 && d_61eb_d9df == 0);
            if (d_61eb_d9df) {
                sprintf(buf, "He accepts %d per week", d_61eb_d7fa);
                f_87dc_41a3(1, buf);
                d_61eb_d7ce = d_61eb_d7fa;
                d_61eb_d9fb = -1;
            }
        }
        if (d_61eb_d9fb == 0)
            f_87dc_41a3(6, "No deal");
    } else {
        d_61eb_d7cc = d_61eb_d7ee;
        d_61eb_d7ce = d_61eb_d7f0;
        d_61eb_d9fb = -1;
    }
}

int f_87dc_3a09(int player, int team)
{
    unsigned char c;
    unsigned char r;
    unsigned char rep = team < 38 ? f_1a83_2b0c(team) : 16.0;
    float w;
    float t[4] = { 1.0, 0.7, 0.4, 0.3 };

    c = d_3334_0000[18][player];
    d_61eb_d800 = (d_28d4_1958[0][player] * 4 + c) / 5;
    r = f_215d_1343(f_215d_13af(19, d_61eb_d800 / 10), 0);
    w = rep * 0.14 * (d_28cd_0000[r] * 400.0) * t[team < 38 ? f_1a83_6d8b(team) : 0];
    w = w * (d_28d4_1958[17][player] / 100.0 + 1);
    if (d_432e_45de[player].f28)
        w = w * 1.3;
    w = w * 1.2;
    d_61eb_d7fe = (int)(w / 10.0) * 10;
    d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
    if (d_61eb_dbb8[4][player] > d_61eb_d7fe)
        d_61eb_d7fe = d_61eb_dbb8[4][player];
    return d_61eb_d7fe;
}

int f_87dc_3b88(int age)
{
    d_61eb_d7ee = f_215d_0d96(5) + 1;
    if (age >= 27 && age <= 31)
        d_61eb_d7ee = f_215d_13af(32 - age, d_61eb_d7ee);
    else if (age > 31)
        d_61eb_d7ee = f_215d_13af(d_61eb_d7ee, 2);
    return d_61eb_d7ee;
}

void f_87dc_3bd1(int mode, int player)
{
    char buf[320];

    if (mode == 0) {
        sprintf(buf, "%s - Transfer Fee", f_1a83_4485(player));
        strcpy(d_432e_c607, "Fee Negotiations");
    } else if (mode == 1) {
        sprintf(buf, "%s - Asking Price", f_1a83_4485(player));
        strcpy(d_432e_c607, "Set Asking Price");
    } else if (mode == 2) {
        sprintf(buf, "%s - Contract", f_1a83_4485(player));
        strcpy(d_432e_c607, "Set Contract");
    } else {
        sprintf(buf, "%s - Wage Increase", f_1a83_4485(player));
        strcpy(d_432e_c607, "Set Weekly Wage");
    }
    f_1a83_48f9(buf);
    f_215d_088c(16);
    f_215d_08aa(14, 36, 314, 127);
    f_215d_088c(31);
    f_215d_08aa(10, 32, 310, 123);
    f_215d_089b(19);
    f_215d_0904(10, 32, 310, 123);
    sprintf(buf, " %s", d_432e_c607);
    f_1a83_3450(1.625, 5.0, 1, 2, 296, buf);
    f_87dc_3d2f(player, 0);
    d_61eb_da07 = -1;
    d_61eb_d9a2 = 0;
}

void f_87dc_3d2f(int player, char lit)
{
    f_215d_088c(16);
    f_215d_08aa(14, 135, 172, 192);
    f_215d_088c(lit ? 28 : 20);
    f_215d_08aa(10, 131, 168, 188);
    f_215d_089b(17);
    f_215d_0904(10, 131, 168, 188);
    strcpy(d_432e_d5ad, f_1a83_462c(player));
    f_1a83_3347(79 - strlen(d_432e_d5ad) * 3 + 19, 156, 1, d_432e_d5ad);
    f_1a83_3347(74, 164, 1, "Factfile");
}

int f_87dc_3def(int mode, int value, int lo, int player)
{
    d_61eb_da05 = 0;
    d_61eb_d804 = value;
    d_61eb_d806 = mode == 2 ? 5 : 19999;
    if (d_61eb_da07 != 0) {
        f_1a83_4d03();
        f_215d_088c(16);
        f_215d_08aa(180, 135, 314, 192);
        f_215d_088c(24);
        f_215d_08aa(176, 131, 310, 188);
        f_215d_089b(22);
        f_215d_0904(176, 131, 310, 188);
        if (mode == 0)
            sprintf(d_432e_d5fd, "%s Offer", (char far *)d_61eb_b0ec[d_61eb_d7ea]);
        else if (mode == 1)
            sprintf(d_432e_d5fd, "%s Ask", (char far *)d_61eb_b0ec[d_61eb_d808]);
        else if (mode == 2)
            strcpy(d_432e_d5fd, " Length");
        else
            strcpy(d_432e_d5fd, " Wages p/w");
        f_215d_088c(30);
        f_215d_08aa(180, 135, 306, 150);
        f_1a83_3347(251 - strlen(d_432e_d5fd) * 3, 146, 6, d_432e_d5fd);
        f_1a83_4d96(2, 22.75, 19.625, 1, 14, 26, " - ");
        f_1a83_4d96(2, 34.875, 19.625, 1, 14, 26, " + ");
        f_1a83_4d96(2, 22.75, 21.75, 1, 14, 123, "      DONE");
        strcpy(d_432e_d64d, "    ");
        f_87dc_40a7(d_61eb_d804, -1);
    }
    do {
        d_61eb_d59e = f_1a83_5296(-1);
        if (d_61eb_d59e == 1) {
            d_61eb_d804 = f_215d_1343(d_61eb_d804 - d_61eb_3066[8 - d_61eb_d7e2], lo);
            f_87dc_40a7(d_61eb_d804, 0);
        } else if (d_61eb_d59e == 2) {
            d_61eb_d804 = f_215d_13af(d_61eb_d804 + d_61eb_3066[8 - d_61eb_d7e2], d_61eb_d806);
            f_87dc_40a7(d_61eb_d804, 0);
        } else if (d_61eb_d59e >= 4) {
            if (d_61eb_d59e != 8 && mode == 2)
                continue;
            if (d_61eb_d7e2 != d_61eb_d59e) {
                d_28d4_1798[d_61eb_d7e2 - 1] = 0xe1;
                f_1a83_5117(d_61eb_d7e2, 0);
                d_61eb_d7e2 = d_61eb_d59e;
                d_28d4_1798[d_61eb_d7e2 - 1] = 1;
                f_1a83_5117(d_61eb_d7e2, 0);
            }
        } else if (f_215d_0c14() >= 10 && f_215d_0c14() <= 168 && f_215d_0c08() >= 131 && f_215d_0c08() <= 188) {
            d_61eb_da05 = -1;
            f_87dc_3d2f(player, -1);
        }
    } while (d_61eb_d59e != 3 && d_61eb_da05 == 0);
    d_61eb_da07 = 0;
    return d_61eb_d804;
}

void f_87dc_40a7(int n, char draw)
{
    char s[2];

    s[1] = 0;
    sprintf(d_432e_c369, "%05d", n);
    for (d_61eb_d674 = 1; d_61eb_d674 <= 5; d_61eb_d674++) {
        s[0] = d_432e_c369[d_61eb_d674 - 1];
        if (d_432e_d64d[d_61eb_d674 - 1] != s[0]) {
            if (draw) {
                d_61eb_da65 = (d_61eb_d674 - 1) * 1.625 + 26.625;
                f_1a83_4d96(2, d_61eb_da65, 19.625, d_61eb_d674 + 3 != d_61eb_d7e2 ? 14 : 0, 1, 8, s);
            } else {
                strcpy(d_432e_eea3[d_61eb_d674 + 2], s);
                f_1a83_5117(d_61eb_d674 + 3, 0);
            }
        }
    }
    strcpy(d_432e_d64d, d_432e_c369);
}

void f_87dc_41a3(int colour, char far *s)
{
    if (d_61eb_d9a2 == 9) {
        for (d_61eb_d79c = 1; d_61eb_d79c <= 4; d_61eb_d79c++) {
            f_215d_118b(12, 42, 308, 121, 2, 31);
            f_215d_089b(31);
            f_215d_1016(12, 42, 308, 42);
            f_215d_1016(12, 43, 308, 43);
        }
        d_61eb_d9a2 = 8;
    }
    f_1a83_3347(23, d_61eb_d9a2 * 8 + 50, colour, s);
    d_61eb_d9a2++;
    if (colour == 6)
        f_215d_0df0(50);
}

void f_87dc_423a(int player, int to, int from, long fee, unsigned char kind)
{
    int saved;

    saved = from;
    d_61eb_d808 = from;
    if (d_61eb_d5a2 > 12) {
        f_215d_19eb(2);
        d_61eb_0094 = fopen(d_5313_0e10, "rb+");
        f_a7b6_30ee(player);
        fclose(d_61eb_0094);
    }
    if (to < 38 && f_1a83_2ad4(to) && kind != 2)
        f_b26d_0e1c(d_3334_ca6e[to] + 122, 1, player, d_61eb_d808, kind ? 1L : fee, d_61eb_d9fe);
    if (d_61eb_d808 < 38 && f_1a83_2ad4(d_61eb_d808) && kind != 2)
        f_b26d_0e1c(d_3334_ca6e[d_61eb_d808] + 122, 2, player, to, kind ? 1L : fee, d_61eb_d9fe);
    if (kind == 1) {
        d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 1);
        d_61eb_dbcc[4][player] = d_3334_0000[12][player];
        d_61eb_dbcc[5][player] = d_3334_0000[13][player];
        d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 1);
        d_61eb_dbb8[3][player] = d_61eb_dbb8[2][player];
        d_3334_c8ca[to]++;
    }
    if (kind == 2) {
        d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 0);
        d_3334_0000[12][player] = d_61eb_dbcc[4][player];
        d_3334_0000[13][player] = d_61eb_dbcc[5][player];
        d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 1);
        d_61eb_dbb8[2][player] = d_61eb_dbb8[3][player];
    } else if (kind < 2) {
        d_3334_0000[12][player] = 0;
        d_3334_0000[13][player] = 0;
        d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 1);
        d_61eb_dbb8[2][player] = 0;
    }
    if (kind == 0) {
        d_3334_a410[player] = (d_61eb_d5a4 + d_61eb_d7cc) * 100 + f_1a83_66e8(d_61eb_d5a2);
        d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 1);
        d_61eb_dbb8[4][player] = d_61eb_d7ce;
        d_432e_45de[player].f9 = 1;
        d_432e_45de[player].f11 = 1;
        d_432e_45de[player].f12 = 0;
        d_432e_45de[player].f13 = 0;
    }
    d_3334_0000[11][player] = 0;
    d_432e_45de[player].f8 = 0;
    d_432e_45de[player].f10 = 0;
    d_432e_45de[player].f20 = kind == 1;
    d_432e_45de[player].f24 = 0;
    d_432e_45de[player].f16 = 0;
    if (d_61eb_d808 != to) {
        if (kind < 2) {
            long v;

            if (kind == 0) {
                if (d_28d4_1958[0][player] > d_28d4_1958[15][player])
                    d_28d4_1958[15][player] = d_28d4_1958[0][player];
                if (d_61eb_d808 < 38 && !d_61eb_d9bf) {
                    d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
                    d_61eb_dbc0[2][d_61eb_d808] += fee * 0.9;
                }
                if (to < 38 && !d_61eb_d9bf) {
                    d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
                    d_61eb_dbc0[9][to] += fee;
                }
                if (d_61eb_d808 < 38 && to < 38 && !d_61eb_d9bf)
                    for (d_61eb_d5dc = 0; d_61eb_d5dc <= 37; d_61eb_d5dc++)
                        if (d_61eb_d5dc != to && d_61eb_d5dc != d_61eb_d808) {
                            d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
                            d_61eb_dbc0[6][d_61eb_d5dc] += fee * (1.0 / 780);
                        }
                if (to < 38) {
                    f_93a1_467a(player, d_61eb_d808, to, fee);
                    d_3334_cd1a[to] += fee;
                }
                if (d_61eb_d808 < 38) {
                    f_93a1_46fa(player, d_61eb_d808, to, fee);
                    d_3334_cdb2[d_61eb_d808] += fee;
                }
                v = fee;
            } else
                v = 1;
            if (d_61eb_d808 < 38) {
                unsigned char c;

                c = d_432e_681e[d_61eb_d808].n_out % 6;
                d_432e_681e[d_61eb_d808].out[c] = player;
                d_432e_681e[d_61eb_d808].out_club[c] = to;
                d_432e_681e[d_61eb_d808].out_fee[c] = v;
                d_432e_681e[d_61eb_d808].n_out++;
            }
            if (to < 38) {
                unsigned char c;

                c = d_432e_681e[to].n_in % 6;
                d_432e_681e[to].in[c] = player;
                d_432e_681e[to].in_club[c] = d_61eb_d808;
                d_432e_681e[to].in_fee[c] = v;
                d_432e_681e[to].n_in++;
            }
        }
        d_3334_0000[10][player] = d_61eb_d808;
        f_87dc_49e4(player, d_61eb_d808, to, kind);
    }
    if (kind == 0)
        f_87dc_182c(player, 0);
    if (to < 38 && f_1a83_2ad4(to) == 0 && d_61eb_d9c3 == 0 && kind != 2) {
        unsigned char i;

        for (i = 0; d_432e_74e2[i].player != -1; i++)
            ;
        d_432e_74e2[i].player = player;
        d_432e_74e2[i].from = d_61eb_d808;
        d_432e_74e2[i].to = to;
        if (kind == 0)
            d_432e_74e2[i].fee = fee;
        else if (kind == 1)
            d_432e_74e2[i].fee = 1;
        f_ab30_62c1(i);
    }
    if (to < 38 && f_1a83_2ad4(to) == 0)
        f_87dc_196e(to);
    d_61eb_d808 = saved;
}

#pragma option -O-
void f_87dc_49e4(int player, int from, int to, char kind)
{
    if (from != to) {
        if (from < 38) {
            if (f_1a83_6b4c(player) == 0)
                for (d_61eb_d61a = 0; d_61eb_d61a <= d_3334_beca[from] - 1; d_61eb_d61a++)
                    if (d_28d4_081c[from][d_61eb_d61a] == player)
                        d_28d4_081c[from][d_61eb_d61a] = d_28d4_081c[from][d_3334_beca[from] - 1];
            d_3334_beca[from]--;
            if (d_432e_45de[player].f0)
                d_3334_bf42[from]--;
            if (f_1a83_2ad4(from) && f_1a83_6b4c(player) == 0)
                f_ab30_30f0(player, from);
        }
        if (to < 38) {
            d_28d4_081c[to][d_3334_beca[to]] = player;
            d_3334_beca[to]++;
            if (d_432e_45de[player].f0)
                d_3334_bf42[to]++;
            if (f_1a83_2ad4(to))
                f_ab30_30a0(player, to);
        }
    }
    if (from < 38 && f_1a83_6b4c(player) == 0) {
        if (f_1a83_2ad4(from) == 0)
            f_1a83_0e84(player);
        else if (d_432e_45de[player].f7) {
            d_3334_f9f8[from][f_1a83_1dd9(player)] = 1499;
            d_432e_45de[player].f7 = 0;
        }
        if (*(d_28d4_1958[23] + player) < 3)
            f_1a83_1625(player);
    }
    if (from != to) {
        d_28d4_1958[18][player] = to;
        if (kind == 1) {
            d_3334_0000[7][player] = from;
            d_3334_c7b2[from]++;
            d_3334_c78a[to]++;
        } else if (kind == 2) {
            d_3334_0000[7][player] = -1;
            d_3334_c78a[from]--;
            d_3334_c7b2[to]--;
        }
        if (to < 38) {
            if (f_1a83_2ad4(to) == 0 && *(d_28d4_1958[20] + player) == 0)
                f_1a83_12f6(player);
            d_28d4_1958[23][player] = 3;
            f_1a83_18fd(player);
        }
    }
}

void f_87dc_4c9b(int player, int a)
{
    unsigned char c;
    char s[80];
    char buf[320];

    if (a > 0) {
        if (f_1a83_6b4c(player) == 0)
            f_87dc_1d05(a - 1, player, 0);
        else
            f_ab30_3ed6(player, a - 1);
    } else if (a == -1) {
        d_61eb_da09 = 0;
        f_87dc_4fea(player);
    } else if (a < -1) {
        d_61eb_d80a = -a - 2;
        do {
            f_1a83_48f9("Shortlist/Watch Player");
            f_1a83_4327(1.0, 4.0, d_61eb_d80a);
            sprintf(buf, "Shortlist %s ?", f_1a83_4485(player));
            f_1a83_0b12(7, buf);
            f_1a83_2da6(10, "", "*Exit|Shortlist|Shortlist & Watch|");
            f_1a83_3122(2);
            c = d_61eb_d59e;
            if (c > 0) {
                if (f_87dc_1a90(d_61eb_d80a, player) > 0)
                    sprintf(buf, "%s already shortlisted", f_1a83_462c(player));
                else {
                    d_432e_066e[d_61eb_d80a][0]++;
                    d_432e_066e[d_61eb_d80a][d_432e_066e[d_61eb_d80a][0]] = player;
                    sprintf(buf, "Ok - %s shortlisted", f_1a83_462c(player));
                    if (d_61eb_d652 > 1) {
                        sprintf(s, "|for %s", (char far *)d_61eb_b0ec[d_61eb_d80a]);
                        strcat(buf, s);
                    }
                }
                f_1a83_0bb7(buf);
            }
            if (c == 2) {
                if (f_1a83_6b4c(player) == 0)
                    f_b26d_27fd(d_61eb_d80a, player);
                else
                    f_1a83_0bb7("Can't watch foreign|based players");
            }
        } while (c > 0);
    }
}

char f_87dc_4e83(int player, char flag)
{
    d_61eb_da09 = 0;
    if (f_1a83_2ad4(d_28d4_1958[18][player]))
        f_87dc_4fea(player);
    else if (!d_432e_45de[player].f9 && !d_432e_45de[player].f30 && f_1a83_2c20(player) == 0
             && d_28d4_1958[23][player] == 3 && d_3334_caba[d_28d4_1958[18][player]] < 650) {
        if (flag == 0 && f_1a83_2bdb(player) < f_1a83_2b0c(d_28d4_1958[18][player]) + 3.0
            || flag != 0 && f_1a83_2bdb(player) >= f_1a83_2b0c(d_28d4_1958[18][player]) + 3.0
               && d_28d4_1958[20][player] == 0 && !d_432e_45de[player].f7)
            d_61eb_da09 = -1;
    }
    return d_61eb_da09;
}

void f_87dc_4fea(int player)
{
    unsigned char n;
    unsigned char club;
    char buf[320];
    char item[30];

    do {
        n = 0;
        d_61eb_da04 = 0;
        d_61eb_da0a = f_1a83_6728(player, 0);
        f_1a83_48f9("Transfer Status");
        club = d_3334_0000[7][player] < 255 ? d_3334_0000[7][player] : d_28d4_1958[18][player];
        f_1a83_4327(1.0, 4.0, club);
        f_1a83_0b12(7, f_1a83_4485(player));
        if (d_3334_0000[7][player] < 255) {
            sprintf(buf, "On loan to %s", (char far *)d_61eb_b0ec[*(d_28d4_1958[18] + player)]);
            f_1a83_0b12(9, buf);
            strcpy(d_432e_ba27, "Terminate Loan|");
            n++;
        } else {
            if (d_432e_45de[player].f8 && !d_432e_45de[player].f24) {
                d_61eb_dbac = f_215d_1629(d_61eb_dc48, 0);
                if (d_61eb_dbac[player] > 0)
                    sprintf(buf, "For sale at %ld", d_61eb_dbac[player]);
                else
                    strcpy(buf, "Available for free transfer");
                f_1a83_0b12(9, buf);
                strcpy(d_432e_ba27, "Revalue Him|Remove From List|");
                n += 2;
            } else if (d_432e_45de[player].f8 && d_432e_45de[player].f24) {
                strcpy(buf, "Available for loan");
                f_1a83_0b12(9, buf);
                strcpy(d_432e_ba27, "Remove From List|");
                n++;
            } else if (d_432e_45de[player].f9 || d_432e_45de[player].f30) {
                f_1a83_0b12(9, "Not for sale at any price");
                strcpy(d_432e_ba27, "Allow Approaches|");
                n++;
            } else {
                f_1a83_0b12(9, "Currently open to approach");
                strcpy(d_432e_ba27, "List/Loan Him|Not For Sale|");
                n += 2;
            }
            strcat(d_432e_ba27, "Fine Him|");
            n++;
            if (!d_432e_45de[player].f20)
                strcat(d_432e_ba27, "Insure Him|");
            else
                strcat(d_432e_ba27, "Uninsure Him|");
            n++;
            if (d_3334_a410[player] == 0 || d_3334_a410[player] / 100 == d_61eb_d5a4) {
                strcat(d_432e_ba27, "Renew Contract|");
                n++;
            }
            if (d_3334_a410[player] > 0 && !d_432e_45de[player].f8) {
                strcat(d_432e_ba27, "Increase Wages|");
                n++;
            }
            if (*(d_28d4_1958[20] + player) > 0 && *(d_28d4_1958[19] + player) < 27) {
                strcat(d_432e_ba27, "Rehabilitate|");
                n++;
            }
        }
        sprintf(buf, "*Exit|%s", d_432e_ba27);
        n++;
        f_1a83_2da6(12, "", buf);
        do {
            d_61eb_d9c8 = -1;
            f_1a83_3122(n - 1);
            strcpy(item, d_5313_0000[d_61eb_d59e]);
            if (strstr(item, "Terminate")) {
                if (f_1a83_0c63()) {
                    sprintf(buf, "%s returns from loan", f_1a83_462c(player));
                    f_1a83_0b7d(buf);
                    f_87dc_423a(player, d_3334_0000[7][player], d_28d4_1958[0][18 * 1500 + player], 0L, 2);
                } else
                    d_61eb_d9c8 = 0;
            } else if (strstr(item, "Revalue")) {
                f_8e0f_0aee(player);
                d_61eb_da04 = -1;
            } else if (strstr(item, "Allow")) {
                if (f_1a83_0c63()) {
                    sprintf(buf, "%s now approachable", f_1a83_462c(player));
                    f_1a83_0b7d(buf);
                    d_432e_45de[player].f9 = 0;
                    d_61eb_da04 = -1;
                } else
                    d_61eb_d9c8 = 0;
            } else if (strstr(item, "List/Loan")) {
                f_1a83_2da6(0, "List/Loan Him", "*Exit|List Him|Loan Him|");
                if (d_61eb_d59e == 1) {
                    sprintf(buf, "%s now transfer listed", f_1a83_462c(player));
                    f_1a83_0b7d(buf);
                    f_8e0f_099c(player, 0, 0);
                } else if (d_61eb_d59e == 2) {
                    sprintf(buf, "%s now available for loan", f_1a83_462c(player));
                    f_1a83_0b7d(buf);
                    f_8e0f_099c(player, 0, -1);
                }
                d_61eb_d59e;
                d_61eb_da04 = -1;
            } else if (strstr(item, "Remove")) {
                if (f_1a83_0c63()) {
                    if (d_432e_45de[player].f10) {
                        if (d_61eb_da0a && d_3334_a410[player] == 0) {
                            sprintf(buf, "%s refuses", f_1a83_462c(player));
                            f_1a83_0b7d(buf);
                            sprintf(buf, "He %s", d_432e_d32b);
                            f_1a83_0b7d(buf);
                            d_61eb_d9c8 = 0;
                            d_61eb_d9c8;
                        } else if (d_61eb_da0a && d_3334_a410[player] > 0) {
                            sprintf(buf, "%s told to stay", f_1a83_462c(player));
                            f_1a83_0b7d(buf);
                            f_1a83_0b7d("But he's still unhappy");
                            f_8e0f_0a8c(player);
                            d_61eb_da04 = -1;
                        } else {
                            sprintf(buf, "%s agrees to stay", f_1a83_462c(player));
                            f_1a83_0b7d(buf);
                            f_8e0f_0a8c(player);
                            d_61eb_da04 = -1;
                        }
                    } else {
                        sprintf(buf, "%s removed from list", f_1a83_462c(player));
                        f_1a83_0b7d(buf);
                        f_8e0f_0a8c(player);
                        d_61eb_da04 = -1;
                    }
                } else
                    d_61eb_d9c8 = 0;
            } else if (strstr(item, "Not For")) {
                if (d_3334_a410[player] == 0) {
                    sprintf(buf, "%s must sign a new contract", f_1a83_462c(player));
                    f_1a83_0b7d(buf);
                    d_61eb_d9c8 = 0;
                } else if (f_1a83_0c63()) {
                    sprintf(buf, "%s now unapproachable", f_1a83_462c(player));
                    f_1a83_0b7d(buf);
                    d_432e_45de[player].f9 = 1;
                    d_61eb_da04 = -1;
                } else
                    d_61eb_d9c8 = 0;
            } else if (strstr(item, "Fine")) {
                if (f_1a83_0c63()) {
                    d_61eb_d654 = d_3334_ca6e[*(d_28d4_1958[18] + player)] - 646;
                    sprintf(buf, "%04d", player);
                    d_61eb_dbe4 = f_215d_1629(d_61eb_dc64, 0);
                    d_61eb_da0b = f_215d_0b10(d_61eb_dbe4[d_61eb_d654], buf) > 0;
                    if (d_61eb_da0b) {
                        f_1a83_0b7d("Maximum one fine per week");
                        d_61eb_d9c8 = 0;
                    } else {
                        sprintf(buf, "%s fined a weeks wages", f_1a83_462c(player));
                        f_1a83_0b7d(buf);
                        f_8e0f_1172(player, d_432e_45de[player].f15);
                        sprintf(buf, "%04d", player);
                        d_61eb_dbe4 = f_215d_1629(d_61eb_dc64, 1);
                        strcat(d_61eb_dbe4[d_61eb_d654], buf);
                        if (d_61eb_d80e == 3 || !d_432e_45de[player].f15) {
                            switch (d_61eb_d774 = f_215d_0d96(3)) {
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
                        } else if (d_61eb_d80e == 2) {
                            switch (d_61eb_d774 = f_215d_0d96(3)) {
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
                            d_61eb_d774;
                        } else {
                            d_61eb_d9c8 = 0;
                            continue;
                        }
                        f_1a83_0b7d(buf);
                        d_61eb_d9c8 = 0;
                    }
                } else
                    d_61eb_d9c8 = 0;
            } else if (strstr(item, "Insure")) {
                if (*(d_28d4_1958[20] + player) > 0 && *(d_28d4_1958[19] + player) < 27) {
                    f_1a83_0b7d("Insurance refused - player injured");
                    d_61eb_d9c8 = 0;
                } else {
                    d_61eb_db3d = f_8e0f_138d(player);
                    sprintf(buf, "Insurance would cost %ld p/w", d_61eb_db3d);
                    f_1a83_0b7d(buf);
                    if (f_1a83_0c63()) {
                        sprintf(buf, "%s now insured", f_1a83_462c(player));
                        f_1a83_0b7d(buf);
                        d_432e_45de[player].f20 = 1;
                        d_61eb_da04 = -1;
                    } else
                        d_61eb_d9c8 = 0;
                }
            } else if (strstr(item, "Uninsure")) {
                if (f_1a83_0c63()) {
                    sprintf(buf, "%s now uninsured", f_1a83_462c(player));
                    f_1a83_0b7d(buf);
                    d_432e_45de[player].f20 = 0;
                    d_61eb_da04 = -1;
                } else
                    d_61eb_d9c8 = 0;
            } else if (strstr(item, "Renew")) {
                d_61eb_d654 = d_3334_ca6e[*(d_28d4_1958[18] + player)] - 646;
                sprintf(buf, "%04d", player);
                d_61eb_dbe0 = f_215d_1629(d_61eb_dc62, 0);
                d_61eb_da0b = strstr(d_61eb_dbe0[d_61eb_d654], buf) ? 1 : 0;
                if (d_61eb_da0b || d_61eb_da0a || f_ab30_482b(player)) {
                    sprintf(buf, "%s refuses to negotiate", f_1a83_462c(player));
                    f_1a83_0b7d(buf);
                    if (d_61eb_da0a)
                        sprintf(buf, "He %s", d_432e_d32b);
                    else if (f_ab30_482b(player)) {
                        if (d_61eb_dbcc[9][player])
                            strcpy(buf, "He is expected to return home");
                        else
                            strcpy(buf, "He is expected to move to Serie C");
                    }
                    else
                        strcpy(buf, "He may resume talks next week");
                    f_1a83_0b7d(buf);
                    d_61eb_d9c8 = 0;
                } else {
                    sprintf(buf, "%s agrees to negotiate", f_1a83_462c(player));
                    f_1a83_0b7d(buf);
                    f_8e0f_0000(player, d_28d4_1958[0][18 * 1500 + player], d_61eb_d654);
                    d_61eb_da04 = -1;
                }
            } else if (strstr(item, "Increase")) {
                f_8e0f_0e88(player);
                d_61eb_da04 = -1;
            } else if (strstr(item, "Rehab")) {
                f_ab30_0979(player);
                d_61eb_da04 = -1;
            }
        } while (!d_61eb_d9c8);
    } while (d_61eb_da04 != 0);
}
