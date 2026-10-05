/* @at 9e79:0000 */
/* @data 5d51:5eb0 */
/* @module */

/* Overlay 9e79: CM93's overlay a3de (games/cm93/decomp/src/A3DE.C) changed for CM Italia:
 * team helpers (the formations and the tactics, picking the team, players' positions and
 * fitness, the week's match setup, the team choice screen, the squad list and news).
 * Squads are 16 players and tactics 16 (position, flag) pairs (CM93: 14), there are 38
 * clubs in Serie A (0-17) and Serie B (18-37) and 1500 players. */
#include <string.h>
#include <mem.h>
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <fcntl.h>
#include <alloc.h>
#include <bios.h>
#include <conio.h>
#include <ctype.h>
#include <io.h>
#include <sys/stat.h>
#include <math.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
int f_9e79_0000(int x);
void f_9e79_0071(int a, int b);
char f_9e79_0335(int v);
void f_9e79_03b4(void);
void f_9e79_03dd(int a, int b, int c);
void f_9e79_0438(void);
void f_9e79_04ad(void);
void f_9e79_05eb(void);
void f_9e79_06bc(int t);
void f_9e79_08fb(int a, int b);
void f_9e79_0f6c(int t, int k, char c);
void f_9e79_1063(void);
void f_9e79_1103(int n);
void f_9e79_1503(char all);
void f_9e79_163e(char all);
void f_9e79_16c0(int team, char reserves);
void f_9e79_219f(int line);
long f_9e79_2216(int x);
void f_9e79_222f(void);

struct flags_a { unsigned char b0; unsigned f8 : 1; unsigned f9 : 1; unsigned : 6; unsigned : 2; unsigned f18 : 1; unsigned f19 : 1; unsigned : 4; unsigned : 0; unsigned f24 : 1; unsigned : 3; unsigned f28 : 1; unsigned : 1; unsigned f30 : 1; unsigned : 1; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
void f_1646_0f3a(int p);
void f_1646_174b(int p);
char f_1646_2cc9(int x);
float f_1646_2cfd(int x);
unsigned char f_1646_716c(unsigned char c);
unsigned char f_1646_717d(char);
long f_1d5e_0d6a(long n);
void f_1d5e_13a4(void far *a, void far *b, int n);
void far *f_1d5e_1618(int handle, int page);
void f_9915_4ac8(int a, int b);
void f_9915_4d1c(int a, int b);
extern union flags far d_2414_af3c[];
extern char far d_2414_1e28[][40][5];
extern char far d_2414_3810[];
extern char far d_2414_3ae0[];
extern char far d_2414_3c20[];
extern char far d_2414_3db0[];
extern char far d_2414_5460[][38];
extern unsigned char far d_2414_c6ac[][5][16];
extern unsigned char far d_2414_c6ec[][80];
extern unsigned char far d_2414_d8c4[];
extern int far d_2414_eda8[][4][2][30];
extern unsigned char far d_2414_f168[];
extern char far d_3404_0000[][16];
extern int far d_3404_0260[][16];
extern unsigned char far d_3404_0728[];
extern char far d_3404_0720[];
extern int far d_3404_074e[][100];
extern int far d_3404_0e34[][16];
extern unsigned char far d_3404_1334[][3][16];
extern int far d_3404_1ab4;
extern unsigned char far d_3404_1abe[];
extern unsigned char far d_3404_24e6[];
extern long far d_3404_3e4a[][38];
extern int far d_3404_40aa[][38];
extern int far d_3404_4226[];
extern unsigned char far d_3404_443a[][40];
extern unsigned char far d_3404_4552[];
extern unsigned char far d_3404_461a[];
extern unsigned char far d_3404_4642[];
extern unsigned char far d_3404_4782[];
extern unsigned char far d_3c0d_0000[][1500];
extern unsigned char far d_44d7_0000[][1500];
extern unsigned char far d_44d7_6978[];
extern int far d_44d7_9624[][26];
extern int far d_44d7_9ddc[][2][13];
extern int far d_4f37_1200[][2][100];
extern unsigned char far d_4f37_7792[][140];
extern char near *d_5d51_b476[];
extern char near *d_5d51_b4c6[];
extern char d_5d51_d56d;
extern char d_5d51_d56e;
extern int d_5d51_d5fa;
extern int d_5d51_d666;
extern int d_5d51_d66c;
extern int d_5d51_d66e;
extern int d_5d51_d672;
extern int d_5d51_d674;
extern int d_5d51_d790;
extern int d_5d51_d7ce;
extern int d_5d51_d7ea;
extern int d_5d51_d834;
extern int d_5d51_d954;
extern int d_5d51_d958;
extern int d_5d51_d974;
extern int d_5d51_d97e;
extern int d_5d51_d996;
extern int d_5d51_d9b4;
extern int d_5d51_d9b8;
extern int d_5d51_d9ca;
extern int d_5d51_d9cc;
extern int d_5d51_d9e4;
extern int d_5d51_d9f0;
extern int d_5d51_d9fe;
extern int d_5d51_da04;
extern int d_5d51_da0c;
extern int d_5d51_da0e;
extern int d_5d51_da10;
extern int d_5d51_da12;
extern int d_5d51_da14;
extern int d_5d51_da16;
extern int d_5d51_da1a;
extern char (far *d_5d51_da1c)[151];
extern char (far *d_5d51_da20)[151];
extern char far *d_5d51_da24;
extern char (far *d_5d51_da2c)[101];
extern int (far *d_5d51_da34)[2][16];
extern long (far *d_5d51_da44)[38];
extern char far *d_5d51_da48;
extern int d_5d51_dd84;
extern int d_5d51_dd86;
extern int d_5d51_dd88;
extern int d_5d51_dd8c;
extern int d_5d51_dd90;
extern int d_5d51_dd98;
extern int d_5d51_dd9a;
extern char far d_2414_0720[];
extern int far d_3404_0866[][80];
extern unsigned char far d_3404_3b2e[][140];
extern unsigned char far d_3c0d_fe98[][1860];
extern unsigned char far d_44d7_fe98[][1860];
extern int far d_4f37_1208[][2][98];
extern unsigned char far d_4f37_50d2[][140];
extern char far d_2414_1c84[][82][5];
extern int far d_2414_03fc[][16];
extern char far d_2414_fefc[][16];
extern unsigned char far d_2414_0724[];
void f_1646_0bf2(char far *s);
void f_1646_2fa4(int n, char far *title, char far *items);
void f_1646_3686(float x, float y, int bg, int fg, int w, char far *s);
char far *f_1646_4919(int manager, char full);
char far *f_1646_4a20(int player);
void f_1646_4ba0(char far *);
void f_1646_50c5(int a, float x, float y, int c, int d, int e, char far *s);
int f_1646_5602(int a);
void f_1646_5869(int team);
extern char far d_2414_2c9b[];
extern char far d_2414_4fd4[];
extern char far d_2414_5164[];
extern float d_5d51_d549;
extern float d_5d51_d551;
extern char d_5d51_d55d;
extern char d_5d51_d56f;
extern int d_5d51_d628;
extern int d_5d51_d658;
extern int d_5d51_d956;
extern int d_5d51_d9b2;
extern int d_5d51_d9c4;
extern int d_5d51_d9ce;
extern int d_5d51_d9d0;
extern int d_5d51_d9de;
extern int d_5d51_da0a;
char far *f_1646_2f4b(int x, char c);
int f_1646_1f63(int player);
char far *f_1646_470f(int player);
char far *f_1646_48c0(int player);
char f_1646_6ae2(int player, char c);
unsigned f_1d5e_0b1c(char far *s, char far *set);
extern char far d_2414_2c4c[];
extern char far d_2414_3426[];
extern char far d_2414_4494[];
extern char far d_2414_4534[];
extern char far d_2414_4674[];
extern unsigned char far d_2414_c6dc[][80];
extern int far d_2414_ed6c[];
extern int far d_3404_691c[];
extern char far *far d_56d9_03f9[];
extern char far *far d_56d9_13b9[];
extern float d_5d51_d4b5;
extern float d_5d51_d4b9;
extern float d_5d51_d539;
extern int d_5d51_d656;
extern int d_5d51_d828;
extern int d_5d51_d92c;
extern int d_5d51_d9bc;
extern int d_5d51_d9c8;
void f_1646_13f1(int player);
void f_1646_5bcb(int team, char far *title, char far *text);
int f_1646_6aa9(int x);
int f_1d5e_1308(int a, int b);
int f_1d5e_136a(int a, int b);
void f_9915_138e(int player, int a, int b);
void f_9915_168a(int n);
extern char d_5d51_d586;
extern int d_5d51_d692;
extern int d_5d51_d934;
extern int d_5d51_da06;
extern unsigned char far d_3404_2f0e[];
extern int far d_3404_43ee[];
int f_1d5e_0c17(void);
extern char far *far d_56d9_0000[];

char d_5d51_5eb0[9][32] = {      /* 16 (position, flag) pairs per tactic */
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 5, 1, 7, 0, 10, 0, 10, 0, 6, 1, 4, 0, 7, 0, 10, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 8, 2, 7, 0, 10, 0, 10, 0, 9, 2, 4, 0, 7, 0, 10, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 1, 3, 1, 4, 0, 4, 0, 4, 0, 5, 0, 7, 0, 10, 0, 10, 0, 6, 0, 4, 0, 7, 0, 10, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 1, 3, 1, 11, 0, 4, 0, 4, 0, 5, 0, 7, 0, 10, 0, 10, 0, 6, 0, 4, 0, 7, 0, 10, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 5, 0, 6, 0, 10, 0, 10, 0, 10, 0, 4, 0, 7, 0, 10, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 1, 3, 1, 4, 0, 4, 0, 4, 0, 8, 0, 7, 0, 10, 0, 7, 0, 9, 0, 4, 0, 7, 0, 10, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 5, 0, 7, 0, 10, 0, 7, 1, 6, 0, 4, 0, 7, 0, 10, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 12, 0, 5, 0, 7, 0, 10, 0, 10, 0, 6, 0, 4, 0, 7, 0, 10, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 5, 0, 13, 0, 10, 0, 10, 0, 6, 0, 4, 0, 7, 0, 10, 0, 10, 0, 1, 0 }
};

