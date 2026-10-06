/* @at 6b47:0000 */
/* @data 5d51:06c6 */
/* @module */

/* Overlay 6b47: CM93's overlay 70a9 (games/cm93/decomp/src/70A9.C) changed for CM Italia:
 * the main menu, the league and group tables, the league progress graph and the week's
 * screens. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <stdlib.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_6b47_0000(void);
void f_6b47_0261(int n, char lit);
void f_6b47_059f(void);
void f_6b47_0654(int div);
void f_6b47_0bbb(int div, unsigned char far (*t)[20]);
char f_6b47_0e26(int pos, int div);
void f_6b47_0e63(void);
void f_6b47_0eb3(int mode, int team);
void f_6b47_18da(int mode);
void f_6b47_23e6(void);
void f_6b47_28ba(char mode);
void f_6b47_2e7d(void);
void f_6b47_3258(char year);
void f_6b47_3b53(void);
void f_6b47_3b72(void);
void f_6b47_408c(void);
void f_6b47_433d(void);
void f_6b47_434e(void);
void f_6b47_4672(void);
void f_6b47_4723(void);
void f_6b47_4a64(int a, int b, unsigned char n, char far *title, float x);
void f_6b47_4ddc(int team);
void f_6b47_5295(int team, char far names[][100][20], unsigned char far *comp, unsigned char far *week);
void f_6b47_558f(void);
void f_6b47_55c8(int team);
void f_6b47_5b29(int team);
void f_6b47_5fe4(int team);

int f_1646_6aa9(int x);
unsigned char f_1646_716c(unsigned char league);
void f_1646_4ba0(char far *title);
long f_1d5e_0df7(void);
void f_1d5e_03a3(char on);
int f_1d5e_0c17(void);
int f_1d5e_0c0f(void);
int f_1d5e_0c07(void);
void f_b0f1_0ede(void);
void f_71c8_0f70(void);
void f_71c8_0000(void);
void f_71c8_0616(void);
void f_71c8_0d91(void);
void f_71c8_1197(void);
void f_71c8_1349(void);
void f_71c8_3038(int);
char f_1646_2c1c(int);
void f_1d5e_08cc(int c);
void f_1d5e_08e2(int x1, int y1, int x2, int y2);
void f_1d5e_08d7(int c);
void f_1d5e_0fe3(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
unsigned f_1d5e_0b1c(char far *s, char far *set);
char far *f_1d5e_0e5f(char far *s);
void f_1646_38d0(float x, float y, int colour, char far *s);
void f_1646_2fa4(int n, char far *title, char far *items);
void f_1646_6097(void);
void f_1646_60a7(void);
char far *f_1646_4b1e(int division, char full);
void f_1646_3686(float x, float y, int bg, int fg, int w, char far *s);
void f_1646_357e(int x, int y, int colour, char far *s);
char f_1646_2cc9(int x);
void f_1646_50c5(int a, float x, float y, int c, int d, int e, char far *s);
void f_1d5e_13a4(void far *a, void far *b, int n);
int f_1646_5602(int a);
int f_a13d_20c9(void);
extern char d_5d51_d5e5;
extern char d_5d51_d5e6;
extern int d_5d51_d9fe;
extern int d_5d51_da06;
extern int d_5d51_da04;
extern int d_5d51_da0a;
extern int d_5d51_d9e6;
extern float d_5d51_d555;
extern float d_5d51_d551;
extern int d_5d51_d9e0;
extern int d_5d51_d9e4;
extern int d_5d51_d9e2;
extern int d_5d51_d9de;
extern int d_5d51_d9dc;
extern int d_5d51_d9da;
extern int d_5d51_d9d8;
extern int d_5d51_d9d6;
extern int d_5d51_d9d4;
extern int d_5d51_d9d2;
extern int d_5d51_d9d0;
extern int d_5d51_d9ce;
extern int d_5d51_d9cc;
extern int d_5d51_d9ca;
extern int d_5d51_d9c8;
extern int d_5d51_d9c6;
extern char near *d_5d51_b476[];
extern unsigned char far d_3404_0dce[];
extern unsigned char far d_3404_0dde[];
extern char far d_2414_5164[];
extern char far d_2414_5114[];
extern char far d_2414_50c4[];
extern char far d_2414_52a4[][2];
extern unsigned char far d_44d7_92f8[][20];
void f_1646_0003(float x, int team, char far *title);
void f_a13d_22c6(char far *title);
void f_1d5e_0929(int x1, int y1, int x2, int y2);
void f_1646_0bf2(char far *);
void f_1646_5869(int team);
void f_1646_545c(int a, char b);
int f_1d5e_1308(int a, int b);
int f_9e79_0000(int x);
extern char d_5d51_d5e3;
extern int far d_2414_eda8[][4][2][30];
extern unsigned char far d_44d7_0000[][1500];
extern unsigned char far d_3c0d_0000[][1500];
extern int far d_44d7_9624[][26];
extern unsigned char far d_3404_4eb2[];
extern char far d_2414_5074[];
extern char far d_2414_5024[];
extern int d_5d51_da1a;
extern int d_5d51_dd9c;
extern int d_5d51_dd92;
extern int (far *d_5d51_da4c)[1500];
extern unsigned char (far *d_5d51_da38)[1500];
void far *f_1d5e_1618(int handle, int page);
extern char d_5d51_d5e7;
extern char d_5d51_d5e8;
extern int d_5d51_dab2[];
extern int d_5d51_da0c;
extern unsigned char far d_3404_0728[];
extern char far d_2414_54fa[];
extern char far d_2414_54d4[];
extern char far d_2414_54d8[];
extern unsigned char far d_3404_45f2[];
extern unsigned char far d_3404_461a[];
extern unsigned char far d_3404_4642[];
extern unsigned char far d_3404_466a[];
extern unsigned char far d_3404_4692[];
extern unsigned char far d_3404_46ba[];
extern unsigned char far d_3404_46e2[];
extern unsigned char far d_3404_470a[];
extern unsigned char far d_3404_4732[];
extern unsigned char far d_3404_475a[];
void f_1646_3e54(float x, float y, int a, int b, int c, char far *s);
void f_1646_459b(float x, float y, int team);
char far *f_1646_470f(int player);
void f_a13d_4a1b(int player, int a, char b);
void f_8539_4fbd(int player, int a);
extern char d_5d51_d5df;
extern char d_5d51_d5e0;
extern char d_5d51_d5e1;
extern char d_5d51_d5e2;
extern float d_5d51_d549;
extern float d_5d51_d54d;
extern int d_5d51_d9ba;
extern int d_5d51_d9bc;
extern int d_5d51_d9be;
extern int d_5d51_d9c0;
extern int d_5d51_d9c2;
extern int d_5d51_d9c4;
extern int d_5d51_d9f0;
extern char far d_2414_caf0[];
extern char far d_2414_5488[];
extern char far d_2414_5462[];
extern unsigned char far d_3404_4552[];
char far *f_1646_4919(int manager, char full);
extern long d_5d51_d4a5;
extern long d_5d51_d4a1;
extern int d_5d51_d9b8;
extern int d_5d51_d9ac;
extern char far d_2414_5416[];
extern char far d_2414_53f0[];
extern char far d_2414_5350[];
extern char far d_2414_29f6[];
extern char far d_2414_29a6[];
extern char far d_2414_0780[][82][5];
extern unsigned char far d_3404_452a[];
extern unsigned char far d_3404_4dc2[];
extern unsigned char far d_3404_4dea[];
char far *f_9182_14f6(int a, int b);
extern long d_5d51_d49d;
extern int d_5d51_d9ae;
extern int d_5d51_d9b0;
extern int d_5d51_d9b2;
extern int d_5d51_d9b4;
extern int d_5d51_d9b6;
extern char d_5d51_d5de;
extern int d_5d51_dd8a;
extern int d_5d51_dda0;
extern long far *d_5d51_da54;
extern char far *d_5d51_da28;
char far *f_1646_48c0(int player);
char far *f_1646_4849(int player);
extern int d_5d51_d9aa;
extern int d_5d51_d9a6;
extern int d_5d51_d9a8;
extern int d_5d51_d9a4;
extern int d_5d51_d9a2;
extern int d_5d51_d9a0;
extern int d_5d51_d99e;
extern int d_5d51_d940[];
extern float d_5d51_d545;
extern unsigned char d_5d51_0094[];
extern int (far *d_2414_af3c)[2][22];
extern char far d_2414_52b0[];
extern char far d_2414_5260[];
extern char far d_2414_51f2[];
extern char far d_2414_51a2[];
extern char far d_2414_5152[];
extern char far d_2414_5102[];
void f_1646_3348(int last);
void f_71c8_13ca(int, int, int);
char f_1646_2b06(int);
char far *f_1646_3537(int x);
void f_9182_6751(void);
extern int d_5d51_d99c;
extern int d_5d51_d99a;
extern int d_5d51_d948;
extern char d_5d51_d5ca;
extern char d_5d51_d5dd;
extern char d_5d51_d5dc;
extern int d_5d51_d9ee;
extern int d_5d51_d998;
extern int d_5d51_d9ec;
extern int d_5d51_d9ea;
extern int d_5d51_d996;
extern int d_5d51_d994;
extern char far d_2414_50b2[];
extern unsigned char far d_3404_1176[];
extern int d_5d51_d992;
extern int d_5d51_d990;
extern int far d_2414_ff85[][5];
extern int d_5d51_d98e;
extern unsigned char far d_2414_fcb5[][8][5];
void f_7c1d_3ca2(int a, int b, char c);
char f_1646_2646(int);
char f_1646_2674(int);
char f_1646_2833(int, int);
char f_1646_28e4(int, int);
char f_1646_297b(int, int);
char f_1646_2b65(int a, int b);
void f_9e79_1103(int);
void f_9e79_16c0(int team, char reserves);
void f_76ea_00eb(int team);
long f_1d5e_0d6a(long n);
void f_71c8_0027(int team);
void f_a13d_09a0(int team);
void f_71c8_0855(int team);
extern unsigned char far d_3404_448a[];
extern int far d_3404_1392[][2][94];
extern char far d_2414_4842[];
extern int d_5d51_d96c;
extern int d_5d51_d96e;
extern int d_5d51_d970;
extern int d_5d51_d972;
extern int d_5d51_d974;
extern int d_5d51_d976;
extern int d_5d51_d978;
extern int d_5d51_d97a;
extern int d_5d51_d97c;
extern int d_5d51_d982;
extern int d_5d51_d984;
extern int d_5d51_d986;
extern int d_5d51_d988;
extern int d_5d51_d98a;
extern int d_5d51_d98c;
char far *f_1d5e_0f31(char far *s, unsigned n);
char far *f_1d5e_0f84(char far *s, unsigned i, unsigned n);
char far *f_1646_0ee9(long amount);
struct label { int x, y; char far *s; };
extern char far d_2414_5012[];
extern char far d_2414_53a0[];
extern char far d_2414_4fc2[];
extern unsigned char far d_3404_47aa[][40];
extern float d_5d51_d541;
extern int d_5d51_dd9a;
extern int far *d_5d51_da50;
extern long d_5d51_d499;
extern int d_5d51_d968;
extern int d_5d51_d966;
extern int d_5d51_d964;
extern int d_5d51_d962;
extern char far *d_5d51_d9f2;
unsigned char f_b0f1_0939(char team);
extern char far d_2414_4f84[];
extern char far d_2414_4e94[];
extern char far d_2414_20e4[];
extern char far d_2414_2094[];
extern char far d_2414_1e28[][40][5];
extern long far d_3404_4012[];
extern int far d_3404_4226[];
extern int d_5d51_dd9e;
extern unsigned char far d_3404_1abe[];
extern unsigned char far d_3404_1d48[];
extern unsigned char far d_3404_2770[];
extern long far d_2414_fe54[][2];
extern char d_5d51_d55a;
extern char far d_2414_4df4[];
extern char far d_2414_4da4[];
extern char far d_2414_4d36[];
extern char far d_2414_4ce6[];
extern char far d_2414_4c96[];
extern char far d_2414_4c46[];
extern long far d_2414_d5f4[];
extern int far d_2414_d604[];
extern float far d_2414_d60c[][4];
extern int far d_2414_d62c[][4];
extern int far d_2414_d63c[][22];
extern unsigned char far d_3c0d_2904[];
extern unsigned char far d_44d7_6978[];
extern unsigned char far d_2401_0000[];
extern char far * far d_4f37_0000[];
extern char far * far d_4f37_0593[];
void f_1646_5020(void);
char f_1646_6f38(int player);
extern int far d_44d7_94c2[];
extern int far d_2414_d578[][5];
extern char far d_2414_4bf6[];
extern unsigned char far d_2414_d8c4[];
extern unsigned char far d_4f37_1176[];
extern int far d_3404_0906[][80];
void f_1d5e_1a24();
char f_1646_2a0c(int, int);
extern int d_5d51_d97e;
extern int far d_4f37_1392[][2][100];
extern int far d_44d7_93fc[];
extern char far d_2414_0078[];
extern char far d_2414_8414[];
extern int far d_2414_d5e4[][4];
extern unsigned char far d_2414_d5b4[][2][4];
extern unsigned char far d_2414_d3e0[][6][5];
char f_1646_5dff(int player);
void f_b8e8_0000(char team);
void f_9182_0a23(int team);
void f_a7f0_3545(char team, char n);
void f_b0f1_5b78(char team);
extern long d_5d51_d495;
extern int d_5d51_d96a;
extern int far d_2414_ed6c[];
extern long far d_3404_3e4a[][38];
struct transfers { int in[6], out[6]; /* the players */ unsigned char in_club[6], out_club[6]; /* the other club */ long in_fee[6], out_fee[6]; /* the fee, 1 for a loan */ unsigned char n_in, n_out; /* how many so far */ };
extern struct transfers far d_2414_97a8[];
extern int d_5d51_da0e;
unsigned char f_1646_717d(char team);
extern int d_5d51_d9e8;
extern unsigned char d_5d51_d406;
extern int far d_3404_0816[][100];
char f_1646_2ba4(int);

