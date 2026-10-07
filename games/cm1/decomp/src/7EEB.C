/* @at 7eeb:0000 */
/* @data 5d9c:576e */
/* @module */

/* Overlay 4: the end of a match and of a season (the result line, the form tables and
 * league tables, promotions and relegations), the cup and European draws and fixtures. */
#include <stdio.h>
#include <string.h>
#include <mem.h>

/* the functions, in address order: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_7eeb_0000(void);
void f_7eeb_00ad(void);
void f_7eeb_074c(int a, int b, int c, int d);
void f_7eeb_0de0(int a, int b, int c, int d);
void f_7eeb_114c(int x);
void f_7eeb_11ad(int x);
void f_7eeb_1211(int team, long amount, long z);
void f_7eeb_125d(int team, int amount);
void f_7eeb_12d7(void);
void f_7eeb_165b(int team, int delta);
void f_7eeb_16d5(int team, int unused, int a, int b, int gf, int ga);
void f_7eeb_1afc(int team, int b, int c);
void f_7eeb_1d0d(int t, int a, int b);
void f_7eeb_1d68(int t, int a, int b);
void f_7eeb_1da6(void);
void f_7eeb_2491(void);
void f_7eeb_270d(int g);
void f_7eeb_2800(void);
void f_7eeb_2b66(int g);
void f_7eeb_2c5d(int comp, int first, int last, int week, int other);
void f_7eeb_3198(void);
void f_7eeb_363e(void);
void f_7eeb_37b1(void);
void f_7eeb_3b4b(void);
void f_7eeb_3b9a(void);
void f_7eeb_3d47(void);
void f_7eeb_3da5(int a, int b);
char f_7eeb_3f0f(int a, int b);
void f_7eeb_3fa2(void);
void far *f_14d2_16bc(int handle, int page);
char far *f_14d2_0d75(char far *s, unsigned n);
char far *f_a1c3_25b0(int player);
float f_1680_0037(int x);
int f_6e68_299e(int week, int n);
char f_992a_700a(int);
char f_992a_70a8(int);
char f_992a_78ca(int);
char f_992a_74c1(int, int);
char f_992a_72e8(int, int);
char f_992a_7399(int, int);
char f_992a_7430(int, int);
char f_992a_752d(int, int);
char f_992a_75bc(int, int);
void f_9100_4e9f(int, int, int, int);
void f_9100_4e00(int, int, int, int);
void f_9100_4f3e(int, int, int, int);
void f_9100_4fc9(int, int, int, int);
void f_9100_50ca(int, int, int);
void f_9100_6ce3(int, int, int);
extern int d_5d9c_a35a;
extern int d_5d9c_9f83;
extern int d_5d9c_9eeb;
extern int d_5d9c_9e87;
extern char far *d_5d9c_a048;
extern char far *d_5d9c_a050;
extern int d_5d9c_a33a;
extern int d_5d9c_9fab;
extern int d_5d9c_9ed7;
extern char d_5d9c_9b6c;
extern char d_5d9c_9b6e;
extern char d_5d9c_9b6f;
extern char d_5d9c_9b86;
extern int d_5d9c_9e39;
extern int d_5d9c_9e37;
extern int d_5d9c_9edd;
extern int d_5d9c_9edb;
extern int d_5d9c_9e8f;
extern int d_5d9c_9e91;
extern int d_5d9c_9a3c;
extern int d_5d9c_9a3e;
extern int d_5d9c_9ed5;
extern int d_5d9c_9ed3;
extern int d_5d9c_9e3d;
extern int d_5d9c_9e3b;
extern int d_5d9c_9fa5;
extern int d_5d9c_9fa3;
extern int d_5d9c_9f9f;
extern int d_5d9c_9f9d;
extern int d_5d9c_9f9b;
extern int d_5d9c_9f99;
extern int d_5d9c_9f97;
extern int d_5d9c_9f8d;
extern int d_5d9c_9f8f;
extern int d_5d9c_9f35;
extern int d_5d9c_9f33;
extern int d_5d9c_9f8b;
extern int d_5d9c_9f89;
extern int d_5d9c_9f87;
extern int d_5d9c_9e75;
extern int d_5d9c_9e77;
extern char near *d_5d9c_08bc[];
extern char far d_1f3e_4946[];
extern char far d_1f3e_0780[][82][5];
extern unsigned char far d_1f3e_fcb5[][8][5];
extern unsigned char far d_5739_0000[][82];
extern int far d_2f3c_27e4[][80];
extern unsigned char far d_2f3c_0000[][2][4];
char f_992a_7853(int a, int b);
int f_14d2_144d(int a, int b);
int f_14d2_13eb(int a, int b);
char f_1680_0003(int);
int f_1680_0287(int x);
float f_1680_0795(int x);
void f_88c9_776f(int team, char far *s);
extern int d_5d9c_9f6d;
extern int d_5d9c_9fa1;
extern int d_5d9c_a35c;
extern int d_5d9c_a35e;
struct s_a01a { long pad[400]; long v[80]; };
extern struct s_a01a far *d_5d9c_a01a;
extern long far *d_5d9c_a054;
extern int d_5d9c_9f71;
extern int d_5d9c_9f67;
extern int d_5d9c_9f49;
extern int d_5d9c_9f31;
extern int d_5d9c_9f85;
extern unsigned char d_5d9c_561a[];
extern unsigned char d_5d9c_5628[];
extern int d_5d9c_9efb;
extern int d_5d9c_9e65;
extern int d_5d9c_a03a;
extern int d_5d9c_a032;
extern int d_5d9c_a034;
extern int d_5d9c_a036;
extern int d_5d9c_a038;
extern int d_5d9c_9e55;
extern int far d_1f3e_ff85[][5];
extern char far d_1f3e_2b22[];
extern char far d_1f3e_4806[];
extern int far d_2f3c_0030[][4];
extern int far d_2f3c_7f93[];
extern int far d_2f3c_4c53[];
extern int far d_2f3c_8033[];
extern unsigned char far d_2f3c_567b[];
extern unsigned char far d_2f3c_2794[][20];
extern unsigned char far d_2f3c_2795;
extern int far d_2f3c_2c44[];
extern unsigned char far d_5739_01ec[];
extern unsigned char far d_5739_0386[];
extern unsigned char far d_5739_070c[][82];
char far *f_1680_1a91(int x);
void f_1680_2d78(float x, float y, int colour, char far *s);
void f_a1c3_27e4(char far *title);
void f_a1c3_3505(int a);
extern unsigned char far d_1f3e_5b98[];
extern int far d_5739_1bb0[][2][94];
extern unsigned char d_5d9c_563c[];
extern int d_5d9c_9ee3;
extern int d_5d9c_9f69;
extern int d_5d9c_9d93;
extern int d_5d9c_9f55;
int f_14d2_0c2a(int n);                 /* random below n */
char far *f_14d2_0e72(char far *s);
int f_1680_0577(int x);
char f_1680_07cb(int v);
extern int d_5d9c_9ee7;
extern int d_5d9c_9d95;
extern int d_5d9c_9ecf;
extern char d_5d9c_9b87;
extern unsigned char d_5d9c_565a[];
extern char far d_1f3e_5918[][80];
extern int far d_5739_1d2a[][2][94];
extern unsigned char far d_2f3c_0080[];
void f_14d2_148f(void far *a, void far *b, int n);
void f_992a_7d4d(int a, int b);
extern int d_5d9c_9ee5;
extern int d_5d9c_9e9b;
extern int d_5d9c_9dd7;
extern int d_5d9c_9d91;
extern int d_5d9c_9f2f;
extern int d_5d9c_9d8f;
extern int d_5d9c_9d8d;
extern int d_5d9c_9de9;
extern int d_5d9c_9f5f;
extern int d_5d9c_9dd5;
extern char d_5d9c_a022;
extern char d_5d9c_a023;
extern unsigned char far d_5739_13de[];
extern int d_5d9c_9f93;
extern int d_5d9c_9f61;
extern int d_5d9c_9bc1;
extern int d_5d9c_9eef;
extern int d_5d9c_9ef3;
extern int d_5d9c_9ec3;
extern int d_5d9c_9f0f;
extern int d_5d9c_9d8b;
extern int d_5d9c_9d89;
extern int d_5d9c_9d87;
extern int d_5d9c_9d85;
extern int d_5d9c_9e43;
extern int d_5d9c_9e41;
extern char d_5d9c_9b75;
extern char d_5d9c_9b19;
extern int d_5d9c_a062[];
extern unsigned char far d_2f3c_5167[];
extern unsigned char far d_5739_03d8[][82];
extern char far d_1f3e_5256[];
void f_88c9_24f1(char far *);
extern int d_5d9c_56ba[];
extern int d_5d9c_0522[];
extern int far d_2f3c_3579[];
extern int far d_2f3c_3593[];
extern unsigned char far d_5739_142d[][460];

void f_7eeb_0000(void)
{
    FILE *fp;

    fp = fopen("matchfax", "rb+");
    d_5d9c_a048 = f_14d2_16bc(d_5d9c_a35a, 0);
    for (d_5d9c_9f83 = 0; d_5d9c_9f83 <= d_5d9c_9eeb - 1; d_5d9c_9f83++) {
        fseek(fp, (long)(d_5d9c_9e87 + d_5d9c_9f83 - 1) * 149, 0);
        fwrite(d_5d9c_a048 + d_5d9c_9f83 * 150, 1, 149, fp);
    }
    fclose(fp);
}

