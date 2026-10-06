/* @at 8c32:0000 */
/* @data 69da:2ba8 */
/* @module */

/* Overlay 8c32 (CM93's 8683.C, CM1's 7EEB.C): the end of a match and of a season (the
 * result line, the form tables and league tables, promotions and relegations), the cup
 * and European draws and fixtures (FA Cup, Coca-Cola Cup, Anglo-Italian Cup with its
 * groups, the European cups and their seeding), and the week's fixture headings. Its
 * data starts with the cup draw tables (byte pairs and rows walked with a pointer) and
 * the 30 {first, last, count} ranges of the fixture generator. */
#include <stdio.h>
#include <string.h>
#include <mem.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_8c32_0000(void);
void f_8c32_00b2(void);
void f_8c32_06cb(int a, int b, int c, int d);
void f_8c32_0ca4(int a, int b, int c, int d);
void f_8c32_0fba(int x);
void f_8c32_101e(int x);
void f_8c32_10af(int team, long amount, long z);
void f_8c32_10fd(int team, int amount);
void f_8c32_1188(void);
void f_8c32_150f(int team, int delta);
void f_8c32_1592(int team, int b, int c);
void f_8c32_1748(int t, int a, int b);
void f_8c32_17a2(int t, int a, int b);
void f_8c32_17e0(void);
void f_8c32_1cdc(void);
void f_8c32_1f33(void);
void f_8c32_21ac(void);
void f_8c32_24dc(int g);
void f_8c32_25ad(int g);
void f_8c32_26b9(int comp, int first, int last, int week, int other);
void f_8c32_2b5e(void);
void f_8c32_308e(void);
void f_8c32_31f9(void);
void f_8c32_353a(void);
void f_8c32_3589(void);
void f_8c32_36fa(void);

void f_2162_19f6();
char far *f_2162_0f6e(char far *s, unsigned n);
char far *f_1a70_488b(int player);
int f_7dd6_25a6(int week, int n);
char f_1a70_237e(int);
char f_1a70_2490(int);
char f_1a70_24c5(int);
char f_1a70_2a7d(int);
char f_1a70_268e(int, int);
char f_1a70_2737(int, int);
char f_1a70_27c8(int, int);
char f_1a70_2855(int, int);
void f_9c01_45ec(int, int, int, int);
void f_9c01_4549(int, int, int, int);
void f_9c01_468f(int, int, int, int);
void f_9c01_471b(int, int, int, int);
void f_9c01_4820(int, int, int);
void f_9c01_606c(int, int, int);
void f_b8da_027a(int, int, char, char);
extern int d_69da_d9bc;
extern int d_69da_da52;
extern int d_69da_dab8;
extern int d_69da_d996;
extern int d_69da_da66;
extern char d_69da_dddc;
extern char d_69da_ddda;
extern char d_69da_ddd9;
extern char d_69da_ddc0;
extern int d_69da_db06;
extern int d_69da_db08;
extern int d_69da_da60;
extern int d_69da_da62;
extern int d_69da_dab0;
extern int d_69da_daae;
extern int d_69da_df11;
extern int d_69da_df13;
extern int d_69da_da68;
extern int d_69da_da6a;
extern int d_69da_db02;
extern int d_69da_db04;
extern int d_69da_d99c;
extern int d_69da_d99e;
extern int d_69da_d9a2;
extern int d_69da_d9a4;
extern int d_69da_d9a6;
extern int d_69da_d9a8;
extern int d_69da_d9b2;
extern int d_69da_d9b0;
extern int d_69da_da0a;
extern int d_69da_d9b4;
extern int d_69da_d9b6;
extern int d_69da_d9b8;
extern int d_69da_daca;
extern int d_69da_dac8;
extern char near *d_69da_b1fc[];
extern char far d_536d_a475[];
extern char far d_536d_3101[][155];
extern char far d_4512_5455[][154];
extern char far d_536d_601d[];
extern char far d_536d_83b9[][82][5];
extern unsigned char far d_4512_a2c0[][6][5];
extern unsigned char far d_4512_a074[][2][4];
extern char far d_28da_263c[];
extern unsigned char far d_4512_0000[][82];
extern int far d_4512_5ec4[][80];
extern int far d_4512_5ec6[][80];
void far *f_2162_1634(int handle, int page);
int f_2162_13ba(int a, int b);
int f_2162_134e(int a, int b);
int f_a83a_0000(int x);
char f_1a70_2bc7(int);
void f_9c01_1720(int team, char far *s);
extern int d_69da_d9d2;
extern int d_69da_d9a0;
extern int d_69da_dff0;
extern int d_69da_dfee;
extern int d_69da_dfe8;
struct s_a01a { long pad[400]; long v[80]; };
extern struct s_a01a far *d_69da_dfae;
extern long far *d_69da_df9e;
extern char far *d_69da_dfaa;
extern int d_69da_d9ce;
extern int d_69da_d9d8;
extern int d_69da_d9f6;
extern int d_69da_da0c;
extern int d_69da_d9ba;
extern int far d_4512_a064[][4];
extern int far d_4512_a0a4[][5];
extern unsigned char far d_4512_6324[][20];
extern char far d_4512_4368[];
extern int far d_4512_1a30[];
extern int far d_4512_0460[];
extern int far d_4512_1ad0[];
extern unsigned char far d_4512_b254[];
extern unsigned char far d_4512_01ec[];
extern unsigned char far d_4512_0386[];
extern unsigned char far d_4512_070c[][82];
char f_a83a_02ce(int v);
long f_2162_0da1(long n);
extern int d_69da_d9d6;
extern int d_69da_d9ea;
extern int d_69da_dbae;
extern int far d_4512_5e24[][80];
extern int far d_5dbf_1108[][2][98];
extern int far d_5dbf_1292[][2][98];
extern unsigned char far d_4512_50b1[];
extern char far d_4512_4fc1[];
char far *f_2162_104e(char far *s);
char far *f_1a70_3404(int x);
void f_1a70_3b47(float x, float y, int colour, char far *s);
void f_1a70_4a41(char far *title);
void f_1a70_5688(int a);
int f_1a70_68a4(int x);
extern int d_69da_dbac;
extern int d_69da_da6e;
extern char d_69da_ddbf;
extern char far d_4512_4ed1[][80];
extern unsigned char far d_4512_57c4[];
void f_2162_13fc(void far *a, void far *b, int n);
void f_a330_4795(int a, int b);
float f_1a70_2bff(int x);
void f_1a70_0b80(char far *);
extern int d_69da_da56;
extern int d_69da_da58;
extern int d_69da_daa4;
extern int d_69da_d99a;
extern int d_69da_db6a;
extern int d_69da_dbb0;
extern int d_69da_da0e;
extern int d_69da_dbb2;
extern int d_69da_dbb4;
extern int d_69da_db58;
extern int d_69da_d9e0;
extern int d_69da_d9ac;
extern int d_69da_d9de;
extern int d_69da_dbb6;
extern int d_69da_dbb8;
extern int d_69da_dbba;
extern int d_69da_dbbc;
extern int d_69da_dafc;
extern int d_69da_dafe;
extern int d_69da_b342[];
extern int far d_4512_46ee[];
extern int far d_4512_470a[];
extern unsigned char far d_4512_03d8[][82];
extern unsigned char far d_5dbf_0995[][460];
extern unsigned char far d_5dbf_0946[];
extern char far d_4512_5cc1[];
extern char far d_4512_6320[];
void unmapped_f_96bb_4ac3(int, int, int, int);
void unmapped_f_b628_029e(int, int, char, char);
extern int unmapped_d_60ae_dd76;
extern int unmapped_d_60ae_dc7a;
extern char far d_4512_5b05[];
extern char far d_4512_44a8[];
extern char far d_4512_78b5[][82][5];
extern char far d_28da_2a4c[];
extern int far d_4512_00a0[][80];
extern int far d_4512_00a2[][80];
extern char far d_536d_615d[];
extern int far d_4512_6284[];
extern unsigned char far d_4512_28a4[];
extern unsigned char far d_536d_4e1d[];
extern char far d_536d_4d2d[];
char f_1a70_268d(int, int);
char f_1a70_2736(int, int);
extern unsigned char far d_4512_bf12[][6][5];
extern unsigned char far d_4512_c1e2[][2][4];
extern int far d_4512_c212[][4];
extern char far d_536d_4c3d[][80];
extern unsigned char far d_4512_9a18[];
extern int far d_4512_5d5a[];
extern int far d_4512_5d76[];
extern unsigned char far d_5dbf_0996[][460];
extern char far d_536d_572b[];
extern char far d_4512_6376[];

