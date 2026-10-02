/* @at 7555:0000 */
/* @data 5d9c:4890 */
/* @module */

/* Overlay 3: the match: setting it up and restoring the teams afterwards, the ground and
 * the gate, the halves, extra time and penalties, the clock and the score, keys during
 * play, fouls, injuries, bookings and sendings off with their commentary, tactical
 * moves and substitutions. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <math.h>

/* the functions, in address order: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_7555_0000(char far *s);
void f_7555_00cc(int team);
void f_7555_00e9(int team);
void f_7555_0390(int team, int mode);
void f_7555_0634(void);
void f_7555_0c6b(char flag, char far *s);
void f_7555_0de7(void);
void f_7555_0fa8(void);
void f_7555_110b(void);
void f_7555_1727(void);
void f_7555_1973(void);
void f_7555_2012(void);
void f_7555_2125(int team);
void f_7555_2372(void);
char f_7555_26b1(int club, int round);
char f_7555_274e(int club, int round);
void f_7555_277b(int a, int b, int c);
void f_7555_28ff(void);
void f_7555_2a03(void);
void f_7555_2a80(void);
void f_7555_2afd(void);
void f_7555_2b65(void);
void f_7555_2bcd(void);
void f_7555_2cc6(void);
unsigned char f_7555_2dbf(unsigned char a, int b);
unsigned char f_7555_2e05(unsigned char a, int b);
void f_7555_2e41(void);
void f_7555_3023(void);
void f_7555_30e2(int team);
void f_7555_31b5(int team);
int f_7555_3245(int team, int p);
void f_7555_33fe(int team);
void f_7555_38b3(int a, int b, int team, int n);
void f_7555_3b21(int team, int p);
void f_7555_3fa2(void);
void f_7555_3ff8(int team, char c);
void f_7555_4165();             /* no prototype: 38b3 passes it two arguments */
void f_7555_45b8(int team);
void f_7555_4662(float x, float y);
void f_7555_46d3(void);