int f_9e79_0000(int x)
{
    return d_3404_461a[d_3404_0728[x]] * 2 + (x < 18 ? d_5d51_da0e : d_5d51_da0c)
           - d_3404_461a[d_3404_0728[x]] - d_3404_4642[d_3404_0728[x]];
}

void f_9e79_0071(int a, int b)
{
    d_5d51_d56e = f_1646_717d(a) < b - 1;
    d_5d51_d674 = -1;
    for (d_5d51_d9cc = (b - 1) * 18; d_5d51_d9cc <= (b - 1) * 18 + f_1646_716c(b - 1) - 1; d_5d51_d9cc++) {
        if (f_1646_2cc9(d_5d51_d9cc) == 0) {
            d_5d51_d7ea = f_1646_2cfd(d_5d51_d9cc) + f_1d5e_0d6a(2) - f_1d5e_0d6a(2);
            if (d_5d51_d56e) {
                if (d_5d51_d7ea > d_5d51_d672 || d_5d51_d674 == -1) {
                    d_5d51_d672 = d_5d51_d7ea;
                    d_5d51_d674 = d_5d51_d9cc;
                }
            } else {
                if (d_5d51_d7ea < d_5d51_d672 || d_5d51_d674 == -1) {
                    d_5d51_d672 = d_5d51_d7ea;
                    d_5d51_d674 = d_5d51_d9cc;
                }
            }
        }
    }
    f_1d5e_13a4((void *)&d_5d51_b476[a], (void *)&d_5d51_b476[d_5d51_d674], 2);
    f_1d5e_13a4((void *)&d_5d51_b4c6[a], (void *)&d_5d51_b4c6[d_5d51_d674], 2);
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 71; d_5d51_d9fe++)
        f_1d5e_13a4(&d_3404_443a[d_5d51_d9fe][a], &d_3404_443a[d_5d51_d9fe][d_5d51_d674], 1);
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 5; d_5d51_d9fe++)
        f_1d5e_13a4(&d_3404_40aa[d_5d51_d9fe][a], &d_3404_40aa[d_5d51_d9fe][d_5d51_d674], 2);
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 3; d_5d51_d9fe++)
        f_1d5e_13a4(&d_3404_3e4a[d_5d51_d9fe][a], &d_3404_3e4a[d_5d51_d9fe][d_5d51_d674], 4);
    for (d_5d51_d9b4 = 0x286; d_5d51_d9b4 <= d_5d51_d958 + 0x285; d_5d51_d9b4++) {
        if (d_3404_1abe[d_5d51_d9b4] == a)
            d_3404_1abe[d_5d51_d9b4] = d_5d51_d674;
        else if (d_3404_1abe[d_5d51_d9b4] == d_5d51_d674)
            d_3404_1abe[d_5d51_d9b4] = a;
    }
    f_1d5e_13a4(&d_4f37_7792[0][a], &d_4f37_7792[0][d_5d51_d674], 1);
    f_1d5e_13a4(&d_4f37_7792[1][a], &d_4f37_7792[1][d_5d51_d674], 1);
}