static unsigned char d_69da_2ba8[] = {
    0x00, 0x01, 0x14, 0x16, 0x15, 0x16, 0x28, 0x2a, 0x29, 0x2a, 0x3c, 0x3e,
    0x3d, 0x3e
};
static unsigned char d_69da_2bb6[] = {
    0x11, 0x10, 0x12, 0x10, 0x13, 0x10, 0x25, 0x24, 0x26, 0x24, 0x27, 0x24,
    0x39, 0x38, 0x3a, 0x38, 0x3b, 0x38, 0x4f, 0x4e
};
static unsigned char d_69da_2bca[] = {
    0x39, 0x01, 0x02, 0x03, 0x04, 0x3d, 0x02, 0x03, 0x04, 0x01, 0x45, 0x01,
    0x03, 0x02, 0x04, 0x49, 0x02, 0x01, 0x04, 0x03, 0x4d, 0x03, 0x02, 0x01,
    0x04, 0x51, 0x03, 0x01, 0x04, 0x02
};
static unsigned char d_69da_2be8[] = {
    0x1d, 0x21, 0x01, 0x02, 0x21, 0x21, 0x02, 0x03, 0x25, 0x11, 0x03, 0x01
};
static unsigned char d_69da_2bf4[] = {
    0x2f, 0x19, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x00, 0x02,
    0x01, 0x02, 0x01, 0x03, 0x00, 0x03, 0x33, 0x19, 0x01, 0x00, 0x00, 0x02,
    0x00, 0x01, 0x01, 0x03, 0x01, 0x02, 0x00, 0x00, 0x00, 0x03, 0x01, 0x01,
    0x39, 0x05, 0x00, 0x00, 0x01, 0x01, 0x01, 0x02, 0x00, 0x01, 0x00, 0x02,
    0x01, 0x03, 0x01, 0x00, 0x00, 0x03, 0x3d, 0x05, 0x01, 0x01, 0x00, 0x02,
    0x00, 0x01, 0x01, 0x00, 0x01, 0x03, 0x00, 0x00, 0x00, 0x03, 0x01, 0x02
};
/* 30 x {first, last, count} */
static int d_69da_2c3c[] = {
    1, 10, 2,
    11, 30, 4,
    31, 50, 4,
    51, 78, 4,
    79, 90, 1,
    91, 108, 3,
    109, 114, 1,
    115, 132, 4,
    133, 140, 1,
    141, 148, 1,
    149, 166, 4,
    167, 178, 1,
    179, 197, 2,
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

void f_8c32_0000(void)
{
    FILE *fp;
    long off;

    f_2162_19f6(2);
    fp = fopen(d_536d_a475, "rb+");
    for (d_69da_d9bc = 0; d_69da_d9bc <= d_69da_da52 - 1; d_69da_d9bc++) {
        off = (long)d_69da_dab8 + d_69da_d9bc - 1;
        off = 155 * off;
        fseek(fp, off, 0);
        fwrite(d_536d_3101[d_69da_d9bc], 1, 155, fp);
    }
    fclose(fp);
}

void f_8c32_00b2(void)
{
    char wd[8];
    char buf[320];

    d_69da_da66 = f_7dd6_25a6(d_69da_d996, d_69da_d9bc + 1);
    if (d_69da_ddda) {
        d_28da_263c[d_69da_da66 * 80 + d_69da_d9bc * 2] = d_69da_db06;
        d_28da_263c[d_69da_da66 * 80 + d_69da_d9bc * 2 + 1] = d_69da_db08;
    }
    sprintf(d_536d_601d, "%s %d", (char far *)d_69da_b1fc[d_69da_da60], d_69da_db06);
    if (d_69da_db06 > 6) {
        strcat(d_536d_601d, " (");
        strcat(d_536d_601d, f_1a70_488b(d_69da_db06));
        strcat(d_536d_601d, ")");
    }
    strcat(d_536d_601d, " ");
    strcat(d_536d_601d, d_69da_b1fc[d_69da_da62]);
    strcat(d_536d_601d, " ");
    sprintf(buf, "%d", d_69da_db08);
    strcat(d_536d_601d, buf);
    if (d_69da_db08 > 6) {
        strcat(d_536d_601d, " (");
        strcat(d_536d_601d, f_1a70_488b(d_69da_db08));
        strcat(d_536d_601d, ")");
    }
    if (d_69da_d996 > 8 && d_69da_dddc == 0) {
        if (d_69da_db06 > d_69da_db08) {
            f_9c01_45ec(d_69da_dab0, d_69da_daae, d_69da_db08, d_69da_db06);
            f_9c01_4549(d_69da_daae, d_69da_dab0, d_69da_db06, d_69da_db08);
        } else if (d_69da_db08 > d_69da_db06) {
            f_9c01_4549(d_69da_dab0, d_69da_daae, d_69da_db08, d_69da_db06);
            f_9c01_45ec(d_69da_daae, d_69da_dab0, d_69da_db06, d_69da_db08);
        }
    }
    if (d_69da_d996 > 10 && d_69da_ddd9) {
        f_9c01_468f(d_69da_daae, d_69da_dab0, d_69da_df11, d_69da_df13);
        f_9c01_471b(d_69da_daae, d_69da_dab0, d_69da_df11, d_69da_df13);
    }
    if (d_69da_d996 > 8) {
        if (d_69da_da60 < 80)
            f_b8da_027a(d_69da_daae, d_69da_dab0, d_69da_db06, d_69da_db08);
        if (d_69da_da62 < 80)
            f_b8da_027a(d_69da_dab0, d_69da_daae, d_69da_db08, d_69da_db06);
    }
    if (f_1a70_2a7d(d_69da_d996) || f_1a70_24c5(d_69da_d996)
        || f_1a70_268e(d_69da_d996, d_69da_d9bc + 1) || f_1a70_2737(d_69da_d996, d_69da_d9bc + 1)
        || f_1a70_27c8(d_69da_d996, d_69da_d9bc + 1) || f_1a70_2855(d_69da_d996, d_69da_d9bc + 1)) {
        d_69da_db06 += d_69da_da68;
        d_69da_db08 += d_69da_da6a;
        if (d_69da_ddc0) {
            sprintf(buf, "  AGG:%d-%d", d_69da_db06, d_69da_db08);
            strcat(d_536d_601d, buf);
        }
        d_69da_db06 += d_69da_db02;
        d_69da_db08 += d_69da_db04;
    }
    if (d_69da_db06 > d_69da_db08) {
        if (f_1a70_237e(d_69da_d996)) {
            d_4512_0000[12][d_69da_da60]++;
            d_4512_0000[13][d_69da_da62]++;
            d_4512_0000[18][d_69da_da62]++;
            sprintf(buf, "%sW", d_536d_83b9[0][d_69da_da60]);
            strcpy(d_536d_83b9[0][d_69da_da60], f_2162_0f6e(buf, 4));
            sprintf(buf, "%sL", d_536d_83b9[1][d_69da_da62]);
            strcpy(d_536d_83b9[1][d_69da_da62], f_2162_0f6e(buf, 4));
        } else
            f_8c32_06cb(d_69da_daae, d_69da_dab0, d_69da_db06, d_69da_db08);
    } else if (d_69da_db06 == d_69da_db08) {
        if (f_1a70_237e(d_69da_d996)) {
            d_4512_0000[17][d_69da_da62]++;
            if (d_69da_db06 > 0)
                strcpy(wd, "X");
            else
                strcpy(wd, "D");
            sprintf(buf, "%s%s", d_536d_83b9[0][d_69da_da60], (char far *)wd);
            strcpy(d_536d_83b9[0][d_69da_da60], f_2162_0f6e(buf, 4));
            sprintf(buf, "%s%s", d_536d_83b9[1][d_69da_da62], (char far *)wd);
            strcpy(d_536d_83b9[1][d_69da_da62], f_2162_0f6e(buf, 4));
        } else
            f_8c32_0ca4(d_69da_daae, d_69da_dab0, d_69da_db06, d_69da_db08);
    } else {
        if (f_1a70_237e(d_69da_d996)) {
            d_4512_0000[12][d_69da_da62]++;
            d_4512_0000[16][d_69da_da62]++;
            d_4512_0000[13][d_69da_da60]++;
            sprintf(buf, "%sL", d_536d_83b9[0][d_69da_da60]);
            strcpy(d_536d_83b9[0][d_69da_da60], f_2162_0f6e(buf, 4));
            sprintf(buf, "%sW", d_536d_83b9[1][d_69da_da62]);
            strcpy(d_536d_83b9[1][d_69da_da62], f_2162_0f6e(buf, 4));
        } else
            f_8c32_06cb(d_69da_dab0, d_69da_daae, d_69da_db08, d_69da_db06);
    }
    if (f_1a70_237e(d_69da_d996)) {
        d_4512_0000[14][d_69da_da60] += d_69da_db06;
        d_4512_0000[15][d_69da_da60] += d_69da_db08;
        d_4512_0000[14][d_69da_da62] += d_69da_db08;
        d_4512_0000[15][d_69da_da62] += d_69da_db06;
        d_4512_0000[19][d_69da_da62] += d_69da_db08;
        d_4512_0000[20][d_69da_da62] += d_69da_db06;
    }
}

void f_8c32_06cb(int a, int b, int c, int d)
{
    if (f_1a70_2490(d_69da_d996)) {
        d_4512_5ec4[0][d_69da_d99c] = a;
        d_69da_d99c++;
        if (d_69da_d996 >= 92) {
            d_4512_5ec6[0][0] = b;
            d_69da_d9b2 = -1;
            f_9c01_4820(a, 1, 100);
            f_8c32_10af(a, 100000L, 7500L);
            f_9c01_606c(1, a, b);
        }
    } else if (f_1a70_24c5(d_69da_d996) && !d_69da_ddda) {
        d_4512_5ec4[1][d_69da_d99e] = a;
        d_69da_d99e++;
        if (d_69da_d996 >= 82) {
            d_4512_5ec6[1][0] = b;
            d_69da_d9b0 = -1;
            f_9c01_4820(a, 2, 100);
            f_8c32_10af(a, 150000L, 5000L);
            f_9c01_606c(2, a, b);
        }
    } else if (f_1a70_2855(d_69da_d996, d_69da_d9bc + 1)) {
        if (d_69da_d996 <= 61) {
            f_8c32_101e(a);
            d_4512_a2c0[0][d_69da_dac8][d_69da_daca] = d_4512_a2c0[0][d_69da_dac8][d_69da_daca] + 1;
            d_4512_a2c0[1][d_69da_dac8][d_69da_daca] = d_4512_a2c0[1][d_69da_dac8][d_69da_daca] + 1;
            d_4512_a2c0[4][d_69da_dac8][d_69da_daca] = d_4512_a2c0[4][d_69da_dac8][d_69da_daca] + c;
            d_4512_a2c0[5][d_69da_dac8][d_69da_daca] = d_4512_a2c0[5][d_69da_dac8][d_69da_daca] + d;
            f_8c32_101e(b);
            d_4512_a2c0[0][d_69da_dac8][d_69da_daca] = d_4512_a2c0[0][d_69da_dac8][d_69da_daca] + 1;
            d_4512_a2c0[3][d_69da_dac8][d_69da_daca] = d_4512_a2c0[3][d_69da_dac8][d_69da_daca] + 1;
            d_4512_a2c0[4][d_69da_dac8][d_69da_daca] = d_4512_a2c0[4][d_69da_dac8][d_69da_daca] + d;
            d_4512_a2c0[5][d_69da_dac8][d_69da_daca] = d_4512_a2c0[5][d_69da_dac8][d_69da_daca] + c;
        } else if (!d_69da_ddda) {
            d_4512_5ec4[2][d_69da_d9a2] = a;
            d_69da_d9a2++;
            if (d_69da_d996 == 86) {
                d_4512_5ec6[2][0] = b;
                d_69da_da0a = -1;
                f_9c01_4820(a, 3, 100);
                f_8c32_10af(a, 75000L, 2000L);
                f_9c01_606c(3, a, b);
            }
        }
    } else if (f_1a70_268e(d_69da_d996, d_69da_d9bc + 1)) {
        d_4512_5ec4[3][d_69da_d9a4] = a;
        d_69da_d9a4++;
        if (d_69da_d996 == 95) {
            d_4512_5ec6[3][0] = b;
            d_69da_d9b4 = -1;
            f_9c01_4820(a, 4, 100);
            f_8c32_10af(a, 250000L, 10000L);
            f_9c01_606c(4, a, b);
        }
    } else if (f_1a70_2737(d_69da_d996, d_69da_d9bc + 1)) {
        d_4512_5ec4[4][d_69da_d9a6] = a;
        d_69da_d9a6++;
        if (d_69da_d996 == 91) {
            d_4512_5ec6[4][0] = b;
            d_69da_d9b6 = -1;
            f_9c01_4820(a, 5, 100);
            f_8c32_10af(a, 250000L, 10000L);
            f_9c01_606c(5, a, b);
        }
    } else if (f_1a70_27c8(d_69da_d996, d_69da_d9bc + 1)) {
        if (d_69da_d996 < 57 || d_69da_d996 > 81) {
            d_4512_5ec4[5][d_69da_d9a8] = a;
            d_69da_d9a8++;
            if (d_69da_d996 == 97) {
                d_4512_5ec6[5][0] = b;
                d_69da_d9b8 = -1;
                f_9c01_4820(a, 6, 100);
                f_8c32_10af(a, 1000000L, 20000L);
                f_9c01_606c(6, a, b);
            }
        } else {
            f_8c32_0fba(a);
            d_4512_a074[0][d_69da_dac8][d_69da_daca] = d_4512_a074[0][d_69da_dac8][d_69da_daca] + 1;
            d_4512_a074[1][d_69da_dac8][d_69da_daca] = d_4512_a074[1][d_69da_dac8][d_69da_daca] + 1;
            d_4512_a074[4][d_69da_dac8][d_69da_daca] = d_4512_a074[4][d_69da_dac8][d_69da_daca] + c;
            d_4512_a074[5][d_69da_dac8][d_69da_daca] = d_4512_a074[5][d_69da_dac8][d_69da_daca] + d;
            f_8c32_0fba(b);
            d_4512_a074[0][d_69da_dac8][d_69da_daca] = d_4512_a074[0][d_69da_dac8][d_69da_daca] + 1;
            d_4512_a074[3][d_69da_dac8][d_69da_daca] = d_4512_a074[3][d_69da_dac8][d_69da_daca] + 1;
            d_4512_a074[4][d_69da_dac8][d_69da_daca] = d_4512_a074[4][d_69da_dac8][d_69da_daca] + d;
            d_4512_a074[5][d_69da_dac8][d_69da_daca] = d_4512_a074[5][d_69da_dac8][d_69da_daca] + c;
        }
    } else if (f_1a70_2a7d(d_69da_d996) && !d_69da_ddda) {
        d_4512_5ec4[6][d_69da_d9bc] = a;
    }
}

void f_8c32_0ca4(int a, int b, int c, int d)
{
    if (f_1a70_2855(d_69da_d996, d_69da_d9bc + 1) && d_69da_d996 <= 61) {
        f_8c32_101e(a);
        d_4512_a2c0[0][d_69da_dac8][d_69da_daca] = d_4512_a2c0[0][d_69da_dac8][d_69da_daca] + 1;
        d_4512_a2c0[2][d_69da_dac8][d_69da_daca] = d_4512_a2c0[2][d_69da_dac8][d_69da_daca] + 1;
        d_4512_a2c0[4][d_69da_dac8][d_69da_daca] = d_4512_a2c0[4][d_69da_dac8][d_69da_daca] + c;
        d_4512_a2c0[5][d_69da_dac8][d_69da_daca] = d_4512_a2c0[5][d_69da_dac8][d_69da_daca] + d;
        f_8c32_101e(b);
        d_4512_a2c0[0][d_69da_dac8][d_69da_daca] = d_4512_a2c0[0][d_69da_dac8][d_69da_daca] + 1;
        d_4512_a2c0[2][d_69da_dac8][d_69da_daca] = d_4512_a2c0[2][d_69da_dac8][d_69da_daca] + 1;
        d_4512_a2c0[4][d_69da_dac8][d_69da_daca] = d_4512_a2c0[4][d_69da_dac8][d_69da_daca] + d;
        d_4512_a2c0[5][d_69da_dac8][d_69da_daca] = d_4512_a2c0[5][d_69da_dac8][d_69da_daca] + c;
    } else if (f_1a70_27c8(d_69da_d996, d_69da_d9bc + 1) && d_69da_d996 >= 57 && d_69da_d996 <= 81) {
        f_8c32_0fba(a);
        d_4512_a074[0][d_69da_dac8][d_69da_daca] = d_4512_a074[0][d_69da_dac8][d_69da_daca] + 1;
        d_4512_a074[2][d_69da_dac8][d_69da_daca] = d_4512_a074[2][d_69da_dac8][d_69da_daca] + 1;
        d_4512_a074[4][d_69da_dac8][d_69da_daca] = d_4512_a074[4][d_69da_dac8][d_69da_daca] + c;
        d_4512_a074[5][d_69da_dac8][d_69da_daca] = d_4512_a074[5][d_69da_dac8][d_69da_daca] + d;
        f_8c32_0fba(b);
        d_4512_a074[0][d_69da_dac8][d_69da_daca] = d_4512_a074[0][d_69da_dac8][d_69da_daca] + 1;
        d_4512_a074[2][d_69da_dac8][d_69da_daca] = d_4512_a074[2][d_69da_dac8][d_69da_daca] + 1;
        d_4512_a074[4][d_69da_dac8][d_69da_daca] = d_4512_a074[4][d_69da_dac8][d_69da_daca] + d;
        d_4512_a074[5][d_69da_dac8][d_69da_daca] = d_4512_a074[5][d_69da_dac8][d_69da_daca] + c;
    }
}

void f_8c32_0fba(int x)
{
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= 1; d_69da_d9d2++)
        for (d_69da_d9a0 = 0; d_69da_d9a0 <= 3; d_69da_d9a0++)
            if (d_4512_a064[d_69da_d9d2][d_69da_d9a0] == x) {
                d_69da_dac8 = d_69da_d9d2;
                d_69da_daca = d_69da_d9a0;
                d_69da_d9a0 = 3;
                d_69da_d9d2 = 1;
            }
}

