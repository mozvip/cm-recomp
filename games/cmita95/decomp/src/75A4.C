/* @at 75a4:0000 */
/* @data 61eb:142c */
/* @module */

/* Overlay 75a4 (CM94's 7DD6.C, CM93's 7732.C, from CM1's 6E68.C): club information: the
 * accounts, board confidence, resignation and manager jobs, match reports (Serie A, Serie B,
 * the Italian Cup, the Anglo-Italian Cup and the European cups), the game options menu
 * (background picture and the vidiprinter), save game, quitting, the week's fixture and result
 * titles and lists of the Italian competitions and their playoffs, cup rounds, the squad
 * screen (with its count of foreigners) and tactics. CM Italia 95: 38 clubs (Serie A 0-17,
 * Serie B 18-37), 16-player squads. Its data is the accounts' items and the squad screen's
 * attribute columns, then its literal pool. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <mem.h>
#include <ctype.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_75a4_0000(void);
void f_75a4_002a(int team);
void f_75a4_0501(void);
void f_75a4_06d4(int team);
void f_75a4_0737(int team);
void f_75a4_0893(int team);
void f_75a4_0b8e(void);
void f_75a4_0be1(void);
void f_75a4_0d76(void);
void f_75a4_0eb4(int comp, int week);
void f_75a4_0f79(void);
void f_75a4_10f0(void);
void f_75a4_116c(int week, int mode, int x);
void f_75a4_1c20(int week, int mode, int from, int to, int kind);
char f_75a4_22b6(int kind, int week, int n);
int f_75a4_23bf(int week, int n);
void f_75a4_2459(int club, int week, int n);
void f_75a4_264f(int a, int b, int c, int d);
void f_75a4_2887(int n, int b, int c, int d);
void f_75a4_2b4e(void);
void f_75a4_2bd7(int team);
void f_75a4_39a0(int mode, int team);
void f_75a4_3f4c(int a, int team);
void f_75a4_414f(int team);
void f_75a4_426e(int team);

void f_8e0f_141f(void);
void f_9f8d_101a(int);
void f_8e0f_1b5f(int team);
void f_1a83_0007(float x, int team, char far *title);
void f_1a83_3450(float x, float y, int bg, int fg, int w, char far *s);
void f_1a83_3c08(float x, float y, int bg, int fg, int w, char far *s);
void far *f_215d_1629(int handle, int page);
long f_9f8d_1ec1(int x);
long f_215d_135c(long a, long b);
void f_1a83_5540(int a);
void f_1a83_5ccd(void);
void f_1a83_5ce1(void);
void f_1a83_48f9(char far *title);
extern int d_61eb_dc52;
extern int d_61eb_dc5e;
extern int d_61eb_d5d8;
extern char (far *d_61eb_dbd8)[101];
extern char far d_432e_bc07[];
extern char far d_432e_bc57[];
extern char far d_432e_c1c5[];
extern char far d_432e_c215[];
extern char far d_432e_e70f[];
extern long far d_3334_cc82[][38];
extern unsigned char far d_3334_cee2[];
void f_1a83_0bb7(char far *);
void f_9f8d_1379(char all);
char far *f_1a83_4686(int manager, char full);
void f_1a83_2da6(int n, char far *title, char far *items);
void f_93a1_16a1(int club);
void f_8e0f_3e07(int club, int a);
unsigned f_215d_0b10(char far *s, char far *set);
void f_1a83_4d96(int a, float x, float y, int c, int d, int e, char far *s);
int f_1a83_5296(int a);
extern char d_61eb_d9c4;
extern char d_61eb_d9ce;
extern int d_61eb_d5de;
extern int d_61eb_d5a2;
extern int d_61eb_d62a;
extern int d_61eb_d5e2;
extern int d_61eb_d59e;
extern int d_61eb_d652;
extern int d_61eb_d650;
extern int d_61eb_d648;
extern int d_61eb_d980;
extern int d_61eb_d982;
extern int d_61eb_d984;
extern int d_61eb_d986;
extern long d_61eb_db15;
extern long d_61eb_db19;
extern long d_61eb_db1d;
extern float d_61eb_da5d;
extern float d_61eb_da55;
extern char near *d_61eb_b0ec[];
extern long (far *d_61eb_dbc0)[38];
extern unsigned char far d_3334_bea2[];
extern unsigned char far d_3334_be02[];
struct col { float x; char far *title; };
void f_1a83_3122(int last);
void f_b26d_1547(void);
void f_6ffe_16cf(int mode);
int f_a214_3501(int p);
void f_9a9e_46c0(int n);
void f_9f8d_0670(int t);
void f_ab30_2524(char team);
void f_ab30_6836(void);
char f_1a83_2387(int);
char f_1a83_2448(int);
char f_1a83_247b(int);
char f_1a83_24d8(int);
char f_1a83_2531(int);
char f_1a83_2592(int);
char f_1a83_25e7(int);
char f_1a83_29a3(int);
void f_7f4a_3a06(int a, int b, char c);
void f_9a9e_42c4(char far *s);
void f_215d_19eb();
void f_215d_0595(char reset);
void f_215d_0652(void);
void f_9a9e_3510(void);
void f_215d_124b(void);
extern char d_61eb_d9d0;
extern char d_61eb_d9cf;
extern char d_61eb_d9c8;
extern int d_61eb_d988;
extern int d_61eb_d656;
extern int d_61eb_d654;
extern int d_61eb_d64e;
extern int d_61eb_d64c;
extern int d_61eb_d64a;
extern int d_61eb_d60e;
extern unsigned char far d_3334_d680[];
extern unsigned char far d_3334_db94[];
extern int far d_3334_ca6e[];
extern unsigned char far d_3334_bdb2[][40];
extern unsigned char far d_3334_0000[][1500];
extern int far d_28d4_1132[];
extern int far d_53fc_138c[][2][100];
void f_215d_0b01(int on);
int f_215d_13af(int a, int b);
void f_1a83_3347(int x, int y, int colour, char far *s);
void f_1a83_3697(float x, float y, int colour, char far *s);
void f_1a83_3a43(float x, float y, int colour, char far *s);
char f_1a83_277e(int, int);
char f_1a83_280b(int, int);
char f_1a83_28a0(int);
char f_1a83_2901(int);
char f_1a83_29b8(int, int);
extern float d_61eb_da69;
extern int d_61eb_d670;
extern int d_61eb_d66e;
extern int d_61eb_d66c;
extern int d_61eb_d66a;
extern int d_61eb_d668;
extern int d_61eb_d666;
extern int d_61eb_d664;
extern int d_61eb_d662;
extern int d_61eb_d65e;
extern int d_61eb_d65c;
extern int d_61eb_d65a;
extern int d_61eb_d658;
extern int d_61eb_d5f2;
extern int d_61eb_d5c6;
char f_1a83_2ad4(int x);
char far *f_1a83_3300(int x);
char far *f_1a83_4876(int division, char full);
void f_1a83_0134(int x1, int y1, int x2, int y2);
void f_215d_13f1(void far *a, void far *b, int n);
void f_215d_088c();
void f_215d_08aa(int x1, int y1, int x2, int y2);
extern char d_61eb_d9d2;
extern char d_61eb_d9d1;
extern int d_61eb_d5aa;
extern int d_61eb_d5f0;
extern int d_61eb_d674;
extern int d_61eb_d672;
extern char near *d_61eb_b140[];
extern unsigned char far d_53fc_1172[];
void f_1a83_5117(int a, char b);
char far *f_1a83_2d52(int x, char c);
int f_1a83_1dd9(int player);
char f_1a83_5a2e(int player);
char f_1a83_5a4c(int player);
unsigned char f_1a83_5a80(int player);
char f_1a83_5d3d(char team, char week, char n);
char far *f_215d_1043(char far *s);
void f_9f8d_151b(int team, char reserves);
void f_9f8d_1e48(int line);
void f_7a45_0000(char far *msg);
void f_6ffe_0dbb(int mode, int team);
void f_6ffe_4a89(int team);
void f_6ffe_4e64(int team);
void f_6ffe_527c(int team);
void f_6ffe_430f(int team);
void f_93a1_08e4(int team);
void f_a214_07c3(int team);
void f_a214_4120(int player, int a, char b);
void f_87dc_4c9b(int player, int a);
void f_b6f6_0000(char team);
unsigned char f_ab30_5236(int team, unsigned char w, unsigned char n);
void f_ab30_2768(char team);
void f_b26d_01de(char team, char n);
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
extern char d_61eb_d9d5;
extern char d_61eb_d9d4;
extern char d_61eb_d9ca;
extern unsigned char d_61eb_d9bc;
extern int d_61eb_d684;
extern int d_61eb_d680;
extern int d_61eb_d67c;
extern int d_61eb_d67a;
extern int d_61eb_d678;
extern int d_61eb_d608;
extern int d_61eb_d5ee;
extern int d_61eb_d5ec;
extern int d_61eb_d5c2;
extern int d_61eb_d5b8;
extern float d_61eb_da6d;
extern unsigned char far d_432e_3a2e[][80];
extern unsigned char far d_432e_3a3e[][80];
extern int far d_53fc_138e[][2][100];
char far *f_1a83_45b4(int player);
void f_9f8d_0ea8(int t, int k, char c);
extern char d_61eb_d9d8;
extern int d_61eb_d686;
extern int d_61eb_d688;
extern int d_61eb_d68a;
extern int d_61eb_d68c;
extern int d_61eb_d5d4;
extern int d_61eb_d5e0;
extern int d_61eb_d5f4;
extern int d_61eb_d5f6;
extern int d_61eb_d992;
extern int d_61eb_d6b0;
extern int d_61eb_d6ae;
extern int d_61eb_dc4e;
extern float d_61eb_da71;
extern float d_61eb_da75;
extern int (far *d_61eb_dbb8)[1500];
extern char far d_432e_ba27[];
extern char far * far d_53fc_06d6[];
extern unsigned char far d_3334_beca[];
extern unsigned char far d_3334_f278[][3][16];
extern unsigned char far d_3334_d90a[];
extern int far d_3334_caba[];
extern unsigned char far d_3334_d3f6[];
extern unsigned char far d_3334_d16c[];
extern unsigned char far d_3334_efe4[];
extern int far d_432e_066e[][16];
extern char far d_432e_c265[];
extern char far d_432e_c279[];
extern char far d_432e_c28d[];
extern char far d_5313_0de8[];
extern char far d_432e_87c8[];
extern int far d_28d4_106a[];
extern char d_61eb_dba2;
char f_1a83_2644(int, int);
char f_1a83_26ed(int, int);
extern int far d_432e_1f1e[];
extern char far d_28d4_1398[];
void f_1a83_54f9(int n);
void f_1a83_5512(void);
void f_7a45_0099(int team);
extern struct flags_w far d_432e_45de[];
extern int far d_432e_1ee2[];
extern int far d_3334_f9f8[][16];
extern unsigned char far d_28d4_1958[][1500];
extern int far d_28d4_081c[][26];
extern int far d_432e_1ee0[];
char unmapped_f_1a70_2490(int);
char unmapped_f_1a70_24c5(int);
char unmapped_f_1a70_2a7d(int);
char unmapped_f_1a70_29fa(int);
extern unsigned char d_61eb_dba3[];
extern int far d_28d4_0000[];
extern char far d_432e_c387[];
extern char far d_432e_c3d7[];
extern char far d_432e_c427[];
extern char far d_432e_c477[];
extern char far d_432e_c4c7[];
extern char far d_432e_c517[];
extern char far d_432e_c567[];
extern char far d_432e_c5b7[];
extern char far d_432e_c607[];
extern char far d_432e_bca7[];
extern char far d_432e_c125[];
unsigned char f_1a83_6d8b(unsigned char team);
extern char far d_432e_c657[];
extern char far d_432e_c6a7[];
extern char far d_432e_c6f7[];
extern char far * far d_53fc_0000[];
extern int far d_3334_c8f2[][38];
extern char far d_432e_c747[];
extern char far d_432e_c797[];
extern char far d_432e_ee7b[][40];
extern char far d_432e_c7e7[];
extern char far d_432e_c837[];
extern unsigned char far d_3334_fefe[][16];
extern unsigned char far d_28d4_194e[][5];


/* the accounts' items */
static char far *d_61eb_142c[] = {
    "GATE RECEIPTS", "SPONSOR PAYMENT", "PLAYERS SOLD", "INTEREST", "TELEVISION NETS",
    "CASH PRIZES", "OTHER GAINS", "STAFF WAGES", "RATES AND TAXES", "PLAYERS BOUGHT",
    "INTEREST ON OVERDRAFT", "GROUND MAINTENANCE", "LEAGUE FINES", "GENERAL EXPENSES"
};

