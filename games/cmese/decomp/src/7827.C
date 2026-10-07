/* @at 7827:0000 */
/* @data 69da:0564 */
/* @module */

/* Overlay 7827 (CM93's 70A9.C, from CM1's 67EE.C): the season's main menu and the screens it
 * leads to: tables, top scorers, discipline, ratings and man of the match awards, form
 * guides, attendances and job news, manager points, rankings and hall of fame, awards,
 * international squads, fixtures, cups, European seedings and groups, the Anglo-Italian cup,
 * squads, transfers and the league progress graph. Its data is the main menu's buttons and
 * labels, the league table's column headings, the initialiser of 3273's nations, the group
 * table's column headings and the progress graph's axis labels, then its literal pool. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <stdlib.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_7827_0000(void);
void f_7827_0250(int n, char lit);
void f_7827_0567(void);
void f_7827_0615(int div);
void f_7827_0a79(int div, unsigned char far (*t)[20]);
char f_7827_0cd6(int pos, int div);
void f_7827_0d1c(void);
void f_7827_0d6d(int mode, int team);
void f_7827_1680(int mode);
void f_7827_1f64(void);
void f_7827_233d(char mode);
void f_7827_2804(void);
void f_7827_2b1c(char year);
void f_7827_3250(void);
void f_7827_3273(void);
void f_7827_372d(void);
void f_7827_3aa2(void);
void f_7827_3ab7(void);
void f_7827_3d89(void);
void f_7827_3e09(void);
void f_7827_40a7(int a, int b, unsigned char n, char far *title, float x);
void f_7827_43ad(int team);
void f_7827_4802(int team, char far names[][98][20], unsigned char far *comp, unsigned char far *week);
void f_7827_4b12(void);
void f_7827_4b4d(int team);
void f_7827_4f28(int team);
void f_7827_5340(int team);

int f_1a70_68a4(int x);
void f_1a70_4a41(char far *title);
long f_2162_0e32(void);
void f_2162_0397();
int f_2162_0c2b(void);
int f_2162_0c1f(void);
int f_2162_0c13(void);
void f_b8da_0e92(void);
void f_7dd6_0d76(void);
void f_7dd6_0000(void);
void f_7dd6_0501(void);
void f_7dd6_0b8e(void);
void f_7dd6_0f91(void);
void f_7dd6_1124(void);
void f_7dd6_2dcf(int);
char f_1a70_2b1e(int);
void f_2162_0897();
void f_2162_08b5(int x1, int y1, int x2, int y2);
void f_2162_08a6();
void f_2162_1021(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
unsigned f_2162_0b1b(char far *s, char far *set);
char far *f_2162_0e9b(char far *s);
void f_1a70_379b(float x, float y, int colour, char far *s);
void f_1a70_2eaa(int n, char far *title, char far *items);
void f_1a70_5e32(void);
void f_1a70_5e46(void);
char far *f_1a70_4983(int division, char full);
void f_1a70_3554(float x, float y, int bg, int fg, int w, char far *s);
void f_1a70_344b(int x, int y, int colour, char far *s);
char f_1a70_2bc7(int x);
void f_1a70_4ede(int a, float x, float y, int c, int d, int e, char far *s);
void f_2162_13fc(void far *a, void far *b, int n);
int f_1a70_53de(int a);
int f_aac9_1b3a(void);
extern char d_69da_ddb8;
extern char d_69da_ddb7;
extern int d_69da_d9a0;
extern int d_69da_d996;
extern int d_69da_d99a;
extern int d_69da_d992;
extern int d_69da_d9bc;
extern float d_69da_de41;
extern float d_69da_de45;
extern int d_69da_d9c2;
extern int d_69da_d9be;
extern int d_69da_d9c0;
extern int d_69da_d9c4;
extern int d_69da_d9c6;
extern int d_69da_d9c8;
extern int d_69da_d9ca;
extern int d_69da_d9cc;
extern int d_69da_d9ce;
extern int d_69da_d9d0;
extern int d_69da_d9d2;
extern int d_69da_d9d4;
extern int d_69da_d9d6;
extern int d_69da_d9d8;
extern int d_69da_d9da;
extern int d_69da_d9dc;
extern char near *d_69da_b1fc[];
extern unsigned char far d_4512_5d98[][14];
extern char far d_536d_50cd[];
extern char far d_536d_520d[];
extern char far d_536d_525d[];
extern char far d_536d_50a5[][2];
extern unsigned char far d_28da_23f8[][20];
void f_1a70_000a(float x, int team, char far *title);
void f_1a70_0b80(char far *);
int f_2162_134e(int a, int b);
int f_a83a_0000(int x);
extern char d_69da_ddba;
extern unsigned char far d_3668_0000[][1860];
extern int d_69da_d98e;
extern int d_69da_dfec;
extern int d_69da_dff6;
extern int (far *d_69da_dfa6)[1860];
extern unsigned char (far *d_69da_dfba)[1860];
void far *f_2162_1634(int handle, int page);
extern int d_69da_d9ba;
extern unsigned char far d_4512_6324[];
extern unsigned char far d_4512_0386[];
extern unsigned char far d_4512_03d8[];
extern unsigned char far d_4512_042a[];
extern unsigned char far d_4512_047c[];
extern unsigned char far d_4512_04ce[];
extern unsigned char far d_4512_0520[];
extern unsigned char far d_4512_0572[];
extern unsigned char far d_4512_05c4[];
extern unsigned char far d_4512_0616[];
extern unsigned char far d_4512_0668[];
void f_1a70_3d0c(float x, float y, int a, int b, int c, char far *s);
void f_1a70_442b(float x, float y, int team);
char far *f_1a70_4592(int player);
void f_aac9_42ed(int player, int a, char b);
void f_9007_4da1(int player, int a);
extern char d_69da_ddbe;
extern char d_69da_ddbc;
extern char d_69da_ddbb;
extern float d_69da_de4d;
extern float d_69da_de49;
extern int d_69da_d9e8;
extern int d_69da_d9e6;
extern int d_69da_d9e4;
extern int d_69da_d9e2;
extern int d_69da_d9e0;
extern int d_69da_d9de;
extern int d_69da_d9ae;
extern unsigned char far d_4512_023e[];
char far *f_1a70_4793(int manager, char full);
extern long d_69da_def1;
extern long d_69da_def5;
extern int d_69da_d9ea;
extern int d_69da_d9f6;
extern unsigned char far d_4512_01ec[];
char far *f_9c01_12e0(int a, int b);
extern long d_69da_def9;
extern int d_69da_d9f4;
extern int d_69da_d9f2;
extern int d_69da_d9f0;
extern int d_69da_d9ee;
extern int d_69da_d9ec;
extern char d_69da_ddbf;
extern int d_69da_dffe;
extern int d_69da_dfe8;
extern long far *d_69da_df9e;
extern char far *d_69da_dfca;
char far *f_1a70_4739(int player);
char far *f_1a70_46c1(int player);
extern int d_69da_d9f8;
extern int d_69da_d9fc;
extern int d_69da_d9fa;
extern int d_69da_d9fe;
extern int d_69da_da00;
extern int d_69da_da02;
extern int d_69da_da04;
extern float d_69da_de51;
void f_1a70_3226(int last);
void f_7dd6_11a0(int, int, int);
char f_1a70_29fa(int);
char f_1a70_2950(int);
char far *f_1a70_3404(int x);
void f_9c01_6142(void);
extern int d_69da_da06;
extern int d_69da_da08;
extern int d_69da_d9b2;
extern int d_69da_d9b0;
extern int d_69da_da0a;
extern int d_69da_d9b4;
extern int d_69da_d9b6;
extern int d_69da_d9b8;
extern int d_69da_da0c;
extern int d_69da_da0e;
extern int d_69da_da10;
extern int d_69da_da12;
extern int d_69da_da14;
void f_8773_3a79(int a, int b, char c);
char f_1a70_2490(int);
char f_1a70_2a7d(int);
char f_1a70_24c5(int);
char f_1a70_27c8(int, int);
char f_1a70_2a20(int a, int b);
void f_a83a_0fad(int);
void f_a83a_14e6(int team, char reserves);
long f_2162_0da1(long n);
void f_7dd6_002a(int team);
void f_aac9_07c3(int team);
void f_7dd6_0737(int team);
extern unsigned char far d_4512_00a4[];
extern int d_69da_da36;
extern int d_69da_da30;
extern int d_69da_da2e;
extern int d_69da_da2c;
extern int d_69da_da2a;
extern int d_69da_da28;
extern int d_69da_da26;
extern int d_69da_da20;
extern int d_69da_da1e;
extern int d_69da_da1c;
extern int d_69da_da1a;
extern int d_69da_da18;
extern int d_69da_da16;
char far *f_1a70_0dfe(long amount);
struct label { int x, y; char far *s; };
extern unsigned char far d_4512_070c[][82];
extern int far *d_69da_dfa2;
extern long d_69da_defd;
extern int d_69da_da3a;
extern int d_69da_da3c;
extern int d_69da_da3e;
extern int d_69da_da40;
unsigned char f_b8da_0904(char team);
extern long far d_4512_2250[];
extern int far d_4512_1a30[];
extern int d_69da_dfea;
extern unsigned char far d_28da_ad40[];
extern unsigned char far d_4512_3042[];
extern char d_69da_de3f;
extern unsigned char far d_3668_32dc[];
extern char far * far d_5dbf_0565[];
void f_1a70_4e4b(void);
char f_1a70_6d23(int player);
extern unsigned char far d_5dbf_1076[];
void f_2162_19f6();
char f_1a70_2855(int, int);
extern int d_69da_da24;
extern int far d_5dbf_1292[][2][98];
char f_1a70_5b94(int player);
void f_c06b_0000(char team);
void f_9c01_08e4(int team);
void f_b085_38a5(char team, char n);
void f_b8da_56ff(char team);
extern long d_69da_df01;
extern int d_69da_da38;
extern long far d_4512_1e90[][80];
struct transfers { int in[6], out[6]; /* the players */ unsigned char in_club[6], out_club[6]; /* the other club */ long in_fee[6], out_fee[6]; /* the fee, 1 for a loan */ unsigned char n_in, n_out; /* how many so far */ };
extern int far d_4512_8000[][4][2][30];
extern unsigned char far d_28da_2a78[][1860];
extern int far d_28da_10f0[][26];
extern unsigned char far d_4512_1576[];
extern char far d_536d_52ad[];
extern char far d_536d_52fd[];
extern unsigned char far d_4512_138a[];
extern unsigned char far d_4512_13dc[];
extern char far d_536d_539d[];
extern char far d_536d_548d[];
extern char far d_536d_823d[];
extern char far d_536d_828d[];
extern char far d_536d_83b9[][82][5];
extern unsigned char far d_4512_2390[];
extern unsigned char far d_4512_261a[];
extern long far d_4512_7274[][2];
extern int far d_4512_a01c[][4];
extern float far d_4512_a02c[][4];
extern int far d_4512_a04c[];
extern long far d_4512_a054[];
extern char far d_536d_552d[];
extern char far d_536d_557d[];
extern char far d_536d_55eb[];
extern char far d_536d_563b[];
extern char far d_536d_568b[];
extern char far d_536d_56db[];
extern int far d_4512_9e64[][2][22];
extern unsigned char far d_28c7_0000[];
extern char far * far d_5dbf_0000[];
extern int far d_28da_2332[];
extern int far d_4512_a0a4[][5];
extern char far d_536d_572b[];
extern unsigned char far d_4512_9a18[];
extern int far d_4512_5e24[][80];
extern int far d_4512_a064[][4];
extern unsigned char far d_4512_a074[][2][4];
extern unsigned char far d_4512_a2c0[][6][5];
char f_1a70_268e(int, int);
char f_1a70_2737(int, int);
extern int d_69da_da32;
extern int d_69da_da34;
extern int far d_28da_2270[];
extern char far d_536d_a475[];
struct score { unsigned home1 : 4; unsigned away1 : 4; unsigned home2 : 4; unsigned away2 : 4; };
extern struct score far d_536d_3066[];
extern int far d_4512_8780[];
extern struct transfers far d_536d_0000[];

