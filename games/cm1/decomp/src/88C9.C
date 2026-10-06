/* @at 88c9:0000 */
/* @data 5d9c:628a */
/* @module */

/* Overlay 6: players and staff: approaches for your players and their requests to leave,
 * valuations and free transfers, player values and wages, transfer news, finding
 * players (the search, the transfer list and the shortlist), scouts' recommendations
 * and retirements, managers sacked, resigning and appointed, job offers, appointing and
 * sacking staff, the staff screen, and the board's messages. */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <mem.h>
#include <stdlib.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_88c9_0000(int player, int club, int v);
char f_88c9_00f0(int player, int team);
void f_88c9_02cc(int player, int team);
char f_88c9_04fb(int player);
char f_88c9_08dc(int player);
void f_88c9_0ad3(int player);
char f_88c9_0c92(int player);
void f_88c9_0cdc(int player);
void f_88c9_0e2d(int player, char c);
void f_88c9_0ec3(int player);
void f_88c9_0f13(int player);
long f_88c9_0f77(int player);
long f_88c9_12b3(int p, int n);
void f_88c9_1b98(int player);
void f_88c9_1edc(int player, char flag);
long f_88c9_2177(int player);
void f_88c9_2207(int player, int team, char far *s);
void f_88c9_237d(int n);
void f_88c9_243e(int line, char far *s);
void f_88c9_249e(char far *s);
void f_88c9_24f1(char far *s);
char f_88c9_25cc(void);
long f_88c9_26a0(long v, char c);
long f_88c9_2744(long v);
char far *f_88c9_27e8(long amount);
void f_88c9_2837(void);
void f_88c9_2db1(int team);
void f_88c9_2ef4(int a, int b, int bg, int fg, char far *s1, char far *s2);
void f_88c9_303f(int x, char on, int a);
void f_88c9_30b9(char far *title);
void f_88c9_36df(void);
void f_88c9_389f(void);
void f_88c9_39c4(int p, int row);
void f_88c9_3d41(int mode, char draw);
char f_88c9_3fd0(int p, int team, int n);
void f_88c9_41a8(void);
void f_88c9_422a(int p, int c, char flag);
void f_88c9_471d(int p, int k);
void f_88c9_4855(void);
void f_88c9_4b98(void);
void f_88c9_4cf8(int club, int a);
void f_88c9_4ee2(void);
void f_88c9_50e1(int p);
void f_88c9_516f(void);
char f_88c9_5530(int p, int team);
void f_88c9_575b(int club, int n);
void f_88c9_594f(int p, int team, int b);
char f_88c9_5cf1(int p, int team, int x);
int f_88c9_5ea7(int team, int x);
void f_88c9_604d(int team, int x);
int f_88c9_686f(int x);
void f_88c9_68aa(int team);
void f_88c9_6cce(float x, float y, int c, int c2, int type, int team);
char far *f_88c9_72fa(int a, int b);
void f_88c9_741e(void);
void f_88c9_76df(int club);
void f_88c9_776f(int team, char far *s);
char far *f_88c9_77b0(int n);
void f_88c9_7813(void);
void f_88c9_7889(int i, char c);
void f_88c9_7933(int i, char c, int a, int b);

