/* @at 7732:0000 */
/* @data 60ae:137a */
/* @module */

/* Overlay 2: club information: the accounts, board confidence, resignation and manager
 * jobs, match reports, background picture, save game, quitting, the week's fixture and
 * result titles and lists, cup rounds, the squad screen and tactics. CM93's version of
 * CM1's 6E68.C, whose formation editor (f_6e68_4b39, with its position table) CM93 moved
 * to overlay be31. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <mem.h>
#include <ctype.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_7732_0000(void);
void f_7732_0027(int team);
void f_7732_0616(void);
void f_7732_07f1(int team);
void f_7732_0855(int team);
void f_7732_09c4(int team);
void f_7732_0d91(void);
void f_7732_0de5(void);
void f_7732_0f57(void);
void f_7732_10b7(int comp, int week);
void f_7732_1199(void);
void f_7732_12ec(void);
void f_7732_136d(int week, int mode, int x);
void f_7732_216e(int week, int mode, int from, int to, int kind);
char f_7732_284d(int kind, int week, int n);
int f_7732_292a(int week, int n);
void f_7732_29b4(int club, int week, int n);
void f_7732_2bbc(int a, int b, int c, int d);
void f_7732_2e19(int n, int b, int c, int d);
void f_7732_3167(void);
void f_7732_31e2(int team);
void f_7732_42c5(int mode, int team);
void f_7732_4912(int a, int team);
void f_7732_4b16(int team);
void f_7732_4c3e(int team);

void f_9107_1422(void);
void f_a3de_10b8(int);
void f_9107_1c1c(int team);
void f_14bc_000b(float x, int team, char far *title);
void f_14bc_3672(float x, float y, int bg, int fg, int w, char far *s);
void f_14bc_3e40(float x, float y, int bg, int fg, int w, char far *s);
void far *f_1bd3_1617(int handle, int page);
long f_a3de_21b9(int x);
long f_1bd3_131c(long a, long b);
void f_14bc_58db(int a);
void f_14bc_60ca(void);
void f_14bc_60da(void);
void f_14bc_4bd3(char far *title);
extern int d_60ae_fde2;
extern int d_60ae_fdd6;
extern int d_60ae_dd60;
extern char (far *d_60ae_ddb6)[101];
extern char far d_2289_5218[];
extern char far d_2289_51c8[];
extern char far d_2289_4c5a[];
extern char far d_2289_4c0a[];
extern char far d_2289_26fc[];
extern long far d_323f_3f94[][80];
extern unsigned char far d_323f_1c08[];
void f_14bc_0b83(char far *);
void f_a3de_14f5(char all);
char far *f_14bc_490d(int manager, char full);
void f_14bc_2f90(int n, char far *title, char far *items);
void f_96bb_18d8(int club);
void f_9107_3ff7(int club, int a);
unsigned f_1bd3_0b1b(char far *s, char far *set);
void f_14bc_50f8(int a, float x, float y, int c, int d, int e, char far *s);
int f_14bc_5635(int a);
extern char d_60ae_d97b;
extern char d_60ae_d971;
extern int d_60ae_dd5a;
extern int d_60ae_dd9c;
extern int d_60ae_dd0e;
extern int d_60ae_dd56;
extern int d_60ae_dda0;
extern int d_60ae_dce6;
extern int d_60ae_dce8;
extern int d_60ae_dcf0;
extern int d_60ae_d9bc;
extern int d_60ae_d9ba;
extern int d_60ae_d9b8;
extern int d_60ae_d9b6;
extern long d_60ae_d82b;
extern long d_60ae_d827;
extern long d_60ae_d823;
extern float d_60ae_d8e3;
extern float d_60ae_d8eb;
extern char near *d_60ae_b572[];
extern long (far *d_60ae_fade)[80];
extern unsigned char far d_323f_4e00[];
extern unsigned char far d_323f_4cb8[];
struct col { float x; char far *title; };
void f_14bc_3334(int last);
void f_ad38_4a1f(void);
void f_70a9_187c(int mode);
int f_a694_3ce4(int p);
void f_9e77_4e5e(int n);
void f_a3de_069a(int t);
void f_b628_296c(char team);
void f_b628_73cb(void);
char f_14bc_248a(int);
char f_14bc_2594(int);
char f_14bc_25c5(int);
char f_14bc_2620(int);
char f_14bc_2677(int);
char f_14bc_26d6(int);
char f_14bc_2729(int);
char f_14bc_2b82(int);
void f_817e_3d44(int a, int b, char c);
void f_9e77_49ee(char far *s);
void f_1bd3_1a23();
void f_1bd3_05af(char reset);
void f_1bd3_067c(void);
void f_9e77_3a0d(void);
void f_1bd3_1215(void);
extern char d_60ae_d96f;
extern char d_60ae_d970;
extern char d_60ae_d977;
extern int d_60ae_d9b4;
extern int d_60ae_dce2;
extern int d_60ae_dce4;
extern int d_60ae_dcea;
extern int d_60ae_dcec;
extern int d_60ae_dcee;
extern int d_60ae_dd2a;
extern char far d_2289_0078[];
extern char far d_2289_4ba6[];
extern char far d_2289_4be2[];
extern char far d_2289_4bf6[];
extern char far d_2289_73ec[];
extern int far d_2289_f108[][16];
extern unsigned char far d_323f_1e92[];
extern unsigned char far d_323f_211c[];
extern unsigned char far d_323f_23a6[];
extern unsigned char far d_323f_28ba[];
extern unsigned char far d_323f_3d0a[];
extern int far d_323f_47b4[];
extern unsigned char far d_323f_4c14[][82];
extern unsigned char far d_3c35_0000[][1860];
extern int far d_471b_b4de[];
extern int far d_471b_b5a2[];
extern int far d_54d9_11fe[][2][98];
void f_1bd3_0b10(int on);
int f_1bd3_1369(int a, int b);
void f_14bc_356a(int x, int y, int colour, char far *s);
void f_14bc_38bc(float x, float y, int colour, char far *s);
void f_14bc_3c75(float x, float y, int colour, char far *s);
char f_14bc_2784(int, int);
char f_14bc_2835(int, int);
char f_14bc_28cc(int, int);
char f_14bc_295d(int, int);
char f_14bc_2a01(int);
char f_14bc_2a5c(int);
char f_14bc_2b02(int);
char f_14bc_2b9f(int, int);
extern float d_60ae_d8d7;
extern int d_60ae_dcc8;
extern int d_60ae_dcca;
extern int d_60ae_dccc;
extern int d_60ae_dcce;
extern int d_60ae_dcd0;
extern int d_60ae_dcd2;
extern int d_60ae_dcd4;
extern int d_60ae_dcd6;
extern int d_60ae_dcda;
extern int d_60ae_dcdc;
extern int d_60ae_dcde;
extern int d_60ae_dce0;
extern int d_60ae_dd46;
extern int d_60ae_dd72;
extern char far d_2289_4818[];
extern char far d_2289_4868[];
extern char far d_2289_48b8[];
extern char far d_2289_4908[];
extern char far d_2289_4958[];
extern char far d_2289_49a8[];
extern char far d_2289_49f8[];
extern char far d_2289_4a48[];
extern char far d_2289_4a98[];
extern char far d_2289_4cfa[];
extern char far d_2289_5178[];
extern int far d_2289_d678[];
extern int far d_471b_d8c6[];
extern char far d_471b_b01c[];
char f_14bc_2cc0(int x);
char far *f_14bc_3523(int x);
char far *f_14bc_4b12(int division, char full);
void f_14bc_0164(int x1, int y1, int x2, int y2);
void f_1bd3_13a3(void far *a, void far *b, int n);
void f_1bd3_08cb(int c);
void f_1bd3_08e1(int x1, int y1, int x2, int y2);
extern char d_60ae_d96d;
extern char d_60ae_d96e;
extern int d_60ae_dd92;
extern int d_60ae_dd48;
extern int d_60ae_dcc4;
extern int d_60ae_dcc6;
extern char near *d_60ae_b61a[];
extern char far d_2289_47c8[];
extern char far d_2289_4778[];
extern char far d_2289_4728[];
extern char far * far d_54d9_0000[];
extern unsigned char far d_54d9_0fe4[];
void f_14bc_589c(int team);
void f_14bc_58b1(void);
void f_14bc_548f(int a, char b);
char far *f_14bc_2f2c(int x, char c);
int f_14bc_1eb7(int player);
char f_14bc_5e18(int player);
char f_14bc_5e32(int player);
unsigned char f_14bc_5e60(int player);
char f_14bc_612e(char team, char week, char n);
char far *f_1bd3_100b(char far *s);
void f_a3de_16b2(int team, char reserves);
void f_a3de_2142(int line);
void f_7c74_0000(char far *msg);
void f_7c74_00ce(int slot);
void f_70a9_0e62(int mode, int team);
void f_70a9_5667(int team);
void f_70a9_5bc8(int team);
void f_70a9_6083(int team);
void f_70a9_4e55(int team);
void f_96bb_0a22(int team);
void f_a694_09a0(int team);
void f_a694_49c9(int player, int a, char b);
void f_8aa1_4f06(int player, int a);
void f_be31_0000(char team);
unsigned char f_b628_58ba(int team);
void f_b628_2bf7(char team);
void f_ad38_34a0(char team, char n);
struct flags_a { unsigned char b0; unsigned f8 : 1; unsigned f9 : 1; unsigned : 6; unsigned : 2; unsigned f18 : 1; unsigned f19 : 1; unsigned : 4; unsigned : 0; unsigned f24 : 1; unsigned : 3; unsigned f28 : 1; unsigned : 1; unsigned f30 : 1; unsigned : 1; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
extern union flags d_60ae_ddbe[];
extern char d_60ae_d96a;
extern char d_60ae_d96b;
extern char d_60ae_d975;
extern unsigned char d_60ae_d983;
extern int d_60ae_dcb4;
extern int d_60ae_dcb8;
extern int d_60ae_dcbc;
extern int d_60ae_dcbe;
extern int d_60ae_dcc0;
extern int d_60ae_dd30;
extern int d_60ae_dd4a;
extern int d_60ae_dd4c;
extern int d_60ae_dd76;
extern int d_60ae_dd84;
extern float d_60ae_d8d3;
extern char far d_2289_0e60[][40];
extern char far d_2289_4688[];
extern char far d_2289_46d8[];
extern unsigned char far d_2289_a0f6[][80];
extern unsigned char far d_2289_a106[][80];
extern int far d_2289_d6c8[];
extern int far d_323f_0592[][14];
extern int far d_323f_4494[][80];
extern unsigned char far d_471b_0000[][1860];
extern int far d_54d9_1200[][2][98];
char far *f_14bc_483d(int player);
void f_a3de_0f2a(int t, int k, char c);
extern char d_60ae_d967;
extern int d_60ae_dcb2;
extern int d_60ae_dcb0;
extern int d_60ae_dcae;
extern int d_60ae_dcac;
extern int d_60ae_dd64;
extern int d_60ae_dd58;
extern int d_60ae_dd44;
extern int d_60ae_dd42;
extern int d_60ae_d9aa;
extern int d_60ae_dc88;
extern int d_60ae_dc8a;
extern int d_60ae_fde6;
extern float d_60ae_d8cf;
extern float d_60ae_d8cb;
extern int (far *d_60ae_fae6)[1860];
extern int far d_471b_b7a8[][26];
extern unsigned char far d_471b_ae55[][3];
extern int far d_2289_d6c6[];
extern char far d_2289_4638[];
extern char far d_2289_45e8[];
extern char far d_2289_5308[];
extern char far * far d_54d9_0619[];
extern unsigned char far d_323f_4e52[];
extern unsigned char far d_323f_0538[][14];
extern unsigned char far d_323f_0e8a[][3][14];
extern unsigned char far d_323f_2630[];

/* the accounts' items */
static char far *d_60ae_137a[] = {
    "GATE RECEIPTS", "SPONSOR PAYMENT", "PLAYERS SOLD", "INTEREST", "TELEVISION NETS",
    "CASH PRIZES", "OTHER GAINS", "STAFF WAGES", "RATES AND TAXES", "PLAYERS BOUGHT",
    "INTEREST ON OVERDRAFT", "GROUND MAINTENANCE", "LEAGUE FINES", "GENERAL EXPENSES"
};