void f_8c32_101e(int x)
{
    unsigned char rows;
    unsigned char cols;

    rows = d_69da_d996 <= 37 ? 6 : 4;
    cols = d_69da_d996 <= 37 ? 3 : 4;
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= rows - 1; d_69da_d9d2++)
        for (d_69da_d9a0 = 0; d_69da_d9a0 <= cols - 1; d_69da_d9a0++)
            if (d_4512_a0a4[d_69da_d9d2][d_69da_d9a0] == x) {
                d_69da_dac8 = d_69da_d9d2;
                d_69da_daca = d_69da_d9a0;
                d_69da_d9a0 = 4;
                d_69da_d9d2 = 7;
            }
}

void f_8c32_10af(int team, long amount, long z)
{
    if (team < 80) {
        d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
        d_69da_dfae->v[team] += amount;
        f_8c32_10fd(team, z);
    }
}

void f_8c32_10fd(int team, int amount)
{
    d_69da_df9e = f_2162_1634(d_69da_dfe8, 1);
    d_69da_df9e[d_4512_1a30[team]] += amount / 50 * 50;
    d_69da_dfaa = f_2162_1634(d_69da_dfee, 1);
    ((int far *)(d_69da_dfaa + 2600))[d_4512_1a30[team]] += amount / 50 * 50;
}