char f_8352_462d(int player);
void f_8352_2fed(int player, int club);
void f_8352_3de6(int colour, char far *s);
void far *f_14d2_16bc(int handle, int page);
long f_14d2_1462(long a, long b);
int f_1680_0577(int x);
char f_1680_0003(int x);
float f_1680_0037(int x);
int f_1680_00fb(int x);
char f_1680_031f(int x);
void f_1680_150c(int n, char far *title, char far *items);
void f_1680_18b2(int last);
void f_1680_33a0(float x, float y, int team);
void f_a1c3_27e4(char far *title);
char far *f_a1c3_213c(int player);
char far *f_a1c3_2243(int player);
long f_a1c3_36c4(int team);
void f_a1c3_5e7a(int player, int a, char b);
extern int d_5d9c_9fab;
extern int d_5d9c_9fa7;
extern int d_5d9c_9d7f;
extern int d_5d9c_9d7d;
extern int d_5d9c_a334;
extern int d_5d9c_9faf;
extern char d_5d9c_9b5f;
extern char d_5d9c_9b4e;
extern char d_5d9c_9b56;
extern char d_5d9c_9b88;
extern char d_5d9c_9b8a;
extern long d_5d9c_9a1c;
extern char (far *d_5d9c_9fba)[151];
extern char near *d_5d9c_08bc[];
extern int far d_2f3c_a08f[];
extern int far d_2f3c_addb[];
extern int far d_2f3c_7f93[][80];
extern int far d_2f3c_8033[];
extern unsigned char far d_2f3c_5905[];
extern unsigned char far d_5471_2c14[][10];
extern char far d_1f3e_97be[];
extern char far d_1f3e_9118[];
extern char far d_1f3e_abb0[];
extern unsigned char huge d_483b_0000[][1702];
extern char d_5d9c_9b50;
extern char d_5d9c_9b49;
extern int d_5d9c_9d3f;
extern char d_5d9c_9b4c;
extern int d_5d9c_9d65;
extern long far d_2f3c_74f3[][80];
extern char d_5d9c_9b4d;
extern char d_5d9c_9b4b;
extern char d_5d9c_9b4a;
extern int d_5d9c_9dcb;
extern int d_5d9c_9d3b;
extern int d_5d9c_9d39;
extern int d_5d9c_9d37;
extern int d_5d9c_9d35;
extern char far d_1f3e_4262[];
extern char far d_1f3e_a50a[];
extern char far d_1f3e_f4d2[];
extern char far d_1f3e_8a72[];
extern char far d_1f3e_c648[];
extern char far d_1f3e_5be8[][0x6a6];
int f_992a_1d7c(int player);
int f_8352_3455(int player, int team);
extern unsigned char huge d_3e42_0000[][1702];
int f_14d2_13eb(int a, int b);
int f_14d2_144d(int a, int b);
long f_14d2_1400(long a, long b);
void f_8352_15e0(int p, char all);
void f_8352_36ab(int mode, int player);
int f_8352_3916(int mode, int value, int lo, int player);
extern int d_5d9c_a360;
extern long far *d_5d9c_a058;
extern int d_5d9c_9ba9;
extern int d_5d9c_9d69;
extern int d_5d9c_9d43;
extern int d_5d9c_9d5f;
extern char d_5d9c_9b55;
extern char d_5d9c_9b75;
extern long d_5d9c_9a18;
extern long d_5d9c_9a14;
extern long d_5d9c_9a10;
extern long d_5d9c_9a0c;
extern int d_5d9c_9d33;
extern int d_5d9c_9d31;
extern int d_5d9c_9d2f;
extern int d_5d9c_9d2d;
extern int d_5d9c_9d2b;
extern int d_5d9c_9d29;
extern int d_5d9c_9d27;
extern float d_5d9c_9aac;
extern float d_5d9c_9aa8;
extern float d_5d9c_9aa4;
extern float d_5d9c_9aa0;
extern float d_5d9c_9a9c;
extern float d_5d9c_9a98;
extern char d_5d9c_9b48;
extern char far d_1f3e_9e64[];
extern int far d_2f3c_9343[];
extern int far d_2f3c_85f7[];
extern unsigned char far d_2f3c_5e19[][650];
extern float far d_1f36_0000[];
extern int far d_1f33_0000[];
int f_8352_3565(int player, int team);
void f_8352_4556(int player, int a);
unsigned f_14d2_09ce(char far *s, char far *set);
int f_14d2_0c2a(int n);
void f_14d2_0c66(int ticks);
void f_14d2_0609(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
char far *f_14d2_0d40(void);
void f_1680_2867(float x, float y, int bg, int fg, int w, char far *s);
void f_1680_27aa(int x, int y, int colour, char far *s);
void f_1680_2d78(float x, float y, int colour, char far *s);
void f_1680_1f06(char all);
void f_992a_124c(int player);
void f_992a_0f10(int p);
void f_a1c3_3505(int a);
void f_a1c3_2d08(int a, float x, float y, int c, int d, int e, char far *s);
int f_a1c3_3298(int a);
void f_a1c3_30b1(int a, char b);
extern int d_5d9c_9d25;
extern int d_5d9c_9d4d;
extern int d_5d9c_9d23;
extern int d_5d9c_9d63;
extern int d_5d9c_9eef;
extern int d_5d9c_a330;
extern char (far *d_5d9c_9fb2)[151];
extern int d_5d9c_9d3d;
extern char d_5d9c_9b47;
extern int d_5d9c_9d81;
extern int d_5d9c_9f69;
extern int d_5d9c_a354;
extern int d_5d9c_a34c;
extern char (far *d_5d9c_9fc6)[80];
extern int (far *d_5d9c_a00a)[300];
extern int d_5d9c_9ecd;
extern int d_5d9c_9f59;
extern int d_5d9c_9f81;
extern int d_5d9c_9d21;
extern int d_5d9c_9bcb;
extern int d_5d9c_9d1f;
extern int d_5d9c_9d1d;
extern int d_5d9c_a362;
extern int far *d_5d9c_a060;
extern int d_5d9c_9d1b;
extern int d_5d9c_9e9b;
extern int d_5d9c_9f29;
extern char d_5d9c_9b46;
extern int d_5d9c_9d19;
extern int d_5d9c_9f91;
extern int d_5d9c_9f57;
extern unsigned char far d_2f3c_5167[];
extern int far d_2f3c_1d94[][16];
extern unsigned char far d_1f3e_fb78[];
extern int far d_483b_9f90[];
char far *f_a1c3_24bb(int a, int b);
char f_8352_21e4(int p, int team, int n);
int f_8352_23a4(int a, int b);
void f_1680_183d(int a, int b, int line);
void f_1680_2ea0(float x, float y, int bg, int fg, int w, char far *s);
struct opt { char far *s; unsigned char a, b; int w; };
extern long d_5d9c_9a08;
extern long d_5d9c_9a58;
extern char d_5d9c_9b42;
extern char d_5d9c_9b43;
extern char d_5d9c_9b44;
extern char d_5d9c_9b45;
extern unsigned char d_5d9c_9b95;
extern int d_5d9c_9d0b;
extern int d_5d9c_9d0d;
extern int d_5d9c_9d0f;
extern int d_5d9c_9d11;
extern int d_5d9c_9d13;
extern int d_5d9c_9d15;
extern int d_5d9c_9d17;
extern int d_5d9c_9d71;
extern int d_5d9c_9d95;
extern int d_5d9c_9d9b;
extern int d_5d9c_9e8b;
extern int d_5d9c_9f55;
extern int d_5d9c_9f63;
extern char far d_1f3e_3f90[];
extern char far d_1f3e_fb76[];
extern float far d_2f3c_1cf4[];
extern unsigned char far d_5739_00a4[];
void f_9100_06bc(void);
void f_9100_23c7(void);
void f_9100_243d(int a, char c);
void f_9100_24d0(int a, char c, int i, int n);
char far *f_a1c3_229c(int manager, char full);
void f_a1c3_5c9f(int team, char far *title, char far *text);
extern char d_5d9c_9b12;
extern char d_5d9c_9b3b;
extern char d_5d9c_9b3c;
extern char d_5d9c_9b3d;
extern char d_5d9c_9b3e;
extern char d_5d9c_9b3f;
extern char d_5d9c_9b40;
extern char d_5d9c_9b41;
extern int d_5d9c_9ba7;
extern int d_5d9c_9cf3;
extern int d_5d9c_9cf5;
extern int d_5d9c_9cf7;
extern int d_5d9c_9cf9;
extern int d_5d9c_9cfb;
extern int d_5d9c_9cfd;
extern int d_5d9c_9cff;
extern int d_5d9c_9d01;
extern int d_5d9c_9d03;
extern int d_5d9c_9d05;
extern int d_5d9c_9d07;
extern int d_5d9c_9d09;
extern int d_5d9c_9d4b;
extern int d_5d9c_9d8d;
extern int d_5d9c_9dd5;
extern int d_5d9c_9de9;
extern int d_5d9c_9e1b;
extern int d_5d9c_9ee7;
extern int d_5d9c_9ef1;
extern int d_5d9c_9ef3;
extern int d_5d9c_9f19;
extern int d_5d9c_9f49;
extern int d_5d9c_9f4f;
extern int d_5d9c_9f61;
extern int d_5d9c_9f75;
extern char far d_1f3e_3f18[];
extern char far d_1f3e_3f40[];
extern int far d_2f3c_422b[];
extern int far d_2f3c_473f[];
extern unsigned char far d_2f3c_53f1[];
extern unsigned char far d_2f3c_567b[];
extern unsigned char far d_2f3c_5b8f[];
extern unsigned char far d_2f3c_632d[];
extern unsigned char far d_2f3c_6841[][650];
extern unsigned char far d_2f3c_7269[];
extern int far d_2f3c_7e53[];
extern int far d_2f3c_80d3[][80];
extern int far d_483b_9f8e[];
extern unsigned char far d_5739_01ec[];
extern unsigned char far d_5739_13dc[];
void f_1680_0b5b(int t);
void f_67ee_0622(int div);
void f_67ee_5641(int team);
extern int d_5d9c_9f67;
extern char d_5d9c_9b8d;
extern int d_5d9c_9ce9;
extern int d_5d9c_9dbd;
extern int d_5d9c_9cbf;
extern int d_5d9c_9f5f;
extern int d_5d9c_9bbf;
extern char d_5d9c_9b18;
extern int d_5d9c_9bbd;
extern int d_5d9c_9cf1;
extern int d_5d9c_9f6d;
extern int d_5d9c_9bc5;
extern int d_5d9c_9d9d;
extern char d_5d9c_9b17;
extern int d_5d9c_9ced;
extern int d_5d9c_9ceb;
extern char d_5d9c_9b32;
extern char d_5d9c_9b31;
extern char d_5d9c_9b39;
extern int d_5d9c_9f51;
extern char far d_1f3e_5918[][80];
extern char far d_1f3e_0ab4[][101];
extern char far d_1f3e_2b0e[];
extern char far d_1f3e_300e[];
void f_992a_424a(int p);
extern char d_5d9c_9b11;
extern char d_5d9c_9b36;
extern char d_5d9c_9b37;
extern char d_5d9c_9b38;
extern int d_5d9c_9bbb;
extern int d_5d9c_9cdd;
extern int d_5d9c_9cdf;
extern int d_5d9c_9ce3;
extern int d_5d9c_9ce5;
extern int d_5d9c_9ce7;
extern int d_5d9c_9f4d;
extern char far d_1f3e_3ec8[];
extern char far d_1f3e_51b6[];
extern char far d_1f3e_53e6[];
extern char far d_1f3e_5634[];
extern int far d_483b_a372[][26];
extern char far * far d_5471_17f4[];
extern unsigned char far d_5739_0000[][82];
extern unsigned char far d_5739_023e[];
struct staffbox { /* 6-byte entries at 5d9c:62ea */ unsigned char x1, y1; int x2; unsigned char y2, colour; };
struct staffpanel { /* 10-byte entries at 5d9c:6308 */ float x, y; unsigned char a, b; };
void f_67ee_5ab6(float x, int team, char far *title);
void f_14d2_0722(int c);
void f_14d2_075a(int x1, int y1, int x2, int y2);
int f_14d2_0ac1(void);
int f_14d2_0ab9(void);
int f_a1c3_20c5(int team);
void f_7eeb_165b(int team, int delta);
extern int d_5d9c_9f5d;
extern char d_5d9c_9b3a;
extern char d_5d9c_9b35;
extern char d_5d9c_9b34;
extern char d_5d9c_9b33;
extern int d_5d9c_9cdb;
extern int d_5d9c_9cd9;
extern int d_5d9c_9cd7;
extern int d_5d9c_9cd5;
extern int d_5d9c_9cd3;
extern int d_5d9c_9f85;
extern int d_5d9c_9e0d;
extern long d_5d9c_9a04;
extern long d_5d9c_9a00;
extern int far d_2f3c_7c73[][80];
extern char far d_1f3e_3e28[];
extern int far d_5471_2b4c[][5];
extern unsigned char far d_5739_0148[];
extern int far d_5739_1d2a[][2][94];
void f_1680_312c(float x, float y, int bg, int fg, int w, int len, char far *s);
extern char far d_1f3e_3dd8[];
extern char *d_5d9c_00aa[];
extern int d_5d9c_9cd1;


void f_88c9_0000(int player, int club, int v)
{
    char buf[320];

    f_8352_2fed(player, d_483b_0000[18][player]);
    if (d_5d9c_9b5f) {
        sprintf(buf, "%s signs the contract", f_a1c3_2243(player));
        f_8352_3de6(6, buf);
        d_2f3c_a08f[player] = (d_5d9c_9fa7 + d_5d9c_9d7f) * 100 + f_1680_0577(d_5d9c_9fab);
        d_2f3c_addb[player] = d_5d9c_9d7d;
    } else {
        sprintf(buf, "%04d ", player);
        d_5d9c_9fba = f_14d2_16bc(d_5d9c_a334, 1);
        strcat(d_5d9c_9fba[v], buf);
    }
}

char f_88c9_00f0(int player, int team)
{
    d_5d9c_9b4e = 0;
    if (f_1680_0003(d_483b_0000[18][player]))
        f_88c9_02cc(player, team);
    else if (d_1f3e_97be[player] == 0 && f_1680_031f(player) == 0 &&
             (d_2f3c_8033[d_483b_0000[18][player]] < 650 || d_2f3c_a08f[player] == 0)) {
        if (d_483b_0000[23][player] > 1 || d_1f3e_9118[player] != 0 || d_2f3c_a08f[player] == 0 ||
            d_5471_2c14[d_2f3c_5905[d_2f3c_7f93[0][d_483b_0000[18][player]]]][d_3e42_0000[17][player]] > 7 ||
            fabs(f_1680_00fb(player) - f_1680_0037(d_483b_0000[18][player])) > 3.0 ||
            d_2f3c_a08f[player] / 100 - d_5d9c_9fa7 < 3)
            d_5d9c_9b4e = -1;
    }
    return d_5d9c_9b4e;
}

void f_88c9_02cc(int player, int team)
{
    char buf[320];

    do {
        d_5d9c_9b56 = 0;
        f_a1c3_27e4("Player Approach");
        f_1680_33a0(1.0, 4.0, d_483b_0000[18][player]);
        sprintf(buf, "%s want %s", (char far *)d_5d9c_08bc[team], f_a1c3_213c(player));
        f_88c9_243e(7, buf);
        if (f_1680_0003(team) == 0) {
            if (d_1f3e_abb0[player] == 0) {
                d_5d9c_9a1c = f_88c9_26a0(f_14d2_1462(f_88c9_12b3(player, team), f_a1c3_36c4(team)), -1);
                sprintf(buf, "They would offer about %ld", d_5d9c_9a1c);
            } else
                strcpy(buf, "He is on a free transfer");
            f_88c9_243e(9, buf);
        }
        do {
            d_5d9c_9b8a = -1;
            f_1680_150c(f_1680_0003(team) ? 10 : 12, "", "View Factfile|Allow Approach|Refuse Approach|");
            f_1680_18b2(2);
            if (d_5d9c_9faf == 0) {
                do
                    f_a1c3_5e7a(player, -1, 0);
                while (!d_5d9c_9b88);
                d_5d9c_9b88 = 0;
                d_5d9c_9b56 = -1;
            } else if (d_5d9c_9faf == 1) {
                d_5d9c_9b4e = -1;
            } else if (d_5d9c_9faf == 2) {
                if (d_2f3c_a08f[player] > 0) {
                    if (f_1680_0003(d_483b_0000[18][player]) == 0) {
                        sprintf(buf, "%s refused", (char far *)d_5d9c_08bc[team]);
                        f_88c9_249e(buf);
                    }
                } else {
                    f_88c9_249e("He is not under contract");
                    f_88c9_249e("You cannot refuse their approach");
                    d_5d9c_9b8a = 0;
                }
            }
        } while (!d_5d9c_9b8a);
    } while (d_5d9c_9b56 != 0);
}

char f_88c9_04fb(int player)
{
    d_5d9c_9b50 = 0;
    d_5d9c_9dcb = 0;
    if (d_1f3e_a50a[player] == 0) {
        d_5d9c_9d3b = d_483b_0000[23][player] + 0;   /* "+ 0": the plain assignment adds the player before the row */
        d_5d9c_9d39 = d_483b_0000[18][player];
        d_5d9c_9b4d = f_1680_0003(d_5d9c_9d39);
        if (d_5d9c_9fab > 14 && d_1f3e_f4d2[player] == 0) {
            d_5d9c_9b4b = d_1f3e_8a72[player] == 0 || f_992a_1d7c(player) > 10;
            d_5d9c_9b4a = d_483b_0000[20][player] == 0 && d_483b_0000[21][player] > 90;
            if (d_5d9c_9b4b && d_5d9c_9b4a && d_5d9c_9d3b == 1) {
                strcpy(d_1f3e_4262, "feels he should be in the team");
                d_5d9c_9b50 = -1;
                d_5d9c_9dcb = 1;
            }
            if (d_5d9c_9b4b && d_5d9c_9b4a && d_5d9c_9d3b > 1 &&
                d_483b_0000[17][player] > 30 - (d_1f3e_5be8[0][player] << 2)) {
                strcpy(d_1f3e_4262, "wants first team football");
                d_5d9c_9b50 = -1;
                d_5d9c_9dcb = 1;
            }
        }
        if (d_2f3c_8033[d_5d9c_9d39] == 650) {
            d_5d9c_9d37 = 0;
            d_5d9c_9d35 = 0;
        } else {
            d_5d9c_9d37 = d_5471_2c14[d_3e42_0000[17][player]][d_2f3c_5905[d_2f3c_7f93[0][d_5d9c_9d39]]];
            d_5d9c_9d35 = d_5471_2c14[d_3e42_0000[17][player]][d_2f3c_5905[d_2f3c_8033[d_5d9c_9d39]]];
        }
        if (f_1680_00fb(player) - f_1680_0037(d_5d9c_9d39) > (d_2f3c_a08f[player] > 0 ? 8 : 4) &&
            f_1680_0037(d_5d9c_9d39) < 15.0) {
            strcpy(d_1f3e_4262, "wants to move to a better club");
            d_5d9c_9b50 = -1;
        } else if (d_5d9c_9d37 > 8) {
            if (d_5d9c_9b4d) strcpy(d_1f3e_4262, "is not happy working for you"); else strcpy(d_1f3e_4262, "cannot work with his manager");
            0;
            d_5d9c_9b50 = -1;
        } else if (d_5d9c_9d35 > 8) {
            sprintf(d_1f3e_4262, "cannot work with %s coach", d_5d9c_9b4d ? "the" : "his");
            d_5d9c_9b50 = -1;
        } else if (d_2f3c_addb[player] < f_8352_3455(player, d_5d9c_9d39) * 0.8 && d_2f3c_a08f[player] > 0) {
            strcpy(d_1f3e_4262, "wants higher wages");
            d_5d9c_9b50 = -1;
        }
    }
    if (d_1f3e_c648[player]) {
        strcpy(d_1f3e_4262, "feels he's been fined unfairly");
        d_5d9c_9b50 = -1;
    }
    return d_5d9c_9b50;
}

char f_88c9_08dc(int player)
{
    d_5d9c_9b4c = 0;
    if (f_1680_0003(d_483b_0000[18][player]))
        f_88c9_0ad3(player);
    else if (d_2f3c_8033[d_483b_0000[18][player]] < 650 || d_2f3c_a08f[player] == 0) {
        d_5d9c_9d65 = d_5471_2c14[d_2f3c_5905[d_2f3c_7f93[0][d_483b_0000[18][player]]]][d_3e42_0000[17][player]];
        if (d_483b_0000[23][player] == 3 || d_2f3c_a08f[player] == 0 || d_5d9c_9d65 > 7 ||
            fabs(f_1680_00fb(player) - f_1680_0037(d_483b_0000[18][player])) > 3.0 ||
            (d_483b_0000[23][player] == 2 && d_2f3c_74f3[0][d_483b_0000[18][player]] < 0))
            d_5d9c_9b4c = -1;
    }
    return d_5d9c_9b4c;
}

void f_88c9_0ad3(int player)
{
    char buf[320];

    do {
        d_5d9c_9b56 = 0;
        f_a1c3_27e4("Player request");
        f_1680_33a0(1.0, 4.0, d_483b_0000[18][player]);
        sprintf(buf, "%s wants to leave", f_a1c3_213c(player));
        f_88c9_243e(7, buf);
        sprintf(buf, "He %s", d_1f3e_4262);
        f_88c9_243e(9, buf);
        f_1680_150c(12, "", "View Factfile|Refuse Request|List Him|");
        do {
            d_5d9c_9b8a = -1;
            f_1680_18b2(2);
            d_5d9c_9d3f = d_5d9c_9faf;
            if (d_5d9c_9d3f == 0) {
                do
                    f_a1c3_5e7a(player, -1, 0);
                while (!d_5d9c_9b88);
                d_5d9c_9b88 = 0;
                d_5d9c_9b56 = -1;
            } else if (d_5d9c_9d3f == 1) {
                if (d_2f3c_a08f[player] == 0) {
                    f_88c9_249e("He is a free agent");
                    f_88c9_249e("You cannot prevent him leaving");
                    d_5d9c_9b8a = 0;
                } else {
                    sprintf(buf, "%s told to stay", f_a1c3_2243(player));
                    f_88c9_249e(buf);
                }
            } else if (d_5d9c_9d3f == 2) {
                sprintf(buf, "%s now transfer listed", f_a1c3_2243(player));
                f_88c9_249e(buf);
                d_5d9c_9b4c = -1;
            }
        } while (!d_5d9c_9b8a);
    } while (d_5d9c_9b56 != 0);
}

char f_88c9_0c92(int player)
{
    if (f_1680_0003(d_483b_0000[18][player]))
        f_88c9_0cdc(player);
    else if (f_8352_462d(player) == 0)
        return -1;
    return 0;
}

void f_88c9_0cdc(int player)
{
    char buf[320];

    do {
        d_5d9c_9b56 = 0;
        f_a1c3_27e4("Player request");
        f_1680_33a0(1.0, 4.0, d_483b_0000[18][player]);
        sprintf(buf, "%s now wants to stay", f_a1c3_213c(player));
        f_88c9_243e(7, buf);
        f_1680_150c(10, "", "View Factfile|Remove From List|Refuse Request|");
        f_1680_18b2(2);
        d_5d9c_9d3f = d_5d9c_9faf;
        if (d_5d9c_9d3f == 0) {
            do
                f_a1c3_5e7a(player, -1, 0);
            while (!d_5d9c_9b88);
            d_5d9c_9b88 = 0;
            d_5d9c_9b56 = -1;
        } else if (d_5d9c_9d3f == 1) {
            sprintf(buf, "%s removed from list", f_a1c3_2243(player));
            f_88c9_249e(buf);
            d_5d9c_9b49 = -1;
        } else if (d_5d9c_9d3f == 2) {
            sprintf(buf, "%s remains listed", f_a1c3_2243(player));
            f_88c9_249e(buf);
        }
    } while (d_5d9c_9b56 != 0);
}

void f_88c9_0e2d(int player, char c)
{
    long v;

    v = f_88c9_0f77(player);
    d_5d9c_a058 = f_14d2_16bc(d_5d9c_a360, 1);
    d_5d9c_a058[player] = v;
    d_1f3e_abb0[player] = d_5d9c_a058[player] == 0 ? -1 : 0;
    d_1f3e_9118[player] = -1;
    d_1f3e_9e64[player] = c;
    d_3e42_0000[11][player] = 0;
}

void f_88c9_0ec3(int player)
{
    d_1f3e_9118[player] = 0;
    d_1f3e_9e64[player] = 0;
    d_1f3e_abb0[player] = 0;
    d_3e42_0000[11][player] = 0;
    f_8352_15e0(player, 0);
}

void f_88c9_0f13(int player)
{
    long v;

    v = f_88c9_0f77(player);
    d_5d9c_a058 = f_14d2_16bc(d_5d9c_a360, 1);
    d_5d9c_a058[player] = v;
    d_1f3e_abb0[player] = d_5d9c_a058[player] == 0 ? -1 : 0;
}

long f_88c9_0f77(int player)
{
    char buf[320];

    if (f_1680_0003(d_483b_0000[18][player])) {
        d_5d9c_9ba9 = 1;
        d_5d9c_9d69 = 7;
        f_8352_36ab(1, player);
        d_5d9c_9a18 = f_88c9_12b3(player, d_483b_0000[18][player]);
        if (d_1f3e_9118[player]) {
            if (d_5d9c_9a18 > 0)
                sprintf(buf, "%s is valued at %ld", f_a1c3_2243(player), d_5d9c_9a18);
            else
                sprintf(buf, "%s on a free transfer", f_a1c3_2243(player));
        } else
            sprintf(buf, "%s not yet valued", f_a1c3_2243(player));
        f_8352_3de6(1, buf);
        do {
            d_5d9c_9b75 = -1;
            d_5d9c_9d43 = d_483b_0000[18][player];
            d_5d9c_9d5f = f_8352_3916(1, d_5d9c_9a18 / 1000, 0, player);
            if (d_5d9c_9b55) {
                do
                    f_a1c3_5e7a(player, -1, 0);
                while (!d_5d9c_9b88);
                d_5d9c_9b88 = 0;
                d_5d9c_9b75 = 0;
                f_8352_36ab(1, player);
            }
            d_5d9c_9a18 = (long)d_5d9c_9d5f * 1000;
            if (d_5d9c_9b75) {
                d_5d9c_9a14 = f_88c9_12b3(player, -1) * 0.75;
                if (d_5d9c_9a18 < d_5d9c_9a14 && d_5d9c_9a14 >= 5000) {
                    f_8352_3de6(1, "The board expect more for him");
                    d_5d9c_9b75 = 0;
                } else if (f_88c9_12b3(player, -1) * 3 < d_5d9c_9a18) {
                    sprintf(buf, "He's not worth %ld", d_5d9c_9a18);
                    f_8352_3de6(1, buf);
                    d_5d9c_9b75 = 0;
                }
            }
        } while (!d_5d9c_9b75);
        if (d_5d9c_9a18 > 0)
            sprintf(buf, "%s is valued at %ld", f_a1c3_2243(player), d_5d9c_9a18);
        else
            sprintf(buf, "%s is given a free transfer", f_a1c3_2243(player));
        f_8352_3de6(6, buf);
    } else {
        d_5d9c_9a18 = f_88c9_12b3(player, d_483b_0000[18][player]);
        if (10000 - (d_483b_0000[23][player] == 1 ? 5000 : 0) > d_5d9c_9a18)
            d_5d9c_9a18 = 0;
    }
    return d_5d9c_9a18;
}

long f_88c9_12b3(int p, int n)
{
    if (p != d_5d9c_9d33) {
        d_5d9c_9d31 = f_14d2_144d(d_3e42_0000[5][p], 30);
        if (d_3e42_0000[5][p] > 0)
            d_5d9c_9aac = d_2f3c_9343[p] / (float)d_3e42_0000[5][p] * 2.0;
        else
            d_5d9c_9aac = 0;
        d_5d9c_9d2f = f_14d2_144d(d_3e42_0000[0][p], 30);
        if (d_3e42_0000[0][p] > 0)
            d_5d9c_9aa8 = d_2f3c_85f7[p] / (float)d_3e42_0000[0][p] * 2.0;
        else
            d_5d9c_9aa8 = 0;
        d_5d9c_9d2d = (d_483b_0000[0][p] * (30 - d_5d9c_9d31) * 0.1 + d_5d9c_9d31 * d_5d9c_9aac) / 30.0 * 0.5
                    + (d_483b_0000[0][p] * (30 - d_5d9c_9d2f) * 0.1 + d_5d9c_9d2f * d_5d9c_9aa8) / 30.0 * 0.5;
        d_5d9c_9d2d = f_14d2_13eb(f_14d2_144d(d_5d9c_9d2d, 20), 1);
        d_5d9c_9aa4 = 0.9 - d_1f3e_5be8[0][p] / 10.0 - d_1f3e_5be8[1][p] / 10.0 - d_1f3e_5be8[2][p] / 10.0
                    - d_1f3e_5be8[3][p];
        d_5d9c_9aa0 = 0.9 - d_1f3e_5be8[4][p] / 10.0 - d_1f3e_5be8[5][p] / 10.0 - d_1f3e_5be8[6][p] / 10.0;
        d_5d9c_9a9c = d_483b_0000[2][p] / 10.0 * 0.0375 + 0.7
                    + d_483b_0000[1][p] / 10.0 * 0.06125
                    + d_483b_0000[3][p] / 10.0 * 0.025
                    + d_483b_0000[5][p] / 10.0 * 0.05
                    + d_483b_0000[6][p] / 10.0 * 0.075
                    + d_483b_0000[7][p] / 10.0 * 0.1
                    + d_483b_0000[4][p] / 10.0 * 0.025;
        d_5d9c_9b48 = d_1f3e_5be8[18][p] && d_1f3e_5be8[19][p] == 0;
        d_5d9c_9a10 = d_1f36_0000[d_483b_0000[17][p] - 16] * d_1f33_0000[d_5d9c_9d2d - 1]
                    * d_5d9c_9aa4 * d_5d9c_9aa0 * d_5d9c_9a9c * 550.0 * (d_5d9c_9b48 ? 1.25 : 1);
        switch (d_483b_0000[18][p] / 20) {
        case 1:
            d_5d9c_9a10 = d_5d9c_9a10 / 1.5;
            break;
        case 2:
            d_5d9c_9a10 = d_5d9c_9a10 / 2;
            break;
        case 3:
            d_5d9c_9a10 = d_5d9c_9a10 / 3;
            break;
        }
    }
    if (n == -1)
        d_5d9c_9a0c = (d_483b_0000[23][p] == 1 ? 1.5 : 1) * d_5d9c_9a10;
    else {
        if (d_483b_0000[18][p] == n) {
            if (d_1f3e_9118[p] == 0) {
                d_5d9c_9d27 = f_14d2_13eb(d_2f3c_a08f[p] / 100 - d_5d9c_9fa7, 0);
                d_5d9c_9a98 = d_5d9c_9d27 / 5.0 + (d_2f3c_a08f[p] == 0 ? 0.5 : 0);
                d_5d9c_9a0c = ((d_483b_0000[23][p] == 1 ? 1.5 : 1) + d_5d9c_9a98) * d_5d9c_9a10;
            } else {
                d_5d9c_a058 = f_14d2_16bc(d_5d9c_a360, 0);
                d_5d9c_9a0c = d_5d9c_a058[p];
            }
        } else {
            d_5d9c_9d27 = f_14d2_13eb(d_2f3c_a08f[p] / 100 - d_5d9c_9fa7, 0);
            d_5d9c_9a98 = d_5d9c_9d27 / 5.0 + (d_2f3c_a08f[p] == 0 ? 0.5 : 0);
            d_5d9c_9a0c = ((d_483b_0000[23][p] == 1 ? 1.5 : 1) + d_5d9c_9a98) * d_5d9c_9a10;
        }
        if (d_1f3e_9118[p] == 0 && d_483b_0000[17][p] < (d_1f3e_5be8[0][p] ? 31 : 27)) {
            d_5d9c_9d2b = f_14d2_13eb(10.0 - d_2f3c_5e19[0][d_2f3c_7f93[0][n]] * 0.05, 1);
            d_5d9c_9d29 = f_14d2_13eb(f_14d2_144d(d_483b_0000[9][p] * 0.1 + p % d_5d9c_9d2b - d_5d9c_9d2b * 0.5, 20), 1);
            d_5d9c_9a0c = d_5d9c_9a0c * 0.95 + d_1f33_0000[d_5d9c_9d29 - 1] * 50L;
        }
    }
    if (d_1f3e_9118[p] == 0 || f_1680_0003(d_483b_0000[18][p]) == 0)
        d_5d9c_9a0c = f_88c9_26a0(d_5d9c_9a0c, -1);
    d_5d9c_9d33 = p;
    return f_14d2_1400(d_5d9c_9a0c, d_5d9c_9a0c ? 1000 : 0);
}

/* stub: chunk 1 */
void f_88c9_1b98(int player)
{
    char buf[320];

    d_5d9c_9ba9 = 1;
    d_5d9c_9d69 = 7;
    f_8352_36ab(3, player);
    d_5d9c_9d25 = d_2f3c_addb[player];
    sprintf(buf, "He gets %d per week", d_5d9c_9d25);
    f_8352_3de6(1, buf);
    d_5d9c_9d4d = f_8352_3565(player, d_483b_0000[18][player]);
    d_5d9c_9d23 = -1;
    do {
        d_5d9c_9b75 = -1;
        d_5d9c_9d63 = d_5d9c_9d23 == -1 ? d_5d9c_9d25 : d_5d9c_9d23;
        d_5d9c_9d5f = f_8352_3916(3, d_5d9c_9d63, 100, player);
        if (d_5d9c_9b55) {
            do
                f_a1c3_5e7a(player, -1, 0);
            while (!d_5d9c_9b88);
            d_5d9c_9b88 = 0;
            d_5d9c_9b75 = 0;
            f_8352_36ab(3, player);
        }
        d_5d9c_9d23 = d_5d9c_9d5f;
        if (d_5d9c_9b75) {
            if (d_5d9c_9d23 < d_5d9c_9d25) {
                f_8352_3de6(1, "He refuses lower pay");
                d_5d9c_9b75 = 0;
            } else if (d_5d9c_9d23 > d_5d9c_9d4d) {
                f_8352_3de6(1, "The board refuse to spend that per week");
                d_5d9c_9b75 = 0;
            }
        }
    } while (!d_5d9c_9b75);
    if (d_5d9c_9d23 != d_5d9c_9d25)
        strcpy(buf, "He accepts the pay rise");
    else
        sprintf(buf, "His wages stay at %d per week", d_5d9c_9d23);
    f_8352_3de6(6, buf);
    d_2f3c_addb[player] = d_5d9c_9d23;
    d_5d9c_9eef = d_2f3c_7f93[0][d_483b_0000[18][player]] - 646;
    sprintf(buf, "%04d", player);
    d_5d9c_9fb2 = f_14d2_16bc(d_5d9c_a330, 0);
    if (f_14d2_09ce(d_5d9c_9fb2[d_5d9c_9eef], buf) == 0
        && d_5d9c_9d25 + f_14d2_0c2a(100) + 50 <= d_5d9c_9d23
        && f_14d2_0c2a(4) == 0
        && d_483b_0000[0][player] > d_483b_0000[15][player]) {
        d_483b_0000[15][player] = d_483b_0000[0][player];
        if (f_1680_0003(d_483b_0000[18][player]) == 0 && d_483b_0000[20][player] == 0)
            f_992a_124c(player);
    }
    sprintf(buf, "%04d ", player);
    d_5d9c_9fb2 = f_14d2_16bc(d_5d9c_a330, 1);
    strcat(d_5d9c_9fb2[d_5d9c_9eef], buf);
}

void f_88c9_1edc(int player, char flag)
{
    if (flag) {
        switch (d_3e42_0000[17][player]) {
        case 5: case 7: case 8:
            d_5d9c_9d3d = 0;
            break;
        case 1:
            d_5d9c_9d3d = 1;
            break;
        case 0: case 2: case 3:
            d_5d9c_9d3d = 2;
            break;
        case 4: case 6: case 9:
            d_5d9c_9d3d = 3;
            break;
        }
    } else {
        switch (d_3e42_0000[17][player]) {
        case 0: case 1: case 5: case 7: case 8:
            d_5d9c_9d3d = f_14d2_0c2a(2) + 2;
            break;
        case 2: case 3: case 4: case 6: case 9:
            d_5d9c_9d3d = 3;
            break;
        }
    }
    if (d_5d9c_9d3d == 0 && f_14d2_0c2a(3) == 0)
        d_5d9c_9d3d = 1;
    else if (d_5d9c_9d3d == 1 && f_14d2_0c2a(3) == 0)
        d_5d9c_9d3d = 2;
    else if (d_5d9c_9d3d == 2 && f_14d2_0c2a(3) == 0)
        d_5d9c_9d3d = 1;
    else if (d_5d9c_9d3d == 3 && f_14d2_0c2a(3) == 0)
        d_5d9c_9d3d = 2;
    if (d_5d9c_9d3d == 0) {
        d_483b_0000[15][player] = f_14d2_144d(d_483b_0000[15][player] + f_14d2_0c2a(25), d_483b_0000[9][player] + 25);
        if (d_483b_0000[20][player] == 0 && f_1680_0003(d_483b_0000[18][player]) == 0)
            f_992a_124c(player);
    } else if (d_5d9c_9d3d == 2) {
        d_483b_0000[15][player] = f_14d2_13eb(d_483b_0000[15][player] - f_14d2_0c2a(25), 10);
        if (d_1f3e_8a72[player] && f_1680_0003(d_483b_0000[18][player]) == 0)
            f_992a_0f10(player);
    } else if (d_5d9c_9d3d == 3)
        d_1f3e_c648[player] = -1;
}

long f_88c9_2177(int player)
{
    long v;

    v = f_88c9_12b3(player, -1);
    if (v <= 100000L)
        return 200;
    if (v <= 300000L)
        return 300;
    if (v <= 500000L)
        return 400;
    if (v <= 1000000L)
        return 500;
    if (v <= 2000000L)
        return 600;
    return 800;
}

void f_88c9_2207(int player, int team, char far *s)
{
    if (d_5d9c_9b47 || d_5d9c_9d81 % 18 == 0) {
        f_a1c3_27e4("Transfer News");
        f_1680_2867(1.125, 4.0, 6, 3, 66, "Player");
        f_1680_2867(9.625, 4.0, 6, 3, 66, "From");
        f_1680_2867(18.125, 4.0, 6, 3, 168, "To");
        if (d_5d9c_9b47 && d_5d9c_9d81 % 18 > 0)
            for (d_5d9c_9f69 = d_5d9c_9d81 / 18 * 18; d_5d9c_9f69 <= d_5d9c_9d81 - 1; d_5d9c_9f69++)
                f_88c9_237d(d_5d9c_9f69);
    }
    d_5d9c_9fc6 = f_14d2_16bc(d_5d9c_a354, 1);
    strcpy(d_5d9c_9fc6[d_5d9c_9d81], s);
    d_5d9c_a00a = f_14d2_16bc(d_5d9c_a34c, 1);
    d_5d9c_a00a[0][d_5d9c_9d81] = player;
    d_5d9c_a00a[1][d_5d9c_9d81] = team;
    f_88c9_237d(d_5d9c_9d81);
    d_5d9c_9d81++;
    d_5d9c_9b47 = 0;
}

void f_88c9_237d(int n)
{
    d_5d9c_a00a = f_14d2_16bc(d_5d9c_a34c, 0);
    d_5d9c_9ecd = n % 18 * 8 + 48;
    f_1680_27aa(17, d_5d9c_9ecd, 1, f_a1c3_2243(d_5d9c_a00a[0][n]));
    f_1680_27aa(85, d_5d9c_9ecd, 6, d_5d9c_08bc[d_5d9c_a00a[1][n]]);
    d_5d9c_9fc6 = f_14d2_16bc(d_5d9c_a354, 1);
    f_1680_27aa(153, d_5d9c_9ecd, 2, d_5d9c_9fc6[n]);
}

void f_88c9_243e(int line, char far *s)
{
    if (line == 4)
        d_5d9c_9f59 = 1;
    else if (line == 7)
        d_5d9c_9f59 = 6;
    else if (line == 9)
        d_5d9c_9f59 = 9;
    f_1680_2d78(2.0, line, d_5d9c_9f59, s);
}

void f_88c9_249e(char far *s)
{
    f_1680_2d78(2.0, 22.5, 1, s);
    f_14d2_0c66(75);
    f_14d2_0609(4, 175, 316, 190);
}

void f_88c9_24f1(char far *s)
{
    char buf[80];

    f_a1c3_27e4("");
    d_5d9c_9f81 = f_14d2_09ce(s, "|");
    if (d_5d9c_9f81 == 0)
        f_1680_2d78(-1.0, 12.5, 6, s);
    else {
        strcpy(buf, s);
        buf[d_5d9c_9f81 - 1] = 0;
        f_1680_2d78(-1.0, 11.5, 6, buf);
        strcpy(buf, s + d_5d9c_9f81);
        f_1680_2d78(-1.0, 13.5, 6, buf);
    }
    f_a1c3_3505(0);
}

char f_88c9_25cc(void)
{
    f_1680_2d78(2.0, 22.5, 5, "Confirm");
    f_a1c3_2d08(2, 9.0, 22.5, 6, 2, 0, " Y ");
    f_a1c3_2d08(2, 13.0, 22.5, 6, 2, 0, " N ");
    do
        d_5d9c_9d21 = f_a1c3_3298(0);
    while (d_5d9c_9d21 <= 0);
    f_14d2_0609(4, 175, 316, 190);
    return d_5d9c_9d21 == 1 ? -1 : 0;
}

long f_88c9_26a0(long v, char c)
{
    long r;

    if (v < 10000L)
        r = 1000;
    else if (v < 100000L)
        r = c ? 10000 : 5000;
    else if (v < 1000000L)
        r = c ? 50000L : 10000L;
    else
        r = c ? 100000L : 25000L;
    return v / r * r;
}

long f_88c9_2744(long v)
{
    long r;

    if (v <= 100000L)
        r = 50000L;
    else if (v <= 500000L)
        r = 100000L;
    else if (v <= 1000000L)
        r = 250000L;
    else
        r = 500000L;
    return f_14d2_1400(v / r * r, v ? 50000L : 0L);
}

char far *f_88c9_27e8(long amount)
{
    char far *s;

    s = f_14d2_0d40();
    if (amount)
        sprintf(s, "%ld", amount);
    else
        strcpy(s, "Free");
    return s;
}

void f_88c9_2837(void)
{
    char buf[320];

    memset(d_483b_9f90, 0, 38);
    memset(d_1f3e_fb78, 0, 37);
    f_1680_1f06(0);
    if (d_5d9c_9bcb > -1) {
        d_5d9c_9d1f = d_2f3c_5167[d_5d9c_9bcb];
        do {
            f_a1c3_27e4("Find Player");
            f_1680_33a0(1.0, 4.0, d_5d9c_9d1f);
            f_1680_150c(7, "", "*Exit|Player Search|Transfer List|Shortlist|");
            f_1680_18b2(3);
            d_5d9c_9d1d = d_5d9c_9faf;
            if (d_5d9c_9d1d == 1) {
                memset(d_1f3e_fb78, 0, 37);
                d_5d9c_a060 = f_14d2_16bc(d_5d9c_a362, 1);
                memset(d_5d9c_a060, -1, 3402);
                f_88c9_2ef4(0, 6, 6, 3, "Positions", "Goalkeeper|Defender|Midfielder|Attacker|Right Sided|Left Sided|Central|");
                if (d_5d9c_9b88)
                    continue;
                f_88c9_2ef4(8, 15, 6, 3, "Requirements", "Passing|Tackling|Pace|Heading|Flair|Creativity|Influence|Stamina|");
                if (d_5d9c_9b88)
                    continue;
                f_88c9_2ef4(17, 22, 6, 3, "Approx Value", "0K - 100K|100K - 300K|300K - 500K|500K - 1M|1M - 2M|2M+|");
                if (d_5d9c_9b88)
                    continue;
                f_88c9_2ef4(24, 27, 6, 3, "Division", "First|Second|Third|Fourth|");
                if (d_5d9c_9b88)
                    continue;
                f_88c9_2ef4(29, 33, 6, 3, "Age", "16 - 20|20 - 24|24 - 30|30 - 33|33+|");
                if (d_5d9c_9b88)
                    continue;
                f_88c9_30b9("Player Search");
            } else if (d_5d9c_9d1d == 3) {
                d_5d9c_9eef = d_2f3c_7f93[0][d_5d9c_9d1f] - 646;
                d_5d9c_9d1b = -1;
                do {
                    d_5d9c_9e9b = d_2f3c_1d94[d_5d9c_9d1f][0];
                    if (d_5d9c_9e9b > 0) {
                        f_a1c3_27e4("Short List");
                        f_88c9_36df();
                        f_a1c3_2d08(2, 34.25, 1.25, 1, 8, 37, " REC");
                        f_a1c3_2d08(2, 1.25, 22.5, 1, 12, 72, "   DEL");
                        f_a1c3_2d08(2, 10.875, 22.5, 1, 4, 224, "            EXIT");
                        for (d_5d9c_9f29 = 1; d_5d9c_9f29 <= d_5d9c_9e9b; d_5d9c_9f29++)
                            f_88c9_39c4(d_2f3c_1d94[d_5d9c_9d1f][d_5d9c_9f29], d_5d9c_9f29);
                        f_88c9_3d41(0, 0);
                        d_5d9c_9b46 = 0;
                        do {
                            d_5d9c_9d19 = f_a1c3_3298(-1);
                            if ((d_5d9c_9d19 == 0 || d_5d9c_9d19 == 1 || d_5d9c_9d19 == 3) && d_5d9c_9b46) {
                                f_a1c3_30b1(2, 0);
                                d_5d9c_9b46 = 0;
                            } else if (d_5d9c_9d19 == 2 && d_5d9c_9b46 == 0) {
                                f_a1c3_30b1(2, -1);
                                d_5d9c_9b46 = -1;
                            }
                            if (d_5d9c_9d19 == 1)
                                f_88c9_3d41(0, -1);
                        } while (d_5d9c_9d19 != 3 && d_5d9c_9d19 < 4);
                        if (d_5d9c_9d19 == 3)
                            d_5d9c_9b8a = -1;
                        else if (d_5d9c_9d19 >= 4) {
                            d_5d9c_9f91 = d_2f3c_1d94[d_5d9c_9d1f][d_5d9c_9d19 - 3];
                            if (d_5d9c_9b46) {
                                d_2f3c_1d94[d_5d9c_9d1f][d_5d9c_9d19 - 3] = d_2f3c_1d94[d_5d9c_9d1f][d_2f3c_1d94[d_5d9c_9d1f][0]];
                                d_2f3c_1d94[d_5d9c_9d1f][0]--;
                                sprintf(buf, "%s removed", f_a1c3_2243(d_5d9c_9f91));
                                f_88c9_24f1(buf);
                                d_5d9c_9b8a = d_2f3c_1d94[d_5d9c_9d1f][0] == 0;
                            } else {
                                do {
                                    f_a1c3_5e7a(d_5d9c_9f91, d_5d9c_9d1f, -1);
                                    f_8352_4556(d_5d9c_9f91, d_5d9c_9f57);
                                } while (!d_5d9c_9b88);
                                d_5d9c_9b8a = d_2f3c_1d94[d_5d9c_9d1f][0] == 0;
                            }
                        }
                    } else {
                        f_88c9_24f1("Nobody shortlisted");
                        d_5d9c_9b8a = -1;
                    }
                } while (!d_5d9c_9b8a);
            } else if (d_5d9c_9d1d == 2) {
                memset(d_1f3e_fb78, 0, 37);
                d_5d9c_a060 = f_14d2_16bc(d_5d9c_a362, 1);
                memset(d_5d9c_a060, -1, 3402);
                d_1f3e_fb78[7] = -1;
                d_1f3e_fb78[16] = -1;
                d_1f3e_fb78[23] = -1;
                d_1f3e_fb78[28] = -1;
                d_1f3e_fb78[34] = -1;
                d_1f3e_fb78[35] = -1;
                f_88c9_30b9("Transfer List");
            }
        } while (d_5d9c_9d1d != 0);
    }
}

void f_88c9_2db1(int team)
{
    do {
        d_5d9c_9e9b = d_2f3c_1d94[team][0];
        if (d_5d9c_9e9b > 0) {
            f_a1c3_27e4("Short List");
            f_88c9_36df();
            f_a1c3_2d08(2, 1.25, 22.5, 1, 4, 0x12d, "                 EXIT");
            for (d_5d9c_9f29 = 1; d_5d9c_9f29 <= d_5d9c_9e9b; d_5d9c_9f29++)
                f_88c9_39c4(d_2f3c_1d94[team][d_5d9c_9f29], d_5d9c_9f29);
            do
                d_5d9c_9d19 = f_a1c3_3298(d_5d9c_9f63);
            while (d_5d9c_9d19 <= 0);
            if (d_5d9c_9d19 == 1)
                d_5d9c_9b8a = -1;
            else if (d_5d9c_9d19 >= 2) {
                d_5d9c_9f91 = d_2f3c_1d94[team][d_5d9c_9d19 - 1];
                do {
                    f_a1c3_5e7a(d_5d9c_9f91, team, -1);
                    f_8352_4556(d_5d9c_9f91, d_5d9c_9f57);
                } while (!d_5d9c_9b88);
                d_5d9c_9b8a = d_2f3c_1d94[team][0] == 0;
            }
        } else {
            f_88c9_24f1("Nobody shortlisted");
            d_5d9c_9b8a = -1;
        }
    } while (!d_5d9c_9b8a);
}

void f_88c9_2ef4(int a, int b, int bg, int fg, char far *s1, char far *s2)
{
    char buf[320];

    f_a1c3_27e4("Search options");
    sprintf(buf, " Select %s ", s1);
    f_1680_2ea0(1.0, 4.0, bg, fg, 0, buf);
    sprintf(buf, "*Exit|*Continue|%s", s2);
    f_1680_150c(7, "", buf);
    d_5d9c_9d17 = b - a + 2;
    do {
        f_1680_18b2(-d_5d9c_9d17);
        d_5d9c_9d15 = d_5d9c_9faf;
        if (d_5d9c_9d15 > 1) {
            if (d_1f3e_fb76[d_5d9c_9d15 + a] == 0)
                f_88c9_303f(d_5d9c_9d15, -1, a);
            else
                f_88c9_303f(d_5d9c_9d15, 0, a);
        }
    } while (d_5d9c_9d15 >= 2);
    d_5d9c_9b45 = 0;
    for (d_5d9c_9d13 = 2; d_5d9c_9d13 <= d_5d9c_9d17; d_5d9c_9d13++)
        if (d_1f3e_fb76[d_5d9c_9d13 + a]) {
            d_5d9c_9b45 = -1;
            d_5d9c_9d13 = d_5d9c_9d17;
        }
    if (d_5d9c_9b45 == 0)
        d_1f3e_fb76[d_5d9c_9d17 + a + 1] = -1;
    d_5d9c_9b88 = d_5d9c_9d15 == 0 ? -1 : 0;
}

void f_88c9_303f(int x, char on, int a)
{
    if (on) {
        d_1f3e_fb76[x + a] = -1;
        f_1680_183d(1, 12, x);
    } else {
        d_1f3e_fb76[x + a] = 0;
        f_1680_183d((int)d_2f3c_1cf4[x] / 16, (int)d_2f3c_1cf4[x] % 16, x);
    }
}

void f_88c9_30b9(char far *title)
{
    int n;

    n = 0;
    f_a1c3_27e4("");
    f_1680_2d78(-1.0, 12.5, 1, "Searching");
    for (d_5d9c_9f91 = 0; d_5d9c_9f91 <= 1699; d_5d9c_9f91++) {
        d_5d9c_9b75 = -1;
        if (d_483b_0000[18][d_5d9c_9f91] == d_5d9c_9d1f)
            d_5d9c_9b75 = 0;
        if (d_5d9c_9b75)
            for (d_5d9c_9d95 = 0; d_5d9c_9d95 <= 6; d_5d9c_9d95++)
                if (d_1f3e_fb76[d_5d9c_9d95 + 2] && d_1f3e_5be8[d_5d9c_9d95][d_5d9c_9f91] == 0) {
                    d_5d9c_9b75 = 0;
                    d_5d9c_9d95 = 6;
                }
        if (d_5d9c_9b75)
            for (d_5d9c_9d95 = 8; d_5d9c_9d95 <= 13; d_5d9c_9d95++)
                if (d_1f3e_fb76[d_5d9c_9d95 + 2] && d_483b_0000[d_5d9c_9d95 - 7][d_5d9c_9f91] < 14) {
                    d_5d9c_9b75 = 0;
                    d_5d9c_9d95 = 14;
                }
        if (d_5d9c_9b75 && d_1f3e_fb76[16] && d_483b_0000[12][d_5d9c_9f91] < 14)
            d_5d9c_9b75 = 0;
        if (d_5d9c_9b75 && d_1f3e_fb76[17] && d_483b_0000[22][d_5d9c_9f91] < 14)
            d_5d9c_9b75 = 0;
        if (d_5d9c_9b75) {
            d_5d9c_9b44 = 0;
            if (d_1f3e_fb76[25])
                d_5d9c_9b44 = -1;
            else {
                d_5d9c_9a08 = f_88c9_12b3(d_5d9c_9f91, d_483b_0000[18][d_5d9c_9f91]);
                d_5d9c_9b44 = d_5d9c_9a08 <= 100000L ? d_1f3e_fb76[19]
                            : d_5d9c_9a08 <= 300000L ? d_1f3e_fb76[20]
                            : d_5d9c_9a08 <= 500000L ? d_1f3e_fb76[21]
                            : d_5d9c_9a08 <= 1000000L ? d_1f3e_fb76[22]
                            : d_5d9c_9a08 <= 2000000L ? d_1f3e_fb76[23]
                            : d_1f3e_fb76[24];
            }
            if (d_5d9c_9b44 == 0)
                d_5d9c_9b75 = 0;
        }
        if (d_5d9c_9b75 && d_1f3e_fb76[30] == 0
            && d_1f3e_fb76[26 + d_483b_0000[18][d_5d9c_9f91] / 20] == 0)
            d_5d9c_9b75 = 0;
        if (d_5d9c_9b75) {
            d_5d9c_9b43 = 0;
            if (d_1f3e_fb76[36])
                d_5d9c_9b43 = -1;
            else {
                d_5d9c_9d11 = d_483b_0000[17][d_5d9c_9f91];
                d_5d9c_9b43 = d_5d9c_9d11 <= 20 ? d_1f3e_fb76[31]
                            : d_5d9c_9d11 <= 24 ? d_1f3e_fb76[32]
                            : d_5d9c_9d11 <= 30 ? d_1f3e_fb76[33]
                            : d_5d9c_9d11 <= 33 ? d_1f3e_fb76[34]
                            : d_1f3e_fb76[35];
            }
            if (d_5d9c_9b43 == 0)
                d_5d9c_9b75 = 0;
        }
        if (d_5d9c_9b75 && d_1f3e_fb76[37] && d_1f3e_9118[d_5d9c_9f91] == 0)
            d_5d9c_9b75 = 0;
        if (d_5d9c_9b75 && d_1f3e_fb76[38] && d_2f3c_a08f[d_5d9c_9f91] > 0)
            d_5d9c_9b75 = 0;
        if (d_5d9c_9b75 && d_1f3e_97be[d_5d9c_9f91])
            d_5d9c_9b75 = 0;
        if (d_5d9c_9b75) {
            n++;
            d_5d9c_a060 = f_14d2_16bc(d_5d9c_a362, 1);
            d_5d9c_a060[n - 1] = d_5d9c_9f91;
        }
    }
    if (n > 0) {
        d_5d9c_9d0f = 1;
        d_5d9c_9d1b = -1;
        do {
            d_5d9c_9b42 = 0;
            f_a1c3_27e4(title);
            f_88c9_36df();
            f_a1c3_2d08(2, 34.25, 1.25, 1, 8, 0x25, " REC");
            f_88c9_389f();
            d_5d9c_9d0d++;
            d_5d9c_9e9b = 0;
            d_5d9c_a060 = f_14d2_16bc(d_5d9c_a362, 0);
            for (d_5d9c_9f29 = d_5d9c_9d0f; d_5d9c_9d0f + 14 >= d_5d9c_9f29; d_5d9c_9f29++) {
                d_5d9c_9f91 = d_5d9c_a060[d_5d9c_9f29 - 1];
                if (d_5d9c_9f91 <= -1)
                    break;
                d_483b_9f90[d_5d9c_9e9b] = d_5d9c_9f91;
                d_5d9c_9e9b++;
            }
            for (d_5d9c_9f29 = 1; d_5d9c_9f29 <= d_5d9c_9e9b; d_5d9c_9f29++)
                f_88c9_39c4(d_483b_9f90[d_5d9c_9f29 - 1], d_5d9c_9f29);
            f_88c9_3d41(1, 0);
            do {
                d_5d9c_9d19 = f_a1c3_3298(-1);
                if (d_5d9c_9d19 == 1)
                    f_88c9_3d41(1, -1);
            } while (d_5d9c_9d19 < 2);
            if (d_5d9c_9d19 == 2 && d_5d9c_9b95 < 3)
                d_5d9c_9d0f -= 15;
            else if (d_5d9c_9d19 == 4 && d_5d9c_9b95 == 1 || d_5d9c_9d19 == 3 && d_5d9c_9b95 == 3)
                d_5d9c_9d0f += 15;
            else if (d_5d9c_9d19 >= d_5d9c_9d0d) {
                d_5d9c_9e8b = d_5d9c_9d19 - d_5d9c_9d0d;
                d_5d9c_9f91 = d_483b_9f90[d_5d9c_9e8b];
                do {
                    f_a1c3_5e7a(d_5d9c_9f91, d_5d9c_9d1f, -1);
                    f_8352_4556(d_5d9c_9f91, d_5d9c_9f57);
                } while (!d_5d9c_9b88);
            }
        } while (!(d_5d9c_9d19 == 3 && d_5d9c_9b95 < 3) && !(d_5d9c_9d19 == 2 && d_5d9c_9b95 > 2));
    } else
        f_88c9_24f1("No players found");
}

void f_88c9_36df(void)
{
    char buf[320];

    sprintf(buf, " %s ", (char far *)d_5d9c_08bc[d_5d9c_9d1f]);
    f_1680_2867(1.125, 3.0, -(d_5739_00a4[d_5d9c_9d1f] / 16), d_5739_00a4[d_5d9c_9d1f] % 16, 0, buf);
    f_1680_2867(1.125, 4.5, 4, 1, 0x48, " NAME");
    f_1680_2867(10.375, 4.5, 4, 1, 0x54, " CLUB");
    f_1680_2867(21.125, 4.5, 4, 1, 0, " AP ");
    f_1680_2867(24.375, 4.5, 4, 1, 0, " GL ");
    f_1680_2867(27.625, 4.5, 4, 1, 0, " AV R");
    f_1680_2867(32.375, 4.5, 4, 1, 0, " VALUE   ");
}

/* the search screen's bottom bar, by what can be scrolled: label, colours, width */
static struct opt d_5d9c_628a[] = {
    {"   -SCR", 1, 9, 72}, {"       EXIT", 1, 2, 147}, {"   +SCR", 1, 9, 72}, {"*", 0, 0, 0}
};
static struct opt d_5d9c_62aa[] = {
    {"   -SCR", 1, 9, 72}, {"            EXIT", 1, 2, 224}, {"*", 0, 0, 0}
};
static struct opt d_5d9c_62c2[] = {
    {"            EXIT", 1, 2, 224}, {"   +SCR", 1, 9, 72}, {"*", 0, 0, 0}
};
static struct opt d_5d9c_62da[] = {
    {"                 EXIT", 1, 2, 301}, {"*", 0, 0, 0}
};

void f_88c9_389f(void)
{
    float x;
    struct opt far *p;

    d_5d9c_a060 = f_14d2_16bc(d_5d9c_a362, 0);
    d_5d9c_9b95 = (d_5d9c_9d0f == 1 ? 2 : 0) + (d_5d9c_a060[d_5d9c_9d0f + 15] == -1 ? 1 : 0) + 1;
    if (d_5d9c_9b95 == 1)
        p = d_5d9c_628a;
    else if (d_5d9c_9b95 == 2)
        p = d_5d9c_62aa;
    else if (d_5d9c_9b95 == 3)
        p = d_5d9c_62c2;
    else
        p = d_5d9c_62da;
    d_5d9c_9d0d = 1;
    x = 1.25;
    do {
        f_a1c3_2d08(2, x, 22.5, p->a, p->b, p->w, p->s);
        x += (p->w + 5) / 8.0;
        d_5d9c_9d0d++;
        p++;
    } while (strcmp(p->s, "*") != 0);
}

void f_88c9_39c4(int p, int row)
{
    char c;
    char buf[320];

    if (row & 1)
        d_5d9c_9f55 = 14;
    else
        d_5d9c_9f55 = 8;
    c = f_8352_21e4(p, d_5d9c_9d1f, d_5d9c_9d71 = f_8352_23a4(p, d_5d9c_9d1f));
    sprintf(buf, " %.11s", f_a1c3_2243(p));
    f_a1c3_2d08(0, 1.125, row + 5, c ? 6 : 1, d_5d9c_9f55, 0x48, buf);
    sprintf(buf, " %.13s", (char far *)d_5d9c_08bc[d_483b_0000[18][p]]);
    f_1680_2867(10.375, row + 5, 1, 12, 0x54, buf);
    d_5d9c_9d0b = d_3e42_0000[0][p] + d_3e42_0000[5][p];
    sprintf(buf, "%3d", d_5d9c_9d0b);
    f_1680_2867(21.125, row + 5, 1, 4, 0x18, buf);
    d_5d9c_9d9b = d_3e42_0000[1][p] + d_3e42_0000[6][p];
    sprintf(buf, "%3d", d_5d9c_9d9b);
    f_1680_2867(24.375, row + 5, 1, 4, 0x18, buf);
    sprintf(buf, " %s", f_a1c3_24bb(d_5d9c_9d0b, d_2f3c_85f7[p] + d_2f3c_9343[p]));
    f_1680_2867(27.625, row + 5, 1, 4, 0x24, buf);
    d_5d9c_9a58 = f_88c9_12b3(p, d_483b_0000[18][p]);
    if (d_1f3e_9118[p] == 0)
        d_5d9c_9a58 = f_88c9_2744(d_5d9c_9a58);
    strcpy(d_1f3e_3f90, f_88c9_27e8(d_5d9c_9a58));
    sprintf(buf, " %s", d_1f3e_3f90);
    f_1680_2867(32.375, row + 5, 6, 3, 0x36, buf);
}

void f_88c9_3d41(int mode, char draw)
{
    char buf[320];

    if (d_5d9c_9d1b > -1 && draw) {
        f_14d2_0609(8, 0xa4, 0x138, 0xac);
        for (d_5d9c_9f29 = 1; d_5d9c_9f29 <= d_5d9c_9e9b; d_5d9c_9f29++)
            f_14d2_0609(2, d_5d9c_9f29 * 8 + 0x22, 8, d_5d9c_9f29 * 8 + 0x28);
    }
    do {
        d_5d9c_9d1b += draw ? 1 : 0;
        if (d_5d9c_9d1b == 4)
            d_5d9c_9d1b = -1;
        if (d_5d9c_9d1b > -1) {
            if (mode == 0) {
                d_5d9c_9e9b = d_2f3c_1d94[d_5d9c_9d1f][0];
                for (d_5d9c_9f29 = 1; d_5d9c_9f29 <= d_5d9c_9e9b; d_5d9c_9f29++)
                    d_483b_9f8e[d_5d9c_9f29] = d_2f3c_1d94[d_5d9c_9d1f][d_5d9c_9f29];
            }
            d_5d9c_9b41 = 0;
            for (d_5d9c_9f29 = 1; d_5d9c_9f29 <= d_5d9c_9e9b; d_5d9c_9f29++) {
                if (f_88c9_3fd0(d_483b_9f8e[d_5d9c_9f29], d_5d9c_9d1f, d_5d9c_9d1b)) {
                    f_1680_2867(0.375, d_5d9c_9f29 + 5, 1, 2, 0, "R");
                    d_5d9c_9b41 = -1;
                }
            }
            if (d_5d9c_9b41) {
                if (draw)
                    f_a1c3_30b1(1, -1);
                f_1680_2867(1.125, 21.25, 1, 2, 0, "R");
                strcpy(d_1f3e_3f40, "");
                if (d_5d9c_9d1b == 3)
                    strcpy(d_1f3e_3f40, "youth ");
                sprintf(buf, " Recommended by %s scout %s ", d_1f3e_3f40,
                        f_a1c3_229c(d_2f3c_80d3[d_5d9c_9d1b][d_5d9c_9d1f], 0));
                f_1680_2867(2.625, 21.25, 6, 3, 0, buf);
                if (draw)
                    f_a1c3_30b1(1, 0);
            }
        }
    } while (d_5d9c_9b41 == 0 && d_5d9c_9d1b != -1 && draw);
}

char f_88c9_3fd0(int p, int team, int n)
{
    d_5d9c_9b40 = 0;
    if (n < 3 || n == 3 && d_483b_0000[17][p] < 21) {
        d_5d9c_9d09 = d_2f3c_80d3[n][team];
        d_5d9c_9d65 = d_5471_2c14[d_2f3c_5905[d_5d9c_9d09]][d_3e42_0000[17][p]];
        d_5d9c_9d07 = (d_2f3c_632d[d_5d9c_9d09] >= (p + d_5d9c_9d09) % 200) * 0.075
            ? d_483b_0000[9][p]
            : f_14d2_13eb(d_3e42_0000[18][p], d_483b_0000[0][p]);
        if (d_5d9c_9d65 < 8) {
            if (n < 3) {
                d_5d9c_9d05 = f_1680_0037(team);
                d_5d9c_9d03 = 150;
            } else {
                d_5d9c_9d05 = 0;
                d_5d9c_9d03 = 175;
            }
        } else
            d_5d9c_9d03 = 180;
        d_5d9c_9d4b = f_1680_00fb(p);
        if (d_5d9c_9d07 >= d_5d9c_9d03 && d_5d9c_9d4b > d_5d9c_9d05
            && d_5d9c_9d4b < f_1680_0037(team) + 4)
            d_5d9c_9b40 = -1;
    }
    return d_5d9c_9b40;
}

void f_88c9_41a8(void)
{
    d_5d9c_9cfb = 0;
    d_5d9c_9b3f = -1;
    f_88c9_7889(0, 0);
    f_88c9_7889(1, 0);
    for (d_5d9c_9f4f = 0; d_5d9c_9f4f <= 645; d_5d9c_9f4f++) {
        f_88c9_422a(d_5d9c_9f4f, (0x22f - d_5d9c_9ef1 >= d_5d9c_9f4f) - 2, 0);
        f_88c9_7933(1, -1, d_5d9c_9f4f, 645);
    }
    d_5d9c_9b3f = 0;
}

void f_88c9_422a(int p, int c, char flag)
{
    f_9100_06bc();
    d_2f3c_422b[p] = d_5d9c_9d01;
    d_2f3c_473f[p] = d_5d9c_9cff;
    do {
        d_2f3c_5167[p] = 0xff;
        if (flag == 0)
            d_2f3c_53f1[p] = f_14d2_0c2a(26) + 35;
        else
            d_2f3c_53f1[p] = 35;
        d_2f3c_567b[p] = 0;
        do
            d_5d9c_9cfd = f_14d2_0c2a(10);
        while (!(d_5d9c_9b75 = d_5d9c_9cfd != 2 && d_5d9c_9cfd != 4 && d_5d9c_9cfd != 6
                 && d_5d9c_9cfd != 9));
        d_2f3c_5905[p] = d_5d9c_9cfd;
        do {
            d_5d9c_9b75 = -1;
            d_5d9c_9f19 = f_14d2_0c2a(100) + 1;
            if (d_5d9c_9f19 <= 60) {
                d_5d9c_9de9 = f_14d2_0c2a(3);
                if (d_5d9c_9de9 == 0 || d_5d9c_9de9 == 1)
                    d_5d9c_9dd5 = d_5d9c_9de9;
                else
                    d_5d9c_9dd5 = 0;
            } else if (d_5d9c_9f19 <= 90) {
                d_5d9c_9de9 = f_14d2_0c2a(4);
                if (d_5d9c_9de9 != 3)
                    d_5d9c_9dd5 = d_5d9c_9de9 + 5;
                else
                    d_5d9c_9dd5 = 3;
            } else if (d_5d9c_9f19 <= 100)
                d_5d9c_9dd5 = 2;
            d_5d9c_9f19 = f_14d2_0c2a(100) + 1;
            if (d_5d9c_9f19 <= 70)
                d_5d9c_9ba7 = f_14d2_0c2a(3) + 2;
            else if (d_5d9c_9f19 <= 95)
                d_5d9c_9ba7 = 1;
            else if (d_5d9c_9f19 <= 100)
                d_5d9c_9ba7 = 0;
            if ((d_5d9c_9dd5 == 2 || d_5d9c_9dd5 == 6) && (d_5d9c_9ba7 == 3 || d_5d9c_9ba7 == 4))
                d_5d9c_9b75 = 0;
        } while (!d_5d9c_9b75);
        d_2f3c_5b8f[p] = (d_5d9c_9ba7 << 4) + d_5d9c_9dd5;
        d_5d9c_9b3e = 0;
        d_5d9c_9b3d = 0;
        for (d_5d9c_9f49 = 3; d_5d9c_9f49 >= 0; d_5d9c_9f49--) {
            d_5d9c_9de9 = f_14d2_0c2a(560) + 1;
            switch (d_5d9c_9f49) {
            case 0:
                d_5d9c_9b3c = d_5d9c_9de9 <= 80 && d_5d9c_9b3d == 0 && d_5d9c_9b3e == 0;
                break;
            case 1:
                d_5d9c_9b3c = d_5d9c_9de9 > 80 && d_5d9c_9de9 <= 160 && d_5d9c_9b3d == 0;
                break;
            case 2:
                d_5d9c_9b3c = d_5d9c_9de9 > 160 && d_5d9c_9de9 <= 480 && d_5d9c_9b3d == 0;
                break;
            case 3:
                d_5d9c_9b3c = d_5d9c_9de9 > 480;
                break;
            }
            if (d_5d9c_9b3c) {
                d_5d9c_9d4b = f_14d2_0c2a(51) + 50;
                d_5d9c_9d07 = d_5d9c_9d4b + f_14d2_0c2a(191 - d_5d9c_9d4b) + 10;
                d_2f3c_5e19[d_5d9c_9f49][p] = d_5d9c_9d4b;
                d_2f3c_6841[d_5d9c_9f49][p] = d_5d9c_9d07;
                if (d_2f3c_53f1[p] > 35)
                    for (d_5d9c_9f75 = 35; d_5d9c_9f75 <= d_2f3c_53f1[p] - 1; d_5d9c_9f75++)
                        f_88c9_471d(p, d_5d9c_9f49);
                if (d_5d9c_9f49 == 2)
                    d_5d9c_9b3e = -1;
                else if (d_5d9c_9f49 == 3)
                    d_5d9c_9b3d = -1;
            } else {
                d_2f3c_5e19[d_5d9c_9f49][p] = 10;
                d_2f3c_6841[d_5d9c_9f49][p] = 10;
            }
        }
        if (c > -2) {
            d_5d9c_9b3b = 0;
            d_5d9c_9de9 = 0;
            do {
                if (c == -1)
                    d_5d9c_9e1b = f_14d2_0c2a(80);
                else
                    d_5d9c_9e1b = c;
                d_5d9c_9ee7 = f_1680_0003(d_5d9c_9e1b) ? 1 : 0;
                d_5d9c_9d8d = f_1680_0037(d_5d9c_9e1b);
                for (d_5d9c_9cf9 = d_5d9c_9ee7; d_5d9c_9cf9 <= 6; d_5d9c_9cf9++) {
                    if (d_2f3c_7f93[d_5d9c_9cf9][d_5d9c_9e1b] == 650) {
                        d_5d9c_9d65 = d_5471_2c14[d_2f3c_7e53[d_5d9c_9e1b]][d_2f3c_5905[p]];
                        if (d_5d9c_9d65 < 8) {
                            d_5d9c_9cf7 = abs(d_2f3c_5e19[f_88c9_686f(d_5d9c_9cf9)][p] / 10 - d_5d9c_9d8d);
                            if (d_5d9c_9cf7 < 4) {
                                d_2f3c_7f93[d_5d9c_9cf9][d_5d9c_9e1b] = p;
                                d_2f3c_5167[p] = d_5d9c_9e1b;
                                d_2f3c_7269[p] = d_5d9c_9cf9;
                                if (d_5d9c_9cf9 == 0 && d_5d9c_9cfb < 54 && d_5d9c_9fa7 == 1) {
                                    d_2f3c_422b[p] = d_5d9c_9cfb;
                                    d_2f3c_473f[p] = d_5d9c_9cfb;
                                    d_5d9c_9cfb++;
                                }
                                d_5d9c_9cf9 = 6;
                                d_5d9c_9b3b = -1;
                            }
                        }
                    }
                }
                d_5d9c_9de9++;
            } while (d_5d9c_9de9 < 20 && d_5d9c_9b3b == 0);
        }
    } while (d_5d9c_9b3b == 0 && c != -2);
}

void f_88c9_471d(int p, int k)
{
    if (p < 646)
        d_2f3c_5e19[k][p] = (d_2f3c_5e19[k][p] * 2 + d_2f3c_6841[k][p]) / 3;
    if (k == 0 && d_5d9c_9b3f == 0 && d_2f3c_7269[p] == 0 && d_2f3c_5167[p] < 255
        && d_2f3c_8033[d_2f3c_5167[p]] < 650) {
        d_5d9c_9f61 = d_2f3c_5167[p] / 20;
        d_5d9c_9cf5 = f_14d2_144d(d_5739_01ec[d_2f3c_5167[p]], 100 - d_5d9c_9f61 * 15) * 2;
        d_2f3c_5e19[k][p] = (d_2f3c_5e19[k][p] * 2 + d_5d9c_9cf5) / 3;
    }
}

void f_88c9_4855(void)
{
    char text[320];
    char title[80];

    f_9100_243d(0, 0);
    f_9100_243d(1, 0);
    for (d_5d9c_9f4f = 0; d_5d9c_9f4f <= 645; d_5d9c_9f4f++) {
        f_9100_24d0(1, -1, d_5d9c_9f4f, 1290);
        d_5d9c_9b47 = 0;
        d_5d9c_9cf3 = d_2f3c_5167[d_5d9c_9f4f];
        if (d_2f3c_53f1[d_5d9c_9f4f] >= 35) {
            d_5d9c_9b12 = 0;
            if (d_5d9c_9cf3 < 255 && d_5739_13dc[d_5d9c_9cf3] > 0)
                d_5d9c_9b12 = -1;
            if (d_2f3c_53f1[d_5d9c_9f4f] > f_14d2_0c2a(6) + 60 && d_5d9c_9b12 == 0) {
                if (d_5d9c_9cf3 < 255) {
                    if (f_1680_0003(d_5d9c_9cf3) || d_2f3c_7269[d_5d9c_9f4f] == 0) {
                        strcpy(d_1f3e_3f18, f_88c9_77b0(d_2f3c_7269[d_5d9c_9f4f]));
                        sprintf(title, "%s quits %s", d_1f3e_3f18, (char far *)d_5d9c_08bc[d_5d9c_9cf3]);
                        sprintf(text, "%s %s has decided to retire from soccer at the age of %d.",
                                d_1f3e_3f18, f_a1c3_229c(d_5d9c_9f4f, 0), d_2f3c_53f1[d_5d9c_9f4f]);
                        f_a1c3_5c9f(d_5d9c_9cf3, title, text);
                    }
                }
                if (d_5d9c_9cf3 < 255 && d_2f3c_7269[d_5d9c_9f4f] == 0)
                    f_88c9_4cf8(d_5d9c_9cf3, 3);
                f_88c9_50e1(d_5d9c_9f4f);
                f_88c9_422a(d_5d9c_9f4f, -2, 1);
                if (d_5d9c_9cf3 < 255 && d_2f3c_7269[d_5d9c_9f4f] > 0)
                    f_88c9_575b(d_5d9c_9cf3, d_2f3c_7269[d_5d9c_9f4f]);
            } else if (d_5d9c_9cf3 < 255 && d_5d9c_9b12 == 0 && d_2f3c_7269[d_5d9c_9f4f] > 0
                       && f_1680_0003(d_5d9c_9cf3) == 0
                       && f_1680_0037(d_5d9c_9cf3)
                          - d_2f3c_5e19[f_88c9_686f(d_2f3c_7269[d_5d9c_9f4f])][d_5d9c_9f4f] / 10 > 4)
                f_88c9_575b(d_5d9c_9cf3, d_2f3c_7269[d_5d9c_9f4f]);
        }
        if (d_5d9c_9b47) {
            f_9100_23c7();
            f_9100_243d(1, 0);
        }
    }
    for (d_5d9c_9f4f = 0; d_5d9c_9f4f <= d_5d9c_9ef3 + 645; d_5d9c_9f4f++) {
        f_9100_24d0(1, -1, d_5d9c_9f4f + 645, 1290);
        if (d_2f3c_53f1[d_5d9c_9f4f] >= 35) {
            for (d_5d9c_9f49 = 0; d_5d9c_9f49 <= 3; d_5d9c_9f49++)
                f_88c9_471d(d_5d9c_9f4f, d_5d9c_9f49);
            d_2f3c_53f1[d_5d9c_9f4f]++;
        }
    }
}

void f_88c9_4b98(void)
{
    for (d_5d9c_9f67 = 0; d_5d9c_9f67 <= 79; d_5d9c_9f67++) {
        if (d_5739_13dc[d_5d9c_9f67] == 0
            && (d_1f3e_5918[0][d_5d9c_9f67] != 0 || f_14d2_0c2a(3) > 0)) {
            if (d_5739_01ec[d_5d9c_9f67] < 30 && d_5d9c_9fab < 80 && f_14d2_0c2a(3) == 0
                && d_2f3c_567b[d_2f3c_7f93[0][d_5d9c_9f67]] == 0
                && d_1f3e_5918[2][d_5d9c_9f67] + d_1f3e_5918[3][d_5d9c_9f67]
                   + d_1f3e_5918[6][d_5d9c_9f67] + d_1f3e_5918[7][d_5d9c_9f67]
                   + d_1f3e_5918[8][d_5d9c_9f67] == 0)
                f_88c9_4cf8(d_5d9c_9f67, 2);
            for (d_5d9c_9f49 = 0; d_5d9c_9f49 <= 6; d_5d9c_9f49++) {
                d_5d9c_9f4f = d_2f3c_7f93[d_5d9c_9f49][d_5d9c_9f67];
                if (d_5d9c_9f4f < 650 && d_2f3c_567b[d_5d9c_9f4f] > 0)
                    d_2f3c_567b[d_5d9c_9f4f] = d_2f3c_567b[d_5d9c_9f4f]
                        - ((d_5d9c_9fab & 1) == 0 || d_5d9c_9fab < 7 ? (char)1 : (char)0);
            }
        }
    }
}

void f_88c9_4cf8(int club, int a)
{
    char buf[320];

    if (a < 3) {
        if (a == 0) {
            sprintf(buf, "%s is to be replaced as manager of %s as part of the takeover.",
                    f_a1c3_229c(d_2f3c_7f93[0][club], 0), (char far *)d_5d9c_08bc[club]);
            f_a1c3_5c9f(club, "Managerial news", buf);
        } else if (a == 1 || f_14d2_0c2a(4) == 0 && f_1680_0003(club) == 0) {
            if (f_1680_0003(club) == 0) {
                sprintf(buf, "%s has resigned as manager of %s.",
                        f_a1c3_229c(d_2f3c_7f93[0][club], 0), (char far *)d_5d9c_08bc[club]);
                f_a1c3_5c9f(club, "Managerial news", buf);
            }
        } else {
            sprintf(buf, "%s has been given the sack by the %s board.",
                    f_a1c3_229c(d_2f3c_7f93[0][club], 0), (char far *)d_5d9c_08bc[club]);
            f_a1c3_5c9f(club, "Managerial news", buf);
        }
        if (f_1680_0003(club)) {
            d_5d9c_9ef1--;
            d_5d9c_9b8d = d_5d9c_9ef1 == 0;
        }
        d_5d9c_9ce9 = d_2f3c_7f93[0][club];
        d_2f3c_5167[d_5d9c_9ce9] = 255;
        d_2f3c_567b[d_5d9c_9ce9] = 0;
        d_2f3c_7269[d_5d9c_9ce9] = club + 7;
    }
    d_5739_01ec[club] = 50;
    d_5739_13dc[club] = 3;
    d_5d9c_9dbd = d_2f3c_8033[club];
    d_2f3c_7f93[0][club] = d_5d9c_9dbd;
    d_2f3c_7269[d_5d9c_9dbd] = 0;
    d_2f3c_8033[club] = 650;
    if (a != 3)
        f_1680_0b5b(club);
}

void f_88c9_4ee2(void)
{
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 79; d_5d9c_9f69++) {
        if (d_5739_13dc[d_5d9c_9f69] > 1) {
            d_5d9c_9d8d = f_1680_0037(d_5d9c_9f69);
            d_5d9c_9de9 = 0;
            d_5d9c_9cbf = d_5d9c_9d8d - (4 - d_5739_13dc[d_5d9c_9f69]) * 4;
            d_5d9c_9f5f = d_5d9c_9d8d + 3;
            d_5d9c_9bbf = f_14d2_0c2a(9) + 10;
            for (; d_5d9c_9de9 < 200 && strlen(d_1f3e_0ab4[d_5d9c_9f69]) < d_5d9c_9bbf * 4;
                 d_5d9c_9de9++) {
                d_5d9c_9f4f = f_14d2_0c2a(646);
                if (d_2f3c_567b[d_5d9c_9f4f] == 0 && d_2f3c_7269[d_5d9c_9f4f] - 7 != d_5d9c_9f69) {
                    d_5d9c_9d4b = d_2f3c_5e19[0][d_5d9c_9f4f] / 10;
                    sprintf(d_1f3e_2b0e, "%03d", d_5d9c_9f4f);
                    if (f_14d2_09ce(d_1f3e_0ab4[d_5d9c_9f69], d_1f3e_2b0e) == 0
                        && d_5d9c_9d4b >= d_5d9c_9cbf && d_5d9c_9d4b <= d_5d9c_9f5f) {
                        if (d_2f3c_5167[d_5d9c_9f4f] == 255)
                            d_5d9c_9b18 = -1;
                        else
                            d_5d9c_9b18 = d_5d9c_9d8d - f_1680_0037(d_2f3c_5167[d_5d9c_9f4f]) > 2.0;
                        if (d_5d9c_9b18) {
                            strcat(d_1f3e_0ab4[d_5d9c_9f69], d_1f3e_2b0e);
                            strcat(d_1f3e_0ab4[d_5d9c_9f69], " ");
                        }
                    }
                }
            }
        }
    }
}

