/* @at 8352:0000 */
/* @data 5d9c:5a80 */
/* @module */

/* Overlay 5: transfers and contracts: the cup group tables, picking and approaching
 * players, bids, fees, asking prices and tribunals, contract and wage talks, the offer
 * and factfile screens, completing transfers and the shortlist, and the menu of things
 * to do with one of your own players (f_8352_46de, whose branches' identical endings BCC
 * merges as the original only with -y: see the Makefile). */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <math.h>
#include <stdlib.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_8352_0000(void);
void f_8352_0220(void);
void f_8352_052a(void);
void f_8352_0599(void);
void f_8352_0792(void);
void f_8352_0b6d(int n);
char f_8352_0dd3(int team);
void f_8352_0e2f(int team);
int f_8352_0e64(int team);
void f_8352_1079(void);
void f_8352_1255(int p);
char f_8352_147b(int p, int team);
void f_8352_15e0(int p, char all);
void f_8352_172a(int team);
int f_8352_182c(int team, int p);
void f_8352_187f(int team, int player);
char f_8352_21e4(int p, int team, int n);
int f_8352_23a4(int a, int b);
char f_8352_248d(int x, int team, int p);
void f_8352_25d6(int team);
long f_8352_2b1f(int player, int club, long fee);
long f_8352_2db4(int club, int player, long fee);
void f_8352_2fed(int player, int club);
int f_8352_3455(int player, int team);
int f_8352_3565(int player, int team);
int f_8352_3666(int age);
void f_8352_36ab(int mode, int player);
void f_8352_3837(int player, char lit);
int f_8352_3916(int mode, int value, int lo, int player);
void f_8352_3cb9(int n, char draw);
void f_8352_3de6(int colour, char far *s);
void f_8352_3e9b(int player, int to, int from, long fee);
void f_8352_4324(int player, int from, int to);
void f_8352_4556(int player, int a);
char f_8352_462d(int player);
void f_8352_46de(int player);

void f_14d2_148f(void far *a, void far *b, int n);
void far *f_14d2_16bc(int handle, int page);
long f_14d2_1400(long a, long b);
int f_1680_0577(int x);
char f_1680_0003(int x);
char f_1680_0276(int x);
char f_88c9_04fb(int player);
char f_88c9_08dc(int player);
char f_88c9_0c92(int player);
void f_88c9_0e2d(int player, char c);
void f_88c9_0ec3(int player);
void f_88c9_0000(int player, int club, int v);
long f_88c9_26a0(long v, char c);
void f_9100_243d(int a, char c);
void f_9100_24d0(int a, char c, int i, int n);
void f_a1c3_3505(int a);
extern int d_5d9c_9fab;
extern int d_5d9c_9f6d;
extern int d_5d9c_9fa1;
extern int d_5d9c_9f55;
extern int d_5d9c_9ecf;
extern int d_5d9c_9d8b;
extern int d_5d9c_9d89;
extern int d_5d9c_9d87;
extern int d_5d9c_9d85;
extern int d_5d9c_9e43;
extern int d_5d9c_9e41;
extern int d_5d9c_9f33;
extern int d_5d9c_9d83;
extern int d_5d9c_9d81;
extern int d_5d9c_9d7f;
extern int d_5d9c_9d7d;
extern int d_5d9c_9f91;
extern int d_5d9c_9fa7;
extern int d_5d9c_a360;
extern char d_5d9c_9b5f;
extern char d_5d9c_9b92;
extern long far *d_5d9c_a058;
extern unsigned char far d_2f3c_0000[][2][4];
extern int far d_2f3c_0030[][4];
extern int far d_2f3c_2ba4[];
extern int far d_2f3c_29c4[];
extern int far d_2f3c_a08f[];
extern int far d_2f3c_addb[];
extern int far d_2f3c_7f93[];
extern unsigned char far d_1f3e_fcb5[][8][5];
extern int far d_1f3e_ff85[][5];
extern char far d_1f3e_9118[];
extern char far d_1f3e_9e64[];
extern char far d_1f3e_abb0[];
extern unsigned char huge d_483b_0000[][1702];
extern unsigned char huge d_3e42_0000[][1702];
int f_14d2_0c2a(int n);
int f_14d2_144d(int a, int b);
float f_1680_0037(int x);
int f_1680_00fb(int x);
char f_1680_014a(int a, int b);
int f_1680_02ed(int x);
char f_1680_031f(int x);
int f_a1c3_2107(int team);
long f_a1c3_36c4(int team);
long f_88c9_12b3(int p, int n);
int f_992a_251d(int a, int team, char pos, char second);
float f_992a_1ea0(int a, int team);
extern int d_5d9c_9f31;
extern int d_5d9c_9de9;
extern int d_5d9c_9f69;
extern char d_5d9c_9b13;
extern char d_5d9c_9b5d;
extern char d_5d9c_9b5e;
extern char d_5d9c_9b75;
extern float d_5d9c_9b00;
extern float d_5d9c_9ab0;
extern float d_5d9c_9ab4;
extern int d_5d9c_9e8b;
extern int d_5d9c_9f81;
extern int d_5d9c_9f49;
extern int d_5d9c_9d75;
extern int d_5d9c_9d77;
extern int d_5d9c_9d79;
extern int d_5d9c_9d7b;
extern unsigned char far d_5739_01ec[];
extern unsigned char far d_5739_023e[];
extern unsigned char far d_5739_06ba[];
extern long far d_2f3c_74f3[][80];
extern int far d_2f3c_1d94[][16];
extern int far d_2f3c_8033[];
extern unsigned char far d_2f3c_5905[];
extern unsigned char far d_2f3c_35ad[][3][13];
extern int far d_483b_b3b2[][2][12];
extern unsigned char far d_5471_2c14[][10];
extern char far d_1f3e_97be[];
extern char far d_1f3e_ccee[];
extern char far d_1f3e_d394[];
void f_1680_150c(int n, char far *title, char far *items);
void f_1680_18b2(int last);
void f_1680_33a0(float x, float y, int team);
void f_14d2_0c66(int ticks);
void f_a1c3_27e4(char far *title);
char far *f_a1c3_213c(int player);
char far *f_a1c3_2243(int player);
char f_88c9_00f0(int player, int team);
void f_88c9_243e(int line, char far *s);
void f_88c9_249e(char far *s);
extern char far d_1f3e_5878[];
extern char far d_1f3e_5877[];
extern char far d_1f3e_58c8[];
extern int far d_1f3e_fee5[];
extern int far d_1f3e_fee3[];
extern long far d_1f3e_fda1[];
extern char near *d_5d9c_08bc[];
extern char d_5d9c_9b57;
extern char d_5d9c_9b58;
extern char d_5d9c_9b59;
extern char d_5d9c_9b5a;
extern char d_5d9c_9b5b;
extern char d_5d9c_9b5c;
extern int d_5d9c_9faf;
extern int d_5d9c_9ba9;
extern int d_5d9c_9d67;
extern int d_5d9c_9d69;
extern int d_5d9c_9d6b;
extern int d_5d9c_9d6d;
extern int d_5d9c_9d6f;
extern int d_5d9c_9d71;
extern int d_5d9c_9d73;
extern long d_5d9c_9a2c;
extern long d_5d9c_9a30;
extern long d_5d9c_9a34;
extern long d_5d9c_9a38;
extern long d_5d9c_9a4c;
int f_14d2_13eb(int a, int b);
float f_14d2_1425(float a, float b);
long f_14d2_1462(long a, long b);
void f_a1c3_5e7a(int player, int a, char b);
extern char far d_1f3e_58c7[];
extern int d_5d9c_9d65;
extern char d_5d9c_9b56;
extern char d_5d9c_9b88;
extern char d_5d9c_9b53;
extern char d_5d9c_9b54;
extern long d_5d9c_9a24;
extern long d_5d9c_9a28;
extern char d_5d9c_9b52;
extern char d_5d9c_9b55;
extern int d_5d9c_9d43;
extern int d_5d9c_9d4d;
extern int d_5d9c_9d4f;
extern int d_5d9c_9d51;
extern int d_5d9c_9d53;
extern int d_5d9c_9d55;
extern int d_5d9c_9d57;
extern int d_5d9c_9d59;
extern int d_5d9c_9d5b;
extern int d_5d9c_9d5d;
extern int d_5d9c_9d5f;
extern int d_5d9c_9d61;
extern int d_5d9c_9d63;
void f_14d2_0722(int c);
void f_14d2_075a(int x1, int y1, int x2, int y2);
void f_14d2_073e(int c);
void f_14d2_07af(int x1, int y1, int x2, int y2);
int f_14d2_0ac1(void);
int f_14d2_0ab9(void);
void f_1680_27aa(int x, int y, int colour, char far *s);
void f_1680_2867(float x, float y, int bg, int fg, int w, char far *s);
void f_1680_2ea0(float x, float y, int bg, int fg, int w, char far *s);
void f_a1c3_2c23(void);
void f_a1c3_2d08(int a, float x, float y, int c, int d, int e, char far *s);
int f_a1c3_3298(int a);
void f_a1c3_30b1(int a, char b);
extern char far d_1f3e_4030[];
extern char far d_1f3e_4080[];
extern char far d_1f3e_40d0[];
extern char far d_1f3e_4d4c[];
extern int d_5d9c_9d45;
extern int d_5d9c_9d47;
extern int d_5d9c_9d49;
extern int d_5d9c_9d4b;
extern unsigned char far *d_5d9c_a04c;
extern int d_5d9c_a33c;
void f_14d2_0fb2(unsigned x, int y, unsigned x2, unsigned y2, int dy, int colour);
void f_14d2_0e27(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_9100_3edf(int player);
void f_9100_510c(int player, int from, int to, long fee);
void f_9100_518c(int player, int from, int to, long fee);
void f_88c9_2207(int player, int team, char far *s);
void f_88c9_24f1(char far *s);
void f_992a_0f10(int p);
int f_992a_1d7c(int player);
void f_992a_14f4(int p);
void f_992a_124c(int player);
void f_992a_187c(int player);
extern int d_5d9c_a350;
extern char far *d_5d9c_9fce;
extern float d_5d9c_9af8;
extern char far d_1f3e_4fcc[];
extern int d_5d9c_9daf;
extern int d_5d9c_a35c;
extern int d_5d9c_a352;
extern char d_5d9c_9b8e;
extern int far d_2f3c_85f7[];
extern int far d_2f3c_bb27[];
extern char far d_1f3e_a50a[];
extern char far d_1f3e_b256[];
extern char far d_1f3e_c648[];
extern char far d_1f3e_e0e0[];
extern char far d_1f3e_3fe0[];
extern long (far *d_5d9c_a01a)[80];
extern char (far *d_5d9c_9fc2)[82][391];
extern int d_5d9c_9f29;
extern int far d_483b_a372[][26];
extern unsigned char far d_5739_0290[];
extern unsigned char far d_5739_02e2[];
extern char far d_1f3e_5be8[][0x6a6];
extern char far d_1f3e_8a72[];
extern int far d_2f3c_2d59[][13];
extern int d_5d9c_9d41;
extern int d_5d9c_9ef1;
extern char d_5d9c_9b51;

/* the steps of the digits a value is set with (+/- on the offer screen) */
static int d_5d9c_5a80[] = { 1, 10, 100, 1000, 10000 };

void f_88c9_0f13(int player);
void f_88c9_1b98(int player);
void f_88c9_1edc(int player, char flag);
long f_88c9_2177(int player);
char f_88c9_25cc(void);
unsigned f_14d2_09ce(char far *s, char far *set);
extern char d_5d9c_9b50;
extern char d_5d9c_9b96;
extern char d_5d9c_9b8a;
extern char d_5d9c_9b4f;
extern int d_5d9c_9d3f;
extern int d_5d9c_9eef;
extern int d_5d9c_9dd7;
extern int d_5d9c_9d3d;
extern int d_5d9c_a332;
extern int d_5d9c_a334;
extern long d_5d9c_9a20;
extern char (far *d_5d9c_9fb6)[151];
extern char (far *d_5d9c_9fba)[151];
extern char far d_1f3e_57c4[];
extern char far d_1f3e_4262[];
extern char far d_1f3e_bfa2[];

void f_8352_0000(void)
{
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 1; d_5d9c_9f6d++) {
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 2; d_5d9c_9fa1++) {
            for (d_5d9c_9f55 = d_5d9c_9fa1 + 1; d_5d9c_9f55 <= 3; d_5d9c_9f55++) {
                d_5d9c_9d8b = d_2f3c_0000[1][d_5d9c_9f6d][d_5d9c_9fa1] * 2 + d_2f3c_0000[2][d_5d9c_9f6d][d_5d9c_9fa1];
                d_5d9c_9d89 = d_2f3c_0000[1][d_5d9c_9f6d][d_5d9c_9f55] * 2 + d_2f3c_0000[2][d_5d9c_9f6d][d_5d9c_9f55];
                d_5d9c_9d87 = d_2f3c_0000[4][d_5d9c_9f6d][d_5d9c_9fa1];
                d_5d9c_9d85 = d_2f3c_0000[4][d_5d9c_9f6d][d_5d9c_9f55];
                d_5d9c_9e43 = d_2f3c_0000[5][d_5d9c_9f6d][d_5d9c_9fa1];
                d_5d9c_9e41 = d_2f3c_0000[5][d_5d9c_9f6d][d_5d9c_9f55];
                if (d_5d9c_9d8b < d_5d9c_9d89 ||
                    (d_5d9c_9d8b == d_5d9c_9d89 && d_5d9c_9d87 - d_5d9c_9e43 < d_5d9c_9d85 - d_5d9c_9e41) ||
                    (d_5d9c_9d8b == d_5d9c_9d89 && d_5d9c_9d87 - d_5d9c_9e43 == d_5d9c_9d85 - d_5d9c_9e41 &&
                     d_5d9c_9d87 < d_5d9c_9d85)) {
                    f_14d2_148f(&d_2f3c_0030[d_5d9c_9f6d][d_5d9c_9fa1], &d_2f3c_0030[d_5d9c_9f6d][d_5d9c_9f55], 2);
                    for (d_5d9c_9ecf = 0; d_5d9c_9ecf <= 5; d_5d9c_9ecf++)
                        f_14d2_148f(&d_2f3c_0000[d_5d9c_9ecf][d_5d9c_9f6d][d_5d9c_9fa1],
                                    &d_2f3c_0000[d_5d9c_9ecf][d_5d9c_9f6d][d_5d9c_9f55], 1);
                }
            }
        }
    }
    if (d_5d9c_9fab == 79) {
        d_2f3c_2ba4[0] = d_2f3c_0030[0][0];
        d_2f3c_2ba4[1] = d_2f3c_0030[1][0];
    }
}