void f_75a4_0000(void)
{
    if (d_61eb_d9c4 == 0)
        f_8e0f_141f();
    else {
        f_9f8d_101a(-1);
        f_8e0f_1b5f(d_61eb_d5de);
    }
}

void f_75a4_002a(int team)
{
    char buf[320];

    if (d_61eb_d5a2 > 2) {
        f_1a83_5ccd();
        f_1a83_0007(-1, team, "Accounts");
        f_1a83_3450(1, 5.25, 6, 2, 0, " ITEM                   ");
        f_1a83_3450(20, 5.25, 3, 6, 0, " INCOME     ");
        f_1a83_3450(30, 5.25, 3, 6, 0, " SPENDING   ");
        d_61eb_db15 = 0;
        d_61eb_db19 = 0;
        for (d_61eb_d62a = 0; d_61eb_d62a <= 13; d_61eb_d62a++) {
            strcpy(buf, d_61eb_142c[d_61eb_d62a]);
            if (d_61eb_d62a == 0 && d_61eb_d5a2 <= 12)
                strcpy(buf, "GATE + SEASON TICKETS");
            sprintf(d_432e_bc07, " %-23s", buf);
            d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 0);
            sprintf(d_432e_bc57, "%-10ld", (d_61eb_dbc0 + 16)[d_61eb_d62a][team]);
            if (d_61eb_d62a < 7) {
                f_1a83_3450(1, d_61eb_d62a + 6.5, 1, 4, 0, d_432e_bc07);
                sprintf(buf, " +%s", d_432e_bc57);
                f_1a83_3450(20, d_61eb_d62a + 6.5, 1, 12, 0, buf);
                d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 0);
                d_61eb_db15 += (d_61eb_dbc0 + 16)[d_61eb_d62a][team];
            } else {
                f_1a83_3450(1, d_61eb_d62a + 6.75, 1, 4, 0, d_432e_bc07);
                sprintf(buf, " -%s", d_432e_bc57);
                f_1a83_3450(30, d_61eb_d62a + 6.75, 1, 2, 0, buf);
                d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 0);
                d_61eb_db19 += (d_61eb_dbc0 + 16)[d_61eb_d62a][team];
            }
        }
        f_1a83_3450(1, 21, 6, 3, 0, " TOTALS                 ");
        sprintf(buf, " +%-10ld", d_61eb_db15);
        f_1a83_3450(20, 21, 4, 1, 0, buf);
        sprintf(buf, " -%-10ld", d_61eb_db19);
        f_1a83_3450(30, 21, 2, 1, 0, buf);
        strcpy(d_432e_c1c5, "");
        if (d_61eb_db15 - d_61eb_db19 > 0)
            sprintf(d_432e_c1c5, "(+%ld) ", d_61eb_db15 - d_61eb_db19);
        else if (d_61eb_db19 - d_61eb_db15 > 0)
            sprintf(d_432e_c1c5, "(-%ld) ", d_61eb_db19 - d_61eb_db15);
        sprintf(buf, " %ld AVAILABLE %s",
                f_215d_135c(d_3334_cc82[0][team] - f_9f8d_1ec1(team), 0L), d_432e_c1c5);
        f_1a83_3450(1, 24, 1, 12, 0, buf);
        d_61eb_db1d = f_9f8d_1ec1(team) - d_3334_cc82[0][team];
        sprintf(buf, " OVERDRAFT %ld (MAX %ld) ", d_61eb_db1d > 0 ? d_61eb_db1d : 0L,
                f_9f8d_1ec1(team));
        f_1a83_3450(1, 22.5, 1, 8, 0, buf);
        f_1a83_5ce1();
        f_1a83_5540(0);
    } else
        f_1a83_0bb7("No summary for last week");
}

void f_75a4_0501(void)
{
    char buf[320];

    if (d_61eb_d652 > 0) {
        f_9f8d_1379(0);
        if (d_61eb_d980 > -1) {
            do {
                f_1a83_2da6(0, f_1a83_4686(d_61eb_d980, 0), "*Exit|Board Confidence|Resign|");
                d_61eb_d982 = d_61eb_d59e;
                if (d_61eb_d982 == 1) {
                    if (d_3334_cc82[0][d_3334_cee2[d_61eb_d980]] < 0)
                        f_1a83_0bb7("We are in financial trouble");
                    else {
                        if (d_3334_bea2[d_3334_cee2[d_61eb_d980]] <= 24)
                            strcpy(d_432e_c215, "are considering your future");
                        else if (d_3334_bea2[d_3334_cee2[d_61eb_d980]] <= 39)
                            strcpy(d_432e_c215, "are concerned");
                        else if (d_3334_bea2[d_3334_cee2[d_61eb_d980]] <= 59)
                            strcpy(d_432e_c215, "are not concerned");
                        else if (d_3334_bea2[d_3334_cee2[d_61eb_d980]] <= 79)
                            strcpy(d_432e_c215, "are pleased");
                        else if (d_3334_bea2[d_3334_cee2[d_61eb_d980]] <= 94)
                            strcpy(d_432e_c215, "are very pleased");
                        else
                            strcpy(d_432e_c215, "are delighted");
                        sprintf(buf, "%d%% : We %s", d_3334_bea2[d_3334_cee2[d_61eb_d980]], d_432e_c215);
                        f_1a83_0bb7(buf);
                    }
                } else if (d_61eb_d982 == 2) {
                    f_75a4_06d4(d_61eb_d980);
                    if (d_61eb_d9ce)
                        d_61eb_d982 = 0;
                }
            } while (d_61eb_d982 != 0);
        }
    } else
        f_1a83_0bb7("Not available on demo");
}

void f_75a4_06d4(int team)
{
    d_61eb_d9ce = 0;
    f_1a83_2da6(0, "Resignation", "*Exit|Resign|");
    d_61eb_d648 = d_61eb_d59e;
    if (d_61eb_d648 > 0) {
        f_93a1_16a1(d_3334_cee2[d_61eb_d980]);
        f_8e0f_3e07(d_3334_cee2[d_61eb_d980], 1);
        d_61eb_d9ce = -1;
    }
}

void f_75a4_0737(int team)
{
    char num[4];
    char buf[320];

    if (d_61eb_d650 > 0) {
        do {
            sprintf(buf, "The %s job", (char far *)d_61eb_b0ec[team]);
            f_1a83_2da6(0, buf, "Exit|Candidates|Apply For It|");
            d_61eb_d984 = d_61eb_d59e;
            if (d_61eb_d984 == 1)
                f_75a4_0893(team);
            else if (d_61eb_d984 == 2) {
                f_9f8d_1379(-1);
                if (d_61eb_d980 > -1) {
                    sprintf(num, "%03d", d_61eb_d980);
                    d_61eb_dbd8 = f_215d_1629(d_61eb_dc5e, 0);
                    if (f_215d_0b10(d_61eb_dbd8[team], num) == 0) {
                        sprintf(buf, "%s receive your application", (char far *)d_61eb_b0ec[team]);
                        f_1a83_0bb7(buf);
                        d_61eb_dbd8 = f_215d_1629(d_61eb_dc5e, 1);
                        strcat(d_61eb_dbd8[team], num);
                        strcat(d_61eb_dbd8[team], " ");
                    } else
                        f_1a83_0bb7("You are already on the list");
                }
            }
        } while (d_61eb_d984 != 0);
    } else
        f_75a4_0893(team);
}

