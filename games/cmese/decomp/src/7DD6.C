/* @at 7dd6:0000 */
/* @data 69da:12b8 */
/* @module */

/* Overlay 7dd6 (CM93's 7732.C, from CM1's 6E68.C): club information: the accounts, board
 * confidence, resignation and manager jobs, match reports, the background picture menu (CM94
 * adds switching the vidiprinter on and off there), save game, quitting, the week's fixture
 * and result titles and lists, cup rounds, the squad screen and tactics. Its data is the
 * accounts' items and the squad screen's attribute columns, then its literal pool. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <mem.h>
#include <ctype.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_7dd6_0000(void);
void f_7dd6_002a(int team);
void f_7dd6_0501(void);
void f_7dd6_06d4(int team);
void f_7dd6_0737(int team);
void f_7dd6_0893(int team);
void f_7dd6_0b8e(void);
void f_7dd6_0be1(void);
void f_7dd6_0d76(void);
void f_7dd6_0ecc(int comp, int week);
void f_7dd6_0f91(void);
void f_7dd6_1124(void);
void f_7dd6_11a0(int week, int mode, int x);
void f_7dd6_1e12(int week, int mode, int from, int to, int kind);
char f_7dd6_24af(int kind, int week, int n);
int f_7dd6_25a6(int week, int n);
void f_7dd6_2642(int club, int week, int n);
void f_7dd6_2843(int a, int b, int c, int d);
void f_7dd6_2a6f(int n, int b, int c, int d);
void f_7dd6_2d5a(void);
void f_7dd6_2dcf(int team);
void f_7dd6_3bc1(int mode, int team);
void f_7dd6_4183(int a, int team);
void f_7dd6_4386(int team);
void f_7dd6_44a5(int team);

void f_9661_1484(void);
void f_a83a_0fad(int);
void f_9661_1bc4(int team);
void f_1a70_000a(float x, int team, char far *title);
void f_1a70_3554(float x, float y, int bg, int fg, int w, char far *s);
void f_1a70_3d0c(float x, float y, int bg, int fg, int w, char far *s);
void far *f_2162_1634(int handle, int page);
long f_a83a_1ea1(int x);
long f_2162_1367(long a, long b);
void f_1a70_5688(int a);
void f_1a70_5e32(void);
void f_1a70_5e46(void);
void f_1a70_4a41(char far *title);
extern int d_69da_dff0;
extern int d_69da_dffc;
extern int d_69da_d9d2;
extern char (far *d_69da_dfc6)[101];
extern char far d_536d_52ad[];
extern char far d_536d_52fd[];
extern char far d_536d_586b[];
extern char far d_536d_58bb[];
extern char far d_536d_7db5[];
extern long far d_4512_1e90[][80];
extern unsigned char far d_4512_2390[];
void f_1a70_0b80(char far *);
void f_a83a_1344(char all);
char far *f_1a70_4793(int manager, char full);
void f_1a70_2eaa(int n, char far *title, char far *items);
void f_9c01_1697(int club);
void f_9661_3ef4(int club, int a);
unsigned f_2162_0b1b(char far *s, char far *set);
void f_1a70_4ede(int a, float x, float y, int c, int d, int e, char far *s);
int f_1a70_53de(int a);
extern char d_69da_ddb8;
extern char d_69da_ddc2;
extern int d_69da_d9d8;
extern int d_69da_d996;
extern int d_69da_da24;
extern int d_69da_d9dc;
extern int d_69da_d992;
extern int d_69da_da4c;
extern int d_69da_da4a;
extern int d_69da_da42;
extern int d_69da_dd76;
extern int d_69da_dd78;
extern int d_69da_dd7a;
extern int d_69da_dd7c;
extern long d_69da_df05;
extern long d_69da_df09;
extern long d_69da_df0d;
extern float d_69da_de4d;
extern float d_69da_de45;
extern char near *d_69da_b1fc[];
extern long (far *d_69da_dfae)[80];
extern unsigned char far d_4512_01ec[];
extern unsigned char far d_4512_00a4[];
struct col { float x; char far *title; };
void f_1a70_3226(int last);
void f_b085_4ca8(void);
void f_7827_1680(int mode);
int f_aac9_3615(int p);
void f_a330_4876(int n);
void f_a83a_0630(int t);
void f_b8da_2626(char team);
void f_b8da_6c48(void);
char f_1a70_237e(int);
char f_1a70_2490(int);
char f_1a70_24c5(int);
char f_1a70_2522(int);
char f_1a70_257b(int);
char f_1a70_25dc(int);
char f_1a70_2631(int);
char f_1a70_2a7d(int);
void f_8773_3a79(int a, int b, char c);
void f_a330_447a(char far *s);
void f_2162_19f6();
void f_2162_05a0(char reset);
void f_2162_065d(void);
void f_a330_36da(void);
void f_2162_1256(void);
extern char d_69da_ddc4;
extern char d_69da_ddc3;
extern char d_69da_ddbc;
extern int d_69da_dd7e;
extern int d_69da_da50;
extern int d_69da_da4e;
extern int d_69da_da48;
extern int d_69da_da46;
extern int d_69da_da44;
extern int d_69da_da08;
extern unsigned char far d_4512_2b2e[];
extern unsigned char far d_4512_3042[];
extern int far d_4512_1a30[];
extern unsigned char far d_4512_0000[][82];
extern unsigned char far d_3668_0000[][1860];
extern int far d_28da_2332[];
extern int far d_5dbf_1290[][2][98];
void f_2162_0b0c(int on);
int f_2162_13ba(int a, int b);
void f_1a70_344b(int x, int y, int colour, char far *s);
void f_1a70_379b(float x, float y, int colour, char far *s);
void f_1a70_3b47(float x, float y, int colour, char far *s);
char f_1a70_27c8(int, int);
char f_1a70_2855(int, int);
char f_1a70_28f3(int);
char f_1a70_2950(int);
char f_1a70_29fa(int);
char f_1a70_2a9e(int, int);
extern float d_69da_de59;
extern int d_69da_da6a;
extern int d_69da_da68;
extern int d_69da_da66;
extern int d_69da_da64;
extern int d_69da_da62;
extern int d_69da_da60;
extern int d_69da_da5e;
extern int d_69da_da5c;
extern int d_69da_da58;
extern int d_69da_da56;
extern int d_69da_da54;
extern int d_69da_da52;
extern int d_69da_d9ec;
extern int d_69da_d9c0;
char f_1a70_2bc7(int x);
char far *f_1a70_3404(int x);
char far *f_1a70_4983(int division, char full);
void f_1a70_0137(int x1, int y1, int x2, int y2);
void f_2162_13fc(void far *a, void far *b, int n);
void f_2162_0897();
void f_2162_08b5(int x1, int y1, int x2, int y2);
extern char d_69da_ddc6;
extern char d_69da_ddc5;
extern int d_69da_d9a0;
extern int d_69da_d9ea;
extern int d_69da_da6e;
extern int d_69da_da6c;
extern char near *d_69da_b2a4[];
extern unsigned char far d_5dbf_1076[];
void f_1a70_525f(int a, char b);
char far *f_1a70_2e4a(int x, char c);
int f_1a70_1dc1(int player);
char f_1a70_5b76(int player);
char f_1a70_5b94(int player);
unsigned char f_1a70_5bc8(int player);
char f_1a70_5ea2(char team, char week, char n);
char far *f_2162_104e(char far *s);
void f_a83a_14e6(int team, char reserves);
void f_a83a_1e28(int line);
void f_829f_0000(char far *msg);
void f_7827_0d6d(int mode, int team);
void f_7827_4b4d(int team);
void f_7827_4f28(int team);
void f_7827_5340(int team);
void f_7827_43ad(int team);
void f_9c01_08e4(int team);
void f_aac9_07c3(int team);
void f_aac9_42ed(int player, int a, char b);
void f_9007_4da1(int player, int a);
void f_c06b_0000(char team);
unsigned char f_b8da_5529(int team);
void f_b8da_286a(char team);
void f_b085_38a5(char team, char n);
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
extern char d_69da_ddc9;
extern char d_69da_ddc8;
extern char d_69da_ddbe;
extern unsigned char d_69da_ddb0;
extern int d_69da_da7e;
extern int d_69da_da7a;
extern int d_69da_da76;
extern int d_69da_da74;
extern int d_69da_da72;
extern int d_69da_da02;
extern int d_69da_d9e8;
extern int d_69da_d9e6;
extern int d_69da_d9bc;
extern int d_69da_d9ae;
extern float d_69da_de5d;
extern unsigned char far d_4512_a4f8[][80];
extern unsigned char far d_4512_a508[][80];
extern int far d_4512_1710[][80];
extern int far d_5dbf_1292[][2][98];
char far *f_1a70_46c1(int player);
void f_a83a_0e3f(int t, int k, char c);
extern char d_69da_ddcc;
extern int d_69da_da80;
extern int d_69da_da82;
extern int d_69da_da84;
extern int d_69da_da86;
extern int d_69da_d9ce;
extern int d_69da_d9da;
extern int d_69da_d9ee;
extern int d_69da_d9f0;
extern int d_69da_dd88;
extern int d_69da_daaa;
extern int d_69da_daa8;
extern int d_69da_dfec;
extern float d_69da_de61;
extern float d_69da_de65;
extern int (far *d_69da_dfa6)[1860];
extern char far d_536d_50cd[];
extern char far * far d_5dbf_06ac[];
extern unsigned char far d_4512_023e[];
extern unsigned char far d_4512_4726[][3][14];
extern unsigned char far d_4512_2db8[];
extern int far d_4512_1ad0[];
extern unsigned char far d_4512_28a4[];
extern unsigned char far d_4512_261a[];
extern unsigned char far d_4512_4492[];
extern int far d_4512_637c[][16];
extern char far d_536d_590b[];
extern char far d_536d_591f[];
extern char far d_536d_5933[];
extern char far d_536d_a475[];
struct score { unsigned home1 : 4; unsigned away1 : 4; unsigned home2 : 4; unsigned away2 : 4; };
extern struct score far d_536d_3066[];
extern int far d_28da_226e[];
extern char d_69da_df92;
char f_1a70_268e(int, int);
char f_1a70_2737(int, int);
extern char far d_536d_5cad[];
extern char far d_536d_5c5d[];
extern char far d_536d_5c0d[];
extern char far d_536d_5bbd[];
extern char far d_536d_5b6d[];
extern char far d_536d_5b1d[];
extern char far d_536d_5acd[];
extern char far d_536d_5a7d[];
extern char far d_536d_5a2d[];
extern char far d_536d_57cb[];
extern char far d_536d_534d[];
extern int far d_4512_87bc[];
extern int far d_28da_0000[];
extern char far d_28da_263c[];
extern char far d_536d_5cfd[];
extern char far d_536d_5d4d[];
extern char far d_536d_5d9d[];
extern char far * far d_5dbf_0000[];
void f_1a70_5641(int n);
void f_1a70_565a(void);
void f_829f_0099(int team);
extern struct flags_w far d_4512_bdc8[];
extern char far d_536d_86c5[][40];
extern char far d_536d_5e3d[];
extern char far d_536d_5ded[];
extern int far d_4512_8780[];
extern int far d_4512_549a[][14];
extern unsigned char far d_28da_2a78[][1860];
extern int far d_28da_10f0[][26];
extern int far d_4512_877e[];
extern char far d_536d_5e8d[];
extern char far d_536d_5edd[];
extern unsigned char far d_4512_5d98[][14];
extern unsigned char far d_28da_2a72[][3];


/* the accounts' items */
static char far *d_69da_12b8[] = {
    "GATE RECEIPTS", "SPONSOR PAYMENT", "PLAYERS SOLD", "INTEREST", "TELEVISION NETS",
    "CASH PRIZES", "OTHER GAINS", "STAFF WAGES", "RATES AND TAXES", "PLAYERS BOUGHT",
    "INTEREST ON OVERDRAFT", "GROUND MAINTENANCE", "LEAGUE FINES", "GENERAL EXPENSES"
};