void f_8352_0220(void)
{
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 7; d_5d9c_9f6d++) {
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 3; d_5d9c_9fa1++) {
            for (d_5d9c_9f55 = d_5d9c_9fa1 + 1; d_5d9c_9f55 <= 4; d_5d9c_9f55++) {
                if (d_1f3e_fcb5[0][d_5d9c_9f6d][d_5d9c_9fa1] > 0)
                    d_5d9c_9d8b = d_1f3e_fcb5[1][d_5d9c_9f6d][d_5d9c_9fa1] * 2 + d_1f3e_fcb5[2][d_5d9c_9f6d][d_5d9c_9fa1];
                else
                    d_5d9c_9d8b = -1;
                if (d_1f3e_fcb5[0][d_5d9c_9f6d][d_5d9c_9f55] > 0)
                    d_5d9c_9d89 = d_1f3e_fcb5[1][d_5d9c_9f6d][d_5d9c_9f55] * 2 + d_1f3e_fcb5[2][d_5d9c_9f6d][d_5d9c_9f55];
                else
                    d_5d9c_9d89 = -1;
                d_5d9c_9d87 = d_1f3e_fcb5[4][d_5d9c_9f6d][d_5d9c_9fa1];
                d_5d9c_9d85 = d_1f3e_fcb5[4][d_5d9c_9f6d][d_5d9c_9f55];
                d_5d9c_9e43 = d_1f3e_fcb5[5][d_5d9c_9f6d][d_5d9c_9fa1];
                d_5d9c_9e41 = d_1f3e_fcb5[5][d_5d9c_9f6d][d_5d9c_9f55];
                if (d_5d9c_9d8b < d_5d9c_9d89 ||
                    (d_5d9c_9d8b == d_5d9c_9d89 && d_5d9c_9d87 - d_5d9c_9e43 < d_5d9c_9d85 - d_5d9c_9e41) ||
                    (d_5d9c_9d8b == d_5d9c_9d89 && d_5d9c_9d87 - d_5d9c_9e43 == d_5d9c_9d85 - d_5d9c_9e41 &&
                     d_5d9c_9d87 < d_5d9c_9d85)) {
                    f_14d2_148f(&d_1f3e_ff85[d_5d9c_9f6d][d_5d9c_9fa1], &d_1f3e_ff85[d_5d9c_9f6d][d_5d9c_9f55], 2);
                    for (d_5d9c_9ecf = 0; d_5d9c_9ecf <= 5; d_5d9c_9ecf++)
                        f_14d2_148f(&d_1f3e_fcb5[d_5d9c_9ecf][d_5d9c_9f6d][d_5d9c_9fa1],
                                    &d_1f3e_fcb5[d_5d9c_9ecf][d_5d9c_9f6d][d_5d9c_9f55], 1);
                }
            }
        }
        if (d_5d9c_9fab == 67)
            d_2f3c_29c4[d_5d9c_9f6d] = d_1f3e_ff85[d_5d9c_9f6d][0];
    }
    switch (d_5d9c_9fab) {
    case 15: case 21: case 23:
        d_5d9c_9f33 = d_5d9c_9fab + 2;
        break;
    case 17: case 31:
        d_5d9c_9f33 = d_5d9c_9fab + 4;
        break;
    case 25: case 35: case 41: case 47: case 53:
        d_5d9c_9f33 = d_5d9c_9fab + 6;
        break;
    case 59:
        d_5d9c_9f33 = 67;
        break;
    }
}

void f_8352_052a(void)
{
    d_5d9c_9d83 = f_1680_0577(d_5d9c_9fab);
    d_5d9c_9d81 = 0;
    f_8352_0599();
    if (f_1680_0276(d_5d9c_9fab) == 0) {
        f_8352_0792();
        f_8352_1079();
        f_8352_0b6d((d_5d9c_9d83 < 5 ? 18 : 0) + (d_5d9c_9fab == 67 ? 25 : 0) + 15);
    }
    if (d_5d9c_9d81 > 0)
        f_a1c3_3505(0);
}

void f_8352_0599(void)
{
    int v;

    d_5d9c_9d83 = f_1680_0577(d_5d9c_9fab);
    for (d_5d9c_9f91 = 0; d_5d9c_9f91 <= 1699; d_5d9c_9f91++) {
        if (f_1680_0003(d_483b_0000[18][d_5d9c_9f91]) == 0) {
            if (d_2f3c_a08f[d_5d9c_9f91] == 0) {
                if (d_1f3e_9118[d_5d9c_9f91] == 0 && f_88c9_04fb(d_5d9c_9f91) == 0) {
                    if (f_8352_462d(d_5d9c_9f91) == 0) {
                        f_8352_2fed(d_5d9c_9f91, d_483b_0000[18][d_5d9c_9f91]);
                        if (d_5d9c_9b5f) {
                            d_2f3c_a08f[d_5d9c_9f91] = (d_5d9c_9fa7 + d_5d9c_9d7f) * 100 + d_5d9c_9d83;
                            d_2f3c_addb[d_5d9c_9f91] = d_5d9c_9d7d;
                            f_8352_15e0(d_5d9c_9f91, 0);
                        }
                    } else
                        f_88c9_0e2d(d_5d9c_9f91, 0);
                }
            } else {
                v = f_8352_3455(d_5d9c_9f91, d_483b_0000[18][d_5d9c_9f91]);
                if (d_2f3c_addb[d_5d9c_9f91] < v)
                    d_2f3c_addb[d_5d9c_9f91] = v;
            }
        } else if (d_2f3c_a08f[d_5d9c_9f91] == 0 && !d_1f3e_9118[d_5d9c_9f91] && !f_88c9_04fb(d_5d9c_9f91))
            f_88c9_0000(d_5d9c_9f91, d_483b_0000[18][d_5d9c_9f91],
                        d_2f3c_7f93[d_483b_0000[18][d_5d9c_9f91]] - 646);
    }
}

