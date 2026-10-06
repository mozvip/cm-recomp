/* @at 9915:0000 */
/* @data 5d51:57a4 */
/* @module */

/* Overlay 9915: CM93's overlay 9e77 (games/cm93/decomp/src/9E77.C) changed for CM Italia:
 * the game's services: printed tables and reports, ratings and form, the weekly update,
 * fines and bans, the title picture, loading and saving the whole game, and records. */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_9915_0000(int team);
void f_9915_04a5(char far *s);
void f_9915_0548(void);
void f_9915_0afd(void);
void f_9915_0c8b(void);
void f_9915_0dd8(int n);
void f_9915_1095(int p);
void f_9915_138e(int p, int a, int b);
void f_9915_168a(int p);
void f_9915_188f(int p);
void f_9915_1cf1(int p);
void f_9915_1def(void);
void f_9915_280d(void);
void f_9915_2bb5(char quick);
void f_9915_3970(void);
void f_9915_4724(FILE *fp);
void f_9915_4747(FILE *fp);
void f_9915_476a(void);
void f_9915_4872(void);
void f_9915_498d(char far *s);
void f_9915_4ac8(int a, int b);
void f_9915_4d1c(int a, int b);
void f_9915_4dfd(int n);
void f_9915_4ecb(void);
void f_9915_4ed0(void);