char f_9e79_0335(int v)
{
    d_5d51_d56d = 0;
    for (d_5d51_d996 = 4; d_5d51_d996 <= 6; d_5d51_d996++)
        for (d_5d51_d834 = 0; d_5d51_d834 <= 3; d_5d51_d834++)
            if ((d_5d51_d834 < 2 || d_5d51_d996 == 4) && d_3404_074e[d_5d51_d996][d_5d51_d834] == v) {
                d_5d51_d66e = d_5d51_d996;
                d_5d51_d66c = d_5d51_d834;
                d_5d51_d56d = -1;
                d_5d51_d834 = 3;
                d_5d51_d996 = 6;
            }
    return d_5d51_d56d;
}

void f_9e79_03b4(void)
{
    d_5d51_da04 = 1;
    memset(d_3404_0720, 1, 4);
    d_5d51_d5fa = 0;
}

void f_9e79_03dd(int a, int b, int c)
{
    d_5d51_d666 = -32;
    for (d_5d51_d974 = a; d_5d51_d974 <= b; d_5d51_d974++)
        for (d_5d51_d9ca = 0; d_5d51_d9ca <= 1; d_5d51_d9ca++)
            d_4f37_1200[d_5d51_d974][d_5d51_d9ca][c] = d_5d51_d666;
}

void f_9e79_0438(void)
{
    for (d_5d51_d9f0 = 0; d_5d51_d9f0 <= d_5d51_da1a - 1; d_5d51_d9f0++) {
        d_3c0d_0000[21][d_5d51_d9f0] = 0;
        d_3c0d_0000[22][d_5d51_d9f0] = 0;
    }
    d_5d51_da48 = f_1d5e_1618(d_5d51_dd9a, 1);
    for (d_5d51_d9b4 = 0; d_5d51_d9b4 <= d_5d51_d958 + 0x285; d_5d51_d9b4++)
        ((int far *)(d_5d51_da48 + 2600))[d_5d51_d9b4] = 0;
}

void f_9e79_04ad(void)
{
    d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
    for (d_5d51_d9cc = 0; d_5d51_d9cc <= 37; d_5d51_d9cc++) {
        for (d_5d51_d97e = 0; d_5d51_d97e <= 13; d_5d51_d97e++)
            if (d_5d51_d97e != 1)
                d_5d51_da44[d_5d51_d97e][d_5d51_d9cc] = 0;
        d_3404_4782[d_5d51_d9cc] = 0;
    }
    for (d_5d51_d954 = 0; d_5d51_d954 <= 3; d_5d51_d954++) {
        d_5d51_da24 = f_1d5e_1618(d_5d51_dd88, 1);
        strcpy(d_5d51_da24 + d_5d51_d954 * 151, "");
        d_5d51_da20 = f_1d5e_1618(d_5d51_dd86, 1);
        strcpy(d_5d51_da20[d_5d51_d954], "");
        d_5d51_da1c = f_1d5e_1618(d_5d51_dd84, 1);
        strcpy(d_5d51_da1c[d_5d51_d954], "");
    }
    d_3404_1ab4 = -1;
}

void f_9e79_05eb(void)
{
    unsigned i, j, k, l;

    for (d_5d51_d9cc = 0; d_5d51_d9cc < 38; d_5d51_d9cc++)
        d_2414_5460[0][d_5d51_d9cc] = 0;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 4; j++)
            for (k = 0; k < 2; k++)
                for (l = 0; l < 30; l++)
                    d_2414_eda8[i][j][k][l] = -2;
    strcpy(d_2414_3db0, "");
    strcpy(d_2414_3c20, "");
    strcpy(d_2414_3ae0, "");
    strcpy(d_2414_3810, "");
    d_5d51_d790 = -1;
}

