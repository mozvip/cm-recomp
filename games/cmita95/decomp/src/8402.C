/* @at 8402:0000 */
/* @data 61eb:2cd2 */
/* @module */

/* Overlay 8402 (CM94's 8C32.C, the first CM Italia's 8119.C, CM1's 7EEB.C): the end of a
 * match and of a season (the result line, the form and league tables of Serie A and B, 38
 * clubs, promotions and relegations), the cup results and prize money, the saving of the
 * players, the cup and European draws and fixtures (Italian Cup, Anglo-Italian Cup with its
 * groups, the European cups and their seeding), the league tables' sort with the
 * head-to-head tie-breaks, and the week's fixture headings. Its data starts with the
 * promotion and relegation pairs and the cup draw tables (byte rows walked with a pointer),
 * the 30 {first, last, count} ranges of the fixture generator, then its literal pool. */
#include <stdio.h>
#include <string.h>
#include <mem.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_8402_0000(void);
void f_8402_00b2(void);
void f_8402_06f6(int a, int b, int c, int d);
void f_8402_0cb0(int a, int b, int c, int d);
void f_8402_0fc6(int x);
void f_8402_102a(int x);
void f_8402_10b8(int team, long amount, long z);
void f_8402_1106(int team, int amount);
void f_8402_1191(void);
void f_8402_14c0(int team, int delta);
void f_8402_1543(int team, int b, int c);
void f_8402_16ae(int t, int a, int b);
void f_8402_1708(int t, int a, int b);
void f_8402_1746(void);
void f_8402_1b3b(void);
void f_8402_1d8c(void);
void f_8402_1ffc(void);
void f_8402_2326(int g);
void f_8402_23f7(int g);
void f_8402_2503(int comp, int first, int last, int week, int other);
void f_8402_2934(void);
void f_8402_2e7f(void);
void f_8402_2fea(void);
void f_8402_3185(void);
void f_8402_3307(void);
void f_8402_38a2(int a, int b, char c);

void f_215d_19eb();
char far *f_215d_0f63(char far *s, unsigned n);
char far *f_1a83_477e(int player);
int f_75a4_23bf(int week, int n);
char f_1a83_2387(int);
char f_1a83_2448(int);
char f_1a83_247b(int);
extern unsigned char far d_3334_bdb2[][40];
extern char far d_432e_ed13[][40][5];
extern char far d_432e_c977[];
char f_1a83_29a3(int);
char f_1a83_2644(int, int);
char f_1a83_26ed(int, int);
char f_1a83_277e(int, int);
char f_1a83_280b(int, int);
void f_93a1_4402(int, int, int, int);
void f_93a1_435f(int, int, int, int);
void f_93a1_44a5(int, int, int, int);
void f_93a1_4531(int, int, int, int);
void f_93a1_4636(int, int, int);
void f_93a1_5e04(int, int, int);
void f_ab30_0265(int, int, char, char);
extern int d_61eb_d5c2;
extern int d_61eb_d658;
extern int d_61eb_d6be;
extern int d_61eb_d5a2;
extern int d_61eb_d66c;
extern char d_61eb_d9e8;
extern char d_61eb_d9e6;
extern char d_61eb_d9e5;
extern char d_61eb_d9cc;
extern int d_61eb_d70c;
extern int d_61eb_d70e;
extern int d_61eb_d666;
extern int d_61eb_d668;
extern int d_61eb_d6b6;
extern int d_61eb_d6b4;
extern int d_61eb_db21;
extern int d_61eb_db23;
extern int d_61eb_d66e;
extern int d_61eb_d670;
extern int d_61eb_d708;
extern int d_61eb_d70a;
extern int d_61eb_d5a6;
extern int d_61eb_d5ae;
extern int d_61eb_d5b0;
extern int d_61eb_d5b2;
extern int d_61eb_d6d0;
extern int d_61eb_d6ce;
extern char near *d_61eb_b0ec[];
extern char far d_5313_0de8[];
extern char far d_432e_8877[][175];
extern unsigned char far d_432e_37f6[][6][5];
extern unsigned char far d_432e_36a6[][2][4];
extern char far d_28d4_1398[];
void far *f_215d_1629(int handle, int page);
extern int d_61eb_d5d8;
extern int d_61eb_d5aa;
extern int d_61eb_dc52;
extern int d_61eb_dc50;
extern int d_61eb_dc4a;
struct s_a01a { long pad[190]; long v[38]; };
extern struct s_a01a far *d_61eb_dbc0;
extern long far *d_61eb_dbb0;
extern char far *d_61eb_dbbc;
extern int far d_432e_3696[][4];
extern int far d_432e_36d6[][5];
extern unsigned char far d_432e_0640[];
extern int far d_432e_00c8[][100];
extern int far d_432e_00ca[][100];
extern int d_61eb_d5ac;
extern int far d_3334_ca6e[];
void f_215d_13f1(void far *a, void far *b, int n);
extern int far d_432e_0000[][100];
void f_18f9_16c8(void);
void f_18f9_171b(void);
void f_18f9_176e(void);
void f_18f9_17c1(void);
void f_18f9_1814(void);
int f_215d_13af(int a, int b);
int f_215d_1343(int a, int b);
int f_9f8d_0000(int x);
char f_1a83_2ad4(int);
void f_93a1_172a(int team, char far *s);
extern int d_61eb_d5d4;
extern int d_61eb_d5de;
extern int d_61eb_d5fc;
extern int d_61eb_d612;
extern int d_61eb_d59a;
extern int d_61eb_d59c;
extern int far d_3334_caba[];
extern unsigned char far d_3334_bea2[];
extern unsigned char far d_3334_bf6a[];
char f_9f8d_0305(int v);
long f_215d_0d96(long n);
extern int d_61eb_d5dc;
extern int d_61eb_d5f0;
extern int d_61eb_d7b8;
extern int far d_53fc_11fc[][2][100];
extern int far d_53fc_138e[][2][100];
char far *f_1a83_3300(int x);
void f_1a83_3a43(float x, float y, int colour, char far *s);
void f_1a83_48f9(char far *title);
void f_1a83_5540(int a);
extern char far d_432e_cab7[];
extern unsigned char far d_3334_d3f6[];
extern unsigned char far d_432e_b81f[];
extern char far d_432e_b7ad[];
extern unsigned char d_61eb_dba3;
extern unsigned char far d_3334_c122[][40];
unsigned char f_1a83_6d8b(char team);
char far *f_215d_1043(char far *s);
float f_1a83_2b0c(int x);
int f_1a83_66e8(int x);
unsigned char f_1a83_6d76(char c);
void f_1a83_0bb7(char far *);
void f_9a9e_45df(int a, int b);
extern int d_61eb_d5a4;
extern int d_61eb_d5e6;
extern int d_61eb_d614;
extern int d_61eb_d65c;
extern int d_61eb_d65e;
extern int d_61eb_d674;
extern int d_61eb_d6aa;
extern int d_61eb_d702;
extern int d_61eb_d704;
extern int d_61eb_d75e;
extern int d_61eb_d774;
extern int d_61eb_d7b6;
extern int d_61eb_d7ba;
extern int d_61eb_d7bc;
extern int d_61eb_d7be;
extern int d_61eb_d7c0;
extern int d_61eb_d7c2;
extern int d_61eb_d7c4;
extern int d_61eb_d7c6;
extern char d_61eb_d9cb;
extern char d_61eb_dba4[];
struct s_tab { unsigned char team, f, a, pts; };
extern struct s_tab d_61eb_dbec[20];
extern int d_61eb_b18a[];
extern unsigned char far d_432e_31aa[];
extern char far d_432e_b73b[][38];
extern char far d_432e_c085[];
extern int far d_3334_feb8[];
extern int far d_3334_fed8[];
extern unsigned char far d_3334_bfe2[];
extern unsigned char far d_3334_c00a[];
extern int far d_53fc_138c[][2][100];
extern unsigned char far d_53fc_099a[];
extern unsigned char far d_53fc_09c0[][502];

