/* @at 6ffe:0000 */
/* @data 61eb:06a2 */
/* @module */

/* Overlay 6ffe (the first CM Italia's 6B47.C, CM94's 7827.C, CM93's 70A9.C, from CM1's 67EE.C):
 * the season's main menu and the screens it leads to: tables, top scorers, discipline, ratings
 * and man of the match awards, form guides, attendances, manager points, rankings and hall of
 * fame, awards, fixtures, cups, European groups, the Anglo-Italian cup, squads and the league
 * progress graph. CM Italia 95: 38 clubs (Serie A 0-17, Serie B 18-37), Sunday fixtures. Its
 * data is the main menu's buttons and labels, the league table's column headings, the
 * initialisers of 23f2's order and 3345's nations, the group table's column headings and the
 * progress graph's axis labels, then its literal pool. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <stdlib.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_6ffe_0000(void);
void f_6ffe_0250(int n, char lit);
void f_6ffe_0567(void);
void f_6ffe_0615(int div);
void f_6ffe_0ab8(int div, unsigned char far (*t)[20]);
char f_6ffe_0d29(int pos, int div);
void f_6ffe_0d6a(void);
void f_6ffe_0dbb(int mode, int team);
void f_6ffe_16cf(int mode);
void f_6ffe_1ffe(void);
void f_6ffe_23f2(char mode);
void f_6ffe_28db(void);
void f_6ffe_2bf3(char year);
void f_6ffe_3322(void);
void f_6ffe_3345(void);
void f_6ffe_3782(void);
void f_6ffe_3a04(void);
void f_6ffe_3a19(void);
void f_6ffe_3ceb(void);
void f_6ffe_3d6b(void);
void f_6ffe_4009(int a, int b, unsigned char n, char far *title, float x);
void f_6ffe_430f(int team);
void f_6ffe_4764(int team, char far names[][100][20], unsigned char far *comp, unsigned char far *week);
void f_6ffe_4a4e(void);
void f_6ffe_4a89(int team);
void f_6ffe_4e64(int team);
void f_6ffe_527c(int team);

int f_1a83_66e8(int x);
void f_1a83_48f9(char far *title);
long f_215d_0e27(void);
void f_215d_038c();
int f_215d_0c20(void);
int f_215d_0c14(void);
int f_215d_0c08(void);
void f_ab30_0e3e(void);
void f_75a4_0d76(void);
void f_75a4_0000(void);
void f_75a4_0501(void);
void f_75a4_0b8e(void);
void f_75a4_0f79(void);
void f_75a4_10f0(void);
void f_75a4_2bd7(int);
char f_1a83_2a21(int);
void f_215d_088c();
void f_215d_08aa(int x1, int y1, int x2, int y2);
void f_215d_089b();
void f_215d_1016(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
unsigned f_215d_0b10(char far *s, char far *set);
char far *f_215d_0e90(char far *s);
void f_1a83_3697(float x, float y, int colour, char far *s);
void f_1a83_2da6(int n, char far *title, char far *items);
void f_1a83_5ccd(void);
void f_1a83_5ce1(void);
char far *f_1a83_4876(int division, char full);
void f_1a83_3450(float x, float y, int bg, int fg, int w, char far *s);
void f_1a83_3347(int x, int y, int colour, char far *s);
char f_1a83_2ad4(int x);
void f_1a83_4d96(int a, float x, float y, int c, int d, int e, char far *s);
void f_215d_13f1(void far *a, void far *b, int n);
int f_1a83_5296(int a);
int f_a214_1a52(void);
unsigned char f_1a83_6d76(int div);
void f_1a83_0bb7(char far *s);
int f_215d_1343(int a, int b);
int f_9f8d_0000(int x);
extern char d_61eb_d9c4;
extern char d_61eb_d9c3;
extern char d_61eb_d9c6;
extern int d_61eb_d5aa;
extern int d_61eb_d5a2;
extern int d_61eb_d5a4;
extern int d_61eb_d59a;
extern int d_61eb_d59c;
extern int d_61eb_d59e;
extern int d_61eb_d5c2;
extern float d_61eb_da51;
extern float d_61eb_da55;
extern int d_61eb_d5c8;
extern int d_61eb_d5c4;
extern int d_61eb_d5c6;
extern int d_61eb_d5ca;
extern int d_61eb_d5cc;
extern int d_61eb_d5ce;
extern int d_61eb_d5d0;
extern int d_61eb_d5d2;
extern int d_61eb_d5d4;
extern int d_61eb_d5d6;
extern int d_61eb_d5d8;
extern int d_61eb_d5da;
extern int d_61eb_d5dc;
extern int d_61eb_d5de;
extern int d_61eb_d5e0;
extern int d_61eb_d5e2;
extern char near *d_61eb_b0ec[];
extern unsigned char far d_3334_fefe[][16];
extern char far d_432e_ba27[];
extern char far d_432e_bb67[];
extern char far d_432e_bbb7[];
extern char far d_432e_b9ff[][2];
extern unsigned char far d_28d4_11fc[][20];
extern unsigned char far d_432e_0640[];
extern unsigned char far d_3334_bf6a[];
extern unsigned char far d_3334_bf92[];
extern unsigned char far d_3334_bfba[];
extern unsigned char far d_3334_bfe2[];
extern unsigned char far d_3334_c00a[];
extern unsigned char far d_3334_c032[];
extern unsigned char far d_3334_c05a[];
extern unsigned char far d_3334_c082[];
extern unsigned char far d_3334_c0aa[];
extern unsigned char far d_3334_c0d2[];
void f_1a83_3c08(float x, float y, int bg, int fg, int w, char far *s);
void f_1a83_4327(float x, float y, int team);
char far *f_1a83_4485(int player);
unsigned char f_1a83_6d8b(unsigned char team);
void f_a214_4120(int player, int a, char b);
void f_87dc_4c9b(int player, int a);
void far *f_215d_1629(int handle, int page);
char far *f_1a83_4686(int manager, char full);
unsigned char f_ab30_08e9(char team);
extern char d_61eb_d9c7;
extern char d_61eb_d9c8;
extern char d_61eb_d9ca;
extern int d_61eb_d58e;
extern int d_61eb_d5b8;
extern int d_61eb_d5e4;
extern int d_61eb_d5e6;
extern int d_61eb_d5e8;
extern int d_61eb_d5ea;
extern int d_61eb_d5ec;
extern int d_61eb_d5ee;
extern int d_61eb_d5fc;
extern int d_61eb_dc4e;
extern int d_61eb_dc58;
extern long d_61eb_db01;
extern long d_61eb_db05;
extern float d_61eb_da59;
extern float d_61eb_da5d;
extern int (far *d_61eb_dbb8)[1500];
extern unsigned char (far *d_61eb_dbcc)[1500];
extern unsigned char far d_3334_0000[][1500];
extern unsigned char far d_28d4_1958[][1500];
extern int far d_28d4_081c[][26];
extern int far d_432e_1b22[][4][2][30];
extern unsigned char far d_3334_beca[];
extern unsigned char far d_3334_c82a[];
extern unsigned char far d_3334_c73a[];
extern long far d_3334_ce4a[];
extern unsigned char far d_3334_bea2[];
extern unsigned char far d_3334_c762[];
extern int far d_3334_ca6e[];
extern char far d_432e_bc07[];
extern char far d_432e_bc57[];
extern char far d_432e_bcf7[];
extern char far d_432e_bde7[];
extern char far d_432e_eb97[];
extern char far d_432e_ebe7[];
extern char far d_432e_ed13[][40][5];
extern unsigned char far d_3334_d16c[];
extern unsigned char far d_3334_cee2[];
void f_1a83_0007(float x, int team, char far *title);
extern int d_61eb_d5f0;
char far *f_93a1_12de(int a, int b);
extern long d_61eb_db09;
extern int d_61eb_d5fa;
extern int d_61eb_d5f8;
extern int d_61eb_d5f6;
extern int d_61eb_d5f4;
extern int d_61eb_d5f2;
extern char d_61eb_d9cb;
extern int d_61eb_dc60;
extern int d_61eb_dc4a;
extern long far *d_61eb_dbb0;
extern char far *d_61eb_dbdc;
char far *f_1a83_462c(int player);
char far *f_1a83_45b4(int player);
extern int d_61eb_d5fe;
extern int d_61eb_d602;
extern int d_61eb_d600;
extern int d_61eb_d604;
extern int d_61eb_d606;
extern int d_61eb_d608;
extern int d_61eb_d60a;
extern float d_61eb_da61;
void f_1a83_3122(int last);
void f_75a4_116c(int, int, int);
char far *f_1a83_3300(int x);
void f_93a1_5eda(void);
extern int d_61eb_d60c;
extern int d_61eb_d60e;
extern int d_61eb_d5ba;
extern int d_61eb_d610;
extern int d_61eb_d5bc;
extern int d_61eb_d5be;
extern int d_61eb_d612;
extern int d_61eb_d614;
extern int d_61eb_d616;
extern int d_61eb_d618;
extern int d_61eb_d61a;
void f_7f4a_3a06(int a, int b, char c);
char f_1a83_277e(int, int);
char f_1a83_2962(int a, int b);
void f_9f8d_101a(int);
void f_9f8d_151b(int team, char reserves);
long f_215d_0d96(long n);
void f_75a4_002a(int team);
void f_a214_07c3(int team);
void f_75a4_0737(int team);
extern int d_61eb_d63c;
extern int d_61eb_d636;
extern int d_61eb_d634;
extern int d_61eb_d632;
extern int d_61eb_d630;
extern int d_61eb_d62e;
extern int d_61eb_d62c;
extern int d_61eb_d626;
extern int d_61eb_d624;
extern int d_61eb_d622;
extern int d_61eb_d620;
extern int d_61eb_d61e;
extern int d_61eb_d61c;
char far *f_1a83_0e35(long amount);
struct label { int x, y; char far *s; };
extern int far *d_61eb_dbb4;
extern long d_61eb_db0d;
extern int d_61eb_d640;
extern int d_61eb_d642;
extern int d_61eb_d644;
extern int d_61eb_d646;
extern int d_61eb_dc4c;
extern unsigned char far d_28d4_82d0[];
extern unsigned char far d_3334_db94[];
extern char d_61eb_da4f;
extern unsigned char far d_3334_2904[];
extern char far * far d_53fc_058f[];
void f_1a83_4d03(void);
char f_1a83_6b4c(int player);
extern unsigned char far d_53fc_1172[];
void f_215d_19eb();
char f_1a83_280b(int, int);
extern int d_61eb_d62a;
extern int far d_53fc_138e[][2][100];
char f_1a83_5a4c(int player);
void f_b6f6_0000(char team);
void f_93a1_08e4(int team);
void f_b26d_01de(char team, char n);
void f_ab30_5462(char team);
extern long d_61eb_db11;
extern int d_61eb_d63e;
extern long far d_3334_cc82[][38];
struct transfers { int in[6], out[6]; /* the players */ unsigned char in_club[6], out_club[6]; /* the other club */ long in_fee[6], out_fee[6]; /* the fee, 1 for a loan */ unsigned char n_in, n_out; /* how many so far */ };
extern long far d_432e_0d86[][2];
extern int far d_432e_364e[][4];
extern float far d_432e_365e[][4];
extern int far d_432e_367e[];
extern long far d_432e_3686[];
extern char far d_432e_be87[];
extern char far d_432e_bed7[];
extern char far d_432e_bf45[];
extern unsigned char far d_28c1_0000[];
extern int far d_28d4_1132[];
extern int far d_432e_36d6[][5];
extern unsigned char far d_432e_31aa[];
extern int far d_432e_3696[][4];
extern unsigned char far d_432e_36a6[][2][4];
extern unsigned char far d_432e_37f6[][6][5];
char f_1a83_2644(int, int);
char f_1a83_26ed(int, int);
extern int d_61eb_d638;
extern int d_61eb_d63a;
extern int far d_28d4_106c[];
struct score { unsigned home1 : 4; unsigned away1 : 4; unsigned home2 : 4; unsigned away2 : 4; };
extern int far d_432e_1ee2[];
extern int d_61eb_d5c0;
extern unsigned char d_61eb_dba3;
extern char far * far d_53fc_0000[];
extern char far d_432e_bf95[];
extern char far d_432e_bfe5[];
extern char far d_432e_c035[];
extern char far d_432e_c085[];
extern int far d_432e_35f6[][22];
extern int far d_432e_0000[][100];
char f_1a83_247b(int);
char f_1a83_29a3(int);
extern unsigned char far d_3334_be02[];
extern char far d_5313_0de8[];
extern struct score far d_432e_87c8[];
extern struct transfers far d_432e_681e[];
extern unsigned char far d_3334_c122[][40];

