/* @at a7b6:0000 */
/* @data 61eb:68d2 */
/* @module */

/* Overlay a7b6. */
#include <mem.h>
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
#include <dos.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_a7b6_0000(void);
void f_a7b6_0298(void);
unsigned char f_a7b6_05a9(int player, int team, char c);
char f_a7b6_09ac(int p, int team, char mode);
char f_a7b6_2202(int a, char b);
void f_a7b6_22f4(int p, unsigned char a, char kind);
unsigned char f_a7b6_29ef(int p, unsigned char r, unsigned char x);
void f_a7b6_2ac7(int p, unsigned char week, int team, unsigned char r, unsigned char apps, unsigned char goals, int z, unsigned char perf);
void f_a7b6_30ee(int player);
void f_a7b6_32be(int p, unsigned char team);

struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
struct goals { unsigned char pad; unsigned char g[2][14]; };
float f_1a83_2b0c(int x);
int f_1a83_59ee(FILE *fp);
char f_1a83_5cf5(int p);
char f_1a83_6b4c(int player);
int f_1a83_6b9e(int player, int club);
long f_215d_0d96(long n);
float f_215d_10c4(void);
float f_215d_1319(float a, float b);
int f_215d_1343(int a, int b);
float f_215d_1385(float a, float b);
int f_215d_13af(int a, int b);
void far *f_215d_1629(int handle, int page);
void f_215d_19eb();
int f_ab30_3d3f(char c);
int f_ab30_3db7(char c);
void f_ab30_5ded(char a);
void f_ab30_5f57(char a, int i, int n);
void f_b26d_0000(unsigned char team, unsigned char i);
unsigned char f_b26d_0586(unsigned char team, unsigned char gk);
extern unsigned char far d_28d4_1958[][1500];
extern int far d_3334_8ca0[][1500];
extern int far d_3334_a410[];
extern unsigned char far d_3334_0000[][1500];
extern unsigned char far d_3334_bdb2[][40];
extern unsigned char far d_3334_beca[];
extern unsigned char far d_3334_bf42[][82];
extern unsigned char far d_3334_c802[];
extern long far d_3334_cc82[][38];
extern struct flags_w far d_432e_45de[];
extern int far d_432e_8568[][38];
extern char far d_5313_0e10[];
extern FILE *d_61eb_0090;
extern int d_61eb_d58e;
extern int d_61eb_d590;
extern int d_61eb_d5a4;
extern int d_61eb_d5aa;
extern char d_61eb_da4d;
extern FILE *d_61eb_db99;
extern int (far *d_61eb_dbb8)[1500];
extern unsigned char (far *d_61eb_dbcc)[1500];
extern int d_61eb_dc4e;
extern int d_61eb_dc58;
char f_1a83_6b6e(int player);
extern unsigned char far d_28d4_82d0[];
extern int far d_3334_9858[];
extern int far d_3334_afc8[];
extern unsigned char far d_432e_0000[][82];
extern unsigned char far d_432e_1626[];
extern unsigned char far d_432e_1a96[];
extern unsigned char far d_432e_39fe[][5][16];
extern int far d_432e_9514[][80];
extern unsigned char far d_432e_bf42[][82];
extern char far d_432e_d995[][6];
extern char far d_432e_d996[][6];
extern char far d_5313_0df7[];
extern char far d_5313_d995[][6];
extern unsigned char far d_5b9b_4b73[];
extern FILE *d_61eb_0094;
extern int d_61eb_d5dc;
extern int d_61eb_d61a;
extern int d_61eb_d6d2;
extern int d_61eb_d6d4;
extern int d_61eb_d774;
extern int d_61eb_d790;
extern int d_61eb_d7b0;
extern int d_61eb_d840;
extern int d_61eb_d882;
extern int d_61eb_d884;
extern int d_61eb_d886;
extern int d_61eb_d888;
extern int d_61eb_d88a;
extern int d_61eb_d89a;
extern int d_61eb_d8a0;
extern int d_61eb_d8a2;
extern int d_61eb_d8a4;
extern int d_61eb_d8a8;
extern int d_61eb_d8aa;
extern int d_61eb_d8ac;
extern float d_61eb_dac9;
extern float d_61eb_dacd;
extern float d_61eb_dad1;
extern float d_61eb_dad5;
extern float d_61eb_dad9;
extern float d_61eb_dadd;
extern int (far *d_61eb_dbd0)[2][16];
extern int d_61eb_dc5a;

/* set by f_a7b6_09ac while reading the player file (player 444, then 164) */
char d_61eb_68d2 = 0;

void f_a7b6_0000(void)
{
    unsigned char i;
    unsigned char hi;
    FILE *fp;
    unsigned char lo;

    f_215d_19eb(2);
    fp = fopen("team.dat", "rb");
    for (i = 0; i <= 37; i = i + 1) {
        d_3334_bdb2[1][i] = fgetc(fp);
        d_3334_c802[i] = fgetc(fp);
        hi = fgetc(fp);
        lo = fgetc(fp);
        d_3334_bdb2[2][i] = (hi << 4) + lo;
        hi = fgetc(fp);
        lo = fgetc(fp);
        d_3334_bdb2[3][i] = (hi << 4) + lo;
        d_3334_bdb2[4][i] = fgetc(fp);
        d_3334_bdb2[0][i] = fgetc(fp);
        d_3334_cc82[0][i] = (long)(unsigned)f_1a83_59ee(fp) * 1000;
        d_3334_bdb2[6][i] = fgetc(fp);
        d_432e_8568[0][i] = f_1a83_59ee(fp);
        d_432e_8568[1][i] = f_1a83_59ee(fp);
        d_432e_8568[2][i] = fgetc(fp);
        d_432e_8568[3][i] = fgetc(fp);
        d_432e_8568[4][i] = fgetc(fp);
        d_432e_8568[5][i] = fgetc(fp);
        d_432e_8568[6][i] = f_1a83_59ee(fp);
        d_432e_8568[7][i] = f_1a83_59ee(fp);
    }
    fclose(fp);
}

