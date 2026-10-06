/* @at 71c8:0000 */
/* @data 5d51:14e4 */
/* @module */

/* Overlay 71c8: CM93's overlay 7732 (games/cm93/decomp/src/7732.C) changed for CM Italia:
 * club information: the accounts, board confidence, resignation and manager jobs, match
 * reports, background picture, save game, quitting, the week's fixture and result titles
 * and lists, cup rounds, the squad screen and tactics. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <mem.h>
#include <ctype.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_71c8_0000(void);
void f_71c8_0027(int team);
void f_71c8_0616(void);
void f_71c8_07f1(int team);
void f_71c8_0855(int team);
void f_71c8_09c4(int team);
void f_71c8_0d91(void);
void f_71c8_0de5(void);
void f_71c8_0f70(void);
void f_71c8_10b5(int comp, int week);
void f_71c8_1197(void);
void f_71c8_1349(void);
void f_71c8_13ca(int week, int mode, int x);
void f_71c8_1fd9(int week, int mode, int from, int to, int kind);
char f_71c8_26a9(int kind, int week, int n);
int f_71c8_2795(int week, int n);
void f_71c8_281d(int club, int week, int n);
void f_71c8_2a25(int a, int b, int c, int d);
void f_71c8_2c86(int n, int b, int c, int d);
void f_71c8_2fa9(void);
void f_71c8_3038(int team);
void f_71c8_40cc(int mode, int team);
void f_71c8_4731(int a, int team);
void f_71c8_4947(int team);
void f_71c8_4a6c(int team);

void f_8ba7_1492(void);
void f_9e79_1103(int);
void f_8ba7_1cfc(int team);
void f_1646_0003(float x, int team, char far *title);
void f_1646_3686(float x, float y, int bg, int fg, int w, char far *s);
void f_1646_3e54(float x, float y, int bg, int fg, int w, char far *s);
void far *f_1d5e_1618(int handle, int page);
long f_9e79_2216(int x);
long f_1d5e_131d(long a, long b);
void f_1646_58a8(int a);
void f_1646_6097(void);
void f_1646_60a7(void);
void f_1646_4ba0(char far *title);
extern int d_5d51_dd98;
extern int d_5d51_dd8c;
extern int d_5d51_d9d0;
extern char (far *d_5d51_da2c)[101];
extern char far d_2414_5074[];
extern char far d_2414_5024[];
extern char far d_2414_4ab6[];
extern char far d_2414_4a66[];
extern char far d_2414_2558[];
extern long far d_3404_3e4a[][38];
extern unsigned char far d_3404_1abe[];
void f_1646_0bf2(char far *);
void f_9e79_1503(char all);
char far *f_1646_4919(int manager, char full);
void f_1646_2fa4(int n, char far *title, char far *items);
void f_9182_18e5(int club);
void f_8ba7_41f1(int club, int a);
unsigned f_1d5e_0b1c(char far *s, char far *set);
void f_1646_50c5(int a, float x, float y, int c, int d, int e, char far *s);
int f_1646_5602(int a);
extern char d_5d51_d5e5;
extern char d_5d51_d5db;
extern int d_5d51_d9ca;
extern int d_5d51_da06;
extern int d_5d51_d97e;
extern int d_5d51_d9c6;
extern int d_5d51_da0a;
extern int d_5d51_d956;
extern int d_5d51_d958;
extern int d_5d51_d960;
extern int d_5d51_d628;
extern int d_5d51_d626;
extern int d_5d51_d624;
extern int d_5d51_d622;
extern long d_5d51_d491;
extern long d_5d51_d48d;
extern long d_5d51_d489;
extern float d_5d51_d549;
extern float d_5d51_d551;
extern char near *d_5d51_b476[];
extern long (far *d_5d51_da44)[38];
extern unsigned char far d_3404_452a[];
extern unsigned char far d_3404_448a[];
struct col { float x; char far *title; };
void f_1646_3348(int last);
void f_a7f0_4bae(void);
void f_6b47_18da(int mode);
int f_a13d_3d54(int p);
void f_9915_4dfd(int n);
void f_9e79_06bc(int t);
void f_b0f1_2916(char team);
void f_b0f1_7336(void);
char f_1646_258b(int);
char f_1646_2646(int);
char f_1646_2674(int);
char f_1646_26cf(int);
char f_1646_2726(int);
char f_1646_2785(int);
char f_1646_27d8(int);
void f_7c1d_3ca2(int a, int b, char c);
void f_9915_498d(char far *s);
void f_1d5e_1a24();
void f_1d5e_05b0(char reset);
void f_1d5e_067d(void);
void f_9915_3970(void);
void f_1d5e_1216(void);
extern char d_5d51_d5d9;
extern char d_5d51_d5da;
extern char d_5d51_d5e1;
extern int d_5d51_d620;
extern int d_5d51_d952;
extern int d_5d51_d954;
extern int d_5d51_d95a;
extern int d_5d51_d95c;
extern int d_5d51_d95e;
extern int d_5d51_d99a;
extern char far d_2414_0078[];
extern char far d_2414_4a02[];
extern char far d_2414_4a3e[];
extern char far d_2414_4a52[];
extern char far d_2414_8414[];
extern int far d_3404_0260[][16];
extern unsigned char far d_3404_1d48[];
extern unsigned char far d_3404_1fd2[];
extern unsigned char far d_3404_225c[];
extern unsigned char far d_3404_2770[];
extern unsigned char far d_3404_3bc0[];
extern int far d_3404_4226[];
extern unsigned char far d_3404_443a[][40];
extern unsigned char far d_3c0d_0000[][1500];
extern int far d_44d7_93fa[];
extern int far d_44d7_94c2[];
extern int far d_4f37_1390[][2][100];
void f_1d5e_0b11(int on);
int f_1d5e_136a(int a, int b);
void f_1646_357e(int x, int y, int colour, char far *s);
void f_1646_38d0(float x, float y, int colour, char far *s);
void f_1646_3c89(float x, float y, int colour, char far *s);
char f_1646_2833(int, int);
char f_1646_28e4(int, int);
char f_1646_297b(int, int);
char f_1646_2a0c(int, int);
char f_1646_2aa7(int);
char f_1646_2b06(int);
char f_1646_2bb5(int, int);
extern float d_5d51_d53d;
extern int d_5d51_d938;
extern int d_5d51_d93a;
extern int d_5d51_d93c;
extern int d_5d51_d93e;
extern int d_5d51_d940;
extern int d_5d51_d942;
extern int d_5d51_d944;
extern int d_5d51_d946;
extern int d_5d51_d94a;
extern int d_5d51_d94c;
extern int d_5d51_d94e;
extern int d_5d51_d950;
extern int d_5d51_d9b6;
extern int d_5d51_d9e2;
extern char far d_2414_4674[];
extern char far d_2414_46c4[];
extern char far d_2414_4714[];
extern char far d_2414_4764[];
extern char far d_2414_47b4[];
extern char far d_2414_4804[];
extern char far d_2414_4854[];
extern char far d_2414_48a4[];
extern char far d_2414_48f4[];
extern char far d_2414_4b56[];
extern char far d_2414_4fd4[];
extern int far d_2414_ecec[];
extern int far d_44d7_a5de[];
extern char far d_44d7_8e60[];
char f_1646_2cc9(int x);
char far *f_1646_3537(int x);
char far *f_1646_4b1e(int division, char full);
void f_1646_015c(int x1, int y1, int x2, int y2);
void f_1d5e_13a4(void far *a, void far *b, int n);
void f_1d5e_08cc(int c);
void f_1d5e_08e2(int x1, int y1, int x2, int y2);
extern char d_5d51_d5d7;
extern char d_5d51_d5d8;
extern int d_5d51_d9fe;
extern int d_5d51_d9b8;
extern int d_5d51_d934;
extern int d_5d51_d936;
extern char near *d_5d51_b4ca[];
extern char far d_2414_4624[];
extern char far d_2414_45d4[];
extern char far d_2414_4584[];
extern char far * far d_4f37_0000[];
extern unsigned char far d_4f37_1176[];
void f_1646_5869(int team);
void f_1646_587e(void);
void f_1646_545c(int a, char b);
char far *f_1646_2f4b(int x, char c);
int f_1646_1f63(int player);
char f_1646_5de5(int player);
char f_1646_5dff(int player);
unsigned char f_1646_5e2d(int player);
char f_1646_60fb(char team, char week, char n);
char far *f_1d5e_100c(char far *s);
void f_9e79_16c0(int team, char reserves);
void f_9e79_219f(int line);
void f_76ea_0000(char far *msg);
void f_76ea_00ce(int slot);
void f_6b47_0eb3(int mode, int team);
void f_6b47_55c8(int team);
void f_6b47_5b29(int team);
void f_6b47_5fe4(int team);
void f_6b47_4ddc(int team);
void f_9182_0a23(int team);
void f_a13d_09a0(int team);
void f_a13d_4a1b(int player, int a, char b);
void f_8539_4fbd(int player, int a);
void f_b8e8_0000(char team);
unsigned char f_b0f1_594e(int team, unsigned char w, unsigned char n);
void f_b0f1_2bd1(char team);
void f_a7f0_3545(char team, char n);
struct flags_a { unsigned char b0; unsigned f8 : 1; unsigned f9 : 1; unsigned : 6; unsigned : 2; unsigned f18 : 1; unsigned f19 : 1; unsigned : 4; unsigned : 0; unsigned f24 : 1; unsigned : 3; unsigned f28 : 1; unsigned : 1; unsigned f30 : 1; unsigned : 1; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
extern union flags far d_2414_af3c[];
extern char d_5d51_d5d4;
extern char d_5d51_d5d5;
extern char d_5d51_d5df;
extern unsigned char d_5d51_d5ed;
extern int d_5d51_d924;
extern int d_5d51_d928;
extern int d_5d51_d92c;
extern int d_5d51_d92e;
extern int d_5d51_d930;
extern int d_5d51_d9a0;
extern int d_5d51_d9ba;
extern int d_5d51_d9bc;
extern int d_5d51_d9e6;
extern int d_5d51_d9f0;
extern float d_5d51_d539;
extern char far d_2414_0e60[][40];
extern char far d_2414_44e4[];
extern char far d_2414_4534[];
extern unsigned char far d_2414_c6dc[][80];
extern unsigned char far d_2414_c6ec[][80];
extern int far d_2414_ed6c[];
extern int far d_3404_0e34[][16];
extern int far d_3404_40aa[][38];
extern unsigned char far d_44d7_0000[][1500];
extern int far d_4f37_1392[][2][100];
char far *f_1646_4849(int player);
void f_9e79_0f6c(int t, int k, char c);
extern char d_5d51_d5d1;
extern int d_5d51_d922;
extern int d_5d51_d920;
extern int d_5d51_d91e;
extern int d_5d51_d91c;
extern int d_5d51_d9d4;
extern int d_5d51_d9c8;
extern int d_5d51_d9b4;
extern int d_5d51_d9b2;
extern int d_5d51_d616;
extern int d_5d51_d8f8;
extern int d_5d51_d8fa;
extern int d_5d51_dd9c;
extern float d_5d51_d535;
extern float d_5d51_d531;
extern int (far *d_5d51_da4c)[1500];
extern int far d_44d7_9624[][26];
extern unsigned char far d_44d7_8c95[][5];
extern int far d_2414_ed6a[];
extern char far d_2414_4494[];
extern char far d_2414_4444[];
extern char far d_2414_5164[];
extern char far * far d_4f37_06da[];
extern unsigned char far d_3404_4552[];
extern unsigned char far d_3404_0dce[][16];
extern unsigned char far d_3404_1334[][3][16];
extern unsigned char far d_3404_24e6[];
char f_1646_2ba4(int);
extern int far d_3404_4272[];
extern char d_5d51_d407;
extern unsigned char d_5d51_d406;
extern unsigned char d_5d51_d401[];
unsigned char f_1646_717d(char team);

/* the accounts' items */
static char far *d_5d51_14e4[] = {
    "GATE RECEIPTS", "SPONSOR PAYMENT", "PLAYERS SOLD", "INTEREST", "TELEVISION NETS",
    "CASH PRIZES", "OTHER GAINS", "STAFF WAGES", "RATES AND TAXES", "PLAYERS BOUGHT",
    "INTEREST ON OVERDRAFT", "GROUND MAINTENANCE", "LEAGUE FINES", "GENERAL EXPENSES"
};