void f_8352_0792(void)
{
    if (d_5d9c_9b92) {
        f_9100_243d(5, 0);
        f_9100_243d(6, 0);
    }
    d_5d9c_9d83 = f_1680_0577(d_5d9c_9fab);
    for (d_5d9c_9f91 = 0; d_5d9c_9f91 <= 1699; d_5d9c_9f91++) {
        unsigned char c;
        int n;

        c = d_483b_0000[18][d_5d9c_9f91];
        if (d_5d9c_9b92)
            f_9100_24d0(6, -1, d_5d9c_9f91, 1699);
        if ((d_5d9c_9f91 + 1) % 4 != d_5d9c_9d83 % 4 && d_5d9c_9b92 == 0)
            continue;
        if (f_1680_0003(c) && d_5d9c_9b92)
            continue;
        if (d_1f3e_9118[d_5d9c_9f91] == 0) {
            if (d_3e42_0000[19][d_5d9c_9f91] < 2) {
                n = f_1680_0003(c) ? 2 : 0;
                if (d_3e42_0000[14][d_5d9c_9f91] > n && f_88c9_04fb(d_5d9c_9f91)) {
                    if (f_88c9_08dc(d_5d9c_9f91))
                        f_88c9_0e2d(d_5d9c_9f91, -1);
                    else
                        d_3e42_0000[14][d_5d9c_9f91] = 0;
                    d_3e42_0000[19][d_5d9c_9f91]++;
                }
            }
        } else if (d_1f3e_9118[d_5d9c_9f91] && d_1f3e_9e64[d_5d9c_9f91]) {
            n = f_1680_0003(c) ? 2 : 0;
            if (d_3e42_0000[15][d_5d9c_9f91] > n &&
                f_88c9_04fb(d_5d9c_9f91) == 0) {
                if (f_88c9_0c92(d_5d9c_9f91))
                    f_88c9_0ec3(d_5d9c_9f91);
                else
                    d_3e42_0000[15][d_5d9c_9f91] = 0;
            }
        }
        if (d_1f3e_9118[d_5d9c_9f91] == 0) {
            if (f_1680_0003(c) == 0 && f_8352_462d(d_5d9c_9f91))
                f_88c9_0e2d(d_5d9c_9f91, 0);
        } else if (d_1f3e_9118[d_5d9c_9f91] && d_1f3e_9e64[d_5d9c_9f91] == 0 && f_1680_0003(c) == 0) {
            if (f_8352_462d(d_5d9c_9f91)) {
                if (d_1f3e_abb0[d_5d9c_9f91] == 0 &&
                    (d_3e42_0000[11][d_5d9c_9f91] == 4 || d_3e42_0000[11][d_5d9c_9f91] == 8)) {
                    d_5d9c_a058 = f_14d2_16bc(d_5d9c_a360, 1);
                    d_5d9c_a058[d_5d9c_9f91] = f_14d2_1400(f_88c9_26a0(d_5d9c_a058[d_5d9c_9f91] * 0.75, -1), 1000L);
                    if (d_5d9c_a058[d_5d9c_9f91] < 10000L) {
                        d_5d9c_a058[d_5d9c_9f91] = 0;
                        d_1f3e_abb0[d_5d9c_9f91] = -1;
                    }
                }
            } else
                f_88c9_0ec3(d_5d9c_9f91);
        }
    }
}

void f_8352_0b6d(int n)
{
    float best = 0;
    int count = 0;
    int k;

    for (d_5d9c_9f31 = 0; d_5d9c_9f31 <= 79; d_5d9c_9f31++) {
        if ((d_5739_023e[d_5d9c_9f31] < f_a1c3_2107(d_5d9c_9f31) - 1 || f_1680_02ed(d_5d9c_9f31) < 14)
            && f_1680_0003(d_5d9c_9f31) == 0 && f_8352_0dd3(d_5d9c_9f31)) {
            f_8352_0e2f(d_5d9c_9f31);
            if (d_5d9c_9b5e)
                count++;
        }
    }
    for (k = 0; count < n && k < 80; k++) {
        d_5d9c_9f31 = -1;
        for (d_5d9c_9de9 = 1; d_5d9c_9de9 <= 10; d_5d9c_9de9++) {
            d_5d9c_9f69 = f_14d2_0c2a(80);
            switch (d_5d9c_9f69 / 20) {
            case 0:
                d_5d9c_9b13 = d_2f3c_74f3[0][d_5d9c_9f69] > 3000000L ? -1 : 0;
                break;
            case 1:
                d_5d9c_9b13 = d_2f3c_74f3[0][d_5d9c_9f69] > 1000000L ? -1 : 0;
                break;
            case 2:
            case 3:
                d_5d9c_9b13 = d_2f3c_74f3[0][d_5d9c_9f69] > 500000L ? -1 : 0;
                break;
            }
            d_5d9c_9b00 = (d_2f3c_1d94[d_5d9c_9f69][0] * 0.5 + (100 - d_5739_01ec[d_5d9c_9f69]) * 0.1
                           + f_a1c3_2107(d_5d9c_9f69) - d_5739_023e[d_5d9c_9f69] + f_14d2_0c2a(5))
                          * (d_5d9c_9b13 ? 3 : 1);
            if (d_5d9c_9b00 > best || d_5d9c_9f31 == -1) {
                best = d_5d9c_9b00;
                d_5d9c_9f31 = d_5d9c_9f69;
            }
        }
        if (f_1680_0003(d_5d9c_9f31) == 0 && f_8352_0dd3(d_5d9c_9f31)) {
            f_8352_0e2f(d_5d9c_9f31);
            if (d_5d9c_9b5e)
                count++;
        }
    }
}

char f_8352_0dd3(int team)
{
    char r = 0;

    if (d_5739_06ba[team] < 3 && d_2f3c_1d94[team][0] > 0 && d_5739_023e[team] < 26
        && d_5739_01ec[team] >= 30 && d_2f3c_8033[team] < 0x28a)
        r = -1;
    return r;
}

void f_8352_0e2f(int team)
{
    d_5d9c_9b5e = 0;
    d_5d9c_9f91 = f_8352_0e64(team);
    if (d_5d9c_9f91 > -1) {
        f_8352_187f(team, d_5d9c_9f91);
        if (d_5d9c_9b5d)
            d_5d9c_9b5e = -1;
    }
}

int f_8352_0e64(int team)
{
    int best;

    d_5d9c_9f91 = -1;
    best = 0;
    for (d_5d9c_9f6d = 1; d_5d9c_9f6d <= d_2f3c_1d94[team][0]; d_5d9c_9f6d++) {
        d_5d9c_9fa1 = d_2f3c_1d94[team][d_5d9c_9f6d];
        if (d_1f3e_97be[d_5d9c_9fa1] == 0 && d_1f3e_ccee[d_5d9c_9fa1] == 0 && f_1680_031f(d_5d9c_9fa1) == 0
            && f_88c9_12b3(d_5d9c_9fa1, -1) <= f_a1c3_36c4(team)) {
            for (d_5d9c_9e8b = 0; d_5d9c_9e8b <= 1; d_5d9c_9e8b++) {
                for (d_5d9c_9f81 = 0; d_5d9c_9f81 <= 10; d_5d9c_9f81++) {
                    d_5d9c_9f49 = d_2f3c_35ad[team][0][d_5d9c_9f81];
                    if (f_1680_014a(d_5d9c_9fa1, d_5d9c_9f49)) {
                        d_5d9c_9d7b = f_992a_251d(d_483b_b3b2[team][d_5d9c_9e8b][d_5d9c_9f81], team, d_5d9c_9f49,
                                                  d_5d9c_9e8b == 1 ? 1 : 0)
                                      * f_992a_1ea0(d_483b_b3b2[team][d_5d9c_9e8b][d_5d9c_9f81], team);
                        if ((d_5d9c_9d79 = f_992a_251d(d_5d9c_9fa1, team, d_5d9c_9f49, d_5d9c_9e8b == 1 ? 1 : 0)
                                           * f_992a_1ea0(d_5d9c_9fa1, team)) - d_5d9c_9d7b > best
                            && (d_5d9c_9e8b == 0 || d_5d9c_9f91 == -1)) {
                            d_5d9c_9f91 = d_5d9c_9fa1;
                            best = d_5d9c_9d79 - d_5d9c_9d7b;
                        }
                    }
                }
                d_5d9c_9e8b += d_5d9c_9f91 != -1;
            }
        }
    }
    return d_5d9c_9f91;
}

void f_8352_1079(void)
{
    int i;
    int n;

    n = 0;
    for (d_5d9c_9f91 = 0; d_5d9c_9f91 <= 1699; d_5d9c_9f91++)
        if (d_1f3e_9118[d_5d9c_9f91] && d_1f3e_97be[d_5d9c_9f91] == 0 && d_3e42_0000[23][d_5d9c_9f91] < 3)
            n++;
    for (i = 1; i <= (d_5d9c_9b92 ? 1700 : 25); i++) {
        do {
            if (d_5d9c_9b92)
                d_5d9c_9f91 = i - 1;
            else
                d_5d9c_9f91 = f_14d2_0c2a(1700);
            d_5d9c_9b75 = 0;
            if (d_3e42_0000[23][d_5d9c_9f91] < 3 && d_1f3e_97be[d_5d9c_9f91] == 0) {
                if (d_5d9c_9b92 == 0) {
                    if (f_14d2_144d(15, n) < i
                        && (d_483b_0000[23][d_5d9c_9f91] > 1 || d_1f3e_d394[d_5d9c_9f91]))
                        d_5d9c_9b75 = -1;
                } else if (d_5d9c_9b92) {
                    if (fabs(f_1680_00fb(d_5d9c_9f91) - f_1680_0037(d_483b_0000[18][d_5d9c_9f91])) > 3)
                        d_5d9c_9b75 = -1;
                }
                if (d_1f3e_9118[d_5d9c_9f91])
                    d_5d9c_9b75 = -1;
            }
        } while (d_5d9c_9b75 == 0 && d_5d9c_9b92 == 0);
        if (d_5d9c_9b75)
            f_8352_1255(d_5d9c_9f91);
    }
}

void f_8352_1255(int p)
{
    char used[80];

    memset(used, 0, 80);
    for (d_5d9c_9d77 = 1; d_5d9c_9d77 <= 40; d_5d9c_9d77++) {
        d_5d9c_9f69 = f_14d2_0c2a(80);
        if (used[d_5d9c_9f69] == 0) {
            if (d_483b_0000[18][p] != d_5d9c_9f69 && f_1680_0003(d_5d9c_9f69) == 0
                && d_2f3c_1d94[d_5d9c_9f69][0] < 10
                && d_5471_2c14[d_2f3c_5905[d_2f3c_7f93[d_5d9c_9f69]]][d_3e42_0000[17][p]] < 8
                && f_8352_182c(d_5d9c_9f69, p) == 0 && d_2f3c_8033[d_5d9c_9f69] < 0x28a) {
                d_5d9c_9ab4 = f_1680_00fb(p);
                d_5d9c_9ab0 = f_1680_0037(d_5d9c_9f69);
                if (d_5d9c_9ab0 - 6 < d_5d9c_9ab4 && d_5d9c_9ab0 + 6 > d_5d9c_9ab4 && f_8352_147b(p, d_5d9c_9f69)) {
                    d_3e42_0000[23][p]++;
                    if (d_3e42_0000[23][p] == 3)
                        d_5d9c_9d77 = 40;
                    d_2f3c_1d94[d_5d9c_9f69][0]++;
                    d_2f3c_1d94[d_5d9c_9f69][d_2f3c_1d94[d_5d9c_9f69][0]] = p;
                }
            }
            used[d_5d9c_9f69] = -1;
        }
    }
}

