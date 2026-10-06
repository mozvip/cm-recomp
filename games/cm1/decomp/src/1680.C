/* @at 1680:0003 */
/* @data 5d9c:2970 */
/* @module */

#include <math.h>
#include <mem.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f_14d2_144d(int a, int b);          /* min */
int f_14d2_13eb(int a, int b);          /* max */
char far *f_14d2_0d40(void);            /* next of six 320-byte text buffers */
float f_14d2_1425(float a, float b);    /* float min */
int f_14d2_0c2a(int n);                 /* random number below n */
void f_14d2_148f(void far *a, void far *b, int n);     /* swap n bytes */
void far *f_14d2_16bc(int handle, int page);          /* map a page of an EMS/extended block */
void f_1680_135e(int t, int a, char b);
void f_992a_0f10(int p);
void f_992a_14f4(int p);
void f_992a_7aeb(int a, int b);
void f_992a_7d4d(int a, int b);
unsigned f_14d2_09ce(char far *s, char far *set);          /* position (1-based) of a character of set in s */
void f_a1c3_27e4(char far *title);
void f_14d2_0722(int c);
void f_14d2_075a(int x1, int y1, int x2, int y2);
void f_1680_183d(int a, int b, int line);
void f_1680_18b2(int last);
void f_1680_2ea0(float x, float y, int a, int b, int c, char far *s);
void f_a1c3_361d(void);
long f_14d2_0ca0(void);
int f_14d2_0ac9(void);
int f_14d2_0ac1(void);
int f_14d2_0ab9(void);
void f_1680_2040(char redraw);
void f_1680_2867(float x, float y, int a, int b, int c, char far *s);
char far *f_a1c3_25b0(int player);
void f_a1c3_2d08(int a, float x, float y, int c, int d, int e, char far *s);
void f_a1c3_34c6(int team);
int f_a1c3_3298(int a);
char far *f_a1c3_229c(int manager, char full);
void f_1680_270b(int line);
char far *f_a1c3_2243(int player);     /* surname */
char far *f_a1c3_213c(int player);     /* first name */
int f_992a_1d7c(int player);
char f_88c9_04fb(int player);
void f_14d2_09c3(int on);
void f_14d2_0824(int a);
void f_14d2_073e(int colour);
void f_14d2_0870(int x, int y, char far *s);
char far *f_14d2_0d08(char far *s);
void f_14d2_07af(int x1, int y1, int x2, int y2);
void f_992a_124c(int player);
void f_992a_38d7(int player);
void f_992a_35f9(int player, int a, int b);
void f_a1c3_5c9f(int team, char far *title, char far *text);
char f_1680_0386(int x);

extern int far d_2f3c_7f93[];
extern unsigned char far d_5739_0000[][82];
extern unsigned char far d_5739_0148[];
extern unsigned char far d_5739_0386[];
extern unsigned char far d_5739_13de[];
extern char far d_1f3e_5be8[][0x6a6];
extern char far d_1f3e_7680[][0x6a6];
extern unsigned char far d_5739_03d8[];
extern unsigned char far d_5739_042a[];
extern unsigned char far d_2f3c_2794[];
extern unsigned char far d_5739_023e[];
extern unsigned char far d_5739_0290[];
extern unsigned char far d_5739_02e2[];
extern unsigned char huge d_483b_0000[][1702];   /* per-player tables, 1702 players */
extern unsigned char far d_2f3c_855b[][13];
extern unsigned char far d_2f3c_5167[];
extern unsigned char far d_5739_57ea[][140];
extern char near *d_5d9c_08bc[];        /* team names */
extern char near *d_5d9c_0484[];
extern char d_5d9c_9b21;
extern int d_5d9c_9c15, d_5d9c_9c17, d_5d9c_9d8d, d_5d9c_9ef3;
extern int d_5d9c_9f51, d_5d9c_9f69, d_5d9c_9fa1;
extern int far d_2f3c_27e4[][80];
extern int far d_2f3c_4c53[];
extern int far d_5739_1bb0[][2][94];
extern unsigned char huge d_3e42_0000[][1702];
extern char d_5d9c_9b20;
extern int d_5d9c_9c09, d_5d9c_9c0f, d_5d9c_9c11, d_5d9c_9dd7, d_5d9c_9f0f, d_5d9c_9f31;
extern int d_5d9c_9f67, d_5d9c_9f91, d_5d9c_9fa7;
extern char d_5d9c_a01e[];
extern int d_5d9c_9fa9, d_5d9c_9f81, d_5d9c_9d71;
extern unsigned char far d_2f3c_5b8f[];
extern int far d_483b_a372[][26];
extern char far d_1f3e_8a72[];
extern int far d_2f3c_2d59[][13];
extern int far d_483b_b3b2[][2][12];
extern char far d_1f3e_9117;
extern char far d_483b_7e51;
extern char far d_1f3e_0ab4[][101];
extern int far d_2f3c_7c73[][80];
extern long far d_2f3c_74f3[][80];
extern int d_5d9c_a352;
extern char (far *d_5d9c_9fc2)[82][391];
extern char far d_1f3e_0780[][82][5];
extern int far d_2f3c_1d94[][16];
extern int d_5d9c_9f55;
extern char far d_2f3c_35ad[][3][13];
extern unsigned char d_5d9c_a022[];
extern unsigned char far d_2f3c_1b60[];
extern char far d_2f3c_0080[];
extern char far d_2f3c_2ce4[][13];
extern char d_5d9c_9fd6[];
extern int d_5d9c_9c03, d_5d9c_9c05, d_5d9c_9c07, d_5d9c_9f29, d_5d9c_9f7b, d_5d9c_a338;
extern char d_5d9c_9b1e;
extern float d_5d9c_9b08;
extern char far d_1f3e_57c4[];
extern char far d_1f3e_51b6[];
extern float far d_2f3c_1c54[];
extern float far d_2f3c_1ca4[];
extern float far d_2f3c_1cf4[];
extern char (far *d_5d9c_9fbe)[80];
extern int d_5d9c_9c01, d_5d9c_9faf;
extern float d_5d9c_9b0c;
extern int d_5d9c_9ef1, d_5d9c_9f4f, d_5d9c_9f61, d_5d9c_9f6b, d_5d9c_9f6d;
extern char d_5d9c_9b10, d_5d9c_9b22;
extern float d_5d9c_9b00;
extern char far d_1f3e_369d[];
extern char far d_1f3e_5634[];
extern int d_5d9c_9bcb, d_5d9c_9bfb;
extern int d_5d9c_9bf9, d_5d9c_9f59, d_5d9c_9ec7, d_5d9c_9f65, d_5d9c_9dcb;
extern float d_5d9c_9af0, d_5d9c_9a70, d_5d9c_9a6c;
extern char far d_1f3e_3e28[];
extern char far d_1f3e_364e[];
extern char far d_1f3e_4b6c[];
extern char far d_1f3e_4d4c[];
extern char far d_1f3e_4c0c[];
extern char far d_1f3e_9118[];
extern char far d_1f3e_9e64[];
extern char far d_1f3e_b256[];
extern int far d_2f3c_a08f[];
extern int far d_2f3c_1584[];
extern int d_5d9c_9dcd, d_5d9c_9bd3;
extern unsigned char d_5d9c_00d6[];
extern unsigned char far d_5739_00a4[];     /* team colours: bg * 16 + fg */
extern int d_5d9c_9c31, d_5d9c_9c35, d_5d9c_9db7, d_5d9c_9ecf, d_5d9c_9fab;
extern char d_5d9c_9b38;
extern int far d_2f3c_8353[];
extern unsigned char far d_2f3c_65b7[];
extern int d_5d9c_9f19, d_5d9c_9eef, d_5d9c_9d33, d_5d9c_a032;
extern int d_5d9c_a330, d_5d9c_a332, d_5d9c_a334, d_5d9c_a35c;
extern long (far *d_5d9c_a01a)[80];
extern char (far *d_5d9c_9fba)[151];
extern char (far *d_5d9c_9fb6)[151];
extern char (far *d_5d9c_9fb2)[151];
extern unsigned char far d_5739_06ba[];
extern char far d_1f3e_5918[][80];
extern int far d_2f3c_15c0[4][3][2][30];
extern char far d_1f3e_44e2[];
extern char far d_1f3e_4442[];
extern char far d_1f3e_43f2[];
extern char far d_1f3e_4212[];
extern int d_5d9c_9f85;