void f_88c9_50e1(int p)
{
    char buf[320];

    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 79; d_5d9c_9f69++) {
        if (d_5739_13dc[d_5d9c_9f69] > 0) {
            sprintf(buf, "%03d", p);
            d_5d9c_9f75 = f_14d2_09ce(d_1f3e_0ab4[d_5d9c_9f69], buf);
            if (d_5d9c_9f75 > 0)
                strcpy(&d_1f3e_0ab4[d_5d9c_9f69][d_5d9c_9f75 - 1], "XXX");
        }
    }
}

void f_88c9_516f(void)
{
    char taken[650];
    char buf[320];

    memset(taken, 0, 650);
    for (d_5d9c_9bbd = 0; d_5d9c_9bbd <= 79; d_5d9c_9bbd++) {
        if (d_5739_13dc[d_5d9c_9bbd] > 0) {
            d_5739_13dc[d_5d9c_9bbd] = d_5739_13dc[d_5d9c_9bbd] - 1;
            if (d_5739_13dc[d_5d9c_9bbd] == 0) {
                strcpy(d_1f3e_300e, d_1f3e_0ab4[d_5d9c_9bbd]);
                if (d_1f3e_300e[0] != 0) {
                    do {
                        d_5d9c_9cf1 = -1;
                        for (d_5d9c_9f6d = 1; strlen(d_1f3e_300e) >= d_5d9c_9f6d; d_5d9c_9f6d += 4) {
                            sprintf(buf, "%.3s", &d_1f3e_300e[d_5d9c_9f6d - 1]);
                            d_5d9c_9bc5 = atol(buf);
                            if ((d_5d9c_9fa7 > 1 || d_5d9c_9fa7 == 1 && d_5d9c_9bc5 < 646)
                                && taken[d_5d9c_9bc5] == 0) {
                                d_5d9c_9d9d = d_2f3c_5e19[0][d_5d9c_9bc5]
                                    - d_5471_2c14[d_2f3c_7e53[d_5d9c_9bbd]][d_2f3c_5905[d_5d9c_9bc5]]
                                    + f_14d2_0c2a(10) - f_14d2_0c2a(10);
                                if (d_5d9c_9d9d > d_5d9c_9f5f || d_5d9c_9cf1 == -1) {
                                    d_5d9c_9b75 = -1;
                                    if (d_2f3c_5167[d_5d9c_9bc5] < 255 && d_2f3c_567b[d_5d9c_9bc5] == 0
                                        && d_2f3c_7269[d_5d9c_9bc5] - 7 != d_5d9c_9bbd
                                        && d_5739_13dc[d_2f3c_5167[d_5d9c_9bc5]] > 0
                                        && d_2f3c_7f93[0][d_2f3c_5167[d_5d9c_9bc5]] == d_5d9c_9bc5
                                        && d_2f3c_5167[d_5d9c_9bc5] != d_5d9c_9bbd)
                                        d_5d9c_9b75 = 0;
                                    if (d_5d9c_9b75) {
                                        d_5d9c_9cf1 = d_5d9c_9bc5;
                                        d_5d9c_9f5f = d_5d9c_9d9d;
                                    }
                                }
                            }
                        }
                        d_5d9c_9b17 = -1;
                        if (d_5d9c_9cf1 != -1 && d_5d9c_9cf1 >= 646
                            && f_88c9_5530(d_5d9c_9cf1, d_5d9c_9bbd) == 0) {
                            taken[d_5d9c_9cf1] = -1;
                            d_5d9c_9b17 = 0;
                        }
                    } while (!d_5d9c_9b17);
                    if (d_5d9c_9cf1 != -1) {
                        d_5d9c_9dbd = d_2f3c_7f93[0][d_5d9c_9bbd];
                        d_2f3c_7f93[0][d_5d9c_9bbd] = 650;
                        d_2f3c_8033[d_5d9c_9bbd] = d_5d9c_9dbd;
                        d_2f3c_7269[d_5d9c_9dbd] = 1;
                        d_5739_13dc[d_5d9c_9bbd] = 0;
                        strcpy(d_1f3e_0ab4[d_5d9c_9bbd], "");
                        d_5d9c_9ced = d_2f3c_5167[d_5d9c_9cf1];
                        d_5d9c_9ceb = d_2f3c_7269[d_5d9c_9cf1];
                        f_88c9_594f(d_5d9c_9cf1, d_5d9c_9bbd, 0);
                        if (d_5d9c_9ced < 255) {
                            if (d_5d9c_9ceb == 0) {
                                sprintf(buf, "%s are now looking for a new manager following the departure of %s.",
                                        (char far *)d_5d9c_08bc[d_5d9c_9ced], f_a1c3_229c(d_5d9c_9cf1, 0));
                                f_a1c3_5c9f(d_5d9c_9ced, "Managerial news", buf);
                                f_88c9_4cf8(d_5d9c_9ced, 4);
                            } else
                                f_88c9_575b(d_5d9c_9ced, d_5d9c_9ceb);
                        }
                        continue;
                    }
                }
                d_5739_13dc[d_5d9c_9bbd] = 2;
            }
        }
    }
}