void f_7dd6_0000(void)
{
    if (d_69da_ddb8 == 0)
        f_9661_1484();
    else {
        f_a83a_0fad(-1);
        f_9661_1bc4(d_69da_d9d8);
    }
}

void f_7dd6_002a(int team)
{
    char buf[320];

    if (d_69da_d996 > 2) {
        f_1a70_5e32();
        f_1a70_000a(-1, team, "Accounts");
        f_1a70_3554(1, 5.25, 6, 2, 0, " ITEM                   ");
        f_1a70_3554(20, 5.25, 3, 6, 0, " INCOME     ");
        f_1a70_3554(30, 5.25, 3, 6, 0, " SPENDING   ");
        d_69da_df05 = 0;
        d_69da_df09 = 0;
        for (d_69da_da24 = 0; d_69da_da24 <= 13; d_69da_da24++) {
            strcpy(buf, d_69da_12b8[d_69da_da24]);
            if (d_69da_da24 == 0 && d_69da_d996 < 8)
                strcpy(buf, "GATE + SEASON TICKETS");
            sprintf(d_536d_52ad, " %-23s", buf);
            d_69da_dfae = f_2162_1634(d_69da_dff0, 0);
            sprintf(d_536d_52fd, "%-10ld", (d_69da_dfae + 16)[d_69da_da24][team]);
            if (d_69da_da24 < 7) {
                f_1a70_3554(1, d_69da_da24 + 6.5, 1, 4, 0, d_536d_52ad);
                sprintf(buf, " +%s", d_536d_52fd);
                f_1a70_3554(20, d_69da_da24 + 6.5, 1, 12, 0, buf);
                d_69da_dfae = f_2162_1634(d_69da_dff0, 0);
                d_69da_df05 += (d_69da_dfae + 16)[d_69da_da24][team];
            } else {
                f_1a70_3554(1, d_69da_da24 + 6.75, 1, 4, 0, d_536d_52ad);
                sprintf(buf, " -%s", d_536d_52fd);
                f_1a70_3554(30, d_69da_da24 + 6.75, 1, 2, 0, buf);
                d_69da_dfae = f_2162_1634(d_69da_dff0, 0);
                d_69da_df09 += (d_69da_dfae + 16)[d_69da_da24][team];
            }
        }
        f_1a70_3554(1, 21, 6, 3, 0, " TOTALS                 ");
        sprintf(buf, " +%-10ld", d_69da_df05);
        f_1a70_3554(20, 21, 4, 1, 0, buf);
        sprintf(buf, " -%-10ld", d_69da_df09);
        f_1a70_3554(30, 21, 2, 1, 0, buf);
        strcpy(d_536d_586b, "");
        if (d_69da_df05 - d_69da_df09 > 0)
            sprintf(d_536d_586b, "(+%ld) ", d_69da_df05 - d_69da_df09);
        else if (d_69da_df09 - d_69da_df05 > 0)
            sprintf(d_536d_586b, "(-%ld) ", d_69da_df09 - d_69da_df05);
        sprintf(buf, " %ld AVAILABLE %s",
                f_2162_1367(d_4512_1e90[0][team] - f_a83a_1ea1(team), 0L), d_536d_586b);
        f_1a70_3554(1, 24, 1, 12, 0, buf);
        d_69da_df0d = f_a83a_1ea1(team) - d_4512_1e90[0][team];
        sprintf(buf, " OVERDRAFT %ld (MAX %ld) ", d_69da_df0d > 0 ? d_69da_df0d : 0L,
                f_a83a_1ea1(team));
        f_1a70_3554(1, 22.5, 1, 8, 0, buf);
        f_1a70_5e46();
        f_1a70_5688(0);
    } else
        f_1a70_0b80("No summary for last week");
}

void f_7dd6_0501(void)
{
    char buf[320];

    if (d_69da_da4c > 0) {
        f_a83a_1344(0);
        if (d_69da_dd76 > -1) {
            do {
                f_1a70_2eaa(0, f_1a70_4793(d_69da_dd76, 0), "*Exit|Board Confidence|Resign|");
                d_69da_dd78 = d_69da_d992;
                if (d_69da_dd78 == 1) {
                    if (d_4512_1e90[0][d_4512_2390[d_69da_dd76]] < 0)
                        f_1a70_0b80("We are in financial trouble");
                    else {
                        if (d_4512_01ec[d_4512_2390[d_69da_dd76]] <= 24)
                            strcpy(d_536d_58bb, "are considering your future");
                        else if (d_4512_01ec[d_4512_2390[d_69da_dd76]] <= 39)
                            strcpy(d_536d_58bb, "are concerned");
                        else if (d_4512_01ec[d_4512_2390[d_69da_dd76]] <= 59)
                            strcpy(d_536d_58bb, "are not concerned");
                        else if (d_4512_01ec[d_4512_2390[d_69da_dd76]] <= 79)
                            strcpy(d_536d_58bb, "are pleased");
                        else if (d_4512_01ec[d_4512_2390[d_69da_dd76]] <= 94)
                            strcpy(d_536d_58bb, "are very pleased");
                        else
                            strcpy(d_536d_58bb, "are delighted");
                        sprintf(buf, "%d%% : We %s", d_4512_01ec[d_4512_2390[d_69da_dd76]], d_536d_58bb);
                        f_1a70_0b80(buf);
                    }
                } else if (d_69da_dd78 == 2) {
                    f_7dd6_06d4(d_69da_dd76);
                    if (d_69da_ddc2)
                        d_69da_dd78 = 0;
                }
            } while (d_69da_dd78 != 0);
        }
    } else
        f_1a70_0b80("Not available on demo");
}

void f_7dd6_06d4(int team)
{
    d_69da_ddc2 = 0;
    f_1a70_2eaa(0, "Resignation", "*Exit|Resign|");
    d_69da_da42 = d_69da_d992;
    if (d_69da_da42 > 0) {
        f_9c01_1697(d_4512_2390[d_69da_dd76]);
        f_9661_3ef4(d_4512_2390[d_69da_dd76], 1);
        d_69da_ddc2 = -1;
    }
}

void f_7dd6_0737(int team)
{
    char num[4];
    char buf[320];

    if (d_69da_da4a > 0) {
        do {
            sprintf(buf, "The %s job", (char far *)d_69da_b1fc[team]);
            f_1a70_2eaa(0, buf, "Exit|Candidates|Apply For It|");
            d_69da_dd7a = d_69da_d992;
            if (d_69da_dd7a == 1)
                f_7dd6_0893(team);
            else if (d_69da_dd7a == 2) {
                f_a83a_1344(-1);
                if (d_69da_dd76 > -1) {
                    sprintf(num, "%03d", d_69da_dd76);
                    d_69da_dfc6 = f_2162_1634(d_69da_dffc, 0);
                    if (f_2162_0b1b(d_69da_dfc6[team], num) == 0) {
                        sprintf(buf, "%s receive your application", (char far *)d_69da_b1fc[team]);
                        f_1a70_0b80(buf);
                        d_69da_dfc6 = f_2162_1634(d_69da_dffc, 1);
                        strcat(d_69da_dfc6[team], num);
                        strcat(d_69da_dfc6[team], " ");
                    } else
                        f_1a70_0b80("You are already on the list");
                }
            }
        } while (d_69da_dd7a != 0);
    } else
        f_7dd6_0893(team);
}