/* the main menu: per item, the button's position and colour */
static unsigned char d_5d51_06c6[][3] = {
    {8, 32, 4}, {164, 32, 12}, {242, 32, 4}, {8, 88, 12}, {86, 88, 4}, {164, 88, 12},
    {242, 88, 4}, {8, 144, 4}, {86, 144, 12}, {164, 144, 4}, {242, 144, 12}
};

void f_6b47_0000(void)
{
    char buf[320];

    d_5d51_d5e6 = -1;
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 15; d_5d51_d9fe++)
        d_3404_0dde[d_5d51_d9fe] = d_3404_0dce[d_5d51_d9fe] = d_5d51_d9fe > 10 ? 4 : 0;
    do {
        sprintf(buf, "Week %d %s %d", f_1646_6aa9(d_5d51_da06),
                d_5d51_da06 > 12 ? "Season" : "Preseason", d_5d51_da04);
        f_1646_4ba0(buf);
        for (d_5d51_d9e6 = 0; d_5d51_d9e6 <= 10; d_5d51_d9e6++)
            f_6b47_0261(d_5d51_d9e6, 0);
        d_5d51_d555 = f_1d5e_0df7();
        f_1d5e_03a3(0);
        do {
            d_5d51_d9e0 = -1;
            if (f_1d5e_0c17() > 0) {
                for (d_5d51_d9e6 = 0; d_5d51_d9e6 <= 10; d_5d51_d9e6++) {
                    d_5d51_d9e4 = d_5d51_06c6[d_5d51_d9e6][0];
                    d_5d51_d9e2 = d_5d51_06c6[d_5d51_d9e6][1];
                    if (f_1d5e_0c0f() >= d_5d51_d9e4
                        && f_1d5e_0c0f() <= d_5d51_d9e4 + (d_5d51_d9e6 == 0 ? 148 : 70)
                        && f_1d5e_0c07() >= d_5d51_d9e2
                        && f_1d5e_0c07() <= d_5d51_d9e2 + 48) {
                        f_6b47_0261(d_5d51_d9e6, -1);
                        d_5d51_d9e0 = d_5d51_d9e6;
                        d_5d51_d9e6 = 10;
                    }
                }
            }
            if (d_5d51_d5e5 && f_1d5e_0df7() - d_5d51_d555 > 400 && d_5d51_d9e0 == -1) {
                d_5d51_d9e0 = 0;
                f_6b47_0261(0, -1);
            }
        } while (d_5d51_d9e0 <= -1);
        f_1d5e_03a3(1);
        if (d_5d51_d9e0 > 0) {
            switch (d_5d51_d9e0) {
            case 1: f_6b47_059f(); break;
            case 2: f_6b47_408c(); break;
            case 3: f_6b47_558f(); break;
            case 4:
                if (d_5d51_da06 > 12)
                    f_71c8_0f70();
                else
                    f_b0f1_0ede();
                break;
            case 5: f_71c8_0000(); break;
            case 6: f_71c8_0616(); break;
            case 7: f_71c8_0d91(); break;
            case 8: f_6b47_3b53(); break;
            case 9: f_71c8_1197(); break;
            case 10: f_71c8_1349(); break;
            }
        }
    } while (d_5d51_d9e0 != 0);
    d_5d51_d5e6 = 0;
}

/* the main menu's labels (the first and sixth are rewritten each week) */
static char far *d_5d51_06e7[] = {
    "Sunday Fixtures", "View Tables", "Fixture Info", "Club Details", "Match Reports",
    "Find Player", "Board Resign", "Manager Jobs", "National Squads", "Game Options",
    "Save Game"
};

void f_6b47_0261(int n, char lit)
{
    if (n == 0 && d_5d51_da06 > 100)
        strcpy(d_2414_5164, "New Season");
    else if (n == 0 && f_1646_2c1c(d_5d51_da06) == 0)
        strcpy(d_2414_5164, "Continue Season");
    else if (n == 0 && d_5d51_da06 % 2 == 1)
        strcpy(d_2414_5164, "Midweek Fixtures");
    else if (n == 4 && d_5d51_da06 <= 12)
        strcpy(d_2414_5164, "Arrange Friendly");
    else if (n == 5 && d_5d51_d5e5)
        strcpy(d_2414_5164, "Short Lists");
    else
        strcpy(d_2414_5164, d_5d51_06e7[n]);
    d_5d51_d9e4 = d_5d51_06c6[n][0];
    d_5d51_d9e2 = d_5d51_06c6[n][1];
    /* Italia draws every button in colour 13 (the table's third column is not read) */
    d_5d51_d9de = lit ? 8 : 13;
    d_5d51_d9dc = n == 0 ? 148 : 70;
    f_1d5e_08cc(16);
    f_1d5e_08e2(d_5d51_d9e4 + 4, d_5d51_d9e2 + 4,
                d_5d51_d9e4 + d_5d51_d9dc + 4, d_5d51_d9e2 + 52);
    f_1d5e_08cc(d_5d51_d9de + 16);
    f_1d5e_08e2(d_5d51_d9e4, d_5d51_d9e2, d_5d51_d9e4 + d_5d51_d9dc, d_5d51_d9e2 + 48);
    if (d_5d51_d9de == 13)
        d_5d51_d9da = 2;
    else if (d_5d51_d9de == 4)
        d_5d51_d9da = 12;
    else
        d_5d51_d9da = 1;
    f_1d5e_08d7(d_5d51_d9da + 16);
    f_1d5e_0fe3(d_5d51_d9e4, d_5d51_d9e2 + 48, d_5d51_d9e4, d_5d51_d9e2);
    f_1d5e_0fe3(d_5d51_d9e4, d_5d51_d9e2, d_5d51_d9e4 + d_5d51_d9dc, d_5d51_d9e2);
    f_1d5e_08d7(16);
    f_1d5e_0fe3(d_5d51_d9e4 + d_5d51_d9dc, d_5d51_d9e2,
                d_5d51_d9e4 + d_5d51_d9dc, d_5d51_d9e2 + 48);
    f_1d5e_0fe3(d_5d51_d9e4 + d_5d51_d9dc, d_5d51_d9e2 + 48,
                d_5d51_d9e4, d_5d51_d9e2 + 48);
    d_5d51_d9d8 = f_1d5e_0b1c(d_2414_5164, " ");
    strcpy(d_2414_5114, d_2414_5164);
    d_2414_5114[d_5d51_d9d8 - 1] = 0;
    strcpy(d_2414_50c4, &d_2414_5164[d_5d51_d9d8]);
    d_5d51_d9d6 = d_5d51_d9dc / 2 - strlen(d_2414_5114) * 4;
    f_1646_38d0((d_5d51_d9e4 + d_5d51_d9d6 + 8) / 8.0, (d_5d51_d9e2 + 23) / 8.0, 6,
                f_1d5e_0e5f(d_2414_5114));
    d_5d51_d9d6 = d_5d51_d9dc / 2 - strlen(d_2414_50c4) * 4;
    f_1646_38d0((d_5d51_d9e4 + d_5d51_d9d6 + 8) / 8.0, (d_5d51_d9e2 + 31) / 8.0, 6,
                f_1d5e_0e5f(d_2414_50c4));
}

void f_6b47_059f(void)
{
    do {
        f_1646_2fa4(0, "Tables/Awards", "*Exit|League Tables|Group Tables|Top Goalscorers|Worst Discipline|Average Ratings|M/O/M Awards|Team Form Guide|Average Gates|Manager Scores|Manager Rankings|Manager Salary|Hall Of Fame|Monthly Awards|");
        d_5d51_d9d4 = d_5d51_da0a;
        switch (d_5d51_d9d4) {
        case 1:
            f_6b47_0654(-1);
            break;
        case 2:
            f_6b47_0e63();
            break;
        case 3:
        case 4:
        case 5:
        case 6:
            f_6b47_0eb3(d_5d51_d9d4 - 3, -1);
            break;
        case 7:
            f_6b47_18da(0);
            break;
        case 8:
            f_6b47_18da(1);
            break;
        case 9:
            f_6b47_23e6();
            break;
        case 10:
            f_6b47_28ba(0);
            break;
        case 11:
            f_6b47_28ba(1);
            break;
        case 12:
            f_6b47_2e7d();
            break;
        case 13:
            f_6b47_3258(0);
            break;
        }
    } while (d_5d51_d9d4 != 0);
}

/* the league table's column headings */
static char far *d_5d51_0713[] = {
    "PL", "W", "D", "L", "F", "A", "W", "D", "L", "F", "A", "PT"
};

void f_6b47_0654(int div)
{
    int y;
    char buf[320];

    memset(d_44d7_92f8, 0, 260);
    if (div == -1)
        d_5d51_d9d2 = f_a13d_20c9();
    else
        d_5d51_d9d2 = div;
    do {
        f_6b47_0bbb(d_5d51_d9d2, d_44d7_92f8);
        f_1646_6097();
        f_1646_4ba0("");
        sprintf(buf, " %s", f_1646_4b1e(d_5d51_d9d2 + 1, 0));
        f_1646_3686(1.125, 1.25, 1, 2, 0x61, buf);
        for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 11; d_5d51_d9d0++) {
            sprintf(buf, "%-2s", d_5d51_0713[d_5d51_d9d0]);
            f_1646_3686(d_5d51_d9d0 * 2 + 15.625 + (d_5d51_d9d0 == 0 ? -1 : 0), 1.25, 1, 8, 0, buf);
        }
        d_5d51_d551 = 2.5;
        y = 20;
        d_5d51_d9de = d_5d51_d9d2 == 0 ? 14 : 4;
        d_5d51_d9ce = d_5d51_d9d2 == 0 ? 8 : 12;
        for (d_5d51_d9cc = 0; d_5d51_d9cc <= f_1646_716c(d_5d51_d9d2) - 1; d_5d51_d9cc++) {
            f_1646_357e(11, y, 1, d_2414_52a4[d_5d51_d9cc]);
            if (f_1646_2cc9(d_5d51_d9ca = d_44d7_92f8[0][d_5d51_d9cc]))
                d_5d51_d9c8 = 3;
            else
                d_5d51_d9c8 = d_5d51_d9ce;
            sprintf(buf, " %.15s", (char far *)d_5d51_b476[d_5d51_d9ca]);
            f_1646_50c5(0, 1.125, d_5d51_d551, 1, d_5d51_d9c8, 0x61, buf);
            sprintf(buf, "%-2d", d_44d7_92f8[1][d_5d51_d9cc]);
            f_1646_357e(125, y, 5, buf);
            for (d_5d51_d9fe = 2; d_5d51_d9fe <= 11; d_5d51_d9fe++) {
                sprintf(buf, "%-2d", d_44d7_92f8[d_5d51_d9fe][d_5d51_d9cc]);
                f_1646_357e((d_5d51_d9fe - 2) * 16 + 149, y, d_5d51_d9fe > 6 ? 1 : 6, buf);
            }
            sprintf(buf, "%-2d", d_44d7_92f8[12][d_5d51_d9cc]);
            f_1646_3686(37.625, d_5d51_d551, 1, 2, 0, buf);
            if (f_6b47_0e26(d_5d51_d9cc, d_5d51_d9d2)) {
                f_1d5e_08d7(22);
                f_1d5e_0fe3(8, d_5d51_d551 * 8.0 + 2.0, 105, d_5d51_d551 * 8.0 + 2.0);
                d_5d51_d551 = d_5d51_d551 + 1.125;
                y += 9;
            } else {
                d_5d51_d551 += 1;
                y += 8;
            }
            f_1d5e_13a4(&d_5d51_d9de, &d_5d51_d9ce, 2);
        }
        f_1646_60a7();
        f_1646_50c5(2, 1.25, 22.75, 6, 2, 0x35, " - SER");
        f_1646_50c5(2, 32.25, 22.75, 6, 2, 0x35, " + SER");
        f_1646_50c5(2, 8.5, 22.75, 1, 4, 0xb9, "          EXIT");
        do
            d_5d51_da0a = f_1646_5602(d_5d51_d9c6);
        while (d_5d51_da0a <= 0);
        if (d_5d51_da0a >= 1 && d_5d51_da0a <= f_1646_716c(d_5d51_d9d2)) {
            if (f_1646_2cc9(d_5d51_d9cc = d_44d7_92f8[0][d_5d51_da0a - 1]))
                f_71c8_3038(d_5d51_d9cc);
            else
                f_6b47_55c8(d_5d51_d9cc);
        } else if (d_5d51_da0a == f_1646_716c(d_5d51_d9d2) + 1) {
            d_5d51_d9d2--;
            if (d_5d51_d9d2 < 0)
                d_5d51_d9d2 = 1;
        } else if (d_5d51_da0a == f_1646_716c(d_5d51_d9d2) + 2) {
            d_5d51_d9d2++;
            if (d_5d51_d9d2 > 1)
                d_5d51_d9d2 = 0;
        } else if (d_5d51_da0a == f_1646_716c(d_5d51_d9d2) + 3)
            d_5d51_d9d2 = -1;
    } while (d_5d51_d9d2 != -1);
}