void f_9e79_06bc(int t)
{
    int n;

    if (d_5d51_da04 == 1 || (d_5d51_da04 > 1 && (t == d_5d51_da16 || t == d_5d51_da14
                                                 || t == d_5d51_da12 || t == d_5d51_da10)))
        f_9e79_0f6c(t, d_3404_24e6[d_3404_4226[t]] % 16, 0);
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= d_3404_4552[t] - 1; d_5d51_d9fe++) {
        d_2414_af3c[d_44d7_9624[t][d_5d51_d9fe]].w.f7 = 0;
        d_44d7_0000[23][d_44d7_9624[t][d_5d51_d9fe]] = 3;
    }
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 15; d_5d51_d9fe++)
        d_2414_c6ec[t][d_5d51_d9fe] = 0;
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 15; d_5d51_d9fe++) {
        n = 1499;
        d_3404_0e34[t][d_5d51_d9fe] = n;
        if (d_5d51_d9fe <= 12) {
            d_44d7_9ddc[t][0][d_5d51_d9fe] = n;
            d_44d7_9ddc[t][1][d_5d51_d9fe] = n;
        }
    }
    if (f_1646_2cc9(t) == 0) {
        n = 1498;
        for (d_5d51_d9e4 = 0; d_5d51_d9e4 <= 15; d_5d51_d9e4++) {
            d_3404_0e34[t][d_5d51_d9e4] = n;
            d_2414_af3c[n].w.f7 = 1;
            d_44d7_6978[n] = t;
            f_1646_0f3a(n);
        }
    }
    for (d_5d51_d7ce = 0; d_5d51_d7ce <= 1; d_5d51_d7ce++) {
        n = 1498;
        for (d_5d51_d9e4 = 0; d_5d51_d9e4 <= 10; d_5d51_d9e4++) {
            d_44d7_9ddc[t][d_5d51_d7ce][d_5d51_d9e4] = n;
            d_44d7_6978[n] = t;
            d_44d7_0000[23][n] = d_5d51_d7ce + 1;
            f_1646_174b(n);
        }
    }
}

void f_9e79_08fb(int a, int b)
{
    f_1d5e_13a4((void *)&d_5d51_b476[a], (void *)&d_5d51_b476[b], 2);
    f_1d5e_13a4((void *)&d_5d51_b4c6[a], (void *)&d_5d51_b4c6[b], 2);
    d_5d51_da2c = f_1d5e_1618(d_5d51_dd8c, 1);
    f_1d5e_13a4((void *)d_5d51_da2c[a], (void *)d_5d51_da2c[b], 101);
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 71; d_5d51_d9fe++) {
        f_1d5e_13a4((void *)&d_3404_443a[d_5d51_d9fe][a], (void *)&d_3404_443a[d_5d51_d9fe][b], 1);
        if (d_5d51_d9fe < 12) {
            f_1d5e_13a4((void *)&d_3404_40aa[d_5d51_d9fe][a], (void *)&d_3404_40aa[d_5d51_d9fe][b], 2);
            if (d_5d51_d9fe < 8) {
                f_1d5e_13a4((void *)&d_2414_5460[d_5d51_d9fe][a], (void *)&d_2414_5460[d_5d51_d9fe][b], 1);
                if (d_5d51_d9fe < 4) {
                    f_1d5e_13a4((void *)&d_3404_3e4a[d_5d51_d9fe][a], (void *)&d_3404_3e4a[d_5d51_d9fe][b], 4);
                    if (d_5d51_d9fe < 2)
                        f_1d5e_13a4((void *)d_2414_1e28[d_5d51_d9fe][a], (void *)d_2414_1e28[d_5d51_d9fe][b], 5);
                }
            }
        }
    }
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 15; d_5d51_d9fe++) {
        f_1d5e_13a4((void *)&d_3404_0260[a][d_5d51_d9fe], (void *)&d_3404_0260[b][d_5d51_d9fe], 2);
        f_1d5e_13a4((void *)&d_3404_0000[a][d_5d51_d9fe], (void *)&d_3404_0000[b][d_5d51_d9fe], 1);
        for (d_5d51_d9b8 = 0; d_5d51_d9b8 <= 3; d_5d51_d9b8++) {
            f_1d5e_13a4((void *)&d_2414_c6ac[a][d_5d51_d9b8][d_5d51_d9fe],
                        (void *)&d_2414_c6ac[b][d_5d51_d9b8][d_5d51_d9fe], 1);
            if (d_5d51_d9b8 <= 1) {
                d_5d51_da34 = f_1d5e_1618(d_5d51_dd90, 1);
                f_1d5e_13a4((void *)&d_5d51_da34[a][d_5d51_d9b8][d_5d51_d9fe],
                            (void *)&d_5d51_da34[b][d_5d51_d9b8][d_5d51_d9fe], 2);
            }
        }
    }
    f_9915_4ac8(a, b);
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 15; d_5d51_d9fe++)
        for (d_5d51_d9b8 = 0; d_5d51_d9b8 <= 2; d_5d51_d9b8++)
            f_1d5e_13a4((void *)&d_3404_1334[a][d_5d51_d9b8][d_5d51_d9fe],
                        (void *)&d_3404_1334[b][d_5d51_d9b8][d_5d51_d9fe], 1);
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 37; d_5d51_d9fe++)
        for (d_5d51_d9b8 = 0; d_5d51_d9b8 <= 7; d_5d51_d9b8++) {
            if (d_3404_074e[d_5d51_d9b8][d_5d51_d9fe] == a)
                d_3404_074e[d_5d51_d9b8][d_5d51_d9fe] = b;
            else if (d_3404_074e[d_5d51_d9b8][d_5d51_d9fe] == b)
                d_3404_074e[d_5d51_d9b8][d_5d51_d9fe] = a;
        }
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 1; d_5d51_d9fe++)
        f_1d5e_13a4((void *)&d_4f37_7792[d_5d51_d9fe][a], (void *)&d_4f37_7792[d_5d51_d9fe][b], 1);
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= d_5d51_d958 + 0x285; d_5d51_d9fe++) {
        if (d_3404_1abe[d_5d51_d9fe] == a)
            d_3404_1abe[d_5d51_d9fe] = b;
        else if (d_3404_1abe[d_5d51_d9fe] == b)
            d_3404_1abe[d_5d51_d9fe] = a;
    }
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= d_5d51_da1a - 1; d_5d51_d9fe++) {
        if (d_44d7_0000[18][d_5d51_d9fe] == a)
            d_44d7_0000[18][d_5d51_d9fe] = b;
        else if (d_44d7_0000[18][d_5d51_d9fe] == b)
            d_44d7_0000[18][d_5d51_d9fe] = a;
        if (d_3c0d_0000[10][d_5d51_d9fe] == a)
            d_3c0d_0000[10][d_5d51_d9fe] = b;
        else if (d_3c0d_0000[10][d_5d51_d9fe] == b)
            d_3c0d_0000[10][d_5d51_d9fe] = a;
    }
    f_9915_4d1c(a, b);
    if (d_5d51_da16 == a)
        d_5d51_da16 = b;
    else if (d_5d51_da16 == b)
        d_5d51_da16 = a;
    if (d_5d51_da14 == a)
        d_5d51_da14 = b;
    else if (d_5d51_da14 == b)
        d_5d51_da14 = a;
    if (d_5d51_da12 == a)
        d_5d51_da12 = b;
    else if (d_5d51_da12 == b)
        d_5d51_da12 = a;
    if (d_5d51_da10 == a)
        d_5d51_da10 = b;
    else if (d_5d51_da10 == b)
        d_5d51_da10 = a;
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 0x8b; d_5d51_d9fe++) {
        if (d_2414_f168[d_5d51_d9fe] == a)
            d_2414_f168[d_5d51_d9fe] = b;
        else if (d_2414_f168[d_5d51_d9fe] == b)
            d_2414_f168[d_5d51_d9fe] = a;
    }
    f_1d5e_13a4((void *)&d_2414_d8c4[a], (void *)&d_2414_d8c4[b], 1);
}