void f_75a4_0893(int team)
{
    char buf[320];

    sprintf(buf, "The %s job", (char far *)d_61eb_b0ec[team]);
    f_1a83_48f9(buf);
    f_1a83_3c08(1.25, 4.0, d_3334_be02[team] / 16, d_3334_be02[team] % 16, 0, " Candidates ");
    f_1a83_3450(1.125, 7.0, 2, 1, 0x4c, " NAME");
    f_1a83_3450(10.875, 7.0, 2, 1, 0x49, " CLUB");
    f_1a83_3450(20.25, 7.0, 2, 1, 0x4c, " NAME");
    f_1a83_3450(30, 7.0, 2, 1, 0x49, " CLUB");
    d_61eb_dbd8 = f_215d_1629(d_61eb_dc5e, 0);
    strcpy(d_432e_e70f, d_61eb_dbd8[team]);
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 21; d_61eb_d5d8++) {
        d_61eb_da5d = d_61eb_d5d8 > 10 ? 20.25 : 1.125;
        d_61eb_da55 = d_61eb_d5d8 + 9 - (d_61eb_d5d8 > 10 ? 11 : 0);
        if ((d_61eb_d5d8 + 1) * 4 <= strlen(d_432e_e70f)) {
            strncpy(buf, &d_432e_e70f[d_61eb_d5d8 * 4], 3);
            buf[3] = 0;
            d_61eb_d986 = atol(buf);
            sprintf(buf, " %s", f_1a83_4686(d_61eb_d986, -1));
            f_1a83_3450(d_61eb_da5d, d_61eb_da55, d_61eb_d986 > 645 ? 6 : 1,
                        d_61eb_d5d8 & 1 ? 15 : 3, 0x4c, buf);
            if (d_3334_cee2[d_61eb_d986] < 255)
                sprintf(buf, " %.11s", (char far *)d_61eb_b0ec[d_3334_cee2[d_61eb_d986]]);
            else
                strcpy(buf, " None");
            f_1a83_3450(d_61eb_da5d + 9.75, d_61eb_da55, 1, 4, 0x49, buf);
        } else {
            f_1a83_3450(d_61eb_da5d, d_61eb_da55, 1, d_61eb_d5d8 & 1 ? 15 : 3, 0x4c, "");
            f_1a83_3450(d_61eb_da5d + 9.75, d_61eb_da55, 1, 4, 0x49, "");
        }
    }
    f_1a83_4d96(2, 1.25, 22.5, 1, 4, 0x12d, "                 EXIT");
    do
        d_61eb_d59e = f_1a83_5296(d_61eb_d5e2);
    while (d_61eb_d59e == 0);
}

void f_75a4_0b8e(void)
{
    do {
        f_1a83_2da6(0, "Managerial", "*Exit|Manager History|Add Manager|Job News|");
        d_61eb_d988 = d_61eb_d59e;
        if (d_61eb_d988 == 1)
            f_b26d_1547();
        else if (d_61eb_d988 == 2)
            f_75a4_0be1();
        else if (d_61eb_d988 == 3)
            f_6ffe_16cf(2);
    } while (d_61eb_d988 != 0);
}

void f_75a4_0be1(void)
{
    int i;

    if (d_61eb_d650 == 4)
        f_1a83_0bb7("Maximum four players");
    else {
        f_9f8d_101a(d_61eb_d650);
        if (d_3334_caba[d_61eb_d5de] == 650)
            f_1a83_0bb7("Please wait until|they appoint a manager");
        else {
            d_61eb_d652++;
            d_61eb_d650++;
            d_3334_cee2[d_3334_ca6e[d_61eb_d5de]] = 255;
            d_3334_d3f6[d_3334_ca6e[d_61eb_d5de]] = 0;
            d_61eb_d654 = d_61eb_d650 + 645;
            d_3334_ca6e[d_61eb_d5de] = d_61eb_d654;
            d_3334_bdb2[0][d_61eb_d5de] = 8;
            d_3334_bea2[d_61eb_d5de] = 50;
            for (i = 1; i <= d_432e_066e[d_61eb_d5de][0]; i++) {
                d_61eb_d656 = d_432e_066e[d_61eb_d5de][i];
                d_3334_0000[23][d_61eb_d656] -= 1;
            }
            d_432e_066e[d_61eb_d5de][0] = 0;
            d_3334_cee2[d_61eb_d654] = d_61eb_d5de;
            d_3334_d16c[d_61eb_d654] = 35;
            d_3334_d3f6[d_61eb_d654] = 30;
            d_3334_efe4[d_61eb_d654] = 0;
            d_3334_db94[d_61eb_d654] = 80;
            d_3334_d680[d_61eb_d654] = f_a214_3501(d_61eb_d654);
            f_9a9e_46c0(d_61eb_d650 - 1);
            d_61eb_d9c4 = 0;
            f_9f8d_0670(d_61eb_d5de);
            f_ab30_2524(d_61eb_d5de);
        }
    }
}

void f_75a4_0d76(void)
{
    do {
        f_1a83_48f9("Match reports");
        f_1a83_2da6(0, "", "*Exit|Serie A|Serie B|Italian Cup|Anglo-Ital Cup|UEFA Cup|Cup Winners Cup|European Cup|Playoffs|");
        f_1a83_3122(8);
        d_61eb_d9cf = 0;
        if (d_61eb_d59e > 0) {
            for (d_61eb_d60e = d_61eb_d5a2 - 1; d_61eb_d60e >= 1; d_61eb_d60e--) {
                d_61eb_d9d0 = 0;
                switch (d_61eb_d59e) {
                case 1:
                    d_61eb_d9d0 = f_1a83_2387(d_61eb_d60e);
                    break;
                case 2:
                    d_61eb_d9d0 = f_1a83_2448(d_61eb_d60e);
                    break;
                case 3:
                    d_61eb_d9d0 = f_1a83_247b(d_61eb_d60e);
                    break;
                case 4:
                    d_61eb_d9d0 = f_1a83_24d8(d_61eb_d60e);
                    break;
                case 5:
                    d_61eb_d9d0 = f_1a83_2531(d_61eb_d60e);
                    break;
                case 6:
                    d_61eb_d9d0 = f_1a83_2592(d_61eb_d60e);
                    break;
                case 7:
                    d_61eb_d9d0 = f_1a83_25e7(d_61eb_d60e);
                    break;
                case 8:
                    d_61eb_d9d0 = f_1a83_29a3(d_61eb_d60e);
                    break;
                }
                if (d_61eb_d9d0 && d_28d4_1132[d_61eb_d60e] > 0) {
                    if (d_61eb_d59e > 2)
                        d_61eb_d64a = d_61eb_d59e - 2;
                    else
                        d_61eb_d64a = d_61eb_d59e + 7;
                    f_75a4_116c(d_61eb_d60e, 3, d_61eb_d64a);
                    d_61eb_d9cf = -1;
                    d_61eb_d60e = 1;
                }
            }
            if (d_61eb_d9cf == 0)
                f_1a83_0bb7("No matches played yet");
        }
    } while (d_61eb_d59e != 0);
}

void f_75a4_0eb4(int comp, int week)
{
    FILE *fp;

    f_215d_19eb(2);
    fp = fopen(d_5313_0de8, "rb");
    fseek(fp, (long)(d_28d4_106a[week] + comp - 1) * 175, 0);
    fread(d_432e_87c8, 1, 175, fp);
    fclose(fp);
    f_7f4a_3a06(d_53fc_138c[comp][0][week] / 32,
                d_53fc_138c[comp][1][week] / 32, -1);
}

void f_75a4_0f79(void)
{
    f_1a83_48f9("Game Options");
    f_1a83_2da6(5, "", "*Exit|Picture|Vidiprinter|");
    f_1a83_3122(2);
    if (d_61eb_d59e == 1) {
        do {
            f_1a83_48f9("Background Picture");
            f_1a83_2da6(5, "", "*Exit|Picture 1|Picture 2|Picture 3|Picture 4|Change Colour|Change Brightness|");
            strcpy(d_432e_c265, d_432e_c279);
            d_61eb_d9c8 = 0;
            do {
                f_1a83_3122(6);
                switch (d_61eb_d59e) {
                case 0:
                    d_61eb_d9c8 = -1;
                    break;
                case 1:
                case 2:
                case 3:
                case 4:
                    sprintf(d_432e_c279, "picture%d.lbm", d_61eb_d59e);
                    if (strcmp(d_432e_c279, d_432e_c265) != 0) {
                        d_432e_c28d[0] = 0;
                        f_215d_19eb(d_61eb_d59e == 8 ? 1 : 1);
                        d_432e_c28d[0] = 0;
                        f_9a9e_42c4("Loading picture");
                        f_215d_0595(-1);
                        d_432e_c28d[0] = 0;
                        f_215d_19eb(2);
                    }
                    d_61eb_d9c8 = -1;
                    break;
                case 5:
                    d_61eb_d64c += d_61eb_d64c == 5 ? -5 : 1;
                    f_215d_0652();
                    break;
                case 6:
                    d_61eb_d64e += d_61eb_d64e == 4 ? -4 : 1;
                    f_215d_0652();
                    break;
                }
            } while (!d_61eb_d9c8);
        } while (d_61eb_d59e != 0);
    } else if (d_61eb_d59e == 2) {
        f_1a83_2da6(0, "Vidi-printer", "Vidi On|Vidi Off|");
        if (d_61eb_d59e == 0)
            d_61eb_dba2 = 1;
        else
            d_61eb_dba2 = 0;
    }
}