char f_88c9_5530(int p, int team)
{
    char buf[320];

    d_5d9c_9b32 = -1;
    d_5d9c_9b31 = 0;
    do {
        d_5d9c_9b56 = 0;
        f_a1c3_27e4("Job Offer");
        sprintf(buf, " %s ", f_a1c3_229c(p, 0));
        if (d_2f3c_5167[p] == 255)
            d_5d9c_9f55 = 20;
        else
            d_5d9c_9f55 = d_5739_00a4[d_2f3c_5167[p]];
        f_1680_2ea0(1.0, 4.0, -(d_5d9c_9f55 / 16), d_5d9c_9f55 % 16, 0, buf);
        sprintf(buf, "%s want you as their manager", (char far *)d_5d9c_08bc[team]);
        f_88c9_243e(7, buf);
        sprintf(buf, "They are in division %d", team / 20 + 1);
        f_88c9_243e(9, buf);
        f_1680_150c(12, "", "Accept Offer|Refuse Offer|League Table|Squad Details|");
        do {
            d_5d9c_9b8a = -1;
            f_1680_18b2(5);
            if (d_5d9c_9faf == 0) {
                if (f_88c9_25cc()) {
                    sprintf(buf, "%s offer accepted", (char far *)d_5d9c_08bc[team]);
                    f_88c9_249e(buf);
                    if (d_2f3c_5167[p] < 255)
                        f_88c9_76df(d_2f3c_5167[p]);
                    d_5d9c_9b31 = -1;
                } else
                    d_5d9c_9b8a = 0;
            } else if (d_5d9c_9faf == 1) {
                if (f_88c9_25cc()) {
                    sprintf(buf, "%s offer refused", (char far *)d_5d9c_08bc[team]);
                    f_88c9_249e(buf);
                } else
                    d_5d9c_9b8a = 0;
            } else if (d_5d9c_9faf == 2) {
                f_67ee_0622(team / 20);
                d_5d9c_9b56 = -1;
            } else if (d_5d9c_9faf == 3) {
                f_67ee_5641(team);
                d_5d9c_9b56 = -1;
            }
        } while (!d_5d9c_9b8a);
    } while (d_5d9c_9b56);
    d_5d9c_9b32 = 0;
    return d_5d9c_9b31;
}