void f_8c32_1188(void)
{
    unsigned char far *p;
    unsigned char old;
    char last;
    char pair;
    char buf[320];
    register int i;
    int n;

    last = d_69da_d996 == 98 ? -1 : 0;
    for (d_69da_d9ce = 0; d_69da_d9ce <= 79; d_69da_d9ce++) {
        d_69da_d9d8 = d_4512_6324[0][d_69da_d9ce];
        old = d_4512_0386[d_69da_d9d8];
        d_4512_0386[d_69da_d9d8] = 2;
        p = d_69da_2ba8;
        for (i = 1; i <= 7; i++) {
            d_69da_d9f6 = *p;
            p++;
            d_69da_da0c = *p;
            p++;
            if (d_69da_d9ce == d_69da_d9f6) {
                if (f_a83a_0000(d_69da_da0c) + (38 - d_69da_d9ba) * 3 < f_a83a_0000(d_69da_d9ce) || d_69da_d9ba == 38) {
                    pair = (d_69da_d9f6 == 0 || d_69da_d9f6 == 20 || d_69da_d9f6 == 40 || d_69da_d9f6 == 60) && d_69da_d9f6 + 1 == d_69da_da0c;
                    d_4512_0386[d_69da_d9d8] = pair ? 4 : 3;
                    i = 7;
                }
            }
        }
        if (last) {
            if ((d_69da_d9ce / 20 == 1 && d_4512_6284[0] == d_69da_d9d8) ||
                (d_69da_d9ce / 20 == 2 && d_4512_6284[1] == d_69da_d9d8) ||
                (d_69da_d9ce / 20 == 3 && d_4512_6284[2] == d_69da_d9d8))
                d_4512_0386[d_69da_d9d8] = 3;
        }
        p = d_69da_2bb6;
        for (i = 1; i <= 10; i++) {
            d_69da_d9f6 = *p;
            p++;
            d_69da_da0c = *p;
            p++;
            if (d_69da_d9ce == d_69da_d9f6) {
                if (f_a83a_0000(d_69da_d9ce) + (38 - d_69da_d9ba) * 3 < f_a83a_0000(d_69da_da0c) || d_69da_d9ba == 38) {
                    d_4512_0386[d_69da_d9d8] = 1;
                    i = 9;
                }
            }
        }
        if (old == 2) {
            if (d_4512_0386[d_69da_d9d8] > 2) {
                n = d_4512_0386[d_69da_d9d8] == 4 ? 2 : 1;
                switch (d_69da_d9d8 / 20) {
                case 0:
                    f_8c32_10af(d_69da_d9d8, n * 125000L, 10000L);
                    break;
                case 1:
                    f_8c32_10af(d_69da_d9d8, (long)(n * 12500), 5000L);
                    break;
                case 2:
                case 3:
                    f_8c32_10af(d_69da_d9d8, (long)(n * 6250), 5000L);
                    break;
                }
                if (f_1a70_2bc7(d_69da_d9d8)) {
                    if (d_69da_d9ce == 0)
                        strcpy(buf, "Champions!  A great performance.");
                    else
                        strcpy(buf, "Promotion!  A successful season.");
                    f_9c01_1720(d_69da_d9d8, buf);
                }
            } else if (d_4512_0386[d_69da_d9d8] == 1) {
                if (f_1a70_2bc7(d_69da_d9d8)) {
                    if (d_69da_d9ce == 79)
                        strcpy(buf, "Relegation to non-league.  Terrible.");
                    else
                        strcpy(buf, "Relegation.  Very poor.");
                    f_9c01_1720(d_69da_d9d8, buf);
                }
                f_8c32_150f(d_69da_d9d8, -10);
            }
        }
        if (d_69da_d9ba < 39) {
            if (d_69da_d9ba == 38)
                f_9c01_606c(0, d_4512_6324[0][0], d_4512_6324[0][1]);
            d_4512_070c[d_69da_d9ba][d_69da_d9d8] = d_69da_d9ce % 20 + 1;
        }
    }
}

void f_8c32_150f(int team, int delta)
{
    if (d_4512_1ad0[team] < 650) {
        if (d_4512_0386[team] < 3 || delta > 0) {
            if (d_4512_28a4[d_4512_1a30[team]] < 10)
                d_4512_01ec[team] = f_2162_134e(f_2162_13ba(d_4512_01ec[team] + delta, 100), 0);
        }
    }
}

/* the name of the competition the match of week b is in, and for a cup the round
 * (CM1's unmapped_f_7eeb_1afc) */
void f_8c32_1592(int team, int b, int c)
{
    if (f_1a70_237e(team)) {
        if (c >= 60)
            strcpy(d_536d_615d, "Division Three");
        else if (c >= 40)
            strcpy(d_536d_615d, "Division Two");
        else if (c >= 20)
            strcpy(d_536d_615d, "Division One");
        else
            strcpy(d_536d_615d, "FA Premier");
    } else if (f_1a70_2490(team)) {
        strcpy(d_536d_615d, "FA Cup");
        f_8c32_1748(team, 0x4e, 0x4f);
        f_8c32_17a2(team, 0x5c, 0x5d);
    } else if (f_1a70_24c5(team)) {
        strcpy(d_536d_615d, "Coca-Cola Cup");
        f_8c32_1748(team, 0x3f, 0x43);
        f_8c32_17a2(team, 0x52, 0x53);
    } else if (f_1a70_2855(team, b)) {
        strcpy(d_536d_615d, "Ang/Ita Cup");
        f_8c32_1748(team, 0x45, 0x49);
        f_8c32_17a2(team, 0x56, -1);
    } else if (f_1a70_268e(team, b)) {
        strcpy(d_536d_615d, "UEFA Cup");
        f_8c32_1748(team, 0x4d, 0x51);
        f_8c32_17a2(team, 0x59, 0x5f);
    } else if (f_1a70_2737(team, b)) {
        strcpy(d_536d_615d, "C/Winners Cup");
        f_8c32_1748(team, 0x4d, 0x51);
        f_8c32_17a2(team, 0x5b, -1);
    } else if (f_1a70_27c8(team, b)) {
        strcpy(d_536d_615d, "European Cup");
        f_8c32_17a2(team, 0x61, -1);
    } else if (f_1a70_2a7d(team))
        strcpy(d_536d_615d, "Playoff");
    else if (team == 10)
        strcpy(d_536d_615d, "Charity Shield");
    else if (team < 10)
        strcpy(d_536d_615d, "Friendly");
}

