/* @at 8119:0000 */
/* @data 5d51:2fb6 */
/* @module */

/* Overlay 4 (CM93's 8683.C, ported): the end of a match and of a season (the result line,
 * the form tables and league tables, promotions and relegations between Serie A, B and C),
 * the cup and European draws and fixtures. CM Italia has 18-team divisions (38 teams in
 * all) and adds a head-to-head tiebreak (f_8119_36f8, 3cf8). */
#include <stdio.h>
#include <string.h>
#include <mem.h>

/* the functions, in address order: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_8119_0000(void);
void f_8119_00c1(void);
void f_8119_0767(int a, int b, int c, int d);
void f_8119_0da5(int a, int b, int c, int d);
void f_8119_1137(int x);
void f_8119_119a(int x);
void f_8119_1230(int team, long amount, long z);
void f_8119_127c(int team, int amount);
void f_8119_130b(void);
void f_8119_1634(int team, int delta);
void f_8119_16ae(int team, int b, int c);
void f_8119_1837(int t, int a, int b);
void f_8119_1892(int t, int a, int b);
void f_8119_18d0(void);
void f_8119_1d91(void);
void f_8119_200b(void);
void f_8119_22bc(void);
void f_8119_2653(int g);
void f_8119_274d(int g);
void f_8119_2881(int comp, int first, int last, int week, int other);
void f_8119_2d27(void);
void f_8119_325e(void);
void f_8119_33d1(void);
void f_8119_3574(void);
void f_8119_36f8(void);
void f_8119_3cf8(int a, int b, char c);

void f_1d5e_1a24();
char far *f_1d5e_0f31(char far *s, unsigned n);
char far *f_1646_4a20(int player);
int f_71c8_2795(int week, int n);
char f_1646_258b(int);
char f_1646_2674(int);
char f_1646_2ba4(int);
char f_1646_2833(int, int);
char f_1646_28e4(int, int);
char f_1646_297b(int, int);
char f_1646_2a0c(int, int);
void f_9182_4869(int, int, int, int);
void f_9182_47ca(int, int, int, int);
void f_9182_4908(int, int, int, int);
void f_9182_4993(int, int, int, int);
void f_9182_4a94(int, int, int);
void f_9182_667a(int, int, int);
void f_b0f1_028e(int, int, char, char);
extern int d_5d51_d9e6;
extern int d_5d51_d950;
extern int d_5d51_d8ea;
extern int d_5d51_da06;
extern int d_5d51_d93c;
extern char d_5d51_d5c1;
extern char d_5d51_d5c3;
extern char d_5d51_d5c4;
extern char d_5d51_d5dd;
extern int d_5d51_d89c;
extern int d_5d51_d89a;
extern int d_5d51_d942;
extern int d_5d51_d940;
extern int d_5d51_d8f2;
extern int d_5d51_d8f4;
extern int d_5d51_d485;
extern int d_5d51_d487;
extern int d_5d51_d93a;
extern int d_5d51_d938;
extern int d_5d51_d8a0;
extern int d_5d51_d89e;
extern int d_5d51_da02;
extern int d_5d51_d9fc;
extern int d_5d51_d9fa;
extern int d_5d51_d9f8;
extern int d_5d51_d9f6;
extern int d_5d51_d8d8;
extern int d_5d51_d8da;
extern char near *d_5d51_b476[];
extern char far d_2414_0078[];
extern char far d_2414_5894[][174];
extern char far d_2414_4304[];
extern char far d_44d7_8e60[][128];
extern char far d_2414_1e28[][40][5];
extern unsigned char far d_3404_443a[][40];
char f_1646_2646(int);
extern unsigned char far d_2414_d3e0[][6][5];
extern unsigned char far d_2414_d5b4[][2][4];
extern int far d_3404_0816[][100];
extern unsigned char far d_3404_0728[];
extern int far d_3404_0818[][100];
void far *f_1d5e_1618(int handle, int page);
int f_1d5e_136a(int a, int b);
int f_1d5e_1308(int a, int b);
int f_9e79_0000(int x);
char f_1646_2cc9(int);
void f_9182_1975(int team, char far *s);
char f_9e79_0335(int v);
long f_1d5e_0d6a(long n);               /* random below n */
char far *f_1d5e_100c(char far *s);
char far *f_1646_3537(int x);
void f_1646_3c89(float x, float y, int colour, char far *s);
void f_1646_4ba0(char far *title);
void f_1646_58a8(int a);
int f_1646_6aa9(int x);
void f_1d5e_13a4(void far *a, void far *b, int n);
void f_9915_4d1c(int a, int b);
float f_1646_2cfd(int x);
void f_1646_0bf2(char far *);
extern int d_5d51_d9d0;
extern int d_5d51_d9fe;
extern int d_5d51_dd98;
extern int d_5d51_dd9a;
extern int d_5d51_dda0;
struct s_a01a { long pad[190]; long v[38]; };
extern struct s_a01a far *d_5d51_da44;
extern long far *d_5d51_da54;
extern char far *d_5d51_da48;
extern int d_5d51_d9d4;
extern int d_5d51_d9ca;
extern int d_5d51_d9ac;
extern int d_5d51_d996;
extern unsigned char d_5d51_2e76[];
extern unsigned char d_5d51_2e80[];
extern int far d_2414_d5e4[][4];
extern int far d_2414_d578[][5];
extern char far d_2414_41c4[];
extern int far d_3404_4226[];
extern int far d_3404_4272[];
extern unsigned char far d_3404_1fd2[];
extern unsigned char far d_3404_452a[];
extern unsigned char far d_3404_45f2[];
extern unsigned char far d_3404_47aa[][40];
extern int d_5d51_da0e;
extern int d_5d51_da0c;
extern unsigned char d_5d51_d406;
unsigned char f_1646_717d(char);
void f_1446_1e2b(void);
void f_1446_1e7d(void);
void f_1446_1ecf(void);
void f_1446_1f21(void);
void f_1446_1f73(void);
extern int d_5d51_d9cc;
extern int d_5d51_d9b8;
extern int d_5d51_d7f0;
extern unsigned char d_5d51_2e90[];
extern unsigned char d_5d51_2eae[];
extern unsigned char d_5d51_2eba[];
extern int far d_3404_074e[][100];
extern int far d_4f37_1200[][2][100];
extern int far d_4f37_1392[][2][100];       /* d_4f37_1200 + 1 row + 1 column: [r - 1] makes BCC put the base in BX */
extern unsigned char far d_2414_5544[];
extern char far d_2414_54d2[];
extern int d_5d51_d7f2;
extern int d_5d51_d934;
extern char d_5d51_d5de;
extern char far d_2414_5460[][38];
extern unsigned char far d_2414_d8c4[];
extern unsigned char far d_4f37_099e[];
extern unsigned char far d_4f37_09c3[][502];
extern int d_5d51_d94c;
extern int d_5d51_d94a;
extern int d_5d51_d8fe;
extern int d_5d51_da04;
extern int d_5d51_d834;
extern int d_5d51_d7ee;
extern int d_5d51_d994;
extern int d_5d51_d7ec;
extern int d_5d51_d7ea;
extern int d_5d51_d84a;
extern int d_5d51_d9c2;
extern int d_5d51_d7e8;
extern int d_5d51_d7e6;
extern int d_5d51_d7e4;
extern int d_5d51_d7e2;
extern int d_5d51_d8a6;
extern int d_5d51_d8a4;
extern int d_5d51_2f02[];
extern int d_5d51_b514[];
extern int far d_3404_12f4[];
extern int far d_3404_1314[];
extern char far d_2414_4bf6[];
unsigned char f_1646_716c(char c);
extern unsigned char far d_3404_466a[];
extern unsigned char far d_3404_4692[];
extern char d_5d51_d402[];
extern int far d_4f37_1390[][2][100];
struct s_tab { unsigned char team, f, a, pts; };
extern struct s_tab d_5d51_da60[20];

void f_8119_0000(void)
{
    FILE *fp;
    long off;

    f_1d5e_1a24(2);
    fp = fopen(d_2414_0078, "rb+");
    for (d_5d51_d9e6 = 0; d_5d51_d9e6 <= d_5d51_d950 - 1; d_5d51_d9e6++) {
        off = (long)d_5d51_d8ea + d_5d51_d9e6 - 1;
        off = off * 174;
        fseek(fp, off, 0);
        fwrite(d_2414_5894[d_5d51_d9e6], 1, 174, fp);
    }
    fclose(fp);
}