void f_7eeb_00ad(void)
{
    char wd[8];
    char buf[320];
    int x, y;

    d_5d9c_9ed7 = f_6e68_299e(d_5d9c_9fab, d_5d9c_9f83 + 1);
    if (d_5d9c_9b6e) {
        d_5d9c_a050 = f_14d2_16bc(d_5d9c_a33a, 1);
        *(d_5d9c_a050 + d_5d9c_9ed7 * 80 + d_5d9c_9f83 * 2) = d_5d9c_9e39;
        *(d_5d9c_a050 + d_5d9c_9ed7 * 80 + d_5d9c_9f83 * 2 + 1) = d_5d9c_9e37;
    }
    sprintf(d_1f3e_4946, "%s %d", (char far *)d_5d9c_08bc[d_5d9c_9edd], d_5d9c_9e39);
    if (d_5d9c_9e39 > 6) {
        strcat(d_1f3e_4946, " (");
        strcat(d_1f3e_4946, f_a1c3_25b0(d_5d9c_9e39));
        strcat(d_1f3e_4946, ")");
    }
    strcat(d_1f3e_4946, " ");
    strcat(d_1f3e_4946, d_5d9c_08bc[d_5d9c_9edb]);
    strcat(d_1f3e_4946, " ");
    sprintf(buf, "%d", d_5d9c_9e37);
    strcat(d_1f3e_4946, buf);
    if (d_5d9c_9e37 > 6) {
        strcat(d_1f3e_4946, " (");
        strcat(d_1f3e_4946, f_a1c3_25b0(d_5d9c_9e37));
        strcat(d_1f3e_4946, ")");
    }
    if (d_5d9c_9fab > 4 && d_5d9c_9b6c == 0) {
        if (d_5d9c_9e39 > d_5d9c_9e37) {
            f_9100_4e9f(d_5d9c_9e8f, d_5d9c_9e91, d_5d9c_9e37, d_5d9c_9e39);
            f_9100_4e00(d_5d9c_9e91, d_5d9c_9e8f, d_5d9c_9e39, d_5d9c_9e37);
        } else if (d_5d9c_9e37 > d_5d9c_9e39) {
            f_9100_4e00(d_5d9c_9e8f, d_5d9c_9e91, d_5d9c_9e37, d_5d9c_9e39);
            f_9100_4e9f(d_5d9c_9e91, d_5d9c_9e8f, d_5d9c_9e39, d_5d9c_9e37);
        }
    }
    if (d_5d9c_9fab > 5 && d_5d9c_9b6f) {
        f_9100_4f3e(d_5d9c_9e91, d_5d9c_9e8f, d_5d9c_9a3c, d_5d9c_9a3e);
        f_9100_4fc9(d_5d9c_9e91, d_5d9c_9e8f, d_5d9c_9a3c, d_5d9c_9a3e);
    }
    x = f_1680_0037(d_5d9c_9e91);
    y = f_1680_0037(d_5d9c_9e8f);
    if (d_5d9c_9fab > 4) {
        f_7eeb_16d5(d_5d9c_9edd, d_5d9c_9edb, x, y, d_5d9c_9e39, d_5d9c_9e37);
        f_7eeb_16d5(d_5d9c_9edb, d_5d9c_9edd, y, x, d_5d9c_9e37, d_5d9c_9e39);
    }
    if (f_992a_78ca(d_5d9c_9fab) || f_992a_74c1(d_5d9c_9fab, d_5d9c_9f83 + 1)
        || f_992a_72e8(d_5d9c_9fab, d_5d9c_9f83 + 1) || f_992a_7399(d_5d9c_9fab, d_5d9c_9f83 + 1)
        || f_992a_7430(d_5d9c_9fab, d_5d9c_9f83 + 1)) {
        d_5d9c_9e39 += d_5d9c_9ed5;
        d_5d9c_9e37 += d_5d9c_9ed3;
        if (d_5d9c_9b86) {
            sprintf(buf, "  AGG:%d-%d", d_5d9c_9e39, d_5d9c_9e37);
            strcat(d_1f3e_4946, buf);
        }
        d_5d9c_9e39 += d_5d9c_9e3d;
        d_5d9c_9e37 += d_5d9c_9e3b;
    }
    if (d_5d9c_9e39 > d_5d9c_9e37) {
        if (f_992a_700a(d_5d9c_9fab)) {
            d_5739_0000[12][d_5d9c_9edd]++;
            d_5739_0000[13][d_5d9c_9edb]++;
            d_5739_0000[18][d_5d9c_9edb]++;
            sprintf(buf, "%sW", d_1f3e_0780[0][d_5d9c_9edd]);
            strcpy(d_1f3e_0780[0][d_5d9c_9edd], f_14d2_0d75(buf, 4));
            sprintf(buf, "%sL", d_1f3e_0780[1][d_5d9c_9edb]);
            strcpy(d_1f3e_0780[1][d_5d9c_9edb], f_14d2_0d75(buf, 4));
        } else
            f_7eeb_074c(d_5d9c_9e91, d_5d9c_9e8f, d_5d9c_9e39, d_5d9c_9e37);
    } else if (d_5d9c_9e39 == d_5d9c_9e37) {
        if (f_992a_700a(d_5d9c_9fab)) {
            d_5739_0000[17][d_5d9c_9edb]++;
            if (d_5d9c_9e39 > 0)
                strcpy(wd, "X");
            else
                strcpy(wd, "D");
            sprintf(buf, "%s%s", d_1f3e_0780[0][d_5d9c_9edd], (char far *)wd);
            strcpy(d_1f3e_0780[0][d_5d9c_9edd], f_14d2_0d75(buf, 4));
            sprintf(buf, "%s%s", d_1f3e_0780[1][d_5d9c_9edb], (char far *)wd);
            strcpy(d_1f3e_0780[1][d_5d9c_9edb], f_14d2_0d75(buf, 4));
        } else
            f_7eeb_0de0(d_5d9c_9e91, d_5d9c_9e8f, d_5d9c_9e39, d_5d9c_9e37);
    } else {
        if (f_992a_700a(d_5d9c_9fab)) {
            d_5739_0000[12][d_5d9c_9edb]++;
            d_5739_0000[16][d_5d9c_9edb]++;
            d_5739_0000[13][d_5d9c_9edd]++;
            sprintf(buf, "%sL", d_1f3e_0780[0][d_5d9c_9edd]);
            strcpy(d_1f3e_0780[0][d_5d9c_9edd], f_14d2_0d75(buf, 4));
            sprintf(buf, "%sW", d_1f3e_0780[1][d_5d9c_9edb]);
            strcpy(d_1f3e_0780[1][d_5d9c_9edb], f_14d2_0d75(buf, 4));
        } else
            f_7eeb_074c(d_5d9c_9e8f, d_5d9c_9e91, d_5d9c_9e37, d_5d9c_9e39);
    }
    if (f_992a_700a(d_5d9c_9fab)) {
        d_5739_0000[14][d_5d9c_9edd] += d_5d9c_9e39;
        d_5739_0000[15][d_5d9c_9edd] += d_5d9c_9e37;
        d_5739_0000[14][d_5d9c_9edb] += d_5d9c_9e37;
        d_5739_0000[15][d_5d9c_9edb] += d_5d9c_9e39;
        d_5739_0000[19][d_5d9c_9edb] += d_5d9c_9e37;
        d_5739_0000[20][d_5d9c_9edb] += d_5d9c_9e39;
    }
}