char formations[8][26] = {      /* 13 (position, flag) pairs per tactic */
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 5, 1, 7, 0, 10, 0, 10, 0, 6, 1, 7, 0, 10, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 8, 2, 7, 0, 10, 0, 10, 0, 9, 2, 7, 0, 7, 0 },
    { 1, 0, 2, 1, 3, 1, 4, 0, 4, 0, 4, 0, 5, 0, 7, 0, 10, 0, 10, 0, 6, 0, 7, 0, 10, 0 },
    { 1, 0, 2, 1, 3, 1, 11, 0, 4, 0, 4, 0, 5, 0, 7, 0, 10, 0, 10, 0, 6, 0, 7, 0, 10, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 5, 0, 6, 0, 10, 0, 10, 0, 10, 0, 7, 0, 10, 0 },
    { 1, 0, 2, 1, 3, 1, 4, 0, 4, 0, 4, 0, 8, 0, 7, 0, 10, 0, 7, 0, 9, 0, 7, 0, 10, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 5, 0, 7, 0, 10, 0, 7, 1, 6, 0, 10, 0, 10, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 2, 5, 0, 7, 0, 10, 0, 10, 0, 6, 0, 7, 0, 10, 0 }
};

char f_1680_0003(int x)
{
    if (x < 80 && d_2f3c_7f93[x] >= 0x286 && d_2f3c_7f93[x] < 0x28a)
        return -1;
    return 0;
}

float f_1680_0037(int x)
{
    if (x <= 79)
        return f_14d2_13eb(f_14d2_144d(d_5739_0148[x] - (x / 20 + f_14d2_144d(d_5739_0386[x], 3) - 2) * 2 - 3
                                       + d_5739_0000[0][x] / 16.0 - 0.5, 17), 6);
    if (x <= 479)
        return d_5739_13de[x] - 3;
    return d_5739_13de[x] - 5;
}

int f_1680_00fb(int x)
{
    return f_14d2_13eb(f_14d2_144d(d_483b_0000[0][x] / 10.0, 17), 6);
}

char f_1680_014a(int a, int b)
{
    if (b == 11 || (b == 1 && d_1f3e_5be8[0][a]) ||
        (d_1f3e_5be8[(b + 1) / 3][a] && d_1f3e_7680[(b + 1) % 3][a]))
        return -1;
    return 0;
}

char f_1680_01b4(int x)
{
    if (x == 2 || x == 3 || x == 4 || x == 11)
        return -1;
    return 0;
}

char f_1680_01d6(int x)
{
    if (x == 5 || x == 6 || x == 7)
        return -1;
    return 0;
}

char f_1680_01f3(int x)
{
    if (x == 8 || x == 9 || x == 10)
        return -1;
    return 0;
}

char f_1680_0210(int x)
{
    if (x == 3 || x == 6 || x == 9 || x == 11)
        return -1;
    return 0;
}

char f_1680_0232(int x)
{
    if (x == 2 || x == 5 || x == 8 || x == 11)
        return -1;
    return 0;
}

char f_1680_0254(int x)
{
    if (x == 4 || x == 7 || x == 10 || x == 11)
        return -1;
    return 0;
}

char f_1680_0276(int x)
{
    if (x > 67)
        return -1;
    return 0;
}

int f_1680_0287(int x)
{
    return d_5739_03d8[d_2f3c_2794[x]] * 3 + d_5d9c_9f85 - 1
           - d_5739_03d8[d_2f3c_2794[x]] - d_5739_042a[d_2f3c_2794[x]];
}

int f_1680_02ed(int x)
{
    return d_5739_023e[x] - d_5739_0290[x] - d_5739_02e2[x];
}

char f_1680_031f(int x)
{
    if (d_483b_0000[20][x] == 0 && (f_1680_02ed(d_483b_0000[18][x]) < 14 || f_1680_0386(x)))
        return -1;
    return 0;
}

char f_1680_0386(int x)
{
    if (d_1f3e_5be8[0][x] && d_483b_0000[20][x] == 0 && d_5739_02e2[d_483b_0000[18][x]] == 1)
        return -1;
    return 0;
}

char far *f_1680_03f3(int x)
{
    char far *p;

    p = f_14d2_0d40();
    sprintf(p, "%02d", x == 13 ? x + 1 : x);
    return p;
}

double f_1680_0433(int x, int y)
{
    return (f_14d2_1425(d_483b_0000[15][x], d_483b_0000[9][x]) * 0.1 + d_483b_0000[12][x]
            + d_483b_0000[17][x] * 0.5 + (y == 1 || y == 4 || y == 7 || y > 9 ? 3 : 0)) / 3.0;
}

int f_1680_052b(int a, int b, int c)
{
    return d_2f3c_855b[b == 81][a] + (c == 1 || c == 4 || c == 7 || c > 9 ? 2 : 0);
}

int f_1680_0577(int x)
{
    return x <= 6 ? x : x / 2 + 3;
}

void f_1680_0592(int a, int b)
{
    d_5d9c_9b21 = a / 20 < b - 1;
    d_5d9c_9c17 = -1;
    for (d_5d9c_9f69 = (b - 1) * 20; d_5d9c_9f69 <= (b - 1) * 20 + 19; d_5d9c_9f69++) {
        if (f_1680_0003(d_5d9c_9f69) == 0) {
            d_5d9c_9d8d = f_1680_0037(d_5d9c_9f69) + f_14d2_0c2a(2) - f_14d2_0c2a(2);
            if (d_5d9c_9b21) {
                if (d_5d9c_9d8d > d_5d9c_9c15 || d_5d9c_9c17 == -1) {
                    d_5d9c_9c15 = d_5d9c_9d8d;
                    d_5d9c_9c17 = d_5d9c_9f69;
                }
            } else {
                if (d_5d9c_9d8d < d_5d9c_9c15 || d_5d9c_9c17 == -1) {
                    d_5d9c_9c15 = d_5d9c_9d8d;
                    d_5d9c_9c17 = d_5d9c_9f69;
                }
            }
        }
    }
    f_14d2_148f((void *)&d_5d9c_08bc[a], (void *)&d_5d9c_08bc[d_5d9c_9c17], 2);
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 4; d_5d9c_9fa1++)
        f_14d2_148f((void *)&d_5739_0000[d_5d9c_9fa1][a], (void *)&d_5739_0000[d_5d9c_9fa1][d_5d9c_9c17], 1);
    f_14d2_148f((void *)&d_2f3c_7f93[a], (void *)&d_2f3c_7f93[d_5d9c_9c17], 2);
    for (d_5d9c_9f51 = 0x286; d_5d9c_9f51 <= d_5d9c_9ef3 + 0x285; d_5d9c_9f51++) {
        if (d_2f3c_5167[d_5d9c_9f51] == a)
            d_2f3c_5167[d_5d9c_9f51] = d_5d9c_9c17;
        else if (d_2f3c_5167[d_5d9c_9f51] == d_5d9c_9c17)
            d_2f3c_5167[d_5d9c_9f51] = a;
    }
    f_14d2_148f((void *)&d_5739_57ea[0][a], (void *)&d_5739_57ea[0][d_5d9c_9c17], 1);
    f_14d2_148f((void *)&d_5739_57ea[1][a], (void *)&d_5739_57ea[1][d_5d9c_9c17], 1);
}

