/* @at 67ee:0000 */
/* @data 5d9c:2cd6 */
/* @module */

/* Overlay 1: the season's main menu and the screens it leads to: tables, top scorers,
 * form guides, attendances and job news, manager rankings, hall of fame, awards,
 * international squads, fixtures, European seedings and groups, squads, transfers and
 * the league progress graph. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <stdlib.h>

/* the functions, in address order: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_67ee_0000(void);
void f_67ee_02c5(int n, char lit);
void f_67ee_053d(void);
void f_67ee_0622(int div);
void f_67ee_0bbc(int div, unsigned char far (*t)[20]);
char f_67ee_0e0a(int pos, int div);
void f_67ee_0e4c(int mode, int team);
void f_67ee_1a68(int mode);
void f_67ee_2598(void);
void f_67ee_2a22(void);
void f_67ee_2f13(void);
void f_67ee_3212(char year);
void f_67ee_3b26(void);
void f_67ee_3b45(void);
void f_67ee_4060(void);
void f_67ee_44b1(void);
void f_67ee_44c2(void);
void f_67ee_47dc(void);
void f_67ee_486f(void);
void f_67ee_4a20(int a, int b, float x);
void f_67ee_4e10(int team);
void f_67ee_52ba(int team, char far names[][94][20], unsigned char far *comp, unsigned char far *week);
void f_67ee_5608(void);
void f_67ee_5641(int team);
void f_67ee_5ab6(float x, int team, char far *title);
void f_67ee_5c0f(int team);
void f_67ee_5f96(int team);

int f_1680_0577(int x);
void f_a1c3_27e4(char far *title);
long f_14d2_0ca0(void);
int f_14d2_0ac9(void);
int f_14d2_0ac1(void);
int f_14d2_0ab9(void);
void f_14d2_0722(int c);
void f_14d2_075a(int x1, int y1, int x2, int y2);
void f_14d2_073e(int c);
void f_14d2_07af(int x1, int y1, int x2, int y2);
unsigned f_14d2_09ce(char far *s, char far *set);
void f_1680_2a61(float x, float y, int colour, char far *s);
void f_1680_150c(int n, char far *title, char far *items);
void f_88c9_24f1(char far *);
int f_a1c3_2553(void);
void far *f_14d2_16bc(int handle, int page);
void f_1680_2867(float x, float y, int bg, int fg, int w, char far *s);
void f_1680_27aa(int x, int y, int colour, char far *s);
char f_1680_0003(int x);
void f_a1c3_2d08(int a, float x, float y, int c, int d, int e, char far *s);
void f_14d2_0e27(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_14d2_148f(void far *a, void far *b, int n);
void f_a1c3_34c6(int team);
int f_a1c3_3298(int a);
void f_992a_0000(int div);
void f_a1c3_30b1(int a, char b);
void f_6e68_0f31(void);
void f_6e68_0000(void);
void f_6e68_060e(void);
void f_6e68_0d3a(void);
void f_6e68_1176(void);
void f_6e68_129c(void);
void f_6e68_33d9(int);
int f_14d2_13eb(int a, int b);
int f_1680_0287(int x);
extern char d_5d9c_9b8c;
extern char d_5d9c_9b8d;
extern char d_5d9c_9b8e;
extern char d_5d9c_9b8f;
extern char d_5d9c_9b90;
extern int d_5d9c_9fa1;
extern int d_5d9c_9fab;
extern int d_5d9c_9fa7;
extern int d_5d9c_9faf;
extern int d_5d9c_a062[];
extern int d_5d9c_9f83;
extern float d_5d9c_9b0c;
extern float d_5d9c_9b08;
extern int d_5d9c_9f7d;
extern int d_5d9c_9f81;
extern int d_5d9c_9f7f;
extern int d_5d9c_9f7b;
extern int d_5d9c_9f79;
extern int d_5d9c_9f77;
extern int d_5d9c_9f75;
extern int d_5d9c_9f73;
extern int d_5d9c_9f71;
extern int d_5d9c_9f6f;
extern int d_5d9c_9f6d;
extern int d_5d9c_9f6b;
extern int d_5d9c_9f69;
extern int d_5d9c_9f67;
extern int d_5d9c_9f65;
extern int d_5d9c_9f63;
extern int d_5d9c_9f85;
extern int d_5d9c_a336;
extern char far *d_5d9c_a044;
extern char near *d_5d9c_08bc[];
extern unsigned char far d_2f3c_2d0b[];
extern unsigned char far d_2f3c_2d18[];
extern unsigned char far d_2f3c_2794[][20];
extern char far d_1f3e_57c4[];
extern char far d_1f3e_5774[];
extern char far d_1f3e_5724[];
extern unsigned char far d_483b_9fb6[][20];
extern unsigned char far d_5739_0386[];
extern unsigned char far d_5739_03d8[];
extern unsigned char far d_5739_042a[];
extern unsigned char far d_5739_047c[];
extern unsigned char far d_5739_04ce[];
extern unsigned char far d_5739_0520[];
extern unsigned char far d_5739_0572[];
extern unsigned char far d_5739_05c4[];
extern unsigned char far d_5739_0616[];
extern unsigned char far d_5739_0668[];
void f_1680_2ea0(float x, float y, int a, int b, int c, char far *s);
void f_1680_33a0(float x, float y, int team);
char far *f_a1c3_213c(int player);
void f_a1c3_5e7a(int player, int a, char b);
void f_8352_4556(int player, int a);
extern char d_5d9c_9b88;
extern char d_5d9c_9b89;
extern char d_5d9c_9b8a;
extern char d_5d9c_9b8b;
extern float d_5d9c_9b00;
extern float d_5d9c_9b04;
extern int d_5d9c_9f57;
extern int d_5d9c_9f59;
extern int d_5d9c_9f5b;
extern int d_5d9c_9f5d;
extern int d_5d9c_9f5f;
extern int d_5d9c_9f61;
extern int d_5d9c_9f91;
extern int far d_2f3c_15c0[4][3][2][30];
extern int far d_2f3c_85f7[];
extern int far d_2f3c_bb27[];
extern unsigned char huge d_483b_0000[][1702];
extern unsigned char huge d_3e42_0000[][1702];
extern char far d_1f3e_a50a[];
extern char far d_1f3e_56d4[];
extern char far d_1f3e_5684[];
extern unsigned char far d_5739_023e[];
extern int far d_483b_a372[][26];
char far *f_a1c3_229c(int manager, char full);
extern long d_5d9c_9a5c;
extern long d_5d9c_9a58;
extern int d_5d9c_9f55;
extern int d_5d9c_9f49;
extern char far d_1f3e_55e4[];
extern char far d_1f3e_5594[];
extern char far d_1f3e_54f4[];
extern char far d_1f3e_2b9a[];
extern char far d_1f3e_2b4a[];
extern char far d_1f3e_0780[][82][5];
extern long far d_2f3c_7b33[];
extern int far d_2f3c_7f93[];
extern unsigned char far d_5739_01ec[];
extern unsigned char far d_5739_138a[];
extern unsigned char far d_5739_13dc[];
char far *f_88c9_72fa(int a, int b);
extern long d_5d9c_9a54;
extern int d_5d9c_9f4b;
extern int d_5d9c_9f4d;
extern int d_5d9c_9f4f;
extern int d_5d9c_9f51;
extern int d_5d9c_9f53;
extern char d_5d9c_9b87;
extern int d_5d9c_a34e;
extern int d_5d9c_a35e;
extern long far *d_5d9c_a054;
extern char far *d_5d9c_9fd2;
extern unsigned char far d_2f3c_5e19[];
extern unsigned char far d_2f3c_53f1[];
extern unsigned char far d_2f3c_5167[];
extern long far d_2f3c_1d40[];
char far *f_a1c3_2243(int player);
char far *f_a1c3_261d(int division);
char far *f_a1c3_21cc(int player);
void f_a1c3_2c23(void);
char far *f_992a_5114(int n);
extern int d_5d9c_9f47;
extern int d_5d9c_9f43;
extern int d_5d9c_9f45;
extern int d_5d9c_9f41;
extern int d_5d9c_9f3f;
extern int d_5d9c_9f3d;
extern int d_5d9c_9f3b;
extern int d_5d9c_a344;
extern int d_5d9c_9fee[];
extern float d_5d9c_9afc;
extern unsigned char d_5d9c_0094[];
extern int (far *d_5d9c_9ff6)[2][22];
extern char far d_1f3e_5454[];
extern char far d_1f3e_5404[];
extern char far d_1f3e_5396[];
extern char far d_1f3e_5346[];
extern char far d_1f3e_52f6[];
extern char far d_1f3e_52a6[];
extern long far d_2f3c_0040[];
extern float far d_2f3c_0050[][4];
extern int far d_2f3c_0070[][4];
extern char far * far d_5471_17c4[];
void f_1680_18b2(int last);
void f_6e68_12fd(int, int, int);
char f_992a_7831(int);
char f_992a_7713(int);
char far *f_1680_1a91(int x);
void f_9100_6dd0(void);
extern int d_5d9c_9f39;
extern int d_5d9c_9f37;
extern int d_5d9c_9ee3;
extern char d_5d9c_9b75;
extern char d_5d9c_9b86;
extern char d_5d9c_9b85;
extern int d_5d9c_9f8d;
extern int d_5d9c_9f8f;
extern int d_5d9c_9f35;
extern int d_5d9c_9f33;
extern int d_5d9c_9f8b;
extern int d_5d9c_9f89;
extern int d_5d9c_9f87;
extern int far d_483b_a174[];
extern int far d_2f3c_27e4[][80];
extern int d_5d9c_9f31;
extern int d_5d9c_9f2f;
extern char far d_1f3e_5256[];
extern unsigned char far d_2f3c_0080[];
extern unsigned char far d_5739_1b0e[];
extern char far * far d_5471_16f0[];
extern int d_5d9c_9f2d;
extern int d_5d9c_9f2b;
extern int far d_1f3e_ff85[][5];
extern int d_5d9c_9f29;
extern int far d_2f3c_0030[][4];
extern unsigned char far d_2f3c_0000[][2][4];
extern unsigned char far d_1f3e_fcb5[][8][5];
void f_7a28_360e(int a, int b, char c);
char f_992a_70a8(int);
char f_992a_78ca(int);
char f_992a_74c1(int, int);
char f_992a_72e8(int, int);
char f_992a_7399(int, int);
char f_992a_7430(int, int);
char f_992a_752d(int, int);
char f_992a_75bc(int, int);
char f_992a_7853(int a, int b);
void f_1680_1ad8(int);
void f_1680_20c2(int t);
void f_7555_00e9(int team);
void f_88c9_68aa(int team);
int f_14d2_0c2a(int n);
void f_6e68_0027(int team);
void f_a1c3_093a(int team);
void f_6e68_084d(int team);
extern unsigned char far d_5739_00a4[];
extern int far d_5739_1d2a[][2][94];
extern int far d_483b_a0ba[];
extern char far d_1f3e_49e6[];
extern int far d_2f3c_1584[];
extern int d_5d9c_9f07;
extern int d_5d9c_9f09;
extern int d_5d9c_9f0b;
extern int d_5d9c_9f0d;
extern int d_5d9c_9f0f;
extern int d_5d9c_9f11;
extern int d_5d9c_9f13;
extern int d_5d9c_9f15;
extern int d_5d9c_9f17;
extern int d_5d9c_9f19;
extern int d_5d9c_9f1b;
extern int d_5d9c_9f1d;
extern int d_5d9c_9f1f;
extern int d_5d9c_9f21;
extern int d_5d9c_9f23;
extern int d_5d9c_9f25;
extern int d_5d9c_9f27;
char far *f_14d2_0d75(char far *s, unsigned n);
char far *f_14d2_0dc8(char far *s, unsigned i, unsigned n);
char far *f_88c9_27e8(long amount);
struct label {
    int x, y;
    char far *s;
};
extern char far d_1f3e_51b6[];
extern char far d_1f3e_5544[];
extern char far d_1f3e_5166[];
extern unsigned char far d_5739_070c[][82];
extern float d_5d9c_9af8;
extern int d_5d9c_a352;
extern char (far *d_5d9c_9fc2)[82][391];
extern int d_5d9c_9f05;
extern long d_5d9c_9a4c;
extern long d_5d9c_9a50;
extern int d_5d9c_9f03;
extern int d_5d9c_9f01;
extern int d_5d9c_9eff;
extern int d_5d9c_9efd;

/* the main menu: its labels (the first and sixth are rewritten each week) and, per item,
 * the button's position and colour */