void f_6b47_0bbb(int div, unsigned char far (*t)[20])
{
    d_5d51_d9d4 = 0;
    for (d_5d51_d9d0 = div * 18; d_5d51_d9d0 <= div * 18 + f_1646_716c(div) - 1; d_5d51_d9d0++) {
        d_5d51_d9ca = d_3404_0728[d_5d51_d9d0];
        strcpy(d_2414_52a4[d_5d51_d9d4], " ");
        if (d_3404_45f2[d_5d51_d9ca] == 1)
            strcpy(d_2414_52a4[d_5d51_d9d4], "R");
        else if (d_3404_45f2[d_5d51_d9ca] == 3)
            strcpy(d_2414_52a4[d_5d51_d9d4], "P");
        else if (d_3404_45f2[d_5d51_d9ca] == 4)
            strcpy(d_2414_52a4[d_5d51_d9d4], "C");
        t[0][d_5d51_d9d4] = d_5d51_d9ca;
        t[1][d_5d51_d9d4] = div == 0 ? d_5d51_da0e : d_5d51_da0c;
        t[2][d_5d51_d9d4] = d_3404_461a[d_5d51_d9ca] - d_3404_46ba[d_5d51_d9ca];
        t[3][d_5d51_d9d4] = f_1d5e_1308((div == 0 ? d_5d51_da0e : d_5d51_da0c) - d_3404_461a[d_5d51_d9ca]
                                        - d_3404_4642[d_5d51_d9ca], 0)
                            - d_3404_46e2[d_5d51_d9ca];
        t[4][d_5d51_d9d4] = d_3404_4642[d_5d51_d9ca] - d_3404_470a[d_5d51_d9ca];
        t[5][d_5d51_d9d4] = d_3404_466a[d_5d51_d9ca] - d_3404_4732[d_5d51_d9ca];
        t[6][d_5d51_d9d4] = d_3404_4692[d_5d51_d9ca] - d_3404_475a[d_5d51_d9ca];
        t[7][d_5d51_d9d4] = d_3404_46ba[d_5d51_d9ca];
        t[8][d_5d51_d9d4] = d_3404_46e2[d_5d51_d9ca];
        t[9][d_5d51_d9d4] = d_3404_470a[d_5d51_d9ca];
        t[10][d_5d51_d9d4] = d_3404_4732[d_5d51_d9ca];
        t[11][d_5d51_d9d4] = d_3404_475a[d_5d51_d9ca];
        t[12][d_5d51_d9d4] = f_9e79_0000(d_5d51_d9d0);
        d_5d51_d9d4++;
    }
}

char f_6b47_0e26(int pos, int div)
{
    d_5d51_d5e3 = 0;
    if ((pos == 0 && div == 0)
        || (pos == 13 && div == 0)
        || (pos == 3 && div == 1)
        || (pos == 15 && div == 1))
        d_5d51_d5e3 = -1;
    return d_5d51_d5e3;
}

void f_6b47_0e63(void)
{
    do {
        f_1646_2fa4(0, "Group Tables", "*Exit|European Cup|Anglo-Ital Cup|");
        if (d_5d51_da0a == 1) {
            if (d_5d51_da06 <= 35)
                f_1646_0bf2("Groups not yet decided");
            else
                f_6b47_4672();
        } else if (d_5d51_da0a == 2)
            f_6b47_4723();
    } while (d_5d51_da0a > 0);
}

void f_6b47_0eb3(int mode, int team)
{
    char shown;
    char sel[1500];
    int list[30];
    char buf[320];

    d_5d51_d5e2 = team < 0 ? -1 : 0;
    if (d_5d51_d5e2)
        d_5d51_d9c4 = f_a13d_20c9();
    for (;;) {
        memset(sel, 0, 1500);
        shown = 0;
        memset(list, -1, 60);
        f_1646_6097();
        if (mode == 0) {
            f_1646_4ba0(d_5d51_d5e2 ? "Top Goalscorers" : "Goalscorers");
        } else if (mode == 1) {
            f_1646_4ba0(d_5d51_d5e2 ? "Worst Discipline" : "Discipline");
        } else if (mode == 2) {
            f_1646_4ba0(d_5d51_d5e2 ? "Top Av Ratings" : "Av Ratings");
        } else if (mode == 3) {
            f_1646_4ba0(d_5d51_d5e2 ? "Most M/O/M Awards" : "M/O/M Awards");
        }
        if (d_5d51_d5e2) {
            sprintf(buf, " %s ", f_1646_4b1e(d_5d51_d9c4 + 1, 0));
            f_1646_3e54(1.25, 4.0, 0, 9, 0, buf);
        } else
            f_1646_459b(1.25, 4.0, team);
        d_5d51_d9de = (d_5d51_d5e2 && d_5d51_d9c4 == 0) || (team < 18 && !d_5d51_d5e2) ? 14 : 4;
        d_5d51_d9ce = (d_5d51_d5e2 && d_5d51_d9c4 == 0) || (team < 18 && !d_5d51_d5e2) ? 8 : 12;
        d_5d51_d5e1 = 0;
        d_5d51_d9c2 = -1;
        for (d_5d51_d9d4 = 0; d_5d51_d9d4 <= 29; d_5d51_d9d4++) {
            d_5d51_d9f0 = -1;
            d_5d51_d9c0 = 0;
            if (d_5d51_d5e1 == 0) {
                if (d_5d51_d5e2) {
                    if (d_2414_eda8[d_5d51_d9c4][mode][0][d_5d51_d9d4] == -2) {
                        for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= d_5d51_da1a - 1; d_5d51_d9d0++) {
                            int k;
                            k = f_1646_717d(d_44d7_0000[18][d_5d51_d9d0]);
                            if (sel[d_5d51_d9d0] == 0 && k == d_5d51_d9c4) {
                                d_5d51_d9be = 0;
                                if (mode == 0)
                                    d_5d51_d9be = d_3c0d_0000[1][d_5d51_d9d0];
                                else if (mode == 1)
                                    d_5d51_d9be = d_3c0d_0000[2][d_5d51_d9d0] - d_3c0d_0000[2][d_5d51_d9d0] % 5;
                                else if (mode == 2) {
                                    if (d_3c0d_0000[0][d_5d51_d9d0] > (d_5d51_d9c4 == 0 ? d_5d51_da0e : d_5d51_da0c) / 2) {
                                        d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
                                        d_5d51_d9be = (float)d_5d51_da4c[0][d_5d51_d9d0] / d_3c0d_0000[0][d_5d51_d9d0] * 1000;
                                    }
                                } else if (mode == 3) {
                                    d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 0);
                                    d_5d51_d9be = d_5d51_da38[3][d_5d51_d9d0];
                                }
                                if (d_5d51_d9be > d_5d51_d9c0) {
                                    d_5d51_d9f0 = d_5d51_d9d0;
                                    d_5d51_d9c0 = d_5d51_d9be;
                                }
                            }
                        }
                        d_2414_eda8[d_5d51_d9c4][mode][0][d_5d51_d9d4] = d_5d51_d9f0;
                        d_2414_eda8[d_5d51_d9c4][mode][1][d_5d51_d9d4] = d_5d51_d9c0;
                    } else {
                        d_5d51_d9f0 = d_2414_eda8[d_5d51_d9c4][mode][0][d_5d51_d9d4];
                        d_5d51_d9c0 = d_2414_eda8[d_5d51_d9c4][mode][1][d_5d51_d9d4];
                    }
                } else {
                    for (d_5d51_d9fe = 0; d_5d51_d9fe <= d_3404_4552[team] - 1; d_5d51_d9fe++) {
                        d_5d51_d9d0 = d_44d7_9624[team][d_5d51_d9fe];
                        d_5d51_d9be = 0;
                        if (sel[d_5d51_d9d0] == 0) {
                            if (mode == 0)
                                d_5d51_d9be = d_3c0d_0000[13][d_5d51_d9d0];
                            else if (mode == 1)
                                d_5d51_d9be = d_3c0d_0000[2][d_5d51_d9d0] - d_3c0d_0000[2][d_5d51_d9d0] % 5;
                            else if (mode == 2) {
                                if (d_3c0d_0000[12][d_5d51_d9d0] > 0) {
                                    d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
                                    d_5d51_d9be = (float)d_5d51_da4c[2][d_5d51_d9d0] / d_3c0d_0000[12][d_5d51_d9d0] * 1000;
                                }
                            } else if (mode == 3) {
                                d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 0);
                                d_5d51_d9be = d_5d51_da38[3][d_5d51_d9d0];
                            }
                            if (d_5d51_d9be > d_5d51_d9c0) {
                                d_5d51_d9f0 = d_5d51_d9d0;
                                d_5d51_d9c0 = d_5d51_d9be;
                            }
                        }
                    }
                }
            }
            d_5d51_d9bc = d_5d51_d9ce;
            if (d_5d51_d9f0 > -1 && (d_5d51_d9c0 > 0 && d_5d51_d5e2 || d_5d51_d5e2 == 0)) {
                sprintf(d_2414_5074, " %.17s", f_1646_470f(d_5d51_d9f0));
                if (mode != 2) {
                    if (d_5d51_d9c0 > 0)
                        sprintf(d_2414_5024, " %02d", d_5d51_d9c0);
                    else
                        strcpy(d_2414_5024, " --");
                } else if (d_5d51_d9c0 > 0) {
                    d_5d51_d54d = d_5d51_d9c0 / 1000.0;
                    sprintf(d_2414_5024, "%4.2f", d_5d51_d54d);
                    d_2414_5024[4] = 0;
                } else
                    strcpy(d_2414_5024, "----");
                sel[d_5d51_d9f0] = -1;
                list[d_5d51_d9d4] = d_5d51_d9f0;
                d_5d51_d9c2 = d_5d51_d9d4;
                if (d_5d51_d5e2 && f_1646_2cc9(d_44d7_0000[18][d_5d51_d9f0]))
                    d_5d51_d9bc = 3;
            } else {
                strcpy(d_2414_5074, "");
                strcpy(d_2414_5024, "");
                d_5d51_d5e1 = -1;
            }
            if (d_5d51_d9d4 < 15) {
                d_5d51_d549 = 1.125;
                d_5d51_d551 = d_5d51_d9d4 + 7.25;
            } else {
                d_5d51_d549 = 20.25;
                d_5d51_d551 = d_5d51_d9d4 - 15 + 7.25;
            }
            sprintf(buf, "%02d", d_5d51_d9d4 + 1);
            f_1646_3686(d_5d51_d549, d_5d51_d551, 6, 3, 0, buf);
            if (list[d_5d51_d9d4] == -1) {
                if (shown == 0 && mode == 0 && d_5d51_d5e2 == 0 && d_3404_4eb2[team] > 0) {
                    strcpy(d_2414_5074, " Own Goals");
                    sprintf(d_2414_5024, " %02d", d_3404_4eb2[team]);
                }
                f_1646_3686(d_5d51_d549 + 1.75, d_5d51_d551, 6, d_5d51_d9bc, 111, d_2414_5074);
                shown = -1;
            } else {
                int p;
                p = list[d_5d51_d9d4];
                f_1646_50c5(0, d_5d51_d549 + 1.75, d_5d51_d551, d_3c0d_0000[7][p] < 255 ? 6 : 1, d_5d51_d9bc, 111, d_2414_5074);
            }
            f_1646_3686(d_5d51_d549 + 15.875, d_5d51_d551, 1, 2, 24, d_2414_5024);
            f_1d5e_13a4(&d_5d51_d9de, &d_5d51_d9ce, 2);
        }
        f_1646_60a7();
        if (d_5d51_d5e2) {
            f_1646_50c5(2, 8.5, 22.5, 1, 4, 185, "          EXIT");
            f_1646_50c5(2, 1.25, 22.5, 6, 2, 53, " - SER");
            f_1646_50c5(2, 32.25, 22.5, 6, 2, 53, " + SER");
        } else
            f_1646_50c5(2, 1.25, 22.5, 1, 4, 301, "                 EXIT");
        do
            d_5d51_da0a = f_1646_5602(d_5d51_d9c6);
        while (d_5d51_da0a <= 0);
        if (d_5d51_d9c2 + 2 > d_5d51_da0a) {
            d_5d51_d9f0 = list[d_5d51_da0a - 1];
            do {
                f_a13d_4a1b(d_5d51_d9f0, -1, -1);
                f_8539_4fbd(d_5d51_d9f0, d_5d51_d9ba);
            } while (!d_5d51_d5df);
        } else if (d_5d51_d9c2 + 3 == d_5d51_da0a) {
            d_5d51_d9c4--;
            if (d_5d51_d9c4 < 0)
                d_5d51_d9c4 = 1;
        } else if (d_5d51_d9c2 + 4 == d_5d51_da0a) {
            d_5d51_d9c4++;
            if (d_5d51_d9c4 > 1)
                d_5d51_d9c4 = 0;
        } else
            break;
    }
}