void f_a7b6_0298(void)
{
    unsigned char i;
    unsigned char j;
    unsigned char t;
    int n;
    int p;
    int done;

    t = 0;
    n = 0;
    d_61eb_d58e = 804;
    d_61eb_d590 = 380;
    for (i = 0; i <= 37; i = i + 1) {
        d_3334_beca[i] = 0;
        d_3334_bf42[0][i] = 0;
    }
    f_ab30_5ded(1);
    f_215d_19eb(2);
    d_61eb_0090 = fopen(d_5313_0e10, "rb+");
    f_215d_19eb(2);
    if (d_61eb_da4d != 0) {
        d_61eb_db99 = fopen("league.dat", "rb");
        for (i = 0; i <= 37; i = i + 1) {
            do {
                done = f_a7b6_05a9(n, i, 4);
                if (done == 0) {
                    f_ab30_5f57(1, n, d_61eb_d58e + d_61eb_d590 - 1);
                    n++;
                }
            } while (done == 0);
            for (j = 0; j <= 15; j = j + 1)
                f_b26d_0000(i, j);
        }
        fclose(d_61eb_db99);
    } else if (d_61eb_da4d == 0) {
        for (i = 0; i <= 37; i = i + 1) {
            float f;
            unsigned char k;
            unsigned char count;

            f = (d_61eb_d58e - n) / (38 - t) + (t < 37 ? 0.5 : 0.0);
            count = f;
            for (k = 1; k <= count; k = k + 1) {
                done = f_a7b6_05a9(n, i, k <= 2 ? 1 : 0);
                if (done == 0) {
                    f_ab30_5f57(1, n, d_61eb_d58e + d_61eb_d590 - 1);
                    n++;
                }
            }
            for (j = 0; j <= 15; j = j + 1)
                f_b26d_0000(i, j);
            t++;
        }
    }
    p = 1000;
    if (d_61eb_da4d != 0) {
        f_215d_19eb(2);
        d_61eb_db99 = fopen("foreign.dat", "rb");
        do {
            done = f_a7b6_05a9(p, 255, 4);
            if (done == 0) {
                f_ab30_5f57(1, n, d_61eb_d58e + d_61eb_d590 - 1);
                p++;
                n++;
            }
        } while (done == 0);
        fclose(d_61eb_db99);
    } else if (d_61eb_da4d == 0) {
        unsigned m;

        for (m = 1; m <= d_61eb_d590; m++) {
            done = f_a7b6_05a9(p, 255, f_215d_0d96(10) == 0 ? 1 : 0);
            if (done == 0) {
                f_ab30_5f57(1, n, d_61eb_d58e + d_61eb_d590 - 1);
                p++;
                n++;
            }
        }
    }
    fclose(d_61eb_0090);
    d_61eb_0090 = 0;
}

unsigned char f_a7b6_05a9(int player, int team, char c)
{
    d_432e_45de[player].f0 = 0;
    d_432e_45de[player].f1 = 0;
    d_432e_45de[player].f2 = 0;
    d_432e_45de[player].f3 = 0;
    d_432e_45de[player].f4 = 0;
    d_432e_45de[player].f5 = 0;
    d_432e_45de[player].f6 = 0;
    d_432e_45de[player].f7 = 0;
    d_432e_45de[player].f8 = 0;
    d_432e_45de[player].f9 = 0;
    d_432e_45de[player].f10 = 0;
    d_432e_45de[player].f11 = 0;
    d_432e_45de[player].f12 = 0;
    d_432e_45de[player].f13 = 0;
    d_432e_45de[player].f14 = 0;
    d_432e_45de[player].f15 = 0;
    d_432e_45de[player].f16 = 0;
    d_432e_45de[player].f17 = 0;
    d_432e_45de[player].f18 = 0;
    d_432e_45de[player].f19 = 0;
    d_432e_45de[player].f20 = 0;
    d_432e_45de[player].f21 = 0;
    d_432e_45de[player].f22 = 0;
    d_432e_45de[player].f23 = 0;
    d_432e_45de[player].f24 = 0;
    d_432e_45de[player].f25 = 0;
    d_432e_45de[player].f26 = 0;
    d_432e_45de[player].f27 = 0;
    d_432e_45de[player].f28 = 0;
    d_432e_45de[player].f29 = 0;
    d_432e_45de[player].f30 = 0;
    d_432e_45de[player].f31 = 0;
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 47; d_61eb_d5aa++) {
        if (d_61eb_d5aa < 24)
            d_28d4_1958[d_61eb_d5aa][player] = 0;
        else
            d_3334_0000[d_61eb_d5aa - 24][player] = 0;
        if (d_61eb_d5aa < 5) {
            d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 1);
            d_61eb_dbb8[d_61eb_d5aa][player] = 0;
        }
        if (d_61eb_d5aa < 10) {
            d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 1);
            d_61eb_dbcc[d_61eb_d5aa][player] = d_61eb_d5aa <= 1 ? 255 : 0;
        }
        if (d_61eb_d5aa < 4)
            d_3334_8ca0[d_61eb_d5aa][player] = 0;
    }
    if (f_a7b6_09ac(player, team, c) == 1)
        return 1;
    f_a7b6_22f4(player, team, c);
    d_432e_45de[player].f13 = c == 2 || c == 3;
    d_28d4_1958[21][player] = 100;
    d_3334_0000[7][player] = 255;
    d_3334_a410[player] = (d_61eb_d5a4 + f_215d_13af(f_215d_0d96(5), f_215d_0d96(5))
                           + d_432e_45de[player].f9) * 100 + f_215d_0d96(30) + 1;
    if (f_1a83_6b4c(player) == 0) {
        d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 1);
        d_61eb_dbb8[4][player] = f_1a83_6b9e(player, team);
        d_3334_beca[team]++;
        if (d_432e_45de[player].f0)
            d_3334_bf42[0][team]++;
    }
    return 0;
}

