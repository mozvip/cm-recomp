/* @at 8e0f:0000 */
/* @data 61eb:3b50 */
/* @module */

/* Overlay 8e0f (CM94's 9661.C, CM93's 9107.C, from the first part of CM1's 88C9.C): players
 * and staff: approaches for your players and their requests to leave, valuations and free
 * transfers, finding players (the search, the transfer list and the shortlist), scouts'
 * recommendations, managerial news (managers sacked, resigning and appointed), job offers,
 * and appointing and sacking staff. Its data is the search screen's bottom bars, then its
 * literal pool. */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <mem.h>
#include <stdlib.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_8e0f_0000(int player, int club, int v);
char f_8e0f_00f1(int player, int team, char loan);
void f_8e0f_0315(int player, int team, char loan);
char f_8e0f_0522(int player);
void f_8e0f_06af(int player);
char f_8e0f_0835(int player);
void f_8e0f_0881(int player);
void f_8e0f_099c(int player, char c, char d);
void f_8e0f_0a8c(int player);
void f_8e0f_0aee(int player);
long f_8e0f_0b64(int player);
void f_8e0f_0e88(int player);
void f_8e0f_1172(int player, char c);
long f_8e0f_138d(int player);
void f_8e0f_141f(void);
void f_8e0f_1b5f(int team);
void f_8e0f_1c7b(int a, int b, int bg, int fg, char far *s1, char far *s2);
void f_8e0f_1dad(int x, char on, int a);
void f_8e0f_1e39(char far *title, unsigned from, unsigned to);
void f_8e0f_2713(int team);
void f_8e0f_2815(void);
void f_8e0f_2925(int p, int row);
void f_8e0f_2d8d(int mode, char draw);
char f_8e0f_2fa1(int p, int team, int n);
void f_8e0f_3129(void);
void f_8e0f_3192(int p, int c, char flag);
void f_8e0f_384e(int p, int k);
void f_8e0f_397b(void);
void f_8e0f_3c9a(void);
void f_8e0f_3e07(int club, int a);
void f_8e0f_402e(void);
void f_8e0f_42bb(int p);
void f_8e0f_4365(void);
char f_8e0f_4737(int p, int team);
void f_8e0f_4ad9(int club, int n);
void f_8e0f_4cc7(int p, int team, int b);
char f_8e0f_5091(int p, int team, int x);

struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
long f_1a83_01d6(int p, int n);
void f_1a83_0b12(int line, char far *s);
void f_1a83_0b7d(char far *s);
long f_1a83_0cef(long v, char c);
void f_1a83_12f6(int player);
char f_1a83_2ad4(int x);
float f_1a83_2b0c(int x);
int f_1a83_2bdb(int x);
char f_1a83_2c20(int x);
void f_1a83_2da6(int n, char far *title, char far *items);
void f_1a83_3122(int last);
void f_1a83_4327(float x, float y, int team);
char far *f_1a83_4485(int player);
char far *f_1a83_462c(int player);
void f_1a83_48f9(char far *title);
long f_1a83_5747(int team);
int f_1a83_66e8(int x);
char f_1a83_6728(int player, char c);
unsigned f_215d_0b10(char far *s, char far *set);
long f_215d_0d96(long n);
long f_215d_13c8(long a, long b);
void far *f_215d_1629(int handle, int page);
void f_87dc_182c(int p, char all);
void f_87dc_35cf(int player, int club);
int f_87dc_3a09(int player, int team);
void f_87dc_3bd1(int mode, int player);
int f_87dc_3def(int mode, int value, int lo, int player);
void f_87dc_41a3(int colour, char far *s);
char f_87dc_4e83(int player, char flag);
void f_a214_4120(int player, int a, char b);
extern unsigned char far d_28d4_1958[][1500];
extern unsigned char far d_28d4_4a08[];
extern unsigned char far d_28d4_82d0[];
extern unsigned char far d_3334_0000[][1500];
extern int far d_3334_a410[];
extern int far d_3334_ca6e[][38];
extern int far d_3334_caba[];
extern long far d_3334_cc82[];
extern unsigned char far d_3334_d680[];
extern struct flags_w far d_432e_45de[];
extern char far d_432e_d32b[];
extern unsigned char far d_53fc_095c[][10];
extern char near *d_61eb_b0ec[];
extern int d_61eb_d59e;
extern int d_61eb_d5a2;
extern int d_61eb_d5a4;
extern int d_61eb_d654;
extern int d_61eb_d7cc;
extern int d_61eb_d7ce;
extern int d_61eb_d7e2;
extern int d_61eb_d7e6;
extern int d_61eb_d7e8;
extern int d_61eb_d7ec;
extern int d_61eb_d7fe;
extern int d_61eb_d808;
extern int d_61eb_d80c;
extern int d_61eb_d826;
extern int d_61eb_d828;
extern int d_61eb_d9a2;
extern char d_61eb_d9c8;
extern char d_61eb_d9ca;
extern char d_61eb_d9df;
extern char d_61eb_d9fb;
extern char d_61eb_da04;
extern char d_61eb_da05;
extern char d_61eb_da0c;
extern char d_61eb_da0e;
extern char d_61eb_da11;
extern long d_61eb_db41;
extern long d_61eb_db45;
extern long d_61eb_db49;
extern long far *d_61eb_dbac;
extern int (far *d_61eb_dbb8)[1500];
extern char far *d_61eb_dbe0;
extern char (far *d_61eb_dbe8)[151];
extern int d_61eb_dc48;
extern int d_61eb_dc4e;
extern int d_61eb_dc62;
extern int d_61eb_dc66;
void f_1a83_0bb7(char far *s);
void f_1a83_0e84(int p);
void f_1a83_4d96(int a, float x, float y, int c, int d, int e, char far *s);
void f_1a83_5117(int a, char b);
int f_1a83_5296(int a);
void f_1a83_5ccd(void);
void f_1a83_5ce1(void);
char f_1a83_6b4c(int player);
int f_215d_1343(int a, int b);
int f_215d_13af(int a, int b);
void f_87dc_4c9b(int player, int a);
void f_9f8d_1379(char all);
unsigned char f_b26d_2715(char team, char far *title);
void f_b26d_27fd(char team, int player);
void f_b26d_2a9b(char n);
void f_ab30_62c1(char n);
extern int far *d_61eb_dba8;
extern int d_61eb_dc46;
extern char d_61eb_da4e;
extern char d_61eb_da15;
extern char d_61eb_da14;
extern int d_61eb_d980;
extern int d_61eb_d832;
extern int d_61eb_d830;
extern int d_61eb_d82e;
extern int d_61eb_d82c;
extern int d_61eb_d80e;
extern int d_61eb_d6aa;
extern int d_61eb_d61a;
extern int d_61eb_d5ee;
extern int d_61eb_d5b8;
extern int d_61eb_d590;
extern int d_61eb_d58e;
void f_1a83_30ca(int a, int b, int line);
void f_1a83_3c08(float x, float y, int bg, int fg, int w, char far *s);
extern float far d_432e_0ece[];
extern char d_61eb_da16;
extern int d_61eb_d838;
extern int d_61eb_d836;
extern int d_61eb_d834;
extern int d_61eb_d5e2;
extern int far d_28d4_1928[];
extern unsigned char far d_432e_cee2[];
extern unsigned char far d_432e_39c2[];
extern unsigned char far d_432e_39c0[];
extern int far d_432e_066e[][16];
extern char far d_432e_0b2e[][16];
struct opt { char far *s; unsigned char a, b; int w; };
void f_1a83_3450(float x, float y, int bg, int fg, int w, char far *s);
void f_1a83_3a43(float x, float y, int colour, char far *s);
extern unsigned char (far *d_61eb_dbcc)[1500];
extern int far d_28d4_1926[];
extern long d_61eb_db55;
extern char d_61eb_da19;
extern char d_61eb_da18;
extern char d_61eb_da17;
extern unsigned char d_61eb_d9b9;
extern int d_61eb_d840;
extern int d_61eb_d83e;
extern int d_61eb_d83c;
extern int d_61eb_d83a;
extern int d_61eb_d7b6;
extern int d_61eb_d7b0;
extern int d_61eb_d6ba;
long f_1a83_0d8f(long v);
char far *f_1a83_0e35(long amount);
char far *f_1a83_4686(int manager, char full);
void f_215d_07ec(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
char f_87dc_274f(int p, int team, int n);
int f_87dc_291e(int a, int b);
char far *f_a214_19b6(int a, int b);
extern long d_61eb_db05;
extern char d_61eb_da1a;
extern int d_61eb_d7da;
extern int d_61eb_d5f0;
extern char far d_432e_d855[];
extern char far d_432e_d73d[];
extern char far d_432e_d6ed[];
extern unsigned char far d_432e_00a4[];
extern char far * far d_53fc_bce0[];
extern unsigned char far d_432e_e0a8[];
extern char d_61eb_da1b;
extern int d_61eb_d848;
extern int d_61eb_d846;
extern int d_61eb_d844;
extern int d_61eb_d842;
extern int d_61eb_d800;
int f_93a1_08a5(int x);
int f_ab30_3d3f(char c);
int f_ab30_3db7(char c);
void f_ab30_5ded(char a);
void f_ab30_5f57(char a, int i, int n);
extern int far d_432e_9514[][80];
extern unsigned char far d_432e_d16c[];
extern unsigned char far d_432e_d3f6[];
extern unsigned char far d_3334_d90a[];
extern unsigned char far d_3334_db94[][650];
extern unsigned char far d_432e_3a6a[][650];
extern unsigned char far d_432e_efe4[];
extern int far d_432e_c92e[];
extern unsigned char far d_432e_01ec[];
extern char d_61eb_da4d;
extern char d_61eb_da20;
extern char d_61eb_da1f;
extern char d_61eb_da1e;
extern char d_61eb_da1d;
extern char d_61eb_da1c;
extern int d_61eb_d9a4;
extern int d_61eb_d856;
extern int d_61eb_d854;
extern int d_61eb_d852;
extern int d_61eb_d850;
extern int d_61eb_d84e;
extern int d_61eb_d7be;
extern int d_61eb_d776;
extern int d_61eb_d75e;
extern int d_61eb_d72a;
extern int d_61eb_d65c;
extern int d_61eb_d652;
extern int d_61eb_d62a;
extern int d_61eb_d5fc;
extern int d_61eb_d5f6;
extern int d_61eb_d5e4;
extern int d_61eb_d5d0;
extern char far *d_61eb_dbbc;
extern int d_61eb_dc50;
void f_1a83_5844(int team, char far *title, char far *text);
char far *f_93a1_1767(int n);
void f_9f8d_0670(int t);
void f_b26d_0e1c(char a, char b, int player, char team, long fee, char c);
void f_ab30_5c8d(void);
void f_b26d_1456(char team);
extern char far d_432e_ec5f[];
extern char far d_432e_d78d[];
extern unsigned char far d_432e_14ce[];
extern char d_61eb_da4a;
extern char d_61eb_da44;
extern char d_61eb_da13;
extern char d_61eb_d9c4;
extern int d_61eb_d98c;
extern int d_61eb_d88c;
extern int d_61eb_d862;
extern int d_61eb_d858;
extern int d_61eb_d78e;
extern int d_61eb_d650;
extern int d_61eb_d5e6;
extern int d_61eb_d5de;
extern int d_61eb_d5dc;
extern char (far *d_61eb_dbd8)[101];
extern int d_61eb_dc5e;
extern char far d_432e_e70f[];
extern char d_61eb_da45;
extern int d_61eb_d98e;
extern int d_61eb_d986;
extern int d_61eb_d860;
extern int d_61eb_d85e;
extern int d_61eb_d85a;
extern int d_61eb_d7ae;
extern int d_61eb_d5d8;
char f_1a83_0c63(void);
void f_6ffe_0615(int div);
void f_6ffe_4a89(int team);
int f_93a1_0000(int team, int x);
void f_93a1_16a1(int club);
void f_9a9e_1b7d(int player);
int f_ab30_0000(int a, char team);
void f_ab30_2524(char team);
extern char far d_432e_c125[];
extern unsigned char far d_3334_beca[];
extern int far d_28d4_081c[][26];
extern char d_61eb_da4b;
extern char d_61eb_da2a;
extern char d_61eb_da29;
extern char d_61eb_da25;
extern char d_61eb_da24;
extern char d_61eb_da23;
extern char d_61eb_da22;
extern int d_61eb_d86e;
extern int d_61eb_d86c;
extern int d_61eb_d866;
extern int d_61eb_d864;
extern int d_61eb_d5f4;
extern int far *d_61eb_dbb4;
extern int d_61eb_dc4c;
extern unsigned char far d_3334_cee2[];
unsigned char f_1a83_6d8b(unsigned char team);
extern int far d_3334_cb06[][38];
extern unsigned char far d_3334_be02[];
extern char far * far d_53fc_0000[];
extern unsigned char far d_3334_e0a8[];
extern unsigned char far d_3334_fe98[][1860];
extern unsigned char far d_3334_d16c[];
extern unsigned char far d_3334_d3f6[];
extern unsigned char far d_3334_e5bc[][650];
extern unsigned char far d_3334_efe4[];
extern int far d_3334_c9d6[];
extern int far d_432e_8568[][38];
extern unsigned char far d_3334_c762[];
extern unsigned char far d_3334_bea2[];
extern char far d_432e_b73b[][38];
extern unsigned char far d_3334_bdb2[][40];


void f_8e0f_0000(int player, int club, int v)
{
    char buf[320];

    f_87dc_35cf(player, d_28d4_82d0[player]);
    if (d_61eb_d9fb) {
        sprintf(buf, "%s signs the contract", f_1a83_462c(player));
        f_87dc_41a3(6, buf);
        d_3334_a410[player] = (d_61eb_d5a4 + d_61eb_d7cc) * 100 + f_1a83_66e8(d_61eb_d5a2);
        d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 1);
        d_61eb_dbb8[4][player] = d_61eb_d7ce;
    } else {
        sprintf(buf, "%04d ", player);
        d_61eb_dbe0 = f_215d_1629(d_61eb_dc62, 1);
        strcat(d_61eb_dbe0 + v * 151, buf);
    }
}