void f_7dd6_0893(int team)
{
    char buf[320];

    sprintf(buf, "The %s job", (char far *)d_69da_b1fc[team]);
    f_1a70_4a41(buf);
    f_1a70_3d0c(1.25, 4.0, d_4512_00a4[team] / 16, d_4512_00a4[team] % 16, 0, " Candidates ");
    f_1a70_3554(1.125, 7.0, 2, 1, 0x4c, " NAME");
    f_1a70_3554(10.875, 7.0, 2, 1, 0x49, " CLUB");
    f_1a70_3554(20.25, 7.0, 2, 1, 0x4c, " NAME");
    f_1a70_3554(30, 7.0, 2, 1, 0x49, " CLUB");
    d_69da_dfc6 = f_2162_1634(d_69da_dffc, 0);
    strcpy(d_536d_7db5, d_69da_dfc6[team]);
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= 21; d_69da_d9d2++) {
        d_69da_de4d = d_69da_d9d2 > 10 ? 20.25 : 1.125;
        d_69da_de45 = d_69da_d9d2 + 9 - (d_69da_d9d2 > 10 ? 11 : 0);
        if ((d_69da_d9d2 + 1) * 4 <= strlen(d_536d_7db5)) {
            strncpy(buf, &d_536d_7db5[d_69da_d9d2 * 4], 3);
            buf[3] = 0;
            d_69da_dd7c = atol(buf);
            sprintf(buf, " %s", f_1a70_4793(d_69da_dd7c, -1));
            f_1a70_3554(d_69da_de4d, d_69da_de45, d_69da_dd7c > 645 ? 6 : 1,
                        d_69da_d9d2 & 1 ? 15 : 3, 0x4c, buf);
            if (d_4512_2390[d_69da_dd7c] < 255)
                sprintf(buf, " %.11s", (char far *)d_69da_b1fc[d_4512_2390[d_69da_dd7c]]);
            else
                strcpy(buf, " None");
            f_1a70_3554(d_69da_de4d + 9.75, d_69da_de45, 1, 4, 0x49, buf);
        } else {
            f_1a70_3554(d_69da_de4d, d_69da_de45, 1, d_69da_d9d2 & 1 ? 15 : 3, 0x4c, "");
            f_1a70_3554(d_69da_de4d + 9.75, d_69da_de45, 1, 4, 0x49, "");
        }
    }
    f_1a70_4ede(2, 1.25, 22.5, 1, 4, 0x12d, "                 EXIT");
    do
        d_69da_d992 = f_1a70_53de(d_69da_d9dc);
    while (d_69da_d992 == 0);
}

void f_7dd6_0b8e(void)
{
    do {
        f_1a70_2eaa(0, "Managerial", "*Exit|Manager History|Add Manager|Job News|");
        d_69da_dd7e = d_69da_d992;
        if (d_69da_dd7e == 1)
            f_b085_4ca8();
        else if (d_69da_dd7e == 2)
            f_7dd6_0be1();
        else if (d_69da_dd7e == 3)
            f_7827_1680(2);
    } while (d_69da_dd7e != 0);
}

void f_7dd6_0be1(void)
{
    int i;

    if (d_69da_da4a == 4)
        f_1a70_0b80("Maximum four players");
    else {
        f_a83a_0fad(d_69da_da4a);
        if (d_4512_1ad0[d_69da_d9d8] == 650)
            f_1a70_0b80("Please wait until|they appoint a coach");
        else {
            d_69da_da4c++;
            d_69da_da4a++;
            d_4512_2390[d_4512_1a30[d_69da_d9d8]] = 255;
            d_4512_28a4[d_4512_1a30[d_69da_d9d8]] = 0;
            d_69da_da4e = d_69da_da4a + 645;
            d_4512_1a30[d_69da_d9d8] = d_69da_da4e;
            d_4512_0000[0][d_69da_d9d8] = 8;
            d_4512_01ec[d_69da_d9d8] = 50;
            for (i = 1; i <= d_4512_637c[d_69da_d9d8][0]; i++) {
                d_69da_da50 = d_4512_637c[d_69da_d9d8][i];
                d_3668_0000[23][d_69da_da50] -= 1;
            }
            d_4512_637c[d_69da_d9d8][0] = 0;
            d_4512_2390[d_69da_da4e] = d_69da_d9d8;
            d_4512_261a[d_69da_da4e] = 35;
            d_4512_28a4[d_69da_da4e] = 30;
            d_4512_4492[d_69da_da4e] = 0;
            d_4512_3042[d_69da_da4e] = 80;
            d_4512_2b2e[d_69da_da4e] = f_aac9_3615(d_69da_da4e);
            f_a330_4876(d_69da_da4a - 1);
            d_69da_ddb8 = 0;
            f_a83a_0630(d_69da_d9d8);
            f_b8da_2626(d_69da_d9d8);
        }
    }
}

void f_7dd6_0d76(void)
{
    do {
        f_1a70_4a41("Match reports");
        f_1a70_2eaa(0, "", "*Exit|FA Premier|First Division|Second Division|Third Division|FA Cup|Coca-Cola Cup|Anglo-Ital Cup|UEFA Cup|Cup Winners Cup|European Cup|Playoffs|Charity Shield|");
        f_1a70_3226(12);
        d_69da_ddc3 = 0;
        if (d_69da_d992 > 0) {
            for (d_69da_da08 = d_69da_d996 - 1; d_69da_da08 >= 1; d_69da_da08--) {
                d_69da_ddc4 = 0;
                switch (d_69da_d992) {
                case 1:
                case 2:
                case 3:
                case 4:
                    d_69da_ddc4 = f_1a70_237e(d_69da_da08);
                    break;
                case 5:
                    d_69da_ddc4 = f_1a70_2490(d_69da_da08);
                    break;
                case 6:
                    d_69da_ddc4 = f_1a70_24c5(d_69da_da08);
                    break;
                case 7:
                    d_69da_ddc4 = f_1a70_2522(d_69da_da08);
                    break;
                case 8:
                    d_69da_ddc4 = f_1a70_257b(d_69da_da08);
                    break;
                case 9:
                    d_69da_ddc4 = f_1a70_25dc(d_69da_da08);
                    break;
                case 10:
                    d_69da_ddc4 = f_1a70_2631(d_69da_da08);
                    break;
                case 11:
                    d_69da_ddc4 = f_1a70_2a7d(d_69da_da08);
                    break;
                case 12:
                    d_69da_ddc4 = d_69da_da08 == 10;
                    break;
                }
                if (d_69da_ddc4 && d_28da_2332[d_69da_da08] > 0) {
                    if (d_69da_d992 > 4)
                        d_69da_da44 = d_69da_d992 - 4;
                    else
                        d_69da_da44 = d_69da_d992 + 8;
                    f_7dd6_11a0(d_69da_da08, 3, d_69da_da44);
                    d_69da_ddc3 = -1;
                    d_69da_da08 = 1;
                }
            }
            if (d_69da_ddc3 == 0)
                f_1a70_0b80("No matches played yet");
        }
    } while (d_69da_d992 != 0);
}

void f_7dd6_0ecc(int comp, int week)
{
    FILE *fp;

    f_2162_19f6(2);
    fp = fopen(d_536d_a475, "rb");
    fseek(fp, (long)(d_28da_226e[week] + comp - 1) * 155, 0);
    fread(d_536d_3066, 1, 155, fp);
    fclose(fp);
    f_8773_3a79(d_5dbf_1290[comp][0][week] / 32,
                d_5dbf_1290[comp][1][week] / 32, -1);
}

void f_7dd6_0f91(void)
{
    f_1a70_4a41("New Picture");
    f_1a70_2eaa(5, "", "*Exit|New Picture|Vidiprinter|");
    f_1a70_3226(2);
    if (d_69da_d992 == 1) {
        do {
            f_1a70_4a41("Background Picture");
            f_1a70_2eaa(5, "", "*Exit|Picture 1|Picture 2|Picture 3|Picture 4|Picture 5|Picture 6|Picture 7|Picture 8|Change Colour|Change Brightness|");
            strcpy(d_536d_590b, d_536d_591f);
            d_69da_ddbc = 0;
            do {
                f_1a70_3226(10);
                switch (d_69da_d992) {
                case 0:
                    d_69da_ddbc = -1;
                    break;
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                    sprintf(d_536d_591f, "picture%d.lbm", d_69da_d992);
                    if (strcmp(d_536d_591f, d_536d_590b) != 0) {
                        d_536d_5933[0] = 0;
                        f_2162_19f6(d_69da_d992 == 8 ? 1 : 3);
                        d_536d_5933[0] = 0;
                        f_a330_447a("Loading picture");
                        f_2162_05a0(-1);
                        d_536d_5933[0] = 0;
                        f_2162_19f6(2);
                    }
                    d_69da_ddbc = -1;
                    break;
                case 9:
                    d_69da_da46 += d_69da_da46 == 5 ? -5 : 1;
                    f_2162_065d();
                    break;
                case 10:
                    d_69da_da48 += d_69da_da48 == 4 ? -4 : 1;
                    f_2162_065d();
                    break;
                }
            } while (!d_69da_ddbc);
        } while (d_69da_d992 != 0);
    } else if (d_69da_d992 == 2) {
        f_1a70_2eaa(0, "Vidi-printer", "Vidi On|Vidi Off|");
        if (d_69da_d992 == 0)
            d_69da_df92 = 1;
        else
            d_69da_df92 = 0;
    }
}

void f_7dd6_1124(void)
{
    do {
        f_1a70_2eaa(0, "Save game", "*Exit|Save Game|Information|");
        if (d_69da_d992 == 1) {
            d_69da_ddb8 = d_69da_da4c == 0;
            f_a330_36da();
            f_1a70_2eaa(0, "Only End The Game By Using Quit", "*Continue|Quit|");
            if (d_69da_d992 == 1) {
                f_2162_1256();
                exit(0);
            } else
                f_2162_19f6(2);
        } else if (d_69da_d992 == 2)
            f_b8da_6c48();
    } while (d_69da_d992 == 2);
}