void f_7732_0000(void)
{
    if (d_60ae_d97b == 0)
        f_9107_1422();
    else {
        f_a3de_10b8(-1);
        f_9107_1c1c(d_60ae_dd5a);
    }
}

void f_7732_0027(int team)
{
    char buf[320];

    if (d_60ae_dd9c > 2) {
        f_14bc_60ca();
        f_14bc_000b(-1, team, "Accounts");
        f_14bc_3672(1, 5.25, 6, 2, 0, " ITEM                   ");
        f_14bc_3672(20, 5.25, 3, 6, 0, " INCOME     ");
        f_14bc_3672(30, 5.25, 3, 6, 0, " SPENDING   ");
        d_60ae_d82b = 0;
        d_60ae_d827 = 0;
        for (d_60ae_dd0e = 0; d_60ae_dd0e <= 13; d_60ae_dd0e++) {
            strcpy(buf, d_60ae_137a[d_60ae_dd0e]);
            if (d_60ae_dd0e == 0 && d_60ae_dd9c < 8)
                strcpy(buf, "GATE + SEASON TICKETS");
            sprintf(d_2289_5218, " %-23s", buf);
            d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 0);
            sprintf(d_2289_51c8, "%-10ld", (d_60ae_fade + 16)[d_60ae_dd0e][team]);
            if (d_60ae_dd0e < 7) {
                f_14bc_3672(1, d_60ae_dd0e + 6.5, 1, 4, 0, d_2289_5218);
                sprintf(buf, " +%s", d_2289_51c8);
                f_14bc_3672(20, d_60ae_dd0e + 6.5, 1, 12, 0, buf);
                d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 0);
                d_60ae_d82b += (d_60ae_fade + 16)[d_60ae_dd0e][team];
            } else {
                f_14bc_3672(1, d_60ae_dd0e + 6.75, 1, 4, 0, d_2289_5218);
                sprintf(buf, " -%s", d_2289_51c8);
                f_14bc_3672(30, d_60ae_dd0e + 6.75, 1, 2, 0, buf);
                d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 0);
                d_60ae_d827 += (d_60ae_fade + 16)[d_60ae_dd0e][team];
            }
        }
        f_14bc_3672(1, 21, 6, 3, 0, " TOTALS                 ");
        sprintf(buf, " +%-10ld", d_60ae_d82b);
        f_14bc_3672(20, 21, 4, 1, 0, buf);
        sprintf(buf, " -%-10ld", d_60ae_d827);
        f_14bc_3672(30, 21, 2, 1, 0, buf);
        strcpy(d_2289_4c5a, "");
        if (d_60ae_d82b - d_60ae_d827 > 0)
            sprintf(d_2289_4c5a, "(+%ld) ", d_60ae_d82b - d_60ae_d827);
        else if (d_60ae_d827 - d_60ae_d82b > 0)
            sprintf(d_2289_4c5a, "(-%ld) ", d_60ae_d827 - d_60ae_d82b);
        sprintf(buf, " %ld AVAILABLE %s",
                f_1bd3_131c(d_323f_3f94[0][team] - f_a3de_21b9(team), 0L), d_2289_4c5a);
        f_14bc_3672(1, 24, 1, 12, 0, buf);
        d_60ae_d823 = f_a3de_21b9(team) - d_323f_3f94[0][team];
        sprintf(buf, " OVERDRAFT %ld (MAX %ld) ", d_60ae_d823 > 0 ? d_60ae_d823 : 0L,
                f_a3de_21b9(team));
        f_14bc_3672(1, 22.5, 1, 8, 0, buf);
        f_14bc_60da();
        f_14bc_58db(0);
    } else
        f_14bc_0b83("No summary for last week");
}

void f_7732_0616(void)
{
    char buf[320];

    if (d_60ae_dce6 > 0) {
        f_a3de_14f5(0);
        if (d_60ae_d9bc > -1) {
            do {
                f_14bc_2f90(0, f_14bc_490d(d_60ae_d9bc, 0), "*Exit|Board Confidence|Resign|");
                d_60ae_d9ba = d_60ae_dda0;
                if (d_60ae_d9ba == 1) {
                    if (d_323f_3f94[0][d_323f_1c08[d_60ae_d9bc]] < 0)
                        f_14bc_0b83("We are in financial trouble");
                    else {
                        if (d_323f_4e00[d_323f_1c08[d_60ae_d9bc]] <= 24)
                            strcpy(d_2289_4c0a, "are considering your future");
                        else if (d_323f_4e00[d_323f_1c08[d_60ae_d9bc]] <= 39)
                            strcpy(d_2289_4c0a, "are concerned");
                        else if (d_323f_4e00[d_323f_1c08[d_60ae_d9bc]] <= 59)
                            strcpy(d_2289_4c0a, "are not concerned");
                        else if (d_323f_4e00[d_323f_1c08[d_60ae_d9bc]] <= 79)
                            strcpy(d_2289_4c0a, "are pleased");
                        else if (d_323f_4e00[d_323f_1c08[d_60ae_d9bc]] <= 94)
                            strcpy(d_2289_4c0a, "are very pleased");
                        else
                            strcpy(d_2289_4c0a, "are delighted");
                        sprintf(buf, "%d%% : We %s", d_323f_4e00[d_323f_1c08[d_60ae_d9bc]], d_2289_4c0a);
                        f_14bc_0b83(buf);
                    }
                } else if (d_60ae_d9ba == 2) {
                    f_7732_07f1(d_60ae_d9bc);
                    if (d_60ae_d971)
                        d_60ae_d9ba = 0;
                }
            } while (d_60ae_d9ba != 0);
        }
    } else
        f_14bc_0b83("Not available on demo");
}

void f_7732_07f1(int team)
{
    d_60ae_d971 = 0;
    f_14bc_2f90(0, "Resignation", "*Exit|Resign|");
    d_60ae_dcf0 = d_60ae_dda0;
    if (d_60ae_dcf0 > 0) {
        f_96bb_18d8(d_323f_1c08[d_60ae_d9bc]);
        f_9107_3ff7(d_323f_1c08[d_60ae_d9bc], 1);
        d_60ae_d971 = -1;
    }
}

void f_7732_0855(int team)
{
    char num[4];
    char buf[320];

    if (d_60ae_dce8 > 0) {
        do {
            sprintf(buf, "The %s job", (char far *)d_60ae_b572[team]);
            f_14bc_2f90(0, buf, "Exit|Candidates|Apply For It|");
            d_60ae_d9b8 = d_60ae_dda0;
            if (d_60ae_d9b8 == 1)
                f_7732_09c4(team);
            else if (d_60ae_d9b8 == 2) {
                f_a3de_14f5(-1);
                if (d_60ae_d9bc > -1) {
                    sprintf(num, "%03d", d_60ae_d9bc);
                    d_60ae_ddb6 = f_1bd3_1617(d_60ae_fdd6, 0);
                    if (f_1bd3_0b1b(d_60ae_ddb6[team], num) == 0) {
                        sprintf(buf, "%s receive your application", (char far *)d_60ae_b572[team]);
                        f_14bc_0b83(buf);
                        d_60ae_ddb6 = f_1bd3_1617(d_60ae_fdd6, 1);
                        strcat(d_60ae_ddb6[team], num);
                        strcat(d_60ae_ddb6[team], " ");
                    } else
                        f_14bc_0b83("You are already on the list");
                }
            }
        } while (d_60ae_d9b8 != 0);
    } else
        f_7732_09c4(team);
}