char f_8e0f_00f1(int player, int team, char loan)
{
    d_61eb_da0c = 0;
    if (f_1a83_2ad4(d_28d4_1958[0][18 * 1500 + player]))
        f_8e0f_0315(player, team, loan);
    else if (!d_432e_45de[player].f9 && !d_432e_45de[player].f30 && f_1a83_2c20(player) == 0
             && (d_3334_caba[d_28d4_1958[18][player]] < 650 || d_3334_a410[player] == 0)) {
        if (loan && d_28d4_4a08[player] < 2) {
            if (d_432e_45de[player].f8 && d_432e_45de[player].f24 || f_87dc_4e83(player, -1)
                || d_28d4_1958[23][player] > 1)
                d_61eb_da0c = -1;
        } else if (d_28d4_1958[23][player] > 1 || d_432e_45de[player].f8 || d_3334_a410[player] == 0
                   || d_53fc_095c[d_3334_d680[d_3334_ca6e[0][d_28d4_82d0[player]]]][d_3334_0000[17][player]] > 7
                   || fabs(f_1a83_2bdb(player) - f_1a83_2b0c(d_28d4_82d0[player])) > 3.0f
                   || d_3334_a410[player] / 100 - d_61eb_d5a4 < 3)
            d_61eb_da0c = -1;
    }
    return d_61eb_da0c;
}

void f_8e0f_0315(int player, int team, char loan)
{
    char buf[320];
    char n;

    do {
        d_61eb_da04 = 0;
        f_1a83_48f9("Player Approach");
        f_1a83_4327(1.0, 4.0, d_28d4_82d0[player]);
        sprintf(buf, "%s want %s", (char far *)d_61eb_b0ec[team], f_1a83_4485(player));
        f_1a83_0b12(7, buf);
        n = 10;
        if (loan) {
            sprintf(buf, "They want him on loan");
            f_1a83_0b12(9, buf);
            n = 12;
        } else if (f_1a83_2ad4(team) == 0 && !d_432e_45de[player].f12) {
            d_61eb_db41 = f_1a83_0cef(f_215d_13c8(f_1a83_01d6(player, team), f_1a83_5747(team)), -1);
            sprintf(buf, "They would offer about %ld", d_61eb_db41);
            f_1a83_0b12(9, buf);
            n = 12;
        } else if (f_1a83_2ad4(team) == 0 && d_432e_45de[player].f12) {
            strcpy(buf, "He is on a free transfer");
            f_1a83_0b12(9, buf);
            n = 12;
        }
        do {
            d_61eb_d9c8 = -1;
            f_1a83_2da6(n, "", "View Factfile|Allow Approach|Refuse Approach|");
            f_1a83_3122(2);
            if (d_61eb_d59e == 0) {
                do
                    f_a214_4120(player, -1, 0);
                while (!d_61eb_d9ca);
                d_61eb_d9ca = 0;
                d_61eb_da04 = -1;
            } else if (d_61eb_d59e == 1) {
                d_61eb_da0c = -1;
            } else if (d_61eb_d59e == 2) {
                if (d_3334_a410[player] > 0 || loan) {
                    sprintf(buf, "%s refused", (char far *)d_61eb_b0ec[team]);
                    f_1a83_0b7d(buf);
                } else {
                    f_1a83_0b7d("He is not under contract");
                    f_1a83_0b7d("You cannot refuse their approach");
                    d_61eb_d9c8 = 0;
                }
            }
        } while (!d_61eb_d9c8);
    } while (d_61eb_da04 != 0);
}

char f_8e0f_0522(int player)
{
    d_61eb_da0e = 0;
    if (f_1a83_2ad4(d_28d4_1958[0][18 * 1500 + player]))
        f_8e0f_06af(player);
    else if (d_3334_caba[d_28d4_1958[18][player]] < 650 || d_3334_a410[player] == 0) {
        d_61eb_d7e6 = d_53fc_095c[d_3334_d680[d_3334_ca6e[0][d_28d4_82d0[player]]]][d_3334_0000[17][player]];
        if (d_28d4_1958[23][player] == 3 || d_3334_a410[player] == 0 || d_61eb_d7e6 > 7
            || fabs(f_1a83_2bdb(player) - f_1a83_2b0c(d_28d4_82d0[player])) > 3.0f
            || d_28d4_1958[23][player] == 2 && d_3334_cc82[d_28d4_1958[18][player]] < 0)
            d_61eb_da0e = -1;
    }
    return d_61eb_da0e;
}

void f_8e0f_06af(int player)
{
    char buf[320];

    do {
        d_61eb_da04 = 0;
        f_1a83_48f9("Player request");
        f_1a83_4327(1.0, 4.0, d_28d4_82d0[player]);
        sprintf(buf, "%s wants to leave", f_1a83_4485(player));
        f_1a83_0b12(7, buf);
        f_1a83_6728(player, 0);
        sprintf(buf, "He %s", d_432e_d32b);
        f_1a83_0b12(9, buf);
        f_1a83_2da6(12, "", "View Factfile|Refuse Request|List Him|");
        do {
            d_61eb_d9c8 = -1;
            f_1a83_3122(2);
            d_61eb_d80c = d_61eb_d59e;
            if (d_61eb_d80c == 0) {
                do
                    f_a214_4120(player, -1, 0);
                while (!d_61eb_d9ca);
                d_61eb_d9ca = 0;
                d_61eb_da04 = -1;
            } else if (d_61eb_d80c == 1) {
                if (d_3334_a410[player] == 0) {
                    f_1a83_0b7d("He is a free agent");
                    f_1a83_0b7d("You cannot prevent him leaving");
                    d_61eb_d9c8 = 0;
                } else {
                    sprintf(buf, "%s told to stay", f_1a83_462c(player));
                    f_1a83_0b7d(buf);
                }
            } else if (d_61eb_d80c == 2) {
                sprintf(buf, "%s now transfer listed", f_1a83_462c(player));
                f_1a83_0b7d(buf);
                d_61eb_da0e = -1;
            }
        } while (!d_61eb_d9c8);
    } while (d_61eb_da04 != 0);
}

char f_8e0f_0835(int player)
{
    d_61eb_da11 = 0;
    if (f_1a83_2ad4(d_28d4_1958[0][18 * 1500 + player]))
        f_8e0f_0881(player);
    else if (f_87dc_4e83(player, 0) == 0)
        d_61eb_da11 = -1;
    return d_61eb_da11;
}

void f_8e0f_0881(int player)
{
    char buf[320];

    do {
        d_61eb_da04 = 0;
        f_1a83_48f9("Player request");
        f_1a83_4327(1.0, 4.0, d_28d4_82d0[player]);
        sprintf(buf, "%s now wants to stay", f_1a83_4485(player));
        f_1a83_0b12(7, buf);
        f_1a83_2da6(10, "", "View Factfile|Remove From List|Refuse Request|");
        f_1a83_3122(2);
        d_61eb_d80c = d_61eb_d59e;
        if (d_61eb_d80c == 0) {
            do
                f_a214_4120(player, -1, 0);
            while (!d_61eb_d9ca);
            d_61eb_d9ca = 0;
            d_61eb_da04 = -1;
        } else if (d_61eb_d80c == 1) {
            sprintf(buf, "%s removed from list", f_1a83_462c(player));
            f_1a83_0b7d(buf);
            d_61eb_da11 = -1;
        } else if (d_61eb_d80c == 2) {
            sprintf(buf, "%s remains listed", f_1a83_462c(player));
            f_1a83_0b7d(buf);
        }
    } while (d_61eb_da04 != 0);
}

void f_8e0f_099c(int player, char c, char d)
{
    long v;

    if (!d) {
        v = f_8e0f_0b64(player);
        d_61eb_dbac = f_215d_1629(d_61eb_dc48, 1);
        d_61eb_dbac[player] = v;
        d_432e_45de[player].f12 = d_61eb_dbac[player] == 0;
    }
    d_432e_45de[player].f8 = 1;
    d_432e_45de[player].f10 = c != 0;
    d_432e_45de[player].f24 = d != 0;
    d_3334_0000[11][player] = 0;
}

void f_8e0f_0a8c(int player)
{
    d_432e_45de[player].f8 = 0;
    d_432e_45de[player].f10 = 0;
    d_432e_45de[player].f12 = 0;
    d_432e_45de[player].f24 = 0;
    d_3334_0000[11][player] = 0;
    f_87dc_182c(player, 0);
}

void f_8e0f_0aee(int player)
{
    long v;

    v = f_8e0f_0b64(player);
    d_61eb_dbac = f_215d_1629(d_61eb_dc48, 1);
    d_61eb_dbac[player] = v;
    d_432e_45de[player].f12 = d_61eb_dbac[player] == 0;
}