void f_1680_2ea0(float x, float y, int bg, int fg, int w, char far *s);
void f_1680_2867(float x, float y, int bg, int fg, int w, char far *s);
void f_14d2_0c66(int ticks);
void f_a1c3_30b1(int a, char b);
void f_a1c3_27e4(char far *title);
char f_1680_0003(int x);
void f_1680_135e(int t, int k, char c);
void f_7a28_2771(int team);
void f_6e68_5848(int team);
int f_a1c3_3298(int a);
void f_a1c3_5e7a(int player, int a, char b);
void f_8352_4556(int player, int a);
void f_14d2_0722(int c);
void f_14d2_075a(int x1, int y1, int x2, int y2);
void f_14d2_073e(int c);
void f_14d2_07af(int x1, int y1, int x2, int y2);
void f_a1c3_2d08(int a, float x, float y, int c, int d, int e, char far *s);
char far *f_1680_03f3(int x);
char far *f_a1c3_2243(int player);
char far *f_a1c3_213c(int player);
void f_7a28_2b9b(void);
void f_a1c3_3505(int a);
void f_7a28_360e(int a, int b, char c);
void f_7a28_29f1(int team);
void far *f_14d2_16bc(int handle, int page);
void f_7eeb_00ad(void);
void f_7eeb_0000(void);
int f_14d2_0c2a(int n);
char f_992a_700a(int);
char f_992a_70a8(int);
char f_992a_74c1(int, int);
char f_992a_752d(int, int);
char f_992a_75bc(int, int);
char f_992a_72e8(int, int);
char f_992a_7399(int, int);
char f_992a_7430(int, int);
char f_992a_78ca(int);
int f_1680_0577(int x);
char far *f_14d2_0d75(char far *s, unsigned n);
extern int d_5d9c_9faf;
extern int d_5d9c_9ebf;
extern char near *d_5d9c_08bc[];
extern int d_5d9c_9bb9;
extern int d_5d9c_9fa1;
extern int d_5d9c_9e93;
extern int d_5d9c_9edd;
extern int d_5d9c_9edb;
extern int d_5d9c_9e91;
extern int d_5d9c_9e8f;
extern int d_5d9c_9f69;
extern int d_5d9c_9ec5;
extern int d_5d9c_a026[];
extern char d_5d9c_9b8a;
extern char d_5d9c_9b88;
extern int d_5d9c_9e8d;
extern int d_5d9c_9f91;
extern int d_5d9c_9f57;
extern int d_5d9c_9f6d;
extern int d_5d9c_9f51;
extern int d_5d9c_9e8b;
extern float d_5d9c_9b08;
extern int d_5d9c_9f93;
extern int d_5d9c_9e89;
extern char d_5d9c_9b7d;
extern int d_5d9c_9fab;
extern int d_5d9c_9e87;
extern int d_5d9c_9eeb;
extern int d_5d9c_9e85;
extern int d_5d9c_9e83;
extern int d_5d9c_9e81;
extern int d_5d9c_9f83;
extern char d_5d9c_9b71;
extern int d_5d9c_9e7f;
extern int d_5d9c_9e7d;
extern int d_5d9c_9e7b;
extern int d_5d9c_a35a;
extern char far *d_5d9c_a048;
extern int d_5d9c_9fa7;
extern int far d_2f3c_7f93[];
extern unsigned char far d_2f3c_5b8f[];
extern unsigned char far d_2f3c_35ad[][3][13];
extern unsigned char far d_2f3c_35ac[][3][13];
extern unsigned char far d_2f3c_2ce4[][13];
extern int far d_2f3c_2d55[][13];
extern int far d_2f3c_2d57[][13];
extern int far d_2f3c_1534[];
extern int far d_2f3c_7c73[][80];
extern unsigned char far d_5739_00a4[];
extern unsigned char far d_5739_1b0e[];
extern unsigned char far d_5739_1942[];
extern unsigned char far d_5739_15aa[];
extern int far d_5739_1d28[][2][94];
extern char far * far d_5471_16f0[];
extern char far * far d_5471_17c4[];
extern int far d_483b_a0b8[];
extern int far d_483b_a174[];
extern char far d_1f3e_4c0c[];
extern char far d_1f3e_52f6[];
extern char far d_1f3e_4a7c[];
extern char far d_1f3e_49e6[];
extern char far d_1f3e_5918[][80];
extern char far d_1f3e_4996[];
extern char far d_1f3e_4946[];
extern char far d_1f3e_48f6[];
void f_14d2_0af4(int a);
void f_14d2_0aef(void);
void f_14d2_0fb2(unsigned x, int y, unsigned x2, unsigned y2, int dy, int colour);
void f_14d2_0e27(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
char far *f_14d2_0152();
float f_14d2_0eef(void);
int f_14d2_13eb(int a, int b);
int f_14d2_144d(int a, int b);
float f_14d2_1425(float a, float b);
long f_14d2_1400(long a, long b);
void f_1680_27aa(int x, int y, int colour, char far *s);
char f_992a_77cd(int, int);
char f_992a_7853(int a, int b);
char f_992a_79b8(int);
int f_992a_7a65(int, int);
extern int d_5d9c_9e79;
extern int d_5d9c_9f55;
extern char d_5d9c_9b70;
extern int d_5d9c_9e77;
extern int d_5d9c_9e75;
extern int d_5d9c_9e73;
extern int d_5d9c_9e71;
extern char d_5d9c_9b6f;
extern int d_5d9c_9e6f;
extern int d_5d9c_9e6d;
extern int d_5d9c_9e6b;
extern int d_5d9c_9e69;
extern int d_5d9c_9e67;
extern int d_5d9c_9e65;
extern long d_5d9c_9a3c;
extern int d_5d9c_9eef;
extern int d_5d9c_9e63;
extern int d_5d9c_9e61;
extern int d_5d9c_9f85;
extern int d_5d9c_9e55;
extern int d_5d9c_9e51;
extern float d_5d9c_9ae0;
extern float d_5d9c_9adc;
extern unsigned char d_5d9c_9b9d;
extern int d_5d9c_9f61;
extern float d_5d9c_9ad8;
extern float d_5d9c_9ad4;
extern float d_5d9c_9ad0;
extern float d_5d9c_9acc;
extern char far d_1f3e_48a6[];
extern char far d_1f3e_4856[];
extern unsigned char far d_5739_0000[][82];
extern unsigned char far d_5739_57ea[][140];
extern unsigned char far d_5739_0386[];
extern unsigned char far d_5739_01ec[];
extern unsigned char far d_5739_138a[];
extern long far d_2f3c_7b33[];
void f_6e68_33d9(int team);
int f_6e68_299e(int week, int n);
int f_a1c3_20c5(int team);
void f_7eeb_1afc(int team, int b, int c);
char f_992a_76bc(int);
char f_992a_7713(int);
extern char near *d_5d9c_0484[];
extern char near *d_5d9c_095c;
extern char near *d_5d9c_095e;
extern int d_5d9c_9e5f;
extern int d_5d9c_9e5d;
extern int d_5d9c_9e5b;
extern int d_5d9c_9e59;
extern int d_5d9c_9e57;
extern int d_5d9c_9e53;
extern int d_5d9c_9ec3;
extern int d_5d9c_9f3d;
extern int d_5d9c_9e4f;
extern int d_5d9c_9e4d;
extern int d_5d9c_9e4b;
extern int d_5d9c_9e49;
extern int d_5d9c_9e47;
extern int d_5d9c_9e45;
extern int d_5d9c_9e43;
extern int d_5d9c_9e41;
extern int d_5d9c_9e39;
extern int d_5d9c_9e37;
extern int d_5d9c_9e3f;
extern int d_5d9c_9ea5;
extern int d_5d9c_9e3d;
extern int d_5d9c_9e3b;
extern int d_5d9c_9ed5;
extern int d_5d9c_9ed3;
extern int d_5d9c_9ed7;
extern char d_5d9c_9b6e;
extern char d_5d9c_9b86;
extern char d_5d9c_9b6d;
extern char d_5d9c_9b6c;
extern int d_5d9c_a33a;
extern char far *d_5d9c_a050;
extern int d_5d9c_9e35;
extern int d_5d9c_9e33;
extern int d_5d9c_9e31;
extern int d_5d9c_9e2f;
extern int d_5d9c_9e2d;
extern int d_5d9c_9e2b;
extern int d_5d9c_9e29;
extern int d_5d9c_9e27;
extern unsigned char far d_5739_023e[];
extern unsigned char far d_5739_13de[];
extern unsigned char far d_2f3c_2d0b[][13];
extern int far d_2f3c_2d59[][13];
extern long far d_2f3c_1bec[][13];
extern unsigned char far d_2f3c_85a9[][3][13];
extern unsigned char far d_2f3c_855b[][13];
extern unsigned char huge d_483b_0000[][1702];
extern int far d_483b_a372[][26];
extern char far d_1f3e_bfa2[];
extern char far d_1f3e_f4d2[];
extern char far d_1f3e_4806[];
extern char far d_1f3e_47b6[];
extern char far d_1f3e_4766[];
void f_7a28_13ca(int team);
void f_7a28_18b2(int team);
void f_7a28_05c2(char c);
void f_7a28_0356(void);
void f_7a28_0a08(int team, char far *s);
void f_7a28_0d24(void);
void f_7a28_0ff4(int team, int a, int b);
void f_7a28_08e7(void);
void f_7a28_0206(int team);
void f_7a28_03bd(int a, char c, int b, int team);
void f_7eeb_3b4b(void);
void f_14d2_0af9(void);
void f_14d2_0609(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
char f_992a_7831(int);
extern int d_5d9c_9e25;
extern int d_5d9c_9e23;
extern int d_5d9c_9e21;
extern int d_5d9c_9e1f;
extern int d_5d9c_9e1d;
extern int d_5d9c_9e1b;
extern int d_5d9c_9ed9;
extern int d_5d9c_9f65;
extern char d_5d9c_9b6b;
extern int d_5d9c_9f13;
extern int d_5d9c_9e17;
extern int d_5d9c_9e19;
extern int d_5d9c_9e15;
extern char d_5d9c_9b9c;
extern int d_5d9c_9e13;
extern int d_5d9c_9e11;
extern int d_5d9c_9e0f;
extern int d_5d9c_9e0d;
extern int d_5d9c_9e0b;
extern int d_5d9c_9e09;
extern int d_5d9c_9e07;
extern int d_5d9c_9e05;
extern int d_5d9c_9e03;
extern char d_5d9c_9b16;
extern int d_5d9c_9bb7;
extern int d_5d9c_9bb5;
extern int d_5d9c_9f4f;
extern int d_5d9c_9e01;
extern int d_5d9c_9dff;
extern int d_5d9c_9dfd;
extern int d_5d9c_9dfb;
extern int d_5d9c_9df9;
extern int d_5d9c_9df7;
extern char d_5d9c_9b6a;
extern char d_5d9c_9b69;
extern char far d_1f3e_4716[];
extern char far d_1f3e_4676[];
extern char far d_1f3e_4626[];
extern unsigned char far d_5739_00f6[];
extern unsigned char far d_5739_1776[];
extern unsigned char far d_2f3c_84a7[][60];
extern unsigned char far d_2f3c_83f3[][60];
int f_14d2_0ac9(void);
char far *f_14d2_0baf(void);
char f_1680_014a(int a, int b);
char f_1680_01b4(int x);
char f_1680_01d6(int x);
char f_1680_01f3(int x);
char f_1680_0210(int x);
char f_1680_0232(int x);
char f_1680_0254(int x);
void f_7a28_019a(int minute);
unsigned char f_7a28_14c4(int p, int team);
extern int d_5d9c_9df5;
extern int d_5d9c_9df3;
extern int d_5d9c_9df1;
extern int d_5d9c_9def;
extern char d_5d9c_9b68;
extern char d_5d9c_9b67;
extern char d_5d9c_9b66;
extern char d_5d9c_9b65;
extern char d_5d9c_9b64;
extern char d_5d9c_9b63;
extern char d_5d9c_9b62;
extern char d_5d9c_9b9b;
extern int d_5d9c_9ecf;
extern int d_5d9c_9ded;
extern int d_5d9c_9deb;
extern int d_5d9c_9eb7;
extern int d_5d9c_9f19;
extern int d_5d9c_9f05;
extern int d_5d9c_9de9;
extern int d_5d9c_9de7;
extern int d_5d9c_9de5;
extern int d_5d9c_9de3;
extern int d_5d9c_9de1;
extern int d_5d9c_9ddf;
extern int d_5d9c_9f5f;
extern char far d_1f3e_45d2[];
extern char far d_1f3e_4582[];
void f_7a28_0a9c(void);
void f_6e68_4b39(int team);
void f_1680_2d78(float x, float y, int colour, char far *s);
void f_1680_33a0(float x, float y, int team);
void f_1680_150c(int n, char far *title, char far *items);
void f_1680_18b2(int last);
extern char d_5d9c_9b76;
extern int d_5d9c_9dd7;
extern int d_5d9c_9dd9;
extern int d_5d9c_9ddb;
extern int d_5d9c_9ddd;
extern int d_5d9c_9f67;
extern char far d_1f3e_43f2[];
extern char far d_1f3e_4442[];
extern char far d_1f3e_4492[];
extern char far d_1f3e_44e2[];
extern char far d_1f3e_4532[];
extern unsigned char far d_2f3c_2d16[][13];
void f_7a28_0000(int a, int b, int c, int d);
char far *f_a1c3_21cc(int player);
void f_1680_2a61(float x, float y, int colour, char far *s);
extern int d_5d9c_9dcf;
extern int d_5d9c_9dd1;
extern int d_5d9c_9dd3;
extern int d_5d9c_9dd5;
extern char d_5d9c_a03c[][2];
extern char d_5d9c_a040[][2];
extern char far d_1f3e_56d4[];
extern char far d_1f3e_5684[];


void f_7555_0000(char far *s)
{
    char buf[80];

    sprintf(buf, "%*s", (72 - strlen(s) * 4) / 8 + strlen(s), s);
    f_1680_2ea0(1.5, 21.875, 1, 2, 0x90, buf);
    f_14d2_0c66(75);
    f_1680_2ea0(1.5, 21.875, 1, 4, 0x90, "       DONE");
    f_a1c3_30b1(d_5d9c_9faf, 0);
}

void f_7555_00cc(int team)
{
    if (team > 0) {
        f_a1c3_30b1(team, 0);
        d_5d9c_9ebf = 0;
    }
}

void f_7555_00e9(int team)
{
    char buf[100];

    do {
        f_a1c3_27e4("Team and tactics");
        sprintf(buf, " %s ", (char far *)d_5d9c_08bc[team]);
        if (team < 80) {
            d_5d9c_9bb9 = d_2f3c_5b8f[d_2f3c_7f93[team]];
            if (f_1680_0003(team)) {
                for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++) {
                    d_2f3c_2ce4[0][d_5d9c_9fa1] = d_2f3c_35ad[team][0][d_5d9c_9fa1];
                    d_2f3c_2ce4[1][d_5d9c_9fa1] = d_2f3c_35ad[team][1][d_5d9c_9fa1];
                    d_2f3c_2ce4[2][d_5d9c_9fa1] = d_2f3c_35ad[team][2][d_5d9c_9fa1];
                }
            } else {
                f_1680_135e(team, d_5d9c_9bb9 % 16, -1);
            }
            d_5d9c_9e93 = d_5739_00a4[team];
        } else {
            d_5d9c_9f69 = team == d_5d9c_9edd ? d_5d9c_9e91 : d_5d9c_9e8f;
            strcat(buf, " - ");
            strcat(buf, d_5471_16f0[d_5739_1b0e[d_5d9c_9f69]]);
            strcat(buf, " ");
            f_1680_135e(team, d_5739_1942[d_5d9c_9f69], -1);
            d_5d9c_9e93 = d_5739_15aa[d_5d9c_9f69];
        }
        f_1680_2ea0(1.0, 4.5, -(d_5d9c_9e93 / 16), d_5d9c_9e93 % 16, 0, buf);
        f_7a28_2771(team);
        d_5d9c_9ec5 = d_5d9c_a026[team == d_5d9c_9edb];
        f_7555_0390(team, 1);
        f_6e68_5848(team);
        do {
            d_5d9c_9b8a = 0;
            d_5d9c_9e8d = f_a1c3_3298(-1);
            if (d_5d9c_9e8d == 1) {
                d_5d9c_9b8a = -1;
            } else if (d_5d9c_9e8d > 1 && d_5d9c_9e8d < 15) {
                d_5d9c_9f91 = d_2f3c_2d55[team][d_5d9c_9e8d];
                if (d_5d9c_9f91 < 1700) {
                    do {
                        f_a1c3_5e7a(d_5d9c_9f91, -1, -1);
                        f_8352_4556(d_5d9c_9f91, d_5d9c_9f57);
                    } while (!d_5d9c_9b88);
                    d_5d9c_9b8a = -1;
                }
            }
        } while (!d_5d9c_9b8a);
    } while (d_5d9c_9e8d > 1);
}

void f_7555_0390(int team, int mode)
{
    f_14d2_0722(19);
    f_14d2_075a(6, 58, 166, 160 - f_1680_0003(team) * 8);
    f_14d2_073e(16);
    f_14d2_07af(6, 58, 166, 160 - f_1680_0003(team) * 8);
    f_a1c3_2d08(2, 1.0, 22.125, 1, 4, 0x131, "                  OK");
    for (d_5d9c_9f6d = 1; d_5d9c_9f6d <= 2; d_5d9c_9f6d++) {
        for (d_5d9c_9f51 = 1; d_5d9c_9f51 <= 13; d_5d9c_9f51++) {
            d_5d9c_9b08 = d_5d9c_9f51 + 7;
            if (d_5d9c_9f6d == 1) {
                strcpy(d_1f3e_4c0c, f_1680_03f3(d_5d9c_9f51));
                if (mode == 0)
                    f_a1c3_2d08(0, 21.25, d_5d9c_9b08, 1, 9, 0, d_1f3e_4c0c);
                else
                    f_1680_2867(21.25, d_5d9c_9b08, 1, 9, 0, d_1f3e_4c0c);
            } else {
                if (team < 80) {
                    d_5d9c_9f91 = d_2f3c_2d57[team][d_5d9c_9f51];
                    if (mode == 0) {
                        sprintf(d_1f3e_52f6, " %.12s", f_a1c3_2243(d_5d9c_9f91));
                        d_5d9c_9e8b = 78;
                    } else {
                        sprintf(d_1f3e_52f6, " %.20s", f_a1c3_213c(d_5d9c_9f91));
                        d_5d9c_9e8b = 131;
                    }
                    f_a1c3_2d08(0, 23.0, d_5d9c_9b08, 0, 0, d_5d9c_9e8b, d_1f3e_52f6);
                } else {
                    sprintf(d_1f3e_52f6, " %.20s", d_5471_17c4[d_2f3c_35ac[team][0][d_5d9c_9f51]]);
                    d_5d9c_9e8b = 131;
                }
                f_1680_2867(23.0, d_5d9c_9b08, 1, 8, d_5d9c_9e8b, d_1f3e_52f6);
            }
        }
    }
}

void f_7555_0634(void)
{
    char buf[80];
    unsigned n;

    for (d_5d9c_9f93 = 0; d_5d9c_9f93 < 40; d_5d9c_9f93++)
        d_2f3c_1534[d_5d9c_9f93] = 0;
    n = d_5d9c_9f93 = 0;
    d_5d9c_9e89 = -1;
    d_5d9c_9b7d = -1;
    d_483b_a0b8[d_5d9c_9fab] = d_5d9c_9e87;
    d_483b_a174[d_5d9c_9fab] = d_5d9c_9eeb;
    f_7555_0de7();
    d_5d9c_9e85 = 1;
    d_5d9c_9e83 = (d_5d9c_9fab & 1) && d_5d9c_9fab > 6 ? 910 : 440;
    for (d_5d9c_9e81 = 0; d_5d9c_9e81 <= d_5d9c_9eeb - 1; d_5d9c_9e81++) {
        d_5d9c_9f83 = d_1f3e_4a7c[d_5d9c_9e81] - 32;
        d_5d9c_9edd = d_5739_1d28[d_5d9c_9f83][0][d_5d9c_9fab] / 32;
        d_5d9c_9edb = d_5739_1d28[d_5d9c_9f83][1][d_5d9c_9fab] / 32;
        d_5d9c_9e91 = d_5d9c_9edd;
        d_5d9c_9e8f = d_5d9c_9edb;
        f_7555_1727();
        f_7555_1973();
        f_7555_0fa8();
        f_7555_110b();
        f_7555_2372();
        f_7555_2012();
        d_5d9c_9b71 = d_5d9c_9e7f > 90 ? -1 : 0;
        d_5d9c_9e7f = -1;
        f_7a28_2b9b();
        if (d_5d9c_9e7d + d_5d9c_9e7b > 0) {
            f_a1c3_3505(0);
            f_7a28_360e(d_5d9c_9e91, d_5d9c_9e8f, -1);
        }
        if (d_5d9c_9edd < 80)
            f_7a28_29f1(d_5d9c_9edd);
        if (d_5d9c_9edb < 80)
            f_7a28_29f1(d_5d9c_9edb);
        d_5d9c_a048 = f_14d2_16bc(d_5d9c_a35a, 1);
        memcpy(d_5d9c_a048 + d_5d9c_9f83 * 150, d_1f3e_49e6, 149);
        if (d_5d9c_9edd < 80) {
            d_2f3c_7c73[0][d_5d9c_9edd] = d_5d9c_9e87 + d_5d9c_9f83;
            d_2f3c_7c73[1][d_5d9c_9edd] = d_5d9c_9f83;
            d_2f3c_7c73[2][d_5d9c_9edd] = d_5d9c_9fab - 1;
            d_1f3e_5918[0][d_5d9c_9edd] = -1;
        }
        if (d_5d9c_9edb < 80) {
            d_2f3c_7c73[0][d_5d9c_9edb] = d_5d9c_9e87 + d_5d9c_9f83;
            d_2f3c_7c73[1][d_5d9c_9edb] = d_5d9c_9f83;
            d_2f3c_7c73[2][d_5d9c_9edb] = d_5d9c_9fab - 1;
            d_1f3e_5918[0][d_5d9c_9edb] = -1;
        }
        f_7eeb_00ad();
        if (d_5d9c_9e7d + d_5d9c_9e7b == 0 && d_5d9c_9b71 == 0
            && (f_14d2_0c2a(3) > 0 || d_5d9c_9e81 == 0) && d_5d9c_9eeb > 3 && n < 12) {
            if ((d_5d9c_9fab & 1) == 0 || d_5d9c_9fab < 7)
                strcpy(d_1f3e_4996, "Today's");
            else
                strcpy(d_1f3e_4996, "Tonights");
            strcpy(buf, d_1f3e_4946);
            if (f_992a_700a(d_5d9c_9fab))
                sprintf(d_1f3e_4946, "D%d  %s", d_5d9c_9edd / 20 + 1, buf);
            else if (f_992a_70a8(d_5d9c_9fab))
                sprintf(d_1f3e_4946, "FA  %s", buf);
            else if (f_992a_74c1(d_5d9c_9fab, d_5d9c_9f83 + 1))
                sprintf(d_1f3e_4946, "%cC  %s", "Rumbelows"[0], buf);
            else if (f_992a_752d(d_5d9c_9fab, d_5d9c_9f83 + 1))
                sprintf(d_1f3e_4946, "%cC  %s", "Zenith"[0], buf);
            else if (f_992a_75bc(d_5d9c_9fab, d_5d9c_9f83 + 1))
                sprintf(d_1f3e_4946, "%cT  %s", "Domark"[0], buf);
            else if (f_992a_72e8(d_5d9c_9fab, d_5d9c_9f83 + 1))
                sprintf(d_1f3e_4946, "UE  %s", buf);
            else if (f_992a_7399(d_5d9c_9fab, d_5d9c_9f83 + 1))
                sprintf(d_1f3e_4946, "CW  %s", buf);
            else if (f_992a_7430(d_5d9c_9fab, d_5d9c_9f83 + 1))
                sprintf(d_1f3e_4946, "EC  %s", buf);
            else if (f_992a_78ca(d_5d9c_9fab))
                sprintf(d_1f3e_4946, "PL  %s", buf);
            else if (d_5d9c_9fab == 5)
                sprintf(d_1f3e_4946, "SH  %s", buf);
            else if (d_5d9c_9fab <= 4)
                sprintf(d_1f3e_4946, "FR  %s", buf);
            strcat(d_1f3e_4996, " Result");
            if (d_5d9c_9eeb > 1)
                strcat(d_1f3e_4996, "s");
            if (d_5d9c_9e85 == 1) {
                f_a1c3_27e4("");
                f_14d2_0722(16);
                f_14d2_075a(20, 20, 308, 188);
                f_14d2_0722(20);
                f_14d2_075a(16, 16, 304, 184);
                f_1680_2ea0(2.5, 3.0, 1, 8, 0x119, "            Latest Results");
                f_7555_0c6b(1, d_1f3e_4996);
                sprintf(buf, "Week %d Season %d", f_1680_0577(d_5d9c_9fab), d_5d9c_9fa7);
                f_7555_0c6b(0, buf);
            }
            if (d_5d9c_9e85 == 3 || f_14d2_0c2a(4) == 0) {
                if (d_5d9c_9e85 > 1)
                    f_7555_0c6b(0, "");
                sprintf(d_1f3e_48f6, "%d", d_5d9c_9e83);
                sprintf(buf, "%c.%s", d_1f3e_48f6[0], f_14d2_0d75(d_1f3e_48f6, 2));
                f_7555_0c6b(1, buf);
                d_5d9c_9e83++;
            }
            f_7555_0c6b(0, d_1f3e_4946);
            n++;
        }
    }
    if (d_5d9c_9e85 > 1) {
        f_7555_0c6b(0, "");
        f_7555_0c6b(0, "");
        f_7555_0c6b(0, "Classified Check Follows");
    }
    f_7eeb_0000();
    d_5d9c_9e87 += d_5d9c_9eeb;
    d_5d9c_9b7d = 0;
}

void f_7555_0c6b(char flag, char far *s)
{
    char buf[320];

    if (d_5d9c_9e85 == 17) {
        f_14d2_0af4(4);
        for (d_5d9c_9e79 = 1; d_5d9c_9e79 <= 4; d_5d9c_9e79++) {
            f_14d2_0fb2(16, 38, 304, 183, 2, 20);
            f_14d2_073e(20);
            f_14d2_0e27(18, 38, 302, 38);
            f_14d2_0e27(18, 39, 302, 39);
        }
        d_5d9c_9e85 = 16;
        f_14d2_0aef();
    }
    if (strlen(s) != 0) {
        if (flag)
            f_1680_2867(3.0, d_5d9c_9e85 + 4.875, 1, 2, 0, s);
        else
            for (d_5d9c_9f55 = 1; d_5d9c_9f55 <= strlen(s); d_5d9c_9f55++) {
                f_14d2_0af4(5);
                sprintf(buf, "%c", s[d_5d9c_9f55 - 1]);
                f_1680_27aa((d_5d9c_9f55 - 1) * 6 + 32, d_5d9c_9e85 * 8 + 39, 1, buf);
                f_14d2_0c66(2);
            }
    }
    d_5d9c_9e85++;
    f_14d2_0aef();
}

void f_7555_0de7(void)
{
    char buf[320];

    strcpy(d_1f3e_48a6, "");
    strcpy(d_1f3e_4a7c, "");
    for (d_5d9c_9f83 = 0; d_5d9c_9f83 <= d_5d9c_9eeb - 1; d_5d9c_9f83++) {
        d_5d9c_9edd = d_5739_1d28[d_5d9c_9f83][0][d_5d9c_9fab] / 32;
        d_5d9c_9edb = d_5739_1d28[d_5d9c_9f83][1][d_5d9c_9fab] / 32;
        d_5d9c_9b70 = f_1680_0003(d_5d9c_9edd);
        if (d_5d9c_9b70 == 0)
            d_5d9c_9b70 = f_1680_0003(d_5d9c_9edb);
        if (d_5d9c_9b70)
            strcat(d_1f3e_48a6, f_14d2_0152(d_5d9c_9f83 + 32));
        else
            strcat(d_1f3e_4a7c, f_14d2_0152(d_5d9c_9f83 + 32));
    }
    for (d_5d9c_9f83 = 0; d_5d9c_9f83 <= d_5d9c_9eeb - 1; d_5d9c_9f83++) {
        d_5d9c_9e77 = f_14d2_0c2a(strlen(d_1f3e_4a7c));
        d_5d9c_9e75 = f_14d2_0c2a(strlen(d_1f3e_4a7c));
        d_5d9c_9e73 = d_1f3e_4a7c[d_5d9c_9e77];
        d_5d9c_9e71 = d_1f3e_4a7c[d_5d9c_9e75];
        d_1f3e_4a7c[d_5d9c_9e77] = d_5d9c_9e71;
        d_1f3e_4a7c[d_5d9c_9e75] = d_5d9c_9e73;
    }
    strcpy(buf, d_1f3e_4a7c);
    sprintf(d_1f3e_4a7c, "%s%s", d_1f3e_48a6, buf);
}

void f_7555_0fa8(void)
{
    d_5d9c_9b6f = 0;
    if (f_992a_77cd(d_5d9c_9fab, d_5d9c_9f83 + 1)) {
        strcpy(d_1f3e_4856, "WEMBLEY STADIUM");
        d_5d9c_9e6f = 2;
        d_5d9c_9e6d = 2;
    } else if (d_5d9c_9f83 == 0 && (d_5d9c_9fab == 87 || d_5d9c_9fab == 91)) {
        d_5d9c_9e6b = d_5d9c_9edd;
        strcpy(d_1f3e_4856, d_5d9c_08bc[d_5d9c_9e6b]);
        d_5d9c_9e6f = 3;
        d_5d9c_9e6d = 1;
    } else if (d_5d9c_9fab == 91 && d_5d9c_9f83 == 1) {
        strcpy(d_1f3e_4856, "ROTTERDAM");
        d_5d9c_9e6f = 2;
        d_5d9c_9e6d = 2;
    } else if (d_5d9c_9fab == 91 && d_5d9c_9f83 == 2) {
        strcpy(d_1f3e_4856, "MILAN");
        d_5d9c_9e6f = 2;
        d_5d9c_9e6d = 2;
    } else if (f_992a_7853(d_5d9c_9fab, d_5d9c_9f83 + 1)) {
        d_5d9c_9e69 = 0;
        for (d_5d9c_9e67 = 0; d_5d9c_9e67 <= 79; d_5d9c_9e67++)
            if (d_5739_0000[1][d_5d9c_9e67] > d_5d9c_9e69 && d_5d9c_9e67 != d_5d9c_9edd
                && d_5d9c_9e67 != d_5d9c_9edb && d_5d9c_9e67 != d_5d9c_9e89) {
                d_5d9c_9e69 = d_5739_0000[1][d_5d9c_9e67];
                d_5d9c_9e6b = d_5d9c_9e67;
            }
        d_5d9c_9e89 = d_5d9c_9e6b;
        strcpy(d_1f3e_4856, d_5d9c_08bc[d_5d9c_9e6b]);
        d_5d9c_9e6f = 2;
        d_5d9c_9e6d = 2;
    } else {
        d_5d9c_9e6b = d_5d9c_9edd;
        strcpy(d_1f3e_4856, d_5d9c_08bc[d_5d9c_9e6b]);
        d_5d9c_9e6f = 3;
        d_5d9c_9e6d = 1;
        d_5d9c_9b6f = -1;
    }
}

void f_7555_110b(void)
{
    d_5d9c_9e65 = 0;
    if (strstr(d_1f3e_4856, "WEMBLEY") || strstr(d_1f3e_4856, "MILAN")
        || strstr(d_1f3e_4856, "ROTTERDAM")) {
        d_5d9c_9a3c = ((d_5d9c_9fab == 5 ? 60 : 80) - f_14d2_0eef()) * 1000.0;
        return;
    }
    if (d_5d9c_9fab == 76 || d_5d9c_9fab == 77) {
        d_5d9c_9a3c = (d_5739_0000[1][d_5d9c_9e6b] - f_14d2_0eef()) * 1000.0;
        return;
    }
    if ((d_5d9c_9e91 < 80 || d_5d9c_9e91 >= 480) && (d_5d9c_9e8f < 80 || d_5d9c_9e8f >= 480)
        && d_5d9c_9fab > 5) {
        long dx, dy;

        d_5d9c_9eef = d_5d9c_9e91 - (d_5d9c_9e91 >= 480 ? 400 : 0);
        d_5d9c_9f6d = d_5d9c_9e8f - (d_5d9c_9e8f >= 480 ? 400 : 0);
        dx = d_5739_57ea[0][d_5d9c_9eef] - d_5739_57ea[0][d_5d9c_9f6d];
        dy = d_5739_57ea[1][d_5d9c_9eef] - d_5739_57ea[1][d_5d9c_9f6d];
        d_5d9c_9e65 = 30.0 - sqrt(dx * dx + dy * dy) * 0.857;
    }
    d_5d9c_9e63 = d_5d9c_9e65 > 0 ? d_5d9c_9e65 : 0;
    d_5d9c_9e61 = d_5d9c_9e65;
    if (f_992a_700a(d_5d9c_9fab)) {
        if (d_5739_0386[d_5d9c_9edd] > 1)
            d_5d9c_9e63 += f_992a_7a65(d_5d9c_9e55, d_5d9c_9f85);
        if (d_5739_0386[d_5d9c_9edb] > 1)
            d_5d9c_9e61 += f_992a_7a65(d_5d9c_9e51, d_5d9c_9f85);
    }
    d_5d9c_9ae0 = 0.875;
    d_5d9c_9adc = 0.125;
    if (f_992a_700a(d_5d9c_9fab))
        d_5d9c_9b9d = 50 - d_5d9c_9edd / 20 * 6;
    else if (f_992a_70a8(d_5d9c_9fab)) {
        d_5d9c_9b9d = f_992a_79b8(d_5d9c_9fab);
        d_5d9c_9ae0 = 0.75;
        d_5d9c_9adc = 0.25;
    } else if (f_992a_74c1(d_5d9c_9fab, d_5d9c_9f83 + 1)) {
        d_5d9c_9b9d = f_992a_79b8(d_5d9c_9fab);
        d_5d9c_9ae0 = 0.75;
        d_5d9c_9adc = 0.25;
    } else if (f_992a_72e8(d_5d9c_9fab, d_5d9c_9f83 + 1) || f_992a_7399(d_5d9c_9fab, d_5d9c_9f83 + 1)
               || f_992a_7430(d_5d9c_9fab, d_5d9c_9f83 + 1)) {
        d_5d9c_9b9d = 90;
        d_5d9c_9ae0 = 0.95;
        d_5d9c_9adc = 0.05;
    } else if (f_992a_78ca(d_5d9c_9fab)) {
        d_5d9c_9b9d = 100;
        d_5d9c_9ae0 = 0.75;
        d_5d9c_9adc = 0.25;
    } else if (f_992a_752d(d_5d9c_9fab, d_5d9c_9f83 + 1) || f_992a_75bc(d_5d9c_9fab, d_5d9c_9f83 + 1))
        d_5d9c_9b9d = 20;
    else
        d_5d9c_9b9d = 10;
    if (d_5d9c_9e65 > 22)
        d_5d9c_9b9d = d_5d9c_9b9d + 50;
    d_5d9c_9e63 = f_14d2_144d(100, f_14d2_13eb(d_5d9c_9e63 + d_5d9c_9b9d, 10));
    d_5d9c_9e61 = f_14d2_144d(100, f_14d2_13eb(d_5d9c_9e61 + d_5d9c_9b9d, 10));
    d_5d9c_9f61 = (f_14d2_144d(d_5d9c_9edd / 20, 3) + f_14d2_144d(d_5d9c_9edb / 20, 3)) * 25;
    d_5d9c_9ad8 = ((d_5739_01ec[d_5d9c_9edd] + d_5739_0000[0][d_5d9c_9edd] * 2 - 100) / 200.0 + 1)
                  * (d_5d9c_9e63 / (d_5d9c_9f61 + 75.0));
    d_5d9c_9ad4 = ((d_5739_01ec[d_5d9c_9edb] + d_5739_0000[0][d_5d9c_9edb] * 2 - 75) / 200.0 + 1)
                  * (d_5d9c_9e61 / (d_5d9c_9f61 + 75.0));
    d_5d9c_9ad0 = f_14d2_1425(d_5739_0000[1][d_5d9c_9edd] * d_5d9c_9ad8 * d_5d9c_9ae0,
                              d_5739_0000[1][d_5d9c_9edd] * d_5d9c_9ae0);
    d_5d9c_9acc = f_14d2_1425(d_5739_0000[1][d_5d9c_9edb] * d_5d9c_9ad4 * 0.3,
                              d_5739_0000[1][d_5d9c_9edd] * d_5d9c_9adc);
    d_5d9c_9a3c = f_14d2_1400(2000.0 - f_14d2_0eef() * 1000.0,
                              (f_14d2_1425(d_5d9c_9ad0 + d_5d9c_9acc - f_14d2_0eef(),
                                           d_5739_0000[1][d_5d9c_9e6b]) - f_14d2_0eef()) * 1000.0);
    if (d_5d9c_9edd < 80 && d_5d9c_9fab > 4 && d_5d9c_9e6b == d_5d9c_9edd) {
        d_5739_138a[d_5d9c_9edd]++;
        d_2f3c_7b33[d_5d9c_9edd] += d_5d9c_9a3c;
    }
}

void f_7555_1727(void)
{
    if (d_5d9c_9edd > 79) {
        d_5d9c_095c = d_5d9c_0484[d_5d9c_9edd];
        d_5d9c_9e5f = d_5739_1942[d_5d9c_9edd];
        f_1680_135e(80, d_5d9c_9e5f, 0);
        d_5739_0000[0][80] = f_14d2_0c2a(9) + 4;
        d_5739_0000[1][80] = f_14d2_13eb((d_5739_13de[d_5d9c_9edd] * 6 - 50) * (1 - f_14d2_0c2a(6) / 20.0), 5);
        d_5739_0000[4][80] = d_5739_13de[d_5d9c_9edd];
        d_5739_0000[6][80] = 100;
        d_5d9c_9e5d = d_5739_1b0e[d_5d9c_9edd];
        if (d_5d9c_9e5d == 31)
            d_5d9c_9e5d = 0;
        d_5d9c_9edd = 80;
    } else {
        d_5d9c_9e5f = d_2f3c_5b8f[d_2f3c_7f93[d_5d9c_9edd]] % 16;
        d_5d9c_9e5d = 0;
    }
    if (d_5d9c_9edb > 79) {
        d_5d9c_095e = d_5d9c_0484[d_5d9c_9edb];
        d_5d9c_9e5b = d_5739_1942[d_5d9c_9edb];
        f_1680_135e(81, d_5d9c_9e5b, 0);
        d_5739_0000[0][81] = f_14d2_0c2a(9) + 4;
        d_5739_0000[1][81] = f_14d2_13eb((d_5739_13de[d_5d9c_9edb] * 6 - 50) * (1 - f_14d2_0c2a(6) / 5.0), 5);
        d_5739_0000[4][81] = d_5739_13de[d_5d9c_9edb];
        d_5739_0000[6][81] = 100;
        d_5d9c_9e59 = d_5739_1b0e[d_5d9c_9edb];
        if (d_5d9c_9e59 == 31)
            d_5d9c_9e59 = 0;
        d_5d9c_9edb = 81;
    } else {
        d_5d9c_9e5b = d_2f3c_5b8f[d_2f3c_7f93[d_5d9c_9edb]] % 16;
        d_5d9c_9e59 = 0;
    }
}

void f_7555_1973(void)
{
    unsigned i, j;

    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++) {
        d_2f3c_2d0b[0][d_5d9c_9fa1] = d_5d9c_9fa1 > 10 ? 4 : 0;
        d_2f3c_2d0b[1][d_5d9c_9fa1] = d_5d9c_9fa1 > 10 ? 4 : 0;
        d_2f3c_2d0b[2][d_5d9c_9fa1] = 0;
        d_2f3c_2d0b[3][d_5d9c_9fa1] = 0;
        if (d_5d9c_9edd < 80)
            d_2f3c_2d0b[4][d_5d9c_9fa1] = d_483b_0000[11][d_2f3c_2d59[d_5d9c_9edd][d_5d9c_9fa1]];
        else
            d_2f3c_2d0b[4][d_5d9c_9fa1] = 16;
        if (d_5d9c_9edb < 80)
            d_2f3c_2d0b[5][d_5d9c_9fa1] = d_483b_0000[11][d_2f3c_2d59[d_5d9c_9edb][d_5d9c_9fa1]];
        else
            d_2f3c_2d0b[5][d_5d9c_9fa1] = 16;
    }
    for (i = 0; i < 6; i++)
        d_5d9c_a026[i] = 0;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 94; j++)
            d_2f3c_1bec[i][j] = 0;

    d_5d9c_9e7d = 0;
    d_5d9c_9e57 = 1;
    if (d_5d9c_9edd < 80) {
        if (f_1680_0003(d_5d9c_9edd)) {
            d_5d9c_9ec3 = d_5d9c_9edb;
            f_6e68_33d9(d_5d9c_9edd);
            d_5d9c_9e7d = 1;
            d_5d9c_9e57 = 0;
        }
        d_5d9c_9e55 = f_a1c3_20c5(d_5d9c_9edd);
        for (d_5d9c_9f3d = 0; d_5d9c_9f3d <= d_5739_023e[d_5d9c_9edd] - 1; d_5d9c_9f3d++) {
            d_1f3e_bfa2[d_483b_a372[d_5d9c_9edd][d_5d9c_9f3d]] = 0;
            d_1f3e_f4d2[d_483b_a372[d_5d9c_9edd][d_5d9c_9f3d]] = 0;
        }
    } else
        d_5d9c_9e55 = f_14d2_0c2a(10);
    f_7555_2125(d_5d9c_9edd);

    d_5d9c_9e7b = 0;
    d_5d9c_9e53 = 1;
    if (d_5d9c_9edb < 80) {
        if (f_1680_0003(d_5d9c_9edb)) {
            d_5d9c_9ec3 = d_5d9c_9edd;
            f_6e68_33d9(d_5d9c_9edb);
            d_5d9c_9e7b = 1;
            d_5d9c_9e53 = 0;
        }
        d_5d9c_9e51 = f_a1c3_20c5(d_5d9c_9edb);
        for (d_5d9c_9f3d = 0; d_5d9c_9f3d <= d_5739_023e[d_5d9c_9edb] - 1; d_5d9c_9f3d++) {
            d_1f3e_bfa2[d_483b_a372[d_5d9c_9edb][d_5d9c_9f3d]] = 0;
            d_1f3e_f4d2[d_483b_a372[d_5d9c_9edb][d_5d9c_9f3d]] = 0;
        }
    } else
        d_5d9c_9e51 = f_14d2_0c2a(10);
    f_7555_2125(d_5d9c_9edb);

    memset(d_1f3e_49e6, 0, 149);
    strcpy(d_1f3e_49e6, "ZZZZZZZZ");
    if (d_5d9c_9e7d + d_5d9c_9e7b > 0) {
        f_7eeb_1afc(d_5d9c_9fab, d_5d9c_9f83 + 1, d_5d9c_9e55);
        strupr(d_1f3e_4806);
    }
    d_5d9c_9e4f = 0;
    d_5d9c_9e4d = 0;
    d_5d9c_9e4b = 1;
    d_5d9c_9e49 = 1;
    d_5d9c_9e47 = 1;
    d_5d9c_9e45 = 1;
    d_5d9c_9e43 = 1;
    d_5d9c_9e41 = 1;
    d_5d9c_9e39 = 0;
    d_5d9c_9e37 = 0;
    strcpy(d_1f3e_47b6, "");
    strcpy(d_1f3e_4766, "");
    d_5d9c_9e3f = 0;
    d_5d9c_9ea5 = 0;
    d_5d9c_9e7f = 45;
    d_5d9c_9e3d = 0;
    d_5d9c_9e3b = 0;
    d_5d9c_9ed5 = 0;
    d_5d9c_9ed3 = 0;
    d_5d9c_9b6e = 0;
    d_5d9c_9b86 = 0;
    if (f_992a_76bc(d_5d9c_9fab) || f_992a_7713(d_5d9c_9fab)) {
        d_5d9c_9b6d = 0;
        if (f_992a_74c1(d_5d9c_9fab, d_5d9c_9f83 + 1)
            || f_992a_72e8(d_5d9c_9fab, d_5d9c_9f83 + 1)
            || f_992a_7399(d_5d9c_9fab, d_5d9c_9f83 + 1) && d_5d9c_9fab != 91
            || f_992a_7430(d_5d9c_9fab, d_5d9c_9f83 + 1)
               && (d_5d9c_9fab < 53 || d_5d9c_9fab > 79 && d_5d9c_9fab != 91)
            || f_992a_78ca(d_5d9c_9fab))
            d_5d9c_9b6d = -1;
        if (f_992a_76bc(d_5d9c_9fab))
            d_5d9c_9b6e = d_5d9c_9b6d;
        else if (f_992a_7713(d_5d9c_9fab))
            d_5d9c_9b86 = d_5d9c_9b6d;
    }
    if (d_5d9c_9b86) {
        d_5d9c_9ed7 = f_6e68_299e(d_5d9c_9fab, d_5d9c_9f83 + 1);
        d_5d9c_a050 = f_14d2_16bc(d_5d9c_a33a, 0);
        d_5d9c_9ed5 = *(unsigned char far *)(d_5d9c_a050 + d_5d9c_9ed7 * 80 + d_5d9c_9f83 * 2 + 1);
        d_5d9c_9ed3 = *(unsigned char far *)(d_5d9c_a050 + d_5d9c_9ed7 * 80 + d_5d9c_9f83 * 2);
    }
    d_5d9c_9b6c = 0;
    d_5d9c_9e35 = 0;
    d_5d9c_9e33 = 0;
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++)
        for (d_5d9c_9f55 = 0; d_5d9c_9f55 <= 2; d_5d9c_9f55++) {
            if (d_5d9c_9edd < 80)
                d_2f3c_85a9[0][d_5d9c_9f55][d_5d9c_9fa1] = d_2f3c_35ad[d_5d9c_9edd][d_5d9c_9f55][d_5d9c_9fa1];
            if (d_5d9c_9edb < 80)
                d_2f3c_85a9[1][d_5d9c_9f55][d_5d9c_9fa1] = d_2f3c_35ad[d_5d9c_9edb][d_5d9c_9f55][d_5d9c_9fa1];
        }
    if (d_5d9c_9edd < 80) {
        d_5d9c_9e31 = d_2f3c_5b8f[d_2f3c_7f93[d_5d9c_9edd]] / 16;
        d_5d9c_9e2f = d_2f3c_5b8f[d_2f3c_7f93[d_5d9c_9edd]] % 16;
    }
    if (d_5d9c_9edb < 80) {
        d_5d9c_9e2d = d_2f3c_5b8f[d_2f3c_7f93[d_5d9c_9edb]] / 16;
        d_5d9c_9e2b = d_2f3c_5b8f[d_2f3c_7f93[d_5d9c_9edb]] % 16;
    }
}