static unsigned char d_61eb_2cd2[] = {
    0x00, 0x01, 0x12, 0x16, 0x13, 0x16, 0x14, 0x16, 0x15, 0x16
};
static unsigned char d_61eb_2cdc[] = {
    0x0e, 0x0d, 0x0f, 0x0d, 0x10, 0x0d, 0x11, 0x0d, 0x22, 0x21, 0x23, 0x21,
    0x24, 0x21, 0x25, 0x21
};
static unsigned char d_61eb_2cec[] = {
    0x29, 0x01, 0x02, 0x03, 0x04, 0x2d, 0x02, 0x03, 0x04, 0x01, 0x45, 0x01,
    0x03, 0x02, 0x04, 0x49, 0x02, 0x01, 0x04, 0x03, 0x4f, 0x03, 0x02, 0x01,
    0x04, 0x53, 0x03, 0x01, 0x04, 0x02
};
static unsigned char d_61eb_2d0a[] = {
    0x13, 0x01, 0x01, 0x02, 0x17, 0x01, 0x02, 0x03, 0x1d, 0x01, 0x03, 0x01
};
static unsigned char d_61eb_2d16[] = {
    0x25, 0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x00, 0x02,
    0x01, 0x02, 0x01, 0x03, 0x00, 0x03, 0x29, 0x0d, 0x01, 0x00, 0x00, 0x02,
    0x00, 0x01, 0x01, 0x03, 0x01, 0x02, 0x00, 0x00, 0x00, 0x03, 0x01, 0x01,
    0x2d, 0x0d, 0x00, 0x00, 0x01, 0x01, 0x01, 0x02, 0x00, 0x01, 0x00, 0x02,
    0x01, 0x03, 0x01, 0x00, 0x00, 0x03, 0x2f, 0x01, 0x01, 0x01, 0x00, 0x02,
    0x00, 0x01, 0x01, 0x00, 0x01, 0x03, 0x00, 0x00, 0x00, 0x03, 0x01, 0x02
};
/* 30 x {first, last, count} */
static int d_61eb_2d5e[] = {
    1, 10, 2,
    11, 30, 4,
    31, 50, 4,
    51, 78, 3,
    79, 90, 1,
    91, 108, 3,
    109, 114, 1,
    115, 132, 4,
    133, 140, 1,
    141, 148, 1,
    149, 166, 4,
    167, 178, 1,
    179, 197, 3,
    198, 205, 1,
    206, 223, 1,
    224, 239, 1,
    240, 255, 1,
    256, 271, 2,
    272, 287, 2,
    288, 302, 2,
    303, 318, 3,
    319, 330, 2,
    331, 342, 4,
    343, 354, 1,
    355, 364, 2,
    365, 370, 1,
    371, 377, 1,
    378, 383, 1,
    384, 390, 1,
    391, 400, 2
};

void f_8402_0000(void)
{
    FILE *fp;
    long off;

    f_215d_19eb(2);
    fp = fopen(d_5313_0de8, "rb+");
    for (d_61eb_d5c2 = 0; d_61eb_d5c2 <= d_61eb_d658 - 1; d_61eb_d5c2++) {
        off = (long)d_61eb_d6be + d_61eb_d5c2 - 1;
        off = 175 * off;
        fseek(fp, off, 0);
        fwrite(d_432e_8877[d_61eb_d5c2], 1, 175, fp);
    }
    fclose(fp);
}

void f_8402_00b2(void)
{
    char wd[8];
    char buf[320];

    d_61eb_d66c = f_75a4_23bf(d_61eb_d5a2, d_61eb_d5c2 + 1);
    if (d_61eb_d9e6) {
        d_28d4_1398[d_61eb_d66c * 128 + d_61eb_d5c2 * 2] = d_61eb_d70c;
        d_28d4_1398[d_61eb_d66c * 128 + d_61eb_d5c2 * 2 + 1] = d_61eb_d70e;
    }
    sprintf(d_432e_c977, "%s %d", (char far *)d_61eb_b0ec[d_61eb_d666], d_61eb_d70c);
    if (d_61eb_d70c > 6) {
        strcat(d_432e_c977, " (");
        strcat(d_432e_c977, f_1a83_477e(d_61eb_d70c));
        strcat(d_432e_c977, ")");
    }
    strcat(d_432e_c977, " ");
    strcat(d_432e_c977, d_61eb_b0ec[d_61eb_d668]);
    strcat(d_432e_c977, " ");
    sprintf(buf, "%d", d_61eb_d70e);
    strcat(d_432e_c977, buf);
    if (d_61eb_d70e > 6) {
        strcat(d_432e_c977, " (");
        strcat(d_432e_c977, f_1a83_477e(d_61eb_d70e));
        strcat(d_432e_c977, ")");
    }
    if (d_61eb_d5a2 > 12 && d_61eb_d9e8 == 0) {
        if (d_61eb_d70c > d_61eb_d70e) {
            f_93a1_4402(d_61eb_d6b6, d_61eb_d6b4, d_61eb_d70e, d_61eb_d70c);
            f_93a1_435f(d_61eb_d6b4, d_61eb_d6b6, d_61eb_d70c, d_61eb_d70e);
        } else if (d_61eb_d70e > d_61eb_d70c) {
            f_93a1_435f(d_61eb_d6b6, d_61eb_d6b4, d_61eb_d70e, d_61eb_d70c);
            f_93a1_4402(d_61eb_d6b4, d_61eb_d6b6, d_61eb_d70c, d_61eb_d70e);
        }
    }
    if (d_61eb_d5a2 > 12 && d_61eb_d9e5) {
        f_93a1_44a5(d_61eb_d6b4, d_61eb_d6b6, d_61eb_db21, d_61eb_db23);
        f_93a1_4531(d_61eb_d6b4, d_61eb_d6b6, d_61eb_db21, d_61eb_db23);
    }
    if (d_61eb_d5a2 > 12) {
        if (d_61eb_d666 < 38)
            f_ab30_0265(d_61eb_d6b4, d_61eb_d6b6, d_61eb_d70c, d_61eb_d70e);
        if (d_61eb_d668 < 38)
            f_ab30_0265(d_61eb_d6b6, d_61eb_d6b4, d_61eb_d70e, d_61eb_d70c);
    }
    if (f_1a83_2644(d_61eb_d5a2, d_61eb_d5c2 + 1) || f_1a83_26ed(d_61eb_d5a2, d_61eb_d5c2 + 1)
        || f_1a83_277e(d_61eb_d5a2, d_61eb_d5c2 + 1) || f_1a83_280b(d_61eb_d5a2, d_61eb_d5c2 + 1)
        || f_1a83_247b(d_61eb_d5a2)) {
        d_61eb_d70c += d_61eb_d66e;
        d_61eb_d70e += d_61eb_d670;
        if (d_61eb_d9cc) {
            sprintf(buf, "  AGG:%d-%d", d_61eb_d70c, d_61eb_d70e);
            strcat(d_432e_c977, buf);
        }
        d_61eb_d70c += d_61eb_d708;
        d_61eb_d70e += d_61eb_d70a;
    }
    if (d_61eb_d70c > d_61eb_d70e) {
        if (f_1a83_2387(d_61eb_d5a2) || f_1a83_2448(d_61eb_d5a2)) {
            d_3334_bdb2[12][d_61eb_d666]++;
            d_3334_bdb2[13][d_61eb_d668]++;
            d_3334_bdb2[18][d_61eb_d668]++;
            sprintf(buf, "%sW", d_432e_ed13[0][d_61eb_d666]);
            strcpy(d_432e_ed13[0][d_61eb_d666], f_215d_0f63(buf, 4));
            sprintf(buf, "%sL", d_432e_ed13[1][d_61eb_d668]);
            strcpy(d_432e_ed13[1][d_61eb_d668], f_215d_0f63(buf, 4));
        } else
            f_8402_06f6(d_61eb_d6b4, d_61eb_d6b6, d_61eb_d70c, d_61eb_d70e);
    } else if (d_61eb_d70c == d_61eb_d70e) {
        if (f_1a83_2387(d_61eb_d5a2) || f_1a83_2448(d_61eb_d5a2)) {
            d_3334_bdb2[17][d_61eb_d668]++;
            if (d_61eb_d70c > 0)
                strcpy(wd, "X");
            else
                strcpy(wd, "D");
            sprintf(buf, "%s%s", d_432e_ed13[0][d_61eb_d666], (char far *)wd);
            strcpy(d_432e_ed13[0][d_61eb_d666], f_215d_0f63(buf, 4));
            sprintf(buf, "%s%s", d_432e_ed13[1][d_61eb_d668], (char far *)wd);
            strcpy(d_432e_ed13[1][d_61eb_d668], f_215d_0f63(buf, 4));
        } else
            f_8402_0cb0(d_61eb_d6b4, d_61eb_d6b6, d_61eb_d70c, d_61eb_d70e);
    } else {
        if (f_1a83_2387(d_61eb_d5a2) || f_1a83_2448(d_61eb_d5a2)) {
            d_3334_bdb2[12][d_61eb_d668]++;
            d_3334_bdb2[16][d_61eb_d668]++;
            d_3334_bdb2[13][d_61eb_d666]++;
            sprintf(buf, "%sL", d_432e_ed13[0][d_61eb_d666]);
            strcpy(d_432e_ed13[0][d_61eb_d666], f_215d_0f63(buf, 4));
            sprintf(buf, "%sW", d_432e_ed13[1][d_61eb_d668]);
            strcpy(d_432e_ed13[1][d_61eb_d668], f_215d_0f63(buf, 4));
        } else
            f_8402_06f6(d_61eb_d6b6, d_61eb_d6b4, d_61eb_d70e, d_61eb_d70c);
    }
    if (f_1a83_2387(d_61eb_d5a2) || f_1a83_2448(d_61eb_d5a2)) {
        d_3334_bdb2[14][d_61eb_d666] += d_61eb_d70c;
        d_3334_bdb2[15][d_61eb_d666] += d_61eb_d70e;
        d_3334_bdb2[14][d_61eb_d668] += d_61eb_d70e;
        d_3334_bdb2[15][d_61eb_d668] += d_61eb_d70c;
        d_3334_bdb2[19][d_61eb_d668] += d_61eb_d70e;
        d_3334_bdb2[20][d_61eb_d668] += d_61eb_d70c;
    }
}