void f_71c8_0000(void)
{
    if (d_5d51_d5e5 == 0)
        f_8ba7_1492();
    else {
        f_9e79_1103(-1);
        f_8ba7_1cfc(d_5d51_d9ca);
    }
}

void f_71c8_0027(int team)
{
    char buf[320];

    if (d_5d51_da06 > 2) {
        f_1646_6097();
        f_1646_0003(-1, team, "Accounts");
        f_1646_3686(1, 5.25, 6, 2, 0, " ITEM                   ");
        f_1646_3686(20, 5.25, 3, 6, 0, " INCOME     ");
        f_1646_3686(30, 5.25, 3, 6, 0, " SPENDING   ");
        d_5d51_d491 = 0;
        d_5d51_d48d = 0;
        for (d_5d51_d97e = 0; d_5d51_d97e <= 13; d_5d51_d97e++) {
            strcpy(buf, d_5d51_14e4[d_5d51_d97e]);
            if (d_5d51_d97e == 0 && d_5d51_da06 <= 12)
                strcpy(buf, "GATE + SEASON TICKETS");
            sprintf(d_2414_5074, " %-23s", buf);
            d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 0);
            sprintf(d_2414_5024, "%-10ld", (d_5d51_da44 + 16)[d_5d51_d97e][team]);
            if (d_5d51_d97e < 7) {
                f_1646_3686(1, d_5d51_d97e + 6.5, 1, 4, 0, d_2414_5074);
                sprintf(buf, " +%s", d_2414_5024);
                f_1646_3686(20, d_5d51_d97e + 6.5, 1, 12, 0, buf);
                d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 0);
                d_5d51_d491 += (d_5d51_da44 + 16)[d_5d51_d97e][team];
            } else {
                f_1646_3686(1, d_5d51_d97e + 6.75, 1, 4, 0, d_2414_5074);
                sprintf(buf, " -%s", d_2414_5024);
                f_1646_3686(30, d_5d51_d97e + 6.75, 1, 2, 0, buf);
                d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 0);
                d_5d51_d48d += (d_5d51_da44 + 16)[d_5d51_d97e][team];
            }
        }
        f_1646_3686(1, 21, 6, 3, 0, " TOTALS                 ");
        sprintf(buf, " +%-10ld", d_5d51_d491);
        f_1646_3686(20, 21, 4, 1, 0, buf);
        sprintf(buf, " -%-10ld", d_5d51_d48d);
        f_1646_3686(30, 21, 2, 1, 0, buf);
        strcpy(d_2414_4ab6, "");
        if (d_5d51_d491 - d_5d51_d48d > 0)
            sprintf(d_2414_4ab6, "(+%ld) ", d_5d51_d491 - d_5d51_d48d);
        else if (d_5d51_d48d - d_5d51_d491 > 0)
            sprintf(d_2414_4ab6, "(-%ld) ", d_5d51_d48d - d_5d51_d491);
        sprintf(buf, " %ld AVAILABLE %s",
                f_1d5e_131d(d_3404_3e4a[0][team] - f_9e79_2216(team), 0L), d_2414_4ab6);
        f_1646_3686(1, 24, 1, 12, 0, buf);
        d_5d51_d489 = f_9e79_2216(team) - d_3404_3e4a[0][team];
        sprintf(buf, " OVERDRAFT %ld (MAX %ld) ", d_5d51_d489 > 0 ? d_5d51_d489 : 0L,
                f_9e79_2216(team));
        f_1646_3686(1, 22.5, 1, 8, 0, buf);
        f_1646_60a7();
        f_1646_58a8(0);
    } else
        f_1646_0bf2("No summary for last week");
}

void f_71c8_0616(void)
{
    char buf[320];

    if (d_5d51_d956 > 0) {
        f_9e79_1503(0);
        if (d_5d51_d628 > -1) {
            do {
                f_1646_2fa4(0, f_1646_4919(d_5d51_d628, 0), "*Exit|Board Confidence|Resign|");
                d_5d51_d626 = d_5d51_da0a;
                if (d_5d51_d626 == 1) {
                    if (d_3404_3e4a[0][d_3404_1abe[d_5d51_d628]] < 0)
                        f_1646_0bf2("We are in financial trouble");
                    else {
                        if (d_3404_452a[d_3404_1abe[d_5d51_d628]] <= 24)
                            strcpy(d_2414_4a66, "are considering your future");
                        else if (d_3404_452a[d_3404_1abe[d_5d51_d628]] <= 39)
                            strcpy(d_2414_4a66, "are concerned");
                        else if (d_3404_452a[d_3404_1abe[d_5d51_d628]] <= 59)
                            strcpy(d_2414_4a66, "are not concerned");
                        else if (d_3404_452a[d_3404_1abe[d_5d51_d628]] <= 79)
                            strcpy(d_2414_4a66, "are pleased");
                        else if (d_3404_452a[d_3404_1abe[d_5d51_d628]] <= 94)
                            strcpy(d_2414_4a66, "are very pleased");
                        else
                            strcpy(d_2414_4a66, "are delighted");
                        sprintf(buf, "%d%% : We %s", d_3404_452a[d_3404_1abe[d_5d51_d628]], d_2414_4a66);
                        f_1646_0bf2(buf);
                    }
                } else if (d_5d51_d626 == 2) {
                    f_71c8_07f1(d_5d51_d628);
                    if (d_5d51_d5db)
                        d_5d51_d626 = 0;
                }
            } while (d_5d51_d626 != 0);
        }
    } else
        f_1646_0bf2("Not available on demo");
}

void f_71c8_07f1(int team)
{
    d_5d51_d5db = 0;
    f_1646_2fa4(0, "Resignation", "*Exit|Resign|");
    d_5d51_d960 = d_5d51_da0a;
    if (d_5d51_d960 > 0) {
        f_9182_18e5(d_3404_1abe[d_5d51_d628]);
        f_8ba7_41f1(d_3404_1abe[d_5d51_d628], 1);
        d_5d51_d5db = -1;
    }
}

void f_71c8_0855(int team)
{
    char num[4];
    char buf[320];

    if (d_5d51_d958 > 0) {
        do {
            sprintf(buf, "The %s job", (char far *)d_5d51_b476[team]);
            f_1646_2fa4(0, buf, "Exit|Candidates|Apply For It|");
            d_5d51_d624 = d_5d51_da0a;
            if (d_5d51_d624 == 1)
                f_71c8_09c4(team);
            else if (d_5d51_d624 == 2) {
                f_9e79_1503(-1);
                if (d_5d51_d628 > -1) {
                    sprintf(num, "%03d", d_5d51_d628);
                    d_5d51_da2c = f_1d5e_1618(d_5d51_dd8c, 0);
                    if (f_1d5e_0b1c(d_5d51_da2c[team], num) == 0) {
                        sprintf(buf, "%s receive your application", (char far *)d_5d51_b476[team]);
                        f_1646_0bf2(buf);
                        d_5d51_da2c = f_1d5e_1618(d_5d51_dd8c, 1);
                        strcat(d_5d51_da2c[team], num);
                        strcat(d_5d51_da2c[team], " ");
                    } else
                        f_1646_0bf2("You are already on the list");
                }
            }
        } while (d_5d51_d624 != 0);
    } else
        f_71c8_09c4(team);
}

