/* @at 8ba7:0000 */
/* @data 5d51:3d20 */
/* @module */

/* Overlay 8ba7: CM93's overlay 9107 (games/cm93/decomp/src/9107.C) changed for CM Italia:
 * players and staff, approaches, valuations, finding players (search, transfer list,
 * shortlist), scouts, managers and job offers. The first part of CM1's 88C9.C (the rest,
 * from f_88c9_5ea7, is in overlay 9182). */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <mem.h>
#include <stdlib.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_8ba7_0000(int player, int club, int v);
char f_8ba7_00fa(int player, int team, char loan);
void f_8ba7_0314(int player, int team, char loan);
char f_8ba7_0558(int player);
void f_8ba7_06c3(int player);
char f_8ba7_087e(int player);
void f_8ba7_08c4(int player);
void f_8ba7_0a06(int player, char c, char d);
void f_8ba7_0af2(int player);
void f_8ba7_0b50(int player);
long f_8ba7_0bc8(int player);
void f_8ba7_0eed(int player);
void f_8ba7_11e1(int player, char c);
long f_8ba7_1401(int player);
void f_8ba7_1492(void);
void f_8ba7_1cfc(int team);
void f_8ba7_1e33(int a, int b, int bg, int fg, char far *s1, char far *s2);
void f_8ba7_1f78(int x, char on, int a);
void f_8ba7_1ff2(char far *title, unsigned from, unsigned to);
void f_8ba7_2930(int team);
void f_8ba7_2aea(void);
void f_8ba7_2c0f(int p, int row);
void f_8ba7_30f6(int mode, char draw);
char f_8ba7_3364(int p, int team, int n);
void f_8ba7_34ed(void);
void f_8ba7_3559(int p, int c, char flag);
void f_8ba7_3c1b(int p, int k);
void f_8ba7_3d47(void);
void f_8ba7_407f(void);
void f_8ba7_41f1(int club, int a);
void f_8ba7_4421(void);
void f_8ba7_46cf(int p);
void f_8ba7_477e(void);
char f_8ba7_4b78(int p, int team);
void f_8ba7_4f61(int club, int n);
void f_8ba7_5155(int p, int team, int b);
char f_8ba7_552e(int p, int team, int x);