float f_1680_0795(int x)
{
    if (x <= 19 || x >= 80)
        return 1.1;
    if (x <= 39)
        return 1.5;
    if (x <= 59)
        return 2.5;
    return 3.5;
}

char f_1680_07cb(int v)
{
    d_5d9c_9b20 = 0;
    for (d_5d9c_9f31 = 4; d_5d9c_9f31 <= 6; d_5d9c_9f31++)
        for (d_5d9c_9dd7 = 0; d_5d9c_9dd7 <= 3; d_5d9c_9dd7++)
            if ((d_5d9c_9dd7 < 2 || d_5d9c_9f31 == 4) && d_2f3c_27e4[d_5d9c_9f31][d_5d9c_9dd7] == v) {
                d_5d9c_9c11 = d_5d9c_9f31;
                d_5d9c_9c0f = d_5d9c_9dd7;
                d_5d9c_9b20 = -1;
                d_5d9c_9dd7 = 3;
                d_5d9c_9f31 = 6;
            }
    return d_5d9c_9b20;
}

void f_1680_084a(void)
{
    d_5d9c_9fa7 = 1;
    memset(d_5d9c_a01e, 1, 4);
}

void f_1680_086a(int a, int b, int c)
{
    d_5d9c_9c09 = -32;
    for (d_5d9c_9f0f = a; d_5d9c_9f0f <= b; d_5d9c_9f0f++)
        for (d_5d9c_9f67 = 0; d_5d9c_9f67 <= 1; d_5d9c_9f67++)
            d_5739_1bb0[d_5d9c_9f0f][d_5d9c_9f67][c] = d_5d9c_9c09;
}

void f_1680_08c5(void)
{
    for (d_5d9c_9f91 = 0; d_5d9c_9f91 <= 0x6a3; d_5d9c_9f91++) {
        d_3e42_0000[21][d_5d9c_9f91] = 0;
        d_3e42_0000[22][d_5d9c_9f91] = 0;
    }
    for (d_5d9c_9f51 = 0; d_5d9c_9f51 <= d_5d9c_9ef3 + 0x285; d_5d9c_9f51++)
        d_2f3c_4c53[d_5d9c_9f51] = 0;
}

void f_1680_0952(void)
{
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 79; d_5d9c_9f69++) {
        for (d_5d9c_9f19 = 0; d_5d9c_9f19 <= 13; d_5d9c_9f19++)
            if (d_5d9c_9f19 != 1) {
                d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 1);
                d_5d9c_a01a[d_5d9c_9f19][d_5d9c_9f69] = 0;
            }
        d_5739_06ba[d_5d9c_9f69] = 0;
    }
    for (d_5d9c_9eef = 0; d_5d9c_9eef <= 3; d_5d9c_9eef++) {
        d_5d9c_9fba = f_14d2_16bc(d_5d9c_a334, 1);
        strcpy(d_5d9c_9fba[d_5d9c_9eef], "");
        d_5d9c_9fb6 = f_14d2_16bc(d_5d9c_a332, 1);
        strcpy(d_5d9c_9fb6[d_5d9c_9eef], "");
        d_5d9c_9fb2 = f_14d2_16bc(d_5d9c_a330, 1);
        strcpy(d_5d9c_9fb2[d_5d9c_9eef], "");
    }
    d_5d9c_a032 = -1;
}

void f_1680_0a8a(void)
{
    unsigned i, j, k, l;

    for (d_5d9c_9f69 = 0; d_5d9c_9f69 < 80; d_5d9c_9f69++)
        d_1f3e_5918[0][d_5d9c_9f69] = 0;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++)
            for (k = 0; k < 2; k++)
                for (l = 0; l < 30; l++)
                    d_2f3c_15c0[i][j][k][l] = -2;
    strcpy(d_1f3e_44e2, "");
    strcpy(d_1f3e_4442, "");
    strcpy(d_1f3e_43f2, "");
    strcpy(d_1f3e_4212, "");
    d_5d9c_9d33 = -1;
}

void f_1680_0b5b(int t)
{
    int n;

    if (d_5d9c_9fa7 == 1 || (d_5d9c_9fa7 > 1 && t == d_5d9c_9fa9))
        f_1680_135e(t, d_2f3c_5b8f[d_2f3c_7f93[t]] % 16, 0);
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= d_5739_023e[t] - 1; d_5d9c_9fa1++) {
        d_1f3e_8a72[d_483b_a372[t][d_5d9c_9fa1]] = 0;
        d_483b_0000[23][d_483b_a372[t][d_5d9c_9fa1]] = 3;
    }
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++) {
        d_2f3c_2d59[t][d_5d9c_9fa1] = 1700;
        n = 1700;
        d_483b_b3b2[t][0][d_5d9c_9fa1] = n;
        d_483b_b3b2[t][1][d_5d9c_9fa1] = n;
    }
    if (f_1680_0003(t) == 0)
        for (d_5d9c_9f81 = 0; d_5d9c_9f81 <= 12; d_5d9c_9f81++) {
            d_2f3c_2d59[t][d_5d9c_9f81] = 1701;
            d_1f3e_9117 = 1;
            d_483b_7e51 = t;
            f_992a_0f10(1701);
        }
    for (d_5d9c_9d71 = 0; d_5d9c_9d71 <= 1; d_5d9c_9d71++)
        for (d_5d9c_9f81 = 0; d_5d9c_9f81 <= 10; d_5d9c_9f81++) {
            n = 1701;
            d_483b_b3b2[t][d_5d9c_9d71][d_5d9c_9f81] = n;
            d_483b_7e51 = t;
            d_483b_0000[23][1701] = d_5d9c_9d71 + 1;
            f_992a_14f4(1701);
        }
}