void f_9e79_0f6c(int t, int k, char c)
{
    char far *p;

    switch (k) {
    case 0: p = d_5d51_5eb0[0]; break;
    case 1: p = d_5d51_5eb0[1]; break;
    case 2: p = d_5d51_5eb0[3]; break;
    case 3: p = d_5d51_5eb0[2]; break;
    case 4: p = d_5d51_5eb0[4]; break;
    case 5: p = d_5d51_5eb0[5]; break;
    case 6: p = d_5d51_5eb0[6]; break;
    case 7: p = d_5d51_5eb0[7]; break;
    case 8: p = d_5d51_5eb0[8]; break;
    }
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 15; d_5d51_d9fe++) {
        if (c == 0) {
            d_3404_1334[t][0][d_5d51_d9fe] = *p++;
            d_3404_1334[t][2][d_5d51_d9fe] = *p++;
            d_3404_1334[t][1][d_5d51_d9fe] = 0;
        }
    }
}

void f_9e79_1063(void)
{
    unsigned char n[38];

    memset(n, 0, 38);
    for (d_5d51_d9f0 = 0; d_5d51_d9f0 <= d_5d51_da1a - 1; d_5d51_d9f0++) {
        d_5d51_d9ca = d_44d7_6978[d_5d51_d9f0];
        d_44d7_9624[d_5d51_d9ca][n[d_5d51_d9ca]] = d_5d51_d9f0;
        n[d_5d51_d9ca]++;
        if (n[d_5d51_d9ca] > 26)
        {
            f_1646_0bf2(">26");
            while (f_1d5e_0c17() == 0)
                ;
        }
    }
}

void f_9e79_1103(int n)
{
    char buf[320];
    char item[80];
    unsigned i;

    d_5d51_d9ca = -1;
    d_5d51_d55d = 0;
    if (n == -1 && d_5d51_d956 > 0) {
        f_9e79_163e(0);
        strcpy(d_2414_5164, "");
        for (i = 1; i <= strlen(&d_2414_2c9b[1]); i += 3) {
            sprintf(buf, "%.3s", &d_2414_2c9b[i]);
            d_5d51_d9b2 = atol(buf);
            strcpy(d_2414_4fd4, d_5d51_b476[d_3404_1abe[d_5d51_d9b2]]);
            sprintf(buf, "%.13s", d_2414_4fd4);
            sprintf(item, "%s|", buf);
            strcat(d_2414_5164, item);
        }
        sprintf(buf, "*Exit|%sAnother Team|", d_2414_5164);
        f_1646_2fa4(0, "Team choice", buf);
        if (d_5d51_da0a == 0)
            d_5d51_d55d = -1;
        else if (d_5d51_da0a >= 1 && d_5d51_da0a <= d_5d51_d956) {
            sprintf(buf, "%.3s", &d_2414_2c9b[d_5d51_da0a * 3 - 2]);
            d_5d51_d9ca = d_3404_1abe[atol(buf)];
            d_5d51_d55d = -1;
        }
    }
    if (d_5d51_d55d == 0) {
        d_5d51_d9c4 = 0;
        if (n >= 0)
            sprintf(buf, "Player %s Team", f_1646_4a20(n + 1));
        else
            strcpy(buf, "Team Choice");
        f_1646_4ba0(buf);
        f_1646_3686(1.5, 3.75, 1, 2, 0x94, " SERIE A");
        f_1646_3686(20.25, 3.75, 1, 2, 0x94, " SERIE B");
        d_5d51_d9de = 8;
        d_5d51_d9ce = 14;
        for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 37; d_5d51_d9d0++) {
            if (d_5d51_d9d0 == 18) {
                d_5d51_d9de = 12;
                d_5d51_d9ce = 4;
            }
            if (d_5d51_d9d0 <= 17) {
                d_5d51_d549 = 1.5;
                d_5d51_d551 = d_5d51_d9d0 + 5;
            } else {
                d_5d51_d549 = 20.25;
                d_5d51_d551 = d_5d51_d9d0 - 13;
            }
            sprintf(buf, " %s", (char far *)d_5d51_b476[d_5d51_d9d0]);
            f_1646_50c5(0, d_5d51_d549, d_5d51_d551, 1 - f_1646_2cc9(d_5d51_d9d0) * 5, d_5d51_d9de, 0x94, buf);
            f_1d5e_13a4(&d_5d51_d9de, &d_5d51_d9ce, 2);
        }
        f_1646_3686(1.5, 23.0, 1, 8, 0x94, "");
        f_1646_3686(1.5, 24.0, 1, 14, 0x94, "");
        if (n > -1 && d_5d51_d56f == 0)
            for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 37; d_5d51_d9d0++)
                if (f_1646_2cc9(d_5d51_d9d0))
                    f_1646_5869(d_5d51_d9d0 + 1);
        do
            d_5d51_da0a = f_1646_5602(0);
        while (d_5d51_da0a <= 0);
        d_5d51_d9ca = d_5d51_da0a - 1;
    }
}