void f_88c9_575b(int club, int n)
{
    d_5d9c_9cf9 = n;
    d_5d9c_9e1b = club;
    do {
        d_5d9c_9cf1 = -1;
        if (f_1680_0003(d_5d9c_9e1b))
            d_5d9c_9cf1 = f_88c9_5ea7(d_5d9c_9e1b, d_5d9c_9cf9);
        if (d_5d9c_9cf1 == -1) {
            d_5d9c_9b39 = 0;
            do {
                d_5d9c_9f5f = 0;
                for (d_5d9c_9f51 = 0; d_5d9c_9f51 <= 645; d_5d9c_9f51++) {
                    if (d_2f3c_5167[d_5d9c_9f51] != d_5d9c_9e1b) {
                        d_5d9c_9d65 = d_5471_2c14[d_2f3c_5905[d_2f3c_7f93[0][d_5d9c_9e1b]]][d_2f3c_5905[d_5d9c_9f51]];
                        if ((d_5d9c_9d9d = f_14d2_13eb(d_2f3c_5e19[0][f_88c9_686f(d_5d9c_9cf9) * 650 + d_5d9c_9f51] / 10
                                                       + (d_2f3c_5167[d_5d9c_9f51] == d_5d9c_9e1b ? 4 : 0)
                                                       - d_5d9c_9d65, 1)) > d_5d9c_9f5f) {
                            if ((fabs(d_5d9c_9d9d - f_1680_0037(d_5d9c_9e1b)) < 4.0
                                 && (d_2f3c_53f1[d_5d9c_9f51] <= 50 && d_5d9c_9cf9 < 2 || d_5d9c_9cf9 > 1))
                                || d_5d9c_9b39) {
                                if (f_88c9_5cf1(d_5d9c_9f51, d_5d9c_9e1b, d_5d9c_9cf9)) {
                                    d_5d9c_9cf1 = d_5d9c_9f51;
                                    d_5d9c_9f5f = d_5d9c_9d9d;
                                }
                            }
                        }
                    }
                }
                d_5d9c_9b39 = -1;
            } while (d_5d9c_9cf1 <= -1);
        }
        f_88c9_594f(d_5d9c_9cf1, d_5d9c_9e1b, d_5d9c_9cf9);
        if (d_5d9c_9ced < 255) {
            d_5d9c_9cf9 = d_5d9c_9ceb;
            d_5d9c_9e1b = d_5d9c_9ced;
        }
    } while (d_5d9c_9ced != 255);
}