void f_1680_0d7a(int a, int b)
{
    f_14d2_148f((void *)&d_5d9c_08bc[a], (void *)&d_5d9c_08bc[b], 2);
    f_14d2_148f((void *)d_1f3e_0ab4[a], (void *)d_1f3e_0ab4[b], 101);
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 62; d_5d9c_9fa1++) {
        f_14d2_148f((void *)&d_5739_0000[d_5d9c_9fa1][a], (void *)&d_5739_0000[d_5d9c_9fa1][b], 1);
        if (d_5d9c_9fa1 < 12) {
            f_14d2_148f((void *)&d_2f3c_7c73[d_5d9c_9fa1][a], (void *)&d_2f3c_7c73[d_5d9c_9fa1][b], 2);
            if (d_5d9c_9fa1 < 9) {
                f_14d2_148f((void *)&d_1f3e_5918[d_5d9c_9fa1][a], (void *)&d_1f3e_5918[d_5d9c_9fa1][b], 1);
                if (d_5d9c_9fa1 < 6) {
                    f_14d2_148f((void *)&d_2f3c_74f3[d_5d9c_9fa1][a], (void *)&d_2f3c_74f3[d_5d9c_9fa1][b], 4);
                    if (d_5d9c_9fa1 < 2) {
                        d_5d9c_9fc2 = f_14d2_16bc(d_5d9c_a352, 1);
                        f_14d2_148f((void *)d_5d9c_9fc2[d_5d9c_9fa1][a], (void *)d_5d9c_9fc2[d_5d9c_9fa1][b], 391);
                        f_14d2_148f((void *)d_1f3e_0780[d_5d9c_9fa1][a], (void *)d_1f3e_0780[d_5d9c_9fa1][b], 5);
                    }
                }
            }
        }
    }
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 15; d_5d9c_9fa1++)
        f_14d2_148f((void *)&d_2f3c_1d94[a][d_5d9c_9fa1], (void *)&d_2f3c_1d94[b][d_5d9c_9fa1], 2);
    f_992a_7aeb(a, b);
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++)
        for (d_5d9c_9f55 = 0; d_5d9c_9f55 <= 2; d_5d9c_9f55++)
            f_14d2_148f((void *)&d_2f3c_35ad[a][d_5d9c_9f55][d_5d9c_9fa1],
                        (void *)&d_2f3c_35ad[b][d_5d9c_9f55][d_5d9c_9fa1], 1);
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 79; d_5d9c_9fa1++)
        for (d_5d9c_9f55 = 0; d_5d9c_9f55 <= 7; d_5d9c_9f55++) {
            if (d_2f3c_27e4[d_5d9c_9f55][d_5d9c_9fa1] == a)
                d_2f3c_27e4[d_5d9c_9f55][d_5d9c_9fa1] = b;
            else if (d_2f3c_27e4[d_5d9c_9f55][d_5d9c_9fa1] == b)
                d_2f3c_27e4[d_5d9c_9f55][d_5d9c_9fa1] = a;
        }
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 1; d_5d9c_9fa1++) {
        if (d_5d9c_a022[d_5d9c_9fa1] == a)
            d_5d9c_a022[d_5d9c_9fa1] = b;
        else if (d_5d9c_a022[d_5d9c_9fa1] == b)
            d_5d9c_a022[d_5d9c_9fa1] = a;
        f_14d2_148f((void *)&d_5739_57ea[d_5d9c_9fa1][a], (void *)&d_5739_57ea[d_5d9c_9fa1][b], 1);
    }
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= d_5d9c_9ef3 + 0x285; d_5d9c_9fa1++) {
        if (d_2f3c_5167[d_5d9c_9fa1] == a)
            d_2f3c_5167[d_5d9c_9fa1] = b;
        else if (d_2f3c_5167[d_5d9c_9fa1] == b)
            d_2f3c_5167[d_5d9c_9fa1] = a;
    }
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 0x6a3; d_5d9c_9fa1++) {
        if (d_483b_0000[18][d_5d9c_9fa1] == a)
            d_483b_0000[18][d_5d9c_9fa1] = b;
        else if (d_483b_0000[18][d_5d9c_9fa1] == b)
            d_483b_0000[18][d_5d9c_9fa1] = a;
        if (d_3e42_0000[10][d_5d9c_9fa1] == a)
            d_3e42_0000[10][d_5d9c_9fa1] = b;
        else if (d_3e42_0000[10][d_5d9c_9fa1] == b)
            d_3e42_0000[10][d_5d9c_9fa1] = a;
    }
    f_992a_7d4d(a, b);
    if (d_5d9c_9fa9 == a)
        d_5d9c_9fa9 = b;
    else if (d_5d9c_9fa9 == b)
        d_5d9c_9fa9 = a;
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 0x8b; d_5d9c_9fa1++) {
        if (d_2f3c_1b60[d_5d9c_9fa1] == a)
            d_2f3c_1b60[d_5d9c_9fa1] = b;
        else if (d_2f3c_1b60[d_5d9c_9fa1] == b)
            d_2f3c_1b60[d_5d9c_9fa1] = a;
    }
    f_14d2_148f((void *)&d_2f3c_0080[a], (void *)&d_2f3c_0080[b], 1);
}

void f_1680_135e(int t, int k, char c)
{
    char far *p;

    switch (k) {
    case 0: p = formations[0]; break;
    case 1: p = formations[1]; break;
    case 2: p = formations[3]; break;
    case 3: p = formations[2]; break;
    case 4: p = formations[4]; break;
    case 5: p = formations[5]; break;
    case 6: p = formations[6]; break;
    case 7: p = formations[7]; break;
    }
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++) {
        if (c == 0) {
            d_2f3c_35ad[t][0][d_5d9c_9fa1] = *p++;
            d_2f3c_35ad[t][1][d_5d9c_9fa1] = *p++;
            d_2f3c_35ad[t][2][d_5d9c_9fa1] = 0;
        } else {
            d_2f3c_2ce4[0][d_5d9c_9fa1] = *p++;
            d_2f3c_2ce4[1][d_5d9c_9fa1] = *p++;
            d_2f3c_2ce4[2][d_5d9c_9fa1] = 0;
        }
    }
}

void f_1680_1484(void)
{
    unsigned char n[80];

    memset(n, 0, 80);
    for (d_5d9c_9f91 = 0; d_5d9c_9f91 <= 0x6a3; d_5d9c_9f91++) {
        d_5d9c_9f67 = d_483b_0000[18][d_5d9c_9f91];
        d_483b_a372[d_5d9c_9f67][n[d_5d9c_9f67]] = d_5d9c_9f91;
        n[d_5d9c_9f67]++;
    }
}