void f_75a4_10f0(void)
{
    do {
        f_1a83_2da6(0, "Save game", "*Exit|Save Game|Information|");
        if (d_61eb_d59e == 1) {
            d_61eb_d9c4 = d_61eb_d652 == 0;
            f_9a9e_3510();
            f_1a83_2da6(0, "Only End The Game By Using Quit", "*Continue|Quit|");
            if (d_61eb_d59e == 1) {
                f_215d_124b();
                exit(0);
            } else
                f_215d_19eb(2);
        } else if (d_61eb_d59e == 2)
            f_ab30_6836();
    } while (d_61eb_d59e == 2);
}

/* the titles of the week's fixtures or results, competition by competition */
void f_75a4_116c(int week, int mode, int x)
{
    if (week <= 12) {
        d_61eb_d658 = d_28d4_0000[week - 1];
        strcpy(d_432e_c387, "Preseason");
        strcpy(d_432e_c3d7, "Friendly Match");
        if (d_61eb_d658 > 1)
            strcat(d_432e_c3d7, "es");
        f_75a4_264f(week, 1, d_61eb_d658, x);
        f_75a4_1c20(week, mode, 1, d_61eb_d658, x);
    }
    if (f_1a83_2387(week) || f_1a83_2448(week)) {
        unsigned char c;

        d_61eb_d658 = 0;
        d_61eb_d658 += f_1a83_2387(week) ? 9 : 0;
        d_61eb_d658 += f_1a83_2448(week) ? 10 : 0;
        if (f_1a83_2387(week)) {
            strcpy(d_432e_c387, "Championship");
            strcpy(d_432e_c3d7, "Serie A");
            f_75a4_264f(week, 1, 9, x);
            f_75a4_1c20(week, mode, 1, 9, x);
        }
        if (f_1a83_2448(week)) {
            c = f_1a83_2387(week) ? 10 : 1;
            strcpy(d_432e_c387, "League");
            strcpy(d_432e_c3d7, "Serie B");
            f_75a4_264f(week, c, c + 9, x);
            f_75a4_1c20(week, mode, c, c + 9, x);
        }
    }
    if (f_1a83_247b(week)) {
        strcpy(d_432e_c387, "Italian Cup");
        strcpy(d_432e_c567, "");
        if (f_1a83_28a0(week))
            strcpy(d_432e_c567, ",1st Leg");
        else if (f_1a83_2901(week))
            strcpy(d_432e_c567, ",2nd Leg");
        switch (week) {
        case 14:
            d_61eb_d658 = 16;
            strcpy(d_432e_c3d7, "1st Round");
            break;
        case 15: case 17:
            d_61eb_d658 = 16;
            sprintf(d_432e_c3d7, "2nd Round%ss", d_432e_c567);
            break;
        case 27: case 33:
            d_61eb_d658 = 8;
            sprintf(d_432e_c3d7, "3rd Round%ss", d_432e_c567);
            break;
        case 59: case 63:
            d_61eb_d658 = 4;
            sprintf(d_432e_c3d7, "Quarter Final%ss", d_432e_c567);
            break;
        case 71: case 77:
            d_61eb_d658 = 2;
            sprintf(d_432e_c3d7, "Semi Final%ss", d_432e_c567);
            break;
        case 98: case 100:
            d_61eb_d658 = 1;
            sprintf(d_432e_c3d7, "Final%s", d_432e_c567);
            break;
        }
        f_75a4_264f(week, 1, d_61eb_d658, x);
        d_61eb_d65a = 8;
        d_61eb_d65c = -7;
        d_61eb_d5f2 = 0;
        do {
            d_61eb_d65c += d_61eb_d65a;
            d_61eb_d65e = f_215d_13af(d_61eb_d658, d_61eb_d65a + d_61eb_d5f2 * d_61eb_d65a);
            d_61eb_d5f2++;
            f_75a4_1c20(week, mode, d_61eb_d65c, d_61eb_d65e, x);
        } while (d_61eb_d65e != d_61eb_d658);
    }
    if (f_1a83_29a3(week) && d_61eb_dba3[0] >= 1) {
        unsigned char c;

        d_61eb_d658 = d_61eb_dba3[0];
        for (c = 1; c <= d_61eb_d658; c = c + 1) {
            if (d_61eb_dba3[c] == 0) {
                strcpy(d_432e_c387, "Championship Playoff");
                strcpy(d_432e_c3d7, "Serie A");
            } else if (d_61eb_dba3[c] == 1) {
                strcpy(d_432e_c387, "Relegation Playoff");
                strcpy(d_432e_c3d7, "Serie A");
            } else if (d_61eb_dba3[c] == 2) {
                strcpy(d_432e_c387, "Promotion Playoff");
                strcpy(d_432e_c3d7, "Serie B");
            } else if (d_61eb_dba3[c] == 3) {
                strcpy(d_432e_c387, "Relegation Playoff");
                strcpy(d_432e_c3d7, "Serie B");
            }
            f_75a4_264f(week, c, c, x);
            f_75a4_1c20(week, mode, c, c, x);
        }
    }
    if (f_1a83_2531(week) || f_1a83_2592(week) || f_1a83_25e7(week) || f_1a83_24d8(week)) {
        strcpy(d_432e_c427, "Cup Winners Cup");
        strcpy(d_432e_c477, "UEFA Cup");
        strcpy(d_432e_c4c7, "European Cup");
        strcpy(d_432e_c517, "Anglo-Italian Cup");
        strcpy(d_432e_c567, "");
        if (f_1a83_28a0(week))
            strcpy(d_432e_c567, ",1st Leg");
        else if (f_1a83_2901(week))
            strcpy(d_432e_c567, ",2nd Leg");
        switch (week) {
        case 19: case 23: case 29:
            d_61eb_d658 = 6;
            strcpy(d_432e_c387, d_432e_c517);
            strcpy(d_432e_c3d7, "Italian Section");
            f_75a4_1c20(week, mode, 1, 6, x);
            break;
        case 21: case 25:
            d_61eb_d658 = 64;
            strcpy(d_432e_c387, d_432e_c4c7);
            sprintf(d_432e_c3d7, "1st Round%ss", d_432e_c567);
            f_75a4_264f(week, 1, 16, x);
            f_75a4_1c20(week, mode, 1, 8, x);
            f_75a4_1c20(week, mode, 9, 16, x);
            strcpy(d_432e_c387, d_432e_c427);
            f_75a4_264f(week, 17, 32, x);
            f_75a4_1c20(week, mode, 17, 24, x);
            f_75a4_1c20(week, mode, 25, 32, x);
            strcpy(d_432e_c387, d_432e_c477);
            f_75a4_264f(week, 33, 64, x);
            f_75a4_1c20(week, mode, 33, 40, x);
            f_75a4_1c20(week, mode, 41, 48, x);
            f_75a4_1c20(week, mode, 49, 56, x);
            f_75a4_1c20(week, mode, 57, 64, x);
            break;
        case 31: case 35:
            d_61eb_d658 = 32;
            strcpy(d_432e_c387, d_432e_c4c7);
            sprintf(d_432e_c3d7, "2nd Round%ss", d_432e_c567);
            f_75a4_264f(week, 1, 8, x);
            f_75a4_1c20(week, mode, 1, 8, x);
            strcpy(d_432e_c387, d_432e_c427);
            f_75a4_264f(week, 9, 16, x);
            f_75a4_1c20(week, mode, 9, 16, x);
            strcpy(d_432e_c387, d_432e_c477);
            f_75a4_264f(week, 17, 32, x);
            f_75a4_1c20(week, mode, 17, 24, x);
            f_75a4_1c20(week, mode, 25, 32, x);
            break;
        case 37: case 47:
            d_61eb_d658 = 8;
            strcpy(d_432e_c387, d_432e_c517);
            strcpy(d_432e_c3d7, "International Stage");
            f_75a4_1c20(week, mode, 1, 8, x);
            break;
        case 41: case 45:
            d_61eb_d658 = 20;
            strcpy(d_432e_c387, d_432e_c4c7);
            strcpy(d_432e_c3d7, "Group Matches");
            f_75a4_1c20(week, mode, 1, 4, x);
            strcpy(d_432e_c387, d_432e_c477);
            sprintf(d_432e_c3d7, "3rd Round%ss", d_432e_c567);
            f_75a4_264f(week, 5, 12, x);
            f_75a4_1c20(week, mode, 5, 12, x);
            strcpy(d_432e_c387, d_432e_c517);
            strcpy(d_432e_c3d7, "International Stage");
            f_75a4_1c20(week, mode, 13, 20, x);
            break;
        case 61: case 65:
            d_61eb_d658 = 2;
            strcpy(d_432e_c387, d_432e_c517);
            sprintf(d_432e_c3d7, "Semi Final%ss", d_432e_c567);
            f_75a4_264f(week, 1, 2, x);
            f_75a4_1c20(week, mode, 1, 2, x);
            break;
        case 69: case 73:
            d_61eb_d658 = 12;
            strcpy(d_432e_c387, d_432e_c4c7);
            strcpy(d_432e_c3d7, "Group Matches");
            f_75a4_1c20(week, mode, 1, 4, x);
            strcpy(d_432e_c387, d_432e_c427);
            sprintf(d_432e_c3d7, "Quarter Final%ss", d_432e_c567);
            f_75a4_264f(week, 5, 8, x);
            f_75a4_1c20(week, mode, 5, 8, x);
            strcpy(d_432e_c387, d_432e_c477);
            f_75a4_264f(week, 9, 12, x);
            f_75a4_1c20(week, mode, 9, 12, x);
            break;
        case 75:
            d_61eb_d658 = 1;
            strcpy(d_432e_c387, d_432e_c517);
            strcpy(d_432e_c3d7, "Final");
            f_75a4_1c20(week, mode, 1, 1, x);
            break;
        case 79: case 83:
            d_61eb_d658 = 8;
            strcpy(d_432e_c387, d_432e_c4c7);
            strcpy(d_432e_c3d7, "Group Matches");
            f_75a4_1c20(week, mode, 1, 4, x);
            strcpy(d_432e_c387, d_432e_c427);
            sprintf(d_432e_c3d7, "Semi Final%ss", d_432e_c567);
            f_75a4_264f(week, 5, 6, x);
            f_75a4_1c20(week, mode, 5, 6, x);
            strcpy(d_432e_c387, d_432e_c477);
            f_75a4_264f(week, 7, 8, x);
            f_75a4_1c20(week, mode, 7, 8, x);
            break;
        case 87: case 91:
            d_61eb_d658 = 1;
            strcpy(d_432e_c387, d_432e_c477);
            sprintf(d_432e_c3d7, "Final%s", d_432e_c567);
            f_75a4_1c20(week, mode, 1, 1, x);
            break;
        case 89:
            d_61eb_d658 = 1;
            strcpy(d_432e_c387, d_432e_c427);
            strcpy(d_432e_c3d7, "Final");
            f_75a4_1c20(week, mode, 1, 1, x);
            break;
        case 93:
            d_61eb_d658 = 1;
            strcpy(d_432e_c387, d_432e_c4c7);
            strcpy(d_432e_c3d7, "Final");
            f_75a4_1c20(week, mode, 1, 1, x);
            break;
        }
    }
}