long f_8e0f_0b64(int player)
{
    char buf[320];

    if (f_1a83_2ad4(d_28d4_1958[0][18 * 1500 + player])) {
        d_61eb_d9a2 = 1;
        d_61eb_d7e2 = 8;
        f_87dc_3bd1(1, player);
        d_61eb_db45 = f_1a83_01d6(player, d_28d4_1958[0][18 * 1500 + player]);
        if (d_432e_45de[player].f8) {
            if (d_61eb_db45 > 0)
                sprintf(buf, "%s is valued at %ld", f_1a83_462c(player), d_61eb_db45);
            else
                sprintf(buf, "%s on a free transfer", f_1a83_462c(player));
        } else
            sprintf(buf, "%s not yet valued", f_1a83_462c(player));
        f_87dc_41a3(1, buf);
        do {
            d_61eb_d9df = -1;
            d_61eb_d808 = d_28d4_1958[0][18 * 1500 + player];
            d_61eb_d7ec = f_87dc_3def(1, d_61eb_db45 / 1000, 0, player);
            if (d_61eb_da05) {
                do
                    f_a214_4120(player, -1, 0);
                while (!d_61eb_d9ca);
                d_61eb_d9ca = 0;
                d_61eb_d9df = 0;
                f_87dc_3bd1(1, player);
            }
            d_61eb_db45 = (long)d_61eb_d7ec * 1000;
            d_61eb_db45 = d_61eb_db45 / 1000;
            d_61eb_db45 = d_61eb_db45 * 1000;
            if (d_61eb_d9df) {
                d_61eb_db49 = f_1a83_01d6(player, -1) * 0.75;
                if (d_61eb_db45 < d_61eb_db49 && d_61eb_db49 >= 5000) {
                    f_87dc_41a3(1, "The board expect more for him");
                    d_61eb_d9df = 0;
                } else if (f_1a83_01d6(player, -1) * 3 < d_61eb_db45) {
                    sprintf(buf, "He's not worth %ld", d_61eb_db45);
                    f_87dc_41a3(1, buf);
                    d_61eb_d9df = 0;
                }
            }
        } while (!d_61eb_d9df);
        if (d_61eb_db45 > 0)
            sprintf(buf, "%s is valued at %ld", f_1a83_462c(player), d_61eb_db45);
        else
            sprintf(buf, "%s is given a free transfer", f_1a83_462c(player));
        f_87dc_41a3(6, buf);
    } else {
        d_61eb_db45 = f_1a83_01d6(player, d_28d4_1958[0][18 * 1500 + player]);
        if (10000 - (d_28d4_1958[23][player] == 1 ? 5000 : 0) > d_61eb_db45)
            d_61eb_db45 = 0;
    }
    return d_61eb_db45;
}

void f_8e0f_0e88(int player)
{
    char buf[320];

    d_61eb_d9a2 = 1;
    d_61eb_d7e2 = 8;
    f_87dc_3bd1(3, player);
    d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
    sprintf(buf, "He gets %d per week", d_61eb_d826 = d_61eb_dbb8[4][player]);
    f_87dc_41a3(1, buf);
    d_61eb_d7fe = f_87dc_3a09(player, d_28d4_1958[0][18 * 1500 + player]);
    d_61eb_d828 = -1;
    do {
        d_61eb_d9df = -1;
        if (d_61eb_d828 == -1)
            d_61eb_d7e8 = d_61eb_d826;
        else
            d_61eb_d7e8 = d_61eb_d828;
        d_61eb_d7ec = f_87dc_3def(3, d_61eb_d7e8, 100, player);
        if (d_61eb_da05) {
            do
                f_a214_4120(player, -1, 0);
            while (!d_61eb_d9ca);
            d_61eb_d9ca = 0;
            d_61eb_d9df = 0;
            f_87dc_3bd1(3, player);
        }
        d_61eb_d828 = d_61eb_d7ec;
        if (d_61eb_d9df) {
            if (d_61eb_d828 < d_61eb_d826) {
                f_87dc_41a3(1, "He refuses lower pay");
                d_61eb_d9df = 0;
            } else if (d_61eb_d828 > d_61eb_d7fe) {
                f_87dc_41a3(1, "The board refuse to spend that per week");
                d_61eb_d9df = 0;
            }
        }
    } while (!d_61eb_d9df);
    if (d_61eb_d828 != d_61eb_d826)
        strcpy(buf, "He accepts the pay rise");
    else
        sprintf(buf, "His wages stay at %d per week", d_61eb_d828);
    f_87dc_41a3(6, buf);
    d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 1);
    d_61eb_dbb8[4][player] = d_61eb_d828;
    d_61eb_d654 = d_3334_ca6e[0][d_28d4_1958[18][player]] - 646;
    sprintf(buf, "%04d", player);
    d_61eb_dbe8 = f_215d_1629(d_61eb_dc66, 0);
    if (f_215d_0b10(d_61eb_dbe8[d_61eb_d654], buf) == 0
        && d_61eb_d826 + 50 + f_215d_0d96(100) <= d_61eb_d828
        && f_215d_0d96(4) == 0
        && d_28d4_1958[0][player] > d_28d4_1958[15][player]) {
        d_28d4_1958[15][player] = d_28d4_1958[0][player];
        if (f_1a83_2ad4(d_28d4_1958[0][18 * 1500 + player]) == 0 && d_28d4_1958[20][player] == 0)
            f_1a83_12f6(player);
    }
    sprintf(buf, "%04d ", player);
    d_61eb_dbe8 = f_215d_1629(d_61eb_dc66, 1);
    strcat(d_61eb_dbe8[d_61eb_d654], buf);
}

void f_8e0f_1172(int player, char c)
{
    if (c) {
        switch (d_3334_0000[17][player]) {
        case 5: case 7: case 8:
            d_61eb_d80e = 0;
            break;
        case 1:
            d_61eb_d80e = 1;
            break;
        case 0: case 2: case 3:
            d_61eb_d80e = 2;
            break;
        case 4: case 6: case 9:
            d_61eb_d80e = 3;
            break;
        }
    } else {
        switch (d_3334_0000[17][player]) {
        case 0: case 1: case 5: case 7: case 8:
            d_61eb_d80e = (int)f_215d_0d96(2) + 2;
            break;
        case 2: case 3: case 4: case 6: case 9:
            d_61eb_d80e = 3;
            break;
        }
    }
    if (d_61eb_d80e == 0 && f_215d_0d96(3) == 0)
        d_61eb_d80e = 1;
    else if (d_61eb_d80e == 1 && f_215d_0d96(3) == 0)
        d_61eb_d80e = 2;
    else if (d_61eb_d80e == 2 && f_215d_0d96(3) == 0)
        d_61eb_d80e = 1;
    else if (d_61eb_d80e == 3 && f_215d_0d96(3) == 0)
        d_61eb_d80e = 2;
    if (d_61eb_d80e == 0) {
        d_28d4_1958[15][player] = f_215d_13af(d_28d4_1958[15][player] + (int)f_215d_0d96(25), d_28d4_1958[9][player] + 25);
        if (*(d_28d4_1958[20] + player) == 0 && f_1a83_2ad4(d_28d4_1958[0][18 * 1500 + player]) == 0)
            f_1a83_12f6(player);
    } else if (d_61eb_d80e == 2) {
        d_28d4_1958[15][player] = f_215d_1343(d_28d4_1958[15][player] - (int)f_215d_0d96(25), 10);
        if (d_432e_45de[player].f7 && f_1a83_2ad4(d_28d4_1958[0][18 * 1500 + player]) == 0)
            f_1a83_0e84(player);
    } else if (d_61eb_d80e == 3)
        d_432e_45de[player].f16 = 1;
}

long f_8e0f_138d(int player)
{
    long v;

    v = f_1a83_01d6(player, -1);
    if (v <= 100000L)
        return 200;
    if (v <= 300000L)
        return 300;
    if (v <= 500000L)
        return 400;
    if (v <= 1000000L)
        return 500;
    if (v <= 2000000L)
        return 600;
    return 800;
}

void f_8e0f_141f(void)
{
    char buf[320];
    int n;
    char ok;
    unsigned char c;

    memset(d_28d4_1928, 0, 38);
    memset(d_432e_39c2, 0, 60);
    f_9f8d_1379(0);
    if (d_61eb_d980 > -1) {
        d_61eb_d82c = d_3334_cee2[d_61eb_d980];
        do {
            f_1a83_48f9("Find Player");
            f_1a83_4327(1.0, 4.0, d_61eb_d82c);
            f_1a83_2da6(7, "", "*Exit|Normal Search|Scout Search|Transfer List|Other Players|Shortlist|Scout Reports|Transfer News|");
            f_1a83_3122(7);
            d_61eb_d82e = d_61eb_d59e;
            if (d_61eb_d82e == 1 || d_61eb_d82e == 2) {
                ok = 1;
                memset(d_432e_39c2, 0, 60);
                d_61eb_dba8 = f_215d_1629(d_61eb_dc46, 1);
                memset(d_61eb_dba8, -1, 3000);
                if (d_61eb_d82e == 2) {
                    c = f_b26d_2715(d_61eb_d82c, "Search Options");
                    if (c < 255)
                        d_432e_39c2[c + 42] = -1;
                    else
                        ok = 0;
                } else
                    d_432e_39c2[46] = -1;
                if (ok != 1)
                    continue;
                f_8e0f_1c7b(0, 6, 6, 3, "Positions", "Goalkeeper|Defender|Midfielder|Attacker|Right Sided|Left Sided|Central|");
                if (d_61eb_d9ca)
                    continue;
                f_8e0f_1c7b(8, 9, 6, 3, "Country", "Italy|Foreign|");
                if (d_61eb_d9ca)
                    continue;
                f_8e0f_1c7b(11, 19, 6, 3, "Requirements", "Passing|Tackling|Pace|Heading|Flair|Creativity|Goalscoring|Influence|Stamina|");
                if (d_61eb_d9ca)
                    continue;
                f_8e0f_1c7b(21, 27, 6, 3, "Approx Value", "0K - 100K|100K - 300K|300K - 500K|500K - 1M|1M - 2M|2M+|To Loan|");
                if (d_61eb_d9ca)
                    continue;
                f_8e0f_1c7b(29, 31, 6, 3, "Status", "Listed|Free Agent|Unsettled|");
                if (d_61eb_d9ca)
                    continue;
                f_8e0f_1c7b(33, 34, 6, 3, "Division", "Serie A|Serie B|");
                if (d_61eb_d9ca)
                    continue;
                f_8e0f_1c7b(36, 40, 6, 3, "Age", "16 - 20|20 - 24|24 - 30|30 - 33|33+|");
                if (d_61eb_d9ca)
                    continue;
                f_8e0f_1e39("Player Search", 0, d_61eb_d58e - 1);
            } else if (d_61eb_d82e == 5) {
                d_61eb_d654 = d_3334_ca6e[0][d_61eb_d82c] - 646;
                d_61eb_d830 = -1;
                do {
                    d_61eb_d6aa = d_432e_066e[d_61eb_d82c][0];
                    if (d_61eb_d6aa > 0) {
                        f_1a83_5ccd();
                        f_1a83_48f9("Short List");
                        f_8e0f_2713(d_61eb_d82c);
                        f_1a83_5ce1();
                        f_1a83_4d96(2, 29.0, 1.25, 1, 8, 37, " WCH");
                        f_1a83_4d96(2, 34.25, 1.25, 1, 8, 37, " REC");
                        f_1a83_4d96(2, 1.25, 22.5, 1, 12, 72, "   DEL");
                        f_1a83_4d96(2, 10.875, 22.5, 1, 4, 224, "            EXIT");
                        f_1a83_5ccd();
                        for (d_61eb_d61a = 1; d_61eb_d61a <= d_61eb_d6aa; d_61eb_d61a++)
                            f_8e0f_2925(d_432e_066e[d_61eb_d82c][d_61eb_d61a], d_61eb_d61a);
                        f_1a83_5ce1();
                        f_8e0f_2d8d(0, 0);
                        d_61eb_da14 = 0;
                        d_61eb_da15 = 0;
                        do {
                            d_61eb_d832 = f_1a83_5296(-1);
                            if ((d_61eb_d832 == 0 || d_61eb_d832 == 2 || d_61eb_d832 == 3 || d_61eb_d832 == 4) && d_61eb_da15) {
                                f_1a83_5117(1, 0);
                                d_61eb_da15 = 0;
                            }
                            if ((d_61eb_d832 == 0 || d_61eb_d832 == 1 || d_61eb_d832 == 2 || d_61eb_d832 == 4) && d_61eb_da14) {
                                f_1a83_5117(3, 0);
                                d_61eb_da14 = 0;
                            }
                            if (d_61eb_d832 == 1 && d_61eb_da15 == 0) {
                                f_1a83_5117(1, -1);
                                d_61eb_da15 = -1;
                            }
                            if (d_61eb_d832 == 3 && d_61eb_da14 == 0) {
                                f_1a83_5117(3, -1);
                                d_61eb_da14 = -1;
                            }
                            if (d_61eb_d832 == 2)
                                f_8e0f_2d8d(0, -1);
                        } while (d_61eb_d832 <= 3);
                        if (d_61eb_d832 == 4)
                            d_61eb_d9c8 = -1;
                        else if (d_61eb_d832 >= 5) {
                            d_61eb_d5b8 = d_432e_066e[d_61eb_d82c][d_61eb_d832 - 4];
                            if (d_61eb_da15) {
                                if (f_1a83_6b4c(d_61eb_d5b8))
                                    f_1a83_0bb7("Can't watch foreign|based players");
                                else
                                    f_b26d_27fd(d_61eb_d82c, d_61eb_d5b8);
                                d_61eb_d9c8 = 0;
                            } else if (d_61eb_da14) {
                                d_432e_066e[d_61eb_d82c][d_61eb_d832 - 4] = d_432e_066e[d_61eb_d82c][d_432e_066e[d_61eb_d82c][0]];
                                d_432e_0b2e[d_61eb_d82c][d_61eb_d832 - 4] = d_432e_0b2e[d_61eb_d82c][d_432e_066e[d_61eb_d82c][0]];
                                d_432e_066e[d_61eb_d82c][0]--;
                                sprintf(buf, "%s removed", f_1a83_462c(d_61eb_d5b8));
                                f_1a83_0bb7(buf);
                                d_61eb_d9c8 = d_432e_066e[d_61eb_d82c][0] == 0;
                                d_61eb_d9c8;
                            } else {
                                do {
                                    d_61eb_da4e = 0;
                                    f_a214_4120(d_61eb_d5b8, d_61eb_d82c, -1);
                                    f_87dc_4c9b(d_61eb_d5b8, d_61eb_d5ee);
                                    if (d_61eb_da4e) {
                                        d_432e_066e[d_61eb_d82c][d_61eb_d832 - 4] = n = d_61eb_d58e - 1;
                                        d_61eb_d5b8 = n;
                                    }
                                } while (!d_61eb_d9ca);
                                d_61eb_d9c8 = d_432e_066e[d_61eb_d82c][0] == 0;
                            }
                        }
                    } else {
                        f_1a83_0bb7("Nobody shortlisted");
                        d_61eb_d9c8 = -1;
                    }
                } while (!d_61eb_d9c8);
            } else if (d_61eb_d82e == 3) {
                memset(d_432e_39c2, 0, 60);
                d_61eb_dba8 = f_215d_1629(d_61eb_dc46, 1);
                memset(d_61eb_dba8, -1, 3000);
                d_432e_39c2[7] = -1;
                d_432e_39c2[10] = -1;
                d_432e_39c2[20] = -1;
                d_432e_39c2[28] = -1;
                d_432e_39c2[29] = -1;
                d_432e_39c2[35] = -1;
                d_432e_39c2[41] = -1;
                d_432e_39c2[46] = -1;
                f_8e0f_1e39("Transfer List", 0, d_61eb_d58e - 1);
            } else if (d_61eb_d82e == 6)
                f_b26d_2a9b(d_61eb_d980 + 122);
            else if (d_61eb_d82e == 4) {
                memset(d_432e_39c2, 0, 60);
                d_61eb_dba8 = f_215d_1629(d_61eb_dc46, 1);
                memset(d_61eb_dba8, -1, 3000);
                d_432e_39c2[7] = -1;
                d_432e_39c2[10] = -1;
                d_432e_39c2[20] = -1;
                d_432e_39c2[28] = -1;
                d_432e_39c2[32] = -1;
                d_432e_39c2[35] = -1;
                d_432e_39c2[41] = -1;
                d_432e_39c2[46] = -1;
                f_8e0f_1e39("Plyrs Abroad/Serie C", 1000, d_61eb_d590 + 999);
            } else if (d_61eb_d82e == 7)
                f_ab30_62c1(0);
        } while (d_61eb_d82e != 0);
    }
}