/* the titles of the week's fixtures or results, competition by competition */
void f_7dd6_11a0(int week, int mode, int x)
{
    if (week <= 8) {
        d_69da_da52 = d_28da_0000[week - 1];
        strcpy(d_536d_5a2d, "Preseason");
        strcpy(d_536d_5a7d, "Friendly Match");
        if (d_69da_da52 > 1)
            strcat(d_536d_5a7d, "es");
        f_7dd6_2843(week, 1, d_69da_da52, x);
        f_7dd6_1e12(week, mode, 1, d_69da_da52, x);
    }
    if (week == 10) {
        d_69da_da52 = 1;
        strcpy(d_536d_5a2d, "Charity Shield");
        strcpy(d_536d_5a7d, "Friendly Match");
        f_7dd6_1e12(week, mode, 1, 1, x);
    }
    if (f_1a70_237e(week)) {
        d_69da_da52 = 40;
        strcpy(d_536d_5a2d, "League");
        strcpy(d_536d_5a7d, "FA Premier");
        f_7dd6_2843(week, 1, 10, x);
        f_7dd6_1e12(week, mode, 1, 10, x);
        strcpy(d_536d_5a7d, "First Division");
        f_7dd6_2843(week, 11, 20, x);
        f_7dd6_1e12(week, mode, 11, 20, x);
        strcpy(d_536d_5a7d, "Second Division");
        f_7dd6_2843(week, 21, 30, x);
        f_7dd6_1e12(week, mode, 21, 30, x);
        strcpy(d_536d_5a7d, "Third Division");
        f_7dd6_2843(week, 31, 40, x);
        f_7dd6_1e12(week, mode, 31, 40, x);
    }
    if (f_1a70_2490(week) || f_1a70_24c5(week)) {
        strcpy(d_536d_5a2d, f_1a70_2490(week) ? "FA Cup" : "Coca-Cola Cup");
        strcpy(d_536d_5c0d, "");
        if (f_1a70_28f3(week))
            strcpy(d_536d_5c0d, ",1st Leg");
        else if (f_1a70_2950(week))
            strcpy(d_536d_5c0d, ",2nd Leg");
        switch (week) {
        case 15: case 19: case 38: case 39:
            d_69da_da52 = f_1a70_2490(week) ? 28 : 16;
            sprintf(d_536d_5a7d, "1st Round%s", d_536d_5c0d);
            if (f_1a70_24c5(week))
                strcat(d_536d_5a7d, "s");
            break;
        case 23: case 27: case 44: case 45:
            d_69da_da52 = f_1a70_2490(week) ? 24 : 32;
            sprintf(d_536d_5a7d, "2nd Round%s", d_536d_5c0d);
            if (f_1a70_24c5(week))
                strcat(d_536d_5a7d, "s");
            break;
        case 31: case 52: case 53:
            d_69da_da52 = f_1a70_2490(week) ? 32 : 16;
            strcpy(d_536d_5a7d, "3rd Round");
            break;
        case 43: case 58: case 59:
            d_69da_da52 = f_1a70_2490(week) ? 16 : 8;
            strcpy(d_536d_5a7d, "4th Round");
            break;
        case 64: case 65:
            d_69da_da52 = 8;
            strcpy(d_536d_5a7d, "5th Round");
            break;
        case 55: case 70: case 71:
            d_69da_da52 = 4;
            strcpy(d_536d_5a7d, "Quarter Finals");
            break;
        case 63: case 67: case 78: case 79:
            d_69da_da52 = 2;
            sprintf(d_536d_5a7d, "Semi Finals%s", d_536d_5c0d);
            if (f_1a70_24c5(week))
                strcat(d_536d_5a7d, "s");
            break;
        case 82: case 83: case 92: case 93:
            d_69da_da52 = 1;
            strcpy(d_536d_5a7d, "Final");
            break;
        }
        if (f_1a70_29fa(week)) {
            if (strcmp(d_536d_5a7d, "Quarter Finals") == 0 || strcmp(d_536d_5a7d, "Semi Finals") == 0)
                d_536d_5a7d[strlen(d_536d_5a7d) - 1] = 0;
            strcat(d_536d_5a7d, " Replay");
            d_69da_da52 = d_28da_2332[week];
            if (d_69da_da52 > 1)
                strcat(d_536d_5a7d, "s");
        }
        f_7dd6_2843(week, 1, d_69da_da52, x);
        d_69da_da54 = 8;
        d_69da_da56 = -7;
        d_69da_d9ec = 0;
        do {
            d_69da_da56 += d_69da_da54;
            d_69da_da58 = f_2162_13ba(d_69da_da52, d_69da_da54 + d_69da_d9ec * d_69da_da54);
            d_69da_d9ec++;
            f_7dd6_1e12(week, mode, d_69da_da56, d_69da_da58, x);
        } while (d_69da_da58 != d_69da_da52);
    }
    if (f_1a70_2a7d(week)) {
        strcpy(d_536d_5a2d, "Promotion playoff");
        switch (week) {
        case 94: case 96:
            d_69da_da52 = 6;
            sprintf(d_536d_5a7d, "Semi Finals%ss", f_1a70_2950(week) ? ",2nd Leg" : ",1st Leg");
            break;
        case 98:
            d_69da_da52 = 3;
            strcpy(d_536d_5a7d, "Finals");
            break;
        }
        f_7dd6_1e12(week, mode, 1, d_69da_da52, x);
    }
    if (f_1a70_257b(week) || f_1a70_25dc(week) || f_1a70_2631(week) || f_1a70_2522(week)) {
        strcpy(d_536d_5acd, "Cup Winners Cup");
        strcpy(d_536d_5b1d, "UEFA Cup");
        strcpy(d_536d_5b6d, "European Cup");
        strcpy(d_536d_5bbd, "Anglo-Italian Cup");
        strcpy(d_536d_5c0d, "");
        if (f_1a70_28f3(week))
            strcpy(d_536d_5c0d, ",1st Leg");
        else if (f_1a70_2950(week))
            strcpy(d_536d_5c0d, ",2nd Leg");
        switch (week) {
        case 21: case 25:
            d_69da_da52 = 32;
            strcpy(d_536d_5a2d, d_536d_5b1d);
            sprintf(d_536d_5a7d, "Preliminaries%ss", d_536d_5c0d);
            f_7dd6_2843(week, 1, 32, x);
            f_7dd6_1e12(week, mode, 1, 8, x);
            f_7dd6_1e12(week, mode, 9, 16, x);
            f_7dd6_1e12(week, mode, 17, 24, x);
            f_7dd6_1e12(week, mode, 25, 32, x);
            break;
        case 29: case 33:
            d_69da_da52 = 38;
            strcpy(d_536d_5a2d, d_536d_5b6d);
            sprintf(d_536d_5a7d, "1st Round%ss", d_536d_5c0d);
            f_7dd6_2843(week, 1, 16, x);
            f_7dd6_1e12(week, mode, 1, 8, x);
            f_7dd6_1e12(week, mode, 9, 16, x);
            strcpy(d_536d_5a2d, d_536d_5acd);
            f_7dd6_2843(week, 17, 32, x);
            f_7dd6_1e12(week, mode, 17, 24, x);
            f_7dd6_1e12(week, mode, 25, 32, x);
            strcpy(d_536d_5a2d, d_536d_5bbd);
            strcpy(d_536d_5a7d, "English Section");
            f_7dd6_1e12(week, mode, 33, 38, x);
            break;
        case 37: case 41:
            d_69da_da52 = week == 37 ? 22 : 16;
            strcpy(d_536d_5a2d, d_536d_5b1d);
            sprintf(d_536d_5a7d, "1st Round%ss", d_536d_5c0d);
            f_7dd6_2843(week, 1, 16, x);
            f_7dd6_1e12(week, mode, 1, 8, x);
            f_7dd6_1e12(week, mode, 9, 16, x);
            if (week == 37) {
                strcpy(d_536d_5a2d, d_536d_5bbd);
                strcpy(d_536d_5a7d, "English Section");
                f_7dd6_1e12(week, mode, 17, 22, x);
            }
            break;
        case 47: case 51:
            d_69da_da52 = 32;
            strcpy(d_536d_5a2d, d_536d_5b6d);
            sprintf(d_536d_5a7d, "2nd Round%ss", d_536d_5c0d);
            f_7dd6_2843(week, 1, 8, x);
            f_7dd6_1e12(week, mode, 1, 8, x);
            strcpy(d_536d_5a2d, d_536d_5acd);
            f_7dd6_2843(week, 9, 16, x);
            f_7dd6_1e12(week, mode, 9, 16, x);
            strcpy(d_536d_5a2d, d_536d_5b1d);
            f_7dd6_2843(week, 17, 24, x);
            f_7dd6_1e12(week, mode, 17, 24, x);
            strcpy(d_536d_5a2d, d_536d_5bbd);
            strcpy(d_536d_5a7d, "International Stage");
            f_7dd6_1e12(week, mode, 25, 32, x);
            break;
        case 57: case 61:
            d_69da_da52 = 12;
            strcpy(d_536d_5a2d, d_536d_5b6d);
            strcpy(d_536d_5a7d, "Group Matches");
            f_7dd6_1e12(week, mode, 1, 4, x);
            strcpy(d_536d_5a2d, d_536d_5bbd);
            strcpy(d_536d_5a7d, "International Stage");
            f_7dd6_1e12(week, mode, 5, 12, x);
            break;
        case 69: case 73:
            d_69da_da52 = 14;
            strcpy(d_536d_5a2d, d_536d_5b6d);
            strcpy(d_536d_5a7d, "Group Matches");
            f_7dd6_1e12(week, mode, 1, 4, x);
            strcpy(d_536d_5a2d, d_536d_5acd);
            sprintf(d_536d_5a7d, "3rd Round%ss", d_536d_5c0d);
            f_7dd6_2843(week, 5, 8, x);
            f_7dd6_1e12(week, mode, 5, 8, x);
            strcpy(d_536d_5a2d, d_536d_5b1d);
            f_7dd6_2843(week, 9, 12, x);
            f_7dd6_1e12(week, mode, 9, 12, x);
            strcpy(d_536d_5a2d, d_536d_5bbd);
            sprintf(d_536d_5a7d, "Semi Finals%ss", d_536d_5c0d);
            f_7dd6_2843(week, 13, 14, x);
            f_7dd6_1e12(week, mode, 13, 14, x);
            break;
        case 77: case 81:
            d_69da_da52 = 8;
            strcpy(d_536d_5a2d, d_536d_5b6d);
            strcpy(d_536d_5a7d, "Group Matches");
            f_7dd6_1e12(week, mode, 1, 4, x);
            strcpy(d_536d_5a2d, d_536d_5acd);
            sprintf(d_536d_5a7d, "Semi Finals%ss", d_536d_5c0d);
            f_7dd6_2843(week, 5, 6, x);
            f_7dd6_1e12(week, mode, 5, 6, x);
            strcpy(d_536d_5a2d, d_536d_5b1d);
            f_7dd6_2843(week, 7, 8, x);
            f_7dd6_1e12(week, mode, 7, 8, x);
            break;
        case 86:
            d_69da_da52 = 1;
            strcpy(d_536d_5a2d, d_536d_5bbd);
            strcpy(d_536d_5a7d, "Final");
            f_7dd6_1e12(week, mode, 1, 1, x);
            break;
        case 89: case 95:
            d_69da_da52 = 1;
            strcpy(d_536d_5a2d, d_536d_5b1d);
            sprintf(d_536d_5a7d, "Final%s", d_536d_5c0d);
            f_7dd6_1e12(week, mode, 1, 1, x);
            break;
        case 91:
            d_69da_da52 = 1;
            strcpy(d_536d_5a2d, d_536d_5acd);
            strcpy(d_536d_5a7d, "Final");
            f_7dd6_1e12(week, mode, 1, 1, x);
            break;
        case 97:
            d_69da_da52 = 1;
            strcpy(d_536d_5a2d, d_536d_5b6d);
            strcpy(d_536d_5a7d, "Final");
            f_7dd6_1e12(week, mode, 1, 1, x);
            break;
        }
    }
}