void f_1680_150c(int n, char far *title, char far *items)
{
    char buf[320];
    int k;

    memset(d_5d9c_9fd6, 0, 20);
    d_5d9c_9c07 = -1;
    if (strlen(title) > 1)
        f_a1c3_27e4(title);
    d_5d9c_9c05 = n > 0 ? n - 5 : 0;
    strcpy(d_1f3e_57c4, items);
    d_5d9c_9f29 = 0;
    for (d_5d9c_9f55 = 1; d_5d9c_9f55 <= strlen(items); d_5d9c_9f55++)
        if (items[d_5d9c_9f55 - 1] == '|')
            d_5d9c_9f29++;
    d_5d9c_9f29--;
    d_5d9c_9c03 = 0;
    d_5d9c_9f7b = 30;
    while (d_1f3e_57c4[0]) {
        k = f_14d2_09ce(d_1f3e_57c4, "|") - 1;
        strncpy(buf, d_1f3e_57c4, k);
        buf[k] = 0;
        if (buf[0] == '*') {
            strcpy(buf, buf + 1);
            d_5d9c_9b1e = -1;
        } else
            d_5d9c_9b1e = 0;
        sprintf(d_1f3e_51b6, " %-17s", buf);
        strcpy(d_1f3e_57c4, &d_1f3e_57c4[k + 1]);
        if ((d_5d9c_9f29 + 1) / 2 > d_5d9c_9c03) {
            d_5d9c_9f81 = 1;
            d_5d9c_9b08 = d_5d9c_9c03 * 2.5 + d_5d9c_9c05 + 5.0;
        } else {
            if (d_5d9c_9c03 == d_5d9c_9f29 && !(d_5d9c_9f29 & 1))
                d_5d9c_9f81 = 11;
            else
                d_5d9c_9f81 = 21;
            d_5d9c_9b08 = (d_5d9c_9c03 - (d_5d9c_9f29 + 1) / 2) * 2.5 + d_5d9c_9c05 + 5.0;
        }
        d_2f3c_1c54[d_5d9c_9c03] = d_5d9c_9f81;
        d_2f3c_1ca4[d_5d9c_9c03] = d_5d9c_9b08;
        d_5d9c_9fbe = f_14d2_16bc(d_5d9c_a338, 1);
        strcpy(d_5d9c_9fbe[d_5d9c_9c03], d_1f3e_51b6);
        f_14d2_0722(0);
        f_14d2_075a(d_5d9c_9f81 * 8 + 6, d_5d9c_9b08 * 8.0 - 2.0,
                    (d_5d9c_9f81 + strlen(d_1f3e_51b6)) * 8 + 3, d_5d9c_9b08 * 8.0 + 13.0);
        if (d_5d9c_9b1e) {
            d_2f3c_1cf4[d_5d9c_9c03] = 24.0;
            f_1680_183d(1, 8, d_5d9c_9c03);
        } else {
            d_2f3c_1cf4[d_5d9c_9c03] = d_5d9c_9f7b;
            f_1680_183d(d_5d9c_9f7b / 16, d_5d9c_9f7b % 16, d_5d9c_9c03);
        }
        d_5d9c_9c03++;
    }
    if (strlen(title) > 1)
        f_1680_18b2(d_5d9c_9c03 - 1);
}

void f_1680_183d(int a, int b, int line)
{
    d_5d9c_9fbe = f_14d2_16bc(d_5d9c_a338, 0);
    f_1680_2ea0(d_2f3c_1c54[line], -d_2f3c_1ca4[line], a, b, 0, d_5d9c_9fbe[line]);
}

void f_1680_18b2(int last)
{
    if (d_5d9c_9c07 > -1 && last > -1)
        f_1680_183d(d_2f3c_1cf4[d_5d9c_9c07] / 16.0, (int)d_2f3c_1cf4[d_5d9c_9c07] % 16, d_5d9c_9c07);
    f_a1c3_361d();
    d_5d9c_9b0c = f_14d2_0ca0();
    do {
        d_5d9c_9faf = -1;
        if (f_14d2_0ac9() > 0)
            for (d_5d9c_9c01 = 0; d_5d9c_9c01 <= abs(last); d_5d9c_9c01++) {
                d_5d9c_9f81 = d_2f3c_1c54[d_5d9c_9c01];
                d_5d9c_9b08 = d_2f3c_1ca4[d_5d9c_9c01];
                if (d_5d9c_9fd6[d_5d9c_9c01] == 0 && f_14d2_0ac1() >= d_5d9c_9f81 * 8 - 2 &&
                    f_14d2_0ac1() <= (d_5d9c_9f81 + 17) * 8 + 10 &&
                    f_14d2_0ab9() >= d_5d9c_9b08 * 8.0 + 15.0 - 20.0 &&
                    f_14d2_0ab9() <= d_5d9c_9b08 * 8.0 + 31.0 - 20.0)
                    d_5d9c_9faf = d_5d9c_9c01;
            }
    } while (d_5d9c_9faf <= -1);
    d_5d9c_9fbe = f_14d2_16bc(d_5d9c_a338, 0);
    if (last > -1 || d_5d9c_9fbe[d_5d9c_9faf][0] == '*') {
        f_1680_183d(1, 12, d_5d9c_9faf);
        d_5d9c_9c07 = d_5d9c_9faf;
    }
}

void f_1680_1a82(int i)
{
    d_5d9c_9fd6[i] = -1;
}

char far *f_1680_1a91(int x)
{
    char far *p;

    p = f_14d2_0d40();
    if (x < 80)
        strcpy(p, d_5d9c_08bc[x]);
    else
        strcpy(p, d_5d9c_0484[x]);
    return p;
}

void f_1680_1ad8(int n)
{
    char buf[320];
    char item[80];
    unsigned i;

    d_5d9c_9f67 = -1;
    d_5d9c_9b10 = 0;
    if (n == -1 && d_5d9c_9ef1 > 0) {
        f_1680_2040(0);
        strcpy(d_1f3e_57c4, "");
        for (i = 1; i <= strlen(&d_1f3e_369d[1]); i += 3) {
            sprintf(buf, "%.3s", &d_1f3e_369d[i]);
            d_5d9c_9f4f = atol(buf);
            strcpy(d_1f3e_5634, d_5d9c_08bc[d_2f3c_5167[d_5d9c_9f4f]]);
            sprintf(buf, "%.13s", d_1f3e_5634);
            sprintf(item, "%s|", buf);
            strcat(d_1f3e_57c4, item);
        }
        sprintf(buf, "*Exit|%sAnother Team|", d_1f3e_57c4);
        f_1680_150c(0, "Team choice", buf);
        if (d_5d9c_9faf == 0)
            d_5d9c_9b10 = -1;
        else if (d_5d9c_9faf >= 1 && d_5d9c_9faf <= d_5d9c_9ef1) {
            sprintf(buf, "%.3s", &d_1f3e_369d[d_5d9c_9faf * 3 - 2]);
            d_5d9c_9f67 = d_2f3c_5167[atol(buf)];
            d_5d9c_9b10 = -1;
        }
    }
    if (d_5d9c_9b10 == 0) {
        d_5d9c_9f61 = 0;
        if (n >= 0)
            sprintf(buf, "Player %s Team", f_a1c3_25b0(n + 1));
        else
            strcpy(buf, "Team Choice");
        f_a1c3_27e4(buf);
        f_1680_2867(1.5, 3.75, 1, 2, 0x49, " DIV ONE");
        f_1680_2867(10.875, 3.75, 1, 2, 0x49, " DIV TWO");
        f_1680_2867(20.25, 3.75, 1, 2, 0x49, " DIV THREE");
        f_1680_2867(29.625, 3.75, 1, 2, 0x49, " DIV FOUR");
        d_5d9c_9f7b = 12;
        d_5d9c_9f6b = 4;
        for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 79; d_5d9c_9f6d++) {
            if (d_5d9c_9f6d <= 19) {
                d_5d9c_9b00 = 1.5;
                d_5d9c_9b08 = d_5d9c_9f6d + 5;
            } else if (d_5d9c_9f6d <= 39) {
                d_5d9c_9b00 = 10.875;
                d_5d9c_9b08 = d_5d9c_9f6d - 15;
            } else if (d_5d9c_9f6d <= 59) {
                d_5d9c_9b00 = 20.25;
                d_5d9c_9b08 = d_5d9c_9f6d - 35;
            } else if (d_5d9c_9f6d <= 79) {
                d_5d9c_9b00 = 29.625;
                d_5d9c_9b08 = d_5d9c_9f6d - 55;
            }
            sprintf(buf, " %.11s", (char far *)d_5d9c_08bc[d_5d9c_9f6d]);
            f_a1c3_2d08(0, d_5d9c_9b00, d_5d9c_9b08, 1 - f_1680_0003(d_5d9c_9f6d) * 5, d_5d9c_9f7b, 0x49, buf);
            f_14d2_148f(&d_5d9c_9f7b, &d_5d9c_9f6b, 2);
        }
        if (n > -1 && d_5d9c_9b22 == 0)
            for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 79; d_5d9c_9f6d++)
                if (d_5d9c_9f6d < 20 || f_1680_0003(d_5d9c_9f6d))
                    f_a1c3_34c6(d_5d9c_9f6d + 1);
        do
            d_5d9c_9faf = f_a1c3_3298(0);
        while (d_5d9c_9faf <= 0);
        d_5d9c_9f67 = d_5d9c_9faf - 1;
    }
}