void f_8e0f_1b5f(int team)
{
    do {
        d_61eb_d6aa = d_432e_066e[team][0];
        if (d_61eb_d6aa > 0) {
            f_1a83_48f9("Short List");
            f_8e0f_2713(team);
            f_1a83_4d96(2, 1.25, 22.5, 1, 4, 0x12d, "                 EXIT");
            for (d_61eb_d61a = 1; d_61eb_d61a <= d_61eb_d6aa; d_61eb_d61a++)
                f_8e0f_2925(d_432e_066e[team][d_61eb_d61a], d_61eb_d61a);
            do
                d_61eb_d832 = f_1a83_5296(d_61eb_d5e2);
            while (d_61eb_d832 <= 0);
            if (d_61eb_d832 == 1)
                d_61eb_d9c8 = -1;
            else if (d_61eb_d832 >= 2) {
                d_61eb_d5b8 = d_432e_066e[team][d_61eb_d832 - 1];
                do
                    f_a214_4120(d_61eb_d5b8, team, -1);
                while (!d_61eb_d9ca);
                d_61eb_d9c8 = d_432e_066e[team][0] == 0;
            }
        } else {
            f_1a83_0bb7("Nobody shortlisted");
            d_61eb_d9c8 = -1;
        }
    } while (!d_61eb_d9c8);
}

void f_8e0f_1c7b(int a, int b, int bg, int fg, char far *s1, char far *s2)
{
    char buf[320];

    f_1a83_48f9("Search options");
    sprintf(buf, " Select %s ", s1);
    f_1a83_3c08(1.0, 4.0, bg, fg, 0, buf);
    sprintf(buf, "*Exit|*Continue|%s", s2);
    f_1a83_2da6(7, "", buf);
    d_61eb_d834 = b - a + 2;
    do {
        f_1a83_3122(-d_61eb_d834);
        d_61eb_d836 = d_61eb_d59e;
        if (d_61eb_d836 > 1) {
            if (d_432e_39c0[d_61eb_d836 + a] == 0)
                f_8e0f_1dad(d_61eb_d836, -1, a);
            else
                f_8e0f_1dad(d_61eb_d836, 0, a);
        }
    } while (d_61eb_d836 >= 2);
    d_61eb_da16 = 0;
    for (d_61eb_d838 = 2; d_61eb_d838 <= d_61eb_d834; d_61eb_d838++)
        if (d_432e_39c0[d_61eb_d838 + a]) {
            d_61eb_da16 = -1;
            d_61eb_d838 = d_61eb_d834;
        }
    if (d_61eb_da16 == 0)
        d_432e_39c2[d_61eb_d834 + a - 1] = -1;
    d_61eb_d9ca = d_61eb_d836 == 0 ? -1 : 0;
}

void f_8e0f_1dad(int x, char on, int a)
{
    if (on) {
        d_432e_39c2[x + a - 2] = -1;
        f_1a83_30ca(1, 12, x);
    } else {
        d_432e_39c2[x + a - 2] = 0;
        f_1a83_30ca((int)d_432e_0ece[x] / 16, (int)d_432e_0ece[x] % 16, x);
    }
}

void f_8e0f_1e39(char far *title, unsigned from, unsigned to)
{
    int n;

    n = 0;
    f_1a83_48f9("");
    f_1a83_3a43(-1.0, 12.5, 1, "Searching");
    for (d_61eb_d5b8 = from; d_61eb_d5b8 <= to; d_61eb_d5b8++) {
        unsigned char c;

        d_61eb_d9df = -1;
        if (d_28d4_1958[18][d_61eb_d5b8] == d_61eb_d82c)
            d_61eb_d9df = 0;
        if (f_1a83_6b4c(d_61eb_d5b8) && d_432e_45de[d_61eb_d5b8].f29 == 1)
            d_61eb_d9df = 0;
        if (d_61eb_d9df && d_432e_39c0[9] == 0)
            for (d_61eb_d7b6 = 0; d_61eb_d7b6 <= 6; d_61eb_d7b6++) {
                if (d_61eb_d7b6 == 0)
                    c = d_432e_45de[d_61eb_d5b8].f0;
                else if (d_61eb_d7b6 == 1)
                    c = d_432e_45de[d_61eb_d5b8].f1;
                else if (d_61eb_d7b6 == 2)
                    c = d_432e_45de[d_61eb_d5b8].f2;
                else if (d_61eb_d7b6 == 3)
                    c = d_432e_45de[d_61eb_d5b8].f3;
                else if (d_61eb_d7b6 == 4)
                    c = d_432e_45de[d_61eb_d5b8].f4;
                else if (d_61eb_d7b6 == 5)
                    c = d_432e_45de[d_61eb_d5b8].f5;
                else if (d_61eb_d7b6 == 6)
                    c = d_432e_45de[d_61eb_d5b8].f6;
                if (d_432e_39c0[d_61eb_d7b6 + 2] && c == 0) {
                    d_61eb_d9df = 0;
                    d_61eb_d7b6 = 6;
                }
            }
        if (d_61eb_d9df && d_432e_39c0[12] == 0) {
            char k;

            k = d_61eb_dbcc[9][d_61eb_d5b8];
            if (k == 0 && d_432e_39c0[10] == 0 || k && d_432e_39c0[11] == 0)
                d_61eb_d9df = 0;
        }
        if (d_61eb_d9df && d_432e_39c0[22] == 0)
            for (d_61eb_d7b6 = 11; d_61eb_d7b6 <= 17; d_61eb_d7b6++)
                if (d_432e_39c0[d_61eb_d7b6 + 2] && d_28d4_1958[d_61eb_d7b6 - 10][d_61eb_d5b8] < 15) {
                    d_61eb_d9df = 0;
                    d_61eb_d7b6 = 17;
                }
        if (d_61eb_d9df && d_432e_39c0[22] == 0 && d_432e_39c0[19]) {
            d_61eb_d840 = d_3334_0000[0][d_61eb_d5b8] + d_3334_0000[5][d_61eb_d5b8];
            if (d_61eb_d840 >= 30) {
                d_61eb_d7b0 = d_3334_0000[1][d_61eb_d5b8] + d_3334_0000[6][d_61eb_d5b8];
                if (d_61eb_d7b0 / d_61eb_d840 < 0.2)
                    d_61eb_d9df = 0;
            }
        }
        if (d_61eb_d9df && d_432e_39c0[22] == 0 && d_432e_39c0[20] && d_28d4_1958[12][d_61eb_d5b8] < 14)
            d_61eb_d9df = 0;
        if (d_61eb_d9df && d_432e_39c0[22] == 0 && d_432e_39c0[21]
            && *(d_28d4_1958[22] + d_61eb_d5b8) < 14)
            d_61eb_d9df = 0;
        if (d_61eb_d9df) {
            d_61eb_da17 = 0;
            if (d_432e_39c0[30])
                d_61eb_da17 = -1;
            else if (d_432e_45de[d_61eb_d5b8].f8 && d_432e_45de[d_61eb_d5b8].f24)
                d_61eb_da17 = d_432e_39c0[29];
            else {
                d_61eb_db55 = f_1a83_01d6(d_61eb_d5b8, d_28d4_1958[18][d_61eb_d5b8]);
                if (d_61eb_db55 <= 100000L)
                    d_61eb_da17 = d_432e_39c0[23];
                else if (d_61eb_db55 <= 300000L)
                    d_61eb_da17 = d_432e_39c0[24];
                else if (d_61eb_db55 <= 500000L)
                    d_61eb_da17 = d_432e_39c0[25];
                else if (d_61eb_db55 <= 1000000L)
                    d_61eb_da17 = d_432e_39c0[26];
                else if (d_61eb_db55 <= 2000000L)
                    d_61eb_da17 = d_432e_39c0[27];
                else
                    d_61eb_da17 = d_432e_39c0[28];
            }
            if (d_61eb_da17 == 0)
                d_61eb_d9df = 0;
        }
        if (d_61eb_d9df && d_432e_39c0[37] == 0
            && d_432e_39c0[f_1a83_6d8b(d_28d4_1958[18][d_61eb_d5b8]) + 35] == 0)
            d_61eb_d9df = 0;
        if (d_61eb_d9df) {
            d_61eb_da18 = 0;
            if (d_432e_39c0[43])
                d_61eb_da18 = -1;
            else {
                d_61eb_d83a = d_28d4_1958[17][d_61eb_d5b8];
                if (d_61eb_d83a <= 20)
                    d_61eb_da18 = d_432e_39c0[38];
                else if (d_61eb_d83a <= 24)
                    d_61eb_da18 = d_432e_39c0[39];
                else if (d_61eb_d83a <= 30)
                    d_61eb_da18 = d_432e_39c0[40];
                else if (d_61eb_d83a <= 33)
                    d_61eb_da18 = d_432e_39c0[41];
                else
                    d_61eb_da18 = d_432e_39c0[42];
            }
            if (d_61eb_da18 == 0)
                d_61eb_d9df = 0;
        }
        if (d_61eb_d9df && d_432e_39c0[48] == 0)
            for (c = 0; c <= 3; c += 1)
                if (d_432e_39c0[c + 44] && !f_8e0f_2fa1(d_61eb_d5b8, d_61eb_d82c, c)) {
                    d_61eb_d9df = 0;
                    c = 3;
                }
        if (d_61eb_d9df && d_432e_39c0[31] && !d_432e_45de[d_61eb_d5b8].f8)
            d_61eb_d9df = 0;
        if (d_61eb_d9df && d_432e_39c0[32] && d_3334_a410[d_61eb_d5b8] > 0)
            d_61eb_d9df = 0;
        if (d_61eb_d9df && d_432e_39c0[33] && !f_1a83_6728(d_61eb_d5b8, -1))
            d_61eb_d9df = 0;
        if (d_61eb_d9df) {
            n++;
            d_61eb_dba8 = f_215d_1629(d_61eb_dc46, 1);
            d_61eb_dba8[n - 1] = d_61eb_d5b8;
        }
    }
    if (n > 0) {
        d_61eb_d83c = 1;
        d_61eb_d830 = -1;
        do {
            unsigned char c;
            unsigned char c2;
            char buf[40];

            d_61eb_da19 = 0;
            f_1a83_5ccd();
            f_1a83_48f9(title);
            f_8e0f_2713(d_61eb_d82c);
            f_1a83_5ce1();
            c = n / 15 + (n % 15 > 0 ? 1 : 0);
            c2 = d_61eb_d83c / 15 + 1;
            sprintf(buf, " %d/%d", c2, c);
            f_1a83_3450(34.625, 1.125, 0, 1, 0x24, buf);
            f_1a83_4d96(2, 34.25, 2.0, 1, 8, 0x25, " REC");
            f_8e0f_2815();
            d_61eb_d83e++;
            d_61eb_d6aa = 0;
            for (d_61eb_d61a = d_61eb_d83c; d_61eb_d83c + 14 >= d_61eb_d61a; d_61eb_d61a++) {
                d_61eb_dba8 = f_215d_1629(d_61eb_dc46, 0);
                d_61eb_d5b8 = d_61eb_dba8[d_61eb_d61a - 1];
                if (d_61eb_d5b8 <= -1)
                    break;
                d_28d4_1928[d_61eb_d6aa] = d_61eb_d5b8;
                d_61eb_d6aa++;
            }
            f_1a83_5ccd();
            for (d_61eb_d61a = 1; d_61eb_d61a <= d_61eb_d6aa; d_61eb_d61a++)
                f_8e0f_2925(d_28d4_1926[d_61eb_d61a], d_61eb_d61a);
            f_1a83_5ce1();
            f_8e0f_2d8d(1, 0);
            do {
                d_61eb_d832 = f_1a83_5296(-1);
                if (d_61eb_d832 == 1)
                    f_8e0f_2d8d(1, -1);
            } while (d_61eb_d832 < 2);
            if (d_61eb_d832 == 2 && d_61eb_d9b9 < 3)
                d_61eb_d83c -= 15;
            else if (d_61eb_d832 == 4 && d_61eb_d9b9 == 1 || d_61eb_d832 == 3 && d_61eb_d9b9 == 3)
                d_61eb_d83c += 15;
            else if (d_61eb_d832 >= d_61eb_d83e) {
                d_61eb_d6ba = d_61eb_d832 - d_61eb_d83e;
                d_61eb_d5b8 = d_28d4_1928[d_61eb_d6ba];
                do {
                    d_61eb_da4e = 0;
                    f_a214_4120(d_61eb_d5b8, d_61eb_d82c, -1);
                    f_87dc_4c9b(d_61eb_d5b8, d_61eb_d5ee);
                    if (d_61eb_da4e) {
                        d_28d4_1928[d_61eb_d6ba] = d_61eb_d58e - 1;
                        d_61eb_d5b8 = d_61eb_d58e - 1;
                        d_61eb_d9ca = -1;
                        d_61eb_d832 = d_61eb_d9b9 < 3 ? 3 : 2;
                    }
                } while (!d_61eb_d9ca);
            }
        } while (!(d_61eb_d832 == 3 && d_61eb_d9b9 < 3) && !(d_61eb_d832 == 2 && d_61eb_d9b9 > 2));
    } else
        f_1a83_0bb7("No players found");
}