/* the title and the list of one competition's fixtures or results, or (mode 3 and up)
 * the week's matches of the competition without drawing them */
void f_7dd6_1e12(int week, int mode, int from, int to, int kind)
{
    char buf[320];

    f_1a70_5e32();
    if (f_7dd6_24af(kind, week, from) == 0)
        return;
    if (mode < 3) {
        if (week <= 8) {
            d_69da_da5c = 1;
            d_69da_da5e = 3;
        } else if (week == 10) {
            d_69da_da5c = 1;
            d_69da_da5e = 13;
        } else if (f_1a70_2490(week) || f_1a70_24c5(week)) {
            d_69da_da5c = 1;
            d_69da_da5e = 14;
        } else if (f_1a70_268e(week, from) || f_1a70_2737(week, from) || f_1a70_27c8(week, from)) {
            d_69da_da5c = 4;
            d_69da_da5e = 8;
        } else if (f_1a70_2855(week, from)) {
            d_69da_da5c = 1;
            d_69da_da5e = week >= 47 ? 11 : 15;
        } else if (from == 1 && !f_1a70_2a7d(week)) {
            d_69da_da5c = 1;
            d_69da_da5e = 4;
        } else {
            d_69da_da5c = 1;
            d_69da_da5e = 12;
        }
        strcpy(d_536d_5c5d, d_536d_5a2d);
        if (mode == 2)
            strcat(d_536d_5c5d, " draw");
        else {
            strcpy(buf, d_536d_5c5d);
            if (mode != 1) {
                if (week > d_69da_d996)
                    sprintf(d_536d_5c5d, "Next %s", buf);
                else
                    sprintf(d_536d_5c5d, "%s fixture%s", buf, to - from + 1 > 1 ? "s" : "");
            } else
                sprintf(d_536d_5c5d, "%s result%s", buf, to - from + 1 > 1 ? "s" : "");
        }
        f_7dd6_2a6f(to - from + 1, week, from, mode);
        d_69da_d9c0 = 8;
    }
    for (d_69da_d9d2 = from - 1; to - 1 >= d_69da_d9d2; d_69da_d9d2++) {
        if (mode < 3) {
            d_69da_da60 = d_5dbf_1290[d_69da_d9d2][0][week] / 32;
            d_69da_da62 = d_5dbf_1290[d_69da_d9d2][1][week] / 32;
            f_7dd6_2642(d_69da_da60, week, d_69da_d9d2);
            f_2162_0b0c(0);
            f_1a70_344b(40, 1 - (d_69da_d9c0 + d_69da_de59) * 8, d_69da_da64, d_536d_534d);
            f_1a70_344b(124, 1 - (d_69da_d9c0 + d_69da_de59) * 8, 6, d_536d_5cad);
            if (mode == 1) {
                sprintf(d_536d_57cb, "%d-%d", d_5dbf_1290[d_69da_d9d2][0][week] % 32,
                        d_5dbf_1290[d_69da_d9d2][1][week] % 32);
                if (d_4512_87bc[d_69da_d9d2] == 1) {
                    f_1a70_344b(155, 1 - (d_69da_d9c0 + d_69da_de59) * 8, 1, "P");
                    d_69da_d9c0;
                } else if (d_4512_87bc[d_69da_d9d2] == 2)
                    f_1a70_344b(184, 1 - (d_69da_d9c0 + d_69da_de59) * 8, 1, "P");
            } else
                strcpy(d_536d_57cb, " v");
            f_1a70_379b(20, -(d_69da_d9c0 + d_69da_de59), 1, d_536d_57cb);
            f_7dd6_2642(d_69da_da62, week, d_69da_d9d2);
            f_1a70_344b(200, 1 - (d_69da_d9c0 + d_69da_de59) * 8, d_69da_da64, d_536d_534d);
            f_1a70_344b(278, 1 - (d_69da_d9c0 + d_69da_de59) * 8, 6, d_536d_5cad);
            if (strstr(d_536d_5a7d, "2nd Leg")) {
                d_69da_da66 = f_7dd6_25a6(week, d_69da_d9d2 + 1);
                d_69da_da68 = (unsigned char)d_28da_263c[d_69da_da66 * 80 + d_69da_d9d2 * 2 + 1];
                d_69da_da6a = (unsigned char)d_28da_263c[d_69da_da66 * 80 + d_69da_d9d2 * 2];
                if (mode == 1) {
                    d_69da_da68 += d_5dbf_1290[d_69da_d9d2][0][week] % 32;
                    d_69da_da6a += d_5dbf_1290[d_69da_d9d2][1][week] % 32;
                }
                sprintf(buf, "%d", d_69da_da68);
                f_1a70_3b47(2, d_69da_d9c0 - 0.75 + d_69da_de59, 1, buf);
                sprintf(buf, "%d", d_69da_da6a);
                f_1a70_3b47(39, d_69da_d9c0 - 0.75 + d_69da_de59, 1, buf);
            } else if (strstr(d_536d_5a7d, "Group")) {
                sprintf(buf, "%c", d_69da_d9d2 + 1 > 2 ? 'B' : 'A');
                f_1a70_3b47(2, d_69da_d9c0 - 0.75 + d_69da_de59, 1, buf);
            } else if (strstr(d_536d_5a7d, "Section") || strstr(d_536d_5a7d, "Stage")) {
                sprintf(buf, "%c", f_1a70_2a9e(week, d_69da_d9d2 + 1) + 'A');
                f_1a70_3b47(2, d_69da_d9c0 - 0.75 + d_69da_de59, 1, buf);
            }
            d_69da_d9c0 += 2;
        } else
            f_7dd6_0ecc(d_69da_d9d2, week);
    }
    f_1a70_5e46();
    if (mode < 3)
        f_1a70_5688(0);
}

/* whether the cup round `kind` is played in `week` (-1: any; 9 and up: a group round, n its
 * first fixture) */
char f_7dd6_24af(int kind, int week, int n)
{
    d_69da_ddc5 = 0;
    if (kind == -1)
        d_69da_ddc5 = -1;
    else if (kind == 1 && f_1a70_2490(week))
        d_69da_ddc5 = -1;
    else if (kind == 2 && f_1a70_24c5(week))
        d_69da_ddc5 = -1;
    else if (kind == 3 && f_1a70_2855(week, n))
        d_69da_ddc5 = -1;
    else if (kind == 4 && f_1a70_268e(week, n))
        d_69da_ddc5 = -1;
    else if (kind == 5 && f_1a70_2737(week, n))
        d_69da_ddc5 = -1;
    else if (kind == 6 && f_1a70_27c8(week, n))
        d_69da_ddc5 = -1;
    else if (kind == 7 && f_1a70_2a7d(week))
        d_69da_ddc5 = -1;
    else if (kind == 8 && week <= 10)
        d_69da_ddc5 = -1;
    else if (kind >= 9 && f_1a70_237e(week))
        d_69da_ddc5 = (kind - 9) * 10 + 1 == n ? -1 : 0;
    return d_69da_ddc5;
}

int f_7dd6_25a6(int week, int n)
{
    if (f_1a70_24c5(week))
        d_69da_da66 = 2;
    else if (f_1a70_2855(week, n))
        d_69da_da66 = 3;
    else if (f_1a70_268e(week, n))
        d_69da_da66 = 4;
    else if (f_1a70_2737(week, n))
        d_69da_da66 = 5;
    else if (f_1a70_27c8(week, n))
        d_69da_da66 = 6;
    else if (f_1a70_2a7d(week))
        d_69da_da66 = 7;
    return d_69da_da66;
}