void f_1680_1f06(char all)
{
    char buf[320];
    unsigned i;

    d_5d9c_9bcb = -1;
    f_1680_2040(all);
    if (strlen(&d_1f3e_369d[1]) == 3)
        d_5d9c_9bcb = atol(&d_1f3e_369d[1]);
    else if (strlen(&d_1f3e_369d[1]) > 3) {
        strcpy(d_1f3e_57c4, "*Exit|");
        for (i = 1; i <= strlen(&d_1f3e_369d[1]); i += 3) {
            sprintf(buf, "%.3s", &d_1f3e_369d[i]);
            d_5d9c_9f4f = atol(buf);
            sprintf(buf, "%s|", f_a1c3_229c(d_5d9c_9f4f, 0));
            strcat(d_1f3e_57c4, buf);
        }
        f_1680_150c(0, "Choose manager", d_1f3e_57c4);
        if (d_5d9c_9faf > 0) {
            sprintf(buf, "%.3s", &d_1f3e_369d[d_5d9c_9faf * 3 - 2]);
            d_5d9c_9bcb = atol(buf);
        }
    }
}

void f_1680_2040(char all)
{
    char buf[320];

    strcpy(&d_1f3e_369d[1], "");
    for (d_5d9c_9bfb = 0x286; d_5d9c_9bfb <= d_5d9c_9ef3 + 0x285; d_5d9c_9bfb++)
        if ((all == 0 && d_2f3c_5167[d_5d9c_9bfb] < 0xff) || all != 0) {
            sprintf(buf, "%03d", d_5d9c_9bfb);
            strcat(&d_1f3e_369d[1], buf);
        }
}

void f_1680_20c2(int t)
{
    char buf[80];

    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= d_5739_023e[t] - 2; d_5d9c_9f6d++)
        for (d_5d9c_9fa1 = d_5d9c_9f6d + 1; d_5d9c_9fa1 <= d_5739_023e[t] - 1; d_5d9c_9fa1++)
            if (strcmp(f_a1c3_2243(d_483b_a372[t][d_5d9c_9f6d]), f_a1c3_2243(d_483b_a372[t][d_5d9c_9fa1])) > 0)
                f_14d2_148f((void *)&d_483b_a372[t][d_5d9c_9f6d], (void *)&d_483b_a372[t][d_5d9c_9fa1], 2);
    d_5d9c_9bf9 = d_5739_023e[t] - 1;
    d_5d9c_9f59 = 12;
    d_5d9c_9ec7 = 0;
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 25; d_5d9c_9f6d++) {
        f_1680_270b(d_5d9c_9f6d);
        if (d_5d9c_9f6d <= d_5d9c_9bf9) {
            d_5d9c_9f91 = d_483b_a372[t][d_5d9c_9f6d];
            strcpy(d_1f3e_3e28, "");
            strcpy(d_1f3e_364e, "");
            strcpy(d_1f3e_4b6c, "");
            d_5d9c_9f65 = 18;
            if (d_1f3e_5be8[0][d_5d9c_9f91])
                strcpy(d_1f3e_3e28, "G");
            if (d_1f3e_5be8[1][d_5d9c_9f91])
                strcat(d_1f3e_3e28, "D");
            if (d_1f3e_5be8[2][d_5d9c_9f91])
                strcat(d_1f3e_3e28, "M");
            if (d_1f3e_5be8[3][d_5d9c_9f91])
                strcat(d_1f3e_3e28, "A");
            if (d_1f3e_5be8[4][d_5d9c_9f91])
                strcpy(d_1f3e_364e, "R");
            if (d_1f3e_5be8[5][d_5d9c_9f91])
                strcat(d_1f3e_364e, "L");
            if (d_1f3e_5be8[6][d_5d9c_9f91])
                strcat(d_1f3e_364e, "C");
            sprintf(d_1f3e_4d4c, "%s %s", d_1f3e_3e28, d_1f3e_364e);
            if (d_483b_0000[20][d_5d9c_9f91] > 0) {
                if (d_483b_0000[19][d_5d9c_9f91] == 20)
                    strcpy(d_1f3e_4b6c, "su");
                else
                    strcpy(d_1f3e_4b6c, "ij");
            } else if (d_1f3e_8a72[d_5d9c_9f91]) {
                strcpy(d_1f3e_4b6c, f_1680_03f3(f_992a_1d7c(d_5d9c_9f91) + 1));
                d_5d9c_9f65 = 33;
            }
            if (f_14d2_09ce(f_a1c3_213c(d_5d9c_9f91), " ") > 0)
                sprintf(d_1f3e_4c0c, "%s %c", f_a1c3_2243(d_5d9c_9f91), *f_a1c3_213c(d_5d9c_9f91));
            else
                strcpy(d_1f3e_4c0c, f_a1c3_2243(d_5d9c_9f91));
            if (d_1f3e_9118[d_5d9c_9f91] && d_1f3e_9e64[d_5d9c_9f91] == 0)
                sprintf(buf, "L %s", d_1f3e_4c0c);
            else if (d_1f3e_9118[d_5d9c_9f91] && d_1f3e_9e64[d_5d9c_9f91])
                sprintf(buf, "R %s", d_1f3e_4c0c);
            else if (d_2f3c_a08f[d_5d9c_9f91] == 0)
                sprintf(buf, "C %s", d_1f3e_4c0c);
            else if (f_88c9_04fb(d_5d9c_9f91)) {
                if (d_5d9c_9dcb == 0 || d_3e42_0000[14][d_5d9c_9f91] > 0)
                    sprintf(buf, "U %s", d_1f3e_4c0c);
                else
                    sprintf(buf, "  %s", d_1f3e_4c0c);
            } else
                sprintf(buf, "  %s", d_1f3e_4c0c);
            strcpy(d_1f3e_4c0c, buf);
            f_1680_2867(d_5d9c_9af0, d_5d9c_9b08, d_5d9c_9f65 / 16, d_5d9c_9f65 % 16, 12, d_1f3e_4b6c);
            f_a1c3_2d08(0, d_5d9c_9a70, d_5d9c_9b08, 1 - d_1f3e_b256[d_5d9c_9f91] * 4, d_5d9c_9f59, 0x5a, d_1f3e_4c0c);
            f_1680_2867(d_5d9c_9a6c, d_5d9c_9b08, 2, 6, 0x2b, d_1f3e_4d4c);
            d_2f3c_1584[d_5d9c_9f6d] = d_5d9c_9f91;
            d_5d9c_9ec7++;
        } else {
            f_1680_2867(d_5d9c_9af0, d_5d9c_9b08, 1, 2, 12, "");
            f_1680_2867(d_5d9c_9a70, d_5d9c_9b08, 1, d_5d9c_9f59, 0x5a, "");
            f_1680_2867(d_5d9c_9a6c, d_5d9c_9b08, 2, 6, 0x2b, "");
        }
        if (d_5d9c_9f59 == 12)
            d_5d9c_9f59 = 4;
        else
            d_5d9c_9f59 = 12;
    }
}