/* the main menu: per item, the button's position and colour */
static unsigned char d_69da_0564[][3] = {
    {8, 32, 15}, {164, 32, 3}, {242, 32, 15}, {8, 88, 15}, {86, 88, 3}, {164, 88, 15},
    {242, 88, 3}, {8, 144, 3}, {86, 144, 15}, {164, 144, 3}, {242, 144, 15}
};

/* the league table's column headings */
void f_7827_0000(void)
{
    char buf[320];

    d_69da_ddb7 = -1;
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 13; d_69da_d9a0++)
        d_4512_5d98[1][d_69da_d9a0] = d_4512_5d98[0][d_69da_d9a0] = d_69da_d9a0 > 10 ? 4 : 0;
    do {
        sprintf(buf, "Week %d %s %d", f_1a70_68a4(d_69da_d996),
                d_69da_d996 > 8 ? "Season" : "Preseason", d_69da_d99a);
        f_1a70_4a41(buf);
        for (d_69da_d9bc = 0; d_69da_d9bc <= 10; d_69da_d9bc++)
            f_7827_0250(d_69da_d9bc, 0);
        d_69da_de41 = f_2162_0e32();
        f_2162_0397(0);
        do {
            d_69da_d9c2 = -1;
            if (f_2162_0c2b() > 0) {
                for (d_69da_d9bc = 0; d_69da_d9bc <= 10; d_69da_d9bc++) {
                    d_69da_d9be = d_69da_0564[d_69da_d9bc][0];
                    d_69da_d9c0 = d_69da_0564[d_69da_d9bc][1];
                    if (f_2162_0c1f() >= d_69da_d9be
                        && f_2162_0c1f() <= d_69da_d9be + (d_69da_d9bc == 0 ? 148 : 70)
                        && f_2162_0c13() >= d_69da_d9c0
                        && f_2162_0c13() <= d_69da_d9c0 + 48) {
                        f_7827_0250(d_69da_d9bc, -1);
                        d_69da_d9c2 = d_69da_d9bc;
                        d_69da_d9bc = 10;
                    }
                }
            }
            if (d_69da_ddb8 && f_2162_0e32() - d_69da_de41 > 400 && d_69da_d9c2 == -1) {
                d_69da_d9c2 = 0;
                f_7827_0250(0, -1);
            }
        } while (d_69da_d9c2 <= -1);
        f_2162_0397(1);
        if (d_69da_d9c2 > 0) {
            switch (d_69da_d9c2) {
            case 1: f_7827_0567(); break;
            case 2: f_7827_372d(); break;
            case 3: f_7827_4b12(); break;
            case 4:
                if (d_69da_d996 <= 8)
                    f_b8da_0e92();
                else
                    f_7dd6_0d76();
                break;
            case 5: f_7dd6_0000(); break;
            case 6: f_7dd6_0501(); break;
            case 7: f_7dd6_0b8e(); break;
            case 8: f_7827_3250(); break;
            case 9: f_7dd6_0f91(); break;
            case 10: f_7dd6_1124(); break;
            }
        }
    } while (d_69da_d9c2 != 0);
    d_69da_ddb7 = 0;
}

/* the main menu's labels (the first and sixth are rewritten each week) */
static char far *d_69da_0585[] = {
    "Saturday Fixtures", "View Tables", "Fixture Info", "Club Details", "Match Reports",
    "Find Player", "Board Resign", "Manager Jobs", "National Squads", "New Picture",
    "Save Game"
};

void f_7827_0250(int n, char lit)
{
    if (n == 0 && d_69da_d996 == 99)
        strcpy(d_536d_50cd, "New Season");
    else if (n == 0 && f_1a70_2b1e(d_69da_d996) == 0)
        strcpy(d_536d_50cd, "Continue Season");
    else if (n == 0 && d_69da_d996 % 2 == 1)
        strcpy(d_536d_50cd, "Midweek Fixtures");
    else if (n == 4 && d_69da_d996 <= 8)
        strcpy(d_536d_50cd, "Arrange Friendly");
    else if (n == 5 && d_69da_ddb8)
        strcpy(d_536d_50cd, "Short Lists");
    else
        strcpy(d_536d_50cd, d_69da_0585[n]);
    d_69da_d9be = d_69da_0564[n][0];
    d_69da_d9c0 = d_69da_0564[n][1];
    d_69da_d9c4 = lit ? 8 : 4;
    d_69da_d9c6 = n == 0 ? 148 : 70;
    f_2162_0897(16);
    f_2162_08b5(d_69da_d9be + 4, d_69da_d9c0 + 4,
                d_69da_d9be + d_69da_d9c6 + 4, d_69da_d9c0 + 52);
    f_2162_0897(d_69da_d9c4 + 16);
    f_2162_08b5(d_69da_d9be, d_69da_d9c0, d_69da_d9be + d_69da_d9c6, d_69da_d9c0 + 48);
    if (d_69da_d9c4 == 4)
        d_69da_d9c8 = 12;
    else if (d_69da_d9c4 == 12)
        d_69da_d9c8 = 4;
    else
        d_69da_d9c8 = 1;
    f_2162_08a6(d_69da_d9c8 + 16);
    f_2162_1021(d_69da_d9be, d_69da_d9c0 + 48, d_69da_d9be, d_69da_d9c0);
    f_2162_1021(d_69da_d9be, d_69da_d9c0, d_69da_d9be + d_69da_d9c6, d_69da_d9c0);
    f_2162_08a6(16);
    f_2162_1021(d_69da_d9be + d_69da_d9c6, d_69da_d9c0,
                d_69da_d9be + d_69da_d9c6, d_69da_d9c0 + 48);
    f_2162_1021(d_69da_d9be + d_69da_d9c6, d_69da_d9c0 + 48,
                d_69da_d9be, d_69da_d9c0 + 48);
    d_69da_d9ca = f_2162_0b1b(d_536d_50cd, " ");
    strcpy(d_536d_520d, d_536d_50cd);
    d_536d_520d[d_69da_d9ca - 1] = 0;
    strcpy(d_536d_525d, &d_536d_50cd[d_69da_d9ca]);
    d_69da_d9cc = d_69da_d9c6 / 2 - strlen(d_536d_520d) * 4;
    f_1a70_379b((d_69da_d9be + d_69da_d9cc + 8) / 8.0, (d_69da_d9c0 + 23) / 8.0, 6,
                f_2162_0e9b(d_536d_520d));
    d_69da_d9cc = d_69da_d9c6 / 2 - strlen(d_536d_525d) * 4;
    f_1a70_379b((d_69da_d9be + d_69da_d9cc + 8) / 8.0, (d_69da_d9c0 + 31) / 8.0, 6,
                f_2162_0e9b(d_536d_525d));
}

void f_7827_0567(void)
{
    do {
        f_1a70_2eaa(0, "Tables/Awards", "*Exit|League Tables|Group Tables|Top Goalscorers|Worst Discipline|Average Ratings|M/O/M Awards|Team Form Guide|Average Gates|Manager Scores|Manager Rankings|Manager Salary|Hall Of Fame|Monthly Awards|");
        d_69da_d9ce = d_69da_d992;
        switch (d_69da_d9ce) {
        case 1:
            f_7827_0615(-1);
            break;
        case 2:
            f_7827_0d1c();
            break;
        case 3:
        case 4:
        case 5:
        case 6:
            f_7827_0d6d(d_69da_d9ce - 3, -1);
            break;
        case 7:
            f_7827_1680(0);
            break;
        case 8:
            f_7827_1680(1);
            break;
        case 9:
            f_7827_1f64();
            break;
        case 10:
            f_7827_233d(0);
            break;
        case 11:
            f_7827_233d(1);
            break;
        case 12:
            f_7827_2804();
            break;
        case 13:
            f_7827_2b1c(0);
            break;
        }
    } while (d_69da_d9ce != 0);
}

/* the league table's column headings */
static char far *d_69da_05b1[] = {
    "PL", "W", "D", "L", "F", "A", "W", "D", "L", "F", "A", "PT"
};

void f_7827_0615(int div)
{
    int y;
    char buf[320];

    memset(d_28da_23f8, 0, 260);
    if (div == -1)
        d_69da_d9d0 = f_aac9_1b3a();
    else
        d_69da_d9d0 = div;
    do {
        f_7827_0a79(d_69da_d9d0, d_28da_23f8);
        f_1a70_5e32();
        f_1a70_4a41("");
        sprintf(buf, " %s", f_1a70_4983(d_69da_d9d0 + 1, 0));
        f_1a70_3554(1.125, 1.25, 1, 2, 0x61, buf);
        for (d_69da_d9d2 = 0; d_69da_d9d2 <= 11; d_69da_d9d2++) {
            sprintf(buf, "%-2s", d_69da_05b1[d_69da_d9d2]);
            f_1a70_3554(d_69da_d9d2 * 2 + 15.625 + (d_69da_d9d2 == 0 ? -1 : 0), 1.25, 1, 8, 0, buf);
        }
        d_69da_de45 = 2.5;
        y = 20;
        d_69da_d9c4 = d_69da_d9d0 == 0 ? 14 : 4;
        d_69da_d9d4 = d_69da_d9d0 == 0 ? 8 : 12;
        for (d_69da_d9d6 = 0; d_69da_d9d6 <= 19; d_69da_d9d6++) {
            f_1a70_344b(11, y, 1, d_536d_50a5[d_69da_d9d6]);
            if (f_1a70_2bc7(d_69da_d9d8 = d_28da_23f8[0][d_69da_d9d6]))
                d_69da_d9da = 3;
            else
                d_69da_d9da = d_69da_d9d4;
            sprintf(buf, " %.15s", (char far *)d_69da_b1fc[d_69da_d9d8]);
            f_1a70_4ede(0, 1.125, d_69da_de45, 1, d_69da_d9da, 0x61, buf);
            sprintf(buf, "%-2d", d_28da_23f8[1][d_69da_d9d6]);
            f_1a70_344b(125, y, 5, buf);
            for (d_69da_d9a0 = 2; d_69da_d9a0 <= 11; d_69da_d9a0++) {
                sprintf(buf, "%-2d", d_28da_23f8[d_69da_d9a0][d_69da_d9d6]);
                f_1a70_344b((d_69da_d9a0 - 2) * 16 + 149, y, d_69da_d9a0 > 6 ? 1 : 6, buf);
            }
            sprintf(buf, "%-2d", d_28da_23f8[12][d_69da_d9d6]);
            f_1a70_3554(37.625, d_69da_de45, 1, 2, 0, buf);
            if (f_7827_0cd6(d_69da_d9d6, d_69da_d9d0)) {
                f_2162_08a6(22);
                f_2162_1021(8, d_69da_de45 * 8.0 + 2.0, 105, d_69da_de45 * 8.0 + 2.0);
                d_69da_de45 = d_69da_de45 + 1.125;
                y += 9;
            } else {
                d_69da_de45 += 1;
                y += 8;
            }
            f_2162_13fc(&d_69da_d9c4, &d_69da_d9d4, 2);
        }
        f_1a70_5e46();
        f_1a70_4ede(2, 1.25, 22.75, 6, 2, 0x35, " - DIV");
        f_1a70_4ede(2, 32.25, 22.75, 6, 2, 0x35, " + DIV");
        f_1a70_4ede(2, 8.5, 22.75, 1, 4, 0xb9, "          EXIT");
        do
            d_69da_d992 = f_1a70_53de(d_69da_d9dc);
        while (d_69da_d992 <= 0);
        if (d_69da_d992 >= 1 && d_69da_d992 <= 20) {
            if (f_1a70_2bc7(d_69da_d9d6 = d_28da_23f8[0][d_69da_d992 - 1])) {
                f_7dd6_2dcf(d_69da_d9d6);
                d_69da_d9d6;  /* keeps this branch's copy of the shared pop/jmp tail */
            } else
                f_7827_4b4d(d_69da_d9d6);
        } else if (d_69da_d992 == 21) {
            d_69da_d9d0--;
            if (d_69da_d9d0 < 0)
                d_69da_d9d0 = 3;
        } else if (d_69da_d992 == 22) {
            d_69da_d9d0++;
            if (d_69da_d9d0 > 3)
                d_69da_d9d0 = 0;
        } else if (d_69da_d992 == 23)
            d_69da_d9d0 = -1;
    } while (d_69da_d9d0 != -1);
}