void f_71c8_09c4(int team)
{
    char buf[320];

    sprintf(buf, "The %s job", (char far *)d_5d51_b476[team]);
    f_1646_4ba0(buf);
    f_1646_3e54(1.25, 4.0, d_3404_448a[team] / 16, d_3404_448a[team] % 16, 0, " Candidates ");
    f_1646_3686(1.125, 7.0, 2, 1, 0x4c, " NAME");
    f_1646_3686(10.875, 7.0, 2, 1, 0x49, " CLUB");
    f_1646_3686(20.25, 7.0, 2, 1, 0x4c, " NAME");
    f_1646_3686(30, 7.0, 2, 1, 0x49, " CLUB");
    d_5d51_da2c = f_1d5e_1618(d_5d51_dd8c, 0);
    strcpy(d_2414_2558, d_5d51_da2c[team]);
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 21; d_5d51_d9d0++) {
        d_5d51_d549 = d_5d51_d9d0 > 10 ? 20.25 : 1.125;
        d_5d51_d551 = d_5d51_d9d0 + 9 - (d_5d51_d9d0 > 10 ? 11 : 0);
        if ((d_5d51_d9d0 + 1) * 4 <= strlen(d_2414_2558)) {
            strncpy(buf, &d_2414_2558[d_5d51_d9d0 * 4], 3);
            buf[3] = 0;
            d_5d51_d622 = atol(buf);
            sprintf(buf, " %s", f_1646_4919(d_5d51_d622, -1));
            f_1646_3686(d_5d51_d549, d_5d51_d551, d_5d51_d622 > 645 ? 6 : 1,
                        d_5d51_d9d0 & 1 ? 15 : 3, 0x4c, buf);
            if (d_3404_1abe[d_5d51_d622] < 255)
                sprintf(buf, " %.11s", (char far *)d_5d51_b476[d_3404_1abe[d_5d51_d622]]);
            else
                strcpy(buf, " None");
            f_1646_3686(d_5d51_d549 + 9.75, d_5d51_d551, 1, 4, 0x49, buf);
        } else {
            f_1646_3686(d_5d51_d549, d_5d51_d551, 1, d_5d51_d9d0 & 1 ? 15 : 3, 0x4c, "");
            f_1646_3686(d_5d51_d549 + 9.75, d_5d51_d551, 1, 4, 0x49, "");
        }
    }
    f_1646_50c5(2, 1.25, 22.5, 1, 4, 0x12d, "                 EXIT");
    do
        d_5d51_da0a = f_1646_5602(d_5d51_d9c6);
    while (d_5d51_da0a == 0);
}

void f_71c8_0d91(void)
{
    do {
        f_1646_2fa4(0, "Managerial", "*Exit|Manager History|Add Manager|Job News|");
        d_5d51_d620 = d_5d51_da0a;
        if (d_5d51_d620 == 1)
            f_a7f0_4bae();
        else if (d_5d51_d620 == 2)
            f_71c8_0de5();
        else if (d_5d51_d620 == 3)
            f_6b47_18da(2);
    } while (d_5d51_d620 != 0);
}

void f_71c8_0de5(void)
{
    int i;

    if (d_5d51_d958 == 4)
        f_1646_0bf2("Maximum four players");
    else {
        f_9e79_1103(d_5d51_d958);
        if (d_3404_4272[d_5d51_d9ca] == 650) {
            f_1646_0bf2("Please wait until|they appoint a manager");
            return;
        }
        d_5d51_d956++;
        d_5d51_d958++;
        d_3404_1abe[d_3404_4226[d_5d51_d9ca]] = 255;
        d_3404_1fd2[d_3404_4226[d_5d51_d9ca]] = 0;
        d_5d51_d954 = d_5d51_d958 + 645;
        d_3404_4226[d_5d51_d9ca] = d_5d51_d954;
        d_3404_443a[0][d_5d51_d9ca] = 8;
        d_3404_452a[d_5d51_d9ca] = 50;
        for (i = 1; i <= d_3404_0260[d_5d51_d9ca][0]; i++) {
            d_5d51_d952 = d_3404_0260[d_5d51_d9ca][i];
            d_3c0d_0000[23][d_5d51_d952] -= 1;
        }
        d_3404_0260[d_5d51_d9ca][0] = 0;
        d_3404_1abe[d_5d51_d954] = d_5d51_d9ca;
        d_3404_1d48[d_5d51_d954] = 35;
        d_3404_1fd2[d_5d51_d954] = 30;
        d_3404_3bc0[d_5d51_d954] = 0;
        d_3404_2770[d_5d51_d954] = 80;
        d_3404_225c[d_5d51_d954] = f_a13d_3d54(d_5d51_d954);
        f_9915_4dfd(d_5d51_d958 - 1);
        d_5d51_d5e5 = 0;
        f_9e79_06bc(d_5d51_d9ca);
        f_b0f1_2916(d_5d51_d9ca);
    }
}

void f_71c8_0f70(void)
{
    do {
        f_1646_4ba0("Match reports");
        f_1646_2fa4(0, "", "*Exit|Serie A|Serie B|Italian Cup|Anglo-Ital Cup|UEFA Cup|Cup Winners Cup|European Cup|Playoffs|");
        f_1646_3348(8);
        d_5d51_d5da = 0;
        if (d_5d51_da0a > 0) {
            for (d_5d51_d99a = d_5d51_da06 - 1; d_5d51_d99a >= 1; d_5d51_d99a--) {
                d_5d51_d5d9 = 0;
                switch (d_5d51_da0a) {
                case 1:
                    d_5d51_d5d9 = f_1646_258b(d_5d51_d99a);
                    break;
                case 2:
                    d_5d51_d5d9 = f_1646_2646(d_5d51_d99a);
                    break;
                case 3:
                    d_5d51_d5d9 = f_1646_2674(d_5d51_d99a);
                    break;
                case 4:
                    d_5d51_d5d9 = f_1646_26cf(d_5d51_d99a);
                    break;
                case 5:
                    d_5d51_d5d9 = f_1646_2726(d_5d51_d99a);
                    break;
                case 6:
                    d_5d51_d5d9 = f_1646_2785(d_5d51_d99a);
                    break;
                case 7:
                    d_5d51_d5d9 = f_1646_27d8(d_5d51_d99a);
                    break;
                case 8:
                    d_5d51_d5d9 = f_1646_2ba4(d_5d51_d99a);
                    break;
                }
                if (d_5d51_d5d9 && d_44d7_94c2[d_5d51_d99a] > 0) {
                    if (d_5d51_da0a > 2)
                        d_5d51_d95e = d_5d51_da0a - 2;
                    else
                        d_5d51_d95e = d_5d51_da0a + 7;
                    f_71c8_13ca(d_5d51_d99a, 3, d_5d51_d95e);
                    d_5d51_d5da = -1;
                    d_5d51_d99a = 1;
                }
            }
            if (d_5d51_d5da == 0)
                f_1646_0bf2("No matches played yet");
        }
    } while (d_5d51_da0a != 0);
}

void f_71c8_10b5(int comp, int week)
{
    FILE *fp;

    f_1d5e_1a24(2);
    fp = fopen(d_2414_0078, "rb");
    fseek(fp, (long)(d_44d7_93fa[week] + comp - 1) * 174, 0);
    fread(d_2414_8414, 1, 174, fp);
    fclose(fp);
    f_7c1d_3ca2(d_4f37_1390[comp][0][week] / 32,
                d_4f37_1390[comp][1][week] / 32, -1);
}

void f_71c8_1197(void)
{
    f_1646_4ba0("Game Options");
    f_1646_2fa4(5, "", "*Exit|Picture|Vidiprinter|");
    f_1646_3348(2);
    if (d_5d51_da0a == 1) {
        do {
            f_1646_4ba0("Background Picture");
            f_1646_2fa4(5, "", "*Exit|Picture 1|Picture 2|Picture 3|Picture 4|Change Colour|Change Brightness|");
            strcpy(d_2414_4a52, d_2414_4a3e);
            d_5d51_d5e1 = 0;
            do {
                f_1646_3348(6);
                switch (d_5d51_da0a) {
                case 0:
                    d_5d51_d5e1 = -1;
                    break;
                case 1:
                case 2:
                case 3:
                case 4:
                    sprintf(d_2414_4a3e, "picture%d.lbm", d_5d51_da0a);
                    if (strcmp(d_2414_4a3e, d_2414_4a52) != 0) {
                        d_2414_4a02[0] = 0;
                        f_1d5e_1a24(d_5d51_da0a == 1 ? 1 : 1);
                        d_2414_4a02[0] = 0;
                        f_9915_498d("Loading picture");
                        f_1d5e_05b0(-1);
                        d_2414_4a02[0] = 0;
                        f_1d5e_1a24(2);
                    }
                    d_5d51_d5e1 = -1;
                    break;
                case 5:
                    d_5d51_d95c += d_5d51_d95c == 5 ? -5 : 1;
                    f_1d5e_067d();
                    break;
                case 6:
                    d_5d51_d95a += d_5d51_d95a == 4 ? -4 : 1;
                    f_1d5e_067d();
                    break;
                }
            } while (!d_5d51_d5e1);
        } while (d_5d51_da0a != 0);
    } else if (d_5d51_da0a == 2) {
        f_1646_2fa4(0, "Vidi-printer", "Vidi On|Vidi Off|");
        if (d_5d51_da0a == 0)
            d_5d51_d407 = 1;
        else
            d_5d51_d407 = 0;
    }
}