void f_6b47_18da(int mode)
{
    char used[80];
    int list[21];
    char buf[318];
    unsigned char c;

    d_5d51_d9d2 = f_a13d_20c9();
    do {
        memset(used, 0, 80);
        f_1646_6097();
        f_1646_4ba0("");
        sprintf(d_2414_4f84, "%s", f_1646_4b1e(d_5d51_d9d2 + 1, 0));
        if (mode < 2) {
            if (mode == 0) {
                sprintf(buf, "Form Guide %s", d_2414_4f84);
                f_1646_3686(1.125, 1.5, 0, 1, 0x86, buf);
                f_1646_3686(18.125, 1.5, 1, 8, 0, " HOME ");
                f_1646_3686(22.875, 1.5, 1, 8, 0, " AWAY ");
            } else {
                sprintf(buf, "Attendance %s", d_2414_4f84);
                f_1646_3686(1.125, 1.5, 0, 1, 0x86, buf);
                f_1646_3686(18.125, 1.5, 1, 2, 0x4a, " AVERAGE");
            }
            f_1646_3686(27.625, 1.5, 1, 8 - mode * 6, 0, " LP ");
            f_1646_3686(30.875, 1.5, 1, 8 - mode * 6, 0, " BOARD %   ");
        } else {
            sprintf(buf, "Job News %s", d_2414_4f84);
            f_1646_3686(1.125, 1.5, 0, 1, 0x86, buf);
            f_1646_3686(18.125, 1.5, 1, 2, 0x53, " MANAGER");
            f_1646_3686(28.75, 1.5, 0, 6, 0x53, " JOB");
        }
        d_5d51_d9de = d_5d51_d9d2 == 0 ? 14 : 4;
        d_5d51_d9ce = d_5d51_d9d2 == 0 ? 8 : 12;
        d_5d51_d9e2 = 6;
        d_5d51_d9d0 = 1;
        while (d_5d51_d9d0 <= f_1646_716c(d_5d51_d9d2)) {
            d_5d51_d9ca = -1;
            d_5d51_d4a5 = 0;
            for (d_5d51_d9fe = d_5d51_d9d2 * 18; d_5d51_d9fe <= d_5d51_d9d2 * 18 + f_1646_716c(d_5d51_d9d2) - 1; d_5d51_d9fe++) {
                d_5d51_d9cc = d_3404_0728[d_5d51_d9fe];
                if (used[d_5d51_d9cc] == 0) {
                    d_5d51_d4a1 = 0;
                    if (mode == 0) {
                        d_5d51_d4a1 = f_b0f1_0939(d_5d51_d9cc);
                    } else if (mode == 1) {
                        if (d_3404_4dc2[d_5d51_d9cc] > 0)
                            d_5d51_d4a1 = d_3404_4012[d_5d51_d9cc] / d_3404_4dc2[d_5d51_d9cc];
                    } else {
                        d_5d51_d4a1 = 100 - d_3404_452a[d_5d51_d9cc];
                        if (d_3404_4dea[d_5d51_d9cc] > 0)
                            d_5d51_d4a1 = 255;
                    }
                    if (d_5d51_d4a1 > d_5d51_d4a5 || d_5d51_d9ca == -1) {
                        d_5d51_d4a5 = d_5d51_d4a1;
                        d_5d51_d9ac = d_5d51_d9fe;
                        d_5d51_d9ca = d_5d51_d9cc;
                    }
                }
            }
            d_5d51_d9c8 = d_5d51_d9ce;
            if (mode < 2) {
                if (f_1646_2cc9(d_5d51_d9ca))
                    d_5d51_d9c8 = 3;
                sprintf(buf, " %02d ", d_5d51_d9d0);
                f_1646_3686(1.125, d_5d51_d9e2 + 0.25 - 3.5, 0, 6, 0, buf);
                sprintf(buf, " %.17s", (char far *)d_5d51_b476[d_5d51_d9ca]);
                f_1646_50c5(0, 4.375, d_5d51_d9e2 + 0.25 - 3.5, 1, d_5d51_d9c8, 0x6c, buf);
                if (mode == 0) {
                    sprintf(buf, " %s", d_2414_1e28[0][d_5d51_d9ca]);
                    f_1646_3686(18.125, d_5d51_d9e2 + 0.25 - 3.5, 6, 2, 0x24, buf);
                    sprintf(buf, " %s", d_2414_1e28[1][d_5d51_d9ca]);
                    f_1646_3686(22.875, d_5d51_d9e2 + 0.25 - 3.5, 6, 2, 0x24, buf);
                } else {
                    strcpy(buf, "");
                    if (d_5d51_d4a5 > 0)
                        sprintf(buf, "   %ld", d_5d51_d4a5);
                    f_1646_3686(18.125, d_5d51_d9e2 + 0.25 - 3.5, 1,
                                d_5d51_d9ce == 8 || d_5d51_d9ce == 14 ? 4 : 14, 0x4a, buf);
                }
                sprintf(buf, " %02d ", d_5d51_d9ac + 1 - d_5d51_d9d2 * 18);
                f_1646_3686(27.625, d_5d51_d9e2 + 0.25 - 3.5, 1, 9, 0, buf);
                sprintf(d_2414_4e94, "%d%%", d_3404_452a[d_5d51_d9ca]);
                sprintf(buf, "    %s", d_2414_4e94);
                f_1646_3686(30.875, d_5d51_d9e2 + 0.25 - 3.5, 6, 3, 0x42, buf);
            } else {
                if (f_1646_2cc9(d_5d51_d9ca))
                    d_5d51_d9c8 = 3;
                sprintf(buf, " %.21s", (char far *)d_5d51_b476[d_5d51_d9ca]);
                f_1646_50c5(0, 1.125, d_5d51_d9e2 - 3.25, 1, d_5d51_d9c8, 0x86, buf);
                if (d_3404_4dea[d_5d51_d9ca] > 0) {
                    strcpy(d_2414_20e4, "");
                    strcpy(d_2414_2094, "Available");
                } else {
                    strcpy(d_2414_20e4, f_1646_4919(d_3404_4226[d_5d51_d9ca], -1));
                    c = d_3404_452a[d_5d51_d9ca];
                    if (c <= 29)
                        strcpy(d_2414_2094, "Under threat");
                    else if (c <= 39)
                        strcpy(d_2414_2094, "Insecure");
                    else
                        strcpy(d_2414_2094, "Safe");
                }
                sprintf(buf, " %s", d_2414_20e4);
                f_1646_3686(18.125, d_5d51_d9e2 - 3.25, 1, 9, 0x53, buf);
                sprintf(buf, " %s", d_2414_2094);
                f_1646_3686(28.75, d_5d51_d9e2 - 3.25, d_2414_20e4[0] != 0 ? 1 : 15,
                            d_3404_4dea[d_5d51_d9ca] > 0 ? 1 : 3, 0x53, buf);
            }
            d_5d51_d9e2++;
            f_1d5e_13a4(&d_5d51_d9de, &d_5d51_d9ce, 2);
            used[d_5d51_d9ca] = -1;
            list[d_5d51_d9d0] = d_5d51_d9ca;
            d_5d51_d9d0++;
        }
        f_1646_60a7();
        f_1646_50c5(2, 1.25, 23.0, 6, 2, 0x35, " - SER");
        f_1646_50c5(2, 32.25, 23.0, 6, 2, 0x35, " + SER");
        f_1646_50c5(2, 8.5, 23.0, 1, 4, 0xb9, "          EXIT");
        do
            d_5d51_da0a = f_1646_5602(d_5d51_d9c6);
        while (d_5d51_da0a <= 0);
        if (d_5d51_da0a >= 1 && d_5d51_da0a <= f_1646_716c(d_5d51_d9d2)) {
            if (f_1646_2cc9(d_5d51_d9cc = list[d_5d51_da0a]))
                f_71c8_3038(d_5d51_d9cc);
            else
                f_6b47_55c8(d_5d51_d9cc);
        } else if (d_5d51_da0a == f_1646_716c(d_5d51_d9d2) + 1) {
            d_5d51_d9d2--;
            if (d_5d51_d9d2 < 0)
                d_5d51_d9d2 = 1;
        } else if (d_5d51_da0a == f_1646_716c(d_5d51_d9d2) + 2) {
            d_5d51_d9d2++;
            if (d_5d51_d9d2 > 1)
                d_5d51_d9d2 = 0;
        } else if (d_5d51_da0a == f_1646_716c(d_5d51_d9d2) + 3)
            d_5d51_d9d2 = -1;
    } while (d_5d51_d9d2 != -1);
}