void f_8119_00c1(void)
{
    char wd[8];
    char buf[320];

    d_5d51_d93c = f_71c8_2795(d_5d51_da06, d_5d51_d9e6 + 1);
    if (d_5d51_d5c3) {
        d_44d7_8e60[d_5d51_d93c][d_5d51_d9e6 * 2] = d_5d51_d89c;
        d_44d7_8e60[d_5d51_d93c][d_5d51_d9e6 * 2 + 1] = d_5d51_d89a;
    }
    sprintf(d_2414_4304, "%s %d", (char far *)d_5d51_b476[d_5d51_d942], d_5d51_d89c);
    if (d_5d51_d89c > 6) {
        strcat(d_2414_4304, " (");
        strcat(d_2414_4304, f_1646_4a20(d_5d51_d89c));
        strcat(d_2414_4304, ")");
    }
    strcat(d_2414_4304, " ");
    strcat(d_2414_4304, d_5d51_b476[d_5d51_d940]);
    strcat(d_2414_4304, " ");
    sprintf(buf, "%d", d_5d51_d89a);
    strcat(d_2414_4304, buf);
    if (d_5d51_d89a > 6) {
        strcat(d_2414_4304, " (");
        strcat(d_2414_4304, f_1646_4a20(d_5d51_d89a));
        strcat(d_2414_4304, ")");
    }
    if (d_5d51_da06 > 12 && d_5d51_d5c1 == 0) {
        if (d_5d51_d89c > d_5d51_d89a) {
            f_9182_4869(d_5d51_d8f2, d_5d51_d8f4, d_5d51_d89a, d_5d51_d89c);
            f_9182_47ca(d_5d51_d8f4, d_5d51_d8f2, d_5d51_d89c, d_5d51_d89a);
        } else if (d_5d51_d89a > d_5d51_d89c) {
            f_9182_47ca(d_5d51_d8f2, d_5d51_d8f4, d_5d51_d89a, d_5d51_d89c);
            f_9182_4869(d_5d51_d8f4, d_5d51_d8f2, d_5d51_d89c, d_5d51_d89a);
        }
    }
    if (d_5d51_da06 > 12 && d_5d51_d5c4) {
        f_9182_4908(d_5d51_d8f4, d_5d51_d8f2, d_5d51_d485, d_5d51_d487);
        f_9182_4993(d_5d51_d8f4, d_5d51_d8f2, d_5d51_d485, d_5d51_d487);
    }
    if (d_5d51_da06 > 12) {
        if (d_5d51_d942 < 38)
            f_b0f1_028e(d_5d51_d8f4, d_5d51_d8f2, d_5d51_d89c, d_5d51_d89a);
        if (d_5d51_d940 < 38)
            f_b0f1_028e(d_5d51_d8f2, d_5d51_d8f4, d_5d51_d89a, d_5d51_d89c);
    }
    if (f_1646_2833(d_5d51_da06, d_5d51_d9e6 + 1) || f_1646_28e4(d_5d51_da06, d_5d51_d9e6 + 1)
        || f_1646_297b(d_5d51_da06, d_5d51_d9e6 + 1) || f_1646_2a0c(d_5d51_da06, d_5d51_d9e6 + 1)
        || f_1646_2674(d_5d51_da06)) {
        d_5d51_d89c += d_5d51_d93a;
        d_5d51_d89a += d_5d51_d938;
        if (d_5d51_d5dd) {
            sprintf(buf, "  AGG:%d-%d", d_5d51_d89c, d_5d51_d89a);
            strcat(d_2414_4304, buf);
        }
        d_5d51_d89c += d_5d51_d8a0;
        d_5d51_d89a += d_5d51_d89e;
    }
    if (d_5d51_d89c > d_5d51_d89a) {
        if (f_1646_258b(d_5d51_da06) || f_1646_2646(d_5d51_da06)) {
            d_3404_443a[12][d_5d51_d942]++;
            d_3404_443a[13][d_5d51_d940]++;
            d_3404_443a[18][d_5d51_d940]++;
            sprintf(buf, "%sW", d_2414_1e28[0][d_5d51_d942]);
            strcpy(d_2414_1e28[0][d_5d51_d942], f_1d5e_0f31(buf, 4));
            sprintf(buf, "%sL", d_2414_1e28[1][d_5d51_d940]);
            strcpy(d_2414_1e28[1][d_5d51_d940], f_1d5e_0f31(buf, 4));
        } else
            f_8119_0767(d_5d51_d8f4, d_5d51_d8f2, d_5d51_d89c, d_5d51_d89a);
    } else if (d_5d51_d89c == d_5d51_d89a) {
        if (f_1646_258b(d_5d51_da06) || f_1646_2646(d_5d51_da06)) {
            d_3404_443a[17][d_5d51_d940]++;
            if (d_5d51_d89c > 0)
                strcpy(wd, "X");
            else
                strcpy(wd, "D");
            sprintf(buf, "%s%s", d_2414_1e28[0][d_5d51_d942], (char far *)wd);
            strcpy(d_2414_1e28[0][d_5d51_d942], f_1d5e_0f31(buf, 4));
            sprintf(buf, "%s%s", d_2414_1e28[1][d_5d51_d940], (char far *)wd);
            strcpy(d_2414_1e28[1][d_5d51_d940], f_1d5e_0f31(buf, 4));
        } else
            f_8119_0da5(d_5d51_d8f4, d_5d51_d8f2, d_5d51_d89c, d_5d51_d89a);
    } else {
        if (f_1646_258b(d_5d51_da06) || f_1646_2646(d_5d51_da06)) {
            d_3404_443a[12][d_5d51_d940]++;
            d_3404_443a[16][d_5d51_d940]++;
            d_3404_443a[13][d_5d51_d942]++;
            sprintf(buf, "%sL", d_2414_1e28[0][d_5d51_d942]);
            strcpy(d_2414_1e28[0][d_5d51_d942], f_1d5e_0f31(buf, 4));
            sprintf(buf, "%sW", d_2414_1e28[1][d_5d51_d940]);
            strcpy(d_2414_1e28[1][d_5d51_d940], f_1d5e_0f31(buf, 4));
        } else
            f_8119_0767(d_5d51_d8f2, d_5d51_d8f4, d_5d51_d89a, d_5d51_d89c);
    }
    if (f_1646_258b(d_5d51_da06) || f_1646_2646(d_5d51_da06)) {
        d_3404_443a[14][d_5d51_d942] += d_5d51_d89c;
        d_3404_443a[15][d_5d51_d942] += d_5d51_d89a;
        d_3404_443a[14][d_5d51_d940] += d_5d51_d89a;
        d_3404_443a[15][d_5d51_d940] += d_5d51_d89c;
        d_3404_443a[19][d_5d51_d940] += d_5d51_d89a;
        d_3404_443a[20][d_5d51_d940] += d_5d51_d89c;
    }
}