void f_7dd6_2642(int club, int week, int n)
{
    d_69da_ddc6 = 0;
    if (club <= 79) {
        strcpy(d_536d_534d, d_69da_b1fc[club]);
        if (f_1a70_2490(week) || f_1a70_24c5(week)
            || (f_1a70_2855(week, n + 1) && d_69da_d996 <= 37) || f_1a70_2a7d(week) || week <= 8) {
            sprintf(d_536d_5cad, "%s", f_1a70_4983(club / 20 + 1, 1));
            d_69da_ddc6 = f_1a70_2bc7(club) ? -1 : 0;
        } else if (f_1a70_268e(week, n + 1) || f_1a70_2737(week, n + 1) || f_1a70_27c8(week, n + 1)
                   || f_1a70_2855(week, n + 1)) {
            strcpy(d_536d_5cad, "ENG");
            if (f_1a70_2855(week, n + 1))
            {
                d_69da_ddc6 = f_1a70_2bc7(club) ? -1 : 0;
                d_69da_ddc6;
            } else
                d_69da_ddc6 = -1;
        } else {
            strcpy(d_536d_5cad, "");
            d_69da_ddc6 = f_1a70_2bc7(club) ? -1 : 0;
        }
    } else if (club <= 479) {
        strcpy(d_536d_534d, d_69da_b2a4[club]);
        sprintf(d_536d_5cad, "%.3s", d_5dbf_0000[d_5dbf_1076[club]]);
    } else {
        strcpy(d_536d_534d, d_69da_b2a4[club]);
        strcpy(d_536d_5cad, "NLGE");
    }
    if (!d_69da_ddc6)
        d_69da_da64 = d_69da_da5c;
    else
        d_69da_da64 = d_69da_da5c == 1 ? 6 : 12;
}

void f_7dd6_2843(int a, int b, int c, int d)
{
    if (f_7dd6_24af(d, a, b) == 0)
        return;
    if (strstr(d_536d_5a7d, "1st Leg")) {
        if (a == 89)
            d_69da_da6c = 95;
        else if (a == 94)
            d_69da_da6c = 96;
        else
            d_69da_da6c = a + 4;
    }
    for (d_69da_d9a0 = b - 1; d_69da_d9a0 <= c - 2; d_69da_d9a0++) {
        for (d_69da_d9ea = d_69da_d9a0 + 1; d_69da_d9ea <= c - 1; d_69da_d9ea++) {
            strcpy(d_536d_5cfd, f_1a70_3404(d_5dbf_1290[d_69da_d9a0][0][a] / 32));
            strcpy(d_536d_5d4d, f_1a70_3404(d_5dbf_1290[d_69da_d9ea][0][a] / 32));
            if (strcmp(d_536d_5cfd, d_536d_5d4d) > 0) {
                for (d_69da_da6e = 0; d_69da_da6e <= 1; d_69da_da6e++) {
                    f_2162_13fc(&d_5dbf_1290[d_69da_d9a0][d_69da_da6e][a],
                                &d_5dbf_1290[d_69da_d9ea][d_69da_da6e][a], 2);
                    if (strstr(d_536d_5a7d, "1st Leg")) {
                        f_2162_13fc(&d_5dbf_1290[d_69da_d9a0][d_69da_da6e][d_69da_da6c],
                                    &d_5dbf_1290[d_69da_d9ea][d_69da_da6e][d_69da_da6c], 2);
                    } else if (strstr(d_536d_5a7d, "2nd Leg")) {
                        d_69da_da66 = f_7dd6_25a6(a, b);
                        f_2162_13fc(&d_28da_263c[d_69da_da66 * 80 + d_69da_d9a0 * 2 + d_69da_da6e],
                                    &d_28da_263c[d_69da_da66 * 80 + d_69da_d9ea * 2 + d_69da_da6e], 1);
                    }
                }
            }
        }
    }
}

void f_7dd6_2a6f(int n, int b, int c, int d)
{
    unsigned char i;
    int x;
    int y;
    char buf[320];

    if (n > 8) {
        f_1a70_4a41("");
        f_2162_0897(16);
        sprintf(buf, " %s %s ", d_536d_5a7d, d == 1 ? "Results" : "Fixtures");
        f_2162_08b5(28, 9, (strlen(buf) + 3.25) * 8 + 3, 22);
        f_1a70_3d0c(3.25, 1.25, 0, 1, 0, buf);
        d_69da_de59 = -3.125;
    } else {
        f_1a70_4a41(d_536d_5c5d);
        sprintf(buf, " %s ", d_536d_5a7d);
        f_2162_0897(16);
        f_2162_08b5(28, 31, (strlen(buf) + 3.25) * 8 + 3, 44);
        if (strstr(d_536d_5c5d, "Coca-Cola"))
            f_1a70_3d0c(3.25, 4.0, 1, 2, 0, buf);
        else
            f_1a70_3d0c(3.25, 4.0, 0, 1, 0, buf);
        d_69da_de59 = 0;
    }
    x = 24;
    for (i = 0; i <= n - 1; i = i + 1) {
        y = i * 16 + 53 + d_69da_de59 * 8;
        f_1a70_0137(x, y, x + 117, y + 15);
        f_1a70_0137(x + 118, y, x + 159, y + 15);
        f_1a70_0137(x + 160, y, x + 272, y + 15);
    }
    if (strstr(d_536d_5a7d, "2nd Leg")) {
        f_1a70_3554(0.875, d_69da_de59 + 5.25, 1, 2, 0, "Ag");
        f_1a70_3554(37.875, d_69da_de59 + 5.25, 1, 2, 0, "Ag");
    } else if (strstr(d_536d_5a7d, "Group") || strstr(d_536d_5a7d, "Section")
               || strstr(d_536d_5a7d, "Stage")) {
        f_1a70_3554(0.875, d_69da_de59 + 5.25, 1, 2, 0, "Gr");
    }
}

void f_7dd6_2d5a(void)
{
    char buf[320];

    switch (d_69da_d996) {
    case 1: case 2: strcpy(d_536d_5d9d, "in a month"); break;
    case 3: case 4: strcpy(d_536d_5d9d, "in three weeks"); break;
    case 5: case 6: strcpy(d_536d_5d9d, "in two weeks"); break;
    case 7: case 8: strcpy(d_536d_5d9d, "next week"); break;
    }
    sprintf(buf, "Season starts %s", d_536d_5d9d);
    f_1a70_0b80(buf);
}