void f_7555_2012(void)
{
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++)
        for (d_5d9c_9f55 = 0; d_5d9c_9f55 <= 2; d_5d9c_9f55++) {
            if (d_5d9c_9edd < 80)
                d_2f3c_35ad[d_5d9c_9edd][d_5d9c_9f55][d_5d9c_9fa1] = d_2f3c_85a9[0][d_5d9c_9f55][d_5d9c_9fa1];
            if (d_5d9c_9edb < 80)
                d_2f3c_35ad[d_5d9c_9edb][d_5d9c_9f55][d_5d9c_9fa1] = d_2f3c_85a9[1][d_5d9c_9f55][d_5d9c_9fa1];
        }
    if (d_5d9c_9edd < 80)
        d_2f3c_5b8f[d_2f3c_7f93[d_5d9c_9edd]] = d_5d9c_9e31 * 16 + d_5d9c_9e2f;
    if (d_5d9c_9edb < 80)
        d_2f3c_5b8f[d_2f3c_7f93[d_5d9c_9edb]] = d_5d9c_9e2d * 16 + d_5d9c_9e2b;
}

void f_7555_2125(int team)
{
    d_5d9c_9e29 = team == d_5d9c_9edd ? d_5d9c_9e63 : d_5d9c_9e61;
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++) {
        if (team < 80) {
            d_5d9c_9f91 = d_2f3c_2d59[team][d_5d9c_9fa1];
            d_483b_0000[16][d_5d9c_9f91] = f_14d2_0c2a(d_483b_0000[8][d_5d9c_9f91]) == 0
                ? f_14d2_13eb(d_483b_0000[15][d_5d9c_9f91] * (f_14d2_0c2a(3) + 4) * 0.1, 10)
                : d_483b_0000[15][d_5d9c_9f91];
            if (d_5d9c_9e29 > 65) {
                if (d_5d9c_9f91 % 8 == 0)
                    d_483b_0000[16][d_5d9c_9f91] = f_14d2_144d(d_483b_0000[16][d_5d9c_9f91] + f_14d2_0c2a(10) + 15,
                                                               d_483b_0000[9][d_5d9c_9f91] + 25);
                else if (d_5d9c_9f91 % 8 == 1)
                    d_483b_0000[16][d_5d9c_9f91] = f_14d2_13eb(d_483b_0000[16][d_5d9c_9f91] - 15 - f_14d2_0c2a(10), 10);
            }
        } else {
            if (team == 80)
                d_5d9c_9e27 = d_5739_13de[d_5d9c_9e91];
            else if (team == 81)
                d_5d9c_9e27 = d_5739_13de[d_5d9c_9e8f];
            d_2f3c_855b[team == 81][d_5d9c_9fa1] = f_14d2_13eb(d_5d9c_9e27 + f_14d2_0c2a(5) - f_14d2_0c2a(5), 1);
        }
    }
}