/* the title and the list of one competition's fixtures or results, or (mode 3 and up)
 * the week's matches of the competition without drawing them */
void f_75a4_1c20(int week, int mode, int from, int to, int kind)
{
    char buf[320];

    f_1a83_5ccd();
    if (f_75a4_22b6(kind, week, from) == 0)
        return;
    if (mode < 3) {
        if (week <= 12) {
            d_61eb_d662 = 1;
            d_61eb_d664 = 3;
        } else if (f_1a83_247b(week)) {
            d_61eb_d662 = 1;
            d_61eb_d664 = 13;
        } else if (f_1a83_2644(week, from) || f_1a83_26ed(week, from) || f_1a83_277e(week, from)) {
            d_61eb_d662 = 4;
            d_61eb_d664 = 8;
        } else if (f_1a83_280b(week, from)) {
            d_61eb_d662 = 1;
            d_61eb_d664 = week >= 37 ? 4 : 15;
        } else if (f_1a83_29a3(week)) {
            d_61eb_d662 = 1;
            d_61eb_d664 = 12;
        } else if (f_1a83_2387(week) && from == 1 || f_1a83_2448(week)) {
            d_61eb_d662 = 1;
            d_61eb_d664 = 4;
        }
        strcpy(d_432e_c5b7, d_432e_c387);
        if (mode == 2)
            strcat(d_432e_c5b7, " draw");
        else {
            strcpy(buf, d_432e_c5b7);
            if (mode != 1) {
                if (week > d_61eb_d5a2)
                    sprintf(d_432e_c5b7, "Next %s", buf);
                else
                    sprintf(d_432e_c5b7, "%s fixture%s", buf, to - from + 1 > 1 ? "s" : "");
            } else
                sprintf(d_432e_c5b7, "%s result%s", buf, to - from + 1 > 1 ? "s" : "");
        }
        f_75a4_2887(to - from + 1, week, from, mode);
        d_61eb_d5c6 = 8;
    }
    for (d_61eb_d5d8 = from - 1; to - 1 >= d_61eb_d5d8; d_61eb_d5d8++) {
        if (mode < 3) {
            d_61eb_d666 = d_53fc_138c[d_61eb_d5d8][0][week] / 32;
            d_61eb_d668 = d_53fc_138c[d_61eb_d5d8][1][week] / 32;
            f_75a4_2459(d_61eb_d666, week, d_61eb_d5d8);
            f_215d_0b01(0);
            f_1a83_3347(40, 1 - (d_61eb_d5c6 + d_61eb_da69) * 8, d_61eb_d66a, d_432e_bca7);
            f_1a83_3347(124, 1 - (d_61eb_d5c6 + d_61eb_da69) * 8, 6, d_432e_c607);
            if (mode == 1) {
                sprintf(d_432e_c125, "%d-%d", d_53fc_138c[d_61eb_d5d8][0][week] % 32,
                        d_53fc_138c[d_61eb_d5d8][1][week] % 32);
                if (d_432e_1f1e[d_61eb_d5d8] == 1) {
                    f_1a83_3347(155, 1 - (d_61eb_d5c6 + d_61eb_da69) * 8, 1, "P");
                    d_61eb_d5c6;
                } else if (d_432e_1f1e[d_61eb_d5d8] == 2)
                    f_1a83_3347(184, 1 - (d_61eb_d5c6 + d_61eb_da69) * 8, 1, "P");
            } else
                strcpy(d_432e_c125, " v");
            f_1a83_3697(20, -(d_61eb_d5c6 + d_61eb_da69), 1, d_432e_c125);
            f_75a4_2459(d_61eb_d668, week, d_61eb_d5d8);
            f_1a83_3347(200, 1 - (d_61eb_d5c6 + d_61eb_da69) * 8, d_61eb_d66a, d_432e_bca7);
            f_1a83_3347(278, 1 - (d_61eb_d5c6 + d_61eb_da69) * 8, 6, d_432e_c607);
            if (strstr(d_432e_c3d7, "2nd Leg")) {
                d_61eb_d66c = f_75a4_23bf(week, d_61eb_d5d8 + 1);
                d_61eb_d66e = (unsigned char)d_28d4_1398[d_61eb_d66c * 128 + d_61eb_d5d8 * 2 + 1];
                d_61eb_d670 = (unsigned char)d_28d4_1398[d_61eb_d66c * 128 + d_61eb_d5d8 * 2];
                if (mode == 1) {
                    d_61eb_d66e += d_53fc_138c[d_61eb_d5d8][0][week] % 32;
                    d_61eb_d670 += d_53fc_138c[d_61eb_d5d8][1][week] % 32;
                }
                sprintf(buf, "%d", d_61eb_d66e);
                f_1a83_3a43(2, d_61eb_d5c6 - 0.75 + d_61eb_da69, 1, buf);
                sprintf(buf, "%d", d_61eb_d670);
                f_1a83_3a43(39, d_61eb_d5c6 - 0.75 + d_61eb_da69, 1, buf);
            } else if (strstr(d_432e_c3d7, "Group")) {
                sprintf(buf, "%c", d_61eb_d5d8 + 1 > 2 ? 'B' : 'A');
                f_1a83_3a43(2, d_61eb_d5c6 - 0.75 + d_61eb_da69, 1, buf);
            } else if (strstr(d_432e_c3d7, "Section") || strstr(d_432e_c3d7, "Stage")) {
                sprintf(buf, "%c", f_1a83_29b8(week, d_61eb_d5d8 + 1) + 'A');
                f_1a83_3a43(2, d_61eb_d5c6 - 0.75 + d_61eb_da69, 1, buf);
            }
            d_61eb_d5c6 += 2;
        } else
            f_75a4_0eb4(d_61eb_d5d8, week);
    }
    f_1a83_5ce1();
    if (mode < 3)
        f_1a83_5540(0);
}

/* whether the cup round `kind` is played in `week` (-1: any; 9: a group round, n its
 * first fixture) */
char f_75a4_22b6(int kind, int week, int n)
{
    d_61eb_d9d1 = 0;
    if (kind == -1)
        d_61eb_d9d1 = -1;
    else if (kind == 1 && f_1a83_247b(week))
        d_61eb_d9d1 = -1;
    else if (kind == 2 && f_1a83_280b(week, n))
        d_61eb_d9d1 = -1;
    else if (kind == 3 && f_1a83_2644(week, n))
        d_61eb_d9d1 = -1;
    else if (kind == 4 && f_1a83_26ed(week, n))
        d_61eb_d9d1 = -1;
    else if (kind == 5 && f_1a83_277e(week, n))
        d_61eb_d9d1 = -1;
    else if (kind == 6 && f_1a83_29a3(week))
        d_61eb_d9d1 = -1;
    else if (kind == 7 && week <= 12)
        d_61eb_d9d1 = -1;
    else if (kind == 8 && f_1a83_2387(week) && n == 1)
        d_61eb_d9d1 = -1;
    else if (kind == 9 && f_1a83_2448(week)) {
        if (f_1a83_2387(week))
            d_61eb_d9d1 = n == 10 ? -1 : 0;
        else
            d_61eb_d9d1 = n == 1 ? -1 : 0;
    }
    return d_61eb_d9d1;
}

int f_75a4_23bf(int week, int n)
{
    if (f_1a83_247b(week))
        d_61eb_d66c = 2;
    if (f_1a83_280b(week, n))
        d_61eb_d66c = 3;
    else if (f_1a83_2644(week, n))
        d_61eb_d66c = 4;
    else if (f_1a83_26ed(week, n))
        d_61eb_d66c = 5;
    else if (f_1a83_277e(week, n))
        d_61eb_d66c = 6;
    else if (f_1a83_29a3(week))
        d_61eb_d66c = 7;
    return d_61eb_d66c;
}

void f_75a4_2459(int club, int week, int n)
{
    d_61eb_d9d2 = 0;
    if (club <= 37) {
        strcpy(d_432e_bca7, d_61eb_b0ec[club]);
        if (f_1a83_247b(week) || (f_1a83_280b(week, n + 1) && d_61eb_d5a2 <= 29) || f_1a83_29a3(week)
            || week <= 12) {
            sprintf(d_432e_c607, "%s", f_1a83_4876(f_1a83_6d8b(club) + 1, 1));
            d_61eb_d9d2 = f_1a83_2ad4(club) ? -1 : 0;
        } else if (f_1a83_2644(week, n + 1) || f_1a83_26ed(week, n + 1) || f_1a83_277e(week, n + 1)
                   || f_1a83_280b(week, n + 1)) {
            strcpy(d_432e_c607, "ITA");
            if (f_1a83_280b(week, n + 1))
            {
                d_61eb_d9d2 = f_1a83_2ad4(club) ? -1 : 0;
                d_61eb_d9d2;
            } else
                d_61eb_d9d2 = -1;
        } else {
            strcpy(d_432e_c607, "");
            d_61eb_d9d2 = f_1a83_2ad4(club) ? -1 : 0;
        }
    } else if (club <= 437) {
        strcpy(d_432e_bca7, d_61eb_b140[club]);
        sprintf(d_432e_c607, "%.3s", d_53fc_0000[d_53fc_1172[club]]);
    } else {
        strcpy(d_432e_bca7, d_61eb_b140[club]);
        strcpy(d_432e_c607, "NLGE");
    }
    if (!d_61eb_d9d2)
        d_61eb_d66a = d_61eb_d662;
    else
        d_61eb_d66a = d_61eb_d662 == 1 ? 6 : 12;
}