char f_a7b6_09ac(int p, int team, char mode)
{
    unsigned char i;
    unsigned char k;
    char fromfile;
    char squad;
    char a[7];
    char ok;

    fromfile = mode == 4 ? -1 : 0;
    squad = mode == 2 || mode == 3 ? -1 : 0;
    if (fromfile) {
        d_3334_9858[p] = f_1a83_59ee(d_61eb_db99);
        if (d_3334_9858[p] == 444)
            d_61eb_68d2 = 1;
        if (d_3334_9858[p] == 164 && d_61eb_68d2 == 1)
            d_61eb_68d2 = 2;
        if (d_3334_9858[p] == 3000)
            return 1;
    } else if (squad) {
        k = f_b26d_0586(team, mode == 3 ? 1 : 0);
        d_61eb_dbd0 = f_215d_1629(d_61eb_dc5a, 0);
        d_3334_9858[p] = d_61eb_dbd0[team][0][k];
    } else
        d_3334_9858[p] = 3000;
    if (fromfile)
        d_3334_afc8[p] = f_1a83_59ee(d_61eb_db99);
    else if (squad) {
        d_61eb_dbd0 = f_215d_1629(d_61eb_dc5a, 0);
        d_3334_afc8[p] = d_61eb_dbd0[team][1][k];
    } else
        d_3334_afc8[p] = 3000;
    if (fromfile) {
        d_432e_45de[p].f9 = fgetc(d_61eb_db99);
        if (f_1a83_6b4c(p))
            d_28d4_82d0[p] = fgetc(d_61eb_db99);
        d_432e_45de[p].f28 = fgetc(d_61eb_db99);
    }
    for (i = 0; i <= 6; i = i + 1) {
        a[i] = fromfile ? fgetc(d_61eb_db99) : 100;
        if (a[i] == 1)
            a[i] = -1;
        if (squad && i <= 3)
            a[i] = d_432e_39fe[team][0][k] - 1 == i ? -1 : 0;
    }
    if (fromfile && a[3] && !a[2] && !a[1] && !a[6])
        a[2] = -1;
    if (fromfile && a[2] && !a[3] && !a[1] && !a[6])
        a[6] = -1;
    d_28d4_1958[17][p] = fromfile ? fgetc(d_61eb_db99) : -1;
    if (squad)
        d_28d4_1958[17][p] = d_432e_39fe[team][1][k];
    d_3334_0000[17][p] = fromfile ? fgetc(d_61eb_db99) : -1;
    d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 1);
    d_61eb_dbcc[9][p] = fromfile ? fgetc(d_61eb_db99) : -1;
    d_28d4_1958[0][p] = fromfile ? fgetc(d_61eb_db99) : -1;
    if (squad) {
        d_28d4_1958[0][p] = d_432e_39fe[team][2][k];
        f_b26d_0000(team, k);
    }
    for (i = 1; i <= 14; i = i + 1)
        d_28d4_1958[i][p] = fromfile ? fgetc(d_61eb_db99) : -1;
    d_28d4_1958[22][p] = fromfile ? fgetc(d_61eb_db99) : -1;
    do {
        ok = 1;
        d_61eb_d774 = f_215d_0d96(1000) + 1;
        if (d_61eb_d774 < 101 && mode != 1 && mode != 3 && mode != 4)
            ok = 0;
        else if (d_61eb_d774 >= 101 && (mode == 1 || mode == 3))
            ok = 0;
    } while (ok == 0);
    if (a[0] == 100)
        a[0] = d_61eb_d774 < 101 ? -1 : 0;
    if (a[1] == 100)
        a[1] = d_61eb_d774 > 100 && d_61eb_d774 < 400 || d_61eb_d774 > 760 && d_61eb_d774 < 855
               || d_61eb_d774 > 998 ? -1 : 0;
    if (a[2] == 100)
        a[2] = d_61eb_d774 > 399 && d_61eb_d774 < 572 || d_61eb_d774 > 760 ? -1 : 0;
    if (a[3] == 100)
        a[3] = d_61eb_d774 > 571 && d_61eb_d774 < 761 || d_61eb_d774 > 854 ? -1 : 0;
    if (a[0] == 0) {
        unsigned char j;
        unsigned char m;

        d_61eb_d774 = f_215d_0d96(1000) + 1;
        if (a[4] == 100)
            a[4] = d_61eb_d774 < 153 || d_61eb_d774 > 873 && d_61eb_d774 < 930
                   || d_61eb_d774 > 981 ? -1 : 0;
        if (a[5] == 100)
            a[5] = d_61eb_d774 > 152 && d_61eb_d774 < 331 || d_61eb_d774 > 929 ? -1 : 0;
        if (a[6] == 100)
            a[6] = d_61eb_d774 > 330 && d_61eb_d774 < 982 || d_61eb_d774 > 998 ? -1 : 0;
        if (fromfile == 0 && a[3] && a[6] == 0 && a[2] == 0) {
            if (f_215d_0d96(2) == 0)
                a[6] = -1;
            else
                a[2] = -1;
        }
        if (fromfile == 0 && a[2] && a[6] == 0 && a[3] == 0 && a[1] == 0) {
            d_61eb_d774 = f_215d_0d96(3);
            if (d_61eb_d774 == 0)
                a[6] = -1;
            else if (d_61eb_d774 == 1)
                a[3] = -1;
            else
                a[1] = -1;
        }
        if (d_28d4_1958[1][p] == 255)
            d_28d4_1958[1][p] = f_a7b6_2202(a[2] || a[3], 0);
        if (d_28d4_1958[2][p] == 255)
            d_28d4_1958[2][p] = f_a7b6_2202(f_215d_1343(a[1] ? 2 : 0, a[2] ? 1 : 0), 0);
        if (d_28d4_1958[3][p] == 255)
            d_28d4_1958[3][p] = f_a7b6_2202(1, a[4] || a[5] ? -1 : 0);
        if (d_28d4_1958[4][p] == 255)
            d_28d4_1958[4][p] = f_a7b6_2202(1, a[6] && (a[1] || a[3]) ? -1 : 0);
        if (d_28d4_1958[5][p] == 255)
            d_28d4_1958[5][p] = f_a7b6_2202(a[3] ? 1 : 0, a[4] || a[5] ? -1 : 0);
        if (d_28d4_1958[6][p] == 255)
            d_28d4_1958[6][p] = f_a7b6_2202(a[2] || a[3], 0);
        if (d_28d4_1958[7][p] == 255)
            d_28d4_1958[7][p] = f_a7b6_2202(f_215d_1343(a[2] ? 1 : 0, a[3] ? 2 : 0), a[6] ? -1 : 0);
        if (fromfile == 0) {
            if (a[1] && (a[4] || a[5])) {
                for (j = 0; d_28d4_1958[2][p] + d_28d4_1958[3][p] < 30; j++)
                    d_28d4_1958[j % 2 == 0 ? 2 : 3][p] = f_215d_13af(d_28d4_1958[j % 2 == 0 ? 2 : 3][p] + 1, 20);
            }
            if (a[1] && a[6]) {
                for (j = 0; d_28d4_1958[2][p] + d_28d4_1958[4][p] < 30; j++)
                    d_28d4_1958[j % 2 == 0 ? 2 : 4][p] = f_215d_13af(d_28d4_1958[j % 2 == 0 ? 2 : 4][p] + 1, 20);
                for (j = 0; d_28d4_1958[5][p] + d_28d4_1958[6][p] > 15; j++)
                    d_28d4_1958[j % 2 == 0 ? 5 : 6][p] = f_215d_1343(d_28d4_1958[j % 2 == 0 ? 5 : 6][p] - 1, 1);
            }
            if (a[2] && (a[4] || a[5])) {
                for (j = 0; d_28d4_1958[1][p] + d_28d4_1958[3][p] + d_28d4_1958[6][p] < 30; j++) {
                    if (j % 3 == 0)
                        m = 1;
                    else if (j % 3 == 1)
                        m = 3;
                    else
                        m = 6;
                    d_28d4_1958[m][p] = f_215d_13af(d_28d4_1958[m][p] + 1, 20);
                }
                for (j = 0; d_28d4_1958[6][p] < d_28d4_1958[1][p] - 5; j++) {
                    if (j % 2 == 0)
                        d_28d4_1958[6][p] = f_215d_13af(d_28d4_1958[6][p] + 1, 20);
                    else
                        d_28d4_1958[1][p] = f_215d_1343(d_28d4_1958[1][p] - 1, 1);
                }
            }
            if (a[2] && a[6]) {
                for (j = 0; d_28d4_1958[1][p] + d_28d4_1958[2][p] < 30; j++)
                    d_28d4_1958[j % 2 == 0 ? 1 : 2][p] = f_215d_13af(d_28d4_1958[j % 2 == 0 ? 1 : 2][p] + 1, 20);
                for (j = 0; d_28d4_1958[6][p] < d_28d4_1958[1][p] - 5; j++) {
                    if (j % 2 == 0)
                        d_28d4_1958[6][p] = f_215d_13af(d_28d4_1958[6][p] + 1, 20);
                    else
                        d_28d4_1958[1][p] = f_215d_1343(d_28d4_1958[1][p] - 1, 1);
                }
            }
            if (a[3] && (a[4] || a[5])) {
                for (j = 0; d_28d4_1958[3][p] + d_28d4_1958[5][p] < 30; j++)
                    d_28d4_1958[j % 2 == 0 ? 3 : 5][p] = f_215d_13af(d_28d4_1958[j % 2 == 0 ? 3 : 5][p] + 1, 20);
                for (j = 0; d_28d4_1958[6][p] < d_28d4_1958[5][p] - 5; j++) {
                    if (j % 2 == 0)
                        d_28d4_1958[6][p] = f_215d_13af(d_28d4_1958[6][p] + 1, 20);
                    else
                        d_28d4_1958[5][p] = f_215d_1343(d_28d4_1958[5][p] - 1, 1);
                }
            }
            if (a[3] && a[6]) {
                for (j = 0; d_28d4_1958[6][p] + d_28d4_1958[7][p] > 25; j++)
                    d_28d4_1958[j % 2 == 0 ? 6 : 7][p] = f_215d_1343(d_28d4_1958[j % 2 == 0 ? 6 : 7][p] - 1, 1);
                for (j = 0; d_28d4_1958[4][p] + d_28d4_1958[5][p] > 25; j++)
                    d_28d4_1958[j % 2 == 0 ? 4 : 5][p] = f_215d_1343(d_28d4_1958[j % 2 == 0 ? 4 : 5][p] - 1, 1);
                for (j = 0; d_28d4_1958[5][p] < d_28d4_1958[6][p] - 5; j++) {
                    if (j % 2 == 0)
                        d_28d4_1958[5][p] = f_215d_13af(d_28d4_1958[5][p] + 1, 20);
                    else
                        d_28d4_1958[6][p] = f_215d_1343(d_28d4_1958[6][p] - 1, 1);
                }
            }
        }
    } else {
        a[1] = 0;
        a[2] = 0;
        a[3] = 0;
        a[4] = 0;
        a[5] = 0;
        a[6] = 0;
        d_28d4_1958[1][p] = 0;
        d_28d4_1958[2][p] = 0;
        d_28d4_1958[3][p] = 0;
        d_28d4_1958[4][p] = 0;
        d_28d4_1958[5][p] = 0;
        d_28d4_1958[6][p] = 0;
        d_28d4_1958[7][p] = 0;
    }
    if (d_28d4_1958[10][p] == 255)
        d_28d4_1958[10][p] = f_a7b6_2202(1, 0);
    if (d_28d4_1958[11][p] == 255)
        d_28d4_1958[11][p] = f_a7b6_2202(1, 0);
    if (d_28d4_1958[13][p] == 255)
        d_28d4_1958[13][p] = f_a7b6_2202(1, 0);
    if (d_28d4_1958[17][p] == 255) {
        if (mode != 2 && mode != 3) {
            d_61eb_d882 = f_215d_0d96(18 - a[0] * 5) + 17;
            d_61eb_d884 = f_215d_0d96(18 - a[0] * 5) + 17;
            if (abs(d_61eb_d882 - 28) < abs(d_61eb_d884 - 28)) {
                d_28d4_1958[17][p] = d_61eb_d882;
                d_61eb_d882;
            } else
                d_28d4_1958[17][p] = d_61eb_d884;
        } else
            d_28d4_1958[17][p] = f_215d_0d96(5) + 16;
    }
    if (d_3334_0000[17][p] == 255)
        d_3334_0000[17][p] = f_215d_0d96(10);
    d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 0);
    if (d_61eb_dbcc[9][p] == 255) {
        int j;
        char it;

        if ((f_1a83_6b4c(p) || f_215d_0d96(100) <= 4) && !squad) {
            it = f_215d_0d96(380) < 200 ? 1 : 0;
            do
                j = f_215d_0d96(1135);
            while (d_5b9b_4b73[j] == 0 && it == 0 || d_5b9b_4b73[j] != 0 && it == 1);
            d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 1);
            d_61eb_dbcc[9][p] = it == 0 ? d_5b9b_4b73[j] : 0;
            if (f_1a83_6b4c(p))
                d_28d4_82d0[p] = (it == 0 ? d_5b9b_4b73[j] : f_215d_0d96(2) + 73) + 140;
        } else {
            d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 1);
            d_61eb_dbcc[9][p] = 0;
        }
    }
    if (d_3334_9858[p] == 3000) {
        d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 0);
        d_3334_9858[p] = f_ab30_3d3f(d_61eb_dbcc[9][p]);
    }
    if (d_3334_afc8[p] == 3000) {
        d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 0);
        d_3334_afc8[p] = f_ab30_3db7(d_61eb_dbcc[9][p]);
    }
    d_61eb_dac9 = 1;
    d_61eb_dacd = 1;
    switch (d_3334_0000[17][p]) {
    case 0:
        d_61eb_d886 = f_215d_0d96(3) + 1;
        d_61eb_d888 = f_215d_0d96(5) + 1;
        d_61eb_d88a = f_215d_0d96(20) + 1;
        d_61eb_dac9 = 0.7;
        break;
    case 1:
        d_61eb_d886 = f_215d_0d96(4) + 3;
        d_61eb_d888 = f_215d_0d96(8) + 3;
        d_61eb_d88a = f_215d_0d96(5) + 16;
        break;
    case 2:
        d_61eb_d886 = f_215d_0d96(5) + 1;
        d_61eb_d888 = f_215d_0d96(8) + 5;
        d_61eb_d88a = f_215d_0d96(10) + 3;
        d_61eb_dac9 = 2.0;
        d_61eb_dacd = 0.5;
        break;
    case 3:
        d_61eb_d886 = f_215d_0d96(6) + 3;
        d_61eb_d888 = f_215d_0d96(8) + 8;
        d_61eb_d88a = f_215d_0d96(11) + 5;
        d_61eb_dac9 = 0.5;
        d_61eb_dacd = 2.0;
        break;
    case 4:
        d_61eb_d886 = f_215d_0d96(6) + 3;
        d_61eb_d888 = f_215d_0d96(7) + 4;
        d_61eb_d88a = f_215d_0d96(12) + 1;
        d_61eb_dacd = 0.75;
        d_61eb_dac9 = 1.25;
        break;
    case 5:
        d_61eb_d886 = f_215d_0d96(8) + 3;
        d_61eb_d888 = f_215d_0d96(6) + 15;
        d_61eb_d88a = f_215d_0d96(5) + 16;
        break;
    case 6:
        d_61eb_d886 = f_215d_0d96(4) + 5;
        d_61eb_d888 = f_215d_0d96(8) + 8;
        d_61eb_d88a = f_215d_0d96(8) + 1;
        break;
    case 7:
        d_61eb_d886 = f_215d_0d96(3) + 8;
        d_61eb_d888 = f_215d_0d96(9) + 12;
        d_61eb_d88a = f_215d_0d96(11) + 5;
        d_61eb_dac9 = 1.5;
        break;
    case 8:
        d_61eb_d886 = f_215d_0d96(8) + 2;
        d_61eb_d888 = f_215d_0d96(11) + 10;
        d_61eb_d88a = f_215d_0d96(11) + 10;
        d_61eb_dacd = 1.5;
        break;
    case 9:
        d_61eb_d886 = f_215d_0d96(6) + 1;
        d_61eb_d888 = f_215d_0d96(7) + 6;
        d_61eb_d88a = f_215d_0d96(3) + 1;
        d_61eb_dad1 = 0.75;
        break;
    }
    if (!fromfile) {
        d_28d4_1958[6][p] = f_215d_13af(d_28d4_1958[6][p] * d_61eb_dacd, 20);
        d_28d4_1958[7][p] = f_215d_13af(d_28d4_1958[7][p] * d_61eb_dac9, 20);
    }
    if (d_28d4_1958[8][p] == 255)
        d_28d4_1958[8][p] = d_61eb_d886;
    if (d_28d4_1958[12][p] == 255)
        d_28d4_1958[12][p] = d_61eb_d888;
    if (d_28d4_1958[14][p] == 255)
        d_28d4_1958[14][p] = d_61eb_d88a;
    if (d_28d4_1958[22][p] == 255)
        d_28d4_1958[22][p] = a[6] && f_215d_0d96(4) > 0 ? f_215d_0d96(11) + 10 : f_215d_0d96(20) + 1;
    d_432e_45de[p].f0 = a[0] ? 1 : 0;
    d_432e_45de[p].f1 = a[1] ? 1 : 0;
    d_432e_45de[p].f2 = a[2] ? 1 : 0;
    d_432e_45de[p].f3 = a[3] ? 1 : 0;
    d_432e_45de[p].f4 = a[4] ? 1 : 0;
    d_432e_45de[p].f5 = a[5] ? 1 : 0;
    d_432e_45de[p].f6 = a[6] ? 1 : 0;
    return 0;
}