void f_9e79_1503(char all)
{
    char buf[320];
    unsigned i;

    d_5d51_d628 = -1;
    f_9e79_163e(all);
    if (strlen(&d_2414_2c9b[1]) == 3)
        d_5d51_d628 = atol(&d_2414_2c9b[1]);
    else if (strlen(&d_2414_2c9b[1]) > 3) {
        strcpy(d_2414_5164, "*Exit|");
        for (i = 1; i <= strlen(&d_2414_2c9b[1]); i += 3) {
            sprintf(buf, "%.3s", &d_2414_2c9b[i]);
            d_5d51_d9b2 = atol(buf);
            sprintf(buf, "%s|", f_1646_4919(d_5d51_d9b2, 0));
            strcat(d_2414_5164, buf);
        }
        f_1646_2fa4(0, "Choose manager", d_2414_5164);
        if (d_5d51_da0a > 0) {
            sprintf(buf, "%.3s", &d_2414_2c9b[d_5d51_da0a * 3 - 2]);
            d_5d51_d628 = atol(buf);
        }
    }
}

void f_9e79_163e(char all)
{
    char buf[320];

    strcpy(&d_2414_2c9b[1], "");
    for (d_5d51_d658 = 0x286; d_5d51_d658 <= d_5d51_d958 + 0x285; d_5d51_d658++)
        if ((all == 0 && d_3404_1abe[d_5d51_d658] < 0xff) || all != 0) {
            sprintf(buf, "%03d", d_5d51_d658);
            strcat(&d_2414_2c9b[1], buf);
        }
}

/* The squad list: the team's players (or its reserves) sorted by surname, one per line,
   with their positions, sides, status and fitness. */