void f_75a4_264f(int a, int b, int c, int d)
{
    if (f_75a4_22b6(d, a, b) == 0)
        return;
    if (strstr(d_432e_c3d7, "1st Leg"))
        d_61eb_d672 = a == 15 || a == 98 ? a + 2 : a == 27 || a == 71 ? a + 6 : a + 4;
    for (d_61eb_d5aa = b - 1; d_61eb_d5aa <= c - 2; d_61eb_d5aa++) {
        for (d_61eb_d5f0 = d_61eb_d5aa + 1; d_61eb_d5f0 <= c - 1; d_61eb_d5f0++) {
            strcpy(d_432e_c657, f_1a83_3300(d_53fc_138c[d_61eb_d5aa][0][a] / 32));
            strcpy(d_432e_c6a7, f_1a83_3300(d_53fc_138c[d_61eb_d5f0][0][a] / 32));
            if (strcmp(d_432e_c657, d_432e_c6a7) > 0) {
                for (d_61eb_d674 = 0; d_61eb_d674 <= 1; d_61eb_d674++) {
                    f_215d_13f1(&d_53fc_138c[d_61eb_d5aa][d_61eb_d674][a],
                                &d_53fc_138c[d_61eb_d5f0][d_61eb_d674][a], 2);
                    if (strstr(d_432e_c3d7, "1st Leg")) {
                        f_215d_13f1(&d_53fc_138c[d_61eb_d5aa][d_61eb_d674][d_61eb_d672],
                                    &d_53fc_138c[d_61eb_d5f0][d_61eb_d674][d_61eb_d672], 2);
                    } else if (strstr(d_432e_c3d7, "2nd Leg")) {
                        d_61eb_d66c = f_75a4_23bf(a, b);
                        f_215d_13f1(&d_28d4_1398[d_61eb_d66c * 128 + d_61eb_d5aa * 2 + d_61eb_d674],
                                    &d_28d4_1398[d_61eb_d66c * 128 + d_61eb_d5f0 * 2 + d_61eb_d674], 1);
                    }
                }
            }
        }
    }
}

void f_75a4_2887(int n, int b, int c, int d)
{
    unsigned char i;
    int x;
    int y;
    char buf[320];

    if (n > 8) {
        f_1a83_48f9("");
        f_215d_088c(16);
        sprintf(buf, " %s %s ", d_432e_c3d7, d == 1 ? "Results" : "Fixtures");
        f_215d_08aa(28, 9, (strlen(buf) + 3.25) * 8 + 3, 22);
        f_1a83_3c08(3.25, 1.25, 0, 1, 0, buf);
        d_61eb_da69 = -3.125;
    } else {
        f_1a83_48f9(d_432e_c5b7);
        sprintf(buf, " %s ", d_432e_c3d7);
        f_215d_088c(16);
        f_215d_08aa(28, 31, (strlen(buf) + 3.25) * 8 + 3, 44);
        f_1a83_3c08(3.25, 4.0, 0, 1, 0, buf);
        d_61eb_da69 = 0;
    }
    x = 24;
    for (i = 0; i <= n - 1; i = i + 1) {
        y = i * 16 + 53 + d_61eb_da69 * 8;
        f_1a83_0134(x, y, x + 117, y + 15);
        f_1a83_0134(x + 118, y, x + 159, y + 15);
        f_1a83_0134(x + 160, y, x + 272, y + 15);
    }
    if (strstr(d_432e_c3d7, "2nd Leg")) {
        f_1a83_3450(0.875, d_61eb_da69 + 5.25, 1, 2, 0, "Ag");
        f_1a83_3450(37.875, d_61eb_da69 + 5.25, 1, 2, 0, "Ag");
    } else if (strstr(d_432e_c3d7, "Group") || strstr(d_432e_c3d7, "Section")
               || strstr(d_432e_c3d7, "Stage")) {
        f_1a83_3450(0.875, d_61eb_da69 + 5.25, 1, 2, 0, "Gr");
    }
}

void f_75a4_2b4e(void)
{
    char buf[320];

    switch (d_61eb_d5a2) {
    case 1: case 2: strcpy(d_432e_c6f7, "in six weeks"); break;
    case 3: case 4: strcpy(d_432e_c6f7, "in five weeks"); break;
    case 5: case 6: strcpy(d_432e_c6f7, "in a month"); break;
    case 7: case 8: strcpy(d_432e_c6f7, "in three weeks"); break;
    case 9: case 10: strcpy(d_432e_c6f7, "in two weeks"); break;
    case 11: case 12: strcpy(d_432e_c6f7, "next week"); break;
    }
    sprintf(buf, "Season starts %s", d_432e_c6f7);
    f_1a83_0bb7(buf);
}