void f_7eeb_074c(int a, int b, int c, int d)
{
    if (f_992a_70a8(d_5d9c_9fab)) {
        d_2f3c_27e4[0][d_5d9c_9fa5] = a;
        d_5d9c_9fa5++;
        if (d_5d9c_9fab > 87) {
            d_2f3c_27e4[0][1] = b;
            d_5d9c_9f8d = -1;
            f_9100_50ca(a, 6, 100);
            f_7eeb_1211(a, 100000L, 7500L);
            f_9100_6ce3(2, a, b);
        }
    } else if (f_992a_74c1(d_5d9c_9fab, d_5d9c_9f83 + 1) && d_5d9c_9b6e == 0) {
        d_2f3c_27e4[1][d_5d9c_9fa3] = a;
        d_5d9c_9fa3++;
        if (d_5d9c_9fab > 81) {
            d_2f3c_27e4[1][1] = b;
            d_5d9c_9f8f = -1;
            f_9100_50ca(a, 10, 100);
            f_7eeb_1211(a, 150000L, 5000L);
            f_9100_6ce3(3, a, b);
        }
    } else if (f_992a_752d(d_5d9c_9fab, d_5d9c_9f83 + 1)) {
        d_2f3c_27e4[2][d_5d9c_9f9f] = a;
        d_5d9c_9f9f++;
        if (d_5d9c_9fab > 52) {
            d_2f3c_27e4[2][1] = b;
            d_5d9c_9f35 = -1;
            f_9100_50ca(a, 11, 100);
            f_7eeb_1211(a, 100000L, 2000L);
            f_9100_6ce3(4, a, b);
        }
    } else if (f_992a_75bc(d_5d9c_9fab, d_5d9c_9f83 + 1)) {
        if (d_5d9c_9fab < 68) {
            f_7eeb_11ad(a);
            d_1f3e_fcb5[0][d_5d9c_9e77][d_5d9c_9e75] = d_1f3e_fcb5[0][d_5d9c_9e77][d_5d9c_9e75] + 1;
            d_1f3e_fcb5[1][d_5d9c_9e77][d_5d9c_9e75] = d_1f3e_fcb5[1][d_5d9c_9e77][d_5d9c_9e75] + 1;
            d_1f3e_fcb5[4][d_5d9c_9e77][d_5d9c_9e75] = d_1f3e_fcb5[4][d_5d9c_9e77][d_5d9c_9e75] + c;
            d_1f3e_fcb5[5][d_5d9c_9e77][d_5d9c_9e75] = d_1f3e_fcb5[5][d_5d9c_9e77][d_5d9c_9e75] + d;
            f_7eeb_11ad(b);
            d_1f3e_fcb5[0][d_5d9c_9e77][d_5d9c_9e75] = d_1f3e_fcb5[0][d_5d9c_9e77][d_5d9c_9e75] + 1;
            d_1f3e_fcb5[3][d_5d9c_9e77][d_5d9c_9e75] = d_1f3e_fcb5[3][d_5d9c_9e77][d_5d9c_9e75] + 1;
            d_1f3e_fcb5[4][d_5d9c_9e77][d_5d9c_9e75] = d_1f3e_fcb5[4][d_5d9c_9e77][d_5d9c_9e75] + d;
            d_1f3e_fcb5[5][d_5d9c_9e77][d_5d9c_9e75] = d_1f3e_fcb5[5][d_5d9c_9e77][d_5d9c_9e75] + c;
        } else {
            d_2f3c_27e4[3][d_5d9c_9f9d] = a;
            d_5d9c_9f9d++;
            if (d_5d9c_9fab > 86) {
                d_2f3c_27e4[3][1] = b;
                d_5d9c_9f33 = -1;
                f_9100_50ca(a, 12, 100);
                f_7eeb_1211(a, 75000L, 2000L);
                f_9100_6ce3(5, a, b);
            }
        }
    } else if (f_992a_72e8(d_5d9c_9fab, d_5d9c_9f83 + 1)) {
        d_2f3c_27e4[4][d_5d9c_9f9b] = a;
        d_5d9c_9f9b++;
        if (d_5d9c_9fab > 90) {
            d_2f3c_27e4[4][1] = b;
            d_5d9c_9f8b = -1;
            f_9100_50ca(a, 7, 100);
            f_7eeb_1211(a, 250000L, 10000L);
            f_9100_6ce3(6, a, b);
        }
    } else if (f_992a_7399(d_5d9c_9fab, d_5d9c_9f83 + 1)) {
        d_2f3c_27e4[5][d_5d9c_9f99] = a;
        d_5d9c_9f99++;
        if (d_5d9c_9fab > 90) {
            d_2f3c_27e4[5][1] = b;
            d_5d9c_9f89 = -1;
            f_9100_50ca(a, 8, 100);
            f_7eeb_1211(a, 250000L, 10000L);
            f_9100_6ce3(7, a, b);
        }
    } else if (f_992a_7430(d_5d9c_9fab, d_5d9c_9f83 + 1)) {
        if (d_5d9c_9fab < 53 || d_5d9c_9fab > 90) {
            d_2f3c_27e4[6][d_5d9c_9f97] = a;
            d_5d9c_9f97++;
            if (d_5d9c_9fab > 90) {
                d_2f3c_27e4[6][1] = b;
                d_5d9c_9f87 = -1;
                f_9100_50ca(a, 9, 100);
                f_7eeb_1211(a, 1000000L, 20000L);
                f_9100_6ce3(8, a, b);
            }
        } else {
            f_7eeb_114c(a);
            d_2f3c_0000[0][d_5d9c_9e77][d_5d9c_9e75] = d_2f3c_0000[0][d_5d9c_9e77][d_5d9c_9e75] + 1;
            d_2f3c_0000[1][d_5d9c_9e77][d_5d9c_9e75] = d_2f3c_0000[1][d_5d9c_9e77][d_5d9c_9e75] + 1;
            d_2f3c_0000[4][d_5d9c_9e77][d_5d9c_9e75] = d_2f3c_0000[4][d_5d9c_9e77][d_5d9c_9e75] + c;
            d_2f3c_0000[5][d_5d9c_9e77][d_5d9c_9e75] = d_2f3c_0000[5][d_5d9c_9e77][d_5d9c_9e75] + d;
            f_7eeb_114c(b);
            d_2f3c_0000[0][d_5d9c_9e77][d_5d9c_9e75] = d_2f3c_0000[0][d_5d9c_9e77][d_5d9c_9e75] + 1;
            d_2f3c_0000[3][d_5d9c_9e77][d_5d9c_9e75] = d_2f3c_0000[3][d_5d9c_9e77][d_5d9c_9e75] + 1;
            d_2f3c_0000[4][d_5d9c_9e77][d_5d9c_9e75] = d_2f3c_0000[4][d_5d9c_9e77][d_5d9c_9e75] + d;
            d_2f3c_0000[5][d_5d9c_9e77][d_5d9c_9e75] = d_2f3c_0000[5][d_5d9c_9e77][d_5d9c_9e75] + c;
        }
    } else if (d_5d9c_9fab == 92 || d_5d9c_9fab == 94) {
        d_2f3c_27e4[7][d_5d9c_9f83] = a;
    }
}

void f_7eeb_0de0(int a, int b, int c, int d)
{
    if (f_992a_75bc(d_5d9c_9fab, d_5d9c_9f83 + 1)) {
        f_7eeb_11ad(a);
        d_1f3e_fcb5[0][d_5d9c_9e77][d_5d9c_9e75] = d_1f3e_fcb5[0][d_5d9c_9e77][d_5d9c_9e75] + 1;
        d_1f3e_fcb5[2][d_5d9c_9e77][d_5d9c_9e75] = d_1f3e_fcb5[2][d_5d9c_9e77][d_5d9c_9e75] + 1;
        d_1f3e_fcb5[4][d_5d9c_9e77][d_5d9c_9e75] = d_1f3e_fcb5[4][d_5d9c_9e77][d_5d9c_9e75] + c;
        d_1f3e_fcb5[5][d_5d9c_9e77][d_5d9c_9e75] = d_1f3e_fcb5[5][d_5d9c_9e77][d_5d9c_9e75] + d;
        f_7eeb_11ad(b);
        d_1f3e_fcb5[0][d_5d9c_9e77][d_5d9c_9e75] = d_1f3e_fcb5[0][d_5d9c_9e77][d_5d9c_9e75] + 1;
        d_1f3e_fcb5[2][d_5d9c_9e77][d_5d9c_9e75] = d_1f3e_fcb5[2][d_5d9c_9e77][d_5d9c_9e75] + 1;
        d_1f3e_fcb5[4][d_5d9c_9e77][d_5d9c_9e75] = d_1f3e_fcb5[4][d_5d9c_9e77][d_5d9c_9e75] + d;
        d_1f3e_fcb5[5][d_5d9c_9e77][d_5d9c_9e75] = d_1f3e_fcb5[5][d_5d9c_9e77][d_5d9c_9e75] + c;
    } else if (f_992a_7430(d_5d9c_9fab, d_5d9c_9f83 + 1) && d_5d9c_9fab > 52 && d_5d9c_9fab < 80) {
        f_7eeb_114c(a);
        d_2f3c_0000[0][d_5d9c_9e77][d_5d9c_9e75] = d_2f3c_0000[0][d_5d9c_9e77][d_5d9c_9e75] + 1;
        d_2f3c_0000[2][d_5d9c_9e77][d_5d9c_9e75] = d_2f3c_0000[2][d_5d9c_9e77][d_5d9c_9e75] + 1;
        d_2f3c_0000[4][d_5d9c_9e77][d_5d9c_9e75] = d_2f3c_0000[4][d_5d9c_9e77][d_5d9c_9e75] + c;
        d_2f3c_0000[5][d_5d9c_9e77][d_5d9c_9e75] = d_2f3c_0000[5][d_5d9c_9e77][d_5d9c_9e75] + d;
        f_7eeb_114c(b);
        d_2f3c_0000[0][d_5d9c_9e77][d_5d9c_9e75] = d_2f3c_0000[0][d_5d9c_9e77][d_5d9c_9e75] + 1;
        d_2f3c_0000[2][d_5d9c_9e77][d_5d9c_9e75] = d_2f3c_0000[2][d_5d9c_9e77][d_5d9c_9e75] + 1;
        d_2f3c_0000[4][d_5d9c_9e77][d_5d9c_9e75] = d_2f3c_0000[4][d_5d9c_9e77][d_5d9c_9e75] + d;
        d_2f3c_0000[5][d_5d9c_9e77][d_5d9c_9e75] = d_2f3c_0000[5][d_5d9c_9e77][d_5d9c_9e75] + c;
    }
}

void f_7eeb_114c(int x)
{
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 1; d_5d9c_9f6d++)
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 3; d_5d9c_9fa1++)
            if (d_2f3c_0030[d_5d9c_9f6d][d_5d9c_9fa1] == x) {
                d_5d9c_9e77 = d_5d9c_9f6d;
                d_5d9c_9e75 = d_5d9c_9fa1;
                d_5d9c_9fa1 = 3;
                d_5d9c_9f6d = 1;
            }
}

void f_7eeb_11ad(int x)
{
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 7; d_5d9c_9f6d++)
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 4; d_5d9c_9fa1++)
            if (d_1f3e_ff85[d_5d9c_9f6d][d_5d9c_9fa1] == x) {
                d_5d9c_9e77 = d_5d9c_9f6d;
                d_5d9c_9e75 = d_5d9c_9fa1;
                d_5d9c_9fa1 = 4;
                d_5d9c_9f6d = 7;
            }
}

void f_7eeb_1211(int team, long amount, long z)
{
    if (team < 80) {
        d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 1);
        d_5d9c_a01a->v[team] += amount;
        f_7eeb_125d(team, z);
    }
}

void f_7eeb_125d(int team, int amount)
{
    d_5d9c_a054 = f_14d2_16bc(d_5d9c_a35e, 1);
    d_5d9c_a054[d_2f3c_7f93[team]] += amount / 50 * 50;
    d_2f3c_4c53[d_2f3c_7f93[team]] += amount / 50 * 50;
}