static char far *d_5d9c_2cd6[] = {
    "Saturday Fixtures", "View Tables", "Fixture Info", "Club Details", "Match Reports",
    "Find Player", "Board Resign", "Manager Jobs", "National Squads", "New Picture",
    "Save Game"
};
static unsigned char d_5d9c_2d02[][3] = {
    {8, 32, 15}, {164, 32, 3}, {242, 32, 15}, {8, 88, 15}, {86, 88, 3}, {164, 88, 15},
    {242, 88, 3}, {8, 144, 3}, {86, 144, 15}, {164, 144, 3}, {242, 144, 15}
};

void f_67ee_0000(void)
{
    char buf[320];

    d_5d9c_9b8e = -1;
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++)
        d_2f3c_2d18[d_5d9c_9fa1] = d_2f3c_2d0b[d_5d9c_9fa1] = d_5d9c_9fa1 > 10 ? 4 : 0;
    do {
        d_5d9c_9b90 = 0;
        if (d_5d9c_9fab < 5 && d_5d9c_a062[d_5d9c_9fab] == 0)
            d_5d9c_9b90 = -1;
        if (d_5d9c_9b90)
            strcpy(d_5d9c_2cd6[0], "Continue Season");
        else if (d_5d9c_9fab == 95)
            strcpy(d_5d9c_2cd6[0], "New Season");
        else if ((d_5d9c_9fab & 1) && d_5d9c_9fab > 6)
            strcpy(d_5d9c_2cd6[0], "Midweek Fixtures");
        else
            strcpy(d_5d9c_2cd6[0], "Saturday Fixtures");
        if (d_5d9c_9b8d)
            strcpy(d_5d9c_2cd6[5], "Short Lists");
        else
            strcpy(d_5d9c_2cd6[5], "Find Player");
        sprintf(buf, "Week %d %s %d", f_1680_0577(d_5d9c_9fab),
                d_5d9c_9fab > 6 ? "Season" : "Preseason", d_5d9c_9fa7);
        f_a1c3_27e4(buf);
        for (d_5d9c_9f83 = 0; d_5d9c_9f83 <= 10; d_5d9c_9f83++)
            f_67ee_02c5(d_5d9c_9f83, 0);
        d_5d9c_9b0c = f_14d2_0ca0();
        do {
            d_5d9c_9f7d = -1;
            if (f_14d2_0ac9() > 0) {
                for (d_5d9c_9f83 = 0; d_5d9c_9f83 <= 10; d_5d9c_9f83++) {
                    d_5d9c_9f81 = d_5d9c_2d02[d_5d9c_9f83][0];
                    d_5d9c_9f7f = d_5d9c_2d02[d_5d9c_9f83][1];
                    if (f_14d2_0ac1() >= d_5d9c_9f81
                        && f_14d2_0ac1() <= d_5d9c_9f81 + (d_5d9c_9f83 == 0 ? 148 : 70)
                        && f_14d2_0ab9() >= d_5d9c_9f7f
                        && f_14d2_0ab9() <= d_5d9c_9f7f + 48) {
                        f_67ee_02c5(d_5d9c_9f83, -1);
                        d_5d9c_9f7d = d_5d9c_9f83;
                        d_5d9c_9f83 = 10;
                    }
                }
            }
            if (d_5d9c_9b8d && f_14d2_0ca0() - d_5d9c_9b0c > 400 && d_5d9c_9f7d == -1) {
                d_5d9c_9f7d = 0;
                f_67ee_02c5(0, -1);
            }
        } while (d_5d9c_9f7d <= -1);
        if (d_5d9c_9f7d > 0) {
            switch (d_5d9c_9f7d) {
            case 1: f_67ee_053d(); break;
            case 2: f_67ee_4060(); break;
            case 3: f_67ee_5608(); break;
            case 4: f_6e68_0f31(); break;
            case 5: f_6e68_0000(); break;
            case 6: f_6e68_060e(); break;
            case 7: f_6e68_0d3a(); break;
            case 8: f_67ee_3b26(); break;
            case 9: f_6e68_1176(); break;
            case 10: f_6e68_129c(); break;
            }
        }
    } while (d_5d9c_9f7d != 0);
    d_5d9c_9b8e = 0;
}

void f_67ee_02c5(int n, char lit)
{
    strcpy(d_1f3e_57c4, d_5d9c_2cd6[n]);
    strupr(d_1f3e_57c4);
    d_5d9c_9f81 = d_5d9c_2d02[n][0];
    d_5d9c_9f7f = d_5d9c_2d02[n][1];
    d_5d9c_9f7b = lit ? 8 : d_5d9c_2d02[n][2];
    d_5d9c_9f79 = n == 0 ? 148 : 70;
    f_14d2_0722(16);
    f_14d2_075a(d_5d9c_9f81 + 4, d_5d9c_9f7f + 4,
                d_5d9c_9f81 + d_5d9c_9f79 + 4, d_5d9c_9f7f + 52);
    f_14d2_0722(d_5d9c_9f7b + 16);
    f_14d2_075a(d_5d9c_9f81, d_5d9c_9f7f, d_5d9c_9f81 + d_5d9c_9f79, d_5d9c_9f7f + 48);
    if (d_5d9c_9f7b == 3)
        d_5d9c_9f77 = 15;
    else if (d_5d9c_9f7b == 15)
        d_5d9c_9f77 = 3;
    else
        d_5d9c_9f77 = 1;
    f_14d2_073e(d_5d9c_9f77 + 16);
    f_14d2_07af(d_5d9c_9f81, d_5d9c_9f7f, d_5d9c_9f81 + d_5d9c_9f79, d_5d9c_9f7f + 48);
    d_5d9c_9f75 = f_14d2_09ce(d_1f3e_57c4, " ");
    strcpy(d_1f3e_5774, d_1f3e_57c4);
    d_1f3e_5774[d_5d9c_9f75 - 1] = 0;
    strcpy(d_1f3e_5724, &d_1f3e_57c4[d_5d9c_9f75]);
    d_5d9c_9f73 = d_5d9c_9f79 / 2 - strlen(d_1f3e_5774) * 4;
    f_1680_2a61((d_5d9c_9f81 + d_5d9c_9f73 + 8) / 8.0, (d_5d9c_9f7f + 23) / 8.0, 1, d_1f3e_5774);
    d_5d9c_9f73 = d_5d9c_9f79 / 2 - strlen(d_1f3e_5724) * 4;
    f_1680_2a61((d_5d9c_9f81 + d_5d9c_9f73 + 8) / 8.0, (d_5d9c_9f7f + 31) / 8.0, 1, d_1f3e_5724);
}

void f_67ee_053d(void)
{
    do {
        f_1680_150c(0, "Tables/Awards", "*Exit|League Tables|Group Tables|Top Goalscorers|Worst Discipline|Average Ratings|Team Form Guide|Average Gates|Manager Scores|Manager Rankings|Hall Of Fame|Monthly Awards|");
        d_5d9c_9f71 = d_5d9c_9faf;
        switch (d_5d9c_9f71) {
        case 1:
            f_67ee_0622(-1);
            break;
        case 2:
            f_1680_150c(0, "Group Tables", "*Exit|European Cup|Domark Trophy|");
            if (d_5d9c_9faf == 1) {
                if (d_5d9c_9fab < 36)
                    f_88c9_24f1("Groups not yet decided");
                else
                    f_67ee_47dc();
            } else if (d_5d9c_9faf == 2)
                f_67ee_486f();
            break;
        case 3:
        case 4:
        case 5:
            f_67ee_0e4c(d_5d9c_9f71 - 3, -1);
            break;
        case 6:
            f_67ee_1a68(0);
            break;
        case 7:
            f_67ee_1a68(1);
            break;
        case 8:
            f_67ee_2598();
            break;
        case 9:
            f_67ee_2a22();
            break;
        case 10:
            f_67ee_2f13();
            break;
        case 11:
            f_67ee_3212(0);
            break;
        }
    } while (d_5d9c_9f71 != 0);
}

/* the league table's column headings */
static char far *d_5d9c_2d23[] = {
    "PL", "W", "D", "L", "F", "A", "W", "D", "L", "F", "A", "PT"
};

void f_67ee_0622(int div)
{
    int y;
    char buf[320];

    memset(d_483b_9fb6, 0, 260);
    if (div == -1)
        d_5d9c_9f6f = f_a1c3_2553();
    else
        d_5d9c_9f6f = div;
    do {
        d_5d9c_a044 = f_14d2_16bc(d_5d9c_a336, 1);
        f_67ee_0bbc(d_5d9c_9f6f, d_483b_9fb6);
        f_a1c3_27e4("");
        sprintf(buf, " Division %d", d_5d9c_9f6f + 1);
        f_1680_2867(1.125, 1.25, 1, 2, 0x61, buf);
        for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 11; d_5d9c_9f6d++) {
            sprintf(buf, "%-2s", d_5d9c_2d23[d_5d9c_9f6d]);
            f_1680_2867(d_5d9c_9f6d * 2 + 15.625 + (d_5d9c_9f6d == 0 ? -1 : 0), 1.25, 1, 8, 0, buf);
        }
        d_5d9c_9b08 = 2.5;
        y = 20;
        d_5d9c_9f7b = 4;
        d_5d9c_9f6b = 12;
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 19; d_5d9c_9f69++) {
            d_5d9c_a044 = f_14d2_16bc(d_5d9c_a336, 0);
            f_1680_27aa(11, y, 1, d_5d9c_a044 + d_5d9c_9f69 * 2);
            if (f_1680_0003(d_5d9c_9f67 = d_483b_9fb6[0][d_5d9c_9f69]))
                d_5d9c_9f65 = 3;
            else
                d_5d9c_9f65 = d_5d9c_9f6b;
            sprintf(buf, " %.15s", (char far *)d_5d9c_08bc[d_5d9c_9f67]);
            f_a1c3_2d08(0, 1.125, d_5d9c_9b08, 1, d_5d9c_9f65, 0x61, buf);
            sprintf(buf, "%-2d", d_483b_9fb6[1][d_5d9c_9f69]);
            f_1680_27aa(125, y, 5, buf);
            for (d_5d9c_9fa1 = 2; d_5d9c_9fa1 <= 11; d_5d9c_9fa1++) {
                sprintf(buf, "%-2d", d_483b_9fb6[d_5d9c_9fa1][d_5d9c_9f69]);
                f_1680_27aa((d_5d9c_9fa1 - 2) * 16 + 149, y, d_5d9c_9fa1 > 6 ? 1 : 6, buf);
            }
            sprintf(buf, "%-2d", d_483b_9fb6[12][d_5d9c_9f69]);
            f_1680_2867(37.625, d_5d9c_9b08, 1, 2, 0, buf);
            if (f_67ee_0e0a(d_5d9c_9f69, d_5d9c_9f6f)) {
                f_14d2_073e(22);
                f_14d2_0e27(8, d_5d9c_9b08 * 8.0 + 2.0, 105, d_5d9c_9b08 * 8.0 + 2.0);
                d_5d9c_9b08 = d_5d9c_9b08 + 1.125;
                y += 9;
            } else {
                d_5d9c_9b08 += 1;
                y += 8;
            }
            f_14d2_148f(&d_5d9c_9f7b, &d_5d9c_9f6b, 2);
        }
        f_a1c3_2d08(2, 1.25, 23.0, 6, 2, 0x35, " - DIV");
        f_a1c3_2d08(2, 32.25, 23.0, 6, 2, 0x35, " + DIV");
        f_a1c3_2d08(2, 25.0, 23.0, 1, 4, 0x35, "  PRT");
        f_a1c3_2d08(2, 8.5, 23.0, 1, 4, 0x7f, "      EXIT");
        if (d_5d9c_9b8f == 0)
            f_a1c3_34c6(23);
        do {
            d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
            if (d_5d9c_9faf == 23) {
                f_992a_0000(d_5d9c_9f6f);
                f_a1c3_30b1(23, 0);
            }
        } while (d_5d9c_9faf <= 0 || d_5d9c_9faf == 23);
        if (d_5d9c_9faf >= 1 && d_5d9c_9faf <= 20) {
            if (f_1680_0003(d_5d9c_9f69 = d_483b_9fb6[0][d_5d9c_9faf - 1]))
                f_6e68_33d9(d_5d9c_9f69);
            else
                f_67ee_5641(d_5d9c_9f69);
        } else if (d_5d9c_9faf == 21) {
            d_5d9c_9f6f--;
            if (d_5d9c_9f6f < 0)
                d_5d9c_9f6f = 3;
        } else if (d_5d9c_9faf == 22) {
            d_5d9c_9f6f++;
            if (d_5d9c_9f6f > 3)
                d_5d9c_9f6f = 0;
        } else if (d_5d9c_9faf == 24)
            d_5d9c_9f6f = -1;
    } while (d_5d9c_9f6f != -1);
}