struct score { unsigned home : 4; unsigned away : 4; };
char far *f_1646_4849(int player);
char far *f_1646_470f(int player);
char f_1646_2cc9(int x);
char f_1646_2e7d(int player);
char f_1646_5dff(int player);
void f_1646_3c89(float x, float y, int colour, char far *s);
void f_1646_4ba0(char far *title);
void f_1646_5bcb(int team, char far *title, char far *text);
void f_1d5e_08cc(int c);
void f_1d5e_08d7(int c);
void f_1d5e_08e2(int x1, int y1, int x2, int y2);
void f_1d5e_0929(int x1, int y1, int x2, int y2);
long f_1d5e_0d6a(long n);
char far *f_1d5e_0e5f(char far *s);
int f_1d5e_136a(int a, int b);
void f_1d5e_13a4(void far *a, void far *b, int n);
void f_1d5e_1a24();
void f_6b47_5295(int team, char far names[][100][20], unsigned char far *comp, unsigned char far *week);
void f_8ba7_11e1(int player, char c);
void f_a7f0_4061(void);
void f_a7f0_4066(void);
void f_a7f0_406b(char far *s);
void f_a7f0_4092(char n);
extern char far d_2414_0078[];
extern char far d_2414_2e2c[];
extern char far d_2414_3810[];
extern char far d_2414_3ae0[];
extern char far d_2414_3c20[];
extern char far d_2414_3db0[];
extern char far d_2414_5460[][38];
extern struct score far d_2414_8414[];
extern long far d_2414_8418;
extern int far d_2414_841c[][16];
extern unsigned char far d_2414_845c[][16];
extern int far d_3404_40aa[][38];
extern unsigned char far d_3c0d_0000[][1500];
extern unsigned char far d_44d7_0000[][1500];
extern int far d_44d7_93fc[];
extern int far d_4f37_1392[][2][100];
extern char near *d_5d51_b476[];
extern int d_5d51_d694;
extern int d_5d51_d700;
extern int d_5d51_d7f4;
extern int d_5d51_d7f6;
extern int d_5d51_d876;
extern int d_5d51_d976;
extern int d_5d51_d978;
extern int d_5d51_d97a;
extern int d_5d51_d97e;
extern int d_5d51_d98a;
extern int d_5d51_d98e;
extern int d_5d51_d9ca;
extern int d_5d51_d9d0;
extern int d_5d51_d9f0;
extern int d_5d51_d9fe;
extern int d_5d51_da04;
extern int d_5d51_da06;
extern int d_5d51_da1a;
extern unsigned char far d_2414_af3d[][4];
struct flags_a { unsigned char b0; unsigned f8 : 1; unsigned f9 : 1; unsigned : 6; unsigned : 2; unsigned f18 : 1; unsigned f19 : 1; unsigned : 4; unsigned : 0; unsigned f24 : 1; unsigned : 3; unsigned f28 : 1; unsigned : 1; unsigned f30 : 1; unsigned : 1; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
void f_1646_0f3a(int p);
void f_1646_13f1(int player);
char far *f_1646_3537(int x);
void f_1646_58a8(int a);
char f_1646_5de5(int player);
int f_1646_5e11(int player);
unsigned char f_1646_5e2d(int player);
char f_1646_6f38(int player);
float f_1d5e_1089(void);
char far *f_1d5e_100c(char far *s);
float f_1d5e_12e0(float a, float b);
int f_1d5e_1308(int a, int b);
void far *f_1d5e_1618(int handle, int page);
void f_a7f0_3af0(char club);
void f_b0f1_0c98(int player);
extern char far d_2414_206c[];
extern char far d_2414_206d[];
extern char far d_2414_353e[];
extern unsigned char far d_2414_c6ac[][5][16];
extern unsigned char far d_2414_c6dc[][80];
extern int far d_3404_1ab4[];
extern int far d_3404_41da[];
extern long d_5d51_d435;
extern char d_5d51_d5ea;
extern unsigned char d_5d51_d5ef;
extern int d_5d51_d686;
extern int d_5d51_d688;
extern int d_5d51_d68a;
extern int d_5d51_d68c;
extern int d_5d51_d690;
extern int d_5d51_d71c;
extern int d_5d51_d848;
extern int d_5d51_d84a;
extern int d_5d51_d91c;
extern int d_5d51_d934;
extern int d_5d51_d9c2;
extern union flags d_5d51_af3c[];
extern long (far *d_5d51_da44)[38];
extern int d_5d51_dd98;
void f_1646_0b2f(int line, char far *s);
void f_1646_0b9f(char far *s);
char f_1646_0ccd(void);
void f_1646_1e79(int p);
void f_1646_2fa4(int n, char far *title, char far *items);
void f_1646_3348(int last);
void f_1646_3e54(float x, float y, int bg, int fg, int w, char far *s);
char far *f_1646_48c0(int player);
long f_1646_5ac3(int team);
void f_71c8_0027(int team);
void f_a13d_4a1b(int player, int a, char b);
extern char far d_2414_2d8c[];
extern char far d_2414_2ddc[];
extern unsigned char far d_3404_443a[][40];
extern char far * far d_4f37_0386[];
extern long d_5d51_d469;
extern char d_5d51_d575;
extern char d_5d51_d576;
extern char d_5d51_d586;
extern char d_5d51_d5a5;
extern char d_5d51_d5df;
extern char d_5d51_d5e1;
extern int d_5d51_d5fe;
extern int d_5d51_d600;
extern int d_5d51_d680;
extern int d_5d51_d682;
extern int d_5d51_d684;
extern int d_5d51_d81a;
extern int d_5d51_d832;
extern int d_5d51_da0a;
char far *f_1646_4919(int manager, char full);
float f_1646_6ab8(int x);
long f_8ba7_1401(int player);
void f_8ba7_41f1(int club, int a);
long f_9e79_2216(int x);
extern long d_5d51_d425;
extern long d_5d51_d429;
extern long d_5d51_d42d;
extern long d_5d51_d431;
extern char d_5d51_d572;
extern int (far *d_5d51_da4c)[1500];
extern int d_5d51_dd9c;
extern long far d_3404_3e4a[][38];
extern int far d_3404_4226[];
extern int far d_44d7_9624[][26];
void f_1646_0bf2(char far *s);
char f_1646_66f8(int a, int b);
extern unsigned char far d_2401_0000[];
extern int far d_2414_d63c[][22];
extern char far * far d_4f37_0000[];
extern char d_5d51_d571;
extern int d_5d51_d67a;
extern int d_5d51_d67c;
extern int d_5d51_d7ee;
extern int d_5d51_d88a;
extern int d_5d51_d99e;
extern int d_5d51_d9a2;
extern int d_5d51_da0e;
extern int d_5d51_da18;
extern unsigned char (far *d_5d51_da38)[1500];
extern int far *d_5d51_da40;
extern int d_5d51_dd92;
extern int d_5d51_dd96;
extern char far d_2414_00a0[];
extern char far d_2414_1e28[][40][5];
extern char far d_2414_4962[][4][20];
extern char far d_2414_4a02[];
extern char far d_2414_52cc[];
extern int far d_2414_5590[3][16][8];
extern char far d_2414_5890;
extern char far d_2414_5891;
extern char far d_2414_5892;
extern char far d_2414_5893;
extern char far d_2414_9618[];
extern char far d_2414_97a8[];
extern char far d_2414_a46c[];
extern unsigned char far d_2414_d3e0[][6][5];
extern int far d_2414_d578[][5];
extern unsigned char far d_2414_d5b4[][2][4];
extern int far d_2414_d5e4[][4];
extern long far d_2414_d5f4[];
extern int far d_2414_d604[];
extern float far d_2414_d60c[][4];
extern int far d_2414_d62c[][4];
extern float far d_2414_d694[];
extern unsigned char far d_2414_d8c4[];
extern int far d_2414_dae0[][140];
extern unsigned char far d_2414_e5d0[][140];
extern int far d_2414_ecec[];
extern int far d_2414_eda8[][4][2][30];
extern unsigned char far d_2414_f168[];
extern char far d_3404_0000[][16];
extern int far d_3404_0260[][16];
extern char far d_2414_0720[];
extern char far d_2414_0721;
extern char far d_2414_0722;
extern char far d_2414_0723;
extern unsigned char far d_2414_0724[];
extern char far d_2414_0725;
extern char far d_2414_0726;
extern char far d_2414_0727;
extern unsigned char far d_3404_0728[];
extern char far d_2403_0000[];
extern char far d_2406_0000[];
extern int far d_3404_0866[][80];
extern int far d_3404_0e34[][16];
extern unsigned char far d_3404_1334[][3][16];
extern int far d_3404_1ab6;
extern int far d_3404_1ab8;
extern int far d_3404_1aba;
extern unsigned char far d_3404_1abe[];
extern char far d_3404_51ac[];
extern char far d_44d7_8e60[];
extern int far d_44d7_9ddc[][2][13];
extern unsigned char far d_44d7_a5e0[];
extern unsigned char far d_4f37_09c4[][502];
extern unsigned char far d_4f37_50d2[][140];
extern unsigned long d_5d51_956d;
extern char near *d_5d51_b4c6[];
extern char near *d_5d51_b516[];
extern char d_5d51_d55a;
extern char d_5d51_d5e5;
extern int d_5d51_d8ea;
extern int d_5d51_d956;
extern int d_5d51_d958;
extern int d_5d51_d9ec;
extern int d_5d51_d9ea;
extern int d_5d51_d9ee;
extern int d_5d51_d998;
extern int d_5d51_d9f6;
extern int d_5d51_d9f8;
extern int d_5d51_d9fa;
extern int d_5d51_d9fc;
extern int d_5d51_da02;
extern char (far *d_5d51_da1c)[151];
extern char (far *d_5d51_da20)[151];
extern char far *d_5d51_da24;
extern char (far *d_5d51_da2c)[101];
extern int (far *d_5d51_da34)[2][16];
extern long (far *d_5d51_da3c)[140];
extern char far *d_5d51_da48;
extern int far *d_5d51_da50;
extern long far *d_5d51_da54;
extern long far *d_5d51_da58;
extern int d_5d51_dd84;
extern int d_5d51_dd86;
extern int d_5d51_dd88;
extern int d_5d51_dd8c;
extern int d_5d51_dd90;
extern int d_5d51_dd94;
extern int d_5d51_dd9a;
extern int d_5d51_dd9e;
extern int d_5d51_dda0;
extern int d_5d51_dda2;
void f_1d5e_0dbd(int ticks);
extern int d_5d51_da08;
char far *f_1646_4a20(int player);
void f_1646_4d19(float x, int w, char far *prompt);
void f_1d5e_0c9b(FILE *fp, char far *buf);
void f_1d5e_0ccf(FILE *fp, char far *s);
void f_1d5e_0fe3(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_1d5e_1a29(void);
extern int d_5d51_d950;
extern int d_5d51_dd8a;
extern char far *d_5d51_da28;
extern char far d_2414_0028[];
extern char far d_2414_4944[];
extern long far d_2414_fe5c[][2];
unsigned char f_1646_717d(char team);
extern union flags far d_2414_af3c[];
extern char far * far d_4f37_0371[];
extern char far d_3404_0720[];
extern char far d_3404_0721;
extern char far d_3404_0722;
extern char far d_3404_0723;
extern char far d_3404_0724[];
extern char far d_3404_0725;
extern char far d_3404_0726;
extern char far d_3404_0727;
extern int far d_3404_074e[][100];
extern unsigned char far d_4f37_7792[][140];
extern char far d_2414_8a20[];
extern int d_5d51_d9e8;
extern int d_5d51_da0c;
extern unsigned char d_5d51_d406;
extern char d_5d51_d402[];
struct s_trans { int a[15]; int b[15]; char club[15][15]; long fee[15]; unsigned char c[15]; };
struct s_mhst { unsigned char season; char name[15]; unsigned char pos; unsigned char played; unsigned char won; unsigned char drawn; unsigned char lost; unsigned char gf; unsigned char ga; unsigned char pts; unsigned char conf; char manager[10]; unsigned char n[2]; unsigned char x25; long x26; unsigned char x2a; unsigned char x2b; unsigned char cup; unsigned char cupround; struct s_trans t[2]; };


/* print a team's fixtures and results */
void f_9915_0000(int team)
{
    char sep[10];
    char home;
    FILE *fp;
    char names[4][100][20];
    char line[320];
    char scorers[80];
    unsigned char comp[100];
    unsigned char week[100];
    char buf[300];
    unsigned col;

    f_a7f0_4061();
    f_a7f0_406b("______________________________________________________________________________\n");
    f_a7f0_4092(2);
    sprintf(line, "%s FIXTURES/RESULTS SEASON %d", f_1d5e_0e5f(d_5d51_b476[team]), d_5d51_da04);
    f_a7f0_406b(line);
    f_a7f0_4092(3);
    f_a7f0_406b("COMP  OPPONENTS    VEN SCORE GATE   SCORERS");
    f_a7f0_4092(2);
    f_6b47_5295(team, names, comp, week);
    for (d_5d51_d97e = 0; d_5d51_d98a - 1 >= d_5d51_d97e; d_5d51_d97e++) {
        strcpy(line, names[0][d_5d51_d97e] + 2);
        sprintf(buf, " %s   %-13.13s(%s)  ", f_1d5e_0e5f(line), names[1][d_5d51_d97e], names[2][d_5d51_d97e]);
        f_a7f0_406b(buf);
        if (week[d_5d51_d97e] < d_5d51_da06) {
            d_5d51_d97a = week[d_5d51_d97e] - 1;
            d_5d51_d978 = comp[d_5d51_d97a];
            d_5d51_d976 = d_44d7_93fc[d_5d51_d97a] + d_5d51_d978;
            home = d_4f37_1392[d_5d51_d978][0][d_5d51_d97a] / 32 == team;
            f_1d5e_1a24(2);
            fp = fopen(d_2414_0078, "rb");
            fseek(fp, (long)(d_5d51_d976 - 1) * 174, 0);
            fread(d_2414_8414, 1, 174, fp);
            fclose(fp);
            if (d_2414_8414[2].home == 15 && d_2414_8414[2].away == 15) {
                d_5d51_d7f6 = d_2414_8414[1].home;
                d_5d51_d7f4 = d_2414_8414[1].away;
            } else {
                d_5d51_d7f6 = d_2414_8414[2].home;
                d_5d51_d7f4 = d_2414_8414[2].away;
            }
            if (home == 0)
                f_1d5e_13a4(&d_5d51_d7f6, &d_5d51_d7f4, 2);
            sprintf(line, "%d-%d", d_5d51_d7f6, d_5d51_d7f4);
            sprintf(buf, "%-5.5s%-7ld", line, d_2414_8418);
            f_a7f0_406b(buf);
            if (d_5d51_d7f6 > 0) {
                d_5d51_d98e = 0;
                col = 38;
                for (d_5d51_d9fe = 0; d_5d51_d9fe <= 15; d_5d51_d9fe++) {
                    if (home) {
                        d_5d51_d9f0 = d_2414_841c[0][d_5d51_d9fe];
                        d_5d51_d876 = d_2414_845c[0][d_5d51_d9fe] / 16;
                    } else {
                        d_5d51_d9f0 = d_2414_841c[1][d_5d51_d9fe];
                        d_5d51_d876 = d_2414_845c[1][d_5d51_d9fe] / 16;
                    }
                    if (d_5d51_d876 > 0 && d_5d51_d9f0 != -2) {
                        if (d_5d51_d98e > 0)
                            strcpy(sep, ",");
                        else
                            strcpy(sep, "");
                        strcpy(scorers, sep);
                        strcat(scorers, f_1646_4849(d_5d51_d9f0));
                        if (d_5d51_d876 > 1) {
                            sprintf(line, " %d", d_5d51_d876);
                            strcat(scorers, line);
                        }
                        if (strlen(scorers) > col) {
                            if (sep[0]) {
                                f_a7f0_406b(sep);
                                f_a7f0_4092(1);
                                strcpy(scorers, scorers + 1);
                            } else
                                f_a7f0_4092(1);
                            f_a7f0_406b("                                    ");
                            col = 38;
                        }
                        f_a7f0_406b(scorers);
                        col = col - strlen(scorers);
                        d_5d51_d98e++;
                    }
                }
            }
        }
        f_a7f0_4092(1);
    }
    f_a7f0_4092(2);
    f_a7f0_406b("______________________________________________________________________________\n");
    f_a7f0_4092(2);
    f_a7f0_4066();
}

/* a message box */
void f_9915_04a5(char far *s)
{
    f_1646_4ba0("");
    f_1d5e_08cc(16);
    f_1d5e_08e2(20, 121, 308, 89);
    f_1d5e_08cc(31);
    f_1d5e_08e2(16, 117, 304, 85);
    f_1d5e_08d7(19);
    f_1d5e_0929(16, 117, 304, 85);
    f_1646_3c89(-1.0, 12.5, 1, s);
}

/* the week's injuries and suspensions */
void f_9915_0548(void)
{
    unsigned char flag[1500];
    char tmp[320];
    char title[80];
    char text[180];

    memset(flag, 0, 1500);
    if (d_2414_3c20[0] && d_5d51_da06 > 12) {
        for (d_5d51_d9d0 = 1; strlen(d_2414_3c20) >= d_5d51_d9d0; d_5d51_d9d0 += 4) {
            strncpy(tmp, d_2414_3c20 + d_5d51_d9d0 - 1, 4);
            tmp[4] = 0;
            if (!f_1646_5dff(d_5d51_d9f0 = atol(tmp))) {
                d_3c0d_0000[2][d_5d51_d9f0] += 10;
                if (d_3c0d_0000[2][d_5d51_d9f0] % 5 == 1)
                    d_3c0d_0000[2][d_5d51_d9f0]--;
                flag[d_5d51_d9f0] = 0xff;
                d_3404_40aa[4][d_44d7_0000[18][d_5d51_d9f0]] += 10;
            } else if (d_5d51_da06 > 12 && f_1646_2e7d(d_5d51_d9f0) == 0)
                f_9915_138e(d_5d51_d9f0, 27, 2);
        }
    }
    if (d_2414_3ae0[0] && d_5d51_da06 > 12) {
        for (d_5d51_d9d0 = 1; strlen(d_2414_3ae0) >= d_5d51_d9d0; d_5d51_d9d0 += 4) {
            strncpy(tmp, d_2414_3ae0 + d_5d51_d9d0 - 1, 4);
            tmp[4] = 0;
            if (!f_1646_5dff(d_5d51_d9f0 = atol(tmp)) && flag[d_5d51_d9f0] == 0) {
                d_3c0d_0000[2][d_5d51_d9f0] += 5;
                if (d_3c0d_0000[2][d_5d51_d9f0] % 5 == 1)
                    d_3c0d_0000[2][d_5d51_d9f0]--;
                d_3404_40aa[4][d_44d7_0000[18][d_5d51_d9f0]] += 5;
            }
        }
    }
    strcpy(d_2414_2e2c, " suffered during the match");
    if (d_2414_3db0[0]) {
        for (d_5d51_d9d0 = 1; strlen(d_2414_3db0) >= d_5d51_d9d0; d_5d51_d9d0 += 4) {
            strncpy(tmp, d_2414_3db0 + d_5d51_d9d0 - 1, 4);
            tmp[4] = 0;
            d_5d51_d9f0 = atol(tmp);
            if (f_1d5e_0d6a(3) > 0) {
                if (!f_1646_5dff(d_5d51_d9f0)) {
                    f_9915_1095(d_5d51_d9f0);
                    d_44d7_0000[20][d_5d51_d9f0] -= d_44d7_0000[20][d_5d51_d9f0] > 0;
                } else if (f_1646_2e7d(d_5d51_d9f0) == 0)
                    f_9915_1095(d_5d51_d9f0);
            }
        }
    }
    if (d_2414_3810[0]) {
        for (d_5d51_d9d0 = 1; strlen(d_2414_3810) >= d_5d51_d9d0; d_5d51_d9d0 += 4) {
            strncpy(tmp, d_2414_3810 + d_5d51_d9d0 - 1, 4);
            tmp[4] = 0;
            d_5d51_d9f0 = atol(tmp);
            if (f_1d5e_0d6a(5) > 0 && !f_1646_5dff(d_5d51_d9f0))
                d_44d7_0000[15][d_5d51_d9f0] = f_1d5e_136a(d_44d7_0000[15][d_5d51_d9f0] + f_1d5e_0d6a(25),
                                                           d_44d7_0000[9][d_5d51_d9f0] + 25);
        }
    }
    for (d_5d51_d9f0 = 0; d_5d51_da1a - 1 >= d_5d51_d9f0; d_5d51_d9f0++) {
        d_5d51_d9ca = d_44d7_0000[18][d_5d51_d9f0];
        if (d_44d7_0000[20][d_5d51_d9f0] == 0) {
            d_5d51_d700 = d_3c0d_0000[2][d_5d51_d9f0];
            d_5d51_d694 = (flag[d_5d51_d9f0] != 0) + (d_5d51_d700 > 0 && d_5d51_d700 % 20 == 0 ? 2 : 0);
            if (d_5d51_d694 > 0) {
                if (d_5d51_da06 <= 12) {
                    d_44d7_0000[19][d_5d51_d9f0] = d_5d51_d694 + 27;
                    if (f_1646_2cc9(d_5d51_d9ca)) {
                        sprintf(title, "%s squad news", (char far *)d_5d51_b476[d_5d51_d9ca]);
                        sprintf(text, "%s put under delayed suspension, due to bad discipline.",
                                f_1646_470f(d_5d51_d9f0));
                        f_1646_5bcb(d_5d51_d9ca, title, text);
                    }
                } else
                    f_9915_138e(d_5d51_d9f0, 27, d_5d51_d694);
                d_2414_af3d[d_5d51_d9f0][0] |= 0x80;
                if (f_1646_2cc9(d_5d51_d9ca) == 0 && f_1d5e_0d6a(8) == 0)
                    f_8ba7_11e1(d_5d51_d9f0, -1);
            }
        } else if (d_44d7_0000[19][d_5d51_d9f0] == 27 && d_2414_5460[0][d_5d51_d9ca] && d_5d51_da06 > 12) {
            d_44d7_0000[20][d_5d51_d9f0] -= 1;
            if (d_44d7_0000[20][d_5d51_d9f0] == 0)
                f_9915_168a(d_5d51_d9f0);
        }
    }
}

void f_9915_0afd(void)
{
    char text[320];
    char score[80];

    if (d_3404_1ab4[0] > -1) {
        f_1646_4ba0("");
        f_1646_3c89(-1.0, 10.0, 2, "Performance of the week");
        sprintf(d_2414_353e, "%d-%d", abs(d_3404_1ab4[2]), d_3404_1ab4[3]);
        if (d_3404_1ab4[2] < 0)
            strcat(d_2414_353e, " Pens");
        strcpy(score, d_2414_206c);
        score[1] = 0;
        sprintf(text, "%s : %s v %s (%s)", f_1d5e_100c(f_1646_3537(d_3404_1ab4[0])), d_2414_353e,
                f_1d5e_100c(f_1646_3537(d_3404_1ab4[1])), score);
        f_1646_3c89(-1.0, 12.0, 6, text);
        strcpy(text, d_2414_206d);
        f_1646_3c89(-1.0, 14.0, 9, text);
        f_1646_58a8(0);
    }
}

void f_9915_0c8b(void)
{
    char text[320];

    for (d_5d51_d9ca = 0; d_5d51_d9ca <= 37; d_5d51_d9ca++) {
        d_5d51_d700 = d_3404_41da[d_5d51_d9ca];
        d_5d51_d5ef = f_1646_717d(d_5d51_d9ca) + 1;
        if (d_5d51_d700 >= d_5d51_d5ef * 20 + 180 && d_5d51_d700 % 5 == 0) {
            switch (d_5d51_d5ef) {
            case 1:
                d_5d51_d435 = f_1d5e_0d6a(6) * 5000 + 50000L;
                break;
            case 2:
                d_5d51_d435 = f_1d5e_0d6a(6) * 1000 + 25000;
                break;
            }
            sprintf(text, "%s have been fined %ld for excessive foul play.",
                    (char far *)d_5d51_b476[d_5d51_d9ca], d_5d51_d435);
            f_1646_5bcb(d_5d51_d9ca, "Disciplinary action", text);
            d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
            d_5d51_da44[12][d_5d51_d9ca] += d_5d51_d435;
            d_3404_41da[d_5d51_d9ca]++;
        }
        f_a7f0_3af0(d_5d51_d9ca);
    }
}

void f_9915_0dd8(int n)
{
    strcpy(d_2414_2e2c, " suffered during training");
    for (d_5d51_d690 = 1; d_5d51_d690 <= n; d_5d51_d690++) {
        d_5d51_d9d0 = -1;
        d_5d51_d84a = 0;
        do {
            do {
                d_5d51_d91c = f_1d5e_0d6a(d_5d51_da1a);
                d_5d51_d9ca = d_44d7_0000[18][d_5d51_d91c];
            } while (d_44d7_0000[20][d_5d51_d91c] > 0);
            d_5d51_d848 = f_1d5e_0d6a(d_44d7_0000[13][d_5d51_d91c] + 10);
            if (d_5d51_d848 > d_5d51_d9c2 || d_5d51_d9d0 == -1) {
                d_5d51_d9d0 = d_5d51_d91c;
                d_5d51_d9c2 = d_5d51_d848;
            }
            d_5d51_d84a++;
        } while (d_5d51_d9d0 <= -1 || d_5d51_d84a < 10);
        f_9915_1095(d_5d51_d9d0);
        d_5d51_d9d0 = -1;
        d_5d51_d84a = 0;
        do {
            d_5d51_d9ca = f_1d5e_0d6a(38);
            d_5d51_d9d0 = d_5d51_d9ca * 20 + f_1d5e_0d6a(16) + 3000;
            d_5d51_d84a++;
        } while ((d_2414_c6dc[d_5d51_d9ca][f_1646_5e2d(d_5d51_d9d0)] > 0 || f_1646_2e7d(d_5d51_d9d0))
                 && d_5d51_d84a < 50);
        if (d_2414_c6dc[d_5d51_d9ca][f_1646_5e2d(d_5d51_d9d0)] == 0 && f_1646_2e7d(d_5d51_d9d0) == 0)
            f_9915_1095(d_5d51_d9d0);
        if (d_5d51_d5ea == 0) {
            for (d_5d51_d97e = 1; d_5d51_d97e <= 7; d_5d51_d97e++) {
                d_5d51_d9d0 = -1;
                d_5d51_d84a = 0;
                do {
                    d_5d51_d91c = f_1d5e_0d6a(d_5d51_da1a);
                    d_5d51_d848 = f_1d5e_0d6a(d_44d7_0000[17][d_5d51_d91c] - 6);
                    if (d_5d51_d848 < d_5d51_d71c || d_5d51_d9d0 == -1) {
                        d_5d51_d9d0 = d_5d51_d91c;
                        d_5d51_d71c = d_5d51_d848;
                    }
                    d_5d51_d84a++;
                } while (d_5d51_d84a < 2 || d_5d51_d9d0 <= -1);
                d_5d51_d68c = d_44d7_0000[15][d_5d51_d9d0];
                f_9915_1cf1(d_5d51_d9d0);
                if (d_5d51_d5ea == 0) {
                    if (d_44d7_0000[15][d_5d51_d9d0] < d_5d51_d68c && d_2414_af3c[d_5d51_d9d0].w.f7
                        && f_1646_2cc9(d_44d7_0000[18][d_5d51_d9d0]) == 0)
                        f_1646_0f3a(d_5d51_d9d0);
                    else if (d_44d7_0000[15][d_5d51_d9d0] > d_5d51_d68c && d_44d7_0000[20][d_5d51_d9d0] == 0
                             && f_1646_2cc9(d_44d7_0000[18][d_5d51_d9d0]) == 0)
                        f_1646_13f1(d_5d51_d9d0);
                }
            }
        }
    }
}

void f_9915_1095(int p)
{
    unsigned char lo[26] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 2, 6, 6, 6, 8, 8, 8, 8, 8, 8, 16, 6, 20};
    unsigned char hi[26] = {1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 4, 10, 8, 8, 12, 12, 12, 12, 12, 12, 16, 60, 16, 60};

    d_5d51_d934 = f_1d5e_0d6a(100) + 1;
    if (d_5d51_d934 <= 43 || f_1d5e_0d6a(2) == 0) {
        char c;

        if (f_1646_5de5(p) || f_1646_6f38(p))
            c = d_2414_af3c[p].w.f0;
        else if (f_1646_5dff(p))
            c = d_2414_c6ac[f_1646_5e11(p)][0][f_1646_5e2d(p)] == 1 ? 1 : 0;
        do
            d_5d51_d68a = f_1d5e_0d6a(8);
        while (d_5d51_d68a == 4 || d_5d51_d68a == 5 || d_5d51_d68a == 6 || (d_5d51_d68a == 3 && c == 0));
    } else if (d_5d51_d934 >= 44 && d_5d51_d934 <= 78)
        d_5d51_d68a = f_1d5e_0d6a(6) + 8;
    else if (d_5d51_d934 >= 79 && d_5d51_d934 <= 92)
        d_5d51_d68a = f_1d5e_0d6a(2) + 14;
    else if (d_5d51_d934 >= 93 && d_5d51_d934 <= 97)
        d_5d51_d68a = f_1d5e_0d6a(6) + 16;
    else if (d_5d51_d934 >= 98)
        d_5d51_d68a = f_1d5e_0d6a(4) + 22;
    d_5d51_d688 = lo[d_5d51_d68a] + f_1d5e_0d6a(hi[d_5d51_d68a] - lo[d_5d51_d68a] + 1);
    f_9915_138e(p, d_5d51_d68a, d_5d51_d688);
    if (f_1646_5de5(p)) {
        d_5d51_d686 = d_5d51_d688;
        if (d_5d51_d688 >= 12 && f_1646_2cc9(d_44d7_0000[18][p]) == 0)
            f_b0f1_0c98(p);
        if (d_5d51_d688 >= 16 && f_1d5e_0d6a(15) == 0)
            f_9915_188f(p);
        if (d_5d51_d688 >= 16 && f_1d5e_0d6a(4) == 0) {
            d_44d7_0000[0][p] = d_44d7_0000[0][p] * f_1d5e_12e0(f_1d5e_1089(), 0.5);
            d_44d7_0000[9][p] = f_1d5e_1308(d_44d7_0000[9][p] * f_1d5e_12e0(f_1d5e_1089(), 0.5), d_44d7_0000[0][p]);
        }
    }
}

void f_9915_138e(int p, int a, int b)
{
    char title[120];
    char text[120];

    d_5d51_d576 = a == 27 ? -1 : 0;
    d_5d51_d575 = a == 50 ? -1 : 0;
    if (!f_1646_5dff(p)) {
        d_5d51_d9ca = d_44d7_0000[18][p];
        d_44d7_0000[19][p] = a;
        d_44d7_0000[20][p] = b;
        d_3c0d_0000[2][p] += d_5d51_d576 ? 1 : 0;
    } else {
        d_5d51_d9ca = f_1646_5e11(p);
        d_2414_c6dc[d_5d51_d9ca][f_1646_5e2d(p)] = b;
    }
    if (d_5d51_d5ea == 0 && d_5d51_d586 == 0 && f_1646_6f38(p) == 0) {
        if (f_1646_2cc9(d_5d51_d9ca) == 0)
            f_1646_0f3a(p);
        else
            f_1646_1e79(p);
        if (f_1646_2cc9(d_5d51_d9ca)) {
            if (d_5d51_d576) {
                sprintf(title, "%s squad news", (char far *)d_5d51_b476[d_5d51_d9ca]);
                sprintf(text, "%s serves a %d match ban, due to bad discipline.", f_1646_470f(p), b);
                f_1646_5bcb(d_5d51_d9ca, title, text);
            } else if (d_5d51_d575) {
                sprintf(title, "%s squad news", (char far *)d_5d51_b476[d_5d51_d9ca]);
                sprintf(text, "%s is ineligible for today's game - he is cuptied.", f_1646_470f(p));
                f_1646_5bcb(d_5d51_d9ca, title, text);
            } else if (a != 51) {
                if (b == 1)
                    strcpy(d_2414_2ddc, "a few days");
                else
                    sprintf(d_2414_2ddc, "about %d weeks", b);
                sprintf(title, "%s %ssquad news", (char far *)d_5d51_b476[d_5d51_d9ca],
                        f_1646_5dff(p) ? "reserve " : "");
                sprintf(text, "%s out for %s with %s%s.", f_1646_470f(p), d_2414_2ddc, d_4f37_0371[a], d_2414_2e2c);
                f_1646_5bcb(d_5d51_d9ca, title, text);
            }
        }
    }
    if (!f_1646_5dff(p) && f_1d5e_0d6a(d_44d7_0000[14][p] + 10) < f_1d5e_0d6a(10)
        && b > f_1d5e_0d6a(3) + 5)
        d_44d7_0000[15][p] = f_1d5e_1308(d_44d7_0000[15][p] - f_1d5e_0d6a(25), 10);
}

void f_9915_168a(int p)
{
    char what[180];
    char title[80];
    char text[180];

    if (!f_1646_5dff(p)) {
        d_5d51_d9ca = d_44d7_0000[18][p];
        d_5d51_d576 = d_44d7_0000[19][p] == 27;
        d_5d51_d575 = d_44d7_0000[19][p] == 50;
        d_44d7_0000[19][p] = 0;
        d_44d7_0000[20][p] = 0;
        d_2414_af3c[p].w.f25 = 0;
        d_2414_af3c[p].w.f26 = 0;
        d_2414_af3c[p].w.f27 = 0;
        d_2414_af3c[p].w.f23 = 1;
    } else {
        d_5d51_d9ca = f_1646_5e11(p);
        d_5d51_d576 = 0;
        d_5d51_d575 = 0;
        d_2414_c6dc[d_5d51_d9ca][f_1646_5e2d(p)] = 0;
    }
    if (d_5d51_d586 == 0 && f_1646_6f38(p) == 0) {
        if (f_1646_2cc9(d_5d51_d9ca) && !d_5d51_d575) {
            if (d_5d51_d576)
                strcpy(what, "returns from his disciplinary ban.");
            else if (!f_1646_5dff(p))
                sprintf(what, "resumes training at %d%% match fitness.", d_44d7_0000[21][p]);
            else
                strcpy(what, "resumes training.");
            sprintf(title, "%s %ssquad news", (char far *)d_5d51_b476[d_5d51_d9ca],
                    f_1646_5dff(p) ? "reserve " : "");
            sprintf(text, "%s %s", f_1646_470f(p), what);
            f_1646_5bcb(d_5d51_d9ca, title, text);
        }
        if (!f_1646_5dff(p) && f_1646_2cc9(d_44d7_0000[18][p]) == 0)
            f_1646_13f1(p);
    }
}

void f_9915_188f(int p)
{
    char ok;
    char failed;
    char buf[320];

    ok = 0;
    failed = 0;
    d_5d51_d684 = d_44d7_0000[18][p];
    d_5d51_d469 = f_1d5e_0d6a(11) * 10000 + 100000L;
    if (f_1646_2cc9(d_5d51_d684) && d_3c0d_0000[7][p] == 0xff && d_5d51_d5ea == 0 && d_5d51_d586 == 0) {
        d_5d51_d682 = f_1d5e_0d6a(7);
        switch (d_5d51_d682) {
        case 0: strcpy(d_2414_2d8c, "Norway"); break;
        case 1: strcpy(d_2414_2d8c, "Germany"); break;
        case 2: strcpy(d_2414_2d8c, "the USA"); break;
        case 3: strcpy(d_2414_2d8c, "Italy"); break;
        case 4: strcpy(d_2414_2d8c, "Sweden"); break;
        case 5: strcpy(d_2414_2d8c, "Canada"); break;
        case 6: strcpy(d_2414_2d8c, "Holland"); break;
        }
        do {
            d_5d51_d5a5 = 0;
            f_1646_4ba0("Medical Specialist");
            sprintf(buf, " %s injury ", f_1646_48c0(p));
            f_1646_3e54(1.0, 4.0, -(d_3404_443a[2][d_5d51_d684] / 16), d_3404_443a[2][d_5d51_d684] % 16, 0, buf);
            sprintf(buf, "A top surgeon in %s can operate", d_2414_2d8c);
            f_1646_0b2f(7, buf);
            if (d_2414_af3c[p].w.f20)
                strcpy(buf, "Cost is covered by insurance");
            else
                sprintf(buf, "It would cost %ld", d_5d51_d469);
            f_1646_0b2f(9, buf);
            f_1646_2fa4(12, "", "View Factfile|Last Finances|Accept Offer|Refuse Offer|");
            do {
                d_5d51_d5e1 = -1;
                f_1646_3348(3);
                d_5d51_d680 = d_5d51_da0a;
                if (d_5d51_d680 == 0) {
                    do
                        f_a13d_4a1b(p, -1, 0);
                    while (!d_5d51_d5df);
                    d_5d51_d5df = 0;
                    d_5d51_d5a5 = -1;
                } else if (d_5d51_d680 == 1) {
                    f_71c8_0027(d_5d51_d684);
                    d_5d51_d5a5 = -1;
                } else if (d_5d51_d680 == 2) {
                    if (f_1646_0ccd()) {
                        if (!d_2414_af3c[p].w.f20 && d_5d51_d469 > f_1646_5ac3(d_5d51_d684) * 0.5) {
                            f_1646_0b9f("The board refuse");
                            d_5d51_d5e1 = 0;
                        } else {
                            sprintf(buf, "%s has the operation", f_1646_48c0(p));
                            f_1646_0b9f(buf);
                            ok = -1;
                            if (f_1d5e_0d6a(8) == 0) {
                                f_1646_0b9f("But it is unsuccessful");
                                failed = -1;
                            } else
                                f_1646_0b9f("It is successful");
                        }
                    } else
                        d_5d51_d5e1 = 0;
                } else if (d_5d51_d680 == 3) {
                    if (f_1646_0ccd())
                        f_1646_0b9f("The offer is refused");
                    else
                        d_5d51_d5e1 = 0;
                }
            } while (!d_5d51_d5e1);
        } while (d_5d51_d5a5 != 0);
    } else if (d_2414_af3c[p].w.f20
               || d_44d7_0000[23][p] < 3 && f_1646_5ac3(d_5d51_d684) >= d_5d51_d469) {
        ok = -1;
        if (f_1d5e_0d6a(8) == 0)
            failed = -1;
    }
    if (ok && !d_2414_af3c[p].w.f20) {
        d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
        d_5d51_da44[13][d_5d51_d684] += d_5d51_d469;
    }
    if (ok == 0 && f_1d5e_0d6a(4) == 0 || ok && failed)
        d_2414_af3c[p].w.f17 = 1;
}

void f_9915_1cf1(int p)
{
    d_5d51_d81a = 50 - (8.5 - d_3404_443a[0][d_44d7_0000[18][p]]) * 5;
    if (d_5d51_d81a > f_1d5e_0d6a(101))
        d_5d51_d832 = f_1d5e_0d6a(10);
    else
        d_5d51_d832 = -f_1d5e_0d6a(10);
    d_5d51_d600 = f_1d5e_1308(d_44d7_0000[0][p] - 25, 10);
    d_5d51_d5fe = f_1d5e_136a(d_44d7_0000[0][p] + 25, d_44d7_0000[9][p] + 25);
    d_44d7_0000[15][p] = f_1d5e_1308(f_1d5e_136a(d_44d7_0000[15][p] + d_5d51_d832, d_5d51_d5fe), d_5d51_d600);
}

void f_9915_1def(void)
{
    char title[80];
    char text[180];
    int wage[30];

    for (d_5d51_d9ca = 0; d_5d51_d9ca <= 37; d_5d51_d9ca++) {
        d_5d51_d431 = f_9e79_2216(d_5d51_d9ca) - d_3404_3e4a[0][d_5d51_d9ca];
        if (d_5d51_d431 < 0) {
            d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
            d_5d51_da44[3][d_5d51_d9ca] += labs(d_5d51_d431) * 0.0005;
            d_5d51_d572 = 0;
        } else {
            d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
            d_5d51_da44[10][d_5d51_d9ca] += d_5d51_d431 * 0.004;
            d_5d51_d572 = -1;
        }
        switch (f_1646_717d(d_5d51_d9ca)) {
        case 0:
            d_5d51_d42d = 30000;
            d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
            d_5d51_da44[6][d_5d51_d9ca] += f_1d5e_0d6a(5000) + 10000;
            d_5d51_da44[13][d_5d51_d9ca] += f_1d5e_0d6a(5000) + 20000;
            break;
        case 1:
            d_5d51_d42d = 10000;
            d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
            d_5d51_da44[6][d_5d51_d9ca] += f_1d5e_0d6a(2500) + 5000;
            d_5d51_da44[13][d_5d51_d9ca] += f_1d5e_0d6a(5000) + 5000;
            break;
        }
        d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
        if (d_5d51_da06 < 12)
            d_5d51_da44[0][d_5d51_d9ca] += d_3404_443a[1][d_5d51_d9ca] / (f_1646_6ab8(d_5d51_d9ca) * 6) * 30000
                + f_1d5e_0d6a(10000) - f_1d5e_0d6a(10000);
        else
            d_5d51_da44[4][d_5d51_d9ca] += d_5d51_d42d;
        d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
        for (d_5d51_d9fe = 0; d_5d51_d9fe <= d_3404_443a[7][d_5d51_d9ca] - 1; d_5d51_d9fe++)
            wage[d_5d51_d9fe] = d_5d51_da4c[4][d_44d7_9624[d_5d51_d9ca][d_5d51_d9fe]];
        for (d_5d51_d9fe = 0; d_5d51_d9fe <= d_3404_443a[7][d_5d51_d9ca] - 1; d_5d51_d9fe++) {
            d_5d51_d9f0 = d_44d7_9624[d_5d51_d9ca][d_5d51_d9fe];
            d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
            d_5d51_da44[7][d_5d51_d9ca] += wage[d_5d51_d9fe];
            if (d_2414_af3c[d_5d51_d9f0].w.f20) {
                d_5d51_d469 = f_8ba7_1401(d_5d51_d9f0);
                d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
                d_5d51_da44[13][d_5d51_d9ca] += d_5d51_d469;
            }
            d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
            if (d_2414_af3c[d_5d51_d9f0].w.f25)
                d_5d51_da44[13][d_5d51_d9ca] += 10000;
            if (d_2414_af3c[d_5d51_d9f0].w.f26)
                d_5d51_da44[13][d_5d51_d9ca] += 5000;
            if (d_2414_af3c[d_5d51_d9f0].w.f27)
                d_5d51_da44[13][d_5d51_d9ca] += 3000;
        }
        d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
        d_5d51_da44[11][d_5d51_d9ca] += d_3404_443a[1][d_5d51_d9ca] * 200 / (1 << f_1646_717d(d_5d51_d9ca));
        d_5d51_d429 = 0;
        d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 0);
        for (d_5d51_d97e = 0; d_5d51_d97e <= 13; d_5d51_d97e++) {
            if (d_5d51_d97e <= 6)
                d_5d51_d429 += d_5d51_da44[d_5d51_d97e][d_5d51_d9ca];
            else if (d_5d51_d97e != 8)
                d_5d51_d429 -= d_5d51_da44[d_5d51_d97e][d_5d51_d9ca];
        }
        d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
        if (d_5d51_d429 > 0)
            d_5d51_da44[8][d_5d51_d9ca] += d_5d51_d429 * 0.4;
        d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 0);
        for (d_5d51_d97e = 0; d_5d51_d97e <= 13; d_5d51_d97e++) {
            if (d_5d51_d97e <= 6)
                d_3404_3e4a[0][d_5d51_d9ca] += d_5d51_da44[d_5d51_d97e][d_5d51_d9ca];
            else
                d_3404_3e4a[0][d_5d51_d9ca] -= d_5d51_da44[d_5d51_d97e][d_5d51_d9ca];
        }
        if (f_9e79_2216(d_5d51_d9ca) + f_1d5e_0d6a(100000) + 250000 < d_5d51_d431) {
            switch (f_1646_717d(d_5d51_d9ca)) {
            case 0:
                d_5d51_d425 = f_1d5e_0d6a(6) * 100000 + 500000;
                break;
            case 1:
                d_5d51_d425 = f_1d5e_0d6a(6) * 50000 + 250000;
                break;
            }
            d_5d51_d425 += d_5d51_d431;
            d_5d51_d425 = d_5d51_d425 / 10000 * 10000;
            sprintf(title, "%s takeover!", (char far *)d_5d51_b476[d_5d51_d9ca]);
            sprintf(text, "%s have been rescued by a %ld takeover deal. ", (char far *)d_5d51_b476[d_5d51_d9ca], d_5d51_d425);
            f_1646_5bcb(d_5d51_d9ca, title, text);
            d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
            d_5d51_da44[6][d_5d51_d9ca] += d_5d51_d425;
            d_3404_3e4a[0][d_5d51_d9ca] += d_5d51_d425;
            if (d_3404_443a[6][d_5d51_d9ca] < f_1d5e_0d6a(31) + 20)
                f_8ba7_41f1(d_5d51_d9ca, 0);
        } else if (f_9e79_2216(d_5d51_d9ca) < d_5d51_d431) {
            if (f_1646_2cc9(d_5d51_d9ca))
                f_1646_5bcb(d_5d51_d9ca, f_1646_4919(d_3404_4226[d_5d51_d9ca], 0),
                    "The club is in severe financial trouble, and you are urged to sell players.");
        } else if (f_9e79_2216(d_5d51_d9ca) / 2 < d_5d51_d431) {
            if (f_1646_2cc9(d_5d51_d9ca))
                f_1646_5bcb(d_5d51_d9ca, f_1646_4919(d_3404_4226[d_5d51_d9ca], 0),
                    "The board is concerned at the club's financial situation.");
        }
        d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
        for (d_5d51_d97e = 0; d_5d51_d97e <= 13; d_5d51_d97e++)
            (d_5d51_da44 + 16)[d_5d51_d97e][d_5d51_d9ca] = d_5d51_da44[d_5d51_d97e][d_5d51_d9ca];
    }
}