void f_7827_0a79(int div, unsigned char far (*t)[20])
{
    d_69da_d9ce = 0;
    for (d_69da_d9d2 = div * 20; d_69da_d9d2 <= div * 20 + 19; d_69da_d9d2++) {
        d_69da_d9d8 = d_4512_6324[d_69da_d9d2];
        strcpy(d_536d_50a5[d_69da_d9ce], " ");
        if (d_4512_0386[d_69da_d9d8] == 1)
            strcpy(d_536d_50a5[d_69da_d9ce], "R");
        else if (d_4512_0386[d_69da_d9d8] == 3)
            strcpy(d_536d_50a5[d_69da_d9ce], "P");
        else if (d_4512_0386[d_69da_d9d8] == 4)
            strcpy(d_536d_50a5[d_69da_d9ce], "C");
        t[0][d_69da_d9ce] = d_69da_d9d8;
        t[1][d_69da_d9ce] = d_69da_d9ba - 1;
        t[2][d_69da_d9ce] = d_4512_03d8[d_69da_d9d8] - d_4512_0520[d_69da_d9d8];
        t[3][d_69da_d9ce] = f_2162_134e(d_69da_d9ba - 1 - d_4512_03d8[d_69da_d9d8]
                                        - d_4512_042a[d_69da_d9d8], 0)
                            - d_4512_0572[d_69da_d9d8];
        t[4][d_69da_d9ce] = d_4512_042a[d_69da_d9d8] - d_4512_05c4[d_69da_d9d8];
        t[5][d_69da_d9ce] = d_4512_047c[d_69da_d9d8] - d_4512_0616[d_69da_d9d8];
        t[6][d_69da_d9ce] = d_4512_04ce[d_69da_d9d8] - d_4512_0668[d_69da_d9d8];
        t[7][d_69da_d9ce] = d_4512_0520[d_69da_d9d8];
        t[8][d_69da_d9ce] = d_4512_0572[d_69da_d9d8];
        t[9][d_69da_d9ce] = d_4512_05c4[d_69da_d9d8];
        t[10][d_69da_d9ce] = d_4512_0616[d_69da_d9d8];
        t[11][d_69da_d9ce] = d_4512_0668[d_69da_d9d8];
        t[12][d_69da_d9ce] = f_a83a_0000(d_69da_d9d2);
        d_69da_d9ce++;
    }
}

char f_7827_0cd6(int pos, int div)
{
    d_69da_ddba = 0;
    if ((pos == 0 && div == 0)
        || (div > 0 && (pos == 1 || pos == 5))
        || (div < 3 && pos == 16)
        || (div == 3 && pos == 18))
        d_69da_ddba = -1;
    return d_69da_ddba;
}

void f_7827_0d1c(void)
{
    do {
        f_1a70_2eaa(0, "Group Tables", "*Exit|European Cup|Anglo-Ital Cup|");
        if (d_69da_d992 == 1) {
            if (d_69da_d996 <= 51)
                f_1a70_0b80("Groups not yet decided");
            else
                f_7827_3d89();
        } else if (d_69da_d992 == 2)
            f_7827_3e09();
    } while (d_69da_d992 > 0);
}

void f_7827_0d6d(int mode, int team)
{
    char shown;
    char sel[1860];
    int list[30];
    char buf[320];

    d_69da_ddbb = team < 0 ? -1 : 0;
    if (d_69da_ddbb)
        d_69da_d9de = f_aac9_1b3a();
    for (;;) {
        memset(sel, 0, 1860);
        shown = 0;
        memset(list, -1, 60);
        f_1a70_5e32();
        if (mode == 0) {
            f_1a70_4a41(d_69da_ddbb ? "Top Goalscorers" : "Goalscorers");
        } else if (mode == 1) {
            f_1a70_4a41(d_69da_ddbb ? "Worst Discipline" : "Discipline");
        } else if (mode == 2) {
            f_1a70_4a41(d_69da_ddbb ? "Top Av Ratings" : "Av Ratings");
        } else if (mode == 3) {
            f_1a70_4a41(d_69da_ddbb ? "Most M/O/M Awards" : "M/O/M Awards");
        }
        if (d_69da_ddbb) {
            sprintf(buf, " %s ", f_1a70_4983(d_69da_d9de + 1, 0));
            f_1a70_3d0c(1.25, 4.0, 0, 9, 0, buf);
        } else
            f_1a70_442b(1.25, 4.0, team);
        d_69da_d9c4 = (d_69da_ddbb && d_69da_d9de == 0) || (team < 20 && !d_69da_ddbb) ? 14 : 4;
        d_69da_d9d4 = (d_69da_ddbb && d_69da_d9de == 0) || (team < 20 && !d_69da_ddbb) ? 8 : 12;
        d_69da_ddbc = 0;
        d_69da_d9e0 = -1;
        for (d_69da_d9ce = 0; d_69da_d9ce <= 29; d_69da_d9ce++) {
            d_69da_d9ae = -1;
            d_69da_d9e2 = 0;
            if (d_69da_ddbc == 0) {
                if (d_69da_ddbb) {
                    if (d_4512_8000[d_69da_d9de][mode][0][d_69da_d9ce] == -2) {
                        for (d_69da_d9d2 = 0; d_69da_d9d2 <= d_69da_d98e - 1; d_69da_d9d2++) {
                            int k;
                            k = d_28da_2a78[0][18 * 1860 + d_69da_d9d2] / 20;
                            if (sel[d_69da_d9d2] == 0 && k == d_69da_d9de) {
                                d_69da_d9e4 = 0;
                                if (mode == 0)
                                    d_69da_d9e4 = d_3668_0000[1][d_69da_d9d2];
                                else if (mode == 1)
                                    d_69da_d9e4 = d_3668_0000[2][d_69da_d9d2] - d_3668_0000[2][d_69da_d9d2] % 5;
                                else if (mode == 2) {
                                    if (d_3668_0000[0][d_69da_d9d2] > d_69da_d9ba / 2) {
                                        d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
                                        d_69da_d9e4 = (float)d_69da_dfa6[0][d_69da_d9d2] / d_3668_0000[0][d_69da_d9d2] * 1000;
                                    }
                                } else if (mode == 3) {
                                    d_69da_dfba = f_2162_1634(d_69da_dff6, 0);
                                    d_69da_d9e4 = d_69da_dfba[3][d_69da_d9d2];
                                }
                                if (d_69da_d9e4 > d_69da_d9e2) {
                                    d_69da_d9ae = d_69da_d9d2;
                                    d_69da_d9e2 = d_69da_d9e4;
                                }
                            }
                        }
                        d_4512_8000[d_69da_d9de][mode][0][d_69da_d9ce] = d_69da_d9ae;
                        d_4512_8000[d_69da_d9de][mode][1][d_69da_d9ce] = d_69da_d9e2;
                    } else {
                        d_69da_d9ae = d_4512_8000[d_69da_d9de][mode][0][d_69da_d9ce];
                        d_69da_d9e2 = d_4512_8000[d_69da_d9de][mode][1][d_69da_d9ce];
                    }
                } else {
                    for (d_69da_d9a0 = 0; d_69da_d9a0 <= d_4512_023e[team] - 1; d_69da_d9a0++) {
                        d_69da_d9d2 = d_28da_10f0[team][d_69da_d9a0];
                        d_69da_d9e4 = 0;
                        if (sel[d_69da_d9d2] == 0) {
                            if (mode == 0)
                                d_69da_d9e4 = d_3668_0000[13][d_69da_d9d2];
                            else if (mode == 1)
                                d_69da_d9e4 = d_3668_0000[2][d_69da_d9d2] - d_3668_0000[2][d_69da_d9d2] % 5;
                            else if (mode == 2) {
                                if (d_3668_0000[12][d_69da_d9d2] > 0) {
                                    d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
                                    d_69da_d9e4 = (float)d_69da_dfa6[2][d_69da_d9d2] / d_3668_0000[12][d_69da_d9d2] * 1000;
                                }
                            } else if (mode == 3) {
                                d_69da_dfba = f_2162_1634(d_69da_dff6, 0);
                                d_69da_d9e4 = d_69da_dfba[3][d_69da_d9d2];
                            }
                            if (d_69da_d9e4 > d_69da_d9e2) {
                                d_69da_d9ae = d_69da_d9d2;
                                d_69da_d9e2 = d_69da_d9e4;
                            }
                        }
                    }
                }
            }
            d_69da_d9e6 = d_69da_d9d4;
            if (d_69da_d9ae > -1 && (d_69da_d9e2 > 0 && d_69da_ddbb || d_69da_ddbb == 0)) {
                sprintf(d_536d_52ad, " %.17s", f_1a70_4592(d_69da_d9ae));
                if (mode != 2) {
                    if (d_69da_d9e2 > 0)
                        sprintf(d_536d_52fd, " %02d", d_69da_d9e2);
                    else
                        strcpy(d_536d_52fd, " --");
                } else if (d_69da_d9e2 > 0) {
                    d_69da_de49 = d_69da_d9e2 / 1000.0;
                    sprintf(d_536d_52fd, "%4.2f", d_69da_de49);
                    d_536d_52fd[4] = 0;
                } else
                    strcpy(d_536d_52fd, "----");
                sel[d_69da_d9ae] = -1;
                list[d_69da_d9ce] = d_69da_d9ae;
                d_69da_d9e0 = d_69da_d9ce;
                if (d_69da_ddbb && f_1a70_2bc7(d_28da_2a78[0][18 * 1860 + d_69da_d9ae]))
                    d_69da_d9e6 = 3;
            } else {
                strcpy(d_536d_52ad, "");
                strcpy(d_536d_52fd, "");
                d_69da_ddbc = -1;
            }
            if (d_69da_d9ce < 15) {
                d_69da_de4d = 1.125;
                d_69da_de45 = d_69da_d9ce + 7.25;
            } else {
                d_69da_de4d = 20.25;
                d_69da_de45 = d_69da_d9ce - 15 + 7.25;
            }
            sprintf(buf, "%02d", d_69da_d9ce + 1);
            f_1a70_3554(d_69da_de4d, d_69da_de45, 6, 3, 0, buf);
            if (list[d_69da_d9ce] == -1) {
                if (shown == 0 && mode == 0 && d_69da_ddbb == 0 && d_4512_1576[team] > 0) {
                    strcpy(d_536d_52ad, " Own Goals");
                    sprintf(d_536d_52fd, " %02d", d_4512_1576[team]);
                }
                f_1a70_3554(d_69da_de4d + 1.75, d_69da_de45, 6, d_69da_d9e6, 111, d_536d_52ad);
                shown = -1;
            } else {
                int p;
                p = list[d_69da_d9ce];
                f_1a70_4ede(0, d_69da_de4d + 1.75, d_69da_de45, d_3668_0000[7][p] < 255 ? 6 : 1, d_69da_d9e6, 111, d_536d_52ad);
            }
            f_1a70_3554(d_69da_de4d + 15.875, d_69da_de45, 1, 2, 24, d_536d_52fd);
            f_2162_13fc(&d_69da_d9c4, &d_69da_d9d4, 2);
        }
        f_1a70_5e46();
        if (d_69da_ddbb) {
            f_1a70_4ede(2, 8.5, 22.5, 1, 4, 185, "          EXIT");
            f_1a70_4ede(2, 1.25, 22.5, 6, 2, 53, " - DIV");
            f_1a70_4ede(2, 32.25, 22.5, 6, 2, 53, " + DIV");
        } else
            f_1a70_4ede(2, 1.25, 22.5, 1, 4, 301, "                 EXIT");
        do
            d_69da_d992 = f_1a70_53de(d_69da_d9dc);
        while (d_69da_d992 <= 0);
        if (d_69da_d9e0 + 2 > d_69da_d992) {
            d_69da_d9ae = list[d_69da_d992 - 1];
            do {
                f_aac9_42ed(d_69da_d9ae, -1, -1);
                f_9007_4da1(d_69da_d9ae, d_69da_d9e8);
            } while (!d_69da_ddbe);
        } else if (d_69da_d9e0 + 3 == d_69da_d992) {
            d_69da_d9de--;
            if (d_69da_d9de < 0)
                d_69da_d9de = 3;
        } else if (d_69da_d9e0 + 4 == d_69da_d992) {
            d_69da_d9de++;
            if (d_69da_d9de > 3)
                d_69da_d9de = 0;
        } else
            break;
    }
}