void f_67ee_0bbc(int div, unsigned char far (*t)[20])
{
    d_5d9c_9f71 = 0;
    for (d_5d9c_9f6d = div * 20; d_5d9c_9f6d <= div * 20 + 19; d_5d9c_9f6d++) {
        d_5d9c_9f67 = d_2f3c_2794[0][d_5d9c_9f6d];
        strcpy(d_5d9c_a044 + d_5d9c_9f71 * 2, " ");
        if (d_5739_0386[d_5d9c_9f67] == 1)
            strcpy(d_5d9c_a044 + d_5d9c_9f71 * 2, "R");
        else if (d_5739_0386[d_5d9c_9f67] == 3)
            strcpy(d_5d9c_a044 + d_5d9c_9f71 * 2, "P");
        else if (d_5739_0386[d_5d9c_9f67] == 4)
            strcpy(d_5d9c_a044 + d_5d9c_9f71 * 2, "C");
        t[0][d_5d9c_9f71] = d_5d9c_9f67;
        t[1][d_5d9c_9f71] = d_5d9c_9f85 - 1;
        t[2][d_5d9c_9f71] = d_5739_03d8[d_5d9c_9f67] - d_5739_0520[d_5d9c_9f67];
        t[3][d_5d9c_9f71] = f_14d2_13eb(d_5d9c_9f85 - 1 - d_5739_03d8[d_5d9c_9f67]
                                        - d_5739_042a[d_5d9c_9f67], 0)
                            - d_5739_0572[d_5d9c_9f67];
        t[4][d_5d9c_9f71] = d_5739_042a[d_5d9c_9f67] - d_5739_05c4[d_5d9c_9f67];
        t[5][d_5d9c_9f71] = d_5739_047c[d_5d9c_9f67] - d_5739_0616[d_5d9c_9f67];
        t[6][d_5d9c_9f71] = d_5739_04ce[d_5d9c_9f67] - d_5739_0668[d_5d9c_9f67];
        t[7][d_5d9c_9f71] = d_5739_0520[d_5d9c_9f67];
        t[8][d_5d9c_9f71] = d_5739_0572[d_5d9c_9f67];
        t[9][d_5d9c_9f71] = d_5739_05c4[d_5d9c_9f67];
        t[10][d_5d9c_9f71] = d_5739_0616[d_5d9c_9f67];
        t[11][d_5d9c_9f71] = d_5739_0668[d_5d9c_9f67];
        t[12][d_5d9c_9f71] = f_1680_0287(d_5d9c_9f6d);
        d_5d9c_9f71++;
    }
}

char f_67ee_0e0a(int pos, int div)
{
    d_5d9c_9b8c = 0;
    if ((pos == 0 && div == 0)
        || (div > 0 && (pos == 1 || pos == 5))
        || (div < 3 && pos == 16)
        || (div == 3 && pos == 18))
        d_5d9c_9b8c = -1;
    return d_5d9c_9b8c;
}

void f_67ee_0e4c(int mode, int team)
{
    char sel[1702];
    int list[30];
    char buf[320];

    d_5d9c_9b8b = team < 0 ? -1 : 0;
    if (d_5d9c_9b8b)
        d_5d9c_9f61 = f_a1c3_2553();
    for (;;) {
        memset(sel, 0, 1702);
        memset(list, -1, 60);
        if (mode == 0) {
            f_a1c3_27e4(d_5d9c_9b8b ? "Top Goalscorers" : "Goalscorers");
        } else if (mode == 1) {
            f_a1c3_27e4(d_5d9c_9b8b ? "Worst Discipline" : "Discipline");
        } else if (mode == 2) {
            f_a1c3_27e4(d_5d9c_9b8b ? "Top Av Ratings" : "Av Ratings");
        }
        if (d_5d9c_9b8b) {
            sprintf(buf, " Division %d ", d_5d9c_9f61 + 1);
            f_1680_2ea0(1.25, 4.0, 0, 9, 0, buf);
        } else
            f_1680_33a0(1.25, 4.0, team);
        d_5d9c_9f7b = 4;
        d_5d9c_9f6b = 12;
        d_5d9c_9b8a = 0;
        d_5d9c_9f5f = -1;
        for (d_5d9c_9f71 = 0; d_5d9c_9f71 <= 29; d_5d9c_9f71++) {
            d_5d9c_9f91 = -1;
            d_5d9c_9f5d = 0;
            if (d_5d9c_9b8a == 0) {
                if (d_5d9c_9b8b) {
                    if (d_2f3c_15c0[d_5d9c_9f61][mode][0][d_5d9c_9f71] == -2) {
                        for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 1699; d_5d9c_9f6d++) {
                            int k;
                            k = d_483b_0000[18][d_5d9c_9f6d] / 20;
                            if (sel[d_5d9c_9f6d] == 0 && (k == d_5d9c_9f61 || d_3e42_0000[0][d_5d9c_9f6d] / 20 == d_5d9c_9f61)) {
                                d_5d9c_9f5b = 0;
                                d_5d9c_9b89 = d_3e42_0000[10][d_5d9c_9f6d] / 20 != k && d_1f3e_a50a[d_5d9c_9f6d] ? -1 : 0;
                                if (k == d_5d9c_9f61 || (d_5d9c_9b89 && d_3e42_0000[10][d_5d9c_9f6d] / 20 == d_5d9c_9f61 && d_3e42_0000[12][d_5d9c_9f6d] > 0)) {
                                    if (mode == 0) {
                                        if (d_5d9c_9b89) {
                                            if (k == d_5d9c_9f61)
                                                d_5d9c_9f5b = d_3e42_0000[1][d_5d9c_9f6d] - d_3e42_0000[13][d_5d9c_9f6d];
                                            else
                                                d_5d9c_9f5b = d_3e42_0000[13][d_5d9c_9f6d];
                                        } else
                                            d_5d9c_9f5b = d_3e42_0000[1][d_5d9c_9f6d];
                                    } else if (mode == 1)
                                        d_5d9c_9f5b = d_3e42_0000[2][d_5d9c_9f6d] - d_3e42_0000[2][d_5d9c_9f6d] % 5;
                                    else if (d_5d9c_9b89) {
                                        if (k == d_5d9c_9f61) {
                                            if (d_3e42_0000[0][d_5d9c_9f6d] - d_3e42_0000[12][d_5d9c_9f6d] > d_5d9c_9f85 / 2)
                                                d_5d9c_9f5b = (float)(d_2f3c_85f7[d_5d9c_9f6d] - d_2f3c_bb27[d_5d9c_9f6d]) / (d_3e42_0000[0][d_5d9c_9f6d] - d_3e42_0000[12][d_5d9c_9f6d]) * 1000;
                                        } else {
                                            if (d_3e42_0000[12][d_5d9c_9f6d] > d_5d9c_9f85 / 2)
                                                d_5d9c_9f5b = (float)d_2f3c_bb27[d_5d9c_9f6d] / d_3e42_0000[12][d_5d9c_9f6d] * 1000;
                                        }
                                    } else {
                                        if (d_3e42_0000[0][d_5d9c_9f6d] > d_5d9c_9f85 / 2)
                                            d_5d9c_9f5b = (float)d_2f3c_85f7[d_5d9c_9f6d] / d_3e42_0000[0][d_5d9c_9f6d] * 1000;
                                    }
                                    if (d_5d9c_9f5b > d_5d9c_9f5d) {
                                        d_5d9c_9f91 = d_5d9c_9f6d;
                                        d_5d9c_9f5d = d_5d9c_9f5b;
                                    }
                                }
                            }
                        }
                        d_2f3c_15c0[d_5d9c_9f61][mode][0][d_5d9c_9f71] = d_5d9c_9f91;
                        d_2f3c_15c0[d_5d9c_9f61][mode][1][d_5d9c_9f71] = d_5d9c_9f5d;
                    } else {
                        d_5d9c_9f91 = d_2f3c_15c0[d_5d9c_9f61][mode][0][d_5d9c_9f71];
                        d_5d9c_9f5d = d_2f3c_15c0[d_5d9c_9f61][mode][1][d_5d9c_9f71];
                    }
                } else {
                    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= d_5739_023e[team] - 1; d_5d9c_9fa1++) {
                        d_5d9c_9f6d = d_483b_a372[team][d_5d9c_9fa1];
                        d_5d9c_9f5b = 0;
                        if (sel[d_5d9c_9f6d] == 0) {
                            if (mode == 0)
                                d_5d9c_9f5b = d_3e42_0000[1][d_5d9c_9f6d] - d_3e42_0000[13][d_5d9c_9f6d];
                            else if (mode == 1)
                                d_5d9c_9f5b = d_3e42_0000[2][d_5d9c_9f6d] - d_3e42_0000[2][d_5d9c_9f6d] % 5;
                            else if (d_3e42_0000[0][d_5d9c_9f6d] - d_3e42_0000[12][d_5d9c_9f6d] > 0)
                                d_5d9c_9f5b = (float)(d_2f3c_85f7[d_5d9c_9f6d] - d_2f3c_bb27[d_5d9c_9f6d]) / (d_3e42_0000[0][d_5d9c_9f6d] - d_3e42_0000[12][d_5d9c_9f6d]) * 1000;
                            if (d_5d9c_9f5b > d_5d9c_9f5d) {
                                d_5d9c_9f91 = d_5d9c_9f6d;
                                d_5d9c_9f5d = d_5d9c_9f5b;
                            }
                        }
                    }
                }
            }
            d_5d9c_9f59 = d_5d9c_9f6b;
            if (d_5d9c_9f91 > -1 && (d_5d9c_9f5d > 0 && d_5d9c_9b8b || d_5d9c_9b8b == 0)) {
                sprintf(d_1f3e_56d4, " %.17s", f_a1c3_213c(d_5d9c_9f91));
                if (mode < 2) {
                    if (d_5d9c_9f5d > 0)
                        sprintf(d_1f3e_5684, " %02d", d_5d9c_9f5d);
                    else
                        strcpy(d_1f3e_5684, " --");
                } else if (d_5d9c_9f5d > 0) {
                    d_5d9c_9b04 = d_5d9c_9f5d / 1000.0;
                    d_5d9c_9b04 = (int)(d_5d9c_9b04 * 100) / 100.0;
                    sprintf(d_1f3e_5684, "%f", d_5d9c_9b04);
                    d_1f3e_5684[4] = 0;
                } else
                    strcpy(d_1f3e_5684, "----");
                sel[d_5d9c_9f91] = -1;
                list[d_5d9c_9f71] = d_5d9c_9f91;
                d_5d9c_9f5f = d_5d9c_9f71;
                if (d_5d9c_9b8b && f_1680_0003(d_483b_0000[18][d_5d9c_9f91]))
                    d_5d9c_9f59 = 3;
            } else {
                strcpy(d_1f3e_56d4, "");
                strcpy(d_1f3e_5684, "");
                d_5d9c_9b8a = -1;
            }
            if (d_5d9c_9f71 < 15) {
                d_5d9c_9b00 = 1.125;
                d_5d9c_9b08 = d_5d9c_9f71 + 7.25;
            } else {
                d_5d9c_9b00 = 20.25;
                d_5d9c_9b08 = d_5d9c_9f71 - 15 + 7.25;
            }
            sprintf(buf, "%02d", d_5d9c_9f71 + 1);
            f_1680_2867(d_5d9c_9b00, d_5d9c_9b08, 6, 3, 0, buf);
            if (list[d_5d9c_9f71] == -1)
                f_1680_2867(d_5d9c_9b00 + 1.75, d_5d9c_9b08, 1, d_5d9c_9f59, 111, d_1f3e_56d4);
            else
                f_a1c3_2d08(0, d_5d9c_9b00 + 1.75, d_5d9c_9b08, 1, d_5d9c_9f59, 111, d_1f3e_56d4);
            f_1680_2867(d_5d9c_9b00 + 15.875, d_5d9c_9b08, 1, 2, 24, d_1f3e_5684);
            f_14d2_148f(&d_5d9c_9f7b, &d_5d9c_9f6b, 2);
        }
        if (d_5d9c_9b8b) {
            f_a1c3_2d08(2, 8.5, 22.5, 1, 4, 185, "          EXIT");
            f_a1c3_2d08(2, 1.25, 22.5, 6, 2, 53, " - DIV");
            f_a1c3_2d08(2, 32.25, 22.5, 6, 2, 53, " + DIV");
        } else
            f_a1c3_2d08(2, 1.25, 22.5, 1, 4, 301, "                 EXIT");
        do
            d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
        while (d_5d9c_9faf <= 0);
        if (d_5d9c_9f5f + 2 > d_5d9c_9faf) {
            d_5d9c_9f91 = list[d_5d9c_9faf - 1];
            do {
                f_a1c3_5e7a(d_5d9c_9f91, -1, -1);
                f_8352_4556(d_5d9c_9f91, d_5d9c_9f57);
            } while (!d_5d9c_9b88);
        } else if (d_5d9c_9f5f + 3 == d_5d9c_9faf) {
            d_5d9c_9f61--;
            if (d_5d9c_9f61 < 0)
                d_5d9c_9f61 = 3;
        } else if (d_5d9c_9f5f + 4 == d_5d9c_9faf) {
            d_5d9c_9f61++;
            if (d_5d9c_9f61 > 3)
                d_5d9c_9f61 = 0;
        } else
            break;
    }
}