void f_8e0f_2713(int team)
{
    char buf[320];

    sprintf(buf, " %s ", (char far *)d_61eb_b0ec[team]);
    f_1a83_3450(1.125, 3.0, -(d_3334_be02[team] / 16), d_3334_be02[team] % 16, 0, buf);
    f_1a83_3450(1.125, 4.5, 4, 1, 0x48, " NAME");
    f_1a83_3450(10.375, 4.5, 4, 1, 0x18, " POS");
    f_1a83_3450(13.625, 4.5, 4, 1, 0x48, " CLUB");
    f_1a83_3450(22.875, 4.5, 4, 1, 0x24, " AP GL");
    f_1a83_3450(27.625, 4.5, 4, 1, 0, " AV R ");
    f_1a83_3450(32.375, 4.5, 4, 1, 0, " VALUE   ");
}

/* the search screen's bottom bar, by what can be scrolled: label, colours, width */
static struct opt d_61eb_3b50[] = {
    {"   -SCR", 1, 9, 72}, {"       EXIT", 1, 2, 147}, {"   +SCR", 1, 9, 72}, {"*", 0, 0, 0}
};
static struct opt d_61eb_3b70[] = {
    {"   -SCR", 1, 9, 72}, {"            EXIT", 1, 2, 224}, {"*", 0, 0, 0}
};
static struct opt d_61eb_3b88[] = {
    {"            EXIT", 1, 2, 224}, {"   +SCR", 1, 9, 72}, {"*", 0, 0, 0}
};
static struct opt d_61eb_3ba0[] = {
    {"                 EXIT", 1, 2, 301}, {"*", 0, 0, 0}
};

void f_8e0f_2815(void)
{
    float x;
    struct opt far *p;

    d_61eb_dba8 = f_215d_1629(d_61eb_dc46, 0);
    d_61eb_d9b9 = (d_61eb_d83c == 1 ? 2 : 0) + (d_61eb_dba8[d_61eb_d83c + 14] == -1 ? 1 : 0) + 1;
    if (d_61eb_d9b9 == 1)
        p = d_61eb_3b50;
    else if (d_61eb_d9b9 == 2)
        p = d_61eb_3b70;
    else if (d_61eb_d9b9 == 3)
        p = d_61eb_3b88;
    else
        p = d_61eb_3ba0;
    d_61eb_d83e = 1;
    x = 1.25;
    do {
        f_1a83_4d96(2, x, 22.5, p->a, p->b, p->w, p->s);
        x += (p->w + 5) / 8.0;
        d_61eb_d83e++;
        p++;
    } while (strcmp(p->s, "*") != 0);
}

/* one row of the search screen: player p's name, positions, club, appearances and goals,
   average rating and value */
void f_8e0f_2925(int p, int row)
{
    char c;
    char a[5];
    char b[6];
    int club;
    char buf[320];

    c = 0;
    if (row & 1)
        d_61eb_d5f0 = 14;
    else
        d_61eb_d5f0 = 8;
    if (p < d_61eb_d58e) {
        d_61eb_d7da = f_87dc_291e(p, d_61eb_d82c);
        c = f_87dc_274f(p, d_61eb_d82c, d_61eb_d7da);
    }
    sprintf(buf, " %.11s", f_1a83_462c(p));
    f_1a83_4d96(0, 1.125, row + 5, c == 2 ? 6 : 1, d_61eb_d5f0, 0x48, buf);
    club = d_3334_0000[7][p] < 255 ? d_3334_0000[7][p] : d_28d4_1958[0][18 * 1500 + p];
    strcpy(d_432e_d855, " ");
    if (d_432e_45de[p].f0)
        strcat(d_432e_d855, "GK");
    if (d_432e_45de[p].f1)
        strcat(d_432e_d855, "D");
    if (d_432e_45de[p].f2)
        strcat(d_432e_d855, "M");
    if (d_432e_45de[p].f3)
        strcat(d_432e_d855, "A");
    f_1a83_3450(10.375, row + 5, 4, 5, 0x18, d_432e_d855);
    if (club < 38)
        sprintf(buf, " %.11s", (char far *)d_61eb_b0ec[club]);
    else if (club >= 140)
        sprintf(buf, " %.11s", d_53fc_0000[club - 140]);
    f_1a83_3450(13.625, row + 5, 1, 12, 0x48, buf);
    d_61eb_d840 = d_3334_0000[0][p] + d_3334_0000[5][p];
    sprintf(a, "%d%s", d_61eb_d840, d_61eb_d840 < 10 ? " " : "");
    d_61eb_d7b0 = d_3334_0000[1][p] + d_3334_0000[6][p];
    sprintf(b, "%d%s", d_61eb_d7b0, d_61eb_d7b0 < 10 ? " " : "");
    sprintf(buf, " %s %s", a, b);
    f_1a83_3450(22.875, row + 5, 1, 4, 0x24, buf);
    d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
    sprintf(buf, " %s", f_a214_19b6(d_61eb_d840, d_61eb_dbb8[0][p] + d_61eb_dbb8[1][p]));
    f_1a83_3450(27.625, row + 5, 1, 4, 0x24, buf);
    if (d_432e_45de[p].f8 && d_432e_45de[p].f24)
        strcpy(buf, " To Loan");
    else {
        d_61eb_db05 = f_1a83_01d6(p, d_28d4_1958[0][18 * 1500 + p]);
        if (!d_432e_45de[p].f8)
            d_61eb_db05 = f_1a83_0d8f(d_61eb_db05);
        strcpy(d_432e_d6ed, f_1a83_0e35(d_61eb_db05));
        sprintf(buf, " %s", d_432e_d6ed);
    }
    f_1a83_3450(32.375, row + 5, 6, 3, 0x36, buf);
}

void f_8e0f_2d8d(int mode, char draw)
{
    char buf[320];

    if (d_61eb_d830 > -1 && draw) {
        f_215d_07ec(8, 0xa4, 0x138, 0xac);
        for (d_61eb_d61a = 1; d_61eb_d61a <= d_61eb_d6aa; d_61eb_d61a++)
            f_215d_07ec(2, d_61eb_d61a * 8 + 0x22, 7, d_61eb_d61a * 8 + 0x28);
    }
    do {
        d_61eb_d830 += draw ? 1 : 0;
        if (d_61eb_d830 == 4)
            d_61eb_d830 = -1;
        if (d_61eb_d830 > -1) {
            if (mode == 0) {
                d_61eb_d6aa = d_432e_066e[d_61eb_d82c][0];
                for (d_61eb_d61a = 1; d_61eb_d61a <= d_61eb_d6aa; d_61eb_d61a++)
                    d_28d4_1926[d_61eb_d61a] = d_432e_066e[d_61eb_d82c][d_61eb_d61a];
            }
            d_61eb_da1a = 0;
            for (d_61eb_d61a = 1; d_61eb_d61a <= d_61eb_d6aa; d_61eb_d61a++) {
                if (f_8e0f_2fa1(d_28d4_1926[d_61eb_d61a], d_61eb_d82c, d_61eb_d830)) {
                    f_1a83_3450(0.375, d_61eb_d61a + 5, 1, 2, 5, "R");
                    d_61eb_da1a = -1;
                }
            }
            if (d_61eb_da1a) {
                f_1a83_3450(1.125, 21.25, 1, 2, 0, "R");
                strcpy(d_432e_d73d, "");
                if (d_61eb_d830 == 3)
                    strcpy(d_432e_d73d, "youth ");
                sprintf(buf, " Recommended by %sscout %s ", d_432e_d73d,
                        f_1a83_4686(d_3334_cb06[d_61eb_d830][d_61eb_d82c], 0));
                f_1a83_3450(2.625, 21.25, 6, 3, 0, buf);
            }
        }
    } while (d_61eb_da1a == 0 && d_61eb_d830 != -1 && draw);
}