void f_1680_270b(int line)
{
    if (line < 13) {
        d_5d9c_9af0 = 1.375;
        d_5d9c_9a70 = 3.125;
        d_5d9c_9a6c = 14.625;
        d_5d9c_9b08 = line + 6.5;
    } else {
        d_5d9c_9af0 = 37.375;
        d_5d9c_9a70 = 20.25;
        d_5d9c_9a6c = 31.75;
        d_5d9c_9b08 = line - 13 + 6.5;
    }
}

long f_1680_2782(int x)
{
    if (x <= 19)
        return 500000L;
    if (x <= 39)
        return 250000L;
    return 125000L;
}

void f_1680_27aa(int x, int y, int colour, char far *s)
{
    if (*s) {
        if (x == -1)
            x = 160 - strlen(s) * 3;
        f_14d2_09c3(0);
        if (d_5d9c_9dcd)
            f_14d2_0824(0);
        if (colour > 0 && y > 0) {
            f_14d2_073e(16);
            f_14d2_0870(x - 9, y, f_14d2_0d08(s));
        }
        f_14d2_073e(colour + 16);
        f_14d2_0870(x - 8, abs(y) + 1, f_14d2_0d08(s));
        f_14d2_09c3(1);
    }
}

void f_1680_2867(float x, float y, int bg, int fg, int w, char far *s)
{
    if (*s || w > 0) {
        if (w > 0)
            d_5d9c_9bd3 = w;
        else
            d_5d9c_9bd3 = strlen(s) * 6;
        if (x == -1)
            x = (160.0 - d_5d9c_9bd3 / 2.0) / 8.0;
        f_14d2_0722(fg + 16);
        f_14d2_075a(x * 8.0 - 1, fabs(y) * 8.0 - 6.0, d_5d9c_9bd3 + (x * 8.0 - 1), fabs(y) * 8.0);
        if (*s) {
            f_14d2_09c3(0);
            if (d_5d9c_9dcd)
                f_14d2_0824(0);
            if (y < 0) {
                f_14d2_073e(16);
                f_14d2_0870(x * 8.0 - 1, fabs(y) * 8.0, f_14d2_0d08(s));
            }
            f_14d2_073e(abs(bg) + 16);
            f_14d2_0870(x * 8.0, fabs(y) * 8.0 + 1, f_14d2_0d08(s));
            f_14d2_09c3(1);
        }
    }
}

void f_1680_2a61(float x, float y, int colour, char far *s)
{
    if (*s) {
        if (x == -1)
            x = 21.0 - strlen(s) / 2.0;
        f_14d2_09c3(0);
        if (d_5d9c_9dcd != 1)
            f_14d2_0824(1);
        if (colour > 0 && y > 0) {
            f_14d2_073e(16);
            f_14d2_0870(x * 8.0 - 9.0, y * 8.0 - 1, s);
        }
        f_14d2_073e(colour + 16);
        f_14d2_0870(x * 8.0 - 8.0, fabs(y) * 8.0 - 1, s);
        f_14d2_09c3(1);
    }
}

void f_1680_2b8b(float x, float y, int bg, int fg, int w, char far *s)
{
    if (*s || w > 0) {
        if (w > 0)
            d_5d9c_9bd3 = w;
        else
            d_5d9c_9bd3 = strlen(s) * 8;
        if (x == -1)
            x = (160.0 - d_5d9c_9bd3 / 2.0) / 8.0;
        f_14d2_0722(fg + 16);
        f_14d2_075a(x * 8.0 - 2.0, fabs(y) * 8.0 - 8.0, d_5d9c_9bd3 + x * 8.0 + 1, fabs(y) * 8.0);
        if (*s) {
            f_14d2_09c3(0);
            if (d_5d9c_9dcd != 1)
                f_14d2_0824(1);
            if (y < 0) {
                f_14d2_073e(16);
                f_14d2_0870(x * 8.0 - 1, fabs(y) * 8.0 - 1, s);
            }
            f_14d2_073e(abs(bg) + 16);
            f_14d2_0870(x * 8.0, fabs(y) * 8.0 - 1, s);
            f_14d2_09c3(1);
        }
    }
}

void f_1680_2d78(float x, float y, int colour, char far *s)
{
    if (*s) {
        if (x == -1)
            x = 21.0 - strlen(s) / 2.0;
        f_14d2_09c3(0);
        if (d_5d9c_9dcd != 2)
            f_14d2_0824(2);
        if (colour > 0 && y > 0) {
            f_14d2_073e(16);
            f_14d2_0870(x * 8.0 - 9.0, y * 8.0 + 9.0, s);
        }
        f_14d2_073e(colour + 16);
        f_14d2_0870(x * 8.0 - 8.0, fabs(y) * 8.0 + 10.0, s);
        f_14d2_09c3(1);
    }
}

void f_1680_2ea0(float x, float y, int bg, int fg, int w, char far *s)
{
    if (*s || w > 0) {
        if (w > 0)
            d_5d9c_9bd3 = w;
        else
            d_5d9c_9bd3 = strlen(s) * 8;
        if (x == -1)
            x = (160.0 - d_5d9c_9bd3 / 2.0) / 8.0;
        f_14d2_0722(fg + 16);
        f_14d2_075a(x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0, d_5d9c_9bd3 + x * 8.0 + 1, fabs(y) * 8.0 + 10.0);
        f_14d2_073e(d_5d9c_00d6[fg] + 16);
        f_14d2_07af(x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0, d_5d9c_9bd3 + x * 8.0 + 1, fabs(y) * 8.0 + 10.0);
        if (*s) {
            f_14d2_09c3(0);
            if (d_5d9c_9dcd != 2)
                f_14d2_0824(2);
            if (y < 0) {
                f_14d2_073e(16);
                f_14d2_0870(x * 8.0 - 1, fabs(y) * 8.0 + 9.0, s);
            }
            f_14d2_073e(abs(bg) + 16);
            f_14d2_0870(x * 8.0, fabs(y) * 8.0 + 10.0, s);
            f_14d2_09c3(1);
        }
    }
}