void f_8402_06f6(int a, int b, int c, int d)
{
    if (f_1a83_247b(d_61eb_d5a2)) {
        d_432e_00c8[0][d_61eb_d5a6] = a;
        d_61eb_d5a6++;
        if (d_61eb_d5a2 == 100) {
            d_432e_00ca[0][0] = b;
            f_93a1_4636(a, 1, 150);
            f_8402_10b8(a, 100000L, 7500L);
            f_93a1_5e04(1, a, b);
        }
    } else if (f_1a83_280b(d_61eb_d5a2, d_61eb_d5c2 + 1)) {
        if (d_61eb_d5a2 <= 47) {
            f_8402_102a(a);
            d_432e_37f6[0][d_61eb_d6ce][d_61eb_d6d0] = d_432e_37f6[0][d_61eb_d6ce][d_61eb_d6d0] + 1;
            d_432e_37f6[1][d_61eb_d6ce][d_61eb_d6d0] = d_432e_37f6[1][d_61eb_d6ce][d_61eb_d6d0] + 1;
            d_432e_37f6[4][d_61eb_d6ce][d_61eb_d6d0] = d_432e_37f6[4][d_61eb_d6ce][d_61eb_d6d0] + c;
            d_432e_37f6[5][d_61eb_d6ce][d_61eb_d6d0] = d_432e_37f6[5][d_61eb_d6ce][d_61eb_d6d0] + d;
            f_8402_102a(b);
            d_432e_37f6[0][d_61eb_d6ce][d_61eb_d6d0] = d_432e_37f6[0][d_61eb_d6ce][d_61eb_d6d0] + 1;
            d_432e_37f6[3][d_61eb_d6ce][d_61eb_d6d0] = d_432e_37f6[3][d_61eb_d6ce][d_61eb_d6d0] + 1;
            d_432e_37f6[4][d_61eb_d6ce][d_61eb_d6d0] = d_432e_37f6[4][d_61eb_d6ce][d_61eb_d6d0] + d;
            d_432e_37f6[5][d_61eb_d6ce][d_61eb_d6d0] = d_432e_37f6[5][d_61eb_d6ce][d_61eb_d6d0] + c;
        } else if (!d_61eb_d9e6) {
            d_432e_00c8[2][d_61eb_d5ac] = a;
            d_61eb_d5ac++;
            if (d_61eb_d5a2 == 75) {
                d_432e_00ca[2][0] = b;
                f_93a1_4636(a, 3, 150);
                f_8402_10b8(a, 75000L, 2000L);
                f_93a1_5e04(3, a, b);
            }
        }
    } else if (f_1a83_2644(d_61eb_d5a2, d_61eb_d5c2 + 1)) {
        d_432e_00c8[3][d_61eb_d5ae] = a;
        d_61eb_d5ae++;
        if (d_61eb_d5a2 == 91) {
            d_432e_00ca[3][0] = b;
            f_93a1_4636(a, 4, 150);
            f_8402_10b8(a, 250000L, 10000L);
            f_93a1_5e04(4, a, b);
        }
    } else if (f_1a83_26ed(d_61eb_d5a2, d_61eb_d5c2 + 1)) {
        d_432e_00c8[4][d_61eb_d5b0] = a;
        d_61eb_d5b0++;
        if (d_61eb_d5a2 == 89) {
            d_432e_00ca[4][0] = b;
            f_93a1_4636(a, 5, 150);
            f_8402_10b8(a, 250000L, 10000L);
            f_93a1_5e04(5, a, b);
        }
    } else if (f_1a83_277e(d_61eb_d5a2, d_61eb_d5c2 + 1)) {
        if (d_61eb_d5a2 < 41 || d_61eb_d5a2 > 83) {
            d_432e_00c8[5][d_61eb_d5b2] = a;
            d_61eb_d5b2++;
            if (d_61eb_d5a2 == 93) {
                d_432e_00ca[5][0] = b;
                f_93a1_4636(a, 6, 150);
                f_8402_10b8(a, 1000000L, 20000L);
                f_93a1_5e04(6, a, b);
            }
        } else {
            f_8402_0fc6(a);
            d_432e_36a6[0][d_61eb_d6ce][d_61eb_d6d0] = d_432e_36a6[0][d_61eb_d6ce][d_61eb_d6d0] + 1;
            d_432e_36a6[1][d_61eb_d6ce][d_61eb_d6d0] = d_432e_36a6[1][d_61eb_d6ce][d_61eb_d6d0] + 1;
            d_432e_36a6[4][d_61eb_d6ce][d_61eb_d6d0] = d_432e_36a6[4][d_61eb_d6ce][d_61eb_d6d0] + c;
            d_432e_36a6[5][d_61eb_d6ce][d_61eb_d6d0] = d_432e_36a6[5][d_61eb_d6ce][d_61eb_d6d0] + d;
            f_8402_0fc6(b);
            d_432e_36a6[0][d_61eb_d6ce][d_61eb_d6d0] = d_432e_36a6[0][d_61eb_d6ce][d_61eb_d6d0] + 1;
            d_432e_36a6[3][d_61eb_d6ce][d_61eb_d6d0] = d_432e_36a6[3][d_61eb_d6ce][d_61eb_d6d0] + 1;
            d_432e_36a6[4][d_61eb_d6ce][d_61eb_d6d0] = d_432e_36a6[4][d_61eb_d6ce][d_61eb_d6d0] + d;
            d_432e_36a6[5][d_61eb_d6ce][d_61eb_d6d0] = d_432e_36a6[5][d_61eb_d6ce][d_61eb_d6d0] + c;
        }
    } else if (f_1a83_29a3(d_61eb_d5a2)) {
        if (d_432e_0640[1] == a)
            f_215d_13f1(&d_432e_0640[0], &d_432e_0640[1], 1);
        else if (d_432e_0640[14] == a)
            f_215d_13f1(&d_432e_0640[13], &d_432e_0640[14], 1);
        else if (d_432e_0640[22] == a)
            f_215d_13f1(&d_432e_0640[21], &d_432e_0640[22], 1);
        else if (d_432e_0640[34] == a)
            f_215d_13f1(&d_432e_0640[33], &d_432e_0640[34], 1);
    }
}