void f_7eeb_12d7(void)
{
    unsigned char far *p;
    unsigned char old;
    char last;
    char pair;
    char buf[320];
    register int i;
    int n;

    last = d_5d9c_9fab == 94 ? -1 : 0;
    for (d_5d9c_9f71 = 0; d_5d9c_9f71 <= 79; d_5d9c_9f71++) {
        d_5d9c_9f67 = d_2f3c_2794[0][d_5d9c_9f71];
        old = d_5739_0386[d_5d9c_9f67];
        d_5739_0386[d_5d9c_9f67] = 2;
        p = d_5d9c_561a;
        for (i = 1; i <= 7; i++) {
            d_5d9c_9f49 = *p;
            p++;
            d_5d9c_9f31 = *p;
            p++;
            if (d_5d9c_9f71 == d_5d9c_9f49) {
                if (f_1680_0287(d_5d9c_9f31) + (38 - d_5d9c_9f85) * 3 < f_1680_0287(d_5d9c_9f71) || d_5d9c_9f85 == 38) {
                    pair = (d_5d9c_9f49 == 0 || d_5d9c_9f49 == 20 || d_5d9c_9f49 == 40 || d_5d9c_9f49 == 60) && d_5d9c_9f49 + 1 == d_5d9c_9f31;
                    d_5739_0386[d_5d9c_9f67] = pair ? 4 : 3;
                    i = 7;
                }
            }
        }
        if (last) {
            if ((d_5d9c_9f71 / 20 == 1 && d_2f3c_2c44[0] == d_5d9c_9f67) ||
                (d_5d9c_9f71 / 20 == 2 && d_2f3c_2c44[1] == d_5d9c_9f67) ||
                (d_5d9c_9f71 / 20 == 3 && d_2f3c_2c44[2] == d_5d9c_9f67))
                d_5739_0386[d_5d9c_9f67] = 3;
        }
        p = d_5d9c_5628;
        for (i = 1; i <= 10; i++) {
            d_5d9c_9f49 = *p;
            p++;
            d_5d9c_9f31 = *p;
            p++;
            if (d_5d9c_9f71 == d_5d9c_9f49) {
                if (f_1680_0287(d_5d9c_9f71) + (38 - d_5d9c_9f85) * 3 < f_1680_0287(d_5d9c_9f31) || d_5d9c_9f85 == 38) {
                    d_5739_0386[d_5d9c_9f67] = 1;
                    i = 9;
                }
            }
        }
        if (old == 2) {
            if (d_5739_0386[d_5d9c_9f67] > 2) {
                n = d_5739_0386[d_5d9c_9f67] == 4 ? 2 : 1;
                switch (d_5d9c_9f67 / 20) {
                case 0:
                    f_7eeb_1211(d_5d9c_9f67, n * 125000L, 10000L);
                    break;
                case 1:
                    f_7eeb_1211(d_5d9c_9f67, (long)(n * 12500), 5000L);
                    break;
                case 2:
                case 3:
                    f_7eeb_1211(d_5d9c_9f67, (long)(n * 6250), 5000L);
                    break;
                }
                if (f_1680_0003(d_5d9c_9f67)) {
                    if (d_5d9c_9f71 == 0)
                        strcpy(buf, "Champions!  A great performance.");
                    else
                        strcpy(buf, "Promotion!  A successful season.");
                    f_88c9_776f(d_5d9c_9f67, buf);
                }
                if (d_5d9c_9f71 == 0)
                    f_9100_6ce3(1, d_5d9c_9f67, d_2f3c_2795);
            } else if (d_5739_0386[d_5d9c_9f67] == 1) {
                if (f_1680_0003(d_5d9c_9f67)) {
                    if (d_5d9c_9f71 == 19)
                        strcpy(buf, "Relegation to non-league.  You prat.");
                    else
                        strcpy(buf, "Relegation.  Very poor.");
                    f_88c9_776f(d_5d9c_9f67, buf);
                }
                f_7eeb_165b(d_5d9c_9f67, -10);
            }
        }
        if (d_5d9c_9f85 < 39)
            d_5739_070c[d_5d9c_9f85][d_5d9c_9f67] = d_5d9c_9f71 % 20 + 1;
    }
}

void f_7eeb_165b(int team, int delta)
{
    if (d_2f3c_8033[team] < 650) {
        if (d_5739_0386[team] < 3 || delta > 0) {
            if (d_2f3c_567b[d_2f3c_7f93[team]] < 10)
                d_5739_01ec[team] = f_14d2_13eb(f_14d2_144d(d_5739_01ec[team] + delta, 100), 0);
        }
    }
}

void f_7eeb_16d5(int team, int unused, int a, int b, int gf, int ga)
{
    float r;
    char buf[320];
    int k;

    if (d_5d9c_9fab <= 5)
        return;
    d_5d9c_9efb = 6;
    if (gf > ga) {
        d_5d9c_9efb += team == d_5d9c_9edb ? 2 : 1;
        a = b - a;
        if (a > 0)
            d_5d9c_9efb += a;
        k = 0;
        switch (d_5d9c_9fab) {
        case 53: case 59: case 61: case 65: case 67: case 71:
        case 75: case 76: case 77: case 79:
            k = 2;
            break;
        case 82: case 83: case 88: case 89: case 91: case 94:
            k = 3;
            break;
        }
        d_5d9c_9efb += k;
        if (d_5d9c_9e65 > 0)
            d_5d9c_9efb += d_5d9c_9e65 / 10;
        if (d_5d9c_9b6c == 0)
            d_5d9c_9efb = d_5d9c_9efb + (gf - ga) * 0.5;
    } else if (gf == ga) {
        d_5d9c_9efb += team == d_5d9c_9edb;
        a = b - a;
        d_5d9c_9efb = d_5d9c_9efb + a * 0.5;
    } else {
        d_5d9c_9efb -= team == d_5d9c_9edd ? 2 : 1;
        a = a - b;
        if (a > 0)
            d_5d9c_9efb -= a;
        if (d_5d9c_9b6c == 0)
            d_5d9c_9efb = d_5d9c_9efb - (ga - gf) * 0.5;
    }
    d_5d9c_9efb = f_14d2_13eb(f_14d2_144d(d_5d9c_9efb, 12), 0);
    if (f_1680_0003(team)) {
        buf[0] = 0;
        switch (d_5d9c_9efb) {
        case 0: strcpy(buf, "a disgraceful"); break;
        case 1: strcpy(buf, "a very poor"); break;
        case 2: case 3: strcpy(buf, "a disappointing"); break;
        case 9: strcpy(buf, "a good"); break;
        case 10: strcpy(buf, "an excellent"); break;
        case 11: case 12: strcpy(buf, "a superb"); break;
        }
        if (buf[0] != 0) {
            if (d_5d9c_9e65 > 22)
                strcat(buf, " derby");
            strcat(buf, " result.");
            if (f_1680_0003(team))
                f_88c9_776f(team, buf);
        }
    }
    if (team >= 80)
        return;
    switch (d_5d9c_9efb) {
    case 0: case 1: case 2: case 3:
        f_7eeb_165b(team, -((4 - d_5d9c_9efb) * 5));
        break;
    case 9: case 10: case 11: case 12:
        f_7eeb_165b(team, (d_5d9c_9efb - 8) * 5);
        break;
    }
    r = f_1680_0795(team);
    f_7eeb_125d(team, d_5d9c_9efb * 750 / r);
    d_5739_0000[0][team] = f_14d2_13eb(1, f_14d2_144d(16, d_5739_0000[0][team] + (d_5d9c_9efb - 6) * 1.3333333333333333));
    if (d_5d9c_9efb < 10)
        return;
    if (d_5d9c_9fab <= 5)
        return;
    if (f_992a_752d(d_5d9c_9fab, d_5d9c_9f83 + 1))
        return;
    if (f_992a_75bc(d_5d9c_9fab, d_5d9c_9f83 + 1))
        return;
    if (d_5d9c_9efb > d_5d9c_a03a || d_5d9c_a032 == -1) {
        if (team == d_5d9c_9edd) {
            d_5d9c_a032 = d_5d9c_9e91;
            d_5d9c_a034 = d_5d9c_9e8f;
            strcpy(d_1f3e_2b22, "H");
        } else {
            d_5d9c_a032 = d_5d9c_9e8f;
            d_5d9c_a034 = d_5d9c_9e91;
            strcpy(d_1f3e_2b22, "A");
        }
        if (f_992a_7853(d_5d9c_9fab, d_5d9c_9f83 + 1))
            strcpy(d_1f3e_2b22, "N");
        d_5d9c_a036 = gf;
        if (d_5d9c_9b6c)
            d_5d9c_a036 = -d_5d9c_a036;
        d_5d9c_a038 = ga;
        d_5d9c_a03a = d_5d9c_9efb;
        f_7eeb_1afc(d_5d9c_9fab, d_5d9c_9f83 + 1, d_5d9c_9e55);
        strcat(d_1f3e_2b22, d_1f3e_4806);
    }
}

/* f_7eeb_1afc: the name of the competition the match of week b is in (d_1f3e_4806), and
 * for a cup the round. BCC merges the cups' identical tails (the pushes and the call of
 * f_7eeb_1d68) into the FA Cup branch, where the original has them in the European Cup
 * one, unless the file is compiled with -y (see the Makefile); it was given here byte for
 * byte with __emit__ before that was found. */