/* the main menu: per item, the button's position and colour */
static unsigned char d_61eb_06a2[][3] = {
    {8, 32, 4}, {164, 32, 12}, {242, 32, 4}, {8, 88, 12}, {86, 88, 4}, {164, 88, 12},
    {242, 88, 4}, {8, 144, 4}, {86, 144, 12}, {164, 144, 4}, {242, 144, 12}
};

void f_6ffe_0000(void)
{
    char buf[320];

    d_61eb_d9c3 = -1;
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 15; d_61eb_d5aa++)
        d_3334_fefe[1][d_61eb_d5aa] = d_3334_fefe[0][d_61eb_d5aa] = d_61eb_d5aa > 10 ? 4 : 0;
    do {
        sprintf(buf, "Week %d %s %d", f_1a83_66e8(d_61eb_d5a2),
                d_61eb_d5a2 > 12 ? "Season" : "Preseason", d_61eb_d5a4);
        f_1a83_48f9(buf);
        for (d_61eb_d5c2 = 0; d_61eb_d5c2 <= 10; d_61eb_d5c2++)
            f_6ffe_0250(d_61eb_d5c2, 0);
        d_61eb_da51 = f_215d_0e27();
        f_215d_038c(0);
        do {
            d_61eb_d5c8 = -1;
            if (f_215d_0c20() > 0) {
                for (d_61eb_d5c2 = 0; d_61eb_d5c2 <= 10; d_61eb_d5c2++) {
                    d_61eb_d5c4 = d_61eb_06a2[d_61eb_d5c2][0];
                    d_61eb_d5c6 = d_61eb_06a2[d_61eb_d5c2][1];
                    if (f_215d_0c14() >= d_61eb_d5c4
                        && f_215d_0c14() <= d_61eb_d5c4 + (d_61eb_d5c2 == 0 ? 148 : 70)
                        && f_215d_0c08() >= d_61eb_d5c6
                        && f_215d_0c08() <= d_61eb_d5c6 + 48) {
                        f_6ffe_0250(d_61eb_d5c2, -1);
                        d_61eb_d5c8 = d_61eb_d5c2;
                        d_61eb_d5c2 = 10;
                    }
                }
            }
            if (d_61eb_d9c4 && f_215d_0e27() - d_61eb_da51 > 400 && d_61eb_d5c8 == -1) {
                d_61eb_d5c8 = 0;
                f_6ffe_0250(0, -1);
            }
        } while (d_61eb_d5c8 <= -1);
        f_215d_038c(1);
        if (d_61eb_d5c8 > 0) {
            switch (d_61eb_d5c8) {
            case 1: f_6ffe_0567(); break;
            case 2: f_6ffe_3782(); break;
            case 3: f_6ffe_4a4e(); break;
            case 4:
                if (d_61eb_d5a2 > 12)
                    f_75a4_0d76();
                else
                    f_ab30_0e3e();
                break;
            case 5: f_75a4_0000(); break;
            case 6: f_75a4_0501(); break;
            case 7: f_75a4_0b8e(); break;
            case 8: f_6ffe_3322(); break;
            case 9: f_75a4_0f79(); break;
            case 10: f_75a4_10f0(); break;
            }
        }
    } while (d_61eb_d5c8 != 0);
    d_61eb_d9c3 = 0;
}

/* the main menu's labels (the first and sixth are rewritten each week) */
static char far *d_61eb_06c3[] = {
    "Sunday Fixtures", "View Tables", "Fixture Info", "Club Details", "Match Reports",
    "Find Player", "Board Resign", "Manager Jobs", "National Squads", "Game Options",
    "Save Game"
};

void f_6ffe_0250(int n, char lit)
{
    if (n == 0 && d_61eb_d5a2 > 100)
        strcpy(d_432e_ba27, "New Season");
    else if (n == 0 && f_1a83_2a21(d_61eb_d5a2) == 0)
        strcpy(d_432e_ba27, "Continue Season");
    else if (n == 0 && d_61eb_d5a2 % 2 == 1)
        strcpy(d_432e_ba27, "Midweek Fixtures");
    else if (n == 4 && d_61eb_d5a2 <= 12)
        strcpy(d_432e_ba27, "Arrange Friendly");
    else if (n == 5 && d_61eb_d9c4)
        strcpy(d_432e_ba27, "Short Lists");
    else
        strcpy(d_432e_ba27, d_61eb_06c3[n]);
    d_61eb_d5c4 = d_61eb_06a2[n][0];
    d_61eb_d5c6 = d_61eb_06a2[n][1];
    /* every button in colour 13, as in the first Italia (the table's third column is not read) */
    d_61eb_d5ca = lit ? 8 : 13;
    d_61eb_d5cc = n == 0 ? 148 : 70;
    f_215d_088c(16);
    f_215d_08aa(d_61eb_d5c4 + 4, d_61eb_d5c6 + 4,
                d_61eb_d5c4 + d_61eb_d5cc + 4, d_61eb_d5c6 + 52);
    f_215d_088c(d_61eb_d5ca + 16);
    f_215d_08aa(d_61eb_d5c4, d_61eb_d5c6, d_61eb_d5c4 + d_61eb_d5cc, d_61eb_d5c6 + 48);
    if (d_61eb_d5ca == 13)
        d_61eb_d5ce = 2;
    else if (d_61eb_d5ca == 4)
        d_61eb_d5ce = 12;
    else
        d_61eb_d5ce = 1;
    f_215d_089b(d_61eb_d5ce + 16);
    f_215d_1016(d_61eb_d5c4, d_61eb_d5c6 + 48, d_61eb_d5c4, d_61eb_d5c6);
    f_215d_1016(d_61eb_d5c4, d_61eb_d5c6, d_61eb_d5c4 + d_61eb_d5cc, d_61eb_d5c6);
    f_215d_089b(16);
    f_215d_1016(d_61eb_d5c4 + d_61eb_d5cc, d_61eb_d5c6,
                d_61eb_d5c4 + d_61eb_d5cc, d_61eb_d5c6 + 48);
    f_215d_1016(d_61eb_d5c4 + d_61eb_d5cc, d_61eb_d5c6 + 48,
                d_61eb_d5c4, d_61eb_d5c6 + 48);
    d_61eb_d5d0 = f_215d_0b10(d_432e_ba27, " ");
    strcpy(d_432e_bb67, d_432e_ba27);
    d_432e_bb67[d_61eb_d5d0 - 1] = 0;
    strcpy(d_432e_bbb7, &d_432e_ba27[d_61eb_d5d0]);
    d_61eb_d5d2 = d_61eb_d5cc / 2 - strlen(d_432e_bb67) * 4;
    f_1a83_3697((d_61eb_d5c4 + d_61eb_d5d2 + 8) / 8.0, (d_61eb_d5c6 + 23) / 8.0, 6,
                f_215d_0e90(d_432e_bb67));
    d_61eb_d5d2 = d_61eb_d5cc / 2 - strlen(d_432e_bbb7) * 4;
    f_1a83_3697((d_61eb_d5c4 + d_61eb_d5d2 + 8) / 8.0, (d_61eb_d5c6 + 31) / 8.0, 6,
                f_215d_0e90(d_432e_bbb7));
}

void f_6ffe_0567(void)
{
    do {
        f_1a83_2da6(0, "Tables/Awards", "*Exit|League Tables|Group Tables|Top Goalscorers|Worst Discipline|Average Ratings|M/O/M Awards|Team Form Guide|Average Gates|Manager Scores|Manager Rankings|Manager Salary|Hall Of Fame|Monthly Awards|");
        d_61eb_d5d4 = d_61eb_d59e;
        switch (d_61eb_d5d4) {
        case 1:
            f_6ffe_0615(-1);
            break;
        case 2:
            f_6ffe_0d6a();
            break;
        case 3:
        case 4:
        case 5:
        case 6:
            f_6ffe_0dbb(d_61eb_d5d4 - 3, -1);
            break;
        case 7:
            f_6ffe_16cf(0);
            break;
        case 8:
            f_6ffe_16cf(1);
            break;
        case 9:
            f_6ffe_1ffe();
            break;
        case 10:
            f_6ffe_23f2(0);
            break;
        case 11:
            f_6ffe_23f2(1);
            break;
        case 12:
            f_6ffe_28db();
            break;
        case 13:
            f_6ffe_2bf3(0);
            break;
        }
    } while (d_61eb_d5d4 != 0);
}

/* the league table's column headings */
static char far *d_61eb_06ef[] = {
    "PL", "W", "D", "L", "F", "A", "W", "D", "L", "F", "A", "PT"
};

void f_6ffe_0615(int div)
{
    int y;
    char buf[320];

    memset(d_28d4_11fc, 0, 260);
    if (div == -1)
        d_61eb_d5d6 = f_a214_1a52();
    else
        d_61eb_d5d6 = div;
    do {
        f_6ffe_0ab8(d_61eb_d5d6, d_28d4_11fc);
        f_1a83_5ccd();
        f_1a83_48f9("");
        sprintf(buf, " %s", f_1a83_4876(d_61eb_d5d6 + 1, 0));
        f_1a83_3450(1.125, 1.25, 1, 2, 0x61, buf);
        for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 11; d_61eb_d5d8++) {
            sprintf(buf, "%-2s", d_61eb_06ef[d_61eb_d5d8]);
            f_1a83_3450(d_61eb_d5d8 * 2 + 15.625 + (d_61eb_d5d8 == 0 ? -1 : 0), 1.25, 1, 8, 0, buf);
        }
        d_61eb_da55 = 2.5;
        y = 20;
        d_61eb_d5ca = d_61eb_d5d6 == 0 ? 14 : 4;
        d_61eb_d5da = d_61eb_d5d6 == 0 ? 8 : 12;
        for (d_61eb_d5dc = 0; d_61eb_d5dc <= f_1a83_6d76(d_61eb_d5d6) - 1; d_61eb_d5dc++) {
            f_1a83_3347(11, y, 1, d_432e_b9ff[d_61eb_d5dc]);
            if (f_1a83_2ad4(d_61eb_d5de = d_28d4_11fc[0][d_61eb_d5dc]))
                d_61eb_d5e0 = 3;
            else
                d_61eb_d5e0 = d_61eb_d5da;
            sprintf(buf, " %.15s", (char far *)d_61eb_b0ec[d_61eb_d5de]);
            f_1a83_4d96(0, 1.125, d_61eb_da55, 1, d_61eb_d5e0, 0x61, buf);
            sprintf(buf, "%-2d", d_28d4_11fc[1][d_61eb_d5dc]);
            f_1a83_3347(125, y, 5, buf);
            for (d_61eb_d5aa = 2; d_61eb_d5aa <= 11; d_61eb_d5aa++) {
                sprintf(buf, "%-2d", d_28d4_11fc[d_61eb_d5aa][d_61eb_d5dc]);
                f_1a83_3347((d_61eb_d5aa - 2) * 16 + 149, y, d_61eb_d5aa > 6 ? 1 : 6, buf);
            }
            sprintf(buf, "%-2d", d_28d4_11fc[12][d_61eb_d5dc]);
            f_1a83_3450(37.625, d_61eb_da55, 1, 2, 0, buf);
            if (f_6ffe_0d29(d_61eb_d5dc, d_61eb_d5d6)) {
                f_215d_089b(22);
                f_215d_1016(8, d_61eb_da55 * 8.0 + 2.0, 105, d_61eb_da55 * 8.0 + 2.0);
                d_61eb_da55 = d_61eb_da55 + 1.125;
                y += 9;
            } else {
                d_61eb_da55 += 1;
                y += 8;
            }
            f_215d_13f1(&d_61eb_d5ca, &d_61eb_d5da, 2);
        }
        f_1a83_5ce1();
        f_1a83_4d96(2, 1.25, 22.75, 6, 2, 0x35, " - SER");
        f_1a83_4d96(2, 32.25, 22.75, 6, 2, 0x35, " + SER");
        f_1a83_4d96(2, 8.5, 22.75, 1, 4, 0xb9, "          EXIT");
        do
            d_61eb_d59e = f_1a83_5296(d_61eb_d5e2);
        while (d_61eb_d59e <= 0);
        if (d_61eb_d59e >= 1 && d_61eb_d59e <= f_1a83_6d76(d_61eb_d5d6)) {
            if (f_1a83_2ad4(d_61eb_d5dc = d_28d4_11fc[0][d_61eb_d59e - 1])) {
                f_75a4_2bd7(d_61eb_d5dc);
                d_61eb_d5dc;  /* keeps this branch's copy of the shared pop/jmp tail */
            } else
                f_6ffe_4a89(d_61eb_d5dc);
        } else if (d_61eb_d59e == f_1a83_6d76(d_61eb_d5d6) + 1) {
            d_61eb_d5d6--;
            if (d_61eb_d5d6 < 0)
                d_61eb_d5d6 = 1;
        } else if (d_61eb_d59e == f_1a83_6d76(d_61eb_d5d6) + 2) {
            d_61eb_d5d6++;
            if (d_61eb_d5d6 > 1)
                d_61eb_d5d6 = 0;
        } else if (d_61eb_d59e == f_1a83_6d76(d_61eb_d5d6) + 3)
            d_61eb_d5d6 = -1;
    } while (d_61eb_d5d6 != -1);
}