void f_8119_0767(int a, int b, int c, int d)
{
    if (f_1646_2674(d_5d51_da06)) {
        d_3404_0816[0][d_5d51_da02] = a;
        d_5d51_da02++;
        if (d_5d51_da06 == 100) {
            d_3404_0818[0][0] = b;
            f_9182_4a94(a, 1, 150);
            f_8119_1230(a, 100000L, 7500L);
            f_9182_667a(1, a, b);
        }
    } else if (f_1646_2a0c(d_5d51_da06, d_5d51_d9e6 + 1)) {
        if (d_5d51_da06 <= 47) {
            f_8119_119a(a);
            d_2414_d3e0[0][d_5d51_d8da][d_5d51_d8d8] = d_2414_d3e0[0][d_5d51_d8da][d_5d51_d8d8] + 1;
            d_2414_d3e0[1][d_5d51_d8da][d_5d51_d8d8] = d_2414_d3e0[1][d_5d51_d8da][d_5d51_d8d8] + 1;
            d_2414_d3e0[4][d_5d51_d8da][d_5d51_d8d8] = d_2414_d3e0[4][d_5d51_d8da][d_5d51_d8d8] + c;
            d_2414_d3e0[5][d_5d51_d8da][d_5d51_d8d8] = d_2414_d3e0[5][d_5d51_d8da][d_5d51_d8d8] + d;
            f_8119_119a(b);
            d_2414_d3e0[0][d_5d51_d8da][d_5d51_d8d8] = d_2414_d3e0[0][d_5d51_d8da][d_5d51_d8d8] + 1;
            d_2414_d3e0[3][d_5d51_d8da][d_5d51_d8d8] = d_2414_d3e0[3][d_5d51_d8da][d_5d51_d8d8] + 1;
            d_2414_d3e0[4][d_5d51_d8da][d_5d51_d8d8] = d_2414_d3e0[4][d_5d51_d8da][d_5d51_d8d8] + d;
            d_2414_d3e0[5][d_5d51_d8da][d_5d51_d8d8] = d_2414_d3e0[5][d_5d51_d8da][d_5d51_d8d8] + c;
        } else if (!d_5d51_d5c3) {
            d_3404_0816[2][d_5d51_d9fc] = a;
            d_5d51_d9fc++;
            if (d_5d51_da06 == 75) {
                d_3404_0818[2][0] = b;
                f_9182_4a94(a, 3, 150);
                f_8119_1230(a, 75000L, 2000L);
                f_9182_667a(3, a, b);
            }
        }
    } else if (f_1646_2833(d_5d51_da06, d_5d51_d9e6 + 1)) {
        d_3404_0816[3][d_5d51_d9fa] = a;
        d_5d51_d9fa++;
        if (d_5d51_da06 == 91) {
            d_3404_0818[3][0] = b;
            f_9182_4a94(a, 4, 150);
            f_8119_1230(a, 250000L, 10000L);
            f_9182_667a(4, a, b);
        }
    } else if (f_1646_28e4(d_5d51_da06, d_5d51_d9e6 + 1)) {
        d_3404_0816[4][d_5d51_d9f8] = a;
        d_5d51_d9f8++;
        if (d_5d51_da06 == 89) {
            d_3404_0818[4][0] = b;
            f_9182_4a94(a, 5, 150);
            f_8119_1230(a, 250000L, 10000L);
            f_9182_667a(5, a, b);
        }
    } else if (f_1646_297b(d_5d51_da06, d_5d51_d9e6 + 1)) {
        if (d_5d51_da06 < 41 || d_5d51_da06 > 83) {
            d_3404_0816[5][d_5d51_d9f6] = a;
            d_5d51_d9f6++;
            if (d_5d51_da06 == 93) {
                d_3404_0818[5][0] = b;
                f_9182_4a94(a, 6, 150);
                f_8119_1230(a, 1000000L, 20000L);
                f_9182_667a(6, a, b);
            }
        } else {
            f_8119_1137(a);
            d_2414_d5b4[0][d_5d51_d8da][d_5d51_d8d8] = d_2414_d5b4[0][d_5d51_d8da][d_5d51_d8d8] + 1;
            d_2414_d5b4[1][d_5d51_d8da][d_5d51_d8d8] = d_2414_d5b4[1][d_5d51_d8da][d_5d51_d8d8] + 1;
            d_2414_d5b4[4][d_5d51_d8da][d_5d51_d8d8] = d_2414_d5b4[4][d_5d51_d8da][d_5d51_d8d8] + c;
            d_2414_d5b4[5][d_5d51_d8da][d_5d51_d8d8] = d_2414_d5b4[5][d_5d51_d8da][d_5d51_d8d8] + d;
            f_8119_1137(b);
            d_2414_d5b4[0][d_5d51_d8da][d_5d51_d8d8] = d_2414_d5b4[0][d_5d51_d8da][d_5d51_d8d8] + 1;
            d_2414_d5b4[3][d_5d51_d8da][d_5d51_d8d8] = d_2414_d5b4[3][d_5d51_d8da][d_5d51_d8d8] + 1;
            d_2414_d5b4[4][d_5d51_d8da][d_5d51_d8d8] = d_2414_d5b4[4][d_5d51_d8da][d_5d51_d8d8] + d;
            d_2414_d5b4[5][d_5d51_d8da][d_5d51_d8d8] = d_2414_d5b4[5][d_5d51_d8da][d_5d51_d8d8] + c;
        }
    } else if (f_1646_2ba4(d_5d51_da06)) {
        if (d_3404_0728[1] == a)
            f_1d5e_13a4(&d_3404_0728[0], &d_3404_0728[1], 1);
        else if (d_3404_0728[14] == a)
            f_1d5e_13a4(&d_3404_0728[13], &d_3404_0728[14], 1);
        else if (d_3404_0728[22] == a)
            f_1d5e_13a4(&d_3404_0728[21], &d_3404_0728[22], 1);
        else if (d_3404_0728[34] == a)
            f_1d5e_13a4(&d_3404_0728[33], &d_3404_0728[34], 1);
    }
}

void f_8119_0da5(int a, int b, int c, int d)
{
    if (f_1646_2a0c(d_5d51_da06, d_5d51_d9e6 + 1) && d_5d51_da06 <= 47) {
        f_8119_119a(a);
        d_2414_d3e0[0][d_5d51_d8da][d_5d51_d8d8] = d_2414_d3e0[0][d_5d51_d8da][d_5d51_d8d8] + 1;
        d_2414_d3e0[2][d_5d51_d8da][d_5d51_d8d8] = d_2414_d3e0[2][d_5d51_d8da][d_5d51_d8d8] + 1;
        d_2414_d3e0[4][d_5d51_d8da][d_5d51_d8d8] = d_2414_d3e0[4][d_5d51_d8da][d_5d51_d8d8] + c;
        d_2414_d3e0[5][d_5d51_d8da][d_5d51_d8d8] = d_2414_d3e0[5][d_5d51_d8da][d_5d51_d8d8] + d;
        f_8119_119a(b);
        d_2414_d3e0[0][d_5d51_d8da][d_5d51_d8d8] = d_2414_d3e0[0][d_5d51_d8da][d_5d51_d8d8] + 1;
        d_2414_d3e0[2][d_5d51_d8da][d_5d51_d8d8] = d_2414_d3e0[2][d_5d51_d8da][d_5d51_d8d8] + 1;
        d_2414_d3e0[4][d_5d51_d8da][d_5d51_d8d8] = d_2414_d3e0[4][d_5d51_d8da][d_5d51_d8d8] + d;
        d_2414_d3e0[5][d_5d51_d8da][d_5d51_d8d8] = d_2414_d3e0[5][d_5d51_d8da][d_5d51_d8d8] + c;
    } else if (f_1646_297b(d_5d51_da06, d_5d51_d9e6 + 1) && d_5d51_da06 >= 41 && d_5d51_da06 <= 83) {
        f_8119_1137(a);
        d_2414_d5b4[0][d_5d51_d8da][d_5d51_d8d8] = d_2414_d5b4[0][d_5d51_d8da][d_5d51_d8d8] + 1;
        d_2414_d5b4[2][d_5d51_d8da][d_5d51_d8d8] = d_2414_d5b4[2][d_5d51_d8da][d_5d51_d8d8] + 1;
        d_2414_d5b4[4][d_5d51_d8da][d_5d51_d8d8] = d_2414_d5b4[4][d_5d51_d8da][d_5d51_d8d8] + c;
        d_2414_d5b4[5][d_5d51_d8da][d_5d51_d8d8] = d_2414_d5b4[5][d_5d51_d8da][d_5d51_d8d8] + d;
        f_8119_1137(b);
        d_2414_d5b4[0][d_5d51_d8da][d_5d51_d8d8] = d_2414_d5b4[0][d_5d51_d8da][d_5d51_d8d8] + 1;
        d_2414_d5b4[2][d_5d51_d8da][d_5d51_d8d8] = d_2414_d5b4[2][d_5d51_d8da][d_5d51_d8d8] + 1;
        d_2414_d5b4[4][d_5d51_d8da][d_5d51_d8d8] = d_2414_d5b4[4][d_5d51_d8da][d_5d51_d8d8] + d;
        d_2414_d5b4[5][d_5d51_d8da][d_5d51_d8d8] = d_2414_d5b4[5][d_5d51_d8da][d_5d51_d8d8] + c;
    }
}