void f_8402_0cb0(int a, int b, int c, int d)
{
    if (f_1a83_280b(d_61eb_d5a2, d_61eb_d5c2 + 1) && d_61eb_d5a2 <= 47) {
        f_8402_102a(a);
        d_432e_37f6[0][d_61eb_d6ce][d_61eb_d6d0] = d_432e_37f6[0][d_61eb_d6ce][d_61eb_d6d0] + 1;
        d_432e_37f6[2][d_61eb_d6ce][d_61eb_d6d0] = d_432e_37f6[2][d_61eb_d6ce][d_61eb_d6d0] + 1;
        d_432e_37f6[4][d_61eb_d6ce][d_61eb_d6d0] = d_432e_37f6[4][d_61eb_d6ce][d_61eb_d6d0] + c;
        d_432e_37f6[5][d_61eb_d6ce][d_61eb_d6d0] = d_432e_37f6[5][d_61eb_d6ce][d_61eb_d6d0] + d;
        f_8402_102a(b);
        d_432e_37f6[0][d_61eb_d6ce][d_61eb_d6d0] = d_432e_37f6[0][d_61eb_d6ce][d_61eb_d6d0] + 1;
        d_432e_37f6[2][d_61eb_d6ce][d_61eb_d6d0] = d_432e_37f6[2][d_61eb_d6ce][d_61eb_d6d0] + 1;
        d_432e_37f6[4][d_61eb_d6ce][d_61eb_d6d0] = d_432e_37f6[4][d_61eb_d6ce][d_61eb_d6d0] + d;
        d_432e_37f6[5][d_61eb_d6ce][d_61eb_d6d0] = d_432e_37f6[5][d_61eb_d6ce][d_61eb_d6d0] + c;
    } else if (f_1a83_277e(d_61eb_d5a2, d_61eb_d5c2 + 1) && d_61eb_d5a2 >= 41 && d_61eb_d5a2 <= 83) {
        f_8402_0fc6(a);
        d_432e_36a6[0][d_61eb_d6ce][d_61eb_d6d0] = d_432e_36a6[0][d_61eb_d6ce][d_61eb_d6d0] + 1;
        d_432e_36a6[2][d_61eb_d6ce][d_61eb_d6d0] = d_432e_36a6[2][d_61eb_d6ce][d_61eb_d6d0] + 1;
        d_432e_36a6[4][d_61eb_d6ce][d_61eb_d6d0] = d_432e_36a6[4][d_61eb_d6ce][d_61eb_d6d0] + c;
        d_432e_36a6[5][d_61eb_d6ce][d_61eb_d6d0] = d_432e_36a6[5][d_61eb_d6ce][d_61eb_d6d0] + d;
        f_8402_0fc6(b);
        d_432e_36a6[0][d_61eb_d6ce][d_61eb_d6d0] = d_432e_36a6[0][d_61eb_d6ce][d_61eb_d6d0] + 1;
        d_432e_36a6[2][d_61eb_d6ce][d_61eb_d6d0] = d_432e_36a6[2][d_61eb_d6ce][d_61eb_d6d0] + 1;
        d_432e_36a6[4][d_61eb_d6ce][d_61eb_d6d0] = d_432e_36a6[4][d_61eb_d6ce][d_61eb_d6d0] + d;
        d_432e_36a6[5][d_61eb_d6ce][d_61eb_d6d0] = d_432e_36a6[5][d_61eb_d6ce][d_61eb_d6d0] + c;
    }
}

void f_8402_0fc6(int x)
{
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 1; d_61eb_d5d8++)
        for (d_61eb_d5aa = 0; d_61eb_d5aa <= 3; d_61eb_d5aa++)
            if (d_432e_3696[d_61eb_d5d8][d_61eb_d5aa] == x) {
                d_61eb_d6ce = d_61eb_d5d8;
                d_61eb_d6d0 = d_61eb_d5aa;
                d_61eb_d5aa = 3;
                d_61eb_d5d8 = 1;
            }
}

void f_8402_102a(int x)
{
    unsigned char rows;
    unsigned char cols;

    rows = d_61eb_d5a2 <= 29 ? 6 : 4;
    cols = d_61eb_d5a2 <= 29 ? 3 : 4;
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= rows - 1; d_61eb_d5d8++)
        for (d_61eb_d5aa = 0; d_61eb_d5aa <= cols - 1; d_61eb_d5aa++)
            if (d_432e_36d6[d_61eb_d5d8][d_61eb_d5aa] == x) {
                d_61eb_d6ce = d_61eb_d5d8;
                d_61eb_d6d0 = d_61eb_d5aa;
                d_61eb_d5aa = cols - 1;
                d_61eb_d5d8 = rows - 1;
            }
}

void f_8402_10b8(int team, long amount, long z)
{
    if (team < 38) {
        d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
        d_61eb_dbc0->v[team] += amount;
        f_8402_1106(team, z);
    }
}

void f_8402_1106(int team, int amount)
{
    d_61eb_dbb0 = f_215d_1629(d_61eb_dc4a, 1);
    d_61eb_dbb0[d_3334_ca6e[team]] += amount / 50 * 50;
    d_61eb_dbbc = f_215d_1629(d_61eb_dc50, 1);
    ((int far *)(d_61eb_dbbc + 2600))[d_3334_ca6e[team]] += amount / 50 * 50;
}

void f_8402_1191(void)
{
    unsigned char far *p;
    unsigned char old;
    char gap;
    int i;
    int n;
    char buf[320];

    for (d_61eb_d5d4 = 0; d_61eb_d5d4 <= 37; d_61eb_d5d4++) {
        d_61eb_d5de = d_432e_0640[d_61eb_d5d4];
        old = d_3334_bf6a[d_61eb_d5de];
        d_3334_bf6a[d_61eb_d5de] = 2;
        p = d_61eb_2cd2;
        for (i = 1; i <= 5; i++) {
            d_61eb_d5fc = *p;
            p++;
            d_61eb_d612 = *p;
            p++;
            gap = d_61eb_d5fc <= 17 ? 34 - d_61eb_d59a : 38 - d_61eb_d59c;
            if (d_61eb_d5d4 == d_61eb_d5fc) {
                if (f_9f8d_0000(d_61eb_d612) + gap * 2 < f_9f8d_0000(d_61eb_d5d4) || d_61eb_d5a2 >= 96) {
                    d_3334_bf6a[d_61eb_d5de] = d_61eb_d5fc == 0 ? 4 : 3;
                    i = 5;
                }
            }
        }
        p = d_61eb_2cdc;
        for (i = 1; i <= 8; i++) {
            d_61eb_d5fc = *p;
            p++;
            d_61eb_d612 = *p;
            p++;
            gap = d_61eb_d5fc <= 17 ? 34 - d_61eb_d59a : 38 - d_61eb_d59c;
            if (d_61eb_d5d4 == d_61eb_d5fc) {
                if (f_9f8d_0000(d_61eb_d5d4) + gap * 2 < f_9f8d_0000(d_61eb_d612) || (d_61eb_dba3 == 0 ? 96 : 97) <= d_61eb_d5a2) {
                    d_3334_bf6a[d_61eb_d5de] = 1;
                    i = 8;
                }
            }
        }
        if (old == 2) {
            if (d_3334_bf6a[d_61eb_d5de] > 2) {
                n = d_3334_bf6a[d_61eb_d5de] == 4 ? 2 : 1;
                switch (f_1a83_6d8b(d_61eb_d5de)) {
                case 0:
                    f_8402_10b8(d_61eb_d5de, n * 125000L, 10000L);
                    break;
                case 1:
                    f_8402_10b8(d_61eb_d5de, (long)(n * 12500), 5000L);
                    break;
                }
                if (f_1a83_2ad4(d_61eb_d5de)) {
                    if (d_61eb_d5d4 == 0)
                        strcpy(buf, "Champions!  A great performance.");
                    else
                        strcpy(buf, "Promotion!  A successful season.");
                    f_93a1_172a(d_61eb_d5de, buf);
                }
            } else if (d_3334_bf6a[d_61eb_d5de] == 1) {
                if (f_1a83_2ad4(d_61eb_d5de)) {
                    if (d_61eb_d5d4 == 17)
                        strcpy(buf, "Relegation to Serie B.  You prat.");
                    else
                        strcpy(buf, "Relegation to Serie C.  Very poor.");
                    f_93a1_172a(d_61eb_d5de, buf);
                }
                f_8402_14c0(d_61eb_d5de, -10);
            }
        }
        if (d_61eb_d5d4 < 18 && d_61eb_d59a <= 34) {
            if (d_61eb_d59a == 34)
                f_93a1_5e04(0, d_432e_0640[0], d_432e_0640[1]);
            d_3334_c122[d_61eb_d59a][d_61eb_d5de] = d_61eb_d5d4 + 1;
        } else if (d_61eb_d5d4 >= 18 && d_61eb_d59c <= 38)
            d_3334_c122[d_61eb_d59c][d_61eb_d5de] = d_61eb_d5d4 - 17;
    }
}