void f_7555_2372(void)
{
    f_7a28_13ca(d_5d9c_9edd);
    f_7a28_13ca(d_5d9c_9edb);
    f_7a28_18b2(d_5d9c_9edd);
    f_7a28_18b2(d_5d9c_9edb);
    f_7555_3023();
    strcpy(d_1f3e_4716, "1st Half");
    if (d_5d9c_9e7d + d_5d9c_9e7b > 0) {
        f_14d2_0af4(6);
        f_14d2_0af4(2);
        f_7a28_05c2(0);
        f_a1c3_3505(1);
        f_14d2_0af9();
    }
    d_5d9c_9e25 = 7;
    for (;;) {
        d_5d9c_9e23 = 0;
        do
            f_7555_28ff();
        while (d_5d9c_9ea5 < d_5d9c_9e7f);
        while (d_5d9c_9e23 > 0) {
            f_7555_28ff();
            d_5d9c_9e23--;
        }
        if (d_5d9c_9e7d + d_5d9c_9e7b > 0) {
            f_14d2_0af4(6);
            f_14d2_0c66(50);
        }
        f_14d2_0aef();
        if (d_5d9c_9e7f == 45) {
            d_1f3e_49e6[0] = d_5d9c_9e39;
            d_1f3e_49e6[1] = d_5d9c_9e37;
            strcpy(d_1f3e_4716, "2nd Half");
            d_5d9c_9e7f = 90;
            if (d_5d9c_9e7d + d_5d9c_9e7b > 0) {
                f_a1c3_3505(0);
                f_7a28_2b9b();
                f_7a28_360e(d_5d9c_9e91, d_5d9c_9e8f, 0);
                f_7a28_05c2(0);
                f_14d2_0af4(6);
                f_14d2_0af4(2);
            }
            continue;
        }
        f_14d2_0aef();
        if (d_5d9c_9e7f == 90) {
            d_1f3e_49e6[2] = d_5d9c_9e39;
            d_1f3e_49e6[3] = d_5d9c_9e37;
            if (d_5d9c_9e39 + d_5d9c_9ed5 == d_5d9c_9e37 + d_5d9c_9ed3
                && f_992a_700a(d_5d9c_9fab) == 0 && d_5d9c_9fab > 5) {
                if (d_5d9c_9b86 != 0 && d_5d9c_9e37 != d_5d9c_9ed5)
                    f_7a28_0356();
                else if (f_7555_26b1(d_5d9c_9fab, d_5d9c_9f83 + 1)) {
                    d_5d9c_9e7f = 105;
                    strcpy(d_1f3e_4716, "Extra Time");
                    if (d_5d9c_9e7d + d_5d9c_9e7b > 0) {
                        f_7a28_0a08(d_5d9c_9edd, d_1f3e_4716);
                        f_a1c3_3505(1);
                        f_14d2_0af4(2);
                    }
                    continue;
                } else if (f_992a_70a8(d_5d9c_9fab) || d_5d9c_9fab == 82)
                    f_7eeb_3b4b();
            }
        }
        f_14d2_0aef();
        if (d_5d9c_9e7f == 105) {
            d_5d9c_9e7f = 120;
            if (d_5d9c_9e7d + d_5d9c_9e7b > 0)
                f_a1c3_3505(1);
            continue;
        }
        if (d_5d9c_9e7f == 120) {
            d_1f3e_49e6[4] = d_5d9c_9e39;
            d_1f3e_49e6[5] = d_5d9c_9e37;
            if (d_5d9c_9e39 + d_5d9c_9ed5 == d_5d9c_9e37 + d_5d9c_9ed3) {
                if (d_5d9c_9b86 != 0 && d_5d9c_9e37 != d_5d9c_9ed5)
                    f_7a28_0356();
                else if (f_7555_274e(d_5d9c_9fab, d_5d9c_9f83 + 1)) {
                    d_5d9c_9b6c = -1;
                    strcpy(d_1f3e_4716, "Penalty Shoot-Out !");
                    if (d_5d9c_9e7d + d_5d9c_9e7b > 0) {
                        f_14d2_0af4(2);
                        f_a1c3_3505(1);
                    }
                    f_7a28_0d24();
                    d_1f3e_49e6[6] = d_5d9c_9e39;
                    d_1f3e_49e6[7] = d_5d9c_9e37;
                } else if (f_992a_70a8(d_5d9c_9fab) || d_5d9c_9fab == 82)
                    f_7eeb_3b4b();
            }
        }
        f_14d2_0aef();
        break;
    }
}