void f_71c8_1349(void)
{
    do {
        f_1646_2fa4(0, "Save game", "*Exit|Save Game|Information|");
        if (d_5d51_da0a == 1) {
            d_5d51_d5e5 = d_5d51_d956 == 0;
            f_9915_3970();
            f_1646_2fa4(0, "Only End The Game By Using Quit", "*Continue|Quit|");
            if (d_5d51_da0a == 1) {
                f_1d5e_1216();
                exit(0);
            } else
                f_1d5e_1a24(2);
        } else if (d_5d51_da0a == 2)
            f_b0f1_7336();
    } while (d_5d51_da0a == 2);
}

/* the titles of the week's fixtures or results, competition by competition */
void f_71c8_13ca(int week, int mode, int x)
{
    if (week <= 12) {
        d_5d51_d950 = d_44d7_a5de[week];
        strcpy(d_2414_48f4, "Preseason");
        strcpy(d_2414_48a4, "Friendly Match");
        if (d_5d51_d950 > 1)
            strcat(d_2414_48a4, "es");
        f_71c8_2a25(week, 1, d_5d51_d950, x);
        f_71c8_1fd9(week, mode, 1, d_5d51_d950, x);
    }
    if (f_1646_258b(week) || f_1646_2646(week)) {
        unsigned char c;

        d_5d51_d950 = 0;
        d_5d51_d950 += f_1646_258b(week) ? 9 : 0;
        d_5d51_d950 += f_1646_2646(week) ? 10 : 0;
        if (f_1646_258b(week)) {
            strcpy(d_2414_48f4, "Championship");
            strcpy(d_2414_48a4, "Serie A");
            f_71c8_2a25(week, 1, 9, x);
            f_71c8_1fd9(week, mode, 1, 9, x);
        }
        if (f_1646_2646(week)) {
            c = f_1646_258b(week) ? 10 : 1;
            strcpy(d_2414_48f4, "League");
            strcpy(d_2414_48a4, "Serie B");
            f_71c8_2a25(week, c, c + 9, x);
            f_71c8_1fd9(week, mode, c, c + 9, x);
        }
    }
    if (f_1646_2674(week)) {
        strcpy(d_2414_48f4, "Italian Cup");
        strcpy(d_2414_4714, "");
        if (f_1646_2aa7(week))
            strcpy(d_2414_4714, ",1st Leg");
        else if (f_1646_2b06(week))
            strcpy(d_2414_4714, ",2nd Leg");
        switch (week) {
        case 14:
            d_5d51_d950 = 16;
            strcpy(d_2414_48a4, "1st Round");
            break;
        case 15: case 17:
            d_5d51_d950 = 16;
            sprintf(d_2414_48a4, "2nd Round%ss", d_2414_4714);
            break;
        case 27: case 33:
            d_5d51_d950 = 8;
            sprintf(d_2414_48a4, "3rd Round%ss", d_2414_4714);
            break;
        case 59: case 63:
            d_5d51_d950 = 4;
            sprintf(d_2414_48a4, "Quarter Final%ss", d_2414_4714);
            break;
        case 71: case 77:
            d_5d51_d950 = 2;
            sprintf(d_2414_48a4, "Semi Final%ss", d_2414_4714);
            break;
        case 98: case 100:
            d_5d51_d950 = 1;
            sprintf(d_2414_48a4, "Final%s", d_2414_4714);
            break;
        }
        f_71c8_2a25(week, 1, d_5d51_d950, x);
        d_5d51_d94e = 8;
        d_5d51_d94c = -7;
        d_5d51_d9b6 = 0;
        do {
            d_5d51_d94c += d_5d51_d94e;
            d_5d51_d94a = f_1d5e_136a(d_5d51_d950, d_5d51_d94e + d_5d51_d9b6 * d_5d51_d94e);
            d_5d51_d9b6++;
            f_71c8_1fd9(week, mode, d_5d51_d94c, d_5d51_d94a, x);
        } while (d_5d51_d94a != d_5d51_d950);
    }
    if (f_1646_2ba4(week) && d_5d51_d406 >= 1) {
        unsigned char c;

        d_5d51_d950 = d_5d51_d406;
        for (c = 1; c <= d_5d51_d950; c = c + 1) {
            if (d_5d51_d401[c] == 0) {
                strcpy(d_2414_48f4, "Championship Playoff");
                strcpy(d_2414_48a4, "Serie A");
            } else if (d_5d51_d401[c] == 1) {
                strcpy(d_2414_48f4, "Relegation Playoff");
                strcpy(d_2414_48a4, "Serie A");
            } else if (d_5d51_d401[c] == 2) {
                strcpy(d_2414_48f4, "Promotion Playoff");
                strcpy(d_2414_48a4, "Serie B");
            } else if (d_5d51_d401[c] == 3) {
                strcpy(d_2414_48f4, "Relegation Playoff");
                strcpy(d_2414_48a4, "Serie B");
            }
            f_71c8_2a25(week, c, c, x);
            f_71c8_1fd9(week, mode, c, c, x);
        }
    }
    if (f_1646_2726(week) || f_1646_2785(week) || f_1646_27d8(week) || f_1646_26cf(week)) {
        strcpy(d_2414_4854, "Cup Winners Cup");
        strcpy(d_2414_4804, "UEFA Cup");
        strcpy(d_2414_47b4, "European Cup");
        strcpy(d_2414_4764, "Anglo-Italian Cup");
        strcpy(d_2414_4714, "");
        if (f_1646_2aa7(week))
            strcpy(d_2414_4714, ",1st Leg");
        else if (f_1646_2b06(week))
            strcpy(d_2414_4714, ",2nd Leg");
        switch (week) {
        case 19: case 23: case 29:
            d_5d51_d950 = 6;
            strcpy(d_2414_48f4, d_2414_4764);
            strcpy(d_2414_48a4, "Italian Section");
            f_71c8_1fd9(week, mode, 1, 6, x);
            break;
        case 21: case 25:
            d_5d51_d950 = 64;
            strcpy(d_2414_48f4, d_2414_47b4);
            sprintf(d_2414_48a4, "1st Round%ss", d_2414_4714);
            f_71c8_2a25(week, 1, 16, x);
            f_71c8_1fd9(week, mode, 1, 8, x);
            f_71c8_1fd9(week, mode, 9, 16, x);
            strcpy(d_2414_48f4, d_2414_4854);
            f_71c8_2a25(week, 17, 32, x);
            f_71c8_1fd9(week, mode, 17, 24, x);
            f_71c8_1fd9(week, mode, 25, 32, x);
            strcpy(d_2414_48f4, d_2414_4804);
            f_71c8_2a25(week, 33, 64, x);
            f_71c8_1fd9(week, mode, 33, 40, x);
            f_71c8_1fd9(week, mode, 41, 48, x);
            f_71c8_1fd9(week, mode, 49, 56, x);
            f_71c8_1fd9(week, mode, 57, 64, x);
            break;
        case 31: case 35:
            d_5d51_d950 = 32;
            strcpy(d_2414_48f4, d_2414_47b4);
            sprintf(d_2414_48a4, "2nd Round%ss", d_2414_4714);
            f_71c8_2a25(week, 1, 8, x);
            f_71c8_1fd9(week, mode, 1, 8, x);
            strcpy(d_2414_48f4, d_2414_4854);
            f_71c8_2a25(week, 9, 16, x);
            f_71c8_1fd9(week, mode, 9, 16, x);
            strcpy(d_2414_48f4, d_2414_4804);
            f_71c8_2a25(week, 17, 32, x);
            f_71c8_1fd9(week, mode, 17, 24, x);
            f_71c8_1fd9(week, mode, 25, 32, x);
            break;
        case 37: case 47:
            d_5d51_d950 = 8;
            strcpy(d_2414_48f4, d_2414_4764);
            strcpy(d_2414_48a4, "International Stage");
            f_71c8_1fd9(week, mode, 1, 8, x);
            break;
        case 41: case 45:
            d_5d51_d950 = 20;
            strcpy(d_2414_48f4, d_2414_47b4);
            strcpy(d_2414_48a4, "Group Matches");
            f_71c8_1fd9(week, mode, 1, 4, x);
            strcpy(d_2414_48f4, d_2414_4804);
            sprintf(d_2414_48a4, "3rd Round%ss", d_2414_4714);
            f_71c8_2a25(week, 5, 12, x);
            f_71c8_1fd9(week, mode, 5, 12, x);
            strcpy(d_2414_48f4, d_2414_4764);
            strcpy(d_2414_48a4, "International Stage");
            f_71c8_1fd9(week, mode, 13, 20, x);
            break;
        case 61: case 65:
            d_5d51_d950 = 2;
            strcpy(d_2414_48f4, d_2414_4764);
            sprintf(d_2414_48a4, "Semi Final%ss", d_2414_4714);
            f_71c8_2a25(week, 1, 2, x);
            f_71c8_1fd9(week, mode, 1, 2, x);
            break;
        case 69: case 73:
            d_5d51_d950 = 12;
            strcpy(d_2414_48f4, d_2414_47b4);
            strcpy(d_2414_48a4, "Group Matches");
            f_71c8_1fd9(week, mode, 1, 4, x);
            strcpy(d_2414_48f4, d_2414_4854);
            sprintf(d_2414_48a4, "Quarter Final%ss", d_2414_4714);
            f_71c8_2a25(week, 5, 8, x);
            f_71c8_1fd9(week, mode, 5, 8, x);
            strcpy(d_2414_48f4, d_2414_4804);
            f_71c8_2a25(week, 9, 12, x);
            f_71c8_1fd9(week, mode, 9, 12, x);
            break;
        case 75:
            d_5d51_d950 = 1;
            strcpy(d_2414_48f4, d_2414_4764);
            strcpy(d_2414_48a4, "Final");
            f_71c8_1fd9(week, mode, 1, 1, x);
            break;
        case 79: case 83:
            d_5d51_d950 = 8;
            strcpy(d_2414_48f4, d_2414_47b4);
            strcpy(d_2414_48a4, "Group Matches");
            f_71c8_1fd9(week, mode, 1, 4, x);
            strcpy(d_2414_48f4, d_2414_4854);
            sprintf(d_2414_48a4, "Semi Final%ss", d_2414_4714);
            f_71c8_2a25(week, 5, 6, x);
            f_71c8_1fd9(week, mode, 5, 6, x);
            strcpy(d_2414_48f4, d_2414_4804);
            f_71c8_2a25(week, 7, 8, x);
            f_71c8_1fd9(week, mode, 7, 8, x);
            break;
        case 87: case 91:
            d_5d51_d950 = 1;
            strcpy(d_2414_48f4, d_2414_4804);
            sprintf(d_2414_48a4, "Final%s", d_2414_4714);
            f_71c8_1fd9(week, mode, 1, 1, x);
            break;
        case 89:
            d_5d51_d950 = 1;
            strcpy(d_2414_48f4, d_2414_4854);
            strcpy(d_2414_48a4, "Final");
            f_71c8_1fd9(week, mode, 1, 1, x);
            break;
        case 93:
            d_5d51_d950 = 1;
            strcpy(d_2414_48f4, d_2414_47b4);
            strcpy(d_2414_48a4, "Final");
            f_71c8_1fd9(week, mode, 1, 1, x);
            break;
        }
    }
}