void f_7eeb_1afc(int team, int b, int c)
{
    if (f_992a_700a(team)) {
        if (c >= 60)
            strcpy(d_1f3e_4806, "Division Four");
        else if (c >= 40)
            strcpy(d_1f3e_4806, "Division Three");
        else if (c >= 20)
            strcpy(d_1f3e_4806, "Division Two");
        else
            strcpy(d_1f3e_4806, "Division One");
    } else if (f_992a_70a8(team)) {
        strcpy(d_1f3e_4806, "FA Cup");
        f_7eeb_1d0d(team, 0x4c, 0x4d);
        f_7eeb_1d68(team, 0x58, 0x59);
    } else if (f_992a_74c1(team, b)) {
        strcpy(d_1f3e_4806, "Rumbelows Cup");
        f_7eeb_1d0d(team, 0x3d, 0x41);
        f_7eeb_1d68(team, 0x52, 0x53);
    } else if (f_992a_752d(team, b)) {
        strcpy(d_1f3e_4806, "Zenith Cup");
        f_7eeb_1d0d(team, 0x29, -1);
        f_7eeb_1d68(team, 0x35, -1);
    } else if (f_992a_75bc(team, b)) {
        sprintf(d_1f3e_4806, "Domark Trophy");
        f_7eeb_1d0d(team, 0x49, -1);
        f_7eeb_1d68(team, 0x57, -1);
    } else if (f_992a_72e8(team, b)) {
        strcpy(d_1f3e_4806, "UEFA Cup");
        f_7eeb_1d0d(team, 0x4b, 0x4f);
        f_7eeb_1d68(team, 0x57, 0x5b);
    } else if (f_992a_7399(team, b)) {
        strcpy(d_1f3e_4806, "C/Winners Cup");
        f_7eeb_1d0d(team, 0x4b, 0x4f);
        f_7eeb_1d68(team, 0x5b, -1);
    } else if (f_992a_7430(team, b)) {
        strcpy(d_1f3e_4806, "European Cup");
        f_7eeb_1d68(team, 0x5b, -1);
    } else if (f_992a_78ca(team))
        strcpy(d_1f3e_4806, "Playoff");
    else if (team == 5)
        strcpy(d_1f3e_4806, "Charity Shield");
    else if (team < 5)
        strcpy(d_1f3e_4806, "Friendly");
}

void f_7eeb_1d0d(int t, int a, int b)
{
    if (t == a || t == b) {
        if (strlen(d_1f3e_4806) + 11 <= 19)
            strcat(d_1f3e_4806, " Semi-Final");
        else if (strlen(d_1f3e_4806) + 5 <= 19)
            strcat(d_1f3e_4806, " Semi");
    }
}

void f_7eeb_1d68(int t, int a, int b)
{
    if (t == a || t == b) {
        if (strlen(d_1f3e_4806) + 6 <= 19)
            strcat(d_1f3e_4806, " Final");
    }
}

void f_7eeb_1da6(void)
{
    switch (d_5d9c_9fab) {
    case 1:
        if (d_5d9c_9ee3 > 0)
            f_7eeb_2c5d(3, 1, d_5d9c_9ee3 * 2, 7, -1);
        f_7eeb_2c5d(2, 1, 0x20, 9, 0xd);
        f_7eeb_2c5d(5, 1, 0x40, 0xb, 0xf);
        f_7eeb_2c5d(6, 1, 0x20, 0x11, 0x15);
        f_7eeb_2c5d(7, 0x21, 0x40, 0x11, 0x15);
        f_7eeb_2800();
        break;
    case 7:
        if (d_5d9c_9ee3 > 0)
            for (d_5d9c_9f69 = d_5d9c_9ee3; d_5d9c_9f69 <= 31; d_5d9c_9f69++)
                d_2f3c_27e4[2][d_5d9c_9f69] = d_2f3c_27e4[2][d_5d9c_9f69 + d_5d9c_9ee3];
        f_7eeb_2c5d(3, 0x21, 0x40, 9, -1);
        break;
    case 9:
        f_7eeb_2c5d(3, 0x41, 0x50, 0xb, -1);
        break;
    case 11:
        f_7eeb_2c5d(3, 0x21, 0x28, 0x17, -1);
        break;
    case 13:
        for (d_5d9c_9f69 = 16; d_5d9c_9f69 <= 63; d_5d9c_9f69++)
            d_2f3c_27e4[1][d_5d9c_9f69] = d_2f3c_27e4[1][d_5d9c_9f69 + 16];
        f_7eeb_2c5d(2, 1, 0x40, 0x13, -1);
        break;
    case 15:
        f_7eeb_2c5d(5, 1, 0x20, 0x17, 0x19);
        break;
    case 19:
        f_7eeb_2c5d(2, 1, 0x20, 0x1b, -1);
        break;
    case 21:
        f_7eeb_2c5d(6, 0x11, 0x20, 0x1f, 0x23);
        f_7eeb_2c5d(7, 0x21, 0x30, 0x1f, 0x23);
        break;
    case 23:
        f_7eeb_2c5d(3, 1, 4, 0x29, -1);
        break;
    case 25:
        f_7eeb_2c5d(5, 1, 0x10, 0x1f, 0x23);
        break;
    case 27:
        f_7eeb_2c5d(2, 1, 0x10, 0x21, -1);
        break;
    case 31:
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 19; d_5d9c_9f69++)
            d_2f3c_27e4[0][d_5d9c_9f69 + 36] = d_5d9c_9f69 + 60;
        f_7eeb_2c5d(1, 1, 0x38, 0x26, -1);
        break;
    case 33:
        f_7eeb_2c5d(2, 1, 8, 0x2b, -1);
        break;
    case 35:
        f_7eeb_2c5d(5, 9, 0x10, 0x43, 0x47);
        f_7eeb_2c5d(6, 0x11, 0x18, 0x43, 0x47);
        f_7eeb_2491();
        break;
    case 38:
    case 39:
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 19; d_5d9c_9f69++)
            d_2f3c_27e4[0][d_5d9c_9f69 + 28] = d_5d9c_9f69 + 40;
        f_7eeb_2c5d(1, 1, 0x30, 0x2c, -1);
        break;
    case 41:
        d_5739_1bb0[5][0][53] = d_2f3c_27e4[2][0] << 5;
        d_5739_1bb0[5][1][53] = d_2f3c_27e4[2][1] << 5;
        d_5d9c_9f35 = 53;
        f_9100_50ca(d_2f3c_27e4[2][0], 11, 53);
        f_9100_50ca(d_2f3c_27e4[2][1], 11, 53);
        break;
    case 43:
        f_7eeb_2c5d(2, 1, 4, 0x3d, 0x41);
        break;
    case 44:
    case 45:
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 39; d_5d9c_9f69++)
            d_2f3c_27e4[0][d_5d9c_9f69 + 24] = d_5d9c_9f69;
        f_7eeb_2c5d(1, 1, 0x40, 0x32, -1);
        break;
    case 50:
    case 51:
        f_7eeb_2c5d(1, 1, 0x20, 0x38, -1);
        break;
    case 56:
    case 57:
        f_7eeb_2c5d(1, 1, 0x10, 0x3e, -1);
        break;
    case 62:
    case 63:
        f_7eeb_2c5d(1, 1, 8, 0x44, -1);
        break;
    case 65:
        d_5739_1bb0[1][0][82] = d_2f3c_27e4[1][0] << 5;
        d_5739_1bb0[1][1][82] = d_2f3c_27e4[1][1] << 5;
        d_5d9c_9f8f = 82;
        f_9100_50ca(d_2f3c_27e4[1][0], 10, 82);
        f_9100_50ca(d_2f3c_27e4[1][1], 10, 82);
        break;
    case 67:
        f_7eeb_2c5d(4, 0x19, 0x20, 0x47, -1);
        break;
    case 68:
    case 69:
        f_7eeb_2c5d(1, 1, 4, 0x4c, -1);
        break;
    case 71:
        f_7eeb_2c5d(4, 1, 4, 0x49, -1);
        f_7eeb_2c5d(5, 9, 0xc, 0x4b, 0x4f);
        f_7eeb_2c5d(6, 0xd, 0x10, 0x4b, 0x4f);
        break;
    case 73:
        d_5739_1bb0[2][0][87] = d_2f3c_27e4[3][0] << 5;
        d_5739_1bb0[2][1][87] = d_2f3c_27e4[3][1] << 5;
        d_5d9c_9f33 = 87;
        f_9100_50ca(d_2f3c_27e4[3][0], 12, 87);
        f_9100_50ca(d_2f3c_27e4[3][1], 12, 87);
        break;
    case 76:
    case 77:
        d_5739_1bb0[1][0][88] = d_2f3c_27e4[0][0] << 5;
        d_5739_1bb0[1][1][88] = d_2f3c_27e4[0][1] << 5;
        d_5d9c_9f8d = 88;
        f_9100_50ca(d_2f3c_27e4[0][0], 6, 88);
        f_9100_50ca(d_2f3c_27e4[0][1], 6, 88);
        break;
    case 79:
        d_5739_1bb0[1][0][87] = d_2f3c_27e4[4][0] << 5;
        d_5739_1bb0[1][1][87] = d_2f3c_27e4[4][1] << 5;
        d_5d9c_9f8b = 87;
        f_9100_50ca(d_2f3c_27e4[4][0], 7, 87);
        f_9100_50ca(d_2f3c_27e4[4][1], 7, 87);
        d_5739_1bb0[1][0][91] = d_5739_1bb0[1][1][87];
        d_5739_1bb0[1][1][91] = d_5739_1bb0[1][0][87];
        d_5739_1bb0[2][0][91] = d_2f3c_27e4[5][0] << 5;
        d_5739_1bb0[2][1][91] = d_2f3c_27e4[5][1] << 5;
        d_5d9c_9f89 = 91;
        f_9100_50ca(d_2f3c_27e4[5][0], 8, 91);
        f_9100_50ca(d_2f3c_27e4[5][1], 8, 91);
        d_5739_1bb0[3][0][91] = d_2f3c_27e4[6][0] << 5;
        d_5739_1bb0[3][1][91] = d_2f3c_27e4[6][1] << 5;
        d_5d9c_9f87 = 91;
        f_9100_50ca(d_2f3c_27e4[6][0], 9, 91);
        f_9100_50ca(d_2f3c_27e4[6][1], 9, 91);
        break;
    }
}