void f_6ffe_0ab8(int div, unsigned char far (*t)[20])
{
    d_61eb_d5d4 = 0;
    for (d_61eb_d5d8 = div * 18; d_61eb_d5d8 <= div * 18 + f_1a83_6d76(div) - 1; d_61eb_d5d8++) {
        d_61eb_d5de = d_432e_0640[d_61eb_d5d8];
        strcpy(d_432e_b9ff[d_61eb_d5d4], " ");
        if (d_3334_bf6a[d_61eb_d5de] == 1)
            strcpy(d_432e_b9ff[d_61eb_d5d4], "R");
        else if (d_3334_bf6a[d_61eb_d5de] == 3)
            strcpy(d_432e_b9ff[d_61eb_d5d4], "P");
        else if (d_3334_bf6a[d_61eb_d5de] == 4)
            strcpy(d_432e_b9ff[d_61eb_d5d4], "C");
        t[0][d_61eb_d5d4] = d_61eb_d5de;
        t[1][d_61eb_d5d4] = div == 0 ? d_61eb_d59a : d_61eb_d59c;
        t[2][d_61eb_d5d4] = d_3334_bf92[d_61eb_d5de] - d_3334_c032[d_61eb_d5de];
        t[3][d_61eb_d5d4] = f_215d_1343((div == 0 ? d_61eb_d59a : d_61eb_d59c) - d_3334_bf92[d_61eb_d5de]
                                        - d_3334_bfba[d_61eb_d5de], 0)
                            - d_3334_c05a[d_61eb_d5de];
        t[4][d_61eb_d5d4] = d_3334_bfba[d_61eb_d5de] - d_3334_c082[d_61eb_d5de];
        t[5][d_61eb_d5d4] = d_3334_bfe2[d_61eb_d5de] - d_3334_c0aa[d_61eb_d5de];
        t[6][d_61eb_d5d4] = d_3334_c00a[d_61eb_d5de] - d_3334_c0d2[d_61eb_d5de];
        t[7][d_61eb_d5d4] = d_3334_c032[d_61eb_d5de];
        t[8][d_61eb_d5d4] = d_3334_c05a[d_61eb_d5de];
        t[9][d_61eb_d5d4] = d_3334_c082[d_61eb_d5de];
        t[10][d_61eb_d5d4] = d_3334_c0aa[d_61eb_d5de];
        t[11][d_61eb_d5d4] = d_3334_c0d2[d_61eb_d5de];
        t[12][d_61eb_d5d4] = f_9f8d_0000(d_61eb_d5d8);
        d_61eb_d5d4++;
    }
}

char f_6ffe_0d29(int pos, int div)
{
    d_61eb_d9c6 = 0;
    if ((pos == 0 && div == 0)
        || (pos == 13 && div == 0)
        || (pos == 3 && div == 1)
        || (pos == 15 && div == 1))
        d_61eb_d9c6 = -1;
    return d_61eb_d9c6;
}

void f_6ffe_0d6a(void)
{
    do {
        f_1a83_2da6(0, "Group Tables", "*Exit|European Cup|Anglo-Ital Cup|");
        if (d_61eb_d59e == 1) {
            if (d_61eb_d5a2 <= 35)
                f_1a83_0bb7("Groups not yet decided");
            else
                f_6ffe_3ceb();
        } else if (d_61eb_d59e == 2)
            f_6ffe_3d6b();
    } while (d_61eb_d59e > 0);
}

void f_6ffe_0dbb(int mode, int team)
{
    char shown;
    char sel[1500];
    int list[30];
    char buf[320];

    d_61eb_d9c7 = team < 0 ? -1 : 0;
    if (d_61eb_d9c7)
        d_61eb_d5e4 = f_a214_1a52();
    for (;;) {
        memset(sel, 0, 1500);
        shown = 0;
        memset(list, -1, 60);
        f_1a83_5ccd();
        if (mode == 0) {
            f_1a83_48f9(d_61eb_d9c7 ? "Top Goalscorers" : "Goalscorers");
        } else if (mode == 1) {
            f_1a83_48f9(d_61eb_d9c7 ? "Worst Discipline" : "Discipline");
        } else if (mode == 2) {
            f_1a83_48f9(d_61eb_d9c7 ? "Top Av Ratings" : "Av Ratings");
        } else if (mode == 3) {
            f_1a83_48f9(d_61eb_d9c7 ? "Most M/O/M Awards" : "M/O/M Awards");
        }
        if (d_61eb_d9c7) {
            sprintf(buf, " %s ", f_1a83_4876(d_61eb_d5e4 + 1, 0));
            f_1a83_3c08(1.25, 4.0, 0, 9, 0, buf);
        } else
            f_1a83_4327(1.25, 4.0, team);
        d_61eb_d5ca = (d_61eb_d9c7 && d_61eb_d5e4 == 0) || (team < 18 && !d_61eb_d9c7) ? 14 : 4;
        d_61eb_d5da = (d_61eb_d9c7 && d_61eb_d5e4 == 0) || (team < 18 && !d_61eb_d9c7) ? 8 : 12;
        d_61eb_d9c8 = 0;
        d_61eb_d5e6 = -1;
        for (d_61eb_d5d4 = 0; d_61eb_d5d4 <= 29; d_61eb_d5d4++) {
            d_61eb_d5b8 = -1;
            d_61eb_d5e8 = 0;
            if (d_61eb_d9c8 == 0) {
                if (d_61eb_d9c7) {
                    if (d_432e_1b22[d_61eb_d5e4][mode][0][d_61eb_d5d4] == -2) {
                        for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= d_61eb_d58e - 1; d_61eb_d5d8++) {
                            int k;
                            k = f_1a83_6d8b(d_28d4_1958[18][d_61eb_d5d8]);
                            if (sel[d_61eb_d5d8] == 0 && k == d_61eb_d5e4) {
                                d_61eb_d5ea = 0;
                                if (mode == 0)
                                    d_61eb_d5ea = d_3334_0000[1][d_61eb_d5d8];
                                else if (mode == 1)
                                    d_61eb_d5ea = d_3334_0000[2][d_61eb_d5d8] - d_3334_0000[2][d_61eb_d5d8] % 5;
                                else if (mode == 2) {
                                    if (d_3334_0000[0][d_61eb_d5d8] > (d_61eb_d5e4 == 0 ? d_61eb_d59a : d_61eb_d59c) / 2) {
                                        d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
                                        d_61eb_d5ea = (float)d_61eb_dbb8[0][d_61eb_d5d8] / d_3334_0000[0][d_61eb_d5d8] * 1000;
                                    }
                                } else if (mode == 3) {
                                    d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 0);
                                    d_61eb_d5ea = d_61eb_dbcc[3][d_61eb_d5d8];
                                }
                                if (d_61eb_d5ea > d_61eb_d5e8) {
                                    d_61eb_d5b8 = d_61eb_d5d8;
                                    d_61eb_d5e8 = d_61eb_d5ea;
                                }
                            }
                        }
                        d_432e_1b22[d_61eb_d5e4][mode][0][d_61eb_d5d4] = d_61eb_d5b8;
                        d_432e_1b22[d_61eb_d5e4][mode][1][d_61eb_d5d4] = d_61eb_d5e8;
                    } else {
                        d_61eb_d5b8 = d_432e_1b22[d_61eb_d5e4][mode][0][d_61eb_d5d4];
                        d_61eb_d5e8 = d_432e_1b22[d_61eb_d5e4][mode][1][d_61eb_d5d4];
                    }
                } else {
                    for (d_61eb_d5aa = 0; d_61eb_d5aa <= d_3334_beca[team] - 1; d_61eb_d5aa++) {
                        d_61eb_d5d8 = d_28d4_081c[team][d_61eb_d5aa];
                        d_61eb_d5ea = 0;
                        if (sel[d_61eb_d5d8] == 0) {
                            if (mode == 0)
                                d_61eb_d5ea = d_3334_0000[13][d_61eb_d5d8];
                            else if (mode == 1)
                                d_61eb_d5ea = d_3334_0000[2][d_61eb_d5d8] - d_3334_0000[2][d_61eb_d5d8] % 5;
                            else if (mode == 2) {
                                if (d_3334_0000[12][d_61eb_d5d8] > 0) {
                                    d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
                                    d_61eb_d5ea = (float)d_61eb_dbb8[2][d_61eb_d5d8] / d_3334_0000[12][d_61eb_d5d8] * 1000;
                                }
                            } else if (mode == 3) {
                                d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 0);
                                d_61eb_d5ea = d_61eb_dbcc[3][d_61eb_d5d8];
                            }
                            if (d_61eb_d5ea > d_61eb_d5e8) {
                                d_61eb_d5b8 = d_61eb_d5d8;
                                d_61eb_d5e8 = d_61eb_d5ea;
                            }
                        }
                    }
                }
            }
            d_61eb_d5ec = d_61eb_d5da;
            if (d_61eb_d5b8 > -1 && (d_61eb_d5e8 > 0 && d_61eb_d9c7 || d_61eb_d9c7 == 0)) {
                sprintf(d_432e_bc07, " %.17s", f_1a83_4485(d_61eb_d5b8));
                if (mode != 2) {
                    if (d_61eb_d5e8 > 0)
                        sprintf(d_432e_bc57, " %02d", d_61eb_d5e8);
                    else
                        strcpy(d_432e_bc57, " --");
                } else if (d_61eb_d5e8 > 0) {
                    d_61eb_da59 = d_61eb_d5e8 / 1000.0;
                    sprintf(d_432e_bc57, "%4.2f", d_61eb_da59);
                    d_432e_bc57[4] = 0;
                } else
                    strcpy(d_432e_bc57, "----");
                sel[d_61eb_d5b8] = -1;
                list[d_61eb_d5d4] = d_61eb_d5b8;
                d_61eb_d5e6 = d_61eb_d5d4;
                if (d_61eb_d9c7 && f_1a83_2ad4(d_28d4_1958[18][d_61eb_d5b8]))
                    d_61eb_d5ec = 3;
            } else {
                strcpy(d_432e_bc07, "");
                strcpy(d_432e_bc57, "");
                d_61eb_d9c8 = -1;
            }
            if (d_61eb_d5d4 < 15) {
                d_61eb_da5d = 1.125;
                d_61eb_da55 = d_61eb_d5d4 + 7.25;
            } else {
                d_61eb_da5d = 20.25;
                d_61eb_da55 = d_61eb_d5d4 - 15 + 7.25;
            }
            sprintf(buf, "%02d", d_61eb_d5d4 + 1);
            f_1a83_3450(d_61eb_da5d, d_61eb_da55, 6, 3, 0, buf);
            if (list[d_61eb_d5d4] == -1) {
                if (shown == 0 && mode == 0 && d_61eb_d9c7 == 0 && d_3334_c82a[team] > 0) {
                    strcpy(d_432e_bc07, " Own Goals");
                    sprintf(d_432e_bc57, " %02d", d_3334_c82a[team]);
                }
                f_1a83_3450(d_61eb_da5d + 1.75, d_61eb_da55, 6, d_61eb_d5ec, 111, d_432e_bc07);
                shown = -1;
            } else {
                int p;
                p = list[d_61eb_d5d4];
                f_1a83_4d96(0, d_61eb_da5d + 1.75, d_61eb_da55, d_3334_0000[7][p] < 255 ? 6 : 1, d_61eb_d5ec, 111, d_432e_bc07);
            }
            f_1a83_3450(d_61eb_da5d + 15.875, d_61eb_da55, 1, 2, 24, d_432e_bc57);
            f_215d_13f1(&d_61eb_d5ca, &d_61eb_d5da, 2);
        }
        f_1a83_5ce1();
        if (d_61eb_d9c7) {
            f_1a83_4d96(2, 8.5, 22.5, 1, 4, 185, "          EXIT");
            f_1a83_4d96(2, 1.25, 22.5, 6, 2, 53, " - SER");
            f_1a83_4d96(2, 32.25, 22.5, 6, 2, 53, " + SER");
        } else
            f_1a83_4d96(2, 1.25, 22.5, 1, 4, 301, "                 EXIT");
        do
            d_61eb_d59e = f_1a83_5296(d_61eb_d5e2);
        while (d_61eb_d59e <= 0);
        if (d_61eb_d5e6 + 2 > d_61eb_d59e) {
            d_61eb_d5b8 = list[d_61eb_d59e - 1];
            do {
                f_a214_4120(d_61eb_d5b8, -1, -1);
                f_87dc_4c9b(d_61eb_d5b8, d_61eb_d5ee);
            } while (!d_61eb_d9ca);
        } else if (d_61eb_d5e6 + 3 == d_61eb_d59e) {
            d_61eb_d5e4--;
            if (d_61eb_d5e4 < 0)
                d_61eb_d5e4 = 1;
        } else if (d_61eb_d5e6 + 4 == d_61eb_d59e) {
            d_61eb_d5e4++;
            if (d_61eb_d5e4 > 1)
                d_61eb_d5e4 = 0;
        } else
            break;
    }
}