/* the squad screen */
void f_75a4_2bd7(int team)
{
    char reserves;
    int i;

    reserves = 0;
    d_61eb_d678 = 0;
    for (;;) {
        for (i = 0; i < 30; i++)
            d_432e_1ee2[i] = -1;
        if (d_61eb_d678 > 0)
            f_75a4_3f4c(d_61eb_d678 - 1, team);
        f_1a83_5ccd();
        f_1a83_0007(1.5, team, reserves ? "Reserves" : "Squad");
        f_1a83_5ce1();
        for (d_61eb_d5d8 = 1; d_61eb_d5d8 <= 17; d_61eb_d5d8++) {
            switch (d_61eb_d5d8) {
            case 1: case 2: case 3: case 4: case 5: case 6: case 7:
            case 8: case 9: case 10: case 11: case 12: case 13: case 14:
            case 15: case 16:
                d_61eb_d5ec = 1;
                strcpy(d_432e_c747, f_1a83_2d52(d_61eb_d5d8, 1));
                break;
            case 17:
                strcpy(d_432e_c747, "SWP");
                d_61eb_d5ec = 20;
                break;
            }
            f_1a83_4d96(0, (d_61eb_d5d8 - 1) * 2.125 + 1.375 + (d_61eb_d5d8 > 11 ? 0.125 : 0)
                        + (d_61eb_d5d8 > 16 ? 0.125 : 0), 19.75,
                        d_61eb_d5ec / 16, d_61eb_d5ec % 16, d_61eb_d5d8 == 17 ? 0x16 : 0xf, d_432e_c747);
        }
        f_1a83_4d96(0, 1.375, 20.75, 1, 12, 0x24, " GLS");
        f_1a83_4d96(0, 6.125, 20.75, 1, 12, 0x24, " DSP");
        f_1a83_4d96(0, 10.875, 20.75, 1, 12, 0x24, " AVR");
        f_1a83_4d96(0, 15.625, 20.75, 1, 12, 0x24, " MOM");
        f_1a83_4d96(0, 25.125, 20.75, 1, 3, 0x24, " PRV");
        f_1a83_4d96(0, 29.875, 20.75, 1, 3, 0x23, " TCT");
        f_1a83_4d96(0, 34.5, 20.75, 1, 3, 0x23, " OPP");
        f_1a83_4d96(2, 1.5, 21.875, 1, 4, 0x90, "       DONE");
        f_1a83_4d96(2, 1.5, 4.0, 1, 14, 0x26, "Trns");
        f_1a83_4d96(2, 6.875, 4.0, 1, 14, 0x26, "Staf");
        f_1a83_4d96(2, 12.25, 4.0, 1, 14, 0x26, "Leag");
        f_1a83_4d96(2, 17.625, 4.0, 1, 14, 0x26, "Fixt");
        f_1a83_4d96(2, 23.0, 4.0, 1, 14, 0x26, "Accs");
        f_1a83_4d96(2, 28.375, 4.0, 1, 14, 0x26, "Info");
        f_1a83_4d96(2, 33.75, 4.0, 1, 8, 0x27, reserves ? "Senr" : "Rsrv");
        f_1a83_4d96(2, 20.125, 21.875, 1, 4, 0x2e, d_61eb_d678 == 1 ? " SQDL" : " DEFS");
        f_1a83_4d96(2, 26.5, 21.875, 1, 4, 0x2e, d_61eb_d678 == 2 ? " SQDL" : " MIDS");
        f_1a83_4d96(2, 32.875, 21.875, 1, 4, 0x2e, d_61eb_d678 == 3 ? " SQDL" : " ATTS");
        f_1a83_4d96(0, 20.375, 20.75, 1, 3, 0x24, " PEN");
        f_1a83_5ccd();
        if (d_61eb_d678 == 0)
            f_9f8d_151b(team, reserves);
        else
            f_75a4_39a0(d_61eb_d678 - 1, team);
        f_1a83_5ce1();
        d_61eb_d684 = 0;
        d_61eb_d9d4 = 0;
        for (;;) {
            if (d_61eb_d684 == 0)
                f_1a83_54f9(17);
            else
                f_1a83_5512();
            d_61eb_d59e = f_1a83_5296(0);
            if (d_61eb_d59e == 0) {
                f_7a45_0099(d_61eb_d684);
                if (d_61eb_d9d4) {
                    d_61eb_d9d4 = 0;
                    f_1a83_5117(17, 0);
                }
                continue;
            } else if (d_61eb_d59e >= 1 && d_61eb_d59e <= 16) {
                d_61eb_d67a = d_61eb_d684;
                if ((d_61eb_d684 = d_61eb_d59e) == d_61eb_d67a)
                    continue;
                if (d_61eb_d67a > 0)
                    f_1a83_5117(d_61eb_d67a, 0);
                if (d_61eb_d9d4 == 0)
                    continue;
                for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= d_61eb_d67c - 1; d_61eb_d5d8++) {
                    if (d_3334_f9f8[team][d_61eb_d684 - 1] == d_432e_1ee2[d_61eb_d5d8]) {
                        strcpy(d_432e_c747, f_1a83_2d52(d_61eb_d67a, 1));
                        if (d_61eb_d678 == 0) {
                            f_9f8d_1e48(d_61eb_d5d8);
                            f_1a83_3450(d_61eb_da6d, d_61eb_da55, 2, 1, 0, d_432e_c747);
                        } else
                            f_1a83_3450(1.375, d_61eb_d5d8 + 7.5, 2, 1, 0, d_432e_c747);
                    } else if (d_3334_f9f8[team][d_61eb_d67a - 1] == d_432e_1ee2[d_61eb_d5d8]) {
                        strcpy(d_432e_c747, f_1a83_2d52(d_61eb_d684, 1));
                        if (d_61eb_d678 == 0) {
                            f_9f8d_1e48(d_61eb_d5d8);
                            f_1a83_3450(d_61eb_da6d, d_61eb_da55, 2, 1, 0, d_432e_c747);
                        } else
                            f_1a83_3450(1.375, d_61eb_d5d8 + 7.5, 2, 1, 0, d_432e_c747);
                    }
                }
                f_215d_13f1(&d_3334_f9f8[team][d_61eb_d684 - 1], &d_3334_f9f8[team][d_61eb_d67a - 1], 2);
                f_7a45_0099(d_61eb_d684);
                f_1a83_5117(17, 0);
                d_61eb_d9d4 = 0;
                continue;
            } else if (d_61eb_d59e == 17) {
                d_61eb_d9d4 = !d_61eb_d9d4;
                if (d_61eb_d9d4 == 0)
                    f_1a83_5117(17, 0);
                continue;
            } else if (d_61eb_d59e >= 18 && d_61eb_d59e <= 21) {
                f_6ffe_0dbb(d_61eb_d59e - 18, team);
                break;
            } else if (d_61eb_d59e == 22) {
                if (d_3334_c8f2[0][team] == 0) {
                    f_7a45_0000("No matches played");
                    f_1a83_5117(22, 0);
                    f_7a45_0099(d_61eb_d684);
                    continue;
                } else {
                    FILE *fp;

                    f_215d_19eb(2);
                    fp = fopen(d_5313_0de8, "rb");
                    fseek(fp, (long)(d_3334_c8f2[0][team] - 1) * 175, 0);
                    fread(d_432e_87c8, 1, 175, fp);
                    fclose(fp);
                    f_7f4a_3a06(d_53fc_138e[d_3334_c8f2[1][team]][0][d_3334_c8f2[2][team]] / 32,
                                d_53fc_138e[d_3334_c8f2[1][team]][1][d_3334_c8f2[2][team]] / 32, -1);
                    break;
                }
            } else if (d_61eb_d59e == 23) {
                f_b6f6_0000(team);
                break;
            } else if (d_61eb_d59e == 24) {
                if (d_61eb_d9d5) {
                    if (d_61eb_d680 < 38)
                        f_6ffe_4a89(d_61eb_d680);
                    else
                        f_b6f6_0000(team == d_61eb_d666 ? d_61eb_d668 : d_61eb_d666);
                    break;
                }
                f_7a45_0000("No details yet");
                continue;
            } else if (d_61eb_d59e == 25) {
                if (d_61eb_d9d5) {
                    unsigned char first, subs;
                    char buf[100];

                    first = 0;
                    subs = 0;
                    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 15; d_61eb_d5d8++)
                        if (f_1a83_5a2e(d_3334_f9f8[team][d_61eb_d5d8]) || f_1a83_5a4c(d_3334_f9f8[team][d_61eb_d5d8])) {
                            if (d_61eb_d5d8 < 15)
                                first++;
                            else
                                subs++;
                        }
                    if (first < 15 || f_1a83_5d3d(team, d_61eb_d5a2, d_61eb_d5c2 + 1) && subs == 0) {
                        if (first + subs == 0)
                            f_7a45_0000("Nobody picked");
                        else
                            f_7a45_0000("Too few picked");
                        0;  /* code-free: the original's tail merging */
                    } else if (f_ab30_5236(team, d_61eb_d5a2, d_61eb_d5c2 + 1) != 0) {
                        sprintf(buf, "%d foreigners", d_61eb_d9bc);
                        f_7a45_0000(buf);
                        f_7a45_0099(d_61eb_d684);
                        continue;
                    } else
                        goto pick;
                } else
                    goto pick;
            } else if (d_61eb_d59e == 26) {
                f_6ffe_4e64(team);
                break;
            } else if (d_61eb_d59e == 27) {
                f_93a1_08e4(team);
                break;
            } else if (d_61eb_d59e == 28) {
                f_6ffe_527c(team);
                break;
            } else if (d_61eb_d59e == 29) {
                f_6ffe_430f(team);
                break;
            } else if (d_61eb_d59e == 30) {
                f_75a4_002a(team);
                break;
            } else if (d_61eb_d59e == 31) {
                f_a214_07c3(team);
                break;
            } else if (d_61eb_d59e == 32) {
                reserves = !reserves;
                d_61eb_d678 = 0;
                break;
            } else
        pick:
            if (d_61eb_d59e == 33 || d_61eb_d59e == 34 || d_61eb_d59e == 35) {
                strcpy(d_432e_c797, f_215d_1043(d_432e_ee7b[d_61eb_d59e]));
                if (strcmp(d_432e_c797, "SQDL") == 0)
                    d_61eb_d678 = 0;
                else if (strcmp(d_432e_c797, "DEFS") == 0)
                    d_61eb_d678 = 1;
                else if (strcmp(d_432e_c797, "MIDS") == 0)
                    d_61eb_d678 = 2;
                else
                    d_61eb_d678 = 3;
                reserves = 0;
                break;
            } else if (d_61eb_d59e == 36) {
                f_ab30_2768(team);
                break;
            } else if (d_61eb_d59e >= 37) {
                char out;

                d_61eb_d608 = d_61eb_d59e - 37;
                d_61eb_d5b8 = d_432e_1ee2[d_61eb_d608];
                if (d_61eb_d684 == 0) {
                    if (!f_1a83_5a4c(d_61eb_d5b8)) {
                        do {
                            f_a214_4120(d_61eb_d5b8, -1, -1);
                            f_87dc_4c9b(d_61eb_d5b8, d_61eb_d5ee);
                        } while (!d_61eb_d9ca);
                    } else
                        f_b26d_01de(team, f_1a83_5a80(d_61eb_d5b8));
                    break;
                }
                if (!f_1a83_5a4c(d_61eb_d5b8))
                    out = d_28d4_1958[20][d_61eb_d5b8] > 0;
                else
                    out = d_432e_3a2e[team][f_1a83_5a80(d_61eb_d5b8)] > 0;
                if (out)
                    f_7a45_0000("Not available");
                else {
                    if (d_3334_f9f8[team][d_61eb_d684 - 1] != d_61eb_d5b8) {
                        if (f_1a83_5a2e(d_3334_f9f8[team][d_61eb_d684 - 1]) || f_1a83_5a4c(d_3334_f9f8[team][d_61eb_d684 - 1])) {
                            for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= d_61eb_d67c - 1; d_61eb_d5d8++) {
                                if (d_3334_f9f8[team][d_61eb_d684 - 1] == d_432e_1ee2[d_61eb_d5d8]) {
                                    if (d_61eb_d678 == 0) {
                                        f_9f8d_1e48(d_61eb_d5d8);
                                        f_1a83_3450(d_61eb_da6d, d_61eb_da55, 1, 2, 0, "  ");
                                    } else
                                        f_1a83_3450(1.375, d_61eb_d5d8 + 7.5, 1, 2, 0, "  ");
                                }
                            }
                            if (!f_1a83_5a4c(d_3334_f9f8[team][d_61eb_d684 - 1]))
                                d_432e_45de[d_3334_f9f8[team][d_61eb_d684 - 1]].f7 = 0;
                            else
                                d_432e_3a3e[team][f_1a83_5a80(d_3334_f9f8[team][d_61eb_d684 - 1])] = 0;
                        }
                        if (!f_1a83_5a4c(d_61eb_d5b8)) {
                            if (d_432e_45de[d_61eb_d5b8].f7)
                                d_3334_f9f8[team][f_1a83_1dd9(d_61eb_d5b8)] = 1499;
                        } else if (d_432e_3a3e[team][f_1a83_5a80(d_61eb_d5b8)])
                            d_3334_f9f8[team][f_1a83_1dd9(d_61eb_d5b8)] = 1499;
                        d_3334_f9f8[team][d_61eb_d684 - 1] = d_61eb_d5b8;
                        if (!f_1a83_5a4c(d_61eb_d5b8))
                            d_432e_45de[d_61eb_d5b8].f7 = 1;
                        else
                            d_432e_3a3e[team][f_1a83_5a80(d_61eb_d5b8)] = -1;
                        strcpy(d_432e_c747, f_1a83_2d52(d_61eb_d684, 1));
                        if (d_61eb_d678 == 0) {
                            f_9f8d_1e48(d_61eb_d608);
                            f_1a83_3450(d_61eb_da6d, d_61eb_da55, 2, 1, 0, d_432e_c747);
                        } else
                            f_1a83_3450(1.375, d_61eb_d608 + 7.5, 2, 1, 0, d_432e_c747);
                    }
                    f_1a83_5117(d_61eb_d59e, 0);
                }
            } else
                return;

            f_7a45_0099(d_61eb_d684);
        }
    }
}