char f_8352_147b(int p, int team)
{
    char r = 0;

    for (d_5d9c_9e8b = 0; d_5d9c_9e8b <= 1; d_5d9c_9e8b++) {
        if (f_8352_21e4(p, team, d_5d9c_9e8b + 1)) {
            for (d_5d9c_9f81 = 0; d_5d9c_9f81 <= 10; d_5d9c_9f81++) {
                d_5d9c_9f49 = d_2f3c_35ad[team][0][d_5d9c_9f81];
                if (f_1680_014a(p, d_5d9c_9f49)) {
                    d_5d9c_9d7b = f_992a_251d(d_483b_b3b2[team][d_5d9c_9e8b][d_5d9c_9f81], team, d_5d9c_9f49,
                                              d_5d9c_9e8b == 1 ? 1 : 0)
                                  * f_992a_1ea0(d_483b_b3b2[team][d_5d9c_9e8b][d_5d9c_9f81], team);
                    if ((d_5d9c_9d79 = f_992a_251d(p, team, d_5d9c_9f49, d_5d9c_9e8b == 1 ? 1 : 0)
                                       * f_992a_1ea0(p, team)) - d_5d9c_9d7b > 0) {
                        r = -1;
                        d_5d9c_9f81 = 10;
                        d_5d9c_9e8b = 1;
                    }
                }
            }
        }
    }
    return r;
}

void f_8352_15e0(int p, char all)
{
    if (d_3e42_0000[23][p] > 0) {
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 79; d_5d9c_9f69++) {
            if ((f_1680_0003(d_5d9c_9f69) == 0 || d_483b_0000[18][p] == d_5d9c_9f69 || all)
                && f_8352_182c(d_5d9c_9f69, p) > 0) {
                if (f_1680_0003(d_5d9c_9f69) == 0)
                    d_3e42_0000[23][p] -= 1;
                d_5d9c_9d75 = f_8352_182c(d_5d9c_9f69, p);
                d_2f3c_1d94[d_5d9c_9f69][d_5d9c_9d75] = d_2f3c_1d94[d_5d9c_9f69][d_2f3c_1d94[d_5d9c_9f69][0]];
                d_2f3c_1d94[d_5d9c_9f69][0]--;
            }
        }
    }
}

void f_8352_172a(int team)
{
    int k;

    for (k = 1; k <= d_2f3c_1d94[team][0]; k++) {
        if (f_8352_147b(d_2f3c_1d94[team][k], team) == 0) {
            d_3e42_0000[23][d_2f3c_1d94[team][k]] -= 1;
            d_2f3c_1d94[team][k] = d_2f3c_1d94[team][d_2f3c_1d94[team][0]];
            d_2f3c_1d94[team][0]--;
        }
    }
}

int f_8352_182c(int team, int p)
{
    int r = 0;
    int k;

    for (k = 1; k <= d_2f3c_1d94[team][0]; k++)
        if (d_2f3c_1d94[team][k] == p) {
            r = k;
            k = d_2f3c_1d94[team][0];
        }
    return r;
}

void f_8352_187f(int team, int player)
{
    char done;
    char tell;
    unsigned char own;
    int best;
    float bestval;
    char name[80];
    char stays[80];
    char buf[320];
    char but[80];

    bestval = 0;
    memset(d_1f3e_58c8, 0, 80);
    memset(d_1f3e_5878, 0, 80);
    d_5d9c_9b5c = 0;
    done = 0;
    d_5d9c_9b5d = 0;
    d_5d9c_9b5b = 0;
    best = -1;
    own = d_483b_0000[18][player];
    d_5d9c_9b5a = f_1680_0003(own);
    d_5d9c_9b59 = f_1680_0003(team);
    d_5d9c_9d73 = -d_5d9c_9b5a - d_5d9c_9b59;
again:
    d_5d9c_9b58 = 0;
    if (d_5d9c_9b59 != 0) {
        f_a1c3_27e4("Buy Player");
        f_1680_33a0(1.0, 4.0, team);
        sprintf(buf, "Board limit on spending : %ld", f_a1c3_36c4(team));
        f_88c9_243e(7, buf);
        sprintf(buf, "Approach %s ?", f_a1c3_213c(player));
        f_88c9_243e(9, buf);
        f_1680_150c(12, "", "*Exit|Approach|");
menu:
        f_1680_18b2(1);
        if (d_5d9c_9faf != 1)
            d_5d9c_9b58 = 0;
        else
            d_5d9c_9b58 = -1;
    } else
        d_5d9c_9b58 = -1;
    if (d_5d9c_9b58) {
        strcpy(name, f_a1c3_2243(player));
        if (f_88c9_00f0(player, team)) {
            if (d_5d9c_9b5a == 0 && d_5d9c_9b59 != 0) {
                sprintf(buf, "%s allow approach", (char far *)d_5d9c_08bc[own]);
                f_88c9_249e(buf);
            }
            if (f_8352_21e4(player, team, d_5d9c_9d71 = f_8352_23a4(player, team))) {
                if (d_5d9c_9b59 != 0 || d_5d9c_9b5a != 0) {
                    sprintf(buf, "%s is keen on the move", (char far *)name);
                    f_88c9_249e(buf);
                }
                done = -1;
                goto out;
            }
            if (d_5d9c_9b59 == 0 && d_5d9c_9b5a == 0)
                goto out;
            sprintf(buf, "%s rejects the move", (char far *)name);
            if ((d_5d9c_9b59 && d_5d9c_9b5a) == 0) {
                sprintf(but, "But %s", (char far *)buf);
                strcpy(buf, but);
            }
            f_88c9_249e(buf);
            if (d_5d9c_9b59 != 0) {
                if (d_5d9c_9b5a == 0)
                    goto menu;
                goto again;
            }
        } else if (d_5d9c_9b59 != 0) {
            if (d_5d9c_9b5a != 0)
                goto again;
            sprintf(buf, "%s refuse approach", (char far *)d_5d9c_08bc[own]);
            f_88c9_249e(buf);
            goto menu;
        }
    }
out:
    if (done == 0) {
        if (d_5d9c_9b59 == 0) {
            d_3e42_0000[23][player] -= 1;
            d_5d9c_9d75 = f_8352_182c(team, player);
            d_2f3c_1d94[team][d_5d9c_9d75] = d_2f3c_1d94[team][d_2f3c_1d94[team][0]];
            d_2f3c_1d94[team][0]--;
        }
    } else {
        d_1f3e_58c8[0] = -1;
        d_1f3e_fee5[0] = team;
        d_5d9c_9d6f = 1;
        d_5739_06ba[team]++;
        for (d_5d9c_9d6b = 0; d_5d9c_9d6b <= 79; d_5d9c_9d6b++) {
            if (d_5d9c_9d6b != team && f_8352_0dd3(d_5d9c_9d6b) && f_8352_182c(d_5d9c_9d6b, player) > 0) {
                if (f_1680_0003(d_5d9c_9d6b))
                    d_5d9c_9b57 = f_8352_248d(d_5d9c_9d6b, team, player) ? -1 : 0;
                else
                    d_5d9c_9b57 = d_483b_0000[12][player] != 0 || f_a1c3_36c4(d_5d9c_9d6b) >= f_88c9_12b3(player, -1) && f_14d2_0c2a(3) > 0 ? -1 : 0;
                if (d_5d9c_9b57 != 0) {
                    if (f_8352_21e4(player, d_5d9c_9d6b, d_5d9c_9d71 = f_8352_23a4(player, d_5d9c_9d6b)) == 0) {
                        if (f_1680_0003(d_5d9c_9d6b))
                            f_88c9_249e("He is not interested");
                        else {
                            d_3e42_0000[23][player] -= 1;
                            d_5d9c_9d75 = f_8352_182c(d_5d9c_9d6b, player);
                            d_2f3c_1d94[d_5d9c_9d6b][d_5d9c_9d75] = d_2f3c_1d94[d_5d9c_9d6b][d_2f3c_1d94[d_5d9c_9d6b][0]];
                            d_2f3c_1d94[d_5d9c_9d6b][0]--;
                        }
                    } else {
                        if (f_1680_0003(d_5d9c_9d6b)) {
                            f_88c9_249e("He is interested");
                            d_5d9c_9d73++;
                        }
                        d_1f3e_58c8[d_5d9c_9d6f] = d_5d9c_9d71 == 1;
                        d_1f3e_fee5[d_5d9c_9d6f] = d_5d9c_9d6b;
                        d_5d9c_9d6f++;
                        d_5739_06ba[d_5d9c_9d6b]++;
                    }
                }
            }
        }
        if (d_1f3e_abb0[player] == 0) {
            d_5d9c_9a38 = 0;
            d_5d9c_9a34 = 0;
            d_5d9c_9a30 = f_88c9_26a0(f_88c9_12b3(player, own), -1);
            d_5d9c_9a2c = d_5d9c_9a30;
            if (d_5d9c_9d73 > 0) {
                d_5d9c_9ba9 = 0;
                d_5d9c_9d69 = 7;
                f_8352_36ab(0, player);
                if (d_1f3e_9118[player])
                    sprintf(buf, "%s is valued at %ld", f_a1c3_2243(player), d_5d9c_9a30);
                else
                    sprintf(buf, "%s is not yet valued", f_a1c3_2243(player));
                f_8352_3de6(1, buf);
            }
            f_8352_25d6(player);
            tell = 0;
        } else {
            if (d_5d9c_9d73 > 0) {
                for (d_5d9c_9d6d = 1; d_5d9c_9d6d <= d_5d9c_9d6f; d_5d9c_9d6d++) {
                    if (f_1680_0003(d_5d9c_9f69 = d_1f3e_fee3[d_5d9c_9d6d]) == 0) {
                        sprintf(buf, "%s also want him", (char far *)d_5d9c_08bc[d_5d9c_9f69]);
                        f_88c9_249e(buf);
                    }
                }
            }
            tell = -1;
        }
        d_5d9c_9d67 = 0;
        for (d_5d9c_9d6d = 1; d_5d9c_9d6d <= d_5d9c_9d6f; d_5d9c_9d6d++) {
            d_5d9c_9f69 = d_1f3e_fee3[d_5d9c_9d6d];
            if (d_1f3e_5877[d_5d9c_9d6d] != 0 || d_1f3e_abb0[player] != 0) {
                d_5d9c_9ab0 = f_1680_0037(d_5d9c_9f69) + (d_5d9c_9f69 == team ? 0.5 : 0);
                if (d_5d9c_9ab0 > bestval || best == -1) {
                    bestval = d_5d9c_9ab0;
                    best = d_5d9c_9f69;
                    if (d_1f3e_abb0[player] == 0)
                        d_5d9c_9a4c = d_1f3e_fda1[d_5d9c_9d6d];
                    else
                        d_5d9c_9a4c = 0;
                }
                d_5d9c_9d67++;
            }
        }
        sprintf(stays, "He stays at %s", (char far *)d_5d9c_08bc[own]);
        if (best > -1) {
            if (d_5d9c_9d73 > 0) {
                f_14d2_0c66(50);
                if (d_5d9c_9d67 > 1) {
                    sprintf(buf, "He decides to join %s", (char far *)d_5d9c_08bc[best]);
                    if (tell)
                        f_88c9_249e(buf);
                    else
                        f_8352_3de6(6, buf);
                }
            }
            f_8352_2fed(player, best);
            if (f_1680_0003(best))
                tell = 0;
            if (d_5d9c_9b5f) {
                if (d_5d9c_9d73 > 0) {
                    sprintf(buf, "He signs for %s", (char far *)d_5d9c_08bc[best]);
                    if (tell)
                        f_88c9_249e(buf);
                    else
                        f_8352_3de6(6, buf);
                }
                f_8352_3e9b(player, best, own, d_5d9c_9a4c);
                d_5d9c_9b5d = -1;
            } else if (tell)
                f_88c9_249e(stays);
            else
                f_8352_3de6(6, stays);
        } else if (d_5d9c_9d73 > 0)
            f_8352_3de6(6, stays);
    }
}

