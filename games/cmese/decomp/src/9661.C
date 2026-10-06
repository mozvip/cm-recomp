/* @at 9661:0000 */
/* @data 69da:3ac4 */
/* @module */

/* Overlay 9661 (CM93's 9107.C, from the first part of CM1's 88C9.C; the rest is in overlay
 * 9c01): players and staff: approaches for your players and their requests to leave,
 * valuations and free transfers, finding players (the search, the transfer list and the
 * shortlist), scouts' recommendations, managerial news (managers sacked, resigning and
 * appointed), job offers, and appointing and sacking staff. Its data is the search screen's
 * bottom bars, then its literal pool. */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <mem.h>
#include <stdlib.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_9661_0000(int player, int club, int v);
char f_9661_00f1(int player, int team, char loan);
void f_9661_031f(int player, int team, char loan);
char f_9661_052c(int player);
void f_9661_06c5(int player);
char f_9661_084b(int player);
void f_9661_089c(int player);
void f_9661_09b7(int player, char c, char d);
void f_9661_0aa7(int player);
void f_9661_0b09(int player);
long f_9661_0b7f(int player);
void f_9661_0ebd(int player);
void f_9661_11c2(int player, char c);
long f_9661_13f2(int player);
void f_9661_1484(void);
void f_9661_1bc4(int team);
void f_9661_1ce0(int a, int b, int bg, int fg, char far *s1, char far *s2);
void f_9661_1e12(int x, char on, int a);
void f_9661_1e9e(char far *title, unsigned from, unsigned to);
void f_9661_27e6(int team);
void f_9661_28e8(void);
void f_9661_29f8(int p, int row);
void f_9661_2e6c(int mode, char draw);
char f_9661_3081(int p, int team, int n);
void f_9661_3212(void);
void f_9661_327b(int p, int c, char flag);
void f_9661_3939(int p, int k);
void f_9661_3a67(void);
void f_9661_3d86(void);
void f_9661_3ef4(int club, int a);
void f_9661_411b(void);
void f_9661_43a8(int p);
void f_9661_4452(void);
char f_9661_4824(int p, int team);
void f_9661_4bc4(int club, int n);
void f_9661_4db2(int p, int team, int b);
char f_9661_517f(int p, int team, int x);

struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
long f_1a70_01d9(int p, int n);
void f_1a70_0adb(int line, char far *s);
void f_1a70_0b46(char far *s);
long f_1a70_0cb8(long v, char c);
void f_1a70_12cd(int player);
char f_1a70_2bc7(int x);
float f_1a70_2bff(int x);
int f_1a70_2ccc(int x);
char f_1a70_2d0e(int x);
void f_1a70_2eaa(int n, char far *title, char far *items);
void f_1a70_3226(int last);
void f_1a70_442b(float x, float y, int team);
char far *f_1a70_4592(int player);
char far *f_1a70_4739(int player);
void f_1a70_4a41(char far *title);
long f_1a70_588f(int team);
int f_1a70_68a4(int x);
char f_1a70_68f0(int player, char c);
unsigned f_2162_0b1b(char far *s, char far *set);
long f_2162_0da1(long n);
long f_2162_13d3(long a, long b);
void far *f_2162_1634(int handle, int page);
void f_9007_17fd(int p, char all);
void f_9007_366e(int player, int club);
int f_9007_3aa8(int player, int team);
void f_9007_3c71(int mode, int player);
int f_9007_3e8f(int mode, int value, int lo, int player);
void f_9007_4276(int colour, char far *s);
char f_9007_4f89(int player, char flag);
void f_aac9_42ed(int player, int a, char b);
extern unsigned char far d_28da_2a78[][1860];
extern unsigned char far d_28da_a448[];
extern unsigned char far d_28da_ad40[];
extern unsigned char far d_3668_0000[][1860];
extern int far d_3668_cb70[];
extern int far d_4512_1a30[][80];
extern int far d_4512_1ad0[];
extern long far d_4512_1e90[];
extern unsigned char far d_4512_2b2e[];
extern struct flags_w far d_4512_bdc8[];
extern char far d_536d_69d1[];
extern unsigned char far d_5dbf_0932[][10];
extern char near *d_69da_b1fc[];
extern int d_69da_d992;
extern int d_69da_d996;
extern int d_69da_d99a;
extern int d_69da_da4e;
extern int d_69da_dbc2;
extern int d_69da_dbc4;
extern int d_69da_dbd8;
extern int d_69da_dbdc;
extern int d_69da_dbde;
extern int d_69da_dbe2;
extern int d_69da_dbf4;
extern int d_69da_dbfe;
extern int d_69da_dc02;
extern int d_69da_dc1c;
extern int d_69da_dc1e;
extern int d_69da_dd98;
extern char d_69da_ddbc;
extern char d_69da_ddbe;
extern char d_69da_ddd3;
extern char d_69da_ddeb;
extern char d_69da_ddf4;
extern char d_69da_ddf5;
extern char d_69da_ddfc;
extern char d_69da_ddfe;
extern char d_69da_de01;
extern long d_69da_df31;
extern long d_69da_df35;
extern long d_69da_df39;
extern long far *d_69da_df9a;
extern int (far *d_69da_dfa6)[1860];
extern char far *d_69da_dfce;
extern char (far *d_69da_dfd6)[151];
extern int d_69da_dfe6;
extern int d_69da_dfec;
extern int d_69da_e000;
extern int d_69da_e004;
void f_1a70_0b80(char far *s);
void f_1a70_0e4d(int p);
void f_1a70_4ede(int a, float x, float y, int c, int d, int e, char far *s);
void f_1a70_525f(int a, char b);
int f_1a70_53de(int a);
void f_1a70_5e32(void);
void f_1a70_5e46(void);
char f_1a70_6d23(int player);
int f_2162_134e(int a, int b);
int f_2162_13ba(int a, int b);
void f_9007_4da1(int player, int a);
void f_a83a_1344(char all);
unsigned char f_b085_5f91(char team, char far *title);
void f_b085_6084(char team, int player);
void f_b085_6338(char n);
void f_b8da_66d3(char n);
extern int far *d_69da_df96;
extern int d_69da_dfe4;
extern char d_69da_de3e;
extern char d_69da_de05;
extern char d_69da_de04;
extern int d_69da_dd76;
extern int d_69da_dc28;
extern int d_69da_dc26;
extern int d_69da_dc24;
extern int d_69da_dc22;
extern int d_69da_dc04;
extern int d_69da_daa4;
extern int d_69da_da14;
extern int d_69da_d9e8;
extern int d_69da_d9ae;
extern int d_69da_d990;
extern int d_69da_d98e;
void f_1a70_31ce(int a, int b, int line);
void f_1a70_3d0c(float x, float y, int bg, int fg, int w, char far *s);
extern float far d_4512_73bc[];
extern char d_69da_de06;
extern int d_69da_dc2e;
extern int d_69da_dc2c;
extern int d_69da_dc2a;
extern int d_69da_d9dc;
extern int far d_28da_2a4c[];
extern unsigned char far d_4512_2390[];
extern unsigned char far d_4512_a48c[];
extern unsigned char far d_4512_a48a[];
extern int far d_4512_637c[][16];
extern char far d_4512_6d7c[][16];
struct opt { char far *s; unsigned char a, b; int w; };
void f_1a70_3554(float x, float y, int bg, int fg, int w, char far *s);
void f_1a70_3b47(float x, float y, int colour, char far *s);
extern unsigned char (far *d_69da_dfba)[1860];
extern int far d_28da_2a4a[];
extern long d_69da_df45;
extern char d_69da_de09;
extern char d_69da_de08;
extern char d_69da_de07;
extern unsigned char d_69da_ddad;
extern int d_69da_dc36;
extern int d_69da_dc34;
extern int d_69da_dc32;
extern int d_69da_dc30;
extern int d_69da_dbac;
extern int d_69da_dba6;
extern int d_69da_dab4;
long f_1a70_0d58(long v);
char far *f_1a70_0dfe(long amount);
char far *f_1a70_4793(int manager, char full);
void f_2162_07f7(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
char f_9007_27e4(int p, int team, int n);
int f_9007_29b8(int a, int b);
char far *f_aac9_1a9e(int a, int b);
extern long d_69da_def5;
extern char d_69da_de0a;
extern int d_69da_dbd0;
extern int d_69da_d9ea;
extern char far d_536d_6efb[];
extern char far d_536d_6de3[];
extern char far d_536d_6d93[];
extern int far d_4512_1b70[][80];
extern unsigned char far d_4512_00a4[];
extern char far * far d_5dbf_0000[];
extern unsigned char far d_4512_3556[];
extern char d_69da_de0b;
extern int d_69da_dc3e;
extern int d_69da_dc3c;
extern int d_69da_dc3a;
extern int d_69da_dc38;
extern int d_69da_dbf6;
int f_9c01_08a5(int x);
int f_b8da_3e41(char c);
int f_b8da_3ebf(char c);
void f_b8da_61ff(char a);
void f_b8da_6369(char a, int i, int n);
extern int far d_536d_2b66[][80];
extern unsigned char far d_4512_261a[];
extern unsigned char far d_4512_28a4[];
extern unsigned char far d_4512_2db8[];
extern unsigned char far d_4512_3042[][650];
extern unsigned char far d_4512_3a6a[][650];
extern unsigned char far d_4512_4492[];
extern int far d_4512_18f0[];
extern unsigned char far d_4512_01ec[];
extern char d_69da_de3d;
extern char d_69da_de10;
extern char d_69da_de0f;
extern char d_69da_de0e;
extern char d_69da_de0d;
extern char d_69da_de0c;
extern int d_69da_dd9a;
extern int d_69da_dc4c;
extern int d_69da_dc4a;
extern int d_69da_dc48;
extern int d_69da_dc46;
extern int d_69da_dc44;
extern int d_69da_dbb4;
extern int d_69da_db6c;
extern int d_69da_db58;
extern int d_69da_db24;
extern int d_69da_da56;
extern int d_69da_da4c;
extern int d_69da_da24;
extern int d_69da_d9f6;
extern int d_69da_d9f0;
extern int d_69da_d9de;
extern int d_69da_d9ca;
extern char far *d_69da_dfaa;
extern int d_69da_dfee;
void f_1a70_598c(int team, char far *title, char far *text);
char far *f_9c01_175d(int n);
void f_a83a_0630(int t);
void f_b085_4566(char a, char b, int player, char team, long fee, char c);
void f_b8da_609f(void);
void f_b085_4bb3(char team);
extern char far d_536d_8305[];
extern char far d_536d_6e33[];
extern char far d_536d_4c3d[][80];
extern unsigned char far d_4512_13dc[];
extern char d_69da_de3a;
extern char d_69da_de34;
extern char d_69da_de03;
extern char d_69da_ddb8;
extern int d_69da_dd82;
extern int d_69da_dc82;
extern int d_69da_dc58;
extern int d_69da_dc4e;
extern int d_69da_db84;
extern int d_69da_da4a;
extern int d_69da_d9e0;
extern int d_69da_d9d8;
extern int d_69da_d9d6;
extern char (far *d_69da_dfc6)[101];
extern int d_69da_dffc;
extern char far d_536d_7db5[];
extern char d_69da_de35;
extern int d_69da_dd84;
extern int d_69da_dd7c;
extern int d_69da_dc56;
extern int d_69da_dc54;
extern int d_69da_dc50;
extern int d_69da_dba4;
extern int d_69da_d9d2;
char f_1a70_0c2c(void);
void f_7827_0615(int div);
void f_7827_4b4d(int team);
int f_9c01_0000(int team, int x);
void f_9c01_1697(int club);
void f_a330_1c2a(int player);
int f_b8da_0000(int a, char team);
void f_b8da_2626(char team);
extern char far d_536d_57cb[];
extern unsigned char far d_4512_0000[][82];
extern unsigned char far d_4512_023e[];
extern int far d_28da_10f0[][26];
extern char d_69da_de3b;
extern char d_69da_de1a;
extern char d_69da_de19;
extern char d_69da_de15;
extern char d_69da_de14;
extern char d_69da_de13;
extern char d_69da_de12;
extern int d_69da_dc64;
extern int d_69da_dc62;
extern int d_69da_dc5c;
extern int d_69da_dc5a;
extern int d_69da_d9ee;
extern int far *d_69da_dfa2;
extern int d_69da_dfea;


void f_9661_0000(int player, int club, int v)
{
    char buf[320];

    f_9007_366e(player, d_28da_ad40[player]);
    if (d_69da_ddeb) {
        sprintf(buf, "%s signs the contract", f_1a70_4739(player));
        f_9007_4276(6, buf);
        d_3668_cb70[player] = (d_69da_d99a + d_69da_dbc2) * 100 + f_1a70_68a4(d_69da_d996);
        d_69da_dfa6 = f_2162_1634(d_69da_dfec, 1);
        d_69da_dfa6[4][player] = d_69da_dbc4;
    } else {
        sprintf(buf, "%04d ", player);
        d_69da_dfce = f_2162_1634(d_69da_e000, 1);
        strcat(d_69da_dfce + v * 151, buf);
    }
}

char f_9661_00f1(int player, int team, char loan)
{
    d_69da_ddfc = 0;
    if (f_1a70_2bc7(d_28da_2a78[0][18 * 1860 + player]))
        f_9661_031f(player, team, loan);
    else if (!d_4512_bdc8[player].f9 && !d_4512_bdc8[player].f30 && f_1a70_2d0e(player) == 0
             && (d_4512_1ad0[d_28da_2a78[18][player]] < 650 || d_3668_cb70[player] == 0)) {
        if (loan && d_28da_a448[player] < 2) {
            if (d_4512_bdc8[player].f8 && d_4512_bdc8[player].f24 || f_9007_4f89(player, -1)
                || d_28da_2a78[23][player] > 1)
                d_69da_ddfc = -1;
        } else if (d_28da_2a78[23][player] > 1 || d_4512_bdc8[player].f8 || d_3668_cb70[player] == 0
                   || d_5dbf_0932[d_4512_2b2e[d_4512_1a30[0][d_28da_ad40[player]]]][d_3668_0000[17][player]] > 7
                   || fabs(f_1a70_2ccc(player) - f_1a70_2bff(d_28da_ad40[player])) > 3.0f
                   || d_3668_cb70[player] / 100 - d_69da_d99a < 3)
            d_69da_ddfc = -1;
    }
    return d_69da_ddfc;
}

void f_9661_031f(int player, int team, char loan)
{
    char buf[320];
    char n;

    do {
        d_69da_ddf4 = 0;
        f_1a70_4a41("Player Approach");
        f_1a70_442b(1.0, 4.0, d_28da_ad40[player]);
        sprintf(buf, "%s want %s", (char far *)d_69da_b1fc[team], f_1a70_4592(player));
        f_1a70_0adb(7, buf);
        n = 10;
        if (loan) {
            sprintf(buf, "They want him on loan");
            f_1a70_0adb(9, buf);
            n = 12;
        } else if (f_1a70_2bc7(team) == 0 && !d_4512_bdc8[player].f12) {
            d_69da_df31 = f_1a70_0cb8(f_2162_13d3(f_1a70_01d9(player, team), f_1a70_588f(team)), -1);
            sprintf(buf, "They would offer about %ld", d_69da_df31);
            f_1a70_0adb(9, buf);
            n = 12;
        } else if (f_1a70_2bc7(team) == 0 && d_4512_bdc8[player].f12) {
            strcpy(buf, "He is on a free transfer");
            f_1a70_0adb(9, buf);
            n = 12;
        }
        do {
            d_69da_ddbc = -1;
            f_1a70_2eaa(n, "", "View Factfile|Allow Approach|Refuse Approach|");
            f_1a70_3226(2);
            if (d_69da_d992 == 0) {
                do
                    f_aac9_42ed(player, -1, 0);
                while (!d_69da_ddbe);
                d_69da_ddbe = 0;
                d_69da_ddf4 = -1;
            } else if (d_69da_d992 == 1) {
                d_69da_ddfc = -1;
            } else if (d_69da_d992 == 2) {
                if (d_3668_cb70[player] > 0 || loan) {
                    sprintf(buf, "%s refused", (char far *)d_69da_b1fc[team]);
                    f_1a70_0b46(buf);
                } else {
                    f_1a70_0b46("He is not under contract");
                    f_1a70_0b46("You cannot refuse their approach");
                    d_69da_ddbc = 0;
                }
            }
        } while (!d_69da_ddbc);
    } while (d_69da_ddf4 != 0);
}

char f_9661_052c(int player)
{
    d_69da_ddfe = 0;
    if (f_1a70_2bc7(d_28da_2a78[0][18 * 1860 + player]))
        f_9661_06c5(player);
    else if (d_4512_1ad0[d_28da_2a78[18][player]] < 650 || d_3668_cb70[player] == 0) {
        d_69da_dbdc = d_5dbf_0932[d_4512_2b2e[d_4512_1a30[0][d_28da_ad40[player]]]][d_3668_0000[17][player]];
        if (d_28da_2a78[23][player] == 3 || d_3668_cb70[player] == 0 || d_69da_dbdc > 7
            || fabs(f_1a70_2ccc(player) - f_1a70_2bff(d_28da_ad40[player])) > 3.0f
            || d_28da_2a78[23][player] == 2 && d_4512_1e90[d_28da_2a78[18][player]] < 0)
            d_69da_ddfe = -1;
    }
    return d_69da_ddfe;
}

void f_9661_06c5(int player)
{
    char buf[320];

    do {
        d_69da_ddf4 = 0;
        f_1a70_4a41("Player request");
        f_1a70_442b(1.0, 4.0, d_28da_ad40[player]);
        sprintf(buf, "%s wants to leave", f_1a70_4592(player));
        f_1a70_0adb(7, buf);
        f_1a70_68f0(player, 0);
        sprintf(buf, "He %s", d_536d_69d1);
        f_1a70_0adb(9, buf);
        f_1a70_2eaa(12, "", "View Factfile|Refuse Request|List Him|");
        do {
            d_69da_ddbc = -1;
            f_1a70_3226(2);
            d_69da_dc02 = d_69da_d992;
            if (d_69da_dc02 == 0) {
                do
                    f_aac9_42ed(player, -1, 0);
                while (!d_69da_ddbe);
                d_69da_ddbe = 0;
                d_69da_ddf4 = -1;
            } else if (d_69da_dc02 == 1) {
                if (d_3668_cb70[player] == 0) {
                    f_1a70_0b46("He is a free agent");
                    f_1a70_0b46("You cannot prevent him leaving");
                    d_69da_ddbc = 0;
                } else {
                    sprintf(buf, "%s told to stay", f_1a70_4739(player));
                    f_1a70_0b46(buf);
                }
            } else if (d_69da_dc02 == 2) {
                sprintf(buf, "%s now transfer listed", f_1a70_4739(player));
                f_1a70_0b46(buf);
                d_69da_ddfe = -1;
            }
        } while (!d_69da_ddbc);
    } while (d_69da_ddf4 != 0);
}

char f_9661_084b(int player)
{
    d_69da_de01 = 0;
    if (f_1a70_2bc7(d_28da_2a78[0][18 * 1860 + player]))
        f_9661_089c(player);
    else if (f_9007_4f89(player, 0) == 0)
        d_69da_de01 = -1;
    return d_69da_de01;
}

void f_9661_089c(int player)
{
    char buf[320];

    do {
        d_69da_ddf4 = 0;
        f_1a70_4a41("Player request");
        f_1a70_442b(1.0, 4.0, d_28da_ad40[player]);
        sprintf(buf, "%s now wants to stay", f_1a70_4592(player));
        f_1a70_0adb(7, buf);
        f_1a70_2eaa(10, "", "View Factfile|Remove From List|Refuse Request|");
        f_1a70_3226(2);
        d_69da_dc02 = d_69da_d992;
        if (d_69da_dc02 == 0) {
            do
                f_aac9_42ed(player, -1, 0);
            while (!d_69da_ddbe);
            d_69da_ddbe = 0;
            d_69da_ddf4 = -1;
        } else if (d_69da_dc02 == 1) {
            sprintf(buf, "%s removed from list", f_1a70_4739(player));
            f_1a70_0b46(buf);
            d_69da_de01 = -1;
        } else if (d_69da_dc02 == 2) {
            sprintf(buf, "%s remains listed", f_1a70_4739(player));
            f_1a70_0b46(buf);
        }
    } while (d_69da_ddf4 != 0);
}

void f_9661_09b7(int player, char c, char d)
{
    long v;

    if (!d) {
        v = f_9661_0b7f(player);
        d_69da_df9a = f_2162_1634(d_69da_dfe6, 1);
        d_69da_df9a[player] = v;
        d_4512_bdc8[player].f12 = d_69da_df9a[player] == 0;
    }
    d_4512_bdc8[player].f8 = 1;
    d_4512_bdc8[player].f10 = c != 0;
    d_4512_bdc8[player].f24 = d != 0;
    d_3668_0000[11][player] = 0;
}

void f_9661_0aa7(int player)
{
    d_4512_bdc8[player].f8 = 0;
    d_4512_bdc8[player].f10 = 0;
    d_4512_bdc8[player].f12 = 0;
    d_4512_bdc8[player].f24 = 0;
    d_3668_0000[11][player] = 0;
    f_9007_17fd(player, 0);
}

void f_9661_0b09(int player)
{
    long v;

    v = f_9661_0b7f(player);
    d_69da_df9a = f_2162_1634(d_69da_dfe6, 1);
    d_69da_df9a[player] = v;
    d_4512_bdc8[player].f12 = d_69da_df9a[player] == 0;
}

long f_9661_0b7f(int player)
{
    char buf[320];

    if (f_1a70_2bc7(d_28da_2a78[0][18 * 1860 + player])) {
        d_69da_dd98 = 1;
        d_69da_dbd8 = 7;
        f_9007_3c71(1, player);
        d_69da_df35 = f_1a70_01d9(player, d_28da_2a78[0][18 * 1860 + player]);
        if (d_4512_bdc8[player].f8) {
            if (d_69da_df35 > 0)
                sprintf(buf, "%s is valued at %ld", f_1a70_4739(player), d_69da_df35);
            else
                sprintf(buf, "%s on a free transfer", f_1a70_4739(player));
        } else
            sprintf(buf, "%s not yet valued", f_1a70_4739(player));
        f_9007_4276(1, buf);
        do {
            d_69da_ddd3 = -1;
            d_69da_dbfe = d_28da_2a78[0][18 * 1860 + player];
            d_69da_dbe2 = f_9007_3e8f(1, d_69da_df35 / 1000, 0, player);
            if (d_69da_ddf5) {
                do
                    f_aac9_42ed(player, -1, 0);
                while (!d_69da_ddbe);
                d_69da_ddbe = 0;
                d_69da_ddd3 = 0;
                f_9007_3c71(1, player);
            }
            d_69da_df35 = (long)d_69da_dbe2 * 1000;
            d_69da_df35 = d_69da_df35 / 1000;
            d_69da_df35 = d_69da_df35 * 1000;
            if (d_69da_ddd3) {
                d_69da_df39 = f_1a70_01d9(player, -1) * 0.75;
                if (d_69da_df35 < d_69da_df39 && d_69da_df39 >= 5000) {
                    f_9007_4276(1, "The board expect more for him");
                    d_69da_ddd3 = 0;
                } else if (f_1a70_01d9(player, -1) * 3 < d_69da_df35) {
                    sprintf(buf, "He's not worth %ld", d_69da_df35);
                    f_9007_4276(1, buf);
                    d_69da_ddd3 = 0;
                }
            }
        } while (!d_69da_ddd3);
        if (d_69da_df35 > 0)
            sprintf(buf, "%s is valued at %ld", f_1a70_4739(player), d_69da_df35);
        else
            sprintf(buf, "%s is given a free transfer", f_1a70_4739(player));
        f_9007_4276(6, buf);
    } else {
        d_69da_df35 = f_1a70_01d9(player, d_28da_2a78[0][18 * 1860 + player]);
        if (10000 - (d_28da_2a78[23][player] == 1 ? 5000 : 0) > d_69da_df35)
            d_69da_df35 = 0;
    }
    return d_69da_df35;
}

void f_9661_0ebd(int player)
{
    char buf[320];

    d_69da_dd98 = 1;
    d_69da_dbd8 = 7;
    f_9007_3c71(3, player);
    d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
    sprintf(buf, "He gets %d per week", d_69da_dc1c = d_69da_dfa6[4][player]);
    f_9007_4276(1, buf);
    d_69da_dbf4 = f_9007_3aa8(player, d_28da_2a78[0][18 * 1860 + player]);
    d_69da_dc1e = -1;
    do {
        d_69da_ddd3 = -1;
        if (d_69da_dc1e == -1)
            d_69da_dbde = d_69da_dc1c;
        else
            d_69da_dbde = d_69da_dc1e;
        d_69da_dbe2 = f_9007_3e8f(3, d_69da_dbde, 100, player);
        if (d_69da_ddf5) {
            do
                f_aac9_42ed(player, -1, 0);
            while (!d_69da_ddbe);
            d_69da_ddbe = 0;
            d_69da_ddd3 = 0;
            f_9007_3c71(3, player);
        }
        d_69da_dc1e = d_69da_dbe2;
        if (d_69da_ddd3) {
            if (d_69da_dc1e < d_69da_dc1c) {
                f_9007_4276(1, "He refuses lower pay");
                d_69da_ddd3 = 0;
            } else if (d_69da_dc1e > d_69da_dbf4) {
                f_9007_4276(1, "The board refuse to spend that per week");
                d_69da_ddd3 = 0;
            }
        }
    } while (!d_69da_ddd3);
    if (d_69da_dc1e != d_69da_dc1c)
        strcpy(buf, "He accepts the pay rise");
    else
        sprintf(buf, "His wages stay at %d per week", d_69da_dc1e);
    f_9007_4276(6, buf);
    d_69da_dfa6 = f_2162_1634(d_69da_dfec, 1);
    d_69da_dfa6[4][player] = d_69da_dc1e;
    d_69da_da4e = d_4512_1a30[0][d_28da_2a78[18][player]] - 646;
    sprintf(buf, "%04d", player);
    d_69da_dfd6 = f_2162_1634(d_69da_e004, 0);
    if (f_2162_0b1b(d_69da_dfd6[d_69da_da4e], buf) == 0
        && d_69da_dc1c + 50 + f_2162_0da1(100) <= d_69da_dc1e
        && f_2162_0da1(4) == 0
        && d_28da_2a78[0][player] > d_28da_2a78[15][player]) {
        d_28da_2a78[15][player] = d_28da_2a78[0][player];
        if (f_1a70_2bc7(d_28da_2a78[0][18 * 1860 + player]) == 0 && d_28da_2a78[20][player] == 0)
            f_1a70_12cd(player);
    }
    sprintf(buf, "%04d ", player);
    d_69da_dfd6 = f_2162_1634(d_69da_e004, 1);
    strcat(d_69da_dfd6[d_69da_da4e], buf);
}

void f_9661_11c2(int player, char c)
{
    if (c) {
        switch (d_3668_0000[17][player]) {
        case 5: case 7: case 8:
            d_69da_dc04 = 0;
            break;
        case 1:
            d_69da_dc04 = 1;
            break;
        case 0: case 2: case 3:
            d_69da_dc04 = 2;
            break;
        case 4: case 6: case 9:
            d_69da_dc04 = 3;
            break;
        }
    } else {
        switch (d_3668_0000[17][player]) {
        case 0: case 1: case 5: case 7: case 8:
            d_69da_dc04 = (int)f_2162_0da1(2) + 2;
            break;
        case 2: case 3: case 4: case 6: case 9:
            d_69da_dc04 = 3;
            break;
        }
    }
    if (d_69da_dc04 == 0 && f_2162_0da1(3) == 0)
        d_69da_dc04 = 1;
    else if (d_69da_dc04 == 1 && f_2162_0da1(3) == 0)
        d_69da_dc04 = 2;
    else if (d_69da_dc04 == 2 && f_2162_0da1(3) == 0)
        d_69da_dc04 = 1;
    else if (d_69da_dc04 == 3 && f_2162_0da1(3) == 0)
        d_69da_dc04 = 2;
    if (d_69da_dc04 == 0) {
        d_28da_2a78[15][player] = f_2162_13ba(d_28da_2a78[15][player] + (int)f_2162_0da1(25), d_28da_2a78[9][player] + 25);
        if (*(d_28da_2a78[20] + player) == 0 && f_1a70_2bc7(d_28da_2a78[0][18 * 1860 + player]) == 0)
            f_1a70_12cd(player);
    } else if (d_69da_dc04 == 2) {
        d_28da_2a78[15][player] = f_2162_134e(d_28da_2a78[15][player] - (int)f_2162_0da1(25), 10);
        if (d_4512_bdc8[player].f7 && f_1a70_2bc7(d_28da_2a78[0][18 * 1860 + player]) == 0)
            f_1a70_0e4d(player);
    } else if (d_69da_dc04 == 3)
        d_4512_bdc8[player].f16 = 1;
}

long f_9661_13f2(int player)
{
    long v;

    v = f_1a70_01d9(player, -1);
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

void f_9661_1484(void)
{
    char buf[320];
    int n;
    char ok;
    unsigned char c;

    memset(d_28da_2a4c, 0, 38);
    memset(d_4512_a48c, 0, 60);
    f_a83a_1344(0);
    if (d_69da_dd76 > -1) {
        d_69da_dc22 = d_4512_2390[d_69da_dd76];
        do {
            f_1a70_4a41("Find Player");
            f_1a70_442b(1.0, 4.0, d_69da_dc22);
            f_1a70_2eaa(7, "", "*Exit|Normal Search|Scout Search|Transfer List|Foreign Players|Shortlist|Scout Reports|Transfer News|");
            f_1a70_3226(7);
            d_69da_dc24 = d_69da_d992;
            if (d_69da_dc24 == 1 || d_69da_dc24 == 2) {
                ok = 1;
                memset(d_4512_a48c, 0, 60);
                d_69da_df96 = f_2162_1634(d_69da_dfe4, 1);
                memset(d_69da_df96, -1, 3720);
                if (d_69da_dc24 == 2) {
                    c = f_b085_5f91(d_69da_dc22, "Search Options");
                    if (c < 255)
                        d_4512_a48c[c + 44] = -1;
                    else
                        ok = 0;
                } else
                    d_4512_a48c[48] = -1;
                if (ok != 1)
                    continue;
                f_9661_1ce0(0, 6, 6, 3, "Positions", "Goalkeeper|Defender|Midfielder|Attacker|Right Sided|Left Sided|Central|");
                if (d_69da_ddbe)
                    continue;
                f_9661_1ce0(8, 13, 6, 3, "Country", "England|Scotland|N.Ireland|Eire|Wales|Foreign|");
                if (d_69da_ddbe)
                    continue;
                f_9661_1ce0(15, 23, 6, 3, "Requirements", "Passing|Tackling|Pace|Heading|Flair|Creativity|Goalscoring|Influence|Stamina|");
                if (d_69da_ddbe)
                    continue;
                f_9661_1ce0(25, 31, 6, 3, "Approx Value", "0K - 100K|100K - 300K|300K - 500K|500K - 1M|1M - 2M|2M+|To Loan|");
                if (d_69da_ddbe)
                    continue;
                f_9661_1ce0(49, 51, 6, 3, "Status", "Listed|Free Agent|Unsettled|");
                if (d_69da_ddbe)
                    continue;
                f_9661_1ce0(33, 36, 6, 3, "Division", "FA Premier|First|Second|Third|");
                if (d_69da_ddbe)
                    continue;
                f_9661_1ce0(38, 42, 6, 3, "Age", "16 - 20|20 - 24|24 - 30|30 - 33|33+|");
                if (d_69da_ddbe)
                    continue;
                f_9661_1e9e("Player Search", 0, d_69da_d98e - 1);
            } else if (d_69da_dc24 == 5) {
                d_69da_da4e = d_4512_1a30[0][d_69da_dc22] - 646;
                d_69da_dc26 = -1;
                do {
                    d_69da_daa4 = d_4512_637c[d_69da_dc22][0];
                    if (d_69da_daa4 > 0) {
                        f_1a70_5e32();
                        f_1a70_4a41("Short List");
                        f_9661_27e6(d_69da_dc22);
                        f_1a70_5e46();
                        f_1a70_4ede(2, 29.0, 1.25, 1, 8, 37, " WCH");
                        f_1a70_4ede(2, 34.25, 1.25, 1, 8, 37, " REC");
                        f_1a70_4ede(2, 1.25, 22.5, 1, 12, 72, "   DEL");
                        f_1a70_4ede(2, 10.875, 22.5, 1, 4, 224, "            EXIT");
                        f_1a70_5e32();
                        for (d_69da_da14 = 1; d_69da_da14 <= d_69da_daa4; d_69da_da14++)
                            f_9661_29f8(d_4512_637c[d_69da_dc22][d_69da_da14], d_69da_da14);
                        f_1a70_5e46();
                        f_9661_2e6c(0, 0);
                        d_69da_de04 = 0;
                        d_69da_de05 = 0;
                        do {
                            d_69da_dc28 = f_1a70_53de(-1);
                            if ((d_69da_dc28 == 0 || d_69da_dc28 == 2 || d_69da_dc28 == 3 || d_69da_dc28 == 4) && d_69da_de05) {
                                f_1a70_525f(1, 0);
                                d_69da_de05 = 0;
                            }
                            if ((d_69da_dc28 == 0 || d_69da_dc28 == 1 || d_69da_dc28 == 2 || d_69da_dc28 == 4) && d_69da_de04) {
                                f_1a70_525f(3, 0);
                                d_69da_de04 = 0;
                            }
                            if (d_69da_dc28 == 1 && d_69da_de05 == 0) {
                                f_1a70_525f(1, -1);
                                d_69da_de05 = -1;
                            }
                            if (d_69da_dc28 == 3 && d_69da_de04 == 0) {
                                f_1a70_525f(3, -1);
                                d_69da_de04 = -1;
                            }
                            if (d_69da_dc28 == 2)
                                f_9661_2e6c(0, -1);
                        } while (d_69da_dc28 <= 3);
                        if (d_69da_dc28 == 4)
                            d_69da_ddbc = -1;
                        else if (d_69da_dc28 >= 5) {
                            d_69da_d9ae = d_4512_637c[d_69da_dc22][d_69da_dc28 - 4];
                            if (d_69da_de05) {
                                if (f_1a70_6d23(d_69da_d9ae))
                                    f_1a70_0b80("Can't watch foreign|based players");
                                else
                                    f_b085_6084(d_69da_dc22, d_69da_d9ae);
                                d_69da_ddbc = 0;
                            } else if (d_69da_de04) {
                                d_4512_637c[d_69da_dc22][d_69da_dc28 - 4] = d_4512_637c[d_69da_dc22][d_4512_637c[d_69da_dc22][0]];
                                d_4512_6d7c[d_69da_dc22][d_69da_dc28 - 4] = d_4512_6d7c[d_69da_dc22][d_4512_637c[d_69da_dc22][0]];
                                d_4512_637c[d_69da_dc22][0]--;
                                sprintf(buf, "%s removed", f_1a70_4739(d_69da_d9ae));
                                f_1a70_0b80(buf);
                                d_69da_ddbc = d_4512_637c[d_69da_dc22][0] == 0;
                                d_69da_ddbc;
                            } else {
                                do {
                                    d_69da_de3e = 0;
                                    f_aac9_42ed(d_69da_d9ae, d_69da_dc22, -1);
                                    f_9007_4da1(d_69da_d9ae, d_69da_d9e8);
                                    if (d_69da_de3e) {
                                        d_4512_637c[d_69da_dc22][d_69da_dc28 - 4] = n = d_69da_d98e - 1;
                                        d_69da_d9ae = n;
                                    }
                                } while (!d_69da_ddbe);
                                d_69da_ddbc = d_4512_637c[d_69da_dc22][0] == 0;
                            }
                        }
                    } else {
                        f_1a70_0b80("Nobody shortlisted");
                        d_69da_ddbc = -1;
                    }
                } while (!d_69da_ddbc);
            } else if (d_69da_dc24 == 3) {
                memset(d_4512_a48c, 0, 60);
                d_69da_df96 = f_2162_1634(d_69da_dfe4, 1);
                memset(d_69da_df96, -1, 3720);
                d_4512_a48c[7] = -1;
                d_4512_a48c[14] = -1;
                d_4512_a48c[24] = -1;
                d_4512_a48c[32] = -1;
                d_4512_a48c[37] = -1;
                d_4512_a48c[43] = -1;
                d_4512_a48c[48] = -1;
                d_4512_a48c[49] = -1;
                f_9661_1e9e("Transfer List", 0, d_69da_d98e - 1);
            } else if (d_69da_dc24 == 6)
                f_b085_6338(d_69da_dd76 + 122);
            else if (d_69da_dc24 == 4) {
                memset(d_4512_a48c, 0, 60);
                d_69da_df96 = f_2162_1634(d_69da_dfe4, 1);
                memset(d_69da_df96, -1, 3720);
                d_4512_a48c[7] = -1;
                d_4512_a48c[14] = -1;
                d_4512_a48c[24] = -1;
                d_4512_a48c[32] = -1;
                d_4512_a48c[37] = -1;
                d_4512_a48c[43] = -1;
                d_4512_a48c[48] = -1;
                d_4512_a48c[52] = -1;
                f_9661_1e9e("Players Abroad", 1680, d_69da_d990 + 1679);
            } else if (d_69da_dc24 == 7)
                f_b8da_66d3(0);
        } while (d_69da_dc24 != 0);
    }
}

void f_9661_1bc4(int team)
{
    do {
        d_69da_daa4 = d_4512_637c[team][0];
        if (d_69da_daa4 > 0) {
            f_1a70_4a41("Short List");
            f_9661_27e6(team);
            f_1a70_4ede(2, 1.25, 22.5, 1, 4, 0x12d, "                 EXIT");
            for (d_69da_da14 = 1; d_69da_da14 <= d_69da_daa4; d_69da_da14++)
                f_9661_29f8(d_4512_637c[team][d_69da_da14], d_69da_da14);
            do
                d_69da_dc28 = f_1a70_53de(d_69da_d9dc);
            while (d_69da_dc28 <= 0);
            if (d_69da_dc28 == 1)
                d_69da_ddbc = -1;
            else if (d_69da_dc28 >= 2) {
                d_69da_d9ae = d_4512_637c[team][d_69da_dc28 - 1];
                do
                    f_aac9_42ed(d_69da_d9ae, team, -1);
                while (!d_69da_ddbe);
                d_69da_ddbc = d_4512_637c[team][0] == 0;
            }
        } else {
            f_1a70_0b80("Nobody shortlisted");
            d_69da_ddbc = -1;
        }
    } while (!d_69da_ddbc);
}

void f_9661_1ce0(int a, int b, int bg, int fg, char far *s1, char far *s2)
{
    char buf[320];

    f_1a70_4a41("Search options");
    sprintf(buf, " Select %s ", s1);
    f_1a70_3d0c(1.0, 4.0, bg, fg, 0, buf);
    sprintf(buf, "*Exit|*Continue|%s", s2);
    f_1a70_2eaa(7, "", buf);
    d_69da_dc2a = b - a + 2;
    do {
        f_1a70_3226(-d_69da_dc2a);
        d_69da_dc2c = d_69da_d992;
        if (d_69da_dc2c > 1) {
            if (d_4512_a48a[d_69da_dc2c + a] == 0)
                f_9661_1e12(d_69da_dc2c, -1, a);
            else
                f_9661_1e12(d_69da_dc2c, 0, a);
        }
    } while (d_69da_dc2c >= 2);
    d_69da_de06 = 0;
    for (d_69da_dc2e = 2; d_69da_dc2e <= d_69da_dc2a; d_69da_dc2e++)
        if (d_4512_a48a[d_69da_dc2e + a]) {
            d_69da_de06 = -1;
            d_69da_dc2e = d_69da_dc2a;
        }
    if (d_69da_de06 == 0)
        d_4512_a48c[d_69da_dc2a + a - 1] = -1;
    d_69da_ddbe = d_69da_dc2c == 0 ? -1 : 0;
}

void f_9661_1e12(int x, char on, int a)
{
    if (on) {
        d_4512_a48c[x + a - 2] = -1;
        f_1a70_31ce(1, 12, x);
    } else {
        d_4512_a48c[x + a - 2] = 0;
        f_1a70_31ce((int)d_4512_73bc[x] / 16, (int)d_4512_73bc[x] % 16, x);
    }
}

void f_9661_1e9e(char far *title, unsigned from, unsigned to)
{
    int n;

    n = 0;
    f_1a70_4a41("");
    f_1a70_3b47(-1.0, 12.5, 1, "Searching");
    for (d_69da_d9ae = from; d_69da_d9ae <= to; d_69da_d9ae++) {
        unsigned char c;
        unsigned char k;

        d_69da_ddd3 = -1;
        if (d_28da_ad40[d_69da_d9ae] == d_69da_dc22)
            d_69da_ddd3 = 0;
        if (f_1a70_6d23(d_69da_d9ae) && d_4512_bdc8[d_69da_d9ae].f29 == 1)
            d_69da_ddd3 = 0;
        if (d_69da_ddd3 && d_4512_a48c[7] == 0)
            for (d_69da_dbac = 0; d_69da_dbac <= 6; d_69da_dbac++) {
                if (d_69da_dbac == 0)
                    c = d_4512_bdc8[d_69da_d9ae].f0;
                else if (d_69da_dbac == 1)
                    c = d_4512_bdc8[d_69da_d9ae].f1;
                else if (d_69da_dbac == 2)
                    c = d_4512_bdc8[d_69da_d9ae].f2;
                else if (d_69da_dbac == 3)
                    c = d_4512_bdc8[d_69da_d9ae].f3;
                else if (d_69da_dbac == 4)
                    c = d_4512_bdc8[d_69da_d9ae].f4;
                else if (d_69da_dbac == 5)
                    c = d_4512_bdc8[d_69da_d9ae].f5;
                else if (d_69da_dbac == 6)
                    c = d_4512_bdc8[d_69da_d9ae].f6;
                if (d_4512_a48c[d_69da_dbac] && c == 0) {
                    d_69da_ddd3 = 0;
                    d_69da_dbac = 6;
                }
            }
        if (d_69da_ddd3 && d_4512_a48c[14] == 0) {
            k = d_69da_dfba[9][d_69da_d9ae];
            if (k == 0 && d_4512_a48c[8] == 0 || k == 25 && d_4512_a48c[9] == 0
                || k == 10 && d_4512_a48c[10] == 0 || k == 9 && d_4512_a48c[11] == 0
                || k == 32 && d_4512_a48c[12] == 0
                || k != 0 && k != 25 && k != 10 && k != 9 && k != 32 && d_4512_a48c[13] == 0)
                d_69da_ddd3 = 0;
        }
        if (d_69da_ddd3 && d_4512_a48c[24] == 0)
            for (d_69da_dbac = 15; d_69da_dbac <= 21; d_69da_dbac++)
                if (d_4512_a48c[d_69da_dbac] && d_28da_2a78[d_69da_dbac - 14][d_69da_d9ae] < 15) {
                    d_69da_ddd3 = 0;
                    d_69da_dbac = 21;
                }
        if (d_69da_ddd3 && d_4512_a48c[24] == 0 && d_4512_a48c[21]) {
            d_69da_dc36 = d_3668_0000[0][d_69da_d9ae] + d_3668_0000[5][d_69da_d9ae];
            if (d_69da_dc36 >= 30) {
                d_69da_dba6 = d_3668_0000[1][d_69da_d9ae] + d_3668_0000[6][d_69da_d9ae];
                if (d_69da_dba6 / d_69da_dc36 < 0.2)
                    d_69da_ddd3 = 0;
            }
        }
        if (d_69da_ddd3 && d_4512_a48c[24] == 0 && d_4512_a48c[22] && d_28da_2a78[12][d_69da_d9ae] < 14)
            d_69da_ddd3 = 0;
        if (d_69da_ddd3 && d_4512_a48c[24] == 0 && d_4512_a48c[23]
            && *(d_28da_2a78[22] + d_69da_d9ae) < 14)
            d_69da_ddd3 = 0;
        if (d_69da_ddd3) {
            d_69da_de07 = 0;
            if (d_4512_a48c[32])
                d_69da_de07 = -1;
            else if (d_4512_bdc8[d_69da_d9ae].f8 && d_4512_bdc8[d_69da_d9ae].f24)
                d_69da_de07 = d_4512_a48c[31];
            else {
                d_69da_df45 = f_1a70_01d9(d_69da_d9ae, d_28da_2a78[0][d_69da_d9ae + 18 * 1860]);
                if (d_69da_df45 <= 100000L)
                    d_69da_de07 = d_4512_a48c[25];
                else if (d_69da_df45 <= 300000L)
                    d_69da_de07 = d_4512_a48c[26];
                else if (d_69da_df45 <= 500000L)
                    d_69da_de07 = d_4512_a48c[27];
                else if (d_69da_df45 <= 1000000L)
                    d_69da_de07 = d_4512_a48c[28];
                else if (d_69da_df45 <= 2000000L)
                    d_69da_de07 = d_4512_a48c[29];
                else
                    d_69da_de07 = d_4512_a48c[30];
            }
            if (d_69da_de07 == 0)
                d_69da_ddd3 = 0;
        }
        if (d_69da_ddd3 && d_4512_a48c[37] == 0
            && d_4512_a48c[*(d_28da_2a78[18] + d_69da_d9ae) / 20 + 33] == 0)
            d_69da_ddd3 = 0;
        if (d_69da_ddd3) {
            d_69da_de08 = 0;
            if (d_4512_a48c[43])
                d_69da_de08 = -1;
            else {
                d_69da_dc30 = d_28da_2a78[17][d_69da_d9ae];
                if (d_69da_dc30 <= 20)
                    d_69da_de08 = d_4512_a48c[38];
                else if (d_69da_dc30 <= 24)
                    d_69da_de08 = d_4512_a48c[39];
                else if (d_69da_dc30 <= 30)
                    d_69da_de08 = d_4512_a48c[40];
                else if (d_69da_dc30 <= 33)
                    d_69da_de08 = d_4512_a48c[41];
                else
                    d_69da_de08 = d_4512_a48c[42];
            }
            if (d_69da_de08 == 0)
                d_69da_ddd3 = 0;
        }
        if (d_69da_ddd3 && d_4512_a48c[48] == 0)
            for (c = 0; c <= 3; c += 1)
                if (d_4512_a48c[c + 44] && !f_9661_3081(d_69da_d9ae, d_69da_dc22, c)) {
                    d_69da_ddd3 = 0;
                    c = 3;
                }
        if (d_69da_ddd3 && d_4512_a48c[49] && !d_4512_bdc8[d_69da_d9ae].f8)
            d_69da_ddd3 = 0;
        if (d_69da_ddd3 && d_4512_a48c[50] && d_3668_cb70[d_69da_d9ae] > 0)
            d_69da_ddd3 = 0;
        if (d_69da_ddd3 && d_4512_a48c[51] && !f_1a70_68f0(d_69da_d9ae, -1))
            d_69da_ddd3 = 0;
        if (d_69da_ddd3) {
            n++;
            d_69da_df96 = f_2162_1634(d_69da_dfe4, 1);
            d_69da_df96[n - 1] = d_69da_d9ae;
        }
    }
    if (n > 0) {
        d_69da_dc32 = 1;
        d_69da_dc26 = -1;
        do {
            unsigned char c;
            unsigned char c2;
            char buf[40];

            d_69da_de09 = 0;
            f_1a70_5e32();
            f_1a70_4a41(title);
            f_9661_27e6(d_69da_dc22);
            f_1a70_5e46();
            c = n / 15 + (n % 15 > 0 ? 1 : 0);
            c2 = d_69da_dc32 / 15 + 1;
            sprintf(buf, " %d/%d", c2, c);
            f_1a70_3554(34.625, 1.125, 0, 1, 0x24, buf);
            f_1a70_4ede(2, 34.25, 2.0, 1, 8, 0x25, " REC");
            f_9661_28e8();
            d_69da_dc34++;
            d_69da_daa4 = 0;
            for (d_69da_da14 = d_69da_dc32; d_69da_dc32 + 14 >= d_69da_da14; d_69da_da14++) {
                d_69da_df96 = f_2162_1634(d_69da_dfe4, 0);
                d_69da_d9ae = d_69da_df96[d_69da_da14 - 1];
                if (d_69da_d9ae <= -1)
                    break;
                d_28da_2a4c[d_69da_daa4] = d_69da_d9ae;
                d_69da_daa4++;
            }
            f_1a70_5e32();
            for (d_69da_da14 = 1; d_69da_da14 <= d_69da_daa4; d_69da_da14++)
                f_9661_29f8(d_28da_2a4a[d_69da_da14], d_69da_da14);
            f_1a70_5e46();
            f_9661_2e6c(1, 0);
            do {
                d_69da_dc28 = f_1a70_53de(-1);
                if (d_69da_dc28 == 1)
                    f_9661_2e6c(1, -1);
            } while (d_69da_dc28 < 2);
            if (d_69da_dc28 == 2 && d_69da_ddad < 3)
                d_69da_dc32 -= 15;
            else if (d_69da_dc28 == 4 && d_69da_ddad == 1 || d_69da_dc28 == 3 && d_69da_ddad == 3)
                d_69da_dc32 += 15;
            else if (d_69da_dc28 >= d_69da_dc34) {
                d_69da_dab4 = d_69da_dc28 - d_69da_dc34;
                d_69da_d9ae = d_28da_2a4c[d_69da_dab4];
                do {
                    d_69da_de3e = 0;
                    f_aac9_42ed(d_69da_d9ae, d_69da_dc22, -1);
                    f_9007_4da1(d_69da_d9ae, d_69da_d9e8);
                    if (d_69da_de3e) {
                        d_28da_2a4c[d_69da_dab4] = d_69da_d98e - 1;
                        d_69da_d9ae = d_69da_d98e - 1;
                        d_69da_ddbe = -1;
                        d_69da_dc28 = d_69da_ddad < 3 ? 3 : 2;
                    }
                } while (!d_69da_ddbe);
            }
        } while (!(d_69da_dc28 == 3 && d_69da_ddad < 3) && !(d_69da_dc28 == 2 && d_69da_ddad > 2));
    } else
        f_1a70_0b80("No players found");
}

void f_9661_27e6(int team)
{
    char buf[320];

    sprintf(buf, " %s ", (char far *)d_69da_b1fc[team]);
    f_1a70_3554(1.125, 3.0, -(d_4512_00a4[team] / 16), d_4512_00a4[team] % 16, 0, buf);
    f_1a70_3554(1.125, 4.5, 4, 1, 0x48, " NAME");
    f_1a70_3554(10.375, 4.5, 4, 1, 0x18, " POS");
    f_1a70_3554(13.625, 4.5, 4, 1, 0x48, " CLUB");
    f_1a70_3554(22.875, 4.5, 4, 1, 0x24, " AP GL");
    f_1a70_3554(27.625, 4.5, 4, 1, 0, " AV R ");
    f_1a70_3554(32.375, 4.5, 4, 1, 0, " VALUE   ");
}

/* the search screen's bottom bar, by what can be scrolled: label, colours, width */
static struct opt d_69da_3ac4[] = {
    {"   -SCR", 1, 9, 72}, {"       EXIT", 1, 2, 147}, {"   +SCR", 1, 9, 72}, {"*", 0, 0, 0}
};
static struct opt d_69da_3ae4[] = {
    {"   -SCR", 1, 9, 72}, {"            EXIT", 1, 2, 224}, {"*", 0, 0, 0}
};
static struct opt d_69da_3afc[] = {
    {"            EXIT", 1, 2, 224}, {"   +SCR", 1, 9, 72}, {"*", 0, 0, 0}
};
static struct opt d_69da_3b14[] = {
    {"                 EXIT", 1, 2, 301}, {"*", 0, 0, 0}
};

void f_9661_28e8(void)
{
    float x;
    struct opt far *p;

    d_69da_df96 = f_2162_1634(d_69da_dfe4, 0);
    d_69da_ddad = (d_69da_dc32 == 1 ? 2 : 0) + (d_69da_df96[d_69da_dc32 + 14] == -1 ? 1 : 0) + 1;
    if (d_69da_ddad == 1)
        p = d_69da_3ac4;
    else if (d_69da_ddad == 2)
        p = d_69da_3ae4;
    else if (d_69da_ddad == 3)
        p = d_69da_3afc;
    else
        p = d_69da_3b14;
    d_69da_dc34 = 1;
    x = 1.25;
    do {
        f_1a70_4ede(2, x, 22.5, p->a, p->b, p->w, p->s);
        x += (p->w + 5) / 8.0;
        d_69da_dc34++;
        p++;
    } while (strcmp(p->s, "*") != 0);
}

/* one row of the search screen: player p's name, positions, club, appearances and goals,
   average rating and value */
void f_9661_29f8(int p, int row)
{
    char c;
    char a[5];
    char b[6];
    int club;
    char buf[320];

    c = 0;
    if (row & 1)
        d_69da_d9ea = 14;
    else
        d_69da_d9ea = 8;
    if (p < d_69da_d98e) {
        d_69da_dbd0 = f_9007_29b8(p, d_69da_dc22);
        c = f_9007_27e4(p, d_69da_dc22, d_69da_dbd0);
    }
    sprintf(buf, " %.11s", f_1a70_4739(p));
    f_1a70_4ede(0, 1.125, row + 5, c == 2 ? 6 : 1, d_69da_d9ea, 0x48, buf);
    club = d_3668_0000[7][p] < 255 ? d_3668_0000[7][p] : d_28da_2a78[0][18 * 1860 + p];
    strcpy(d_536d_6efb, " ");
    if (d_4512_bdc8[p].f0)
        strcat(d_536d_6efb, "GK");
    if (d_4512_bdc8[p].f1)
        strcat(d_536d_6efb, "D");
    if (d_4512_bdc8[p].f2)
        strcat(d_536d_6efb, "M");
    if (d_4512_bdc8[p].f3)
        strcat(d_536d_6efb, "A");
    f_1a70_3554(10.375, row + 5, 4, 5, 0x18, d_536d_6efb);
    if (club < 80)
        sprintf(buf, " %.11s", (char far *)d_69da_b1fc[club]);
    else if (club >= 140)
        sprintf(buf, " %.11s", d_5dbf_0000[club - 140]);
    f_1a70_3554(13.625, row + 5, 1, 12, 0x48, buf);
    d_69da_dc36 = d_3668_0000[0][p] + d_3668_0000[5][p];
    sprintf(a, "%d%s", d_69da_dc36, d_69da_dc36 < 10 ? " " : "");
    d_69da_dba6 = d_3668_0000[1][p] + d_3668_0000[6][p];
    sprintf(b, "%d%s", d_69da_dba6, d_69da_dba6 < 10 ? " " : "");
    sprintf(buf, " %s %s", a, b);
    f_1a70_3554(22.875, row + 5, 1, 4, 0x24, buf);
    d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
    sprintf(buf, " %s", f_aac9_1a9e(d_69da_dc36, d_69da_dfa6[0][p] + d_69da_dfa6[1][p]));
    f_1a70_3554(27.625, row + 5, 1, 4, 0x24, buf);
    if (d_4512_bdc8[p].f8 && d_4512_bdc8[p].f24)
        strcpy(buf, " To Loan");
    else {
        d_69da_def5 = f_1a70_01d9(p, d_28da_2a78[0][18 * 1860 + p]);
        if (!d_4512_bdc8[p].f8)
            d_69da_def5 = f_1a70_0d58(d_69da_def5);
        strcpy(d_536d_6d93, f_1a70_0dfe(d_69da_def5));
        sprintf(buf, " %s", d_536d_6d93);
    }
    f_1a70_3554(32.375, row + 5, 6, 3, 0x36, buf);
}

void f_9661_2e6c(int mode, char draw)
{
    char buf[320];

    if (d_69da_dc26 > -1 && draw) {
        f_2162_07f7(8, 0xa4, 0x138, 0xac);
        for (d_69da_da14 = 1; d_69da_da14 <= d_69da_daa4; d_69da_da14++)
            f_2162_07f7(2, d_69da_da14 * 8 + 0x22, 7, d_69da_da14 * 8 + 0x28);
    }
    do {
        d_69da_dc26 += draw ? 1 : 0;
        if (d_69da_dc26 == 4)
            d_69da_dc26 = -1;
        if (d_69da_dc26 > -1) {
            if (mode == 0) {
                d_69da_daa4 = d_4512_637c[d_69da_dc22][0];
                for (d_69da_da14 = 1; d_69da_da14 <= d_69da_daa4; d_69da_da14++)
                    d_28da_2a4a[d_69da_da14] = d_4512_637c[d_69da_dc22][d_69da_da14];
            }
            d_69da_de0a = 0;
            for (d_69da_da14 = 1; d_69da_da14 <= d_69da_daa4; d_69da_da14++) {
                if (f_9661_3081(d_28da_2a4a[d_69da_da14], d_69da_dc22, d_69da_dc26)) {
                    f_1a70_3554(0.375, d_69da_da14 + 5, 1, 2, 5, "R");
                    d_69da_de0a = -1;
                }
            }
            if (d_69da_de0a) {
                f_1a70_3554(1.125, 21.25, 1, 2, 0, "R");
                strcpy(d_536d_6de3, "");
                if (d_69da_dc26 == 3)
                    strcpy(d_536d_6de3, "youth ");
                sprintf(buf, " Recommended by %sscout %s ", d_536d_6de3,
                        f_1a70_4793(d_4512_1b70[d_69da_dc26][d_69da_dc22], 0));
                f_1a70_3554(2.625, 21.25, 6, 3, 0, buf);
            }
        }
    } while (d_69da_de0a == 0 && d_69da_dc26 != -1 && draw);
}

char f_9661_3081(int p, int team, int n)
{
    d_69da_de0b = 0;
    if (n < 3 || n == 3 && d_28da_2a78[17][p] < 21) {
        d_69da_dc38 = d_4512_1b70[n][team];
        d_69da_dbdc = d_5dbf_0932[d_4512_2b2e[d_69da_dc38]][d_3668_0000[17][p]];
        d_69da_dc3a = ((p + d_69da_dc38) % 200 <= d_4512_3556[d_69da_dc38]) * 0.075
            ? d_28da_2a78[9][p]
            : f_2162_134e(d_3668_0000[0][18 * 1860 + p], d_28da_2a78[0][p]);
        if (d_69da_dbdc < 8) {
            if (n < 3) {
                d_69da_dc3c = f_1a70_2bff(team);
                d_69da_dc3e = 150;
            } else {
                d_69da_dc3c = 0;
                d_69da_dc3e = 175;
            }
        } else
            d_69da_dc3e = 180;
        d_69da_dbf6 = f_1a70_2ccc(p);
        if (d_69da_dc3a >= d_69da_dc3e && d_69da_dbf6 > d_69da_dc3c
            && d_69da_dbf6 < f_1a70_2bff(team) + 4)
            d_69da_de0b = -1;
    }
    return d_69da_de0b;
}

void f_9661_3212(void)
{
    d_69da_dc46 = 0;
    d_69da_de0c = -1;
    f_b8da_61ff(2);
    for (d_69da_d9f0 = 0; d_69da_d9f0 <= 645; d_69da_d9f0++) {
        f_9661_327b(d_69da_d9f0, (0x22f - d_69da_da4c >= d_69da_d9f0) - 2, 0);
        f_b8da_6369(2, d_69da_d9f0, 645);
    }
    d_69da_de0c = 0;
}

void f_9661_327b(int p, int c, char flag)
{
    d_69da_dfaa = f_2162_1634(d_69da_dfee, 1);
    ((int far *)d_69da_dfaa)[p] = f_b8da_3e41(0);
    ((int far *)(d_69da_dfaa + 1300))[p] = f_b8da_3ebf(0);
    do {
        d_4512_2390[p] = 0xff;
        if (flag == 0)
            d_4512_261a[p] = f_2162_0da1(26) + 35;
        else
            d_4512_261a[p] = 35;
        d_4512_28a4[p] = 0;
        do {
            d_69da_dc44 = f_2162_0da1(10);
            d_69da_ddd3 = d_69da_dc44 != 2 && d_69da_dc44 != 4 && d_69da_dc44 != 6
                          && d_69da_dc44 != 9;
        } while (!d_69da_ddd3);
        d_4512_2b2e[p] = d_69da_dc44;
        do {
            d_69da_ddd3 = -1;
            d_69da_da24 = f_2162_0da1(100) + 1;
            if (d_69da_da24 <= 60) {
                d_69da_db58 = f_2162_0da1(3);
                if (d_69da_db58 == 0 || d_69da_db58 == 1)
                    d_69da_db6c = d_69da_db58;
                else
                    d_69da_db6c = 0;
            } else if (d_69da_da24 <= 90) {
                d_69da_db58 = f_2162_0da1(4);
                if (d_69da_db58 != 3)
                    d_69da_db6c = d_69da_db58 + 5;
                else
                    d_69da_db6c = 3;
            } else if (d_69da_da24 <= 100)
                d_69da_db6c = 2;
            d_69da_da24 = f_2162_0da1(100) + 1;
            if (d_69da_da24 <= 70)
                d_69da_dd9a = f_2162_0da1(3) > 0 ? 0 : 4;
            else if (d_69da_da24 <= 85)
                d_69da_dd9a = 1;
            else if (d_69da_da24 <= 95)
                d_69da_dd9a = 2;
            else
                d_69da_dd9a = 3;
            if ((d_69da_db6c == 2 || d_69da_db6c == 6) && d_69da_dd9a == 0)
                d_69da_ddd3 = 0;
        } while (!d_69da_ddd3);
        d_4512_2db8[p] = (d_69da_dd9a << 4) + d_69da_db6c;
        d_69da_de0d = 0;
        d_69da_de0e = 0;
        for (d_69da_d9f6 = 3; d_69da_d9f6 >= 0; d_69da_d9f6--) {
            d_69da_db58 = f_2162_0da1(560) + 1;
            switch (d_69da_d9f6) {
            case 0:
                d_69da_de0f = d_69da_db58 <= 80 && d_69da_de0e == 0 && d_69da_de0d == 0;
                break;
            case 1:
                d_69da_de0f = d_69da_db58 > 80 && d_69da_db58 <= 160 && d_69da_de0e == 0;
                break;
            case 2:
                d_69da_de0f = d_69da_db58 > 160 && d_69da_db58 <= 480 && d_69da_de0e == 0;
                break;
            case 3:
                d_69da_de0f = d_69da_db58 > 480;
                break;
            }
            if (d_69da_de0f) {
                d_69da_dbf6 = f_2162_0da1(51) + 50;
                d_69da_dc3a = d_69da_dbf6 + f_2162_0da1(191 - d_69da_dbf6) + 10;
                d_4512_3042[d_69da_d9f6][p] = d_69da_dbf6;
                d_4512_3a6a[d_69da_d9f6][p] = d_69da_dc3a;
                if (d_4512_261a[p] > 35)
                    for (d_69da_d9ca = 35; d_69da_d9ca <= d_4512_261a[p] - 1; d_69da_d9ca++)
                        f_9661_3939(p, d_69da_d9f6);
                if (d_69da_d9f6 == 2)
                    d_69da_de0d = -1;
                else if (d_69da_d9f6 == 3)
                    d_69da_de0e = -1;
            } else {
                d_4512_3042[d_69da_d9f6][p] = 10;
                d_4512_3a6a[d_69da_d9f6][p] = 10;
            }
        }
        if (c > -2) {
            d_69da_de10 = 0;
            d_69da_db58 = 0;
            do {
                if (c == -1)
                    d_69da_db24 = f_2162_0da1(80);
                else
                    d_69da_db24 = c;
                d_69da_da56 = f_1a70_2bc7(d_69da_db24) ? 1 : 0;
                d_69da_dbb4 = f_1a70_2bff(d_69da_db24);
                for (d_69da_dc48 = d_69da_da56; d_69da_dc48 <= 6; d_69da_dc48++) {
                    if (d_4512_1a30[d_69da_dc48][d_69da_db24] == 650) {
                        d_69da_dbdc = d_5dbf_0932[d_4512_18f0[d_69da_db24]][d_4512_2b2e[p]];
                        if (d_69da_dbdc < 8) {
                            d_69da_dc4a = d_4512_3042[f_9c01_08a5(d_69da_dc48)][p] / 10 - d_69da_dbb4;
                            d_69da_dc4a = abs(d_69da_dc4a);
                            if (d_69da_dc4a < 4) {
                                d_4512_1a30[d_69da_dc48][d_69da_db24] = p;
                                d_4512_2390[p] = d_69da_db24;
                                d_4512_4492[p] = d_69da_dc48;
                                if (d_69da_dc48 == 0 && d_69da_d99a == 1 && d_69da_de3d) {
                                    char a, b;

                                    d_69da_dfaa = f_2162_1634(d_69da_dfee, 1);
                                    ((int far *)d_69da_dfaa)[p] = d_536d_2b66[0][d_69da_db24];
                                    ((int far *)(d_69da_dfaa + 1300))[p] = d_536d_2b66[1][d_69da_db24];
                                    a = d_4512_2db8[p] / 16;
                                    b = d_4512_2db8[p] % 16;
                                    if (d_536d_2b66[2][d_69da_db24] < 255)
                                        a = d_536d_2b66[2][d_69da_db24];
                                    if (d_536d_2b66[3][d_69da_db24] < 255)
                                        b = d_536d_2b66[3][d_69da_db24];
                                    d_4512_2db8[p] = (a << 4) + b;
                                    if (d_536d_2b66[4][d_69da_db24] < 255)
                                        d_4512_3042[0][p] = d_536d_2b66[4][d_69da_db24];
                                    if (d_536d_2b66[5][d_69da_db24] < 255)
                                        d_4512_2b2e[p] = d_536d_2b66[5][d_69da_db24];
                                }
                                if (d_69da_dc48 == 1 && d_69da_d99a == 1 && d_69da_de3d) {
                                    d_69da_dfaa = f_2162_1634(d_69da_dfee, 1);
                                    ((int far *)d_69da_dfaa)[p] = d_536d_2b66[6][d_69da_db24];
                                    ((int far *)(d_69da_dfaa + 1300))[p] = d_536d_2b66[7][d_69da_db24];
                                }
                                d_69da_dc48 = 6;
                                d_69da_de10 = -1;
                            }
                        }
                    }
                }
                d_69da_db58++;
            } while (d_69da_db58 < 20 && d_69da_de10 == 0);
        }
    } while (d_69da_de10 == 0 && c != -2);
}

void f_9661_3939(int p, int k)
{
    if (p < 646)
        d_4512_3042[k][p] = (d_4512_3042[k][p] * 2 + d_4512_3a6a[k][p]) / 3;
    if (k == 0 && d_69da_de0c == 0 && d_4512_4492[p] == 0 && d_4512_2390[p] < 255
        && d_4512_1ad0[d_4512_2390[p]] < 650) {
        d_69da_d9de = d_4512_2390[p] / 20;
        d_69da_dc4c = f_2162_13ba(d_4512_01ec[d_4512_2390[p]], 100 - d_69da_d9de * 15) * 2;
        d_4512_3042[k][p] = (d_4512_3042[k][p] * 2 + d_69da_dc4c) / 3;
    }
}

/* the yearly retirements: staff aged 35 or more may retire, then age every
   staff member by a year */
void f_9661_3a67(void)
{
    char text[320];
    char title[80];

    f_b8da_61ff(2);
    for (d_69da_d9f0 = 0; d_69da_d9f0 <= 645; d_69da_d9f0++) {
        f_b8da_6369(2, d_69da_d9f0, 1290);
        d_69da_de03 = 0;
        d_69da_dc4e = d_4512_2390[d_69da_d9f0];
        if (d_4512_261a[d_69da_d9f0] >= 35) {
            d_69da_de3a = 0;
            if (d_69da_dc4e < 255 && d_4512_13dc[d_69da_dc4e] > 0)
                d_69da_de3a = -1;
            if (d_4512_261a[d_69da_d9f0] > f_2162_0da1(6) + 60 && d_69da_de3a == 0) {
                if (d_69da_dc4e < 255) {
                    if (f_1a70_2bc7(d_69da_dc4e) || d_4512_4492[d_69da_d9f0] == 0) {
                        strcpy(d_536d_6e33, f_9c01_175d(d_4512_4492[d_69da_d9f0]));
                        sprintf(title, "%s quits %s", d_536d_6e33, (char far *)d_69da_b1fc[d_69da_dc4e]);
                        sprintf(text, "%s %s has decided to retire from soccer at the age of %d.",
                                d_536d_6e33, f_1a70_4793(d_69da_d9f0, 0), d_4512_261a[d_69da_d9f0]);
                        f_1a70_598c(d_69da_dc4e, title, text);
                    }
                }
                if (d_69da_dc4e < 255 && d_4512_4492[d_69da_d9f0] == 0)
                    f_9661_3ef4(d_69da_dc4e, 3);
                f_9661_43a8(d_69da_d9f0);
                f_9661_327b(d_69da_d9f0, -2, 1);
                if (d_69da_dc4e < 255 && d_4512_4492[d_69da_d9f0] > 0)
                    f_9661_4bc4(d_69da_dc4e, d_4512_4492[d_69da_d9f0]);
            } else if (d_69da_dc4e < 255 && d_69da_de3a == 0 && d_4512_4492[d_69da_d9f0] > 0
                       && f_1a70_2bc7(d_69da_dc4e) == 0
                       && f_1a70_2bff(d_69da_dc4e)
                          - d_4512_3042[f_9c01_08a5(d_4512_4492[d_69da_d9f0])][d_69da_d9f0] / 10 > 4)
                f_9661_4bc4(d_69da_dc4e, d_4512_4492[d_69da_d9f0]);
        }
        if (d_69da_de03) {
            f_b8da_609f();
            f_b8da_61ff(2);
        }
    }
    for (d_69da_d9f0 = 0; d_69da_d9f0 <= d_69da_da4a + 645; d_69da_d9f0++) {
        f_b8da_6369(2, d_69da_d9f0 + 645, 1290);
        if (d_4512_261a[d_69da_d9f0] >= 35) {
            for (d_69da_d9f6 = 0; d_69da_d9f6 <= 3; d_69da_d9f6++)
                f_9661_3939(d_69da_d9f0, d_69da_d9f6);
            d_4512_261a[d_69da_d9f0]++;
        }
    }
}

/* the weekly board pressure: an unsuccessful manager may lose his job */
void f_9661_3d86(void)
{
    for (d_69da_d9d8 = 0; d_69da_d9d8 <= 79; d_69da_d9d8++) {
        if (d_4512_13dc[d_69da_d9d8] == 0
            && (d_536d_4c3d[0][d_69da_d9d8] != 0 || f_2162_0da1(3) > 0)) {
            if (d_4512_01ec[d_69da_d9d8] < 30 && d_69da_d996 < 80 && f_2162_0da1(3) == 0
                && d_4512_28a4[d_4512_1a30[0][d_69da_d9d8]] == 0
                && d_536d_4c3d[1][d_69da_d9d8] + d_536d_4c3d[2][d_69da_d9d8]
                   + d_536d_4c3d[4][d_69da_d9d8] + d_536d_4c3d[5][d_69da_d9d8]
                   + d_536d_4c3d[6][d_69da_d9d8] == 0)
                f_9661_3ef4(d_69da_d9d8, 2);
            for (d_69da_d9f6 = 0; d_69da_d9f6 <= 6; d_69da_d9f6++) {
                d_69da_d9f0 = d_4512_1a30[d_69da_d9f6][d_69da_d9d8];
                if (d_69da_d9f0 < 650 && d_4512_28a4[d_69da_d9f0] > 0)
                    d_4512_28a4[d_69da_d9f0] = d_4512_28a4[d_69da_d9f0]
                        - (d_69da_d996 % 2 == 0 ? (char)1 : (char)0);
            }
        }
    }
}

/* the manager of club leaves: a = 0 takeover, 1 resignation, 2 sacked or resigned,
   3 retired, 4 left for another club */
void f_9661_3ef4(int club, int a)
{
    char buf[320];

    if (a < 3) {
        if (a == 0) {
            sprintf(buf, "%s is to be replaced as manager of %s as part of the takeover.",
                    f_1a70_4793(d_4512_1a30[0][club], 0), (char far *)d_69da_b1fc[club]);
            f_1a70_598c(club, "Managerial news", buf);
        } else if (a == 1 || f_2162_0da1(4) == 0 && f_1a70_2bc7(club) == 0) {
            if (f_1a70_2bc7(club) == 0) {
                sprintf(buf, "%s has resigned as manager of %s.",
                        f_1a70_4793(d_4512_1a30[0][club], 0), (char far *)d_69da_b1fc[club]);
                f_1a70_598c(club, "Managerial news", buf);
            }
        } else {
            sprintf(buf, "%s has been given the sack by the %s board.",
                    f_1a70_4793(d_4512_1a30[0][club], 0), (char far *)d_69da_b1fc[club]);
            f_1a70_598c(club, "Managerial news", buf);
        }
        if (f_1a70_2bc7(club)) {
            f_b085_4566(d_4512_1a30[0][club] + 122, 0, 0, 0, 0, 0);
            f_b085_4bb3(d_4512_1a30[0][club] + 122);
            d_69da_da4c--;
            d_69da_ddb8 = d_69da_da4c == 0;
        }
        d_69da_dc58 = d_4512_1a30[0][club];
        d_4512_2390[d_69da_dc58] = 255;
        d_4512_28a4[d_69da_dc58] = 0;
        d_4512_4492[d_69da_dc58] = club + 7;
    }
    d_4512_01ec[club] = 50;
    d_4512_13dc[club] = 3;
    d_69da_db84 = d_4512_1ad0[club];
    d_4512_1a30[0][club] = d_69da_db84;
    d_4512_4492[d_69da_db84] = 0;
    d_4512_1ad0[club] = 650;
    if (a != 3)
        f_a83a_0630(club);
}

/* the clubs looking for a manager draw up their shortlists */
void f_9661_411b(void)
{
    char buf[320];

    for (d_69da_d9d6 = 0; d_69da_d9d6 <= 79; d_69da_d9d6++) {
        if (d_4512_13dc[d_69da_d9d6] > 1) {
            d_69da_dbb4 = f_1a70_2bff(d_69da_d9d6);
            d_69da_db58 = 0;
            d_69da_dc82 = d_69da_dbb4 - (4 - d_4512_13dc[d_69da_d9d6]) * 4;
            d_69da_d9e0 = d_69da_dbb4 + 3;
            d_69da_dd82 = f_2162_0da1(9) + 10;
            d_69da_dfc6 = f_2162_1634(d_69da_dffc, 0);
            for (; d_69da_db58 < 200 && strlen(d_69da_dfc6[d_69da_d9d6]) < d_69da_dd82 * 4;
                 d_69da_db58++) {
                d_69da_d9f0 = f_2162_0da1(d_69da_da4a + 646);
                if (d_4512_28a4[d_69da_d9f0] == 0 && d_4512_4492[d_69da_d9f0] - 7 != d_69da_d9d6) {
                    d_69da_dbf6 = d_4512_3042[0][d_69da_d9f0] / 10;
                    sprintf(d_536d_8305, "%03d", d_69da_d9f0);
                    d_69da_dfc6 = f_2162_1634(d_69da_dffc, 0);
                    if (f_2162_0b1b(d_69da_dfc6[d_69da_d9d6], d_536d_8305) == 0
                        && d_69da_dbf6 >= d_69da_dc82 && d_69da_dbf6 <= d_69da_d9e0) {
                        if (d_4512_2390[d_69da_d9f0] == 255 || d_69da_d9f0 >= 646)
                            d_69da_de34 = -1;
                        else
                            d_69da_de34 = d_69da_dbb4 - f_1a70_2bff(d_4512_2390[d_69da_d9f0]) > 2.0;
                        if (d_69da_de34) {
                            d_69da_dfc6 = f_2162_1634(d_69da_dffc, 1);
                            strcat(d_69da_dfc6[d_69da_d9d6], d_536d_8305);
                            strcat(d_69da_dfc6[d_69da_d9d6], " ");
                            if (d_69da_d9f0 >= 646) {
                                sprintf(buf, "%s have shortlisted %s as a possible replacement manager.",
                                        (char far *)d_69da_b1fc[d_69da_d9d6], f_1a70_4793(d_69da_d9f0, 0));
                                f_1a70_598c(d_69da_d9d6, "Job News", buf);
                            }
                        }
                    }
                }
            }
        }
    }
}

/* strike p off every shortlist */
void f_9661_43a8(int p)
{
    char buf[320];

    for (d_69da_d9d6 = 0; d_69da_d9d6 <= 79; d_69da_d9d6++) {
        if (d_4512_13dc[d_69da_d9d6] > 0) {
            sprintf(buf, "%03d", p);
            d_69da_dfc6 = f_2162_1634(d_69da_dffc, 1);
            d_69da_d9ca = f_2162_0b1b(d_69da_dfc6[d_69da_d9d6], buf);
            if (d_69da_d9ca > 0)
                strcpy(&d_69da_dfc6[d_69da_d9d6][d_69da_d9ca - 1], "XXX");
        }
    }
}

/* the clubs whose search is over appoint the best candidate of their shortlist */
void f_9661_4452(void)
{
    char taken[650];
    char buf[320];

    memset(taken, 0, 650);
    for (d_69da_dd84 = 0; d_69da_dd84 <= 79; d_69da_dd84++) {
        if (d_4512_13dc[d_69da_dd84] > 0) {
            d_4512_13dc[d_69da_dd84] = d_4512_13dc[d_69da_dd84] - 1;
            if (d_4512_13dc[d_69da_dd84] == 0) {
                d_69da_dfc6 = f_2162_1634(d_69da_dffc, 0);
                strcpy(d_536d_7db5, d_69da_dfc6[d_69da_dd84]);
                if (d_536d_7db5[0] != 0) {
                    do {
                        d_69da_dc50 = -1;
                        for (d_69da_d9d2 = 1; strlen(d_536d_7db5) >= d_69da_d9d2; d_69da_d9d2 += 4) {
                            sprintf(buf, "%.3s", &d_536d_7db5[d_69da_d9d2 - 1]);
                            d_69da_dd7c = atol(buf);
                            if ((d_69da_d99a > 1 || d_69da_d99a == 1 && d_69da_dd7c < 646)
                                && taken[d_69da_dd7c] == 0) {
                                d_69da_dba4 = d_4512_3042[0][d_69da_dd7c]
                                    - d_5dbf_0932[d_4512_18f0[d_69da_dd84]][d_4512_2b2e[d_69da_dd7c]]
                                    + f_2162_0da1(10) - f_2162_0da1(10);
                                if (d_69da_dba4 > d_69da_d9e0 || d_69da_dc50 == -1) {
                                    d_69da_ddd3 = -1;
                                    if (d_4512_2390[d_69da_dd7c] < 255 && d_4512_28a4[d_69da_dd7c] == 0
                                        && d_4512_4492[d_69da_dd7c] - 7 != d_69da_dd84
                                        && d_4512_13dc[d_4512_2390[d_69da_dd7c]] > 0
                                        && d_4512_1a30[0][d_4512_2390[d_69da_dd7c]] == d_69da_dd7c
                                        && d_4512_2390[d_69da_dd7c] != d_69da_dd84)
                                        d_69da_ddd3 = 0;
                                    if (d_69da_ddd3) {
                                        d_69da_dc50 = d_69da_dd7c;
                                        d_69da_d9e0 = d_69da_dba4;
                                    }
                                }
                            }
                        }
                        d_69da_de35 = -1;
                        if (d_69da_dc50 != -1 && d_69da_dc50 >= 646
                            && f_9661_4824(d_69da_dc50, d_69da_dd84) == 0) {
                            taken[d_69da_dc50] = -1;
                            d_69da_de35 = 0;
                        }
                    } while (!d_69da_de35);
                    if (d_69da_dc50 != -1) {
                        d_69da_db84 = d_4512_1a30[0][d_69da_dd84];
                        d_4512_1a30[0][d_69da_dd84] = 650;
                        d_4512_1ad0[d_69da_dd84] = d_69da_db84;
                        d_4512_4492[d_69da_db84] = 1;
                        d_4512_13dc[d_69da_dd84] = 0;
                        d_69da_dfc6 = f_2162_1634(d_69da_dffc, 1);
                        strcpy(d_69da_dfc6[d_69da_dd84], "");
                        d_69da_dc54 = d_4512_2390[d_69da_dc50];
                        d_69da_dc56 = d_4512_4492[d_69da_dc50];
                        f_9661_4db2(d_69da_dc50, d_69da_dd84, 0);
                        if (d_69da_dc54 < 255) {
                            if (d_69da_dc56 == 0) {
                                sprintf(buf, "%s are now looking for a new manager following the departure of %s.",
                                        (char far *)d_69da_b1fc[d_69da_dc54], f_1a70_4793(d_69da_dc50, 0));
                                f_1a70_598c(d_69da_dc54, "Managerial news", buf);
                                f_9661_3ef4(d_69da_dc54, 4);
                            } else
                                f_9661_4bc4(d_69da_dc54, d_69da_dc56);
                        }
                        continue;
                    }
                }
                d_4512_13dc[d_69da_dd84] = 2;
            }
        }
    }
}

/* a club's job offer to the player: accept, refuse, negotiate; returns -1 if accepted */
char f_9661_4824(int p, int team)
{
    unsigned char n = 0;
    long sal;
    char buf[320];

    sal = f_b8da_0000(p, team) * 1000L;
    d_69da_de19 = -1;
    d_69da_de1a = 0;
    do {
        d_69da_ddf4 = 0;
        f_1a70_4a41("Job Offer");
        sprintf(buf, " %s ", f_1a70_4793(p, 0));
        if (d_4512_2390[p] == 0xff)
            d_69da_d9ea = 20;
        else
            d_69da_d9ea = d_4512_00a4[d_4512_2390[p]];
        f_1a70_3d0c(1.0, 4.0, -(d_69da_d9ea / 16), d_69da_d9ea % 16, 0, buf);
        sprintf(buf, "%s want you as their manager", (char far *)d_69da_b1fc[team]);
        f_1a70_0adb(7, buf);
        sprintf(buf, "They are offering \xa3%ld per year", sal);
        f_1a70_0adb(9, buf);
        f_1a70_2eaa(12, "", "Accept Offer|Refuse Offer|Negotiate Salary|League Table|Squad Details|");
        do {
            d_69da_ddbc = -1;
            f_1a70_3226(4);
            if (d_69da_d992 == 0) {
                if (f_1a70_0c2c()) {
                    sprintf(buf, "%s offer accepted", (char far *)d_69da_b1fc[team]);
                    f_1a70_0b46(buf);
                    if (d_4512_2390[p] < 0xff)
                        f_9c01_1697(d_4512_2390[p]);
                    d_69da_dfa2 = f_2162_1634(d_69da_dfea, 1);
                    d_69da_dfa2[p] = sal / 1000;
                    d_69da_de1a = -1;
                } else
                    d_69da_ddbc = 0;
            } else if (d_69da_d992 == 1) {
                if (f_1a70_0c2c()) {
                    sprintf(buf, "%s offer refused", (char far *)d_69da_b1fc[team]);
                    f_1a70_0b46(buf);
                } else
                    d_69da_ddbc = 0;
            } else if (d_69da_d992 == 2) {
                if (f_2162_13ba(f_2162_0da1(3), f_2162_0da1(3)) + 2 < n)
                    f_1a70_0b46("No deal");
                else {
                    long old = sal;

                    if (f_2162_0da1(2) == 0) {
                        sal = sal * (f_2162_0da1(20) / 200 + 1.2);
                        sal = sal / 1000;
                        sal = sal * 1000;
                    }
                    if (sal > old) {
                        sprintf(buf, "They increase the offer to \xa3%ld", sal);
                        f_1a70_0b46(buf);
                        d_69da_ddf4 = -1;
                    } else {
                        sprintf(buf, "The offer stays at \xa3%ld", sal);
                        f_1a70_0b46(buf);
                        d_69da_ddbc = 0;
                    }
                    n++;
                }
            } else if (d_69da_d992 == 3) {
                f_7827_0615(team / 20);
                d_69da_ddf4 = -1;
            } else if (d_69da_d992 == 4) {
                f_7827_4b4d(team);
                d_69da_ddf4 = -1;
            }
        } while (!d_69da_ddbc);
    } while (d_69da_ddf4);
    d_69da_de19 = 0;
    return d_69da_de1a;
}

void f_9661_4bc4(int club, int n)
{
    d_69da_dc48 = n;
    d_69da_db24 = club;
    do {
        d_69da_dc50 = -1;
        if (f_1a70_2bc7(d_69da_db24))
            d_69da_dc50 = f_9c01_0000(d_69da_db24, d_69da_dc48);
        if (d_69da_dc50 == -1) {
            d_69da_de12 = 0;
            do {
                d_69da_d9e0 = 0;
                for (d_69da_d9ee = 0; d_69da_d9ee <= 645; d_69da_d9ee++) {
                    if (d_4512_2390[d_69da_d9ee] != d_69da_db24) {
                        d_69da_dbdc = d_5dbf_0932[d_4512_2b2e[d_4512_1a30[0][d_69da_db24]]][d_4512_2b2e[d_69da_d9ee]];
                        if ((d_69da_dba4 = f_2162_134e(d_4512_3042[f_9c01_08a5(d_69da_dc48)][d_69da_d9ee] / 10
                                                       + (d_4512_2390[d_69da_d9ee] == d_69da_db24 ? 4 : 0)
                                                       - d_69da_dbdc, 1)) > d_69da_d9e0) {
                            if ((fabs(d_69da_dba4 - f_1a70_2bff(d_69da_db24)) < 4.0
                                 && (d_4512_261a[d_69da_d9ee] <= 50 && d_69da_dc48 < 2 || d_69da_dc48 > 1))
                                || d_69da_de12) {
                                if (f_9661_517f(d_69da_d9ee, d_69da_db24, d_69da_dc48)) {
                                    d_69da_dc50 = d_69da_d9ee;
                                    d_69da_d9e0 = d_69da_dba4;
                                }
                            }
                        }
                    }
                }
                d_69da_de12 = -1;
            } while (d_69da_dc50 <= -1);
        }
        f_9661_4db2(d_69da_dc50, d_69da_db24, d_69da_dc48);
        if (d_69da_dc54 < 255) {
            d_69da_dc48 = d_69da_dc56;
            d_69da_db24 = d_69da_dc54;
        }
    } while (d_69da_dc54 != 255);
}

void f_9661_4db2(int p, int team, int b)
{
    int i, j;
    char buf[320];

    d_69da_dc54 = d_4512_2390[p];
    d_69da_dc56 = d_4512_4492[p];
    d_69da_dc58 = d_4512_1a30[b][team];
    if (d_69da_dc58 < 0x28a) {
        d_69da_de3b = -1;
        for (d_69da_dc5a = 0; d_69da_dc5a <= 79; d_69da_dc5a++)
            for (d_69da_dc5c = 0; d_69da_dc5c <= 6; d_69da_dc5c++)
                if (d_4512_1a30[d_69da_dc5c][d_69da_dc5a] == d_69da_dc58 && d_69da_dc5a != team) {
                    d_69da_de3b = 0;
                    d_69da_dc5c = 6;
                    d_69da_dc5a = 79;
                }
        if (d_69da_de3b != 0) {
            d_4512_2390[d_69da_dc58] = 0xff;
            d_4512_28a4[d_69da_dc58] = 0;
        }
    }
    d_4512_1a30[b][team] = p;
    d_4512_2390[p] = team;
    d_4512_28a4[p] = f_2162_134e(f_2162_13ba(d_4512_3042[0][p] * 0.375, 50), 25);
    d_4512_4492[p] = b;
    f_9661_43a8(p);
    if (b == 0) {
        if (p > 0x285 && d_69da_dc54 == 0xff) {
            d_69da_da4c++;
            d_69da_ddb8 = 0;
        }
        if (p > 0x285)
            f_b8da_2626(team);
        d_4512_0000[0][team] = f_2162_134e(10, d_4512_3042[0][p] / 13);
        for (i = 0; i <= d_4512_023e[team]; i++)
            if (f_2162_0da1(3) > 0)
                f_a330_1c2a(d_28da_10f0[team][i]);
        d_4512_01ec[team] = f_2162_134e(d_4512_3042[0][p] * 0.5, 50);
        if (d_69da_de13 == 0) {
            f_a83a_0630(team);
            if (d_69da_dc58 < 0x286)
                for (j = 1; j <= d_4512_637c[team][0]; j++)
                    d_3668_0000[23][d_4512_637c[team][j]]--;
            d_4512_637c[team][0] = 0;
        }
        if (p < 0x286) {
            d_69da_dfa2 = f_2162_1634(d_69da_dfea, 1);
            d_69da_dfa2[p] = f_b8da_0000(p, team);
        }
    }
    d_69da_de14 = 0;
    if (b == 0 || f_1a70_2bc7(team)
        || d_69da_dc54 < 0xff && f_1a70_2bc7(d_69da_dc54))
        d_69da_de14 = -1;
    if (d_69da_de14 != 0) {
        if (d_69da_dc54 == 0xff)
            strcpy(d_536d_57cb, "");
        else if (d_69da_dc54 == team)
            sprintf(d_536d_57cb, "their %s ", f_9c01_175d(d_69da_dc56));
        else
            sprintf(d_536d_57cb, "%s %s ", (char far *)d_69da_b1fc[d_69da_dc54], f_9c01_175d(d_69da_dc56));
        sprintf(buf, "%s have appointed %s%s as their new %s.", (char far *)d_69da_b1fc[team],
                d_536d_57cb, f_1a70_4793(p, 0), f_9c01_175d(b));
        f_1a70_598c(team, "Job News", buf);
    }
}

char f_9661_517f(int p, int team, int x)
{
    d_69da_de15 = 0;
    if (d_4512_2390[p] == team) {
        if (d_4512_13dc[d_4512_2390[p]] == 0)
            d_69da_de15 = -1;
    } else if (d_4512_28a4[p] == 0) {
        d_69da_dc62 = f_9c01_08a5(x);
        if (d_4512_2390[p] == 0xff)
            d_69da_de15 = d_4512_3042[d_69da_dc62][p] / 10 - f_1a70_2bff(team) < 8.0 ? -1 : 0;
        else if (d_4512_13dc[d_4512_2390[p]] == 0 && f_2162_0da1(4) > 0) {
            d_69da_dc64 = f_9c01_08a5(d_4512_4492[p]);
            if (d_69da_dc64 != 0 || d_69da_dc62 <= 0)
                if (f_1a70_2bff(team) - (d_69da_dc62 < d_69da_dc64) > f_1a70_2bff(d_4512_2390[p]) + 3.0
                    || d_4512_3042[d_69da_dc62][p] - d_4512_3042[d_69da_dc64][p] > 60)
                    d_69da_de15 = -1;
        }
    }
    return d_69da_de15;
}