char f_8e0f_2fa1(int p, int team, int n)
{
    d_61eb_da1b = 0;
    if (n < 3 || n == 3 && d_28d4_1958[17][p] < 21) {
        d_61eb_d842 = d_3334_cb06[n][team];
        d_61eb_d7e6 = d_53fc_095c[d_3334_d680[d_61eb_d842]][d_3334_0000[17][p]];
        d_61eb_d844 = ((p + d_61eb_d842) % 200 <= d_3334_e0a8[d_61eb_d842]) * 0.075
            ? d_28d4_1958[9][p]
            : f_215d_1343(d_3334_0000[18][p], d_28d4_1958[0][p]);
        if (d_61eb_d7e6 < 8) {
            if (n < 3) {
                d_61eb_d846 = f_1a83_2b0c(team);
                d_61eb_d848 = 150;
            } else {
                d_61eb_d846 = 0;
                d_61eb_d848 = 175;
            }
        } else
            d_61eb_d848 = 180;
        d_61eb_d800 = f_1a83_2bdb(p);
        if (d_61eb_d844 >= d_61eb_d848 && d_61eb_d800 > d_61eb_d846
            && d_61eb_d800 < f_1a83_2b0c(team) + 4)
            d_61eb_da1b = -1;
    }
    return d_61eb_da1b;
}

void f_8e0f_3129(void)
{
    d_61eb_d850 = 0;
    d_61eb_da1c = -1;
    f_ab30_5ded(2);
    for (d_61eb_d5f6 = 0; d_61eb_d5f6 <= 645; d_61eb_d5f6++) {
        f_8e0f_3192(d_61eb_d5f6, (0x109 - d_61eb_d652 >= d_61eb_d5f6) - 2, 0);
        f_ab30_5f57(2, d_61eb_d5f6, 645);
    }
    d_61eb_da1c = 0;
}

void f_8e0f_3192(int p, int c, char flag)
{
    d_61eb_dbbc = f_215d_1629(d_61eb_dc50, 1);
    ((int far *)d_61eb_dbbc)[p] = f_ab30_3d3f(0);
    ((int far *)(d_61eb_dbbc + 1300))[p] = f_ab30_3db7(0);
    do {
        d_3334_cee2[p] = 0xff;
        if (flag == 0)
            d_3334_d16c[p] = f_215d_0d96(26) + 35;
        else
            d_3334_d16c[p] = 35;
        d_3334_d3f6[p] = 0;
        do {
            d_61eb_d84e = f_215d_0d96(10);
            d_61eb_d9df = d_61eb_d84e != 2 && d_61eb_d84e != 4 && d_61eb_d84e != 6
                          && d_61eb_d84e != 9;
        } while (!d_61eb_d9df);
        d_3334_d680[p] = d_61eb_d84e;
        do {
            d_61eb_d9df = -1;
            d_61eb_d62a = f_215d_0d96(100) + 1;
            if (d_61eb_d62a <= 60) {
                d_61eb_d75e = f_215d_0d96(3);
                if (d_61eb_d75e == 0 || d_61eb_d75e == 1)
                    d_61eb_d776 = d_61eb_d75e;
                else
                    d_61eb_d776 = 0;
            } else if (d_61eb_d62a <= 90) {
                d_61eb_d75e = f_215d_0d96(4);
                if (d_61eb_d75e != 3)
                    d_61eb_d776 = d_61eb_d75e + 5;
                else
                    d_61eb_d776 = 3;
            } else if (d_61eb_d62a <= 100)
                d_61eb_d776 = 2;
            d_61eb_d62a = f_215d_0d96(100) + 1;
            if (d_61eb_d62a <= 70)
                d_61eb_d9a4 = f_215d_0d96(3) > 0 ? 0 : 4;
            else if (d_61eb_d62a <= 85)
                d_61eb_d9a4 = 1;
            else if (d_61eb_d62a <= 95)
                d_61eb_d9a4 = 2;
            else
                d_61eb_d9a4 = 3;
            if ((d_61eb_d776 == 2 || d_61eb_d776 == 6) && d_61eb_d9a4 == 0)
                d_61eb_d9df = 0;
        } while (!d_61eb_d9df);
        d_3334_d90a[p] = (d_61eb_d9a4 << 4) + d_61eb_d776;
        d_61eb_da1d = 0;
        d_61eb_da1e = 0;
        for (d_61eb_d5fc = 3; d_61eb_d5fc >= 0; d_61eb_d5fc--) {
            d_61eb_d75e = f_215d_0d96(560) + 1;
            switch (d_61eb_d5fc) {
            case 0:
                d_61eb_da1f = d_61eb_d75e <= 80 && d_61eb_da1e == 0 && d_61eb_da1d == 0;
                break;
            case 1:
                d_61eb_da1f = d_61eb_d75e > 80 && d_61eb_d75e <= 160 && d_61eb_da1e == 0;
                break;
            case 2:
                d_61eb_da1f = d_61eb_d75e > 160 && d_61eb_d75e <= 480 && d_61eb_da1e == 0;
                break;
            case 3:
                d_61eb_da1f = d_61eb_d75e > 480;
                break;
            }
            if (d_61eb_da1f) {
                d_61eb_d800 = f_215d_0d96(51) + 50;
                d_61eb_d844 = d_61eb_d800 + f_215d_0d96(191 - d_61eb_d800) + 10;
                d_3334_db94[d_61eb_d5fc][p] = d_61eb_d800;
                d_3334_e5bc[d_61eb_d5fc][p] = d_61eb_d844;
                if (d_3334_d16c[p] > 35)
                    for (d_61eb_d5d0 = 35; d_61eb_d5d0 <= d_3334_d16c[p] - 1; d_61eb_d5d0++)
                        f_8e0f_384e(p, d_61eb_d5fc);
                if (d_61eb_d5fc == 2)
                    d_61eb_da1d = -1;
                else if (d_61eb_d5fc == 3)
                    d_61eb_da1e = -1;
            } else {
                d_3334_db94[d_61eb_d5fc][p] = 10;
                d_3334_e5bc[d_61eb_d5fc][p] = 10;
            }
        }
        if (c > -2) {
            d_61eb_da20 = 0;
            d_61eb_d75e = 0;
            do {
                if (c == -1)
                    d_61eb_d72a = f_215d_0d96(38);
                else
                    d_61eb_d72a = c;
                d_61eb_d65c = f_1a83_2ad4(d_61eb_d72a) ? 1 : 0;
                d_61eb_d7be = f_1a83_2b0c(d_61eb_d72a);
                for (d_61eb_d852 = d_61eb_d65c; d_61eb_d852 <= 6; d_61eb_d852++) {
                    if (d_3334_ca6e[d_61eb_d852][d_61eb_d72a] == 650) {
                        d_61eb_d7e6 = d_53fc_095c[d_3334_c9d6[d_61eb_d72a]][d_3334_d680[p]];
                        if (d_61eb_d7e6 < 8) {
                            d_61eb_d854 = d_3334_db94[f_93a1_08a5(d_61eb_d852)][p] / 10 - d_61eb_d7be;
                            d_61eb_d854 = abs(d_61eb_d854);
                            if (d_61eb_d854 < 4) {
                                d_3334_ca6e[d_61eb_d852][d_61eb_d72a] = p;
                                d_3334_cee2[p] = d_61eb_d72a;
                                d_3334_efe4[p] = d_61eb_d852;
                                if (d_61eb_d852 == 0 && d_61eb_d5a4 == 1 && d_61eb_da4d) {
                                    char a, b;

                                    d_61eb_dbbc = f_215d_1629(d_61eb_dc50, 1);
                                    ((int far *)d_61eb_dbbc)[p] = d_432e_8568[0][d_61eb_d72a];
                                    ((int far *)(d_61eb_dbbc + 1300))[p] = d_432e_8568[1][d_61eb_d72a];
                                    a = d_3334_d90a[p] / 16;
                                    b = d_3334_d90a[p] % 16;
                                    if (d_432e_8568[2][d_61eb_d72a] < 255)
                                        a = d_432e_8568[2][d_61eb_d72a];
                                    if (d_432e_8568[3][d_61eb_d72a] < 255)
                                        b = d_432e_8568[3][d_61eb_d72a];
                                    d_3334_d90a[p] = (a << 4) + b;
                                    if (d_432e_8568[4][d_61eb_d72a] < 255)
                                        d_3334_db94[0][p] = d_432e_8568[4][d_61eb_d72a];
                                    if (d_432e_8568[5][d_61eb_d72a] < 255)
                                        d_3334_d680[p] = d_432e_8568[5][d_61eb_d72a];
                                }
                                if (d_61eb_d852 == 1 && d_61eb_d5a4 == 1 && d_61eb_da4d) {
                                    d_61eb_dbbc = f_215d_1629(d_61eb_dc50, 1);
                                    ((int far *)d_61eb_dbbc)[p] = d_432e_8568[6][d_61eb_d72a];
                                    ((int far *)(d_61eb_dbbc + 1300))[p] = d_432e_8568[7][d_61eb_d72a];
                                }
                                d_61eb_d852 = 6;
                                d_61eb_da20 = -1;
                            }
                        }
                    }
                }
                d_61eb_d75e++;
            } while (d_61eb_d75e < 20 && d_61eb_da20 == 0);
        }
    } while (d_61eb_da20 == 0 && c != -2);
}

void f_8e0f_384e(int p, int k)
{
    if (p < 646)
        d_3334_db94[k][p] = (d_3334_db94[k][p] * 2 + d_3334_e5bc[k][p]) / 3;
    if (k == 0 && d_61eb_da1c == 0 && d_3334_efe4[p] == 0 && d_3334_cee2[p] < 255
        && d_3334_caba[d_3334_cee2[p]] < 650) {
        d_61eb_d5e4 = f_1a83_6d8b(d_3334_cee2[p]);
        d_61eb_d856 = f_215d_13af(d_3334_bea2[d_3334_cee2[p]], 100 - d_61eb_d5e4 * 15) * 2;
        d_3334_db94[k][p] = (d_3334_db94[k][p] * 2 + d_61eb_d856) / 3;
    }
}

/* the yearly retirements: staff aged 35 or more may retire, then age every
   staff member by a year */