char f_8352_21e4(int p, int team, int n)
{
    char r;
    float a;
    float b;
    int m;
    unsigned char c2;
    unsigned char c1;

    r = 0;
    c1 = d_3e42_0000[11][p];
    d_5d9c_9d65 = d_5471_2c14[d_3e42_0000[17][p]][d_2f3c_5905[d_2f3c_7f93[team]]];
    if (d_5d9c_9d65 < 8) {
        a = f_1680_0037(d_483b_0000[18][p]);
        b = f_1680_0037(team);
        c2 = d_483b_0000[23][p];
        m = f_14d2_13eb(c2, 1 - (c1 > 8 ? 2 : 1) * (d_1f3e_9118[p] ? -1 : 0));
        if (n < m && (m - n + (b + 1) >= a || f_1680_00fb(p) < 11) ||
            n == m && n < 3 && b > a ||
            n > m && n < 3 && a + 1 <= b ||
            a + 2 <= b)
            r = -1;
    }
    return r;
}

int f_8352_23a4(int a, int b)
{
    d_5d9c_9d71 = 3;
    for (d_5d9c_9e8b = 0; d_5d9c_9e8b <= 1; d_5d9c_9e8b++) {
        for (d_5d9c_9f81 = 0; d_5d9c_9f81 <= 10; d_5d9c_9f81++) {
            d_5d9c_9f49 = d_2f3c_35ad[b][0][d_5d9c_9f81];
            if (f_1680_014a(a, d_5d9c_9f49)) {
                d_5d9c_9d7b = f_992a_251d(d_483b_b3b2[b][d_5d9c_9e8b][d_5d9c_9f81], b, d_5d9c_9f49,
                                          d_5d9c_9e8b == 1 ? 1 : 0);
                d_5d9c_9d79 = f_992a_251d(a, b, d_5d9c_9f49, d_5d9c_9e8b == 1 ? 1 : 0);
                if (d_5d9c_9d79 > d_5d9c_9d7b) {
                    d_5d9c_9d71 = d_5d9c_9e8b + 1;
                    d_5d9c_9f81 = 10;
                    d_5d9c_9e8b = 1;
                }
            }
        }
    }
    return d_5d9c_9d71;
}

char f_8352_248d(int x, int team, int p)
{
    char buf[320];

    do {
        d_5d9c_9b56 = 0;
        d_5d9c_9b57 = 0;
        sprintf(buf, "%s bid", (char far *)d_5d9c_08bc[team]);
        f_a1c3_27e4(buf);
        f_1680_33a0(1, 4.0, x);
        sprintf(buf, "%s want %s", (char far *)d_5d9c_08bc[team], f_a1c3_213c(p));
        f_88c9_243e(7, buf);
        f_88c9_243e(9, "He is on your shortlist");
        sprintf(buf, "Approach %s ?", f_a1c3_2243(p));
        f_88c9_243e(11, buf);
        f_1680_150c(14, "", "View Factfile|Ignore|Approach|");
        f_1680_18b2(2);
        if (d_5d9c_9faf == 0) {
            do
                f_a1c3_5e7a(p, -1, 0);
            while (!d_5d9c_9b88);
            d_5d9c_9b88 = 0;
            d_5d9c_9b56 = -1;
        } else if (d_5d9c_9faf == 2)
            d_5d9c_9b57 = -1;
    } while (d_5d9c_9b56 != 0);
    return d_5d9c_9b57;
}

void f_8352_25d6(int team)
{
    long v;
    char ok;
    char buf[320];

    for (d_5d9c_9d77 = 1; d_5d9c_9d77 <= 3; d_5d9c_9d77++) {
        for (d_5d9c_9d6d = 1; d_5d9c_9d6d <= d_5d9c_9d6f; d_5d9c_9d6d++) {
            if (d_1f3e_5877[d_5d9c_9d6d] != 0 && d_1f3e_fda1[d_5d9c_9d6d] < d_5d9c_9a38)
                d_1f3e_5877[d_5d9c_9d6d] = 0;
            if (d_1f3e_5877[d_5d9c_9d6d] == 0) {
                d_5d9c_9f69 = d_1f3e_fee3[d_5d9c_9d6d];
                if (d_5d9c_9d77 == 1) {
                    if (d_5d9c_9b59 != 0 || d_5d9c_9b5a != 0 || d_2f3c_a08f[team] == 0)
                        v = f_88c9_26a0(f_14d2_1425(f_88c9_12b3(team, d_5d9c_9f69), f_a1c3_36c4(d_5d9c_9f69)), 0);
                    else
                        v = f_14d2_1462(d_5d9c_9a30, f_a1c3_36c4(d_5d9c_9f69));
                    if (v > d_5d9c_9a30)
                        v = d_5d9c_9a30;
                } else
                    v = d_1f3e_fda1[d_5d9c_9d6d];
                d_5d9c_9b53 = d_5d9c_9d73 > 0 ? -1 : 0;
                d_5d9c_9b54 = d_1f3e_58c7[d_5d9c_9d6d];
                d_1f3e_fda1[d_5d9c_9d6d] = f_8352_2b1f(d_5d9c_9f69, team, v);
                if (d_5d9c_9d73 > 0) {
                    if (f_1680_0003(d_5d9c_9f69) == 0)
                        f_14d2_0c66(25);
                    sprintf(buf, "%s make a bid of %ld", (char far *)d_5d9c_08bc[d_5d9c_9f69],
                            d_1f3e_fda1[d_5d9c_9d6d]);
                    f_8352_3de6(1, buf);
                }
                if (d_1f3e_fda1[d_5d9c_9d6d] > d_5d9c_9a38)
                    d_5d9c_9a38 = d_1f3e_fda1[d_5d9c_9d6d];
            }
        }
        if (d_5d9c_9d77 > 1)
            d_5d9c_9a30 = d_5d9c_9a34;
        if (d_5d9c_9a30 < d_5d9c_9a38)
            d_5d9c_9a30 = d_5d9c_9a38;
        d_5d9c_9b53 = d_5d9c_9d73 > 0 ? -1 : 0;
        d_5d9c_9a34 = f_8352_2db4(d_483b_0000[18][team], team, d_5d9c_9a30);
        ok = 0;
        for (d_5d9c_9d6d = 1; d_5d9c_9d6d <= d_5d9c_9d6f; d_5d9c_9d6d++) {
            d_5d9c_9f69 = d_1f3e_fee3[d_5d9c_9d6d];
            if (d_1f3e_fda1[d_5d9c_9d6d] == d_5d9c_9a34) {
                if (d_1f3e_5877[d_5d9c_9d6d] == 0) {
                    d_1f3e_5877[d_5d9c_9d6d] = -1;
                    d_5d9c_9b5b = -1;
                    if (d_5d9c_9d73 > 0) {
                        f_14d2_0c66(25);
                        sprintf(buf, "%s offer is accepted", (char far *)d_5d9c_08bc[d_5d9c_9f69]);
                        f_8352_3de6(1, buf);
                    }
                }
            } else {
                ok = -1;
                if (d_5d9c_9d73 > 0) {
                    f_14d2_0c66(25);
                    sprintf(buf, "%s offer is refused", (char far *)d_5d9c_08bc[d_5d9c_9f69]);
                    f_8352_3de6(1, buf);
                }
            }
        }
        if (ok == 0)
            d_5d9c_9d77 = 3;
    }
    if (d_2f3c_a08f[team] == 0 && d_5d9c_9b5b == 0) {
        d_5d9c_9a4c = f_88c9_26a0(f_88c9_12b3(team, -1), 0);
        if (d_5d9c_9a4c > d_5d9c_9a34)
            d_5d9c_9a4c = d_5d9c_9a34;
        if (d_5d9c_9d73 > 0) {
            f_14d2_0c66(25);
            sprintf(buf, "Tribunal sets fee at %ld", d_5d9c_9a4c);
            f_8352_3de6(6, buf);
        }
        d_5d9c_9b5c = -1;
        for (d_5d9c_9d6d = 1; d_5d9c_9d6d <= d_5d9c_9d6f; d_5d9c_9d6d++) {
            d_5d9c_9f69 = d_1f3e_fee3[d_5d9c_9d6d];
            if (f_a1c3_36c4(d_5d9c_9f69) >= d_5d9c_9a4c) {
                d_1f3e_fda1[d_5d9c_9d6d] = d_5d9c_9a4c;
                d_1f3e_5877[d_5d9c_9d6d] = -1;
                d_5d9c_9b5b = -1;
            } else if (d_5d9c_9d73 > 0) {
                sprintf(buf, "The %s board refuse to spend that much", (char far *)d_5d9c_08bc[d_5d9c_9f69]);
                f_8352_3de6(1, buf);
            }
        }
    } else if (d_5d9c_9b5b == 0 && d_5d9c_9d73 > 0)
        f_8352_3de6(6, "No agreement is reached");
}

long f_8352_2b1f(int player, int club, long fee)
{
    d_5d9c_9a28 = fee;
    if (f_1680_0003(player)) {
        do {
            d_5d9c_9b75 = -1;
            d_5d9c_9d63 = d_5d9c_9a28 / 1000;
            d_5d9c_9d61 = player;
            d_5d9c_9d5f = f_8352_3916(0, d_5d9c_9d63, 0, club);
            if (d_5d9c_9b55) {
                do
                    f_a1c3_5e7a(club, -1, 0);
                while (!d_5d9c_9b88);
                d_5d9c_9b88 = 0;
                d_5d9c_9b75 = 0;
                f_8352_36ab(0, club);
            }
            d_5d9c_9a28 = (long)d_5d9c_9d5f * 1000;
            if (d_5d9c_9b75 && f_a1c3_36c4(player) < d_5d9c_9a28) {
                f_8352_3de6(1, "The board refuse to spend that much");
                d_5d9c_9b75 = 0;
            }
        } while (!d_5d9c_9b75);
    } else {
        d_5d9c_9a24 = d_5d9c_9a28;
        if (f_14d2_0c2a(3) > 0)
            d_5d9c_9a28 = d_5d9c_9a28 * (f_14d2_0c2a(10) / 100.0 + 1.1);
        if (d_5d9c_9a28 < d_5d9c_9a38)
            d_5d9c_9a28 = f_14d2_1462(d_5d9c_9a38, d_5d9c_9a2c * (d_5d9c_9b54 ? 2.5 : 1.5));
        if (d_5d9c_9a28 > d_5d9c_9a34 && d_5d9c_9d6f == 1)
            d_5d9c_9a28 = d_5d9c_9a34;
        if (d_5d9c_9a28 > d_5d9c_9a34 * 0.95)
            d_5d9c_9a28 = d_5d9c_9a34;
        if (f_a1c3_36c4(player) < d_5d9c_9a28)
            d_5d9c_9a28 = f_a1c3_36c4(player);
        if (d_5d9c_9a28 != d_5d9c_9a34)
            d_5d9c_9a28 = f_88c9_26a0(d_5d9c_9a28, 0);
        if (d_5d9c_9a28 < d_5d9c_9a24)
            d_5d9c_9a28 = d_5d9c_9a24;
    }
    return d_5d9c_9a28;
}