void f_7732_09c4(int team)
{
    char buf[320];

    sprintf(buf, "The %s job", (char far *)d_60ae_b572[team]);
    f_14bc_4bd3(buf);
    f_14bc_3e40(1.25, 4.0, d_323f_4cb8[team] / 16, d_323f_4cb8[team] % 16, 0, " Candidates ");
    f_14bc_3672(1.125, 7.0, 2, 1, 0x4c, " NAME");
    f_14bc_3672(10.875, 7.0, 2, 1, 0x49, " CLUB");
    f_14bc_3672(20.25, 7.0, 2, 1, 0x4c, " NAME");
    f_14bc_3672(30, 7.0, 2, 1, 0x49, " CLUB");
    d_60ae_ddb6 = f_1bd3_1617(d_60ae_fdd6, 0);
    strcpy(d_2289_26fc, d_60ae_ddb6[team]);
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= 21; d_60ae_dd60++) {
        d_60ae_d8e3 = d_60ae_dd60 > 10 ? 20.25 : 1.125;
        d_60ae_d8eb = d_60ae_dd60 + 9 - (d_60ae_dd60 > 10 ? 11 : 0);
        if ((d_60ae_dd60 + 1) * 4 <= strlen(d_2289_26fc)) {
            strncpy(buf, &d_2289_26fc[d_60ae_dd60 * 4], 3);
            buf[3] = 0;
            d_60ae_d9b6 = atol(buf);
            sprintf(buf, " %s", f_14bc_490d(d_60ae_d9b6, -1));
            f_14bc_3672(d_60ae_d8e3, d_60ae_d8eb, d_60ae_d9b6 > 645 ? 6 : 1,
                        d_60ae_dd60 & 1 ? 15 : 3, 0x4c, buf);
            if (d_323f_1c08[d_60ae_d9b6] < 255)
                sprintf(buf, " %.11s", (char far *)d_60ae_b572[d_323f_1c08[d_60ae_d9b6]]);
            else
                strcpy(buf, " None");
            f_14bc_3672(d_60ae_d8e3 + 9.75, d_60ae_d8eb, 1, 4, 0x49, buf);
        } else {
            f_14bc_3672(d_60ae_d8e3, d_60ae_d8eb, 1, d_60ae_dd60 & 1 ? 15 : 3, 0x4c, "");
            f_14bc_3672(d_60ae_d8e3 + 9.75, d_60ae_d8eb, 1, 4, 0x49, "");
        }
    }
    f_14bc_50f8(2, 1.25, 22.5, 1, 4, 0x12d, "                 EXIT");
    do
        d_60ae_dda0 = f_14bc_5635(d_60ae_dd56);
    while (d_60ae_dda0 == 0);
}

void f_7732_0d91(void)
{
    do {
        f_14bc_2f90(0, "Managerial", "*Exit|Manager History|Add Manager|Job News|");
        d_60ae_d9b4 = d_60ae_dda0;
        if (d_60ae_d9b4 == 1)
            f_ad38_4a1f();
        else if (d_60ae_d9b4 == 2)
            f_7732_0de5();
        else if (d_60ae_d9b4 == 3)
            f_70a9_187c(2);
    } while (d_60ae_d9b4 != 0);
}

void f_7732_0de5(void)
{
    int i;

    if (d_60ae_dce8 == 4)
        f_14bc_0b83("Maximum four players");
    else {
        d_60ae_dce6++;
        d_60ae_dce8++;
        f_a3de_10b8(d_60ae_dce8 - 1);
        d_323f_1c08[d_323f_47b4[d_60ae_dd5a]] = 255;
        d_323f_211c[d_323f_47b4[d_60ae_dd5a]] = 0;
        d_60ae_dce4 = d_60ae_dce8 + 645;
        d_323f_47b4[d_60ae_dd5a] = d_60ae_dce4;
        d_323f_4c14[0][d_60ae_dd5a] = 8;
        d_323f_4e00[d_60ae_dd5a] = 50;
        for (i = 1; i <= d_2289_f108[d_60ae_dd5a][0]; i++) {
            d_60ae_dce2 = d_2289_f108[d_60ae_dd5a][i];
            d_3c35_0000[23][d_60ae_dce2] -= 1;
        }
        d_2289_f108[d_60ae_dd5a][0] = 0;
        d_323f_1c08[d_60ae_dce4] = d_60ae_dd5a;
        d_323f_1e92[d_60ae_dce4] = 35;
        d_323f_211c[d_60ae_dce4] = 30;
        d_323f_3d0a[d_60ae_dce4] = 0;
        d_323f_28ba[d_60ae_dce4] = 80;
        d_323f_23a6[d_60ae_dce4] = f_a694_3ce4(d_60ae_dce4);
        f_9e77_4e5e(d_60ae_dce8 - 1);
        d_60ae_d97b = 0;
        f_a3de_069a(d_60ae_dd5a);
        f_b628_296c(d_60ae_dd5a);
    }
}

void f_7732_0f57(void)
{
    do {
        f_14bc_4bd3("Match reports");
        f_14bc_2f90(0, "", "*Exit|FA Premier|First Division|Second Division|Third Division|FA Cup|Coca-Cola Cup|Anglo-Ital Cup|UEFA Cup|Cup Winners Cup|European Cup|Playoffs|Charity Shield|");
        f_14bc_3334(12);
        d_60ae_d970 = 0;
        if (d_60ae_dda0 > 0) {
            for (d_60ae_dd2a = d_60ae_dd9c - 1; d_60ae_dd2a >= 1; d_60ae_dd2a--) {
                d_60ae_d96f = 0;
                switch (d_60ae_dda0) {
                case 1:
                case 2:
                case 3:
                case 4:
                    d_60ae_d96f = f_14bc_248a(d_60ae_dd2a);
                    break;
                case 5:
                    d_60ae_d96f = f_14bc_2594(d_60ae_dd2a);
                    break;
                case 6:
                    d_60ae_d96f = f_14bc_25c5(d_60ae_dd2a);
                    break;
                case 7:
                    d_60ae_d96f = f_14bc_2620(d_60ae_dd2a);
                    break;
                case 8:
                    d_60ae_d96f = f_14bc_2677(d_60ae_dd2a);
                    break;
                case 9:
                    d_60ae_d96f = f_14bc_26d6(d_60ae_dd2a);
                    break;
                case 10:
                    d_60ae_d96f = f_14bc_2729(d_60ae_dd2a);
                    break;
                case 11:
                    d_60ae_d96f = f_14bc_2b82(d_60ae_dd2a);
                    break;
                case 12:
                    d_60ae_d96f = d_60ae_dd2a == 10;
                    break;
                }
                if (d_60ae_d96f && d_471b_b5a2[d_60ae_dd2a] > 0) {
                    if (d_60ae_dda0 > 4)
                        d_60ae_dcee = d_60ae_dda0 - 4;
                    else
                        d_60ae_dcee = d_60ae_dda0 + 8;
                    f_7732_136d(d_60ae_dd2a, 3, d_60ae_dcee);
                    d_60ae_d970 = -1;
                    d_60ae_dd2a = 1;
                }
            }
            if (d_60ae_d970 == 0)
                f_14bc_0b83("No matches played yet");
        }
    } while (d_60ae_dda0 != 0);
}

void f_7732_10b7(int comp, int week)
{
    FILE *fp;

    f_1bd3_1a23(2);
    fp = fopen(d_2289_0078, "rb");
    fseek(fp, (long)(d_471b_b4de[week] + comp - 1) * 154, 0);
    fread(d_2289_73ec, 1, 154, fp);
    fclose(fp);
    f_817e_3d44(d_54d9_11fe[comp][0][week] / 32,
                d_54d9_11fe[comp][1][week] / 32, -1);
}

void f_7732_1199(void)
{
    do {
        f_14bc_4bd3("Background Picture");
        f_14bc_2f90(5, "", "*Exit|Picture 1|Picture 2|Picture 3|Picture 4|Picture 5|Picture 6|Picture 7|Picture 8|Change Colour|Change Brightness|");
        strcpy(d_2289_4bf6, d_2289_4be2);
        d_60ae_d977 = 0;
        do {
            f_14bc_3334(10);
            switch (d_60ae_dda0) {
            case 0:
                d_60ae_d977 = -1;
                break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
                sprintf(d_2289_4be2, "picture%d.lbm", d_60ae_dda0);
                if (strcmp(d_2289_4be2, d_2289_4bf6) != 0) {
                    d_2289_4ba6[0] = 0;
                    f_1bd3_1a23(d_60ae_dda0 == 5 ? 1 : 3);
                    d_2289_4ba6[0] = 0;
                    f_9e77_49ee("Loading picture");
                    f_1bd3_05af(-1);
                    d_2289_4ba6[0] = 0;
                    f_1bd3_1a23(2);
                }
                d_60ae_d977 = -1;
                break;
            case 9:
                d_60ae_dcec += d_60ae_dcec == 5 ? -5 : 1;
                f_1bd3_067c();
                break;
            case 10:
                d_60ae_dcea += d_60ae_dcea == 4 ? -4 : 1;
                f_1bd3_067c();
                break;
            }
        } while (!d_60ae_d977);
    } while (d_60ae_dda0 != 0);
}

void f_7732_12ec(void)
{
    do {
        f_14bc_2f90(0, "Save game", "*Exit|Save Game|Information|");
        if (d_60ae_dda0 == 1) {
            d_60ae_d97b = d_60ae_dce6 == 0;
            f_9e77_3a0d();
            f_14bc_2f90(0, "Only End The Game By Using Quit", "*Continue|Quit|");
            if (d_60ae_dda0 == 1) {
                f_1bd3_1215();
                exit(0);
            } else
                f_1bd3_1a23(2);
        } else if (d_60ae_dda0 == 2)
            f_b628_73cb();
    } while (d_60ae_dda0 == 2);
}