/* the title and the list of one competition's fixtures or results, or (mode 3 and up)
 * the week's matches of the competition without drawing them */
void f_71c8_1fd9(int week, int mode, int from, int to, int kind)
{
    char buf[320];

    f_1646_6097();
    if (f_71c8_26a9(kind, week, from) == 0)
        return;
    if (mode < 3) {
        if (week <= 12) {
            d_5d51_d946 = 1;
            d_5d51_d944 = 3;
        } else if (f_1646_2674(week)) {
            d_5d51_d946 = 1;
            d_5d51_d944 = 13;
        } else if (f_1646_2833(week, from) || f_1646_28e4(week, from) || f_1646_297b(week, from)) {
            d_5d51_d946 = 4;
            d_5d51_d944 = 8;
        } else if (f_1646_2a0c(week, from)) {
            d_5d51_d946 = 1;
            d_5d51_d944 = week >= 37 ? 4 : 15;
        } else if (f_1646_2ba4(week)) {
            d_5d51_d946 = 1;
            d_5d51_d944 = 12;
        } else if (f_1646_258b(week) && from == 1 || f_1646_2646(week)) {
            d_5d51_d946 = 1;
            d_5d51_d944 = 4;
        }
        strcpy(d_2414_46c4, d_2414_48f4);
        if (mode == 2)
            strcat(d_2414_46c4, " draw");
        else {
            strcpy(buf, d_2414_46c4);
            if (mode != 1) {
                if (week > d_5d51_da06)
                    sprintf(d_2414_46c4, "Next %s", buf);
                else
                    sprintf(d_2414_46c4, "%s fixture%s", buf, to - from + 1 > 1 ? "s" : "");
            } else
                sprintf(d_2414_46c4, "%s result%s", buf, to - from + 1 > 1 ? "s" : "");
        }
        f_71c8_2c86(to - from + 1, week, from, mode);
        d_5d51_d9e2 = 8;
    }
    for (d_5d51_d9d0 = from - 1; to - 1 >= d_5d51_d9d0; d_5d51_d9d0++) {
        if (mode < 3) {
            d_5d51_d942 = d_4f37_1390[d_5d51_d9d0][0][week] / 32;
            d_5d51_d940 = d_4f37_1390[d_5d51_d9d0][1][week] / 32;
            f_71c8_281d(d_5d51_d942, week, d_5d51_d9d0);
            f_1d5e_0b11(0);
            f_1646_357e(40, 1 - (d_5d51_d9e2 + d_5d51_d53d) * 8, d_5d51_d93e, d_2414_4fd4);
            f_1646_357e(124, 1 - (d_5d51_d9e2 + d_5d51_d53d) * 8, 6, d_2414_4674);
            if (mode == 1) {
                sprintf(d_2414_4b56, "%d-%d", d_4f37_1390[d_5d51_d9d0][0][week] % 32,
                        d_4f37_1390[d_5d51_d9d0][1][week] % 32);
                if (d_2414_ecec[d_5d51_d9d0] == 1)
                    f_1646_357e(155, 1 - (d_5d51_d9e2 + d_5d51_d53d) * 8, 1, "P");
                else if (d_2414_ecec[d_5d51_d9d0] == 2)
                    f_1646_357e(184, 1 - (d_5d51_d9e2 + d_5d51_d53d) * 8, 1, "P");
            } else
                strcpy(d_2414_4b56, " v");
            f_1646_38d0(20, -(d_5d51_d9e2 + d_5d51_d53d), 1, d_2414_4b56);
            f_71c8_281d(d_5d51_d940, week, d_5d51_d9d0);
            f_1646_357e(200, 1 - (d_5d51_d9e2 + d_5d51_d53d) * 8, d_5d51_d93e, d_2414_4fd4);
            f_1646_357e(278, 1 - (d_5d51_d9e2 + d_5d51_d53d) * 8, 6, d_2414_4674);
            if (strstr(d_2414_48a4, "2nd Leg")) {
                d_5d51_d93c = f_71c8_2795(week, d_5d51_d9d0 + 1);
                d_5d51_d93a = (unsigned char)d_44d7_8e60[d_5d51_d93c * 128 + d_5d51_d9d0 * 2 + 1];
                d_5d51_d938 = (unsigned char)d_44d7_8e60[d_5d51_d93c * 128 + d_5d51_d9d0 * 2];
                if (mode == 1) {
                    d_5d51_d93a += d_4f37_1390[d_5d51_d9d0][0][week] % 32;
                    d_5d51_d938 += d_4f37_1390[d_5d51_d9d0][1][week] % 32;
                }
                sprintf(buf, "%d", d_5d51_d93a);
                f_1646_3c89(2, d_5d51_d9e2 - 0.75 + d_5d51_d53d, 1, buf);
                sprintf(buf, "%d", d_5d51_d938);
                f_1646_3c89(39, d_5d51_d9e2 - 0.75 + d_5d51_d53d, 1, buf);
            } else if (strstr(d_2414_48a4, "Group")) {
                sprintf(buf, "%c", d_5d51_d9d0 + 1 > 2 ? 'B' : 'A');
                f_1646_3c89(2, d_5d51_d9e2 - 0.75 + d_5d51_d53d, 1, buf);
            } else if (strstr(d_2414_48a4, "Section") || strstr(d_2414_48a4, "Stage")) {
                sprintf(buf, "%c", f_1646_2bb5(week, d_5d51_d9d0 + 1) + 'A');
                f_1646_3c89(2, d_5d51_d9e2 - 0.75 + d_5d51_d53d, 1, buf);
            }
            d_5d51_d9e2 += 2;
        } else
            f_71c8_10b5(d_5d51_d9d0, week);
    }
    f_1646_60a7();
    if (mode < 3)
        f_1646_58a8(0);
}

char f_71c8_26a9(int kind, int week, int n)
{
    d_5d51_d5d8 = 0;
    if (kind == -1)
        d_5d51_d5d8 = -1;
    else if (kind == 1 && f_1646_2674(week))
        d_5d51_d5d8 = -1;
    else if (kind == 2 && f_1646_2a0c(week, n))
        d_5d51_d5d8 = -1;
    else if (kind == 3 && f_1646_2833(week, n))
        d_5d51_d5d8 = -1;
    else if (kind == 4 && f_1646_28e4(week, n))
        d_5d51_d5d8 = -1;
    else if (kind == 5 && f_1646_297b(week, n))
        d_5d51_d5d8 = -1;
    else if (kind == 6 && f_1646_2ba4(week))
        d_5d51_d5d8 = -1;
    else if (kind == 7 && week <= 12)
        d_5d51_d5d8 = -1;
    else if (kind == 8 && f_1646_258b(week) && n == 1)
        d_5d51_d5d8 = -1;
    else if (kind == 9 && f_1646_2646(week)) {
        if (f_1646_258b(week))
            d_5d51_d5d8 = n == 10 ? -1 : 0;
        else
            d_5d51_d5d8 = n == 1 ? -1 : 0;
    }
    return d_5d51_d5d8;
}

int f_71c8_2795(int week, int n)
{
    if (f_1646_2674(week))
        d_5d51_d93c = 2;
    if (f_1646_2a0c(week, n))
        d_5d51_d93c = 3;
    else if (f_1646_2833(week, n))
        d_5d51_d93c = 4;
    else if (f_1646_28e4(week, n))
        d_5d51_d93c = 5;
    else if (f_1646_297b(week, n))
        d_5d51_d93c = 6;
    else if (f_1646_2ba4(week))
        d_5d51_d93c = 7;
    return d_5d51_d93c;
}

void f_71c8_281d(int club, int week, int n)
{
    d_5d51_d5d7 = 0;
    if (club <= 37) {
        strcpy(d_2414_4fd4, d_5d51_b476[club]);
        if (f_1646_2674(week) || (f_1646_2a0c(week, n + 1) && d_5d51_da06 <= 29) || f_1646_2ba4(week)
            || week <= 12) {
            sprintf(d_2414_4674, "%s", f_1646_4b1e(f_1646_717d(club) + 1, 1));
            d_5d51_d5d7 = f_1646_2cc9(club) ? -1 : 0;
        } else if (f_1646_2833(week, n + 1) || f_1646_28e4(week, n + 1) || f_1646_297b(week, n + 1)
                   || f_1646_2a0c(week, n + 1)) {
            strcpy(d_2414_4674, "ITA");
            if (f_1646_2a0c(week, n + 1))
                d_5d51_d5d7 = f_1646_2cc9(club) ? -1 : 0;
            else
                d_5d51_d5d7 = -1;
        } else {
            strcpy(d_2414_4674, "");
            d_5d51_d5d7 = f_1646_2cc9(club) ? -1 : 0;
        }
    } else if (club <= 437) {
        strcpy(d_2414_4fd4, d_5d51_b4ca[club]);
        sprintf(d_2414_4674, "%.3s", d_4f37_0000[d_4f37_1176[club]]);
    } else {
        strcpy(d_2414_4fd4, d_5d51_b4ca[club]);
        strcpy(d_2414_4674, "NLGE");
    }
    if (!d_5d51_d5d7)
        d_5d51_d93e = d_5d51_d946;
    else
        d_5d51_d93e = d_5d51_d946 == 1 ? 6 : 12;
}

