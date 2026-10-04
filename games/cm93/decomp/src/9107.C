/* @at 9107:0000 */
/* @data 60ae:3c28 */
/* @module */

/* Overlay 6: players and staff: approaches for your players and their requests to leave,
 * valuations and free transfers, finding players (the search, the transfer list and the
 * shortlist), scouts' recommendations, managers sacked, resigning and appointed, job
 * offers and appointing and sacking staff. CM93's version of the first part of CM1's
 * 88C9.C (the rest, from f_88c9_5ea7, is in overlay 96bb). */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <mem.h>
#include <stdlib.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_9107_0000(int player, int club, int v);
char f_9107_00fa(int player, int team, char loan);
void f_9107_02f6(int player, int team, char loan);
char f_9107_052e(int player);
void f_9107_0699(int player);
char f_9107_0854(int player);
void f_9107_089a(int player);
void f_9107_09dc(int player, char c, char d);
void f_9107_0aad(int player);
void f_9107_0af9(int player);
long f_9107_0b6a(int player);
void f_9107_0e89(int player);
void f_9107_117d(int player, char c);
long f_9107_1391(int player);
void f_9107_1422(void);
void f_9107_1c1c(int team);
void f_9107_1d53(int a, int b, int bg, int fg, char far *s1, char far *s2);
void f_9107_1e98(int x, char on, int a);
void f_9107_1f12(char far *title, unsigned from, unsigned to);
void f_9107_2761(int team);
void f_9107_291b(void);
void f_9107_2a40(int p, int row);
void f_9107_2efd(int mode, char draw);
char f_9107_316b(int p, int team, int n);
void f_9107_32f4(void);
void f_9107_3360(int p, int c, char flag);
void f_9107_3a22(int p, int k);
void f_9107_3b4d(void);
void f_9107_3e85(void);
void f_9107_3ff7(int club, int a);
void f_9107_420f(void);
void f_9107_44bd(int p);
void f_9107_456c(void);
char f_9107_4966(int p, int team);
void f_9107_4d4c(int club, int n);
void f_9107_4f40(int p, int team, int b);
char f_9107_531a(int p, int team, int x);