void f_7eeb_2491(void)
{
    unsigned char far *p;
    unsigned char a;
    unsigned char b;
    unsigned char c;
    char first;
    char second;

    first = 0;
    second = 0;
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 < 80; d_5d9c_9f69++)
        d_1f3e_5b98[d_5d9c_9f69] = 0;
    for (d_5d9c_9d93 = 0; d_5d9c_9d93 <= 7; d_5d9c_9d93++) {
        if (d_5d9c_9d93 < 4) {
            d_2f3c_0030[0][d_5d9c_9d93] = d_2f3c_27e4[6][d_5d9c_9d93];
            if (f_1680_0003(d_2f3c_27e4[6][d_5d9c_9d93]))
                first = -1;
        } else {
            d_2f3c_0030[0][d_5d9c_9d93] = d_2f3c_27e4[6][d_5d9c_9d93];
            if (f_1680_0003(d_2f3c_27e4[6][d_5d9c_9d93]))
                second = -1;
        }
        if (d_2f3c_27e4[6][d_5d9c_9d93] < 80)
            d_1f3e_5b98[d_2f3c_27e4[6][d_5d9c_9d93]] = -1;
    }
    memset(d_2f3c_0000, 0, 0x30);
    p = d_5d9c_563c;
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 5; d_5d9c_9fa1++) {
        a = *p++;
        for (d_5d9c_9f55 = 0; d_5d9c_9f55 <= 1; d_5d9c_9f55++) {
            b = *p++;
            c = *p++;
            for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 1; d_5d9c_9f6d++) {
                d_5739_1bb0[d_5d9c_9f55 + d_5d9c_9f6d * 2 + 1][0][a] = d_2f3c_0030[d_5d9c_9f6d][b - 1] << 5;
                d_5739_1bb0[d_5d9c_9f55 + d_5d9c_9f6d * 2 + 1][1][a] = d_2f3c_0030[d_5d9c_9f6d][c - 1] << 5;
            }
        }
    }
    if (first)
        f_7eeb_270d(0);
    if (second)
        f_7eeb_270d(1);
    d_5d9c_9f87 = 53;
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 1; d_5d9c_9fa1++)
        for (d_5d9c_9f55 = 0; d_5d9c_9f55 <= 3; d_5d9c_9f55++)
            f_9100_50ca(d_2f3c_0030[d_5d9c_9fa1][d_5d9c_9f55], 9, 53);
}

void f_7eeb_270d(int g)
{
    char buf[320];

    f_a1c3_27e4("European Cup");
    sprintf(buf, "Group %c Qualifiers", g + 'A');
    f_1680_2d78(-1.0, 8.0, 2, buf);
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 3; d_5d9c_9f69++)
        f_1680_2d78(-1.0, d_5d9c_9f69 * 2 + 10, f_1680_0003(d_2f3c_0030[g][d_5d9c_9f69]) * 5 + 6, f_1680_1a91(d_2f3c_0030[g][d_5d9c_9f69]));
    f_a1c3_3505(0);
}

void f_7eeb_2800(void)
{
    int col, start;
    int end, a, b, c, d;
    char used[8];
    unsigned char far *p;
    char taken[540];

    memset(taken, 0, 540);
    memset(used, 0, 8);
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 < 80; d_5d9c_9f69++)
        d_1f3e_5918[5][d_5d9c_9f69] = 0;
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 7; d_5d9c_9f6d++) {
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 4; d_5d9c_9fa1++) {
            do
                d_5d9c_9f69 = f_14d2_0c2a(40) + 40;
            while (taken[d_5d9c_9f69] != 0);
            taken[d_5d9c_9f69] = -1;
            if (f_1680_07cb(d_5d9c_9f69)) {
                do
                    d_5d9c_9f69 = f_14d2_0c2a(60) + 480;
                while (taken[d_5d9c_9f69] != 0);
                taken[d_5d9c_9f69] = -1;
            }
            if (d_5d9c_9f69 < 80)
                d_1f3e_5918[5][d_5d9c_9f69] = -1;
            d_1f3e_ff85[d_5d9c_9f6d][d_5d9c_9fa1] = d_5d9c_9f69;
            if (f_1680_0003(d_5d9c_9f69))
                used[d_5d9c_9f6d] = -1;
        }
    }
    memset(d_1f3e_fcb5, 0, 240);
    p = d_5d9c_565a;
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 11; d_5d9c_9fa1++) {
        col = *p++;
        d_5d9c_9ee7 = *p++;
        start = *p++;
        end = *p++;
        a = *p++;
        b = *p++;
        c = *p++;
        d = *p++;
        for (d_5d9c_9f6d = start; d_5d9c_9f6d <= end; d_5d9c_9f6d++) {
            d_5d9c_9f55 = d_5d9c_9ee7 + (d_5d9c_9f6d - start) * 2;
            d_5739_1bb0[d_5d9c_9f55][0][col] = d_1f3e_ff85[d_5d9c_9f6d][a - 1] << 5;
            d_5739_1d2a[d_5d9c_9f55 - 1][1][col - 1] = d_1f3e_ff85[d_5d9c_9f6d][b - 1] << 5;
            d_5739_1bb0[d_5d9c_9f55 + 1][0][col] = d_1f3e_ff85[d_5d9c_9f6d][c - 1] << 5;
            d_5739_1bb0[d_5d9c_9f55 + 1][1][col] = d_1f3e_ff85[d_5d9c_9f6d][d - 1] << 5;
        }
    }
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 7; d_5d9c_9f6d++)
        if (used[d_5d9c_9f6d])
            f_7eeb_2b66(d_5d9c_9f6d);
    d_5d9c_9f33 = 15;
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 7; d_5d9c_9fa1++)
        for (d_5d9c_9f55 = 0; d_5d9c_9f55 <= 4; d_5d9c_9f55++)
            f_9100_50ca(d_1f3e_ff85[d_5d9c_9fa1][d_5d9c_9f55], 12, 15);
}

void f_7eeb_2b66(int g)
{
    char buf[30];

    f_a1c3_27e4("Domark Trophy");
    sprintf(buf, "Group %c Qualifiers", g + 'A');
    f_1680_2d78(-1, 7, 2, buf);
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 4; d_5d9c_9f69++)
        f_1680_2d78(-1, d_5d9c_9f69 * 2 + 9, f_1680_0003(d_1f3e_ff85[g][d_5d9c_9f69]) * 5 + 6, f_1680_1a91(d_1f3e_ff85[g][d_5d9c_9f69]));
    f_a1c3_3505(0);
}

void f_7eeb_2c5d(int comp, int first, int last, int week, int other)
{
    char flag;
    int half, count;
    char used[100];
    char name[80];
    char buf[320];
    char ok;
    int w;

    memset(used, 0, 100);
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 79; d_5d9c_9f69++)
        d_1f3e_5918[comp + 1][d_5d9c_9f69] = 0;
    d_5d9c_9eeb = (last - first + 1) / 2;
    half = (first - 1) / 2;
    count = 0;
    if (comp == 5 || comp == 6 || comp == 7)
        for (d_5d9c_9d95 = 0; d_5d9c_9d95 <= d_5d9c_9eeb * 2 - 1; d_5d9c_9d95++)
            if (d_2f3c_0080[d_2f3c_27e4[comp - 1][d_5d9c_9d95]] > 0)
                count++;
    for (d_5d9c_9f6d = half; d_5d9c_9f6d <= half + d_5d9c_9eeb - 1; d_5d9c_9f6d++) {
        flag = count > 0 && d_5d9c_9eeb > 4;
        for (d_5d9c_9ecf = 0; d_5d9c_9ecf <= 1; d_5d9c_9ecf++) {
            do {
                do
                    d_5d9c_9fa1 = f_14d2_0c2a(d_5d9c_9eeb * 2);
                while (used[d_5d9c_9fa1] != 0);
                ok = -1;
                if (flag && d_5d9c_9ecf == 1
                    && d_2f3c_0080[d_2f3c_27e4[comp - 1][d_5d9c_9fa1]] == d_2f3c_0080[d_5d9c_9edd])
                    ok = 0;
            } while (!ok);
            d_5739_1bb0[d_5d9c_9f6d + 1][d_5d9c_9ecf][week] = d_2f3c_27e4[comp - 1][d_5d9c_9fa1] << 5;
            if (other != -1)
                d_5739_1bb0[d_5d9c_9f6d + 1][1 - d_5d9c_9ecf][other] = d_2f3c_27e4[comp - 1][d_5d9c_9fa1] << 5;
            if (d_5d9c_9ecf == 0)
                d_5d9c_9edd = d_2f3c_27e4[comp - 1][d_5d9c_9fa1];
            else
                d_5d9c_9edb = d_2f3c_27e4[comp - 1][d_5d9c_9fa1];
            used[d_5d9c_9fa1] = -1;
            if (count > 0 && d_2f3c_0080[d_2f3c_27e4[comp - 1][d_5d9c_9fa1]] > 0)
                count--;
        }
        d_5d9c_9b87 = f_1680_0003(d_5d9c_9edd);
        if (d_5d9c_9b87 == 0)
            d_5d9c_9b87 = f_1680_0003(d_5d9c_9edb);
        if (d_5d9c_9edd < 80)
            d_1f3e_5918[comp + 1][d_5d9c_9edd] = -1;
        if (d_5d9c_9edb < 80)
            d_1f3e_5918[comp + 1][d_5d9c_9edb] = -1;
        switch (comp) {
        case 1:
            strcpy(name, "FA Cup");
            d_5d9c_9f8d = week;
            d_5d9c_9ed7 = 6;
            break;
        case 2:
            strcpy(name, "Rumbelows Cup");
            d_5d9c_9f8f = week;
            d_5d9c_9ed7 = 10;
            break;
        case 3:
            strcpy(name, "Zenith Cup");
            d_5d9c_9f35 = week;
            d_5d9c_9ed7 = 11;
            break;
        case 4:
            strcpy(name, "Domark Trophy");
            d_5d9c_9f33 = week;
            d_5d9c_9ed7 = 12;
            break;
        case 5:
            strcpy(name, "UEFA Cup");
            d_5d9c_9f8b = week;
            d_5d9c_9ed7 = 7;
            break;
        case 6:
            strcpy(name, "Cup Winners Cup");
            d_5d9c_9f89 = week;
            d_5d9c_9ed7 = 8;
            break;
        case 7:
            strcpy(name, "European Cup");
            d_5d9c_9f87 = week;
            d_5d9c_9ed7 = 9;
            break;
        }
        if (d_5d9c_9b87) {
            f_a1c3_27e4("");
            sprintf(buf, "%s draw:", name);
            f_1680_2d78(-1, 10, 2, buf);
            sprintf(buf, "%s v %s", f_14d2_0e72(f_1680_1a91(d_5d9c_9edd)), f_14d2_0e72(f_1680_1a91(d_5d9c_9edb)));
            f_1680_2d78(-1, 12, 6, buf);
            w = f_1680_0577(week);
            if (week & 1 && week > 6)
                sprintf(buf, "Week %d Midweek", w);
            else
                sprintf(buf, "Week %d", w);
            f_1680_2d78(-1, 14, 3, buf);
            f_a1c3_3505(0);
        }
        f_9100_50ca(d_5d9c_9edd, d_5d9c_9ed7, week);
        f_9100_50ca(d_5d9c_9edb, d_5d9c_9ed7, week);
    }
}