long f_8352_2db4(int club, int player, long fee)
{
    int n;
    long first;
    int saved;

    saved = d_5d9c_9d43;
    d_5d9c_9d43 = club;
    d_5d9c_9a34 = fee;
    if (f_1680_0003(d_5d9c_9d43)) {
        do {
            d_5d9c_9b75 = -1;
            d_5d9c_9d63 = d_5d9c_9a34 / 1000;
            n = d_5d9c_9a38 / 1000;
            d_5d9c_9d5f = f_8352_3916(1, d_5d9c_9d63, n, player);
            if (d_5d9c_9b55) {
                do
                    f_a1c3_5e7a(player, -1, 0);
                while (!d_5d9c_9b88);
                d_5d9c_9b88 = 0;
                d_5d9c_9b75 = 0;
                f_8352_36ab(0, player);
            }
            d_5d9c_9a34 = (long)d_5d9c_9d5f * 1000;
            if (d_5d9c_9b75 && d_5d9c_9a34 < f_88c9_12b3(player, -1) * 0.5) {
                f_8352_3de6(1, "The board expect more for him");
                d_5d9c_9b75 = 0;
            }
        } while (!d_5d9c_9b75);
    } else {
        first = d_5d9c_9a34;
        if (f_14d2_0c2a(2) == 0)
            d_5d9c_9a34 = d_5d9c_9a34 * (0.9 - f_14d2_0c2a(10) / 100);
        if (d_5d9c_9a34 * 0.95 < d_5d9c_9a38)
            d_5d9c_9a34 = d_5d9c_9a38;
        else if (d_5d9c_9a34 > d_5d9c_9a38)
            d_5d9c_9a34 = f_88c9_26a0(d_5d9c_9a34, 0);
        if (d_5d9c_9a34 > first)
            d_5d9c_9a34 = first;
    }
    d_5d9c_9d43 = saved;
    return d_5d9c_9a34;
}

void f_8352_2fed(int player, int club)
{
    d_5d9c_9d5d = f_8352_3666(d_483b_0000[17][player]);
    d_5d9c_9d5b = f_8352_3455(player, club);
    d_5d9c_9d59 = d_483b_0000[14][player] / 10 + 2.5;
    d_5d9c_9b5f = 0;
    if (f_1680_0003(club) && d_5d9c_9b52 == 0) {
        char buf[320];

        d_5d9c_9ba9 = 1;
        d_5d9c_9d69 = 7;
        f_8352_36ab(2, player);
        sprintf(buf, "He wants a %d year contract", d_5d9c_9d5d);
        f_8352_3de6(1, buf);
        d_5d9c_9d57 = 0;
        d_5d9c_9d55 = 10;
        d_5d9c_9d53 = -1;
        do {
            do {
                d_5d9c_9b75 = -1;
                d_5d9c_9d63 = d_5d9c_9d53 == -1 ? d_5d9c_9d5d : d_5d9c_9d53;
                d_5d9c_9d5f = f_8352_3916(2, d_5d9c_9d63, 1, player);
                if (d_5d9c_9b55) {
                    do
                        f_a1c3_5e7a(player, -1, 0);
                    while (!d_5d9c_9b88);
                    d_5d9c_9b88 = 0;
                    d_5d9c_9b75 = 0;
                    f_8352_36ab(2, player);
                }
                d_5d9c_9d53 = d_5d9c_9d5f;
            } while (!d_5d9c_9b75);
            if (d_5d9c_9d53 != d_5d9c_9d5d &&
                (f_14d2_0c2a(abs(d_5d9c_9d5d - d_5d9c_9d53) + 2) > 0 ||
                 abs(d_5d9c_9d5d - d_5d9c_9d53) >= d_5d9c_9d55)) {
                sprintf(buf, "He refuses %d year offer", d_5d9c_9d53);
                f_8352_3de6(1, buf);
                d_5d9c_9d57++;
                if (d_5d9c_9d57 <= d_5d9c_9d59)
                    d_5d9c_9d55 = abs(d_5d9c_9d5d - d_5d9c_9d53);
                d_5d9c_9b75 = 0;
            }
        } while (d_5d9c_9d57 <= d_5d9c_9d59 && d_5d9c_9b75 == 0);
        if (d_5d9c_9b75) {
            sprintf(buf, "He accepts %d year offer", d_5d9c_9d53);
            f_8352_3de6(1, buf);
            sprintf(buf, "He wants %d per week", d_5d9c_9d5b);
            f_8352_3de6(1, buf);
            d_5d9c_9d7f = d_5d9c_9d53;
            d_5d9c_9b53 = -1;
            d_5d9c_9d57 = 0;
            d_5d9c_9d51 = -1;
            d_5d9c_9d4f = 0;
            d_5d9c_9d4d = f_8352_3565(player, club);
            do {
                do {
                    d_5d9c_9b75 = -1;
                    d_5d9c_9d63 = d_5d9c_9d51 == -1 ? d_5d9c_9d5b : d_5d9c_9d51;
                    d_5d9c_9d5f = f_8352_3916(3, d_5d9c_9d63, 100, player);
                    if (d_5d9c_9b55) {
                        do
                            f_a1c3_5e7a(player, -1, 0);
                        while (!d_5d9c_9b88);
                        d_5d9c_9b88 = 0;
                        d_5d9c_9b75 = 0;
                        f_8352_36ab(2, player);
                    }
                    d_5d9c_9d51 = d_5d9c_9d5f;
                    if (d_5d9c_9b75 && d_5d9c_9d51 > d_5d9c_9d4d) {
                        f_8352_3de6(1, "The board refuse to spend that per week");
                        d_5d9c_9b75 = 0;
                    }
                } while (!d_5d9c_9b75);
                if ((d_5d9c_9d5b * (1 - f_14d2_0c2a(6) * 0.05) > d_5d9c_9d51 ||
                     d_5d9c_9d51 <= d_5d9c_9d4f || d_2f3c_addb[player] > d_5d9c_9d51 &&
                     d_483b_0000[17][player] < 30) &&
                    abs(d_5d9c_9d51 - d_5d9c_9d5b) > f_14d2_0c2a(20) + 25) {
                    sprintf(buf, "He wants more than %d per week", d_5d9c_9d51);
                    f_8352_3de6(1, buf);
                    d_5d9c_9d57++;
                    if (d_5d9c_9d57 <= d_5d9c_9d59)
                        d_5d9c_9d4f = d_5d9c_9d51;
                    d_5d9c_9b75 = 0;
                }
            } while (d_5d9c_9d57 <= d_5d9c_9d59 && d_5d9c_9b75 == 0);
            if (d_5d9c_9b75) {
                sprintf(buf, "He accepts %d per week", d_5d9c_9d51);
                f_8352_3de6(1, buf);
                d_5d9c_9d7d = d_5d9c_9d51;
                d_5d9c_9b5f = -1;
            }
        }
        if (d_5d9c_9b5f == 0)
            f_8352_3de6(6, "No deal");
    } else {
        d_5d9c_9d7f = d_5d9c_9d5d;
        d_5d9c_9d7d = d_5d9c_9d5b;
        d_5d9c_9b5f = -1;
    }
}

int f_8352_3455(int player, int team)
{
    unsigned char c;

    c = d_3e42_0000[18][player];
    d_5d9c_9d4b = (d_483b_0000[0][player] * 4 + c) / 200;
    d_5d9c_9d49 = f_14d2_13eb((int)(exp(d_5d9c_9d4b) * 42.0) * ((f_1680_0037(team) - 12.0) * 0.075 + 1), 100);
    d_5d9c_9d49 = d_5d9c_9d49 / 25 * 25;
    if (d_2f3c_addb[player] > d_5d9c_9d49 && d_483b_0000[17][player] < 30)
        d_5d9c_9d49 = d_2f3c_addb[player];
    return d_5d9c_9d49;
}

int f_8352_3565(int player, int team)
{
    unsigned char c;

    c = d_3e42_0000[18][player];
    d_5d9c_9d4b = (d_483b_0000[0][player] * 4 + c) / 200;
    d_5d9c_9d4d = f_14d2_13eb((int)(exp(d_5d9c_9d4b) * 42.0) * ((f_1680_0037(team) - 12.0) * 0.075 + 1) * 1.5, 100) / 50.0 * 50.0;
    if (d_2f3c_addb[player] > d_5d9c_9d4d)
        d_5d9c_9d4d = d_2f3c_addb[player];
    return d_5d9c_9d4d;
}

int f_8352_3666(int age)
{
    d_5d9c_9d5d = f_14d2_0c2a(5) + 1;
    if (age >= 27 && age <= 31)
        d_5d9c_9d5d = f_14d2_144d(32 - age, d_5d9c_9d5d);
    else if (age > 31)
        d_5d9c_9d5d = f_14d2_144d(d_5d9c_9d5d, 2);
    return d_5d9c_9d5d;
}

void f_8352_36ab(int mode, int player)
{
    char buf[320];

    if (mode == 0) {
        sprintf(buf, "%s - Transfer Fee", f_a1c3_213c(player));
        strcpy(d_1f3e_4d4c, "Fee Negotiations");
    } else if (mode == 1) {
        sprintf(buf, "%s - Asking Price", f_a1c3_213c(player));
        strcpy(d_1f3e_4d4c, "Set Asking Price");
    } else if (mode == 2) {
        sprintf(buf, "%s - Contract", f_a1c3_213c(player));
        strcpy(d_1f3e_4d4c, "Set Contract");
    } else {
        sprintf(buf, "%s - Wage Increase", f_a1c3_213c(player));
        strcpy(d_1f3e_4d4c, "Set Weekly Wage");
    }
    f_a1c3_27e4(buf);
    f_14d2_0722(16);
    f_14d2_075a(14, 36, 314, 127);
    f_14d2_0722(31);
    f_14d2_075a(10, 32, 310, 123);
    f_14d2_073e(19);
    f_14d2_07af(10, 32, 310, 123);
    sprintf(buf, " %s", d_1f3e_4d4c);
    f_1680_2867(1.625, 5.0, 1, 2, 154, buf);
    f_8352_3837(player, 0);
    d_5d9c_9b53 = -1;
}