void f_7827_1680(int mode)
{
    char used[80];
    int list[21];
    char buf[318];
    unsigned char c;

    d_69da_d9d0 = f_aac9_1b3a();
    do {
        memset(used, 0, 80);
        f_1a70_5e32();
        f_1a70_4a41("");
        sprintf(d_536d_539d, "%s", f_1a70_4983(d_69da_d9d0 + 1, 0));
        if (mode < 2) {
            if (mode == 0) {
                sprintf(buf, "Form Guide %s", d_536d_539d);
                f_1a70_3554(1.125, 1.5, 0, 1, 0x86, buf);
                f_1a70_3554(18.125, 1.5, 1, 8, 0, " HOME ");
                f_1a70_3554(22.875, 1.5, 1, 8, 0, " AWAY ");
            } else {
                sprintf(buf, "Attendance %s", d_536d_539d);
                f_1a70_3554(1.125, 1.5, 0, 1, 0x86, buf);
                f_1a70_3554(18.125, 1.5, 1, 2, 0x4a, " AVERAGE");
            }
            f_1a70_3554(27.625, 1.5, 1, 8 - mode * 6, 0, " LP ");
            f_1a70_3554(30.875, 1.5, 1, 8 - mode * 6, 0, " BOARD %   ");
        } else {
            sprintf(buf, "Job News %s", d_536d_539d);
            f_1a70_3554(1.125, 1.5, 0, 1, 0x86, buf);
            f_1a70_3554(18.125, 1.5, 1, 2, 0x53, " MANAGER");
            f_1a70_3554(28.75, 1.5, 0, 6, 0x53, " JOB");
        }
        d_69da_d9c4 = d_69da_d9d0 == 0 ? 14 : 4;
        d_69da_d9d4 = d_69da_d9d0 == 0 ? 8 : 12;
        d_69da_d9c0 = 6;
        d_69da_d9d2 = 1;
        while (d_69da_d9d2 <= 20) {
            d_69da_d9d8 = -1;
            d_69da_def1 = 0;
            for (d_69da_d9a0 = d_69da_d9d0 * 20; d_69da_d9a0 <= d_69da_d9d0 * 20 + 19; d_69da_d9a0++) {
                d_69da_d9d6 = d_4512_6324[d_69da_d9a0];
                if (used[d_69da_d9d6] == 0) {
                    d_69da_def5 = 0;
                    if (mode == 0) {
                        d_69da_def5 = f_b8da_0904(d_69da_d9d6);
                    } else if (mode == 1) {
                        if (d_4512_138a[d_69da_d9d6] > 0)
                            d_69da_def5 = d_4512_2250[d_69da_d9d6] / d_4512_138a[d_69da_d9d6];
                    } else {
                        d_69da_def5 = 100 - d_4512_01ec[d_69da_d9d6];
                        if (d_4512_13dc[d_69da_d9d6] > 0)
                            d_69da_def5 = 255;
                    }
                    if (d_69da_def5 > d_69da_def1 || d_69da_d9d8 == -1) {
                        d_69da_def1 = d_69da_def5;
                        d_69da_d9f6 = d_69da_d9a0;
                        d_69da_d9d8 = d_69da_d9d6;
                    }
                }
            }
            d_69da_d9da = d_69da_d9d4;
            if (mode < 2) {
                if (f_1a70_2bc7(d_69da_d9d8))
                    d_69da_d9da = 3;
                sprintf(buf, " %02d ", d_69da_d9d2);
                f_1a70_3554(1.125, d_69da_d9c0 + 0.25 - 3.5, 0, 6, 0, buf);
                sprintf(buf, " %.17s", (char far *)d_69da_b1fc[d_69da_d9d8]);
                f_1a70_4ede(0, 4.375, d_69da_d9c0 + 0.25 - 3.5, 1, d_69da_d9da, 0x6c, buf);
                if (mode == 0) {
                    sprintf(buf, " %s", d_536d_83b9[0][d_69da_d9d8]);
                    f_1a70_3554(18.125, d_69da_d9c0 + 0.25 - 3.5, 6, 2, 0x24, buf);
                    sprintf(buf, " %s", d_536d_83b9[1][d_69da_d9d8]);
                    f_1a70_3554(22.875, d_69da_d9c0 + 0.25 - 3.5, 6, 2, 0x24, buf);
                } else {
                    strcpy(buf, "");
                    if (d_69da_def1 > 0)
                        sprintf(buf, "   %ld", d_69da_def1);
                    f_1a70_3554(18.125, d_69da_d9c0 + 0.25 - 3.5, 1,
                                d_69da_d9d4 == 8 || d_69da_d9d4 == 14 ? 4 : 14, 0x4a, buf);
                }
                sprintf(buf, " %02d ", d_69da_d9f6 + 1 - d_69da_d9d0 * 20);
                f_1a70_3554(27.625, d_69da_d9c0 + 0.25 - 3.5, 1, 9, 0, buf);
                sprintf(d_536d_548d, "%d%%", d_4512_01ec[d_69da_d9d8]);
                sprintf(buf, "    %s", d_536d_548d);
                f_1a70_3554(30.875, d_69da_d9c0 + 0.25 - 3.5, 6, 3, 0x42, buf);
            } else {
                if (f_1a70_2bc7(d_69da_d9d8))
                    d_69da_d9da = 3;
                sprintf(buf, " %.21s", (char far *)d_69da_b1fc[d_69da_d9d8]);
                f_1a70_4ede(0, 1.125, d_69da_d9c0 - 3.25, 1, d_69da_d9da, 0x86, buf);
                if (d_4512_13dc[d_69da_d9d8] > 0) {
                    strcpy(d_536d_823d, "");
                    strcpy(d_536d_828d, "Available");
                } else {
                    strcpy(d_536d_823d, f_1a70_4793(d_4512_1a30[d_69da_d9d8], -1));
                    c = d_4512_01ec[d_69da_d9d8];
                    if (c <= 29)
                        strcpy(d_536d_828d, "Under threat");
                    else if (c <= 39)
                        strcpy(d_536d_828d, "Insecure");
                    else
                        strcpy(d_536d_828d, "Safe");
                }
                sprintf(buf, " %s", d_536d_823d);
                f_1a70_3554(18.125, d_69da_d9c0 - 3.25, 1, 9, 0x53, buf);
                sprintf(buf, " %s", d_536d_828d);
                f_1a70_3554(28.75, d_69da_d9c0 - 3.25, d_536d_823d[0] != 0 ? 1 : 15,
                            d_4512_13dc[d_69da_d9d8] > 0 ? 1 : 3, 0x53, buf);
            }
            d_69da_d9c0++;
            f_2162_13fc(&d_69da_d9c4, &d_69da_d9d4, 2);
            used[d_69da_d9d8] = -1;
            list[d_69da_d9d2] = d_69da_d9d8;
            d_69da_d9d2++;
        }
        f_1a70_5e46();
        f_1a70_4ede(2, 1.25, 23.0, 6, 2, 0x35, " - DIV");
        f_1a70_4ede(2, 32.25, 23.0, 6, 2, 0x35, " + DIV");
        f_1a70_4ede(2, 8.5, 23.0, 1, 4, 0xb9, "          EXIT");
        do
            d_69da_d992 = f_1a70_53de(d_69da_d9dc);
        while (d_69da_d992 <= 0);
        if (d_69da_d992 >= 1 && d_69da_d992 <= 20) {
            if (f_1a70_2bc7(d_69da_d9d6 = list[d_69da_d992])) {
                f_7dd6_2dcf(d_69da_d9d6);
                d_69da_d9d6; /* keeps this copy of the shared pop */
            } else
                f_7827_4b4d(d_69da_d9d6);
        } else if (d_69da_d992 == 21) {
            d_69da_d9d0--;
            if (d_69da_d9d0 < 0)
                d_69da_d9d0 = 3;
        } else if (d_69da_d992 == 22) {
            d_69da_d9d0++;
            if (d_69da_d9d0 > 3)
                d_69da_d9d0 = 0;
        } else if (d_69da_d992 == 23)
            d_69da_d9d0 = -1;
    } while (d_69da_d9d0 != -1);
}

/* the managers' points table of a division */
void f_7827_1f64(void)
{
    char used[80];
    char buf[320];

    d_69da_d9de = f_aac9_1b3a();
    do {
        memset(used, 0, 80);
        f_1a70_5e32();
        f_1a70_4a41("");
        sprintf(buf, "Manager Pts %s", f_1a70_4983(d_69da_d9de + 1, 0));
        f_1a70_3554(1.125, 1.5, 0, 1, 0x88, buf);
        f_1a70_3554(18.375, 1.5, 1, 4, 0x6e, " CLUB");
        f_1a70_3554(32.375, 1.5, 1, 4, 0x36, " PTS");
        d_69da_d9c0 = 6;
        d_69da_d9c4 = d_69da_d9de == 0 ? 8 : 2;
        d_69da_d9d4 = d_69da_d9de == 0 ? 14 : 9;
        for (d_69da_d9d2 = 1; d_69da_d9d2 <= 20; d_69da_d9d2++) {
            d_69da_def1 = 0;
            for (d_69da_d9d6 = d_69da_d9de * 20; d_69da_d9d6 <= d_69da_d9de * 20 + 19;
                 d_69da_d9d6++) {
                if (used[d_69da_d9d6] == 0) {
                    d_69da_df9e = f_2162_1634(d_69da_dfe8, 0);
                    d_69da_def9 = d_69da_df9e[d_4512_1a30[d_69da_d9d6]];
                    if (d_69da_def9 >= d_69da_def1) {
                        d_69da_def1 = d_69da_def9;
                        d_69da_d9d8 = d_69da_d9d6;
                    }
                }
            }
            if (f_1a70_2bc7(d_69da_d9d8))
                d_69da_d9da = 12;
            else
                d_69da_d9da = d_69da_d9d4;
            sprintf(buf, " %02d ", d_69da_d9d2);
            f_1a70_3554(1.125, d_69da_d9c0 + 0.25 - 3.5, 1, 4, 0, buf);
            sprintf(buf, " %s", f_1a70_4793(d_4512_1a30[d_69da_d9d8], 0));
            f_1a70_3554(4.375, d_69da_d9c0 + 0.25 - 3.5, 1, d_69da_d9da, 0x6e, buf);
            sprintf(buf, " %.17s", (char far *)d_69da_b1fc[d_69da_d9d8]);
            f_1a70_3554(18.375, d_69da_d9c0 + 0.25 - 3.5, 1, 3, 0x6e, buf);
            sprintf(buf, " %06ld", d_69da_def1);
            f_1a70_3554(32.375, d_69da_d9c0 + 0.25 - 3.5, 2, 6, 0x36, buf);
            d_69da_d9c0++;
            f_2162_13fc(&d_69da_d9c4, &d_69da_d9d4, 2);
            used[d_69da_d9d8] = -1;
        }
        f_1a70_5e46();
        f_1a70_4ede(2, 1.25, 23.0, 6, 2, 0x35, " - DIV");
        f_1a70_4ede(2, 32.25, 23.0, 6, 2, 0x35, " + DIV");
        f_1a70_4ede(2, 8.5, 23.0, 1, 4, 0xb9, "          EXIT");
        do
            d_69da_d992 = f_1a70_53de(d_69da_d9dc);
        while (d_69da_d992 <= 0);
        if (d_69da_d992 == 1) {
            d_69da_d9de--;
            if (d_69da_d9de < 0)
                d_69da_d9de = 3;
        } else if (d_69da_d992 == 2) {
            d_69da_d9de++;
            if (d_69da_d9de > 3)
                d_69da_d9de = 0;
        } else
            d_69da_d9de = -1;
    } while (d_69da_d9de != -1);
}