void f_8c32_1748(int t, int a, int b)
{
    if (t == a || t == b) {
        if (strlen(d_536d_615d) + 11 <= 19)
            strcat(d_536d_615d, " Semi-Final");
        else if (strlen(d_536d_615d) + 5 <= 19)
            strcat(d_536d_615d, " Semi");
    }
}

void f_8c32_17a2(int t, int a, int b)
{
    if (t == a || t == b) {
        if (strlen(d_536d_615d) + 6 <= 19)
            strcat(d_536d_615d, " Final");
    }
}

void f_8c32_17e0(void)
{
    switch (d_69da_d996) {
    case 1:
        f_8c32_26b9(2, 1, 0x20, 0xf, 0x13);
        f_8c32_1f33();
        f_8c32_26b9(4, 1, 0x40, 0x15, 0x19);
        f_8c32_26b9(6, 1, 0x20, 0x1d, 0x21);
        f_8c32_26b9(5, 0x21, 0x40, 0x1d, 0x21);
        break;
    case 19:
        for (d_69da_d9d6 = 16; d_69da_d9d6 <= 63; d_69da_d9d6++)
            d_4512_5e24[2][d_69da_d9d6] = d_4512_5e24[2][d_69da_d9d6 + 16];
        f_8c32_26b9(2, 1, 0x40, 0x17, 0x1b);
        break;
    case 25:
        f_8c32_26b9(4, 1, 0x20, 0x25, 0x29);
        break;
    case 27:
        f_8c32_26b9(2, 1, 0x20, 0x1f, -1);
        break;
    case 31:
        f_8c32_26b9(2, 1, 0x10, 0x2b, -1);
        break;
    case 32:
        for (d_69da_d9d6 = 0; d_69da_d9d6 <= 19; d_69da_d9d6++)
            d_4512_5e24[1][d_69da_d9d6 + 36] = d_69da_d9d6 + 60;
        f_8c32_26b9(1, 1, 0x38, 0x26, -1);
        break;
    case 33:
        f_8c32_26b9(6, 1, 0x10, 0x2f, 0x33);
        f_8c32_26b9(5, 0x11, 0x20, 0x2f, 0x33);
        break;
    case 37:
        f_8c32_21ac();
        break;
    case 38:
    case 39:
        for (d_69da_d9d6 = 0; d_69da_d9d6 <= 19; d_69da_d9d6++)
            d_4512_5e24[1][d_69da_d9d6 + 28] = d_69da_d9d6 + 40;
        f_8c32_26b9(1, 1, 0x30, 0x2c, -1);
        break;
    case 41:
        f_8c32_26b9(4, 0x21, 0x30, 0x2f, 0x33);
        break;
    case 43:
        f_8c32_26b9(2, 1, 8, 0x37, -1);
        break;
    case 44:
    case 45:
        for (d_69da_d9d6 = 0; d_69da_d9d6 <= 39; d_69da_d9d6++)
            d_4512_5e24[1][d_69da_d9d6 + 24] = d_69da_d9d6;
        f_8c32_26b9(1, 1, 0x40, 0x34, -1);
        break;
    case 51:
        f_8c32_1cdc();
        f_8c32_26b9(5, 9, 0x10, 0x45, 0x49);
        f_8c32_26b9(4, 0x11, 0x18, 0x45, 0x49);
        break;
    case 52:
    case 53:
        f_8c32_26b9(1, 1, 0x20, 0x3a, -1);
        break;
    case 55:
        f_8c32_26b9(2, 1, 4, 0x3f, 0x43);
        break;
    case 58:
    case 59:
        f_8c32_26b9(1, 1, 0x10, 0x40, -1);
        break;
    case 61:
        f_8c32_26b9(3, 0x19, 0x1c, 0x45, 0x49);
        break;
    case 64:
    case 65:
        f_8c32_26b9(1, 1, 8, 0x46, -1);
        break;
    case 67:
        d_5dbf_1108[1][0][82] = d_4512_5e24[2][0] << 5;
        d_5dbf_1108[1][1][82] = d_4512_5e24[2][1] << 5;
        d_69da_d9b0 = 82;
        f_9c01_4820(d_4512_5e24[2][0], 2, 82);
        f_9c01_4820(d_4512_5e24[2][1], 2, 82);
        break;
    case 70:
    case 71:
        f_8c32_26b9(1, 1, 4, 0x4e, -1);
        break;
    case 73:
        f_8c32_26b9(5, 9, 0xc, 0x4d, 0x51);
        f_8c32_26b9(4, 0xd, 0x10, 0x4d, 0x51);
        d_5dbf_1108[1][0][86] = d_4512_5e24[3][0] << 5;
        d_5dbf_1108[1][1][86] = d_4512_5e24[3][1] << 5;
        d_69da_da0a = 86;
        f_9c01_4820(d_4512_5e24[3][0], 3, 86);
        f_9c01_4820(d_4512_5e24[3][1], 3, 86);
        break;
    case 78:
    case 79:
        d_5dbf_1108[1][0][92] = d_4512_5e24[1][0] << 5;
        d_5dbf_1108[1][1][92] = d_4512_5e24[1][1] << 5;
        d_69da_d9b2 = 92;
        f_9c01_4820(d_4512_5e24[1][0], 1, 92);
        f_9c01_4820(d_4512_5e24[1][1], 1, 92);
        break;
    case 81:
        d_5dbf_1108[1][0][97] = d_4512_5e24[6][0] << 5;
        d_5dbf_1108[1][1][97] = d_4512_5e24[6][1] << 5;
        d_69da_d9b8 = 97;
        f_9c01_4820(d_4512_5e24[6][0], 6, 97);
        f_9c01_4820(d_4512_5e24[6][1], 6, 97);
        d_5dbf_1108[1][0][91] = d_4512_5e24[5][0] << 5;
        d_5dbf_1108[1][1][91] = d_4512_5e24[5][1] << 5;
        d_69da_d9b6 = 91;
        f_9c01_4820(d_4512_5e24[5][0], 5, 91);
        f_9c01_4820(d_4512_5e24[5][1], 5, 91);
        d_5dbf_1108[1][0][89] = d_4512_5e24[4][0] << 5;
        d_5dbf_1108[1][1][89] = d_4512_5e24[4][1] << 5;
        d_69da_d9b4 = 89;
        f_9c01_4820(d_4512_5e24[4][0], 4, 89);
        f_9c01_4820(d_4512_5e24[4][1], 4, 89);
        d_5dbf_1108[1][0][95] = d_5dbf_1108[1][1][89];
        d_5dbf_1108[1][1][95] = d_5dbf_1108[1][0][89];
        break;
    }
}

void f_8c32_1cdc(void)
{
    unsigned char far *p;
    unsigned char a;
    unsigned char b;
    unsigned char c;
    char first;
    char second;

    first = 0;
    second = 0;
    for (d_69da_d9d6 = 0; d_69da_d9d6 < 80; d_69da_d9d6++)
        d_536d_4e1d[d_69da_d9d6] = 0;
    for (d_69da_dbae = 0; d_69da_dbae <= 7; d_69da_dbae++) {
        if (d_69da_dbae < 4) {
            d_4512_a064[0][d_69da_dbae] = d_4512_5e24[6][d_69da_dbae];
            if (f_1a70_2bc7(d_4512_5e24[6][d_69da_dbae]))
                first = -1;
        } else {
            d_4512_a064[0][d_69da_dbae] = d_4512_5e24[6][d_69da_dbae];
            if (f_1a70_2bc7(d_4512_5e24[6][d_69da_dbae]))
                second = -1;
        }
        if (d_4512_5e24[6][d_69da_dbae] < 80)
            d_536d_4e1d[d_4512_5e24[6][d_69da_dbae]] = -1;
    }
    memset(d_4512_a074, 0, 0x30);
    p = d_69da_2bca;
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 5; d_69da_d9a0++) {
        a = *p++;
        for (d_69da_d9ea = 0; d_69da_d9ea <= 1; d_69da_d9ea++) {
            b = *p++;
            c = *p++;
            for (d_69da_d9d2 = 0; d_69da_d9d2 <= 1; d_69da_d9d2++) {
                d_5dbf_1108[d_69da_d9ea + d_69da_d9d2 * 2 + 1][0][a] = d_4512_a064[d_69da_d9d2][b - 1] << 5;
                d_5dbf_1108[d_69da_d9ea + d_69da_d9d2 * 2 + 1][1][a] = d_4512_a064[d_69da_d9d2][c - 1] << 5;
            }
        }
    }
    if (first)
        f_8c32_24dc(0);
    if (second)
        f_8c32_24dc(1);
    d_69da_d9b8 = 57;
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 1; d_69da_d9a0++)
        for (d_69da_d9ea = 0; d_69da_d9ea <= 3; d_69da_d9ea++)
            f_9c01_4820(d_4512_a064[d_69da_d9a0][d_69da_d9ea], 6, 57);
}