void f_88c9_594f(int p, int team, int b)
{
    int i;
    char buf[320];

    d_5d9c_9ced = d_2f3c_5167[p];
    d_5d9c_9ceb = d_2f3c_7269[p];
    d_5d9c_9ce9 = d_2f3c_7f93[b][team];
    if (d_5d9c_9ce9 < 0x28a) {
        d_5d9c_9b11 = -1;
        for (d_5d9c_9ce7 = 0; d_5d9c_9ce7 <= 79; d_5d9c_9ce7++)
            for (d_5d9c_9ce5 = 0; d_5d9c_9ce5 <= 6; d_5d9c_9ce5++)
                if (d_2f3c_7f93[d_5d9c_9ce5][d_5d9c_9ce7] == d_5d9c_9ce9 && d_5d9c_9ce7 != team) {
                    d_5d9c_9b11 = 0;
                    d_5d9c_9ce5 = 6;
                    d_5d9c_9ce7 = 79;
                }
        if (d_5d9c_9b11 != 0) {
            d_2f3c_5167[d_5d9c_9ce9] = 0xff;
            d_2f3c_567b[d_5d9c_9ce9] = 0;
        }
    }
    d_2f3c_7f93[b][team] = p;
    d_2f3c_5167[p] = team;
    d_2f3c_567b[p] = f_14d2_13eb(f_14d2_144d(d_2f3c_5e19[0][p] * 0.375, 50), 25);
    d_2f3c_7269[p] = b;
    f_88c9_50e1(p);
    if (b == 0) {
        if (p > 0x285 && d_5d9c_9ced == 0xff) {
            d_5d9c_9ef1++;
            d_5d9c_9b8d = 0;
        }
        d_5739_0000[0][team] = f_14d2_13eb(10, d_2f3c_5e19[0][p] / 13);
        for (i = 0; i <= d_5739_023e[team]; i++)
            if (f_14d2_0c2a(3) > 0)
                f_992a_424a(d_483b_a372[team][i]);
        d_5739_01ec[team] = f_14d2_13eb(d_2f3c_5e19[0][p] * 0.5, 50);
        if (d_5d9c_9b38 == 0) {
            f_1680_0b5b(team);
            if (d_5d9c_9ce9 < 0x286)
                for (i = 1; i <= d_2f3c_1d94[team][0]; i++)
                    d_3e42_0000[23][d_2f3c_1d94[team][i]]--;
            d_2f3c_1d94[team][0] = 0;
        }
    }
    d_5d9c_9b37 = 0;
    if (d_5d9c_9bbb == 0 || f_1680_0003(team)
        || d_5d9c_9ced < 0xff && f_1680_0003(d_5d9c_9ced))
        d_5d9c_9b37 = -1;
    if (d_5d9c_9b37 != 0) {
        if (d_5d9c_9ced == 0xff)
            strcpy(d_1f3e_51b6, "");
        else if (d_5d9c_9ced == team)
            sprintf(d_1f3e_51b6, "their %s ", f_88c9_77b0(d_5d9c_9ceb));
        else
            sprintf(d_1f3e_51b6, "%s %s ", (char far *)d_5d9c_08bc[d_5d9c_9ced], f_88c9_77b0(d_5d9c_9ceb));
        sprintf(buf, "%s have appointed %s%s as their new %s.", (char far *)d_5d9c_08bc[team],
                d_1f3e_51b6, f_a1c3_229c(p, 0), f_88c9_77b0(b));
        f_a1c3_5c9f(team, "Job News", buf);
    }
}