void f_8402_14c0(int team, int delta)
{
    if (d_3334_caba[team] < 650) {
        if (d_3334_bf6a[team] < 3 || delta > 0) {
            if (d_3334_d3f6[d_3334_ca6e[team]] < 10)
                d_3334_bea2[team] = f_215d_1343(f_215d_13af(d_3334_bea2[team] + delta, 100), 0);
        }
    }
}

/* the name of the competition the match of week b is in, and for a cup the round
 * (CM94's f_8c32_1592) */
void f_8402_1543(int team, int b, int c)
{
    if (f_1a83_2387(team) || f_1a83_2448(team)) {
        if (c < 18)
            strcpy(d_432e_cab7, "Serie A");
        else
            strcpy(d_432e_cab7, "Serie B");
    } else if (f_1a83_247b(team)) {
        strcpy(d_432e_cab7, "Italian Cup");
        f_8402_16ae(team, 0x47, 0x4d);
        f_8402_1708(team, 0x62, 0x64);
    } else if (f_1a83_280b(team, b)) {
        strcpy(d_432e_cab7, "Ang/Ita Cup");
        f_8402_16ae(team, 0x3d, 0x41);
        f_8402_1708(team, 0x4b, -1);
    } else if (f_1a83_2644(team, b)) {
        strcpy(d_432e_cab7, "UEFA Cup");
        f_8402_16ae(team, 0x4f, 0x53);
        f_8402_1708(team, 0x57, 0x5b);
    } else if (f_1a83_26ed(team, b)) {
        strcpy(d_432e_cab7, "C/Winners Cup");
        f_8402_16ae(team, 0x4f, 0x53);
        f_8402_1708(team, 0x59, -1);
    } else if (f_1a83_277e(team, b)) {
        strcpy(d_432e_cab7, "European Cup");
        f_8402_1708(team, 0x5d, -1);
    } else if (f_1a83_29a3(team))
        strcpy(d_432e_cab7, "Playoff");
    else if (team < 12)
        strcpy(d_432e_cab7, "Friendly");
}

void f_8402_16ae(int t, int a, int b)
{
    if (t == a || t == b) {
        if (strlen(d_432e_cab7) + 11 <= 19)
            strcat(d_432e_cab7, " Semi-Final");
        else if (strlen(d_432e_cab7) + 5 <= 19)
            strcat(d_432e_cab7, " Semi");
    }
}

void f_8402_1708(int t, int a, int b)
{
    if (t == a || t == b) {
        if (strlen(d_432e_cab7) + 6 <= 19)
            strcat(d_432e_cab7, " Final");
    }
}

void f_8402_1746(void)
{
    unsigned char i;

    switch (d_61eb_d5a2) {
    case 1:
        f_8402_2503(6, 1, 0x20, 0x15, 0x19);
        f_8402_2503(5, 0x21, 0x40, 0x15, 0x19);
        f_8402_2503(4, 0x41, 0x80, 0x15, 0x19);
        for (i = 0; i <= 21; i++)
            d_432e_0000[1][i] = i + 16;
        for (i = 22; i <= 31; i++)
            d_432e_0000[1][i] = i + 416;
        for (i = 32; i <= 47; i++)
            d_432e_0000[1][i] = i - 32;
        f_8402_2503(1, 1, 0x20, 0xe, -1);
        f_8402_1d8c();
        f_18f9_16c8();
        f_18f9_171b();
        f_18f9_176e();
        f_18f9_17c1();
        f_18f9_1814();
        break;
    case 14:
        for (d_61eb_d5dc = 16; d_61eb_d5dc <= 31; d_61eb_d5dc++)
            d_432e_0000[1][d_61eb_d5dc] = d_432e_0000[1][d_61eb_d5dc + 16];
        f_8402_2503(1, 1, 0x20, 0xf, 0x11);
        break;
    case 17:
        f_8402_2503(1, 1, 0x10, 0x1b, 0x21);
        break;
    case 25:
        f_8402_2503(6, 1, 0x10, 0x1f, 0x23);
        f_8402_2503(5, 0x11, 0x20, 0x1f, 0x23);
        f_8402_2503(4, 0x21, 0x40, 0x1f, 0x23);
        break;
    case 29:
        f_8402_1ffc();
        break;
    case 33:
        f_8402_2503(1, 1, 8, 0x3b, 0x3f);
        break;
    case 35:
        f_8402_1b3b();
        f_8402_2503(5, 9, 0x10, 0x45, 0x49);
        f_8402_2503(4, 9, 0x18, 0x29, 0x2d);
        break;
    case 45:
        f_8402_2503(4, 0x11, 0x18, 0x45, 0x49);
        break;
    case 47:
        f_8402_2503(3, 1, 4, 0x3d, 0x41);
        break;
    case 63:
        f_8402_2503(1, 1, 4, 0x47, 0x4d);
        break;
    case 65:
        d_53fc_11fc[1][0][75] = d_432e_0000[3][0] << 5;
        d_53fc_11fc[1][1][75] = d_432e_0000[3][1] << 5;
        f_93a1_4636(d_432e_0000[3][0], 3, 75);
        f_93a1_4636(d_432e_0000[3][1], 3, 75);
        break;
    case 73:
        f_8402_2503(5, 9, 0xc, 0x4f, 0x53);
        f_8402_2503(4, 0xd, 0x10, 0x4f, 0x53);
        break;
    case 77:
        d_53fc_11fc[1][0][98] = d_432e_0000[1][0] << 5;
        d_53fc_11fc[1][1][98] = d_432e_0000[1][1] << 5;
        f_93a1_4636(d_432e_0000[1][0], 1, 98);
        f_93a1_4636(d_432e_0000[1][1], 1, 98);
        d_53fc_11fc[1][0][100] = d_53fc_11fc[1][1][98];
        d_53fc_11fc[1][1][100] = d_53fc_11fc[1][0][98];
        break;
    case 83:
        d_53fc_11fc[1][0][93] = d_432e_0000[6][0] << 5;
        d_53fc_11fc[1][1][93] = d_432e_0000[6][1] << 5;
        f_93a1_4636(d_432e_0000[6][0], 6, 93);
        f_93a1_4636(d_432e_0000[6][1], 6, 93);
        d_53fc_11fc[1][0][89] = d_432e_0000[5][0] << 5;
        d_53fc_11fc[1][1][89] = d_432e_0000[5][1] << 5;
        f_93a1_4636(d_432e_0000[5][0], 5, 89);
        f_93a1_4636(d_432e_0000[5][1], 5, 89);
        d_53fc_11fc[1][0][87] = d_432e_0000[4][0] << 5;
        d_53fc_11fc[1][1][87] = d_432e_0000[4][1] << 5;
        f_93a1_4636(d_432e_0000[4][0], 4, 87);
        f_93a1_4636(d_432e_0000[4][1], 4, 87);
        d_53fc_11fc[1][0][91] = d_53fc_11fc[1][1][87];
        d_53fc_11fc[1][1][91] = d_53fc_11fc[1][0][87];
        break;
    }
}

void f_8402_1b3b(void)
{
    unsigned char far *p;
    unsigned char a;
    unsigned char b;
    unsigned char c;
    char first;
    char second;

    first = 0;
    second = 0;
    for (d_61eb_d5dc = 0; d_61eb_d5dc < 38; d_61eb_d5dc++)
        d_432e_b81f[d_61eb_d5dc] = 0;
    for (d_61eb_d7b8 = 0; d_61eb_d7b8 <= 7; d_61eb_d7b8++) {
        if (d_61eb_d7b8 < 4) {
            d_432e_3696[0][d_61eb_d7b8] = d_432e_0000[6][d_61eb_d7b8];
            if (f_1a83_2ad4(d_432e_0000[6][d_61eb_d7b8]))
                first = -1;
        } else {
            d_432e_3696[0][d_61eb_d7b8] = d_432e_0000[6][d_61eb_d7b8];
            if (f_1a83_2ad4(d_432e_0000[6][d_61eb_d7b8]))
                second = -1;
        }
        if (d_432e_0000[6][d_61eb_d7b8] < 38)
            d_432e_b81f[d_432e_0000[6][d_61eb_d7b8]] = -1;
    }
    memset(d_432e_36a6, 0, 0x30);
    p = d_61eb_2cec;
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 5; d_61eb_d5aa++) {
        a = *p++;
        for (d_61eb_d5f0 = 0; d_61eb_d5f0 <= 1; d_61eb_d5f0++) {
            b = *p++;
            c = *p++;
            for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 1; d_61eb_d5d8++) {
                d_53fc_11fc[d_61eb_d5f0 + d_61eb_d5d8 * 2 + 1][0][a] = d_432e_3696[d_61eb_d5d8][b - 1] << 5;
                d_53fc_11fc[d_61eb_d5f0 + d_61eb_d5d8 * 2 + 1][1][a] = d_432e_3696[d_61eb_d5d8][c - 1] << 5;
            }
        }
    }
    if (first)
        f_8402_2326(0);
    if (second)
        f_8402_2326(1);
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 1; d_61eb_d5aa++)
        for (d_61eb_d5f0 = 0; d_61eb_d5f0 <= 3; d_61eb_d5f0++)
            f_93a1_4636(d_432e_3696[d_61eb_d5aa][d_61eb_d5f0], 6, 41);
}