/* the manager rankings: by reputation (mode 0) or by salary (mode 1) */
void f_7827_233d(char mode)
{
    int i;
    int max = 0;
    int sal;
    char used[650];
    int order[80];
    char buf[320];

    memset(used, 0, 650);
    d_69da_d9ec = 1;
    d_69da_ddbf = 0;
    for (i = 0; i <= 79; i++) {
        d_69da_d9f0 = -1;
        for (d_69da_d9d6 = 0; d_69da_d9d6 <= 79; d_69da_d9d6++) {
            d_69da_d9ee = d_4512_1a30[d_69da_d9d6];
            if (used[d_69da_d9ee] == 0) {
                if (mode == 0) {
                    d_69da_d9f2 = d_4512_3042[d_69da_d9ee];
                    if (d_4512_261a[d_69da_d9ee] == 35)
                        d_69da_d9f2 = 0;
                    if (d_69da_d9f2 > d_69da_d9e0 || d_69da_d9f0 == -1) {
                        d_69da_d9f0 = d_69da_d9ee;
                        d_69da_d9e0 = d_69da_d9f2;
                    }
                } else if (mode == 1) {
                    d_69da_dfa2 = f_2162_1634(d_69da_dfea, 0);
                    sal = d_69da_dfa2[d_69da_d9ee];
                    if (sal > max || d_69da_d9f0 == -1) {
                        d_69da_d9f0 = d_69da_d9ee;
                        max = sal;
                    }
                }
            }
        }
        order[i] = d_69da_d9f0;
        if (d_69da_d9f0 != -1) {
            used[d_69da_d9f0] = -1;
            if (d_69da_d9f0 >= 646 && d_69da_ddbf == 0) {
                d_69da_d9ec = i / 20 + 1;
                d_69da_ddbf = -1;
            }
        }
    }
    do {
        d_69da_d9f4 = (d_69da_d9ec - 1) * 20;
        f_1a70_5e32();
        f_1a70_4a41("");
        f_1a70_3554(1.125, 1.5, 0, 1, 0x88, "Manager Rankings");
        f_1a70_3554(18.375, 1.5, 1, 4, 0x6e, " CLUB");
        f_1a70_3554(32.375, 1.5, 1, 4, 0x36, mode == 0 ? " REP" : " SALARY");
        d_69da_d9c0 = 6;
        d_69da_d9c4 = 14;
        d_69da_d9d4 = 8;
        for (d_69da_d9d2 = 1; d_69da_d9d2 <= 20; d_69da_d9d2++) {
            d_69da_d9ce = d_69da_d9d2 + d_69da_d9f4;
            d_69da_d9f0 = order[d_69da_d9ce - 1];
            if (d_69da_d9f0 == -1)
                continue;
            if (d_69da_d9f0 >= 646)
                d_69da_d9da = 9;
            else
                d_69da_d9da = d_69da_d9d4;
            if (d_69da_d9ce < 100)
                sprintf(buf, " %02d ", d_69da_d9ce);
            else
                strcpy(buf, "100 ");
            f_1a70_3554(1.125, d_69da_d9c0 + 0.25 - 3.5, 1, 12, 0, buf);
            sprintf(buf, " %s", f_1a70_4793(d_69da_d9f0, 0));
            f_1a70_3554(4.375, d_69da_d9c0 + 0.25 - 3.5, 1, d_69da_d9da, 0x6e, buf);
            d_69da_d9d8 = d_4512_2390[d_69da_d9f0];
            sprintf(buf, " %.17s", (char far *)d_69da_b1fc[d_69da_d9d8]);
            f_1a70_3554(18.375, d_69da_d9c0 + 0.25 - 3.5, 1, 2, 0x6e, buf);
            if (mode == 0)
                sprintf(buf, " %s", f_9c01_12e0(d_69da_d9f0, 0));
            else {
                d_69da_dfa2 = f_2162_1634(d_69da_dfea, 0);
                sprintf(buf, " %dK", d_69da_dfa2[d_69da_d9f0]);
            }
            f_1a70_3554(32.375, d_69da_d9c0 + 0.25 - 3.5, 1, 3, 0x36, buf);
            d_69da_d9c0++;
            f_2162_13fc(&d_69da_d9c4, &d_69da_d9d4, 2);
        }
        f_1a70_5e46();
        f_1a70_4ede(2, 1.25, 23.0, 6, 2, 0x35, " - SCR");
        f_1a70_4ede(2, 32.25, 23.0, 6, 2, 0x35, " + SCR");
        f_1a70_4ede(2, 8.5, 23.0, 1, 4, 0xb9, "          EXIT");
        do
            d_69da_d992 = f_1a70_53de(d_69da_d9dc);
        while (d_69da_d992 <= 0);
        if (d_69da_d992 == 1) {
            d_69da_d9ec--;
            if (d_69da_d9ec < 1)
                d_69da_d9ec = 4;
        } else if (d_69da_d992 == 2) {
            d_69da_d9ec++;
            if (d_69da_d9ec > 4)
                d_69da_d9ec = 1;
        } else
            d_69da_d9ec = -1;
    } while (d_69da_d9ec != -1);
}

/* the hall of fame, and its second page (" II"): the button toggles between them */
void f_7827_2804(void)
{
    unsigned char second = 0;
    char buf[320];

    do {
        f_1a70_5e32();
        f_1a70_4a41("");
        sprintf(buf, "Hall of Fame%s", second == 0 ? "" : " II");
        f_1a70_3554(1.125, 1.5, 0, 1, 0x88, buf);
        f_1a70_3554(18.375, 1.5, 1, 4, 0x6e, " CLUB");
        f_1a70_3554(32.375, 1.5, 1, 4, 0x36, " PTS");
        d_69da_d9c0 = 6;
        d_69da_d9c4 = 14;
        d_69da_d9d4 = 8;
        for (d_69da_d9d2 = 1; d_69da_d9d2 <= 20; d_69da_d9d2++) {
            sprintf(buf, " %02d ", d_69da_d9d2);
            f_1a70_3554(1.125, d_69da_d9c0 + 0.25 - 3.5, 1, 2, 0, buf);
            d_69da_dfca = f_2162_1634(d_69da_dffe, 0);
            sprintf(buf, " %.17s", d_69da_dfca + (d_69da_d9d2 - 1) * 160 + second * 80);
            f_1a70_3554(4.375, d_69da_d9c0 + 0.25 - 3.5, 1, d_69da_d9d4, 0x6e, buf);
            d_69da_dfca = f_2162_1634(d_69da_dffe, 0);
            sprintf(buf, " %.17s", d_69da_dfca + (d_69da_d9d2 - 1) * 160 + second * 80 + 3200);
            f_1a70_3554(18.375, d_69da_d9c0 + 0.25 - 3.5, 0, 6, 0x6e, buf);
            sprintf(buf, " %6ld", d_4512_7274[d_69da_d9d2][second]);
            f_1a70_3554(32.375, d_69da_d9c0 + 0.25 - 3.5, 1, 9, 0x36, buf);
            d_69da_d9c0++;
            f_2162_13fc(&d_69da_d9c4, &d_69da_d9d4, 2);
        }
        f_1a70_5e46();
        f_1a70_4ede(2, 1.25, 23.0, 1, 4, 0xe0, "           EXIT");
        f_1a70_4ede(2, 29.875, 23.0, 1, 12, 0x48, second == 0 ? "   2ND" : "   1ST");
        do
            d_69da_d992 = f_1a70_53de(d_69da_d9dc);
        while (d_69da_d992 <= 0);
        if (d_69da_d992 == 2)
            second = second == 0 ? 1 : 0;
    } while (d_69da_d992 == 2);
}

/* the monthly or yearly awards: managers of each division, senior and young players */
void f_7827_2b1c(char year)
{
    int club;
    char buf[320];

    if (d_69da_de3f) {
        if (year) {
            strcpy(d_536d_552d, "");
            strcpy(d_536d_557d, "Year");
        } else {
            strcpy(d_536d_552d, " ");
            strcpy(d_536d_557d, "Month");
        }
        sprintf(buf, "%sly Awards", d_536d_557d);
        f_1a70_5e32();
        f_1a70_4a41(buf);
        sprintf(buf, " MANAGER OF THE %s", d_536d_557d);
        f_1a70_3554(1.125, 4.0, 0, 1, 178, buf);
        f_1a70_3554(23.625, 4.0, 0, 6, 36, " PTS");
        f_1a70_3554(28.375, 4.0, 0, 6, 86, " CLUB");
        for (d_69da_d9f8 = 0; d_69da_d9f8 <= 3; d_69da_d9f8++) {
            sprintf(buf, " %s", f_1a70_4983(d_69da_d9f8 + 1, 0));
            f_1a70_3554(1.125, d_69da_d9f8 + 5.25, 1, d_69da_d9f8 & 1 ? 8 : 14, 86, buf);
            if (d_4512_a04c[d_69da_d9f8] != -1) {
                sprintf(buf, " %s", f_1a70_4793(d_4512_a04c[d_69da_d9f8], -1));
                f_1a70_3554(12.125, d_69da_d9f8 + 5.25, 1, d_4512_a04c[d_69da_d9f8] >= 646 ? 3 : 12, 90, buf);
                sprintf(buf, "%s%ld", d_536d_552d, d_4512_a054[d_69da_d9f8]);
                f_1a70_3554(23.625, d_69da_d9f8 + 5.25, 1, 9, 36, buf);
                sprintf(buf, " %.13s", (char far *)d_69da_b1fc[d_4512_2390[d_4512_a04c[d_69da_d9f8]]]);
                f_1a70_3554(28.375, d_69da_d9f8 + 5.25, 1, 2, 86, buf);
            } else {
                f_1a70_3554(12.125, d_69da_d9f8 + 5.25, 1, 12, 90, "");
                f_1a70_3554(23.625, d_69da_d9f8 + 5.25, 1, 9, 36, "");
                f_1a70_3554(28.375, d_69da_d9f8 + 5.25, 1, 2, 86, "");
            }
        }
        sprintf(buf, " SENIOR PLAYER OF THE %s", d_536d_557d);
        f_1a70_3554(1.125, 10.0, 0, 1, 178, buf);
        f_1a70_3554(23.625, 10.0, 0, 6, 36, " AV R");
        f_1a70_3554(28.375, 10.0, 0, 6, 86, " CLUB");
        sprintf(buf, " YOUNG PLAYER OF THE %s", d_536d_557d);
        f_1a70_3554(1.125, 16.0, 0, 1, 178, buf);
        f_1a70_3554(23.625, 16.0, 0, 6, 36, " AV R");
        f_1a70_3554(28.375, 16.0, 0, 6, 86, " CLUB");
        for (d_69da_d9fc = 0; d_69da_d9fc <= 1; d_69da_d9fc++) {
            d_69da_de51 = d_69da_d9fc * 6 + 11.25;
            for (d_69da_d9fa = 0; d_69da_d9fa <= 3; d_69da_d9fa++) {
                d_69da_d9ae = d_4512_a01c[d_69da_d9fc][d_69da_d9fa];
                if (d_69da_d9ae != -1) {
                    sprintf(buf, " %s", f_1a70_4983(d_69da_d9fa + 1, 0));
                    f_1a70_3554(1.125, d_69da_d9fa + d_69da_de51, 1, d_69da_d9fa & 1 ? 8 : 14, 86, buf);
                    sprintf(buf, " %.14s", f_1a70_46c1(d_69da_d9ae));
                    f_1a70_3554(12.125, d_69da_d9fa + d_69da_de51, 1, f_1a70_2bc7(d_28da_ad40[d_69da_d9ae]) ? 3 : 12, 90, buf);
                    sprintf(d_536d_55eb, "%4.2f", d_4512_a02c[d_69da_d9fc][d_69da_d9fa]);
                    sprintf(buf, " %s", d_536d_55eb);
                    f_1a70_3554(23.625, d_69da_d9fa + d_69da_de51, 1, 9, 36, buf);
                    club = d_3668_32dc[d_69da_d9ae] < 255 ? d_3668_32dc[d_69da_d9ae] : d_28da_2a78[0][18 * 1860 + d_69da_d9ae];
                    sprintf(buf, " %.13s", (char far *)d_69da_b1fc[club]);
                    f_1a70_3554(28.375, d_69da_d9fa + d_69da_de51, 1, 2, 86, buf);
                } else {
                    f_1a70_3554(1.125, d_69da_d9fa + d_69da_de51, 1, d_69da_d9fa & 1 ? 8 : 14, 86, "");
                    f_1a70_3554(12.125, d_69da_d9fa + d_69da_de51, 1, 12, 90, "");
                    f_1a70_3554(23.625, d_69da_d9fa + d_69da_de51, 1, 9, 36, "");
                    f_1a70_3554(28.375, d_69da_d9fa + d_69da_de51, 1, 2, 86, "");
                }
            }
        }
        f_1a70_5e46();
        f_1a70_4ede(2, 1.25, 22.5, 1, 4, 301, "                 DONE");
        do {
            d_69da_d992 = f_1a70_53de(d_69da_d9dc);
        } while (d_69da_d992 <= 0);
    } else
        f_1a70_0b80("No awards yet this season");
}