void f_8e0f_397b(void)
{
    char text[320];
    char title[80];

    f_ab30_5ded(2);
    for (d_61eb_d5f6 = 0; d_61eb_d5f6 <= 645; d_61eb_d5f6++) {
        f_ab30_5f57(2, d_61eb_d5f6, 1290);
        d_61eb_da13 = 0;
        d_61eb_d858 = d_3334_cee2[d_61eb_d5f6];
        if (d_3334_d16c[d_61eb_d5f6] >= 35) {
            d_61eb_da4a = 0;
            if (d_61eb_d858 < 255 && d_3334_c762[d_61eb_d858] > 0)
                d_61eb_da4a = -1;
            if (d_3334_d16c[d_61eb_d5f6] > f_215d_0d96(6) + 60 && d_61eb_da4a == 0) {
                if (d_61eb_d858 < 255) {
                    if (f_1a83_2ad4(d_61eb_d858) || d_3334_efe4[d_61eb_d5f6] == 0) {
                        strcpy(d_432e_d78d, f_93a1_1767(d_3334_efe4[d_61eb_d5f6]));
                        sprintf(title, "%s quits %s", d_432e_d78d, (char far *)d_61eb_b0ec[d_61eb_d858]);
                        sprintf(text, "%s %s has decided to retire from soccer at the age of %d.",
                                d_432e_d78d, f_1a83_4686(d_61eb_d5f6, 0), d_3334_d16c[d_61eb_d5f6]);
                        f_1a83_5844(d_61eb_d858, title, text);
                    }
                }
                if (d_61eb_d858 < 255 && d_3334_efe4[d_61eb_d5f6] == 0)
                    f_8e0f_3e07(d_61eb_d858, 3);
                f_8e0f_42bb(d_61eb_d5f6);
                f_8e0f_3192(d_61eb_d5f6, -2, 1);
                if (d_61eb_d858 < 255 && d_3334_efe4[d_61eb_d5f6] > 0)
                    f_8e0f_4ad9(d_61eb_d858, d_3334_efe4[d_61eb_d5f6]);
            } else if (d_61eb_d858 < 255 && d_61eb_da4a == 0 && d_3334_efe4[d_61eb_d5f6] > 0
                       && f_1a83_2ad4(d_61eb_d858) == 0
                       && f_1a83_2b0c(d_61eb_d858)
                          - d_3334_db94[f_93a1_08a5(d_3334_efe4[d_61eb_d5f6])][d_61eb_d5f6] / 10 > 4)
                f_8e0f_4ad9(d_61eb_d858, d_3334_efe4[d_61eb_d5f6]);
        }
        if (d_61eb_da13) {
            f_ab30_5c8d();
            f_ab30_5ded(2);
        }
    }
    for (d_61eb_d5f6 = 0; d_61eb_d5f6 <= d_61eb_d650 + 645; d_61eb_d5f6++) {
        f_ab30_5f57(2, d_61eb_d5f6 + 645, 1290);
        if (d_3334_d16c[d_61eb_d5f6] >= 35) {
            for (d_61eb_d5fc = 0; d_61eb_d5fc <= 3; d_61eb_d5fc++)
                f_8e0f_384e(d_61eb_d5f6, d_61eb_d5fc);
            d_3334_d16c[d_61eb_d5f6]++;
        }
    }
}

/* the weekly board pressure: an unsuccessful manager may lose his job */
void f_8e0f_3c9a(void)
{
    for (d_61eb_d5de = 0; d_61eb_d5de <= 37; d_61eb_d5de++) {
        if (d_3334_c762[d_61eb_d5de] == 0
            && (d_432e_b73b[0][d_61eb_d5de] != 0 || f_215d_0d96(3) > 0)) {
            if (d_3334_bea2[d_61eb_d5de] < 30 && d_61eb_d5a2 < 95 && f_215d_0d96(3) == 0
                && d_3334_d3f6[d_3334_ca6e[0][d_61eb_d5de]] == 0
                && d_432e_b73b[1][d_61eb_d5de] + d_432e_b73b[2][d_61eb_d5de]
                   + d_432e_b73b[4][d_61eb_d5de] + d_432e_b73b[5][d_61eb_d5de]
                   + d_432e_b73b[6][d_61eb_d5de] == 0)
                f_8e0f_3e07(d_61eb_d5de, 2);
            for (d_61eb_d5fc = 0; d_61eb_d5fc <= 6; d_61eb_d5fc++) {
                d_61eb_d5f6 = d_3334_ca6e[d_61eb_d5fc][d_61eb_d5de];
                if (d_61eb_d5f6 < 650 && d_3334_d3f6[d_61eb_d5f6] > 0)
                    d_3334_d3f6[d_61eb_d5f6] = d_3334_d3f6[d_61eb_d5f6]
                        - (d_61eb_d5a2 % 2 == 0 ? (char)1 : (char)0);
            }
        }
    }
}

/* the manager of club leaves: a = 0 takeover, 1 resignation, 2 sacked or resigned,
   3 retired, 4 left for another club */
void f_8e0f_3e07(int club, int a)
{
    char buf[320];

    if (a < 3) {
        if (a == 0) {
            sprintf(buf, "%s is to be replaced as manager of %s as part of the takeover.",
                    f_1a83_4686(d_3334_ca6e[0][club], 0), (char far *)d_61eb_b0ec[club]);
            f_1a83_5844(club, "Managerial news", buf);
        } else if (a == 1 || f_215d_0d96(4) == 0 && f_1a83_2ad4(club) == 0) {
            if (f_1a83_2ad4(club) == 0) {
                sprintf(buf, "%s has resigned as manager of %s.",
                        f_1a83_4686(d_3334_ca6e[0][club], 0), (char far *)d_61eb_b0ec[club]);
                f_1a83_5844(club, "Managerial news", buf);
            }
        } else {
            sprintf(buf, "%s has been given the sack by the %s board.",
                    f_1a83_4686(d_3334_ca6e[0][club], 0), (char far *)d_61eb_b0ec[club]);
            f_1a83_5844(club, "Managerial news", buf);
        }
        if (f_1a83_2ad4(club)) {
            f_b26d_0e1c(d_3334_ca6e[0][club] + 122, 0, 0, 0, 0, 0);
            f_b26d_1456(d_3334_ca6e[0][club] + 122);
            d_61eb_d652--;
            d_61eb_d9c4 = d_61eb_d652 == 0;
        }
        d_61eb_d862 = d_3334_ca6e[0][club];
        d_3334_cee2[d_61eb_d862] = 255;
        d_3334_d3f6[d_61eb_d862] = 0;
        d_3334_efe4[d_61eb_d862] = club + 7;
    }
    d_3334_bea2[club] = 50;
    d_3334_c762[club] = 3;
    d_61eb_d78e = d_3334_caba[club];
    d_3334_ca6e[0][club] = d_61eb_d78e;
    d_3334_efe4[d_61eb_d78e] = 0;
    d_3334_caba[club] = 650;
    if (a != 3)
        f_9f8d_0670(club);
}

/* the clubs looking for a manager draw up their shortlists */
void f_8e0f_402e(void)
{
    char buf[320];

    for (d_61eb_d5dc = 0; d_61eb_d5dc <= 37; d_61eb_d5dc++) {
        if (d_3334_c762[d_61eb_d5dc] > 1) {
            d_61eb_d7be = f_1a83_2b0c(d_61eb_d5dc);
            d_61eb_d75e = 0;
            d_61eb_d88c = d_61eb_d7be - (4 - d_3334_c762[d_61eb_d5dc]) * 4;
            d_61eb_d5e6 = d_61eb_d7be + 3;
            d_61eb_d98c = f_215d_0d96(9) + 10;
            d_61eb_dbd8 = f_215d_1629(d_61eb_dc5e, 0);
            for (; d_61eb_d75e < 200 && strlen(d_61eb_dbd8[d_61eb_d5dc]) < d_61eb_d98c * 4;
                 d_61eb_d75e++) {
                d_61eb_d5f6 = f_215d_0d96(d_61eb_d650 + 646);
                if (d_3334_d3f6[d_61eb_d5f6] == 0 && d_3334_efe4[d_61eb_d5f6] - 7 != d_61eb_d5dc) {
                    d_61eb_d800 = d_3334_db94[0][d_61eb_d5f6] / 10;
                    sprintf(d_432e_ec5f, "%03d", d_61eb_d5f6);
                    d_61eb_dbd8 = f_215d_1629(d_61eb_dc5e, 0);
                    if (f_215d_0b10(d_61eb_dbd8[d_61eb_d5dc], d_432e_ec5f) == 0
                        && d_61eb_d800 >= d_61eb_d88c && d_61eb_d800 <= d_61eb_d5e6) {
                        if (d_3334_cee2[d_61eb_d5f6] == 255 || d_61eb_d5f6 >= 646)
                            d_61eb_da44 = -1;
                        else
                            d_61eb_da44 = d_61eb_d7be - f_1a83_2b0c(d_3334_cee2[d_61eb_d5f6]) > 2.0;
                        if (d_61eb_da44) {
                            d_61eb_dbd8 = f_215d_1629(d_61eb_dc5e, 1);
                            strcat(d_61eb_dbd8[d_61eb_d5dc], d_432e_ec5f);
                            strcat(d_61eb_dbd8[d_61eb_d5dc], " ");
                            if (d_61eb_d5f6 >= 646) {
                                sprintf(buf, "%s have shortlisted %s as a possible replacement manager.",
                                        (char far *)d_61eb_b0ec[d_61eb_d5dc], f_1a83_4686(d_61eb_d5f6, 0));
                                f_1a83_5844(d_61eb_d5dc, "Job News", buf);
                            }
                        }
                    }
                }
            }
        }
    }
}

/* strike p off every shortlist */
void f_8e0f_42bb(int p)
{
    char buf[320];

    for (d_61eb_d5dc = 0; d_61eb_d5dc <= 37; d_61eb_d5dc++) {
        if (d_3334_c762[d_61eb_d5dc] > 0) {
            sprintf(buf, "%03d", p);
            d_61eb_dbd8 = f_215d_1629(d_61eb_dc5e, 1);
            d_61eb_d5d0 = f_215d_0b10(d_61eb_dbd8[d_61eb_d5dc], buf);
            if (d_61eb_d5d0 > 0)
                strcpy(&d_61eb_dbd8[d_61eb_d5dc][d_61eb_d5d0 - 1], "XXX");
        }
    }
}

/* the clubs whose search is over appoint the best candidate of their shortlist */
void f_8e0f_4365(void)
{
    char taken[650];
    char buf[320];

    memset(taken, 0, 650);
    for (d_61eb_d98e = 0; d_61eb_d98e <= 37; d_61eb_d98e++) {
        if (d_3334_c762[d_61eb_d98e] > 0) {
            d_3334_c762[d_61eb_d98e] = d_3334_c762[d_61eb_d98e] - 1;
            if (d_3334_c762[d_61eb_d98e] == 0) {
                d_61eb_dbd8 = f_215d_1629(d_61eb_dc5e, 0);
                strcpy(d_432e_e70f, d_61eb_dbd8[d_61eb_d98e]);
                if (d_432e_e70f[0] != 0) {
                    do {
                        d_61eb_d85a = -1;
                        for (d_61eb_d5d8 = 1; strlen(d_432e_e70f) >= d_61eb_d5d8; d_61eb_d5d8 += 4) {
                            sprintf(buf, "%.3s", &d_432e_e70f[d_61eb_d5d8 - 1]);
                            d_61eb_d986 = atol(buf);
                            if ((d_61eb_d5a4 > 1 || d_61eb_d5a4 == 1 && d_61eb_d986 < 646)
                                && taken[d_61eb_d986] == 0) {
                                d_61eb_d7ae = d_3334_db94[0][d_61eb_d986]
                                    - d_53fc_095c[d_3334_c9d6[d_61eb_d98e]][d_3334_d680[d_61eb_d986]]
                                    + f_215d_0d96(10) - f_215d_0d96(10);
                                if (d_61eb_d7ae > d_61eb_d5e6 || d_61eb_d85a == -1) {
                                    d_61eb_d9df = -1;
                                    if (d_3334_cee2[d_61eb_d986] < 255 && d_3334_d3f6[d_61eb_d986] == 0
                                        && d_3334_efe4[d_61eb_d986] - 7 != d_61eb_d98e
                                        && d_3334_c762[d_3334_cee2[d_61eb_d986]] > 0
                                        && d_3334_ca6e[0][d_3334_cee2[d_61eb_d986]] == d_61eb_d986
                                        && d_3334_cee2[d_61eb_d986] != d_61eb_d98e)
                                        d_61eb_d9df = 0;
                                    if (d_61eb_d9df) {
                                        d_61eb_d85a = d_61eb_d986;
                                        d_61eb_d5e6 = d_61eb_d7ae;
                                    }
                                }
                            }
                        }
                        d_61eb_da45 = -1;
                        if (d_61eb_d85a != -1 && d_61eb_d85a >= 646
                            && f_8e0f_4737(d_61eb_d85a, d_61eb_d98e) == 0) {
                            taken[d_61eb_d85a] = -1;
                            d_61eb_da45 = 0;
                        }
                    } while (!d_61eb_da45);
                    if (d_61eb_d85a != -1) {
                        d_61eb_d78e = d_3334_ca6e[0][d_61eb_d98e];
                        d_3334_ca6e[0][d_61eb_d98e] = 650;
                        d_3334_caba[d_61eb_d98e] = d_61eb_d78e;
                        d_3334_efe4[d_61eb_d78e] = 1;
                        d_3334_c762[d_61eb_d98e] = 0;
                        d_61eb_dbd8 = f_215d_1629(d_61eb_dc5e, 1);
                        strcpy(d_61eb_dbd8[d_61eb_d98e], "");
                        d_61eb_d85e = d_3334_cee2[d_61eb_d85a];
                        d_61eb_d860 = d_3334_efe4[d_61eb_d85a];
                        f_8e0f_4cc7(d_61eb_d85a, d_61eb_d98e, 0);
                        if (d_61eb_d85e < 255) {
                            if (d_61eb_d860 == 0) {
                                sprintf(buf, "%s are now looking for a new manager following the departure of %s.",
                                        (char far *)d_61eb_b0ec[d_61eb_d85e], f_1a83_4686(d_61eb_d85a, 0));
                                f_1a83_5844(d_61eb_d85e, "Managerial news", buf);
                                f_8e0f_3e07(d_61eb_d85e, 4);
                            } else
                                f_8e0f_4ad9(d_61eb_d85e, d_61eb_d860);
                        }
                        continue;
                    }
                }
                d_3334_c762[d_61eb_d98e] = 2;
            }
        }
    }
}