void f_8402_1d8c(void)
{
    int col, row;
    int a, b;
    char used[6];
    unsigned char far *p;
    char taken[540];

    memset(taken, 0, 540);
    memset(used, 0, 6);
    for (d_61eb_d5dc = 0; d_61eb_d5dc < 38; d_61eb_d5dc++)
        d_432e_b7ad[d_61eb_d5dc] = 0;
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 5; d_61eb_d5d8++) {
        for (d_61eb_d5aa = 0; d_61eb_d5aa <= 2; d_61eb_d5aa++) {
            do
                d_61eb_d5dc = f_215d_0d96(20) + 18;
            while (taken[d_61eb_d5dc] != 0);
            taken[d_61eb_d5dc] = -1;
            if (f_9f8d_0305(d_61eb_d5dc)) {
                do
                    ;
                while (f_9f8d_0305(d_61eb_d5dc = f_215d_0d96(18)));
                taken[d_61eb_d5dc] = -1;
            }
            if (d_61eb_d5dc < 38)
                d_432e_b7ad[d_61eb_d5dc] = -1;
            d_432e_36d6[d_61eb_d5d8][d_61eb_d5aa] = d_61eb_d5dc;
            if (f_1a83_2ad4(d_61eb_d5dc))
                used[d_61eb_d5d8] = -1;
        }
    }
    memset(d_432e_37f6, 0, 180);
    p = d_61eb_2d0a;
    for (d_61eb_d5aa = 1; d_61eb_d5aa <= 3; d_61eb_d5aa++) {
        col = *p++;
        row = *p++;
        a = *p++;
        b = *p++;
        for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 5; d_61eb_d5d8++) {
            d_53fc_11fc[row + d_61eb_d5d8][0][col] = d_432e_36d6[d_61eb_d5d8][a - 1] << 5;
            d_53fc_138e[row + d_61eb_d5d8 - 1][1][col - 1] = d_432e_36d6[d_61eb_d5d8][b - 1] << 5;
        }
    }
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 5; d_61eb_d5d8++)
        if (used[d_61eb_d5d8])
            f_8402_23f7(d_61eb_d5d8);
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 5; d_61eb_d5d8++)
        for (d_61eb_d5aa = 0; d_61eb_d5aa <= 2; d_61eb_d5aa++)
            f_93a1_4636(d_432e_36d6[d_61eb_d5d8][d_61eb_d5aa], 3, 19);
}

void f_8402_1ffc(void)
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
    for (d_61eb_d5dc = 0; d_61eb_d5dc < 38; d_61eb_d5dc++)
        d_432e_b7ad[d_61eb_d5dc] = 0;
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 3; d_61eb_d5d8++) {
        d_432e_36d6[0][d_61eb_d5d8] = d_432e_0000[3][d_61eb_d5d8];
        if (f_1a83_2ad4(d_432e_0000[3][d_61eb_d5d8]))
            used[0] = -1;
        if (d_432e_0000[3][d_61eb_d5d8] < 38)
            d_432e_b7ad[d_432e_0000[3][d_61eb_d5d8]] = -1;
        d_432e_36d6[1][d_61eb_d5d8] = d_432e_0000[3][d_61eb_d5d8 + 8];
        d_432e_36d6[2][d_61eb_d5d8] = d_432e_0000[3][d_61eb_d5d8 + 4];
        if (f_1a83_2ad4(d_432e_0000[3][d_61eb_d5d8 + 4]))
            used[2] = -1;
        if (d_432e_0000[3][d_61eb_d5d8 + 4] < 38)
            d_432e_b7ad[d_432e_0000[3][d_61eb_d5d8 + 4]] = -1;
        d_432e_36d6[3][d_61eb_d5d8] = d_432e_0000[3][d_61eb_d5d8 + 12];
    }
    memset(d_432e_37f6, 0, 180);
    p = d_61eb_2d16;
    for (d_61eb_d5d8 = 1; d_61eb_d5d8 <= 4; d_61eb_d5d8++) {
        col = *p++;
        row = *p++;
        for (d_61eb_d5aa = 1; d_61eb_d5aa <= 4; d_61eb_d5aa++) {
            a = *p++;
            b = *p++;
            c = *p++;
            d = *p++;
            d_53fc_11fc[row][0][col] = d_432e_36d6[a][b] << 5;
            d_53fc_138e[row - 1][1][col - 1] = d_432e_36d6[c][d] << 5;
            d_53fc_11fc[row + 4][0][col] = d_432e_36d6[a + 2][b] << 5;
            d_53fc_11fc[row + 4][1][col] = d_432e_36d6[c + 2][d] << 5;
            row++;
        }
    }
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 3; d_61eb_d5d8++)
        if (used[d_61eb_d5d8])
            f_8402_23f7(d_61eb_d5d8);
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 3; d_61eb_d5d8++)
        for (d_61eb_d5aa = 0; d_61eb_d5aa <= 3; d_61eb_d5aa++)
            if (d_61eb_d5d8 % 2 == 0)
                f_93a1_4636(d_432e_36d6[d_61eb_d5d8][d_61eb_d5aa], 3, 37);
}

void f_8402_2326(int g)
{
    char buf[320];

    f_1a83_48f9("European Cup");
    sprintf(buf, "Group %c Qualifiers", g + 'A');
    f_1a83_3a43(-1.0, 8.0, 2, buf);
    for (d_61eb_d5dc = 0; d_61eb_d5dc <= 3; d_61eb_d5dc++)
        f_1a83_3a43(-1.0, d_61eb_d5dc * 2 + 10, f_1a83_2ad4(d_432e_3696[g][d_61eb_d5dc]) * 5 + 6, f_1a83_3300(d_432e_3696[g][d_61eb_d5dc]));
    f_1a83_5540(0);
}

void f_8402_23f7(int g)
{
    unsigned char n;
    char buf[30];

    n = d_61eb_d5a2 <= 29 ? 3 : 4;
    f_1a83_48f9("Anglo-Italian Cup");
    if (d_61eb_d5a2 <= 29)
        sprintf(buf, "Group %c Qualifiers", g + 'A');
    else
        sprintf(buf, "International Group %c", g / 2 + 'A');
    f_1a83_3a43(-1, 7, 2, buf);
    for (d_61eb_d5dc = 0; d_61eb_d5dc <= n - 1; d_61eb_d5dc++)
        f_1a83_3a43(-1, (n == 4 ? 10 : 11) + d_61eb_d5dc * 2, f_1a83_2ad4(d_432e_36d6[g][d_61eb_d5dc]) * 5 + 6, f_1a83_3300(d_432e_36d6[g][d_61eb_d5dc]));
    f_1a83_5540(0);
}