void f_7827_3250(void)
{
    if (d_69da_d996 < 16)
        f_1a70_0b80("National squads not chosen");
    else
        f_7827_3273();
}

/* the national squads: senior and U-21 */
void f_7827_3273(void)
{
    unsigned char nation[5] = {0, 25, 9, 10, 32};
    int club;
    char buf[320];

    do {
        f_1a70_2eaa(0, "International Squads", "*Exit|England|Scotland|Ireland|N.Ireland|Wales|England U-21|Scotland U-21|Ireland U-21|N.Ireland U-21|Wales U-21|");
        d_69da_d9fe = d_69da_d992;
        if (d_69da_d9fe > 0) {
            d_69da_da00 = 0;
            strcpy(d_536d_563b, "");
            if (d_69da_d9fe > 5) {
                d_69da_da00 = 1;
                strcpy(d_536d_563b, "U-21 ");
                d_69da_d9fe -= 5;
            }
            do {
                f_1a70_5e32();
                f_1a70_4a41("International squad");
                switch (d_69da_d9fe) {
                case 1:
                    d_69da_d9ea = 65;
                    break;
                case 2:
                    d_69da_d9ea = 20;
                    break;
                case 3:
                case 4:
                    d_69da_d9ea = 19;
                    break;
                case 5:
                    d_69da_d9ea = 18;
                    break;
                }
                sprintf(buf, " %s %s", d_5dbf_0000[nation[d_69da_d9fe - 1]], d_536d_563b);
                f_1a70_3d0c(1.25, 4.0, d_69da_d9ea / 16, d_69da_d9ea % 16, 0, buf);
                f_1a70_3554(1.125, 7.0, 1, 2, 76, " NAME");
                f_1a70_3554(10.875, 7.0, 1, 2, 73, " CLUB");
                f_1a70_3554(20.25, 7.0, 1, 2, 76, " NAME");
                f_1a70_3554(30.0, 7.0, 1, 2, 73, " CLUB");
                f_1a70_5e46();
                f_1a70_4e4b();
                f_1a70_4ede(2, 1.25, 22.5, 1, 4, 301, "                 EXIT");
                f_1a70_5e32();
                for (d_69da_da02 = 0; d_69da_da02 <= 21; d_69da_da02++) {
                    d_69da_da04 = d_28c7_0000[d_69da_da02];
                    d_69da_de4d = d_69da_da02 > 10 ? 20.25 : 1.125;
                    d_69da_de45 = d_69da_da02 > 10 ? d_69da_da02 - 2 : d_69da_da02 + 9;
                    d_69da_d9ea = d_69da_da02 & 1 ? 8 : 14;
                    d_69da_d9ae = d_4512_9e64[d_69da_d9fe - 1][d_69da_da00][d_69da_da02];
                    if (d_69da_d9ae > -1) {
                        strcpy(d_536d_568b, f_1a70_4739(d_69da_d9ae));
                        if (f_1a70_6d23(d_69da_d9ae))
                            sprintf(d_536d_56db, "<%s>", d_5dbf_0000[(int)d_28da_2a78[0][18 * 1860 + d_69da_d9ae] - 140]);
                        else {
                            club = d_3668_32dc[d_69da_d9ae] < 255 ? d_3668_32dc[d_69da_d9ae] : d_28da_2a78[0][18 * 1860 + d_69da_d9ae];
                            strcpy(d_536d_56db, (char far *)d_69da_b1fc[club]);
                        }
                        if (f_1a70_2bc7(d_28da_2a78[0][18 * 1860 + d_69da_d9ae]))
                            d_69da_d9ea = 3;
                    } else {
                        strcpy(d_536d_568b, d_5dbf_0565[d_69da_da04]);
                        switch (d_69da_d9fe) {
                        case 1:
                        case 5:
                            strcpy(d_536d_56db, "Non-lge");
                            break;
                        case 2:
                            strcpy(d_536d_56db, "Scots-lge");
                            break;
                        case 3:
                        case 4:
                            strcpy(d_536d_56db, "Irish-lge");
                            break;
                        }
                    }
                    sprintf(buf, " %.11s", d_536d_568b);
                    f_1a70_4ede(0, d_69da_de4d, d_69da_de45, 1, d_69da_d9ea, 76, buf);
                    sprintf(buf, " %.11s", d_536d_56db);
                    f_1a70_3554(d_69da_de4d + 9.75, d_69da_de45, 1, 4, 73, buf);
                }
                f_1a70_5e46();
                do {
                    d_69da_d992 = f_1a70_53de(d_69da_d9dc);
                } while (d_69da_d992 <= 0);
                if (d_69da_d992 > 1) {
                    d_69da_d9ae = d_4512_9e64[d_69da_d9fe - 1][d_69da_da00][d_69da_d992 - 2];
                    if (d_69da_d9ae > -1) {
                        do {
                            f_aac9_42ed(d_69da_d9ae, -1, -1);
                            f_9007_4da1(d_69da_d9ae, d_69da_d9e8);
                        } while (!d_69da_ddbe);
                    } else
                        f_1a70_0b80("No information available");
                }
            } while (d_69da_d992 != 1);
        }
    } while (d_69da_d9fe != 0);
}

void f_7827_372d(void)
{
    char buf[300];
    register char found;

    do {
        f_1a70_4a41("Fixture Info");
        f_1a70_2eaa(0, "", "*Exit|Last Results|Next Fixtures|Next FA Cup|Next Coca-Cola|Next Anglo-Ital|Next UEFA|Next Cup Winners|Next European|Next Playoffs|Group Tables|Euro Seedings|Past Winners|");
        f_1a70_3226(12);
        d_69da_da06 = d_69da_d992;
        if (d_69da_da06 == 1) {
            found = 0;
            if (d_69da_d996 > 1) {
                for (d_69da_da08 = d_69da_d996 - 1; d_69da_da08 >= 1; d_69da_da08--) {
                    if (d_28da_2332[d_69da_da08] > 0) {
                        f_7dd6_11a0(d_69da_da08, 1, -1);
                        found = 1;
                        d_69da_da08 = 1;
                    }
                }
            }
            if (found == 0)
                f_1a70_0b80("No matches last week");
        } else if (d_69da_da06 == 2) {
            if (d_69da_d996 <= 98) {
                for (d_69da_da08 = d_69da_d996; !f_1a70_2b1e(d_69da_da08); d_69da_da08++)
                    ;
                f_7dd6_11a0(d_69da_da08, 0, -1);
            } else
                f_1a70_0b80("The season is over");
        } else if (d_69da_da06 == 3) {
            if (d_69da_d9b2 > -1) {
                if (d_69da_d9b2 > 0)
                    f_7dd6_11a0(d_69da_d9b2, f_1a70_29fa(d_69da_d9b2) || d_69da_d9b2 == 92 ? 0 : 2, 1);
                else
                    f_7827_3aa2();
            } else {
                sprintf(buf, "%s won the FA Cup", f_1a70_3404(d_4512_5e24[1][0]));
                f_1a70_0b80(buf);
            }
        } else if (d_69da_da06 == 4) {
            if (d_69da_d9b0 > -1) {
                if (d_69da_d9b0 > 0)
                    f_7dd6_11a0(d_69da_d9b0, f_1a70_2950(d_69da_d9b0) || f_1a70_29fa(d_69da_d9b0) || d_69da_d9b0 == 82 ? 0 : 2, 2);
                else
                    f_7827_3aa2();
            } else {
                sprintf(buf, "%s won the Coca-Cola Cup", f_1a70_3404(d_4512_5e24[2][0]));
                f_1a70_0b80(buf);
            }
        } else if (d_69da_da06 == 5) {
            if (d_69da_da0a > -1) {
                if (d_69da_da0a > 0)
                    f_7dd6_11a0(d_69da_da0a, d_69da_da0a == 69 ? 2 : 0, 3);
                else
                    f_7827_3aa2();
            } else {
                sprintf(buf, "%s won the Anglo-Italian Cup", f_1a70_3404(d_4512_5e24[3][0]));
                f_1a70_0b80(buf);
            }
        } else if (d_69da_da06 == 6) {
            if (d_69da_d9b4 > -1) {
                if (d_69da_d9b4 > 0)
                    f_7dd6_11a0(d_69da_d9b4, f_1a70_2950(d_69da_d9b4) ? 0 : 2, 4);
                else
                    f_7827_3aa2();
            } else {
                sprintf(buf, "%s won the UEFA Cup", f_1a70_3404(d_4512_5e24[4][0]));
                f_1a70_0b80(buf);
            }
        } else if (d_69da_da06 == 7) {
            if (d_69da_d9b6 > -1) {
                if (d_69da_d9b6 > 0)
                    f_7dd6_11a0(d_69da_d9b6, f_1a70_2950(d_69da_d9b6) || d_69da_d9b6 == 91 ? 0 : 2, 5);
                else
                    f_7827_3aa2();
            } else {
                sprintf(buf, "%s won the Cup Winners Cup", f_1a70_3404(d_4512_5e24[5][0]));
                f_1a70_0b80(buf);
            }
        } else if (d_69da_da06 == 8) {
            if (d_69da_d9b8 > -1) {
                if (d_69da_d9b8 > 0)
                    f_7dd6_11a0(d_69da_d9b8, d_69da_d9b8 == 29 || d_69da_d9b8 == 47 ? 2 : 0, 6);
                else
                    f_7827_3aa2();
            } else {
                sprintf(buf, "%s won the European Cup", f_1a70_3404(d_4512_5e24[6][0]));
                f_1a70_0b80(buf);
            }
        } else if (d_69da_da06 == 9) {
            switch (d_69da_d996) {
            case 91: case 92: case 93: case 94:
                f_7dd6_11a0(94, 0, 7);
                break;
            case 95: case 96:
                f_7dd6_11a0(96, 0, 7);
                break;
            case 97: case 98:
                f_7dd6_11a0(98, 0, 7);
                break;
            default:
                if (d_69da_d996 <= 90)
                    f_1a70_0b80("Playoffs not yet decided");
                else
                    f_1a70_0b80("Playoffs have finished");
            }
        } else if (d_69da_da06 == 10)
            f_7827_0d1c();
        else if (d_69da_da06 == 11)
            f_7827_3ab7();
        else if (d_69da_da06 == 12)
            f_9c01_6142();
    } while (d_69da_da06 != 0);
}

void f_7827_3aa2(void)
{
    f_1a70_0b80("Draw not yet made");
}