void f_67ee_1a68(int mode)
{
    char used[80];
    int list[21];
    char buf[318];
    unsigned char c;

    d_5d9c_9f6f = f_a1c3_2553();
    do {
        memset(used, 0, 80);
        f_a1c3_27e4("");
        sprintf(d_1f3e_55e4, "Division %d", d_5d9c_9f6f + 1);
        if (mode < 2) {
            if (mode == 0) {
                sprintf(buf, "Form Guide %s", d_1f3e_55e4);
                f_1680_2867(1.125, 1.5, 0, 1, 0x86, buf);
                f_1680_2867(18.125, 1.5, 1, 8, 0, " HOME ");
                f_1680_2867(22.875, 1.5, 1, 8, 0, " AWAY ");
                d_5d9c_9f7b = 4;
                d_5d9c_9f6b = 12;
            } else {
                sprintf(buf, "Attendance %s", d_1f3e_55e4);
                f_1680_2867(1.125, 1.5, 0, 1, 0x86, buf);
                f_1680_2867(18.125, 1.5, 1, 2, 0x4a, " AVERAGE");
                d_5d9c_9f7b = 14;
                d_5d9c_9f6b = 8;
            }
            f_1680_2867(27.625, 1.5, 1, 8 - mode * 6, 0, " LP ");
            f_1680_2867(30.875, 1.5, 1, 8 - mode * 6, 0, "BOARD %  ");
        } else {
            sprintf(buf, "Job News %s", d_1f3e_55e4);
            f_1680_2867(1.125, 1.5, 0, 1, 0x86, buf);
            f_1680_2867(18.125, 1.5, 1, 2, 0x53, " MANAGER");
            f_1680_2867(28.75, 1.5, 0, 6, 0x53, " JOB");
            d_5d9c_9f7b = 15;
            d_5d9c_9f6b = 3;
        }
        d_5d9c_9f7f = 6;
        d_5d9c_9f6d = 1;
        while (d_5d9c_9f6d <= 20) {
            d_5d9c_9f67 = -1;
            d_5d9c_9a5c = 0;
            for (d_5d9c_9fa1 = d_5d9c_9f6f * 20; d_5d9c_9fa1 <= d_5d9c_9f6f * 20 + 19; d_5d9c_9fa1++) {
                d_5d9c_9f69 = d_2f3c_2794[0][d_5d9c_9fa1];
                if (used[d_5d9c_9f69] == 0) {
                    d_5d9c_9a58 = 0;
                    if (mode == 0) {
                        sprintf(d_1f3e_5594, "%s%s", d_1f3e_0780[0][d_5d9c_9f69], d_1f3e_0780[1][d_5d9c_9f69]);
                        for (d_5d9c_9f55 = 1; d_5d9c_9f55 <= strlen(d_1f3e_5594); d_5d9c_9f55++) {
                            c = d_1f3e_5594[d_5d9c_9f55 - 1];
                            if (c == 'W')
                                d_5d9c_9a58 += 3;
                            else if (c == 'D' || c == 'X')
                                d_5d9c_9a58 += 1;
                        }
                    } else if (mode == 1) {
                        if (d_5739_138a[d_5d9c_9f69] > 0)
                            d_5d9c_9a58 = d_2f3c_7b33[d_5d9c_9f69] / d_5739_138a[d_5d9c_9f69];
                    } else {
                        d_5d9c_9a58 = 100 - d_5739_01ec[d_5d9c_9f69];
                        if (d_5739_13dc[d_5d9c_9f69] > 0)
                            d_5d9c_9a58 = 255;
                    }
                    if (d_5d9c_9a58 > d_5d9c_9a5c || d_5d9c_9f67 == -1) {
                        d_5d9c_9a5c = d_5d9c_9a58;
                        d_5d9c_9f49 = d_5d9c_9fa1;
                        d_5d9c_9f67 = d_5d9c_9f69;
                    }
                }
            }
            d_5d9c_9f65 = d_5d9c_9f6b;
            if (mode < 2) {
                if (f_1680_0003(d_5d9c_9f67))
                    d_5d9c_9f65 = 3;
                sprintf(buf, " %02d ", d_5d9c_9f6d);
                f_1680_2867(1.125, d_5d9c_9f7f + 0.25 - 3.5, 0, 6, 0, buf);
                sprintf(buf, " %.17s", (char far *)d_5d9c_08bc[d_5d9c_9f67]);
                f_a1c3_2d08(0, 4.375, d_5d9c_9f7f + 0.25 - 3.5, 1, d_5d9c_9f65, 0x6c, buf);
                if (mode == 0) {
                    sprintf(buf, " %s", d_1f3e_0780[0][d_5d9c_9f67]);
                    f_1680_2867(18.125, d_5d9c_9f7f + 0.25 - 3.5, 6, 2, 0x24, buf);
                    sprintf(buf, " %s", d_1f3e_0780[1][d_5d9c_9f67]);
                    f_1680_2867(22.875, d_5d9c_9f7f + 0.25 - 3.5, 6, 2, 0x24, buf);
                } else {
                    strcpy(buf, "");
                    if (d_5d9c_9a5c > 0)
                        sprintf(buf, "   %ld", d_5d9c_9a5c);
                    f_1680_2867(18.125, d_5d9c_9f7f + 0.25 - 3.5, 1, 4, 0x4a, buf);
                }
                sprintf(buf, " %02d ", d_5d9c_9f49 + 1 - d_5d9c_9f6f * 20);
                f_1680_2867(27.625, d_5d9c_9f7f + 0.25 - 3.5, 1, 9, 0, buf);
                sprintf(d_1f3e_54f4, "%d%%", d_5739_01ec[d_5d9c_9f67]);
                sprintf(buf, "    %s", d_1f3e_54f4);
                f_1680_2867(30.875, d_5d9c_9f7f + 0.25 - 3.5, 6, 3, 0x42, buf);
            } else {
                if (f_1680_0003(d_5d9c_9f67))
                    d_5d9c_9f65 = 12;
                sprintf(buf, " %.21s", (char far *)d_5d9c_08bc[d_5d9c_9f67]);
                f_a1c3_2d08(0, 1.125, d_5d9c_9f7f - 3.25, 1, d_5d9c_9f65, 0x86, buf);
                if (d_5739_13dc[d_5d9c_9f67] > 0) {
                    strcpy(d_1f3e_2b9a, "");
                    strcpy(d_1f3e_2b4a, "Available");
                } else {
                    strcpy(d_1f3e_2b9a, f_a1c3_229c(d_2f3c_7f93[d_5d9c_9f67], -1));
                    c = d_5739_01ec[d_5d9c_9f67];
                    if (c <= 29)
                        strcpy(d_1f3e_2b4a, "Under threat");
                    else if (c <= 39)
                        strcpy(d_1f3e_2b4a, "Insecure");
                    else
                        strcpy(d_1f3e_2b4a, "Safe");
                }
                sprintf(buf, " %s", d_1f3e_2b9a);
                f_1680_2867(18.125, d_5d9c_9f7f - 3.25, 1, 9, 0x53, buf);
                sprintf(buf, " %s", d_1f3e_2b4a);
                f_1680_2867(28.75, d_5d9c_9f7f - 3.25, d_1f3e_2b9a[0] != 0 ? 1 : 4,
                            d_5739_13dc[d_5d9c_9f67] > 0 ? 1 : 12, 0x53, buf);
            }
            d_5d9c_9f7f++;
            f_14d2_148f(&d_5d9c_9f7b, &d_5d9c_9f6b, 2);
            used[d_5d9c_9f67] = -1;
            list[d_5d9c_9f6d] = d_5d9c_9f67;
            d_5d9c_9f6d++;
        }
        f_a1c3_2d08(2, 1.25, 23.0, 6, 2, 0x35, " - DIV");
        f_a1c3_2d08(2, 32.25, 23.0, 6, 2, 0x35, " + DIV");
        f_a1c3_2d08(2, 8.5, 23.0, 1, 4, 0xb9, "          EXIT");
        do
            d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
        while (d_5d9c_9faf <= 0);
        if (d_5d9c_9faf >= 1 && d_5d9c_9faf <= 20) {
            if (f_1680_0003(d_5d9c_9f69 = list[d_5d9c_9faf]))
                f_6e68_33d9(d_5d9c_9f69);
            else
                f_67ee_5641(d_5d9c_9f69);
        } else if (d_5d9c_9faf == 21) {
            d_5d9c_9f6f--;
            if (d_5d9c_9f6f < 0)
                d_5d9c_9f6f = 3;
        } else if (d_5d9c_9faf == 22) {
            d_5d9c_9f6f++;
            if (d_5d9c_9f6f > 3)
                d_5d9c_9f6f = 0;
        } else if (d_5d9c_9faf == 23)
            d_5d9c_9f6f = -1;
    } while (d_5d9c_9f6f != -1);
}

/* the managers' points table of a division */
void f_67ee_2598(void)
{
    char used[80];
    char buf[320];

    d_5d9c_9f61 = f_a1c3_2553();
    do {
        memset(used, 0, 80);
        f_a1c3_27e4("");
        sprintf(buf, "Manager Pts Division %d", d_5d9c_9f61 + 1);
        f_1680_2867(1.125, 1.5, 0, 1, 0x88, buf);
        f_1680_2867(18.375, 1.5, 1, 4, 0x6e, " CLUB");
        f_1680_2867(32.375, 1.5, 1, 4, 0x36, " PTS");
        d_5d9c_9f7f = 6;
        d_5d9c_9f7b = 2;
        d_5d9c_9f6b = 9;
        for (d_5d9c_9f6d = 1; d_5d9c_9f6d <= 20; d_5d9c_9f6d++) {
            d_5d9c_9a5c = 0;
            for (d_5d9c_9f69 = d_5d9c_9f61 * 20; d_5d9c_9f69 <= d_5d9c_9f61 * 20 + 19;
                 d_5d9c_9f69++) {
                if (used[d_5d9c_9f69] == 0) {
                    d_5d9c_a054 = f_14d2_16bc(d_5d9c_a35e, 0);
                    if ((d_5d9c_9a54 = d_5d9c_a054[d_2f3c_7f93[d_5d9c_9f69]]) >= d_5d9c_9a5c) {
                        d_5d9c_9a5c = d_5d9c_9a54;
                        d_5d9c_9f67 = d_5d9c_9f69;
                    }
                }
            }
            if (f_1680_0003(d_5d9c_9f67))
                d_5d9c_9f65 = 12;
            else
                d_5d9c_9f65 = d_5d9c_9f6b;
            sprintf(buf, " %02d ", d_5d9c_9f6d);
            f_1680_2867(1.125, d_5d9c_9f7f + 0.25 - 3.5, 1, 8, 0, buf);
            sprintf(buf, " %s", f_a1c3_229c(d_2f3c_7f93[d_5d9c_9f67], 0));
            f_1680_2867(4.375, d_5d9c_9f7f + 0.25 - 3.5, 1, d_5d9c_9f65, 0x6e, buf);
            sprintf(buf, " %.17s", (char far *)d_5d9c_08bc[d_5d9c_9f67]);
            f_1680_2867(18.375, d_5d9c_9f7f + 0.25 - 3.5, 1, 3, 0x6e, buf);
            sprintf(buf, " %06ld", d_5d9c_9a5c);
            f_1680_2867(32.375, d_5d9c_9f7f + 0.25 - 3.5, 2, 6, 0x36, buf);
            d_5d9c_9f7f++;
            f_14d2_148f(&d_5d9c_9f7b, &d_5d9c_9f6b, 2);
            used[d_5d9c_9f67] = -1;
        }
        f_a1c3_2d08(2, 1.25, 23.0, 6, 2, 0x35, " - DIV");
        f_a1c3_2d08(2, 32.25, 23.0, 6, 2, 0x35, " + DIV");
        f_a1c3_2d08(2, 8.5, 23.0, 1, 4, 0xb9, "          EXIT");
        do
            d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
        while (d_5d9c_9faf <= 0);
        if (d_5d9c_9faf == 1) {
            d_5d9c_9f61--;
            if (d_5d9c_9f61 < 0)
                d_5d9c_9f61 = 3;
        } else if (d_5d9c_9faf == 2) {
            d_5d9c_9f61++;
            if (d_5d9c_9f61 > 3)
                d_5d9c_9f61 = 0;
        } else
            d_5d9c_9f61 = -1;
    } while (d_5d9c_9f61 != -1);
}