void f_8c32_1f33(void)
{
    int col, row;
    int a, b;
    char used[6];
    unsigned char far *p;
    char taken[540];

    memset(taken, 0, 540);
    memset(used, 0, 6);
    for (d_69da_d9d6 = 0; d_69da_d9d6 < 80; d_69da_d9d6++)
        d_536d_4d2d[d_69da_d9d6] = 0;
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= 5; d_69da_d9d2++) {
        for (d_69da_d9a0 = 0; d_69da_d9a0 <= 2; d_69da_d9a0++) {
            do
                d_69da_d9d6 = f_2162_0da1(20) + 20;
            while (taken[d_69da_d9d6] != 0);
            taken[d_69da_d9d6] = -1;
            if (f_a83a_02ce(d_69da_d9d6)) {
                do
                    ;
                while (f_a83a_02ce(d_69da_d9d6 = f_2162_0da1(20) + 40));
                taken[d_69da_d9d6] = -1;
            }
            if (d_69da_d9d6 < 80)
                d_536d_4d2d[d_69da_d9d6] = -1;
            d_4512_a0a4[d_69da_d9d2][d_69da_d9a0] = d_69da_d9d6;
            if (f_1a70_2bc7(d_69da_d9d6))
                used[d_69da_d9d2] = -1;
        }
    }
    memset(d_4512_a2c0, 0, 180);
    p = d_69da_2be8;
    for (d_69da_d9a0 = 1; d_69da_d9a0 <= 3; d_69da_d9a0++) {
        col = *p++;
        row = *p++;
        a = *p++;
        b = *p++;
        for (d_69da_d9d2 = 0; d_69da_d9d2 <= 5; d_69da_d9d2++) {
            d_5dbf_1108[row + d_69da_d9d2][0][col] = d_4512_a0a4[d_69da_d9d2][a - 1] << 5;
            d_5dbf_1292[row + d_69da_d9d2 - 1][1][col - 1] = d_4512_a0a4[d_69da_d9d2][b - 1] << 5;
        }
    }
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= 5; d_69da_d9d2++)
        if (used[d_69da_d9d2])
            f_8c32_25ad(d_69da_d9d2);
    d_69da_da0a = 29;
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= 5; d_69da_d9d2++)
        for (d_69da_d9a0 = 0; d_69da_d9a0 <= 2; d_69da_d9a0++)
            f_9c01_4820(d_4512_a0a4[d_69da_d9d2][d_69da_d9a0], 3, 29);
}

void f_8c32_21ac(void)
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
    for (d_69da_d9d6 = 0; d_69da_d9d6 < 80; d_69da_d9d6++)
        d_536d_4d2d[d_69da_d9d6] = 0;
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= 3; d_69da_d9d2++) {
        d_4512_a0a4[0][d_69da_d9d2] = d_4512_5e24[3][d_69da_d9d2];
        if (f_1a70_2bc7(d_4512_5e24[3][d_69da_d9d2]))
            used[0] = -1;
        if (d_4512_5e24[3][d_69da_d9d2] < 80)
            d_536d_4d2d[d_4512_5e24[3][d_69da_d9d2]] = -1;
        d_4512_a0a4[1][d_69da_d9d2] = d_4512_5e24[3][d_69da_d9d2 + 8];
        d_4512_a0a4[2][d_69da_d9d2] = d_4512_5e24[3][d_69da_d9d2 + 4];
        if (f_1a70_2bc7(d_4512_5e24[3][d_69da_d9d2 + 4]))
            used[2] = -1;
        if (d_4512_5e24[3][d_69da_d9d2 + 4] < 80)
            d_536d_4d2d[d_4512_5e24[3][d_69da_d9d2 + 4]] = -1;
        d_4512_a0a4[3][d_69da_d9d2] = d_4512_5e24[3][d_69da_d9d2 + 12];
    }
    memset(d_4512_a2c0, 0, 180);
    p = d_69da_2bf4;
    for (d_69da_d9d2 = 1; d_69da_d9d2 <= 4; d_69da_d9d2++) {
        col = *p++;
        row = *p++;
        for (d_69da_d9a0 = 1; d_69da_d9a0 <= 4; d_69da_d9a0++) {
            a = *p++;
            b = *p++;
            c = *p++;
            d = *p++;
            d_5dbf_1108[row][0][col] = d_4512_a0a4[a][b] << 5;
            d_5dbf_1292[row - 1][1][col - 1] = d_4512_a0a4[c][d] << 5;
            d_5dbf_1108[row + 4][0][col] = d_4512_a0a4[a + 2][b] << 5;
            d_5dbf_1108[row + 4][1][col] = d_4512_a0a4[c + 2][d] << 5;
            row++;
        }
    }
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= 3; d_69da_d9d2++)
        if (used[d_69da_d9d2])
            f_8c32_25ad(d_69da_d9d2);
    d_69da_da0a = 47;
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= 3; d_69da_d9d2++)
        for (d_69da_d9a0 = 0; d_69da_d9a0 <= 3; d_69da_d9a0++)
            if (d_69da_d9d2 % 2 == 0)
                f_9c01_4820(d_4512_a0a4[d_69da_d9d2][d_69da_d9a0], 3, 47);
}

void f_8c32_24dc(int g)
{
    char buf[320];

    f_1a70_4a41("European Cup");
    sprintf(buf, "Group %c Qualifiers", g + 'A');
    f_1a70_3b47(-1.0, 8.0, 2, buf);
    for (d_69da_d9d6 = 0; d_69da_d9d6 <= 3; d_69da_d9d6++)
        f_1a70_3b47(-1.0, d_69da_d9d6 * 2 + 10, f_1a70_2bc7(d_4512_a064[g][d_69da_d9d6]) * 5 + 6, f_1a70_3404(d_4512_a064[g][d_69da_d9d6]));
    f_1a70_5688(0);
}

void f_8c32_25ad(int g)
{
    unsigned char n;
    char buf[30];

    n = d_69da_d996 <= 37 ? 3 : 4;
    f_1a70_4a41("Anglo-Italian Cup");
    if (d_69da_d996 <= 37)
        sprintf(buf, "Group %c Qualifiers", g + 'A');
    else
        sprintf(buf, "International Group %c", g / 2 + 'A');
    f_1a70_3b47(-1, 7, 2, buf);
    for (d_69da_d9d6 = 0; d_69da_d9d6 <= n - 1; d_69da_d9d6++)
        f_1a70_3b47(-1, (n == 4 ? 10 : 11) + d_69da_d9d6 * 2, f_1a70_2bc7(d_4512_a0a4[g][d_69da_d9d6]) * 5 + 6, f_1a70_3404(d_4512_a0a4[g][d_69da_d9d6]));
    f_1a70_5688(0);
}