void f_8352_3837(int player, char lit)
{
    f_14d2_0722(16);
    f_14d2_075a(14, 135, 172, 192);
    f_14d2_0722(lit ? 28 : 20);
    f_14d2_075a(10, 131, 168, 188);
    f_14d2_073e(17);
    f_14d2_07af(10, 131, 168, 188);
    strcpy(d_1f3e_40d0, f_a1c3_2243(player));
    f_1680_27aa(79 - strlen(d_1f3e_40d0) * 3 + 19, 156, 1, d_1f3e_40d0);
    f_1680_27aa(74, 164, 1, "Factfile");
}

int f_8352_3916(int mode, int value, int lo, int player)
{
    d_5d9c_9b55 = 0;
    d_5d9c_9d47 = value;
    d_5d9c_9d45 = mode == 2 ? 5 : 9999;
    if (d_5d9c_9b53 != 0) {
        f_a1c3_2c23();
        f_14d2_0722(16);
        f_14d2_075a(180, 135, 314, 192);
        f_14d2_0722(24);
        f_14d2_075a(176, 131, 310, 188);
        f_14d2_073e(22);
        f_14d2_07af(176, 131, 310, 188);
        if (mode == 0)
            sprintf(d_1f3e_4080, "%s Offer", (char far *)d_5d9c_08bc[d_5d9c_9d61]);
        else if (mode == 1)
            sprintf(d_1f3e_4080, "%s Ask", (char far *)d_5d9c_08bc[d_5d9c_9d43]);
        else if (mode == 2)
            strcpy(d_1f3e_4080, " Length");
        else
            strcpy(d_1f3e_4080, " Wages p/w");
        f_14d2_0722(30);
        f_14d2_075a(180, 135, 306, 150);
        f_1680_27aa(251 - strlen(d_1f3e_4080) * 3, 146, 6, d_1f3e_4080);
        f_a1c3_2d08(2, 22.75, 19.625, 1, 14, 26, " - ");
        f_a1c3_2d08(2, 34.875, 19.625, 1, 14, 26, " + ");
        f_a1c3_2d08(2, 22.75, 21.75, 1, 14, 123, "      DONE");
        f_1680_2ea0(33.125, 19.625, 14, 1, 9, mode == 2 || mode == 3 ? "" : "K");
        strcpy(d_1f3e_4030, "    ");
        f_8352_3cb9(d_5d9c_9d47, -1);
    }
    do {
        d_5d9c_9faf = f_a1c3_3298(-1);
        if (d_5d9c_9faf == 1) {
            d_5d9c_9d47 = f_14d2_13eb(d_5d9c_9d47 - d_5d9c_5a80[7 - d_5d9c_9d69], lo);
            f_8352_3cb9(d_5d9c_9d47, 0);
        } else if (d_5d9c_9faf == 2) {
            d_5d9c_9d47 = f_14d2_144d(d_5d9c_9d47 + d_5d9c_5a80[7 - d_5d9c_9d69], d_5d9c_9d45);
            f_8352_3cb9(d_5d9c_9d47, 0);
        } else if (d_5d9c_9faf >= 4) {
            if ((d_5d9c_9faf == 7 || mode != 2) && d_5d9c_9d69 != d_5d9c_9faf) {
                d_5d9c_a04c = f_14d2_16bc(d_5d9c_a33c, 1);
                d_5d9c_a04c[d_5d9c_9d69 - 1] = 0xe1;
                f_a1c3_30b1(d_5d9c_9d69, 0);
                d_5d9c_9d69 = d_5d9c_9faf;
                d_5d9c_a04c = f_14d2_16bc(d_5d9c_a33c, 1);
                d_5d9c_a04c[d_5d9c_9d69 - 1] = 1;
                f_a1c3_30b1(d_5d9c_9d69, 0);
            }
        } else if (f_14d2_0ac1() >= 10 && f_14d2_0ac1() <= 168 && f_14d2_0ab9() >= 131 && f_14d2_0ab9() <= 188) {
            d_5d9c_9b55 = -1;
            f_8352_3837(player, -1);
        }
    } while (d_5d9c_9faf != 3 && d_5d9c_9b55 == 0);
    d_5d9c_9b53 = 0;
    return d_5d9c_9d47;
}

void f_8352_3cb9(int n, char draw)
{
    char s[2];

    s[1] = 0;
    sprintf(d_1f3e_4fcc, "%04d", n);
    for (d_5d9c_9ecf = 1; d_5d9c_9ecf <= 4; d_5d9c_9ecf++) {
        s[0] = d_1f3e_4fcc[d_5d9c_9ecf - 1];
        if (d_1f3e_4030[d_5d9c_9ecf - 1] != s[0]) {
            if (draw) {
                d_5d9c_9af8 = (d_5d9c_9ecf - 1) * 1.625 + 26.625;
                f_a1c3_2d08(2, d_5d9c_9af8, 19.625, d_5d9c_9ecf + 3 != d_5d9c_9d69 ? 14 : 0, 1, 8, s);
            } else {
                d_5d9c_9fce = f_14d2_16bc(d_5d9c_a350, 1);
                strcpy(d_5d9c_9fce + (d_5d9c_9ecf + 2) * 40, s);
                f_a1c3_30b1(d_5d9c_9ecf + 3, 0);
            }
        }
    }
    strcpy(d_1f3e_4030, d_1f3e_4fcc);
}

void f_8352_3de6(int colour, char far *s)
{
    if (d_5d9c_9ba9 == 9) {
        for (d_5d9c_9daf = 1; d_5d9c_9daf <= 4; d_5d9c_9daf++) {
            f_14d2_0fb2(12, 42, 308, 121, 2, 31);
            f_14d2_073e(31);
            f_14d2_0e27(12, 42, 308, 42);
            f_14d2_0e27(12, 43, 308, 43);
        }
        d_5d9c_9ba9 = 8;
    }
    f_1680_27aa(23, d_5d9c_9ba9 * 8 + 50, colour, s);
    d_5d9c_9ba9++;
    if (colour == 6)
        f_14d2_0c66(50);
}

void f_8352_3e9b(int player, int to, int from, long fee)
{
    int saved;
    char buf[320];

    saved = from;
    d_5d9c_9d43 = from;
    if (d_5d9c_9fab > 4)
        f_9100_3edf(player);
    d_3e42_0000[12][player] = d_3e42_0000[0][player];
    d_3e42_0000[13][player] = d_3e42_0000[1][player];
    d_2f3c_bb27[player] = d_2f3c_85f7[player];
    d_2f3c_a08f[player] = (d_5d9c_9fa7 + d_5d9c_9d7f) * 100 + f_1680_0577(d_5d9c_9fab);
    d_2f3c_addb[player] = d_5d9c_9d7d;
    d_3e42_0000[11][player] = 0;
    d_1f3e_9118[player] = 0;
    d_1f3e_97be[player] = -1;
    d_1f3e_9e64[player] = 0;
    d_1f3e_a50a[player] = -1;
    d_1f3e_abb0[player] = 0;
    d_1f3e_b256[player] = 0;
    d_1f3e_c648[player] = 0;
    d_1f3e_e0e0[player] = 0;
    if (d_5d9c_9d43 != to) {
        if (d_483b_0000[0][player] > d_483b_0000[15][player])
            d_483b_0000[15][player] = d_483b_0000[0][player];
        d_3e42_0000[10][player] = d_5d9c_9d43;
        f_8352_4324(player, d_5d9c_9d43, to);
        d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 1);
        d_5d9c_a01a[2][d_5d9c_9d43] += fee * 0.9;
        d_5d9c_a01a[9][to] += fee;
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 79; d_5d9c_9f69++)
            if (d_5d9c_9f69 != to && d_5d9c_9f69 != d_5d9c_9d43)
                d_5d9c_a01a[6][d_5d9c_9f69] += fee * (1.0 / 780);
        sprintf(buf, "%04d%07ld%02d", player, fee, to);
        d_5d9c_9fc2 = f_14d2_16bc(d_5d9c_a352, 1);
        strcat(d_5d9c_9fc2[0][d_5d9c_9d43], buf);
        sprintf(buf, "%04d%07ld%02d", player, fee, d_5d9c_9d43);
        strcat(d_5d9c_9fc2[1][to], buf);
        f_9100_510c(player, d_5d9c_9d43, to, fee);
        f_9100_518c(player, d_5d9c_9d43, to, fee);
    }
    f_8352_15e0(player, 0);
    if (f_1680_0003(to) == 0 && d_5d9c_9b8e == 0) {
        if (fee > 0) {
            sprintf(d_1f3e_3fe0, "for %ld", fee);
            if (d_5d9c_9b5c)
                strcat(d_1f3e_3fe0, "T");
        } else
            strcpy(d_1f3e_3fe0, "Free Transfer");
        sprintf(buf, "%s %s", (char far *)d_5d9c_08bc[to], d_1f3e_3fe0);
        f_88c9_2207(player, d_5d9c_9d43, buf);
    }
    if (f_1680_0003(to) == 0)
        f_8352_172a(to);
    d_5d9c_9d43 = saved;
}

void f_8352_4324(int player, int from, int to)
{
    if (from != to) {
        for (d_5d9c_9f29 = 0; d_5d9c_9f29 <= d_5739_023e[from] - 1; d_5d9c_9f29++)
            if (d_483b_a372[from][d_5d9c_9f29] == player)
                d_483b_a372[from][d_5d9c_9f29] = d_483b_a372[from][d_5739_023e[from] - 1];
        d_483b_a372[to][d_5739_023e[to]] = player;
        d_5739_023e[to]++;
        d_5739_023e[from]--;
        if (d_483b_0000[20][player] > 0) {
            d_5739_0290[to]++;
            d_5739_0290[from]--;
        } else if (d_1f3e_5be8[0][player] != 0) {
            d_5739_02e2[to]++;
            d_5739_02e2[from]--;
        }
    }
    if (f_1680_0003(from) == 0)
        f_992a_0f10(player);
    else if (d_1f3e_8a72[player] != 0) {
        d_2f3c_2d59[from][f_992a_1d7c(player)] = 0x6a4;
        d_1f3e_8a72[player] = 0;
    }
    if (d_483b_0000[23][player] < 3)
        f_992a_14f4(player);
    if (from != to) {
        d_483b_0000[18][player] = to;
        if (f_1680_0003(to) == 0 && d_483b_0000[20][player] == 0)
            f_992a_124c(player);
        d_483b_0000[23][player] = 3;
        f_992a_187c(player);
    }
}

void f_8352_4556(int player, int a)
{
    char s[80];
    char buf[320];

    if (a > 0)
        f_8352_187f(a - 1, player);
    else if (a == -1)
        f_8352_462d(player);
    else if (a < -1) {
        d_5d9c_9d41 = -a - 2;
        d_2f3c_1d94[d_5d9c_9d41][0]++;
        d_2f3c_1d94[d_5d9c_9d41][d_2f3c_1d94[d_5d9c_9d41][0]] = player;
        sprintf(buf, "Ok - %s shortlisted", f_a1c3_2243(player));
        if (d_5d9c_9ef1 > 1) {
            sprintf(s, "|for %s", (char far *)d_5d9c_08bc[d_5d9c_9d41]);
            strcat(buf, s);
        }
        f_88c9_24f1(buf);
    }
}