/* the manager rankings */
void f_67ee_2a22(void)
{
    int i;
    char used[650];
    int order[80];
    char buf[320];

    memset(used, 0, 650);
    d_5d9c_9f53 = 1;
    d_5d9c_9b87 = 0;
    for (i = 0; i <= 79; i++) {
        d_5d9c_9f4f = -1;
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 79; d_5d9c_9f69++) {
            d_5d9c_9f51 = d_2f3c_7f93[d_5d9c_9f69];
            if (used[d_5d9c_9f51] == 0) {
                d_5d9c_9f4d = d_2f3c_5e19[d_5d9c_9f51];
                if (d_2f3c_53f1[d_5d9c_9f51] == 35)
                    d_5d9c_9f4d = 0;
                if (d_5d9c_9f4d > d_5d9c_9f5f || d_5d9c_9f4f == -1) {
                    d_5d9c_9f4f = d_5d9c_9f51;
                    d_5d9c_9f5f = d_5d9c_9f4d;
                }
            }
        }
        order[i] = d_5d9c_9f4f;
        if (d_5d9c_9f4f != -1) {
            used[d_5d9c_9f4f] = -1;
            if (d_5d9c_9f4f >= 646 && d_5d9c_9b87 == 0) {
                d_5d9c_9f53 = i / 20 + 1;
                d_5d9c_9b87 = -1;
            }
        }
    }
    do {
        d_5d9c_9f4b = (d_5d9c_9f53 - 1) * 20;
        f_a1c3_27e4("");
        f_1680_2867(1.125, 1.5, 0, 1, 0x88, "Manager Rankings");
        f_1680_2867(18.375, 1.5, 1, 4, 0x6e, " CLUB");
        f_1680_2867(32.375, 1.5, 1, 4, 0x36, " REP");
        d_5d9c_9f7f = 6;
        d_5d9c_9f7b = 14;
        d_5d9c_9f6b = 8;
        for (d_5d9c_9f6d = 1; d_5d9c_9f6d <= 20; d_5d9c_9f6d++) {
            d_5d9c_9f71 = d_5d9c_9f6d + d_5d9c_9f4b;
            d_5d9c_9f4f = order[d_5d9c_9f71 - 1];
            if (d_5d9c_9f4f == -1)
                continue;
            if (d_5d9c_9f4f >= 646)
                d_5d9c_9f65 = 9;
            else
                d_5d9c_9f65 = d_5d9c_9f6b;
            if (d_5d9c_9f71 < 100)
                sprintf(buf, " %02d ", d_5d9c_9f71);
            else
                strcpy(buf, "100 ");
            f_1680_2867(1.125, d_5d9c_9f7f + 0.25 - 3.5, 1, 12, 0, buf);
            sprintf(buf, " %s", f_a1c3_229c(d_5d9c_9f4f, 0));
            f_1680_2867(4.375, d_5d9c_9f7f + 0.25 - 3.5, 1, d_5d9c_9f65, 0x6e, buf);
            d_5d9c_9f67 = d_2f3c_5167[d_5d9c_9f4f];
            sprintf(buf, " %.17s", (char far *)d_5d9c_08bc[d_5d9c_9f67]);
            f_1680_2867(18.375, d_5d9c_9f7f + 0.25 - 3.5, 1, 2, 0x6e, buf);
            sprintf(buf, " %s", f_88c9_72fa(d_5d9c_9f4f, 0));
            f_1680_2867(32.375, d_5d9c_9f7f + 0.25 - 3.5, 1, 3, 0x36, buf);
            d_5d9c_9f7f++;
            f_14d2_148f(&d_5d9c_9f7b, &d_5d9c_9f6b, 2);
        }
        f_a1c3_2d08(2, 1.25, 23.0, 6, 2, 0x35, " - SCR");
        f_a1c3_2d08(2, 32.25, 23.0, 6, 2, 0x35, " + SCR");
        f_a1c3_2d08(2, 8.5, 23.0, 1, 4, 0xb9, "          EXIT");
        do
            d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
        while (d_5d9c_9faf <= 0);
        if (d_5d9c_9faf == 1) {
            d_5d9c_9f53--;
            if (d_5d9c_9f53 < 1)
                d_5d9c_9f53 = 4;
        } else if (d_5d9c_9faf == 2) {
            d_5d9c_9f53++;
            if (d_5d9c_9f53 > 4)
                d_5d9c_9f53 = 1;
        } else
            d_5d9c_9f53 = -1;
    } while (d_5d9c_9f53 != -1);
}

/* the hall of fame */
void f_67ee_2f13(void)
{
    char buf[320];

    f_a1c3_27e4("");
    f_1680_2867(1.125, 1.5, 0, 1, 0x88, "Hall of Fame");
    f_1680_2867(18.375, 1.5, 1, 4, 0x6e, " CLUB");
    f_1680_2867(32.375, 1.5, 1, 4, 0x36, " PTS");
    d_5d9c_9f7f = 6;
    d_5d9c_9f7b = 14;
    d_5d9c_9f6b = 8;
    d_5d9c_9fd2 = f_14d2_16bc(d_5d9c_a34e, 0);
    for (d_5d9c_9f6d = 1; d_5d9c_9f6d <= 20; d_5d9c_9f6d++) {
        sprintf(buf, " %02d ", d_5d9c_9f6d);
        f_1680_2867(1.125, d_5d9c_9f7f + 0.25 - 3.5, 1, 2, 0, buf);
        sprintf(buf, " %.17s", d_5d9c_9fd2 + (d_5d9c_9f6d - 1) * 80);
        f_1680_2867(4.375, d_5d9c_9f7f + 0.25 - 3.5, 1, d_5d9c_9f6b, 0x6e, buf);
        sprintf(buf, " %.17s", d_5d9c_9fd2 + (d_5d9c_9f6d - 1) * 80 + 1600);
        f_1680_2867(18.375, d_5d9c_9f7f + 0.25 - 3.5, 0, 6, 0x6e, buf);
        sprintf(buf, " %6ld", d_2f3c_1d40[d_5d9c_9f6d]);
        f_1680_2867(32.375, d_5d9c_9f7f + 0.25 - 3.5, 1, 9, 0x36, buf);
        d_5d9c_9f7f++;
        f_14d2_148f(&d_5d9c_9f7b, &d_5d9c_9f6b, 2);
    }
    f_a1c3_2d08(2, 1.25, 23.0, 1, 4, 0x12d, "                 EXIT");
    do
        d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
    while (d_5d9c_9faf <= 0);
}

/* per-player tables, 1702 players */
void f_67ee_3212(char year)
{
    char buf[320];

    if (d_5d9c_9fab > 11) {
        if (year) {
            strcpy(d_1f3e_5454, "");
            strcpy(d_1f3e_5404, "Year");
        } else {
            strcpy(d_1f3e_5454, " ");
            strcpy(d_1f3e_5404, "Month");
        }
        sprintf(buf, "%sly Awards", d_1f3e_5404);
        f_a1c3_27e4(buf);
        sprintf(buf, " MANAGER OF THE %s", d_1f3e_5404);
        f_1680_2867(1.125, 4.0, 0, 1, 178, buf);
        f_1680_2867(23.625, 4.0, 0, 6, 36, " PTS");
        f_1680_2867(28.375, 4.0, 0, 6, 86, " CLUB");
        for (d_5d9c_9f47 = 0; d_5d9c_9f47 <= 3; d_5d9c_9f47++) {
            sprintf(buf, " %s DIVISION", f_a1c3_261d(d_5d9c_9f47 + 1));
            f_1680_2867(1.125, d_5d9c_9f47 + 5.25, 1, d_5d9c_9f47 & 1 ? 8 : 14, 86, buf);
            if (d_5d9c_9fee[d_5d9c_9f47] != -1) {
                sprintf(buf, " %s", f_a1c3_229c(d_5d9c_9fee[d_5d9c_9f47], -1));
                f_1680_2867(12.125, d_5d9c_9f47 + 5.25, 1, d_5d9c_9fee[d_5d9c_9f47] >= 646 ? 3 : 12, 90, buf);
                sprintf(buf, "%s%ld", d_1f3e_5454, d_2f3c_0040[d_5d9c_9f47]);
                f_1680_2867(23.625, d_5d9c_9f47 + 5.25, 1, 9, 36, buf);
                sprintf(buf, " %.13s", (char far *)d_5d9c_08bc[d_2f3c_5167[d_5d9c_9fee[d_5d9c_9f47]]]);
                f_1680_2867(28.375, d_5d9c_9f47 + 5.25, 1, 2, 86, buf);
            } else {
                f_1680_2867(12.125, d_5d9c_9f47 + 5.25, 1, 12, 90, "");
                f_1680_2867(23.625, d_5d9c_9f47 + 5.25, 1, 9, 36, "");
                f_1680_2867(28.375, d_5d9c_9f47 + 5.25, 1, 2, 86, "");
            }
        }
        sprintf(buf, " SENIOR PLAYER OF THE %s", d_1f3e_5404);
        f_1680_2867(1.125, 10.0, 0, 1, 178, buf);
        f_1680_2867(23.625, 10.0, 0, 6, 36, " AV R");
        f_1680_2867(28.375, 10.0, 0, 6, 86, " CLUB");
        sprintf(buf, " YOUNG PLAYER OF THE %s", d_1f3e_5404);
        f_1680_2867(1.125, 16.0, 0, 1, 178, buf);
        f_1680_2867(23.625, 16.0, 0, 6, 36, " AV R");
        f_1680_2867(28.375, 16.0, 0, 6, 86, " CLUB");
        for (d_5d9c_9f43 = 0; d_5d9c_9f43 <= 1; d_5d9c_9f43++) {
            d_5d9c_9afc = d_5d9c_9f43 * 6 + 11.25;
            for (d_5d9c_9f45 = 0; d_5d9c_9f45 <= 3; d_5d9c_9f45++) {
                d_5d9c_9f91 = d_2f3c_0070[d_5d9c_9f43][d_5d9c_9f45];
                if (d_5d9c_9f91 != -1) {
                    sprintf(buf, " %s DIVISION", f_a1c3_261d(d_5d9c_9f45 + 1));
                    f_1680_2867(1.125, d_5d9c_9f45 + d_5d9c_9afc, 1, d_5d9c_9f45 & 1 ? 8 : 14, 86, buf);
                    sprintf(buf, " %.14s", f_a1c3_21cc(d_5d9c_9f91));
                    f_1680_2867(12.125, d_5d9c_9f45 + d_5d9c_9afc, 1, f_1680_0003(d_483b_0000[18][d_5d9c_9f91]) ? 21 : 12, 90, buf);
                    sprintf(d_1f3e_5396, "%d", (int)(d_2f3c_0050[d_5d9c_9f43][d_5d9c_9f45] * 100) / 100);
                    if (strlen(d_1f3e_5396) == 1)
                        strcat(d_1f3e_5396, ".00");
                    else if (strlen(d_1f3e_5396) == 3)
                        strcat(d_1f3e_5396, "0");
                    sprintf(buf, " %s", d_1f3e_5396);
                    f_1680_2867(23.625, d_5d9c_9f45 + d_5d9c_9afc, 1, 9, 36, buf);
                    sprintf(buf, " %.13s", (char far *)d_5d9c_08bc[d_483b_0000[18][d_5d9c_9f91]]);
                    f_1680_2867(28.375, d_5d9c_9f45 + d_5d9c_9afc, 1, 2, 86, buf);
                } else {
                    f_1680_2867(1.125, d_5d9c_9f45 + d_5d9c_9afc, 1, d_5d9c_9f45 & 1 ? 8 : 14, 86, "");
                    f_1680_2867(12.125, d_5d9c_9f45 + d_5d9c_9afc, 1, 12, 90, "");
                    f_1680_2867(23.625, d_5d9c_9f45 + d_5d9c_9afc, 1, 9, 36, "");
                    f_1680_2867(28.375, d_5d9c_9f45 + d_5d9c_9afc, 1, 2, 86, "");
                }
            }
        }
        f_a1c3_2d08(2, 1.25, 22.5, 1, 4, 301, "                 DONE");
        do {
            d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
        } while (d_5d9c_9faf <= 0);
    } else
        f_88c9_24f1("No awards yet this season");
}