void f_71c8_2a25(int a, int b, int c, int d)
{
    if (f_71c8_26a9(d, a, b) == 0)
        return;
    if (strstr(d_2414_48a4, "1st Leg"))
        d_5d51_d936 = a == 15 || a == 98 ? a + 2 : a == 27 || a == 71 ? a + 6 : a + 4;
    for (d_5d51_d9fe = b - 1; d_5d51_d9fe <= c - 2; d_5d51_d9fe++) {
        for (d_5d51_d9b8 = d_5d51_d9fe + 1; d_5d51_d9b8 <= c - 1; d_5d51_d9b8++) {
            strcpy(d_2414_4624, f_1646_3537(d_4f37_1390[d_5d51_d9fe][0][a] / 32));
            strcpy(d_2414_45d4, f_1646_3537(d_4f37_1390[d_5d51_d9b8][0][a] / 32));
            if (strcmp(d_2414_4624, d_2414_45d4) > 0) {
                for (d_5d51_d934 = 0; d_5d51_d934 <= 1; d_5d51_d934++) {
                    f_1d5e_13a4(&d_4f37_1390[d_5d51_d9fe][d_5d51_d934][a],
                                &d_4f37_1390[d_5d51_d9b8][d_5d51_d934][a], 2);
                    if (strstr(d_2414_48a4, "1st Leg")) {
                        f_1d5e_13a4(&d_4f37_1390[d_5d51_d9fe][d_5d51_d934][d_5d51_d936],
                                    &d_4f37_1390[d_5d51_d9b8][d_5d51_d934][d_5d51_d936], 2);
                    } else if (strstr(d_2414_48a4, "2nd Leg")) {
                        d_5d51_d93c = f_71c8_2795(a, b);
                        f_1d5e_13a4(&d_44d7_8e60[d_5d51_d93c * 128 + d_5d51_d9fe * 2 + d_5d51_d934],
                                    &d_44d7_8e60[d_5d51_d93c * 128 + d_5d51_d9b8 * 2 + d_5d51_d934], 1);
                    }
                }
            }
        }
    }
}

void f_71c8_2c86(int n, int b, int c, int d)
{
    char buf[320];
    register int x;
    register int y;
    unsigned char i;

    if (n > 8) {
        f_1646_4ba0("");
        f_1d5e_08cc(16);
        sprintf(buf, " %s %s ", d_2414_48a4, d == 1 ? "Results" : "Fixtures");
        f_1d5e_08e2(28, 9, (strlen(buf) + 3.25) * 8 + 3, 22);
        f_1646_3e54(3.25, 1.25, 0, 1, 0, buf);
        d_5d51_d53d = -3.125;
    } else {
        f_1646_4ba0(d_2414_46c4);
        sprintf(buf, " %s ", d_2414_48a4);
        f_1d5e_08cc(16);
        f_1d5e_08e2(28, 31, (strlen(buf) + 3.25) * 8 + 3, 44);
        f_1646_3e54(3.25, 4.0, 0, 1, 0, buf);
        d_5d51_d53d = 0;
    }
    x = 24;
    for (i = 0; i <= n - 1; i = i + 1) {
        y = i * 16 + 53 + d_5d51_d53d * 8;
        f_1646_015c(x, y, x + 117, y + 15);
        f_1646_015c(x + 118, y, x + 159, y + 15);
        f_1646_015c(x + 160, y, x + 272, y + 15);
    }
    if (strstr(d_2414_48a4, "2nd Leg")) {
        f_1646_3686(0.875, d_5d51_d53d + 5.25, 1, 2, 0, "Ag");
        f_1646_3686(37.875, d_5d51_d53d + 5.25, 1, 2, 0, "Ag");
    } else if (strstr(d_2414_48a4, "Group") || strstr(d_2414_48a4, "Section")
               || strstr(d_2414_48a4, "Stage")) {
        f_1646_3686(0.875, d_5d51_d53d + 5.25, 1, 2, 0, "Gr");
    }
}

void f_71c8_2fa9(void)
{
    char buf[320];

    switch (d_5d51_da06) {
    case 1: case 2: strcpy(d_2414_4584, "in six weeks"); break;
    case 3: case 4: strcpy(d_2414_4584, "in five weeks"); break;
    case 5: case 6: strcpy(d_2414_4584, "in a month"); break;
    case 7: case 8: strcpy(d_2414_4584, "in three weeks"); break;
    case 9: case 10: strcpy(d_2414_4584, "in two weeks"); break;
    case 11: case 12: strcpy(d_2414_4584, "next week"); break;
    }
    sprintf(buf, "Season starts %s", d_2414_4584);
    f_1646_0bf2(buf);
}