void f_8c32_26b9(int comp, int first, int last, int week, int other)
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
    for (d_69da_d9d6 = 0; d_69da_d9d6 <= 79; d_69da_d9d6++)
        d_536d_4c3d[comp][d_69da_d9d6] = 0;
    d_69da_da52 = (last - first + 1) / 2;
    half = (first - 1) / 2;
    count = 0;
    if (comp >= 4 && comp <= 6)
        for (d_69da_dbac = 0; d_69da_dbac <= d_69da_da52 * 2 - 1; d_69da_dbac++)
            if (d_4512_9a18[d_4512_5e24[comp][d_69da_dbac]] > 0)
                count++;
    random = comp != 3 || week != 69 ? -1 : 0;
    d_69da_d9a0 = -1;
    for (d_69da_d9d2 = half; d_69da_d9d2 <= half + d_69da_da52 - 1; d_69da_d9d2++) {
        flag = count > 0 && d_69da_da52 > 4;
        for (d_69da_da6e = 0; d_69da_da6e <= 1; d_69da_da6e++) {
            do {
                do
                    d_69da_d9a0 = random ? f_2162_0da1(d_69da_da52 * 2) : d_69da_d9a0 + 1;
                while (used[d_69da_d9a0] != 0);
                ok = -1;
                if (flag && d_69da_da6e == 1
                    && d_4512_9a18[d_4512_5e24[comp][d_69da_d9a0]] == d_4512_9a18[d_69da_da60])
                    ok = 0;
            } while (!ok);
            d_5dbf_1108[d_69da_d9d2 + 1][d_69da_da6e][week] = d_4512_5e24[comp][d_69da_d9a0] << 5;
            if (other != -1)
                d_5dbf_1108[d_69da_d9d2 + 1][1 - d_69da_da6e][other] = d_4512_5e24[comp][d_69da_d9a0] << 5;
            if (d_69da_da6e == 0)
                d_69da_da60 = d_4512_5e24[comp][d_69da_d9a0];
            else
                d_69da_da62 = d_4512_5e24[comp][d_69da_d9a0];
            used[d_69da_d9a0] = -1;
            if (count > 0 && d_4512_9a18[d_4512_5e24[comp][d_69da_d9a0]] > 0)
                count--;
        }
        d_69da_ddbf = f_1a70_2bc7(d_69da_da60);
        if (d_69da_ddbf == 0)
            d_69da_ddbf = f_1a70_2bc7(d_69da_da62);
        if (d_69da_da60 < 80)
            d_536d_4c3d[comp][d_69da_da60] = -1;
        if (d_69da_da62 < 80)
            d_536d_4c3d[comp][d_69da_da62] = -1;
        switch (comp) {
        case 1:
            strcpy(name, "FA Cup");
            d_69da_d9b2 = week;
            break;
        case 2:
            strcpy(name, "Coca-Cola Cup");
            d_69da_d9b0 = week;
            break;
        case 3:
            strcpy(name, "Anglo-Italian Cup");
            d_69da_da0a = week;
            break;
        case 4:
            strcpy(name, "UEFA Cup");
            d_69da_d9b4 = week;
            break;
        case 5:
            strcpy(name, "Cup Winners Cup");
            d_69da_d9b6 = week;
            break;
        case 6:
            strcpy(name, "European Cup");
            d_69da_d9b8 = week;
            break;
        }
        if (d_69da_ddbf) {
            f_1a70_4a41("");
            sprintf(buf, "%s draw:", name);
            f_1a70_3b47(-1, 10, 2, buf);
            sprintf(buf, "%s v %s", f_2162_104e(f_1a70_3404(d_69da_da60)), f_2162_104e(f_1a70_3404(d_69da_da62)));
            f_1a70_3b47(-1, 12, 6, buf);
            w = f_1a70_68a4(week);
            if (week % 2 == 1)
                sprintf(buf, "Week %d Midweek", w);
            else
                sprintf(buf, "Week %d", w);
            f_1a70_3b47(-1, 14, 3, buf);
            f_1a70_5688(0);
        }
        f_9c01_4820(d_69da_da60, comp, week);
        f_9c01_4820(d_69da_da62, comp, week);
    }
}

void f_8c32_2b5e(void)
{
    int far *p;
    int c[30];
    int b[30];
    int a[30];
    char used[460];
    int j;
    int i;
    int n;
    int k = 78;
    int t;

    memset(used, 0, sizeof used);
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= 13; d_69da_d9d2++) {
        d_4512_5d5a[d_69da_d9d2] = 1859;
        d_4512_5d76[d_69da_d9d2] = 1859;
    }
    for (d_69da_da0c = 5; d_69da_da0c <= 6; d_69da_da0c++)
        for (d_69da_dbac = 0; d_69da_dbac <= 1; d_69da_dbac++) {
            t = d_4512_5e24[d_69da_da0c][d_69da_dbac];
            if (t > 79)
                used[t - 80] = -1;
        }
    p = d_69da_2c3c;
    for (d_69da_d9d2 = 1; d_69da_d9d2 <= 30; d_69da_d9d2++) {
        d_69da_da56 = *p;
        p++;
        d_69da_da58 = *p;
        p++;
        d_69da_daa4 = *p;
        p++;
        a[d_69da_d9d2 - 1] = d_69da_da56;
        b[d_69da_d9d2 - 1] = d_69da_da58;
        c[d_69da_d9d2 - 1] = d_69da_daa4;
        for (d_69da_d9a0 = d_69da_da56; d_69da_d9a0 <= d_69da_da58 - 1; d_69da_d9a0++)
            for (d_69da_d9ea = d_69da_d9a0 + 1; d_69da_d9ea <= d_69da_da58; d_69da_d9ea++) {
                unsigned char r;

                if (d_69da_da56 == 51 && d_69da_d99a == 1)
                    r = 1;
                else
                    r = 3;
                if (d_5dbf_0996[0][d_69da_d9a0 - 1] + f_2162_0da1(r) - f_2162_0da1(r) <
                    d_5dbf_0996[0][d_69da_d9ea - 1] + f_2162_0da1(r) - f_2162_0da1(r)) {
                    f_2162_13fc((void *)&d_69da_b342[d_69da_d9a0], (void *)&d_69da_b342[d_69da_d9ea], 2);
                    f_2162_13fc((void *)&used[d_69da_d9a0 - 1], (void *)&used[d_69da_d9ea - 1], 1);
                    for (d_69da_da6e = 0; d_69da_da6e <= 4; d_69da_da6e++)
                        f_2162_13fc(&(d_5dbf_0996[0] - 1)[d_69da_da6e * 460 + d_69da_d9a0], &(d_5dbf_0996[0] - 1)[d_69da_da6e * 460 + d_69da_d9ea], 1);
                    f_a330_4795(d_69da_d9a0 + 79, d_69da_d9ea + 79);
                    for (d_69da_da0c = 1; d_69da_da0c <= 6; d_69da_da0c++)
                        for (d_69da_db6a = 0; d_69da_db6a <= 63; d_69da_db6a++) {
                            if (d_4512_5e24[d_69da_da0c][d_69da_db6a] == d_69da_d9a0 + 79)
                                d_4512_5e24[d_69da_da0c][d_69da_db6a] = d_69da_d9ea + 79;
                            else if (d_4512_5e24[d_69da_da0c][d_69da_db6a] == d_69da_d9ea + 79)
                                d_4512_5e24[d_69da_da0c][d_69da_db6a] = d_69da_d9a0 + 79;
                        }
                }
            }
    }
    for (d_69da_da0c = 6; d_69da_da0c >= 5; d_69da_da0c--)
        for (d_69da_dbae = 2; d_69da_dbae <= 31; d_69da_dbae++) {
            while (used[a[d_69da_dbae - 2] - 1])
                a[d_69da_dbae - 2]++;
            d_4512_5e24[d_69da_da0c][d_69da_dbae] = a[d_69da_dbae - 2] + 79;
            used[a[d_69da_dbae - 2] - 1] = -1;
            a[d_69da_dbae - 2]++;
        }
    j = 4;
    for (d_69da_dbb0 = 0; d_69da_dbb0 <= 29; d_69da_dbb0++)
        for (n = 1; n <= c[d_69da_dbb0]; n++) {
            while (used[a[d_69da_dbb0] - 1])
                a[d_69da_dbb0]++;
            d_4512_5e24[4][j] = a[d_69da_dbb0] + 79;
            used[a[d_69da_dbb0] - 1] = -1;
            j++;
            a[d_69da_dbb0]++;
        }
    for (n = 1; n <= 8; n++) {
        while (used[k - 1])
            k--;
        d_4512_5e24[3][n + 7] = k + 79;
        used[k - 1] = -1;
    }
    for (i = 1; i <= 36; i++) {
        do {
            d_69da_d9d6 = f_2162_0da1(60);
        } while (used[d_69da_d9d6 + 400] != 0);
        d_4512_5e24[1][i - 1] = d_69da_d9d6 + 480;
        used[d_69da_d9d6 + 400] = -1;
    }
}