/* the titles of the week's fixtures or results, competition by competition */
void f_7732_136d(int week, int mode, int x)
{
    if (week <= 8) {
        d_60ae_dce0 = d_471b_d8c6[week];
        strcpy(d_2289_4a98, "Preseason");
        strcpy(d_2289_4a48, "Friendly Match");
        if (d_60ae_dce0 > 1)
            strcat(d_2289_4a48, "es");
        f_7732_2bbc(week, 1, d_60ae_dce0, x);
        f_7732_216e(week, mode, 1, d_60ae_dce0, x);
    }
    if (week == 10) {
        d_60ae_dce0 = 1;
        strcpy(d_2289_4a98, "Charity Shield");
        strcpy(d_2289_4a48, "Friendly Match");
        f_7732_216e(week, mode, 1, 1, x);
    }
    if (f_14bc_248a(week)) {
        d_60ae_dce0 = 40;
        strcpy(d_2289_4a98, "League");
        strcpy(d_2289_4a48, "FA Premier");
        f_7732_2bbc(week, 1, 10, x);
        f_7732_216e(week, mode, 1, 10, x);
        strcpy(d_2289_4a48, "First Division");
        f_7732_2bbc(week, 11, 20, x);
        f_7732_216e(week, mode, 11, 20, x);
        strcpy(d_2289_4a48, "Second Division");
        f_7732_2bbc(week, 21, 30, x);
        f_7732_216e(week, mode, 21, 30, x);
        strcpy(d_2289_4a48, "Third Division");
        f_7732_2bbc(week, 31, 40, x);
        f_7732_216e(week, mode, 31, 40, x);
    }
    if (f_14bc_2594(week) || f_14bc_25c5(week)) {
        strcpy(d_2289_4a98, f_14bc_2594(week) ? "FA Cup" : "Coca-Cola Cup");
        strcpy(d_2289_48b8, "");
        if (f_14bc_2a01(week))
            strcpy(d_2289_48b8, ",1st Leg");
        else if (f_14bc_2a5c(week))
            strcpy(d_2289_48b8, ",2nd Leg");
        switch (week) {
        case 15: case 19: case 38: case 39:
            d_60ae_dce0 = f_14bc_2594(week) ? 28 : 16;
            sprintf(d_2289_4a48, "1st Round%s", d_2289_48b8);
            if (f_14bc_25c5(week))
                strcat(d_2289_4a48, "s");
            break;
        case 23: case 27: case 44: case 45:
            d_60ae_dce0 = f_14bc_2594(week) ? 24 : 32;
            sprintf(d_2289_4a48, "2nd Round%s", d_2289_48b8);
            if (f_14bc_25c5(week))
                strcat(d_2289_4a48, "s");
            break;
        case 31: case 52: case 53:
            d_60ae_dce0 = f_14bc_2594(week) ? 32 : 16;
            strcpy(d_2289_4a48, "3rd Round");
            break;
        case 43: case 58: case 59:
            d_60ae_dce0 = f_14bc_2594(week) ? 16 : 8;
            strcpy(d_2289_4a48, "4th Round");
            break;
        case 64: case 65:
            d_60ae_dce0 = 8;
            strcpy(d_2289_4a48, "5th Round");
            break;
        case 55: case 70: case 71:
            d_60ae_dce0 = 4;
            strcpy(d_2289_4a48, "Quarter Finals");
            break;
        case 63: case 67: case 78: case 79:
            d_60ae_dce0 = 2;
            sprintf(d_2289_4a48, "Semi Finals%s", d_2289_48b8);
            if (f_14bc_25c5(week))
                strcat(d_2289_4a48, "s");
            break;
        case 82: case 83: case 92: case 93:
            d_60ae_dce0 = 1;
            strcpy(d_2289_4a48, "Final");
            break;
        }
        if (f_14bc_2b02(week)) {
            if (strcmp(d_2289_4a48, "Quarter Finals") == 0 || strcmp(d_2289_4a48, "Semi Finals") == 0)
                d_2289_4a48[strlen(d_2289_4a48) - 1] = 0;
            strcat(d_2289_4a48, " Replay");
            d_60ae_dce0 = d_471b_b5a2[week];
            if (d_60ae_dce0 > 1)
                strcat(d_2289_4a48, "s");
        }
        f_7732_2bbc(week, 1, d_60ae_dce0, x);
        d_60ae_dcde = 8;
        d_60ae_dcdc = -7;
        d_60ae_dd46 = 0;
        do {
            d_60ae_dcdc += d_60ae_dcde;
            d_60ae_dcda = f_1bd3_1369(d_60ae_dce0, d_60ae_dcde + d_60ae_dd46 * d_60ae_dcde);
            d_60ae_dd46++;
            f_7732_216e(week, mode, d_60ae_dcdc, d_60ae_dcda, x);
        } while (d_60ae_dcda != d_60ae_dce0);
    }
    if (f_14bc_2b82(week)) {
        strcpy(d_2289_4a98, "Promotion playoff");
        switch (week) {
        case 94: case 96:
            d_60ae_dce0 = 6;
            sprintf(d_2289_4a48, "Semi Finals%ss", f_14bc_2a5c(week) ? ",2nd Leg" : ",1st Leg");
            break;
        case 98:
            d_60ae_dce0 = 3;
            strcpy(d_2289_4a48, "Finals");
            break;
        }
        f_7732_216e(week, mode, 1, d_60ae_dce0, x);
    }
    if (f_14bc_2677(week) || f_14bc_26d6(week) || f_14bc_2729(week) || f_14bc_2620(week)) {
        strcpy(d_2289_49f8, "Cup Winners Cup");
        strcpy(d_2289_49a8, "UEFA Cup");
        strcpy(d_2289_4958, "European Cup");
        strcpy(d_2289_4908, "Anglo-Italian Cup");
        strcpy(d_2289_48b8, "");
        if (f_14bc_2a01(week))
            strcpy(d_2289_48b8, ",1st Leg");
        else if (f_14bc_2a5c(week))
            strcpy(d_2289_48b8, ",2nd Leg");
        switch (week) {
        case 21: case 25:
            d_60ae_dce0 = 32;
            strcpy(d_2289_4a98, d_2289_49a8);
            sprintf(d_2289_4a48, "Preliminaries%ss", d_2289_48b8);
            f_7732_2bbc(week, 1, 32, x);
            f_7732_216e(week, mode, 1, 8, x);
            f_7732_216e(week, mode, 9, 16, x);
            f_7732_216e(week, mode, 17, 24, x);
            f_7732_216e(week, mode, 25, 32, x);
            break;
        case 29: case 33:
            d_60ae_dce0 = 38;
            strcpy(d_2289_4a98, d_2289_4958);
            sprintf(d_2289_4a48, "1st Round%ss", d_2289_48b8);
            f_7732_2bbc(week, 1, 16, x);
            f_7732_216e(week, mode, 1, 8, x);
            f_7732_216e(week, mode, 9, 16, x);
            strcpy(d_2289_4a98, d_2289_49f8);
            f_7732_2bbc(week, 17, 32, x);
            f_7732_216e(week, mode, 17, 24, x);
            f_7732_216e(week, mode, 25, 32, x);
            strcpy(d_2289_4a98, d_2289_4908);
            strcpy(d_2289_4a48, "English Section");
            f_7732_216e(week, mode, 33, 38, x);
            break;
        case 37: case 41:
            d_60ae_dce0 = week == 37 ? 22 : 16;
            strcpy(d_2289_4a98, d_2289_49a8);
            sprintf(d_2289_4a48, "1st Round%ss", d_2289_48b8);
            f_7732_2bbc(week, 1, 16, x);
            f_7732_216e(week, mode, 1, 8, x);
            f_7732_216e(week, mode, 9, 16, x);
            if (week == 37) {
                strcpy(d_2289_4a98, d_2289_4908);
                strcpy(d_2289_4a48, "English Section");
                f_7732_216e(week, mode, 17, 22, x);
            }
            break;
        case 47: case 51:
            d_60ae_dce0 = 32;
            strcpy(d_2289_4a98, d_2289_4958);
            sprintf(d_2289_4a48, "2nd Round%ss", d_2289_48b8);
            f_7732_2bbc(week, 1, 8, x);
            f_7732_216e(week, mode, 1, 8, x);
            strcpy(d_2289_4a98, d_2289_49f8);
            f_7732_2bbc(week, 9, 16, x);
            f_7732_216e(week, mode, 9, 16, x);
            strcpy(d_2289_4a98, d_2289_49a8);
            f_7732_2bbc(week, 17, 24, x);
            f_7732_216e(week, mode, 17, 24, x);
            strcpy(d_2289_4a98, d_2289_4908);
            strcpy(d_2289_4a48, "International Stage");
            f_7732_216e(week, mode, 25, 32, x);
            break;
        case 57: case 61:
            d_60ae_dce0 = 12;
            strcpy(d_2289_4a98, d_2289_4958);
            strcpy(d_2289_4a48, "Group Matches");
            f_7732_216e(week, mode, 1, 4, x);
            strcpy(d_2289_4a98, d_2289_4908);
            strcpy(d_2289_4a48, "International Stage");
            f_7732_216e(week, mode, 5, 12, x);
            break;
        case 69: case 73:
            d_60ae_dce0 = 14;
            strcpy(d_2289_4a98, d_2289_4958);
            strcpy(d_2289_4a48, "Group Matches");
            f_7732_216e(week, mode, 1, 4, x);
            strcpy(d_2289_4a98, d_2289_49f8);
            sprintf(d_2289_4a48, "3rd Round%ss", d_2289_48b8);
            f_7732_2bbc(week, 5, 8, x);
            f_7732_216e(week, mode, 5, 8, x);
            strcpy(d_2289_4a98, d_2289_49a8);
            f_7732_2bbc(week, 9, 12, x);
            f_7732_216e(week, mode, 9, 12, x);
            strcpy(d_2289_4a98, d_2289_4908);
            sprintf(d_2289_4a48, "Semi Finals%ss", d_2289_48b8);
            f_7732_2bbc(week, 13, 14, x);
            f_7732_216e(week, mode, 13, 14, x);
            break;
        case 77: case 81:
            d_60ae_dce0 = 8;
            strcpy(d_2289_4a98, d_2289_4958);
            strcpy(d_2289_4a48, "Group Matches");
            f_7732_216e(week, mode, 1, 4, x);
            strcpy(d_2289_4a98, d_2289_49f8);
            sprintf(d_2289_4a48, "Semi Finals%ss", d_2289_48b8);
            f_7732_2bbc(week, 5, 6, x);
            f_7732_216e(week, mode, 5, 6, x);
            strcpy(d_2289_4a98, d_2289_49a8);
            f_7732_2bbc(week, 7, 8, x);
            f_7732_216e(week, mode, 7, 8, x);
            break;
        case 86:
            d_60ae_dce0 = 1;
            strcpy(d_2289_4a98, d_2289_4908);
            strcpy(d_2289_4a48, "Final");
            f_7732_216e(week, mode, 1, 1, x);
            break;
        case 89: case 95:
            d_60ae_dce0 = 1;
            strcpy(d_2289_4a98, d_2289_49a8);
            sprintf(d_2289_4a48, "Final%s", d_2289_48b8);
            f_7732_216e(week, mode, 1, 1, x);
            break;
        case 91:
            d_60ae_dce0 = 1;
            strcpy(d_2289_4a98, d_2289_49f8);
            strcpy(d_2289_4a48, "Final");
            f_7732_216e(week, mode, 1, 1, x);
            break;
        case 97:
            d_60ae_dce0 = 1;
            strcpy(d_2289_4a98, d_2289_4958);
            strcpy(d_2289_4a48, "Final");
            f_7732_216e(week, mode, 1, 1, x);
            break;
        }
    }
}