/* the squad screen */
void f_71c8_3038(int team)
{
    char reserves;
    int i;

    reserves = 0;
    d_5d51_d930 = 0;
    for (;;) {
        for (i = 0; i < 30; i++)
            d_2414_ed6c[i] = -1;
        if (d_5d51_d930 > 0)
            f_71c8_4731(d_5d51_d930 - 1, team);
        f_1646_6097();
        f_1646_0003(1.5, team, reserves ? "Reserves" : "Squad");
        f_1646_60a7();
        for (d_5d51_d9d0 = 1; d_5d51_d9d0 <= 17; d_5d51_d9d0++) {
            switch (d_5d51_d9d0) {
            case 1: case 2: case 3: case 4: case 5: case 6: case 7:
            case 8: case 9: case 10: case 11: case 12: case 13: case 14:
            case 15: case 16:
                d_5d51_d9bc = 1;
                strcpy(d_2414_4534, f_1646_2f4b(d_5d51_d9d0, 1));
                break;
            case 17:
                strcpy(d_2414_4534, "SWP");
                d_5d51_d9bc = 20;
                break;
            }
            f_1646_50c5(0, (d_5d51_d9d0 - 1) * 2.125 + 1.375 + (d_5d51_d9d0 > 11 ? 0.125 : 0)
                        + (d_5d51_d9d0 > 16 ? 0.125 : 0), 19.75,
                        d_5d51_d9bc / 16, d_5d51_d9bc % 16, d_5d51_d9d0 == 17 ? 0x16 : 0xf, d_2414_4534);
        }
        f_1646_50c5(0, 1.375, 20.75, 1, 12, 0x24, " GLS");
        f_1646_50c5(0, 6.125, 20.75, 1, 12, 0x24, " DSP");
        f_1646_50c5(0, 10.875, 20.75, 1, 12, 0x24, " AVR");
        f_1646_50c5(0, 15.625, 20.75, 1, 12, 0x24, " MOM");
        f_1646_50c5(0, 25.125, 20.75, 1, 3, 0x24, " PRV");
        f_1646_50c5(0, 29.875, 20.75, 1, 3, 0x23, " TCT");
        f_1646_50c5(0, 34.5, 20.75, 1, 3, 0x23, " OPP");
        f_1646_50c5(2, 1.5, 21.875, 1, 4, 0x90, "       DONE");
        f_1646_50c5(2, 1.5, 4.0, 1, 14, 0x26, "Trns");
        f_1646_50c5(2, 6.875, 4.0, 1, 14, 0x26, "Staf");
        f_1646_50c5(2, 12.25, 4.0, 1, 14, 0x26, "Leag");
        f_1646_50c5(2, 17.625, 4.0, 1, 14, 0x26, "Fixt");
        f_1646_50c5(2, 23.0, 4.0, 1, 14, 0x26, "Accs");
        f_1646_50c5(2, 28.375, 4.0, 1, 14, 0x26, "Info");
        f_1646_50c5(2, 33.75, 4.0, 1, 8, 0x27, reserves ? "Senr" : "Rsrv");
        f_1646_50c5(2, 20.125, 21.875, 1, 4, 0x2e, d_5d51_d930 == 1 ? " SQDL" : " DEFS");
        f_1646_50c5(2, 26.5, 21.875, 1, 4, 0x2e, d_5d51_d930 == 2 ? " SQDL" : " MIDS");
        f_1646_50c5(2, 32.875, 21.875, 1, 4, 0x2e, d_5d51_d930 == 3 ? " SQDL" : " ATTS");
        f_1646_50c5(0, 20.375, 20.75, 1, 3, 0x24, " PEN");
        f_1646_6097();
        if (d_5d51_d930 == 0)
            f_9e79_16c0(team, reserves);
        else
            f_71c8_40cc(d_5d51_d930 - 1, team);
        f_1646_60a7();
        d_5d51_d924 = 0;
        d_5d51_d5d5 = 0;
        for (;;) {
            if (d_5d51_d924 == 0)
                f_1646_5869(17);
            else
                f_1646_587e();
            d_5d51_da0a = f_1646_5602(0);
            if (d_5d51_da0a == 0) {
                f_76ea_00ce(d_5d51_d924);
                if (d_5d51_d5d5) {
                    d_5d51_d5d5 = 0;
                    f_1646_545c(17, 0);
                }
                continue;
            } else if (d_5d51_da0a >= 1 && d_5d51_da0a <= 16) {
                d_5d51_d92e = d_5d51_d924;
                if ((d_5d51_d924 = d_5d51_da0a) == d_5d51_d92e)
                    continue;
                if (d_5d51_d92e > 0)
                    f_1646_545c(d_5d51_d92e, 0);
                if (d_5d51_d5d5 == 0)
                    continue;
                for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= d_5d51_d92c - 1; d_5d51_d9d0++) {
                    if (d_3404_0e34[team][d_5d51_d924 - 1] == d_2414_ed6c[d_5d51_d9d0]) {
                        strcpy(d_2414_4534, f_1646_2f4b(d_5d51_d92e, 1));
                        if (d_5d51_d930 == 0) {
                            f_9e79_219f(d_5d51_d9d0);
                            f_1646_3686(d_5d51_d539, d_5d51_d551, 2, 1, 0, d_2414_4534);
                        } else
                            f_1646_3686(1.375, d_5d51_d9d0 + 7.5, 2, 1, 0, d_2414_4534);
                    } else if (d_3404_0e34[team][d_5d51_d92e - 1] == d_2414_ed6c[d_5d51_d9d0]) {
                        strcpy(d_2414_4534, f_1646_2f4b(d_5d51_d924, 1));
                        if (d_5d51_d930 == 0) {
                            f_9e79_219f(d_5d51_d9d0);
                            f_1646_3686(d_5d51_d539, d_5d51_d551, 2, 1, 0, d_2414_4534);
                        } else
                            f_1646_3686(1.375, d_5d51_d9d0 + 7.5, 2, 1, 0, d_2414_4534);
                    }
                }
                f_1d5e_13a4(&d_3404_0e34[team][d_5d51_d924 - 1], &d_3404_0e34[team][d_5d51_d92e - 1], 2);
                f_76ea_00ce(d_5d51_d924);
                f_1646_545c(17, 0);
                d_5d51_d5d5 = 0;
                continue;
            } else if (d_5d51_da0a == 17) {
                d_5d51_d5d5 = !d_5d51_d5d5;
                if (d_5d51_d5d5 == 0)
                    f_1646_545c(17, 0);
                continue;
            } else if (d_5d51_da0a >= 18 && d_5d51_da0a <= 21) {
                f_6b47_0eb3(d_5d51_da0a - 18, team);
                break;
            } else if (d_5d51_da0a == 22) {
                if (d_3404_40aa[0][team] == 0) {
                    f_76ea_0000("No matches played");
                    f_1646_545c(22, 0);
                    0;      /* code-free: the original's tail merging */
                } else {
                    FILE *fp;

                    f_1d5e_1a24(2);
                    fp = fopen(d_2414_0078, "rb");
                    fseek(fp, (long)(d_3404_40aa[0][team] - 1) * 174, 0);
                    fread(d_2414_8414, 1, 174, fp);
                    fclose(fp);
                    f_7c1d_3ca2(d_4f37_1392[d_3404_40aa[1][team]][0][d_3404_40aa[2][team]] / 32,
                                d_4f37_1392[d_3404_40aa[1][team]][1][d_3404_40aa[2][team]] / 32, -1);
                    break;
                }
            } else if (d_5d51_da0a == 23) {
                f_b8e8_0000(team);
                break;
            } else if (d_5d51_da0a == 24) {
                if (d_5d51_d5d4) {
                    if (d_5d51_d928 < 38)
                        f_6b47_55c8(d_5d51_d928);
                    else
                        f_b8e8_0000(team == d_5d51_d942 ? d_5d51_d940 : d_5d51_d942);
                    break;
                }
                f_76ea_0000("No details yet");
                continue;
            } else if (d_5d51_da0a == 25) {
                if (d_5d51_d5d4) {
                    unsigned char first, subs;
                    char buf[100];

                    first = 0;
                    subs = 0;
                    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 15; d_5d51_d9d0++)
                        if (f_1646_5de5(d_3404_0e34[team][d_5d51_d9d0]) || f_1646_5dff(d_3404_0e34[team][d_5d51_d9d0])) {
                            if (d_5d51_d9d0 < 15)
                                first++;
                            else
                                subs++;
                        }
                    if (first < 15 || f_1646_60fb(team, d_5d51_da06, d_5d51_d9e6 + 1) && subs == 0) {
                        if (first + subs == 0)
                            f_76ea_0000("Nobody picked");
                        else
                            f_76ea_0000("Too few picked");
                        0;  /* code-free: the original's tail merging */
                    } else if (f_b0f1_594e(team, d_5d51_da06, d_5d51_d9e6 + 1) != 0) {
                        sprintf(buf, "%d foreigners", d_5d51_d5ed);
                        f_76ea_0000(buf);
                        goto next;
                    } else
                        goto pick;
                } else
                    goto pick;
            } else if (d_5d51_da0a == 26) {
                f_6b47_5b29(team);
                break;
            } else if (d_5d51_da0a == 27) {
                f_9182_0a23(team);
                break;
            } else if (d_5d51_da0a == 28) {
                f_6b47_5fe4(team);
                break;
            } else if (d_5d51_da0a == 29) {
                f_6b47_4ddc(team);
                break;
            } else if (d_5d51_da0a == 30) {
                f_71c8_0027(team);
                break;
            } else if (d_5d51_da0a == 31) {
                f_a13d_09a0(team);
                break;
            } else if (d_5d51_da0a == 32) {
                reserves = !reserves;
                d_5d51_d930 = 0;
                break;
            } else
        pick:
            if (d_5d51_da0a == 33 || d_5d51_da0a == 34 || d_5d51_da0a == 35) {
                strcpy(d_2414_44e4, f_1d5e_100c(d_2414_0e60[d_5d51_da0a]));
                if (strcmp(d_2414_44e4, "SQDL") == 0)
                    d_5d51_d930 = 0;
                else if (strcmp(d_2414_44e4, "DEFS") == 0)
                    d_5d51_d930 = 1;
                else if (strcmp(d_2414_44e4, "MIDS") == 0)
                    d_5d51_d930 = 2;
                else
                    d_5d51_d930 = 3;
                reserves = 0;
                break;
            } else if (d_5d51_da0a == 36) {
                f_b0f1_2bd1(team);
                break;
            } else if (d_5d51_da0a >= 37) {
                char out;

                d_5d51_d9a0 = d_5d51_da0a - 37;
                d_5d51_d9f0 = d_2414_ed6c[d_5d51_d9a0];
                if (d_5d51_d924 == 0) {
                    if (!f_1646_5dff(d_5d51_d9f0)) {
                        do {
                            f_a13d_4a1b(d_5d51_d9f0, -1, -1);
                            f_8539_4fbd(d_5d51_d9f0, d_5d51_d9ba);
                        } while (!d_5d51_d5df);
                    } else
                        f_a7f0_3545(team, f_1646_5e2d(d_5d51_d9f0));
                    break;
                }
                if (!f_1646_5dff(d_5d51_d9f0))
                    out = d_44d7_0000[20][d_5d51_d9f0] > 0;
                else
                    out = d_2414_c6dc[team][f_1646_5e2d(d_5d51_d9f0)] > 0;
                if (out)
                    f_76ea_0000("Not available");
                else {
                    if (d_3404_0e34[team][d_5d51_d924 - 1] != d_5d51_d9f0) {
                        if (f_1646_5de5(d_3404_0e34[team][d_5d51_d924 - 1]) || f_1646_5dff(d_3404_0e34[team][d_5d51_d924 - 1])) {
                            for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= d_5d51_d92c - 1; d_5d51_d9d0++) {
                                if (d_3404_0e34[team][d_5d51_d924 - 1] == d_2414_ed6c[d_5d51_d9d0]) {
                                    if (d_5d51_d930 == 0) {
                                        f_9e79_219f(d_5d51_d9d0);
                                        f_1646_3686(d_5d51_d539, d_5d51_d551, 1, 2, 0, "  ");
                                    } else
                                        f_1646_3686(1.375, d_5d51_d9d0 + 7.5, 1, 2, 0, "  ");
                                }
                            }
                            if (!f_1646_5dff(d_3404_0e34[team][d_5d51_d924 - 1]))
                                d_2414_af3c[d_3404_0e34[team][d_5d51_d924 - 1]].w.f7 = 0;
                            else
                                d_2414_c6ec[team][f_1646_5e2d(d_3404_0e34[team][d_5d51_d924 - 1])] = 0;
                        }
                        if (!f_1646_5dff(d_5d51_d9f0)) {
                            if (d_2414_af3c[d_5d51_d9f0].w.f7)
                                d_3404_0e34[team][f_1646_1f63(d_5d51_d9f0)] = 1499;
                        } else if (d_2414_c6ec[team][f_1646_5e2d(d_5d51_d9f0)])
                            d_3404_0e34[team][f_1646_1f63(d_5d51_d9f0)] = 1499;
                        d_3404_0e34[team][d_5d51_d924 - 1] = d_5d51_d9f0;
                        if (!f_1646_5dff(d_5d51_d9f0))
                            d_2414_af3c[d_5d51_d9f0].w.f7 = 1;
                        else
                            d_2414_c6ec[team][f_1646_5e2d(d_5d51_d9f0)] = -1;
                        strcpy(d_2414_4534, f_1646_2f4b(d_5d51_d924, 1));
                        if (d_5d51_d930 == 0) {
                            f_9e79_219f(d_5d51_d9a0);
                            f_1646_3686(d_5d51_d539, d_5d51_d551, 2, 1, 0, d_2414_4534);
                        } else
                            f_1646_3686(1.375, d_5d51_d9a0 + 7.5, 2, 1, 0, d_2414_4534);
                    }
                    f_1646_545c(d_5d51_da0a, 0);
                }
            } else
                return;
        next:
            f_76ea_00ce(d_5d51_d924);
        }
    }
}