void f_67ee_3b26(void)
{
    if (d_5d9c_9fab < 16)
        f_88c9_24f1("National squads not chosen");
    else
        f_67ee_3b45();
}

void f_67ee_3b45(void)
{
    char buf[320];

    do {
        f_1680_150c(0, "International Squads", "*Exit|England|Scotland|Ireland|N.Ireland|Wales|England U-21|Scotland U-21|Ireland U-21|N.Ireland U-21|Wales U-21|");
        d_5d9c_9f41 = d_5d9c_9faf;
        if (d_5d9c_9f41 > 0) {
            d_5d9c_9f3f = 0;
            strcpy(d_1f3e_5346, "");
            if (d_5d9c_9f41 > 5) {
                d_5d9c_9f3f = 1;
                strcpy(d_1f3e_5346, "U-21 ");
                d_5d9c_9f41 -= 5;
            }
            do {
                f_a1c3_27e4("International squad");
                switch (d_5d9c_9f41) {
                case 1:
                    d_5d9c_9f55 = 65;
                    break;
                case 2:
                    d_5d9c_9f55 = 20;
                    break;
                case 3:
                case 4:
                    d_5d9c_9f55 = 19;
                    break;
                case 5:
                    d_5d9c_9f55 = 18;
                    break;
                }
                sprintf(buf, " %s %s", f_992a_5114(d_5d9c_9f41 - 1), d_1f3e_5346);
                f_1680_2ea0(1.25, 4.0, d_5d9c_9f55 / 16, d_5d9c_9f55 % 16, 0, buf);
                f_1680_2867(1.125, 7.0, 1, 2, 76, " NAME");
                f_1680_2867(10.875, 7.0, 1, 2, 73, " CLUB");
                f_1680_2867(20.25, 7.0, 1, 2, 76, " NAME");
                f_1680_2867(30.0, 7.0, 1, 2, 73, " CLUB");
                f_a1c3_2c23();
                f_a1c3_2d08(2, 1.25, 22.5, 1, 4, 301, "                 EXIT");
                for (d_5d9c_9f3d = 0; d_5d9c_9f3d <= 21; d_5d9c_9f3d++) {
                    d_5d9c_9f3b = d_5d9c_0094[d_5d9c_9f3d];
                    d_5d9c_9b00 = d_5d9c_9f3d > 10 ? 20.25 : 1.125;
                    d_5d9c_9b08 = d_5d9c_9f3d > 10 ? d_5d9c_9f3d - 2 : d_5d9c_9f3d + 9;
                    d_5d9c_9f55 = d_5d9c_9f3d & 1 ? 8 : 14;
                    d_5d9c_9ff6 = f_14d2_16bc(d_5d9c_a344, 0);
                    d_5d9c_9f91 = d_5d9c_9ff6[d_5d9c_9f41 - 1][d_5d9c_9f3f][d_5d9c_9f3d];
                    if (d_5d9c_9f91 > -1) {
                        strcpy(d_1f3e_52f6, f_a1c3_2243(d_5d9c_9f91));
                        strcpy(d_1f3e_52a6, d_5d9c_08bc[d_483b_0000[18][d_5d9c_9f91]]);
                        if (f_1680_0003(d_483b_0000[18][d_5d9c_9f91]))
                            d_5d9c_9f55 = 3;
                    } else {
                        strcpy(d_1f3e_52f6, d_5471_17c4[d_5d9c_9f3b]);
                        switch (d_5d9c_9f41) {
                        case 1:
                        case 5:
                            strcpy(d_1f3e_52a6, "Non-lge");
                            break;
                        case 2:
                            strcpy(d_1f3e_52a6, "Scots-lge");
                            break;
                        case 3:
                        case 4:
                            strcpy(d_1f3e_52a6, "Irish-lge");
                            break;
                        }
                    }
                    sprintf(buf, " %.11s", d_1f3e_52f6);
                    f_a1c3_2d08(0, d_5d9c_9b00, d_5d9c_9b08, 1, d_5d9c_9f55, 76, buf);
                    sprintf(buf, " %.11s", d_1f3e_52a6);
                    f_1680_2867(d_5d9c_9b00 + 9.75, d_5d9c_9b08, 1, 4, 73, buf);
                }
                do {
                    d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
                } while (d_5d9c_9faf <= 0);
                if (d_5d9c_9faf > 1) {
                    d_5d9c_9ff6 = f_14d2_16bc(d_5d9c_a344, 0);
                    d_5d9c_9f91 = d_5d9c_9ff6[d_5d9c_9f41 - 1][d_5d9c_9f3f][d_5d9c_9faf - 2];
                    if (d_5d9c_9f91 > -1) {
                        do {
                            f_a1c3_5e7a(d_5d9c_9f91, -1, -1);
                            f_8352_4556(d_5d9c_9f91, d_5d9c_9f57);
                        } while (!d_5d9c_9b88);
                    } else
                        f_88c9_24f1("No information available");
                }
            } while (d_5d9c_9faf != 1);
        }
    } while (d_5d9c_9f41 != 0);
}

void f_67ee_4060(void)
{
    char buf[300];
    char name[80];

    do {
        f_a1c3_27e4("Fixture Info");
        f_1680_150c(0, "", "*Exit|Last Results|Next Fixtures|Next FA Cup|Next Rumbelows|Next Zenith|Next Domark|Next UEFA|Next Cup Winners|Next European|Next Playoffs|Euro Seedings|Past Winners|");
        f_1680_18b2(12);
        d_5d9c_9f39 = d_5d9c_9faf;
        if (d_5d9c_9f39 == 1) {
            if (d_5d9c_9fab > 1) {
                for (d_5d9c_9f37 = d_5d9c_9fab - 1; d_5d9c_9f37 >= 1; d_5d9c_9f37--) {
                    if (d_483b_a174[d_5d9c_9f37] > 0) {
                        f_6e68_12fd(d_5d9c_9f37, 1, -1);
                        d_5d9c_9f37 = 1;
                    }
                }
                0;      /* no code: an expression statement after the loop, which makes
                         * BCC merge the f_88c9_24f1 tails into the last copy */
            } else
                f_88c9_24f1("No matches last week");
        } else if (d_5d9c_9f39 == 2) {
            if (d_5d9c_9fab < 95) {
                d_5d9c_9f37 = d_5d9c_9fab;
                do {
                    d_5d9c_9b75 = -1;
                    if (f_992a_7831(d_5d9c_9f37)) {
                        if (d_483b_a174[d_5d9c_9f37] == 0)
                            d_5d9c_9b75 = 0;
                    } else if (d_5d9c_9f37 == 7 && d_5d9c_9ee3 == 0)
                        d_5d9c_9b75 = 0;
                    else if (d_5d9c_9f37 == 81 || d_5d9c_9f37 == 93)
                        d_5d9c_9b75 = 0;
                    else if (d_5d9c_9f37 < 5 && d_5d9c_a062[d_5d9c_9f37] == 0)
                        d_5d9c_9b75 = 0;
                    d_5d9c_9f37 += d_5d9c_9b75 != 0 ? 0 : 1;
                } while (!d_5d9c_9b75);
                f_6e68_12fd(d_5d9c_9f37, 0, -1);
            } else
                f_88c9_24f1("The season is over");
        } else if (d_5d9c_9f39 == 3) {
            if (d_5d9c_9f8d > -1) {
                if (d_5d9c_9f8d > 0)
                    f_6e68_12fd(d_5d9c_9f8d, f_992a_7831(d_5d9c_9f8d) || d_5d9c_9f8d == 88 ? 0 : 2, 1);
                else
                    f_67ee_44b1();
            } else {
                sprintf(buf, "%s won the FA Cup", (char far *)d_5d9c_08bc[d_2f3c_27e4[0][0]]);
                f_88c9_24f1(buf);
            }
        } else if (d_5d9c_9f39 == 4) {
            if (d_5d9c_9f8f > -1) {
                if (d_5d9c_9f8f > 0)
                    f_6e68_12fd(d_5d9c_9f8f, d_5d9c_9f8f == 13 || d_5d9c_9f8f == 65 || d_5d9c_9f8f == 82 || d_5d9c_9f8f == 83 ? 0 : 2, 2);
                else
                    f_67ee_44b1();
            } else {
                sprintf(buf, "%s won the Rumbelows Cup", (char far *)d_5d9c_08bc[d_2f3c_27e4[1][0]]);
                f_88c9_24f1(buf);
            }
        } else if (d_5d9c_9f39 == 5) {
            if (d_5d9c_9f35 > -1) {
                if (d_5d9c_9f35 > 0)
                    f_6e68_12fd(d_5d9c_9f35, d_5d9c_9f35 == 53 ? 0 : 2, 3);
                else
                    f_67ee_44b1();
            } else {
                sprintf(buf, "%s won the Zenith Cup", (char far *)d_5d9c_08bc[d_2f3c_27e4[2][0]]);
                f_88c9_24f1(buf);
            }
        } else if (d_5d9c_9f39 == 6) {
            if (d_5d9c_9f33 > -1) {
                if (d_5d9c_9f33 > 0)
                    f_6e68_12fd(d_5d9c_9f33, d_5d9c_9f33 == 71 || d_5d9c_9f33 == 73 ? 2 : 0, 4);
                else
                    f_67ee_44b1();
            } else {
                sprintf(buf, "%s won the Domark Cup", (char far *)d_5d9c_08bc[d_2f3c_27e4[3][0]]);
                f_88c9_24f1(buf);
            }
        } else if (d_5d9c_9f39 == 7 || d_5d9c_9f39 == 8 || d_5d9c_9f39 == 9) {
            if (d_5d9c_9f39 == 7)
                d_5d9c_9f37 = d_5d9c_9f8b;
            else if (d_5d9c_9f39 == 8)
                d_5d9c_9f37 = d_5d9c_9f89;
            else
                d_5d9c_9f37 = d_5d9c_9f87;
            if (d_5d9c_9fab <= 91) {
                if (d_5d9c_9f37 > 0) {
                    d_5d9c_9b86 = f_992a_7713(d_5d9c_9f37) || d_5d9c_9f37 == 91 && d_5d9c_9f39 == 7 ? -1 : 0;
                    d_5d9c_9b85 = d_5d9c_9f37 == 87 || d_5d9c_9f37 == 91 ? -1 : 0;
                    f_6e68_12fd(d_5d9c_9f37, d_5d9c_9b86 || d_5d9c_9b85 ? 0 : 2, d_5d9c_9f39 - 2);
                } else
                    f_67ee_44b1();
            } else {
                if (d_5d9c_9f39 == 7)
                    strcpy(name, "UEFA Cup");
                else if (d_5d9c_9f39 == 8)
                    strcpy(name, "Cup Winners Cup");
                else
                    strcpy(name, "European Cup");
                sprintf(buf, "%s won the %s", f_1680_1a91(d_2f3c_27e4[d_5d9c_9f39 - 3][0]), name);
                f_88c9_24f1(buf);
            }
        } else if (d_5d9c_9f39 == 10) {
            switch (d_5d9c_9fab) {
            case 87: case 88: case 89: case 90:
                f_6e68_12fd(90, 0, 8);
                break;
            case 91: case 92:
                f_6e68_12fd(92, 0, 8);
                break;
            case 93: case 94:
                f_6e68_12fd(94, 0, 8);
                break;
            default:
                if (d_5d9c_9fab <= 86)
                    f_88c9_24f1("Playoffs not yet decided");
                else
                    f_88c9_24f1("Playoffs have finished");
            }
        } else if (d_5d9c_9f39 == 11)
            f_67ee_44c2();
        else if (d_5d9c_9f39 == 12)
            f_9100_6dd0();
    } while (d_5d9c_9f39 != 0);
}

void f_67ee_44b1(void)
{
    f_88c9_24f1("Draw not yet made");
}