/* the international squads: picks the senior and under-21 squads of the five home nations */
void f_9915_280d(void)
{
    unsigned char far *p;
    unsigned char nation[5] = { 0, 0, 0, 0, 0 };
    char title[80];
    char text[180];
    char u21[20];
    unsigned i;

    f_1646_0bf2("New international squad|has been announced");
    d_5d51_d9f0 = 0;
    do {
        d_2414_af3c[d_5d51_d9f0].a.f18 = 0;
        d_2414_af3c[d_5d51_d9f0].a.f19 = 0;
        if (d_5d51_da1a - 1 == d_5d51_d9f0)
            d_5d51_d9f0 = 1000;
        else
            d_5d51_d9f0++;
    } while (d_5d51_da18 + 999 >= d_5d51_d9f0);
    for (d_5d51_d9a2 = 0; d_5d51_d9a2 <= 1; d_5d51_d9a2++) {
        for (d_5d51_d7ee = 0; d_5d51_d7ee <= 0; d_5d51_d7ee++) {
            p = d_2401_0000;
            for (i = 0; i <= 21; i++) {
                d_5d51_d99e = *p++;
                d_5d51_d67c = -1;
                d_5d51_d571 = 0;
                do {
                    for (d_5d51_d91c = 1; d_5d51_d91c <= 100; d_5d51_d91c++) {
                        d_5d51_da40 = f_1d5e_1618(d_5d51_dd96, 0);
                        d_5d51_d9f0 = d_5d51_da40[d_5d51_d91c - 1];
                        if (d_5d51_d9f0 > -1 && !d_2414_af3c[d_5d51_d9f0].a.f18 && d_44d7_0000[20][d_5d51_d9f0] == 0 &&
                            (d_44d7_0000[21][d_5d51_d9f0] > 90 || d_5d51_d571 != 0 || d_5d51_da06 < 12) &&
                            (d_5d51_d9a2 == 0 || (d_5d51_d9a2 == 1 && d_44d7_0000[17][d_5d51_d9f0] < 22)) &&
                            (f_1646_66f8(d_5d51_d9f0, d_5d51_d99e) || (d_5d51_d571 != 0 && d_5d51_d99e > 1))) {
                            d_5d51_d88a = (d_44d7_0000[0][d_5d51_d9f0] * 2 + d_44d7_0000[15][d_5d51_d9f0] * 2) / 4;
                            if ((d_3c0d_0000[0][d_5d51_d9f0] > d_5d51_da0e / 3 || d_5d51_d571 != 0) &&
                                (d_5d51_d67c == -1 || d_5d51_d88a > d_5d51_d67a)) {
                                d_5d51_d67a = d_5d51_d88a;
                                d_5d51_d67c = d_5d51_d9f0;
                            }
                        }
                    }
                    d_5d51_d5e1 = -1;
                    if (d_5d51_d67c == -1 && d_5d51_d571 == 0) {
                        d_5d51_d571 = -1;
                        d_5d51_d5e1 = 0;
                    }
                } while (!d_5d51_d5e1);
                d_2414_d63c[d_5d51_d9a2][i] = d_5d51_d67c;
                if (d_5d51_d67c > -1) {
                    d_2414_af3c[d_5d51_d67c].a.f18 = 1;
                    d_2414_af3c[d_5d51_d67c].a.f19 = d_5d51_d9a2 == 1;
                    if (d_5d51_d9a2 == 0) {
                        d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 1);
                        d_5d51_da38[2][d_5d51_d67c]++;
                    }
                    d_5d51_d9ca = d_44d7_0000[18][d_5d51_d67c];
                    if (f_1646_2cc9(d_5d51_d9ca)) {
                        sprintf(title, "%s squad news", (char far *)d_5d51_b476[d_5d51_d9ca]);
                        strcpy(u21, "");
                        if (d_5d51_d9a2 == 1)
                            strcpy(u21, "under-21 ");
                        sprintf(text, "%s has been called up to the %s %ssquad.", f_1646_470f(d_5d51_d67c),
                                d_4f37_0000[nation[d_5d51_d7ee]], u21);
                        f_1646_5bcb(d_5d51_d9ca, title, text);
                    }
                }
            }
        }
    }
}