void f_7eeb_3198(void)
{
    int far *p;
    int c[30];
    int b[30];
    int a[30];
    char used[460];
    register int i;
    int n;

    memset(used, 0, sizeof used);
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 12; d_5d9c_9f6d++) {
        d_2f3c_3579[d_5d9c_9f6d] = 1701;
        d_2f3c_3593[d_5d9c_9f6d] = 1701;
    }
    for (d_5d9c_9f31 = 5; d_5d9c_9f31 <= 6; d_5d9c_9f31++)
        for (d_5d9c_9d95 = 0; d_5d9c_9d95 <= 1; d_5d9c_9d95++) {
            i = d_2f3c_27e4[d_5d9c_9f31][d_5d9c_9d95];
            if (i > 79)
                used[i - 80] = -1;
        }
    p = d_5d9c_56ba;
    for (d_5d9c_9f6d = 1; d_5d9c_9f6d <= 30; d_5d9c_9f6d++) {
        d_5d9c_9ee7 = *p;
        p++;
        d_5d9c_9ee5 = *p;
        p++;
        d_5d9c_9e9b = *p;
        p++;
        a[d_5d9c_9f6d - 1] = d_5d9c_9ee7;
        b[d_5d9c_9f6d - 1] = d_5d9c_9ee5;
        c[d_5d9c_9f6d - 1] = d_5d9c_9e9b;
        for (d_5d9c_9fa1 = d_5d9c_9ee7; d_5d9c_9fa1 <= d_5d9c_9ee5 - 1; d_5d9c_9fa1++)
            for (d_5d9c_9f55 = d_5d9c_9fa1 + 1; d_5d9c_9f55 <= d_5d9c_9ee5; d_5d9c_9f55++) {
                if (d_5739_142d[0][d_5d9c_9fa1] + f_14d2_0c2a(3) - f_14d2_0c2a(3) <
                    d_5739_142d[0][d_5d9c_9f55] + f_14d2_0c2a(3) - f_14d2_0c2a(3)) {
                    f_14d2_148f((void *)&d_5d9c_0522[d_5d9c_9fa1], (void *)&d_5d9c_0522[d_5d9c_9f55], 2);
                    f_14d2_148f((void *)&used[d_5d9c_9fa1 - 1], (void *)&used[d_5d9c_9f55 - 1], 1);
                    for (d_5d9c_9ecf = 0; d_5d9c_9ecf <= 4; d_5d9c_9ecf++)
                        f_14d2_148f(&d_5739_142d[d_5d9c_9ecf][d_5d9c_9fa1], &d_5739_142d[d_5d9c_9ecf][d_5d9c_9f55], 1);
                    f_992a_7d4d(d_5d9c_9fa1 + 79, d_5d9c_9f55 + 79);
                    d_5d9c_9f31 = 0;
                    do {
                        for (d_5d9c_9dd7 = 0; d_5d9c_9dd7 <= 63; d_5d9c_9dd7++) {
                            if (d_2f3c_27e4[d_5d9c_9f31][d_5d9c_9dd7] == d_5d9c_9fa1 + 79)
                                d_2f3c_27e4[d_5d9c_9f31][d_5d9c_9dd7] = d_5d9c_9f55 + 79;
                            else if (d_2f3c_27e4[d_5d9c_9f31][d_5d9c_9dd7] == d_5d9c_9f55 + 79)
                                d_2f3c_27e4[d_5d9c_9f31][d_5d9c_9dd7] = d_5d9c_9fa1 + 79;
                        }
                        if (d_5d9c_9f31 == 0)
                            d_5d9c_9f31 = 4;
                        else
                            d_5d9c_9f31++;
                    } while (d_5d9c_9f31 != 7);
                }
            }
    }
    for (d_5d9c_9f31 = 6; d_5d9c_9f31 >= 5; d_5d9c_9f31--)
        for (d_5d9c_9d93 = 2; d_5d9c_9d93 <= 31; d_5d9c_9d93++) {
            while (used[a[d_5d9c_9d93 - 2] - 1] != 0)
                a[d_5d9c_9d93 - 2]++;
            d_2f3c_27e4[d_5d9c_9f31][d_5d9c_9d93] = a[d_5d9c_9d93 - 2] + 79;
            used[a[d_5d9c_9d93 - 2] - 1] = -1;
            a[d_5d9c_9d93 - 2]++;
        }
    n = 4;
    for (d_5d9c_9d91 = 0; d_5d9c_9d91 <= 29; d_5d9c_9d91++)
        for (i = 1; i <= c[d_5d9c_9d91]; i++) {
            while (used[a[d_5d9c_9d91] - 1] != 0)
                a[d_5d9c_9d91]++;
            d_2f3c_27e4[4][n] = a[d_5d9c_9d91] + 79;
            used[a[d_5d9c_9d91] - 1] = -1;
            n++;
            a[d_5d9c_9d91]++;
        }
    for (i = 1; i <= 36; i++) {
        do {
            d_5d9c_9f69 = f_14d2_0c2a(60);
        } while (used[d_5d9c_9f69 + 400] != 0);
        d_2f3c_27e4[0][i - 1] = d_5d9c_9f69 + 480;
        used[d_5d9c_9f69 + 400] = -1;
    }
}

void f_7eeb_363e(void)
{
    char buf[320];
    register int best = 0;

    memset(d_2f3c_0080, 0, 540);
    for (d_5d9c_9f31 = 4; d_5d9c_9f31 <= 6; d_5d9c_9f31++)
        for (d_5d9c_9f2f = 1; d_5d9c_9f2f <= 8; d_5d9c_9f2f++) {
            d_5d9c_9f67 = -1;
            for (d_5d9c_9d8f = 0; d_5d9c_9d8f <= (d_5d9c_9f31 == 4 ? 63 : 31); d_5d9c_9d8f++) {
                d_5d9c_9f69 = d_2f3c_27e4[d_5d9c_9f31][d_5d9c_9d8f];
                d_5d9c_9d8d = f_1680_0037(d_5d9c_9f69) + (d_5d9c_9f69 >= 80);
                if (d_2f3c_0080[d_5d9c_9f69] == 0 && (d_5d9c_9d8d > best || d_5d9c_9f67 == -1)) {
                    best = d_5d9c_9d8d;
                    d_5d9c_9f67 = d_5d9c_9f69;
                }
            }
            d_2f3c_0080[d_5d9c_9f67] = d_5d9c_9f31;
            if (f_1680_0003(d_5d9c_9f67)) {
                if (d_5d9c_9f31 == 4)
                    strcpy(d_1f3e_5256, "UEFA");
                else if (d_5d9c_9f31 == 5)
                    strcpy(d_1f3e_5256, "Cup Winners");
                else
                    strcpy(d_1f3e_5256, "European");
                sprintf(buf, "%s have been seeded|in the %s cup", (char far *)d_5d9c_08bc[d_5d9c_9f67], d_1f3e_5256);
                f_88c9_24f1(buf);
            }
        }
}