char f_a7b6_2202(int a, char b)
{
    if (a == 0) {
        d_61eb_d6d2 = 1;
        d_61eb_d6d4 = 2;
    } else if (a == 1) {
        d_61eb_d6d2 = 0;
        d_61eb_d6d4 = 2;
    } else {
        d_61eb_d6d2 = 0;
        d_61eb_d6d4 = 1;
    }
    switch (f_215d_0d96(20) + 1) {
    case 1:
    case 2:
    case 3:
    case 4:
        d_61eb_d61a = d_61eb_d6d2;
        break;
    case 5:
    case 6:
    case 7:
    case 8:
        d_61eb_d61a = d_61eb_d6d4;
        break;
    default:
        d_61eb_d61a = a;
    }
    return d_61eb_d61a = f_215d_13af(d_61eb_d61a * 7 + (int)f_215d_0d96(7)
                                     + (b ? (int)f_215d_0d96(5) : 0) + 1, 20);
}

void f_a7b6_22f4(int p, unsigned char a, char kind)
{
    FILE *fp;
    char c4 = kind == 4 ? -1 : 0;
    char c23 = kind == 2 || kind == 3 ? -1 : 0;
    char done;
    unsigned char n;
    unsigned char r;
    unsigned char week;
    unsigned char last;
    unsigned char team;
    unsigned char goals;
    unsigned char perf;
    {
    unsigned char ed;
    unsigned char ec;
    unsigned v;
    float f;
    unsigned char tbl[12] = {80, 100, 100, 110, 125, 135, 150, 170, 175, 180, 190, 190};

    if (d_28d4_1958[0][p] == 0xff) {
        ed = f_1a83_6b4c(p) ? (unsigned char)f_1a83_5cf5(p) : f_1a83_2b0c(a);
        if (f_1a83_6b4c(p) && f_1a83_6b6e(p))
            ed = 10;
        do {
            done = 1;
            v = tbl[ed - 6] + f_215d_1343(f_215d_0d96(25) - f_215d_0d96(25), f_215d_0d96(25) - f_215d_0d96(25));
            if (f_215d_0d96(10) == 0)
                v = v * 0.65;
            else if (f_215d_0d96(50) == 0)
                v += 20;
            if (d_28d4_1958[17][p] < 22) {
                f = 1 - (22 - d_28d4_1958[17][p]) / 15;
                v = v * f;
            }
            if (v > 190)
                v = 190;
            d_28d4_1958[0][p] = v;
        } while (done == 0);
    }
    if (d_28d4_1958[9][p] == 0xff) {
        n = 0;
        do {
            done = 1;
            d_28d4_1958[9][p] = f_215d_0d96(126) + 75;
            if (d_28d4_1958[9][p] < d_28d4_1958[0][p])
                done = 0;
            else if (abs(28 - d_28d4_1958[17][p]) < 3 && d_28d4_1958[9][p] - d_28d4_1958[0][p] > n * 2 + 20)
                done = 0;
            n++;
        } while (done == 0);
    }
    d_3334_0000[18][p] = d_28d4_1958[0][p] + f_215d_0d96(200 - d_28d4_1958[0][p]);
    memset(d_432e_d995, 0, 0x98);
    d_3334_0000[20][p] = 0;
    d_61eb_d840 = 0;
    if (!c23) {
        r = f_215d_1343(d_28d4_1958[0][p] / 2 + f_215d_0d96(20) - f_215d_0d96(20), 20);
        week = c4 ? 0 : 95 - (d_28d4_1958[17][p] - 16);
        team = c4 ? 0 : f_a7b6_29ef(p, r, -1);
        do {
            if (week < 96) {
                last = week;
                if (c4) {
                    week = fgetc(d_61eb_db99);
                    if (week < 255) {
                        team = fgetc(d_61eb_db99);
                        goals = fgetc(d_61eb_db99);
                        ed = goals == 255 ? 50 : goals;
                        perf = fgetc(d_61eb_db99);
                        f_a7b6_2ac7(p, week, team, r, goals, perf, 255, ed);
                    } else
                        week = 96;
                } else {
                    ed = f_1a83_6b4c(p) ? (unsigned char)f_1a83_5cf5(p) : f_1a83_2b0c(team);
                    if (abs(ed - r / 10) > 3 && f_215d_0d96(5) == 0 || f_215d_0d96(10) == 0) {
                        ec = f_215d_0d96(40) + 1;
                        f_a7b6_2ac7(p, week, team, r, -1, -1, 255, ec / 40.0 * 50.0);
                        team = f_a7b6_29ef(p, r, team);
                        f_a7b6_2ac7(p, week, team, r, -1, -1, 255, (40 - ec) / 40.0 * 50.0);
                    } else
                        f_a7b6_2ac7(p, week, team, r, -1, -1, 255, 50);
                    week++;
                }
                if (week > last && week < 96)
                    r = (d_28d4_1958[17][p] - (96 - week) >= 30 ? r * 2 + 100 : r * 2 + d_28d4_1958[9][p]) / 3;
            }
        } while (week < 96);
    }
    if (!f_1a83_6b4c(p))
        d_28d4_1958[18][p] = a;
    if (!c4 && !c23)
        f_a7b6_32be(p, d_28d4_1958[18][p]);
    if (d_61eb_0090 == 0) {
        f_215d_19eb(2);
        fp = fopen(d_5313_0e10, "rb+");
        fseek(fp, (long)p * 133, 0);
        fwrite(d_432e_d995, 1, 133, fp);
        fclose(fp);
    } else {
        fseek(d_61eb_0090, (long)p * 133, 0);
        fwrite(d_432e_d995, 1, 133, d_61eb_0090);
    }
    if (d_61eb_d840 > 0) {
        d_3334_0000[5][p] = d_61eb_d840;
        d_3334_0000[6][p] = d_61eb_d7b0;
        d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 1);
        d_61eb_dbcc[6][p] = d_61eb_d8a8;
        d_61eb_dbcc[7][p] = d_61eb_d8a0;
        d_61eb_dbcc[8][p] = d_61eb_d8a2;
        d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 1);
        d_61eb_dbb8[1][p] = d_61eb_d89a;
    }
}
}