struct opt { char far *s; unsigned char a, b; int w; };
struct flags_a { unsigned char b0; unsigned f8 : 1; unsigned f9 : 1; unsigned : 6; unsigned : 2; unsigned f18 : 1; unsigned f19 : 1; unsigned : 4; unsigned : 0; unsigned f24 : 1; unsigned : 3; unsigned f28 : 1; unsigned : 1; unsigned f30 : 1; unsigned : 1; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
long f_1646_0204(int p, int n);
void f_1646_0b2f(int line, char far *s);
void f_1646_0b9f(char far *s);
long f_1646_0da1(long v, char c);
char f_1646_2cc9(int x);
float f_1646_2cfd(int x);
int f_1646_2dce(int x);
char f_1646_2e15(int x);
void f_1646_2fa4(int n, char far *title, char far *items);
void f_1646_3348(int last);
void f_1646_459b(float x, float y, int team);
char far *f_1646_470f(int player);
char far *f_1646_48c0(int player);
void f_1646_4ba0(char far *title);
long f_1646_5ac3(int team);
int f_1646_6aa9(int x);
char f_1646_6ae2(int player, char c);
long f_1d5e_137f(long a, long b);
void far *f_1d5e_1618(int handle, int page);
void f_8539_1978(int p, char all);
void f_8539_375d(int player, int club);
void f_8539_4451(int colour, char far *s);
char f_8539_51af(int player, char flag);
void f_a13d_4a1b(int player, int a, char b);
extern char far d_2414_3950[];
extern int far d_3404_4226[][38];
extern int far d_3404_4272[];
extern long far d_3404_3e4a[][38];
extern unsigned char far d_3404_225c[];
extern int far d_3404_691c[];
extern unsigned char far d_3c0d_0000[][1500];
extern unsigned char far d_44d7_0000[][1500];
extern unsigned char far d_44d7_30b0[];
extern unsigned char far d_4f37_0960[][10];
extern char near *d_5d51_b476[];
extern long d_5d51_d465;
extern char d_5d51_d598;
extern char d_5d51_d59b;
extern char d_5d51_d59d;
extern char d_5d51_d5a5;
extern char d_5d51_d5ae;
extern char d_5d51_d5df;
extern char d_5d51_d5e1;
extern int d_5d51_d79c;
extern int d_5d51_d7c2;
extern int d_5d51_d7da;
extern int d_5d51_d7dc;
extern int d_5d51_da04;
extern int d_5d51_da06;
extern int d_5d51_da0a;
extern char far *d_5d51_da24;
extern union flags far d_2414_af3c[];
extern int (far *d_5d51_da4c)[1500];
extern long far *d_5d51_da58;
extern int d_5d51_dd88;
extern int d_5d51_dd9c;
extern int d_5d51_dda2;
void f_1646_0bf2(char far *s);
void f_1646_0f3a(int p);
void f_1646_13f1(int player);
void f_1646_50c5(int a, float x, float y, int c, int d, int e, char far *s);
void f_1646_545c(int a, char b);
int f_1646_5602(int a);
void f_1646_6097(void);
void f_1646_60a7(void);
char f_1646_6f38(int player);
unsigned f_1d5e_0b1c(char far *s, char far *set);
long f_1d5e_0d6a(long n);
int f_1d5e_1308(int a, int b);
int f_1d5e_136a(int a, int b);
int f_8539_3bd1(int player, int team);
void f_8539_3db1(int mode, int player);
int f_8539_4022(int mode, int value, int lo, int player);
void f_8539_4fbd(int player, int a);
void f_9e79_1503(char all);
unsigned char f_a7f0_6332(char team, char far *title);
void f_a7f0_6442(char team, int player);
void f_a7f0_675a(char n);
void f_b0f1_6c80(char n);
extern int far d_44d7_8caa[];
extern unsigned char far d_3404_1abe[];
extern unsigned char far d_2414_d28c[];
extern char (far *d_5d51_da1c)[151];
extern int d_5d51_dd84;
extern int far *d_5d51_da5c;
extern int d_5d51_dda4;
extern long d_5d51_d45d;
extern long d_5d51_d461;
extern char d_5d51_d55b;
extern char d_5d51_d594;
extern char d_5d51_d595;
extern char d_5d51_d5a4;
extern char d_5d51_d5ca;
extern int d_5d51_d606;
extern int d_5d51_d628;
extern int d_5d51_d776;
extern int d_5d51_d778;
extern int d_5d51_d77a;
extern int d_5d51_d77c;
extern int d_5d51_d780;
extern int d_5d51_d782;
extern int d_5d51_d79a;
extern int d_5d51_d7a0;
extern int d_5d51_d7aa;
extern int d_5d51_d7bc;
extern int d_5d51_d7c0;
extern int d_5d51_d7c6;
extern int d_5d51_d8fe;
extern int d_5d51_d954;
extern int d_5d51_d98e;
extern int d_5d51_d9ba;
extern int d_5d51_d9f0;
extern int d_5d51_da18;
extern int d_5d51_da1a;
void f_1646_32eb(int a, int b, int line);
void f_1646_3686(float x, float y, int bg, int fg, int w, char far *s);
void f_1646_3c89(float x, float y, int colour, char far *s);
void f_1646_3e54(float x, float y, int bg, int fg, int w, char far *s);
extern unsigned char far d_2414_d28a[];
extern float far d_2414_fe0c[];
extern long d_5d51_d451;
extern char d_5d51_d590;
extern char d_5d51_d591;
extern char d_5d51_d592;
extern char d_5d51_d593;
extern unsigned char d_5d51_d5f0;
extern int d_5d51_d768;
extern int d_5d51_d76a;
extern int d_5d51_d76c;
extern int d_5d51_d76e;
extern int d_5d51_d770;
extern int d_5d51_d772;
extern int d_5d51_d774;
extern int d_5d51_d7f2;
extern int d_5d51_d7f8;
extern int d_5d51_d8ee;
extern int d_5d51_d9c6;
long f_1646_0e45(long v);
char far *f_1646_0ee9(long amount);
char far *f_1646_4919(int manager, char full);
void f_1d5e_0822(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
char f_8539_2868(int p, int team, int n);
int f_8539_2a25(int a, int b);
char far *f_a13d_202f(int a, int b);
extern long d_5d51_d4a1;
extern char d_5d51_d58f;
extern int d_5d51_d7ce;
extern int d_5d51_d9b8;
extern char far d_2414_3426[];
extern char far d_2414_353e[];
extern char far d_2414_358e[];
extern int far d_3404_42be[][38];
extern unsigned char far d_3404_448a[];
int f_9182_09e8(int x);
int f_b0f1_43eb(char c);
int f_b0f1_445d(char c);
void f_b0f1_66b9(char a);
void f_b0f1_6835(char a, int i, int n);
extern int far d_2414_84c2[][38];
extern unsigned char far d_3404_1d48[];
extern unsigned char far d_3404_1fd2[];
extern unsigned char far d_3404_24e6[];
extern unsigned char far d_3404_2770[][650];
extern unsigned char far d_3404_2c84[];
extern unsigned char far d_3404_3198[][650];
extern unsigned char far d_3404_3bc0[];
extern int far d_3404_418e[];
extern unsigned char far d_3404_452a[];
extern char d_5d51_d55c;
extern char d_5d51_d589;
extern char d_5d51_d58a;
extern char d_5d51_d58b;
extern char d_5d51_d58c;
extern char d_5d51_d58d;
extern char d_5d51_d58e;
extern int d_5d51_d604;
extern int d_5d51_d752;
extern int d_5d51_d754;
extern int d_5d51_d756;
extern int d_5d51_d758;
extern int d_5d51_d75a;
extern int d_5d51_d760;
extern int d_5d51_d762;
extern int d_5d51_d764;
extern int d_5d51_d766;
extern int d_5d51_d7a8;
extern int d_5d51_d7ea;
extern int d_5d51_d832;
extern int d_5d51_d84a;
extern int d_5d51_d87e;
extern int d_5d51_d94c;
extern int d_5d51_d956;
extern int d_5d51_d97e;
extern int d_5d51_d9ac;
extern int d_5d51_d9b2;
extern int d_5d51_d9c4;
extern int d_5d51_d9d8;
extern char far *d_5d51_da48;
extern int d_5d51_dd9a;
void f_1646_5bcb(int team, char far *title, char far *text);
char far *f_9182_19b6(int n);
void f_9e79_06bc(int t);
void f_a7f0_42c5(char a, char b, int player, char team, long fee, char c);
void f_b0f1_6516(void);
extern char far d_2414_2058[];
extern char far d_2414_2558[];
extern char far d_2414_3516[];
extern char far d_2414_5460[][38];
extern unsigned char far d_3404_4dea[];
extern char d_5d51_d55f;
extern char d_5d51_d564;
extern char d_5d51_d565;
extern char d_5d51_d596;
extern char d_5d51_d5e5;
extern int d_5d51_d61a;
extern int d_5d51_d61c;
extern int d_5d51_d622;
extern int d_5d51_d71c;
extern int d_5d51_d746;
extern int d_5d51_d748;
extern int d_5d51_d74a;
extern int d_5d51_d74e;
extern int d_5d51_d750;
extern int d_5d51_d7fa;
extern int d_5d51_d81a;
extern int d_5d51_d958;
extern int d_5d51_d9c2;
extern int d_5d51_d9ca;
extern int d_5d51_d9cc;
extern int d_5d51_d9d0;
extern char (far *d_5d51_da2c)[101];
extern int d_5d51_dd8c;
char f_1646_0ccd(void);
void f_6b47_0654(int div);
void f_6b47_55c8(int team);
int f_9182_0000(int team, int x);
void f_9182_18e5(int club);
void f_9915_1cf1(int player);
int f_b0f1_0000(int a, char team);
void f_b0f1_2916(char team);
extern char far d_2414_4b56[];
extern unsigned char far d_3404_443a[][40];
extern unsigned char far d_3404_4552[];
extern int far d_44d7_9624[][26];
extern char d_5d51_d55e;
extern char d_5d51_d57f;
extern char d_5d51_d580;
extern char d_5d51_d584;
extern char d_5d51_d585;
extern char d_5d51_d586;
extern char d_5d51_d587;
extern int d_5d51_d618;
extern int d_5d51_d73a;
extern int d_5d51_d73c;
extern int d_5d51_d742;
extern int d_5d51_d744;
extern int d_5d51_d9b4;
extern int far *d_5d51_da50;
extern int d_5d51_dd9e;
extern int far d_3404_0260[][16];
extern char far d_3404_0000[][16];
unsigned char f_1646_717d(char);
extern char (far *d_5d51_da38)[1500];
extern char far * far d_4f37_0000[];
void f_a7f0_4ab0(char m);


void f_8ba7_0000(int player, int club, int v)
{
    char buf[320];

    f_8539_375d(player, d_44d7_0000[18][player]);
    if (d_5d51_d5ae) {
        sprintf(buf, "%s signs the contract", f_1646_48c0(player));
        f_8539_4451(6, buf);
        d_3404_691c[player] = (d_5d51_da04 + d_5d51_d7dc) * 100 + f_1646_6aa9(d_5d51_da06);
        d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 1);
        d_5d51_da4c[4][player] = d_5d51_d7da;
    } else {
        sprintf(buf, "%04d ", player);
        d_5d51_da24 = f_1d5e_1618(d_5d51_dd88, 1);
        strcat(d_5d51_da24 + v * 151, buf);
    }
}

char f_8ba7_00fa(int player, int team, char loan)
{
    d_5d51_d59d = 0;
    if (f_1646_2cc9(d_44d7_0000[18][player]))
        f_8ba7_0314(player, team, loan);
    else if (!d_2414_af3c[player].a.f9 && !d_2414_af3c[player].a.f30 && f_1646_2e15(player) == 0
             && (d_3404_4272[d_44d7_0000[18][player]] < 650 || d_3404_691c[player] == 0)) {
        if (loan && d_44d7_30b0[player] < 2) {
            if (d_2414_af3c[player].a.f8 && d_2414_af3c[player].a.f24 || f_8539_51af(player, -1)
                || d_44d7_0000[23][player] > 1)
                d_5d51_d59d = -1;
        } else if (d_44d7_0000[23][player] > 1 || d_2414_af3c[player].a.f8 || d_3404_691c[player] == 0
                   || d_4f37_0960[d_3404_225c[d_3404_4226[0][d_44d7_0000[18][player]]]][d_3c0d_0000[17][player]] > 7
                   || fabs(f_1646_2dce(player) - f_1646_2cfd(d_44d7_0000[18][player])) > 3.0f
                   || d_3404_691c[player] / 100 - d_5d51_da04 < 3)
            d_5d51_d59d = -1;
    }
    return d_5d51_d59d;
}

void f_8ba7_0314(int player, int team, char loan)
{
    char buf[320];
    char n;

    do {
        d_5d51_d5a5 = 0;
        f_1646_4ba0("Player Approach");
        f_1646_459b(1.0, 4.0, d_44d7_0000[18][player]);
        sprintf(buf, "%s want %s", (char far *)d_5d51_b476[team], f_1646_470f(player));
        f_1646_0b2f(7, buf);
        n = 10;
        if (loan) {
            sprintf(buf, "They want him on loan");
            f_1646_0b2f(9, buf);
            n = 12;
        } else if (f_1646_2cc9(team) == 0 && !d_2414_af3c[player].w.f12) {
            d_5d51_d465 = f_1646_0da1(f_1d5e_137f(f_1646_0204(player, team), f_1646_5ac3(team)), -1);
            sprintf(buf, "They would offer about %ld", d_5d51_d465);
            f_1646_0b2f(9, buf);
            n = 12;
        } else if (f_1646_2cc9(team) == 0 && d_2414_af3c[player].w.f12) {
            strcpy(buf, "He is on a free transfer");
            f_1646_0b2f(9, buf);
            n = 12;
        }
        do {
            d_5d51_d5e1 = -1;
            f_1646_2fa4(n, "", "View Factfile|Allow Approach|Refuse Approach|");
            f_1646_3348(2);
            if (d_5d51_da0a == 0) {
                do
                    f_a13d_4a1b(player, -1, 0);
                while (!d_5d51_d5df);
                d_5d51_d5df = 0;
                d_5d51_d5a5 = -1;
            } else if (d_5d51_da0a == 1) {
                d_5d51_d59d = -1;
            } else if (d_5d51_da0a == 2) {
                if (d_3404_691c[player] > 0 || loan) {
                    sprintf(buf, "%s refused", (char far *)d_5d51_b476[team]);
                    f_1646_0b9f(buf);
                } else {
                    f_1646_0b9f("He is not under contract");
                    f_1646_0b9f("You cannot refuse their approach");
                    d_5d51_d5e1 = 0;
                }
            }
        } while (!d_5d51_d5e1);
    } while (d_5d51_d5a5 != 0);
}

char f_8ba7_0558(int player)
{
    d_5d51_d59b = 0;
    if (f_1646_2cc9(d_44d7_0000[18][player]))
        f_8ba7_06c3(player);
    else if (d_3404_4272[d_44d7_0000[18][player]] < 650 || d_3404_691c[player] == 0) {
        d_5d51_d7c2 = d_4f37_0960[d_3404_225c[d_3404_4226[0][d_44d7_0000[18][player]]]][d_3c0d_0000[17][player]];
        if (d_44d7_0000[23][player] == 3 || d_3404_691c[player] == 0 || d_5d51_d7c2 > 7
            || fabs(f_1646_2dce(player) - f_1646_2cfd(d_44d7_0000[18][player])) > 3.0f
            || d_44d7_0000[23][player] == 2 && d_3404_3e4a[0][d_44d7_0000[18][player]] < 0)
            d_5d51_d59b = -1;
    }
    return d_5d51_d59b;
}

void f_8ba7_06c3(int player)
{
    char buf[320];

    do {
        d_5d51_d5a5 = 0;
        f_1646_4ba0("Player request");
        f_1646_459b(1.0, 4.0, d_44d7_0000[18][player]);
        sprintf(buf, "%s wants to leave", f_1646_470f(player));
        f_1646_0b2f(7, buf);
        f_1646_6ae2(player, 0);
        sprintf(buf, "He %s", d_2414_3950);
        f_1646_0b2f(9, buf);
        f_1646_2fa4(12, "", "View Factfile|Refuse Request|List Him|");
        do {
            d_5d51_d5e1 = -1;
            f_1646_3348(2);
            d_5d51_d79c = d_5d51_da0a;
            if (d_5d51_d79c == 0) {
                do
                    f_a13d_4a1b(player, -1, 0);
                while (!d_5d51_d5df);
                d_5d51_d5df = 0;
                d_5d51_d5a5 = -1;
            } else if (d_5d51_d79c == 1) {
                if (d_3404_691c[player] == 0) {
                    f_1646_0b9f("He is a free agent");
                    f_1646_0b9f("You cannot prevent him leaving");
                    d_5d51_d5e1 = 0;
                } else {
                    sprintf(buf, "%s told to stay", f_1646_48c0(player));
                    f_1646_0b9f(buf);
                }
            } else if (d_5d51_d79c == 2) {
                sprintf(buf, "%s now transfer listed", f_1646_48c0(player));
                f_1646_0b9f(buf);
                d_5d51_d59b = -1;
            }
        } while (!d_5d51_d5e1);
    } while (d_5d51_d5a5 != 0);
}

char f_8ba7_087e(int player)
{
    d_5d51_d598 = 0;
    if (f_1646_2cc9(d_44d7_0000[18][player]))
        f_8ba7_08c4(player);
    else if (f_8539_51af(player, 0) == 0)
        d_5d51_d598 = -1;
    return d_5d51_d598;
}

void f_8ba7_08c4(int player)
{
    char buf[320];

    do {
        d_5d51_d5a5 = 0;
        f_1646_4ba0("Player request");
        f_1646_459b(1.0, 4.0, d_44d7_0000[18][player]);
        sprintf(buf, "%s now wants to stay", f_1646_470f(player));
        f_1646_0b2f(7, buf);
        f_1646_2fa4(10, "", "View Factfile|Remove From List|Refuse Request|");
        f_1646_3348(2);
        d_5d51_d79c = d_5d51_da0a;
        if (d_5d51_d79c == 0) {
            do
                f_a13d_4a1b(player, -1, 0);
            while (!d_5d51_d5df);
            d_5d51_d5df = 0;
            d_5d51_d5a5 = -1;
        } else if (d_5d51_d79c == 1) {
            sprintf(buf, "%s removed from list", f_1646_48c0(player));
            f_1646_0b9f(buf);
            d_5d51_d598 = -1;
        } else if (d_5d51_d79c == 2) {
            sprintf(buf, "%s remains listed", f_1646_48c0(player));
            f_1646_0b9f(buf);
        }
    } while (d_5d51_d5a5 != 0);
}

void f_8ba7_0a06(int player, char c, char d)
{
    long v;

    if (!d) {
        v = f_8ba7_0bc8(player);
        d_5d51_da58 = f_1d5e_1618(d_5d51_dda2, 1);
        d_5d51_da58[player] = v;
        d_2414_af3c[player].w.f12 = d_5d51_da58[player] == 0;
    }
    d_2414_af3c[player].w.f8 = 1;
    d_2414_af3c[player].w.f10 = c != 0;
    d_2414_af3c[player].w.f24 = d != 0;
    d_3c0d_0000[11][player] = 0;
}

void f_8ba7_0af2(int player)
{
    d_2414_af3c[player].w.f8 = 0;
    d_2414_af3c[player].w.f10 = 0;
    d_2414_af3c[player].w.f12 = 0;
    d_2414_af3c[player].w.f24 = 0;
    d_3c0d_0000[11][player] = 0;
    f_8539_1978(player, 0);
}

void f_8ba7_0b50(int player)
{
    long v;

    v = f_8ba7_0bc8(player);
    d_5d51_da58 = f_1d5e_1618(d_5d51_dda2, 1);
    d_5d51_da58[player] = v;
    d_2414_af3c[player].w.f12 = d_5d51_da58[player] == 0;
}

long f_8ba7_0bc8(int player)
{
    char buf[320];

    if (f_1646_2cc9(d_44d7_0000[18][player])) {
        d_5d51_d606 = 1;
        d_5d51_d7c6 = 8;
        f_8539_3db1(1, player);
        d_5d51_d461 = f_1646_0204(player, d_44d7_0000[18][player]);
        if (d_2414_af3c[player].a.f8) {
            if (d_5d51_d461 > 0)
                sprintf(buf, "%s is valued at %ld", f_1646_48c0(player), d_5d51_d461);
            else
                sprintf(buf, "%s on a free transfer", f_1646_48c0(player));
        } else
            sprintf(buf, "%s not yet valued", f_1646_48c0(player));
        f_8539_4451(1, buf);
        do {
            d_5d51_d5ca = -1;
            d_5d51_d7a0 = d_44d7_0000[18][player];
            d_5d51_d7bc = f_8539_4022(1, d_5d51_d461 / 1000, 0, player);
            if (d_5d51_d5a4) {
                do
                    f_a13d_4a1b(player, -1, 0);
                while (!d_5d51_d5df);
                d_5d51_d5df = 0;
                d_5d51_d5ca = 0;
                f_8539_3db1(1, player);
            }
            d_5d51_d461 = (long)d_5d51_d7bc * 1000;
            d_5d51_d461 = d_5d51_d461 / 1000;
            d_5d51_d461 = d_5d51_d461 * 1000;
            if (d_5d51_d5ca) {
                d_5d51_d45d = f_1646_0204(player, -1) * 0.75;
                if (d_5d51_d461 < d_5d51_d45d && d_5d51_d45d >= 5000) {
                    f_8539_4451(1, "The board expect more for him");
                    d_5d51_d5ca = 0;
                } else if (f_1646_0204(player, -1) * 3 < d_5d51_d461) {
                    sprintf(buf, "He's not worth %ld", d_5d51_d461);
                    f_8539_4451(1, buf);
                    d_5d51_d5ca = 0;
                }
            }
        } while (!d_5d51_d5ca);
        if (d_5d51_d461 > 0)
            sprintf(buf, "%s is valued at %ld", f_1646_48c0(player), d_5d51_d461);
        else
            sprintf(buf, "%s is given a free transfer", f_1646_48c0(player));
        f_8539_4451(6, buf);
    } else {
        d_5d51_d461 = f_1646_0204(player, d_44d7_0000[18][player]);
        if (10000 - (d_44d7_0000[23][player] == 1 ? 5000 : 0) > d_5d51_d461)
            d_5d51_d461 = 0;
    }
    return d_5d51_d461;
}

void f_8ba7_0eed(int player)
{
    char buf[320];

    d_5d51_d606 = 1;
    d_5d51_d7c6 = 8;
    f_8539_3db1(3, player);
    d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
    sprintf(buf, "He gets %d per week", d_5d51_d782 = d_5d51_da4c[4][player]);
    f_8539_4451(1, buf);
    d_5d51_d7aa = f_8539_3bd1(player, d_44d7_0000[18][player]);
    d_5d51_d780 = -1;
    do {
        d_5d51_d5ca = -1;
        d_5d51_d7c0 = d_5d51_d780 == -1 ? d_5d51_d782 : d_5d51_d780;
        d_5d51_d7bc = f_8539_4022(3, d_5d51_d7c0, 100, player);
        if (d_5d51_d5a4) {
            do
                f_a13d_4a1b(player, -1, 0);
            while (!d_5d51_d5df);
            d_5d51_d5df = 0;
            d_5d51_d5ca = 0;
            f_8539_3db1(3, player);
        }
        d_5d51_d780 = d_5d51_d7bc;
        if (d_5d51_d5ca) {
            if (d_5d51_d780 < d_5d51_d782) {
                f_8539_4451(1, "He refuses lower pay");
                d_5d51_d5ca = 0;
            } else if (d_5d51_d780 > d_5d51_d7aa) {
                f_8539_4451(1, "The board refuse to spend that per week");
                d_5d51_d5ca = 0;
            }
        }
    } while (!d_5d51_d5ca);
    if (d_5d51_d780 != d_5d51_d782)
        strcpy(buf, "He accepts the pay rise");
    else
        sprintf(buf, "His wages stay at %d per week", d_5d51_d780);
    f_8539_4451(6, buf);
    d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 1);
    d_5d51_da4c[4][player] = d_5d51_d780;
    d_5d51_d954 = d_3404_4226[0][d_44d7_0000[18][player]] - 646;
    sprintf(buf, "%04d", player);
    d_5d51_da1c = f_1d5e_1618(d_5d51_dd84, 0);
    if (f_1d5e_0b1c(d_5d51_da1c[d_5d51_d954], buf) == 0
        && d_5d51_d782 + 50 + f_1d5e_0d6a(100) <= d_5d51_d780
        && f_1d5e_0d6a(4) == 0
        && d_44d7_0000[0][player] > d_44d7_0000[15][player]) {
        d_44d7_0000[15][player] = d_44d7_0000[0][player];
        if (f_1646_2cc9(d_44d7_0000[18][player]) == 0 && d_44d7_0000[20][player] == 0)
            f_1646_13f1(player);
    }
    sprintf(buf, "%04d ", player);
    d_5d51_da1c = f_1d5e_1618(d_5d51_dd84, 1);
    strcat(d_5d51_da1c[d_5d51_d954], buf);
}