void f_6ffe_16cf(int mode)
{
    char used[80];
    int list[21];
    char buf[318];
    unsigned char c;

    d_61eb_d5d6 = f_a214_1a52();
    do {
        memset(used, 0, 80);
        f_1a83_5ccd();
        f_1a83_48f9("");
        sprintf(d_432e_bcf7, "%s", f_1a83_4876(d_61eb_d5d6 + 1, 0));
        if (mode < 2) {
            if (mode == 0) {
                sprintf(buf, "Form Guide %s", d_432e_bcf7);
                f_1a83_3450(1.125, 1.5, 0, 1, 0x86, buf);
                f_1a83_3450(18.125, 1.5, 1, 8, 0, " HOME ");
                f_1a83_3450(22.875, 1.5, 1, 8, 0, " AWAY ");
            } else {
                sprintf(buf, "Attendance %s", d_432e_bcf7);
                f_1a83_3450(1.125, 1.5, 0, 1, 0x86, buf);
                f_1a83_3450(18.125, 1.5, 1, 2, 0x4a, " AVERAGE");
            }
            f_1a83_3450(27.625, 1.5, 1, 8 - mode * 6, 0, " LP ");
            f_1a83_3450(30.875, 1.5, 1, 8 - mode * 6, 0, " BOARD %   ");
        } else {
            sprintf(buf, "Job News %s", d_432e_bcf7);
            f_1a83_3450(1.125, 1.5, 0, 1, 0x86, buf);
            f_1a83_3450(18.125, 1.5, 1, 2, 0x53, " MANAGER");
            f_1a83_3450(28.75, 1.5, 0, 6, 0x53, " JOB");
        }
        d_61eb_d5ca = d_61eb_d5d6 == 0 ? 14 : 4;
        d_61eb_d5da = d_61eb_d5d6 == 0 ? 8 : 12;
        d_61eb_d5c6 = 6;
        d_61eb_d5d8 = 1;
        while (d_61eb_d5d8 <= f_1a83_6d76(d_61eb_d5d6)) {
            d_61eb_d5de = -1;
            d_61eb_db01 = 0;
            for (d_61eb_d5aa = d_61eb_d5d6 * 18; d_61eb_d5aa <= d_61eb_d5d6 * 18 + f_1a83_6d76(d_61eb_d5d6) - 1; d_61eb_d5aa++) {
                d_61eb_d5dc = d_432e_0640[d_61eb_d5aa];
                if (used[d_61eb_d5dc] == 0) {
                    d_61eb_db05 = 0;
                    if (mode == 0) {
                        d_61eb_db05 = f_ab30_08e9(d_61eb_d5dc);
                    } else if (mode == 1) {
                        if (d_3334_c73a[d_61eb_d5dc] > 0)
                            d_61eb_db05 = d_3334_ce4a[d_61eb_d5dc] / d_3334_c73a[d_61eb_d5dc];
                    } else {
                        d_61eb_db05 = 100 - d_3334_bea2[d_61eb_d5dc];
                        if (d_3334_c762[d_61eb_d5dc] > 0)
                            d_61eb_db05 = 255;
                    }
                    if (d_61eb_db05 > d_61eb_db01 || d_61eb_d5de == -1) {
                        d_61eb_db01 = d_61eb_db05;
                        d_61eb_d5fc = d_61eb_d5aa;
                        d_61eb_d5de = d_61eb_d5dc;
                    }
                }
            }
            d_61eb_d5e0 = d_61eb_d5da;
            if (mode < 2) {
                if (f_1a83_2ad4(d_61eb_d5de))
                    d_61eb_d5e0 = 3;
                sprintf(buf, " %02d ", d_61eb_d5d8);
                f_1a83_3450(1.125, d_61eb_d5c6 + 0.25 - 3.5, 0, 6, 0, buf);
                sprintf(buf, " %.17s", (char far *)d_61eb_b0ec[d_61eb_d5de]);
                f_1a83_4d96(0, 4.375, d_61eb_d5c6 + 0.25 - 3.5, 1, d_61eb_d5e0, 0x6c, buf);
                if (mode == 0) {
                    sprintf(buf, " %s", d_432e_ed13[0][d_61eb_d5de]);
                    f_1a83_3450(18.125, d_61eb_d5c6 + 0.25 - 3.5, 6, 2, 0x24, buf);
                    sprintf(buf, " %s", d_432e_ed13[1][d_61eb_d5de]);
                    f_1a83_3450(22.875, d_61eb_d5c6 + 0.25 - 3.5, 6, 2, 0x24, buf);
                } else {
                    strcpy(buf, "");
                    if (d_61eb_db01 > 0)
                        sprintf(buf, "   %ld", d_61eb_db01);
                    f_1a83_3450(18.125, d_61eb_d5c6 + 0.25 - 3.5, 1,
                                d_61eb_d5da == 8 || d_61eb_d5da == 14 ? 4 : 14, 0x4a, buf);
                }
                sprintf(buf, " %02d ", d_61eb_d5fc + 1 - d_61eb_d5d6 * 18);
                f_1a83_3450(27.625, d_61eb_d5c6 + 0.25 - 3.5, 1, 9, 0, buf);
                sprintf(d_432e_bde7, "%d%%", d_3334_bea2[d_61eb_d5de]);
                sprintf(buf, "    %s", d_432e_bde7);
                f_1a83_3450(30.875, d_61eb_d5c6 + 0.25 - 3.5, 6, 3, 0x42, buf);
            } else {
                if (f_1a83_2ad4(d_61eb_d5de))
                    d_61eb_d5e0 = 3;
                sprintf(buf, " %.21s", (char far *)d_61eb_b0ec[d_61eb_d5de]);
                f_1a83_4d96(0, 1.125, d_61eb_d5c6 - 3.25, 1, d_61eb_d5e0, 0x86, buf);
                if (d_3334_c762[d_61eb_d5de] > 0) {
                    strcpy(d_432e_eb97, "");
                    strcpy(d_432e_ebe7, "Available");
                } else {
                    strcpy(d_432e_eb97, f_1a83_4686(d_3334_ca6e[d_61eb_d5de], -1));
                    c = d_3334_bea2[d_61eb_d5de];
                    if (c <= 29)
                        strcpy(d_432e_ebe7, "Under threat");
                    else if (c <= 39)
                        strcpy(d_432e_ebe7, "Insecure");
                    else
                        strcpy(d_432e_ebe7, "Safe");
                }
                sprintf(buf, " %s", d_432e_eb97);
                f_1a83_3450(18.125, d_61eb_d5c6 - 3.25, 1, 9, 0x53, buf);
                sprintf(buf, " %s", d_432e_ebe7);
                f_1a83_3450(28.75, d_61eb_d5c6 - 3.25, d_432e_eb97[0] != 0 ? 1 : 15,
                            d_3334_c762[d_61eb_d5de] > 0 ? 1 : 3, 0x53, buf);
            }
            d_61eb_d5c6++;
            f_215d_13f1(&d_61eb_d5ca, &d_61eb_d5da, 2);
            used[d_61eb_d5de] = -1;
            list[d_61eb_d5d8] = d_61eb_d5de;
            d_61eb_d5d8++;
        }
        f_1a83_5ce1();
        f_1a83_4d96(2, 1.25, 23.0, 6, 2, 0x35, " - SER");
        f_1a83_4d96(2, 32.25, 23.0, 6, 2, 0x35, " + SER");
        f_1a83_4d96(2, 8.5, 23.0, 1, 4, 0xb9, "          EXIT");
        do
            d_61eb_d59e = f_1a83_5296(d_61eb_d5e2);
        while (d_61eb_d59e <= 0);
        if (d_61eb_d59e >= 1 && d_61eb_d59e <= f_1a83_6d76(d_61eb_d5d6)) {
            if (f_1a83_2ad4(d_61eb_d5dc = list[d_61eb_d59e])) {
                f_75a4_2bd7(d_61eb_d5dc);
                d_61eb_d5dc; /* keeps this copy of the shared pop */
            } else
                f_6ffe_4a89(d_61eb_d5dc);
        } else if (d_61eb_d59e == f_1a83_6d76(d_61eb_d5d6) + 1) {
            d_61eb_d5d6--;
            if (d_61eb_d5d6 < 0)
                d_61eb_d5d6 = 1;
        } else if (d_61eb_d59e == f_1a83_6d76(d_61eb_d5d6) + 2) {
            d_61eb_d5d6++;
            if (d_61eb_d5d6 > 1)
                d_61eb_d5d6 = 0;
        } else if (d_61eb_d59e == f_1a83_6d76(d_61eb_d5d6) + 3)
            d_61eb_d5d6 = -1;
    } while (d_61eb_d5d6 != -1);
}

#pragma option -O-
/* the managers' points table of a division */
void f_6ffe_1ffe(void)
{
    char used[80];
    char buf[320];

    d_61eb_d5e4 = f_a214_1a52();
    do {
        memset(used, 0, 80);
        f_1a83_5ccd();
        f_1a83_48f9("");
        sprintf(buf, "Manager Pts %s", f_1a83_4876(d_61eb_d5e4 + 1, 0));
        f_1a83_3450(1.125, 1.5, 0, 1, 0x88, buf);
        f_1a83_3450(18.375, 1.5, 1, 4, 0x6e, " CLUB");
        f_1a83_3450(32.375, 1.5, 1, 4, 0x36, " PTS");
        d_61eb_d5c6 = 6;
        d_61eb_d5ca = d_61eb_d5e4 == 0 ? 8 : 2;
        d_61eb_d5da = d_61eb_d5e4 == 0 ? 14 : 9;
        for (d_61eb_d5d8 = 1; d_61eb_d5d8 <= f_1a83_6d76(d_61eb_d5e4); d_61eb_d5d8++) {
            d_61eb_db01 = 0;
            for (d_61eb_d5dc = d_61eb_d5e4 * 18;
                 d_61eb_d5dc <= d_61eb_d5e4 * 18 + f_1a83_6d76(d_61eb_d5e4) - 1; d_61eb_d5dc++) {
                if (used[d_61eb_d5dc] == 0) {
                    d_61eb_dbb0 = f_215d_1629(d_61eb_dc4a, 0);
                    d_61eb_db09 = d_61eb_dbb0[d_3334_ca6e[d_61eb_d5dc]];
                    if (d_61eb_db09 >= d_61eb_db01) {
                        d_61eb_db01 = d_61eb_db09;
                        d_61eb_d5de = d_61eb_d5dc;
                    }
                }
            }
            if (f_1a83_2ad4(d_61eb_d5de))
                d_61eb_d5e0 = 12;
            else
                d_61eb_d5e0 = d_61eb_d5da;
            sprintf(buf, " %02d ", d_61eb_d5d8);
            f_1a83_3450(1.125, d_61eb_d5c6 + 0.25 - 3.5, 1, 4, 0, buf);
            sprintf(buf, " %s", f_1a83_4686(d_3334_ca6e[d_61eb_d5de], 0));
            f_1a83_3450(4.375, d_61eb_d5c6 + 0.25 - 3.5, 1, d_61eb_d5e0, 0x6e, buf);
            sprintf(buf, " %.17s", (char far *)d_61eb_b0ec[d_61eb_d5de]);
            f_1a83_3450(18.375, d_61eb_d5c6 + 0.25 - 3.5, 1, 3, 0x6e, buf);
            sprintf(buf, " %06ld", d_61eb_db01);
            f_1a83_3450(32.375, d_61eb_d5c6 + 0.25 - 3.5, 2, 6, 0x36, buf);
            d_61eb_d5c6++;
            f_215d_13f1(&d_61eb_d5ca, &d_61eb_d5da, 2);
            used[d_61eb_d5de] = -1;
        }
        f_1a83_5ce1();
        f_1a83_4d96(2, 1.25, 23.0, 6, 2, 0x35, " - SER");
        f_1a83_4d96(2, 32.25, 23.0, 6, 2, 0x35, " + SER");
        f_1a83_4d96(2, 8.5, 23.0, 1, 4, 0xb9, "          EXIT");
        do
            d_61eb_d59e = f_1a83_5296(d_61eb_d5e2);
        while (d_61eb_d59e <= 0);
        if (d_61eb_d59e == 1) {
            d_61eb_d5e4--;
            if (d_61eb_d5e4 < 0)
                d_61eb_d5e4 = 1;
        } else if (d_61eb_d59e == 2) {
            d_61eb_d5e4++;
            if (d_61eb_d5e4 > 1)
                d_61eb_d5e4 = 0;
        } else
            d_61eb_d5e4 = -1;
    } while (d_61eb_d5e4 != -1);
}