struct opt { char far *s; unsigned char a, b; int w; };
struct flags_a { unsigned char b0; unsigned f8 : 1; unsigned f9 : 1; unsigned : 6; unsigned : 2; unsigned f18 : 1; unsigned f19 : 1; unsigned : 4; unsigned : 0; unsigned f24 : 1; unsigned : 3; unsigned f28 : 1; unsigned : 1; unsigned f30 : 1; unsigned : 1; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
long f_14bc_020c(int p, int n);
void f_14bc_0ac0(int line, char far *s);
void f_14bc_0b30(char far *s);
long f_14bc_0d32(long v, char c);
char f_14bc_2cc0(int x);
float f_14bc_2cf4(int x);
int f_14bc_2db8(int x);
char f_14bc_2dfc(int x);
void f_14bc_2f90(int n, char far *title, char far *items);
void f_14bc_3334(int last);
void f_14bc_4587(float x, float y, int team);
char far *f_14bc_4703(int player);
char far *f_14bc_48b4(int player);
void f_14bc_4bd3(char far *title);
long f_14bc_5af6(int team);
int f_14bc_6b05(int x);
char f_14bc_6b4a(int player, char c);
long f_1bd3_137e(long a, long b);
void far *f_1bd3_1617(int handle, int page);
void f_8aa1_1865(int p, char all);
void f_8aa1_36d2(int player, int club);
void f_8aa1_43f6(int colour, char far *s);
char f_8aa1_50f4(int player, char flag);
void f_a694_49c9(int player, int a, char b);
extern char far d_2289_3af4[];
extern int far d_323f_47b4[][80];
extern int far d_323f_4854[];
extern long far d_323f_3f94[][80];
extern unsigned char far d_323f_23a6[];
extern int far d_323f_824a[];
extern unsigned char far d_3c35_0000[][1860];
extern unsigned char far d_471b_0000[][1860];
extern unsigned char far d_471b_79d0[];
extern unsigned char far d_54d9_08a0[][10];
extern char near *d_60ae_b572[];
extern long d_60ae_d7ff;
extern char d_60ae_d932;
extern char d_60ae_d935;
extern char d_60ae_d937;
extern char d_60ae_d93f;
extern char d_60ae_d948;
extern char d_60ae_d975;
extern char d_60ae_d977;
extern int d_60ae_db30;
extern int d_60ae_db56;
extern int d_60ae_db6e;
extern int d_60ae_db70;
extern int d_60ae_dd98;
extern int d_60ae_dd9c;
extern int d_60ae_dda0;
extern char far *d_60ae_ddae;
extern union flags d_60ae_ddbe[];
extern int (far *d_60ae_fae6)[1860];
extern long far *d_60ae_faf2;
extern int d_60ae_fdd2;
extern int d_60ae_fde6;
extern int d_60ae_fdec;
void f_14bc_0b83(char far *s);
void f_14bc_0ecb(int p);
void f_14bc_1365(int player);
void f_14bc_50f8(int a, float x, float y, int c, int d, int e, char far *s);
void f_14bc_548f(int a, char b);
int f_14bc_5635(int a);
void f_14bc_60ca(void);
void f_14bc_60da(void);
char f_14bc_6f7c(int player);
unsigned f_1bd3_0b1b(char far *s, char far *set);
long f_1bd3_0d69(long n);
int f_1bd3_1307(int a, int b);
int f_1bd3_1369(int a, int b);
int f_8aa1_3b46(int player, int team);
void f_8aa1_3d10(int mode, int player);
int f_8aa1_3f81(int mode, int value, int lo, int player);
void f_8aa1_4f06(int player, int a);
void f_a3de_14f5(char all);
unsigned char f_ad38_6227(char team, char far *title);
void f_ad38_6337(char team, int player);
void f_ad38_664f(char n);
void f_b628_6d15(char n);
extern int far d_471b_ae66[];
extern unsigned char far d_323f_1c08[];
extern int far d_2289_f108[][16];
extern char far d_2289_ec08[][16];
extern unsigned char far d_2289_b9c6[];
extern char (far *d_60ae_dda6)[151];
extern int d_60ae_fdce;
extern int far *d_60ae_faf6;
extern int d_60ae_fdee;
extern long d_60ae_d7f7;
extern long d_60ae_d7fb;
extern char d_60ae_d8f5;
extern char d_60ae_d92e;
extern char d_60ae_d92f;
extern char d_60ae_d93e;
extern char d_60ae_d960;
extern int d_60ae_d99a;
extern int d_60ae_d9bc;
extern int d_60ae_db0a;
extern int d_60ae_db0c;
extern int d_60ae_db0e;
extern int d_60ae_db10;
extern int d_60ae_db14;
extern int d_60ae_db16;
extern int d_60ae_db2e;
extern int d_60ae_db34;
extern int d_60ae_db3e;
extern int d_60ae_db50;
extern int d_60ae_db54;
extern int d_60ae_db5a;
extern int d_60ae_dc8e;
extern int d_60ae_dce4;
extern int d_60ae_dd1e;
extern int d_60ae_dd4a;
extern int d_60ae_dd84;
extern int d_60ae_dda2;
extern int d_60ae_dda4;
void f_14bc_32d7(int a, int b, int line);
void f_14bc_3672(float x, float y, int bg, int fg, int w, char far *s);
void f_14bc_3c75(float x, float y, int colour, char far *s);
void f_14bc_3e40(float x, float y, int bg, int fg, int w, char far *s);
extern unsigned char far d_2289_b9c4[];
extern float far d_2289_eb18[];
extern long d_60ae_d7eb;
extern char d_60ae_d92a;
extern char d_60ae_d92b;
extern char d_60ae_d92c;
extern char d_60ae_d92d;
extern unsigned char d_60ae_d986;
extern int d_60ae_dafc;
extern int d_60ae_dafe;
extern int d_60ae_db00;
extern int d_60ae_db02;
extern int d_60ae_db04;
extern int d_60ae_db06;
extern int d_60ae_db08;
extern int d_60ae_db86;
extern int d_60ae_db8c;
extern int d_60ae_dc7e;
extern int d_60ae_dd56;
long f_14bc_0dd6(long v);
char far *f_14bc_0e7a(long amount);
char far *f_14bc_490d(int manager, char full);
void f_1bd3_0821(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
char f_8aa1_27e3(int p, int team, int n);
int f_8aa1_299a(int a, int b);
char far *f_a694_2118(int a, int b);
extern long d_60ae_d83b;
extern char d_60ae_d929;
extern int d_60ae_db62;
extern int d_60ae_dd48;
extern char far d_2289_35ca[];
extern char far d_2289_36e2[];
extern char far d_2289_3732[];
extern int far d_323f_48f4[][80];
extern unsigned char far d_323f_4cb8[];
extern char far * far d_54d9_0000[];
int f_96bb_09e7(int x);
int f_b628_4413(char c);
int f_b628_448b(char c);
void f_b628_674e(char a);
void f_b628_68ca(char a, int i, int n);
extern int far d_2289_7486[][80];
extern unsigned char far d_323f_1e92[];
extern unsigned char far d_323f_211c[];
extern unsigned char far d_323f_2630[];
extern unsigned char far d_323f_28ba[][650];
extern unsigned char far d_323f_2dce[];
extern unsigned char far d_323f_32e2[][650];
extern unsigned char far d_323f_3d0a[];
extern int far d_323f_4674[];
extern unsigned char far d_323f_4e00[];
extern char d_60ae_d8f6;
extern char d_60ae_d923;
extern char d_60ae_d924;
extern char d_60ae_d925;
extern char d_60ae_d926;
extern char d_60ae_d927;
extern char d_60ae_d928;
extern int d_60ae_d998;
extern int d_60ae_dae6;
extern int d_60ae_dae8;
extern int d_60ae_daea;
extern int d_60ae_daec;
extern int d_60ae_daee;
extern int d_60ae_daf4;
extern int d_60ae_daf6;
extern int d_60ae_daf8;
extern int d_60ae_dafa;
extern int d_60ae_db3c;
extern int d_60ae_db7e;
extern int d_60ae_dbc6;
extern int d_60ae_dbda;
extern int d_60ae_dc0e;
extern int d_60ae_dcdc;
extern int d_60ae_dce6;
extern int d_60ae_dd0e;
extern int d_60ae_dd3c;
extern int d_60ae_dd42;
extern int d_60ae_dd54;
extern int d_60ae_dd68;
extern char far *d_60ae_fae2;
extern int d_60ae_fde4;
void f_14bc_5bfe(int team, char far *title, char far *text);
char far *f_96bb_19a9(int n);
void f_a3de_069a(int t);
void f_ad38_428a(char a, char b, int player, char team, long fee, char c);
void f_b628_65ab(void);
extern char far d_2289_21fc[];
extern char far d_2289_26fc[];
extern char far d_2289_36ba[];
extern char far d_2289_5658[][80];
extern unsigned char far d_323f_5ff0[];
extern char d_60ae_d8f9;
extern char d_60ae_d8fe;
extern char d_60ae_d8ff;
extern char d_60ae_d930;
extern char d_60ae_d97b;
extern int d_60ae_d9ae;
extern int d_60ae_d9b0;
extern int d_60ae_d9b6;
extern int d_60ae_dab0;
extern int d_60ae_dada;
extern int d_60ae_dadc;
extern int d_60ae_dade;
extern int d_60ae_dae2;
extern int d_60ae_dae4;
extern int d_60ae_db8e;
extern int d_60ae_dbae;
extern int d_60ae_dce8;
extern int d_60ae_dd52;
extern int d_60ae_dd5a;
extern int d_60ae_dd5c;
extern int d_60ae_dd60;
extern char (far *d_60ae_ddb6)[101];
extern int d_60ae_fdd6;
char f_14bc_0c5e(void);
void f_70a9_0660(int div);
void f_70a9_5667(int team);
int f_96bb_0000(int team, int x);
void f_96bb_18d8(int club);
void f_9e77_1cd0(int player);
int f_b628_0000(int a, char team);
void f_b628_296c(char team);
extern char far d_2289_4cfa[];
extern unsigned char far d_323f_4c14[][82];
extern unsigned char far d_323f_4e52[];
extern int far d_471b_b7a8[][26];
extern char d_60ae_d8f8;
extern char d_60ae_d919;
extern char d_60ae_d91a;
extern char d_60ae_d91e;
extern char d_60ae_d91f;
extern char d_60ae_d920;
extern char d_60ae_d921;
extern int d_60ae_d9ac;
extern int d_60ae_dace;
extern int d_60ae_dad0;
extern int d_60ae_dad6;
extern int d_60ae_dad8;
extern int d_60ae_dd44;
extern int far *d_60ae_faea;
extern int d_60ae_fde8;


void f_9107_0000(int player, int club, int v)
{
    char buf[320];

    f_8aa1_36d2(player, d_471b_0000[18][player]);
    if (d_60ae_d948) {
        sprintf(buf, "%s signs the contract", f_14bc_48b4(player));
        f_8aa1_43f6(6, buf);
        d_323f_824a[player] = (d_60ae_dd98 + d_60ae_db70) * 100 + f_14bc_6b05(d_60ae_dd9c);
        d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 1);
        d_60ae_fae6[4][player] = d_60ae_db6e;
    } else {
        sprintf(buf, "%04d ", player);
        d_60ae_ddae = f_1bd3_1617(d_60ae_fdd2, 1);
        strcat(d_60ae_ddae + v * 151, buf);
    }
}

char f_9107_00fa(int player, int team, char loan)
{
    d_60ae_d937 = 0;
    if (f_14bc_2cc0(d_471b_0000[18][player]))
        f_9107_02f6(player, team, loan);
    else if (!d_60ae_ddbe[player].a.f9 && !d_60ae_ddbe[player].a.f30 && f_14bc_2dfc(player) == 0
             && (d_323f_4854[d_471b_0000[18][player]] < 650 || d_323f_824a[player] == 0)) {
        if (loan && d_471b_79d0[player] < 2) {
            if (d_60ae_ddbe[player].a.f8 && d_60ae_ddbe[player].a.f24 || f_8aa1_50f4(player, -1)
                || d_471b_0000[23][player] > 1)
                d_60ae_d937 = -1;
        } else if (d_471b_0000[23][player] > 1 || d_60ae_ddbe[player].a.f8 || d_323f_824a[player] == 0
                   || d_54d9_08a0[d_323f_23a6[d_323f_47b4[0][d_471b_0000[18][player]]]][d_3c35_0000[17][player]] > 7
                   || fabs(f_14bc_2db8(player) - f_14bc_2cf4(d_471b_0000[18][player])) > 3.0f
                   || d_323f_824a[player] / 100 - d_60ae_dd98 < 3)
            d_60ae_d937 = -1;
    }
    return d_60ae_d937;
}

void f_9107_02f6(int player, int team, char loan)
{
    char buf[320];
    char n;

    do {
        d_60ae_d93f = 0;
        f_14bc_4bd3("Player Approach");
        f_14bc_4587(1.0, 4.0, d_471b_0000[18][player]);
        sprintf(buf, "%s want %s", (char far *)d_60ae_b572[team], f_14bc_4703(player));
        f_14bc_0ac0(7, buf);
        n = 10;
        if (loan) {
            sprintf(buf, "They want him on loan");
            f_14bc_0ac0(9, buf);
            n = 12;
        } else if (f_14bc_2cc0(team) == 0 && !d_60ae_ddbe[player].w.f12) {
            d_60ae_d7ff = f_14bc_0d32(f_1bd3_137e(f_14bc_020c(player, team), f_14bc_5af6(team)), -1);
            sprintf(buf, "They would offer about %ld", d_60ae_d7ff);
            f_14bc_0ac0(9, buf);
            n = 12;
        } else if (f_14bc_2cc0(team) == 0 && d_60ae_ddbe[player].w.f12) {
            strcpy(buf, "He is on a free transfer");
            f_14bc_0ac0(9, buf);
            n = 12;
        }
        do {
            d_60ae_d977 = -1;
            f_14bc_2f90(n, "", "View Factfile|Allow Approach|Refuse Approach|");
            f_14bc_3334(2);
            if (d_60ae_dda0 == 0) {
                do
                    f_a694_49c9(player, -1, 0);
                while (!d_60ae_d975);
                d_60ae_d975 = 0;
                d_60ae_d93f = -1;
            } else if (d_60ae_dda0 == 1) {
                d_60ae_d937 = -1;
            } else if (d_60ae_dda0 == 2) {
                if (d_323f_824a[player] > 0 || loan) {
                    sprintf(buf, "%s refused", (char far *)d_60ae_b572[team]);
                    f_14bc_0b30(buf);
                } else {
                    f_14bc_0b30("He is not under contract");
                    f_14bc_0b30("You cannot refuse their approach");
                    d_60ae_d977 = 0;
                }
            }
        } while (!d_60ae_d977);
    } while (d_60ae_d93f != 0);
}

char f_9107_052e(int player)
{
    d_60ae_d935 = 0;
    if (f_14bc_2cc0(d_471b_0000[18][player]))
        f_9107_0699(player);
    else if (d_323f_4854[d_471b_0000[18][player]] < 650 || d_323f_824a[player] == 0) {
        d_60ae_db56 = d_54d9_08a0[d_323f_23a6[d_323f_47b4[0][d_471b_0000[18][player]]]][d_3c35_0000[17][player]];
        if (d_471b_0000[23][player] == 3 || d_323f_824a[player] == 0 || d_60ae_db56 > 7
            || fabs(f_14bc_2db8(player) - f_14bc_2cf4(d_471b_0000[18][player])) > 3.0f
            || d_471b_0000[23][player] == 2 && d_323f_3f94[0][d_471b_0000[18][player]] < 0)
            d_60ae_d935 = -1;
    }
    return d_60ae_d935;
}

void f_9107_0699(int player)
{
    char buf[320];

    do {
        d_60ae_d93f = 0;
        f_14bc_4bd3("Player request");
        f_14bc_4587(1.0, 4.0, d_471b_0000[18][player]);
        sprintf(buf, "%s wants to leave", f_14bc_4703(player));
        f_14bc_0ac0(7, buf);
        f_14bc_6b4a(player, 0);
        sprintf(buf, "He %s", d_2289_3af4);
        f_14bc_0ac0(9, buf);
        f_14bc_2f90(12, "", "View Factfile|Refuse Request|List Him|");
        do {
            d_60ae_d977 = -1;
            f_14bc_3334(2);
            d_60ae_db30 = d_60ae_dda0;
            if (d_60ae_db30 == 0) {
                do
                    f_a694_49c9(player, -1, 0);
                while (!d_60ae_d975);
                d_60ae_d975 = 0;
                d_60ae_d93f = -1;
            } else if (d_60ae_db30 == 1) {
                if (d_323f_824a[player] == 0) {
                    f_14bc_0b30("He is a free agent");
                    f_14bc_0b30("You cannot prevent him leaving");
                    d_60ae_d977 = 0;
                } else {
                    sprintf(buf, "%s told to stay", f_14bc_48b4(player));
                    f_14bc_0b30(buf);
                }
            } else if (d_60ae_db30 == 2) {
                sprintf(buf, "%s now transfer listed", f_14bc_48b4(player));
                f_14bc_0b30(buf);
                d_60ae_d935 = -1;
            }
        } while (!d_60ae_d977);
    } while (d_60ae_d93f != 0);
}

char f_9107_0854(int player)
{
    d_60ae_d932 = 0;
    if (f_14bc_2cc0(d_471b_0000[18][player]))
        f_9107_089a(player);
    else if (f_8aa1_50f4(player, 0) == 0)
        d_60ae_d932 = -1;
    return d_60ae_d932;
}

void f_9107_089a(int player)
{
    char buf[320];

    do {
        d_60ae_d93f = 0;
        f_14bc_4bd3("Player request");
        f_14bc_4587(1.0, 4.0, d_471b_0000[18][player]);
        sprintf(buf, "%s now wants to stay", f_14bc_4703(player));
        f_14bc_0ac0(7, buf);
        f_14bc_2f90(10, "", "View Factfile|Remove From List|Refuse Request|");
        f_14bc_3334(2);
        d_60ae_db30 = d_60ae_dda0;
        if (d_60ae_db30 == 0) {
            do
                f_a694_49c9(player, -1, 0);
            while (!d_60ae_d975);
            d_60ae_d975 = 0;
            d_60ae_d93f = -1;
        } else if (d_60ae_db30 == 1) {
            sprintf(buf, "%s removed from list", f_14bc_48b4(player));
            f_14bc_0b30(buf);
            d_60ae_d932 = -1;
        } else if (d_60ae_db30 == 2) {
            sprintf(buf, "%s remains listed", f_14bc_48b4(player));
            f_14bc_0b30(buf);
        }
    } while (d_60ae_d93f != 0);
}

void f_9107_09dc(int player, char c, char d)
{
    long v;

    if (!d) {
        v = f_9107_0b6a(player);
        d_60ae_faf2 = f_1bd3_1617(d_60ae_fdec, 1);
        d_60ae_faf2[player] = v;
        d_60ae_ddbe[player].w.f12 = d_60ae_faf2[player] == 0;
    }
    d_60ae_ddbe[player].w.f8 = 1;
    d_60ae_ddbe[player].w.f10 = c != 0;
    d_60ae_ddbe[player].w.f24 = d != 0;
    d_3c35_0000[11][player] = 0;
}

void f_9107_0aad(int player)
{
    d_60ae_ddbe[player].w.f8 = 0;
    d_60ae_ddbe[player].w.f10 = 0;
    d_60ae_ddbe[player].w.f12 = 0;
    d_60ae_ddbe[player].w.f24 = 0;
    d_3c35_0000[11][player] = 0;
    f_8aa1_1865(player, 0);
}

void f_9107_0af9(int player)
{
    long v;

    v = f_9107_0b6a(player);
    d_60ae_faf2 = f_1bd3_1617(d_60ae_fdec, 1);
    d_60ae_faf2[player] = v;
    d_60ae_ddbe[player].w.f12 = d_60ae_faf2[player] == 0;
}

long f_9107_0b6a(int player)
{
    char buf[320];

    if (f_14bc_2cc0(d_471b_0000[18][player])) {
        d_60ae_d99a = 1;
        d_60ae_db5a = 7;
        f_8aa1_3d10(1, player);
        d_60ae_d7fb = f_14bc_020c(player, d_471b_0000[18][player]);
        if (d_60ae_ddbe[player].a.f8) {
            if (d_60ae_d7fb > 0)
                sprintf(buf, "%s is valued at %ld", f_14bc_48b4(player), d_60ae_d7fb);
            else
                sprintf(buf, "%s on a free transfer", f_14bc_48b4(player));
        } else
            sprintf(buf, "%s not yet valued", f_14bc_48b4(player));
        f_8aa1_43f6(1, buf);
        do {
            d_60ae_d960 = -1;
            d_60ae_db34 = d_471b_0000[18][player];
            d_60ae_db50 = f_8aa1_3f81(1, d_60ae_d7fb / 1000, 0, player);
            if (d_60ae_d93e) {
                do
                    f_a694_49c9(player, -1, 0);
                while (!d_60ae_d975);
                d_60ae_d975 = 0;
                d_60ae_d960 = 0;
                f_8aa1_3d10(1, player);
            }
            d_60ae_d7fb = (long)d_60ae_db50 * 1000;
            d_60ae_d7fb = d_60ae_d7fb / 1000;
            d_60ae_d7fb = d_60ae_d7fb * 1000;
            if (d_60ae_d960) {
                d_60ae_d7f7 = f_14bc_020c(player, -1) * 0.75;
                if (d_60ae_d7fb < d_60ae_d7f7 && d_60ae_d7f7 >= 5000) {
                    f_8aa1_43f6(1, "The board expect more for him");
                    d_60ae_d960 = 0;
                } else if (f_14bc_020c(player, -1) * 3 < d_60ae_d7fb) {
                    sprintf(buf, "He's not worth %ld", d_60ae_d7fb);
                    f_8aa1_43f6(1, buf);
                    d_60ae_d960 = 0;
                }
            }
        } while (!d_60ae_d960);
        if (d_60ae_d7fb > 0)
            sprintf(buf, "%s is valued at %ld", f_14bc_48b4(player), d_60ae_d7fb);
        else
            sprintf(buf, "%s is given a free transfer", f_14bc_48b4(player));
        f_8aa1_43f6(6, buf);
    } else {
        d_60ae_d7fb = f_14bc_020c(player, d_471b_0000[18][player]);
        if (10000 - (d_471b_0000[23][player] == 1 ? 5000 : 0) > d_60ae_d7fb)
            d_60ae_d7fb = 0;
    }
    return d_60ae_d7fb;
}

void f_9107_0e89(int player)
{
    char buf[320];

    d_60ae_d99a = 1;
    d_60ae_db5a = 7;
    f_8aa1_3d10(3, player);
    d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
    sprintf(buf, "He gets %d per week", d_60ae_db16 = d_60ae_fae6[4][player]);
    f_8aa1_43f6(1, buf);
    d_60ae_db3e = f_8aa1_3b46(player, d_471b_0000[18][player]);
    d_60ae_db14 = -1;
    do {
        d_60ae_d960 = -1;
        d_60ae_db54 = d_60ae_db14 == -1 ? d_60ae_db16 : d_60ae_db14;
        d_60ae_db50 = f_8aa1_3f81(3, d_60ae_db54, 100, player);
        if (d_60ae_d93e) {
            do
                f_a694_49c9(player, -1, 0);
            while (!d_60ae_d975);
            d_60ae_d975 = 0;
            d_60ae_d960 = 0;
            f_8aa1_3d10(3, player);
        }
        d_60ae_db14 = d_60ae_db50;
        if (d_60ae_d960) {
            if (d_60ae_db14 < d_60ae_db16) {
                f_8aa1_43f6(1, "He refuses lower pay");
                d_60ae_d960 = 0;
            } else if (d_60ae_db14 > d_60ae_db3e) {
                f_8aa1_43f6(1, "The board refuse to spend that per week");
                d_60ae_d960 = 0;
            }
        }
    } while (!d_60ae_d960);
    if (d_60ae_db14 != d_60ae_db16)
        strcpy(buf, "He accepts the pay rise");
    else
        sprintf(buf, "His wages stay at %d per week", d_60ae_db14);
    f_8aa1_43f6(6, buf);
    d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 1);
    d_60ae_fae6[4][player] = d_60ae_db14;
    d_60ae_dce4 = d_323f_47b4[0][d_471b_0000[18][player]] - 646;
    sprintf(buf, "%04d", player);
    d_60ae_dda6 = f_1bd3_1617(d_60ae_fdce, 0);
    if (f_1bd3_0b1b(d_60ae_dda6[d_60ae_dce4], buf) == 0
        && d_60ae_db16 + 50 + f_1bd3_0d69(100) <= d_60ae_db14
        && f_1bd3_0d69(4) == 0
        && d_471b_0000[0][player] > d_471b_0000[15][player]) {
        d_471b_0000[15][player] = d_471b_0000[0][player];
        if (f_14bc_2cc0(d_471b_0000[18][player]) == 0 && d_471b_0000[20][player] == 0)
            f_14bc_1365(player);
    }
    sprintf(buf, "%04d ", player);
    d_60ae_dda6 = f_1bd3_1617(d_60ae_fdce, 1);
    strcat(d_60ae_dda6[d_60ae_dce4], buf);
}