void f_9e79_16c0(int team, char reserves)
{
    unsigned char n;
    volatile unsigned char c;   /* kept in memory, as in the original (-Oe would put it in DL) */
    char buf[80];
    char a[40];
    char b[40];
    char colour;

    n = reserves == 0 ? d_3404_4552[team] : 16;
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= n - 2; d_5d51_d9d0++)
        for (d_5d51_d9fe = d_5d51_d9d0 + 1; d_5d51_d9fe <= n - 1; d_5d51_d9fe++) {
            if (reserves == 0) {
                if (strcmp(f_1646_48c0(d_44d7_9624[team][d_5d51_d9d0]),
                           f_1646_48c0(d_44d7_9624[team][d_5d51_d9fe])) > 0)
                    f_1d5e_13a4(&d_44d7_9624[team][d_5d51_d9d0], &d_44d7_9624[team][d_5d51_d9fe], 2);
            } else {
                d_5d51_da34 = f_1d5e_1618(d_5d51_dd90, 0);
                strcpy(a, d_56d9_13b9[d_5d51_da34[team][1][d_5d51_d9d0]]);
                strcpy(b, d_56d9_13b9[d_5d51_da34[team][1][d_5d51_d9fe]]);
                if (strcmp(a, b) > 0) {
                    d_5d51_da34 = f_1d5e_1618(d_5d51_dd90, 1);
                    f_1d5e_13a4(&d_5d51_da34[team][1][d_5d51_d9d0], &d_5d51_da34[team][1][d_5d51_d9fe], 2);
                }
            }
        }
    d_5d51_d656 = n - 1;
    if (team < 18)
        d_5d51_d9bc = 8;
    else
        d_5d51_d9bc = 12;
    d_5d51_d92c = 0;
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 25; d_5d51_d9d0++) {
        f_9e79_219f(d_5d51_d9d0);
        if (d_5d51_d9d0 <= d_5d51_d656) {
            d_5d51_d9c8 = 18;
            if (reserves == 0) {
                d_5d51_d9f0 = d_44d7_9624[team][d_5d51_d9d0];
                strcpy(d_2414_3426, "");
                strcpy(d_2414_2c4c, "");
                strcpy(d_2414_4494, "");
                if (d_2414_af3c[d_5d51_d9f0].w.f0)
                    strcpy(d_2414_3426, "G");
                if (d_2414_af3c[d_5d51_d9f0].w.f1)
                    strcat(d_2414_3426, "D");
                if (d_2414_af3c[d_5d51_d9f0].w.f2)
                    strcat(d_2414_3426, "M");
                if (d_2414_af3c[d_5d51_d9f0].w.f3)
                    strcat(d_2414_3426, "A");
                if (d_2414_af3c[d_5d51_d9f0].w.f4)
                    strcpy(d_2414_2c4c, "R");
                if (d_2414_af3c[d_5d51_d9f0].w.f5)
                    strcat(d_2414_2c4c, "L");
                if (d_2414_af3c[d_5d51_d9f0].w.f6)
                    strcat(d_2414_2c4c, "C");
                sprintf(d_2414_4674, "%s %s", d_2414_3426, d_2414_2c4c);
                if (d_44d7_0000[20][d_5d51_d9f0] > 0) {
                    if (d_44d7_0000[19][d_5d51_d9f0] == 50)
                        strcpy(d_2414_4494, "ct");
                    else if (d_44d7_0000[19][d_5d51_d9f0] == 27)
                        strcpy(d_2414_4494, "su");
                    else if (d_44d7_0000[19][d_5d51_d9f0] != 51)
                        strcpy(d_2414_4494, "ij");
                } else if (d_2414_af3c[d_5d51_d9f0].w.f7) {
                    c = f_1646_1f63(d_5d51_d9f0) + 1;
                    strcpy(d_2414_4494, f_1646_2f4b(c, 1));
                    d_5d51_d9c8 = 33;
                }
                if (f_1d5e_0b1c(f_1646_470f(d_5d51_d9f0), " ") > 0)
                    sprintf(d_2414_4534, "%s %c", f_1646_48c0(d_5d51_d9f0), *f_1646_470f(d_5d51_d9f0));
                else
                    strcpy(d_2414_4534, f_1646_48c0(d_5d51_d9f0));
                if (d_2414_af3c[d_5d51_d9f0].w.f8 && !d_2414_af3c[d_5d51_d9f0].w.f10)
                    sprintf(buf, "L %s", d_2414_4534);
                else if (d_2414_af3c[d_5d51_d9f0].w.f8 && d_2414_af3c[d_5d51_d9f0].w.f10)
                    sprintf(buf, "R %s", d_2414_4534);
                else if (d_3404_691c[d_5d51_d9f0] == 0)
                    sprintf(buf, "C %s", d_2414_4534);
                else if (f_1646_6ae2(d_5d51_d9f0, -1)) {
                    if (d_5d51_d828 > 2 || d_3c0d_0000[14][d_5d51_d9f0] > 0)
                        sprintf(buf, "U %s", d_2414_4534);
                    else
                        sprintf(buf, "  %s", d_2414_4534);
                } else
                    sprintf(buf, "  %s", d_2414_4534);
                strcpy(d_2414_4534, buf);
                f_1646_3686(d_5d51_d539, d_5d51_d551, d_5d51_d9c8 / 16, d_5d51_d9c8 % 16, 12, d_2414_4494);
                if (d_3c0d_0000[7][d_5d51_d9f0] < 255)
                    colour = 6;
                else if (d_2414_af3c[d_5d51_d9f0].w.f13)
                    colour = team < 20 ? 4 : 5;
                else
                    colour = 1;
                d_2414_4534[15] = 0;
                f_1646_50c5(0, d_5d51_d4b9, d_5d51_d551, colour, d_5d51_d9bc, 0x5a, d_2414_4534);
                f_1646_3686(d_5d51_d4b5, d_5d51_d551, 2, 6, 0x2b, d_2414_4674);
                d_2414_ed6c[d_5d51_d9d0] = d_5d51_d9f0;
                d_5d51_d92c++;
            } else {
                if (d_2414_c6ac[team][0][d_5d51_d9d0] == 1)
                    strcpy(d_2414_3426, " GK");
                else if (d_2414_c6ac[team][0][d_5d51_d9d0] == 2)
                    strcpy(d_2414_3426, " DEF");
                else if (d_2414_c6ac[team][0][d_5d51_d9d0] == 3)
                    strcpy(d_2414_3426, " MID");
                else if (d_2414_c6ac[team][0][d_5d51_d9d0] == 4)
                    strcpy(d_2414_3426, " ATT");
                strcpy(d_2414_4494, "");
                if (d_2414_c6dc[team][d_5d51_d9d0] > 0)
                    strcpy(d_2414_4494, "na");
                else if (d_2414_c6ec[team][d_5d51_d9d0]) {
                    c = f_1646_1f63(team * 20 + d_5d51_d9d0 + 3000) + 1;
                    d_5d51_d9c8 = 33;
                    strcpy(d_2414_4494, f_1646_2f4b(c, 1));
                }
                f_1646_3686(d_5d51_d539, d_5d51_d551, d_5d51_d9c8 / 16, d_5d51_d9c8 % 16, 12, d_2414_4494);
                d_5d51_da34 = f_1d5e_1618(d_5d51_dd90, 0);
                strcpy(buf, d_56d9_0000[d_5d51_da34[team][0][d_5d51_d9d0]]);
                sprintf(d_2414_4534, "  %s %c", d_56d9_13b9[d_5d51_da34[team][1][d_5d51_d9d0]], buf[0]);
                f_1646_50c5(0, d_5d51_d4b9, d_5d51_d551, 1, d_5d51_d9bc, 0x5a, d_2414_4534);
                f_1646_3686(d_5d51_d4b5, d_5d51_d551, 2, 6, 0x2b, d_2414_3426);
                d_2414_ed6c[d_5d51_d9d0] = team * 20 + d_5d51_d9d0 + 3000;
                d_5d51_d92c++;
            }
        } else {
            f_1646_3686(d_5d51_d539, d_5d51_d551, 1, 2, 12, "");
            f_1646_3686(d_5d51_d4b9, d_5d51_d551, 1, d_5d51_d9bc, 0x5a, "");
            f_1646_3686(d_5d51_d4b5, d_5d51_d551, 2, 6, 0x2b, "");
        }
        if (d_5d51_d9bc == 12)
            d_5d51_d9bc = 4;
        else if (d_5d51_d9bc == 4)
            d_5d51_d9bc = 12;
        else if (d_5d51_d9bc == 8)
            d_5d51_d9bc = 14;
        else if (d_5d51_d9bc == 14)
            d_5d51_d9bc = 8;
    }
}

void f_9e79_219f(int line)
{
    if (line < 13) {
        d_5d51_d539 = 1.375;
        d_5d51_d4b9 = 3.125;
        d_5d51_d4b5 = 14.625;
        d_5d51_d551 = line + 6.5;
    } else {
        d_5d51_d539 = 37.375;
        d_5d51_d4b9 = 20.25;
        d_5d51_d4b5 = 31.75;
        d_5d51_d551 = line - 13 + 6.5;
    }
}

long f_9e79_2216(int x)
{
    if (x <= 17)
        return 500000L;
    return 125000L;
}