/* the manager rankings: by reputation (mode 0) or by salary (mode 1) */
void f_6ffe_23f2(char mode)
{
    int i;
    int max;
    int sal;
    char used[650];
    int order[80] = {-1};
    char buf[320];

    max = 0;
    memset(used, 0, 650);
    d_61eb_d5f2 = 1;
    d_61eb_d9cb = 0;
    for (i = 0; i <= 37; i++) {
        d_61eb_d5f6 = -1;
        for (d_61eb_d5dc = 0; d_61eb_d5dc <= 37; d_61eb_d5dc++) {
            d_61eb_d5f4 = d_3334_ca6e[d_61eb_d5dc];
            if (used[d_61eb_d5f4] == 0) {
                if (mode == 0) {
                    d_61eb_d5f8 = d_3334_db94[d_61eb_d5f4];
                    if (d_3334_d16c[d_61eb_d5f4] == 35)
                        d_61eb_d5f8 = 0;
                    if (d_61eb_d5f8 > d_61eb_d5e6 || d_61eb_d5f6 == -1) {
                        d_61eb_d5f6 = d_61eb_d5f4;
                        d_61eb_d5e6 = d_61eb_d5f8;
                    }
                } else if (mode == 1) {
                    d_61eb_dbb4 = f_215d_1629(d_61eb_dc4c, 0);
                    sal = d_61eb_dbb4[d_61eb_d5f4];
                    if (sal > max || d_61eb_d5f6 == -1) {
                        d_61eb_d5f6 = d_61eb_d5f4;
                        max = sal;
                    }
                }
            }
        }
        order[i] = d_61eb_d5f6;
        if (d_61eb_d5f6 != -1) {
            used[d_61eb_d5f6] = -1;
            if (d_61eb_d5f6 >= 646 && d_61eb_d9cb == 0) {
                d_61eb_d5f2 = f_1a83_6d8b(i) + 1;
                d_61eb_d9cb = -1;
            }
        }
    }
    do {
        d_61eb_d5fa = (d_61eb_d5f2 - 1) * 20;
        f_1a83_5ccd();
        f_1a83_48f9("");
        f_1a83_3450(1.125, 1.5, 0, 1, 0x88, "Manager Rankings");
        f_1a83_3450(18.375, 1.5, 1, 4, 0x6e, " CLUB");
        f_1a83_3450(32.375, 1.5, 1, 4, 0x36, mode == 0 ? " REP" : " SALARY");
        d_61eb_d5c6 = 6;
        d_61eb_d5ca = 14;
        d_61eb_d5da = 8;
        for (d_61eb_d5d8 = 1; d_61eb_d5d8 <= (d_61eb_d5f2 == 1 ? 20 : 18); d_61eb_d5d8++) {
            d_61eb_d5d4 = d_61eb_d5d8 + d_61eb_d5fa;
            d_61eb_d5f6 = order[d_61eb_d5d4 - 1];
            if (d_61eb_d5f6 == -1)
                continue;
            if (d_61eb_d5f6 >= 646)
                d_61eb_d5e0 = 9;
            else
                d_61eb_d5e0 = d_61eb_d5da;
            if (d_61eb_d5d4 < 100)
                sprintf(buf, " %02d ", d_61eb_d5d4);
            else
                strcpy(buf, "100 ");
            f_1a83_3450(1.125, d_61eb_d5c6 + 0.25 - 3.5, 1, 12, 0, buf);
            sprintf(buf, " %s", f_1a83_4686(d_61eb_d5f6, 0));
            f_1a83_3450(4.375, d_61eb_d5c6 + 0.25 - 3.5, 1, d_61eb_d5e0, 0x6e, buf);
            d_61eb_d5de = d_3334_cee2[d_61eb_d5f6];
            sprintf(buf, " %.17s", (char far *)d_61eb_b0ec[d_61eb_d5de]);
            f_1a83_3450(18.375, d_61eb_d5c6 + 0.25 - 3.5, 1, 2, 0x6e, buf);
            if (mode == 0)
                sprintf(buf, " %s", f_93a1_12de(d_61eb_d5f6, 0));
            else {
                d_61eb_dbb4 = f_215d_1629(d_61eb_dc4c, 0);
                sprintf(buf, " %dK", d_61eb_dbb4[d_61eb_d5f6]);
            }
            f_1a83_3450(32.375, d_61eb_d5c6 + 0.25 - 3.5, 1, 3, 0x36, buf);
            d_61eb_d5c6++;
            f_215d_13f1(&d_61eb_d5ca, &d_61eb_d5da, 2);
        }
        f_1a83_5ce1();
        f_1a83_4d96(2, 1.25, 23.0, 6, 2, 0x35, " - SCR");
        f_1a83_4d96(2, 32.25, 23.0, 6, 2, 0x35, " + SCR");
        f_1a83_4d96(2, 8.5, 23.0, 1, 4, 0xb9, "          EXIT");
        do
            d_61eb_d59e = f_1a83_5296(d_61eb_d5e2);
        while (d_61eb_d59e <= 0);
        if (d_61eb_d59e == 1) {
            d_61eb_d5f2--;
            if (d_61eb_d5f2 < 1)
                d_61eb_d5f2 = 2;
        } else if (d_61eb_d59e == 2) {
            d_61eb_d5f2++;
            if (d_61eb_d5f2 > 2)
                d_61eb_d5f2 = 1;
        } else
            d_61eb_d5f2 = -1;
    } while (d_61eb_d5f2 != -1);
}

/* the hall of fame, and its second page (" II"): the button toggles between them */
void f_6ffe_28db(void)
{
    unsigned char second = 0;
    char buf[320];

    do {
        f_1a83_5ccd();
        f_1a83_48f9("");
        sprintf(buf, "Hall of Fame%s", second == 0 ? "" : " II");
        f_1a83_3450(1.125, 1.5, 0, 1, 0x88, buf);
        f_1a83_3450(18.375, 1.5, 1, 4, 0x6e, " CLUB");
        f_1a83_3450(32.375, 1.5, 1, 4, 0x36, " PTS");
        d_61eb_d5c6 = 6;
        d_61eb_d5ca = 14;
        d_61eb_d5da = 8;
        for (d_61eb_d5d8 = 1; d_61eb_d5d8 <= 20; d_61eb_d5d8++) {
            sprintf(buf, " %02d ", d_61eb_d5d8);
            f_1a83_3450(1.125, d_61eb_d5c6 + 0.25 - 3.5, 1, 2, 0, buf);
            d_61eb_dbdc = f_215d_1629(d_61eb_dc60, 0);
            sprintf(buf, " %.17s", d_61eb_dbdc + (d_61eb_d5d8 - 1) * 160 + second * 80);
            f_1a83_3450(4.375, d_61eb_d5c6 + 0.25 - 3.5, 1, d_61eb_d5da, 0x6e, buf);
            d_61eb_dbdc = f_215d_1629(d_61eb_dc60, 0);
            sprintf(buf, " %.17s", d_61eb_dbdc + (d_61eb_d5d8 - 1) * 160 + second * 80 + 3200);
            f_1a83_3450(18.375, d_61eb_d5c6 + 0.25 - 3.5, 0, 6, 0x6e, buf);
            sprintf(buf, " %6ld", d_432e_0d86[d_61eb_d5d8][second]);
            f_1a83_3450(32.375, d_61eb_d5c6 + 0.25 - 3.5, 1, 9, 0x36, buf);
            d_61eb_d5c6++;
            f_215d_13f1(&d_61eb_d5ca, &d_61eb_d5da, 2);
        }
        f_1a83_5ce1();
        f_1a83_4d96(2, 1.25, 23.0, 1, 4, 0xe0, "           EXIT");
        f_1a83_4d96(2, 29.875, 23.0, 1, 12, 0x48, second == 0 ? "   2ND" : "   1ST");
        do
            d_61eb_d59e = f_1a83_5296(d_61eb_d5e2);
        while (d_61eb_d59e <= 0);
        if (d_61eb_d59e == 2)
            second = second == 0 ? 1 : 0;
    } while (d_61eb_d59e == 2);
}

/* the monthly or yearly awards: managers of each division, senior and young players */
void f_6ffe_2bf3(char year)
{
    int club;
    char buf[320];

    if (d_61eb_da4f) {
        if (year) {
            strcpy(d_432e_be87, "");
            strcpy(d_432e_bed7, "Year");
        } else {
            strcpy(d_432e_be87, " ");
            strcpy(d_432e_bed7, "Month");
        }
        sprintf(buf, "%sly Awards", d_432e_bed7);
        f_1a83_5ccd();
        f_1a83_48f9(buf);
        sprintf(buf, " MANAGER OF THE %s", d_432e_bed7);
        f_1a83_3450(1.125, 4.0, 0, 1, 178, buf);
        f_1a83_3450(23.625, 4.0, 0, 6, 36, " PTS");
        f_1a83_3450(28.375, 4.0, 0, 6, 86, " CLUB");
        for (d_61eb_d5fe = 0; d_61eb_d5fe <= 1; d_61eb_d5fe++) {
            sprintf(buf, " %s", f_1a83_4876(d_61eb_d5fe + 1, 0));
            f_1a83_3450(1.125, d_61eb_d5fe + 5.25, 1, d_61eb_d5fe & 1 ? 8 : 14, 86, buf);
            if (d_432e_367e[d_61eb_d5fe] != -1) {
                sprintf(buf, " %s", f_1a83_4686(d_432e_367e[d_61eb_d5fe], -1));
                f_1a83_3450(12.125, d_61eb_d5fe + 5.25, 1, d_432e_367e[d_61eb_d5fe] >= 646 ? 3 : 12, 90, buf);
                sprintf(buf, "%s%ld", d_432e_be87, d_432e_3686[d_61eb_d5fe]);
                f_1a83_3450(23.625, d_61eb_d5fe + 5.25, 1, 9, 36, buf);
                sprintf(buf, " %.13s", (char far *)d_61eb_b0ec[d_3334_cee2[d_432e_367e[d_61eb_d5fe]]]);
                f_1a83_3450(28.375, d_61eb_d5fe + 5.25, 1, 2, 86, buf);
            } else {
                f_1a83_3450(12.125, d_61eb_d5fe + 5.25, 1, 12, 90, "");
                f_1a83_3450(23.625, d_61eb_d5fe + 5.25, 1, 9, 36, "");
                f_1a83_3450(28.375, d_61eb_d5fe + 5.25, 1, 2, 86, "");
            }
        }
        sprintf(buf, " SENIOR PLAYER OF THE %s", d_432e_bed7);
        f_1a83_3450(1.125, 8.0, 0, 1, 178, buf);
        f_1a83_3450(23.625, 8.0, 0, 6, 36, " AV R");
        f_1a83_3450(28.375, 8.0, 0, 6, 86, " CLUB");
        sprintf(buf, " YOUNG PLAYER OF THE %s", d_432e_bed7);
        f_1a83_3450(1.125, 12.0, 0, 1, 178, buf);
        f_1a83_3450(23.625, 12.0, 0, 6, 36, " AV R");
        f_1a83_3450(28.375, 12.0, 0, 6, 86, " CLUB");
        for (d_61eb_d602 = 0; d_61eb_d602 <= 1; d_61eb_d602++) {
            d_61eb_da61 = d_61eb_d602 * 4 + 9.25;
            for (d_61eb_d600 = 0; d_61eb_d600 <= 1; d_61eb_d600++) {
                d_61eb_d5b8 = d_432e_364e[d_61eb_d602][d_61eb_d600];
                if (d_61eb_d5b8 != -1) {
                    sprintf(buf, " %s", f_1a83_4876(d_61eb_d600 + 1, 0));
                    f_1a83_3450(1.125, d_61eb_d600 + d_61eb_da61, 1, d_61eb_d600 & 1 ? 8 : 14, 86, buf);
                    sprintf(buf, " %.14s", f_1a83_45b4(d_61eb_d5b8));
                    f_1a83_3450(12.125, d_61eb_d600 + d_61eb_da61, 1, f_1a83_2ad4(d_28d4_82d0[d_61eb_d5b8]) ? 3 : 12, 90, buf);
                    sprintf(d_432e_bf45, "%4.2f", d_432e_365e[d_61eb_d602][d_61eb_d600]);
                    sprintf(buf, " %s", d_432e_bf45);
                    f_1a83_3450(23.625, d_61eb_d600 + d_61eb_da61, 1, 9, 36, buf);
                    club = d_3334_2904[d_61eb_d5b8] < 255 ? d_3334_2904[d_61eb_d5b8] : d_28d4_1958[18][d_61eb_d5b8];
                    sprintf(buf, " %.13s", (char far *)d_61eb_b0ec[club]);
                    f_1a83_3450(28.375, d_61eb_d600 + d_61eb_da61, 1, 2, 86, buf);
                } else {
                    f_1a83_3450(1.125, d_61eb_d600 + d_61eb_da61, 1, d_61eb_d600 & 1 ? 8 : 14, 86, "");
                    f_1a83_3450(12.125, d_61eb_d600 + d_61eb_da61, 1, 12, 90, "");
                    f_1a83_3450(23.625, d_61eb_d600 + d_61eb_da61, 1, 9, 36, "");
                    f_1a83_3450(28.375, d_61eb_d600 + d_61eb_da61, 1, 2, 86, "");
                }
            }
        }
        f_1a83_5ce1();
        f_1a83_4d96(2, 1.25, 22.5, 1, 4, 301, "                 DONE");
        do {
            d_61eb_d59e = f_1a83_5296(d_61eb_d5e2);
        } while (d_61eb_d59e <= 0);
    } else
        f_1a83_0bb7("No awards yet this season");
}