/* the title and the list of one competition's fixtures or results, or (mode 3 and up)
 * the week's matches of the competition without drawing them */
void f_7732_216e(int week, int mode, int from, int to, int kind)
{
    char buf[320];

    f_14bc_60ca();
    if (f_7732_284d(kind, week, from) == 0)
        return;
    if (mode < 3) {
        if (week <= 8) {
            d_60ae_dcd6 = 1;
            d_60ae_dcd4 = 3;
        } else if (week == 10) {
            d_60ae_dcd6 = 1;
            d_60ae_dcd4 = 13;
        } else if (f_14bc_2594(week) || f_14bc_25c5(week)) {
            d_60ae_dcd6 = 1;
            d_60ae_dcd4 = 14;
        } else if (f_14bc_2784(week, from) || f_14bc_2835(week, from) || f_14bc_28cc(week, from)) {
            d_60ae_dcd6 = 4;
            d_60ae_dcd4 = 8;
        } else if (f_14bc_295d(week, from)) {
            d_60ae_dcd6 = 1;
            d_60ae_dcd4 = week >= 47 ? 11 : 15;
        } else if (from == 1 && !f_14bc_2b82(week)) {
            d_60ae_dcd6 = 1;
            d_60ae_dcd4 = 4;
        } else {
            d_60ae_dcd6 = 1;
            d_60ae_dcd4 = 12;
        }
        strcpy(d_2289_4868, d_2289_4a98);
        if (mode == 2)
            strcat(d_2289_4868, " draw");
        else {
            strcpy(buf, d_2289_4868);
            if (mode != 1) {
                if (week > d_60ae_dd9c)
                    sprintf(d_2289_4868, "Next %s", buf);
                else
                    sprintf(d_2289_4868, "%s fixture%s", buf, to - from + 1 > 1 ? "s" : "");
            } else
                sprintf(d_2289_4868, "%s result%s", buf, to - from + 1 > 1 ? "s" : "");
        }
        f_7732_2e19(to - from + 1, week, from, mode);
        d_60ae_dd72 = 8;
    }
    for (d_60ae_dd60 = from - 1; to - 1 >= d_60ae_dd60; d_60ae_dd60++) {
        if (mode < 3) {
            d_60ae_dcd2 = d_54d9_11fe[d_60ae_dd60][0][week] / 32;
            d_60ae_dcd0 = d_54d9_11fe[d_60ae_dd60][1][week] / 32;
            f_7732_29b4(d_60ae_dcd2, week, d_60ae_dd60);
            f_1bd3_0b10(0);
            f_14bc_356a(40, 1 - (d_60ae_dd72 + d_60ae_d8d7) * 8, d_60ae_dcce, d_2289_5178);
            f_14bc_356a(124, 1 - (d_60ae_dd72 + d_60ae_d8d7) * 8, 6, d_2289_4818);
            if (mode == 1) {
                sprintf(d_2289_4cfa, "%d-%d", d_54d9_11fe[d_60ae_dd60][0][week] % 32,
                        d_54d9_11fe[d_60ae_dd60][1][week] % 32);
                if (d_2289_d678[d_60ae_dd60] == 1)
                    f_14bc_356a(155, 1 - (d_60ae_dd72 + d_60ae_d8d7) * 8, 1, "P");
                else if (d_2289_d678[d_60ae_dd60] == 2)
                    f_14bc_356a(184, 1 - (d_60ae_dd72 + d_60ae_d8d7) * 8, 1, "P");
            } else
                strcpy(d_2289_4cfa, " v");
            f_14bc_38bc(20, -(d_60ae_dd72 + d_60ae_d8d7), 1, d_2289_4cfa);
            f_7732_29b4(d_60ae_dcd0, week, d_60ae_dd60);
            f_14bc_356a(200, 1 - (d_60ae_dd72 + d_60ae_d8d7) * 8, d_60ae_dcce, d_2289_5178);
            f_14bc_356a(278, 1 - (d_60ae_dd72 + d_60ae_d8d7) * 8, 6, d_2289_4818);
            if (strstr(d_2289_4a48, "2nd Leg")) {
                d_60ae_dccc = f_7732_292a(week, d_60ae_dd60 + 1);
                d_60ae_dcca = (unsigned char)d_471b_b01c[d_60ae_dccc * 80 + d_60ae_dd60 * 2 + 1];
                d_60ae_dcc8 = (unsigned char)d_471b_b01c[d_60ae_dccc * 80 + d_60ae_dd60 * 2];
                if (mode == 1) {
                    d_60ae_dcca += d_54d9_11fe[d_60ae_dd60][0][week] % 32;
                    d_60ae_dcc8 += d_54d9_11fe[d_60ae_dd60][1][week] % 32;
                }
                sprintf(buf, "%d", d_60ae_dcca);
                f_14bc_3c75(2, d_60ae_dd72 - 0.75 + d_60ae_d8d7, 1, buf);
                sprintf(buf, "%d", d_60ae_dcc8);
                f_14bc_3c75(39, d_60ae_dd72 - 0.75 + d_60ae_d8d7, 1, buf);
            } else if (strstr(d_2289_4a48, "Group")) {
                sprintf(buf, "%c", d_60ae_dd60 + 1 > 2 ? 'B' : 'A');
                f_14bc_3c75(2, d_60ae_dd72 - 0.75 + d_60ae_d8d7, 1, buf);
            } else if (strstr(d_2289_4a48, "Section") || strstr(d_2289_4a48, "Stage")) {
                sprintf(buf, "%c", f_14bc_2b9f(week, d_60ae_dd60 + 1) + 'A');
                f_14bc_3c75(2, d_60ae_dd72 - 0.75 + d_60ae_d8d7, 1, buf);
            }
            d_60ae_dd72 += 2;
        } else
            f_7732_10b7(d_60ae_dd60, week);
    }
    f_14bc_60da();
    if (mode < 3)
        f_14bc_58db(0);
}

/* the squad screen's attribute columns */
char f_7732_284d(int kind, int week, int n)
{
    d_60ae_d96e = 0;
    if (kind == -1)
        d_60ae_d96e = -1;
    else if (kind == 1 && f_14bc_2594(week))
        d_60ae_d96e = -1;
    else if (kind == 2 && f_14bc_25c5(week))
        d_60ae_d96e = -1;
    else if (kind == 3 && f_14bc_295d(week, n))
        d_60ae_d96e = -1;
    else if (kind == 4 && f_14bc_2784(week, n))
        d_60ae_d96e = -1;
    else if (kind == 5 && f_14bc_2835(week, n))
        d_60ae_d96e = -1;
    else if (kind == 6 && f_14bc_28cc(week, n))
        d_60ae_d96e = -1;
    else if (kind == 7 && f_14bc_2b82(week))
        d_60ae_d96e = -1;
    else if (kind == 8 && week <= 10)
        d_60ae_d96e = -1;
    else if (kind >= 9 && f_14bc_248a(week))
        d_60ae_d96e = (kind - 9) * 10 + 1 == n ? -1 : 0;
    return d_60ae_d96e;
}

int f_7732_292a(int week, int n)
{
    if (f_14bc_25c5(week))
        d_60ae_dccc = 2;
    else if (f_14bc_295d(week, n))
        d_60ae_dccc = 3;
    else if (f_14bc_2784(week, n))
        d_60ae_dccc = 4;
    else if (f_14bc_2835(week, n))
        d_60ae_dccc = 5;
    else if (f_14bc_28cc(week, n))
        d_60ae_dccc = 6;
    else if (f_14bc_2b82(week))
        d_60ae_dccc = 7;
    return d_60ae_dccc;
}

void f_7732_29b4(int club, int week, int n)
{
    d_60ae_d96d = 0;
    if (club <= 79) {
        strcpy(d_2289_5178, d_60ae_b572[club]);
        if (f_14bc_2594(week) || f_14bc_25c5(week)
            || (f_14bc_295d(week, n + 1) && d_60ae_dd9c <= 37) || f_14bc_2b82(week) || week <= 8) {
            sprintf(d_2289_4818, "%s", f_14bc_4b12(club / 20 + 1, 1));
            d_60ae_d96d = f_14bc_2cc0(club) ? -1 : 0;
        } else if (f_14bc_2784(week, n + 1) || f_14bc_2835(week, n + 1) || f_14bc_28cc(week, n + 1)
                   || f_14bc_295d(week, n + 1)) {
            strcpy(d_2289_4818, "ENG");
            if (f_14bc_295d(week, n + 1))
                d_60ae_d96d = f_14bc_2cc0(club) ? -1 : 0;
            else
                d_60ae_d96d = -1;
        } else {
            strcpy(d_2289_4818, "");
            d_60ae_d96d = f_14bc_2cc0(club) ? -1 : 0;
        }
    } else if (club <= 479) {
        strcpy(d_2289_5178, d_60ae_b61a[club]);
        sprintf(d_2289_4818, "%.3s", d_54d9_0000[d_54d9_0fe4[club]]);
    } else {
        strcpy(d_2289_5178, d_60ae_b61a[club]);
        strcpy(d_2289_4818, "NLGE");
    }
    if (!d_60ae_d96d)
        d_60ae_dcce = d_60ae_dcd6;
    else
        d_60ae_dcce = d_60ae_dcd6 == 1 ? 6 : 12;
}