char f_7555_26b1(int club, int round)
{
    if (d_5d9c_9b86 != 0)
        return -1;
    if (f_992a_752d(club, round))
        return -1;
    if (f_992a_7831(club))
        return -1;
    if (club == 87 && round > 1)
        return -1;
    if (club == 71 && round > 12)
        return -1;
    switch (club) {
    case 19: case 27: case 33: case 43: case 73:
    case 76: case 82: case 88: case 91: case 94:
        return -1;
    }
    return 0;
}

char f_7555_274e(int club, int round)
{
    if (f_7555_26b1(club, round) && club != 76 && club != 82 && club != 88)
        return -1;
    return 0;
}

/* the formations' shirt numbers that 277b looks for */
static char far *d_5d9c_4890[] = {
    "04 10 11 12 13", "07 11", "02 09", "06 14", "03 13"
};

void f_7555_277b(int a, int b, int c)
{
    d_5d9c_9e21 = b < 80 ? d_5739_00a4[b] : d_5739_15aa[b];
    if (c < 80) {
        d_5d9c_9e1f = d_5739_00a4[c];
        d_5d9c_9e1d = d_5739_00f6[c];
    } else {
        d_5d9c_9e1f = d_5739_15aa[c];
        d_5d9c_9e1d = d_5739_1776[c];
    }
    if (a == b) {
        d_5d9c_9ed9 = d_5d9c_9e21 / 16;
        d_5d9c_9f65 = d_5d9c_9e21 % 16;
    } else {
        d_5d9c_9ed9 = d_5d9c_9e1f / 16;
        d_5d9c_9f65 = d_5d9c_9e1f % 16;
        d_5d9c_9b6b = d_5d9c_9e21 % 16 == d_5d9c_9e1f % 16;
        if (d_5d9c_9b6b == 0) {
            sprintf(d_1f3e_4676, "%02d", d_5d9c_9e21 % 16);
            sprintf(d_1f3e_4626, "%02d", d_5d9c_9e1f % 16);
            for (d_5d9c_9e1b = 0; d_5d9c_9e1b <= 4; d_5d9c_9e1b++)
                if (strstr(d_5d9c_4890[d_5d9c_9e1b], d_1f3e_4676)
                    && strstr(d_5d9c_4890[d_5d9c_9e1b], d_1f3e_4626)) {
                    d_5d9c_9b6b = -1;
                    d_5d9c_9e1b = 4;
                }
        }
        if (d_5d9c_9b6b != 0) {
            d_5d9c_9ed9 = d_5d9c_9e1d / 16;
            d_5d9c_9f65 = d_5d9c_9e1d % 16;
        }
    }
}