#pragma option -O-
void f_6ffe_3322(void)
{
    if (d_61eb_d5a2 < 16)
        f_1a83_0bb7("National squads not chosen");
    else
        f_6ffe_3345();
}

/* the national squads: senior and U-21 */
void f_6ffe_3345(void)
{
    unsigned char nation[5] = {0, 0, 0, 0, 0};
    int club;
    char buf[320];

    do {
        f_1a83_2da6(0, "International Squads", "*Exit|Italy|Italy U21|");
        d_61eb_d604 = d_61eb_d59e;
        if (d_61eb_d604 > 0) {
            d_61eb_d606 = 0;
            strcpy(d_432e_bf95, "");
            if (d_61eb_d604 > 1) {
                d_61eb_d606 = 1;
                strcpy(d_432e_bf95, "U-21 ");
                d_61eb_d604--;
            }
            do {
                f_1a83_5ccd();
                f_1a83_48f9("International squad");
                d_61eb_d5f0 = 20;
                sprintf(buf, " %s %s", d_53fc_0000[nation[d_61eb_d604 - 1]], d_432e_bf95);
                f_1a83_3c08(1.25, 4.0, d_61eb_d5f0 / 16, d_61eb_d5f0 % 16, 0, buf);
                f_1a83_3450(1.125, 7.0, 1, 2, 76, " NAME");
                f_1a83_3450(10.875, 7.0, 1, 2, 73, " CLUB");
                f_1a83_3450(20.25, 7.0, 1, 2, 76, " NAME");
                f_1a83_3450(30.0, 7.0, 1, 2, 73, " CLUB");
                f_1a83_5ce1();
                f_1a83_4d03();
                f_1a83_4d96(2, 1.25, 22.5, 1, 4, 301, "                 EXIT");
                f_1a83_5ccd();
                for (d_61eb_d608 = 0; d_61eb_d608 <= 21; d_61eb_d608++) {
                    d_61eb_d60a = d_28c1_0000[d_61eb_d608];
                    d_61eb_da5d = d_61eb_d608 > 10 ? 20.25 : 1.125;
                    d_61eb_da55 = d_61eb_d608 > 10 ? d_61eb_d608 - 2 : d_61eb_d608 + 9;
                    d_61eb_d5f0 = d_61eb_d608 & 1 ? 8 : 14;
                    d_61eb_d5b8 = d_432e_35f6[d_61eb_d606][d_61eb_d608];
                    if (d_61eb_d5b8 > -1) {
                        strcpy(d_432e_bfe5, f_1a83_462c(d_61eb_d5b8));
                        if (f_1a83_6b4c(d_61eb_d5b8))
                            sprintf(d_432e_c035, "<%s>", d_53fc_0000[d_28d4_1958[0][18 * 1500 + d_61eb_d5b8] - 140]);
                        else {
                            club = d_3334_2904[d_61eb_d5b8] < 255 ? d_3334_2904[d_61eb_d5b8] : d_28d4_1958[0][18 * 1500 + d_61eb_d5b8];
                            strcpy(d_432e_c035, (char far *)d_61eb_b0ec[club]);
                        }
                        if (f_1a83_2ad4(d_28d4_1958[0][18 * 1500 + d_61eb_d5b8]))
                            d_61eb_d5f0 = 3;
                    } else {
                        strcpy(d_432e_bfe5, d_53fc_058f[d_61eb_d60a]);
                        strcpy(d_432e_c035, "Non-lge");
                    }
                    sprintf(buf, " %.11s", d_432e_bfe5);
                    f_1a83_4d96(0, d_61eb_da5d, d_61eb_da55, 1, d_61eb_d5f0, 76, buf);
                    sprintf(buf, " %.11s", d_432e_c035);
                    f_1a83_3450(d_61eb_da5d + 9.75, d_61eb_da55, 1, 4, 73, buf);
                }
                f_1a83_5ce1();
                do {
                    d_61eb_d59e = f_1a83_5296(d_61eb_d5e2);
                } while (d_61eb_d59e <= 0);
                if (d_61eb_d59e > 1) {
                    d_61eb_d5b8 = d_432e_35f6[d_61eb_d606][d_61eb_d59e - 2];
                    if (d_61eb_d5b8 > -1) {
                        do {
                            f_a214_4120(d_61eb_d5b8, -1, -1);
                            f_87dc_4c9b(d_61eb_d5b8, d_61eb_d5ee);
                        } while (!d_61eb_d9ca);
                    } else
                        f_1a83_0bb7("No information available");
                }
            } while (d_61eb_d59e != 1);
        }
    } while (d_61eb_d604 != 0);
}

void f_6ffe_3782(void)
{
    char buf[320];
    register char found;

    do {
        f_1a83_48f9("Fixture Info");
        f_1a83_2da6(0, "", "*Exit|Last Results|Next Fixtures|Next Italian Cup|Next Anglo-Ital|Next UEFA|Next Cup Winners|Next European|Next Playoffs|Group Tables|Euro Seedings|Past Winners|");
        f_1a83_3122(11);
        d_61eb_d60c = d_61eb_d59e;
        if (d_61eb_d60c == 1) {
            found = 0;
            if (d_61eb_d5a2 > 1) {
                for (d_61eb_d60e = d_61eb_d5a2 - 1; d_61eb_d60e >= 1; d_61eb_d60e--) {
                    if (d_28d4_1132[d_61eb_d60e] > 0) {
                        f_75a4_116c(d_61eb_d60e, 1, -1);
                        found = 1;
                        d_61eb_d60e = 1;
                    }
                }
            }
            if (found == 0)
                f_1a83_0bb7("No matches played");
        } else if (d_61eb_d60c == 2) {
            if (d_61eb_d5a2 <= 100) {
                for (d_61eb_d60e = d_61eb_d5a2; !f_1a83_2a21(d_61eb_d60e); d_61eb_d60e++)
                    ;
                f_75a4_116c(d_61eb_d60e, 0, -1);
            } else
                f_1a83_0bb7("The season is over");
        } else if (d_61eb_d60c == 3) {
            if (d_61eb_d5ba > -1) {
                if (d_61eb_d5ba > 0)
                    f_75a4_116c(d_61eb_d5ba, 0, 1);
                else
                    f_6ffe_3a04();
            } else {
                sprintf(buf, "%s won the Italian Cup", f_1a83_3300(d_432e_0000[1][0]));
                f_1a83_0bb7(buf);
            }
        } else if (d_61eb_d60c == 4) {
            if (d_61eb_d610 > -1) {
                if (d_61eb_d610 > 0)
                    f_75a4_116c(d_61eb_d610, 0, 2);
                else
                    f_6ffe_3a04();
            } else {
                sprintf(buf, "%s won the Anglo-Italian Cup", f_1a83_3300(d_432e_0000[3][0]));
                f_1a83_0bb7(buf);
            }
        } else if (d_61eb_d60c == 5) {
            if (d_61eb_d5bc > -1) {
                if (d_61eb_d5bc > 0)
                    f_75a4_116c(d_61eb_d5bc, 0, 3);
                else
                    f_6ffe_3a04();
            } else {
                sprintf(buf, "%s won the UEFA Cup", f_1a83_3300(d_432e_0000[4][0]));
                f_1a83_0bb7(buf);
            }
        } else if (d_61eb_d60c == 6) {
            if (d_61eb_d5be > -1) {
                if (d_61eb_d5be > 0)
                    f_75a4_116c(d_61eb_d5be, 0, 4);
                else
                    f_6ffe_3a04();
            } else {
                sprintf(buf, "%s won the Cup Winners Cup", f_1a83_3300(d_432e_0000[5][0]));
                f_1a83_0bb7(buf);
            }
        } else if (d_61eb_d60c == 7) {
            if (d_61eb_d5c0 > -1) {
                if (d_61eb_d5c0 > 0)
                    f_75a4_116c(d_61eb_d5c0, 0, 5);
                else
                    f_6ffe_3a04();
            } else {
                sprintf(buf, "%s won the European Cup", f_1a83_3300(d_432e_0000[6][0]));
                f_1a83_0bb7(buf);
                d_61eb_d60c;
            }
        } else if (d_61eb_d60c == 8) {
            if (d_61eb_d5a2 >= 97) {
                if (d_61eb_dba3 == 0)
                    f_1a83_0bb7("No playoffs are required");
                else if (d_61eb_d5a2 == 97)
                    f_75a4_116c(97, 0, 6);
                else
                    f_1a83_0bb7("The playoffs have finished");
            } else
                f_1a83_0bb7("Playoffs not yet decided");
        } else if (d_61eb_d60c == 9)
            f_6ffe_0d6a();
        else if (d_61eb_d60c == 10)
            f_6ffe_3a19();
        else if (d_61eb_d60c == 11)
            f_93a1_5eda();
    } while (d_61eb_d60c != 0);
}

void f_6ffe_3a04(void)
{
    f_1a83_0bb7("Draw not yet made");
}