void f_8ba7_11e1(int player, char c)
{
    if (c) {
        switch (d_3c0d_0000[17][player]) {
        case 5: case 7: case 8:
            d_5d51_d79a = 0;
            break;
        case 1:
            d_5d51_d79a = 1;
            break;
        case 0: case 2: case 3:
            d_5d51_d79a = 2;
            break;
        case 4: case 6: case 9:
            d_5d51_d79a = 3;
            break;
        }
    } else {
        switch (d_3c0d_0000[17][player]) {
        case 0: case 1: case 5: case 7: case 8:
            d_5d51_d79a = (int)f_1d5e_0d6a(2) + 2;
            break;
        case 2: case 3: case 4: case 6: case 9:
            d_5d51_d79a = 3;
            break;
        }
    }
    if (d_5d51_d79a == 0 && f_1d5e_0d6a(3) == 0)
        d_5d51_d79a = 1;
    else if (d_5d51_d79a == 1 && f_1d5e_0d6a(3) == 0)
        d_5d51_d79a = 2;
    else if (d_5d51_d79a == 2 && f_1d5e_0d6a(3) == 0)
        d_5d51_d79a = 1;
    else if (d_5d51_d79a == 3 && f_1d5e_0d6a(3) == 0)
        d_5d51_d79a = 2;
    if (d_5d51_d79a == 0) {
        d_44d7_0000[15][player] = f_1d5e_136a(d_44d7_0000[15][player] + (int)f_1d5e_0d6a(25), d_44d7_0000[9][player] + 25);
        if (d_44d7_0000[20][player] == 0 && f_1646_2cc9(d_44d7_0000[18][player]) == 0)
            f_1646_13f1(player);
    } else if (d_5d51_d79a == 2) {
        d_44d7_0000[15][player] = f_1d5e_1308(d_44d7_0000[15][player] - (int)f_1d5e_0d6a(25), 10);
        if (d_2414_af3c[player].w.f7 && f_1646_2cc9(d_44d7_0000[18][player]) == 0)
            f_1646_0f3a(player);
    } else if (d_5d51_d79a == 3)
        d_2414_af3c[player].w.f16 = 1;
}