void f_7732_2bbc(int a, int b, int c, int d)
{
    if (f_7732_284d(d, a, b) == 0)
        return;
    if (strstr(d_2289_4a48, "1st Leg")) {
        if (a == 89)
            d_60ae_dcc6 = 95;
        else if (a == 94)
            d_60ae_dcc6 = 96;
        else
            d_60ae_dcc6 = a + 4;
    }
    for (d_60ae_dd92 = b - 1; d_60ae_dd92 <= c - 2; d_60ae_dd92++) {
        for (d_60ae_dd48 = d_60ae_dd92 + 1; d_60ae_dd48 <= c - 1; d_60ae_dd48++) {
            strcpy(d_2289_47c8, f_14bc_3523(d_54d9_11fe[d_60ae_dd92][0][a] / 32));
            strcpy(d_2289_4778, f_14bc_3523(d_54d9_11fe[d_60ae_dd48][0][a] / 32));
            if (strcmp(d_2289_47c8, d_2289_4778) > 0) {
                for (d_60ae_dcc4 = 0; d_60ae_dcc4 <= 1; d_60ae_dcc4++) {
                    f_1bd3_13a3(&d_54d9_11fe[d_60ae_dd92][d_60ae_dcc4][a],
                                &d_54d9_11fe[d_60ae_dd48][d_60ae_dcc4][a], 2);
                    if (strstr(d_2289_4a48, "1st Leg")) {
                        f_1bd3_13a3(&d_54d9_11fe[d_60ae_dd92][d_60ae_dcc4][d_60ae_dcc6],
                                    &d_54d9_11fe[d_60ae_dd48][d_60ae_dcc4][d_60ae_dcc6], 2);
                    } else if (strstr(d_2289_4a48, "2nd Leg")) {
                        d_60ae_dccc = f_7732_292a(a, b);
                        f_1bd3_13a3(&d_471b_b01c[d_60ae_dccc * 80 + d_60ae_dd92 * 2 + d_60ae_dcc4],
                                    &d_471b_b01c[d_60ae_dccc * 80 + d_60ae_dd48 * 2 + d_60ae_dcc4], 1);
                    }
                }
            }
        }
    }
}

void f_7732_2e19(int n, int b, int c, int d)
{
    char buf[320];
    register int x;
    register int y;
    unsigned char i;

    if (n > 8) {
        f_14bc_4bd3("");
        f_1bd3_08cb(16);
        sprintf(buf, " %s %s ", d_2289_4a48, d == 1 ? "Results" : "Fixtures");
        f_1bd3_08e1(28, 9, (strlen(buf) + 3.25) * 8 + 3, 22);
        f_14bc_3e40(3.25, 1.25, 0, 1, 0, buf);
        d_60ae_d8d7 = -3.125;
    } else {
        f_14bc_4bd3(d_2289_4868);
        sprintf(buf, " %s ", d_2289_4a48);
        f_1bd3_08cb(16);
        f_1bd3_08e1(28, 31, (strlen(buf) + 3.25) * 8 + 3, 44);
        if (strstr(d_2289_4868, "Coca-Cola"))
            f_14bc_3e40(3.25, 4.0, 1, 2, 0, buf);
        else
            f_14bc_3e40(3.25, 4.0, 0, 1, 0, buf);
        d_60ae_d8d7 = 0;
    }
    x = 24;
    for (i = 0; i <= n - 1; i = i + 1) {
        y = i * 16 + 53 + d_60ae_d8d7 * 8;
        f_14bc_0164(x, y, x + 117, y + 15);
        f_14bc_0164(x + 118, y, x + 159, y + 15);
        f_14bc_0164(x + 160, y, x + 272, y + 15);
    }
    if (strstr(d_2289_4a48, "2nd Leg")) {
        f_14bc_3672(0.875, d_60ae_d8d7 + 5.25, 1, 2, 0, "Ag");
        f_14bc_3672(37.875, d_60ae_d8d7 + 5.25, 1, 2, 0, "Ag");
    } else if (strstr(d_2289_4a48, "Group") || strstr(d_2289_4a48, "Section")
               || strstr(d_2289_4a48, "Stage")) {
        f_14bc_3672(0.875, d_60ae_d8d7 + 5.25, 1, 2, 0, "Gr");
    }
}

void f_7732_3167(void)
{
    char buf[320];

    switch (d_60ae_dd9c) {
    case 1: case 2: strcpy(d_2289_4728, "in a month"); break;
    case 3: case 4: strcpy(d_2289_4728, "in three weeks"); break;
    case 5: case 6: strcpy(d_2289_4728, "in two weeks"); break;
    case 7: case 8: strcpy(d_2289_4728, "next week"); break;
    }
    sprintf(buf, "Season starts %s", d_2289_4728);
    f_14bc_0b83(buf);
}