void f_8119_1137(int x)
{
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 1; d_5d51_d9d0++)
        for (d_5d51_d9fe = 0; d_5d51_d9fe <= 3; d_5d51_d9fe++)
            if (d_2414_d5e4[d_5d51_d9d0][d_5d51_d9fe] == x) {
                d_5d51_d8da = d_5d51_d9d0;
                d_5d51_d8d8 = d_5d51_d9fe;
                d_5d51_d9fe = 3;
                d_5d51_d9d0 = 1;
            }
}

void f_8119_119a(int x)
{
    unsigned char rows;
    unsigned char cols;

    rows = d_5d51_da06 <= 29 ? 6 : 4;
    cols = d_5d51_da06 <= 29 ? 3 : 4;
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= rows - 1; d_5d51_d9d0++)
        for (d_5d51_d9fe = 0; d_5d51_d9fe <= cols - 1; d_5d51_d9fe++)
            if (d_2414_d578[d_5d51_d9d0][d_5d51_d9fe] == x) {
                d_5d51_d8da = d_5d51_d9d0;
                d_5d51_d8d8 = d_5d51_d9fe;
                d_5d51_d9fe = cols - 1;
                d_5d51_d9d0 = rows - 1;
            }
}

void f_8119_1230(int team, long amount, long z)
{
    if (team < 38) {
        d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
        d_5d51_da44->v[team] += amount;
        f_8119_127c(team, z);
    }
}

void f_8119_127c(int team, int amount)
{
    d_5d51_da54 = f_1d5e_1618(d_5d51_dda0, 1);
    d_5d51_da54[d_3404_4226[team]] += amount / 50 * 50;
    d_5d51_da48 = f_1d5e_1618(d_5d51_dd9a, 1);
    ((int far *)(d_5d51_da48 + 2600))[d_3404_4226[team]] += amount / 50 * 50;
}

void f_8119_130b(void)
{
    unsigned char far *p;
    unsigned char old;
    char gap;
    char buf[320];
    register int i;
    int n;

    for (d_5d51_d9d4 = 0; d_5d51_d9d4 <= 37; d_5d51_d9d4++) {
        d_5d51_d9ca = d_3404_0728[d_5d51_d9d4];
        old = d_3404_45f2[d_5d51_d9ca];
        d_3404_45f2[d_5d51_d9ca] = 2;
        p = d_5d51_2e76;
        for (i = 1; i <= 5; i++) {
            d_5d51_d9ac = *p;
            p++;
            d_5d51_d996 = *p;
            p++;
            gap = d_5d51_d9ac <= 17 ? 34 - d_5d51_da0e : 38 - d_5d51_da0c;
            if (d_5d51_d9d4 == d_5d51_d9ac) {
                if (f_9e79_0000(d_5d51_d996) + gap * 2 < f_9e79_0000(d_5d51_d9d4) || d_5d51_da06 >= 96) {
                    d_3404_45f2[d_5d51_d9ca] = d_5d51_d9ac == 0 ? 4 : 3;
                    i = 5;
                }
            }
        }
        p = d_5d51_2e80;
        for (i = 1; i <= 8; i++) {
            d_5d51_d9ac = *p;
            p++;
            d_5d51_d996 = *p;
            p++;
            gap = d_5d51_d9ac <= 17 ? 34 - d_5d51_da0e : 38 - d_5d51_da0c;
            if (d_5d51_d9d4 == d_5d51_d9ac) {
                if (f_9e79_0000(d_5d51_d9d4) + gap * 2 < f_9e79_0000(d_5d51_d996) || (d_5d51_d406 == 0 ? 96 : 97) <= d_5d51_da06) {
                    d_3404_45f2[d_5d51_d9ca] = 1;
                    i = 8;
                }
            }
        }
        if (old == 2) {
            if (d_3404_45f2[d_5d51_d9ca] > 2) {
                n = d_3404_45f2[d_5d51_d9ca] == 4 ? 2 : 1;
                switch (f_1646_717d(d_5d51_d9ca)) {
                case 0:
                    f_8119_1230(d_5d51_d9ca, n * 125000L, 10000L);
                    break;
                case 1:
                    f_8119_1230(d_5d51_d9ca, (long)(n * 12500), 5000L);
                    break;
                }
                if (f_1646_2cc9(d_5d51_d9ca)) {
                    if (d_5d51_d9d4 == 0)
                        strcpy(buf, "Champions!  A great performance.");
                    else
                        strcpy(buf, "Promotion!  A successful season.");
                    f_9182_1975(d_5d51_d9ca, buf);
                }
            } else if (d_3404_45f2[d_5d51_d9ca] == 1) {
                if (f_1646_2cc9(d_5d51_d9ca)) {
                    if (d_5d51_d9d4 == 17)
                        strcpy(buf, "Relegation to Serie B.  You prat.");
                    else
                        strcpy(buf, "Relegation to Serie C.  Very poor.");
                    f_9182_1975(d_5d51_d9ca, buf);
                }
                f_8119_1634(d_5d51_d9ca, -20);
            }
        }
        if (d_5d51_d9d4 < 18 && d_5d51_da0e <= 34) {
            if (d_5d51_da0e == 34)
                f_9182_667a(0, d_3404_0728[0], d_3404_0728[1]);
            d_3404_47aa[d_5d51_da0e][d_5d51_d9ca] = d_5d51_d9d4 + 1;
        } else if (d_5d51_d9d4 >= 18 && d_5d51_da0c <= 38)
            d_3404_47aa[d_5d51_da0c][d_5d51_d9ca] = d_5d51_d9d4 - 17;
    }
}

void f_8119_1634(int team, int delta)
{
    if (d_3404_4272[team] < 650) {
        if (d_3404_45f2[team] < 3 || delta > 0) {
            if (d_3404_1fd2[d_3404_4226[team]] < 10)
                d_3404_452a[team] = f_1d5e_1308(f_1d5e_136a(d_3404_452a[team] + delta, 100), 0);
        }
    }
}

/* the name of the competition the match of week b is in, and for a cup the round
 * (CM93's f_8683_16db). Written in C, BCC merges the cups' identical tails
 * (push ax / push si / call f_8119_1892 / add sp,6) into the Italian Cup branch instead
 * of the European Cup one, so as in CM93 the jumps into the shared tails are emitted as
 * the original's bytes (BCC 3.0: no addresses in __emit__). */
void f_8119_16ae(int team, int b, int c)
{
    if (f_1646_258b(team) || f_1646_2646(team)) {
        if (c < 18) {
            __emit__(0x1e);                                 /* push ds */
            _AX = (unsigned)(char near *)"Serie A";
            __emit__((char)0xe9, 0x46, 0x01);               /* jmp 1822 */
        }
        __emit__(0x1e);
        _AX = (unsigned)(char near *)"Serie B";
        __emit__((char)0xe9, 0x3f, 0x01);                   /* jmp 1822 */
    }
    if (f_1646_2674(team)) {
        strcpy(d_2414_41c4, "Italian Cup");
        f_8119_1837(team, 0x47, 0x4d);
        __emit__((char)0xb8, 0x64, 0, 0x50, (char)0xb8, 0x62, 0, (char)0xe9, (char)0xde, 0);
    }                                   /* push 64 / mov ax,62 / jmp 17fc (f_8119_1892) */
    if (f_1646_2a0c(team, b)) {
        strcpy(d_2414_41c4, "Ang/Ita Cup");
        f_8119_1837(team, 0x3d, 0x41);
        __emit__((char)0xb8, (char)0xff, (char)0xff, 0x50, (char)0xb8, 0x4b, 0, (char)0xe9, (char)0xa1, 0);
    }
    if (f_1646_2833(team, b)) {
        strcpy(d_2414_41c4, "UEFA Cup");
        f_8119_1837(team, 0x4f, 0x53);
        __emit__((char)0xb8, 0x5b, 0, 0x50, (char)0xb8, 0x57, 0, (char)0xeb, 0x65);
    }
    if (f_1646_28e4(team, b)) {
        strcpy(d_2414_41c4, "C/Winners Cup");
        f_8119_1837(team, 0x4f, 0x53);
        __emit__((char)0xb8, (char)0xff, (char)0xff, 0x50, (char)0xb8, 0x59, 0, (char)0xeb, 0x29);
    }
    if (f_1646_297b(team, b)) {
        strcpy(d_2414_41c4, "European Cup");
        f_8119_1892(team, 0x5d, -1);
        __emit__((char)0xeb, 0x2b);                     /* jmp 1833 (the epilogue) */
    }
    if (f_1646_2ba4(team)) {
        __emit__(0x1e);
        _AX = (unsigned)(char near *)"Playoff";
        __emit__((char)0xeb, 0x09);                     /* jmp 1822 */
    }
    if (team < 12)
        strcpy(d_2414_41c4, "Friendly");
}