void f_6ffe_3a19(void)
{
    char done[540];
    char buf[320];

    memset(done, 0, 540);
    f_1a83_5ccd();
    f_1a83_48f9("European Seedings");
    for (d_61eb_d612 = 4; d_61eb_d612 <= 6; d_61eb_d612++) {
        if (d_61eb_d612 == 4)
            strcpy(d_432e_c085, "UEFA CUP");
        else if (d_61eb_d612 == 5)
            strcpy(d_432e_c085, "CUP WINNERS CUP");
        else
            strcpy(d_432e_c085, "EUROPEAN CUP");
        sprintf(buf, " %s", d_432e_c085);
        f_1a83_3450(1.125, (d_61eb_d612 - 4) * 6.25 + 4.0, 0, 1, 0x130, buf);
        for (d_61eb_d614 = 1; d_61eb_d614 <= 8; d_61eb_d614++) {
            for (d_61eb_d5dc = 0; d_61eb_d5dc <= 539; d_61eb_d5dc++) {
                if (d_432e_31aa[d_61eb_d5dc] == d_61eb_d612 && done[d_61eb_d5dc] == 0) {
                    d_61eb_da5d = d_61eb_d614 > 4 ? 20.25 : 1.125;
                    d_61eb_da55 = (d_61eb_d612 - 4) * 6.25 + 5.25 + d_61eb_d614 - 1 - (d_61eb_d614 > 4 ? 4 : 0);
                    sprintf(buf, " %.12s", f_1a83_3300(d_61eb_d5dc));
                    buf[13] = 0;
                    if (f_1a83_2ad4(d_61eb_d5dc))
                        d_61eb_d5da = 3;
                    else
                        d_61eb_d5da = d_61eb_d614 & 1 ? 8 : 14;
                    f_1a83_3450(d_61eb_da5d, d_61eb_da55, d_61eb_d5dc < 38 ? 6 : 1, d_61eb_d5da, 0x59, buf);
                    if (d_61eb_d5dc < 38)
                        strcpy(buf, " ITALY");
                    else {
                        sprintf(buf, " %s", d_53fc_0000[d_53fc_1172[d_61eb_d5dc]]);
                        buf[9] = 0;
                    }
                    f_1a83_3450(d_61eb_da5d + 11.375, d_61eb_da55, 1, 2, 0x3c, buf);
                    done[d_61eb_d5dc] = -1;
                    d_61eb_d5dc = 539;
                }
            }
        }
    }
    f_1a83_5ce1();
    f_1a83_4d96(2, 1.25, 22.5, 1, 4, 0x12d, "                 DONE");
    do
        d_61eb_d59e = f_1a83_5296(d_61eb_d5e2);
    while (d_61eb_d59e <= 0);
}

void f_6ffe_3ceb(void)
{
    f_1a83_5ccd();
    f_1a83_48f9("European Cup");
    f_6ffe_4009(6, 0, 4, " Group A", 4.0);
    f_6ffe_4009(6, 1, 4, " Group B", 11.375);
    f_1a83_5ce1();
    f_1a83_4d96(2, 1.25, 22.5, 1, 4, 0x12d, "                 DONE");
    do
        d_61eb_d59e = f_1a83_5296(d_61eb_d5e2);
    while (d_61eb_d59e <= 0);
}

void f_6ffe_3d6b(void)
{
    unsigned char groups, size;
    char buf[320];

    groups = d_61eb_d5a2 <= 29 ? 6 : 4;
    size = d_61eb_d5a2 <= 29 ? 3 : 4;
    d_61eb_d616 = 0;
    for (d_61eb_d618 = 0; d_61eb_d618 <= groups - 1; d_61eb_d618++)
        for (d_61eb_d5aa = 0; d_61eb_d5aa <= size - 1; d_61eb_d5aa++)
            if (f_1a83_2ad4(d_432e_36d6[d_61eb_d618][d_61eb_d5aa])) {
                d_61eb_d616 = d_61eb_d5a2 <= 29 ? d_61eb_d618 / 3 : d_61eb_d618 / 2;
                d_61eb_d5aa = size - 1;
                d_61eb_d618 = groups - 1;
            }
    do {
        f_1a83_5ccd();
        f_1a83_48f9("Anglo-Italian Cup");
        if (d_61eb_d5a2 <= 29) {
            sprintf(buf, " Group %c", d_61eb_d616 * 3 + 'A');
            f_6ffe_4009(3, d_61eb_d616 * 3, size, buf, 4.0);
            sprintf(buf, " Group %c", d_61eb_d616 * 3 + 'B');
            f_6ffe_4009(3, d_61eb_d616 * 3 + 1, size, buf, 10.0);
            sprintf(buf, " Group %c", d_61eb_d616 * 3 + 'C');
            f_6ffe_4009(3, d_61eb_d616 * 3 + 2, size, buf, 16.0);
        } else {
            sprintf(buf, " Italian Group %c", d_61eb_d616 + 'A');
            f_6ffe_4009(3, d_61eb_d616 * 2, size, buf, 4.0);
            sprintf(buf, " English Group %c", d_61eb_d616 + 'A');
            f_6ffe_4009(3, d_61eb_d616 * 2 + 1, size, buf, 11.375);
        }
        f_1a83_5ce1();
        f_1a83_4d96(2, 1.25, 22.5, 6, 2, 0x35, " - GRP");
        f_1a83_4d96(2, 32.25, 22.5, 6, 2, 0x35, " + GRP");
        f_1a83_4d96(2, 8.5, 22.5, 1, 4, 0xb9, "          EXIT");
        do
            d_61eb_d59e = f_1a83_5296(d_61eb_d5e2);
        while (d_61eb_d59e <= 0);
        if (d_61eb_d59e == 1) {
            if (d_61eb_d616 == 0)
                d_61eb_d616 = 1;
            else
                d_61eb_d616--;
        } else if (d_61eb_d59e == 2) {
            if (d_61eb_d616 == 1)
                d_61eb_d616 = 0;
            else
                d_61eb_d616++;
        }
    } while (d_61eb_d59e != 3);
}

/* the group table's column headings */
static char far *d_61eb_07c4[] = {
    " P ", " W ", " D ", " L ", " F ", " A ", "PTS"
};

void f_6ffe_4009(int a, int b, unsigned char n, char far *title, float x)
{
    float y;
    float ys[7];
    char buf[320];

    f_1a83_3450(1.125, x, 0, 1, 0x130, title);
    f_1a83_3450(1.125, x + 1.125, 1, 12, 0x50, " Team");
    for (d_61eb_d5d8 = 0, y = 11.375; d_61eb_d5d8 <= 6; d_61eb_d5d8++, y += 4.0) {
        ys[d_61eb_d5d8] = y;
        sprintf(buf, " %s ", d_61eb_07c4[d_61eb_d5d8]);
        f_1a83_3450(ys[d_61eb_d5d8], x + 1.125, 1, 2, 0, buf);
    }
    for (d_61eb_d5d4 = 0; d_61eb_d5d4 <= n - 1; d_61eb_d5d4++) {
        if (a == 6)
            d_61eb_d5dc = d_432e_3696[b][d_61eb_d5d4];
        else
            d_61eb_d5dc = d_432e_36d6[b][d_61eb_d5d4];
        if (f_1a83_2ad4(d_61eb_d5dc))
            d_61eb_d5f0 = 3;
        else
            d_61eb_d5f0 = d_61eb_d5d4 & 1 ? 14 : 8;
        sprintf(buf, " %s", f_1a83_3300(d_61eb_d5dc));
        f_1a83_3450(1.125, x + 2.375 + d_61eb_d5d4, a == 6 && d_61eb_d5dc < 38 ? 6 : 1, d_61eb_d5f0, 0x50, buf);
        for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 6; d_61eb_d5d8++) {
            if (d_61eb_d5d8 < 6) {
                if (a == 6)
                    d_61eb_d61a = d_432e_36a6[d_61eb_d5d8][b][d_61eb_d5d4];
                else
                    d_61eb_d61a = d_432e_37f6[d_61eb_d5d8][b][d_61eb_d5d4];
            } else {
                if (a == 6)
                    d_61eb_d61a = d_432e_36a6[1][b][d_61eb_d5d4] * 2 + d_432e_36a6[2][b][d_61eb_d5d4];
                else
                    d_61eb_d61a = d_432e_37f6[1][b][d_61eb_d5d4] * 2 + d_432e_37f6[2][b][d_61eb_d5d4];
            }
            sprintf(buf, "  %d", d_61eb_d61a);
            f_1a83_3450(ys[d_61eb_d5d8], x + 2.375 + d_61eb_d5d4, 1, 4, 0x1e, buf);
        }
    }
}

#pragma option -O-
void f_6ffe_430f(int team)
{
    char names[4][100][20];
    char buf[320];
    unsigned char comp[100];
    unsigned char week[100];

    f_6ffe_4764(team, names, comp, week);
    for (;;) {
        d_61eb_d61c = (d_61eb_d61e % 3 > 0) + d_61eb_d61e / 3;
        f_1a83_5ccd();
        if (d_61eb_d61c <= 20)
            f_1a83_0007(-1.0, team, "Fixtures");
        else {
            f_1a83_48f9("");
            sprintf(buf, " %s fixtures ", (char far *)d_61eb_b0ec[team]);
            f_1a83_3450(1.5, 1.5, -(d_3334_be02[team] / 16), d_3334_be02[team] % 16, 0, buf);
        }
        d_61eb_d5f0 = 4;
        d_61eb_d622 = (d_61eb_d620 = d_61eb_d61c) + 1;
        d_61eb_d624 = d_61eb_d61c * 2;
        d_61eb_d626 = d_61eb_d61c * 2 + 1;
        for (d_61eb_d62a = 0; d_61eb_d61e - 1 >= d_61eb_d62a; d_61eb_d62a++) {
            d_61eb_da55 = d_61eb_d62a % d_61eb_d61c + 4.5 - (d_61eb_d61c > 20 ? 1.5 : 0);
            if (d_61eb_d62a + 1 <= d_61eb_d620)
                d_61eb_da5d = 0.5;
            else if (d_61eb_d62a + 1 <= d_61eb_d624)
                d_61eb_da5d = 13.3;
            else
                d_61eb_da5d = 26.1;
            sprintf(buf, "%.2s", names[0][d_61eb_d62a]);
            d_61eb_d5ec = atoi(buf);
            sprintf(buf, "%s", names[0][d_61eb_d62a] + 2);
            f_1a83_3450(d_61eb_da5d + 1, d_61eb_da55, d_61eb_d5ec / 16, d_61eb_d5ec % 16, 0, buf);
            if (d_61eb_d62a + 1 >= d_61eb_d62c && d_61eb_d62c > -1) {
                if (d_61eb_d62a + 1 == d_61eb_d62c)
                    d_61eb_d5ec = 3;
                else
                    d_61eb_d5ec = d_61eb_d5f0;
                sprintf(buf, "%-11s", names[1][d_61eb_d62a]);
                buf[11] = 0;
                f_1a83_3450(d_61eb_da5d + 3.0, d_61eb_da55, 1, d_61eb_d5ec, 0, buf);
            } else {
                sprintf(buf, "%-11s", names[1][d_61eb_d62a]);
                buf[11] = 0;
                f_1a83_4d96(0, d_61eb_da5d + 3.0, d_61eb_da55, 1, d_61eb_d5f0, 0, buf);
            }
            f_1a83_3450(d_61eb_da5d + 11.75, d_61eb_da55, 3, 6, 0, names[2][d_61eb_d62a]);
            d_61eb_d5f0 = d_61eb_d5f0 == 12 ? 4 : 12;
        }
        f_1a83_5ce1();
        d_61eb_d59e = f_1a83_5296(d_61eb_d5e2);
        if (d_61eb_d59e <= 0)
            break;
        {
        FILE *fp;
        d_61eb_d62e = (week - 1)[d_61eb_d59e] - 1;
        d_61eb_d630 = comp[d_61eb_d62e];
        d_61eb_d632 = d_28d4_106c[d_61eb_d62e] + d_61eb_d630;
        f_215d_19eb(2);
        fp = fopen(d_5313_0de8, "rb");
        fseek(fp, (long)(d_61eb_d632 - 1) * 175, 0);
        fread(d_432e_87c8, 1, 175, fp);
        fclose(fp);
        f_7f4a_3a06(d_53fc_138e[comp[d_61eb_d62e]][0][d_61eb_d62e] / 32,
                    d_53fc_138e[comp[d_61eb_d62e]][1][d_61eb_d62e] / 32, -1);
        }
    }
}