/* a club's job offer to the player: accept, refuse, negotiate; returns -1 if accepted */
char f_8e0f_4737(int p, int team)
{
    unsigned char n = 0;
    long sal;
    char buf[320];

    sal = f_ab30_0000(p, team) * 1000L;
    d_61eb_da29 = -1;
    d_61eb_da2a = 0;
    do {
        d_61eb_da04 = 0;
        f_1a83_48f9("Job Offer");
        sprintf(buf, " %s ", f_1a83_4686(p, 0));
        if (d_3334_cee2[p] == 0xff)
            d_61eb_d5f0 = 20;
        else
            d_61eb_d5f0 = d_3334_be02[d_3334_cee2[p]];
        f_1a83_3c08(1.0, 4.0, -(d_61eb_d5f0 / 16), d_61eb_d5f0 % 16, 0, buf);
        sprintf(buf, "%s want you as their manager", (char far *)d_61eb_b0ec[team]);
        f_1a83_0b12(7, buf);
        sprintf(buf, "They are offering \xa3%ld per year", sal);
        f_1a83_0b12(9, buf);
        f_1a83_2da6(12, "", "Accept Offer|Refuse Offer|Negotiate Salary|League Table|Squad Details|");
        do {
            d_61eb_d9c8 = -1;
            f_1a83_3122(4);
            if (d_61eb_d59e == 0) {
                if (f_1a83_0c63()) {
                    sprintf(buf, "%s offer accepted", (char far *)d_61eb_b0ec[team]);
                    f_1a83_0b7d(buf);
                    if (d_3334_cee2[p] < 0xff)
                        f_93a1_16a1(d_3334_cee2[p]);
                    d_61eb_dbb4 = f_215d_1629(d_61eb_dc4c, 1);
                    d_61eb_dbb4[p] = sal / 1000;
                    d_61eb_da2a = -1;
                } else
                    d_61eb_d9c8 = 0;
            } else if (d_61eb_d59e == 1) {
                if (f_1a83_0c63()) {
                    sprintf(buf, "%s offer refused", (char far *)d_61eb_b0ec[team]);
                    f_1a83_0b7d(buf);
                } else
                    d_61eb_d9c8 = 0;
            } else if (d_61eb_d59e == 2) {
                if (f_215d_13af(f_215d_0d96(3), f_215d_0d96(3)) + 2 < n)
                    f_1a83_0b7d("No deal");
                else {
                    long old = sal;

                    if (f_215d_0d96(2) == 0) {
                        sal = sal * (f_215d_0d96(20) / 200 + 1.2);
                        sal = sal / 1000;
                        sal = sal * 1000;
                    }
                    if (sal > old) {
                        sprintf(buf, "They increase the offer to \xa3%ld", sal);
                        f_1a83_0b7d(buf);
                        d_61eb_da04 = -1;
                    } else {
                        sprintf(buf, "The offer stays at \xa3%ld", sal);
                        f_1a83_0b7d(buf);
                        d_61eb_d9c8 = 0;
                    }
                    n++;
                }
            } else if (d_61eb_d59e == 3) {
                f_6ffe_0615(f_1a83_6d8b(team));
                d_61eb_da04 = -1;
            } else if (d_61eb_d59e == 4) {
                f_6ffe_4a89(team);
                d_61eb_da04 = -1;
            }
        } while (!d_61eb_d9c8);
    } while (d_61eb_da04);
    d_61eb_da29 = 0;
    return d_61eb_da2a;
}

void f_8e0f_4ad9(int club, int n)
{
    d_61eb_d852 = n;
    d_61eb_d72a = club;
    do {
        d_61eb_d85a = -1;
        if (f_1a83_2ad4(d_61eb_d72a))
            d_61eb_d85a = f_93a1_0000(d_61eb_d72a, d_61eb_d852);
        if (d_61eb_d85a == -1) {
            d_61eb_da22 = 0;
            do {
                d_61eb_d5e6 = 0;
                for (d_61eb_d5f4 = 0; d_61eb_d5f4 <= 645; d_61eb_d5f4++) {
                    if (d_3334_cee2[d_61eb_d5f4] != d_61eb_d72a) {
                        d_61eb_d7e6 = d_53fc_095c[d_3334_d680[d_3334_ca6e[0][d_61eb_d72a]]][d_3334_d680[d_61eb_d5f4]];
                        if ((d_61eb_d7ae = f_215d_1343(d_3334_db94[f_93a1_08a5(d_61eb_d852)][d_61eb_d5f4] / 10
                                                       + (d_3334_cee2[d_61eb_d5f4] == d_61eb_d72a ? 4 : 0)
                                                       - d_61eb_d7e6, 1)) > d_61eb_d5e6) {
                            if ((fabs(d_61eb_d7ae - f_1a83_2b0c(d_61eb_d72a)) < 4.0
                                 && (d_3334_d16c[d_61eb_d5f4] <= 50 && d_61eb_d852 < 2 || d_61eb_d852 > 1))
                                || d_61eb_da22) {
                                if (f_8e0f_5091(d_61eb_d5f4, d_61eb_d72a, d_61eb_d852)) {
                                    d_61eb_d85a = d_61eb_d5f4;
                                    d_61eb_d5e6 = d_61eb_d7ae;
                                }
                            }
                        }
                    }
                }
                d_61eb_da22 = -1;
            } while (d_61eb_d85a <= -1);
        }
        f_8e0f_4cc7(d_61eb_d85a, d_61eb_d72a, d_61eb_d852);
        if (d_61eb_d85e < 255) {
            d_61eb_d852 = d_61eb_d860;
            d_61eb_d72a = d_61eb_d85e;
        }
    } while (d_61eb_d85e != 255);
}

void f_8e0f_4cc7(int p, int team, int b)
{
    int i, j;
    char buf[320];

    d_61eb_d85e = d_3334_cee2[p];
    d_61eb_d860 = d_3334_efe4[p];
    d_61eb_d862 = d_3334_ca6e[b][team];
    if (d_61eb_d862 < 0x28a) {
        d_61eb_da4b = -1;
        for (d_61eb_d864 = 0; d_61eb_d864 <= 37; d_61eb_d864++)
            for (d_61eb_d866 = 0; d_61eb_d866 <= 6; d_61eb_d866++)
                if (d_3334_ca6e[d_61eb_d866][d_61eb_d864] == d_61eb_d862 && d_61eb_d864 != team) {
                    d_61eb_da4b = 0;
                    d_61eb_d866 = 6;
                    d_61eb_d864 = 37;
                }
        if (d_61eb_da4b != 0) {
            d_3334_cee2[d_61eb_d862] = 0xff;
            d_3334_d3f6[d_61eb_d862] = 0;
        }
    }
    d_3334_ca6e[b][team] = p;
    d_3334_cee2[p] = team;
    d_3334_d3f6[p] = f_215d_1343(f_215d_13af(d_3334_db94[0][p] * 0.375, 50), 25);
    d_3334_efe4[p] = b;
    f_8e0f_42bb(p);
    if (b == 0) {
        if (p > 0x285 && d_61eb_d85e == 0xff) {
            d_61eb_d652++;
            d_61eb_d9c4 = 0;
        }
        if (p > 0x285)
            f_ab30_2524(team);
        d_3334_bdb2[0][team] = f_215d_1343(10, d_3334_db94[0][p] / 13);
        for (i = 0; i <= d_3334_beca[team]; i++)
            if (f_215d_0d96(3) > 0)
                f_9a9e_1b7d(d_28d4_081c[team][i]);
        d_3334_bea2[team] = f_215d_1343(d_3334_db94[0][p] * 0.5, 50);
        if (d_61eb_da23 == 0) {
            f_9f8d_0670(team);
            if (d_61eb_d862 < 0x286)
                for (j = 1; j <= d_432e_066e[team][0]; j++)
                    d_3334_0000[23][d_432e_066e[team][j]]--;
            d_432e_066e[team][0] = 0;
        }
        if (p < 0x286) {
            d_61eb_dbb4 = f_215d_1629(d_61eb_dc4c, 1);
            d_61eb_dbb4[p] = f_ab30_0000(p, team);
        }
    }
    d_61eb_da24 = 0;
    if (b == 0 || f_1a83_2ad4(team)
        || d_61eb_d85e < 0xff && f_1a83_2ad4(d_61eb_d85e))
        d_61eb_da24 = -1;
    if (d_61eb_da24 != 0) {
        if (d_61eb_d85e == 0xff)
            strcpy(d_432e_c125, "");
        else if (d_61eb_d85e == team)
            sprintf(d_432e_c125, "their %s ", f_93a1_1767(d_61eb_d860));
        else
            sprintf(d_432e_c125, "%s %s ", (char far *)d_61eb_b0ec[d_61eb_d85e], f_93a1_1767(d_61eb_d860));
        sprintf(buf, "%s have appointed %s%s as their new %s.", (char far *)d_61eb_b0ec[team],
                d_432e_c125, f_1a83_4686(p, 0), f_93a1_1767(b));
        f_1a83_5844(team, "Job News", buf);
    }
}

char f_8e0f_5091(int p, int team, int x)
{
    d_61eb_da25 = 0;
    if (d_3334_cee2[p] == team) {
        if (d_3334_c762[d_3334_cee2[p]] == 0)
            d_61eb_da25 = -1;
    } else if (d_3334_d3f6[p] == 0) {
        d_61eb_d86c = f_93a1_08a5(x);
        if (d_3334_cee2[p] == 0xff)
            d_61eb_da25 = d_3334_db94[d_61eb_d86c][p] / 10 - f_1a83_2b0c(team) < 4.0 ? -1 : 0;
        else if (d_3334_c762[d_3334_cee2[p]] == 0 && f_215d_0d96(4) > 0) {
            d_61eb_d86e = f_93a1_08a5(d_3334_efe4[p]);
            if (d_61eb_d86e != 0 || d_61eb_d86c <= 0)
                if (f_1a83_2b0c(team) - (d_61eb_d86c < d_61eb_d86e) > f_1a83_2b0c(d_3334_cee2[p]) + 3.0
                    || d_3334_db94[d_61eb_d86c][p] - d_3334_db94[d_61eb_d86e][p] > 60)
                    d_61eb_da25 = -1;
        }
    }
    return d_61eb_da25;
}