void f_8119_1837(int t, int a, int b)
{
    if (t == a || t == b) {
        if (strlen(d_2414_41c4) + 11 <= 19)
            strcat(d_2414_41c4, " Semi-Final");
        else if (strlen(d_2414_41c4) + 5 <= 19)
            strcat(d_2414_41c4, " Semi");
    }
}

void f_8119_1892(int t, int a, int b)
{
    if (t == a || t == b) {
        if (strlen(d_2414_41c4) + 6 <= 19)
            strcat(d_2414_41c4, " Final");
    }
}

void f_8119_18d0(void)
{
    unsigned char i;

    switch (d_5d51_da06) {
    case 1:
        f_8119_2881(6, 1, 0x20, 0x15, 0x19);
        f_8119_2881(5, 0x21, 0x40, 0x15, 0x19);
        f_8119_2881(4, 0x41, 0x80, 0x15, 0x19);
        for (i = 0; i <= 21; i++)
            d_3404_074e[1][i] = i + 16;
        for (i = 22; i <= 31; i++)
            d_3404_074e[1][i] = i + 416;
        for (i = 32; i <= 47; i++)
            d_3404_074e[1][i] = i - 32;
        f_8119_2881(1, 1, 0x20, 0xe, -1);
        f_8119_200b();
        f_1446_1e2b();
        f_1446_1e7d();
        f_1446_1ecf();
        f_1446_1f21();
        f_1446_1f73();
        break;
    case 14:
        for (d_5d51_d9cc = 16; d_5d51_d9cc <= 31; d_5d51_d9cc++)
            d_3404_074e[1][d_5d51_d9cc] = d_3404_074e[1][d_5d51_d9cc + 16];
        f_8119_2881(1, 1, 0x20, 0xf, 0x11);
        break;
    case 17:
        f_8119_2881(1, 1, 0x10, 0x1b, 0x21);
        break;
    case 25:
        f_8119_2881(6, 1, 0x10, 0x1f, 0x23);
        f_8119_2881(5, 0x11, 0x20, 0x1f, 0x23);
        f_8119_2881(4, 0x21, 0x40, 0x1f, 0x23);
        break;
    case 29:
        f_8119_22bc();
        break;
    case 33:
        f_8119_2881(1, 1, 8, 0x3b, 0x3f);
        break;
    case 35:
        f_8119_1d91();
        f_8119_2881(5, 9, 0x10, 0x45, 0x49);
        f_8119_2881(4, 9, 0x18, 0x29, 0x2d);
        break;
    case 45:
        f_8119_2881(4, 0x11, 0x18, 0x45, 0x49);
        break;
    case 47:
        f_8119_2881(3, 1, 4, 0x3d, 0x41);
        break;
    case 63:
        f_8119_2881(1, 1, 4, 0x47, 0x4d);
        break;
    case 65:
        d_4f37_1200[1][0][75] = d_3404_074e[3][0] << 5;
        d_4f37_1200[1][1][75] = d_3404_074e[3][1] << 5;
        f_9182_4a94(d_3404_074e[3][0], 3, 75);
        f_9182_4a94(d_3404_074e[3][1], 3, 75);
        break;
    case 73:
        f_8119_2881(5, 9, 0xc, 0x4f, 0x53);
        f_8119_2881(4, 0xd, 0x10, 0x4f, 0x53);
        break;
    case 77:
        d_4f37_1200[1][0][98] = d_3404_074e[1][0] << 5;
        d_4f37_1200[1][1][98] = d_3404_074e[1][1] << 5;
        f_9182_4a94(d_3404_074e[1][0], 1, 98);
        f_9182_4a94(d_3404_074e[1][1], 1, 98);
        d_4f37_1200[1][0][100] = d_4f37_1200[1][1][98];
        d_4f37_1200[1][1][100] = d_4f37_1200[1][0][98];
        break;
    case 83:
        d_4f37_1200[1][0][93] = d_3404_074e[6][0] << 5;
        d_4f37_1200[1][1][93] = d_3404_074e[6][1] << 5;
        f_9182_4a94(d_3404_074e[6][0], 6, 93);
        f_9182_4a94(d_3404_074e[6][1], 6, 93);
        d_4f37_1200[1][0][89] = d_3404_074e[5][0] << 5;
        d_4f37_1200[1][1][89] = d_3404_074e[5][1] << 5;
        f_9182_4a94(d_3404_074e[5][0], 5, 89);
        f_9182_4a94(d_3404_074e[5][1], 5, 89);
        d_4f37_1200[1][0][87] = d_3404_074e[4][0] << 5;
        d_4f37_1200[1][1][87] = d_3404_074e[4][1] << 5;
        f_9182_4a94(d_3404_074e[4][0], 4, 87);
        f_9182_4a94(d_3404_074e[4][1], 4, 87);
        d_4f37_1200[1][0][91] = d_4f37_1200[1][1][87];
        d_4f37_1200[1][1][91] = d_4f37_1200[1][0][87];
        break;
    }
}

void f_8119_1d91(void)
{
    unsigned char far *p;
    unsigned char a;
    unsigned char b;
    unsigned char c;
    char first;
    char second;

    first = 0;
    second = 0;
    for (d_5d51_d9cc = 0; d_5d51_d9cc < 38; d_5d51_d9cc++)
        d_2414_5544[d_5d51_d9cc] = 0;
    for (d_5d51_d7f0 = 0; d_5d51_d7f0 <= 7; d_5d51_d7f0++) {
        if (d_5d51_d7f0 < 4) {
            d_2414_d5e4[0][d_5d51_d7f0] = d_3404_074e[6][d_5d51_d7f0];
            if (f_1646_2cc9(d_3404_074e[6][d_5d51_d7f0]))
                first = -1;
        } else {
            d_2414_d5e4[0][d_5d51_d7f0] = d_3404_074e[6][d_5d51_d7f0];
            if (f_1646_2cc9(d_3404_074e[6][d_5d51_d7f0]))
                second = -1;
        }
        if (d_3404_074e[6][d_5d51_d7f0] < 38)
            d_2414_5544[d_3404_074e[6][d_5d51_d7f0]] = -1;
    }
    memset(d_2414_d5b4, 0, 0x30);
    p = d_5d51_2e90;
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 5; d_5d51_d9fe++) {
        a = *p++;
        for (d_5d51_d9b8 = 0; d_5d51_d9b8 <= 1; d_5d51_d9b8++) {
            b = *p++;
            c = *p++;
            for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 1; d_5d51_d9d0++) {
                d_4f37_1200[d_5d51_d9b8 + d_5d51_d9d0 * 2 + 1][0][a] = d_2414_d5e4[d_5d51_d9d0][b - 1] << 5;
                d_4f37_1200[d_5d51_d9b8 + d_5d51_d9d0 * 2 + 1][1][a] = d_2414_d5e4[d_5d51_d9d0][c - 1] << 5;
            }
        }
    }
    if (first)
        f_8119_2653(0);
    if (second)
        f_8119_2653(1);
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 1; d_5d51_d9fe++)
        for (d_5d51_d9b8 = 0; d_5d51_d9b8 <= 3; d_5d51_d9b8++)
            f_9182_4a94(d_2414_d5e4[d_5d51_d9fe][d_5d51_d9b8], 6, 41);
}