void f_6ffe_4764(int team, char far names[][100][20], unsigned char far *comp,
                 unsigned char far *week)
{
    d_61eb_d636 = -1;
    d_61eb_d61e = 0;
    d_61eb_d62c = -1;
    for (d_61eb_d62a = 0; d_61eb_d62a <= 99; d_61eb_d62a++) {
        d_61eb_d634 = -1;
        for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 1; d_61eb_d5d8++)
            for (d_61eb_d5aa = 0; d_61eb_d5aa <= 63; d_61eb_d5aa++)
                if (d_53fc_138e[d_61eb_d5aa][d_61eb_d5d8][d_61eb_d62a] / 32 == team)
                    d_61eb_d634 = d_61eb_d5aa;
        if (d_61eb_d634 > -1) {
            if (d_61eb_d62a + 1 <= 12)
                strcpy(names[0][d_61eb_d61e], "38PF");
            else if (f_1a83_247b(d_61eb_d62a + 1))
                strcpy(names[0][d_61eb_d61e], "38CP");
            else if (f_1a83_280b(d_61eb_d62a + 1, d_61eb_d634 + 1))
                strcpy(names[0][d_61eb_d61e], "05AI");
            else if (f_1a83_29a3(d_61eb_d62a + 1))
                strcpy(names[0][d_61eb_d61e], "38PL");
            else if (f_1a83_277e(d_61eb_d62a + 1, d_61eb_d634 + 1))
                strcpy(names[0][d_61eb_d61e], "01EC");
            else if (f_1a83_26ed(d_61eb_d62a + 1, d_61eb_d634 + 1))
                strcpy(names[0][d_61eb_d61e], "01CW");
            else if (f_1a83_2644(d_61eb_d62a + 1, d_61eb_d634 + 1))
                strcpy(names[0][d_61eb_d61e], "01UE");
            else
                strcpy(names[0][d_61eb_d61e], "98LG");
            strcpy(names[2][d_61eb_d61e], "");
            if (f_1a83_2962(d_61eb_d62a + 1, d_61eb_d634 + 1))
                strcpy(names[2][d_61eb_d61e], "N");
            d_61eb_d638 = d_53fc_138e[d_61eb_d634][0][d_61eb_d62a] / 32;
            d_61eb_d63a = d_53fc_138e[d_61eb_d634][1][d_61eb_d62a] / 32;
            if (d_61eb_d638 == team) {
                strcpy(names[1][d_61eb_d61e], f_1a83_3300(d_61eb_d63a));
                if (strlen(names[2][d_61eb_d61e]) == 0)
                    strcpy(names[2][d_61eb_d61e], "H");
            } else {
                strcpy(names[1][d_61eb_d61e], f_1a83_3300(d_61eb_d638));
                if (strlen(names[2][d_61eb_d61e]) == 0)
                    strcpy(names[2][d_61eb_d61e], "A");
            }
            comp[d_61eb_d62a] = d_61eb_d634;
            week[d_61eb_d61e] = d_61eb_d62a + 1;
            d_61eb_d61e++;
            if (d_61eb_d62c == -1 && d_61eb_d62a + 1 >= d_61eb_d5a2)
                d_61eb_d62c = d_61eb_d61e;
        }
    }
}

void f_6ffe_4a4e(void)
{
    f_9f8d_101a(-1);
    if (d_61eb_d5de > -1) {
        if (f_1a83_2ad4(d_61eb_d5de))
            f_75a4_2bd7(d_61eb_d5de);
        else
            f_6ffe_4a89(d_61eb_d5de);
    }
}

void f_6ffe_4a89(int team)
{
    char buf[320];
    char reserves;

    reserves = 0;
    do {
        f_1a83_5ccd();
        f_1a83_0007(1.5, team, reserves ? "Reserves" : "Squad");
        f_1a83_5ce1();
        f_1a83_4d96(2, 1.5, 19.625, 6, 3, 0x37, " GOAL");
        f_1a83_4d96(2, 9.0, 19.625, 6, 3, 0x37, " DISP");
        f_1a83_4d96(2, 16.5, 19.625, 6, 3, 0x37, " AV R");
        f_1a83_4d96(2, 24.0, 19.625, 6, 3, 0x38, " M/O/M");
        f_1a83_4d96(2, 31.625, 19.625, 6, 3, 0x38, " TEAM");
        f_1a83_4d96(2, 1.5, 22.0, 1, 4, 0x129, "                 DONE");
        f_1a83_4d96(2, 1.5, 4.0, 1, 14, 0x26, "Trns");
        f_1a83_4d96(2, 6.875, 4.0, 1, 14, 0x26, "Staf");
        f_1a83_4d96(2, 12.25, 4.0, 1, 14, 0x26, "Leag");
        f_1a83_4d96(2, 17.625, 4.0, 1, 14, 0x26, "Fixt");
        f_1a83_4d96(2, 23.0, 4.0, 1, 14, 0x26, "Accs");
        f_1a83_4d96(2, 28.375, 4.0, 1, 14, 0x26, "Info");
        f_1a83_4d96(2, 33.75, 4.0, 1, 8, 0x27, reserves ? "Senr" : "Rsrv");
        if (d_3334_c762[team] > 0)
            f_1a83_4d96(2, 33.75, 1.125, 1, 2, 0x27, "Appl");
        f_1a83_5ccd();
        f_9f8d_151b(team, reserves);
        f_1a83_5ce1();
        do
            d_61eb_d63c = f_1a83_5296(0);
        while (d_61eb_d63c <= 0);
        if (d_61eb_d63c >= 1 && d_61eb_d63c <= 4)
            f_6ffe_0dbb(d_61eb_d63c - 1, team);
        else if (d_61eb_d63c == 5)
            f_b6f6_0000(team);
        else if (d_61eb_d63c == 7)
            f_6ffe_4e64(team);
        else if (d_61eb_d63c == 8)
            f_93a1_08e4(team);
        else if (d_61eb_d63c == 9)
            f_6ffe_527c(team);
        else if (d_61eb_d63c == 10)
            f_6ffe_430f(team);
        else if (d_61eb_d63c == 11) {
            if (d_61eb_d9c4 || f_215d_0d96(50) == 0)
                f_75a4_002a(team);
            else {
                sprintf(buf, "%s refuse access|to their accounts", (char far *)d_61eb_b0ec[team]);
                f_1a83_0bb7(buf);
            }
        } else if (d_61eb_d63c == 12)
            f_a214_07c3(team);
        else if (d_61eb_d63c == 13)
            reserves = !reserves;
        else if (d_61eb_d63c == 14 && d_3334_c762[team] > 0)
            f_75a4_0737(team);
        else if ((d_3334_c762[team] > 0 ? 15 : 14) <= d_61eb_d63c) {
            d_61eb_d608 = d_61eb_d63c - (d_3334_c762[team] > 0 ? 15 : 14);
            d_61eb_d5b8 = d_432e_1ee2[d_61eb_d608];
            if (!f_1a83_5a4c(d_61eb_d5b8)) {
                do {
                    f_a214_4120(d_61eb_d5b8, -1, -1);
                    f_87dc_4c9b(d_61eb_d5b8, d_61eb_d5ee);
                } while (!d_61eb_d9ca);
            } else
                f_b26d_01de(team, d_61eb_d608);
        }
    } while (d_61eb_d63c != 6);
}

void f_6ffe_4e64(int team)
{
    char buf[320];
    unsigned char i, last, done;
    int y, x;
    unsigned char n, first;

    do {
        f_1a83_5ccd();
        f_1a83_0007(-1, team, "Transfers");
        f_1a83_3450(1.125, 4, 1, 8, 150, "PLAYERS IN");
        f_1a83_3450(20.375, 4, 1, 8, 150, "PLAYERS OUT");
        for (d_61eb_d5dc = 5; d_61eb_d5dc >= 4; d_61eb_d5dc--) {
            d_61eb_da5d = d_61eb_d5dc == 4 ? 21.375 : 2.125;
            x = d_61eb_d5dc == 4 ? 171 : 17;
            n = d_61eb_d5dc == 5 ? d_432e_681e[team].n_in : d_432e_681e[team].n_out;
            if (n > 0) {
                d_61eb_da55 = 5.5;
                y = 44;
                d_61eb_db0d = 0;
                if (n <= 6) {
                    first = 0;
                    last = n - 1;
                } else {
                    first = n % 6;
                    last = first > 0 ? first - 1 : 5;
                }
                i = first;
                do {
                    done = i == last ? 1 : 0;
                    d_61eb_d5b8 = d_61eb_d5dc == 5 ? d_432e_681e[team].in[i] : d_432e_681e[team].out[i];
                    d_61eb_d63e = d_61eb_d5dc == 5 ? d_432e_681e[team].in_club[i] : d_432e_681e[team].out_club[i];
                    d_61eb_db11 = d_61eb_d5dc == 5 ? d_432e_681e[team].in_fee[i] : d_432e_681e[team].out_fee[i];
                    f_1a83_3347(x, y, 6, f_1a83_4485(d_61eb_d5b8));
                    if (d_61eb_db11 == 1)
                        sprintf(buf, "%s On Loan", (char far *)d_61eb_b0ec[d_61eb_d63e]);
                    else {
                        if (d_61eb_d63e < 38)
                            sprintf(buf, "%s %s", (char far *)d_61eb_b0ec[d_61eb_d63e], f_1a83_0e35(d_61eb_db11));
                        else
                            sprintf(buf, "<%s> %s", d_53fc_0000[d_61eb_d63e - 140], f_1a83_0e35(d_61eb_db11));
                        d_61eb_db0d += d_61eb_db11;
                    }
                    f_1a83_3347(x, y + 8, 5, buf);
                    d_61eb_da55 = d_61eb_da55 + 2.5;
                    y += 20;
                    i = i < 5 ? i + 1 : 0;
                } while (done == 0);
                sprintf(buf, "TOTAL %s", d_61eb_d5dc == 5 ? "SPENDING" : "INCOME");
                f_1a83_3347(x, y, 1, buf);
                sprintf(buf, "%ld", d_3334_cc82[d_61eb_d5dc == 5 ? 1 : 2][team]);
                f_1a83_3347(x + (d_61eb_d5dc == 5 ? 90 : 78), y, 2, buf);
            } else
                f_1a83_3347(x, 48, 5, "NOBODY");
        }
        f_1a83_5ce1();
        f_1a83_4d96(2, 1.25, 22.5, 1, 4, 301, "                 DONE");
        f_1a83_4d96(2, 33.75, 1.125, 1, 2, 0, "Loans");
        do
            d_61eb_d59e = f_1a83_5296(d_61eb_d5e2);
        while (d_61eb_d59e == 0);
        if (d_61eb_d59e == 2)
            f_ab30_5462(team);
    } while (d_61eb_d59e != 1);
}

/* the league progress graph's axis labels */
static struct label d_61eb_07e0[] = {
    {17, 34, "1"}, {17, 62, "5"}, {11, 97, "10"}, {11, 132, "15"}, {11, 152, "18"},
    {11, 167, "20"}, {21, 30, "1"}, {162, 30, "19"}, {282, 30, "34"}, {314, 30, "38"}
};

void f_6ffe_527c(int team)
{
    /* the weeks played in the team's league (Serie A: d_61eb_d59a, Serie B: d_61eb_d59c) */
    int weeks = f_1a83_6d8b(team) == 0 ? d_61eb_d59a : d_61eb_d59c;

    f_1a83_0007(-1, team, "League Progress");
    f_215d_088c(16);
    f_215d_08aa(19, 35, 315, 168);
    f_215d_088c(30);
    f_215d_08aa(15, 31, 311, 164);
    f_215d_089b(24);
    for (d_61eb_d5c4 = 15; d_61eb_d5c4 <= 311; d_61eb_d5c4 += 8)
        f_215d_1016(d_61eb_d5c4, 31, d_61eb_d5c4, 164);
    for (d_61eb_d5c6 = 31; d_61eb_d5c6 <= 164; d_61eb_d5c6 += 7)
        f_215d_1016(15, d_61eb_d5c6, 311, d_61eb_d5c6);
    if (weeks >= 1) {
        d_61eb_d640 = -1;
        for (d_61eb_d642 = 1; d_61eb_d642 <= weeks; d_61eb_d642++) {
            d_61eb_d5c4 = d_61eb_d642 * 8 + 7;
            d_61eb_d5c6 = d_3334_c122[d_61eb_d642][team] * 7 + 24;
            f_215d_089b(18);
            f_215d_1016(d_61eb_d5c4 - 2, d_61eb_d5c6 + 2, d_61eb_d5c4 + 2, d_61eb_d5c6 - 2);
            f_215d_1016(d_61eb_d5c4 - 2, d_61eb_d5c6 - 2, d_61eb_d5c4 + 2, d_61eb_d5c6 + 2);
            if (d_61eb_d640 > -1) {
                f_215d_089b(22);
                f_215d_1016(d_61eb_d640, d_61eb_d644, d_61eb_d5c4, d_61eb_d5c6);
            }
            d_61eb_d640 = d_61eb_d5c4;
            d_61eb_d644 = d_61eb_d5c6;
        }
    }
    for (d_61eb_d646 = 0; d_61eb_d646 <= 9; d_61eb_d646++)
        f_1a83_3347(d_61eb_07e0[d_61eb_d646].x, d_61eb_07e0[d_61eb_d646].y, 1, d_61eb_07e0[d_61eb_d646].s);
    f_1a83_4d96(2, 2.125, 22.75, 1, 4, 293, "                DONE");
    do
        d_61eb_d59e = f_1a83_5296(d_61eb_d5e2);
    while (d_61eb_d59e <= 0);
}