char f_8352_462d(int player)
{
    d_5d9c_9b51 = 0;
    if (f_1680_0003(d_483b_0000[18][player]))
        f_8352_46de(player);
    else if (d_1f3e_97be[player] == 0 && f_1680_031f(player) == 0 && d_483b_0000[23][player] == 3
             && d_2f3c_8033[d_483b_0000[18][player]] < 0x28a)
        d_5d9c_9b51 = -1;
    return d_5d9c_9b51;
}

void f_8352_46de(int player)
{
    char buf[320];

    do {
        d_5d9c_9b56 = 0;
        d_5d9c_9b50 = f_88c9_04fb(player);
        f_a1c3_27e4("Transfer Status");
        f_1680_33a0(1.0, 4.0, d_483b_0000[18][player]);
        f_88c9_243e(7, f_a1c3_213c(player));
        if (d_1f3e_9118[player] != 0) {
            d_5d9c_a058 = f_14d2_16bc(d_5d9c_a360, 0);
            if (d_5d9c_a058[player] > 0)
                sprintf(buf, "For sale at %ld", d_5d9c_a058[player]);
            else
                strcpy(buf, "Available for free transfer");
            f_88c9_243e(9, buf);
            strcpy(d_1f3e_57c4, "Revalue Him|Remove From List|");
            d_5d9c_9b96 = 0;
        } else if (d_1f3e_97be[player] != 0) {
            f_88c9_243e(9, "Not for sale at any price");
            strcpy(d_1f3e_57c4, "Allow Approaches|");
            d_5d9c_9b96 = 1;
        } else {
            f_88c9_243e(9, "Currently open to approach");
            strcpy(d_1f3e_57c4, "List Him|Not For Sale|");
            d_5d9c_9b96 = 2;
        }
        strcat(d_1f3e_57c4, "Fine Him|");
        if (d_1f3e_e0e0[player] == 0)
            strcat(d_1f3e_57c4, "Insure Him|");
        else
            strcat(d_1f3e_57c4, "Uninsure Him|");
        if (d_2f3c_a08f[player] == 0 && d_1f3e_9118[player] == 0)
            strcat(d_1f3e_57c4, "Renew Contract|");
        else if (d_2f3c_a08f[player] > 0 && d_1f3e_9118[player] == 0)
            strcat(d_1f3e_57c4, "Increase Wages|");
        sprintf(buf, "*Exit|%s", d_1f3e_57c4);
        f_1680_150c(12, "", buf);
        do {
            d_5d9c_9b8a = -1;
            f_1680_18b2(4 - (d_5d9c_9b96 == 1 ? 1 : 0) + (d_1f3e_9118[player] == 0));
            d_5d9c_9d3f = d_5d9c_9faf;
            if (d_5d9c_9d3f == 1 && d_5d9c_9b96 == 0) {
                f_88c9_0f13(player);
                d_5d9c_9b56 = -1;
            } else if (d_5d9c_9d3f == 1 && d_5d9c_9b96 == 1) {
                if (f_88c9_25cc()) {
                    sprintf(buf, "%s now approachable", f_a1c3_2243(player));
                    f_88c9_249e(buf);
                    d_1f3e_97be[player] = 0;
                    d_5d9c_9b56 = -1;
                } else
                    { 0; T46: d_5d9c_9b8a = 0; }   /* no code: this 0;, the one at the next
                                                     * branch and the two gotos to T46 make BCC
                                                     * keep the copies of the identical endings
                                                     * the original keeps (with -y) */
            } else if (d_5d9c_9d3f == 1 && d_5d9c_9b96 == 2) {
                if (f_88c9_25cc()) {
                    sprintf(buf, "%s now transfer listed", f_a1c3_2243(player));
                    f_88c9_249e(buf);
                    f_88c9_0e2d(player, 0);
                    d_5d9c_9b56 = -1;
                } else
                    { 0; goto T46; }
            } else if (d_5d9c_9d3f == 2 && d_5d9c_9b96 == 0) {
                if (f_88c9_25cc()) {
                    if (d_1f3e_9e64[player] != 0) {
                        if (d_5d9c_9b50 != 0 && d_2f3c_a08f[player] == 0) {
                            sprintf(buf, "%s refuses", f_a1c3_2243(player));
                            f_88c9_249e(buf);
                            sprintf(buf, "He %s", d_1f3e_4262);
                            f_88c9_249e(buf);
                            d_5d9c_9b8a = 0;
                        } else if (d_5d9c_9b50 != 0 && d_2f3c_a08f[player] > 0) {
                            sprintf(buf, "%s told to stay", f_a1c3_2243(player));
                            f_88c9_249e(buf);
                            f_88c9_249e("But he's still unhappy");
                            f_88c9_0ec3(player);
                            d_5d9c_9b56 = -1;
                        } else {
                            sprintf(buf, "%s agrees to stay", f_a1c3_2243(player));
                            f_88c9_249e(buf);
                            f_88c9_0ec3(player);
                            d_5d9c_9b56 = -1;
                        }
                    } else {
                        sprintf(buf, "%s removed from list", f_a1c3_2243(player));
                        f_88c9_249e(buf);
                        f_88c9_0ec3(player);
                        d_5d9c_9b56 = -1;
                    }
                } else
                    d_5d9c_9b8a = 0;
            } else if (d_5d9c_9d3f == 2 && d_5d9c_9b96 == 2) {
                if (d_2f3c_a08f[player] == 0) {
                    sprintf(buf, "%s must sign a new contract", f_a1c3_2243(player));
                    f_88c9_249e(buf);
                    d_5d9c_9b8a = 0;
                } else if (f_88c9_25cc()) {
                    sprintf(buf, "%s now unapproachable", f_a1c3_2243(player));
                    f_88c9_249e(buf);
                    d_1f3e_97be[player] = -1;
                    d_5d9c_9b56 = -1;
                } else
                    d_5d9c_9b8a = 0;
            } else if (d_5d9c_9d3f == 3 && d_5d9c_9b96 != 1 || d_5d9c_9d3f == 2 && d_5d9c_9b96 == 1) {
                if (f_88c9_25cc()) {
                    d_5d9c_9eef = d_2f3c_7f93[d_483b_0000[18][player]] - 646;
                    sprintf(buf, "%04d", player);
                    d_5d9c_9fb6 = f_14d2_16bc(d_5d9c_a332, 0);
                    d_5d9c_9b4f = f_14d2_09ce(d_5d9c_9fb6[d_5d9c_9eef], buf) > 0;
                    if (d_5d9c_9b4f != 0)
                        f_88c9_249e("Maximum one fine per week");
                    else {
                        sprintf(buf, "%s fined a weeks wages", f_a1c3_2243(player));
                        f_88c9_249e(buf);
                        f_88c9_1edc(player, d_1f3e_bfa2[player]);
                        sprintf(buf, "%04d", player);
                        d_5d9c_9fb6 = f_14d2_16bc(d_5d9c_a332, 1);
                        strcat(d_5d9c_9fb6[d_5d9c_9eef], buf);
                        if (d_5d9c_9d3d == 3 || d_1f3e_bfa2[player] == 0) {
                            switch (d_5d9c_9dd7 = f_14d2_0c2a(3)) {
                            case 0:
                                strcpy(buf, "He cannot believe it");
                                break;
                            case 1:
                                strcpy(buf, "He is astonished");
                                break;
                            case 2:
                                strcpy(buf, "He feels it is unfair");
                                break;
                            }
                            f_88c9_249e(buf);
                        } else if (d_5d9c_9d3d != 2) {
                            d_5d9c_9b8a = 0;
                            continue;
                        } else {
                            switch (d_5d9c_9dd7 = f_14d2_0c2a(3)) {
                            case 0:
                                strcpy(buf, "He is not happy");
                                break;
                            case 1:
                                strcpy(buf, "He is disappointed");
                                break;
                            case 2:
                                strcpy(buf, "He is upset");
                                break;
                            }
                            0;
                            f_88c9_249e(buf);
                        }
                    }
                    0;
                    d_5d9c_9b8a = 0;
                } else
                    d_5d9c_9b8a = 0;
            } else if (d_5d9c_9d3f == 4 && d_5d9c_9b96 != 1 || d_5d9c_9d3f == 3 && d_5d9c_9b96 == 1) {
                if (d_1f3e_e0e0[player] == 0) {
                    if (d_483b_0000[20][player] > 0 && d_483b_0000[19][player] < 20) {
                        f_88c9_249e("Insurance refused - player injured");
                        d_5d9c_9b8a = 0;
                    } else {
                        d_5d9c_9a20 = f_88c9_2177(player);
                        sprintf(buf, "Insurance would cost %ld p/w", d_5d9c_9a20);
                        f_88c9_249e(buf);
                        if (f_88c9_25cc()) {
                            sprintf(buf, "%s now insured", f_a1c3_2243(player));
                            f_88c9_249e(buf);
                            d_1f3e_e0e0[player] = -1;
                            d_5d9c_9b56 = -1;
                        } else
                            d_5d9c_9b8a = 0;
                    }
                } else if (f_88c9_25cc()) {
                    sprintf(buf, "%s now uninsured", f_a1c3_2243(player));
                    f_88c9_249e(buf);
                    d_1f3e_e0e0[player] = 0;
                    d_5d9c_9b56 = -1;
                } else
                    d_5d9c_9b8a = 0;
            } else if (d_5d9c_9d3f == 5 && d_5d9c_9b96 != 1 || d_5d9c_9d3f == 4 && d_5d9c_9b96 == 1) {
                if (d_2f3c_a08f[player] == 0) {
                    d_5d9c_9eef = d_2f3c_7f93[d_483b_0000[18][player]] - 646;
                    sprintf(buf, "%04d", player);
                    d_5d9c_9fba = f_14d2_16bc(d_5d9c_a334, 0);
                    d_5d9c_9b4f = strstr(d_5d9c_9fba[d_5d9c_9eef], buf) ? 1 : 0;
                    if (d_5d9c_9b4f != 0 || d_5d9c_9b50 != 0) {
                        sprintf(buf, "%s refuses to negotiate", f_a1c3_2243(player));
                        f_88c9_249e(buf);
                        if (d_5d9c_9b50 != 0)
                            sprintf(buf, "He %s", d_1f3e_4262);
                        else
                            strcpy(buf, "He may resume talks next week");
                        f_88c9_249e(buf);
                        goto T46;
                        0;
                    } else {
                        sprintf(buf, "%s agrees to negotiate", f_a1c3_2243(player));
                        f_88c9_249e(buf);
                        f_88c9_0000(player, d_483b_0000[18][player], d_5d9c_9eef);
                        d_5d9c_9b56 = -1;
                    }
                } else {
                    f_88c9_1b98(player);
                    d_5d9c_9b56 = -1;
                }
            }
        } while (!d_5d9c_9b8a);
    } while (d_5d9c_9b56 != 0);
}