void f_8119_200b(void)
{
    int col, row;
    int a, b;
    char used[6];
    unsigned char far *p;
    char taken[540];

    memset(taken, 0, 540);
    memset(used, 0, 6);
    for (d_5d51_d9cc = 0; d_5d51_d9cc < 38; d_5d51_d9cc++)
        d_2414_54d2[d_5d51_d9cc] = 0;
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 5; d_5d51_d9d0++) {
        for (d_5d51_d9fe = 0; d_5d51_d9fe <= 2; d_5d51_d9fe++) {
            do
                d_5d51_d9cc = f_1d5e_0d6a(20) + 18;
            while (taken[d_5d51_d9cc] != 0);
            taken[d_5d51_d9cc] = -1;
            if (f_9e79_0335(d_5d51_d9cc)) {
                do
                    ;
                while (f_9e79_0335(d_5d51_d9cc = f_1d5e_0d6a(18)));
                taken[d_5d51_d9cc] = -1;
            }
            if (d_5d51_d9cc < 38)
                d_2414_54d2[d_5d51_d9cc] = -1;
            d_2414_d578[d_5d51_d9d0][d_5d51_d9fe] = d_5d51_d9cc;
            if (f_1646_2cc9(d_5d51_d9cc))
                used[d_5d51_d9d0] = -1;
        }
    }
    memset(d_2414_d3e0, 0, 180);
    p = d_5d51_2eae;
    for (d_5d51_d9fe = 1; d_5d51_d9fe <= 3; d_5d51_d9fe++) {
        col = *p++;
        row = *p++;
        a = *p++;
        b = *p++;
        for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 5; d_5d51_d9d0++) {
            d_4f37_1200[row + d_5d51_d9d0][0][col] = d_2414_d578[d_5d51_d9d0][a - 1] << 5;
            d_4f37_1392[row + d_5d51_d9d0 - 1][1][col - 1] = d_2414_d578[d_5d51_d9d0][b - 1] << 5;
        }
    }
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 5; d_5d51_d9d0++)
        if (used[d_5d51_d9d0])
            f_8119_274d(d_5d51_d9d0);
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 5; d_5d51_d9d0++)
        for (d_5d51_d9fe = 0; d_5d51_d9fe <= 2; d_5d51_d9fe++)
            f_9182_4a94(d_2414_d578[d_5d51_d9d0][d_5d51_d9fe], 3, 19);
}

void f_8119_22bc(void)
{
    char used[4];
    unsigned char far *p;
    unsigned char col;
    unsigned char row;
    unsigned char a;
    unsigned char c;
    unsigned char b;
    unsigned char d;

    memset(used, 0, 4);
    for (d_5d51_d9cc = 0; d_5d51_d9cc < 38; d_5d51_d9cc++)
        d_2414_54d2[d_5d51_d9cc] = 0;
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 3; d_5d51_d9d0++) {
        d_2414_d578[0][d_5d51_d9d0] = d_3404_074e[3][d_5d51_d9d0];
        if (f_1646_2cc9(d_3404_074e[3][d_5d51_d9d0]))
            used[0] = -1;
        if (d_3404_074e[3][d_5d51_d9d0] < 38)
            d_2414_54d2[d_3404_074e[3][d_5d51_d9d0]] = -1;
        d_2414_d578[1][d_5d51_d9d0] = d_3404_074e[3][d_5d51_d9d0 + 8];
        d_2414_d578[2][d_5d51_d9d0] = d_3404_074e[3][d_5d51_d9d0 + 4];
        if (f_1646_2cc9(d_3404_074e[3][d_5d51_d9d0 + 4]))
            used[2] = -1;
        if (d_3404_074e[3][d_5d51_d9d0 + 4] < 38)
            d_2414_54d2[d_3404_074e[3][d_5d51_d9d0 + 4]] = -1;
        d_2414_d578[3][d_5d51_d9d0] = d_3404_074e[3][d_5d51_d9d0 + 12];
    }
    memset(d_2414_d3e0, 0, 180);
    p = d_5d51_2eba;
    for (d_5d51_d9d0 = 1; d_5d51_d9d0 <= 4; d_5d51_d9d0++) {
        col = *p++;
        row = *p++;
        for (d_5d51_d9fe = 1; d_5d51_d9fe <= 4; d_5d51_d9fe++) {
            a = *p++;
            b = *p++;
            c = *p++;
            d = *p++;
            d_4f37_1200[row][0][col] = d_2414_d578[a][b] << 5;
            d_4f37_1392[row - 1][1][col - 1] = d_2414_d578[c][d] << 5;
            d_4f37_1200[row + 4][0][col] = d_2414_d578[a + 2][b] << 5;
            d_4f37_1200[row + 4][1][col] = d_2414_d578[c + 2][d] << 5;
            row++;
        }
    }
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 3; d_5d51_d9d0++)
        if (used[d_5d51_d9d0])
            f_8119_274d(d_5d51_d9d0);
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 3; d_5d51_d9d0++)
        for (d_5d51_d9fe = 0; d_5d51_d9fe <= 3; d_5d51_d9fe++)
            if (d_5d51_d9d0 % 2 == 0)
                f_9182_4a94(d_2414_d578[d_5d51_d9d0][d_5d51_d9fe], 3, 37);
}

void f_8119_2653(int g)
{
    char buf[320];

    f_1646_4ba0("European Cup");
    sprintf(buf, "Group %c Qualifiers", g + 'A');
    f_1646_3c89(-1.0, 8.0, 2, buf);
    for (d_5d51_d9cc = 0; d_5d51_d9cc <= 3; d_5d51_d9cc++)
        f_1646_3c89(-1.0, d_5d51_d9cc * 2 + 10, f_1646_2cc9(d_2414_d5e4[g][d_5d51_d9cc]) * 5 + 6, f_1646_3537(d_2414_d5e4[g][d_5d51_d9cc]));
    f_1646_58a8(0);
}

void f_8119_274d(int g)
{
    unsigned char n;
    char buf[30];

    n = d_5d51_da06 <= 29 ? 3 : 4;
    f_1646_4ba0("Anglo-Italian Cup");
    if (d_5d51_da06 <= 29)
        sprintf(buf, "Group %c Qualifiers", g + 'A');
    else
        sprintf(buf, "International Group %c", g / 2 + 'A');
    f_1646_3c89(-1, 7, 2, buf);
    for (d_5d51_d9cc = 0; d_5d51_d9cc <= n - 1; d_5d51_d9cc++)
        f_1646_3c89(-1, (n == 4 ? 10 : 11) + d_5d51_d9cc * 2, f_1646_2cc9(d_2414_d578[g][d_5d51_d9cc]) * 5 + 6, f_1646_3537(d_2414_d578[g][d_5d51_d9cc]));
    f_1646_58a8(0);
}

void f_8119_2881(int comp, int first, int last, int week, int other)
{
    char flag;
    char random;
    int half, count;
    char used[100];
    char name[80];
    char buf[320];
    char ok;
    int w;

    memset(used, 0, 100);
    for (d_5d51_d9cc = 0; d_5d51_d9cc <= 37; d_5d51_d9cc++)
        d_2414_5460[comp][d_5d51_d9cc] = 0;
    d_5d51_d950 = (last - first + 1) / 2;
    half = (first - 1) / 2;
    count = 0;
    if (comp >= 4 && comp <= 6)
        for (d_5d51_d7f2 = 0; d_5d51_d7f2 <= d_5d51_d950 * 2 - 1; d_5d51_d7f2++)
            if (d_2414_d8c4[d_3404_074e[comp][d_5d51_d7f2]] > 0)
                count++;
    random = comp != 3 || week != 61 ? -1 : 0;
    d_5d51_d9fe = -1;
    for (d_5d51_d9d0 = half; d_5d51_d9d0 <= half + d_5d51_d950 - 1; d_5d51_d9d0++) {
        flag = count > 0 && d_5d51_d950 > 4;
        for (d_5d51_d934 = 0; d_5d51_d934 <= 1; d_5d51_d934++) {
            do {
                do
                    d_5d51_d9fe = random ? f_1d5e_0d6a(d_5d51_d950 * 2) : d_5d51_d9fe + 1;
                while (used[d_5d51_d9fe] != 0);
                ok = -1;
                if (flag && d_5d51_d934 == 1
                    && d_2414_d8c4[d_3404_074e[comp][d_5d51_d9fe]] == d_2414_d8c4[d_5d51_d942])
                    ok = 0;
            } while (!ok);
            d_4f37_1200[d_5d51_d9d0 + 1][d_5d51_d934][week] = d_3404_074e[comp][d_5d51_d9fe] << 5;
            if (other != -1)
                d_4f37_1200[d_5d51_d9d0 + 1][1 - d_5d51_d934][other] = d_3404_074e[comp][d_5d51_d9fe] << 5;
            if (d_5d51_d934 == 0)
                d_5d51_d942 = d_3404_074e[comp][d_5d51_d9fe];
            else
                d_5d51_d940 = d_3404_074e[comp][d_5d51_d9fe];
            used[d_5d51_d9fe] = -1;
            if (count > 0 && d_2414_d8c4[d_3404_074e[comp][d_5d51_d9fe]] > 0)
                count--;
        }
        d_5d51_d5de = f_1646_2cc9(d_5d51_d942);
        if (d_5d51_d5de == 0)
            d_5d51_d5de = f_1646_2cc9(d_5d51_d940);
        if (d_5d51_d942 < 38)
            d_2414_5460[comp][d_5d51_d942] = -1;
        if (d_5d51_d940 < 38)
            d_2414_5460[comp][d_5d51_d940] = -1;
        switch (comp) {
        case 1:
            strcpy(name, "Italian Cup");
            break;
        case 3:
            strcpy(name, "Anglo-Italian Cup");
            break;
        case 4:
            strcpy(name, "UEFA Cup");
            break;
        case 5:
            strcpy(name, "Cup Winners Cup");
            break;
        case 6:
            strcpy(name, "European Cup");
            break;
        }
        if (d_5d51_d5de) {
            f_1646_4ba0("");
            sprintf(buf, "%s draw:", name);
            f_1646_3c89(-1, 10, 2, buf);
            sprintf(buf, "%s v %s", f_1d5e_100c(f_1646_3537(d_5d51_d942)), f_1d5e_100c(f_1646_3537(d_5d51_d940)));
            f_1646_3c89(-1, 12, 6, buf);
            w = f_1646_6aa9(week);
            if (week % 2 == 1)
                sprintf(buf, "Week %d Midweek", w);
            else
                sprintf(buf, "Week %d", w);
            f_1646_3c89(-1, 14, 3, buf);
            f_1646_58a8(0);
        }
        f_9182_4a94(d_5d51_d942, comp, week);
        f_9182_4a94(d_5d51_d940, comp, week);
    }
}