/* the managers' points table of a league (Serie A 0-17, Serie B 18-37; the buttons toggle) */
void f_6b47_23e6(void)
{
    char used[80];
    char buf[320];

    d_5d51_d9c4 = f_a13d_20c9();
    do {
        memset(used, 0, 80);
        f_1646_6097();
        f_1646_4ba0("");
        sprintf(buf, "Manager Pts %s", f_1646_4b1e(d_5d51_d9c4 + 1, 0));
        f_1646_3686(1.125, 1.5, 0, 1, 0x88, buf);
        f_1646_3686(18.375, 1.5, 1, 4, 0x6e, " CLUB");
        f_1646_3686(32.375, 1.5, 1, 4, 0x36, " PTS");
        d_5d51_d9e2 = 6;
        d_5d51_d9de = d_5d51_d9c4 == 0 ? 8 : 2;
        d_5d51_d9ce = d_5d51_d9c4 == 0 ? 14 : 9;
        for (d_5d51_d9d0 = 1; d_5d51_d9d0 <= f_1646_716c(d_5d51_d9c4); d_5d51_d9d0++) {
            d_5d51_d4a5 = 0;
            for (d_5d51_d9cc = d_5d51_d9c4 * 18;
                 d_5d51_d9cc <= d_5d51_d9c4 * 18 + f_1646_716c(d_5d51_d9c4) - 1; d_5d51_d9cc++) {
                if (used[d_5d51_d9cc] == 0) {
                    d_5d51_da54 = f_1d5e_1618(d_5d51_dda0, 0);
                    d_5d51_d49d = d_5d51_da54[d_3404_4226[d_5d51_d9cc]];
                    if (d_5d51_d49d >= d_5d51_d4a5) {
                        d_5d51_d4a5 = d_5d51_d49d;
                        d_5d51_d9ca = d_5d51_d9cc;
                    }
                }
            }
            if (f_1646_2cc9(d_5d51_d9ca))
                d_5d51_d9c8 = 12;
            else
                d_5d51_d9c8 = d_5d51_d9ce;
            sprintf(buf, " %02d ", d_5d51_d9d0);
            f_1646_3686(1.125, d_5d51_d9e2 + 0.25 - 3.5, 1, 4, 0, buf);
            sprintf(buf, " %s", f_1646_4919(d_3404_4226[d_5d51_d9ca], 0));
            f_1646_3686(4.375, d_5d51_d9e2 + 0.25 - 3.5, 1, d_5d51_d9c8, 0x6e, buf);
            sprintf(buf, " %.17s", (char far *)d_5d51_b476[d_5d51_d9ca]);
            f_1646_3686(18.375, d_5d51_d9e2 + 0.25 - 3.5, 1, 3, 0x6e, buf);
            sprintf(buf, " %06ld", d_5d51_d4a5);
            f_1646_3686(32.375, d_5d51_d9e2 + 0.25 - 3.5, 2, 6, 0x36, buf);
            d_5d51_d9e2++;
            f_1d5e_13a4(&d_5d51_d9de, &d_5d51_d9ce, 2);
            used[d_5d51_d9ca] = -1;
        }
        f_1646_60a7();
        f_1646_50c5(2, 1.25, 23.0, 6, 2, 0x35, " - SER");
        f_1646_50c5(2, 32.25, 23.0, 6, 2, 0x35, " + SER");
        f_1646_50c5(2, 8.5, 23.0, 1, 4, 0xb9, "          EXIT");
        do
            d_5d51_da0a = f_1646_5602(d_5d51_d9c6);
        while (d_5d51_da0a <= 0);
        if (d_5d51_da0a == 1) {
            d_5d51_d9c4--;
            if (d_5d51_d9c4 < 0)
                d_5d51_d9c4 = 1;
        } else if (d_5d51_da0a == 2) {
            d_5d51_d9c4++;
            if (d_5d51_d9c4 > 1)
                d_5d51_d9c4 = 0;
        } else
            d_5d51_d9c4 = -1;
    } while (d_5d51_d9c4 != -1);
}

/* the manager rankings: by reputation (mode 0) or by salary (mode 1), of the 38 clubs'
 * managers, on two screens of 20 and 18; order[] starts {-1, 0...} (Italia's local initialiser,
 * 160 bytes at 5d51:0743) */
void f_6b47_28ba(char mode)
{
    int i;
    int max;
    int sal;
    char used[650];
    int order[80] = {-1};
    char buf[320];

    max = 0;
    memset(used, 0, 650);
    d_5d51_d9b6 = 1;
    d_5d51_d5de = 0;
    for (i = 0; i <= 37; i++) {
        d_5d51_d9b2 = -1;
        for (d_5d51_d9cc = 0; d_5d51_d9cc <= 37; d_5d51_d9cc++) {
            d_5d51_d9b4 = d_3404_4226[d_5d51_d9cc];
            if (used[d_5d51_d9b4] == 0) {
                if (mode == 0) {
                    d_5d51_d9b0 = d_3404_2770[d_5d51_d9b4];
                    if (d_3404_1d48[d_5d51_d9b4] == 35)
                        d_5d51_d9b0 = 0;
                    if (d_5d51_d9b0 > d_5d51_d9c2 || d_5d51_d9b2 == -1) {
                        d_5d51_d9b2 = d_5d51_d9b4;
                        d_5d51_d9c2 = d_5d51_d9b0;
                    }
                } else if (mode == 1) {
                    d_5d51_da50 = f_1d5e_1618(d_5d51_dd9e, 0);
                    sal = d_5d51_da50[d_5d51_d9b4];
                    if (sal > max || d_5d51_d9b2 == -1) {
                        d_5d51_d9b2 = d_5d51_d9b4;
                        max = sal;
                    }
                }
            }
        }
        order[i] = d_5d51_d9b2;
        if (d_5d51_d9b2 != -1) {
            used[d_5d51_d9b2] = -1;
            if (d_5d51_d9b2 >= 646 && d_5d51_d5de == 0) {
                d_5d51_d9b6 = f_1646_717d(i) + 1;
                d_5d51_d5de = -1;
            }
        }
    }
    do {
        d_5d51_d9ae = (d_5d51_d9b6 - 1) * 20;
        f_1646_6097();
        f_1646_4ba0("");
        f_1646_3686(1.125, 1.5, 0, 1, 0x88, "Manager Rankings");
        f_1646_3686(18.375, 1.5, 1, 4, 0x6e, " CLUB");
        f_1646_3686(32.375, 1.5, 1, 4, 0x36, mode == 0 ? " REP" : " SALARY");
        d_5d51_d9e2 = 6;
        d_5d51_d9de = 14;
        d_5d51_d9ce = 8;
        for (d_5d51_d9d0 = 1; d_5d51_d9d0 <= (d_5d51_d9b6 == 1 ? 20 : 18); d_5d51_d9d0++) {
            d_5d51_d9d4 = d_5d51_d9d0 + d_5d51_d9ae;
            d_5d51_d9b2 = order[d_5d51_d9d4 - 1];
            if (d_5d51_d9b2 == -1)
                continue;
            if (d_5d51_d9b2 >= 646)
                d_5d51_d9c8 = 9;
            else
                d_5d51_d9c8 = d_5d51_d9ce;
            if (d_5d51_d9d4 < 100)
                sprintf(buf, " %02d ", d_5d51_d9d4);
            else
                strcpy(buf, "100 ");
            f_1646_3686(1.125, d_5d51_d9e2 + 0.25 - 3.5, 1, 12, 0, buf);
            sprintf(buf, " %s", f_1646_4919(d_5d51_d9b2, 0));
            f_1646_3686(4.375, d_5d51_d9e2 + 0.25 - 3.5, 1, d_5d51_d9c8, 0x6e, buf);
            d_5d51_d9ca = d_3404_1abe[d_5d51_d9b2];
            sprintf(buf, " %.17s", (char far *)d_5d51_b476[d_5d51_d9ca]);
            f_1646_3686(18.375, d_5d51_d9e2 + 0.25 - 3.5, 1, 2, 0x6e, buf);
            if (mode == 0)
                sprintf(buf, " %s", f_9182_14f6(d_5d51_d9b2, 0));
            else {
                d_5d51_da50 = f_1d5e_1618(d_5d51_dd9e, 0);
                sprintf(buf, " %dK", d_5d51_da50[d_5d51_d9b2]);
            }
            f_1646_3686(32.375, d_5d51_d9e2 + 0.25 - 3.5, 1, 3, 0x36, buf);
            d_5d51_d9e2++;
            f_1d5e_13a4(&d_5d51_d9de, &d_5d51_d9ce, 2);
        }
        f_1646_60a7();
        f_1646_50c5(2, 1.25, 23.0, 6, 2, 0x35, " - SCR");
        f_1646_50c5(2, 32.25, 23.0, 6, 2, 0x35, " + SCR");
        f_1646_50c5(2, 8.5, 23.0, 1, 4, 0xb9, "          EXIT");
        do
            d_5d51_da0a = f_1646_5602(d_5d51_d9c6);
        while (d_5d51_da0a <= 0);
        if (d_5d51_da0a == 1) {
            d_5d51_d9b6--;
            if (d_5d51_d9b6 < 1)
                d_5d51_d9b6 = 2;
        } else if (d_5d51_da0a == 2) {
            d_5d51_d9b6++;
            if (d_5d51_d9b6 > 2)
                d_5d51_d9b6 = 1;
        } else
            d_5d51_d9b6 = -1;
    } while (d_5d51_d9b6 != -1);
}

/* the hall of fame, and its second page (" II"): the button toggles between them */
void f_6b47_2e7d(void)
{
    unsigned char second = 0;
    char buf[320];

    do {
        f_1646_6097();
        f_1646_4ba0("");
        sprintf(buf, "Hall of Fame%s", second == 0 ? "" : " II");
        f_1646_3686(1.125, 1.5, 0, 1, 0x88, buf);
        f_1646_3686(18.375, 1.5, 1, 4, 0x6e, " CLUB");
        f_1646_3686(32.375, 1.5, 1, 4, 0x36, " PTS");
        d_5d51_d9e2 = 6;
        d_5d51_d9de = 14;
        d_5d51_d9ce = 8;
        for (d_5d51_d9d0 = 1; d_5d51_d9d0 <= 20; d_5d51_d9d0++) {
            sprintf(buf, " %02d ", d_5d51_d9d0);
            f_1646_3686(1.125, d_5d51_d9e2 + 0.25 - 3.5, 1, 2, 0, buf);
            d_5d51_da28 = f_1d5e_1618(d_5d51_dd8a, 0);
            sprintf(buf, " %.17s", d_5d51_da28 + (d_5d51_d9d0 - 1) * 160 + second * 80);
            f_1646_3686(4.375, d_5d51_d9e2 + 0.25 - 3.5, 1, d_5d51_d9ce, 0x6e, buf);
            d_5d51_da28 = f_1d5e_1618(d_5d51_dd8a, 0);
            sprintf(buf, " %.17s", d_5d51_da28 + (d_5d51_d9d0 - 1) * 160 + second * 80 + 3200);
            f_1646_3686(18.375, d_5d51_d9e2 + 0.25 - 3.5, 0, 6, 0x6e, buf);
            sprintf(buf, " %6ld", d_2414_fe54[d_5d51_d9d0][second]);
            f_1646_3686(32.375, d_5d51_d9e2 + 0.25 - 3.5, 1, 9, 0x36, buf);
            d_5d51_d9e2++;
            f_1d5e_13a4(&d_5d51_d9de, &d_5d51_d9ce, 2);
        }
        f_1646_60a7();
        f_1646_50c5(2, 1.25, 23.0, 1, 4, 0xe0, "           EXIT");
        f_1646_50c5(2, 29.875, 23.0, 1, 12, 0x48, second == 0 ? "   2ND" : "   1ST");
        do
            d_5d51_da0a = f_1646_5602(d_5d51_d9c6);
        while (d_5d51_da0a <= 0);
        if (d_5d51_da0a == 2)
            second = second == 0 ? 1 : 0;
    } while (d_5d51_da0a == 2);
}