unsigned char f_a7b6_29ef(int p, unsigned char r, unsigned char x)
{
    char done;
    unsigned char v;
    unsigned char i;
    unsigned char pos;

    i = 0;
    d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 0);
    pos = d_61eb_dbcc[9][p];
    if (f_1a83_6b4c(p) == 0 && (pos == 0)) {
        do {
            done = 1;
            v = f_215d_0d96(38);
            if (abs((int)(f_1a83_2b0c(v) - r / 10)) > i / 5 + 2 || v == x)
                done = 0;
            i++;
        } while (done == 0);
    } else {
        d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 0);
        v = d_61eb_dbcc[9][p] - 116;
    }
    return v;
}

void f_a7b6_2ac7(int p, unsigned char week, int team, unsigned char r, unsigned char apps,
                 unsigned char goals, int z, unsigned char perf)
{
    char far *s;
    unsigned char q;

    if (team < 38)
        q = f_1a83_2b0c(team);
    else if (team < 140)
        q = f_1a83_2b0c(team + 362);
    else
        q = 14;
    if (week == 94)
        d_61eb_d790 = f_215d_13af(d_28d4_1958[0][p] + f_215d_0d96(15) - f_215d_0d96(15), d_28d4_1958[9][p]);
    else
        d_61eb_d790 = f_215d_1343(f_215d_13af(r + f_215d_0d96(25) - f_215d_0d96(25), d_28d4_1958[9][p]), 10);
    if (apps == 255) {
        float f;
        unsigned char a;
        unsigned char b;
        unsigned char c;

        f = (d_61eb_d790 / 10.0 - q) * 16.0 + 70.0;
        if (f > 40.0)
            f = 40.0;
        else if (f < 0)
            f = 0;
        f = f / 40.0;
        d_61eb_d840 = perf * f;
        a = f_215d_0d96(d_61eb_d840);
        b = f_215d_0d96(d_61eb_d840);
        c = f_215d_0d96(d_61eb_d840);
        if (a > b && a > c)
            d_61eb_d840 = a;
        else if (b > a && b > c)
            d_61eb_d840 = b;
        else
            d_61eb_d840 = c;
    } else
        d_61eb_d840 = apps;
    d_61eb_d7b0 = 0;
    d_61eb_d8a8 = 0;
    d_61eb_d89a = 0;
    if (d_61eb_d840 > 0) {
        d_61eb_dad5 = f_215d_1319(f_215d_1385(d_61eb_d790 / 40.0 + 3.0, 8.0), 3.0);
        d_61eb_d89a = f_215d_1385(f_215d_1319((f_215d_10c4() - f_215d_10c4()) *
                                              (2.0 - d_61eb_d840 * 0.03) + d_61eb_dad5, 1.0),
                                  10.0) * d_61eb_d840 + 0.5;
        d_61eb_dad9 = (float)d_61eb_d89a / d_61eb_d840;
        d_61eb_d8a0 = d_61eb_dad9;
        d_61eb_d8a2 = d_61eb_d8a0 + (d_61eb_d8a0 < d_61eb_dad9);
        if (d_61eb_d840 > 2) {
            d_61eb_d8a0 = f_215d_1343(d_61eb_d8a0 - f_215d_0d96(2), 1);
            d_61eb_d8a2 = f_215d_13af(d_61eb_d8a2 + f_215d_0d96(2), 10);
        }
        d_61eb_d8a8 = (float)d_61eb_d840 / perf * 50.0 *
                      (f_215d_1343(f_215d_0d96(d_28d4_1958[11][p]), f_215d_0d96(d_28d4_1958[11][p])) + 1) / 20.0;
        d_61eb_d8a8 = d_61eb_d8a8 / 5 * 5;
        if (d_432e_45de[p].f0 == 0 && goals == 255) {
            if (d_432e_45de[p].f3)
                d_61eb_d8aa = f_215d_13af((d_432e_45de[p].f2 ? f_215d_0d96(2) : 0) +
                                          (d_432e_45de[p].f1 ? f_215d_0d96(2) : 0) * 2 + 1, 3);
            else if (d_432e_45de[p].f2)
                d_61eb_d8aa = (d_432e_45de[p].f1 ? f_215d_0d96(2) : 0) + 2;
            else if (d_432e_45de[p].f1)
                d_61eb_d8aa = 3;
            d_61eb_dadd = (d_28d4_1958[7][p] * 0.03 + 0.07) / d_61eb_d8aa - f_215d_10c4() / 5.0 +
                          f_215d_10c4() / 5.0;
            d_61eb_d7b0 = f_215d_1343(0, f_215d_0d96(3) - f_215d_0d96(3) + d_61eb_d840 * d_61eb_dadd + 0.5);
            if (d_61eb_d7b0 < 0 || d_61eb_d7b0 > 50)
                d_61eb_d7b0 = d_61eb_d7b0;
        } else if (goals != 255)
            d_61eb_d7b0 = goals;
        else
            d_61eb_d7b0 = 0;
    }
    d_61eb_d8a4 = d_3334_0000[20][p];
    if (d_61eb_d8a4 > 21)
        d_61eb_d8ac = d_61eb_d8a4 - 22;
    else
        d_61eb_d8ac = d_61eb_d8a4;
    s = d_432e_d996[d_61eb_d8ac];
    *s++ = week;
    if (team < 140) {
        for (d_61eb_d5dc = 0; d_61eb_d5dc <= 139; d_61eb_d5dc++) {
            if (d_432e_1a96[d_61eb_d5dc] == team) {
                *s++ = d_61eb_d5dc;
                d_61eb_d5dc = 139;
            }
        }
    } else
        *s++ = team;
    *s++ = d_61eb_d840;
    *s++ = d_61eb_d7b0;
    *s++ = d_61eb_d89a >> 8;
    *s = d_61eb_d89a & 0xff;
    d_3334_0000[20][p] = d_61eb_d8a4 + 1;
}