void f_7555_28ff(void)
{
    d_5d9c_9e19 = f_14d2_0c2a(d_5d9c_9f13 - (d_5d9c_9e65 > 22
        ? (d_5d9c_9f13 - d_5d9c_9e17) / 3 - f_7555_2dbf(1, d_5d9c_9ea5) : 0));
    d_5d9c_9e15 = f_14d2_0c2a(d_5d9c_9e17 + (d_5d9c_9e65 > 22
        ? (d_5d9c_9f13 - d_5d9c_9e17) / 3 - f_7555_2e05(1, d_5d9c_9ea5) : 0));
    if (d_5d9c_9e19 >= d_5d9c_9e15) {
        d_5d9c_9e47++;
        d_5d9c_9b9c = 1;
        if (d_5d9c_9e7d + d_5d9c_9e7b > 0)
            f_7555_4662(3.5, 21.5);
        f_7555_2e41();
        f_7555_2a03();
    } else {
        d_5d9c_9e45++;
        d_5d9c_9b9c = 2;
        if (d_5d9c_9e7d + d_5d9c_9e7b > 0)
            f_7555_4662(21.5, 3.5);
        f_7555_2e41();
        f_7555_2a80();
    }
}

void f_7555_2a03(void)
{
    do {
        d_5d9c_9e13 = 0;
        d_5d9c_9e11 = f_14d2_0c2a(d_5d9c_9e0f - f_7555_2dbf(2, d_5d9c_9ea5));
        d_5d9c_9e0d = f_14d2_0c2a(d_5d9c_9e0b - f_7555_2e05(0, d_5d9c_9ea5));
        if (d_5d9c_9e11 >= d_5d9c_9e0d) {
            d_5d9c_9e43++;
            f_7555_2e41();
            f_7555_2afd();
        } else {
            d_5d9c_9e49++;
            f_7555_2e41();
        }
    } while (d_5d9c_9e0d <= d_5d9c_9e11 && d_5d9c_9e13 == 0);
}

void f_7555_2a80(void)
{
    do {
        d_5d9c_9e13 = 0;
        d_5d9c_9e09 = f_14d2_0c2a(d_5d9c_9e07 - f_7555_2e05(2, d_5d9c_9ea5));
        d_5d9c_9e05 = f_14d2_0c2a(d_5d9c_9e03 - f_7555_2dbf(0, d_5d9c_9ea5));
        if (d_5d9c_9e09 >= d_5d9c_9e05) {
            d_5d9c_9e41++;
            f_7555_2e41();
            f_7555_2b65();
        } else {
            d_5d9c_9e4b++;
            f_7555_2e41();
        }
    } while (d_5d9c_9e05 <= d_5d9c_9e09 && d_5d9c_9e13 == 0);
}

void f_7555_2afd(void)
{
    d_5d9c_9b16 = f_14d2_0c2a(d_5d9c_9bb7) == 0 ? -1 : 0;
    d_5d9c_9f4f = d_5d9c_9e39 * 20 + 180;
    d_5d9c_9f51 = f_14d2_0c2a(d_5d9c_9e01) + (d_5d9c_9b16 ? 100 : 0);
    if (d_5d9c_9f51 > d_5d9c_9f4f) {
        d_5d9c_9e4f++;
        f_7555_2e41();
        f_7555_2bcd();
    } else
        f_7555_2e41();
}

void f_7555_2b65(void)
{
    d_5d9c_9b16 = f_14d2_0c2a(d_5d9c_9bb5) == 0 ? -1 : 0;
    d_5d9c_9f4f = d_5d9c_9e37 * 20 + 180;
    d_5d9c_9f51 = f_14d2_0c2a(d_5d9c_9dff) + (d_5d9c_9b16 ? 100 : 0);
    if (d_5d9c_9f51 > d_5d9c_9f4f) {
        d_5d9c_9e4d++;
        f_7555_2e41();
        f_7555_2cc6();
    } else
        f_7555_2e41();
}

void f_7555_2bcd(void)
{
    char buf[320];

    if (d_5d9c_9e7d + d_5d9c_9e7b > 0) {
        f_14d2_0609(0x57, 0x7e, 0x63, 0x84);
        sprintf(buf, "%d", d_5d9c_9e4f);
        f_1680_27aa(0x60, 0x84, 5, buf);
    }
    d_5d9c_9dfd = f_14d2_0c2a(d_5d9c_9dfb);
    if (d_5d9c_9dfd < 26) {
        f_7555_31b5(d_5d9c_9edd);
        d_5d9c_9e13 = 1;
        d_5d9c_9b6a = 0;
    } else if (d_5d9c_9dfd < 28) {
        f_7a28_0ff4(d_5d9c_9edd, d_5d9c_9dfb, 0);
        if (d_5d9c_9e7d + d_5d9c_9e7b > 0)
            f_7a28_08e7();
        d_5d9c_9e13 = -d_5d9c_9b69;
        d_5d9c_9b6a = -1;
    } else {
        if (d_5d9c_9dfd < 30)
            f_7a28_0206(d_5d9c_9edd);
        f_7555_2e41();
    }
    if (d_5d9c_9e13 == 1) {
        d_5d9c_9e39++;
        f_7a28_03bd(d_5d9c_9f91, d_5d9c_9b6a, d_5d9c_9df7, d_5d9c_9edd);
    }
}

void f_7555_2cc6(void)
{
    char buf[320];

    if (d_5d9c_9e7d + d_5d9c_9e7b > 0) {
        f_14d2_0609(0xe7, 0x7e, 0xf3, 0x84);
        sprintf(buf, "%d", d_5d9c_9e4d);
        f_1680_27aa(0xf0, 0x84, 5, buf);
    }
    d_5d9c_9dfd = f_14d2_0c2a(d_5d9c_9df9);
    if (d_5d9c_9dfd < 26) {
        f_7555_31b5(d_5d9c_9edb);
        d_5d9c_9e13 = 1;
        d_5d9c_9b6a = 0;
    } else if (d_5d9c_9dfd < 28) {
        f_7a28_0ff4(d_5d9c_9edb, d_5d9c_9df9, 0);
        if (d_5d9c_9e7d + d_5d9c_9e7b > 0)
            f_7a28_08e7();
        d_5d9c_9e13 = -d_5d9c_9b69;
        d_5d9c_9b6a = -1;
    } else {
        if (d_5d9c_9dfd < 30)
            f_7a28_0206(d_5d9c_9edb);
        f_7555_2e41();
    }
    if (d_5d9c_9e13 == 1) {
        d_5d9c_9e37++;
        f_7a28_03bd(d_5d9c_9f91, d_5d9c_9b6a, d_5d9c_9df7, d_5d9c_9edb);
    }
}

unsigned char f_7555_2dbf(unsigned char a, int b)
{
    return (b < 60 ? 0 : d_2f3c_84a7[a][f_14d2_144d(b - 60, 59)]) ? -1 : 0;
}

unsigned char f_7555_2e05(unsigned char a, int b)
{
    return b < 60 ? 0 : d_2f3c_83f3[a][f_14d2_144d(b - 60, 59)];
}

void f_7555_2e41(void)
{
    char key[4];
    char c;

    d_5d9c_9e3f++;
    d_5d9c_9ea5 = d_5d9c_9e3f / 2;
    if (d_5d9c_9ea5 > d_5d9c_9e7f) {
        d_5d9c_9ea5 = d_5d9c_9e7f;
        d_5d9c_9e3f = d_5d9c_9ea5 * 2;
    }
    if (d_5d9c_9e7d + d_5d9c_9e7b > 0) {
        f_7a28_019a(d_5d9c_9ea5);
        f_7555_46d3();
        strcpy(key, strupr(f_14d2_0baf()));
        c = f_14d2_0ac9();
        if (c != 3 && key[0] != ' ') {
            f_14d2_0c66(7);
            if (d_5d9c_9e57 == 0 && (c == 1 || c != 0 && d_5d9c_9e53 == 1 || key[0] == 'H'))
                f_7555_3ff8(d_5d9c_9edd, 0);
            if (d_5d9c_9e53 == 0 && (c == 2 || c != 0 && d_5d9c_9e57 == 1 || key[0] == 'A'))
                f_7555_3ff8(d_5d9c_9edb, 0);
        }
    }
    if (f_14d2_0c2a(d_5d9c_9df5) == 0)
        f_7555_33fe(d_5d9c_9edd);
    if (f_14d2_0c2a(d_5d9c_9df3) == 0)
        f_7555_33fe(d_5d9c_9edb);
    if (d_5d9c_9ea5 > 65) {
        if (d_5d9c_9e57 == 1 && d_5d9c_9ea5 > d_5d9c_9df1 && d_2f3c_2d0b[0][11] == 4 && d_5d9c_9b68)
            f_7555_4165(d_5d9c_9edd, 1);
        if (d_5d9c_9e53 == 1 && d_5d9c_9ea5 > d_5d9c_9def && d_2f3c_2d0b[1][11] == 4 && d_5d9c_9b67)
            f_7555_4165(d_5d9c_9edb, 1);
        if (d_5d9c_9e57 == 1 && d_5d9c_9ea5 > d_5d9c_9df1 && d_2f3c_2d0b[0][12] == 4 && d_5d9c_9b66)
            f_7555_4165(d_5d9c_9edd, 1);
        if (d_5d9c_9e53 == 1 && d_5d9c_9ea5 > d_5d9c_9def && d_2f3c_2d0b[1][12] == 4 && d_5d9c_9b65)
            f_7555_4165(d_5d9c_9edb, 1);
    }
}