void f_8402_2503(int comp, int first, int last, int week, int other)
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
    for (d_61eb_d5dc = 0; d_61eb_d5dc <= 37; d_61eb_d5dc++)
        d_432e_b73b[comp][d_61eb_d5dc] = 0;
    d_61eb_d658 = (last - first + 1) / 2;
    half = (first - 1) / 2;
    count = 0;
    if (comp >= 4 && comp <= 6)
        for (d_61eb_d7b6 = 0; d_61eb_d7b6 <= d_61eb_d658 * 2 - 1; d_61eb_d7b6++)
            if (d_432e_31aa[d_432e_0000[comp][d_61eb_d7b6]] > 0)
                count++;
    random = comp != 3 || week != 61 ? -1 : 0;
    d_61eb_d5aa = -1;
    for (d_61eb_d5d8 = half; d_61eb_d5d8 <= half + d_61eb_d658 - 1; d_61eb_d5d8++) {
        flag = count > 0 && d_61eb_d658 > 4;
        for (d_61eb_d674 = 0; d_61eb_d674 <= 1; d_61eb_d674++) {
            do {
                do
                    d_61eb_d5aa = random ? f_215d_0d96(d_61eb_d658 * 2) : d_61eb_d5aa + 1;
                while (used[d_61eb_d5aa] != 0);
                ok = -1;
                if (flag && d_61eb_d674 == 1
                    && d_432e_31aa[d_432e_0000[comp][d_61eb_d5aa]] == d_432e_31aa[d_61eb_d666])
                    ok = 0;
            } while (!ok);
            d_53fc_11fc[d_61eb_d5d8 + 1][d_61eb_d674][week] = d_432e_0000[comp][d_61eb_d5aa] << 5;
            if (other != -1)
                d_53fc_11fc[d_61eb_d5d8 + 1][1 - d_61eb_d674][other] = d_432e_0000[comp][d_61eb_d5aa] << 5;
            if (d_61eb_d674 == 0)
                d_61eb_d666 = d_432e_0000[comp][d_61eb_d5aa];
            else
                d_61eb_d668 = d_432e_0000[comp][d_61eb_d5aa];
            used[d_61eb_d5aa] = -1;
            if (count > 0 && d_432e_31aa[d_432e_0000[comp][d_61eb_d5aa]] > 0)
                count--;
        }
        d_61eb_d9cb = f_1a83_2ad4(d_61eb_d666);
        if (d_61eb_d9cb == 0)
            d_61eb_d9cb = f_1a83_2ad4(d_61eb_d668);
        if (d_61eb_d666 < 38)
            d_432e_b73b[comp][d_61eb_d666] = -1;
        if (d_61eb_d668 < 38)
            d_432e_b73b[comp][d_61eb_d668] = -1;
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
        if (d_61eb_d9cb) {
            f_1a83_48f9("");
            sprintf(buf, "%s draw:", name);
            f_1a83_3a43(-1, 10, 2, buf);
            sprintf(buf, "%s v %s", f_215d_1043(f_1a83_3300(d_61eb_d666)), f_215d_1043(f_1a83_3300(d_61eb_d668)));
            f_1a83_3a43(-1, 12, 6, buf);
            w = f_1a83_66e8(week);
            if (week % 2 == 1)
                sprintf(buf, "Week %d Midweek", w);
            else
                sprintf(buf, "Week %d", w);
            f_1a83_3a43(-1, 14, 3, buf);
            f_1a83_5540(0);
        }
        f_93a1_4636(d_61eb_d666, comp, week);
        f_93a1_4636(d_61eb_d668, comp, week);
    }
}

void f_8402_2934(void)
{
    int far *p;
    int c[30];
    int b[30];
    int a[30];
    char used[1000];
    int j;
    int i;
    int n;
    int k = 78;

    memset(used, 0, sizeof used);
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 15; d_61eb_d5d8++) {
        d_3334_feb8[d_61eb_d5d8] = 1499;
        d_3334_fed8[d_61eb_d5d8] = 1499;
    }
    for (d_61eb_d612 = 4; d_61eb_d612 <= 6; d_61eb_d612++)
        for (d_61eb_d7b6 = 0; d_61eb_d7b6 <= (d_61eb_d612 == 4 ? 3 : 1); d_61eb_d7b6++)
        {
            int t = d_432e_0000[d_61eb_d612][d_61eb_d7b6];

            if (t > 37)
                used[t - 38] = -1;
        }
    p = d_61eb_2d5e;
    for (d_61eb_d5d8 = 1; d_61eb_d5d8 <= 30; d_61eb_d5d8++) {
        d_61eb_d65c = *p;
        p++;
        d_61eb_d65e = *p;
        p++;
        d_61eb_d6aa = *p;
        p++;
        a[d_61eb_d5d8 - 1] = d_61eb_d65c;
        b[d_61eb_d5d8 - 1] = d_61eb_d65e;
        c[d_61eb_d5d8 - 1] = d_61eb_d6aa;
        for (d_61eb_d5aa = d_61eb_d65c; d_61eb_d5aa <= d_61eb_d65e - 1; d_61eb_d5aa++)
            for (d_61eb_d5f0 = d_61eb_d5aa + 1; d_61eb_d5f0 <= d_61eb_d65e; d_61eb_d5f0++) {
                unsigned char r;

                if (d_61eb_d65c == 51 && d_61eb_d5a4 == 1)
                    r = 1;
                else
                    r = f_215d_0d96(2) + 2;
                if (d_53fc_09c0[0][d_61eb_d5aa - 1] + f_215d_0d96(r) - f_215d_0d96(r) <
                    d_53fc_09c0[0][d_61eb_d5f0 - 1] + f_215d_0d96(r) - f_215d_0d96(r)) {
                    f_215d_13f1((void *)&d_61eb_b18a[d_61eb_d5aa], (void *)&d_61eb_b18a[d_61eb_d5f0], 2);
                    f_215d_13f1((void *)&used[d_61eb_d5aa - 1], (void *)&used[d_61eb_d5f0 - 1], 1);
                    for (d_61eb_d674 = 0; d_61eb_d674 <= 4; d_61eb_d674++)
                        f_215d_13f1(&(d_53fc_09c0[0] - 1)[d_61eb_d674 * 502 + d_61eb_d5aa], &(d_53fc_09c0[0] - 1)[d_61eb_d674 * 502 + d_61eb_d5f0], 1);
                    f_9a9e_45df(d_61eb_d5aa + 37, d_61eb_d5f0 + 37);
                    for (d_61eb_d612 = 1; d_61eb_d612 <= 6; d_61eb_d612++)
                        for (d_61eb_d774 = 0; d_61eb_d774 <= 63; d_61eb_d774++) {
                            if (d_432e_0000[d_61eb_d612][d_61eb_d774] == d_61eb_d5aa + 37)
                                d_432e_0000[d_61eb_d612][d_61eb_d774] = d_61eb_d5f0 + 37;
                            else if (d_432e_0000[d_61eb_d612][d_61eb_d774] == d_61eb_d5f0 + 37)
                                d_432e_0000[d_61eb_d612][d_61eb_d774] = d_61eb_d5aa + 37;
                        }
                }
            }
    }
    for (d_61eb_d612 = 6; d_61eb_d612 >= 5; d_61eb_d612--)
        for (d_61eb_d7b8 = 2; d_61eb_d7b8 <= 31; d_61eb_d7b8++) {
            while (used[a[d_61eb_d7b8 - 2] - 1])
                a[d_61eb_d7b8 - 2]++;
            d_432e_0000[d_61eb_d612][d_61eb_d7b8] = a[d_61eb_d7b8 - 2] + 37;
            used[a[d_61eb_d7b8 - 2] - 1] = -1;
            a[d_61eb_d7b8 - 2]++;
        }
    j = 4;
    for (d_61eb_d7ba = 0; d_61eb_d7ba <= 29; d_61eb_d7ba++)
        for (n = 1; n <= c[d_61eb_d7ba]; n++) {
            while (used[a[d_61eb_d7ba] - 1])
                a[d_61eb_d7ba]++;
            d_432e_0000[4][j] = a[d_61eb_d7ba] + 37;
            used[a[d_61eb_d7ba] - 1] = -1;
            j++;
            a[d_61eb_d7ba]++;
        }
    for (n = 1; n <= 8; n++) {
        while (used[k - 1])
            k--;
        d_432e_0000[3][n + 7] = k + 37;
        used[k - 1] = -1;
    }
    for (i = 0; i <= 9; i++) {
        do {
            d_61eb_d5dc = f_215d_0d96(102);
        } while (used[d_61eb_d5dc + 400] != 0);
        d_432e_0000[1][i] = d_61eb_d5dc + 438;
        used[d_61eb_d5dc + 400] = -1;
    }
}