/* the monthly or yearly awards: managers of Serie A and B, senior and young players of each (CM93: four divisions) */
void f_6b47_3258(char year)
{
    int club;
    char buf[320];

    if (d_5d51_d55a) {
        if (year) {
            strcpy(d_2414_4df4, "");
            strcpy(d_2414_4da4, "Year");
        } else {
            strcpy(d_2414_4df4, " ");
            strcpy(d_2414_4da4, "Month");
        }
        sprintf(buf, "%sly Awards", d_2414_4da4);
        f_1646_6097();
        f_1646_4ba0(buf);
        sprintf(buf, " MANAGER OF THE %s", d_2414_4da4);
        f_1646_3686(1.125, 4.0, 0, 1, 178, buf);
        f_1646_3686(23.625, 4.0, 0, 6, 36, " PTS");
        f_1646_3686(28.375, 4.0, 0, 6, 86, " CLUB");
        for (d_5d51_d9aa = 0; d_5d51_d9aa <= 1; d_5d51_d9aa++) {
            sprintf(buf, " %s", f_1646_4b1e(d_5d51_d9aa + 1, 0));
            f_1646_3686(1.125, d_5d51_d9aa + 5.25, 1, d_5d51_d9aa & 1 ? 8 : 14, 86, buf);
            if (d_2414_d604[d_5d51_d9aa] != -1) {
                sprintf(buf, " %s", f_1646_4919(d_2414_d604[d_5d51_d9aa], -1));
                f_1646_3686(12.125, d_5d51_d9aa + 5.25, 1, d_2414_d604[d_5d51_d9aa] >= 646 ? 3 : 12, 90, buf);
                sprintf(buf, "%s%ld", d_2414_4df4, d_2414_d5f4[d_5d51_d9aa]);
                f_1646_3686(23.625, d_5d51_d9aa + 5.25, 1, 9, 36, buf);
                sprintf(buf, " %.13s", (char far *)d_5d51_b476[d_3404_1abe[d_2414_d604[d_5d51_d9aa]]]);
                f_1646_3686(28.375, d_5d51_d9aa + 5.25, 1, 2, 86, buf);
            } else {
                f_1646_3686(12.125, d_5d51_d9aa + 5.25, 1, 12, 90, "");
                f_1646_3686(23.625, d_5d51_d9aa + 5.25, 1, 9, 36, "");
                f_1646_3686(28.375, d_5d51_d9aa + 5.25, 1, 2, 86, "");
            }
        }
        sprintf(buf, " SENIOR PLAYER OF THE %s", d_2414_4da4);
        f_1646_3686(1.125, 8.0, 0, 1, 178, buf);
        f_1646_3686(23.625, 8.0, 0, 6, 36, " AV R");
        f_1646_3686(28.375, 8.0, 0, 6, 86, " CLUB");
        sprintf(buf, " YOUNG PLAYER OF THE %s", d_2414_4da4);
        f_1646_3686(1.125, 12.0, 0, 1, 178, buf);
        f_1646_3686(23.625, 12.0, 0, 6, 36, " AV R");
        f_1646_3686(28.375, 12.0, 0, 6, 86, " CLUB");
        for (d_5d51_d9a6 = 0; d_5d51_d9a6 <= 1; d_5d51_d9a6++) {
            d_5d51_d545 = d_5d51_d9a6 * 4 + 9.25;
            for (d_5d51_d9a8 = 0; d_5d51_d9a8 <= 1; d_5d51_d9a8++) {
                d_5d51_d9f0 = d_2414_d62c[d_5d51_d9a6][d_5d51_d9a8];
                if (d_5d51_d9f0 != -1) {
                    sprintf(buf, " %s", f_1646_4b1e(d_5d51_d9a8 + 1, 0));
                    f_1646_3686(1.125, d_5d51_d9a8 + d_5d51_d545, 1, d_5d51_d9a8 & 1 ? 8 : 14, 86, buf);
                    sprintf(buf, " %.14s", f_1646_4849(d_5d51_d9f0));
                    f_1646_3686(12.125, d_5d51_d9a8 + d_5d51_d545, 1, f_1646_2cc9(d_44d7_6978[d_5d51_d9f0]) ? 3 : 12, 90, buf);
                    sprintf(d_2414_4d36, "%4.2f", d_2414_d60c[d_5d51_d9a6][d_5d51_d9a8]);
                    sprintf(buf, " %s", d_2414_4d36);
                    f_1646_3686(23.625, d_5d51_d9a8 + d_5d51_d545, 1, 9, 36, buf);
                    club = d_3c0d_2904[d_5d51_d9f0] < 255 ? d_3c0d_2904[d_5d51_d9f0] : d_44d7_6978[d_5d51_d9f0];
                    sprintf(buf, " %.13s", (char far *)d_5d51_b476[club]);
                    f_1646_3686(28.375, d_5d51_d9a8 + d_5d51_d545, 1, 2, 86, buf);
                } else {
                    f_1646_3686(1.125, d_5d51_d9a8 + d_5d51_d545, 1, d_5d51_d9a8 & 1 ? 8 : 14, 86, "");
                    f_1646_3686(12.125, d_5d51_d9a8 + d_5d51_d545, 1, 12, 90, "");
                    f_1646_3686(23.625, d_5d51_d9a8 + d_5d51_d545, 1, 9, 36, "");
                    f_1646_3686(28.375, d_5d51_d9a8 + d_5d51_d545, 1, 2, 86, "");
                }
            }
        }
        f_1646_60a7();
        f_1646_50c5(2, 1.25, 22.5, 1, 4, 301, "                 DONE");
        do {
            d_5d51_da0a = f_1646_5602(d_5d51_d9c6);
        } while (d_5d51_da0a <= 0);
    } else
        f_1646_0bf2("No awards yet this season");
}

void f_6b47_3b53(void)
{
    if (d_5d51_da06 < 16)
        f_1646_0bf2("National squads not chosen");
    else
        f_6b47_3b72();
}

/* the national squads: senior and U-21 */
void f_6b47_3b72(void)
{
    unsigned char nation[5] = {0, 0, 0, 0, 0};
    int club;
    char buf[320];

    do {
        f_1646_2fa4(0, "International Squads", "*Exit|Italy|Italy U21|");
        d_5d51_d9a4 = d_5d51_da0a;
        if (d_5d51_d9a4 > 0) {
            d_5d51_d9a2 = 0;
            strcpy(d_2414_4ce6, "");
            if (d_5d51_d9a4 > 1) {
                d_5d51_d9a2 = 1;
                strcpy(d_2414_4ce6, "U-21 ");
                d_5d51_d9a4--;
            }
            do {
                f_1646_6097();
                f_1646_4ba0("International squad");
                d_5d51_d9b8 = 20;
                sprintf(buf, " %s %s", d_4f37_0000[nation[d_5d51_d9a4 - 1]], d_2414_4ce6);
                f_1646_3e54(1.25, 4.0, d_5d51_d9b8 / 16, d_5d51_d9b8 % 16, 0, buf);
                f_1646_3686(1.125, 7.0, 1, 2, 76, " NAME");
                f_1646_3686(10.875, 7.0, 1, 2, 73, " CLUB");
                f_1646_3686(20.25, 7.0, 1, 2, 76, " NAME");
                f_1646_3686(30.0, 7.0, 1, 2, 73, " CLUB");
                f_1646_60a7();
                f_1646_5020();
                f_1646_50c5(2, 1.25, 22.5, 1, 4, 301, "                 EXIT");
                f_1646_6097();
                for (d_5d51_d9a0 = 0; d_5d51_d9a0 <= 21; d_5d51_d9a0++) {
                    d_5d51_d99e = d_2401_0000[d_5d51_d9a0];
                    d_5d51_d549 = d_5d51_d9a0 > 10 ? 20.25 : 1.125;
                    d_5d51_d551 = d_5d51_d9a0 > 10 ? d_5d51_d9a0 - 2 : d_5d51_d9a0 + 9;
                    d_5d51_d9b8 = d_5d51_d9a0 & 1 ? 8 : 14;
                    d_5d51_d9f0 = d_2414_d63c[d_5d51_d9a2][d_5d51_d9a0];
                    if (d_5d51_d9f0 > -1) {
                        strcpy(d_2414_4c96, f_1646_48c0(d_5d51_d9f0));
                        if (f_1646_6f38(d_5d51_d9f0))
                            sprintf(d_2414_4c46, "<%s>", d_4f37_0000[d_44d7_6978[d_5d51_d9f0] - 140]);
                        else {
                            club = d_3c0d_2904[d_5d51_d9f0] < 255 ? d_3c0d_2904[d_5d51_d9f0] : d_44d7_6978[d_5d51_d9f0];
                            strcpy(d_2414_4c46, (char far *)d_5d51_b476[club]);
                        }
                        if (f_1646_2cc9(d_44d7_6978[d_5d51_d9f0]))
                            d_5d51_d9b8 = 3;
                    } else {
                        strcpy(d_2414_4c96, d_4f37_0593[d_5d51_d99e]);
                        strcpy(d_2414_4c46, "Non-lge");
                    }
                    sprintf(buf, " %.11s", d_2414_4c96);
                    f_1646_50c5(0, d_5d51_d549, d_5d51_d551, 1, d_5d51_d9b8, 76, buf);
                    sprintf(buf, " %.11s", d_2414_4c46);
                    f_1646_3686(d_5d51_d549 + 9.75, d_5d51_d551, 1, 4, 73, buf);
                }
                f_1646_60a7();
                do {
                    d_5d51_da0a = f_1646_5602(d_5d51_d9c6);
                } while (d_5d51_da0a <= 0);
                if (d_5d51_da0a > 1) {
                    d_5d51_d9f0 = d_2414_d63c[d_5d51_d9a2][d_5d51_da0a - 2];
                    if (d_5d51_d9f0 > -1) {
                        do {
                            f_a13d_4a1b(d_5d51_d9f0, -1, -1);
                            f_8539_4fbd(d_5d51_d9f0, d_5d51_d9ba);
                        } while (!d_5d51_d5df);
                    } else
                        f_1646_0bf2("No information available");
                }
            } while (d_5d51_da0a != 1);
        }
    } while (d_5d51_d9a4 != 0);
}

void f_6b47_408c(void)
{
    char buf[320];
    register char found;

    do {
        f_1646_4ba0("Fixture Info");
        f_1646_2fa4(0, "", "*Exit|Last Results|Next Fixtures|Next Italian Cup|Next Anglo-Ital|Next UEFA|Next Cup Winners|Next European|Next Playoffs|Group Tables|Euro Seedings|Past Winners|");
        f_1646_3348(11);
        d_5d51_d99c = d_5d51_da0a;
        if (d_5d51_d99c == 1) {
            found = 0;
            if (d_5d51_da06 > 1) {
                for (d_5d51_d99a = d_5d51_da06 - 1; d_5d51_d99a >= 1; d_5d51_d99a--) {
                    if (d_44d7_94c2[d_5d51_d99a] > 0) {
                        f_71c8_13ca(d_5d51_d99a, 1, -1);
                        found = 1;
                        d_5d51_d99a = 1;
                    }
                }
            }
            if (found == 0)
                f_1646_0bf2("No matches played");
        } else if (d_5d51_d99c == 2) {
            if (d_5d51_da06 <= 100) {
                for (d_5d51_d99a = d_5d51_da06; !f_1646_2c1c(d_5d51_d99a); d_5d51_d99a++)
                    ;
                f_71c8_13ca(d_5d51_d99a, 0, -1);
            } else
                f_1646_0bf2("The season is over");
        } else if (d_5d51_d99c == 3) {
            if (d_5d51_d9ee > -1) {
                if (d_5d51_d9ee > 0)
                    f_71c8_13ca(d_5d51_d9ee, 0, 1);
                else
                    f_6b47_433d();
            } else {
                sprintf(buf, "%s won the Italian Cup", f_1646_3537(d_3404_0816[0][0]));
                f_1646_0bf2(buf);
            }
        } else if (d_5d51_d99c == 4) {
            if (d_5d51_d998 > -1) {
                if (d_5d51_d998 > 0)
                    f_71c8_13ca(d_5d51_d998, 0, 2);
                else
                    f_6b47_433d();
            } else {
                sprintf(buf, "%s won the Anglo-Italian Cup", f_1646_3537(d_3404_0816[2][0]));
                f_1646_0bf2(buf);
            }
        } else if (d_5d51_d99c == 5) {
            if (d_5d51_d9ec > -1) {
                if (d_5d51_d9ec > 0)
                    f_71c8_13ca(d_5d51_d9ec, 0, 3);
                else
                    f_6b47_433d();
            } else {
                sprintf(buf, "%s won the UEFA Cup", f_1646_3537(d_3404_0816[3][0]));
                f_1646_0bf2(buf);
            }
        } else if (d_5d51_d99c == 6) {
            if (d_5d51_d9ea > -1) {
                if (d_5d51_d9ea > 0)
                    f_71c8_13ca(d_5d51_d9ea, 0, 4);
                else
                    f_6b47_433d();
            } else {
                sprintf(buf, "%s won the Cup Winners Cup", f_1646_3537(d_3404_0816[4][0]));
                f_1646_0bf2(buf);
            }
        } else if (d_5d51_d99c == 7) {
            if (d_5d51_d9e8 > -1) {
                if (d_5d51_d9e8 > 0)
                    f_71c8_13ca(d_5d51_d9e8, 0, 5);
                else
                    f_6b47_433d();
            } else {
                sprintf(buf, "%s won the European Cup", f_1646_3537(d_3404_0816[5][0]));
                f_1646_0bf2(buf);
            }
        } else if (d_5d51_d99c == 8) {
            if (d_5d51_da06 >= 97) {
                if (d_5d51_d406 == 0)
                    f_1646_0bf2("No playoffs are required");
                else if (d_5d51_da06 == 97)
                    f_71c8_13ca(97, 0, 6);
                else
                    f_1646_0bf2("The playoffs have finished");
            } else
                f_1646_0bf2("Playoffs not yet decided");
        } else if (d_5d51_d99c == 9)
            f_6b47_0e63();
        else if (d_5d51_d99c == 10)
            f_6b47_434e();
        else if (d_5d51_d99c == 11)
            f_9182_6751();
    } while (d_5d51_d99c != 0);
}

void f_6b47_433d(void)
{
    f_1646_0bf2("Draw not yet made");
}