/* the squad screen's attribute columns: x position and heading */
static struct col d_5d51_151c[] = {
    {14.875, "PS"}, {17.0, "TK"}, {19.125, "PA"}, {21.25, "HD"}, {23.375, "FL"},
    {25.5, "CR"}, {27.625, "AG"}, {29.75, "IF"}, {31.875, "SDE"}, {34.375, "FIT"},
    {36.875, "AVR"}
};

void f_71c8_40cc(int mode, int team)
{
    char buf[320];

    if (mode == 0)
        strcpy(buf, " DEFENDERS");
    else if (mode == 1)
        strcpy(buf, " MIDFIELDERS");
    else
        strcpy(buf, " ATTACKERS");
    f_1646_3686(1.375, 6.5, 0, 1, 0x68, buf);
    for (d_5d51_d922 = 0; d_5d51_d922 <= 10; d_5d51_d922++)
        f_1646_3686(d_5d51_151c[d_5d51_d922].x - 0.125, 6.5, 0, 6, d_5d51_d922 > 7 ? 0x12 : 0xf,
                    d_5d51_151c[d_5d51_d922].title);
    for (d_5d51_d9d4 = 1; d_5d51_d9d4 <= 12; d_5d51_d9d4++) {
        if (d_5d51_d9d4 & 1) {
            d_5d51_d920 = 14;
            d_5d51_d91e = 4;
        } else {
            d_5d51_d920 = 8;
            d_5d51_d91e = 12;
        }
        d_5d51_d9f0 = d_2414_ed6a[d_5d51_d9d4];
        strcpy(d_2414_4494, "");
        d_5d51_d9c8 = 0x12;
        if (d_5d51_d9f0 > -1) {
            if (d_44d7_0000[20][d_5d51_d9f0] > 0) {
                if (d_44d7_0000[19][d_5d51_d9f0] == 50)
                    strcpy(d_2414_4494, "ct");
                else if (d_44d7_0000[19][d_5d51_d9f0] == 27)
                    strcpy(d_2414_4494, "su");
                else
                    strcpy(d_2414_4494, "ij");
            } else if (d_2414_af3c[d_5d51_d9f0].w.f7) {
                strcpy(d_2414_4494, f_1646_2f4b(f_1646_1f63(d_5d51_d9f0) + 1, 1));
                d_5d51_d9c8 = 0x21;
            }
            f_1646_3686(1.375, d_5d51_d9d4 + 6.5, d_5d51_d9c8 / 16, d_5d51_d9c8 % 16, 12, d_2414_4494);
            sprintf(buf, " %.14s", f_1646_4849(d_5d51_d9f0));
            f_1646_50c5(0, 3.125, d_5d51_d9d4 + 6.5, 1, d_5d51_d920, 0x5a, buf);
        } else {
            f_1646_3686(1.375, d_5d51_d9d4 + 6.5, d_5d51_d9c8 / 16, d_5d51_d9c8 % 16, 12, "");
            f_1646_3686(3.125, d_5d51_d9d4 + 6.5, 1, d_5d51_d920, 0x5a, "");
        }
        for (d_5d51_d922 = 0; d_5d51_d922 <= 10; d_5d51_d922++) {
            if (d_5d51_d9f0 > -1) {
                switch (d_5d51_d922) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                    sprintf(d_2414_4444, "%02d", d_44d7_0000[d_5d51_d922 + 1][d_5d51_d9f0]);
                    d_5d51_d9bc = 1;
                    break;
                case 6:
                    sprintf(d_2414_4444, "%02d", d_44d7_0000[10][d_5d51_d9f0]);
                    d_5d51_d9bc = 6;
                    break;
                case 7:
                    sprintf(d_2414_4444, "%02d", d_44d7_0000[12][d_5d51_d9f0]);
                    d_5d51_d9bc = 6;
                    break;
                case 8:
                    strcpy(d_2414_4444, "");
                    if (d_2414_af3c[d_5d51_d9f0].w.f4)
                        strcat(d_2414_4444, "R");
                    if (d_2414_af3c[d_5d51_d9f0].w.f5)
                        strcat(d_2414_4444, "L");
                    if (d_2414_af3c[d_5d51_d9f0].w.f6)
                        strcat(d_2414_4444, "C");
                    if (strlen(d_2414_4444) == 1) {
                        d_2414_4444[1] = d_2414_4444[0];
                        d_2414_4444[0] = d_2414_4444[2] = ' ';
                        d_2414_4444[3] = 0;
                    } else if (strlen(d_2414_4444) == 2)
                        strcat(d_2414_4444, " ");
                    d_5d51_d9bc = 6;
                    break;
                case 9:
                    if (d_44d7_0000[20][d_5d51_d9f0] == 0)
                        sprintf(d_2414_4444, "%03d", d_44d7_0000[21][d_5d51_d9f0]);
                    else
                        strcpy(d_2414_4444, "");
                    0;
                    d_5d51_d9bc = 6;
                    break;
                case 10:
                    if (d_3c0d_0000[12][d_5d51_d9f0] > 0) {
                        float avg;

                        d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
                        avg = (float)d_5d51_da4c[2][d_5d51_d9f0] / d_3c0d_0000[12][d_5d51_d9f0];
                        sprintf(d_2414_4444, "%3.1f", avg);
                    } else
                        strcpy(d_2414_4444, "");
                    d_5d51_d9bc = 9;
                    break;
                }
            } else
                strcpy(d_2414_4444, "");
            f_1646_3686(d_5d51_151c[d_5d51_d922].x, d_5d51_d9d4 + 6.5, d_5d51_d9bc, d_5d51_d91e,
                        d_5d51_d922 > 7 ? 0x12 : 0xf, d_2414_4444);
        }
    }
}

void f_71c8_4731(int a, int team)
{
    char sel[30];

    memset(sel, 0, 30);
    d_5d51_d5d1 = 0;
    d_5d51_d92c = 0;
    for (d_5d51_d9d4 = 1; d_5d51_d9d4 <= 12; d_5d51_d9d4++) {
        if (d_5d51_d5d1 == 0) {
            d_5d51_d9f0 = -1;
            for (d_5d51_d9b4 = 0; d_5d51_d9b4 <= d_3404_4552[team] - 1; d_5d51_d9b4++) {
                char ok;

                d_5d51_d91c = d_44d7_9624[team][d_5d51_d9b4];
                if (a == 0)
                    ok = d_2414_af3c[d_5d51_d91c].w.f1;
                if (a == 1)
                    ok = d_2414_af3c[d_5d51_d91c].w.f2;
                if (a == 2)
                    ok = d_2414_af3c[d_5d51_d91c].w.f3;
                if (ok && sel[d_5d51_d9b4] == 0) {
                    if (d_3c0d_0000[5][d_5d51_d91c] + d_3c0d_0000[0][d_5d51_d91c] > 0) {
                        d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
                        d_5d51_d535 = (d_5d51_da4c[1][d_5d51_d91c] + d_5d51_da4c[0][d_5d51_d91c])
                                      / ((float)d_3c0d_0000[5][d_5d51_d91c] + d_3c0d_0000[0][d_5d51_d91c]);
                    } else
                        d_5d51_d535 = 0;
                    if (d_5d51_d535 > d_5d51_d531 || d_5d51_d9f0 == -1) {
                        d_5d51_d531 = d_5d51_d535;
                        d_5d51_d9f0 = d_5d51_d91c;
                        d_5d51_d9a0 = d_5d51_d9b4;
                    }
                }
            }
        }
        if (d_5d51_d9f0 > -1) {
            sel[d_5d51_d9a0] = -1;
            d_2414_ed6a[d_5d51_d9d4] = d_5d51_d9f0;
            d_5d51_d92c++;
        } else
            d_5d51_d5d1 = -1;
    }
}

void f_71c8_4947(int team)
{
    f_1646_2fa4(0, "Select Formation", "*Exit|4-4-2|4-2-4|Sweeper|5-3-2|4-3-3|5-2-3|4-5-1|Anchor Man|Support Man|");
    if (d_5d51_da0a > 0) {
        d_5d51_d8fa = d_5d51_d616 / 16;
        d_5d51_d616 = d_5d51_da0a + d_5d51_d8fa * 16 - 1;
        f_9e79_0f6c(team, d_5d51_da0a - 1, 0);
        for (d_5d51_d9fe = 11; d_5d51_d9fe <= 15; d_5d51_d9fe++)
            if (d_3404_0dce[team == d_5d51_d940][d_5d51_d9fe] < 2)
                for (d_5d51_d9b8 = 0; d_5d51_d9b8 <= 2; d_5d51_d9b8++)
                    d_3404_1334[team][d_5d51_d9b8][d_5d51_d9fe] =
                        d_3404_1334[team][d_5d51_d9b8][d_44d7_8c95[team == d_5d51_d940][d_5d51_d9fe]];
        d_3404_24e6[d_3404_4226[team]] = d_5d51_d616;
    }
}

void f_71c8_4a6c(int team)
{
    char s[320];

    strcpy(d_2414_5164, "");
    for (d_5d51_d9b2 = 0; d_5d51_d9b2 <= 4; d_5d51_d9b2++) {
        strcpy(s, d_4f37_06da[d_5d51_d9b2]);
        s[0] = toupper(s[0]);
        strcat(d_2414_5164, s);
        strcat(d_2414_5164, "|");
    }
    sprintf(s, "*Exit|%s", d_2414_5164);
    f_1646_2fa4(0, "Select Style", s);
    if (d_5d51_da0a > 0) {
        d_5d51_d8f8 = d_5d51_d616 % 16;
        d_5d51_d616 = (d_5d51_da0a - 1) * 16 + d_5d51_d8f8;
        d_3404_24e6[d_3404_4226[team]] = d_5d51_d616;
    }
}