/* loads the saved game (quick == 0) or the quick-start game (quick == 1) */
void f_9915_2bb5(char quick)
{
    FILE *fp;

    f_1d5e_1a24(2);
    d_2414_4a02[0] = 0;
    if (quick == 0)
        f_9915_498d("Ok - Loading Saved Game");
    else
        f_9915_498d("Ok - Loading Quick-Start Game");
    fp = fopen(d_2414_00a0, "rb");
    d_5d51_da2c = f_1d5e_1618(d_5d51_dd8c, 1);
    fread(d_5d51_da2c, 4040, 1, fp);
    fread(d_2414_1e28, 400, 1, fp);
    fread(d_2414_97a8, 3268, 1, fp);
    d_5d51_da24 = f_1d5e_1618(d_5d51_dd88, 1);
    fread(d_5d51_da24, 604, 1, fp);
    d_5d51_da20 = f_1d5e_1618(d_5d51_dd86, 1);
    fread(d_5d51_da20, 604, 1, fp);
    d_5d51_da1c = f_1d5e_1618(d_5d51_dd84, 1);
    fread(d_5d51_da1c, 604, 1, fp);
    fread(d_2414_4962, 160, 1, fp);
    fread(d_5d51_b516, 1004, 1, fp);
    fread(d_5d51_b476, 80, 1, fp);
    fread(d_5d51_b4c6, 80, 1, fp);
    f_9915_4ed0();
    f_9915_4724(fp);
    fread(d_44d7_0000, 36000, 1, fp);
    fread(d_3c0d_0000, 36000, 1, fp);
    d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 1);
    fread(d_5d51_da38, 15000, 1, fp);
    fread(d_3404_51ac, 12000, 1, fp);
    d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 1);
    fread(d_5d51_da4c, 15000, 1, fp);
    d_5d51_da58 = f_1d5e_1618(d_5d51_dda2, 1);
    fread(d_5d51_da58, 6000, 1, fp);
    fread(d_2414_5460, 304, 1, fp);
    fread(d_3404_443a, 2880, 1, fp);
    fread(d_2414_f168, 140, 1, fp);
    fread(d_4f37_09c4, 2510, 1, fp);
    fread(d_3404_40aa, 912, 1, fp);
    fread(d_2414_c6ac, 3040, 1, fp);
    fread(d_44d7_9624, 1976, 1, fp);
    d_5d51_da34 = f_1d5e_1618(d_5d51_dd90, 1);
    fread(d_5d51_da34, 2432, 1, fp);
    fread(d_2414_52cc, 208, 1, fp);
    fread(d_3404_3e4a, 608, 1, fp);
    fread(d_3404_1abe, 9100, 1, fp);
    d_5d51_da48 = f_1d5e_1618(d_5d51_dd9a, 1);
    fread(d_5d51_da48, 3900, 1, fp);
    d_5d51_da54 = f_1d5e_1618(d_5d51_dda0, 1);
    fread(d_5d51_da54, 2600, 1, fp);
    d_5d51_da50 = f_1d5e_1618(d_5d51_dd9e, 1);
    fread(d_5d51_da50, 1300, 1, fp);
    fread(d_3404_1334, 1920, 1, fp);
    fread(d_3404_0e34, 1280, 1, fp);
    fread(d_44d7_9ddc, 1976, 1, fp);
    fread(d_3404_074e, 1600, 1, fp);
    fread(d_3404_0728, 38, 1, fp);
    fread(d_4f37_1392, 25600, 1, fp);
    fread(d_44d7_93fc, 400, 1, fp);
    d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
    fread(d_5d51_da44, 4864, 1, fp);
    fread(d_3404_0260, 1216, 1, fp);
    fread(d_3404_0000, 608, 1, fp);
    fread(d_2414_eda8, 960, 1, fp);
    fread(d_44d7_8e60, 1024, 1, fp);
    fread(d_2403_0000, 40, 1, fp);
    fread(d_2406_0000, 120, 1, fp);
    fread(d_2414_ecec, 128, 1, fp);
    fread(d_2414_e5d0, 1820, 1, fp);
    fread(d_2414_dae0, 2800, 1, fp);
    d_5d51_da3c = f_1d5e_1618(d_5d51_dd94, 1);
    fread(d_5d51_da3c, 2240, 1, fp);
    fread(d_2414_d694, 560, 1, fp);
    fread(d_2414_d62c, 16, 1, fp);
    fread(d_2414_d60c, 32, 1, fp);
    fread(d_2414_d604, 8, 1, fp);
    fread(d_2414_d5f4, 16, 1, fp);
    fread(d_2414_d63c, 88, 1, fp);
    d_5d51_da40 = f_1d5e_1618(d_5d51_dd96, 1);
    fread(d_5d51_da40, 200, 1, fp);
    fread(d_2414_d5e4, 16, 1, fp);
    fread(d_2414_d5b4, 48, 1, fp);
    fread(d_2414_d578, 60, 1, fp);
    fread(d_2414_d3e0, 180, 1, fp);
    fread(d_2414_d8c4, 540, 1, fp);
    fread(d_4f37_7792, 280, 1, fp);
    fread(d_2414_5590, 768, 1, fp);
    fread(d_44d7_a5e0, 24, 1, fp);
    fread(&d_5d51_da06, 2, 1, fp);
    fread(&d_5d51_da0e, 2, 1, fp);
    fread(&d_5d51_da0c, 2, 1, fp);
    fread(&d_5d51_da04, 2, 1, fp);
    fread(&d_5d51_d8ea, 2, 1, fp);
    fread(&d_5d51_da02, 2, 1, fp);
    fread(&d_5d51_d9fc, 2, 1, fp);
    fread(&d_5d51_d9fa, 2, 1, fp);
    fread(&d_5d51_d9f8, 2, 1, fp);
    fread(&d_5d51_d9f6, 2, 1, fp);
    fread(&d_5d51_d9ee, 2, 1, fp);
    fread(&d_5d51_d998, 2, 1, fp);
    fread(&d_5d51_d9ec, 2, 1, fp);
    fread(&d_5d51_d9ea, 2, 1, fp);
    fread(&d_5d51_d9e8, 2, 1, fp);
    fread(&d_3404_0726, 1, 1, fp);
    fread(&d_3404_0727, 1, 1, fp);
    fread(d_3404_0724, 1, 1, fp);
    fread(&d_3404_0725, 1, 1, fp);
    fread(d_3404_0720, 1, 1, fp);
    fread(&d_3404_0721, 1, 1, fp);
    fread(&d_3404_0722, 1, 1, fp);
    fread(&d_3404_0723, 1, 1, fp);
    fread(&d_5d51_d956, 2, 1, fp);
    fread(&d_5d51_d958, 2, 1, fp);
    fread(d_2414_8a20, 3064, 1, fp);
    fread(&d_2414_5890, 1, 1, fp);
    fread(&d_2414_5891, 1, 1, fp);
    fread(&d_2414_5892, 1, 1, fp);
    fread(&d_2414_5893, 1, 1, fp);
    fread(&d_5d51_d5e5, 1, 1, fp);
    fread(&d_3404_1ab4, 2, 1, fp);
    fread(&d_3404_1ab6, 2, 1, fp);
    fread(&d_3404_1ab8, 2, 1, fp);
    fread(&d_3404_1aba, 2, 1, fp);
    fread(d_2414_206c, 40, 1, fp);
    fread(d_2414_a46c, 368, 1, fp);
    fread(d_2414_9618, 400, 1, fp);
    fread(&d_5d51_da1a, 2, 1, fp);
    fread(&d_5d51_da18, 2, 1, fp);
    fread(&d_5d51_d55a, 1, 1, fp);
    fread(&d_5d51_d406, 1, 1, fp);
    fread(d_5d51_d402, 4, 1, fp);
    fread(&d_5d51_956d, 4, 1, fp);
    fclose(fp);
    f_1d5e_1a24(2);
}