void f_6b47_434e(void)
{
    char done[540];
    char buf[320];

    memset(done, 0, 540);
    f_1646_6097();
    f_1646_4ba0("European Seedings");
    for (d_5d51_d996 = 4; d_5d51_d996 <= 6; d_5d51_d996++) {
        if (d_5d51_d996 == 4)
            strcpy(d_2414_4bf6, "UEFA CUP");
        else if (d_5d51_d996 == 5)
            strcpy(d_2414_4bf6, "CUP WINNERS CUP");
        else
            strcpy(d_2414_4bf6, "EUROPEAN CUP");
        sprintf(buf, " %s", d_2414_4bf6);
        f_1646_3686(1.125, (d_5d51_d996 - 4) * 6.25 + 4.0, 0, 1, 0x130, buf);
        for (d_5d51_d994 = 1; d_5d51_d994 <= 8; d_5d51_d994++) {
            for (d_5d51_d9cc = 0; d_5d51_d9cc <= 539; d_5d51_d9cc++) {
                if (d_2414_d8c4[d_5d51_d9cc] == d_5d51_d996 && done[d_5d51_d9cc] == 0) {
                    d_5d51_d549 = d_5d51_d994 > 4 ? 20.25 : 1.125;
                    d_5d51_d551 = (d_5d51_d996 - 4) * 6.25 + 5.25 + d_5d51_d994 - 1 - (d_5d51_d994 > 4 ? 4 : 0);
                    sprintf(buf, " %.12s", f_1646_3537(d_5d51_d9cc));
                    buf[13] = 0;
                    if (f_1646_2cc9(d_5d51_d9cc))
                        d_5d51_d9ce = 3;
                    else
                        d_5d51_d9ce = d_5d51_d994 & 1 ? 8 : 14;
                    f_1646_3686(d_5d51_d549, d_5d51_d551, d_5d51_d9cc < 38 ? 6 : 1, d_5d51_d9ce, 0x59, buf);
                    if (d_5d51_d9cc < 38)
                        strcpy(buf, " ITALY");
                    else {
                        sprintf(buf, " %s", d_4f37_0000[d_4f37_1176[d_5d51_d9cc]]);
                        buf[9] = 0;
                    }
                    f_1646_3686(d_5d51_d549 + 11.375, d_5d51_d551, 1, 2, 0x3c, buf);
                    done[d_5d51_d9cc] = -1;
                    d_5d51_d9cc = 539;
                }
            }
        }
    }
    f_1646_60a7();
    f_1646_50c5(2, 1.25, 22.5, 1, 4, 0x12d, "                 DONE");
    do
        d_5d51_da0a = f_1646_5602(d_5d51_d9c6);
    while (d_5d51_da0a <= 0);
}

void f_6b47_4672(void)
{
    f_1646_6097();
    f_1646_4ba0("European Cup");
    f_6b47_4a64(6, 0, 4, " Group A", 4.0);
    f_6b47_4a64(6, 1, 4, " Group B", 11.375);
    f_1646_60a7();
    f_1646_50c5(2, 1.25, 22.5, 1, 4, 0x12d, "                 DONE");
    do
        d_5d51_da0a = f_1646_5602(d_5d51_d9c6);
    while (d_5d51_da0a <= 0);
}

void f_6b47_4723(void)
{
    unsigned char groups, size;
    char buf[320];

    groups = d_5d51_da06 <= 29 ? 6 : 4;
    size = d_5d51_da06 <= 29 ? 3 : 4;
    d_5d51_d992 = 0;
    for (d_5d51_d990 = 0; d_5d51_d990 <= groups - 1; d_5d51_d990++)
        for (d_5d51_d9fe = 0; d_5d51_d9fe <= size - 1; d_5d51_d9fe++)
            if (f_1646_2cc9(d_2414_d578[d_5d51_d990][d_5d51_d9fe])) {
                d_5d51_d992 = d_5d51_da06 <= 29 ? d_5d51_d990 / 3 : d_5d51_d990 / 2;
                d_5d51_d9fe = size - 1;
                d_5d51_d990 = groups - 1;
            }
    do {
        f_1646_6097();
        f_1646_4ba0("Anglo-Italian Cup");
        if (d_5d51_da06 <= 29) {
            sprintf(buf, " Group %c", d_5d51_d992 * 3 + 'A');
            f_6b47_4a64(3, d_5d51_d992 * 3, size, buf, 4.0);
            sprintf(buf, " Group %c", d_5d51_d992 * 3 + 'B');
            f_6b47_4a64(3, d_5d51_d992 * 3 + 1, size, buf, 10.0);
            sprintf(buf, " Group %c", d_5d51_d992 * 3 + 'C');
            f_6b47_4a64(3, d_5d51_d992 * 3 + 2, size, buf, 16.0);
        } else {
            sprintf(buf, " Italian Group %c", d_5d51_d992 + 'A');
            f_6b47_4a64(3, d_5d51_d992 * 2, size, buf, 4.0);
            sprintf(buf, " English Group %c", d_5d51_d992 + 'A');
            f_6b47_4a64(3, d_5d51_d992 * 2 + 1, size, buf, 11.375);
        }
        f_1646_60a7();
        f_1646_50c5(2, 1.25, 22.5, 6, 2, 0x35, " - GRP");
        f_1646_50c5(2, 32.25, 22.5, 6, 2, 0x35, " + GRP");
        f_1646_50c5(2, 8.5, 22.5, 1, 4, 0xb9, "          EXIT");
        do
            d_5d51_da0a = f_1646_5602(d_5d51_d9c6);
        while (d_5d51_da0a <= 0);
        if (d_5d51_da0a == 1) {
            if (d_5d51_d992 == 0)
                d_5d51_d992 = 1;
            else
                d_5d51_d992--;
        } else if (d_5d51_da0a == 2) {
            if (d_5d51_d992 == 1)
                d_5d51_d992 = 0;
            else
                d_5d51_d992++;
        }
    } while (d_5d51_da0a != 3);
}

/* the group table's column headings */
static char far *d_5d51_07e8[] = {
    " P ", " W ", " D ", " L ", " F ", " A ", "PTS"
};

void f_6b47_4a64(int a, int b, unsigned char n, char far *title, float x)
{
    float y;
    float ys[7];
    char buf[320];

    f_1646_3686(1.125, x, 0, 1, 0x130, title);
    f_1646_3686(1.125, x + 1.125, 1, 12, 0x50, " Team");
    for (d_5d51_d9d0 = 0, y = 11.375; d_5d51_d9d0 <= 6; d_5d51_d9d0++, y += 4.0) {
        ys[d_5d51_d9d0] = y;
        sprintf(buf, " %s ", d_5d51_07e8[d_5d51_d9d0]);
        f_1646_3686(ys[d_5d51_d9d0], x + 1.125, 1, 2, 0, buf);
    }
    for (d_5d51_d9d4 = 0; d_5d51_d9d4 <= n - 1; d_5d51_d9d4++) {
        if (a == 6)
            d_5d51_d9cc = d_2414_d5e4[b][d_5d51_d9d4];
        else
            d_5d51_d9cc = d_2414_d578[b][d_5d51_d9d4];
        if (f_1646_2cc9(d_5d51_d9cc))
            d_5d51_d9b8 = 3;
        else
            d_5d51_d9b8 = d_5d51_d9d4 & 1 ? 14 : 8;
        sprintf(buf, " %s", f_1646_3537(d_5d51_d9cc));
        f_1646_3686(1.125, x + 2.375 + d_5d51_d9d4, a == 6 && d_5d51_d9cc < 38 ? 6 : 1, d_5d51_d9b8, 0x50, buf);
        for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 6; d_5d51_d9d0++) {
            if (d_5d51_d9d0 < 6) {
                if (a == 6)
                    d_5d51_d98e = d_2414_d5b4[d_5d51_d9d0][b][d_5d51_d9d4];
                else
                    d_5d51_d98e = d_2414_d3e0[d_5d51_d9d0][b][d_5d51_d9d4];
            } else {
                if (a == 6)
                    d_5d51_d98e = d_2414_d5b4[1][b][d_5d51_d9d4] * 2 + d_2414_d5b4[2][b][d_5d51_d9d4];
                else
                    d_5d51_d98e = d_2414_d3e0[1][b][d_5d51_d9d4] * 2 + d_2414_d3e0[2][b][d_5d51_d9d4];
            }
            sprintf(buf, "  %d", d_5d51_d98e);
            f_1646_3686(ys[d_5d51_d9d0], x + 2.375 + d_5d51_d9d4, 1, 4, 0x1e, buf);
        }
    }
}

void f_6b47_4ddc(int team)
{
    char names[4][100][20];
    char buf[320];
    unsigned char comp[100];
    unsigned char week[100];

    f_6b47_5295(team, names, comp, week);
    for (;;) {
        d_5d51_d98c = d_5d51_d98a / 3 + (d_5d51_d98a % 3 > 0);
        f_1646_6097();
        if (d_5d51_d98c <= 20)
            f_1646_0003(-1.0, team, "Fixtures");
        else {
            f_1646_4ba0("");
            sprintf(buf, " %s fixtures ", (char far *)d_5d51_b476[team]);
            f_1646_3686(1.5, 1.5, -(d_3404_448a[team] / 16), d_3404_448a[team] % 16, 0, buf);
        }
        d_5d51_d9b8 = 4;
        d_5d51_d986 = (d_5d51_d988 = d_5d51_d98c) + 1;
        d_5d51_d984 = d_5d51_d98c * 2;
        d_5d51_d982 = d_5d51_d98c * 2 + 1;
        for (d_5d51_d97e = 0; d_5d51_d98a - 1 >= d_5d51_d97e; d_5d51_d97e++) {
            d_5d51_d551 = d_5d51_d97e % d_5d51_d98c + 4.5 - (d_5d51_d98c > 20 ? 1.5 : 0);
            if (d_5d51_d97e + 1 <= d_5d51_d988)
                d_5d51_d549 = 0.5;
            else if (d_5d51_d97e + 1 <= d_5d51_d984)
                d_5d51_d549 = 13.3;
            else
                d_5d51_d549 = 26.1;
            sprintf(buf, "%.2s", names[0][d_5d51_d97e]);
            d_5d51_d9bc = atoi(buf);
            sprintf(buf, "%s", names[0][d_5d51_d97e] + 2);
            f_1646_3686(d_5d51_d549 + 1, d_5d51_d551, d_5d51_d9bc / 16, d_5d51_d9bc % 16, 0, buf);
            if (d_5d51_d97e + 1 >= d_5d51_d97c && d_5d51_d97c > -1) {
                if (d_5d51_d97e + 1 == d_5d51_d97c)
                    d_5d51_d9bc = 3;
                else
                    d_5d51_d9bc = d_5d51_d9b8;
                sprintf(buf, "%-11s", names[1][d_5d51_d97e]);
                buf[11] = 0;
                f_1646_3686(d_5d51_d549 + 3.0, d_5d51_d551, 1, d_5d51_d9bc, 0, buf);
            } else {
                sprintf(buf, "%-11s", names[1][d_5d51_d97e]);
                buf[11] = 0;
                f_1646_50c5(0, d_5d51_d549 + 3.0, d_5d51_d551, 1, d_5d51_d9b8, 0, buf);
            }
            f_1646_3686(d_5d51_d549 + 11.75, d_5d51_d551, 3, 6, 0, names[2][d_5d51_d97e]);
            d_5d51_d9b8 = d_5d51_d9b8 == 12 ? 4 : 12;
        }
        f_1646_60a7();
        d_5d51_da0a = f_1646_5602(d_5d51_d9c6);
        if (d_5d51_da0a <= 0)
            break;
        {
        FILE *fp;
        d_5d51_d97a = week[d_5d51_da0a - 1] - 1;
        d_5d51_d978 = comp[d_5d51_d97a];
        d_5d51_d976 = d_44d7_93fc[d_5d51_d97a] + d_5d51_d978;
        f_1d5e_1a24(2);
        fp = fopen(d_2414_0078, "rb");
        fseek(fp, (long)(d_5d51_d976 - 1) * 174, 0);
        fread(d_2414_8414, 1, 174, fp);
        fclose(fp);
        f_7c1d_3ca2(d_4f37_1392[comp[d_5d51_d97a]][0][d_5d51_d97a] / 32,
                    d_4f37_1392[comp[d_5d51_d97a]][1][d_5d51_d97a] / 32, -1);
        }
    }
}