char f_88c9_5cf1(int p, int team, int x)
{
    d_5d9c_9b36 = 0;
    if (d_2f3c_5167[p] == team) {
        if (d_5739_13dc[d_2f3c_5167[p]] == 0)
            d_5d9c_9b36 = -1;
    } else if (d_2f3c_567b[p] == 0) {
        d_5d9c_9cdf = f_88c9_686f(x);
        if (d_2f3c_5167[p] == 0xff)
            d_5d9c_9b36 = d_2f3c_5e19[d_5d9c_9cdf][p] / 10 - f_1680_0037(team) < 6.0 ? -1 : 0;
        else if (d_5739_13dc[d_2f3c_5167[p]] == 0 && f_14d2_0c2a(4) > 0) {
            d_5d9c_9cdd = f_88c9_686f(d_2f3c_7269[p]);
            if (d_5d9c_9cdd != 0 || d_5d9c_9cdf <= 0)
                if (f_1680_0037(team) - (d_5d9c_9cdf < d_5d9c_9cdd) > f_1680_0037(d_2f3c_5167[p]) + 3.0
                    || d_2f3c_5e19[d_5d9c_9cdf][p] - d_2f3c_5e19[d_5d9c_9cdd][p] > 60)
                    d_5d9c_9b36 = -1;
        }
    }
    return d_5d9c_9b36;
}

int f_88c9_5ea7(int team, int x)
{
    char buf[320];

    memset(d_1f3e_fb78, 0, 37);
    d_5d9c_9ce3 = -1;
    strcpy(d_1f3e_3f18, f_88c9_77b0(x));
    do {
        sprintf(buf, "Appoint %s", d_1f3e_3f18);
        f_a1c3_27e4(buf);
        f_1680_33a0(1.0, 4.0, team);
        f_1680_150c(7, "", "Own Search|Board Decision|");
        f_1680_18b2(1);
        d_5d9c_9d1d = d_5d9c_9faf;
        if (d_5d9c_9d1d == 0) {
            memset(d_1f3e_fb78, 0, 37);
            d_5d9c_a060 = f_14d2_16bc(d_5d9c_a362, 1);
            memset(d_5d9c_a060, -1, 0xd4a);
            f_88c9_2ef4(11, 14, 1, 2, "Age", "35-40|40-50|50-60|60+|");
            if (d_5d9c_9b88 == 0) {
                f_88c9_2ef4(16, 20, 1, 2, "Division", "First|Second|Third|Fourth|Unemployed|");
                if (d_5d9c_9b88 == 0) {
                    f_88c9_2ef4(22, 27, 1, 2, "Reputation", "Unknown|Poor|Fair|Good|Very Good|Superb|");
                    if (d_5d9c_9b88 == 0)
                        f_88c9_604d(team, x);
                }
            }
        }
    } while ((d_5d9c_9d1d != 0 || d_5d9c_9ce3 == -1) && d_5d9c_9d1d != 1);
    return d_5d9c_9ce3;
}

void f_88c9_604d(int team, int x)
{
    int n;
    int j;
    char buf[320];

    n = 0;
    f_a1c3_27e4("");
    f_1680_2d78(-1.0, 12.5, 1, "Searching");
    for (j = 1; j <= 2; j++)
        for (d_5d9c_9f51 = 0; d_5d9c_9f51 <= 0x285; d_5d9c_9f51++) {
            d_5d9c_9b75 = -1;
            if (d_2f3c_5167[d_5d9c_9f51] != team && j == 1)
                d_5d9c_9b75 = 0;
            if (d_5d9c_9b75 != 0 && d_2f3c_5167[d_5d9c_9f51] == team && j == 2)
                d_5d9c_9b75 = 0;
            if (d_5d9c_9b75 != 0 && d_2f3c_7f93[x][team] == d_5d9c_9f51)
                d_5d9c_9b75 = 0;
            if (d_2f3c_5167[d_5d9c_9f51] != d_5d9c_9e1b) {
                if (d_5d9c_9b75 != 0) {
                    d_5d9c_9b43 = 0;
                    if (d_1f3e_fb78[15] != 0)
                        d_5d9c_9b43 = -1;
                    else {
                        d_5d9c_9d11 = d_2f3c_53f1[d_5d9c_9f51];
                        if (d_5d9c_9d11 <= 40)
                            d_5d9c_9b43 = d_1f3e_fb78[11];
                        else if (d_5d9c_9d11 <= 50)
                            d_5d9c_9b43 = d_1f3e_fb78[12];
                        else if (d_5d9c_9d11 <= 60)
                            d_5d9c_9b43 = d_1f3e_fb78[13];
                        else
                            d_5d9c_9b43 = d_1f3e_fb78[14];
                    }
                    if (d_5d9c_9b43 == 0)
                        d_5d9c_9b75 = 0;
                }
                if (d_5d9c_9b75 != 0 && d_1f3e_fb78[21] == 0)
                    if (d_2f3c_5167[d_5d9c_9f51] == 0xff && d_1f3e_fb78[20] == 0
                        || d_2f3c_5167[d_5d9c_9f51] < 0xff && d_1f3e_fb78[16 + d_2f3c_5167[d_5d9c_9f51] / 20] == 0)
                        d_5d9c_9b75 = 0;
                if (d_5d9c_9b75 != 0 && d_1f3e_fb78[28] == 0) {
                    strcpy(d_1f3e_3ec8, f_88c9_72fa(d_5d9c_9f51, x));
                    if (d_1f3e_fb78[22 + d_5d9c_9f4d] == 0)
                        d_5d9c_9b75 = 0;
                }
            }
            if (d_5d9c_9b75 != 0) {
                n++;
                d_5d9c_a060 = f_14d2_16bc(d_5d9c_a362, 1);
                d_5d9c_a060[n - 1] = d_5d9c_9f51;
            }
        }
    if (n > 0) {
        d_5d9c_9d0f = 1;
        do {
            sprintf(buf, "New %s %s", (char far *)d_5d9c_08bc[team], d_1f3e_3f18);
            f_a1c3_27e4(buf);
            f_1680_2867(1.125, 4.5, 0, 1, 72, " NAME");
            f_1680_2867(10.375, 4.5, 0, 1, 78, " CLUB");
            f_1680_2867(20.375, 4.5, 0, 1, 22, " YR");
            f_1680_2867(23.375, 4.5, 0, 1, 72, " CHARACTER");
            f_1680_2867(32.625, 4.5, 0, 1, 52, " REP");
            f_88c9_389f();
            d_5d9c_9e9b = 0;
            d_5d9c_a060 = f_14d2_16bc(d_5d9c_a362, 0);
            for (d_5d9c_9f29 = d_5d9c_9d0f; d_5d9c_9d0f + 14 >= d_5d9c_9f29; d_5d9c_9f29++) {
                d_5d9c_9f51 = d_5d9c_a060[d_5d9c_9f29 - 1];
                if (d_5d9c_9f51 > -1) {
                    d_483b_9f90[d_5d9c_9e9b] = d_5d9c_9f51;
                    d_5d9c_9e9b++;
                } else
                    d_5d9c_9f29 = d_5d9c_9d0f + 14;
            }
            for (d_5d9c_9f29 = 1; d_5d9c_9f29 <= d_5d9c_9e9b; d_5d9c_9f29++) {
                if (d_5d9c_9f29 & 1)
                    d_5d9c_9f55 = 2;
                else
                    d_5d9c_9f55 = 9;
                d_5d9c_9f51 = d_483b_9f90[d_5d9c_9f29 - 1];
                sprintf(buf, " %.11s", f_a1c3_229c(d_5d9c_9f51, -1));
                f_a1c3_2d08(0, 1.125, d_5d9c_9f29 + 5, 1, d_5d9c_9f55, 72, buf);
                if (d_2f3c_5167[d_5d9c_9f51] < 0xff)
                    strcpy(d_1f3e_5634, d_5d9c_08bc[d_2f3c_5167[d_5d9c_9f51]]);
                else
                    strcpy(d_1f3e_5634, "Unemployed");
                d_5d9c_9f55 = d_2f3c_5167[d_5d9c_9f51] == team ? 3 : 12;
                sprintf(buf, " %.12s", d_1f3e_5634);
                f_1680_2867(10.375, d_5d9c_9f29 + 5, 1, d_5d9c_9f55, 78, buf);
                sprintf(buf, " %d", d_2f3c_53f1[d_5d9c_9f51]);
                f_1680_2867(20.375, d_5d9c_9f29 + 5, 1, 4, 22, buf);
                sprintf(buf, " %s", d_5471_17f4[d_2f3c_5905[d_5d9c_9f51]]);
                f_1680_2867(23.375, d_5d9c_9f29 + 5, 1, 4, 72, buf);
                sprintf(buf, " %s", f_88c9_72fa(d_5d9c_9f51, x));
                f_1680_2867(32.625, d_5d9c_9f29 + 5, 6, 3, 52, buf);
            }
            do
                d_5d9c_9d19 = f_a1c3_3298(-1);
            while (d_5d9c_9d19 < 1);
            if (d_5d9c_9d19 == 1 && d_5d9c_9b95 < 3)
                d_5d9c_9d0f -= 15;
            else if (d_5d9c_9d19 == 3 && d_5d9c_9b95 == 1 || d_5d9c_9d19 == 2 && d_5d9c_9b95 == 3)
                d_5d9c_9d0f += 15;
            else if (d_5d9c_9d19 >= d_5d9c_9d0d) {
                d_5d9c_9e8b = d_5d9c_9d19 - d_5d9c_9d0d;
                d_5d9c_9f51 = d_483b_9f90[d_5d9c_9e8b];
                sprintf(buf, "Appoint %s", f_a1c3_229c(d_5d9c_9f51, 0));
                f_1680_150c(0, buf, "Cancel|Appoint Him|");
                if (d_5d9c_9faf == 1) {
                    strcpy(d_1f3e_53e6, f_a1c3_229c(d_5d9c_9f51, -1));
                    if (f_88c9_5cf1(d_5d9c_9f51, team, x)) {
                        sprintf(buf, "%s accepts the offer", d_1f3e_53e6);
                        f_88c9_249e(buf);
                        d_5d9c_9ce3 = d_5d9c_9f51;
                    } else {
                        sprintf(buf, "%s refuses the offer", d_1f3e_53e6);
                        f_88c9_249e(buf);
                    }
                }
            }
        } while ((d_5d9c_9d19 != 2 || d_5d9c_9b95 >= 3) && (d_5d9c_9d19 != 1 || d_5d9c_9b95 <= 2)
                 && d_5d9c_9ce3 == -1);
    } else
        f_88c9_24f1("Nobody found");
}