void f_1680_312c(float x, float y, int bg, int fg, int w, int len, char far *s)
{
    if (*s || w > 0) {
        if (w > 0)
            d_5d9c_9bd3 = w;
        else
            d_5d9c_9bd3 = strlen(s) * 8;
        if (x == -1)
            x = (160.0 - d_5d9c_9bd3 / 2.0) / 8.0;
        f_14d2_0722(fg + 16);
        f_14d2_075a(x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0, len + x * 8.0 + 1, fabs(y) * 8.0 + 10.0);
        if (*s) {
            f_14d2_09c3(0);
            if (d_5d9c_9dcd != 2)
                f_14d2_0824(2);
            if (y < 0) {
                f_14d2_073e(16);
                f_14d2_0870(x * 8.0 - 1, fabs(y) * 8.0 + 9.0, s);
            }
            f_14d2_073e(abs(bg) + 16);
            f_14d2_0870(x * 8.0, fabs(y) * 8.0 + 10.0, s);
            f_14d2_09c3(1);
        }
    }
}

void f_1680_331c(float x, float y, int team)
{
    char buf[160];

    sprintf(buf, " %s ", f_14d2_0d08(d_5d9c_08bc[team]));
    f_1680_2b8b(x, y, -(d_5739_00a4[team] / 16), d_5739_00a4[team] % 16, 0, buf);
}

void f_1680_33a0(float x, float y, int team)
{
    char buf[160];

    sprintf(buf, " %s ", (char far *)d_5d9c_08bc[team]);
    f_1680_2ea0(x, y, -(d_5739_00a4[team] / 16), d_5739_00a4[team] % 16, 0, buf);
}

void f_1680_341b(void)
{
    char title[80];
    char text[180];

    for (d_5d9c_9f91 = 0; d_5d9c_9f91 <= 0x6a3; d_5d9c_9f91++) {
        if (f_1680_0003(d_483b_0000[18][d_5d9c_9f91]) == 0) {
            d_5d9c_9f61 = d_483b_0000[18][d_5d9c_9f91] / 20 + 1;
            if (d_1f3e_5be8[20][d_5d9c_9f91] == 0) {
                if (d_483b_0000[23][d_5d9c_9f91] == 1 && d_5d9c_9f61 < 3 && d_483b_0000[20][d_5d9c_9f91] == 0)
                    d_1f3e_5be8[20][d_5d9c_9f91] = -1;
            } else if ((d_483b_0000[23][d_5d9c_9f91] > 1 || d_5d9c_9f61 > 2) && d_1f3e_5be8[17][d_5d9c_9f91] == 0)
                d_1f3e_5be8[20][d_5d9c_9f91] = 0;
        }
        if (d_483b_0000[20][d_5d9c_9f91] > 0 && d_483b_0000[19][d_5d9c_9f91] < 20)
            d_483b_0000[21][d_5d9c_9f91] = f_14d2_13eb(d_483b_0000[21][d_5d9c_9f91] - 5 - f_14d2_0c2a(6),
                                                       d_1f3e_5be8[14][d_5d9c_9f91] ? 55 : 70);
        if (d_483b_0000[21][d_5d9c_9f91] < 100)
            if (d_483b_0000[20][d_5d9c_9f91] == 0 ||
                (d_483b_0000[20][d_5d9c_9f91] > 0 && d_483b_0000[19][d_5d9c_9f91] == 20)) {
                d_483b_0000[21][d_5d9c_9f91] += (100 - d_483b_0000[21][d_5d9c_9f91]) / 2 + f_14d2_0c2a(5);
                if (d_483b_0000[21][d_5d9c_9f91] > 100)
                    d_483b_0000[21][d_5d9c_9f91] = 100;
                if (f_1680_0003(d_483b_0000[18][d_5d9c_9f91]) == 0 && d_1f3e_8a72[d_5d9c_9f91] == 0 &&
                    d_483b_0000[20][d_5d9c_9f91] == 0 && d_483b_0000[21][d_5d9c_9f91] > 90 && d_5d9c_9b38 == 0)
                    f_992a_124c(d_5d9c_9f91);
            }
        if (d_483b_0000[20][d_5d9c_9f91] > 0 && d_483b_0000[19][d_5d9c_9f91] < 20) {
            if (d_1f3e_5be8[14][d_5d9c_9f91] == 0) {
                d_5d9c_9c31 = d_2f3c_8353[d_483b_0000[18][d_5d9c_9f91]];
                d_5d9c_9db7 = f_14d2_13eb(f_14d2_0c2a(d_2f3c_65b7[d_5d9c_9c31]),
                                          f_14d2_0c2a(d_2f3c_65b7[d_5d9c_9c31])) / 10;
                d_5d9c_9ecf = f_14d2_0c2a(15) < d_5d9c_9db7 ? 2 : 1;
            } else
                d_5d9c_9ecf = f_14d2_0c2a(3) > 0 ? 2 : 1;
            if (d_1f3e_5be8[17][d_5d9c_9f91]) {
                if (d_483b_0000[20][d_5d9c_9f91] > 6)
                    d_5d9c_9ecf = f_14d2_0c2a(6) == 0;
                else
                    d_5d9c_9ecf = 0;
            }
            d_483b_0000[20][d_5d9c_9f91] = f_14d2_13eb(d_483b_0000[20][d_5d9c_9f91] - d_5d9c_9ecf, 0);
            if (d_483b_0000[20][d_5d9c_9f91] == 0)
                f_992a_38d7(d_5d9c_9f91);
        } else if (d_483b_0000[19][d_5d9c_9f91] > 20 && f_1680_02ed(d_483b_0000[18][d_5d9c_9f91]) > 13 &&
                   d_5d9c_9fab > 4)
            f_992a_35f9(d_5d9c_9f91, 20, d_483b_0000[19][d_5d9c_9f91] - 20);
        if (d_5d9c_9b38 == 0) {
            d_3e42_0000[11][d_5d9c_9f91] -= d_1f3e_9118[d_5d9c_9f91] && d_5d9c_9fab < 67;
            if (f_88c9_04fb(d_5d9c_9f91)) {
                d_3e42_0000[14][d_5d9c_9f91] += d_1f3e_9118[d_5d9c_9f91] == 0 ? 1 : 0;
                d_3e42_0000[15][d_5d9c_9f91] = 0;
            } else {
                d_3e42_0000[15][d_5d9c_9f91] += d_1f3e_9118[d_5d9c_9f91] ? 1 : 0;
                d_3e42_0000[14][d_5d9c_9f91] = 0;
            }
            d_5d9c_9c35 = d_2f3c_a08f[d_5d9c_9f91];
            if (d_5d9c_9c35 / 100 == d_5d9c_9fa7 && f_1680_0577(d_5d9c_9fab) == d_5d9c_9c35 % 100) {
                if (f_1680_0003(d_483b_0000[18][d_5d9c_9f91])) {
                    sprintf(title, "%s squad news", (char far *)d_5d9c_08bc[d_483b_0000[18][d_5d9c_9f91]]);
                    sprintf(text, "%s's contract expired this week - he is now a free agent.",
                            f_a1c3_213c(d_5d9c_9f91));
                    f_a1c3_5c9f(d_483b_0000[18][d_5d9c_9f91], title, text);
                }
                d_2f3c_a08f[d_5d9c_9f91] = 0;
                d_1f3e_5be8[9][d_5d9c_9f91] = 0;
                d_3e42_0000[19][d_5d9c_9f91] = 0;
            }
            if (d_1f3e_5be8[16][d_5d9c_9f91] && f_14d2_0c2a(10) == 0)
                d_1f3e_5be8[16][d_5d9c_9f91] = 0;
        }
    }
}