void f_6b47_5295(int team, char far names[][100][20], unsigned char far *comp,
                 unsigned char far *week)
{
    d_5d51_d972 = -1;
    d_5d51_d98a = 0;
    d_5d51_d97c = -1;
    for (d_5d51_d97e = 0; d_5d51_d97e <= 99; d_5d51_d97e++) {
        d_5d51_d974 = -1;
        for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 1; d_5d51_d9d0++)
            for (d_5d51_d9fe = 0; d_5d51_d9fe <= 63; d_5d51_d9fe++)
                if (d_4f37_1392[d_5d51_d9fe][d_5d51_d9d0][d_5d51_d97e] / 32 == team)
                    d_5d51_d974 = d_5d51_d9fe;
        if (d_5d51_d974 > -1) {
            if (d_5d51_d97e + 1 <= 12)
                strcpy(names[0][d_5d51_d98a], "38PF");
            else if (f_1646_2674(d_5d51_d97e + 1))
                strcpy(names[0][d_5d51_d98a], "38CP");
            else if (f_1646_2a0c(d_5d51_d97e + 1, d_5d51_d974 + 1))
                strcpy(names[0][d_5d51_d98a], "05AI");
            else if (f_1646_2ba4(d_5d51_d97e + 1))
                strcpy(names[0][d_5d51_d98a], "38PL");
            else if (f_1646_297b(d_5d51_d97e + 1, d_5d51_d974 + 1))
                strcpy(names[0][d_5d51_d98a], "01EC");
            else if (f_1646_28e4(d_5d51_d97e + 1, d_5d51_d974 + 1))
                strcpy(names[0][d_5d51_d98a], "01CW");
            else if (f_1646_2833(d_5d51_d97e + 1, d_5d51_d974 + 1))
                strcpy(names[0][d_5d51_d98a], "01UE");
            else
                strcpy(names[0][d_5d51_d98a], "98LG");
            strcpy(names[2][d_5d51_d98a], "");
            if (f_1646_2b65(d_5d51_d97e + 1, d_5d51_d974 + 1))
                strcpy(names[2][d_5d51_d98a], "N");
            d_5d51_d970 = d_4f37_1392[d_5d51_d974][0][d_5d51_d97e] / 32;
            d_5d51_d96e = d_4f37_1392[d_5d51_d974][1][d_5d51_d97e] / 32;
            if (d_5d51_d970 == team) {
                strcpy(names[1][d_5d51_d98a], f_1646_3537(d_5d51_d96e));
                if (strlen(names[2][d_5d51_d98a]) == 0)
                    strcpy(names[2][d_5d51_d98a], "H");
            } else {
                strcpy(names[1][d_5d51_d98a], f_1646_3537(d_5d51_d970));
                if (strlen(names[2][d_5d51_d98a]) == 0)
                    strcpy(names[2][d_5d51_d98a], "A");
            }
            comp[d_5d51_d97e] = d_5d51_d974;
            week[d_5d51_d98a] = d_5d51_d97e + 1;
            d_5d51_d98a++;
            if (d_5d51_d97c == -1 && d_5d51_d97e + 1 >= d_5d51_da06)
                d_5d51_d97c = d_5d51_d98a;
        }
    }
}

void f_6b47_558f(void)
{
    f_9e79_1103(-1);
    if (d_5d51_d9ca > -1) {
        if (f_1646_2cc9(d_5d51_d9ca))
            f_71c8_3038(d_5d51_d9ca);
        else
            f_6b47_55c8(d_5d51_d9ca);
    }
}

void f_6b47_55c8(int team)
{
    char buf[320];
    char reserves;

    reserves = 0;
    do {
        f_1646_6097();
        f_1646_0003(1.5, team, reserves ? "Reserves" : "Squad");
        f_1646_60a7();
        f_1646_50c5(2, 1.5, 19.625, 6, 3, 0x37, " GOAL");
        f_1646_50c5(2, 9.0, 19.625, 6, 3, 0x37, " DISP");
        f_1646_50c5(2, 16.5, 19.625, 6, 3, 0x37, " AV R");
        f_1646_50c5(2, 24.0, 19.625, 6, 3, 0x38, " M/O/M");
        f_1646_50c5(2, 31.625, 19.625, 6, 3, 0x38, " TEAM");
        f_1646_50c5(2, 1.5, 22.0, 1, 4, 0x129, "                 DONE");
        f_1646_50c5(2, 1.5, 4.0, 1, 14, 0x26, "Trns");
        f_1646_50c5(2, 6.875, 4.0, 1, 14, 0x26, "Staf");
        f_1646_50c5(2, 12.25, 4.0, 1, 14, 0x26, "Leag");
        f_1646_50c5(2, 17.625, 4.0, 1, 14, 0x26, "Fixt");
        f_1646_50c5(2, 23.0, 4.0, 1, 14, 0x26, "Accs");
        f_1646_50c5(2, 28.375, 4.0, 1, 14, 0x26, "Info");
        f_1646_50c5(2, 33.75, 4.0, 1, 8, 0x27, reserves ? "Senr" : "Rsrv");
        if (d_3404_4dea[team] > 0)
            f_1646_50c5(2, 33.75, 1.125, 1, 2, 0x27, "Appl");
        f_1646_6097();
        f_9e79_16c0(team, reserves);
        f_1646_60a7();
        do
            d_5d51_d96c = f_1646_5602(0);
        while (d_5d51_d96c <= 0);
        if (d_5d51_d96c >= 1 && d_5d51_d96c <= 4)
            f_6b47_0eb3(d_5d51_d96c - 1, team);
        else if (d_5d51_d96c == 5)
            f_b8e8_0000(team);
        else if (d_5d51_d96c == 7)
            f_6b47_5b29(team);
        else if (d_5d51_d96c == 8)
            f_9182_0a23(team);
        else if (d_5d51_d96c == 9)
            f_6b47_5fe4(team);
        else if (d_5d51_d96c == 10)
            f_6b47_4ddc(team);
        else if (d_5d51_d96c == 11) {
            if (d_5d51_d5e5 || f_1d5e_0d6a(50) == 0)
                f_71c8_0027(team);
            else {
                sprintf(buf, "%s refuse access|to their accounts", (char far *)d_5d51_b476[team]);
                f_1646_0bf2(buf);
            }
        } else if (d_5d51_d96c == 12)
            f_a13d_09a0(team);
        else if (d_5d51_d96c == 13)
            reserves = !reserves;
        else if (d_5d51_d96c == 14 && d_3404_4dea[team] > 0)
            f_71c8_0855(team);
        else if ((d_3404_4dea[team] > 0 ? 15 : 14) <= d_5d51_d96c) {
            d_5d51_d9a0 = d_5d51_d96c - (d_3404_4dea[team] > 0 ? 15 : 14);
            d_5d51_d9f0 = d_2414_ed6c[d_5d51_d9a0];
            if (!f_1646_5dff(d_5d51_d9f0)) {
                do {
                    f_a13d_4a1b(d_5d51_d9f0, -1, -1);
                    f_8539_4fbd(d_5d51_d9f0, d_5d51_d9ba);
                } while (!d_5d51_d5df);
            } else
                f_a7f0_3545(team, d_5d51_d9a0);
        }
    } while (d_5d51_d96c != 6);
}

void f_6b47_5b29(int team)
{
    char buf[320];
    register int y;
    register int x;
    unsigned char n, first, i, last, done;

    do {
        f_1646_6097();
        f_1646_0003(-1, team, "Transfers");
        f_1646_3686(1.125, 4, 1, 8, 150, "PLAYERS IN");
        f_1646_3686(20.375, 4, 1, 8, 150, "PLAYERS OUT");
        for (d_5d51_d9cc = 5; d_5d51_d9cc >= 4; d_5d51_d9cc--) {
            d_5d51_d549 = d_5d51_d9cc == 4 ? 21.375 : 2.125;
            x = d_5d51_d9cc == 4 ? 171 : 17;
            n = d_5d51_d9cc == 5 ? d_2414_97a8[team].n_in : d_2414_97a8[team].n_out;
            if (n > 0) {
                d_5d51_d551 = 5.5;
                y = 44;
                d_5d51_d499 = 0;
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
                    d_5d51_d9f0 = d_5d51_d9cc == 5 ? d_2414_97a8[team].in[i] : d_2414_97a8[team].out[i];
                    d_5d51_d96a = d_5d51_d9cc == 5 ? d_2414_97a8[team].in_club[i] : d_2414_97a8[team].out_club[i];
                    d_5d51_d495 = d_5d51_d9cc == 5 ? d_2414_97a8[team].in_fee[i] : d_2414_97a8[team].out_fee[i];
                    f_1646_357e(x, y, 6, f_1646_470f(d_5d51_d9f0));
                    if (d_5d51_d495 == 1)
                        sprintf(buf, "%s On Loan", (char far *)d_5d51_b476[d_5d51_d96a]);
                    else {
                        if (d_5d51_d96a < 38)
                            sprintf(buf, "%s %s", (char far *)d_5d51_b476[d_5d51_d96a], f_1646_0ee9(d_5d51_d495));
                        else
                            sprintf(buf, "<%s> %s", d_4f37_0000[d_5d51_d96a - 140], f_1646_0ee9(d_5d51_d495));
                        d_5d51_d499 += d_5d51_d495;
                    }
                    f_1646_357e(x, y + 8, 5, buf);
                    d_5d51_d551 = d_5d51_d551 + 2.5;
                    y += 20;
                    i = i < 5 ? i + 1 : 0;
                } while (done == 0);
                sprintf(buf, "TOTAL %s", d_5d51_d9cc == 5 ? "SPENDING" : "INCOME");
                f_1646_357e(x, y, 1, buf);
                sprintf(buf, "%ld", d_3404_3e4a[d_5d51_d9cc == 5 ? 1 : 2][team]);
                f_1646_357e(x + (d_5d51_d9cc == 5 ? 90 : 78), y, 2, buf);
            } else
                f_1646_357e(x, 48, 5, "NOBODY");
        }
        f_1646_60a7();
        f_1646_50c5(2, 1.25, 22.5, 1, 4, 301, "                 DONE");
        f_1646_50c5(2, 33.75, 1.125, 1, 2, 0, "Loans");
        do
            d_5d51_da0a = f_1646_5602(d_5d51_d9c6);
        while (d_5d51_da0a == 0);
        if (d_5d51_da0a == 2)
            f_b0f1_5b78(team);
    } while (d_5d51_da0a != 1);
}

/* the league progress graph's axis labels (Serie A: 18 clubs, 34 weeks; Serie B: 20, 38) */
static struct label d_5d51_0804[] = {
    {17, 34, "1"}, {17, 62, "5"}, {11, 97, "10"}, {11, 132, "15"}, {11, 152, "18"},
    {11, 167, "20"}, {21, 30, "1"}, {162, 30, "19"}, {282, 30, "34"}, {314, 30, "38"}
};

void f_6b47_5fe4(int team)
{
    /* the weeks played in the team's league (Serie A: d_5d51_da0e, Serie B: d_5d51_da0c) */
    register int weeks = f_1646_717d(team) == 0 ? d_5d51_da0e : d_5d51_da0c;

    f_1646_0003(-1, team, "League Progress");
    f_1d5e_08cc(16);
    f_1d5e_08e2(19, 35, 315, 168);
    f_1d5e_08cc(30);
    f_1d5e_08e2(15, 31, 311, 164);
    f_1d5e_08d7(24);
    for (d_5d51_d9e4 = 15; d_5d51_d9e4 <= 311; d_5d51_d9e4 += 8)
        f_1d5e_0fe3(d_5d51_d9e4, 31, d_5d51_d9e4, 164);
    for (d_5d51_d9e2 = 31; d_5d51_d9e2 <= 164; d_5d51_d9e2 += 7)
        f_1d5e_0fe3(15, d_5d51_d9e2, 311, d_5d51_d9e2);
    if (weeks >= 1) {
        d_5d51_d968 = -1;
        for (d_5d51_d966 = 1; d_5d51_d966 <= weeks; d_5d51_d966++) {
            d_5d51_d9e4 = d_5d51_d966 * 8 + 7;
            d_5d51_d9e2 = d_3404_47aa[d_5d51_d966][team] * 7 + 24;
            f_1d5e_08d7(18);
            f_1d5e_0fe3(d_5d51_d9e4 - 2, d_5d51_d9e2 + 2, d_5d51_d9e4 + 2, d_5d51_d9e2 - 2);
            f_1d5e_0fe3(d_5d51_d9e4 - 2, d_5d51_d9e2 - 2, d_5d51_d9e4 + 2, d_5d51_d9e2 + 2);
            if (d_5d51_d968 > -1) {
                f_1d5e_08d7(22);
                f_1d5e_0fe3(d_5d51_d968, d_5d51_d964, d_5d51_d9e4, d_5d51_d9e2);
            }
            d_5d51_d968 = d_5d51_d9e4;
            d_5d51_d964 = d_5d51_d9e2;
        }
    }
    for (d_5d51_d962 = 0; d_5d51_d962 <= 9; d_5d51_d962++)
        f_1646_357e(d_5d51_0804[d_5d51_d962].x, d_5d51_0804[d_5d51_d962].y, 1, d_5d51_0804[d_5d51_d962].s);
    f_1646_50c5(2, 2.125, 22.75, 1, 4, 293, "                DONE");
    do
        d_5d51_da0a = f_1646_5602(d_5d51_d9c6);
    while (d_5d51_da0a <= 0);
}