/* saves the game */
void f_9915_3970(void)
{
    FILE *fp;

    f_1d5e_1a24(2);
    d_2414_4a02[0] = 0;
    f_9915_498d("Ok - Saving Data");
    fp = fopen(d_2414_00a0, "wb");
    if (fp != NULL) {
        d_5d51_da2c = f_1d5e_1618(d_5d51_dd8c, 0);
        fwrite(d_5d51_da2c, 4040, 1, fp);
        fwrite(d_2414_1e28, 400, 1, fp);
        fwrite(d_2414_97a8, 3268, 1, fp);
        d_5d51_da24 = f_1d5e_1618(d_5d51_dd88, 0);
        fwrite(d_5d51_da24, 604, 1, fp);
        d_5d51_da20 = f_1d5e_1618(d_5d51_dd86, 0);
        fwrite(d_5d51_da20, 604, 1, fp);
        d_5d51_da1c = f_1d5e_1618(d_5d51_dd84, 0);
        fwrite(d_5d51_da1c, 604, 1, fp);
        fwrite(d_2414_4962, 160, 1, fp);
        f_9915_4ecb();
        fwrite(d_5d51_b516, 1004, 1, fp);
        fwrite(d_5d51_b476, 80, 1, fp);
        fwrite(d_5d51_b4c6, 80, 1, fp);
        f_9915_4ed0();
        f_9915_4747(fp);
        fwrite(d_44d7_0000, 36000, 1, fp);
        fwrite(d_3c0d_0000, 36000, 1, fp);
        d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 0);
        fwrite(d_5d51_da38, 15000, 1, fp);
        fwrite(d_3404_51ac, 12000, 1, fp);
        d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
        fwrite(d_5d51_da4c, 15000, 1, fp);
        d_5d51_da58 = f_1d5e_1618(d_5d51_dda2, 0);
        fwrite(d_5d51_da58, 6000, 1, fp);
        fwrite(d_2414_5460, 304, 1, fp);
        fwrite(d_3404_443a, 2880, 1, fp);
        fwrite(d_2414_f168, 140, 1, fp);
        fwrite(d_4f37_09c4, 2510, 1, fp);
        fwrite(d_3404_40aa, 912, 1, fp);
        fwrite(d_2414_c6ac, 3040, 1, fp);
        fwrite(d_44d7_9624, 1976, 1, fp);
        d_5d51_da34 = f_1d5e_1618(d_5d51_dd90, 0);
        fwrite(d_5d51_da34, 2432, 1, fp);
        fwrite(d_2414_52cc, 208, 1, fp);
        fwrite(d_3404_3e4a, 608, 1, fp);
        fwrite(d_3404_1abe, 9100, 1, fp);
        d_5d51_da48 = f_1d5e_1618(d_5d51_dd9a, 0);
        fwrite(d_5d51_da48, 3900, 1, fp);
        d_5d51_da54 = f_1d5e_1618(d_5d51_dda0, 0);
        fwrite(d_5d51_da54, 2600, 1, fp);
        d_5d51_da50 = f_1d5e_1618(d_5d51_dd9e, 0);
        fwrite(d_5d51_da50, 1300, 1, fp);
        fwrite(d_3404_1334, 1920, 1, fp);
        fwrite(d_3404_0e34, 1280, 1, fp);
        fwrite(d_44d7_9ddc, 1976, 1, fp);
        fwrite(d_3404_074e, 1600, 1, fp);
        fwrite(d_3404_0728, 38, 1, fp);
        fwrite(d_4f37_1392, 25600, 1, fp);
        fwrite(d_44d7_93fc, 400, 1, fp);
        d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 0);
        fwrite(d_5d51_da44, 4864, 1, fp);
        fwrite(d_3404_0260, 1216, 1, fp);
        fwrite(d_3404_0000, 608, 1, fp);
        fwrite(d_2414_eda8, 960, 1, fp);
        fwrite(d_44d7_8e60, 1024, 1, fp);
        fwrite(d_2403_0000, 40, 1, fp);
        fwrite(d_2406_0000, 120, 1, fp);
        fwrite(d_2414_ecec, 128, 1, fp);
        fwrite(d_2414_e5d0, 1820, 1, fp);
        fwrite(d_2414_dae0, 2800, 1, fp);
        d_5d51_da3c = f_1d5e_1618(d_5d51_dd94, 0);
        fwrite(d_5d51_da3c, 2240, 1, fp);
        fwrite(d_2414_d694, 560, 1, fp);
        fwrite(d_2414_d62c, 16, 1, fp);
        fwrite(d_2414_d60c, 32, 1, fp);
        fwrite(d_2414_d604, 8, 1, fp);
        fwrite(d_2414_d5f4, 16, 1, fp);
        fwrite(d_2414_d63c, 88, 1, fp);
        d_5d51_da40 = f_1d5e_1618(d_5d51_dd96, 0);
        fwrite(d_5d51_da40, 200, 1, fp);
        fwrite(d_2414_d5e4, 16, 1, fp);
        fwrite(d_2414_d5b4, 48, 1, fp);
        fwrite(d_2414_d578, 60, 1, fp);
        fwrite(d_2414_d3e0, 180, 1, fp);
        fwrite(d_2414_d8c4, 540, 1, fp);
        fwrite(d_4f37_7792, 280, 1, fp);
        fwrite(d_2414_5590, 768, 1, fp);
        fwrite(d_44d7_a5e0, 24, 1, fp);
        fwrite(&d_5d51_da06, 2, 1, fp);
        fwrite(&d_5d51_da0e, 2, 1, fp);
        fwrite(&d_5d51_da0c, 2, 1, fp);
        fwrite(&d_5d51_da04, 2, 1, fp);
        fwrite(&d_5d51_d8ea, 2, 1, fp);
        fwrite(&d_5d51_da02, 2, 1, fp);
        fwrite(&d_5d51_d9fc, 2, 1, fp);
        fwrite(&d_5d51_d9fa, 2, 1, fp);
        fwrite(&d_5d51_d9f8, 2, 1, fp);
        fwrite(&d_5d51_d9f6, 2, 1, fp);
        fwrite(&d_5d51_d9ee, 2, 1, fp);
        fwrite(&d_5d51_d998, 2, 1, fp);
        fwrite(&d_5d51_d9ec, 2, 1, fp);
        fwrite(&d_5d51_d9ea, 2, 1, fp);
        fwrite(&d_5d51_d9e8, 2, 1, fp);
        fwrite(&d_3404_0726, 1, 1, fp);
        fwrite(&d_3404_0727, 1, 1, fp);
        fwrite(d_3404_0724, 1, 1, fp);
        fwrite(&d_3404_0725, 1, 1, fp);
        fwrite(d_3404_0720, 1, 1, fp);
        fwrite(&d_3404_0721, 1, 1, fp);
        fwrite(&d_3404_0722, 1, 1, fp);
        fwrite(&d_3404_0723, 1, 1, fp);
        fwrite(&d_5d51_d956, 2, 1, fp);
        fwrite(&d_5d51_d958, 2, 1, fp);
        fwrite(d_2414_8a20, 3064, 1, fp);
        fwrite(&d_2414_5890, 1, 1, fp);
        fwrite(&d_2414_5891, 1, 1, fp);
        fwrite(&d_2414_5892, 1, 1, fp);
        fwrite(&d_2414_5893, 1, 1, fp);
        fwrite(&d_5d51_d5e5, 1, 1, fp);
        fwrite(&d_3404_1ab4, 2, 1, fp);
        fwrite(&d_3404_1ab6, 2, 1, fp);
        fwrite(&d_3404_1ab8, 2, 1, fp);
        fwrite(&d_3404_1aba, 2, 1, fp);
        fwrite(d_2414_206c, 40, 1, fp);
        fwrite(d_2414_a46c, 368, 1, fp);
        fwrite(d_2414_9618, 400, 1, fp);
        fwrite(&d_5d51_da1a, 2, 1, fp);
        fwrite(&d_5d51_da18, 2, 1, fp);
        fwrite(&d_5d51_d55a, 1, 1, fp);
        fwrite(&d_5d51_d406, 1, 1, fp);
        fwrite(d_5d51_d402, 4, 1, fp);
        fwrite(&d_5d51_956d, 4, 1, fp);
        fclose(fp);
        f_1d5e_0dbd(150);
    }
    d_5d51_da08 = -1;
}