/* the squad screen */
void f_7732_31e2(int team)
{
    char reserves;
    int i;

    reserves = 0;
    d_60ae_dcc0 = 0;
    for (;;) {
        for (i = 0; i < 30; i++)
            d_2289_d6c8[i] = -1;
        if (d_60ae_dcc0 > 0)
            f_7732_4912(d_60ae_dcc0 - 1, team);
        f_14bc_60ca();
        f_14bc_000b(1.5, team, reserves ? "Reserves" : "Squad");
        f_14bc_60da();
        for (d_60ae_dd60 = 1; d_60ae_dd60 <= 15; d_60ae_dd60++) {
            switch (d_60ae_dd60) {
            case 1: case 2: case 3: case 4: case 5: case 6: case 7:
            case 8: case 9: case 10: case 11: case 12: case 13: case 14:
                d_60ae_dd4c = 1;
                strcpy(d_2289_46d8, f_14bc_2f2c(d_60ae_dd60, 1));
                break;
            case 15:
                strcpy(d_2289_46d8, "SWP");
                d_60ae_dd4c = 20;
                break;
            }
            f_14bc_50f8(0, (d_60ae_dd60 - 1) * 2.5 + 1.375 + (d_60ae_dd60 > 11 ? 0.125 : 0)
                        + (d_60ae_dd60 > 14 ? 0.125 : 0), 19.75,
                        d_60ae_dd4c / 16, d_60ae_dd4c % 16, 0x12, d_2289_46d8);
        }
        f_14bc_50f8(0, 1.375, 20.75, 1, 12, 0x24, " GLS");
        f_14bc_50f8(0, 6.125, 20.75, 1, 12, 0x24, " DSP");
        f_14bc_50f8(0, 10.875, 20.75, 1, 12, 0x24, " AVR");
        f_14bc_50f8(0, 15.625, 20.75, 1, 12, 0x24, " MOM");
        f_14bc_50f8(0, 25.125, 20.75, 1, 3, 0x24, " PRV");
        f_14bc_50f8(0, 29.875, 20.75, 1, 3, 0x23, " TCT");
        f_14bc_50f8(0, 34.5, 20.75, 1, 3, 0x23, " OPP");
        f_14bc_50f8(2, 1.5, 21.875, 1, 4, 0x90, "       DONE");
        f_14bc_50f8(2, 1.5, 4.0, 1, 14, 0x26, "Trns");
        f_14bc_50f8(2, 6.875, 4.0, 1, 14, 0x26, "Staf");
        f_14bc_50f8(2, 12.25, 4.0, 1, 14, 0x26, "Leag");
        f_14bc_50f8(2, 17.625, 4.0, 1, 14, 0x26, "Fixt");
        f_14bc_50f8(2, 23.0, 4.0, 1, 14, 0x26, "Accs");
        f_14bc_50f8(2, 28.375, 4.0, 1, 14, 0x26, "Info");
        f_14bc_50f8(2, 33.75, 4.0, 1, 8, 0x27, reserves ? "Senr" : "Rsrv");
        f_14bc_50f8(2, 20.125, 21.875, 1, 4, 0x2e, d_60ae_dcc0 == 1 ? " SQDL" : " DEFS");
        f_14bc_50f8(2, 26.5, 21.875, 1, 4, 0x2e, d_60ae_dcc0 == 2 ? " SQDL" : " MIDS");
        f_14bc_50f8(2, 32.875, 21.875, 1, 4, 0x2e, d_60ae_dcc0 == 3 ? " SQDL" : " ATTS");
        f_14bc_50f8(0, 20.375, 20.75, 1, 3, 0x24, " PEN");
        f_14bc_60ca();
        if (d_60ae_dcc0 == 0)
            f_a3de_16b2(team, reserves);
        else
            f_7732_42c5(d_60ae_dcc0 - 1, team);
        f_14bc_60da();
        d_60ae_dcb4 = 0;
        d_60ae_d96b = 0;
        for (;;) {
            if (d_60ae_dcb4 == 0)
                f_14bc_589c(15);
            else
                f_14bc_58b1();
            d_60ae_dda0 = f_14bc_5635(0);
            if (d_60ae_dda0 == 0) {
                f_7c74_00ce(d_60ae_dcb4);
                if (d_60ae_d96b) {
                    d_60ae_d96b = 0;
                    f_14bc_548f(15, 0);
                }
                continue;
            } else if (d_60ae_dda0 >= 1 && d_60ae_dda0 <= 14) {
                d_60ae_dcbe = d_60ae_dcb4;
                if ((d_60ae_dcb4 = d_60ae_dda0) == d_60ae_dcbe)
                    continue;
                if (d_60ae_dcbe > 0)
                    f_14bc_548f(d_60ae_dcbe, 0);
                if (d_60ae_d96b == 0)
                    continue;
                for (d_60ae_dd60 = 0; d_60ae_dd60 <= d_60ae_dcbc - 1; d_60ae_dd60++) {
                    if (d_323f_0592[team][d_60ae_dcb4 - 1] == d_2289_d6c8[d_60ae_dd60]) {
                        strcpy(d_2289_46d8, f_14bc_2f2c(d_60ae_dcbe, 1));
                        if (d_60ae_dcc0 == 0) {
                            f_a3de_2142(d_60ae_dd60);
                            f_14bc_3672(d_60ae_d8d3, d_60ae_d8eb, 2, 1, 0, d_2289_46d8);
                        } else
                            f_14bc_3672(1.375, d_60ae_dd60 + 7.5, 2, 1, 0, d_2289_46d8);
                    } else if (d_323f_0592[team][d_60ae_dcbe - 1] == d_2289_d6c8[d_60ae_dd60]) {
                        strcpy(d_2289_46d8, f_14bc_2f2c(d_60ae_dcb4, 1));
                        if (d_60ae_dcc0 == 0) {
                            f_a3de_2142(d_60ae_dd60);
                            f_14bc_3672(d_60ae_d8d3, d_60ae_d8eb, 2, 1, 0, d_2289_46d8);
                        } else
                            f_14bc_3672(1.375, d_60ae_dd60 + 7.5, 2, 1, 0, d_2289_46d8);
                    }
                }
                f_1bd3_13a3(&d_323f_0592[team][d_60ae_dcb4 - 1], &d_323f_0592[team][d_60ae_dcbe - 1], 2);
                f_7c74_00ce(d_60ae_dcb4);
                f_14bc_548f(15, 0);
                d_60ae_d96b = 0;
                continue;
            } else if (d_60ae_dda0 == 15) {
                d_60ae_d96b = !d_60ae_d96b;
                if (d_60ae_d96b == 0)
                    f_14bc_548f(15, 0);
                continue;
            } else if (d_60ae_dda0 >= 16 && d_60ae_dda0 <= 19) {
                f_70a9_0e62(d_60ae_dda0 - 16, team);
                break;
            } else if (d_60ae_dda0 == 20) {
                if (d_323f_4494[0][team] == 0) {
                    f_7c74_0000("No matches played");
                    f_14bc_548f(20, 0);
                    0;      /* code-free: the original's tail merging */
                } else {
                    FILE *fp;

                    f_1bd3_1a23(2);
                    fp = fopen(d_2289_0078, "rb");
                    fseek(fp, (long)(d_323f_4494[0][team] - 1) * 154, 0);
                    fread(d_2289_73ec, 1, 154, fp);
                    fclose(fp);
                    f_817e_3d44(d_54d9_1200[d_323f_4494[1][team]][0][d_323f_4494[2][team]] / 32,
                                d_54d9_1200[d_323f_4494[1][team]][1][d_323f_4494[2][team]] / 32, -1);
                    break;
                }
            } else if (d_60ae_dda0 == 21) {
                f_be31_0000(team);
                break;
            } else if (d_60ae_dda0 == 22) {
                if (d_60ae_d96a) {
                    if (d_60ae_dcb8 < 80)
                        f_70a9_5667(d_60ae_dcb8);
                    else
                        f_be31_0000(team == d_60ae_dcd2 ? d_60ae_dcd0 : d_60ae_dcd2);
                    break;
                }
                f_7c74_0000("No details yet");
                continue;
            } else if (d_60ae_dda0 == 23) {
                if (d_60ae_d96a) {
                    unsigned char first, subs;
                    char buf[100];

                    first = 0;
                    subs = 0;
                    for (d_60ae_dd60 = 0; d_60ae_dd60 <= 13; d_60ae_dd60++)
                        if (f_14bc_5e18(d_323f_0592[team][d_60ae_dd60]) || f_14bc_5e32(d_323f_0592[team][d_60ae_dd60])) {
                            if (d_60ae_dd60 < 13)
                                first++;
                            else
                                subs++;
                        }
                    if (first < 13 || f_14bc_612e(team, d_60ae_dd9c, d_60ae_dd76 + 1) && subs == 0) {
                        if (first + subs == 0)
                            f_7c74_0000("Nobody picked");
                        else
                            f_7c74_0000("Too few picked");
                        0;  /* code-free: the original's tail merging */
                    } else if ((f_14bc_2784(d_60ae_dd9c, d_60ae_dd76 + 1) || f_14bc_2835(d_60ae_dd9c, d_60ae_dd76 + 1)
                                || f_14bc_28cc(d_60ae_dd9c, d_60ae_dd76 + 1)) && f_b628_58ba(team) > 0) {
                        sprintf(buf, "%d foreigners", d_60ae_d983);
                        f_7c74_0000(buf);
                        goto next;
                    } else
                        goto pick;
                } else
                    goto pick;
            } else if (d_60ae_dda0 == 24) {
                f_70a9_5bc8(team);
                break;
            } else if (d_60ae_dda0 == 25) {
                f_96bb_0a22(team);
                break;
            } else if (d_60ae_dda0 == 26) {
                f_70a9_6083(team);
                break;
            } else if (d_60ae_dda0 == 27) {
                f_70a9_4e55(team);
                break;
            } else if (d_60ae_dda0 == 28) {
                f_7732_0027(team);
                break;
            } else if (d_60ae_dda0 == 29) {
                f_a694_09a0(team);
                break;
            } else if (d_60ae_dda0 == 30) {
                reserves = !reserves;
                d_60ae_dcc0 = 0;
                break;
            } else
        pick:
            if (d_60ae_dda0 == 31 || d_60ae_dda0 == 32 || d_60ae_dda0 == 33) {
                strcpy(d_2289_4688, f_1bd3_100b(d_2289_0e60[d_60ae_dda0]));
                if (strcmp(d_2289_4688, "SQDL") == 0)
                    d_60ae_dcc0 = 0;
                else if (strcmp(d_2289_4688, "DEFS") == 0)
                    d_60ae_dcc0 = 1;
                else if (strcmp(d_2289_4688, "MIDS") == 0)
                    d_60ae_dcc0 = 2;
                else
                    d_60ae_dcc0 = 3;
                reserves = 0;
                break;
            } else if (d_60ae_dda0 == 34) {
                f_b628_2bf7(team);
                break;
            } else if (d_60ae_dda0 >= 35) {
                char out;

                d_60ae_dd30 = d_60ae_dda0 - 35;
                d_60ae_dd84 = d_2289_d6c8[d_60ae_dd30];
                if (d_60ae_dcb4 == 0) {
                    if (!f_14bc_5e32(d_60ae_dd84)) {
                        do {
                            f_a694_49c9(d_60ae_dd84, -1, -1);
                            f_8aa1_4f06(d_60ae_dd84, d_60ae_dd4a);
                        } while (!d_60ae_d975);
                    } else
                        f_ad38_34a0(team, f_14bc_5e60(d_60ae_dd84));
                    break;
                }
                if (!f_14bc_5e32(d_60ae_dd84))
                    out = d_471b_0000[20][d_60ae_dd84] > 0;
                else
                    out = d_2289_a0f6[team][f_14bc_5e60(d_60ae_dd84)] > 0;
                if (out)
                    f_7c74_0000("Not available");
                else {
                    if (d_323f_0592[team][d_60ae_dcb4 - 1] != d_60ae_dd84) {
                        if (f_14bc_5e18(d_323f_0592[team][d_60ae_dcb4 - 1]) || f_14bc_5e32(d_323f_0592[team][d_60ae_dcb4 - 1])) {
                            for (d_60ae_dd60 = 0; d_60ae_dd60 <= d_60ae_dcbc - 1; d_60ae_dd60++) {
                                if (d_323f_0592[team][d_60ae_dcb4 - 1] == d_2289_d6c8[d_60ae_dd60]) {
                                    if (d_60ae_dcc0 == 0) {
                                        f_a3de_2142(d_60ae_dd60);
                                        f_14bc_3672(d_60ae_d8d3, d_60ae_d8eb, 1, 2, 0, "  ");
                                    } else
                                        f_14bc_3672(1.375, d_60ae_dd60 + 7.5, 1, 2, 0, "  ");
                                }
                            }
                            if (!f_14bc_5e32(d_323f_0592[team][d_60ae_dcb4 - 1]))
                                d_60ae_ddbe[d_323f_0592[team][d_60ae_dcb4 - 1]].w.f7 = 0;
                            else
                                d_2289_a106[team][f_14bc_5e60(d_323f_0592[team][d_60ae_dcb4 - 1])] = 0;
                        }
                        if (!f_14bc_5e32(d_60ae_dd84)) {
                            if (d_60ae_ddbe[d_60ae_dd84].w.f7)
                                d_323f_0592[team][f_14bc_1eb7(d_60ae_dd84)] = 1859;
                        } else if (d_2289_a106[team][f_14bc_5e60(d_60ae_dd84)])
                            d_323f_0592[team][f_14bc_1eb7(d_60ae_dd84)] = 1859;
                        d_323f_0592[team][d_60ae_dcb4 - 1] = d_60ae_dd84;
                        if (!f_14bc_5e32(d_60ae_dd84))
                            d_60ae_ddbe[d_60ae_dd84].w.f7 = 1;
                        else
                            d_2289_a106[team][f_14bc_5e60(d_60ae_dd84)] = -1;
                        strcpy(d_2289_46d8, f_14bc_2f2c(d_60ae_dcb4, 1));
                        if (d_60ae_dcc0 == 0) {
                            f_a3de_2142(d_60ae_dd30);
                            f_14bc_3672(d_60ae_d8d3, d_60ae_d8eb, 2, 1, 0, d_2289_46d8);
                        } else
                            f_14bc_3672(1.375, d_60ae_dd30 + 7.5, 2, 1, 0, d_2289_46d8);
                    }
                    f_14bc_548f(d_60ae_dda0, 0);
                }
            } else
                return;
        next:
            f_7c74_00ce(d_60ae_dcb4);
        }
    }
}