void f_8c32_308e(void)
{
    char buf[320];
    register int best = 0;

    memset(d_4512_9a18, 0, 540);
    for (d_69da_da0c = 4; d_69da_da0c <= 6; d_69da_da0c++)
        for (d_69da_da0e = 1; d_69da_da0e <= 8; d_69da_da0e++) {
            d_69da_d9d8 = -1;
            for (d_69da_dbb2 = 0; d_69da_dbb2 <= (d_69da_da0c == 4 ? 63 : 31); d_69da_dbb2++) {
                d_69da_d9d6 = d_4512_5e24[d_69da_da0c][d_69da_dbb2];
                d_69da_dbb4 = f_1a70_2bff(d_69da_d9d6) + (d_69da_d9d6 >= 80);
                if (d_4512_9a18[d_69da_d9d6] == 0 && (d_69da_dbb4 > best || d_69da_d9d8 == -1)) {
                    best = d_69da_dbb4;
                    d_69da_d9d8 = d_69da_d9d6;
                }
            }
            d_4512_9a18[d_69da_d9d8] = d_69da_da0c;
            if (f_1a70_2bc7(d_69da_d9d8)) {
                if (d_69da_da0c == 4)
                    strcpy(d_536d_572b, "UEFA");
                else if (d_69da_da0c == 5)
                    strcpy(d_536d_572b, "Cup Winners");
                else
                    strcpy(d_536d_572b, "European");
                sprintf(buf, "%s have been seeded|in the %s cup", (char far *)d_69da_b1fc[d_69da_d9d8], d_536d_572b);
                f_1a70_0b80(buf);
            }
        }
}

void f_8c32_31f9(void)
{
    char used[540];

    memset(used, 0, sizeof used);
    for (d_69da_da0c = 6; d_69da_da0c >= 5; d_69da_da0c--) {
        do {
            d_69da_d9d8 = f_2162_0da1(400) + 80;
        } while (used[d_69da_d9d8] != 0 || d_5dbf_0946[d_69da_d9d8] <= 16);
        d_4512_5e24[d_69da_da0c][0] = d_69da_d9d8;
        used[d_69da_d9d8] = -1;
        d_69da_d9d8 = -1;
        for (d_69da_d9d6 = 0; d_69da_d9d6 <= 19; d_69da_d9d6++) {
            if (used[d_69da_d9d6] == 0 && f_1a70_2bc7(d_69da_d9d6) == 0) {
                d_69da_db58 = d_69da_da0c == 5 ? 4 : 2;
                d_69da_dbb4 = f_1a70_2bff(d_69da_d9d6) + f_2162_0da1(d_69da_db58) - f_2162_0da1(d_69da_db58);
                if (d_69da_dbb4 > d_69da_d9e0 || d_69da_d9d8 == -1) {
                    d_69da_d9d8 = d_69da_d9d6;
                    d_69da_d9e0 = d_69da_dbb4;
                }
            }
        }
        d_4512_5e24[d_69da_da0c][1] = d_69da_d9d8;
        used[d_69da_d9d8] = -1;
    }
    for (d_69da_dbb2 = 1; d_69da_dbb2 <= 4; d_69da_dbb2++) {
        d_69da_d9d8 = -1;
        for (d_69da_d9d6 = 0; d_69da_d9d6 <= 19; d_69da_d9d6++) {
            if (used[d_69da_d9d6] == 0 && f_1a70_2bc7(d_69da_d9d6) == 0) {
                d_69da_dbb4 = f_1a70_2bff(d_69da_d9d6) + f_2162_0da1(2) - f_2162_0da1(2);
                if (d_69da_dbb4 > d_69da_d9e0 || d_69da_d9d8 == -1) {
                    d_69da_d9d8 = d_69da_d9d6;
                    d_69da_d9e0 = d_69da_dbb4;
                }
            }
        }
        d_4512_5e24[4][d_69da_dbb2 - 1] = d_69da_d9d8;
        used[d_69da_d9d8] = -1;
    }
    d_4512_6376[0] = d_4512_5e24[5][1];
    d_4512_6376[1] = d_4512_5e24[6][1];
    memset(used, 0, sizeof used);
    for (d_69da_dbb2 = 0; d_69da_dbb2 <= 79; d_69da_dbb2++) {
        d_69da_d9d8 = -1;
        for (d_69da_d9d6 = 0; d_69da_d9d6 <= 79; d_69da_d9d6++) {
            if (used[d_69da_d9d6] == 0) {
                d_69da_dbb4 = f_1a70_2bff(d_69da_d9d6) + 150 - d_69da_d9d6 / 20 * 50;
                if (d_69da_dbb4 > d_69da_d9e0 || d_69da_d9d8 == -1) {
                    d_69da_d9d8 = d_69da_d9d6;
                    d_69da_d9e0 = d_69da_dbb4;
                }
            }
        }
        if (d_69da_dbb2 < 48)
            d_4512_5e24[2][d_69da_dbb2 + 32] = d_69da_d9d8;
        else
            d_4512_5e24[2][d_69da_dbb2 - 48] = d_69da_d9d8;
        used[d_69da_d9d8] = -1;
    }
}

void f_8c32_353a(void)
{
    d_69da_d9ac++;
    d_5dbf_1292[d_69da_d9ac - 1][0][d_69da_d996] = d_69da_dab0 * 32;
    d_5dbf_1292[d_69da_d9ac - 1][1][d_69da_d996] = d_69da_daae * 32;
}

void f_8c32_3589(void)
{
    register int i;

    if (d_69da_d996 == 90) {
        for (d_69da_d9de = 0; d_69da_d9de <= 2; d_69da_d9de++)
            for (i = 0; i <= 1; i++) {
                d_5dbf_1292[d_69da_d9de * 2][i][i * 2 + 93] = d_4512_6324[d_69da_d9de + 1][5] * 32;
                d_5dbf_1292[d_69da_d9de * 2][1 - i][i * 2 + 93] = d_4512_6324[d_69da_d9de + 1][2] * 32;
                d_5dbf_1292[d_69da_d9de * 2 + 1][i][i * 2 + 93] = d_4512_6324[d_69da_d9de + 1][4] * 32;
                d_5dbf_1292[d_69da_d9de * 2 + 1][1 - i][i * 2 + 93] = d_4512_6324[d_69da_d9de + 1][3] * 32;
            }
    } else {
        for (d_69da_d9de = 0; d_69da_d9de <= 2; d_69da_d9de++) {
            d_5dbf_1292[d_69da_d9de][0][97] = d_4512_6284[d_69da_d9de * 2] * 32;
            d_5dbf_1292[d_69da_d9de][1][97] = d_4512_6284[d_69da_d9de * 2 + 1] * 32;
        }
    }
}

void f_8c32_36fa(void)
{
    d_69da_da6e = 0;
    do {
        d_69da_d9a0 = d_69da_da6e * 20;
        do {
            d_69da_d9ea = d_69da_d9a0 + 1;
            do {
                d_69da_dbb6 = d_4512_03d8[0][d_4512_6324[0][d_69da_d9a0]] * 3 + d_69da_d9ba
                    - d_4512_03d8[0][d_4512_6324[0][d_69da_d9a0]] - d_4512_03d8[1][d_4512_6324[0][d_69da_d9a0]];
                d_69da_dbb8 = d_4512_03d8[0][d_4512_6324[0][d_69da_d9ea]] * 3 + d_69da_d9ba
                    - d_4512_03d8[0][d_4512_6324[0][d_69da_d9ea]] - d_4512_03d8[1][d_4512_6324[0][d_69da_d9ea]];
                d_69da_dbba = d_4512_03d8[2][d_4512_6324[0][d_69da_d9a0]];
                d_69da_dbbc = d_4512_03d8[2][d_4512_6324[0][d_69da_d9ea]];
                d_69da_dafc = d_69da_da6e == 0 ? d_4512_03d8[3][d_4512_6324[0][d_69da_d9a0]] : 0;
                d_69da_dafe = d_69da_da6e == 0 ? d_4512_03d8[3][d_4512_6324[0][d_69da_d9ea]] : 0;
                if (d_69da_dbb6 < d_69da_dbb8 ||
                    (d_69da_dbb6 == d_69da_dbb8 && d_69da_dbba - d_69da_dafc < d_69da_dbbc - d_69da_dafe) ||
                    (d_69da_dbb6 == d_69da_dbb8 && d_69da_dbba - d_69da_dafc == d_69da_dbbc - d_69da_dafe &&
                     d_69da_dbba < d_69da_dbbc))
                    f_2162_13fc(&d_4512_6324[0][d_69da_d9a0], &d_4512_6324[0][d_69da_d9ea], 1);
                d_69da_d9ea++;
            } while (d_69da_d9ea != d_69da_da6e * 20 + 20);
            d_69da_d9a0++;
        } while (d_69da_d9a0 != d_69da_da6e * 20 + 19);
        d_69da_da6e++;
    } while (d_69da_da6e != 4);
}