/* the squad screen */
void f_7dd6_2dcf(int team)
{
    char reserves;
    int i;

    reserves = 0;
    d_69da_da72 = 0;
    for (;;) {
        for (i = 0; i < 30; i++)
            d_4512_8780[i] = -1;
        if (d_69da_da72 > 0)
            f_7dd6_4183(d_69da_da72 - 1, team);
        f_1a70_5e32();
        f_1a70_000a(1.5, team, reserves ? "Reserves" : "Squad");
        f_1a70_5e46();
        for (d_69da_d9d2 = 1; d_69da_d9d2 <= 15; d_69da_d9d2++) {
            switch (d_69da_d9d2) {
            case 1: case 2: case 3: case 4: case 5: case 6: case 7:
            case 8: case 9: case 10: case 11: case 12: case 13: case 14:
                d_69da_d9e6 = 1;
                strcpy(d_536d_5ded, f_1a70_2e4a(d_69da_d9d2, 1));
                break;
            case 15:
                strcpy(d_536d_5ded, "SWP");
                d_69da_d9e6 = 20;
                break;
            }
            f_1a70_4ede(0, (d_69da_d9d2 - 1) * 2.5 + 1.375 + (d_69da_d9d2 > 11 ? 0.125 : 0)
                        + (d_69da_d9d2 > 14 ? 0.125 : 0), 19.75,
                        d_69da_d9e6 / 16, d_69da_d9e6 % 16, 0x12, d_536d_5ded);
        }
        f_1a70_4ede(0, 1.375, 20.75, 1, 12, 0x24, " GLS");
        f_1a70_4ede(0, 6.125, 20.75, 1, 12, 0x24, " DSP");
        f_1a70_4ede(0, 10.875, 20.75, 1, 12, 0x24, " AVR");
        f_1a70_4ede(0, 15.625, 20.75, 1, 12, 0x24, " MOM");
        f_1a70_4ede(0, 25.125, 20.75, 1, 3, 0x24, " PRV");
        f_1a70_4ede(0, 29.875, 20.75, 1, 3, 0x23, " TCT");
        f_1a70_4ede(0, 34.5, 20.75, 1, 3, 0x23, " OPP");
        f_1a70_4ede(2, 1.5, 21.875, 1, 4, 0x90, "       DONE");
        f_1a70_4ede(2, 1.5, 4.0, 1, 14, 0x26, "Trns");
        f_1a70_4ede(2, 6.875, 4.0, 1, 14, 0x26, "Staf");
        f_1a70_4ede(2, 12.25, 4.0, 1, 14, 0x26, "Leag");
        f_1a70_4ede(2, 17.625, 4.0, 1, 14, 0x26, "Fixt");
        f_1a70_4ede(2, 23.0, 4.0, 1, 14, 0x26, "Accs");
        f_1a70_4ede(2, 28.375, 4.0, 1, 14, 0x26, "Info");
        f_1a70_4ede(2, 33.75, 4.0, 1, 8, 0x27, reserves ? "Senr" : "Rsrv");
        f_1a70_4ede(2, 20.125, 21.875, 1, 4, 0x2e, d_69da_da72 == 1 ? " SQDL" : " DEFS");
        f_1a70_4ede(2, 26.5, 21.875, 1, 4, 0x2e, d_69da_da72 == 2 ? " SQDL" : " MIDS");
        f_1a70_4ede(2, 32.875, 21.875, 1, 4, 0x2e, d_69da_da72 == 3 ? " SQDL" : " ATTS");
        f_1a70_4ede(0, 20.375, 20.75, 1, 3, 0x24, " PEN");
        f_1a70_5e32();
        if (d_69da_da72 == 0)
            f_a83a_14e6(team, reserves);
        else
            f_7dd6_3bc1(d_69da_da72 - 1, team);
        f_1a70_5e46();
        d_69da_da7e = 0;
        d_69da_ddc8 = 0;
        for (;;) {
            if (d_69da_da7e == 0)
                f_1a70_5641(15);
            else
                f_1a70_565a();
            d_69da_d992 = f_1a70_53de(0);
            if (d_69da_d992 == 0) {
                f_829f_0099(d_69da_da7e);
                if (d_69da_ddc8) {
                    d_69da_ddc8 = 0;
                    f_1a70_525f(15, 0);
                }
                continue;
            } else if (d_69da_d992 >= 1 && d_69da_d992 <= 14) {
                d_69da_da74 = d_69da_da7e;
                if ((d_69da_da7e = d_69da_d992) == d_69da_da74)
                    continue;
                if (d_69da_da74 > 0)
                    f_1a70_525f(d_69da_da74, 0);
                if (d_69da_ddc8 == 0)
                    continue;
                for (d_69da_d9d2 = 0; d_69da_d9d2 <= d_69da_da76 - 1; d_69da_d9d2++) {
                    if (d_4512_549a[team][d_69da_da7e - 1] == d_4512_8780[d_69da_d9d2]) {
                        strcpy(d_536d_5ded, f_1a70_2e4a(d_69da_da74, 1));
                        if (d_69da_da72 == 0) {
                            f_a83a_1e28(d_69da_d9d2);
                            f_1a70_3554(d_69da_de5d, d_69da_de45, 2, 1, 0, d_536d_5ded);
                        } else
                            f_1a70_3554(1.375, d_69da_d9d2 + 7.5, 2, 1, 0, d_536d_5ded);
                    } else if (d_4512_549a[team][d_69da_da74 - 1] == d_4512_8780[d_69da_d9d2]) {
                        strcpy(d_536d_5ded, f_1a70_2e4a(d_69da_da7e, 1));
                        if (d_69da_da72 == 0) {
                            f_a83a_1e28(d_69da_d9d2);
                            f_1a70_3554(d_69da_de5d, d_69da_de45, 2, 1, 0, d_536d_5ded);
                        } else
                            f_1a70_3554(1.375, d_69da_d9d2 + 7.5, 2, 1, 0, d_536d_5ded);
                    }
                }
                f_2162_13fc(&d_4512_549a[team][d_69da_da7e - 1], &d_4512_549a[team][d_69da_da74 - 1], 2);
                f_829f_0099(d_69da_da7e);
                f_1a70_525f(15, 0);
                d_69da_ddc8 = 0;
                continue;
            } else if (d_69da_d992 == 15) {
                d_69da_ddc8 = !d_69da_ddc8;
                if (d_69da_ddc8 == 0)
                    f_1a70_525f(15, 0);
                continue;
            } else if (d_69da_d992 >= 16 && d_69da_d992 <= 19) {
                f_7827_0d6d(d_69da_d992 - 16, team);
                break;
            } else if (d_69da_d992 == 20) {
                if (d_4512_1710[0][team] == 0) {
                    f_829f_0000("No matches played");
                    f_1a70_525f(20, 0);
                    f_829f_0099(d_69da_da7e);
                    continue;
                } else {
                    FILE *fp;

                    f_2162_19f6(2);
                    fp = fopen(d_536d_a475, "rb");
                    fseek(fp, (long)(d_4512_1710[0][team] - 1) * 155, 0);
                    fread(d_536d_3066, 1, 155, fp);
                    fclose(fp);
                    f_8773_3a79(d_5dbf_1292[d_4512_1710[1][team]][0][d_4512_1710[2][team]] / 32,
                                d_5dbf_1292[d_4512_1710[1][team]][1][d_4512_1710[2][team]] / 32, -1);
                    break;
                }
            } else if (d_69da_d992 == 21) {
                f_c06b_0000(team);
                break;
            } else if (d_69da_d992 == 22) {
                if (d_69da_ddc9) {
                    if (d_69da_da7a < 80)
                        f_7827_4b4d(d_69da_da7a);
                    else
                        f_c06b_0000(team == d_69da_da60 ? d_69da_da62 : d_69da_da60);
                    break;
                }
                f_829f_0000("No details yet");
                continue;
            } else if (d_69da_d992 == 23) {
                if (d_69da_ddc9) {
                    unsigned char first, subs;
                    char buf[100];

                    first = 0;
                    subs = 0;
                    for (d_69da_d9d2 = 0; d_69da_d9d2 <= 13; d_69da_d9d2++)
                        if (f_1a70_5b76(d_4512_549a[team][d_69da_d9d2]) || f_1a70_5b94(d_4512_549a[team][d_69da_d9d2])) {
                            if (d_69da_d9d2 < 13)
                                first++;
                            else
                                subs++;
                        }
                    if (first < 13 || f_1a70_5ea2(team, d_69da_d996, d_69da_d9bc + 1) && subs == 0) {
                        if (first + subs == 0)
                            f_829f_0000("Nobody picked");
                        else
                            f_829f_0000("Too few picked");
                        d_69da_da7e;    /* code-free: BCC keeps this copy of the call */
                    } else if ((f_1a70_268e(d_69da_d996, d_69da_d9bc + 1) || f_1a70_2737(d_69da_d996, d_69da_d9bc + 1)
                                || f_1a70_27c8(d_69da_d996, d_69da_d9bc + 1)) && f_b8da_5529(team) > 0) {
                        sprintf(buf, "%d foreigners", d_69da_ddb0);
                        f_829f_0000(buf);
                        f_829f_0099(d_69da_da7e);
                        continue;
                    } else
                        goto pick;
                } else
                    goto pick;
            } else if (d_69da_d992 == 24) {
                f_7827_4f28(team);
                break;
            } else if (d_69da_d992 == 25) {
                f_9c01_08e4(team);
                break;
            } else if (d_69da_d992 == 26) {
                f_7827_5340(team);
                break;
            } else if (d_69da_d992 == 27) {
                f_7827_43ad(team);
                break;
            } else if (d_69da_d992 == 28) {
                f_7dd6_002a(team);
                break;
            } else if (d_69da_d992 == 29) {
                f_aac9_07c3(team);
                break;
            } else if (d_69da_d992 == 30) {
                reserves = !reserves;
                d_69da_da72 = 0;
                break;
            } else
        pick:
            if (d_69da_d992 == 31 || d_69da_d992 == 32 || d_69da_d992 == 33) {
                strcpy(d_536d_5e3d, f_2162_104e(d_536d_86c5[d_69da_d992]));
                if (strcmp(d_536d_5e3d, "SQDL") == 0)
                    d_69da_da72 = 0;
                else if (strcmp(d_536d_5e3d, "DEFS") == 0)
                    d_69da_da72 = 1;
                else if (strcmp(d_536d_5e3d, "MIDS") == 0)
                    d_69da_da72 = 2;
                else
                    d_69da_da72 = 3;
                reserves = 0;
                break;
            } else if (d_69da_d992 == 34) {
                f_b8da_286a(team);
                break;
            } else if (d_69da_d992 >= 35) {
                char out;

                d_69da_da02 = d_69da_d992 - 35;
                d_69da_d9ae = d_4512_8780[d_69da_da02];
                if (d_69da_da7e == 0) {
                    if (!f_1a70_5b94(d_69da_d9ae)) {
                        do {
                            f_aac9_42ed(d_69da_d9ae, -1, -1);
                            f_9007_4da1(d_69da_d9ae, d_69da_d9e8);
                        } while (!d_69da_ddbe);
                    } else
                        f_b085_38a5(team, f_1a70_5bc8(d_69da_d9ae));
                    break;
                }
                if (!f_1a70_5b94(d_69da_d9ae))
                    out = *(d_28da_2a78[20] + d_69da_d9ae) > 0;
                else
                    out = d_4512_a4f8[team][f_1a70_5bc8(d_69da_d9ae)] > 0;
                if (out)
                    f_829f_0000("Not available");
                else {
                    if (d_4512_549a[team][d_69da_da7e - 1] != d_69da_d9ae) {
                        if (f_1a70_5b76(d_4512_549a[team][d_69da_da7e - 1]) || f_1a70_5b94(d_4512_549a[team][d_69da_da7e - 1])) {
                            for (d_69da_d9d2 = 0; d_69da_d9d2 <= d_69da_da76 - 1; d_69da_d9d2++) {
                                if (d_4512_549a[team][d_69da_da7e - 1] == d_4512_8780[d_69da_d9d2]) {
                                    if (d_69da_da72 == 0) {
                                        f_a83a_1e28(d_69da_d9d2);
                                        f_1a70_3554(d_69da_de5d, d_69da_de45, 1, 2, 0, "  ");
                                    } else
                                        f_1a70_3554(1.375, d_69da_d9d2 + 7.5, 1, 2, 0, "  ");
                                }
                            }
                            if (!f_1a70_5b94(d_4512_549a[team][d_69da_da7e - 1]))
                                d_4512_bdc8[d_4512_549a[team][d_69da_da7e - 1]].f7 = 0;
                            else
                                d_4512_a508[team][f_1a70_5bc8(d_4512_549a[team][d_69da_da7e - 1])] = 0;
                        }
                        if (!f_1a70_5b94(d_69da_d9ae)) {
                            if (d_4512_bdc8[d_69da_d9ae].f7)
                                d_4512_549a[team][f_1a70_1dc1(d_69da_d9ae)] = 1859;
                        } else if (d_4512_a508[team][f_1a70_5bc8(d_69da_d9ae)])
                            d_4512_549a[team][f_1a70_1dc1(d_69da_d9ae)] = 1859;
                        d_4512_549a[team][d_69da_da7e - 1] = d_69da_d9ae;
                        if (!f_1a70_5b94(d_69da_d9ae))
                            d_4512_bdc8[d_69da_d9ae].f7 = 1;
                        else
                            d_4512_a508[team][f_1a70_5bc8(d_69da_d9ae)] = -1;
                        strcpy(d_536d_5ded, f_1a70_2e4a(d_69da_da7e, 1));
                        if (d_69da_da72 == 0) {
                            f_a83a_1e28(d_69da_da02);
                            f_1a70_3554(d_69da_de5d, d_69da_de45, 2, 1, 0, d_536d_5ded);
                        } else
                            f_1a70_3554(1.375, d_69da_da02 + 7.5, 2, 1, 0, d_536d_5ded);
                    }
                    f_1a70_525f(d_69da_d992, 0);
                }
                f_829f_0099(d_69da_da7e);
                continue;
            } else
                return;
            f_829f_0099(d_69da_da7e);
        }
    }
}