/* the squad screen's attribute columns: x position and heading */
static struct col d_60ae_13b2[] = {
    {14.875, "PS"}, {17.0, "TK"}, {19.125, "PA"}, {21.25, "HD"}, {23.375, "FL"},
    {25.5, "CR"}, {27.625, "AG"}, {29.75, "IF"}, {31.875, "SDE"}, {34.375, "FIT"},
    {36.875, "AVR"}
};

void f_7732_42c5(int mode, int team)
{
    char buf[320];

    if (mode == 0)
        strcpy(buf, " DEFENDERS");
    else if (mode == 1)
        strcpy(buf, " MIDFIELDERS");
    else
        strcpy(buf, " ATTACKERS");
    f_14bc_3672(1.375, 6.5, 0, 1, 0x68, buf);
    for (d_60ae_dcb2 = 0; d_60ae_dcb2 <= 10; d_60ae_dcb2++)
        f_14bc_3672(d_60ae_13b2[d_60ae_dcb2].x - 0.125, 6.5, 0, 6, d_60ae_dcb2 > 7 ? 0x12 : 0xf,
                    d_60ae_13b2[d_60ae_dcb2].title);
    for (d_60ae_dd64 = 1; d_60ae_dd64 <= 12; d_60ae_dd64++) {
        if (d_60ae_dd64 & 1) {
            d_60ae_dcb0 = 14;
            d_60ae_dcae = 4;
        } else {
            d_60ae_dcb0 = 8;
            d_60ae_dcae = 12;
        }
        d_60ae_dd84 = d_2289_d6c6[d_60ae_dd64];
        strcpy(d_2289_4638, "");
        d_60ae_dd58 = 0x12;
        if (d_60ae_dd84 > -1) {
            if (d_471b_0000[20][d_60ae_dd84] > 0) {
                if (d_471b_0000[19][d_60ae_dd84] == 50)
                    strcpy(d_2289_4638, "ct");
                else if (d_471b_0000[19][d_60ae_dd84] == 26)
                    strcpy(d_2289_4638, "su");
                else
                    strcpy(d_2289_4638, "ij");
            } else if (d_60ae_ddbe[d_60ae_dd84].w.f7) {
                strcpy(d_2289_4638, f_14bc_2f2c(f_14bc_1eb7(d_60ae_dd84) + 1, 1));
                d_60ae_dd58 = 0x21;
            }
            f_14bc_3672(1.375, d_60ae_dd64 + 6.5, d_60ae_dd58 / 16, d_60ae_dd58 % 16, 12, d_2289_4638);
            sprintf(buf, " %.14s", f_14bc_483d(d_60ae_dd84));
            f_14bc_50f8(0, 3.125, d_60ae_dd64 + 6.5, 1, d_60ae_dcb0, 0x5a, buf);
        } else {
            f_14bc_3672(1.375, d_60ae_dd64 + 6.5, d_60ae_dd58 / 16, d_60ae_dd58 % 16, 12, "");
            f_14bc_3672(3.125, d_60ae_dd64 + 6.5, 1, d_60ae_dcb0, 0x5a, "");
        }
        for (d_60ae_dcb2 = 0; d_60ae_dcb2 <= 10; d_60ae_dcb2++) {
            if (d_60ae_dd84 > -1) {
                switch (d_60ae_dcb2) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                    sprintf(d_2289_45e8, "%02d", d_471b_0000[d_60ae_dcb2 + 1][d_60ae_dd84]);
                    d_60ae_dd4c = 1;
                    break;
                case 6:
                    sprintf(d_2289_45e8, "%02d", d_471b_0000[10][d_60ae_dd84]);
                    d_60ae_dd4c = 6;
                    break;
                case 7:
                    sprintf(d_2289_45e8, "%02d", d_471b_0000[12][d_60ae_dd84]);
                    d_60ae_dd4c = 6;
                    break;
                case 8:
                    strcpy(d_2289_45e8, "");
                    if (d_60ae_ddbe[d_60ae_dd84].w.f4)
                        strcat(d_2289_45e8, "R");
                    if (d_60ae_ddbe[d_60ae_dd84].w.f5)
                        strcat(d_2289_45e8, "L");
                    if (d_60ae_ddbe[d_60ae_dd84].w.f6)
                        strcat(d_2289_45e8, "C");
                    if (strlen(d_2289_45e8) == 1) {
                        d_2289_45e8[1] = d_2289_45e8[0];
                        d_2289_45e8[0] = d_2289_45e8[2] = ' ';
                        d_2289_45e8[3] = 0;
                    } else if (strlen(d_2289_45e8) == 2)
                        strcat(d_2289_45e8, " ");
                    d_60ae_dd4c = 6;
                    break;
                case 9:
                    if (d_471b_0000[20][d_60ae_dd84] == 0)
                        sprintf(d_2289_45e8, "%03d", d_471b_0000[21][d_60ae_dd84]);
                    else
                        strcpy(d_2289_45e8, "");
                    0;
                    d_60ae_dd4c = 6;
                    break;
                case 10:
                    if (d_3c35_0000[12][d_60ae_dd84] > 0) {
                        float avg;

                        d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
                        avg = (float)d_60ae_fae6[2][d_60ae_dd84] / d_3c35_0000[12][d_60ae_dd84];
                        sprintf(d_2289_45e8, "%3.1f", avg);
                    } else
                        strcpy(d_2289_45e8, "");
                    d_60ae_dd4c = 9;
                    break;
                }
            } else
                strcpy(d_2289_45e8, "");
            f_14bc_3672(d_60ae_13b2[d_60ae_dcb2].x, d_60ae_dd64 + 6.5, d_60ae_dd4c, d_60ae_dcae,
                        d_60ae_dcb2 > 7 ? 0x12 : 0xf, d_2289_45e8);
        }
    }
}

void f_7732_4912(int a, int team)
{
    char sel[30];

    memset(sel, 0, 30);
    d_60ae_d967 = 0;
    d_60ae_dcbc = 0;
    for (d_60ae_dd64 = 1; d_60ae_dd64 <= 12; d_60ae_dd64++) {
        if (d_60ae_d967 == 0) {
            d_60ae_dd84 = -1;
            for (d_60ae_dd44 = 0; d_60ae_dd44 <= d_323f_4e52[team] - 1; d_60ae_dd44++) {
                char ok;

                d_60ae_dcac = d_471b_b7a8[team][d_60ae_dd44];
                if (a == 0)
                    ok = d_60ae_ddbe[d_60ae_dcac].w.f1;
                if (a == 1)
                    ok = d_60ae_ddbe[d_60ae_dcac].w.f2;
                if (a == 2)
                    ok = d_60ae_ddbe[d_60ae_dcac].w.f3;
                if (ok && sel[d_60ae_dd44] == 0) {
                    if (d_3c35_0000[5][d_60ae_dcac] + d_3c35_0000[0][d_60ae_dcac] > 0) {
                        d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
                        d_60ae_d8cf = (d_60ae_fae6[1][d_60ae_dcac] + d_60ae_fae6[0][d_60ae_dcac])
                                      / ((float)d_3c35_0000[5][d_60ae_dcac] + d_3c35_0000[0][d_60ae_dcac]);
                    } else
                        d_60ae_d8cf = 0;
                    if (d_60ae_d8cf > d_60ae_d8cb || d_60ae_dd84 == -1) {
                        d_60ae_d8cb = d_60ae_d8cf;
                        d_60ae_dd84 = d_60ae_dcac;
                        d_60ae_dd30 = d_60ae_dd44;
                    }
                }
            }
        }
        if (d_60ae_dd84 > -1) {
            sel[d_60ae_dd30] = -1;
            d_2289_d6c6[d_60ae_dd64] = d_60ae_dd84;
            d_60ae_dcbc++;
        } else
            d_60ae_d967 = -1;
    }
}

void f_7732_4b16(int team)
{
    f_14bc_2f90(0, "Select Formation", "*Exit|4-4-2|4-2-4|Sweeper|5-3-2|4-3-3|5-2-3|4-5-1|Anchor Man|Support Man|");
    if (d_60ae_dda0 > 0) {
        d_60ae_dc8a = d_60ae_d9aa / 16;
        d_60ae_d9aa = d_60ae_dda0 + d_60ae_dc8a * 16 - 1;
        f_a3de_0f2a(team, d_60ae_dda0 - 1, 0);
        for (d_60ae_dd92 = 11; d_60ae_dd92 <= 13; d_60ae_dd92++)
            if (d_323f_0538[team == d_60ae_dcd0][d_60ae_dd92] < 2)
                for (d_60ae_dd48 = 0; d_60ae_dd48 <= 2; d_60ae_dd48++)
                    d_323f_0e8a[team][d_60ae_dd48][d_60ae_dd92] =
                        d_323f_0e8a[team][d_60ae_dd48][d_471b_ae55[team == d_60ae_dcd0][d_60ae_dd92]];
        d_323f_2630[d_323f_47b4[team]] = d_60ae_d9aa;
    }
}

void f_7732_4c3e(int team)
{
    char s[320];

    strcpy(d_2289_5308, "");
    for (d_60ae_dd42 = 0; d_60ae_dd42 <= 4; d_60ae_dd42++) {
        strcpy(s, d_54d9_0619[d_60ae_dd42]);
        s[0] = toupper(s[0]);
        strcat(d_2289_5308, s);
        strcat(d_2289_5308, "|");
    }
    sprintf(s, "*Exit|%s", d_2289_5308);
    f_14bc_2f90(0, "Select Style", s);
    if (d_60ae_dda0 > 0) {
        d_60ae_dc88 = d_60ae_d9aa % 16;
        d_60ae_d9aa = (d_60ae_dda0 - 1) * 16 + d_60ae_dc88;
        d_323f_2630[d_323f_47b4[team]] = d_60ae_d9aa;
    }
}