void f_7eeb_37b1(void)
{
    char used[540];

    memset(used, 0, sizeof used);
    for (d_5d9c_9f31 = 6; d_5d9c_9f31 >= 5; d_5d9c_9f31--) {
        do {
            d_5d9c_9f67 = f_14d2_0c2a(400) + 80;
        } while (used[d_5d9c_9f67] != 0 || d_5739_13de[d_5d9c_9f67] <= 16);
        d_2f3c_27e4[d_5d9c_9f31][0] = d_5d9c_9f67;
        used[d_5d9c_9f67] = -1;
        d_5d9c_9f67 = -1;
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 19; d_5d9c_9f69++) {
            if (used[d_5d9c_9f69] == 0 && f_1680_0003(d_5d9c_9f69) == 0) {
                d_5d9c_9de9 = d_5d9c_9f31 == 5 ? 4 : 2;
                d_5d9c_9d8d = f_1680_0037(d_5d9c_9f69) + f_14d2_0c2a(d_5d9c_9de9) - f_14d2_0c2a(d_5d9c_9de9);
                if (d_5d9c_9d8d > d_5d9c_9f5f || d_5d9c_9f67 == -1) {
                    d_5d9c_9f67 = d_5d9c_9f69;
                    d_5d9c_9f5f = d_5d9c_9d8d;
                }
            }
        }
        d_2f3c_27e4[d_5d9c_9f31][1] = d_5d9c_9f67;
        used[d_5d9c_9f67] = -1;
    }
    for (d_5d9c_9d8f = 1; d_5d9c_9d8f <= 4; d_5d9c_9d8f++) {
        d_5d9c_9f67 = -1;
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 19; d_5d9c_9f69++) {
            if (used[d_5d9c_9f69] == 0 && f_1680_0003(d_5d9c_9f69) == 0) {
                d_5d9c_9d8d = f_1680_0037(d_5d9c_9f69) + f_14d2_0c2a(2) - f_14d2_0c2a(2);
                if (d_5d9c_9d8d > d_5d9c_9f5f || d_5d9c_9f67 == -1) {
                    d_5d9c_9f67 = d_5d9c_9f69;
                    d_5d9c_9f5f = d_5d9c_9d8d;
                }
            }
        }
        d_2f3c_27e4[4][d_5d9c_9d8f - 1] = d_5d9c_9f67;
        used[d_5d9c_9f67] = -1;
    }
    d_5d9c_a022 = d_2f3c_27e4[5][1];
    d_5d9c_a023 = d_2f3c_27e4[6][1];
    for (d_5d9c_9dd5 = 1; d_5d9c_9dd5 <= 34; d_5d9c_9dd5++) {
        do {
            d_5d9c_9f67 = d_5d9c_9dd5 < 5 ? f_14d2_0c2a(20) + 20 : f_14d2_0c2a(40);
        } while (used[d_5d9c_9f67] != 0);
        d_2f3c_27e4[2][d_5d9c_9dd5 - 1] = d_5d9c_9f67;
        used[d_5d9c_9f67] = -1;
    }
    d_5d9c_9ee3 = 2;
    memset(used, 0, sizeof used);
    for (d_5d9c_9d8f = 0; d_5d9c_9d8f <= 79; d_5d9c_9d8f++) {
        d_5d9c_9f67 = -1;
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 79; d_5d9c_9f69++) {
            if (used[d_5d9c_9f69] == 0) {
                d_5d9c_9d8d = f_1680_0037(d_5d9c_9f69) + 150 - d_5d9c_9f69 / 20 * 50;
                if (d_5d9c_9d8d > d_5d9c_9f5f || d_5d9c_9f67 == -1) {
                    d_5d9c_9f67 = d_5d9c_9f69;
                    d_5d9c_9f5f = d_5d9c_9d8d;
                }
            }
        }
        if (d_5d9c_9d8f < 48)
            d_2f3c_27e4[1][d_5d9c_9d8f + 32] = d_5d9c_9f67;
        else
            d_2f3c_27e4[1][d_5d9c_9d8f - 48] = d_5d9c_9f67;
        used[d_5d9c_9f67] = -1;
    }
}

void f_7eeb_3b4b(void)
{
    d_5d9c_9f93++;
    d_5739_1d2a[d_5d9c_9f93 - 1][0][d_5d9c_9fab] = d_5d9c_9e8f * 32;
    d_5739_1d2a[d_5d9c_9f93 - 1][1][d_5d9c_9fab] = d_5d9c_9e91 * 32;
}

void f_7eeb_3b9a(void)
{
    register int i;

    if (d_5d9c_9fab == 86) {
        for (d_5d9c_9f61 = 0; d_5d9c_9f61 <= 2; d_5d9c_9f61++)
            for (i = 0; i <= 1; i++) {
                d_5739_1d2a[d_5d9c_9f61 * 2][i][i * 2 + 89] = d_2f3c_2794[d_5d9c_9f61 + 1][5] * 32;
                d_5739_1d2a[d_5d9c_9f61 * 2][1 - i][i * 2 + 89] = d_2f3c_2794[d_5d9c_9f61 + 1][2] * 32;
                d_5739_1d2a[d_5d9c_9f61 * 2 + 1][i][i * 2 + 89] = d_2f3c_2794[d_5d9c_9f61 + 1][4] * 32;
                d_5739_1d2a[d_5d9c_9f61 * 2 + 1][1 - i][i * 2 + 89] = d_2f3c_2794[d_5d9c_9f61 + 1][3] * 32;
            }
    } else {
        for (d_5d9c_9f61 = 0; d_5d9c_9f61 <= 2; d_5d9c_9f61++) {
            d_5739_1d2a[d_5d9c_9f61][0][93] = d_2f3c_2c44[d_5d9c_9f61 * 2] * 32;
            d_5739_1d2a[d_5d9c_9f61][1][93] = d_2f3c_2c44[d_5d9c_9f61 * 2 + 1] * 32;
        }
    }
}

void f_7eeb_3d47(void)
{
    if (d_5d9c_9fab < 5) {
        for (d_5d9c_9bc1 = d_5d9c_9fab; d_5d9c_9bc1 <= 4; d_5d9c_9bc1++)
            for (d_5d9c_9eef = 646; d_5d9c_9eef <= d_5d9c_9ef3 + 645; d_5d9c_9eef++) {
                d_5d9c_9f67 = d_2f3c_5167[d_5d9c_9eef];
                if (d_5d9c_9f67 < 255)
                    f_7eeb_3da5(d_5d9c_9f67, d_5d9c_9bc1);
            }
    }
}

void f_7eeb_3da5(int a, int b)
{
    if (!f_7eeb_3f0f(a, b)) {
        d_5d9c_9f61 = a / 20;
        do {
            do {
                d_5d9c_9ec3 = f_14d2_0c2a(540);
            } while (f_7eeb_3f0f(d_5d9c_9ec3, b));
            if (d_5d9c_9ec3 <= 19)
                d_5d9c_9b75 = d_5d9c_9f61 == 1 || d_5d9c_9f61 == 2;
            else if (d_5d9c_9ec3 <= 39)
                d_5d9c_9b75 = d_5d9c_9f61 == 0 || d_5d9c_9f61 == 2 || d_5d9c_9f61 == 3;
            else if (d_5d9c_9ec3 <= 59)
                d_5d9c_9b75 = d_5d9c_9f61 == 0 || d_5d9c_9f61 == 1 || d_5d9c_9f61 == 3;
            else if (d_5d9c_9ec3 <= 79)
                d_5d9c_9b75 = d_5d9c_9f61 == 1 || d_5d9c_9f61 == 2;
            else if (d_5d9c_9ec3 <= 479)
                d_5d9c_9b75 = d_5d9c_9f61 == 0;
            else if (d_5d9c_9ec3 <= 539)
                d_5d9c_9b75 = d_5d9c_9f61 == 3;
        } while (!d_5d9c_9b75);
        d_5d9c_9dd7 = f_14d2_0c2a(2);
        d_5739_1d2a[d_5d9c_a062[b]][d_5d9c_9dd7][b - 1] = a * 32;
        d_5739_1d2a[d_5d9c_a062[b]][1 - d_5d9c_9dd7][b - 1] = d_5d9c_9ec3 * 32;
        d_5d9c_a062[b]++;
    }
}

char f_7eeb_3f0f(int a, int b)
{
    d_5d9c_9b19 = 0;
    for (d_5d9c_9f0f = 0; d_5d9c_9f0f <= d_5d9c_a062[b] - 1; d_5d9c_9f0f++) {
        d_5d9c_9edd = d_5739_1d2a[d_5d9c_9f0f][0][b - 1] / 32;
        d_5d9c_9edb = d_5739_1d2a[d_5d9c_9f0f][1][b - 1] / 32;
        if (a == d_5d9c_9edd || a == d_5d9c_9edb) {
            d_5d9c_9b19 = -1;
            d_5d9c_9f0f = d_5d9c_a062[b] - 1;
        }
    }
    return d_5d9c_9b19;
}

void f_7eeb_3fa2(void)
{
    d_5d9c_9ecf = 0;
    do {
        d_5d9c_9fa1 = d_5d9c_9ecf * 20;
        do {
            d_5d9c_9f55 = d_5d9c_9fa1 + 1;
            do {
                d_5d9c_9d8b = d_5739_03d8[0][d_2f3c_2794[0][d_5d9c_9fa1]] * 3 + d_5d9c_9f85
                    - d_5739_03d8[0][d_2f3c_2794[0][d_5d9c_9fa1]] - d_5739_03d8[1][d_2f3c_2794[0][d_5d9c_9fa1]];
                d_5d9c_9d89 = d_5739_03d8[0][d_2f3c_2794[0][d_5d9c_9f55]] * 3 + d_5d9c_9f85
                    - d_5739_03d8[0][d_2f3c_2794[0][d_5d9c_9f55]] - d_5739_03d8[1][d_2f3c_2794[0][d_5d9c_9f55]];
                d_5d9c_9d87 = d_5739_03d8[2][d_2f3c_2794[0][d_5d9c_9fa1]];
                d_5d9c_9d85 = d_5739_03d8[2][d_2f3c_2794[0][d_5d9c_9f55]];
                d_5d9c_9e43 = d_5739_03d8[3][d_2f3c_2794[0][d_5d9c_9fa1]];
                d_5d9c_9e41 = d_5739_03d8[3][d_2f3c_2794[0][d_5d9c_9f55]];
                if (d_5d9c_9d8b < d_5d9c_9d89 ||
                    (d_5d9c_9d8b == d_5d9c_9d89 && d_5d9c_9d87 - d_5d9c_9e43 < d_5d9c_9d85 - d_5d9c_9e41) ||
                    (d_5d9c_9d8b == d_5d9c_9d89 && d_5d9c_9d87 - d_5d9c_9e43 == d_5d9c_9d85 - d_5d9c_9e41 &&
                     d_5d9c_9d87 < d_5d9c_9d85))
                    f_14d2_148f(&d_2f3c_2794[0][d_5d9c_9fa1], &d_2f3c_2794[0][d_5d9c_9f55], 1);
                d_5d9c_9f55++;
            } while (d_5d9c_9f55 != d_5d9c_9ecf * 20 + 20);
            d_5d9c_9fa1++;
        } while (d_5d9c_9fa1 != d_5d9c_9ecf * 20 + 19);
        d_5d9c_9ecf++;
    } while (d_5d9c_9ecf != 4);
}