void f_9107_117d(int player, char c)
{
    if (c) {
        switch (d_3c35_0000[17][player]) {
        case 5: case 7: case 8:
            d_60ae_db2e = 0;
            break;
        case 1:
            d_60ae_db2e = 1;
            break;
        case 0: case 2: case 3:
            d_60ae_db2e = 2;
            break;
        case 4: case 6: case 9:
            d_60ae_db2e = 3;
            break;
        }
    } else {
        switch (d_3c35_0000[17][player]) {
        case 0: case 1: case 5: case 7: case 8:
            d_60ae_db2e = (int)f_1bd3_0d69(2) + 2;
            break;
        case 2: case 3: case 4: case 6: case 9:
            d_60ae_db2e = 3;
            break;
        }
    }
    if (d_60ae_db2e == 0 && f_1bd3_0d69(3) == 0)
        d_60ae_db2e = 1;
    else if (d_60ae_db2e == 1 && f_1bd3_0d69(3) == 0)
        d_60ae_db2e = 2;
    else if (d_60ae_db2e == 2 && f_1bd3_0d69(3) == 0)
        d_60ae_db2e = 1;
    else if (d_60ae_db2e == 3 && f_1bd3_0d69(3) == 0)
        d_60ae_db2e = 2;
    if (d_60ae_db2e == 0) {
        d_471b_0000[15][player] = f_1bd3_1369(d_471b_0000[15][player] + (int)f_1bd3_0d69(25), d_471b_0000[9][player] + 25);
        if (d_471b_0000[20][player] == 0 && f_14bc_2cc0(d_471b_0000[18][player]) == 0)
            f_14bc_1365(player);
    } else if (d_60ae_db2e == 2) {
        d_471b_0000[15][player] = f_1bd3_1307(d_471b_0000[15][player] - (int)f_1bd3_0d69(25), 10);
        if (d_60ae_ddbe[player].w.f7 && f_14bc_2cc0(d_471b_0000[18][player]) == 0)
            f_14bc_0ecb(player);
    } else if (d_60ae_db2e == 3)
        d_60ae_ddbe[player].w.f16 = 1;
}