void f_8119_2d27(void)
{
    int far *p;
    unsigned char r;
    int c[30];
    int b[30];
    int a[30];
    char used[1000];
    register int i;
    int n;
    int k = 78;

    memset(used, 0, sizeof used);
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 15; d_5d51_d9d0++) {
        d_3404_12f4[d_5d51_d9d0] = 1499;
        d_3404_1314[d_5d51_d9d0] = 1499;
    }
    for (d_5d51_d996 = 4; d_5d51_d996 <= 6; d_5d51_d996++)
        for (d_5d51_d7f2 = 0; d_5d51_d7f2 <= (d_5d51_d996 == 4 ? 3 : 1); d_5d51_d7f2++) {
            i = d_3404_074e[d_5d51_d996][d_5d51_d7f2];
            if (i > 37)
                used[i - 38] = -1;
        }
    p = d_5d51_2f02;
    for (d_5d51_d9d0 = 1; d_5d51_d9d0 <= 30; d_5d51_d9d0++) {
        d_5d51_d94c = *p;
        p++;
        d_5d51_d94a = *p;
        p++;
        d_5d51_d8fe = *p;
        p++;
        a[d_5d51_d9d0 - 1] = d_5d51_d94c;
        b[d_5d51_d9d0 - 1] = d_5d51_d94a;
        c[d_5d51_d9d0 - 1] = d_5d51_d8fe;
        for (d_5d51_d9fe = d_5d51_d94c; d_5d51_d9fe <= d_5d51_d94a - 1; d_5d51_d9fe++)
            for (d_5d51_d9b8 = d_5d51_d9fe + 1; d_5d51_d9b8 <= d_5d51_d94a; d_5d51_d9b8++) {
                if (d_5d51_d94c == 51 && d_5d51_da04 == 1)
                    r = 1;
                else
                    r = f_1d5e_0d6a(2) + 2;
                if (d_4f37_09c3[0][d_5d51_d9fe] + f_1d5e_0d6a(r) - f_1d5e_0d6a(r) <
                    d_4f37_09c3[0][d_5d51_d9b8] + f_1d5e_0d6a(r) - f_1d5e_0d6a(r)) {
                    f_1d5e_13a4((void *)&d_5d51_b514[d_5d51_d9fe], (void *)&d_5d51_b514[d_5d51_d9b8], 2);
                    f_1d5e_13a4((void *)&used[d_5d51_d9fe - 1], (void *)&used[d_5d51_d9b8 - 1], 1);
                    for (d_5d51_d934 = 0; d_5d51_d934 <= 4; d_5d51_d934++)
                        f_1d5e_13a4(&d_4f37_09c3[d_5d51_d934][d_5d51_d9fe], &d_4f37_09c3[d_5d51_d934][d_5d51_d9b8], 1);
                    f_9915_4d1c(d_5d51_d9fe + 37, d_5d51_d9b8 + 37);
                    for (d_5d51_d996 = 1; d_5d51_d996 <= 6; d_5d51_d996++)
                        for (d_5d51_d834 = 0; d_5d51_d834 <= 63; d_5d51_d834++) {
                            if (d_3404_074e[d_5d51_d996][d_5d51_d834] == d_5d51_d9fe + 37)
                                d_3404_074e[d_5d51_d996][d_5d51_d834] = d_5d51_d9b8 + 37;
                            else if (d_3404_074e[d_5d51_d996][d_5d51_d834] == d_5d51_d9b8 + 37)
                                d_3404_074e[d_5d51_d996][d_5d51_d834] = d_5d51_d9fe + 37;
                        }
                }
            }
    }
    for (d_5d51_d996 = 6; d_5d51_d996 >= 5; d_5d51_d996--)
        for (d_5d51_d7f0 = 2; d_5d51_d7f0 <= 31; d_5d51_d7f0++) {
            while (used[a[d_5d51_d7f0 - 2] - 1] != 0)
                a[d_5d51_d7f0 - 2]++;
            d_3404_074e[d_5d51_d996][d_5d51_d7f0] = a[d_5d51_d7f0 - 2] + 37;
            used[a[d_5d51_d7f0 - 2] - 1] = -1;
            a[d_5d51_d7f0 - 2]++;
        }
    i = 4;
    for (d_5d51_d7ee = 0; d_5d51_d7ee <= 29; d_5d51_d7ee++)
        for (n = 1; n <= c[d_5d51_d7ee]; n++) {
            while (used[a[d_5d51_d7ee] - 1] != 0)
                a[d_5d51_d7ee]++;
            d_3404_074e[4][i] = a[d_5d51_d7ee] + 37;
            used[a[d_5d51_d7ee] - 1] = -1;
            i++;
            a[d_5d51_d7ee]++;
        }
    for (n = 1; n <= 8; n++) {
        while (used[k - 1] != 0)
            k--;
        d_3404_074e[3][n + 7] = k + 37;
        used[k - 1] = -1;
    }
    for (i = 0; i <= 9; i++) {
        do {
            d_5d51_d9cc = f_1d5e_0d6a(102);
        } while (used[d_5d51_d9cc + 400] != 0);
        d_3404_074e[1][i] = d_5d51_d9cc + 438;
        used[d_5d51_d9cc + 400] = -1;
    }
}

void f_8119_325e(void)
{
    char buf[320];
    register int best = 0;

    memset(d_2414_d8c4, 0, 540);
    for (d_5d51_d996 = 4; d_5d51_d996 <= 6; d_5d51_d996++)
        for (d_5d51_d994 = 1; d_5d51_d994 <= 8; d_5d51_d994++) {
            d_5d51_d9ca = -1;
            for (d_5d51_d7ec = 0; d_5d51_d7ec <= (d_5d51_d996 == 4 ? 63 : 31); d_5d51_d7ec++) {
                d_5d51_d9cc = d_3404_074e[d_5d51_d996][d_5d51_d7ec];
                d_5d51_d7ea = f_1646_2cfd(d_5d51_d9cc) + (d_5d51_d9cc < 18);
                if (d_2414_d8c4[d_5d51_d9cc] == 0 && (d_5d51_d7ea > best || d_5d51_d9ca == -1)) {
                    best = d_5d51_d7ea;
                    d_5d51_d9ca = d_5d51_d9cc;
                }
            }
            d_2414_d8c4[d_5d51_d9ca] = d_5d51_d996;
            if (f_1646_2cc9(d_5d51_d9ca)) {
                if (d_5d51_d996 == 4)
                    strcpy(d_2414_4bf6, "UEFA");
                else if (d_5d51_d996 == 5)
                    strcpy(d_2414_4bf6, "Cup Winners");
                else
                    strcpy(d_2414_4bf6, "European");
                sprintf(buf, "%s have been seeded|in the %s cup", (char far *)d_5d51_b476[d_5d51_d9ca], d_2414_4bf6);
                f_1646_0bf2(buf);
            }
        }
}