int f_88c9_686f(int x)
{
    switch (x) {
    case 0:
    case 1:
        d_5d9c_9f5d = x;
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        d_5d9c_9f5d = 2;
        break;
    case 6:
        d_5d9c_9f5d = 3;
        break;
    }
    return d_5d9c_9f5d;
}

/* the staff screen: its boxes, and where each member of staff is drawn */
static struct staffbox d_5d9c_62ea[] = {
    {8, 24, 156, 74, 4}, {8, 80, 156, 188, 14}, {164, 24, 312, 66, 3},
    {164, 74, 312, 116, 14}, {164, 124, 312, 166, 14}
};
static struct staffpanel d_5d9c_6308[] = {
    {1.375, 5, 1, 28}, {20.875, 5, 1, 31}, {1.375, 12, 1, 24}, {1.375, 16.125, 1, 24},
    {1.375, 20.25, 1, 24}, {20.875, 17.5, 1, 24}, {20.875, 11.25, 1, 24}
};

void f_88c9_68aa(int team)
{
    struct staffbox far *p;
    struct staffpanel far *q;
    int x2[5];
    int x1[5];
    int y2[5];
    int y1[5];
    char buf[320];

    do {
        d_5d9c_9b56 = 0;
        f_67ee_5ab6(1.25, team, "Staff");
        p = d_5d9c_62ea;
        for (d_5d9c_9cdb = 0; d_5d9c_9cdb <= 4; d_5d9c_9cdb++, p++) {
            f_14d2_0722(16);
            f_14d2_075a(p->x1 + 4, p->y1 + 4, p->x2 + 4, p->y2 + 4);
            f_14d2_0722(p->colour + 16);
            f_14d2_075a(p->x1, p->y1, p->x2, p->y2);
            x1[d_5d9c_9cdb] = p->x1;
            x2[d_5d9c_9cdb] = p->x2;
            y1[d_5d9c_9cdb] = p->y1;
            y2[d_5d9c_9cdb] = p->y2;
        }
        q = d_5d9c_6308;
        for (d_5d9c_9f49 = 0; d_5d9c_9f49 <= 6; d_5d9c_9f49++, q++)
            f_88c9_6cce(q->x, q->y, q->a, q->b, d_5d9c_9f49, team);
        f_a1c3_2d08(2, 20.75, 22.25, 1, 4, 0x94, "       DONE");
        if (f_1680_0003(team))
            f_a1c3_2d08(2, 35.0, 1.125, 1, 3, 0, "SACK");
        d_5d9c_9b3a = 0;
        do {
            d_5d9c_9b35 = 0;
            d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
            if (d_5d9c_9faf == 0 && d_5d9c_9b3a != 0) {
                d_5d9c_9cd9 = -1;
                for (d_5d9c_9cdb = 0; d_5d9c_9cdb <= 4; d_5d9c_9cdb++) {
                    if (f_14d2_0ac1() >= x1[d_5d9c_9cdb] && f_14d2_0ac1() <= x2[d_5d9c_9cdb]) {
                        if (d_5d9c_9cdb == 1) {
                            if (f_14d2_0ab9() >= 90 && f_14d2_0ab9() <= 120)
                                d_5d9c_9cd9 = 2;
                            else if (f_14d2_0ab9() >= 123 && f_14d2_0ab9() <= 153)
                                d_5d9c_9cd9 = 3;
                            else if (f_14d2_0ab9() >= 156 && f_14d2_0ab9() <= 186)
                                d_5d9c_9cd9 = 4;
                        } else if (f_14d2_0ab9() >= y1[d_5d9c_9cdb] && f_14d2_0ab9() <= y2[d_5d9c_9cdb]) {
                            switch (d_5d9c_9cdb) {
                            case 2:
                                d_5d9c_9cd9 = 1;
                                break;
                            case 3:
                                d_5d9c_9cd9 = 6;
                                break;
                            case 4:
                                d_5d9c_9cd9 = 5;
                                break;
                            }
                        }
                    }
                }
                if (d_5d9c_9cd9 > -1) {
                    strcpy(d_1f3e_53e6, f_a1c3_229c(d_2f3c_7f93[d_5d9c_9cd9][team], 0));
                    sprintf(buf, "Sack %s", d_1f3e_53e6);
                    f_1680_150c(0, buf, "Cancel|Sack Him|");
                    if (d_5d9c_9faf == 1) {
                        sprintf(buf, "%s leaves club", d_1f3e_53e6);
                        f_88c9_24f1(buf);
                        f_88c9_575b(team, d_5d9c_9cd9);
                    }
                    d_5d9c_9b56 = -1;
                } else {
                    d_5d9c_9b3a = 0;
                    f_a1c3_30b1(2, 0);
                }
            } else if (d_5d9c_9faf == 1) {
                d_5d9c_9b35 = -1;
            } else if (d_5d9c_9faf == 2) {
                f_a1c3_30b1(2, d_5d9c_9b3a = !d_5d9c_9b3a);
            }
        } while (d_5d9c_9b35 == 0 && d_5d9c_9b56 == 0);
    } while (!d_5d9c_9b35);
}

void f_88c9_6cce(float x, float y, int c, int c2, int type, int team)
{
    char buf[320];

    d_5d9c_9cd7 = d_2f3c_7f93[type][team];
    strcpy(d_1f3e_3e28, f_88c9_77b0(type));
    if (type == 2)
        strcat(d_1f3e_3e28, "s");
    if (type != 3 && type != 4) {
        sprintf(buf, "%*s", strlen(d_1f3e_3e28) + 12 - strlen(d_1f3e_3e28) / 2, d_1f3e_3e28);
        f_1680_2867(x, y - 1, c / 16, c % 16, 0x90, buf);
    }
    if (d_5d9c_9cd7 < 0x28a) {
        strcpy(d_1f3e_53e6, f_a1c3_229c(d_5d9c_9cd7, 0));
        sprintf(buf, "%*s", strlen(d_1f3e_53e6) + 12 - strlen(d_1f3e_53e6) / 2, d_1f3e_53e6);
        d_5d9c_9b34 = type == 2 || type == 3 || type == 4;
        f_1680_2867(x, y, c2 / 16 - (d_5d9c_9b34 ? 5 : 0), c2 % 16, 0x90, buf);
        f_1680_2867(x, y + 1, c2 / 16, c2 % 16, 0x47, " Age");
        sprintf(buf, " %d YRS", d_2f3c_53f1[d_5d9c_9cd7]);
        f_1680_2867(x + 9.125, y + 1, c2 / 16, c2 % 16, 0x47, buf);
        f_1680_2867(x, y + 2, c2 / 16, c2 % 16, 0x47, " Character");
        sprintf(buf, " %s", d_5471_17f4[d_2f3c_5905[d_5d9c_9cd7]]);
        f_1680_2867(x + 9.125, y + 2, c2 / 16, c2 % 16, 0x47, buf);
        f_1680_2867(x, y + 3, c2 / 16, c2 % 16, 0x47, type == 0 ? " Reputation" : " Ability");
        sprintf(buf, " %s", f_88c9_72fa(d_5d9c_9cd7, type));
        f_1680_2867(x + 9.125, y + 3, c2 / 16, c2 % 16, 0x47, buf);
        if (type == 0) {
            f_1680_2867(x, y + 4, c2 / 16, c2 % 16, 0x47, " Board");
            sprintf(buf, " %d%%", d_5739_01ec[team]);
            f_1680_2867(x + 9.125, y + 4, c2 / 16, c2 % 16, 0x47, buf);
        }
    } else {
        f_1680_2867(x, y, c2 / 16, c2 % 16, 0x90, "");
        f_1680_2867(x, y + 1, c2 / 16, c2 % 16, 0x90, "      The coach is");
        f_1680_2867(x, y + 2, c2 / 16, c2 % 16, 0x90, "   temporary manager");
        f_1680_2867(x, y + 3, c2 / 16, c2 % 16, 0x90, "");
    }
    if (type == 0) {
        f_1680_2867(x, y + 4, c2 / 16, c2 % 16, 0x47, " Board");
        sprintf(buf, " %d%%", d_5739_01ec[team]);
        f_1680_2867(x + 9.125, y + 4, c2 / 16, c2 % 16, 0x47, buf);
    }
}

char far *f_88c9_72fa(int a, int b)
{
    char far *s;

    s = f_14d2_0d40();
    if (d_2f3c_53f1[a] > 35) {
        switch (d_2f3c_5e19[f_88c9_686f(b)][a] / 10) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            strcpy(s, "Poor");
            d_5d9c_9f4d = 1;
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
            strcpy(s, "Fair");
            d_5d9c_9f4d = 2;
            break;
        case 12:
        case 13:
        case 14:
            strcpy(s, "Good");
            d_5d9c_9f4d = 3;
            break;
        case 15:
        case 16:
            strcpy(s, "V Good");
            d_5d9c_9f4d = 4;
            break;
        default:
            strcpy(s, "Superb");
            d_5d9c_9f4d = 5;
            break;
        }
    } else {
        strcpy(s, "Unknown");
        d_5d9c_9f4d = 0;
    }
    return s;
}

void f_88c9_741e(void)
{
    for (d_5d9c_9f67 = 0; d_5d9c_9f67 <= 79; d_5d9c_9f67++) {
        d_5d9c_9f49 = f_a1c3_20c5(d_5d9c_9f67) % 20;
        d_5d9c_9cd5 = f_14d2_144d(f_14d2_13eb(d_5739_0148[d_5d9c_9f67] - 13, 0), 4);
        d_5d9c_9cd3 = (d_5739_01ec[d_5d9c_9f67] * (38 - d_5d9c_9f85)
                       + d_5471_2b4c[d_5d9c_9f49][d_5d9c_9cd5] * d_5d9c_9f85) / 38;
        d_5d9c_9e0d = (d_5739_01ec[d_5d9c_9f67] * 3 + d_5d9c_9cd3) / 4 - d_5739_01ec[d_5d9c_9f67];
        if (d_5d9c_9e0d < 0 && d_2f3c_7c73[0][d_5d9c_9f67] != 0) {
            d_5d9c_9a04 = d_5739_1d2a[d_2f3c_7c73[1][d_5d9c_9f67]][0][d_2f3c_7c73[2][d_5d9c_9f67]];
            d_5d9c_9a00 = d_5739_1d2a[d_2f3c_7c73[1][d_5d9c_9f67]][1][d_2f3c_7c73[2][d_5d9c_9f67]];
            d_5d9c_9b33 = d_5d9c_9f67 == d_5d9c_9a04 / 32 && d_5d9c_9a04 % 32 > d_5d9c_9a00 % 32
                       || d_5d9c_9f67 == d_5d9c_9a00 / 32 && d_5d9c_9a00 % 32 > d_5d9c_9a04 % 32;
            if (d_5d9c_9b33)
                d_5d9c_9e0d = 0;
        }
        f_7eeb_165b(d_5d9c_9f67, d_5d9c_9e0d);
        if (f_1680_0003(d_5d9c_9f67) && (d_5d9c_9f85 == 10 || d_5d9c_9f85 == 20 || d_5d9c_9f85 == 30)) {
            if (d_5471_2b4c[d_5d9c_9f49][d_5d9c_9cd5] < 50)
                f_88c9_776f(d_5d9c_9f67, "Our league position is unacceptable.");
            else if (d_5471_2b4c[d_5d9c_9f49][d_5d9c_9cd5] == 100)
                f_88c9_776f(d_5d9c_9f67, "An excellent league position.");
        }
    }
}

void f_88c9_76df(int club)
{
    char buf[320];
    unsigned char v;

    v = d_5739_01ec[club];
    if (v <= 24)
        strcpy(d_1f3e_3dd8, "were going to sack you anyway.");
    else if (v <= 34)
        strcpy(d_1f3e_3dd8, "are not particularly disappointed.");
    else if (v <= 59)
        strcpy(d_1f3e_3dd8, "are a little disappointed.");
    else if (v <= 94)
        strcpy(d_1f3e_3dd8, "are very disappointed at your decision.");
    else if (v <= 99)
        strcpy(d_1f3e_3dd8, "are astonished at your decision.");
    else
        strcpy(d_1f3e_3dd8, "think you are a right bandit.");
    sprintf(buf, "We %s", d_1f3e_3dd8);
    f_88c9_776f(club, buf);
}

void f_88c9_776f(int team, char far *s)
{
    char buf[320];

    sprintf(buf, "%s board message", (char far *)d_5d9c_08bc[team]);
    f_a1c3_5c9f(team, buf, s);
}

char far *f_88c9_77b0(int n)
{
    char far *p;

    p = f_14d2_0d40();
    switch (n) {
    case 0:
        strcpy(p, "Manager");
        break;
    case 1:
        strcpy(p, "Team Coach");
        break;
    case 2:
    case 3:
    case 4:
        strcpy(p, "League Scout");
        break;
    case 5:
        strcpy(p, "Youth Scout");
        break;
    case 6:
        strcpy(p, "Club Physio");
        break;
    }
    return p;
}

void f_88c9_7813(void)
{
    f_a1c3_27e4("");
    f_14d2_0722(16);
    f_14d2_075a(40, 60, 288, 144);
    f_14d2_0722(20);
    f_14d2_075a(36, 56, 284, 140);
    for (d_5d9c_9cd1 = 0; d_5d9c_9cd1 <= 3; d_5d9c_9cd1++)
        f_88c9_7889(d_5d9c_9cd1, 0);
}

void f_88c9_7889(int i, char c)
{
    char buf[320];

    sprintf(buf, "%*s", strlen(d_5d9c_00aa[i]) + (15 - strlen(d_5d9c_00aa[i]) / 2), d_5d9c_00aa[i]);
    f_1680_2ea0(5.25, i * 2.5 + 8.125, 0, c + 2, 237, buf);
}

void f_88c9_7933(int i, char c, int a, int b)
{
    char buf[320];

    sprintf(buf, "%*s", strlen(d_5d9c_00aa[i]) + (15 - strlen(d_5d9c_00aa[i]) / 2), d_5d9c_00aa[i]);
    f_1680_312c(5.25, i * 2.5 + 8.125, 0, c + 2, 237, 237L * a / b, buf);
}