/* the squad screen's attribute columns: x position and heading */
static struct col d_69da_12f0[] = {
    {14.875, "PS"}, {17.0, "TK"}, {19.125, "PA"}, {21.25, "HD"}, {23.375, "FL"},
    {25.5, "CR"}, {27.625, "AG"}, {29.75, "IF"}, {31.875, "SDE"}, {34.375, "FIT"},
    {36.875, "AVR"}
};

void f_7dd6_3bc1(int mode, int team)
{
    char buf[320];

    if (mode == 0)
        strcpy(buf, " DEFENDERS");
    else if (mode == 1)
        strcpy(buf, " MIDFIELDERS");
    else
        strcpy(buf, " ATTACKERS");
    f_1a70_3554(1.375, 6.5, 0, 1, 0x68, buf);
    for (d_69da_da80 = 0; d_69da_da80 <= 10; d_69da_da80++)
        f_1a70_3554(d_69da_12f0[d_69da_da80].x - 0.125, 6.5, 0, 6, d_69da_da80 > 7 ? 0x12 : 0xf,
                    d_69da_12f0[d_69da_da80].title);
    for (d_69da_d9ce = 1; d_69da_d9ce <= 12; d_69da_d9ce++) {
        if (d_69da_d9ce & 1) {
            d_69da_da82 = 14;
            d_69da_da84 = 4;
        } else {
            d_69da_da82 = 8;
            d_69da_da84 = 12;
        }
        d_69da_d9ae = d_4512_877e[d_69da_d9ce];
        strcpy(d_536d_5e8d, "");
        d_69da_d9da = 0x12;
        if (d_69da_d9ae > -1) {
            if (*(d_28da_2a78[20] + d_69da_d9ae) > 0) {
                if (*(d_28da_2a78[19] + d_69da_d9ae) == 50)
                    strcpy(d_536d_5e8d, "ct");
                else if (*(d_28da_2a78[19] + d_69da_d9ae) == 26) {
                    strcpy(d_536d_5e8d, "su");
                    d_69da_d9ae;    /* code-free: keeps this copy of the call */
                }
                else
                    strcpy(d_536d_5e8d, "ij");
            } else if (d_4512_bdc8[d_69da_d9ae].f7) {
                strcpy(d_536d_5e8d, f_1a70_2e4a(f_1a70_1dc1(d_69da_d9ae) + 1, 1));
                d_69da_d9da = 0x21;
            }
            f_1a70_3554(1.375, d_69da_d9ce + 6.5, d_69da_d9da / 16, d_69da_d9da % 16, 12, d_536d_5e8d);
            sprintf(buf, " %.14s", f_1a70_46c1(d_69da_d9ae));
            f_1a70_4ede(0, 3.125, d_69da_d9ce + 6.5, 1, d_69da_da82, 0x5a, buf);
        } else {
            f_1a70_3554(1.375, d_69da_d9ce + 6.5, d_69da_d9da / 16, d_69da_d9da % 16, 12, "");
            f_1a70_3554(3.125, d_69da_d9ce + 6.5, 1, d_69da_da82, 0x5a, "");
        }
        for (d_69da_da80 = 0; d_69da_da80 <= 10; d_69da_da80++) {
            if (d_69da_d9ae > -1) {
                switch (d_69da_da80) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                    sprintf(d_536d_5edd, "%02d", d_28da_2a78[d_69da_da80 + 1][d_69da_d9ae]);
                    d_69da_d9e6 = 1;
                    break;
                case 6:
                    sprintf(d_536d_5edd, "%02d", d_28da_2a78[10][d_69da_d9ae]);
                    d_69da_d9e6 = 6;
                    break;
                case 7:
                    sprintf(d_536d_5edd, "%02d", d_28da_2a78[12][d_69da_d9ae]);
                    d_69da_d9e6 = 6;
                    break;
                case 8:
                    strcpy(d_536d_5edd, "");
                    if (d_4512_bdc8[d_69da_d9ae].f4)
                        strcat(d_536d_5edd, "R");
                    if (d_4512_bdc8[d_69da_d9ae].f5)
                        strcat(d_536d_5edd, "L");
                    if (d_4512_bdc8[d_69da_d9ae].f6)
                        strcat(d_536d_5edd, "C");
                    if (strlen(d_536d_5edd) == 1) {
                        d_536d_5edd[1] = d_536d_5edd[0];
                        d_536d_5edd[0] = d_536d_5edd[2] = ' ';
                        d_536d_5edd[3] = 0;
                    } else if (strlen(d_536d_5edd) == 2)
                        strcat(d_536d_5edd, " ");
                    d_69da_d9e6 = 6;
                    break;
                case 9:
                    if (*(d_28da_2a78[20] + d_69da_d9ae) == 0)
                        sprintf(d_536d_5edd, "%03d", d_28da_2a78[21][d_69da_d9ae]);
                    else
                        strcpy(d_536d_5edd, "");
                    d_69da_d9e6 = 6;
                    break;
                case 10:
                    if (d_3668_0000[12][d_69da_d9ae] > 0) {
                        float avg;

                        d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
                        avg = (float)d_69da_dfa6[2][d_69da_d9ae] / d_3668_0000[12][d_69da_d9ae];
                        sprintf(d_536d_5edd, "%3.1f", avg);
                    } else
                        strcpy(d_536d_5edd, "");
                    d_69da_d9e6 = 9;
                    break;
                }
            } else
                strcpy(d_536d_5edd, "");
            f_1a70_3554(d_69da_12f0[d_69da_da80].x, d_69da_d9ce + 6.5, d_69da_d9e6, d_69da_da84,
                        d_69da_da80 > 7 ? 0x12 : 0xf, d_536d_5edd);
        }
    }
}

void f_7dd6_4183(int a, int team)
{
    char sel[30];

    memset(sel, 0, 30);
    d_69da_ddcc = 0;
    d_69da_da76 = 0;
    for (d_69da_d9ce = 1; d_69da_d9ce <= 12; d_69da_d9ce++) {
        if (d_69da_ddcc == 0) {
            d_69da_d9ae = -1;
            for (d_69da_d9ee = 0; d_69da_d9ee <= d_4512_023e[team] - 1; d_69da_d9ee++) {
                char ok;

                d_69da_da86 = d_28da_10f0[team][d_69da_d9ee];
                if (a == 0)
                    ok = d_4512_bdc8[d_69da_da86].f1;
                if (a == 1)
                    ok = d_4512_bdc8[d_69da_da86].f2;
                if (a == 2)
                    ok = d_4512_bdc8[d_69da_da86].f3;
                if (ok && sel[d_69da_d9ee] == 0) {
                    if (d_3668_0000[5][d_69da_da86] + d_3668_0000[0][d_69da_da86] > 0) {
                        d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
                        d_69da_de61 = (d_69da_dfa6[1][d_69da_da86] + d_69da_dfa6[0][d_69da_da86])
                                      / ((float)d_3668_0000[5][d_69da_da86] + d_3668_0000[0][d_69da_da86]);
                    } else
                        d_69da_de61 = 0;
                    if (d_69da_de61 > d_69da_de65 || d_69da_d9ae == -1) {
                        d_69da_de65 = d_69da_de61;
                        d_69da_d9ae = d_69da_da86;
                        d_69da_da02 = d_69da_d9ee;
                    }
                }
            }
        }
        if (d_69da_d9ae > -1) {
            sel[d_69da_da02] = -1;
            d_4512_877e[d_69da_d9ce] = d_69da_d9ae;
            d_69da_da76++;
        } else
            d_69da_ddcc = -1;
    }
}

void f_7dd6_4386(int team)
{
    f_1a70_2eaa(0, "Select Formation", "*Exit|4-4-2|4-2-4|Sweeper|5-3-2|4-3-3|5-2-3|4-5-1|Anchor Man|Support Man|");
    if (d_69da_d992 > 0) {
        d_69da_daa8 = d_69da_dd88 / 16;
        d_69da_dd88 = d_69da_d992 + d_69da_daa8 * 16 - 1;
        f_a83a_0e3f(team, d_69da_d992 - 1, 0);
        for (d_69da_d9a0 = 11; d_69da_d9a0 <= 13; d_69da_d9a0++)
            if (d_4512_5d98[team == d_69da_da62][d_69da_d9a0] < 2)
                for (d_69da_d9ea = 0; d_69da_d9ea <= 2; d_69da_d9ea++)
                    d_4512_4726[team][d_69da_d9ea][d_69da_d9a0] =
                        d_4512_4726[team][d_69da_d9ea][d_28da_2a72[team == d_69da_da62][d_69da_d9a0 - 11]];
        d_4512_2db8[d_4512_1a30[team]] = d_69da_dd88;
    }
}

void f_7dd6_44a5(int team)
{
    char s[320];

    strcpy(d_536d_50cd, "");
    for (d_69da_d9f0 = 0; d_69da_d9f0 <= 4; d_69da_d9f0++) {
        strcpy(s, d_5dbf_06ac[d_69da_d9f0]);
        s[0] = toupper(s[0]);
        strcat(d_536d_50cd, s);
        strcat(d_536d_50cd, "|");
    }
    sprintf(s, "*Exit|%s", d_536d_50cd);
    f_1a70_2eaa(0, "Select Style", s);
    if (d_69da_d992 > 0) {
        d_69da_daaa = d_69da_dd88 % 16;
        d_69da_dd88 = (d_69da_d992 - 1) * 16 + d_69da_daaa;
        d_4512_2db8[d_4512_1a30[team]] = d_69da_dd88;
    }
}