void f_8402_2e7f(void)
{
    char buf[320];
    int best = 0;

    memset(d_432e_31aa, 0, 540);
    for (d_61eb_d612 = 4; d_61eb_d612 <= 6; d_61eb_d612++)
        for (d_61eb_d614 = 1; d_61eb_d614 <= 8; d_61eb_d614++) {
            d_61eb_d5de = -1;
            for (d_61eb_d7bc = 0; d_61eb_d7bc <= (d_61eb_d612 == 4 ? 63 : 31); d_61eb_d7bc++) {
                d_61eb_d5dc = d_432e_0000[d_61eb_d612][d_61eb_d7bc];
                d_61eb_d7be = f_1a83_2b0c(d_61eb_d5dc) + (d_61eb_d5dc < 18);
                if (d_432e_31aa[d_61eb_d5dc] == 0 && (d_61eb_d7be > best || d_61eb_d5de == -1)) {
                    best = d_61eb_d7be;
                    d_61eb_d5de = d_61eb_d5dc;
                }
            }
            d_432e_31aa[d_61eb_d5de] = d_61eb_d612;
            if (f_1a83_2ad4(d_61eb_d5de)) {
                if (d_61eb_d612 == 4)
                    strcpy(d_432e_c085, "UEFA");
                else if (d_61eb_d612 == 5)
                    strcpy(d_432e_c085, "Cup Winners");
                else
                    strcpy(d_432e_c085, "European");
                sprintf(buf, "%s have been seeded|in the %s cup", (char far *)d_61eb_b0ec[d_61eb_d5de], d_432e_c085);
                f_1a83_0bb7(buf);
            }
        }
}

void f_8402_2fea(void)
{
    char used[540];

    memset(used, 0, sizeof used);
    for (d_61eb_d612 = 6; d_61eb_d612 >= 4; d_61eb_d612--) {
        do {
            d_61eb_d5de = f_215d_0d96(400) + 38;
        } while (used[d_61eb_d5de] != 0 || d_53fc_099a[d_61eb_d5de] <= 16);
        d_432e_0000[d_61eb_d612][0] = d_61eb_d5de;
        used[d_61eb_d5de] = -1;
        for (d_61eb_d7bc = 1; d_61eb_d7bc <= (d_61eb_d612 == 4 ? 3 : 1); d_61eb_d7bc++) {
            d_61eb_d5de = -1;
            for (d_61eb_d5dc = 0; d_61eb_d5dc <= 17; d_61eb_d5dc++) {
                if (used[d_61eb_d5dc] == 0 && f_1a83_2ad4(d_61eb_d5dc) == 0) {
                    d_61eb_d75e = d_61eb_d612 == 5 ? 4 : 2;
                    d_61eb_d7be = f_1a83_2b0c(d_61eb_d5dc) + f_215d_0d96(d_61eb_d75e) - f_215d_0d96(d_61eb_d75e);
                    if (d_61eb_d7be > d_61eb_d5e6 || d_61eb_d5de == -1) {
                        d_61eb_d5de = d_61eb_d5dc;
                        d_61eb_d5e6 = d_61eb_d7be;
                    }
                }
            }
            d_432e_0000[d_61eb_d612][d_61eb_d7bc] = d_61eb_d5de;
            used[d_61eb_d5de] = -1;
        }
    }
}

void f_8402_3185(void)
{
    for (d_61eb_d674 = 0; d_61eb_d674 <= 1; d_61eb_d674++)
        for (d_61eb_d5aa = d_61eb_d674 * 18; d_61eb_d5aa <= d_61eb_d674 * 18 + f_1a83_6d76(d_61eb_d674) - 2; d_61eb_d5aa++)
            for (d_61eb_d5f0 = d_61eb_d5aa + 1; d_61eb_d5f0 <= d_61eb_d674 * 18 + f_1a83_6d76(d_61eb_d674) - 1; d_61eb_d5f0++) {
                d_61eb_d7c0 = f_9f8d_0000(d_61eb_d5aa);
                d_61eb_d7c2 = f_9f8d_0000(d_61eb_d5f0);
                d_61eb_d7c4 = d_3334_bfe2[d_432e_0640[d_61eb_d5aa]];
                d_61eb_d7c6 = d_3334_bfe2[d_432e_0640[d_61eb_d5f0]];
                d_61eb_d702 = d_3334_c00a[d_432e_0640[d_61eb_d5aa]];
                d_61eb_d704 = d_3334_c00a[d_432e_0640[d_61eb_d5f0]];
                if (d_61eb_d7c0 < d_61eb_d7c2 ||
                    (d_61eb_d7c0 == d_61eb_d7c2 && d_61eb_d7c4 - d_61eb_d702 < d_61eb_d7c6 - d_61eb_d704) ||
                    (d_61eb_d7c0 == d_61eb_d7c2 && d_61eb_d7c4 - d_61eb_d702 == d_61eb_d7c6 - d_61eb_d704 &&
                     d_61eb_d7c4 < d_61eb_d7c6))
                    f_215d_13f1(&d_432e_0640[d_61eb_d5aa], &d_432e_0640[d_61eb_d5f0], 1);
            }
}

void f_8402_3307(void)
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
        if (f_9f8d_0000(a) == f_9f8d_0000(b)) {
            for (lo = a; f_9f8d_0000(lo) == f_9f8d_0000(lo - 1) && lo > 0; lo--)
                ;
            for (hi = b; f_9f8d_0000(hi) == f_9f8d_0000(hi + 1) && hi < (a <= 17 ? 17 : 37); hi++)
                ;
            n = hi - lo + 1;
            memset(d_61eb_dbec, 0, 80);
            for (i = 0; i <= n - 1; i++)
                d_61eb_dbec[i].team = d_432e_0640[lo + i];
            for (g = 1; g <= (d_61eb_d5a2 <= 100 ? d_61eb_d5a2 : 100); g = g + 1) {
                if (f_1a83_2387(g) || f_1a83_2448(g)) {
                    for (w = 1; w <= 64; w = w + 1) {
                        h = d_53fc_138c[w - 1][0][g] / 32;
                        v = d_53fc_138c[w - 1][1][g] / 32;
                        hx = ax = 255;
                        for (i = 0; i <= n - 1; i++) {
                            if (d_61eb_dbec[i].team == h)
                                hx = i;
                            else if (d_61eb_dbec[i].team == v)
                                ax = i;
                        }
                        if (hx < 255 && ax < 255) {
                            i = (int)d_53fc_138c[w - 1][0][g] % 32;
                            ag = (int)d_53fc_138c[w - 1][1][g] % 32;
                            if (i > ag)
                                d_61eb_dbec[hx].pts = d_61eb_dbec[hx].pts + 2;
                            else if (i == ag) {
                                d_61eb_dbec[hx].pts++;
                                d_61eb_dbec[ax].pts++;
                            } else
                                d_61eb_dbec[ax].pts = d_61eb_dbec[ax].pts + 2;
                            d_61eb_dbec[hx].f += i;
                            d_61eb_dbec[hx].a += ag;
                            d_61eb_dbec[ax].f += ag;
                            d_61eb_dbec[ax].a += i;
                        }
                    }
                }
            }
            for (j = 0; j <= n - 2; j = j + 1)
                for (k = j + 1; k <= n - 1; k = k + 1)
                    if (d_61eb_dbec[k].pts > d_61eb_dbec[j].pts ||
                        (d_61eb_dbec[k].pts == d_61eb_dbec[j].pts &&
                         d_61eb_dbec[k].f - d_61eb_dbec[k].a > d_61eb_dbec[j].f - d_61eb_dbec[j].a) ||
                        (d_61eb_dbec[k].pts == d_61eb_dbec[j].pts &&
                         d_61eb_dbec[k].f - d_61eb_dbec[k].a == d_61eb_dbec[j].f - d_61eb_dbec[j].a &&
                         d_61eb_dbec[k].f > d_61eb_dbec[j].f))
                        f_215d_13f1(&d_432e_0640[lo + j], &d_432e_0640[lo + k], 1);
            if (d_61eb_d5a2 == 96 && d_61eb_dbec[a - lo].pts == d_61eb_dbec[b - lo].pts &&
                d_61eb_dbec[a - lo].f == d_61eb_dbec[b - lo].f && d_61eb_dbec[a - lo].a == d_61eb_dbec[b - lo].a) {
                if (a == 0)
                    f_8402_38a2(d_432e_0640[0], d_432e_0640[1], 0);
                else if (a == 13)
                    f_8402_38a2(d_432e_0640[13], d_432e_0640[14], 1);
                else if (a == 21)
                    f_8402_38a2(d_432e_0640[21], d_432e_0640[22], 2);
                else if (a == 33)
                    f_8402_38a2(d_432e_0640[33], d_432e_0640[34], 3);
            }
        }
    }
}

void f_8402_38a2(int a, int b, char c)
{
    unsigned char r;

    r = f_215d_0d96(2);
    d_53fc_11fc[d_61eb_dba3 + 1][r][97] = a * 32;
    d_53fc_11fc[d_61eb_dba3 + 1][1 - r][97] = b * 32;
    d_61eb_dba4[d_61eb_dba3] = c;
    d_61eb_dba3++;
}