long f_9107_1391(int player)
{
    long v;

    v = f_14bc_020c(player, -1);
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

void f_9107_1422(void)
{
    char buf[320];
    char ok;
    register unsigned char c;

    memset(d_471b_ae66, 0, 38);
    memset(d_2289_b9c6, 0, 50);
    f_a3de_14f5(0);
    if (d_60ae_d9bc > -1) {
        d_60ae_db10 = d_323f_1c08[d_60ae_d9bc];
        do {
            f_14bc_4bd3("Find Player");
            f_14bc_4587(1.0, 4.0, d_60ae_db10);
            f_14bc_2f90(7, "", "*Exit|Normal Search|Scout Search|Transfer List|Foreign Players|Shortlist|Scout Reports|Transfer News|");
            f_14bc_3334(7);
            d_60ae_db0e = d_60ae_dda0;
            if (d_60ae_db0e == 1 || d_60ae_db0e == 2) {
                ok = 1;
                memset(d_2289_b9c6, 0, 50);
                d_60ae_faf6 = f_1bd3_1617(d_60ae_fdee, 1);
                memset(d_60ae_faf6, -1, 3720);
                if (d_60ae_db0e == 2) {
                    c = f_ad38_6227(d_60ae_db10, "Search Options");
                    if (c < 255)
                        d_2289_b9c6[c + 39] = -1;
                    else
                        ok = 0;
                } else
                    d_2289_b9c6[43] = -1;
                if (ok != 1)
                    continue;
                f_9107_1d53(0, 6, 6, 3, "Positions", "Goalkeeper|Defender|Midfielder|Attacker|Right Sided|Left Sided|Central|");
                if (d_60ae_d975)
                    continue;
                f_9107_1d53(8, 16, 6, 3, "Requirements", "Passing|Tackling|Pace|Heading|Flair|Creativity|Goalscoring|Influence|Stamina|");
                if (d_60ae_d975)
                    continue;
                f_9107_1d53(18, 24, 6, 3, "Approx Value", "0K - 100K|100K - 300K|300K - 500K|500K - 1M|1M - 2M|2M+|To Loan|");
                if (d_60ae_d975)
                    continue;
                f_9107_1d53(26, 29, 6, 3, "Division", "FA Premier|First|Second|Third|");
                if (d_60ae_d975)
                    continue;
                f_9107_1d53(31, 35, 6, 3, "Age", "16 - 20|20 - 24|24 - 30|30 - 33|33+|");
                if (d_60ae_d975)
                    continue;
                f_9107_1f12("Player Search", 0, d_60ae_dda4 - 1);
            } else if (d_60ae_db0e == 5) {
                d_60ae_dce4 = d_323f_47b4[0][d_60ae_db10] - 646;
                d_60ae_db0c = -1;
                do {
                    d_60ae_dc8e = d_2289_f108[d_60ae_db10][0];
                    if (d_60ae_dc8e > 0) {
                        f_14bc_60ca();
                        f_14bc_4bd3("Short List");
                        f_9107_2761(d_60ae_db10);
                        f_14bc_60da();
                        f_14bc_50f8(2, 29.0, 1.25, 1, 8, 37, " WCH");
                        f_14bc_50f8(2, 34.25, 1.25, 1, 8, 37, " REC");
                        f_14bc_50f8(2, 1.25, 22.5, 1, 12, 72, "   DEL");
                        f_14bc_50f8(2, 10.875, 22.5, 1, 4, 224, "            EXIT");
                        f_14bc_60ca();
                        for (d_60ae_dd1e = 1; d_60ae_dd1e <= d_60ae_dc8e; d_60ae_dd1e++)
                            f_9107_2a40(d_2289_f108[d_60ae_db10][d_60ae_dd1e], d_60ae_dd1e);
                        f_14bc_60da();
                        f_9107_2efd(0, 0);
                        d_60ae_d92f = 0;
                        d_60ae_d92e = 0;
                        do {
                            d_60ae_db0a = f_14bc_5635(-1);
                            if ((d_60ae_db0a == 0 || d_60ae_db0a == 2 || d_60ae_db0a == 3 || d_60ae_db0a == 4) && d_60ae_d92e) {
                                f_14bc_548f(1, 0);
                                d_60ae_d92e = 0;
                            }
                            if ((d_60ae_db0a == 0 || d_60ae_db0a == 1 || d_60ae_db0a == 2 || d_60ae_db0a == 4) && d_60ae_d92f) {
                                f_14bc_548f(3, 0);
                                d_60ae_d92f = 0;
                            }
                            if (d_60ae_db0a == 1 && d_60ae_d92e == 0) {
                                f_14bc_548f(1, -1);
                                d_60ae_d92e = -1;
                            }
                            if (d_60ae_db0a == 3 && d_60ae_d92f == 0) {
                                f_14bc_548f(3, -1);
                                d_60ae_d92f = -1;
                            }
                            if (d_60ae_db0a == 2)
                                f_9107_2efd(0, -1);
                        } while (d_60ae_db0a <= 3);
                        if (d_60ae_db0a == 4)
                            d_60ae_d977 = -1;
                        else if (d_60ae_db0a >= 5) {
                            d_60ae_dd84 = d_2289_f108[d_60ae_db10][d_60ae_db0a - 4];
                            if (d_60ae_d92e) {
                                if (f_14bc_6f7c(d_60ae_dd84))
                                    f_14bc_0b83("Can't watch foreign|based players");
                                else
                                    f_ad38_6337(d_60ae_db10, d_60ae_dd84);
                                d_60ae_d977 = 0;
                            } else if (d_60ae_d92f) {
                                d_2289_f108[d_60ae_db10][d_60ae_db0a - 4] = d_2289_f108[d_60ae_db10][d_2289_f108[d_60ae_db10][0]];
                                d_2289_ec08[d_60ae_db10][d_60ae_db0a - 4] = d_2289_ec08[d_60ae_db10][d_2289_f108[d_60ae_db10][0]];
                                d_2289_f108[d_60ae_db10][0]--;
                                sprintf(buf, "%s removed", f_14bc_48b4(d_60ae_dd84));
                                f_14bc_0b83(buf);
                                d_60ae_d977 = d_2289_f108[d_60ae_db10][0] == 0;
                            } else {
                                do {
                                    d_60ae_d8f5 = 0;
                                    f_a694_49c9(d_60ae_dd84, d_60ae_db10, -1);
                                    f_8aa1_4f06(d_60ae_dd84, d_60ae_dd4a);
                                    if (d_60ae_d8f5) {
                                        d_2289_f108[d_60ae_db10][d_60ae_db0a - 4] = d_60ae_dda4 - 1;
                                        d_60ae_dd84 = d_60ae_dda4 - 1;
                                    }
                                } while (!d_60ae_d975);
                                d_60ae_d977 = d_2289_f108[d_60ae_db10][0] == 0;
                            }
                        }
                    } else {
                        f_14bc_0b83("Nobody shortlisted");
                        d_60ae_d977 = -1;
                    }
                } while (!d_60ae_d977);
            } else if (d_60ae_db0e == 3) {
                memset(d_2289_b9c6, 0, 50);
                d_60ae_faf6 = f_1bd3_1617(d_60ae_fdee, 1);
                memset(d_60ae_faf6, -1, 3720);
                d_2289_b9c6[7] = -1;
                d_2289_b9c6[17] = -1;
                d_2289_b9c6[25] = -1;
                d_2289_b9c6[30] = -1;
                d_2289_b9c6[36] = -1;
                d_2289_b9c6[37] = -1;
                d_2289_b9c6[43] = -1;
                f_9107_1f12("Transfer List", 0, d_60ae_dda4 - 1);
            } else if (d_60ae_db0e == 6)
                f_ad38_664f(d_60ae_d9bc + 122);
            else if (d_60ae_db0e == 4) {
                memset(d_2289_b9c6, 0, 50);
                d_60ae_faf6 = f_1bd3_1617(d_60ae_fdee, 1);
                memset(d_60ae_faf6, -1, 3720);
                d_2289_b9c6[7] = -1;
                d_2289_b9c6[17] = -1;
                d_2289_b9c6[25] = -1;
                d_2289_b9c6[30] = -1;
                d_2289_b9c6[36] = -1;
                d_2289_b9c6[43] = -1;
                f_9107_1f12("Players Abroad", 1700, d_60ae_dda2 + 1699);
            } else if (d_60ae_db0e == 7)
                f_b628_6d15(0);
        } while (d_60ae_db0e != 0);
    }
}

void f_9107_1c1c(int team)
{
    do {
        d_60ae_dc8e = d_2289_f108[team][0];
        if (d_60ae_dc8e > 0) {
            f_14bc_4bd3("Short List");
            f_9107_2761(team);
            f_14bc_50f8(2, 1.25, 22.5, 1, 4, 0x12d, "                 EXIT");
            for (d_60ae_dd1e = 1; d_60ae_dd1e <= d_60ae_dc8e; d_60ae_dd1e++)
                f_9107_2a40(d_2289_f108[team][d_60ae_dd1e], d_60ae_dd1e);
            do
                d_60ae_db0a = f_14bc_5635(d_60ae_dd56);
            while (d_60ae_db0a <= 0);
            if (d_60ae_db0a == 1)
                d_60ae_d977 = -1;
            else if (d_60ae_db0a >= 2) {
                d_60ae_dd84 = d_2289_f108[team][d_60ae_db0a - 1];
                do
                    f_a694_49c9(d_60ae_dd84, team, -1);
                while (!d_60ae_d975);
                d_60ae_d977 = d_2289_f108[team][0] == 0;
            }
        } else {
            f_14bc_0b83("Nobody shortlisted");
            d_60ae_d977 = -1;
        }
    } while (!d_60ae_d977);
}

void f_9107_1d53(int a, int b, int bg, int fg, char far *s1, char far *s2)
{
    char buf[320];

    f_14bc_4bd3("Search options");
    sprintf(buf, " Select %s ", s1);
    f_14bc_3e40(1.0, 4.0, bg, fg, 0, buf);
    sprintf(buf, "*Exit|*Continue|%s", s2);
    f_14bc_2f90(7, "", buf);
    d_60ae_db08 = b - a + 2;
    do {
        f_14bc_3334(-d_60ae_db08);
        d_60ae_db06 = d_60ae_dda0;
        if (d_60ae_db06 > 1) {
            if (d_2289_b9c4[d_60ae_db06 + a] == 0)
                f_9107_1e98(d_60ae_db06, -1, a);
            else
                f_9107_1e98(d_60ae_db06, 0, a);
        }
    } while (d_60ae_db06 >= 2);
    d_60ae_d92d = 0;
    for (d_60ae_db04 = 2; d_60ae_db04 <= d_60ae_db08; d_60ae_db04++)
        if (d_2289_b9c4[d_60ae_db04 + a]) {
            d_60ae_d92d = -1;
            d_60ae_db04 = d_60ae_db08;
        }
    if (d_60ae_d92d == 0)
        d_2289_b9c4[d_60ae_db08 + a + 1] = -1;
    d_60ae_d975 = d_60ae_db06 == 0 ? -1 : 0;
}

void f_9107_1e98(int x, char on, int a)
{
    if (on) {
        d_2289_b9c4[x + a] = -1;
        f_14bc_32d7(1, 12, x);
    } else {
        d_2289_b9c4[x + a] = 0;
        f_14bc_32d7((int)d_2289_eb18[x] / 16, (int)d_2289_eb18[x] % 16, x);
    }
}

void f_9107_1f12(char far *title, unsigned from, unsigned to)
{
    int n;

    n = 0;
    f_14bc_4bd3("");
    f_14bc_3c75(-1.0, 12.5, 1, "Searching");
    for (d_60ae_dd84 = from; d_60ae_dd84 <= to; d_60ae_dd84++) {
        unsigned char c;

        d_60ae_d960 = -1;
        if (d_471b_0000[18][d_60ae_dd84] == d_60ae_db10)
            d_60ae_d960 = 0;
        if (f_14bc_6f7c(d_60ae_dd84) && d_60ae_ddbe[d_60ae_dd84].w.f29 == 1)
            d_60ae_d960 = 0;
        if (d_60ae_d960)
            for (d_60ae_db86 = 0; d_60ae_db86 <= 6; d_60ae_db86++) {
                if (d_60ae_db86 == 0)
                    c = d_60ae_ddbe[d_60ae_dd84].w.f0;
                else if (d_60ae_db86 == 1)
                    c = d_60ae_ddbe[d_60ae_dd84].w.f1;
                else if (d_60ae_db86 == 2)
                    c = d_60ae_ddbe[d_60ae_dd84].w.f2;
                else if (d_60ae_db86 == 3)
                    c = d_60ae_ddbe[d_60ae_dd84].w.f3;
                else if (d_60ae_db86 == 4)
                    c = d_60ae_ddbe[d_60ae_dd84].w.f4;
                else if (d_60ae_db86 == 5)
                    c = d_60ae_ddbe[d_60ae_dd84].w.f5;
                else if (d_60ae_db86 == 6)
                    c = d_60ae_ddbe[d_60ae_dd84].w.f6;
                if (d_2289_b9c4[d_60ae_db86 + 2] && c == 0) {
                    d_60ae_d960 = 0;
                    d_60ae_db86 = 6;
                }
            }
        if (d_60ae_d960)
            for (d_60ae_db86 = 8; d_60ae_db86 <= 14; d_60ae_db86++)
                if (d_2289_b9c4[d_60ae_db86 + 2] && d_471b_0000[d_60ae_db86 - 7][d_60ae_dd84] < 15) {
                    d_60ae_d960 = 0;
                    d_60ae_db86 = 14;
                }
        if (d_60ae_d960 && d_2289_b9c4[16]) {
            d_60ae_dafc = d_3c35_0000[0][d_60ae_dd84] + d_3c35_0000[5][d_60ae_dd84];
            if (d_60ae_dafc >= 30) {
                d_60ae_db8c = d_3c35_0000[1][d_60ae_dd84] + d_3c35_0000[6][d_60ae_dd84];
                if (d_60ae_db8c / d_60ae_dafc < 0.2)
                    d_60ae_d960 = 0;
            }
        }
        if (d_60ae_d960 && d_2289_b9c4[17] && d_471b_0000[12][d_60ae_dd84] < 14)
            d_60ae_d960 = 0;
        if (d_60ae_d960 && d_2289_b9c4[18] && d_471b_0000[22][d_60ae_dd84] < 14)
            d_60ae_d960 = 0;
        if (d_60ae_d960) {
            d_60ae_d92c = 0;
            if (d_2289_b9c4[27])
                d_60ae_d92c = -1;
            else if (d_60ae_ddbe[d_60ae_dd84].a.f8 && d_60ae_ddbe[d_60ae_dd84].a.f24)
                d_60ae_d92c = d_2289_b9c4[26];
            else {
                d_60ae_d7eb = f_14bc_020c(d_60ae_dd84, d_471b_0000[18][d_60ae_dd84]);
                if (d_60ae_d7eb <= 100000L)
                    d_60ae_d92c = d_2289_b9c4[20];
                else if (d_60ae_d7eb <= 300000L)
                    d_60ae_d92c = d_2289_b9c4[21];
                else if (d_60ae_d7eb <= 500000L)
                    d_60ae_d92c = d_2289_b9c4[22];
                else if (d_60ae_d7eb <= 1000000L)
                    d_60ae_d92c = d_2289_b9c4[23];
                else if (d_60ae_d7eb <= 2000000L)
                    d_60ae_d92c = d_2289_b9c4[24];
                else
                    d_60ae_d92c = d_2289_b9c4[25];
            }
            if (d_60ae_d92c == 0)
                d_60ae_d960 = 0;
        }
        if (d_60ae_d960 && d_2289_b9c4[32] == 0
            && d_2289_b9c4[d_471b_0000[18][d_60ae_dd84] / 20 + 28] == 0)
            d_60ae_d960 = 0;
        if (d_60ae_d960) {
            d_60ae_d92b = 0;
            if (d_2289_b9c4[38])
                d_60ae_d92b = -1;
            else {
                d_60ae_db02 = d_471b_0000[17][d_60ae_dd84];
                if (d_60ae_db02 <= 20)
                    d_60ae_d92b = d_2289_b9c4[33];
                else if (d_60ae_db02 <= 24)
                    d_60ae_d92b = d_2289_b9c4[34];
                else if (d_60ae_db02 <= 30)
                    d_60ae_d92b = d_2289_b9c4[35];
                else if (d_60ae_db02 <= 33)
                    d_60ae_d92b = d_2289_b9c4[36];
                else
                    d_60ae_d92b = d_2289_b9c4[37];
            }
            if (d_60ae_d92b == 0)
                d_60ae_d960 = 0;
        }
        if (d_60ae_d960 && d_2289_b9c4[39] && !d_60ae_ddbe[d_60ae_dd84].a.f8)
            d_60ae_d960 = 0;
        if (d_60ae_d960 && d_2289_b9c4[40] && d_323f_824a[d_60ae_dd84] > 0)
            d_60ae_d960 = 0;
        if (d_60ae_d960 && d_2289_b9c4[45] == 0)
            for (c = 0; c <= 3; c += 1)
                if (d_2289_b9c4[c + 41] && !f_9107_316b(d_60ae_dd84, d_60ae_db10, c)) {
                    d_60ae_d960 = 0;
                    c = 3;
                }
        if (d_60ae_d960) {
            n++;
            d_60ae_faf6 = f_1bd3_1617(d_60ae_fdee, 1);
            d_60ae_faf6[n - 1] = d_60ae_dd84;
        }
    }
    if (n > 0) {
        d_60ae_db00 = 1;
        d_60ae_db0c = -1;
        do {
            unsigned char c;
            unsigned char c2;
            char buf[40];

            d_60ae_d92a = 0;
            f_14bc_60ca();
            f_14bc_4bd3(title);
            f_9107_2761(d_60ae_db10);
            f_14bc_60da();
            c = n / 15 + (n % 15 > 0 ? 1 : 0);
            c2 = d_60ae_db00 / 15 + 1;
            sprintf(buf, " %d/%d", c2, c);
            f_14bc_3672(34.625, 1.125, 0, 1, 0x24, buf);
            f_14bc_50f8(2, 34.25, 2.0, 1, 8, 0x25, " REC");
            f_9107_291b();
            d_60ae_dafe++;
            d_60ae_dc8e = 0;
            for (d_60ae_dd1e = d_60ae_db00; d_60ae_db00 + 14 >= d_60ae_dd1e; d_60ae_dd1e++) {
                d_60ae_faf6 = f_1bd3_1617(d_60ae_fdee, 0);
                d_60ae_dd84 = d_60ae_faf6[d_60ae_dd1e - 1];
                if (d_60ae_dd84 <= -1)
                    break;
                d_471b_ae66[d_60ae_dc8e] = d_60ae_dd84;
                d_60ae_dc8e++;
            }
            f_14bc_60ca();
            for (d_60ae_dd1e = 1; d_60ae_dd1e <= d_60ae_dc8e; d_60ae_dd1e++)
                f_9107_2a40(d_471b_ae66[d_60ae_dd1e - 1], d_60ae_dd1e);
            f_14bc_60da();
            f_9107_2efd(1, 0);
            do {
                d_60ae_db0a = f_14bc_5635(-1);
                if (d_60ae_db0a == 1)
                    f_9107_2efd(1, -1);
            } while (d_60ae_db0a < 2);
            if (d_60ae_db0a == 2 && d_60ae_d986 < 3)
                d_60ae_db00 -= 15;
            else if (d_60ae_db0a == 4 && d_60ae_d986 == 1 || d_60ae_db0a == 3 && d_60ae_d986 == 3)
                d_60ae_db00 += 15;
            else if (d_60ae_db0a >= d_60ae_dafe) {
                d_60ae_dc7e = d_60ae_db0a - d_60ae_dafe;
                d_60ae_dd84 = d_471b_ae66[d_60ae_dc7e];
                do {
                    d_60ae_d8f5 = 0;
                    f_a694_49c9(d_60ae_dd84, d_60ae_db10, -1);
                    f_8aa1_4f06(d_60ae_dd84, d_60ae_dd4a);
                    if (d_60ae_d8f5) {
                        d_471b_ae66[d_60ae_dc7e] = d_60ae_dda4 - 1;
                        d_60ae_dd84 = d_60ae_dda4 - 1;
                        d_60ae_d975 = -1;
                        d_60ae_db0a = d_60ae_d986 < 3 ? 3 : 2;
                    }
                } while (!d_60ae_d975);
            }
        } while (!(d_60ae_db0a == 3 && d_60ae_d986 < 3) && !(d_60ae_db0a == 2 && d_60ae_d986 > 2));
    } else
        f_14bc_0b83("No players found");
}

void f_9107_2761(int team)
{
    char buf[320];

    sprintf(buf, " %s ", (char far *)d_60ae_b572[team]);
    f_14bc_3672(1.125, 3.0, -(d_323f_4cb8[team] / 16), d_323f_4cb8[team] % 16, 0, buf);
    f_14bc_3672(1.125, 4.5, 4, 1, 0x48, " NAME");
    f_14bc_3672(10.375, 4.5, 4, 1, 0x18, " POS");
    f_14bc_3672(13.625, 4.5, 4, 1, 0x48, " CLUB");
    f_14bc_3672(22.875, 4.5, 4, 1, 0x24, " AP GL");
    f_14bc_3672(27.625, 4.5, 4, 1, 0, " AV R ");
    f_14bc_3672(32.375, 4.5, 4, 1, 0, " VALUE   ");
}

/* the search screen's bottom bar, by what can be scrolled: label, colours, width */
static struct opt d_60ae_3c28[] = {
    {"   -SCR", 1, 9, 72}, {"       EXIT", 1, 2, 147}, {"   +SCR", 1, 9, 72}, {"*", 0, 0, 0}
};
static struct opt d_60ae_3c48[] = {
    {"   -SCR", 1, 9, 72}, {"            EXIT", 1, 2, 224}, {"*", 0, 0, 0}
};
static struct opt d_60ae_3c60[] = {
    {"            EXIT", 1, 2, 224}, {"   +SCR", 1, 9, 72}, {"*", 0, 0, 0}
};
static struct opt d_60ae_3c78[] = {
    {"                 EXIT", 1, 2, 301}, {"*", 0, 0, 0}
};

void f_9107_291b(void)
{
    float x;
    struct opt far *p;

    d_60ae_faf6 = f_1bd3_1617(d_60ae_fdee, 0);
    d_60ae_d986 = (d_60ae_db00 == 1 ? 2 : 0) + (d_60ae_faf6[d_60ae_db00 + 15] == -1 ? 1 : 0) + 1;
    if (d_60ae_d986 == 1)
        p = d_60ae_3c28;
    else if (d_60ae_d986 == 2)
        p = d_60ae_3c48;
    else if (d_60ae_d986 == 3)
        p = d_60ae_3c60;
    else
        p = d_60ae_3c78;
    d_60ae_dafe = 1;
    x = 1.25;
    do {
        f_14bc_50f8(2, x, 22.5, p->a, p->b, p->w, p->s);
        x += (p->w + 5) / 8.0;
        d_60ae_dafe++;
        p++;
    } while (strcmp(p->s, "*") != 0);
}

/* one row of the search screen: player p's name, positions, club, appearances and goals,
   average rating and value */
void f_9107_2a40(int p, int row)
{
    char c;
    char a[5];
    char b[6];
    int club;
    char buf[320];

    c = 0;
    if (row & 1)
        d_60ae_dd48 = 14;
    else
        d_60ae_dd48 = 8;
    if (p < d_60ae_dda4) {
        d_60ae_db62 = f_8aa1_299a(p, d_60ae_db10);
        c = f_8aa1_27e3(p, d_60ae_db10, d_60ae_db62);
    }
    sprintf(buf, " %.11s", f_14bc_48b4(p));
    f_14bc_50f8(0, 1.125, row + 5, c == 2 ? 6 : 1, d_60ae_dd48, 0x48, buf);
    club = d_3c35_0000[7][p] < 255 ? d_3c35_0000[7][p] : d_471b_0000[18][p];
    strcpy(d_2289_35ca, " ");
    if (d_60ae_ddbe[p].w.f0)
        strcat(d_2289_35ca, "GK");
    if (d_60ae_ddbe[p].w.f1)
        strcat(d_2289_35ca, "D");
    if (d_60ae_ddbe[p].w.f2)
        strcat(d_2289_35ca, "M");
    if (d_60ae_ddbe[p].w.f3)
        strcat(d_2289_35ca, "A");
    f_14bc_3672(10.375, row + 5, 4, 5, 0x18, d_2289_35ca);
    if (club < 80)
        sprintf(buf, " %.11s", (char far *)d_60ae_b572[club]);
    else if (club >= 140)
        sprintf(buf, " %.11s", d_54d9_0000[club - 140]);
    f_14bc_3672(13.625, row + 5, 1, 12, 0x48, buf);
    d_60ae_dafc = d_3c35_0000[0][p] + d_3c35_0000[5][p];
    sprintf(a, "%d%s", d_60ae_dafc, d_60ae_dafc < 10 ? " " : "");
    d_60ae_db8c = d_3c35_0000[1][p] + d_3c35_0000[6][p];
    sprintf(b, "%d%s", d_60ae_db8c, d_60ae_db8c < 10 ? " " : "");
    sprintf(buf, " %s %s", a, b);
    f_14bc_3672(22.875, row + 5, 1, 4, 0x24, buf);
    d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
    sprintf(buf, " %s", f_a694_2118(d_60ae_dafc, d_60ae_fae6[0][p] + d_60ae_fae6[1][p]));
    f_14bc_3672(27.625, row + 5, 1, 4, 0x24, buf);
    if (d_60ae_ddbe[p].w.f8 && d_60ae_ddbe[p].w.f24)
        strcpy(buf, " To Loan");
    else {
        d_60ae_d83b = f_14bc_020c(p, d_471b_0000[18][p]);
        if (!d_60ae_ddbe[p].w.f8)
            d_60ae_d83b = f_14bc_0dd6(d_60ae_d83b);
        strcpy(d_2289_3732, f_14bc_0e7a(d_60ae_d83b));
        sprintf(buf, " %s", d_2289_3732);
    }
    f_14bc_3672(32.375, row + 5, 6, 3, 0x36, buf);
}

void f_9107_2efd(int mode, char draw)
{
    char buf[320];

    if (d_60ae_db0c > -1 && draw) {
        f_1bd3_0821(8, 0xa4, 0x138, 0xac);
        for (d_60ae_dd1e = 1; d_60ae_dd1e <= d_60ae_dc8e; d_60ae_dd1e++)
            f_1bd3_0821(2, d_60ae_dd1e * 8 + 0x22, 7, d_60ae_dd1e * 8 + 0x28);
    }
    do {
        d_60ae_db0c += draw ? 1 : 0;
        if (d_60ae_db0c == 4)
            d_60ae_db0c = -1;
        if (d_60ae_db0c > -1) {
            if (mode == 0) {
                d_60ae_dc8e = d_2289_f108[d_60ae_db10][0];
                for (d_60ae_dd1e = 1; d_60ae_dd1e <= d_60ae_dc8e; d_60ae_dd1e++)
                    d_471b_ae66[d_60ae_dd1e - 1] = d_2289_f108[d_60ae_db10][d_60ae_dd1e];
            }
            d_60ae_d929 = 0;
            for (d_60ae_dd1e = 1; d_60ae_dd1e <= d_60ae_dc8e; d_60ae_dd1e++) {
                if (f_9107_316b(d_471b_ae66[d_60ae_dd1e - 1], d_60ae_db10, d_60ae_db0c)) {
                    f_14bc_3672(0.375, d_60ae_dd1e + 5, 1, 2, 5, "R");
                    d_60ae_d929 = -1;
                }
            }
            if (d_60ae_d929) {
                f_14bc_3672(1.125, 21.25, 1, 2, 0, "R");
                strcpy(d_2289_36e2, "");
                if (d_60ae_db0c == 3)
                    strcpy(d_2289_36e2, "youth ");
                sprintf(buf, " Recommended by %sscout %s ", d_2289_36e2,
                        f_14bc_490d(d_323f_48f4[d_60ae_db0c][d_60ae_db10], 0));
                f_14bc_3672(2.625, 21.25, 6, 3, 0, buf);
            }
        }
    } while (d_60ae_d929 == 0 && d_60ae_db0c != -1 && draw);
}

char f_9107_316b(int p, int team, int n)
{
    d_60ae_d928 = 0;
    if (n < 3 || n == 3 && d_471b_0000[17][p] < 21) {
        d_60ae_dafa = d_323f_48f4[n][team];
        d_60ae_db56 = d_54d9_08a0[d_323f_23a6[d_60ae_dafa]][d_3c35_0000[17][p]];
        d_60ae_daf8 = (d_323f_2dce[d_60ae_dafa] >= (p + d_60ae_dafa) % 200) * 0.075
            ? d_471b_0000[9][p]
            : f_1bd3_1307(d_3c35_0000[18][p], d_471b_0000[0][p]);
        if (d_60ae_db56 < 8) {
            if (n < 3) {
                d_60ae_daf6 = f_14bc_2cf4(team);
                d_60ae_daf4 = 150;
            } else {
                d_60ae_daf6 = 0;
                d_60ae_daf4 = 175;
            }
        } else
            d_60ae_daf4 = 180;
        d_60ae_db3c = f_14bc_2db8(p);
        if (d_60ae_daf8 >= d_60ae_daf4 && d_60ae_db3c > d_60ae_daf6
            && d_60ae_db3c < f_14bc_2cf4(team) + 4)
            d_60ae_d928 = -1;
    }
    return d_60ae_d928;
}

void f_9107_32f4(void)
{
    d_60ae_daec = 0;
    d_60ae_d927 = -1;
    f_b628_674e(2);
    for (d_60ae_dd42 = 0; d_60ae_dd42 <= 645; d_60ae_dd42++) {
        f_9107_3360(d_60ae_dd42, (0x22f - d_60ae_dce6 >= d_60ae_dd42) - 2, 0);
        f_b628_68ca(2, d_60ae_dd42, 645);
    }
    d_60ae_d927 = 0;
}

void f_9107_3360(int p, int c, char flag)
{
    char a, b;

    d_60ae_fae2 = f_1bd3_1617(d_60ae_fde4, 1);
    ((int far *)d_60ae_fae2)[p] = f_b628_4413(0);
    ((int far *)(d_60ae_fae2 + 1300))[p] = f_b628_448b(0);
    do {
        d_323f_1c08[p] = 0xff;
        if (flag == 0)
            d_323f_1e92[p] = f_1bd3_0d69(26) + 35;
        else
            d_323f_1e92[p] = 35;
        d_323f_211c[p] = 0;
        do
            d_60ae_daee = f_1bd3_0d69(10);
        while (!(d_60ae_d960 = d_60ae_daee != 2 && d_60ae_daee != 4 && d_60ae_daee != 6
                 && d_60ae_daee != 9));
        d_323f_23a6[p] = d_60ae_daee;
        do {
            d_60ae_d960 = -1;
            d_60ae_dd0e = f_1bd3_0d69(100) + 1;
            if (d_60ae_dd0e <= 60) {
                d_60ae_dbda = f_1bd3_0d69(3);
                if (d_60ae_dbda == 0 || d_60ae_dbda == 1)
                    d_60ae_dbc6 = d_60ae_dbda;
                else
                    d_60ae_dbc6 = 0;
            } else if (d_60ae_dd0e <= 90) {
                d_60ae_dbda = f_1bd3_0d69(4);
                if (d_60ae_dbda != 3)
                    d_60ae_dbc6 = d_60ae_dbda + 5;
                else
                    d_60ae_dbc6 = 3;
            } else if (d_60ae_dd0e <= 100)
                d_60ae_dbc6 = 2;
            d_60ae_dd0e = f_1bd3_0d69(100) + 1;
            if (d_60ae_dd0e <= 70)
                d_60ae_d998 = f_1bd3_0d69(3) > 0 ? 0 : 4;
            else if (d_60ae_dd0e <= 85)
                d_60ae_d998 = 1;
            else if (d_60ae_dd0e <= 95)
                d_60ae_d998 = 2;
            else
                d_60ae_d998 = 3;
            if ((d_60ae_dbc6 == 2 || d_60ae_dbc6 == 6) && d_60ae_d998 == 0)
                d_60ae_d960 = 0;
        } while (!d_60ae_d960);
        d_323f_2630[p] = (d_60ae_d998 << 4) + d_60ae_dbc6;
        d_60ae_d926 = 0;
        d_60ae_d925 = 0;
        for (d_60ae_dd3c = 3; d_60ae_dd3c >= 0; d_60ae_dd3c--) {
            d_60ae_dbda = f_1bd3_0d69(560) + 1;
            switch (d_60ae_dd3c) {
            case 0:
                d_60ae_d924 = d_60ae_dbda <= 80 && d_60ae_d925 == 0 && d_60ae_d926 == 0;
                break;
            case 1:
                d_60ae_d924 = d_60ae_dbda > 80 && d_60ae_dbda <= 160 && d_60ae_d925 == 0;
                break;
            case 2:
                d_60ae_d924 = d_60ae_dbda > 160 && d_60ae_dbda <= 480 && d_60ae_d925 == 0;
                break;
            case 3:
                d_60ae_d924 = d_60ae_dbda > 480;
                break;
            }
            if (d_60ae_d924) {
                d_60ae_db3c = f_1bd3_0d69(51) + 50;
                d_60ae_daf8 = d_60ae_db3c + f_1bd3_0d69(191 - d_60ae_db3c) + 10;
                d_323f_28ba[d_60ae_dd3c][p] = d_60ae_db3c;
                d_323f_32e2[d_60ae_dd3c][p] = d_60ae_daf8;
                if (d_323f_1e92[p] > 35)
                    for (d_60ae_dd68 = 35; d_60ae_dd68 <= d_323f_1e92[p] - 1; d_60ae_dd68++)
                        f_9107_3a22(p, d_60ae_dd3c);
                if (d_60ae_dd3c == 2)
                    d_60ae_d926 = -1;
                else if (d_60ae_dd3c == 3)
                    d_60ae_d925 = -1;
            } else {
                d_323f_28ba[d_60ae_dd3c][p] = 10;
                d_323f_32e2[d_60ae_dd3c][p] = 10;
            }
        }
        if (c > -2) {
            d_60ae_d923 = 0;
            d_60ae_dbda = 0;
            do {
                if (c == -1)
                    d_60ae_dc0e = f_1bd3_0d69(80);
                else
                    d_60ae_dc0e = c;
                d_60ae_dcdc = f_14bc_2cc0(d_60ae_dc0e) ? 1 : 0;
                d_60ae_db7e = f_14bc_2cf4(d_60ae_dc0e);
                for (d_60ae_daea = d_60ae_dcdc; d_60ae_daea <= 6; d_60ae_daea++) {
                    if (d_323f_47b4[d_60ae_daea][d_60ae_dc0e] == 650) {
                        d_60ae_db56 = d_54d9_08a0[d_323f_4674[d_60ae_dc0e]][d_323f_23a6[p]];
                        if (d_60ae_db56 < 8) {
                            d_60ae_dae8 = d_323f_28ba[f_96bb_09e7(d_60ae_daea)][p] / 10 - d_60ae_db7e;
                            d_60ae_dae8 = abs(d_60ae_dae8);
                            if (d_60ae_dae8 < 4) {
                                d_323f_47b4[d_60ae_daea][d_60ae_dc0e] = p;
                                d_323f_1c08[p] = d_60ae_dc0e;
                                d_323f_3d0a[p] = d_60ae_daea;
                                if (d_60ae_daea == 0 && d_60ae_dd98 == 1 && d_60ae_d8f6) {
                                    d_60ae_fae2 = f_1bd3_1617(d_60ae_fde4, 1);
                                    ((int far *)d_60ae_fae2)[p] = d_2289_7486[0][d_60ae_dc0e];
                                    ((int far *)(d_60ae_fae2 + 1300))[p] = d_2289_7486[1][d_60ae_dc0e];
                                    a = d_323f_2630[p] / 16;
                                    b = d_323f_2630[p] % 16;
                                    if (d_2289_7486[2][d_60ae_dc0e] < 255)
                                        a = d_2289_7486[2][d_60ae_dc0e];
                                    if (d_2289_7486[3][d_60ae_dc0e] < 255)
                                        b = d_2289_7486[3][d_60ae_dc0e];
                                    d_323f_2630[p] = (a << 4) + b;
                                    if (d_2289_7486[4][d_60ae_dc0e] < 255)
                                        d_323f_28ba[0][p] = d_2289_7486[4][d_60ae_dc0e];
                                    if (d_2289_7486[5][d_60ae_dc0e] < 255)
                                        d_323f_23a6[p] = d_2289_7486[5][d_60ae_dc0e];
                                }
                                if (d_60ae_daea == 1 && d_60ae_dd98 == 1 && d_60ae_d8f6) {
                                    d_60ae_fae2 = f_1bd3_1617(d_60ae_fde4, 1);
                                    ((int far *)d_60ae_fae2)[p] = d_2289_7486[6][d_60ae_dc0e];
                                    ((int far *)(d_60ae_fae2 + 1300))[p] = d_2289_7486[7][d_60ae_dc0e];
                                }
                                d_60ae_daea = 6;
                                d_60ae_d923 = -1;
                            }
                        }
                    }
                }
                d_60ae_dbda++;
            } while (d_60ae_dbda < 20 && d_60ae_d923 == 0);
        }
    } while (d_60ae_d923 == 0 && c != -2);
}

void f_9107_3a22(int p, int k)
{
    if (p < 646)
        d_323f_28ba[k][p] = (d_323f_28ba[k][p] * 2 + d_323f_32e2[k][p]) / 3;
    if (k == 0 && d_60ae_d927 == 0 && d_323f_3d0a[p] == 0 && d_323f_1c08[p] < 255
        && d_323f_4854[d_323f_1c08[p]] < 650) {
        d_60ae_dd54 = d_323f_1c08[p] / 20;
        d_60ae_dae6 = f_1bd3_1369(d_323f_4e00[d_323f_1c08[p]], 100 - d_60ae_dd54 * 15) * 2;
        d_323f_28ba[k][p] = (d_323f_28ba[k][p] * 2 + d_60ae_dae6) / 3;
    }
}

/* the yearly retirements: staff aged 35 or more may retire, then age every
   staff member by a year */
void f_9107_3b4d(void)
{
    char text[320];
    char title[80];

    f_b628_674e(2);
    for (d_60ae_dd42 = 0; d_60ae_dd42 <= 645; d_60ae_dd42++) {
        f_b628_68ca(2, d_60ae_dd42, 1290);
        d_60ae_d930 = 0;
        d_60ae_dae4 = d_323f_1c08[d_60ae_dd42];
        if (d_323f_1e92[d_60ae_dd42] >= 35) {
            d_60ae_d8f9 = 0;
            if (d_60ae_dae4 < 255 && d_323f_5ff0[d_60ae_dae4] > 0)
                d_60ae_d8f9 = -1;
            if (d_323f_1e92[d_60ae_dd42] > f_1bd3_0d69(6) + 60 && d_60ae_d8f9 == 0) {
                if (d_60ae_dae4 < 255) {
                    if (f_14bc_2cc0(d_60ae_dae4) || d_323f_3d0a[d_60ae_dd42] == 0) {
                        strcpy(d_2289_36ba, f_96bb_19a9(d_323f_3d0a[d_60ae_dd42]));
                        sprintf(title, "%s quits %s", d_2289_36ba, (char far *)d_60ae_b572[d_60ae_dae4]);
                        sprintf(text, "%s %s has decided to retire from soccer at the age of %d.",
                                d_2289_36ba, f_14bc_490d(d_60ae_dd42, 0), d_323f_1e92[d_60ae_dd42]);
                        f_14bc_5bfe(d_60ae_dae4, title, text);
                    }
                }
                if (d_60ae_dae4 < 255 && d_323f_3d0a[d_60ae_dd42] == 0)
                    f_9107_3ff7(d_60ae_dae4, 3);
                f_9107_44bd(d_60ae_dd42);
                f_9107_3360(d_60ae_dd42, -2, 1);
                if (d_60ae_dae4 < 255 && d_323f_3d0a[d_60ae_dd42] > 0)
                    f_9107_4d4c(d_60ae_dae4, d_323f_3d0a[d_60ae_dd42]);
            } else if (d_60ae_dae4 < 255 && d_60ae_d8f9 == 0 && d_323f_3d0a[d_60ae_dd42] > 0
                       && f_14bc_2cc0(d_60ae_dae4) == 0
                       && f_14bc_2cf4(d_60ae_dae4)
                          - d_323f_28ba[f_96bb_09e7(d_323f_3d0a[d_60ae_dd42])][d_60ae_dd42] / 10 > 4)
                f_9107_4d4c(d_60ae_dae4, d_323f_3d0a[d_60ae_dd42]);
        }
        if (d_60ae_d930) {
            f_b628_65ab();
            f_b628_674e(2);
        }
    }
    for (d_60ae_dd42 = 0; d_60ae_dd42 <= d_60ae_dce8 + 645; d_60ae_dd42++) {
        f_b628_68ca(2, d_60ae_dd42 + 645, 1290);
        if (d_323f_1e92[d_60ae_dd42] >= 35) {
            for (d_60ae_dd3c = 0; d_60ae_dd3c <= 3; d_60ae_dd3c++)
                f_9107_3a22(d_60ae_dd42, d_60ae_dd3c);
            d_323f_1e92[d_60ae_dd42]++;
        }
    }
}

/* the weekly board pressure: an unsuccessful manager may lose his job */
void f_9107_3e85(void)
{
    for (d_60ae_dd5a = 0; d_60ae_dd5a <= 79; d_60ae_dd5a++) {
        if (d_323f_5ff0[d_60ae_dd5a] == 0
            && (d_2289_5658[0][d_60ae_dd5a] != 0 || f_1bd3_0d69(3) > 0)) {
            if (d_323f_4e00[d_60ae_dd5a] < 30 && d_60ae_dd9c < 80 && f_1bd3_0d69(3) == 0
                && d_323f_211c[d_323f_47b4[0][d_60ae_dd5a]] == 0
                && d_2289_5658[1][d_60ae_dd5a] + d_2289_5658[2][d_60ae_dd5a]
                   + d_2289_5658[4][d_60ae_dd5a] + d_2289_5658[5][d_60ae_dd5a]
                   + d_2289_5658[6][d_60ae_dd5a] == 0)
                f_9107_3ff7(d_60ae_dd5a, 2);
            for (d_60ae_dd3c = 0; d_60ae_dd3c <= 6; d_60ae_dd3c++) {
                d_60ae_dd42 = d_323f_47b4[d_60ae_dd3c][d_60ae_dd5a];
                if (d_60ae_dd42 < 650 && d_323f_211c[d_60ae_dd42] > 0)
                    d_323f_211c[d_60ae_dd42] = d_323f_211c[d_60ae_dd42]
                        - (d_60ae_dd9c % 2 == 0 ? (char)1 : (char)0);
            }
        }
    }
}

/* the manager of club leaves: a = 0 takeover, 1 resignation, 2 sacked or resigned,
   3 retired, 4 left for another club */
void f_9107_3ff7(int club, int a)
{
    char buf[320];

    if (a < 3) {
        if (a == 0) {
            sprintf(buf, "%s is to be replaced as manager of %s as part of the takeover.",
                    f_14bc_490d(d_323f_47b4[0][club], 0), (char far *)d_60ae_b572[club]);
            f_14bc_5bfe(club, "Managerial news", buf);
        } else if (a == 1 || f_1bd3_0d69(4) == 0 && f_14bc_2cc0(club) == 0) {
            if (f_14bc_2cc0(club) == 0) {
                sprintf(buf, "%s has resigned as manager of %s.",
                        f_14bc_490d(d_323f_47b4[0][club], 0), (char far *)d_60ae_b572[club]);
                f_14bc_5bfe(club, "Managerial news", buf);
            }
        } else {
            sprintf(buf, "%s has been given the sack by the %s board.",
                    f_14bc_490d(d_323f_47b4[0][club], 0), (char far *)d_60ae_b572[club]);
            f_14bc_5bfe(club, "Managerial news", buf);
        }
        if (f_14bc_2cc0(club)) {
            f_ad38_428a(d_323f_47b4[0][club] + 122, 0, 0, 0, 0, 0);
            d_60ae_dce6--;
            d_60ae_d97b = d_60ae_dce6 == 0;
        }
        d_60ae_dada = d_323f_47b4[0][club];
        d_323f_1c08[d_60ae_dada] = 255;
        d_323f_211c[d_60ae_dada] = 0;
        d_323f_3d0a[d_60ae_dada] = club + 7;
    }
    d_323f_4e00[club] = 50;
    d_323f_5ff0[club] = 3;
    d_60ae_dbae = d_323f_4854[club];
    d_323f_47b4[0][club] = d_60ae_dbae;
    d_323f_3d0a[d_60ae_dbae] = 0;
    d_323f_4854[club] = 650;
    if (a != 3)
        f_a3de_069a(club);
}

/* the clubs looking for a manager draw up their shortlists */
void f_9107_420f(void)
{
    char buf[320];

    for (d_60ae_dd5c = 0; d_60ae_dd5c <= 79; d_60ae_dd5c++) {
        if (d_323f_5ff0[d_60ae_dd5c] > 1) {
            d_60ae_db7e = f_14bc_2cf4(d_60ae_dd5c);
            d_60ae_dbda = 0;
            d_60ae_dab0 = d_60ae_db7e - (4 - d_323f_5ff0[d_60ae_dd5c]) * 4;
            d_60ae_dd52 = d_60ae_db7e + 3;
            d_60ae_d9b0 = f_1bd3_0d69(9) + 10;
            d_60ae_ddb6 = f_1bd3_1617(d_60ae_fdd6, 0);
            for (; d_60ae_dbda < 200 && strlen(d_60ae_ddb6[d_60ae_dd5c]) < d_60ae_d9b0 * 4;
                 d_60ae_dbda++) {
                d_60ae_dd42 = f_1bd3_0d69(d_60ae_dce8 + 646);
                if (d_323f_211c[d_60ae_dd42] == 0 && d_323f_3d0a[d_60ae_dd42] - 7 != d_60ae_dd5c) {
                    d_60ae_db3c = d_323f_28ba[0][d_60ae_dd42] / 10;
                    sprintf(d_2289_21fc, "%03d", d_60ae_dd42);
                    d_60ae_ddb6 = f_1bd3_1617(d_60ae_fdd6, 0);
                    if (f_1bd3_0b1b(d_60ae_ddb6[d_60ae_dd5c], d_2289_21fc) == 0
                        && d_60ae_db3c >= d_60ae_dab0 && d_60ae_db3c <= d_60ae_dd52) {
                        if (d_323f_1c08[d_60ae_dd42] == 255 || d_60ae_dd42 >= 646)
                            d_60ae_d8ff = -1;
                        else
                            d_60ae_d8ff = d_60ae_db7e - f_14bc_2cf4(d_323f_1c08[d_60ae_dd42]) > 2.0;
                        if (d_60ae_d8ff) {
                            d_60ae_ddb6 = f_1bd3_1617(d_60ae_fdd6, 1);
                            strcat(d_60ae_ddb6[d_60ae_dd5c], d_2289_21fc);
                            strcat(d_60ae_ddb6[d_60ae_dd5c], " ");
                            if (d_60ae_dd42 >= 646) {
                                sprintf(buf, "%s have shortlisted %s as a possible replacement manager.",
                                        (char far *)d_60ae_b572[d_60ae_dd5c], f_14bc_490d(d_60ae_dd42, 0));
                                f_14bc_5bfe(d_60ae_dd5c, "Job News", buf);
                            }
                        }
                    }
                }
            }
        }
    }
}

/* strike p off every shortlist */
void f_9107_44bd(int p)
{
    char buf[320];

    for (d_60ae_dd5c = 0; d_60ae_dd5c <= 79; d_60ae_dd5c++) {
        if (d_323f_5ff0[d_60ae_dd5c] > 0) {
            sprintf(buf, "%03d", p);
            d_60ae_ddb6 = f_1bd3_1617(d_60ae_fdd6, 1);
            d_60ae_dd68 = f_1bd3_0b1b(d_60ae_ddb6[d_60ae_dd5c], buf);
            if (d_60ae_dd68 > 0)
                strcpy(&d_60ae_ddb6[d_60ae_dd5c][d_60ae_dd68 - 1], "XXX");
        }
    }
}

/* the clubs whose search is over appoint the best candidate of their shortlist */
void f_9107_456c(void)
{
    char taken[650];
    char buf[320];

    memset(taken, 0, 650);
    for (d_60ae_d9ae = 0; d_60ae_d9ae <= 79; d_60ae_d9ae++) {
        if (d_323f_5ff0[d_60ae_d9ae] > 0) {
            d_323f_5ff0[d_60ae_d9ae] = d_323f_5ff0[d_60ae_d9ae] - 1;
            if (d_323f_5ff0[d_60ae_d9ae] == 0) {
                d_60ae_ddb6 = f_1bd3_1617(d_60ae_fdd6, 0);
                strcpy(d_2289_26fc, d_60ae_ddb6[d_60ae_d9ae]);
                if (d_2289_26fc[0] != 0) {
                    do {
                        d_60ae_dae2 = -1;
                        for (d_60ae_dd60 = 1; strlen(d_2289_26fc) >= d_60ae_dd60; d_60ae_dd60 += 4) {
                            sprintf(buf, "%.3s", &d_2289_26fc[d_60ae_dd60 - 1]);
                            d_60ae_d9b6 = atol(buf);
                            if ((d_60ae_dd98 > 1 || d_60ae_dd98 == 1 && d_60ae_d9b6 < 646)
                                && taken[d_60ae_d9b6] == 0) {
                                d_60ae_db8e = d_323f_28ba[0][d_60ae_d9b6]
                                    - d_54d9_08a0[d_323f_4674[d_60ae_d9ae]][d_323f_23a6[d_60ae_d9b6]]
                                    + f_1bd3_0d69(10) - f_1bd3_0d69(10);
                                if (d_60ae_db8e > d_60ae_dd52 || d_60ae_dae2 == -1) {
                                    d_60ae_d960 = -1;
                                    if (d_323f_1c08[d_60ae_d9b6] < 255 && d_323f_211c[d_60ae_d9b6] == 0
                                        && d_323f_3d0a[d_60ae_d9b6] - 7 != d_60ae_d9ae
                                        && d_323f_5ff0[d_323f_1c08[d_60ae_d9b6]] > 0
                                        && d_323f_47b4[0][d_323f_1c08[d_60ae_d9b6]] == d_60ae_d9b6
                                        && d_323f_1c08[d_60ae_d9b6] != d_60ae_d9ae)
                                        d_60ae_d960 = 0;
                                    if (d_60ae_d960) {
                                        d_60ae_dae2 = d_60ae_d9b6;
                                        d_60ae_dd52 = d_60ae_db8e;
                                    }
                                }
                            }
                        }
                        d_60ae_d8fe = -1;
                        if (d_60ae_dae2 != -1 && d_60ae_dae2 >= 646
                            && f_9107_4966(d_60ae_dae2, d_60ae_d9ae) == 0) {
                            taken[d_60ae_dae2] = -1;
                            d_60ae_d8fe = 0;
                        }
                    } while (!d_60ae_d8fe);
                    if (d_60ae_dae2 != -1) {
                        d_60ae_dbae = d_323f_47b4[0][d_60ae_d9ae];
                        d_323f_47b4[0][d_60ae_d9ae] = 650;
                        d_323f_4854[d_60ae_d9ae] = d_60ae_dbae;
                        d_323f_3d0a[d_60ae_dbae] = 1;
                        d_323f_5ff0[d_60ae_d9ae] = 0;
                        d_60ae_ddb6 = f_1bd3_1617(d_60ae_fdd6, 1);
                        strcpy(d_60ae_ddb6[d_60ae_d9ae], "");
                        d_60ae_dade = d_323f_1c08[d_60ae_dae2];
                        d_60ae_dadc = d_323f_3d0a[d_60ae_dae2];
                        f_9107_4f40(d_60ae_dae2, d_60ae_d9ae, 0);
                        if (d_60ae_dade < 255) {
                            if (d_60ae_dadc == 0) {
                                sprintf(buf, "%s are now looking for a new manager following the departure of %s.",
                                        (char far *)d_60ae_b572[d_60ae_dade], f_14bc_490d(d_60ae_dae2, 0));
                                f_14bc_5bfe(d_60ae_dade, "Managerial news", buf);
                                f_9107_3ff7(d_60ae_dade, 4);
                            } else
                                f_9107_4d4c(d_60ae_dade, d_60ae_dadc);
                        }
                        continue;
                    }
                }
                d_323f_5ff0[d_60ae_d9ae] = 2;
            }
        }
    }
}

/* a club's job offer to the player: accept, refuse, negotiate; returns -1 if accepted */
char f_9107_4966(int p, int team)
{
    unsigned char n = 0;
    long sal;
    char buf[320];

    sal = f_b628_0000(p, team) * 1000L;
    d_60ae_d91a = -1;
    d_60ae_d919 = 0;
    do {
        d_60ae_d93f = 0;
        f_14bc_4bd3("Job Offer");
        sprintf(buf, " %s ", f_14bc_490d(p, 0));
        if (d_323f_1c08[p] == 0xff)
            d_60ae_dd48 = 20;
        else
            d_60ae_dd48 = d_323f_4cb8[d_323f_1c08[p]];
        f_14bc_3e40(1.0, 4.0, -(d_60ae_dd48 / 16), d_60ae_dd48 % 16, 0, buf);
        sprintf(buf, "%s want you as their manager", (char far *)d_60ae_b572[team]);
        f_14bc_0ac0(7, buf);
        sprintf(buf, "They are offering \xa3%ld per year", sal);
        f_14bc_0ac0(9, buf);
        f_14bc_2f90(12, "", "Accept Offer|Refuse Offer|Negotiate Salary|League Table|Squad Details|");
        do {
            d_60ae_d977 = -1;
            f_14bc_3334(4);
            if (d_60ae_dda0 == 0) {
                if (f_14bc_0c5e()) {
                    sprintf(buf, "%s offer accepted", (char far *)d_60ae_b572[team]);
                    f_14bc_0b30(buf);
                    if (d_323f_1c08[p] < 0xff)
                        f_96bb_18d8(d_323f_1c08[p]);
                    d_60ae_faea = f_1bd3_1617(d_60ae_fde8, 1);
                    d_60ae_faea[p] = sal / 1000;
                    d_60ae_d919 = -1;
                } else
                    d_60ae_d977 = 0;
            } else if (d_60ae_dda0 == 1) {
                if (f_14bc_0c5e()) {
                    sprintf(buf, "%s offer refused", (char far *)d_60ae_b572[team]);
                    f_14bc_0b30(buf);
                } else
                    d_60ae_d977 = 0;
            } else if (d_60ae_dda0 == 2) {
                if (f_1bd3_1369(f_1bd3_0d69(3), f_1bd3_0d69(3)) + 2 < n)
                    f_14bc_0b30("No deal");
                else {
                    long old = sal;

                    if (f_1bd3_0d69(2) == 0) {
                        sal = sal * (f_1bd3_0d69(20) / 200 + 1.2);
                        sal = sal / 1000;
                        sal = sal * 1000;
                    }
                    if (sal > old) {
                        sprintf(buf, "They increase the offer to \xa3%ld", sal);
                        f_14bc_0b30(buf);
                        d_60ae_d93f = -1;
                    } else {
                        sprintf(buf, "The offer stays at \xa3%ld", sal);
                        f_14bc_0b30(buf);
                        d_60ae_d977 = 0;
                    }
                    n++;
                }
            } else if (d_60ae_dda0 == 3) {
                f_70a9_0660(team / 20);
                d_60ae_d93f = -1;
            } else if (d_60ae_dda0 == 4) {
                f_70a9_5667(team);
                d_60ae_d93f = -1;
            }
        } while (!d_60ae_d977);
    } while (d_60ae_d93f);
    d_60ae_d91a = 0;
    return d_60ae_d919;
}

void f_9107_4d4c(int club, int n)
{
    d_60ae_daea = n;
    d_60ae_dc0e = club;
    do {
        d_60ae_dae2 = -1;
        if (f_14bc_2cc0(d_60ae_dc0e))
            d_60ae_dae2 = f_96bb_0000(d_60ae_dc0e, d_60ae_daea);
        if (d_60ae_dae2 == -1) {
            d_60ae_d921 = 0;
            do {
                d_60ae_dd52 = 0;
                for (d_60ae_dd44 = 0; d_60ae_dd44 <= 645; d_60ae_dd44++) {
                    if (d_323f_1c08[d_60ae_dd44] != d_60ae_dc0e) {
                        d_60ae_db56 = d_54d9_08a0[d_323f_23a6[d_323f_47b4[0][d_60ae_dc0e]]][d_323f_23a6[d_60ae_dd44]];
                        if ((d_60ae_db8e = f_1bd3_1307(d_323f_28ba[f_96bb_09e7(d_60ae_daea)][d_60ae_dd44] / 10
                                                       + (d_323f_1c08[d_60ae_dd44] == d_60ae_dc0e ? 4 : 0)
                                                       - d_60ae_db56, 1)) > d_60ae_dd52) {
                            if ((fabs(d_60ae_db8e - f_14bc_2cf4(d_60ae_dc0e)) < 4.0
                                 && (d_323f_1e92[d_60ae_dd44] <= 50 && d_60ae_daea < 2 || d_60ae_daea > 1))
                                || d_60ae_d921) {
                                if (f_9107_531a(d_60ae_dd44, d_60ae_dc0e, d_60ae_daea)) {
                                    d_60ae_dae2 = d_60ae_dd44;
                                    d_60ae_dd52 = d_60ae_db8e;
                                }
                            }
                        }
                    }
                }
                d_60ae_d921 = -1;
            } while (d_60ae_dae2 <= -1);
        }
        f_9107_4f40(d_60ae_dae2, d_60ae_dc0e, d_60ae_daea);
        if (d_60ae_dade < 255) {
            d_60ae_daea = d_60ae_dadc;
            d_60ae_dc0e = d_60ae_dade;
        }
    } while (d_60ae_dade != 255);
}

void f_9107_4f40(int p, int team, int b)
{
    int i, j;
    char buf[320];

    d_60ae_dade = d_323f_1c08[p];
    d_60ae_dadc = d_323f_3d0a[p];
    d_60ae_dada = d_323f_47b4[b][team];
    if (d_60ae_dada < 0x28a) {
        d_60ae_d8f8 = -1;
        for (d_60ae_dad8 = 0; d_60ae_dad8 <= 79; d_60ae_dad8++)
            for (d_60ae_dad6 = 0; d_60ae_dad6 <= 6; d_60ae_dad6++)
                if (d_323f_47b4[d_60ae_dad6][d_60ae_dad8] == d_60ae_dada && d_60ae_dad8 != team) {
                    d_60ae_d8f8 = 0;
                    d_60ae_dad6 = 6;
                    d_60ae_dad8 = 79;
                }
        if (d_60ae_d8f8 != 0) {
            d_323f_1c08[d_60ae_dada] = 0xff;
            d_323f_211c[d_60ae_dada] = 0;
        }
    }
    d_323f_47b4[b][team] = p;
    d_323f_1c08[p] = team;
    d_323f_211c[p] = f_1bd3_1307(f_1bd3_1369(d_323f_28ba[0][p] * 0.375, 50), 25);
    d_323f_3d0a[p] = b;
    f_9107_44bd(p);
    if (b == 0) {
        if (p > 0x285 && d_60ae_dade == 0xff) {
            d_60ae_dce6++;
            d_60ae_d97b = 0;
        }
        if (p > 0x285)
            f_b628_296c(team);
        d_323f_4c14[0][team] = f_1bd3_1307(10, d_323f_28ba[0][p] / 13);
        for (i = 0; i <= d_323f_4e52[team]; i++)
            if (f_1bd3_0d69(3) > 0)
                f_9e77_1cd0(d_471b_b7a8[team][i]);
        d_323f_4e00[team] = f_1bd3_1307(d_323f_28ba[0][p] * 0.5, 50);
        if (d_60ae_d920 == 0) {
            f_a3de_069a(team);
            if (d_60ae_dada < 0x286)
                for (j = 1; j <= d_2289_f108[team][0]; j++)
                    d_3c35_0000[23][d_2289_f108[team][j]]--;
            d_2289_f108[team][0] = 0;
        }
        if (p < 0x286) {
            d_60ae_faea = f_1bd3_1617(d_60ae_fde8, 1);
            d_60ae_faea[p] = f_b628_0000(p, team);
        }
    }
    d_60ae_d91f = 0;
    if (d_60ae_d9ac == 0 || f_14bc_2cc0(team)
        || d_60ae_dade < 0xff && f_14bc_2cc0(d_60ae_dade))
        d_60ae_d91f = -1;
    if (d_60ae_d91f != 0) {
        if (d_60ae_dade == 0xff)
            strcpy(d_2289_4cfa, "");
        else if (d_60ae_dade == team)
            sprintf(d_2289_4cfa, "their %s ", f_96bb_19a9(d_60ae_dadc));
        else
            sprintf(d_2289_4cfa, "%s %s ", (char far *)d_60ae_b572[d_60ae_dade], f_96bb_19a9(d_60ae_dadc));
        sprintf(buf, "%s have appointed %s%s as their new %s.", (char far *)d_60ae_b572[team],
                d_2289_4cfa, f_14bc_490d(p, 0), f_96bb_19a9(b));
        f_14bc_5bfe(team, "Job News", buf);
    }
}

char f_9107_531a(int p, int team, int x)
{
    d_60ae_d91e = 0;
    if (d_323f_1c08[p] == team) {
        if (d_323f_5ff0[d_323f_1c08[p]] == 0)
            d_60ae_d91e = -1;
    } else if (d_323f_211c[p] == 0) {
        d_60ae_dad0 = f_96bb_09e7(x);
        if (d_323f_1c08[p] == 0xff)
            d_60ae_d91e = d_323f_28ba[d_60ae_dad0][p] / 10 - f_14bc_2cf4(team) < 8.0 ? -1 : 0;
        else if (d_323f_5ff0[d_323f_1c08[p]] == 0 && f_1bd3_0d69(4) > 0) {
            d_60ae_dace = f_96bb_09e7(d_323f_3d0a[p]);
            if (d_60ae_dace != 0 || d_60ae_dad0 <= 0)
                if (f_14bc_2cf4(team) - (d_60ae_dad0 < d_60ae_dace) > f_14bc_2cf4(d_323f_1c08[p]) + 3.0
                    || d_323f_28ba[d_60ae_dad0][p] - d_323f_28ba[d_60ae_dace][p] > 60)
                    d_60ae_d91e = -1;
        }
    }
    return d_60ae_d91e;
}