void f_9e79_222f(void)
{
    unsigned char i;
    unsigned char j;
    char injured;
    unsigned char c;
    char title[80];
    char text[180];

    for (d_5d51_d9f0 = 0; d_5d51_d9f0 <= d_5d51_da1a - 1; d_5d51_d9f0++) {
        injured = f_1646_2cc9(d_44d7_0000[18][d_5d51_d9f0]);
        if (injured == 0) {
            d_5d51_d9c4 = f_1646_717d(d_44d7_0000[18][d_5d51_d9f0]) + 1;
            if (d_2414_af3c[d_5d51_d9f0].w.f20 == 0) {
                if (d_44d7_0000[23][d_5d51_d9f0] == 1 && d_5d51_d9c4 == 0 && d_44d7_0000[20][d_5d51_d9f0] == 0)
                    d_2414_af3c[d_5d51_d9f0].w.f20 = 1;
            } else if ((d_44d7_0000[23][d_5d51_d9f0] > 1 || d_5d51_d9c4 > 0) && d_2414_af3c[d_5d51_d9f0].w.f17 == 0)
                d_2414_af3c[d_5d51_d9f0].w.f20 = 0;
        }
        if (d_44d7_0000[20][d_5d51_d9f0] > 0 && d_44d7_0000[19][d_5d51_d9f0] < 27) {
            c = d_3404_2f0e[d_3404_43ee[d_44d7_0000[18][d_5d51_d9f0]]] / 10 + 40;
            if (d_2414_af3c[d_5d51_d9f0].w.f25)
                c = f_1d5e_136a(d_44d7_0000[21][d_5d51_d9f0], 80);
            else if (d_2414_af3c[d_5d51_d9f0].w.f26)
                c = f_1d5e_136a(d_44d7_0000[21][d_5d51_d9f0], 70);
            else if (d_2414_af3c[d_5d51_d9f0].w.f27)
                c = f_1d5e_136a(d_44d7_0000[21][d_5d51_d9f0], 65);
            d_44d7_0000[21][d_5d51_d9f0] -= f_1d5e_0d6a(3) + 3;
            if (d_44d7_0000[21][d_5d51_d9f0] < c)
                d_44d7_0000[21][d_5d51_d9f0] = c;
        }
        if (d_44d7_0000[21][d_5d51_d9f0] < 100 && (d_44d7_0000[20][d_5d51_d9f0] == 0
                || d_44d7_0000[20][d_5d51_d9f0] > 0 && d_44d7_0000[19][d_5d51_d9f0] == 27)) {
            d_44d7_0000[21][d_5d51_d9f0] += (100 - d_44d7_0000[21][d_5d51_d9f0]) / 2 + f_1d5e_0d6a(5);
            if (d_44d7_0000[21][d_5d51_d9f0] > 100)
                d_44d7_0000[21][d_5d51_d9f0] = 100;
            if (injured == 0 && d_2414_af3c[d_5d51_d9f0].w.f7 == 0 && d_44d7_0000[20][d_5d51_d9f0] == 0
                    && d_44d7_0000[21][d_5d51_d9f0] > 90 && d_5d51_d586 == 0)
                f_1646_13f1(d_5d51_d9f0);
        }
        if (d_44d7_0000[20][d_5d51_d9f0] > 0 && d_44d7_0000[19][d_5d51_d9f0] < 27) {
            d_5d51_d934 = d_2414_af3c[d_5d51_d9f0].w.f17 == 1 ? 0 : 1;
            if (d_44d7_0000[20][d_5d51_d9f0] >= 10)
                d_5d51_d934 = d_5d51_d934 + (f_1d5e_0d6a(10) == 0);
            d_44d7_0000[20][d_5d51_d9f0] = f_1d5e_1308(d_44d7_0000[20][d_5d51_d9f0] - d_5d51_d934, 0);
            if (d_44d7_0000[20][d_5d51_d9f0] == 0)
                f_9915_168a(d_5d51_d9f0);
        } else if (d_44d7_0000[19][d_5d51_d9f0] >= 28 && d_44d7_0000[19][d_5d51_d9f0] < 50 && d_5d51_da06 > 12)
            f_9915_138e(d_5d51_d9f0, 27, d_44d7_0000[19][d_5d51_d9f0] - 27);
        if (d_5d51_d586)
            continue;
        d_3c0d_0000[11][d_5d51_d9f0] -= d_2414_af3c[d_5d51_d9f0].w.f8 && d_5d51_da06 <= 12;
        if (f_1646_6ae2(d_5d51_d9f0, -1)) {
            d_3c0d_0000[14][d_5d51_d9f0] += d_2414_af3c[d_5d51_d9f0].w.f8 == 0 ? 1 : 0;
            d_3c0d_0000[15][d_5d51_d9f0] = 0;
        } else {
            d_3c0d_0000[15][d_5d51_d9f0] += d_2414_af3c[d_5d51_d9f0].w.f8 ? 1 : 0;
            d_3c0d_0000[14][d_5d51_d9f0] = 0;
        }
        d_5d51_d692 = d_3404_691c[d_5d51_d9f0];
        if (d_5d51_d692 / 100 == d_5d51_da04 && f_1646_6aa9(d_5d51_da06) == d_5d51_d692 % 100) {
            if (d_3c0d_0000[7][d_5d51_d9f0] < 255)
                c = d_3c0d_0000[7][d_5d51_d9f0];
            else
                c = d_44d7_0000[18][d_5d51_d9f0];
            if (f_1646_2cc9(c)) {
                sprintf(title, "%s squad news", (char far *)d_5d51_b476[d_44d7_0000[18][d_5d51_d9f0]]);
                sprintf(text, "%s's contract expired this week - he is now a free agent.", f_1646_470f(d_5d51_d9f0));
                f_1646_5bcb(c, title, text);
            }
            d_3404_691c[d_5d51_d9f0] = 0;
            d_2414_af3c[d_5d51_d9f0].w.f9 = 0;
            d_3c0d_0000[19][d_5d51_d9f0] = 0;
        }
        if (d_2414_af3c[d_5d51_d9f0].w.f16 && f_1d5e_0d6a(10) == 0)
            d_2414_af3c[d_5d51_d9f0].w.f16 = 0;
    }
    for (i = 0; i <= 37; i = i + 1)
        for (j = 0; j <= 15; j = j + 1)
            if (d_2414_c6dc[i][j] > 0) {
                d_2414_c6dc[i][j]--;
                if (d_2414_c6dc[i][j] == 0)
                    f_9915_168a(i * 20 + j + 3000);
            }
}