void f_7827_3ab7(void)
{
    char done[540];
    char buf[320];

    memset(done, 0, 540);
    f_1a70_5e32();
    f_1a70_4a41("European Seedings");
    for (d_69da_da0c = 4; d_69da_da0c <= 6; d_69da_da0c++) {
        if (d_69da_da0c == 4)
            strcpy(d_536d_572b, "UEFA CUP");
        else if (d_69da_da0c == 5)
            strcpy(d_536d_572b, "CUP WINNERS CUP");
        else
            strcpy(d_536d_572b, "EUROPEAN CUP");
        sprintf(buf, " %s", d_536d_572b);
        f_1a70_3554(1.125, (d_69da_da0c - 4) * 6.25 + 4.0, 0, 1, 0x130, buf);
        for (d_69da_da0e = 1; d_69da_da0e <= 8; d_69da_da0e++) {
            for (d_69da_d9d6 = 0; d_69da_d9d6 <= 539; d_69da_d9d6++) {
                if (d_4512_9a18[d_69da_d9d6] == d_69da_da0c && done[d_69da_d9d6] == 0) {
                    d_69da_de4d = d_69da_da0e > 4 ? 20.25 : 1.125;
                    d_69da_de45 = (d_69da_da0c - 4) * 6.25 + 5.25 + d_69da_da0e - 1 - (d_69da_da0e > 4 ? 4 : 0);
                    sprintf(buf, " %.12s", f_1a70_3404(d_69da_d9d6));
                    buf[13] = 0;
                    if (f_1a70_2bc7(d_69da_d9d6))
                        d_69da_d9d4 = 3;
                    else
                        d_69da_d9d4 = d_69da_da0e & 1 ? 8 : 14;
                    f_1a70_3554(d_69da_de4d, d_69da_de45, d_69da_d9d6 < 80 ? 6 : 1, d_69da_d9d4, 0x59, buf);
                    if (d_69da_d9d6 < 80)
                        strcpy(buf, " ENGLAND");
                    else {
                        sprintf(buf, " %s", d_5dbf_0000[d_5dbf_1076[d_69da_d9d6]]);
                        buf[9] = 0;
                    }
                    f_1a70_3554(d_69da_de4d + 11.375, d_69da_de45, 1, 2, 0x3c, buf);
                    done[d_69da_d9d6] = -1;
                    d_69da_d9d6 = 539;
                }
            }
        }
    }
    f_1a70_5e46();
    f_1a70_4ede(2, 1.25, 22.5, 1, 4, 0x12d, "                 DONE");
    do
        d_69da_d992 = f_1a70_53de(d_69da_d9dc);
    while (d_69da_d992 <= 0);
}

void f_7827_3d89(void)
{
    f_1a70_5e32();
    f_1a70_4a41("European Cup");
    f_7827_40a7(6, 0, 4, " Group A", 4.0);
    f_7827_40a7(6, 1, 4, " Group B", 11.375);
    f_1a70_5e46();
    f_1a70_4ede(2, 1.25, 22.5, 1, 4, 0x12d, "                 DONE");
    do
        d_69da_d992 = f_1a70_53de(d_69da_d9dc);
    while (d_69da_d992 <= 0);
}

void f_7827_3e09(void)
{
    unsigned char groups, size;
    char buf[320];

    groups = d_69da_d996 <= 37 ? 6 : 4;
    size = d_69da_d996 <= 37 ? 3 : 4;
    d_69da_da10 = 0;
    for (d_69da_da12 = 0; d_69da_da12 <= groups - 1; d_69da_da12++)
        for (d_69da_d9a0 = 0; d_69da_d9a0 <= size - 1; d_69da_d9a0++)
            if (f_1a70_2bc7(d_4512_a0a4[d_69da_da12][d_69da_d9a0])) {
                d_69da_da10 = d_69da_d996 <= 37 ? d_69da_da12 / 3 : d_69da_da12 / 2;
                d_69da_d9a0 = size - 1;
                d_69da_da12 = groups - 1;
            }
    do {
        f_1a70_5e32();
        f_1a70_4a41("Anglo-Italian Cup");
        if (d_69da_d996 <= 37) {
            sprintf(buf, " Group %c", d_69da_da10 * 3 + 'A');
            f_7827_40a7(3, d_69da_da10 * 3, size, buf, 4.0);
            sprintf(buf, " Group %c", d_69da_da10 * 3 + 'B');
            f_7827_40a7(3, d_69da_da10 * 3 + 1, size, buf, 10.0);
            sprintf(buf, " Group %c", d_69da_da10 * 3 + 'C');
            f_7827_40a7(3, d_69da_da10 * 3 + 2, size, buf, 16.0);
        } else {
            sprintf(buf, " English Group %c", d_69da_da10 + 'A');
            f_7827_40a7(3, d_69da_da10 * 2, size, buf, 4.0);
            sprintf(buf, " Italian Group %c", d_69da_da10 + 'A');
            f_7827_40a7(3, d_69da_da10 * 2 + 1, size, buf, 11.375);
        }
        f_1a70_5e46();
        f_1a70_4ede(2, 1.25, 22.5, 6, 2, 0x35, " - GRP");
        f_1a70_4ede(2, 32.25, 22.5, 6, 2, 0x35, " + GRP");
        f_1a70_4ede(2, 8.5, 22.5, 1, 4, 0xb9, "          EXIT");
        do
            d_69da_d992 = f_1a70_53de(d_69da_d9dc);
        while (d_69da_d992 <= 0);
        if (d_69da_d992 == 1) {
            if (d_69da_da10 == 0)
                d_69da_da10 = 1;
            else
                d_69da_da10--;
        } else if (d_69da_d992 == 2) {
            if (d_69da_da10 == 1)
                d_69da_da10 = 0;
            else
                d_69da_da10++;
        }
    } while (d_69da_d992 != 3);
}

/* the group table's column headings */
static char far *d_69da_05e6[] = {
    " P ", " W ", " D ", " L ", " F ", " A ", "PTS"
};

void f_7827_40a7(int a, int b, unsigned char n, char far *title, float x)
{
    float y;
    float ys[7];
    char buf[320];

    f_1a70_3554(1.125, x, 0, 1, 0x130, title);
    f_1a70_3554(1.125, x + 1.125, 1, 12, 0x50, " Team");
    for (d_69da_d9d2 = 0, y = 11.375; d_69da_d9d2 <= 6; d_69da_d9d2++, y += 4.0) {
        ys[d_69da_d9d2] = y;
        sprintf(buf, " %s ", d_69da_05e6[d_69da_d9d2]);
        f_1a70_3554(ys[d_69da_d9d2], x + 1.125, 1, 2, 0, buf);
    }
    for (d_69da_d9ce = 0; d_69da_d9ce <= n - 1; d_69da_d9ce++) {
        if (a == 6)
            d_69da_d9d6 = d_4512_a064[b][d_69da_d9ce];
        else
            d_69da_d9d6 = d_4512_a0a4[b][d_69da_d9ce];
        if (f_1a70_2bc7(d_69da_d9d6))
            d_69da_d9ea = 3;
        else
            d_69da_d9ea = d_69da_d9ce & 1 ? 14 : 8;
        sprintf(buf, " %s", f_1a70_3404(d_69da_d9d6));
        f_1a70_3554(1.125, x + 2.375 + d_69da_d9ce, a == 6 && d_69da_d9d6 < 80 ? 6 : 1, d_69da_d9ea, 0x50, buf);
        for (d_69da_d9d2 = 0; d_69da_d9d2 <= 6; d_69da_d9d2++) {
            if (d_69da_d9d2 < 6) {
                if (a == 6)
                    d_69da_da14 = d_4512_a074[d_69da_d9d2][b][d_69da_d9ce];
                else
                    d_69da_da14 = d_4512_a2c0[d_69da_d9d2][b][d_69da_d9ce];
            } else {
                if (a == 6)
                    d_69da_da14 = d_4512_a074[1][b][d_69da_d9ce] * 2 + d_4512_a074[2][b][d_69da_d9ce];
                else
                    d_69da_da14 = d_4512_a2c0[1][b][d_69da_d9ce] * 2 + d_4512_a2c0[2][b][d_69da_d9ce];
            }
            sprintf(buf, "  %d", d_69da_da14);
            f_1a70_3554(ys[d_69da_d9d2], x + 2.375 + d_69da_d9ce, 1, 4, 0x1e, buf);
        }
    }
}

#pragma option -O-
void f_7827_43ad(int team)
{
    char names[4][98][20];
    char buf[320];
    unsigned char comp[98];
    unsigned char week[98];

    f_7827_4802(team, names, comp, week);
    for (;;) {
        d_69da_da16 = (d_69da_da18 % 3 > 0) + d_69da_da18 / 3;
        f_1a70_5e32();
        if (d_69da_da16 <= 20)
            f_1a70_000a(-1.0, team, "Fixtures");
        else {
            f_1a70_4a41("");
            sprintf(buf, " %s fixtures ", (char far *)d_69da_b1fc[team]);
            f_1a70_3554(1.5, 1.5, -(d_4512_00a4[team] / 16), d_4512_00a4[team] % 16, 0, buf);
        }
        d_69da_d9ea = 4;
        d_69da_da1c = (d_69da_da1a = d_69da_da16) + 1;
        d_69da_da1e = d_69da_da16 * 2;
        d_69da_da20 = d_69da_da16 * 2 + 1;
        for (d_69da_da24 = 0; d_69da_da18 - 1 >= d_69da_da24; d_69da_da24++) {
            d_69da_de45 = d_69da_da24 % d_69da_da16 + 4.5 - (d_69da_da16 > 20 ? 1.5 : 0);
            if (d_69da_da24 + 1 <= d_69da_da1a)
                d_69da_de4d = 0.5;
            else if (d_69da_da24 + 1 <= d_69da_da1e)
                d_69da_de4d = 13.3;
            else
                d_69da_de4d = 26.1;
            sprintf(buf, "%.2s", names[0][d_69da_da24]);
            d_69da_d9e6 = atoi(buf);
            sprintf(buf, "%s", names[0][d_69da_da24] + 2);
            f_1a70_3554(d_69da_de4d + 1, d_69da_de45, d_69da_d9e6 / 16, d_69da_d9e6 % 16, 0, buf);
            if (d_69da_da24 + 1 >= d_69da_da26 && d_69da_da26 > -1) {
                if (d_69da_da24 + 1 == d_69da_da26)
                    d_69da_d9e6 = 3;
                else
                    d_69da_d9e6 = d_69da_d9ea;
                sprintf(buf, "%-11s", names[1][d_69da_da24]);
                buf[11] = 0;
                f_1a70_3554(d_69da_de4d + 3.0, d_69da_de45, 1, d_69da_d9e6, 0, buf);
            } else {
                sprintf(buf, "%-11s", names[1][d_69da_da24]);
                buf[11] = 0;
                f_1a70_4ede(0, d_69da_de4d + 3.0, d_69da_de45, 1, d_69da_d9ea, 0, buf);
            }
            f_1a70_3554(d_69da_de4d + 11.75, d_69da_de45, 3, 6, 0, names[2][d_69da_da24]);
            d_69da_d9ea = d_69da_d9ea == 12 ? 4 : 12;
        }
        f_1a70_5e46();
        d_69da_d992 = f_1a70_53de(d_69da_d9dc);
        if (d_69da_d992 <= 0)
            break;
        {
        FILE *fp;
        d_69da_da28 = (week - 1)[d_69da_d992] - 1;
        d_69da_da2a = comp[d_69da_da28];
        d_69da_da2c = d_28da_2270[d_69da_da28] + d_69da_da2a;
        f_2162_19f6(2);
        fp = fopen(d_536d_a475, "rb");
        fseek(fp, (long)(d_69da_da2c - 1) * 155, 0);
        fread(d_536d_3066, 1, 155, fp);
        fclose(fp);
        f_8773_3a79(d_5dbf_1292[comp[d_69da_da28]][0][d_69da_da28] / 32,
                    d_5dbf_1292[comp[d_69da_da28]][1][d_69da_da28] / 32, -1);
        }
    }
}