void f_8119_33d1(void)
{
    char used[540];

    memset(used, 0, sizeof used);
    for (d_5d51_d996 = 6; d_5d51_d996 >= 4; d_5d51_d996--) {
        do {
            d_5d51_d9ca = f_1d5e_0d6a(400) + 38;
        } while (used[d_5d51_d9ca] != 0 || d_4f37_099e[d_5d51_d9ca] <= 16);
        d_3404_074e[d_5d51_d996][0] = d_5d51_d9ca;
        used[d_5d51_d9ca] = -1;
        for (d_5d51_d7ec = 1; d_5d51_d7ec <= (d_5d51_d996 == 4 ? 3 : 1); d_5d51_d7ec++) {
            d_5d51_d9ca = -1;
            for (d_5d51_d9cc = 0; d_5d51_d9cc <= 17; d_5d51_d9cc++) {
                if (used[d_5d51_d9cc] == 0 && f_1646_2cc9(d_5d51_d9cc) == 0) {
                    d_5d51_d84a = d_5d51_d996 == 5 ? 4 : 2;
                    d_5d51_d7ea = f_1646_2cfd(d_5d51_d9cc) + f_1d5e_0d6a(d_5d51_d84a) - f_1d5e_0d6a(d_5d51_d84a);
                    if (d_5d51_d7ea > d_5d51_d9c2 || d_5d51_d9ca == -1) {
                        d_5d51_d9ca = d_5d51_d9cc;
                        d_5d51_d9c2 = d_5d51_d7ea;
                    }
                }
            }
            d_3404_074e[d_5d51_d996][d_5d51_d7ec] = d_5d51_d9ca;
            used[d_5d51_d9ca] = -1;
        }
    }
}

void f_8119_3574(void)
{
    for (d_5d51_d934 = 0; d_5d51_d934 <= 1; d_5d51_d934++)
        for (d_5d51_d9fe = d_5d51_d934 * 18; d_5d51_d9fe <= d_5d51_d934 * 18 + f_1646_716c(d_5d51_d934) - 2; d_5d51_d9fe++)
            for (d_5d51_d9b8 = d_5d51_d9fe + 1; d_5d51_d9b8 <= d_5d51_d934 * 18 + f_1646_716c(d_5d51_d934) - 1; d_5d51_d9b8++) {
                d_5d51_d7e8 = f_9e79_0000(d_5d51_d9fe);
                d_5d51_d7e6 = f_9e79_0000(d_5d51_d9b8);
                d_5d51_d7e4 = d_3404_466a[d_3404_0728[d_5d51_d9fe]];
                d_5d51_d7e2 = d_3404_466a[d_3404_0728[d_5d51_d9b8]];
                d_5d51_d8a6 = d_3404_4692[d_3404_0728[d_5d51_d9fe]];
                d_5d51_d8a4 = d_3404_4692[d_3404_0728[d_5d51_d9b8]];
                if (d_5d51_d7e8 < d_5d51_d7e6 ||
                    (d_5d51_d7e8 == d_5d51_d7e6 && d_5d51_d7e4 - d_5d51_d8a6 < d_5d51_d7e2 - d_5d51_d8a4) ||
                    (d_5d51_d7e8 == d_5d51_d7e6 && d_5d51_d7e4 - d_5d51_d8a6 == d_5d51_d7e2 - d_5d51_d8a4 &&
                     d_5d51_d7e4 < d_5d51_d7e2))
                    f_1d5e_13a4(&d_3404_0728[d_5d51_d9fe], &d_3404_0728[d_5d51_d9b8], 1);
            }
}

void f_8119_36f8(void)
{
    unsigned char list[9] = { 0, 1, 13, 14, 21, 22, 33, 34, 0xff };
    unsigned char far *p;
    unsigned char a;
    unsigned char b;
    unsigned char j;
    unsigned char k;
    unsigned char lo;
    unsigned char hi;
    unsigned char n;
    unsigned char g;
    unsigned char w;
    unsigned char hx;
    unsigned char ax;
    unsigned char ag;
    int h;
    int v;
    unsigned char i;

    p = list;
    while ((a = *p++) != 0xff) {
        b = *p++;
        if (f_9e79_0000(a) == f_9e79_0000(b)) {
            for (lo = a; f_9e79_0000(lo) == f_9e79_0000(lo - 1) && lo > 0; lo--)
                ;
            for (hi = b; f_9e79_0000(hi) == f_9e79_0000(hi + 1) && hi < (a <= 17 ? 17 : 37); hi++)
                ;
            n = hi - lo + 1;
            memset(d_5d51_da60, 0, 80);
            for (i = 0; i <= n - 1; i++)
                d_5d51_da60[i].team = d_3404_0728[lo + i];
            for (g = 1; g <= (d_5d51_da06 <= 100 ? d_5d51_da06 : 100); g = g + 1) {
                if (f_1646_258b(g) || f_1646_2646(g)) {
                    for (w = 1; w <= 64; w = w + 1) {
                        h = d_4f37_1390[w - 1][0][g] / 32;
                        v = d_4f37_1390[w - 1][1][g] / 32;
                        hx = ax = 255;
                        for (i = 0; i <= n - 1; i++) {
                            if (d_5d51_da60[i].team == h)
                                hx = i;
                            else if (d_5d51_da60[i].team == v)
                                ax = i;
                        }
                        if (hx < 255 && ax < 255) {
                            i = d_4f37_1390[w - 1][0][g] % 32;
                            ag = (unsigned char)(d_4f37_1390[w - 1][1][g] % 32);
                            if (i > ag)
                                d_5d51_da60[hx].pts = d_5d51_da60[hx].pts + 2;
                            else if (i == ag) {
                                d_5d51_da60[hx].pts++;
                                d_5d51_da60[ax].pts++;
                            } else
                                d_5d51_da60[ax].pts = d_5d51_da60[ax].pts + 2;
                            d_5d51_da60[hx].f += i;
                            d_5d51_da60[hx].a += ag;
                            d_5d51_da60[ax].f += ag;
                            d_5d51_da60[ax].a += i;
                        }
                    }
                }
            }
            for (j = 0; j <= n - 2; j = j + 1)
                for (k = j + 1; k <= n - 1; k = k + 1)
                    if (d_5d51_da60[k].pts > d_5d51_da60[j].pts ||
                        (d_5d51_da60[k].pts == d_5d51_da60[j].pts &&
                         d_5d51_da60[k].f - d_5d51_da60[k].a > d_5d51_da60[j].f - d_5d51_da60[j].a) ||
                        (d_5d51_da60[k].pts == d_5d51_da60[j].pts &&
                         d_5d51_da60[k].f - d_5d51_da60[k].a == d_5d51_da60[j].f - d_5d51_da60[j].a &&
                         d_5d51_da60[k].f > d_5d51_da60[j].f))
                        f_1d5e_13a4(&d_3404_0728[lo + j], &d_3404_0728[lo + k], 1);
            if (d_5d51_da06 == 96 && d_5d51_da60[a - lo].pts == d_5d51_da60[b - lo].pts &&
                d_5d51_da60[a - lo].f == d_5d51_da60[b - lo].f && d_5d51_da60[a - lo].a == d_5d51_da60[b - lo].a) {
                if (a == 0)
                    f_8119_3cf8(d_3404_0728[0], d_3404_0728[1], 0);
                else if (a == 13)
                    f_8119_3cf8(d_3404_0728[13], d_3404_0728[14], 1);
                else if (a == 21)
                    f_8119_3cf8(d_3404_0728[21], d_3404_0728[22], 2);
                else if (a == 33)
                    f_8119_3cf8(d_3404_0728[33], d_3404_0728[34], 3);
            }
        }
    }
}

void f_8119_3cf8(int a, int b, char c)
{
    unsigned char r;

    r = f_1d5e_0d6a(2);
    d_4f37_1390[d_5d51_d406][r][97] = a * 32;
    d_4f37_1390[d_5d51_d406][1 - r][97] = b * 32;
    d_5d51_d402[d_5d51_d406] = c;
    d_5d51_d406++;
}