void f_9915_4724(FILE *fp)
{
    fread(d_2414_af3c, 0x1770, 1, fp);
}

void f_9915_4747(FILE *fp)
{
    fwrite(d_2414_af3c, 0x1770, 1, fp);
}

void f_9915_476a(void)
{
    FILE *fp;
    unsigned char c;

    f_1d5e_1a24(1);
    d_2414_4a02[0] = 0;
    fp = fopen("hiscores", "rb");
    for (c = 0; c <= 1; c = c + 1)
        for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 19; d_5d51_d9d0++) {
            d_5d51_da28 = f_1d5e_1618(d_5d51_dd8a, 1);
            f_1d5e_0c9b(fp, d_5d51_da28 + d_5d51_d9d0 * 160 + c * 80);
            f_1d5e_0c9b(fp, d_5d51_da28 + d_5d51_d9d0 * 160 + c * 80 + 3200);
        }
    fread(d_2414_fe5c, 160, 1, fp);
    fclose(fp);
}

void f_9915_4872(void)
{
    FILE *fp;
    unsigned char c;

    f_1d5e_1a24(1);
    d_2414_4a02[0] = 0;
    f_9915_498d("Saving Hall of Fame");
    fp = fopen("hiscores", "wb");
    if (fp != NULL) {
        for (c = 0; c <= 1; c = c + 1)
            for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 19; d_5d51_d9d0++) {
                d_5d51_da28 = f_1d5e_1618(d_5d51_dd8a, 0);
                f_1d5e_0ccf(fp, d_5d51_da28 + d_5d51_d9d0 * 160 + c * 80);
                f_1d5e_0ccf(fp, d_5d51_da28 + d_5d51_d9d0 * 160 + c * 80 + 3200);
            }
        fwrite(d_2414_fe5c, 160, 1, fp);
        fclose(fp);
    }
}