void f_a7b6_30ee(int player)
{
    char far *s;
    unsigned char t;
    int n;

    fseek(d_61eb_0094, (long)player * 133, 0);
    fread(d_432e_d995, 1, 133, d_61eb_0094);
    d_61eb_d8a4 = d_3334_0000[20][player];
    if (d_61eb_d8a4 > 0 || d_3334_0000[12][player] > 0) {
        t = 255;
        if (d_28d4_1958[18][player] < 140) {
            for (d_61eb_d5dc = 0; d_61eb_d5dc <= 139; d_61eb_d5dc++) {
                if (d_432e_1a96[d_61eb_d5dc] == d_28d4_1958[18][player]) {
                    t = d_61eb_d5dc;
                    d_61eb_d5dc = 139;
                }
            }
        } else
            t = d_28d4_1958[18][player];
        if (t < 255) {
            if (d_61eb_d8a4 > 21)
                d_61eb_d8ac = d_61eb_d8a4 - 22;
            else
                d_61eb_d8ac = d_61eb_d8a4;
            s = d_432e_d996[d_61eb_d8ac];
            *s++ = d_61eb_d5a4 + 94;
            *s++ = t;
            *s++ = d_3334_0000[12][player];
            *s++ = d_3334_0000[13][player];
            d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
            n = d_61eb_dbb8[2][player];
            *s++ = n >> 8;
            *s = n;
            d_3334_0000[20][player] = d_61eb_d8a4 + 1;
            fseek(d_61eb_0094, (long)player * 133, 0);
            fwrite(d_432e_d995, 1, 133, d_61eb_0094);
        }
    }
}

#pragma option -O-
void f_a7b6_32be(int p, unsigned char team)
{
    unsigned char cur;
    unsigned char old;
    unsigned char i;
    unsigned char k;
    unsigned char n;

    d_3334_0000[10][p] = 255;
    if (d_3334_0000[20][p] > 0) {
        n = d_3334_0000[20][p];
        old = d_432e_d996[n > 22 ? n - 23 : n - 1][1];
        do {
            cur = d_432e_d996[n > 22 ? n - 23 : n - 1][1];
            if (cur == old) {
                for (i = 0; i <= 139; i = i + 1)
                    if (d_432e_1a96[i] == team)
                        k = i;
                d_432e_d996[n > 22 ? n - 23 : n - 1][1] = k;
            } else if (cur != team) {
                d_3334_0000[10][p] = cur;
                n = 1;
            }
            n--;
        } while (n > 0);
    }
}