long f_8ba7_1401(int player)
{
    long v;

    v = f_1646_0204(player, -1);
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

void f_8ba7_1492(void)
{
    char buf[320];
    char ok;
    register unsigned char c;

    memset(d_44d7_8caa, 0, 38);
    memset(d_2414_d28c, 0, 60);
    f_9e79_1503(0);
    if (d_5d51_d628 > -1) {
        d_5d51_d77c = d_3404_1abe[d_5d51_d628];
        do {
            f_1646_4ba0("Find Player");
            f_1646_459b(1.0, 4.0, d_5d51_d77c);
            f_1646_2fa4(7, "", "*Exit|Normal Search|Scout Search|Transfer List|Other Players|Shortlist|Scout Reports|Transfer News|");
            f_1646_3348(7);
            d_5d51_d77a = d_5d51_da0a;
            if (d_5d51_d77a == 1 || d_5d51_d77a == 2) {
                ok = 1;
                memset(d_2414_d28c, 0, 60);
                d_5d51_da5c = f_1d5e_1618(d_5d51_dda4, 1);
                memset(d_5d51_da5c, -1, 3000);
                if (d_5d51_d77a == 2) {
                    c = f_a7f0_6332(d_5d51_d77c, "Search Options");
                    if (c < 255)
                        d_2414_d28c[c + 42] = -1;
                    else
                        ok = 0;
                } else
                    d_2414_d28c[46] = -1;
                if (ok != 1)
                    continue;
                f_8ba7_1e33(0, 6, 6, 3, "Positions", "Goalkeeper|Defender|Midfielder|Attacker|Right Sided|Left Sided|Central|");
                if (d_5d51_d5df)
                    continue;
                f_8ba7_1e33(8, 9, 6, 3, "Country", "Italy|Foreign|");
                if (d_5d51_d5df)
                    continue;
                f_8ba7_1e33(11, 19, 6, 3, "Requirements", "Passing|Tackling|Pace|Heading|Flair|Creativity|Goalscoring|Influence|Stamina|");
                if (d_5d51_d5df)
                    continue;
                f_8ba7_1e33(21, 27, 6, 3, "Approx Value", "0K - 100K|100K - 300K|300K - 500K|500K - 1M|1M - 2M|2M+|To Loan|");
                if (d_5d51_d5df)
                    continue;
                f_8ba7_1e33(29, 31, 6, 3, "Status", "Listed|Free Agent|Unsettled|");
                if (d_5d51_d5df)
                    continue;
                f_8ba7_1e33(33, 34, 6, 3, "Division", "Serie A|Serie B|");
                if (d_5d51_d5df)
                    continue;
                f_8ba7_1e33(36, 40, 6, 3, "Age", "16 - 20|20 - 24|24 - 30|30 - 33|33+|");
                if (d_5d51_d5df)
                    continue;
                f_8ba7_1ff2("Player Search", 0, d_5d51_da1a - 1);
            } else if (d_5d51_d77a == 5) {
                d_5d51_d954 = d_3404_4226[0][d_5d51_d77c] - 646;
                d_5d51_d778 = -1;
                do {
                    d_5d51_d8fe = d_3404_0260[d_5d51_d77c][0];
                    if (d_5d51_d8fe > 0) {
                        f_1646_6097();
                        f_1646_4ba0("Short List");
                        f_8ba7_2930(d_5d51_d77c);
                        f_1646_60a7();
                        f_1646_50c5(2, 29.0, 1.25, 1, 8, 37, " WCH");
                        f_1646_50c5(2, 34.25, 1.25, 1, 8, 37, " REC");
                        f_1646_50c5(2, 1.25, 22.5, 1, 12, 72, "   DEL");
                        f_1646_50c5(2, 10.875, 22.5, 1, 4, 224, "            EXIT");
                        f_1646_6097();
                        for (d_5d51_d98e = 1; d_5d51_d98e <= d_5d51_d8fe; d_5d51_d98e++)
                            f_8ba7_2c0f(d_3404_0260[d_5d51_d77c][d_5d51_d98e], d_5d51_d98e);
                        f_1646_60a7();
                        f_8ba7_30f6(0, 0);
                        d_5d51_d595 = 0;
                        d_5d51_d594 = 0;
                        do {
                            d_5d51_d776 = f_1646_5602(-1);
                            if ((d_5d51_d776 == 0 || d_5d51_d776 == 2 || d_5d51_d776 == 3 || d_5d51_d776 == 4) && d_5d51_d594) {
                                f_1646_545c(1, 0);
                                d_5d51_d594 = 0;
                            }
                            if ((d_5d51_d776 == 0 || d_5d51_d776 == 1 || d_5d51_d776 == 2 || d_5d51_d776 == 4) && d_5d51_d595) {
                                f_1646_545c(3, 0);
                                d_5d51_d595 = 0;
                            }
                            if (d_5d51_d776 == 1 && d_5d51_d594 == 0) {
                                f_1646_545c(1, -1);
                                d_5d51_d594 = -1;
                            }
                            if (d_5d51_d776 == 3 && d_5d51_d595 == 0) {
                                f_1646_545c(3, -1);
                                d_5d51_d595 = -1;
                            }
                            if (d_5d51_d776 == 2)
                                f_8ba7_30f6(0, -1);
                        } while (d_5d51_d776 <= 3);
                        if (d_5d51_d776 == 4)
                            d_5d51_d5e1 = -1;
                        else if (d_5d51_d776 >= 5) {
                            d_5d51_d9f0 = d_3404_0260[d_5d51_d77c][d_5d51_d776 - 4];
                            if (d_5d51_d594) {
                                if (f_1646_6f38(d_5d51_d9f0))
                                    f_1646_0bf2("Can't watch foreign|based players");
                                else
                                    f_a7f0_6442(d_5d51_d77c, d_5d51_d9f0);
                                d_5d51_d5e1 = 0;
                            } else if (d_5d51_d595) {
                                d_3404_0260[d_5d51_d77c][d_5d51_d776 - 4] = d_3404_0260[d_5d51_d77c][d_3404_0260[d_5d51_d77c][0]];
                                d_3404_0000[d_5d51_d77c][d_5d51_d776 - 4] = d_3404_0000[d_5d51_d77c][d_3404_0260[d_5d51_d77c][0]];
                                d_3404_0260[d_5d51_d77c][0]--;
                                sprintf(buf, "%s removed", f_1646_48c0(d_5d51_d9f0));
                                f_1646_0bf2(buf);
                                d_5d51_d5e1 = d_3404_0260[d_5d51_d77c][0] == 0;
                            } else {
                                do {
                                    d_5d51_d55b = 0;
                                    f_a13d_4a1b(d_5d51_d9f0, d_5d51_d77c, -1);
                                    f_8539_4fbd(d_5d51_d9f0, d_5d51_d9ba);
                                    if (d_5d51_d55b) {
                                        d_3404_0260[d_5d51_d77c][d_5d51_d776 - 4] = d_5d51_da1a - 1;
                                        d_5d51_d9f0 = d_5d51_da1a - 1;
                                    }
                                } while (!d_5d51_d5df);
                                d_5d51_d5e1 = d_3404_0260[d_5d51_d77c][0] == 0;
                            }
                        }
                    } else {
                        f_1646_0bf2("Nobody shortlisted");
                        d_5d51_d5e1 = -1;
                    }
                } while (!d_5d51_d5e1);
            } else if (d_5d51_d77a == 3) {
                memset(d_2414_d28c, 0, 60);
                d_5d51_da5c = f_1d5e_1618(d_5d51_dda4, 1);
                memset(d_5d51_da5c, -1, 3000);
                d_2414_d28c[7] = -1;
                d_2414_d28c[10] = -1;
                d_2414_d28c[20] = -1;
                d_2414_d28c[28] = -1;
                d_2414_d28c[29] = -1;
                d_2414_d28c[35] = -1;
                d_2414_d28c[41] = -1;
                d_2414_d28c[46] = -1;
                f_8ba7_1ff2("Transfer List", 0, d_5d51_da1a - 1);
            } else if (d_5d51_d77a == 6)
                f_a7f0_675a(d_5d51_d628 + 122);
            else if (d_5d51_d77a == 4) {
                memset(d_2414_d28c, 0, 60);
                d_5d51_da5c = f_1d5e_1618(d_5d51_dda4, 1);
                memset(d_5d51_da5c, -1, 3000);
                d_2414_d28c[7] = -1;
                d_2414_d28c[10] = -1;
                d_2414_d28c[20] = -1;
                d_2414_d28c[28] = -1;
                d_2414_d28c[32] = -1;
                d_2414_d28c[35] = -1;
                d_2414_d28c[41] = -1;
                d_2414_d28c[46] = -1;
                f_8ba7_1ff2("Plyrs Abroad/Serie C", 1000, d_5d51_da18 + 999);
            } else if (d_5d51_d77a == 7)
                f_b0f1_6c80(0);
        } while (d_5d51_d77a != 0);
    }
}

void f_8ba7_1cfc(int team)
{
    do {
        d_5d51_d8fe = d_3404_0260[team][0];
        if (d_5d51_d8fe > 0) {
            f_1646_4ba0("Short List");
            f_8ba7_2930(team);
            f_1646_50c5(2, 1.25, 22.5, 1, 4, 0x12d, "                 EXIT");
            for (d_5d51_d98e = 1; d_5d51_d98e <= d_5d51_d8fe; d_5d51_d98e++)
                f_8ba7_2c0f(d_3404_0260[team][d_5d51_d98e], d_5d51_d98e);
            do
                d_5d51_d776 = f_1646_5602(d_5d51_d9c6);
            while (d_5d51_d776 <= 0);
            if (d_5d51_d776 == 1)
                d_5d51_d5e1 = -1;
            else if (d_5d51_d776 >= 2) {
                d_5d51_d9f0 = d_3404_0260[team][d_5d51_d776 - 1];
                do
                    f_a13d_4a1b(d_5d51_d9f0, team, -1);
                while (!d_5d51_d5df);
                d_5d51_d5e1 = d_3404_0260[team][0] == 0;
            }
        } else {
            f_1646_0bf2("Nobody shortlisted");
            d_5d51_d5e1 = -1;
        }
    } while (!d_5d51_d5e1);
}

void f_8ba7_1e33(int a, int b, int bg, int fg, char far *s1, char far *s2)
{
    char buf[320];

    f_1646_4ba0("Search options");
    sprintf(buf, " Select %s ", s1);
    f_1646_3e54(1.0, 4.0, bg, fg, 0, buf);
    sprintf(buf, "*Exit|*Continue|%s", s2);
    f_1646_2fa4(7, "", buf);
    d_5d51_d774 = b - a + 2;
    do {
        f_1646_3348(-d_5d51_d774);
        d_5d51_d772 = d_5d51_da0a;
        if (d_5d51_d772 > 1) {
            if (d_2414_d28a[d_5d51_d772 + a] == 0)
                f_8ba7_1f78(d_5d51_d772, -1, a);
            else
                f_8ba7_1f78(d_5d51_d772, 0, a);
        }
    } while (d_5d51_d772 >= 2);
    d_5d51_d593 = 0;
    for (d_5d51_d770 = 2; d_5d51_d770 <= d_5d51_d774; d_5d51_d770++)
        if (d_2414_d28a[d_5d51_d770 + a]) {
            d_5d51_d593 = -1;
            d_5d51_d770 = d_5d51_d774;
        }
    if (d_5d51_d593 == 0)
        d_2414_d28a[d_5d51_d774 + a + 1] = -1;
    d_5d51_d5df = d_5d51_d772 == 0 ? -1 : 0;
}

void f_8ba7_1f78(int x, char on, int a)
{
    if (on) {
        d_2414_d28a[x + a] = -1;
        f_1646_32eb(1, 12, x);
    } else {
        d_2414_d28a[x + a] = 0;
        f_1646_32eb((int)d_2414_fe0c[x] / 16, (int)d_2414_fe0c[x] % 16, x);
    }
}

void f_8ba7_1ff2(char far *title, unsigned from, unsigned to)
{
    int n;

    n = 0;
    f_1646_4ba0("");
    f_1646_3c89(-1.0, 12.5, 1, "Searching");
    for (d_5d51_d9f0 = from; d_5d51_d9f0 <= to; d_5d51_d9f0++) {
        unsigned char c;

        d_5d51_d5ca = -1;
        if (d_44d7_0000[18][d_5d51_d9f0] == d_5d51_d77c)
            d_5d51_d5ca = 0;
        if (f_1646_6f38(d_5d51_d9f0) && d_2414_af3c[d_5d51_d9f0].w.f29 == 1)
            d_5d51_d5ca = 0;
        if (d_5d51_d5ca && d_2414_d28a[9] == 0)
            for (d_5d51_d7f2 = 0; d_5d51_d7f2 <= 6; d_5d51_d7f2++) {
                if (d_5d51_d7f2 == 0)
                    c = d_2414_af3c[d_5d51_d9f0].w.f0;
                else if (d_5d51_d7f2 == 1)
                    c = d_2414_af3c[d_5d51_d9f0].w.f1;
                else if (d_5d51_d7f2 == 2)
                    c = d_2414_af3c[d_5d51_d9f0].w.f2;
                else if (d_5d51_d7f2 == 3)
                    c = d_2414_af3c[d_5d51_d9f0].w.f3;
                else if (d_5d51_d7f2 == 4)
                    c = d_2414_af3c[d_5d51_d9f0].w.f4;
                else if (d_5d51_d7f2 == 5)
                    c = d_2414_af3c[d_5d51_d9f0].w.f5;
                else if (d_5d51_d7f2 == 6)
                    c = d_2414_af3c[d_5d51_d9f0].w.f6;
                if (d_2414_d28a[d_5d51_d7f2 + 2] && c == 0) {
                    d_5d51_d5ca = 0;
                    d_5d51_d7f2 = 6;
                }
            }
        if (d_5d51_d5ca && d_2414_d28a[12] == 0) {
            char k;

            k = d_5d51_da38[9][d_5d51_d9f0];
            if (k == 0 && d_2414_d28a[10] == 0 || k && d_2414_d28a[11] == 0)
                d_5d51_d5ca = 0;
        }
        if (d_5d51_d5ca && d_2414_d28a[22] == 0)
            for (d_5d51_d7f2 = 11; d_5d51_d7f2 <= 17; d_5d51_d7f2++)
                if (d_2414_d28a[d_5d51_d7f2 + 2] && d_44d7_0000[d_5d51_d7f2 - 10][d_5d51_d9f0] < 15) {
                    d_5d51_d5ca = 0;
                    d_5d51_d7f2 = 17;
                }
        if (d_5d51_d5ca && d_2414_d28a[22] == 0 && d_2414_d28a[19]) {
            d_5d51_d768 = d_3c0d_0000[0][d_5d51_d9f0] + d_3c0d_0000[5][d_5d51_d9f0];
            if (d_5d51_d768 >= 30) {
                d_5d51_d7f8 = d_3c0d_0000[1][d_5d51_d9f0] + d_3c0d_0000[6][d_5d51_d9f0];
                if (d_5d51_d7f8 / d_5d51_d768 < 0.2)
                    d_5d51_d5ca = 0;
            }
        }
        if (d_5d51_d5ca && d_2414_d28a[22] == 0 && d_2414_d28a[20] && d_44d7_0000[12][d_5d51_d9f0] < 14)
            d_5d51_d5ca = 0;
        if (d_5d51_d5ca && d_2414_d28a[22] == 0 && d_2414_d28a[21] && d_44d7_0000[22][d_5d51_d9f0] < 14)
            d_5d51_d5ca = 0;
        if (d_5d51_d5ca) {
            d_5d51_d592 = 0;
            if (d_2414_d28a[30])
                d_5d51_d592 = -1;
            else if (d_2414_af3c[d_5d51_d9f0].a.f8 && d_2414_af3c[d_5d51_d9f0].a.f24)
                d_5d51_d592 = d_2414_d28a[29];
            else {
                d_5d51_d451 = f_1646_0204(d_5d51_d9f0, d_44d7_0000[18][d_5d51_d9f0]);
                if (d_5d51_d451 <= 100000L)
                    d_5d51_d592 = d_2414_d28a[23];
                else if (d_5d51_d451 <= 300000L)
                    d_5d51_d592 = d_2414_d28a[24];
                else if (d_5d51_d451 <= 500000L)
                    d_5d51_d592 = d_2414_d28a[25];
                else if (d_5d51_d451 <= 1000000L)
                    d_5d51_d592 = d_2414_d28a[26];
                else if (d_5d51_d451 <= 2000000L)
                    d_5d51_d592 = d_2414_d28a[27];
                else
                    d_5d51_d592 = d_2414_d28a[28];
            }
            if (d_5d51_d592 == 0)
                d_5d51_d5ca = 0;
        }
        if (d_5d51_d5ca && d_2414_d28a[37] == 0
            && d_2414_d28a[f_1646_717d(d_44d7_0000[18][d_5d51_d9f0]) + 35] == 0)
            d_5d51_d5ca = 0;
        if (d_5d51_d5ca) {
            d_5d51_d591 = 0;
            if (d_2414_d28a[43])
                d_5d51_d591 = -1;
            else {
                d_5d51_d76e = d_44d7_0000[17][d_5d51_d9f0];
                if (d_5d51_d76e <= 20)
                    d_5d51_d591 = d_2414_d28a[38];
                else if (d_5d51_d76e <= 24)
                    d_5d51_d591 = d_2414_d28a[39];
                else if (d_5d51_d76e <= 30)
                    d_5d51_d591 = d_2414_d28a[40];
                else if (d_5d51_d76e <= 33)
                    d_5d51_d591 = d_2414_d28a[41];
                else
                    d_5d51_d591 = d_2414_d28a[42];
            }
            if (d_5d51_d591 == 0)
                d_5d51_d5ca = 0;
        }
        if (d_5d51_d5ca && d_2414_d28a[48] == 0)
            for (c = 0; c <= 3; c += 1)
                if (d_2414_d28a[c + 44] && !f_8ba7_3364(d_5d51_d9f0, d_5d51_d77c, c)) {
                    d_5d51_d5ca = 0;
                    c = 3;
                }
        if (d_5d51_d5ca && d_2414_d28a[31] && !d_2414_af3c[d_5d51_d9f0].a.f8)
            d_5d51_d5ca = 0;
        if (d_5d51_d5ca && d_2414_d28a[32] && d_3404_691c[d_5d51_d9f0] > 0)
            d_5d51_d5ca = 0;
        if (d_5d51_d5ca && d_2414_d28a[33] && f_1646_6ae2(d_5d51_d9f0, -1) == 0)
            d_5d51_d5ca = 0;
        if (d_5d51_d5ca) {
            n++;
            d_5d51_da5c = f_1d5e_1618(d_5d51_dda4, 1);
            d_5d51_da5c[n - 1] = d_5d51_d9f0;
        }
    }
    if (n > 0) {
        d_5d51_d76c = 1;
        d_5d51_d778 = -1;
        do {
            unsigned char c;
            unsigned char c2;
            char buf[40];

            d_5d51_d590 = 0;
            f_1646_6097();
            f_1646_4ba0(title);
            f_8ba7_2930(d_5d51_d77c);
            f_1646_60a7();
            c = n / 15 + (n % 15 > 0 ? 1 : 0);
            c2 = d_5d51_d76c / 15 + 1;
            sprintf(buf, " %d/%d", c2, c);
            f_1646_3686(34.625, 1.125, 0, 1, 0x24, buf);
            f_1646_50c5(2, 34.25, 2.0, 1, 8, 0x25, " REC");
            f_8ba7_2aea();
            d_5d51_d76a++;
            d_5d51_d8fe = 0;
            for (d_5d51_d98e = d_5d51_d76c; d_5d51_d76c + 14 >= d_5d51_d98e; d_5d51_d98e++) {
                d_5d51_da5c = f_1d5e_1618(d_5d51_dda4, 0);
                d_5d51_d9f0 = d_5d51_da5c[d_5d51_d98e - 1];
                if (d_5d51_d9f0 <= -1)
                    break;
                d_44d7_8caa[d_5d51_d8fe] = d_5d51_d9f0;
                d_5d51_d8fe++;
            }
            f_1646_6097();
            for (d_5d51_d98e = 1; d_5d51_d98e <= d_5d51_d8fe; d_5d51_d98e++)
                f_8ba7_2c0f(d_44d7_8caa[d_5d51_d98e - 1], d_5d51_d98e);
            f_1646_60a7();
            f_8ba7_30f6(1, 0);
            do {
                d_5d51_d776 = f_1646_5602(-1);
                if (d_5d51_d776 == 1)
                    f_8ba7_30f6(1, -1);
            } while (d_5d51_d776 < 2);
            if (d_5d51_d776 == 2 && d_5d51_d5f0 < 3)
                d_5d51_d76c -= 15;
            else if (d_5d51_d776 == 4 && d_5d51_d5f0 == 1 || d_5d51_d776 == 3 && d_5d51_d5f0 == 3)
                d_5d51_d76c += 15;
            else if (d_5d51_d776 >= d_5d51_d76a) {
                d_5d51_d8ee = d_5d51_d776 - d_5d51_d76a;
                d_5d51_d9f0 = d_44d7_8caa[d_5d51_d8ee];
                do {
                    d_5d51_d55b = 0;
                    f_a13d_4a1b(d_5d51_d9f0, d_5d51_d77c, -1);
                    f_8539_4fbd(d_5d51_d9f0, d_5d51_d9ba);
                    if (d_5d51_d55b) {
                        d_44d7_8caa[d_5d51_d8ee] = d_5d51_da1a - 1;
                        d_5d51_d9f0 = d_5d51_da1a - 1;
                        d_5d51_d5df = -1;
                        d_5d51_d776 = d_5d51_d5f0 < 3 ? 3 : 2;
                    }
                } while (!d_5d51_d5df);
            }
        } while (!(d_5d51_d776 == 3 && d_5d51_d5f0 < 3) && !(d_5d51_d776 == 2 && d_5d51_d5f0 > 2));
    } else
        f_1646_0bf2("No players found");
}

void f_8ba7_2930(int team)
{
    char buf[320];

    sprintf(buf, " %s ", (char far *)d_5d51_b476[team]);
    f_1646_3686(1.125, 3.0, -(d_3404_448a[team] / 16), d_3404_448a[team] % 16, 0, buf);
    f_1646_3686(1.125, 4.5, 4, 1, 0x48, " NAME");
    f_1646_3686(10.375, 4.5, 4, 1, 0x18, " POS");
    f_1646_3686(13.625, 4.5, 4, 1, 0x48, " CLUB");
    f_1646_3686(22.875, 4.5, 4, 1, 0x24, " AP GL");
    f_1646_3686(27.625, 4.5, 4, 1, 0, " AV R ");
    f_1646_3686(32.375, 4.5, 4, 1, 0, " VALUE   ");
}

/* the search screen's bottom bar, by what can be scrolled: label, colours, width */
static struct opt d_5d51_3d20[] = {
    {"   -SCR", 1, 9, 72}, {"       EXIT", 1, 2, 147}, {"   +SCR", 1, 9, 72}, {"*", 0, 0, 0}
};
static struct opt d_5d51_3d40[] = {
    {"   -SCR", 1, 9, 72}, {"            EXIT", 1, 2, 224}, {"*", 0, 0, 0}
};
static struct opt d_5d51_3d58[] = {
    {"            EXIT", 1, 2, 224}, {"   +SCR", 1, 9, 72}, {"*", 0, 0, 0}
};
static struct opt d_5d51_3d70[] = {
    {"                 EXIT", 1, 2, 301}, {"*", 0, 0, 0}
};

void f_8ba7_2aea(void)
{
    float x;
    struct opt far *p;

    d_5d51_da5c = f_1d5e_1618(d_5d51_dda4, 0);
    d_5d51_d5f0 = (d_5d51_d76c == 1 ? 2 : 0) + (d_5d51_da5c[d_5d51_d76c + 14] == -1 ? 1 : 0) + 1;
    if (d_5d51_d5f0 == 1)
        p = d_5d51_3d20;
    else if (d_5d51_d5f0 == 2)
        p = d_5d51_3d40;
    else if (d_5d51_d5f0 == 3)
        p = d_5d51_3d58;
    else
        p = d_5d51_3d70;
    d_5d51_d76a = 1;
    x = 1.25;
    do {
        f_1646_50c5(2, x, 22.5, p->a, p->b, p->w, p->s);
        x += (p->w + 5) / 8.0;
        d_5d51_d76a++;
        p++;
    } while (strcmp(p->s, "*") != 0);
}

/* one row of the search screen: player p's name, positions, club, appearances and goals,
   average rating and value */
void f_8ba7_2c0f(int p, int row)
{
    char c;
    char a[5];
    char b[6];
    int club;
    char buf[320];

    c = 0;
    if (row & 1)
        d_5d51_d9b8 = 14;
    else
        d_5d51_d9b8 = 8;
    if (p < d_5d51_da1a) {
        d_5d51_d7ce = f_8539_2a25(p, d_5d51_d77c);
        c = f_8539_2868(p, d_5d51_d77c, d_5d51_d7ce);
    }
    sprintf(buf, " %.11s", f_1646_48c0(p));
    f_1646_50c5(0, 1.125, row + 5, c == 2 ? 6 : 1, d_5d51_d9b8, 0x48, buf);
    club = d_3c0d_0000[7][p] < 255 ? d_3c0d_0000[7][p] : d_44d7_0000[18][p];
    strcpy(d_2414_3426, " ");
    if (d_2414_af3c[p].w.f0)
        strcat(d_2414_3426, "GK");
    if (d_2414_af3c[p].w.f1)
        strcat(d_2414_3426, "D");
    if (d_2414_af3c[p].w.f2)
        strcat(d_2414_3426, "M");
    if (d_2414_af3c[p].w.f3)
        strcat(d_2414_3426, "A");
    f_1646_3686(10.375, row + 5, 4, 5, 0x18, d_2414_3426);
    if (club < 38)
        sprintf(buf, " %.11s", (char far *)d_5d51_b476[club]);
    else if (club >= 140)
        sprintf(buf, " %.11s", d_4f37_0000[club - 140]);
    f_1646_3686(13.625, row + 5, 1, 12, 0x48, buf);
    d_5d51_d768 = d_3c0d_0000[0][p] + d_3c0d_0000[5][p];
    sprintf(a, "%d%s", d_5d51_d768, d_5d51_d768 < 10 ? " " : "");
    d_5d51_d7f8 = d_3c0d_0000[1][p] + d_3c0d_0000[6][p];
    sprintf(b, "%d%s", d_5d51_d7f8, d_5d51_d7f8 < 10 ? " " : "");
    sprintf(buf, " %s %s", a, b);
    f_1646_3686(22.875, row + 5, 1, 4, 0x24, buf);
    d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
    sprintf(buf, " %s", f_a13d_202f(d_5d51_d768, d_5d51_da4c[0][p] + d_5d51_da4c[1][p]));
    f_1646_3686(27.625, row + 5, 1, 4, 0x24, buf);
    if (d_2414_af3c[p].w.f8 && d_2414_af3c[p].w.f24)
        strcpy(buf, " To Loan");
    else {
        d_5d51_d4a1 = f_1646_0204(p, d_44d7_0000[18][p]);
        if (!d_2414_af3c[p].w.f8)
            d_5d51_d4a1 = f_1646_0e45(d_5d51_d4a1);
        strcpy(d_2414_358e, f_1646_0ee9(d_5d51_d4a1));
        sprintf(buf, " %s", d_2414_358e);
    }
    f_1646_3686(32.375, row + 5, 6, 3, 0x36, buf);
}

void f_8ba7_30f6(int mode, char draw)
{
    char buf[320];

    if (d_5d51_d778 > -1 && draw) {
        f_1d5e_0822(8, 0xa4, 0x138, 0xac);
        for (d_5d51_d98e = 1; d_5d51_d98e <= d_5d51_d8fe; d_5d51_d98e++)
            f_1d5e_0822(2, d_5d51_d98e * 8 + 0x22, 7, d_5d51_d98e * 8 + 0x28);
    }
    do {
        d_5d51_d778 += draw ? 1 : 0;
        if (d_5d51_d778 == 4)
            d_5d51_d778 = -1;
        if (d_5d51_d778 > -1) {
            if (mode == 0) {
                d_5d51_d8fe = d_3404_0260[d_5d51_d77c][0];
                for (d_5d51_d98e = 1; d_5d51_d98e <= d_5d51_d8fe; d_5d51_d98e++)
                    d_44d7_8caa[d_5d51_d98e - 1] = d_3404_0260[d_5d51_d77c][d_5d51_d98e];
            }
            d_5d51_d58f = 0;
            for (d_5d51_d98e = 1; d_5d51_d98e <= d_5d51_d8fe; d_5d51_d98e++) {
                if (f_8ba7_3364(d_44d7_8caa[d_5d51_d98e - 1], d_5d51_d77c, d_5d51_d778)) {
                    f_1646_3686(0.375, d_5d51_d98e + 5, 1, 2, 5, "R");
                    d_5d51_d58f = -1;
                }
            }
            if (d_5d51_d58f) {
                f_1646_3686(1.125, 21.25, 1, 2, 0, "R");
                strcpy(d_2414_353e, "");
                if (d_5d51_d778 == 3)
                    strcpy(d_2414_353e, "youth ");
                sprintf(buf, " Recommended by %sscout %s ", d_2414_353e,
                        f_1646_4919(d_3404_42be[d_5d51_d778][d_5d51_d77c], 0));
                f_1646_3686(2.625, 21.25, 6, 3, 0, buf);
            }
        }
    } while (d_5d51_d58f == 0 && d_5d51_d778 != -1 && draw);
}

char f_8ba7_3364(int p, int team, int n)
{
    d_5d51_d58e = 0;
    if (n < 3 || n == 3 && d_44d7_0000[17][p] < 21) {
        d_5d51_d766 = d_3404_42be[n][team];
        d_5d51_d7c2 = d_4f37_0960[d_3404_225c[d_5d51_d766]][d_3c0d_0000[17][p]];
        d_5d51_d764 = (d_3404_2c84[d_5d51_d766] >= (p + d_5d51_d766) % 200) * 0.075
            ? d_44d7_0000[9][p]
            : f_1d5e_1308(d_3c0d_0000[18][p], d_44d7_0000[0][p]);
        if (d_5d51_d7c2 < 8) {
            if (n < 3) {
                d_5d51_d762 = f_1646_2cfd(team);
                d_5d51_d760 = 150;
            } else {
                d_5d51_d762 = 0;
                d_5d51_d760 = 175;
            }
        } else
            d_5d51_d760 = 180;
        d_5d51_d7a8 = f_1646_2dce(p);
        if (d_5d51_d764 >= d_5d51_d760 && d_5d51_d7a8 > d_5d51_d762
            && d_5d51_d7a8 < f_1646_2cfd(team) + 4)
            d_5d51_d58e = -1;
    }
    return d_5d51_d58e;
}

void f_8ba7_34ed(void)
{
    d_5d51_d758 = 0;
    d_5d51_d58d = -1;
    f_b0f1_66b9(2);
    for (d_5d51_d9b2 = 0; d_5d51_d9b2 <= 645; d_5d51_d9b2++) {
        f_8ba7_3559(d_5d51_d9b2, (0x109 - d_5d51_d956 >= d_5d51_d9b2) - 2, 0);
        f_b0f1_6835(2, d_5d51_d9b2, 645);
    }
    d_5d51_d58d = 0;
}

void f_8ba7_3559(int p, int c, char flag)
{
    char a, b;

    d_5d51_da48 = f_1d5e_1618(d_5d51_dd9a, 1);
    ((int far *)d_5d51_da48)[p] = f_b0f1_43eb(0);
    ((int far *)(d_5d51_da48 + 1300))[p] = f_b0f1_445d(0);
    do {
        d_3404_1abe[p] = 0xff;
        if (flag == 0)
            d_3404_1d48[p] = f_1d5e_0d6a(26) + 35;
        else
            d_3404_1d48[p] = 35;
        d_3404_1fd2[p] = 0;
        do
            d_5d51_d75a = f_1d5e_0d6a(10);
        while (!(d_5d51_d5ca = d_5d51_d75a != 2 && d_5d51_d75a != 4 && d_5d51_d75a != 6
                 && d_5d51_d75a != 9));
        d_3404_225c[p] = d_5d51_d75a;
        do {
            d_5d51_d5ca = -1;
            d_5d51_d97e = f_1d5e_0d6a(100) + 1;
            if (d_5d51_d97e <= 60) {
                d_5d51_d84a = f_1d5e_0d6a(3);
                if (d_5d51_d84a == 0 || d_5d51_d84a == 1)
                    d_5d51_d832 = d_5d51_d84a;
                else
                    d_5d51_d832 = 0;
            } else if (d_5d51_d97e <= 90) {
                d_5d51_d84a = f_1d5e_0d6a(4);
                if (d_5d51_d84a != 3)
                    d_5d51_d832 = d_5d51_d84a + 5;
                else
                    d_5d51_d832 = 3;
            } else if (d_5d51_d97e <= 100)
                d_5d51_d832 = 2;
            d_5d51_d97e = f_1d5e_0d6a(100) + 1;
            if (d_5d51_d97e <= 70)
                d_5d51_d604 = f_1d5e_0d6a(3) > 0 ? 0 : 4;
            else if (d_5d51_d97e <= 85)
                d_5d51_d604 = 1;
            else if (d_5d51_d97e <= 95)
                d_5d51_d604 = 2;
            else
                d_5d51_d604 = 3;
            if ((d_5d51_d832 == 2 || d_5d51_d832 == 6) && d_5d51_d604 == 0)
                d_5d51_d5ca = 0;
        } while (!d_5d51_d5ca);
        d_3404_24e6[p] = (d_5d51_d604 << 4) + d_5d51_d832;
        d_5d51_d58c = 0;
        d_5d51_d58b = 0;
        for (d_5d51_d9ac = 3; d_5d51_d9ac >= 0; d_5d51_d9ac--) {
            d_5d51_d84a = f_1d5e_0d6a(560) + 1;
            switch (d_5d51_d9ac) {
            case 0:
                d_5d51_d58a = d_5d51_d84a <= 80 && d_5d51_d58b == 0 && d_5d51_d58c == 0;
                break;
            case 1:
                d_5d51_d58a = d_5d51_d84a > 80 && d_5d51_d84a <= 160 && d_5d51_d58b == 0;
                break;
            case 2:
                d_5d51_d58a = d_5d51_d84a > 160 && d_5d51_d84a <= 480 && d_5d51_d58b == 0;
                break;
            case 3:
                d_5d51_d58a = d_5d51_d84a > 480;
                break;
            }
            if (d_5d51_d58a) {
                d_5d51_d7a8 = f_1d5e_0d6a(51) + 50;
                d_5d51_d764 = d_5d51_d7a8 + f_1d5e_0d6a(191 - d_5d51_d7a8) + 10;
                d_3404_2770[d_5d51_d9ac][p] = d_5d51_d7a8;
                d_3404_3198[d_5d51_d9ac][p] = d_5d51_d764;
                if (d_3404_1d48[p] > 35)
                    for (d_5d51_d9d8 = 35; d_5d51_d9d8 <= d_3404_1d48[p] - 1; d_5d51_d9d8++)
                        f_8ba7_3c1b(p, d_5d51_d9ac);
                if (d_5d51_d9ac == 2)
                    d_5d51_d58c = -1;
                else if (d_5d51_d9ac == 3)
                    d_5d51_d58b = -1;
            } else {
                d_3404_2770[d_5d51_d9ac][p] = 10;
                d_3404_3198[d_5d51_d9ac][p] = 10;
            }
        }
        if (c > -2) {
            d_5d51_d589 = 0;
            d_5d51_d84a = 0;
            do {
                if (c == -1)
                    d_5d51_d87e = f_1d5e_0d6a(38);
                else
                    d_5d51_d87e = c;
                d_5d51_d94c = f_1646_2cc9(d_5d51_d87e) ? 1 : 0;
                d_5d51_d7ea = f_1646_2cfd(d_5d51_d87e);
                for (d_5d51_d756 = d_5d51_d94c; d_5d51_d756 <= 6; d_5d51_d756++) {
                    if (d_3404_4226[d_5d51_d756][d_5d51_d87e] == 650) {
                        d_5d51_d7c2 = d_4f37_0960[d_3404_418e[d_5d51_d87e]][d_3404_225c[p]];
                        if (d_5d51_d7c2 < 8) {
                            d_5d51_d754 = d_3404_2770[f_9182_09e8(d_5d51_d756)][p] / 10 - d_5d51_d7ea;
                            d_5d51_d754 = abs(d_5d51_d754);
                            if (d_5d51_d754 < 4) {
                                d_3404_4226[d_5d51_d756][d_5d51_d87e] = p;
                                d_3404_1abe[p] = d_5d51_d87e;
                                d_3404_3bc0[p] = d_5d51_d756;
                                if (d_5d51_d756 == 0 && d_5d51_da04 == 1 && d_5d51_d55c) {
                                    d_5d51_da48 = f_1d5e_1618(d_5d51_dd9a, 1);
                                    ((int far *)d_5d51_da48)[p] = d_2414_84c2[0][d_5d51_d87e];
                                    ((int far *)(d_5d51_da48 + 1300))[p] = d_2414_84c2[1][d_5d51_d87e];
                                    a = d_3404_24e6[p] / 16;
                                    b = d_3404_24e6[p] % 16;
                                    if (d_2414_84c2[2][d_5d51_d87e] < 255)
                                        a = d_2414_84c2[2][d_5d51_d87e];
                                    if (d_2414_84c2[3][d_5d51_d87e] < 255)
                                        b = d_2414_84c2[3][d_5d51_d87e];
                                    d_3404_24e6[p] = (a << 4) + b;
                                    if (d_2414_84c2[4][d_5d51_d87e] < 255)
                                        d_3404_2770[0][p] = d_2414_84c2[4][d_5d51_d87e];
                                    if (d_2414_84c2[5][d_5d51_d87e] < 255)
                                        d_3404_225c[p] = d_2414_84c2[5][d_5d51_d87e];
                                }
                                if (d_5d51_d756 == 1 && d_5d51_da04 == 1 && d_5d51_d55c) {
                                    d_5d51_da48 = f_1d5e_1618(d_5d51_dd9a, 1);
                                    ((int far *)d_5d51_da48)[p] = d_2414_84c2[6][d_5d51_d87e];
                                    ((int far *)(d_5d51_da48 + 1300))[p] = d_2414_84c2[7][d_5d51_d87e];
                                }
                                d_5d51_d756 = 6;
                                d_5d51_d589 = -1;
                            }
                        }
                    }
                }
                d_5d51_d84a++;
            } while (d_5d51_d84a < 20 && d_5d51_d589 == 0);
        }
    } while (d_5d51_d589 == 0 && c != -2);
}

void f_8ba7_3c1b(int p, int k)
{
    if (p < 646)
        d_3404_2770[k][p] = (d_3404_2770[k][p] * 2 + d_3404_3198[k][p]) / 3;
    if (k == 0 && d_5d51_d58d == 0 && d_3404_3bc0[p] == 0 && d_3404_1abe[p] < 255
        && d_3404_4272[d_3404_1abe[p]] < 650) {
        d_5d51_d9c4 = f_1646_717d(d_3404_1abe[p]);
        d_5d51_d752 = f_1d5e_136a(d_3404_452a[d_3404_1abe[p]], 100 - d_5d51_d9c4 * 15) * 2;
        d_3404_2770[k][p] = (d_3404_2770[k][p] * 2 + d_5d51_d752) / 3;
    }
}

/* the yearly retirements: staff aged 35 or more may retire, then age every
   staff member by a year */
void f_8ba7_3d47(void)
{
    char text[320];
    char title[80];

    f_b0f1_66b9(2);
    for (d_5d51_d9b2 = 0; d_5d51_d9b2 <= 645; d_5d51_d9b2++) {
        f_b0f1_6835(2, d_5d51_d9b2, 1290);
        d_5d51_d596 = 0;
        d_5d51_d750 = d_3404_1abe[d_5d51_d9b2];
        if (d_3404_1d48[d_5d51_d9b2] >= 35) {
            d_5d51_d55f = 0;
            if (d_5d51_d750 < 255 && d_3404_4dea[d_5d51_d750] > 0)
                d_5d51_d55f = -1;
            if (d_3404_1d48[d_5d51_d9b2] > f_1d5e_0d6a(6) + 60 && d_5d51_d55f == 0) {
                if (d_5d51_d750 < 255) {
                    if (f_1646_2cc9(d_5d51_d750) || d_3404_3bc0[d_5d51_d9b2] == 0) {
                        strcpy(d_2414_3516, f_9182_19b6(d_3404_3bc0[d_5d51_d9b2]));
                        sprintf(title, "%s quits %s", d_2414_3516, (char far *)d_5d51_b476[d_5d51_d750]);
                        sprintf(text, "%s %s has decided to retire from soccer at the age of %d.",
                                d_2414_3516, f_1646_4919(d_5d51_d9b2, 0), d_3404_1d48[d_5d51_d9b2]);
                        f_1646_5bcb(d_5d51_d750, title, text);
                    }
                }
                if (d_5d51_d750 < 255 && d_3404_3bc0[d_5d51_d9b2] == 0)
                    f_8ba7_41f1(d_5d51_d750, 3);
                f_8ba7_46cf(d_5d51_d9b2);
                f_8ba7_3559(d_5d51_d9b2, -2, 1);
                if (d_5d51_d750 < 255 && d_3404_3bc0[d_5d51_d9b2] > 0)
                    f_8ba7_4f61(d_5d51_d750, d_3404_3bc0[d_5d51_d9b2]);
            } else if (d_5d51_d750 < 255 && d_5d51_d55f == 0 && d_3404_3bc0[d_5d51_d9b2] > 0
                       && f_1646_2cc9(d_5d51_d750) == 0
                       && f_1646_2cfd(d_5d51_d750)
                          - d_3404_2770[f_9182_09e8(d_3404_3bc0[d_5d51_d9b2])][d_5d51_d9b2] / 10 > 4)
                f_8ba7_4f61(d_5d51_d750, d_3404_3bc0[d_5d51_d9b2]);
        }
        if (d_5d51_d596) {
            f_b0f1_6516();
            f_b0f1_66b9(2);
        }
    }
    for (d_5d51_d9b2 = 0; d_5d51_d9b2 <= d_5d51_d958 + 645; d_5d51_d9b2++) {
        f_b0f1_6835(2, d_5d51_d9b2 + 645, 1290);
        if (d_3404_1d48[d_5d51_d9b2] >= 35) {
            for (d_5d51_d9ac = 0; d_5d51_d9ac <= 3; d_5d51_d9ac++)
                f_8ba7_3c1b(d_5d51_d9b2, d_5d51_d9ac);
            d_3404_1d48[d_5d51_d9b2]++;
        }
    }
}

/* the weekly board pressure: an unsuccessful manager may lose his job */
void f_8ba7_407f(void)
{
    for (d_5d51_d9ca = 0; d_5d51_d9ca <= 37; d_5d51_d9ca++) {
        if (d_3404_4dea[d_5d51_d9ca] == 0
            && (d_2414_5460[0][d_5d51_d9ca] != 0 || f_1d5e_0d6a(3) > 0)) {
            if (d_3404_452a[d_5d51_d9ca] < 30 && d_5d51_da06 < 95 && f_1d5e_0d6a(3) == 0
                && d_3404_1fd2[d_3404_4226[0][d_5d51_d9ca]] == 0
                && d_2414_5460[1][d_5d51_d9ca] + d_2414_5460[2][d_5d51_d9ca]
                   + d_2414_5460[4][d_5d51_d9ca] + d_2414_5460[5][d_5d51_d9ca]
                   + d_2414_5460[6][d_5d51_d9ca] == 0)
                f_8ba7_41f1(d_5d51_d9ca, 2);
            for (d_5d51_d9ac = 0; d_5d51_d9ac <= 6; d_5d51_d9ac++) {
                d_5d51_d9b2 = d_3404_4226[d_5d51_d9ac][d_5d51_d9ca];
                if (d_5d51_d9b2 < 650 && d_3404_1fd2[d_5d51_d9b2] > 0)
                    d_3404_1fd2[d_5d51_d9b2] = d_3404_1fd2[d_5d51_d9b2]
                        - (d_5d51_da06 % 2 == 0 ? (char)1 : (char)0);
            }
        }
    }
}

/* the manager of club leaves: a = 0 takeover, 1 resignation, 2 sacked or resigned,
   3 retired, 4 left for another club */
void f_8ba7_41f1(int club, int a)
{
    char buf[320];

    if (a < 3) {
        if (a == 0) {
            sprintf(buf, "%s is to be replaced as manager of %s as part of the takeover.",
                    f_1646_4919(d_3404_4226[0][club], 0), (char far *)d_5d51_b476[club]);
            f_1646_5bcb(club, "Managerial news", buf);
        } else if (a == 1 || f_1d5e_0d6a(4) == 0 && f_1646_2cc9(club) == 0) {
            if (f_1646_2cc9(club) == 0) {
                sprintf(buf, "%s has resigned as manager of %s.",
                        f_1646_4919(d_3404_4226[0][club], 0), (char far *)d_5d51_b476[club]);
                f_1646_5bcb(club, "Managerial news", buf);
            }
        } else {
            sprintf(buf, "%s has been given the sack by the %s board.",
                    f_1646_4919(d_3404_4226[0][club], 0), (char far *)d_5d51_b476[club]);
            f_1646_5bcb(club, "Managerial news", buf);
        }
        if (f_1646_2cc9(club)) {
            f_a7f0_42c5(d_3404_4226[0][club] + 122, 0, 0, 0, 0, 0);
            f_a7f0_4ab0(d_3404_4226[0][club] + 122);
            d_5d51_d956--;
            d_5d51_d5e5 = d_5d51_d956 == 0;
        }
        d_5d51_d746 = d_3404_4226[0][club];
        d_3404_1abe[d_5d51_d746] = 255;
        d_3404_1fd2[d_5d51_d746] = 0;
        d_3404_3bc0[d_5d51_d746] = club + 7;
    }
    d_3404_452a[club] = 50;
    d_3404_4dea[club] = 3;
    d_5d51_d81a = d_3404_4272[club];
    d_3404_4226[0][club] = d_5d51_d81a;
    d_3404_3bc0[d_5d51_d81a] = 0;
    d_3404_4272[club] = 650;
    if (a != 3)
        f_9e79_06bc(club);
}

/* the clubs looking for a manager draw up their shortlists */
void f_8ba7_4421(void)
{
    char buf[320];

    for (d_5d51_d9cc = 0; d_5d51_d9cc <= 37; d_5d51_d9cc++) {
        if (d_3404_4dea[d_5d51_d9cc] > 1) {
            d_5d51_d7ea = f_1646_2cfd(d_5d51_d9cc);
            d_5d51_d84a = 0;
            d_5d51_d71c = d_5d51_d7ea - (4 - d_3404_4dea[d_5d51_d9cc]) * 4;
            d_5d51_d9c2 = d_5d51_d7ea + 3;
            d_5d51_d61c = f_1d5e_0d6a(9) + 10;
            d_5d51_da2c = f_1d5e_1618(d_5d51_dd8c, 0);
            for (; d_5d51_d84a < 200 && strlen(d_5d51_da2c[d_5d51_d9cc]) < d_5d51_d61c * 4;
                 d_5d51_d84a++) {
                d_5d51_d9b2 = f_1d5e_0d6a(d_5d51_d958 + 646);
                if (d_3404_1fd2[d_5d51_d9b2] == 0 && d_3404_3bc0[d_5d51_d9b2] - 7 != d_5d51_d9cc) {
                    d_5d51_d7a8 = d_3404_2770[0][d_5d51_d9b2] / 10;
                    sprintf(d_2414_2058, "%03d", d_5d51_d9b2);
                    d_5d51_da2c = f_1d5e_1618(d_5d51_dd8c, 0);
                    if (f_1d5e_0b1c(d_5d51_da2c[d_5d51_d9cc], d_2414_2058) == 0
                        && d_5d51_d7a8 >= d_5d51_d71c && d_5d51_d7a8 <= d_5d51_d9c2) {
                        if (d_3404_1abe[d_5d51_d9b2] == 255 || d_5d51_d9b2 >= 646)
                            d_5d51_d565 = -1;
                        else
                            d_5d51_d565 = d_5d51_d7ea - f_1646_2cfd(d_3404_1abe[d_5d51_d9b2]) > 2.0;
                        if (d_5d51_d565) {
                            d_5d51_da2c = f_1d5e_1618(d_5d51_dd8c, 1);
                            strcat(d_5d51_da2c[d_5d51_d9cc], d_2414_2058);
                            strcat(d_5d51_da2c[d_5d51_d9cc], " ");
                            if (d_5d51_d9b2 >= 646) {
                                sprintf(buf, "%s have shortlisted %s as a possible replacement manager.",
                                        (char far *)d_5d51_b476[d_5d51_d9cc], f_1646_4919(d_5d51_d9b2, 0));
                                f_1646_5bcb(d_5d51_d9cc, "Job News", buf);
                            }
                        }
                    }
                }
            }
        }
    }
}

/* strike p off every shortlist */
void f_8ba7_46cf(int p)
{
    char buf[320];

    for (d_5d51_d9cc = 0; d_5d51_d9cc <= 37; d_5d51_d9cc++) {
        if (d_3404_4dea[d_5d51_d9cc] > 0) {
            sprintf(buf, "%03d", p);
            d_5d51_da2c = f_1d5e_1618(d_5d51_dd8c, 1);
            d_5d51_d9d8 = f_1d5e_0b1c(d_5d51_da2c[d_5d51_d9cc], buf);
            if (d_5d51_d9d8 > 0)
                strcpy(&d_5d51_da2c[d_5d51_d9cc][d_5d51_d9d8 - 1], "XXX");
        }
    }
}

/* the clubs whose search is over appoint the best candidate of their shortlist */
void f_8ba7_477e(void)
{
    char taken[650];
    char buf[320];

    memset(taken, 0, 650);
    for (d_5d51_d61a = 0; d_5d51_d61a <= 37; d_5d51_d61a++) {
        if (d_3404_4dea[d_5d51_d61a] > 0) {
            d_3404_4dea[d_5d51_d61a] = d_3404_4dea[d_5d51_d61a] - 1;
            if (d_3404_4dea[d_5d51_d61a] == 0) {
                d_5d51_da2c = f_1d5e_1618(d_5d51_dd8c, 0);
                strcpy(d_2414_2558, d_5d51_da2c[d_5d51_d61a]);
                if (d_2414_2558[0] != 0) {
                    do {
                        d_5d51_d74e = -1;
                        for (d_5d51_d9d0 = 1; strlen(d_2414_2558) >= d_5d51_d9d0; d_5d51_d9d0 += 4) {
                            sprintf(buf, "%.3s", &d_2414_2558[d_5d51_d9d0 - 1]);
                            d_5d51_d622 = atol(buf);
                            if ((d_5d51_da04 > 1 || d_5d51_da04 == 1 && d_5d51_d622 < 646)
                                && taken[d_5d51_d622] == 0) {
                                d_5d51_d7fa = d_3404_2770[0][d_5d51_d622]
                                    - d_4f37_0960[d_3404_418e[d_5d51_d61a]][d_3404_225c[d_5d51_d622]]
                                    + f_1d5e_0d6a(10) - f_1d5e_0d6a(10);
                                if (d_5d51_d7fa > d_5d51_d9c2 || d_5d51_d74e == -1) {
                                    d_5d51_d5ca = -1;
                                    if (d_3404_1abe[d_5d51_d622] < 255 && d_3404_1fd2[d_5d51_d622] == 0
                                        && d_3404_3bc0[d_5d51_d622] - 7 != d_5d51_d61a
                                        && d_3404_4dea[d_3404_1abe[d_5d51_d622]] > 0
                                        && d_3404_4226[0][d_3404_1abe[d_5d51_d622]] == d_5d51_d622
                                        && d_3404_1abe[d_5d51_d622] != d_5d51_d61a)
                                        d_5d51_d5ca = 0;
                                    if (d_5d51_d5ca) {
                                        d_5d51_d74e = d_5d51_d622;
                                        d_5d51_d9c2 = d_5d51_d7fa;
                                    }
                                }
                            }
                        }
                        d_5d51_d564 = -1;
                        if (d_5d51_d74e != -1 && d_5d51_d74e >= 646
                            && f_8ba7_4b78(d_5d51_d74e, d_5d51_d61a) == 0) {
                            taken[d_5d51_d74e] = -1;
                            d_5d51_d564 = 0;
                        }
                    } while (!d_5d51_d564);
                    if (d_5d51_d74e != -1) {
                        d_5d51_d81a = d_3404_4226[0][d_5d51_d61a];
                        d_3404_4226[0][d_5d51_d61a] = 650;
                        d_3404_4272[d_5d51_d61a] = d_5d51_d81a;
                        d_3404_3bc0[d_5d51_d81a] = 1;
                        d_3404_4dea[d_5d51_d61a] = 0;
                        d_5d51_da2c = f_1d5e_1618(d_5d51_dd8c, 1);
                        strcpy(d_5d51_da2c[d_5d51_d61a], "");
                        d_5d51_d74a = d_3404_1abe[d_5d51_d74e];
                        d_5d51_d748 = d_3404_3bc0[d_5d51_d74e];
                        f_8ba7_5155(d_5d51_d74e, d_5d51_d61a, 0);
                        if (d_5d51_d74a < 255) {
                            if (d_5d51_d748 == 0) {
                                sprintf(buf, "%s are now looking for a new manager following the departure of %s.",
                                        (char far *)d_5d51_b476[d_5d51_d74a], f_1646_4919(d_5d51_d74e, 0));
                                f_1646_5bcb(d_5d51_d74a, "Managerial news", buf);
                                f_8ba7_41f1(d_5d51_d74a, 4);
                            } else
                                f_8ba7_4f61(d_5d51_d74a, d_5d51_d748);
                        }
                        continue;
                    }
                }
                d_3404_4dea[d_5d51_d61a] = 2;
            }
        }
    }
}

/* a club's job offer to the player: accept, refuse, negotiate; returns -1 if accepted */
char f_8ba7_4b78(int p, int team)
{
    unsigned char n = 0;
    long sal;
    char buf[320];

    sal = f_b0f1_0000(p, team) * 1000L;
    d_5d51_d580 = -1;
    d_5d51_d57f = 0;
    do {
        d_5d51_d5a5 = 0;
        f_1646_4ba0("Job Offer");
        sprintf(buf, " %s ", f_1646_4919(p, 0));
        if (d_3404_1abe[p] == 0xff)
            d_5d51_d9b8 = 20;
        else
            d_5d51_d9b8 = d_3404_448a[d_3404_1abe[p]];
        f_1646_3e54(1.0, 4.0, -(d_5d51_d9b8 / 16), d_5d51_d9b8 % 16, 0, buf);
        sprintf(buf, "%s want you as their manager", (char far *)d_5d51_b476[team]);
        f_1646_0b2f(7, buf);
        sprintf(buf, "They are offering \xa3%ld per year", sal);
        f_1646_0b2f(9, buf);
        f_1646_2fa4(12, "", "Accept Offer|Refuse Offer|Negotiate Salary|League Table|Squad Details|");
        do {
            d_5d51_d5e1 = -1;
            f_1646_3348(4);
            if (d_5d51_da0a == 0) {
                if (f_1646_0ccd()) {
                    sprintf(buf, "%s offer accepted", (char far *)d_5d51_b476[team]);
                    f_1646_0b9f(buf);
                    if (d_3404_1abe[p] < 0xff)
                        f_9182_18e5(d_3404_1abe[p]);
                    d_5d51_da50 = f_1d5e_1618(d_5d51_dd9e, 1);
                    d_5d51_da50[p] = sal / 1000;
                    d_5d51_d57f = -1;
                } else
                    d_5d51_d5e1 = 0;
            } else if (d_5d51_da0a == 1) {
                if (f_1646_0ccd()) {
                    sprintf(buf, "%s offer refused", (char far *)d_5d51_b476[team]);
                    f_1646_0b9f(buf);
                } else
                    d_5d51_d5e1 = 0;
            } else if (d_5d51_da0a == 2) {
                if (f_1d5e_136a(f_1d5e_0d6a(3), f_1d5e_0d6a(3)) + 2 < n)
                    f_1646_0b9f("No deal");
                else {
                    long old = sal;

                    if (f_1d5e_0d6a(2) == 0) {
                        sal = sal * (f_1d5e_0d6a(20) / 200 + 1.2);
                        sal = sal / 1000;
                        sal = sal * 1000;
                    }
                    if (sal > old) {
                        sprintf(buf, "They increase the offer to \xa3%ld", sal);
                        f_1646_0b9f(buf);
                        d_5d51_d5a5 = -1;
                    } else {
                        sprintf(buf, "The offer stays at \xa3%ld", sal);
                        f_1646_0b9f(buf);
                        d_5d51_d5e1 = 0;
                    }
                    n++;
                }
            } else if (d_5d51_da0a == 3) {
                f_6b47_0654(f_1646_717d(team));
                d_5d51_d5a5 = -1;
            } else if (d_5d51_da0a == 4) {
                f_6b47_55c8(team);
                d_5d51_d5a5 = -1;
            }
        } while (!d_5d51_d5e1);
    } while (d_5d51_d5a5);
    d_5d51_d580 = 0;
    return d_5d51_d57f;
}

void f_8ba7_4f61(int club, int n)
{
    d_5d51_d756 = n;
    d_5d51_d87e = club;
    do {
        d_5d51_d74e = -1;
        if (f_1646_2cc9(d_5d51_d87e))
            d_5d51_d74e = f_9182_0000(d_5d51_d87e, d_5d51_d756);
        if (d_5d51_d74e == -1) {
            d_5d51_d587 = 0;
            do {
                d_5d51_d9c2 = 0;
                for (d_5d51_d9b4 = 0; d_5d51_d9b4 <= 645; d_5d51_d9b4++) {
                    if (d_3404_1abe[d_5d51_d9b4] != d_5d51_d87e) {
                        d_5d51_d7c2 = d_4f37_0960[d_3404_225c[d_3404_4226[0][d_5d51_d87e]]][d_3404_225c[d_5d51_d9b4]];
                        if ((d_5d51_d7fa = f_1d5e_1308(d_3404_2770[f_9182_09e8(d_5d51_d756)][d_5d51_d9b4] / 10
                                                       + (d_3404_1abe[d_5d51_d9b4] == d_5d51_d87e ? 4 : 0)
                                                       - d_5d51_d7c2, 1)) > d_5d51_d9c2) {
                            if ((fabs(d_5d51_d7fa - f_1646_2cfd(d_5d51_d87e)) < 4.0
                                 && (d_3404_1d48[d_5d51_d9b4] <= 50 && d_5d51_d756 < 2 || d_5d51_d756 > 1))
                                || d_5d51_d587) {
                                if (f_8ba7_552e(d_5d51_d9b4, d_5d51_d87e, d_5d51_d756)) {
                                    d_5d51_d74e = d_5d51_d9b4;
                                    d_5d51_d9c2 = d_5d51_d7fa;
                                }
                            }
                        }
                    }
                }
                d_5d51_d587 = -1;
            } while (d_5d51_d74e <= -1);
        }
        f_8ba7_5155(d_5d51_d74e, d_5d51_d87e, d_5d51_d756);
        if (d_5d51_d74a < 255) {
            d_5d51_d756 = d_5d51_d748;
            d_5d51_d87e = d_5d51_d74a;
        }
    } while (d_5d51_d74a != 255);
}

void f_8ba7_5155(int p, int team, int b)
{
    int i, j;
    char buf[320];

    d_5d51_d74a = d_3404_1abe[p];
    d_5d51_d748 = d_3404_3bc0[p];
    d_5d51_d746 = d_3404_4226[b][team];
    if (d_5d51_d746 < 0x28a) {
        d_5d51_d55e = -1;
        for (d_5d51_d744 = 0; d_5d51_d744 <= 37; d_5d51_d744++)
            for (d_5d51_d742 = 0; d_5d51_d742 <= 6; d_5d51_d742++)
                if (d_3404_4226[d_5d51_d742][d_5d51_d744] == d_5d51_d746 && d_5d51_d744 != team) {
                    d_5d51_d55e = 0;
                    d_5d51_d742 = 6;
                    d_5d51_d744 = 37;
                }
        if (d_5d51_d55e != 0) {
            d_3404_1abe[d_5d51_d746] = 0xff;
            d_3404_1fd2[d_5d51_d746] = 0;
        }
    }
    d_3404_4226[b][team] = p;
    d_3404_1abe[p] = team;
    d_3404_1fd2[p] = f_1d5e_1308(f_1d5e_136a(d_3404_2770[0][p] * 0.375, 50), 25);
    d_3404_3bc0[p] = b;
    f_8ba7_46cf(p);
    if (b == 0) {
        if (p > 0x285 && d_5d51_d74a == 0xff) {
            d_5d51_d956++;
            d_5d51_d5e5 = 0;
        }
        if (p > 0x285)
            f_b0f1_2916(team);
        d_3404_443a[0][team] = f_1d5e_1308(10, d_3404_2770[0][p] / 13);
        for (i = 0; i <= d_3404_4552[team]; i++)
            if (f_1d5e_0d6a(3) > 0)
                f_9915_1cf1(d_44d7_9624[team][i]);
        d_3404_452a[team] = f_1d5e_1308(d_3404_2770[0][p] * 0.5, 50);
        if (d_5d51_d586 == 0) {
            f_9e79_06bc(team);
            if (d_5d51_d746 < 0x286)
                for (j = 1; j <= d_3404_0260[team][0]; j++)
                    d_3c0d_0000[23][d_3404_0260[team][j]]--;
            d_3404_0260[team][0] = 0;
        }
        if (p < 0x286) {
            d_5d51_da50 = f_1d5e_1618(d_5d51_dd9e, 1);
            d_5d51_da50[p] = f_b0f1_0000(p, team);
        }
    }
    d_5d51_d585 = 0;
    if (b == 0 || f_1646_2cc9(team)
        || d_5d51_d74a < 0xff && f_1646_2cc9(d_5d51_d74a))
        d_5d51_d585 = -1;
    if (d_5d51_d585 != 0) {
        if (d_5d51_d74a == 0xff)
            strcpy(d_2414_4b56, "");
        else if (d_5d51_d74a == team)
            sprintf(d_2414_4b56, "their %s ", f_9182_19b6(d_5d51_d748));
        else
            sprintf(d_2414_4b56, "%s %s ", (char far *)d_5d51_b476[d_5d51_d74a], f_9182_19b6(d_5d51_d748));
        sprintf(buf, "%s have appointed %s%s as their new %s.", (char far *)d_5d51_b476[team],
                d_2414_4b56, f_1646_4919(p, 0), f_9182_19b6(b));
        f_1646_5bcb(team, "Job News", buf);
    }
}

char f_8ba7_552e(int p, int team, int x)
{
    d_5d51_d584 = 0;
    if (d_3404_1abe[p] == team) {
        if (d_3404_4dea[d_3404_1abe[p]] == 0)
            d_5d51_d584 = -1;
    } else if (d_3404_1fd2[p] == 0) {
        d_5d51_d73c = f_9182_09e8(x);
        if (d_3404_1abe[p] == 0xff)
            d_5d51_d584 = d_3404_2770[d_5d51_d73c][p] / 10 - f_1646_2cfd(team) < 4.0 ? -1 : 0;
        else if (d_3404_4dea[d_3404_1abe[p]] == 0 && f_1d5e_0d6a(4) > 0) {
            d_5d51_d73a = f_9182_09e8(d_3404_3bc0[p]);
            if (d_5d51_d73a != 0 || d_5d51_d73c <= 0)
                if (f_1646_2cfd(team) - (d_5d51_d73c < d_5d51_d73a) > f_1646_2cfd(d_3404_1abe[p]) + 3.0
                    || d_3404_2770[d_5d51_d73c][p] - d_3404_2770[d_5d51_d73a][p] > 60)
                    d_5d51_d584 = -1;
        }
    }
    return d_5d51_d584;
}