void f_9915_498d(char far *s)
{
    if (!d_2414_4a02[0])
        f_1646_4ba0("");
    f_1d5e_1a29();
    if (_fstrcmp(d_2414_4a02, s) != 0) {
        f_1d5e_08cc(16);
        f_1d5e_08e2(20, 0x79, 0x134, 0x59);
        f_1d5e_08cc(20);
        f_1d5e_08e2(16, 0x75, 0x130, 0x55);
        f_1d5e_08d7(28);
        f_1d5e_0fe3(16, 0x75, 16, 0x55);
        f_1d5e_0fe3(16, 0x55, 0x130, 0x55);
        f_1d5e_08d7(16);
        f_1d5e_0fe3(0x130, 0x55, 0x130, 0x75);
        f_1d5e_0fe3(0x130, 0x75, 16, 0x75);
        f_1646_3c89(-1.0, 12.5, 1, s);
        _fstrcpy(d_2414_4a02, s);
    }
}

void f_9915_4ac8(int a, int b)
{
    FILE *fp;
    char x[280];
    char y[280];

    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 12; d_5d51_d9fe++) {
        f_1d5e_13a4(&d_2414_e5d0[d_5d51_d9fe][a], &d_2414_e5d0[d_5d51_d9fe][b], 1);
        if (d_5d51_d9fe < 10) {
            f_1d5e_13a4(&d_2414_dae0[d_5d51_d9fe][a], &d_2414_dae0[d_5d51_d9fe][b], 2);
            if (d_5d51_d9fe < 4) {
                d_5d51_da3c = f_1d5e_1618(d_5d51_dd94, 1);
                f_1d5e_13a4(&d_5d51_da3c[d_5d51_d9fe][a], &d_5d51_da3c[d_5d51_d9fe][b], 4);
            }
        }
    }
    f_1d5e_13a4(&d_2414_d694[a], &d_2414_d694[b], 4);
    f_1d5e_1a24(2);
    fp = fopen(d_2414_0028, "rb+");
    fseek(fp, a * 279L, 0);
    fread(x, 1, 279, fp);
    fseek(fp, b * 279L, 0);
    fread(y, 1, 279, fp);
    fseek(fp, a * 279L, 0);
    fwrite(y, 1, 279, fp);
    fseek(fp, b * 279L, 0);
    fwrite(x, 1, 279, fp);
    fclose(fp);
}