void f_7555_3023(void)
{
    d_5d9c_9df1 = f_14d2_0c2a(20) + 65;
    d_5d9c_9def = f_14d2_0c2a(20) + 65;
    d_5d9c_9b68 = 0;
    d_5d9c_9b66 = 0;
    d_5d9c_9b67 = 0;
    d_5d9c_9b65 = 0;
    if (d_5d9c_9e39 + d_5d9c_9ed5 < d_5d9c_9e37 + d_5d9c_9ed3 ||
        d_5d9c_9e39 + d_5d9c_9ed5 == d_5d9c_9e37 + d_5d9c_9ed3 && d_5d9c_9e37 >= d_5d9c_9ed5) {
        d_5d9c_9b68 = -1;
        d_5d9c_9b66 = -1;
    }
    if (d_5d9c_9e37 + d_5d9c_9ed3 < d_5d9c_9e39 + d_5d9c_9ed5 ||
        d_5d9c_9e37 + d_5d9c_9ed3 == d_5d9c_9e39 + d_5d9c_9ed5 && d_5d9c_9e39 >= d_5d9c_9ed3) {
        d_5d9c_9b67 = -1;
        d_5d9c_9b65 = -1;
    }
    f_7555_30e2(d_5d9c_9edd);
    f_7555_30e2(d_5d9c_9edb);
}

void f_7555_30e2(int team)
{
    if (f_1680_0003(team) == 0) {
        for (d_5d9c_9f6d = 11; d_5d9c_9f6d <= 12; d_5d9c_9f6d++) {
            for (d_5d9c_9f55 = 2; d_5d9c_9f55 <= 10; d_5d9c_9f55++) {
                if (f_1680_014a(d_2f3c_2d59[team][d_5d9c_9f6d], d_5d9c_9f55)) {
                    d_2f3c_35ad[team][0][d_5d9c_9f6d] = d_5d9c_9f55 + (d_5d9c_9f55 < 5 ? 3 : 0);
                    d_2f3c_85a9[team == d_5d9c_9edb][0][d_5d9c_9f6d] = d_5d9c_9f55 + (d_5d9c_9f55 < 5 ? 3 : 0);
                }
            }
        }
    }
}

void f_7555_31b5(int team)
{
    d_5d9c_9ecf = 0;
    d_5d9c_9f91 = 1700;
    d_5d9c_9df7 = -1;
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++) {
        if (d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9fa1] < 2) {
            if ((d_5d9c_9ded = f_7555_3245(team, d_5d9c_9fa1)) > d_5d9c_9ecf) {
                d_5d9c_9ecf = d_5d9c_9ded;
                d_5d9c_9f91 = d_2f3c_2d59[team][d_5d9c_9fa1];
                d_5d9c_9df7 = d_5d9c_9fa1;
            }
        }
    }
}

int f_7555_3245(int team, int p)
{
    d_5d9c_9eb7 = d_2f3c_35ad[team][0][p];
    if (d_5d9c_9eb7 > 1) {
        d_5d9c_9b9b = d_2f3c_35ad[team][2][p];
        if (d_5d9c_9b9b == 1)
            d_5d9c_9f19 = 1;
        else if (d_5d9c_9b9b == 2)
            d_5d9c_9f19 = -1;
        else
            d_5d9c_9f19 = 0;
        switch (d_5d9c_9eb7) {
        case 2:
        case 3:
        case 11:
            d_5d9c_9ded = 5;
            break;
        case 4:
            d_5d9c_9ded = 10;
            break;
        case 5:
        case 6:
            d_5d9c_9ded = 15;
            break;
        case 7:
        case 8:
        case 9:
            d_5d9c_9ded = 20;
            break;
        case 10:
            d_5d9c_9ded = 30;
            break;
        }
        d_5d9c_9ded += d_5d9c_9f19 * 5 + f_7a28_14c4(p, team) * 2;
        if (team < 80)
            d_5d9c_9ded = d_483b_0000[7][d_2f3c_2d59[team][p]] * 0.75 +
                          (d_5d9c_9b16 ? d_483b_0000[5][d_2f3c_2d59[team][p]] * 10 : 0) + d_5d9c_9ded;
        else
            d_5d9c_9ded += 10;
        d_5d9c_9deb = d_5d9c_9ded;
        d_5d9c_9ded += f_14d2_0c2a(75);
    } else {
        d_5d9c_9deb = 0;
        d_5d9c_9ded = 0;
    }
    return d_5d9c_9ded;
}

void f_7555_33fe(int team)
{
    d_5d9c_9b64 = 0;
    d_5d9c_9f05 = team == d_5d9c_9edd ? d_5d9c_9edb : d_5d9c_9edd;
    d_5d9c_9f91 = -1;
    d_5d9c_9de9 = 0;
    do {
        do {
            d_5d9c_9fa1 = f_14d2_0c2a(13);
        } while (d_2f3c_35ad[team][0][d_5d9c_9fa1] <= 1 ||
                 d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9fa1] >= 2);
        if ((d_5d9c_9de7 = f_14d2_0c2a(d_2f3c_2d0b[team == d_5d9c_9edb ? 5 : 4][d_5d9c_9fa1] + 10)) > d_5d9c_9f5f ||
            d_5d9c_9f91 == -1) {
            d_5d9c_9f91 = d_5d9c_9fa1;
            d_5d9c_9f5f = d_5d9c_9de7;
        }
        d_5d9c_9de9++;
    } while (d_5d9c_9f91 <= -1 || d_5d9c_9de9 < 5);
    d_5d9c_9de5 = d_2f3c_35ad[team][0][d_5d9c_9f91];
    d_5d9c_9de3 = -1;
    d_5d9c_9de9 = 0;
    do {
        do {
            d_5d9c_9fa1 = f_14d2_0c2a(13);
            d_5d9c_9de1 = d_2f3c_35ad[d_5d9c_9f05][0][d_5d9c_9fa1];
        } while (d_5d9c_9de1 <= 1 ||
                 d_2f3c_2d0b[d_5d9c_9f05 == d_5d9c_9edb][d_5d9c_9fa1] >= 2);
        d_5d9c_9de7 = f_1680_01b4(d_5d9c_9de5) && f_1680_01f3(d_5d9c_9de1) ||
                      f_1680_01d6(d_5d9c_9de5) && f_1680_01d6(d_5d9c_9de1) ||
                      f_1680_01f3(d_5d9c_9de5) && f_1680_01b4(d_5d9c_9de1) ? 11 : 0;
        d_5d9c_9de7 += f_1680_0210(d_5d9c_9de5) && f_1680_0232(d_5d9c_9de1) ||
                       f_1680_0254(d_5d9c_9de5) && f_1680_0254(d_5d9c_9de1) ||
                       f_1680_0232(d_5d9c_9de5) && f_1680_0210(d_5d9c_9de1) ? 10 : 0;
        if (d_5d9c_9de7 > d_5d9c_9f5f || d_5d9c_9de3 == -1) {
            d_5d9c_9de3 = d_5d9c_9fa1;
            d_5d9c_9f5f = d_5d9c_9de7;
        }
        d_5d9c_9de9++;
    } while (d_5d9c_9de3 <= -1 || d_5d9c_9de9 < 5);
    if (d_5d9c_9e7d + d_5d9c_9e7b > 0) {
        if (team < 80)
            strcpy(d_1f3e_45d2, f_a1c3_2243(d_2f3c_2d59[team][d_5d9c_9f91]));
        else
            sprintf(d_1f3e_45d2, "No.%s", f_1680_03f3(d_5d9c_9f91 + 1));
        if (d_5d9c_9f05 < 80) {
            strcpy(d_1f3e_4582, f_a1c3_2243(d_2f3c_2d59[d_5d9c_9f05][d_5d9c_9de3]));
            d_5d9c_9b64 = f_14d2_0c2a(d_483b_0000[14][d_2f3c_2d59[d_5d9c_9f05][d_5d9c_9de3]] + 10) < f_14d2_0c2a(10);
        } else {
            sprintf(d_1f3e_4582, "their no.%s", f_1680_03f3(d_5d9c_9de3 + 1));
            d_5d9c_9b64 = f_14d2_0c2a(2) == 0;
        }
    }
    f_7555_3fa2();
    d_5d9c_9b63 = 0;
    switch (d_5d9c_9ddf) {
    case 0:
    case 1:
    case 2:
    case 5:
    case 6:
    case 7:
    case 11:
    case 15:
    case 17:
    case 18:
    case 20:
        if (d_5d9c_9f05 < 80)
            d_5d9c_9b62 = f_14d2_0c2a(d_483b_0000[13][d_2f3c_2d59[d_5d9c_9f05][d_5d9c_9de3]]) > f_14d2_0c2a(10);
        else
            d_5d9c_9b62 = f_14d2_0c2a(10) > f_14d2_0c2a(10);
        if (d_5d9c_9b62)
            f_7555_38b3(team, d_5d9c_9f91, d_5d9c_9f05, d_5d9c_9de3);
        break;
    }
    f_7555_3b21(team, d_5d9c_9f91);
    if (d_5d9c_9b64)
        d_2f3c_2d0b[d_5d9c_9f05 == d_5d9c_9edb ? 5 : 4][d_5d9c_9de3] = 20;
    if (d_5d9c_9e7d + d_5d9c_9e7b > 0)
        f_7a28_0a08(d_5d9c_9edd, d_1f3e_4716);
}

void f_7555_38b3(a, b, team, n)
int a, b; register int team; int n;
{
    int saved;
    char buf[320];
    register int old;

    old = d_5d9c_9f91;
    saved = d_5d9c_9de3;
    d_5d9c_9f91 = b;
    d_5d9c_9de3 = n;
    if (d_5d9c_9e7d + d_5d9c_9e7b > 0) {
        sprintf(buf, "%s injured by %s", d_1f3e_4582, d_1f3e_45d2);
        f_7a28_0a08(team, buf);
        f_14d2_0c66(100);
        f_7a28_0a9c();
        sprintf(buf, "He was %s", d_1f3e_4532);
        f_7a28_0a08(a, buf);
        f_14d2_0c66(75);
        f_7a28_0a9c();
        d_5d9c_9b63 = -1;
    }
    d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9de3] = 6;
    if (team < 80) {
        sprintf(buf, "%s%04d", d_1f3e_44e2, d_2f3c_2d59[team][d_5d9c_9de3]);
        strcpy(d_1f3e_44e2, buf);
    }
    d_5d9c_9ddd = 0;
    d_5d9c_9ddb = 1;
    if (d_2f3c_35ad[team][0][d_5d9c_9de3] > 7 && d_2f3c_35ad[team][0][d_5d9c_9de3] < 11) {
        d_5d9c_9ddd = 1;
        d_5d9c_9ddb = 0;
    }
    if (f_1680_0003(team)) {
        d_5d9c_9b76 = -1;
        f_6e68_4b39(team);
        d_5d9c_9b76 = 0;
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++)
            d_2f3c_2d0b[team == d_5d9c_9edb ? 3 : 2][d_5d9c_9fa1] = 0;
        f_7a28_18b2(team);
        f_7a28_05c2(d_5d9c_9b9c);
        f_7a28_0a08(d_5d9c_9edd, d_1f3e_4716);
    } else if (d_2f3c_2d16[team == d_5d9c_9edb][d_5d9c_9ddd] == 4) {
        f_7555_4165(team, d_5d9c_9ddd);
    } else if (d_2f3c_2d16[team == d_5d9c_9edb][d_5d9c_9ddb] == 4) {
        f_7555_4165(team, d_5d9c_9ddb);
    } else {
        f_7a28_18b2(team);
        d_5d9c_9e23 += f_14d2_0c2a(3) * 2;
    }
    d_5d9c_9f91 = old;
    d_5d9c_9de3 = saved;
}