void f_67ee_44c2(void)
{
    char done[540];
    char buf[320];

    memset(done, 0, 540);
    f_a1c3_27e4("European Seedings");
    for (d_5d9c_9f31 = 4; d_5d9c_9f31 <= 6; d_5d9c_9f31++) {
        if (d_5d9c_9f31 == 4)
            strcpy(d_1f3e_5256, "UEFA CUP");
        else if (d_5d9c_9f31 == 5)
            strcpy(d_1f3e_5256, "CUP WINNERS CUP");
        else
            strcpy(d_1f3e_5256, "EUROPEAN CUP");
        sprintf(buf, " %s", d_1f3e_5256);
        f_1680_2867(1.125, (d_5d9c_9f31 - 4) * 6.25 + 4.0, 0, 1, 0x130, buf);
        for (d_5d9c_9f2f = 1; d_5d9c_9f2f <= 8; d_5d9c_9f2f++) {
            for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 539; d_5d9c_9f69++) {
                if (d_2f3c_0080[d_5d9c_9f69] == d_5d9c_9f31 && done[d_5d9c_9f69] == 0) {
                    d_5d9c_9b00 = d_5d9c_9f2f > 4 ? 20.25 : 1.125;
                    d_5d9c_9b08 = (d_5d9c_9f31 - 4) * 6.25 + 5.25 + d_5d9c_9f2f - 1 - (d_5d9c_9f2f > 4 ? 4 : 0);
                    sprintf(buf, " %.12s", f_1680_1a91(d_5d9c_9f69));
                    buf[13] = 0;
                    if (f_1680_0003(d_5d9c_9f69))
                        d_5d9c_9f6b = 3;
                    else
                        d_5d9c_9f6b = d_5d9c_9f2f & 1 ? 8 : 14;
                    f_1680_2867(d_5d9c_9b00, d_5d9c_9b08, d_5d9c_9f69 < 80 ? 6 : 1, d_5d9c_9f6b, 0x59, buf);
                    if (d_5d9c_9f69 < 80)
                        strcpy(buf, " ENGLAND");
                    else {
                        sprintf(buf, " %s", d_5471_16f0[d_5739_1b0e[d_5d9c_9f69]]);
                        buf[9] = 0;
                    }
                    f_1680_2867(d_5d9c_9b00 + 11.375, d_5d9c_9b08, 1, 2, 0x3c, buf);
                    done[d_5d9c_9f69] = -1;
                    d_5d9c_9f69 = 539;
                }
            }
        }
    }
    f_a1c3_2d08(2, 1.25, 22.5, 1, 4, 0x12d, "                 DONE");
    do
        d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
    while (d_5d9c_9faf <= 0);
}

void f_67ee_47dc(void)
{
    f_a1c3_27e4("European Cup Groups");
    f_67ee_4a20(0, 0, 4.0);
    f_67ee_4a20(0, 1, 11.375);
    f_a1c3_2d08(2, 1.25, 22.5, 1, 4, 0x12d, "                 DONE");
    do
        d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
    while (d_5d9c_9faf <= 0);
}

void f_67ee_486f(void)
{
    d_5d9c_9f2d = 0;
    for (d_5d9c_9f2b = 0; d_5d9c_9f2b <= 7; d_5d9c_9f2b++)
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 4; d_5d9c_9fa1++)
            if (f_1680_0003(d_1f3e_ff85[d_5d9c_9f2b][d_5d9c_9fa1])) {
                d_5d9c_9f2d = d_5d9c_9f2b / 2;
                d_5d9c_9fa1 = 4;
                d_5d9c_9f2b = 7;
            }
    do {
        f_a1c3_27e4("Domark Trophy");
        d_5d9c_9f2b = d_5d9c_9f2d * 2;
        f_67ee_4a20(1, d_5d9c_9f2b, 4.0);
        f_67ee_4a20(1, d_5d9c_9f2b + 1, 12.375);
        f_a1c3_2d08(2, 1.25, 22.5, 6, 2, 0x35, " - SCR");
        f_a1c3_2d08(2, 32.25, 22.5, 6, 2, 0x35, " + SCR");
        f_a1c3_2d08(2, 8.5, 22.5, 1, 4, 0xb9, "          EXIT");
        do
            d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
        while (d_5d9c_9faf <= 0);
        if (d_5d9c_9faf == 1) {
            d_5d9c_9f2d--;
            if (d_5d9c_9f2d == -1)
                d_5d9c_9f2d = 3;
        } else if (d_5d9c_9faf == 2) {
            d_5d9c_9f2d++;
            if (d_5d9c_9f2d == 4)
                d_5d9c_9f2d = 0;
        }
    } while (d_5d9c_9faf != 3);
}

/* the group table's column headings */
static char far *d_5d9c_2d53[] = {
    " P ", " W ", " D ", " L ", " F ", " A ", "PTS"
};

void f_67ee_4a20(int a, int b, float x)
{
    float y;
    float ys[7];
    char buf[320];

    sprintf(buf, " Group %c", b + 'A');
    f_1680_2867(1.125, x, 0, 1, 0x130, buf);
    f_1680_2867(1.125, x + 1.125, 1, 12, 0x50, " Team");
    for (d_5d9c_9f6d = 0, y = 11.375; d_5d9c_9f6d <= 6; d_5d9c_9f6d++, y += 4.0) {
        ys[d_5d9c_9f6d] = y;
        sprintf(buf, " %s ", d_5d9c_2d53[d_5d9c_9f6d]);
        f_1680_2867(ys[d_5d9c_9f6d], x + 1.125, 1, 2, 0, buf);
    }
    for (d_5d9c_9f71 = 0; d_5d9c_9f71 <= a + 3; d_5d9c_9f71++) {
        if (a == 0)
            d_5d9c_9f69 = d_2f3c_0030[b][d_5d9c_9f71];
        else
            d_5d9c_9f69 = d_1f3e_ff85[b][d_5d9c_9f71];
        if (f_1680_0003(d_5d9c_9f69))
            d_5d9c_9f55 = 3;
        else
            d_5d9c_9f55 = d_5d9c_9f71 & 1 ? 14 : 8;
        sprintf(buf, " %s", f_1680_1a91(d_5d9c_9f69));
        f_1680_2867(1.125, x + 2.375 + d_5d9c_9f71, a == 0 && d_5d9c_9f69 < 80 ? 6 : 1, d_5d9c_9f55, 0x50, buf);
        for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 6; d_5d9c_9f6d++) {
            if (d_5d9c_9f6d < 6) {
                if (a == 0)
                    d_5d9c_9f29 = d_2f3c_0000[d_5d9c_9f6d][b][d_5d9c_9f71];
                else
                    d_5d9c_9f29 = d_1f3e_fcb5[d_5d9c_9f6d][b][d_5d9c_9f71];
            } else {
                if (a == 0)
                    d_5d9c_9f29 = d_2f3c_0000[1][b][d_5d9c_9f71] * 2 + d_2f3c_0000[2][b][d_5d9c_9f71];
                else
                    d_5d9c_9f29 = d_1f3e_fcb5[1][b][d_5d9c_9f71] * 2 + d_1f3e_fcb5[2][b][d_5d9c_9f71];
            }
            sprintf(buf, "  %d", d_5d9c_9f29);
            f_1680_2867(ys[d_5d9c_9f6d], x + 2.375 + d_5d9c_9f71, 1, 4, 0x1e, buf);
        }
    }
    if (x > 10.0)
        f_1680_2867(1.125, x + 8.375 - (a == 0), 1, 3, 0, " Top team in each group qualifies ");
}

void f_67ee_4e10(int team)
{
    char names[4][94][20];
    char buf[320];
    unsigned char comp[94];
    unsigned char week[94];

    f_67ee_52ba(team, names, comp, week);
    for (;;) {
        d_5d9c_9f27 = d_5d9c_9f25 / 3.0 + 0.49;
        if (d_5d9c_9f27 <= 20)
            f_67ee_5ab6(-1.0, team, "Fixtures");
        else {
            f_a1c3_27e4("");
            sprintf(buf, " %s fixtures ", (char far *)d_5d9c_08bc[team]);
            f_1680_2867(1.5, 1.5, -(d_5739_00a4[team] / 16), d_5739_00a4[team] % 16, 0, buf);
        }
        d_5d9c_9f55 = 4;
        d_5d9c_9f21 = (d_5d9c_9f23 = d_5d9c_9f27) + 1;
        d_5d9c_9f1f = d_5d9c_9f27 * 2;
        d_5d9c_9f1d = d_5d9c_9f27 * 2 + 1;
        d_5d9c_9f1b = d_5d9c_9f27 * 3;
        for (d_5d9c_9f19 = 0; d_5d9c_9f25 - 1 >= d_5d9c_9f19; d_5d9c_9f19++) {
            d_5d9c_9b08 = d_5d9c_9f19 % d_5d9c_9f27 + 4.5 - (d_5d9c_9f27 > 20 ? 1.5 : 0);
            if (d_5d9c_9f19 + 1 <= d_5d9c_9f23)
                d_5d9c_9b00 = 0.5;
            else if (d_5d9c_9f19 + 1 <= d_5d9c_9f1f)
                d_5d9c_9b00 = 13.3;
            else
                d_5d9c_9b00 = 26.1;
            sprintf(buf, "%.2s", names[0][d_5d9c_9f19]);
            d_5d9c_9f59 = atol(buf);
            sprintf(buf, "%s", names[0][d_5d9c_9f19] + 2);
            f_1680_2867(d_5d9c_9b00 + 1, d_5d9c_9b08, d_5d9c_9f59 / 16, d_5d9c_9f59 % 16, 0, buf);
            if (d_5d9c_9f19 + 1 >= d_5d9c_9f17 && d_5d9c_9f17 > -1) {
                if (d_5d9c_9f19 + 1 == d_5d9c_9f17)
                    d_5d9c_9f59 = 3;
                else
                    d_5d9c_9f59 = d_5d9c_9f55;
                sprintf(buf, "%-11s", names[1][d_5d9c_9f19]);
                buf[11] = 0;
                f_1680_2867(d_5d9c_9b00 + 3.0, d_5d9c_9b08, 1, d_5d9c_9f59, 0, buf);
            } else {
                sprintf(buf, "%-11s", names[1][d_5d9c_9f19]);
                buf[11] = 0;
                f_a1c3_2d08(0, d_5d9c_9b00 + 3.0, d_5d9c_9b08, 1, d_5d9c_9f55, 0, buf);
            }
            f_1680_2867(d_5d9c_9b00 + 11.75, d_5d9c_9b08, 3, 6, 0, names[2][d_5d9c_9f19]);
            if (d_5d9c_9f55 == 12)
                d_5d9c_9f55 = 4;
            else
                d_5d9c_9f55 = 12;
        }
        d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
        if (d_5d9c_9faf <= 0)
            break;
        {
        FILE *fp;
        d_5d9c_9f15 = week[d_5d9c_9faf - 1] - 1;
        d_5d9c_9f13 = comp[d_5d9c_9f15];
        d_5d9c_9f11 = d_483b_a0ba[d_5d9c_9f15] + d_5d9c_9f13;
        fp = fopen("matchfax", "rb");
        fseek(fp, (long)(d_5d9c_9f11 - 1) * 149, 0);
        fread(d_1f3e_49e6, 1, 149, fp);
        fclose(fp);
        f_7a28_360e(d_5739_1d2a[comp[d_5d9c_9f15]][0][d_5d9c_9f15] / 32,
                    d_5739_1d2a[comp[d_5d9c_9f15]][1][d_5d9c_9f15] / 32, -1);
        }
    }
}