void f_9915_4d1c(int a, int b)
{
    unsigned k, j, i;

    for (k = 0; k <= 6; k++)
        for (i = 0; i <= 15; i++)
            if (d_2414_5590[0][i][k] > 0)
                for (j = 1; j <= 2; j++) {
                    if (d_2414_5590[j][i][k] == a)
                        d_2414_5590[j][i][k] = b;
                    else if (d_2414_5590[j][i][k] == b)
                        d_2414_5590[j][i][k] = a;
                }
}

void f_9915_4dfd(int n)
{
    char buf[60];

    for (d_5d51_d950 = 0; d_5d51_d950 <= 1; d_5d51_d950++) {
        if (d_5d51_d950 == 0)
            strcpy(buf, "First Name ?");
        else
            strcpy(buf, "Surname ?");
        f_1646_4d19(2.625, d_5d51_d950 * 3 + 7, buf);
        if (d_2414_4944[0] == 0) {
            if (d_5d51_d950 == 0)
                strcpy(d_2414_4944, "Player");
            else
                strcpy(d_2414_4944, f_1646_4a20(n + 1));
        }
        strcpy(d_2414_4962[d_5d51_d950][n], d_2414_4944);
    }
}

void f_9915_4ecb(void)
{
}

void f_9915_4ed0(void)
{
}