/* the squad screen's attribute columns: x position and heading */
static struct col d_61eb_1464[] = {
    {14.875, "PS"}, {17.0, "TK"}, {19.125, "PA"}, {21.25, "HD"}, {23.375, "FL"},
    {25.5, "CR"}, {27.625, "AG"}, {29.75, "IF"}, {31.875, "SDE"}, {34.375, "FIT"},
    {36.875, "AVR"}
};

void f_75a4_39a0(int mode, int team)
{
    char buf[320];

    if (mode == 0)
        strcpy(buf, " DEFENDERS");
    else if (mode == 1)
        strcpy(buf, " MIDFIELDERS");
    else
        strcpy(buf, " ATTACKERS");
    f_1a83_3450(1.375, 6.5, 0, 1, 0x68, buf);
    for (d_61eb_d686 = 0; d_61eb_d686 <= 10; d_61eb_d686++)
        f_1a83_3450(d_61eb_1464[d_61eb_d686].x - 0.125, 6.5, 0, 6, d_61eb_d686 > 7 ? 0x12 : 0xf,
                    d_61eb_1464[d_61eb_d686].title);
    for (d_61eb_d5d4 = 1; d_61eb_d5d4 <= 12; d_61eb_d5d4++) {
        if (d_61eb_d5d4 & 1) {
            d_61eb_d688 = 14;
            d_61eb_d68a = 4;
        } else {
            d_61eb_d688 = 8;
            d_61eb_d68a = 12;
        }
        d_61eb_d5b8 = d_432e_1ee0[d_61eb_d5d4];
        strcpy(d_432e_c7e7, "");
        d_61eb_d5e0 = 0x12;
        if (d_61eb_d5b8 > -1) {
            if (*(d_28d4_1958[20] + d_61eb_d5b8) > 0) {
                if (*(d_28d4_1958[19] + d_61eb_d5b8) == 50)
                    strcpy(d_432e_c7e7, "ct");
                else if (*(d_28d4_1958[19] + d_61eb_d5b8) == 27) {
                    strcpy(d_432e_c7e7, "su");
                    d_61eb_d5b8;    /* code-free: keeps this copy of the call */
                }
                else
                    strcpy(d_432e_c7e7, "ij");
            } else if (d_432e_45de[d_61eb_d5b8].f7) {
                strcpy(d_432e_c7e7, f_1a83_2d52(f_1a83_1dd9(d_61eb_d5b8) + 1, 1));
                d_61eb_d5e0 = 0x21;
            }
            f_1a83_3450(1.375, d_61eb_d5d4 + 6.5, d_61eb_d5e0 / 16, d_61eb_d5e0 % 16, 12, d_432e_c7e7);
            sprintf(buf, " %.14s", f_1a83_45b4(d_61eb_d5b8));
            f_1a83_4d96(0, 3.125, d_61eb_d5d4 + 6.5, 1, d_61eb_d688, 0x5a, buf);
        } else {
            f_1a83_3450(1.375, d_61eb_d5d4 + 6.5, d_61eb_d5e0 / 16, d_61eb_d5e0 % 16, 12, "");
            f_1a83_3450(3.125, d_61eb_d5d4 + 6.5, 1, d_61eb_d688, 0x5a, "");
        }
        for (d_61eb_d686 = 0; d_61eb_d686 <= 10; d_61eb_d686++) {
            if (d_61eb_d5b8 > -1) {
                switch (d_61eb_d686) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                    sprintf(d_432e_c837, "%02d", d_28d4_1958[d_61eb_d686 + 1][d_61eb_d5b8]);
                    d_61eb_d5ec = 1;
                    break;
                case 6:
                    sprintf(d_432e_c837, "%02d", d_28d4_1958[10][d_61eb_d5b8]);
                    d_61eb_d5ec = 6;
                    break;
                case 7:
                    sprintf(d_432e_c837, "%02d", d_28d4_1958[12][d_61eb_d5b8]);
                    d_61eb_d5ec = 6;
                    break;
                case 8:
                    strcpy(d_432e_c837, "");
                    if (d_432e_45de[d_61eb_d5b8].f4)
                        strcat(d_432e_c837, "R");
                    if (d_432e_45de[d_61eb_d5b8].f5)
                        strcat(d_432e_c837, "L");
                    if (d_432e_45de[d_61eb_d5b8].f6)
                        strcat(d_432e_c837, "C");
                    if (strlen(d_432e_c837) == 1) {
                        d_432e_c837[1] = d_432e_c837[0];
                        d_432e_c837[0] = d_432e_c837[2] = ' ';
                        d_432e_c837[3] = 0;
                    } else if (strlen(d_432e_c837) == 2)
                        strcat(d_432e_c837, " ");
                    d_61eb_d5ec = 6;
                    break;
                case 9:
                    if (*(d_28d4_1958[20] + d_61eb_d5b8) == 0)
                        sprintf(d_432e_c837, "%03d", d_28d4_1958[21][d_61eb_d5b8]);
                    else
                        strcpy(d_432e_c837, "");
                    d_61eb_d5ec = 6;
                    break;
                case 10:
                    if (d_3334_0000[12][d_61eb_d5b8] > 0) {
                        float avg;

                        d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
                        avg = (float)d_61eb_dbb8[2][d_61eb_d5b8] / d_3334_0000[12][d_61eb_d5b8];
                        sprintf(d_432e_c837, "%3.1f", avg);
                    } else
                        strcpy(d_432e_c837, "");
                    d_61eb_d5ec = 9;
                    break;
                }
            } else
                strcpy(d_432e_c837, "");
            f_1a83_3450(d_61eb_1464[d_61eb_d686].x, d_61eb_d5d4 + 6.5, d_61eb_d5ec, d_61eb_d68a,
                        d_61eb_d686 > 7 ? 0x12 : 0xf, d_432e_c837);
        }
    }
}

void f_75a4_3f4c(int a, int team)
{
    char sel[30];

    memset(sel, 0, 30);
    d_61eb_d9d8 = 0;
    d_61eb_d67c = 0;
    for (d_61eb_d5d4 = 1; d_61eb_d5d4 <= 12; d_61eb_d5d4++) {
        if (d_61eb_d9d8 == 0) {
            d_61eb_d5b8 = -1;
            for (d_61eb_d5f4 = 0; d_61eb_d5f4 <= d_3334_beca[team] - 1; d_61eb_d5f4++) {
                char ok;

                d_61eb_d68c = d_28d4_081c[team][d_61eb_d5f4];
                if (a == 0)
                    ok = d_432e_45de[d_61eb_d68c].f1;
                if (a == 1)
                    ok = d_432e_45de[d_61eb_d68c].f2;
                if (a == 2)
                    ok = d_432e_45de[d_61eb_d68c].f3;
                if (ok && sel[d_61eb_d5f4] == 0) {
                    if (d_3334_0000[5][d_61eb_d68c] + d_3334_0000[0][d_61eb_d68c] > 0) {
                        d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
                        d_61eb_da71 = (d_61eb_dbb8[1][d_61eb_d68c] + d_61eb_dbb8[0][d_61eb_d68c])
                                      / ((float)d_3334_0000[5][d_61eb_d68c] + d_3334_0000[0][d_61eb_d68c]);
                    } else
                        d_61eb_da71 = 0;
                    if (d_61eb_da71 > d_61eb_da75 || d_61eb_d5b8 == -1) {
                        d_61eb_da75 = d_61eb_da71;
                        d_61eb_d5b8 = d_61eb_d68c;
                        d_61eb_d608 = d_61eb_d5f4;
                    }
                }
            }
        }
        if (d_61eb_d5b8 > -1) {
            sel[d_61eb_d608] = -1;
            d_432e_1ee0[d_61eb_d5d4] = d_61eb_d5b8;
            d_61eb_d67c++;
        } else
            d_61eb_d9d8 = -1;
    }
}

void f_75a4_414f(int team)
{
    f_1a83_2da6(0, "Select Formation", "*Exit|4-4-2|4-2-4|Sweeper|5-3-2|4-3-3|5-2-3|4-5-1|Anchor Man|Support Man|");
    if (d_61eb_d59e > 0) {
        d_61eb_d6ae = d_61eb_d992 / 16;
        d_61eb_d992 = d_61eb_d59e + d_61eb_d6ae * 16 - 1;
        f_9f8d_0ea8(team, d_61eb_d59e - 1, 0);
        for (d_61eb_d5aa = 11; d_61eb_d5aa <= 15; d_61eb_d5aa++)
            if (d_3334_fefe[team == d_61eb_d668][d_61eb_d5aa] < 2)
                for (d_61eb_d5f0 = 0; d_61eb_d5f0 <= 2; d_61eb_d5f0++)
                    d_3334_f278[team][d_61eb_d5f0][d_61eb_d5aa] =
                        d_3334_f278[team][d_61eb_d5f0][d_28d4_194e[team == d_61eb_d668][d_61eb_d5aa - 11]];
        d_3334_d90a[d_3334_ca6e[team]] = d_61eb_d992;
    }
}

void f_75a4_426e(int team)
{
    char s[320];

    strcpy(d_432e_ba27, "");
    for (d_61eb_d5f6 = 0; d_61eb_d5f6 <= 4; d_61eb_d5f6++) {
        strcpy(s, d_53fc_06d6[d_61eb_d5f6]);
        s[0] = toupper(s[0]);
        strcat(d_432e_ba27, s);
        strcat(d_432e_ba27, "|");
    }
    sprintf(s, "*Exit|%s", d_432e_ba27);
    f_1a83_2da6(0, "Select Style", s);
    if (d_61eb_d59e > 0) {
        d_61eb_d6b0 = d_61eb_d992 % 16;
        d_61eb_d992 = (d_61eb_d59e - 1) * 16 + d_61eb_d6b0;
        d_3334_d90a[d_3334_ca6e[team]] = d_61eb_d992;
    }
}