void f_67ee_52ba(int team, char far names[][94][20], unsigned char far *comp,
                 unsigned char far *week)
{
    d_5d9c_9f0d = -1;
    d_5d9c_9f25 = 0;
    d_5d9c_9f17 = -1;
    for (d_5d9c_9f19 = 0; d_5d9c_9f19 <= 93; d_5d9c_9f19++) {
        d_5d9c_9f0f = -1;
        for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 1; d_5d9c_9f6d++)
            for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 39; d_5d9c_9fa1++)
                if (d_5739_1d2a[d_5d9c_9fa1][d_5d9c_9f6d][d_5d9c_9f19] / 32 == team)
                    d_5d9c_9f0f = d_5d9c_9fa1;
        if (d_5d9c_9f0f > -1) {
            if (d_5d9c_9f19 < 4)
                strcpy(names[0][d_5d9c_9f25], "38PF");
            else if (d_5d9c_9f19 == 4)
                strcpy(names[0][d_5d9c_9f25], "38CH");
            else if (f_992a_70a8(d_5d9c_9f19 + 1))
                strcpy(names[0][d_5d9c_9f25], "38FA");
            else if (f_992a_74c1(d_5d9c_9f19 + 1, d_5d9c_9f0f + 1))
                strcpy(names[0][d_5d9c_9f25], "38Ru");
            else if (f_992a_752d(d_5d9c_9f19 + 1, d_5d9c_9f0f + 1))
                strcpy(names[0][d_5d9c_9f25], "38Ze");
            else if (f_992a_75bc(d_5d9c_9f19 + 1, d_5d9c_9f0f + 1))
                strcpy(names[0][d_5d9c_9f25], "38Do");
            else if (f_992a_78ca(d_5d9c_9f19 + 1))
                strcpy(names[0][d_5d9c_9f25], "38PL");
            else if (f_992a_7430(d_5d9c_9f19 + 1, d_5d9c_9f0f + 1))
                strcpy(names[0][d_5d9c_9f25], "01EC");
            else if (f_992a_7399(d_5d9c_9f19 + 1, d_5d9c_9f0f + 1))
                strcpy(names[0][d_5d9c_9f25], "01CW");
            else if (f_992a_72e8(d_5d9c_9f19 + 1, d_5d9c_9f0f + 1))
                strcpy(names[0][d_5d9c_9f25], "01UE");
            else
                strcpy(names[0][d_5d9c_9f25], "98LG");
            strcpy(names[2][d_5d9c_9f25], "");
            if (f_992a_7853(d_5d9c_9f19 + 1, d_5d9c_9f0f + 1)
                && (d_5d9c_9f19 + 1 < 94 || d_5d9c_9f0f == 0))
                strcpy(names[2][d_5d9c_9f25], "N");
            d_5d9c_9f0b = d_5739_1d2a[d_5d9c_9f0f][0][d_5d9c_9f19] / 32;
            d_5d9c_9f09 = d_5739_1d2a[d_5d9c_9f0f][1][d_5d9c_9f19] / 32;
            if (d_5d9c_9f0b == team) {
                strcpy(names[1][d_5d9c_9f25], f_1680_1a91(d_5d9c_9f09));
                if (strlen(names[2][d_5d9c_9f25]) == 0)
                    strcpy(names[2][d_5d9c_9f25], "H");
            } else {
                strcpy(names[1][d_5d9c_9f25], f_1680_1a91(d_5d9c_9f0b));
                if (strlen(names[2][d_5d9c_9f25]) == 0)
                    strcpy(names[2][d_5d9c_9f25], "A");
            }
            comp[d_5d9c_9f19] = d_5d9c_9f0f;
            week[d_5d9c_9f25] = d_5d9c_9f19 + 1;
            d_5d9c_9f25++;
            if (d_5d9c_9f17 == -1 && d_5d9c_9f19 + 1 >= d_5d9c_9fab)
                d_5d9c_9f17 = d_5d9c_9f25;
        }
    }
}

void f_67ee_5608(void)
{
    f_1680_1ad8(-1);
    if (d_5d9c_9f67 > -1) {
        if (f_1680_0003(d_5d9c_9f67))
            f_6e68_33d9(d_5d9c_9f67);
        else
            f_67ee_5641(d_5d9c_9f67);
    }
}

void f_67ee_5641(int team)
{
    char buf[320];

    do {
        f_67ee_5ab6(1.5, team, "Squad");
        f_a1c3_2d08(2, 1.5, 19.625, 6, 3, 0x46, "  GOAL");
        f_a1c3_2d08(2, 10.875, 19.625, 6, 3, 0x47, "  DISP");
        f_a1c3_2d08(2, 20.375, 19.625, 6, 3, 0x47, "  AV R");
        f_a1c3_2d08(2, 29.875, 19.625, 6, 3, 0x46, "  TEAM");
        f_a1c3_2d08(2, 1.5, 22.0, 1, 4, 0x129, "                 DONE");
        f_a1c3_2d08(2, 1.5, 4.0, 1, 14, 0x2e, " Trns");
        f_a1c3_2d08(2, 7.875, 4.0, 1, 14, 0x2d, " Staf");
        f_a1c3_2d08(2, 14.125, 4.0, 1, 14, 0x2d, " Leag");
        f_a1c3_2d08(2, 20.375, 4.0, 1, 14, 0x2d, " Fixt");
        f_a1c3_2d08(2, 26.625, 4.0, 1, 14, 0x2d, " Accs");
        f_a1c3_2d08(2, 32.875, 4.0, 1, 14, 0x2e, " Info");
        if (d_5739_13dc[team] > 0)
            f_a1c3_2d08(2, 32.875, 1.125, 1, 2, 0x2e, " Appl");
        f_1680_20c2(team);
        do
            d_5d9c_9f07 = f_a1c3_3298(0);
        while (d_5d9c_9f07 <= 0);
        if (d_5d9c_9f07 == 1 || d_5d9c_9f07 == 2 || d_5d9c_9f07 == 3)
            f_67ee_0e4c(d_5d9c_9f07 - 1, team);
        else if (d_5d9c_9f07 == 4)
            f_7555_00e9(team);
        else if (d_5d9c_9f07 == 6)
            f_67ee_5c0f(team);
        else if (d_5d9c_9f07 == 7)
            f_88c9_68aa(team);
        else if (d_5d9c_9f07 == 8)
            f_67ee_5f96(team);
        else if (d_5d9c_9f07 == 9)
            f_67ee_4e10(team);
        else if (d_5d9c_9f07 == 10) {
            if (d_5d9c_9b8d || f_14d2_0c2a(50) == 0)
                f_6e68_0027(team);
            else {
                sprintf(buf, "%s refuse access|to their accounts", (char far *)d_5d9c_08bc[team]);
                f_88c9_24f1(buf);
            }
        } else if (d_5d9c_9f07 == 11)
            f_a1c3_093a(team);
        else if (d_5d9c_9f07 == 12 && d_5739_13dc[team] > 0)
            f_6e68_084d(team);
        else if ((d_5739_13dc[team] > 0 ? 13 : 12) <= d_5d9c_9f07) {
            d_5d9c_9f3d = d_5d9c_9f07 - (d_5739_13dc[team] > 0 ? 13 : 12);
            d_5d9c_9f91 = d_2f3c_1584[d_5d9c_9f3d];
            do {
                f_a1c3_5e7a(d_5d9c_9f91, -1, -1);
                f_8352_4556(d_5d9c_9f91, d_5d9c_9f57);
            } while (!d_5d9c_9b88);
        }
    } while (d_5d9c_9f07 != 5);
}

void f_67ee_5ab6(float x, int team, char far *title)
{
    char buf[320];

    f_a1c3_27e4("");
    sprintf(d_1f3e_51b6, "%s %s", (char far *)d_5d9c_08bc[team], title);
    if (x == -1)
        d_5d9c_9af8 = 19 - strlen(d_1f3e_51b6) / 2;
    else
        d_5d9c_9af8 = x;
    f_14d2_0722(16);
    f_14d2_075a((d_5d9c_9af8 * 8 + 6), 7, ((strlen(d_1f3e_51b6) + d_5d9c_9af8) * 8 + 19), 21);
    sprintf(buf, " %s ", d_1f3e_51b6);
    f_1680_2ea0(d_5d9c_9af8, 1.125, -(d_5739_00a4[team] / 16), d_5739_00a4[team] % 16, 0, buf);
}

void f_67ee_5c0f(int team)
{
    char buf[320];
    register int y;
    register int x;

    f_67ee_5ab6(-1, team, "Transfers");
    f_1680_2867(1.125, 4, 1, 8, 150, "RECENTLY BOUGHT");
    f_1680_2867(20.375, 4, 1, 8, 150, "RECENTLY SOLD");
    for (d_5d9c_9f69 = 5; d_5d9c_9f69 >= 4; d_5d9c_9f69--) {
        d_5d9c_9b00 = d_5d9c_9f69 == 4 ? 21.375 : 2.125;
        x = d_5d9c_9f69 == 4 ? 171 : 17;
        d_5d9c_9fc2 = f_14d2_16bc(d_5d9c_a352, 0);
        strcpy(d_1f3e_5544, f_14d2_0d75(d_5d9c_9fc2[d_5d9c_9f69 - 4][team], 78));
        if (strlen(d_1f3e_5544) > 0) {
            d_5d9c_9b08 = 5.5;
            y = 44;
            d_5d9c_9a50 = 0;
            for (d_5d9c_9f6d = 1; d_5d9c_9f6d <= strlen(d_1f3e_5544); d_5d9c_9f6d += 13) {
                sprintf(d_1f3e_5166, "%13s", &d_1f3e_5544[d_5d9c_9f6d - 1]);
                d_1f3e_5166[13] = 0;
                sprintf(buf, "%4s", d_1f3e_5166);
                buf[4] = 0;
                d_5d9c_9f91 = atol(buf);
                d_5d9c_9a4c = atol(f_14d2_0dc8(d_1f3e_5166, 5, 7));
                d_5d9c_9f05 = atol(f_14d2_0d75(d_1f3e_5166, 2));
                f_1680_27aa(x, y, 6, f_a1c3_213c(d_5d9c_9f91));
                sprintf(buf, "%s %s", (char far *)d_5d9c_08bc[d_5d9c_9f05], f_88c9_27e8(d_5d9c_9a4c));
                f_1680_27aa(x, y + 8, 5, buf);
                d_5d9c_9b08 = d_5d9c_9b08 + 2.5;
                y += 20;
                d_5d9c_9a50 += d_5d9c_9a4c;
            }
            sprintf(buf, "TOTAL %s", d_5d9c_9f69 == 5 ? "SPENDING" : "INCOME");
            f_1680_27aa(x, y, 1, buf);
            sprintf(buf, "%ld", d_5d9c_9a50);
            f_1680_27aa(x + (d_5d9c_9f69 == 5 ? 90 : 78), y, 2, buf);
        } else
            f_1680_27aa(x, 48, 5, "NOBODY");
    }
    f_a1c3_2d08(2, 1.25, 22.5, 1, 4, 301, "                 DONE");
    do
        d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
    while (d_5d9c_9faf <= 0);
}

/* the league progress graph's axis labels */
static struct label d_5d9c_2d6f[] = {
    {17, 34, "1"}, {17, 62, "5"}, {11, 97, "10"}, {11, 132, "15"}, {11, 167, "20"},
    {21, 30, "1"}, {162, 30, "19"}, {314, 30, "38"}
};

void f_67ee_5f96(int team)
{
    f_67ee_5ab6(-1, team, "League Progress");
    f_14d2_0722(16);
    f_14d2_075a(19, 35, 315, 168);
    f_14d2_0722(30);
    f_14d2_075a(15, 31, 311, 164);
    f_14d2_073e(24);
    for (d_5d9c_9f81 = 15; d_5d9c_9f81 <= 311; d_5d9c_9f81 += 8)
        f_14d2_0e27(d_5d9c_9f81, 31, d_5d9c_9f81, 164);
    for (d_5d9c_9f7f = 31; d_5d9c_9f7f <= 164; d_5d9c_9f7f += 7)
        f_14d2_0e27(15, d_5d9c_9f7f, 311, d_5d9c_9f7f);
    if (d_5d9c_9f85 > 1) {
        d_5d9c_9f03 = -1;
        for (d_5d9c_9f01 = 1; d_5d9c_9f01 <= d_5d9c_9f85 - 1; d_5d9c_9f01++) {
            d_5d9c_9f81 = d_5d9c_9f01 * 8 + 7;
            d_5d9c_9f7f = d_5739_070c[d_5d9c_9f01][team] * 7 + 24;
            f_14d2_073e(18);
            f_14d2_0e27(d_5d9c_9f81 - 2, d_5d9c_9f7f + 2, d_5d9c_9f81 + 2, d_5d9c_9f7f - 2);
            f_14d2_0e27(d_5d9c_9f81 - 2, d_5d9c_9f7f - 2, d_5d9c_9f81 + 2, d_5d9c_9f7f + 2);
            if (d_5d9c_9f03 > -1) {
                f_14d2_073e(22);
                f_14d2_0e27(d_5d9c_9f03, d_5d9c_9eff, d_5d9c_9f81, d_5d9c_9f7f);
            }
            d_5d9c_9f03 = d_5d9c_9f81;
            d_5d9c_9eff = d_5d9c_9f7f;
        }
    }
    for (d_5d9c_9efd = 0; d_5d9c_9efd <= 7; d_5d9c_9efd++)
        f_1680_27aa(d_5d9c_2d6f[d_5d9c_9efd].x, d_5d9c_2d6f[d_5d9c_9efd].y, 1, d_5d9c_2d6f[d_5d9c_9efd].s);
    f_a1c3_2d08(2, 2.125, 22.75, 1, 4, 293, "                DONE");
    do
        d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
    while (d_5d9c_9faf <= 0);
}