void f_7555_3b21(int team, int p)
{
    int r;
    char buf[320];

    d_5d9c_9dd9 = 0;
    d_5d9c_9ecf = d_5d9c_9ddf >= 15 ? f_14d2_0c2a(3) : f_14d2_144d(f_14d2_0c2a(2), f_14d2_0c2a(2));
    if (d_5d9c_9ecf == 2 || d_5d9c_9ecf == 1 && d_2f3c_2d0b[team == d_5d9c_9edb][p] == 1) {
        if (f_14d2_0c2a(2) == 0)
            strcpy(d_1f3e_4492, "SENT OFF");
        else
            strcpy(d_1f3e_4492, "SHOWN THE RED CARD");
        d_2f3c_2d0b[team == d_5d9c_9edb][p] = 2;
        if (team < 80) {
            sprintf(buf, "%s%04d", d_1f3e_4442, d_2f3c_2d59[team][p]);
            strcpy(d_1f3e_4442, buf);
        }
        d_5d9c_9dd9 = 2;
        f_7a28_18b2(team);
        d_5d9c_9e23 += f_14d2_0c2a(2) * 2;
    } else if (d_5d9c_9ecf == 1) {
        if (f_14d2_0c2a(2) == 0)
            strcpy(d_1f3e_4492, "BOOKED");
        else
            strcpy(d_1f3e_4492, "SHOWN THE YELLOW CARD");
        d_2f3c_2d0b[team == d_5d9c_9edb][p] = 1;
        if (team < 80) {
            sprintf(buf, "%s%04d", d_1f3e_43f2, d_2f3c_2d59[team][p]);
            strcpy(d_1f3e_43f2, buf);
        }
        d_5d9c_9dd9 = 6;
    } else if (d_5d9c_9ecf == 0) {
        r = f_14d2_0c2a(4);
        switch (r) {
        case 0: strcpy(d_1f3e_4492, "WARNED"); break;
        case 1: strcpy(d_1f3e_4492, "LECTURED"); break;
        case 2: strcpy(d_1f3e_4492, "TICKED OFF"); break;
        case 3: strcpy(d_1f3e_4492, "SPOKEN TO"); break;
        }
        d_5d9c_9dd9 = 1;
    }
    if (d_5d9c_9e7d + d_5d9c_9e7b > 0 && d_5d9c_9dd9 > 0) {
        f_7a28_0a9c();
        if (team == d_5d9c_9edd)
            f_7555_277b(d_5d9c_9e91, d_5d9c_9e91, d_5d9c_9e8f);
        else
            f_7555_277b(d_5d9c_9e8f, d_5d9c_9e91, d_5d9c_9e8f);
        strcpy(buf, d_1f3e_45d2);
        f_1680_2ea0(3.0, 8.5, -d_5d9c_9ed9, d_5d9c_9f65, 0, strupr(buf));
        f_14d2_0af4(1);
        f_1680_2d78(strlen(d_1f3e_45d2) + 5, 8.5, d_5d9c_9dd9, d_1f3e_4492);
        if (d_5d9c_9b63 == 0) {
            if (strcmp(f_14d2_0d75(d_1f3e_4532, 1), "*") == 0) {
                d_1f3e_4532[strlen(d_1f3e_4532) - 1] = 0;
            } else {
                strcat(d_1f3e_4532, " ");
                strcat(d_1f3e_4532, d_1f3e_4582);
            }
            f_14d2_0c66(75);
            f_7a28_0a9c();
            sprintf(buf, "He %s", d_1f3e_4532);
            f_7a28_0a08(team, buf);
        }
        f_14d2_0c66(75);
        f_7a28_0a9c();
        if (d_5d9c_9dd9 == 2 && f_1680_0003(team)) {
            d_5d9c_9b76 = -1;
            f_6e68_4b39(team);
            d_5d9c_9b76 = 0;
            for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++)
                d_2f3c_2d0b[team == d_5d9c_9edb ? 3 : 2][d_5d9c_9fa1] = 0;
            f_7a28_18b2(team);
            f_7a28_05c2(d_5d9c_9b9c);
            f_7a28_0a08(d_5d9c_9edd, d_1f3e_4716);
        }
        f_14d2_0aef();
        f_14d2_0af4(2);
    }
}

/* the commentary's fouls */
static char far *d_5d9c_48a4[] = {
    "brought down", "hacked at", "kicked", "body checked", "obstructed", "up-ended",
    "flattened", "tripped", "pushed", "shoved", "held back", "clattered into",
    "handballed*", "said too much*", "kicked the ball away*", "punched", "headbutted",
    "brought down", "cynically hacked", "spat at", "elbowed"
};

void f_7555_3fa2(void)
{
    d_5d9c_9dd7 = f_14d2_0c2a(100) + 1;
    if (d_5d9c_9dd7 <= 85)
        d_5d9c_9ddf = f_14d2_0c2a(15);
    else
        d_5d9c_9ddf = f_14d2_0c2a(6) + 15;
    strcpy(d_1f3e_4532, d_5d9c_48a4[d_5d9c_9ddf]);
}

void f_7555_3ff8(int team, char c)
{
    int saved;
    char buf[320];
    int k;

    saved = d_5d9c_9f67;
    d_5d9c_9f67 = team;
    for (;;) {
        f_a1c3_27e4("Tactical move");
        f_1680_33a0(1.0, 4.0, d_5d9c_9f67);
        strcpy(buf, "*Exit|Tactical change|Opponents team|");
        if (c == 0)
            strcat(buf, "Match Stats|");
        f_1680_150c(7, "", buf);
        f_1680_18b2(c + 3);
        k = d_5d9c_9faf;
        if (k == 1) {
            d_5d9c_9b76 = -1;
            f_6e68_4b39(d_5d9c_9f67);
            d_5d9c_9b76 = 0;
            for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++)
                d_2f3c_2d0b[d_5d9c_9f67 == d_5d9c_9edb ? 3 : 2][d_5d9c_9fa1] = 0;
            f_7a28_18b2(d_5d9c_9f67);
        } else if (k == 2) {
            if (d_5d9c_9f67 == d_5d9c_9edd)
                d_5d9c_9ec3 = d_5d9c_9edb;
            else
                d_5d9c_9ec3 = d_5d9c_9edd;
            f_7555_00e9(d_5d9c_9ec3);
        } else if (k == 3) {
            f_7a28_2b9b();
            f_7a28_360e(d_5d9c_9e91, d_5d9c_9e8f, 0);
        } else
            break;
    }
    if (c == 0) {
        f_7a28_05c2(d_5d9c_9b9c);
        f_7a28_0a08(d_5d9c_9edd, d_1f3e_4716);
    }
    d_5d9c_9f67 = saved;
}

void f_7555_4165(int team)
{
    char buf[320];

    f_7555_45b8(team);
    if (team == d_5d9c_9edd) {
        d_5d9c_9de3 = d_5d9c_9edb;
        d_5d9c_9dd5 = d_5d9c_9e5f;
    } else {
        d_5d9c_9de3 = d_5d9c_9edd;
        d_5d9c_9dd5 = d_5d9c_9e5b;
    }
    d_5d9c_9eb7 = d_2f3c_35ad[team][0][d_5d9c_9dd3];
    if (d_5d9c_9dd5 == 0) {
        if (d_5d9c_9eb7 > 7) {
            d_5d9c_9f6d = 5;
            d_5d9c_9fa1 = 10;
        } else {
            d_5d9c_9f6d = 2;
            d_5d9c_9fa1 = 7;
        }
    }
    if (d_5d9c_9dd5 == 1) {
        d_5d9c_9f6d = 8;
        d_5d9c_9fa1 = 10;
    }
    if (d_5d9c_9dd5 == 2) {
        d_5d9c_9f6d = 2;
        d_5d9c_9fa1 = 10;
    }
    d_5d9c_9dd1 = 0;
    d_5d9c_9f91 = -1;
    for (d_5d9c_9f55 = 1; d_5d9c_9f55 <= 12; d_5d9c_9f55++) {
        if (d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9f55] == 6) {
            d_5d9c_9f91 = d_5d9c_9f55;
            d_5d9c_9f55 = 12;
        } else if (d_2f3c_35ad[team][0][d_5d9c_9f55] >= d_5d9c_9f6d
                   && d_2f3c_35ad[team][0][d_5d9c_9f55] <= d_5d9c_9fa1
                   && d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9f55] < 2) {
            d_5d9c_9e27 = f_7a28_14c4(d_5d9c_9f55, team);
            if (d_5d9c_9dcf - d_5d9c_9e27 > d_5d9c_9dd1) {
                d_5d9c_9dd1 = d_5d9c_9dcf - d_5d9c_9e27;
                d_5d9c_9f91 = d_5d9c_9f55;
            }
        }
    }
    if (d_5d9c_9f91 != -1) {
        strcpy(d_1f3e_56d4, "TACTICAL");
        if (d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9f91] == 6) {
            strcpy(d_1f3e_56d4, "ENFORCED");
            d_2f3c_35ad[team][0][d_5d9c_9dd3] = d_2f3c_35ad[team][0][d_5d9c_9f91];
        }
        if (team < 80) {
            strcpy(d_1f3e_5684, f_a1c3_21cc(d_2f3c_2d59[team][d_5d9c_9dd3]));
            strcat(d_1f3e_5684, " on for ");
            strcat(d_1f3e_5684, f_a1c3_21cc(d_2f3c_2d59[team][d_5d9c_9f91]));
        } else {
            sprintf(d_1f3e_5684, "Their No.%d on for their No.%d",
                    d_5d9c_9dd3 + (d_5d9c_9dd3 == 12 ? 0 : 1), d_5d9c_9f91 + 1);
        }
        d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9dd3] = 0;
        if (d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9f91] == 6)
            d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9f91] = 3;
        else
            d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9f91] = 5;
        d_5d9c_a040[team == d_5d9c_9edb][d_5d9c_9dd3 == 12] = d_5d9c_9f91;
        d_5d9c_a03c[team == d_5d9c_9edb][d_5d9c_9dd3 == 12] = d_5d9c_9ea5;
        f_7a28_18b2(team);
        if (d_5d9c_9e7d + d_5d9c_9e7b > 0) {
            sprintf(buf, "%s %s MOVE", strupr(d_5d9c_08bc[team]), d_1f3e_56d4);
            f_7a28_0a08(team, buf);
            f_14d2_0c66(75);
            f_7a28_0a08(team, d_1f3e_5684);
            f_14d2_0c66(100);
            f_7a28_0a08(d_5d9c_9edd, d_1f3e_4716);
        }
    }
    if (team == d_5d9c_9edd) {
        if (d_5d9c_9b68)
            d_5d9c_9b68 = 0;
        else
            d_5d9c_9b66 = 0;
    } else {
        if (d_5d9c_9b67)
            d_5d9c_9b67 = 0;
        else
            d_5d9c_9b65 = 0;
    }
}

void f_7555_45b8(int team)
{
    int a;
    int b;

    if (team == d_5d9c_9edd)
        d_5d9c_9de3 = d_5d9c_9edb;
    else
        d_5d9c_9de3 = d_5d9c_9edd;
    a = -5000;
    b = -5000;
    if (d_2f3c_2d0b[team == d_5d9c_9edb][11] == 4)
        a = f_7a28_14c4(11, team);
    if (d_2f3c_2d0b[team == d_5d9c_9edb][12] == 4)
        b = f_7a28_14c4(12, team);
    if (b > a) {
        d_5d9c_9dd3 = 12;
        d_5d9c_9dcf = b;
    } else {
        d_5d9c_9dd3 = 11;
        d_5d9c_9dcf = a;
    }
}

void f_7555_4662(float x, float y)
{
    f_14d2_0609(18, 112, 261, 120);
    f_1680_2a61(x, 15.0, 6, "Attacking...");
    f_1680_2a61(y, 15.0, 12, "Defending...");
}

void f_7555_46d3(void)
{
    f_7a28_0000(d_5d9c_9e4b, d_5d9c_9e41, 0, 2);
    f_7a28_0000(d_5d9c_9e47, d_5d9c_9e45, 1, 1);
    f_7a28_0000(d_5d9c_9e43, d_5d9c_9e49, 2, 0);
}