void f_7827_4802(int team, char far names[][98][20], unsigned char far *comp,
                 unsigned char far *week)
{
    d_69da_da30 = -1;
    d_69da_da18 = 0;
    d_69da_da26 = -1;
    for (d_69da_da24 = 0; d_69da_da24 <= 97; d_69da_da24++) {
        d_69da_da2e = -1;
        for (d_69da_d9d2 = 0; d_69da_d9d2 <= 1; d_69da_d9d2++)
            for (d_69da_d9a0 = 0; d_69da_d9a0 <= 39; d_69da_d9a0++)
                if (d_5dbf_1292[d_69da_d9a0][d_69da_d9d2][d_69da_da24] / 32 == team)
                    d_69da_da2e = d_69da_d9a0;
        if (d_69da_da2e > -1) {
            if (d_69da_da24 + 1 <= 8)
                strcpy(names[0][d_69da_da18], "38PF");
            else if (d_69da_da24 + 1 == 10)
                strcpy(names[0][d_69da_da18], "38CH");
            else if (f_1a70_2490(d_69da_da24 + 1))
                strcpy(names[0][d_69da_da18], "38FA");
            else if (f_1a70_24c5(d_69da_da24 + 1))
                strcpy(names[0][d_69da_da18], "38CC");
            else if (f_1a70_2855(d_69da_da24 + 1, d_69da_da2e + 1))
                strcpy(names[0][d_69da_da18], "05AI");
            else if (f_1a70_2a7d(d_69da_da24 + 1))
                strcpy(names[0][d_69da_da18], "38PL");
            else if (f_1a70_27c8(d_69da_da24 + 1, d_69da_da2e + 1))
                strcpy(names[0][d_69da_da18], "01EC");
            else if (f_1a70_2737(d_69da_da24 + 1, d_69da_da2e + 1))
                strcpy(names[0][d_69da_da18], "01CW");
            else if (f_1a70_268e(d_69da_da24 + 1, d_69da_da2e + 1))
                strcpy(names[0][d_69da_da18], "01UE");
            else
                strcpy(names[0][d_69da_da18], "98LG");
            strcpy(names[2][d_69da_da18], "");
            if (f_1a70_2a20(d_69da_da24 + 1, d_69da_da2e + 1))
                strcpy(names[2][d_69da_da18], "N");
            d_69da_da32 = d_5dbf_1292[d_69da_da2e][0][d_69da_da24] / 32;
            d_69da_da34 = d_5dbf_1292[d_69da_da2e][1][d_69da_da24] / 32;
            if (d_69da_da32 == team) {
                strcpy(names[1][d_69da_da18], f_1a70_3404(d_69da_da34));
                if (strlen(names[2][d_69da_da18]) == 0)
                    strcpy(names[2][d_69da_da18], "H");
            } else {
                strcpy(names[1][d_69da_da18], f_1a70_3404(d_69da_da32));
                if (strlen(names[2][d_69da_da18]) == 0)
                    strcpy(names[2][d_69da_da18], "A");
            }
            comp[d_69da_da24] = d_69da_da2e;
            week[d_69da_da18] = d_69da_da24 + 1;
            d_69da_da18++;
            if (d_69da_da26 == -1 && d_69da_da24 + 1 >= d_69da_d996)
                d_69da_da26 = d_69da_da18;
        }
    }
}

void f_7827_4b12(void)
{
    f_a83a_0fad(-1);
    if (d_69da_d9d8 > -1) {
        if (f_1a70_2bc7(d_69da_d9d8))
            f_7dd6_2dcf(d_69da_d9d8);
        else
            f_7827_4b4d(d_69da_d9d8);
    }
}

void f_7827_4b4d(int team)
{
    char buf[320];
    char reserves;

    reserves = 0;
    do {
        f_1a70_5e32();
        f_1a70_000a(1.5, team, reserves ? "Reserves" : "Squad");
        f_1a70_5e46();
        f_1a70_4ede(2, 1.5, 19.625, 6, 3, 0x37, " GOAL");
        f_1a70_4ede(2, 9.0, 19.625, 6, 3, 0x37, " DISP");
        f_1a70_4ede(2, 16.5, 19.625, 6, 3, 0x37, " AV R");
        f_1a70_4ede(2, 24.0, 19.625, 6, 3, 0x38, " M/O/M");
        f_1a70_4ede(2, 31.625, 19.625, 6, 3, 0x38, " TEAM");
        f_1a70_4ede(2, 1.5, 22.0, 1, 4, 0x129, "                 DONE");
        f_1a70_4ede(2, 1.5, 4.0, 1, 14, 0x26, "Trns");
        f_1a70_4ede(2, 6.875, 4.0, 1, 14, 0x26, "Staf");
        f_1a70_4ede(2, 12.25, 4.0, 1, 14, 0x26, "Leag");
        f_1a70_4ede(2, 17.625, 4.0, 1, 14, 0x26, "Fixt");
        f_1a70_4ede(2, 23.0, 4.0, 1, 14, 0x26, "Accs");
        f_1a70_4ede(2, 28.375, 4.0, 1, 14, 0x26, "Info");
        f_1a70_4ede(2, 33.75, 4.0, 1, 8, 0x27, reserves ? "Senr" : "Rsrv");
        if (d_4512_13dc[team] > 0)
            f_1a70_4ede(2, 33.75, 1.125, 1, 2, 0x27, "Appl");
        f_1a70_5e32();
        f_a83a_14e6(team, reserves);
        f_1a70_5e46();
        do
            d_69da_da36 = f_1a70_53de(0);
        while (d_69da_da36 <= 0);
        if (d_69da_da36 >= 1 && d_69da_da36 <= 4)
            f_7827_0d6d(d_69da_da36 - 1, team);
        else if (d_69da_da36 == 5)
            f_c06b_0000(team);
        else if (d_69da_da36 == 7)
            f_7827_4f28(team);
        else if (d_69da_da36 == 8)
            f_9c01_08e4(team);
        else if (d_69da_da36 == 9)
            f_7827_5340(team);
        else if (d_69da_da36 == 10)
            f_7827_43ad(team);
        else if (d_69da_da36 == 11) {
            if (d_69da_ddb8 || f_2162_0da1(50) == 0)
                f_7dd6_002a(team);
            else {
                sprintf(buf, "%s refuse access|to their accounts", (char far *)d_69da_b1fc[team]);
                f_1a70_0b80(buf);
            }
        } else if (d_69da_da36 == 12)
            f_aac9_07c3(team);
        else if (d_69da_da36 == 13)
            reserves = !reserves;
        else if (d_69da_da36 == 14 && d_4512_13dc[team] > 0)
            f_7dd6_0737(team);
        else if ((d_4512_13dc[team] > 0 ? 15 : 14) <= d_69da_da36) {
            d_69da_da02 = d_69da_da36 - (d_4512_13dc[team] > 0 ? 15 : 14);
            d_69da_d9ae = d_4512_8780[d_69da_da02];
            if (!f_1a70_5b94(d_69da_d9ae)) {
                do {
                    f_aac9_42ed(d_69da_d9ae, -1, -1);
                    f_9007_4da1(d_69da_d9ae, d_69da_d9e8);
                } while (!d_69da_ddbe);
            } else
                f_b085_38a5(team, d_69da_da02);
        }
    } while (d_69da_da36 != 6);
}

void f_7827_4f28(int team)
{
    char buf[320];
    unsigned char i, last, done;
    int y, x;
    unsigned char n, first;

    do {
        f_1a70_5e32();
        f_1a70_000a(-1, team, "Transfers");
        f_1a70_3554(1.125, 4, 1, 8, 150, "PLAYERS IN");
        f_1a70_3554(20.375, 4, 1, 8, 150, "PLAYERS OUT");
        for (d_69da_d9d6 = 5; d_69da_d9d6 >= 4; d_69da_d9d6--) {
            d_69da_de4d = d_69da_d9d6 == 4 ? 21.375 : 2.125;
            x = d_69da_d9d6 == 4 ? 171 : 17;
            n = d_69da_d9d6 == 5 ? d_536d_0000[team].n_in : d_536d_0000[team].n_out;
            if (n > 0) {
                d_69da_de45 = 5.5;
                y = 44;
                d_69da_defd = 0;
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
                    d_69da_d9ae = d_69da_d9d6 == 5 ? d_536d_0000[team].in[i] : d_536d_0000[team].out[i];
                    d_69da_da38 = d_69da_d9d6 == 5 ? d_536d_0000[team].in_club[i] : d_536d_0000[team].out_club[i];
                    d_69da_df01 = d_69da_d9d6 == 5 ? d_536d_0000[team].in_fee[i] : d_536d_0000[team].out_fee[i];
                    f_1a70_344b(x, y, 6, f_1a70_4592(d_69da_d9ae));
                    if (d_69da_df01 == 1)
                        sprintf(buf, "%s On Loan", (char far *)d_69da_b1fc[d_69da_da38]);
                    else {
                        if (d_69da_da38 < 80)
                            sprintf(buf, "%s %s", (char far *)d_69da_b1fc[d_69da_da38], f_1a70_0dfe(d_69da_df01));
                        else
                            sprintf(buf, "<%s> %s", d_5dbf_0000[d_69da_da38 - 140], f_1a70_0dfe(d_69da_df01));
                        d_69da_defd += d_69da_df01;
                    }
                    f_1a70_344b(x, y + 8, 5, buf);
                    d_69da_de45 = d_69da_de45 + 2.5;
                    y += 20;
                    i = i < 5 ? i + 1 : 0;
                } while (done == 0);
                sprintf(buf, "TOTAL %s", d_69da_d9d6 == 5 ? "SPENDING" : "INCOME");
                f_1a70_344b(x, y, 1, buf);
                sprintf(buf, "%ld", d_4512_1e90[d_69da_d9d6 == 5 ? 1 : 2][team]);
                f_1a70_344b(x + (d_69da_d9d6 == 5 ? 90 : 78), y, 2, buf);
            } else
                f_1a70_344b(x, 48, 5, "NOBODY");
        }
        f_1a70_5e46();
        f_1a70_4ede(2, 1.25, 22.5, 1, 4, 301, "                 DONE");
        f_1a70_4ede(2, 33.75, 1.125, 1, 2, 0, "Loans");
        do
            d_69da_d992 = f_1a70_53de(d_69da_d9dc);
        while (d_69da_d992 == 0);
        if (d_69da_d992 == 2)
            f_b8da_56ff(team);
    } while (d_69da_d992 != 1);
}

/* the league progress graph's axis labels */
static struct label d_69da_0602[] = {
    {17, 34, "1"}, {17, 62, "5"}, {11, 97, "10"}, {11, 132, "15"}, {11, 167, "20"},
    {21, 30, "1"}, {162, 30, "19"}, {314, 30, "38"}
};

void f_7827_5340(int team)
{
    f_1a70_000a(-1, team, "League Progress");
    f_2162_0897(16);
    f_2162_08b5(19, 35, 315, 168);
    f_2162_0897(30);
    f_2162_08b5(15, 31, 311, 164);
    f_2162_08a6(24);
    for (d_69da_d9be = 15; d_69da_d9be <= 311; d_69da_d9be += 8)
        f_2162_1021(d_69da_d9be, 31, d_69da_d9be, 164);
    for (d_69da_d9c0 = 31; d_69da_d9c0 <= 164; d_69da_d9c0 += 7)
        f_2162_1021(15, d_69da_d9c0, 311, d_69da_d9c0);
    if (d_69da_d9ba > 1) {
        d_69da_da3a = -1;
        for (d_69da_da3c = 1; d_69da_da3c <= d_69da_d9ba - 1; d_69da_da3c++) {
            d_69da_d9be = d_69da_da3c * 8 + 7;
            d_69da_d9c0 = d_4512_070c[d_69da_da3c][team] * 7 + 24;
            f_2162_08a6(18);
            f_2162_1021(d_69da_d9be - 2, d_69da_d9c0 + 2, d_69da_d9be + 2, d_69da_d9c0 - 2);
            f_2162_1021(d_69da_d9be - 2, d_69da_d9c0 - 2, d_69da_d9be + 2, d_69da_d9c0 + 2);
            if (d_69da_da3a > -1) {
                f_2162_08a6(22);
                f_2162_1021(d_69da_da3a, d_69da_da3e, d_69da_d9be, d_69da_d9c0);
            }
            d_69da_da3a = d_69da_d9be;
            d_69da_da3e = d_69da_d9c0;
        }
    }
    for (d_69da_da40 = 0; d_69da_da40 <= 7; d_69da_da40++)
        f_1a70_344b(d_69da_0602[d_69da_da40].x, d_69da_0602[d_69da_da40].y, 1, d_69da_0602[d_69da_da40].s);
    f_1a70_4ede(2, 2.125, 22.75, 1, 4, 293, "                DONE");
    do
        d_69da_d992 = f_1a70_53de(d_69da_d9dc);
    while (d_69da_d992 <= 0);
}
