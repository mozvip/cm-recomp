/* @at 8683:0000 */
/* @data 60ae:2e28 */
/* @module */

/* Overlay 4 (CM1's 7EEB.C, ported): the end of a match and of a season (the result line,
 * the form tables and league tables, promotions and relegations), the cup and European
 * draws and fixtures. CM93 adds the Anglo-Italian Cup (f_8683_245e, 28f5) and drops
 * CM1's 3d47 / 3da5 / 3f0f. */
#include <stdio.h>
#include <string.h>
#include <mem.h>

/* the functions, in address order: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_8683_0000(void);
void f_8683_00a2(void);
void f_8683_0723(int a, int b, int c, int d);
void f_8683_0d70(int a, int b, int c, int d);
void f_8683_1102(int x);
void f_8683_1165(int x);
void f_8683_11f8(int team, long amount, long z);
void f_8683_1244(int team, int amount);
void f_8683_12d3(void);
void f_8683_1661(int team, int delta);
void f_8683_16db(int team, int b, int c);
void f_8683_18b9(int t, int a, int b);
void f_8683_1914(int t, int a, int b);
void f_8683_1952(void);
void f_8683_1f24(void);
void f_8683_21a4(void);
void f_8683_245e(void);
void f_8683_27fb(int g);
void f_8683_28f5(int g);
void f_8683_2a29(int comp, int first, int last, int week, int other);
void f_8683_2f3b(void);
void f_8683_3456(void);
void f_8683_35c9(void);
void f_8683_3924(void);
void f_8683_3974(void);
void f_8683_3b21(void);

void f_1bd3_1a23();
char far *f_1bd3_0f30(char far *s, unsigned n);
char far *f_14bc_4a14(int player);
int f_7732_292a(int week, int n);
char f_14bc_248a(int);
char f_14bc_2594(int);
char f_14bc_25c5(int);
char f_14bc_2b82(int);
char f_14bc_2784(int, int);
char f_14bc_2835(int, int);
char f_14bc_28cc(int, int);
char f_14bc_295d(int, int);
void f_96bb_4999(int, int, int, int);
void f_96bb_48fa(int, int, int, int);
void f_96bb_4a38(int, int, int, int);
void f_96bb_4ac3(int, int, int, int);
void f_96bb_4bc4(int, int, int);
void f_96bb_6852(int, int, int);
void f_b628_029e(int, int, char, char);
extern int d_60ae_dd76;
extern int d_60ae_dce0;
extern int d_60ae_dc7a;
extern int d_60ae_dd9c;
extern int d_60ae_dccc;
extern char d_60ae_d957;
extern char d_60ae_d959;
extern char d_60ae_d95a;
extern char d_60ae_d973;
extern int d_60ae_dc2c;
extern int d_60ae_dc2a;
extern int d_60ae_dcd2;
extern int d_60ae_dcd0;
extern int d_60ae_dc82;
extern int d_60ae_dc84;
extern int d_60ae_d81f;
extern int d_60ae_d821;
extern int d_60ae_dcca;
extern int d_60ae_dcc8;
extern int d_60ae_dc30;
extern int d_60ae_dc2e;
extern int d_60ae_dd96;
extern int d_60ae_dd94;
extern int d_60ae_dd90;
extern int d_60ae_dd8e;
extern int d_60ae_dd8c;
extern int d_60ae_dd8a;
extern int d_60ae_dd80;
extern int d_60ae_dd82;
extern int d_60ae_dd28;
extern int d_60ae_dd7e;
extern int d_60ae_dd7c;
extern int d_60ae_dd7a;
extern int d_60ae_dc68;
extern int d_60ae_dc6a;
extern char near *d_60ae_b572[];
extern char far d_2289_0078[];
extern char far d_2289_5bdc[][154];
extern char far d_2289_44a8[];
extern char far d_2289_1e28[][82][5];
extern unsigned char far d_2289_bb10[][6][5];
extern unsigned char far d_2289_bde0[][2][4];
extern char far d_471b_b01c[];
extern unsigned char far d_323f_4c14[][82];
extern int far d_323f_00a0[][80];
extern int far d_323f_00a2[][80];
void far *f_1bd3_1617(int handle, int page);
int f_1bd3_1369(int a, int b);
int f_1bd3_1307(int a, int b);
int f_a3de_0000(int x);
char f_14bc_2cc0(int);
void f_96bb_1968(int team, char far *s);
extern int d_60ae_dd60;
extern int d_60ae_dd92;
extern int d_60ae_fde2;
extern int d_60ae_fde4;
extern int d_60ae_fdea;
struct s_a01a { long pad[400]; long v[80]; };
extern struct s_a01a far *d_60ae_fade;
extern long far *d_60ae_faee;
extern char far *d_60ae_fae2;
extern int d_60ae_dd64;
extern int d_60ae_dd5a;
extern int d_60ae_dd3c;
extern int d_60ae_dd26;
extern int d_60ae_dd78;
extern unsigned char d_60ae_2ce0[];
extern unsigned char d_60ae_2cee[];
extern int far d_2289_be10[][4];
extern int far d_2289_bda4[][5];
extern unsigned char far d_2289_fb10[][20];
extern char far d_2289_4368[];
extern int far d_323f_47b4[];
extern int far d_323f_0460[];
extern int far d_323f_4854[];
extern unsigned char far d_323f_211c[];
extern unsigned char far d_323f_4e00[];
extern unsigned char far d_323f_4f9a[];
extern unsigned char far d_323f_5320[][82];
char f_a3de_0319(int v);
long f_1bd3_0d69(long n);               /* random below n */
extern int d_60ae_dd5c;
extern int d_60ae_dd48;
extern int d_60ae_db84;
extern unsigned char d_60ae_2d02[];
extern unsigned char d_60ae_2d20[];
extern unsigned char d_60ae_2d2c[];
extern int far d_323f_0000[][80];
extern int far d_54d9_1076[][2][98];
extern int far d_54d9_1200[][2][98];       /* d_54d9_1076 + 1 row: [r - 1] makes BCC put the base in BX */
extern unsigned char far d_2289_5838[];
extern char far d_2289_5748[];
char far *f_1bd3_100b(char far *s);
char far *f_14bc_3523(int x);
void f_14bc_3c75(float x, float y, int colour, char far *s);
void f_14bc_4bd3(char far *title);
void f_14bc_58db(int a);
int f_14bc_6b05(int x);
extern int d_60ae_db86;
extern int d_60ae_dcc4;
extern char d_60ae_d974;
extern char far d_2289_5658[][80];
extern unsigned char far d_2289_c250[];
void f_1bd3_13a3(void far *a, void far *b, int n);
void f_9e77_4d7d(int a, int b);
float f_14bc_2cf4(int x);
void f_14bc_0b83(char far *);
extern int d_60ae_dcdc;
extern int d_60ae_dcda;
extern int d_60ae_dc8e;
extern int d_60ae_dd98;
extern int d_60ae_dbc8;
extern int d_60ae_db82;
extern int d_60ae_dd24;
extern int d_60ae_db80;
extern int d_60ae_db7e;
extern int d_60ae_dbda;
extern int d_60ae_dd52;
extern int d_60ae_dd86;
extern int d_60ae_dd54;
extern int d_60ae_db7c;
extern int d_60ae_db7a;
extern int d_60ae_db78;
extern int d_60ae_db76;
extern int d_60ae_dc36;
extern int d_60ae_dc34;
extern int d_60ae_2d74[];
extern int d_60ae_b6b8[];
extern int far d_323f_0e52[];
extern int far d_323f_0e6e[];
extern unsigned char far d_323f_4fec[][82];
extern unsigned char far d_54d9_0903[][460];
extern unsigned char far d_54d9_08b4[];
extern char far d_2289_4d9a[];
extern char far d_2289_fb0c[];

void f_8683_0000(void)
{
    FILE *fp;

    f_1bd3_1a23(2);
    fp = fopen(d_2289_0078, "rb+");
    for (d_60ae_dd76 = 0; d_60ae_dd76 <= d_60ae_dce0 - 1; d_60ae_dd76++) {
        fseek(fp, (long)(d_60ae_dc7a + d_60ae_dd76 - 1) * 154, 0);
        fwrite(d_2289_5bdc[d_60ae_dd76], 1, 154, fp);
    }
    fclose(fp);
}

void f_8683_00a2(void)
{
    char wd[8];
    char buf[320];

    d_60ae_dccc = f_7732_292a(d_60ae_dd9c, d_60ae_dd76 + 1);
    if (d_60ae_d959) {
        d_471b_b01c[d_60ae_dccc * 80 + d_60ae_dd76 * 2] = d_60ae_dc2c;
        d_471b_b01c[d_60ae_dccc * 80 + d_60ae_dd76 * 2 + 1] = d_60ae_dc2a;
    }
    sprintf(d_2289_44a8, "%s %d", (char far *)d_60ae_b572[d_60ae_dcd2], d_60ae_dc2c);
    if (d_60ae_dc2c > 6) {
        strcat(d_2289_44a8, " (");
        strcat(d_2289_44a8, f_14bc_4a14(d_60ae_dc2c));
        strcat(d_2289_44a8, ")");
    }
    strcat(d_2289_44a8, " ");
    strcat(d_2289_44a8, d_60ae_b572[d_60ae_dcd0]);
    strcat(d_2289_44a8, " ");
    sprintf(buf, "%d", d_60ae_dc2a);
    strcat(d_2289_44a8, buf);
    if (d_60ae_dc2a > 6) {
        strcat(d_2289_44a8, " (");
        strcat(d_2289_44a8, f_14bc_4a14(d_60ae_dc2a));
        strcat(d_2289_44a8, ")");
    }
    if (d_60ae_dd9c > 8 && d_60ae_d957 == 0) {
        if (d_60ae_dc2c > d_60ae_dc2a) {
            f_96bb_4999(d_60ae_dc82, d_60ae_dc84, d_60ae_dc2a, d_60ae_dc2c);
            f_96bb_48fa(d_60ae_dc84, d_60ae_dc82, d_60ae_dc2c, d_60ae_dc2a);
        } else if (d_60ae_dc2a > d_60ae_dc2c) {
            f_96bb_48fa(d_60ae_dc82, d_60ae_dc84, d_60ae_dc2a, d_60ae_dc2c);
            f_96bb_4999(d_60ae_dc84, d_60ae_dc82, d_60ae_dc2c, d_60ae_dc2a);
        }
    }
    if (d_60ae_dd9c > 10 && d_60ae_d95a) {
        f_96bb_4a38(d_60ae_dc84, d_60ae_dc82, d_60ae_d81f, d_60ae_d821);
        f_96bb_4ac3(d_60ae_dc84, d_60ae_dc82, d_60ae_d81f, d_60ae_d821);
    }
    if (d_60ae_dd9c > 8) {
        if (d_60ae_dcd2 < 80)
            f_b628_029e(d_60ae_dc84, d_60ae_dc82, d_60ae_dc2c, d_60ae_dc2a);
        if (d_60ae_dcd0 < 80)
            f_b628_029e(d_60ae_dc82, d_60ae_dc84, d_60ae_dc2a, d_60ae_dc2c);
    }
    if (f_14bc_2b82(d_60ae_dd9c) || f_14bc_25c5(d_60ae_dd9c)
        || f_14bc_2784(d_60ae_dd9c, d_60ae_dd76 + 1) || f_14bc_2835(d_60ae_dd9c, d_60ae_dd76 + 1)
        || f_14bc_28cc(d_60ae_dd9c, d_60ae_dd76 + 1) || f_14bc_295d(d_60ae_dd9c, d_60ae_dd76 + 1)) {
        d_60ae_dc2c += d_60ae_dcca;
        d_60ae_dc2a += d_60ae_dcc8;
        if (d_60ae_d973) {
            sprintf(buf, "  AGG:%d-%d", d_60ae_dc2c, d_60ae_dc2a);
            strcat(d_2289_44a8, buf);
        }
        d_60ae_dc2c += d_60ae_dc30;
        d_60ae_dc2a += d_60ae_dc2e;
    }
    if (d_60ae_dc2c > d_60ae_dc2a) {
        if (f_14bc_248a(d_60ae_dd9c)) {
            d_323f_4c14[12][d_60ae_dcd2]++;
            d_323f_4c14[13][d_60ae_dcd0]++;
            d_323f_4c14[18][d_60ae_dcd0]++;
            sprintf(buf, "%sW", d_2289_1e28[0][d_60ae_dcd2]);
            strcpy(d_2289_1e28[0][d_60ae_dcd2], f_1bd3_0f30(buf, 4));
            sprintf(buf, "%sL", d_2289_1e28[1][d_60ae_dcd0]);
            strcpy(d_2289_1e28[1][d_60ae_dcd0], f_1bd3_0f30(buf, 4));
        } else
            f_8683_0723(d_60ae_dc84, d_60ae_dc82, d_60ae_dc2c, d_60ae_dc2a);
    } else if (d_60ae_dc2c == d_60ae_dc2a) {
        if (f_14bc_248a(d_60ae_dd9c)) {
            d_323f_4c14[17][d_60ae_dcd0]++;
            if (d_60ae_dc2c > 0)
                strcpy(wd, "X");
            else
                strcpy(wd, "D");
            sprintf(buf, "%s%s", d_2289_1e28[0][d_60ae_dcd2], (char far *)wd);
            strcpy(d_2289_1e28[0][d_60ae_dcd2], f_1bd3_0f30(buf, 4));
            sprintf(buf, "%s%s", d_2289_1e28[1][d_60ae_dcd0], (char far *)wd);
            strcpy(d_2289_1e28[1][d_60ae_dcd0], f_1bd3_0f30(buf, 4));
        } else
            f_8683_0d70(d_60ae_dc84, d_60ae_dc82, d_60ae_dc2c, d_60ae_dc2a);
    } else {
        if (f_14bc_248a(d_60ae_dd9c)) {
            d_323f_4c14[12][d_60ae_dcd0]++;
            d_323f_4c14[16][d_60ae_dcd0]++;
            d_323f_4c14[13][d_60ae_dcd2]++;
            sprintf(buf, "%sL", d_2289_1e28[0][d_60ae_dcd2]);
            strcpy(d_2289_1e28[0][d_60ae_dcd2], f_1bd3_0f30(buf, 4));
            sprintf(buf, "%sW", d_2289_1e28[1][d_60ae_dcd0]);
            strcpy(d_2289_1e28[1][d_60ae_dcd0], f_1bd3_0f30(buf, 4));
        } else
            f_8683_0723(d_60ae_dc82, d_60ae_dc84, d_60ae_dc2a, d_60ae_dc2c);
    }
    if (f_14bc_248a(d_60ae_dd9c)) {
        d_323f_4c14[14][d_60ae_dcd2] += d_60ae_dc2c;
        d_323f_4c14[15][d_60ae_dcd2] += d_60ae_dc2a;
        d_323f_4c14[14][d_60ae_dcd0] += d_60ae_dc2a;
        d_323f_4c14[15][d_60ae_dcd0] += d_60ae_dc2c;
        d_323f_4c14[19][d_60ae_dcd0] += d_60ae_dc2a;
        d_323f_4c14[20][d_60ae_dcd0] += d_60ae_dc2c;
    }
}

void f_8683_0723(int a, int b, int c, int d)
{
    if (f_14bc_2594(d_60ae_dd9c)) {
        d_323f_00a0[0][d_60ae_dd96] = a;
        d_60ae_dd96++;
        if (d_60ae_dd9c >= 92) {
            d_323f_00a2[0][0] = b;
            d_60ae_dd80 = -1;
            f_96bb_4bc4(a, 1, 100);
            f_8683_11f8(a, 100000L, 7500L);
            f_96bb_6852(1, a, b);
        }
    } else if (f_14bc_25c5(d_60ae_dd9c) && !d_60ae_d959) {
        d_323f_00a0[1][d_60ae_dd94] = a;
        d_60ae_dd94++;
        if (d_60ae_dd9c >= 82) {
            d_323f_00a2[1][0] = b;
            d_60ae_dd82 = -1;
            f_96bb_4bc4(a, 2, 100);
            f_8683_11f8(a, 150000L, 5000L);
            f_96bb_6852(2, a, b);
        }
    } else if (f_14bc_295d(d_60ae_dd9c, d_60ae_dd76 + 1)) {
        if (d_60ae_dd9c <= 61) {
            f_8683_1165(a);
            d_2289_bb10[0][d_60ae_dc6a][d_60ae_dc68] = d_2289_bb10[0][d_60ae_dc6a][d_60ae_dc68] + 1;
            d_2289_bb10[1][d_60ae_dc6a][d_60ae_dc68] = d_2289_bb10[1][d_60ae_dc6a][d_60ae_dc68] + 1;
            d_2289_bb10[4][d_60ae_dc6a][d_60ae_dc68] = d_2289_bb10[4][d_60ae_dc6a][d_60ae_dc68] + c;
            d_2289_bb10[5][d_60ae_dc6a][d_60ae_dc68] = d_2289_bb10[5][d_60ae_dc6a][d_60ae_dc68] + d;
            f_8683_1165(b);
            d_2289_bb10[0][d_60ae_dc6a][d_60ae_dc68] = d_2289_bb10[0][d_60ae_dc6a][d_60ae_dc68] + 1;
            d_2289_bb10[3][d_60ae_dc6a][d_60ae_dc68] = d_2289_bb10[3][d_60ae_dc6a][d_60ae_dc68] + 1;
            d_2289_bb10[4][d_60ae_dc6a][d_60ae_dc68] = d_2289_bb10[4][d_60ae_dc6a][d_60ae_dc68] + d;
            d_2289_bb10[5][d_60ae_dc6a][d_60ae_dc68] = d_2289_bb10[5][d_60ae_dc6a][d_60ae_dc68] + c;
        } else if (!d_60ae_d959) {
            d_323f_00a0[2][d_60ae_dd90] = a;
            d_60ae_dd90++;
            if (d_60ae_dd9c == 86) {
                d_323f_00a2[2][0] = b;
                d_60ae_dd28 = -1;
                f_96bb_4bc4(a, 3, 100);
                f_8683_11f8(a, 75000L, 2000L);
                f_96bb_6852(3, a, b);
            }
        }
    } else if (f_14bc_2784(d_60ae_dd9c, d_60ae_dd76 + 1)) {
        d_323f_00a0[3][d_60ae_dd8e] = a;
        d_60ae_dd8e++;
        if (d_60ae_dd9c == 95) {
            d_323f_00a2[3][0] = b;
            d_60ae_dd7e = -1;
            f_96bb_4bc4(a, 4, 100);
            f_8683_11f8(a, 250000L, 10000L);
            f_96bb_6852(4, a, b);
        }
    } else if (f_14bc_2835(d_60ae_dd9c, d_60ae_dd76 + 1)) {
        d_323f_00a0[4][d_60ae_dd8c] = a;
        d_60ae_dd8c++;
        if (d_60ae_dd9c == 91) {
            d_323f_00a2[4][0] = b;
            d_60ae_dd7c = -1;
            f_96bb_4bc4(a, 5, 100);
            f_8683_11f8(a, 250000L, 10000L);
            f_96bb_6852(5, a, b);
        }
    } else if (f_14bc_28cc(d_60ae_dd9c, d_60ae_dd76 + 1)) {
        if (d_60ae_dd9c < 57 || d_60ae_dd9c > 81) {
            d_323f_00a0[5][d_60ae_dd8a] = a;
            d_60ae_dd8a++;
            if (d_60ae_dd9c == 97) {
                d_323f_00a2[5][0] = b;
                d_60ae_dd7a = -1;
                f_96bb_4bc4(a, 6, 100);
                f_8683_11f8(a, 1000000L, 20000L);
                f_96bb_6852(6, a, b);
            }
        } else {
            f_8683_1102(a);
            d_2289_bde0[0][d_60ae_dc6a][d_60ae_dc68] = d_2289_bde0[0][d_60ae_dc6a][d_60ae_dc68] + 1;
            d_2289_bde0[1][d_60ae_dc6a][d_60ae_dc68] = d_2289_bde0[1][d_60ae_dc6a][d_60ae_dc68] + 1;
            d_2289_bde0[4][d_60ae_dc6a][d_60ae_dc68] = d_2289_bde0[4][d_60ae_dc6a][d_60ae_dc68] + c;
            d_2289_bde0[5][d_60ae_dc6a][d_60ae_dc68] = d_2289_bde0[5][d_60ae_dc6a][d_60ae_dc68] + d;
            f_8683_1102(b);
            d_2289_bde0[0][d_60ae_dc6a][d_60ae_dc68] = d_2289_bde0[0][d_60ae_dc6a][d_60ae_dc68] + 1;
            d_2289_bde0[3][d_60ae_dc6a][d_60ae_dc68] = d_2289_bde0[3][d_60ae_dc6a][d_60ae_dc68] + 1;
            d_2289_bde0[4][d_60ae_dc6a][d_60ae_dc68] = d_2289_bde0[4][d_60ae_dc6a][d_60ae_dc68] + d;
            d_2289_bde0[5][d_60ae_dc6a][d_60ae_dc68] = d_2289_bde0[5][d_60ae_dc6a][d_60ae_dc68] + c;
        }
    } else if (f_14bc_2b82(d_60ae_dd9c) && !d_60ae_d959) {
        d_323f_00a0[6][d_60ae_dd76] = a;
    }
}

void f_8683_0d70(int a, int b, int c, int d)
{
    if (f_14bc_295d(d_60ae_dd9c, d_60ae_dd76 + 1) && d_60ae_dd9c <= 61) {
        f_8683_1165(a);
        d_2289_bb10[0][d_60ae_dc6a][d_60ae_dc68] = d_2289_bb10[0][d_60ae_dc6a][d_60ae_dc68] + 1;
        d_2289_bb10[2][d_60ae_dc6a][d_60ae_dc68] = d_2289_bb10[2][d_60ae_dc6a][d_60ae_dc68] + 1;
        d_2289_bb10[4][d_60ae_dc6a][d_60ae_dc68] = d_2289_bb10[4][d_60ae_dc6a][d_60ae_dc68] + c;
        d_2289_bb10[5][d_60ae_dc6a][d_60ae_dc68] = d_2289_bb10[5][d_60ae_dc6a][d_60ae_dc68] + d;
        f_8683_1165(b);
        d_2289_bb10[0][d_60ae_dc6a][d_60ae_dc68] = d_2289_bb10[0][d_60ae_dc6a][d_60ae_dc68] + 1;
        d_2289_bb10[2][d_60ae_dc6a][d_60ae_dc68] = d_2289_bb10[2][d_60ae_dc6a][d_60ae_dc68] + 1;
        d_2289_bb10[4][d_60ae_dc6a][d_60ae_dc68] = d_2289_bb10[4][d_60ae_dc6a][d_60ae_dc68] + d;
        d_2289_bb10[5][d_60ae_dc6a][d_60ae_dc68] = d_2289_bb10[5][d_60ae_dc6a][d_60ae_dc68] + c;
    } else if (f_14bc_28cc(d_60ae_dd9c, d_60ae_dd76 + 1) && d_60ae_dd9c >= 57 && d_60ae_dd9c <= 81) {
        f_8683_1102(a);
        d_2289_bde0[0][d_60ae_dc6a][d_60ae_dc68] = d_2289_bde0[0][d_60ae_dc6a][d_60ae_dc68] + 1;
        d_2289_bde0[2][d_60ae_dc6a][d_60ae_dc68] = d_2289_bde0[2][d_60ae_dc6a][d_60ae_dc68] + 1;
        d_2289_bde0[4][d_60ae_dc6a][d_60ae_dc68] = d_2289_bde0[4][d_60ae_dc6a][d_60ae_dc68] + c;
        d_2289_bde0[5][d_60ae_dc6a][d_60ae_dc68] = d_2289_bde0[5][d_60ae_dc6a][d_60ae_dc68] + d;
        f_8683_1102(b);
        d_2289_bde0[0][d_60ae_dc6a][d_60ae_dc68] = d_2289_bde0[0][d_60ae_dc6a][d_60ae_dc68] + 1;
        d_2289_bde0[2][d_60ae_dc6a][d_60ae_dc68] = d_2289_bde0[2][d_60ae_dc6a][d_60ae_dc68] + 1;
        d_2289_bde0[4][d_60ae_dc6a][d_60ae_dc68] = d_2289_bde0[4][d_60ae_dc6a][d_60ae_dc68] + d;
        d_2289_bde0[5][d_60ae_dc6a][d_60ae_dc68] = d_2289_bde0[5][d_60ae_dc6a][d_60ae_dc68] + c;
    }
}

void f_8683_1102(int x)
{
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= 1; d_60ae_dd60++)
        for (d_60ae_dd92 = 0; d_60ae_dd92 <= 3; d_60ae_dd92++)
            if (d_2289_be10[d_60ae_dd60][d_60ae_dd92] == x) {
                d_60ae_dc6a = d_60ae_dd60;
                d_60ae_dc68 = d_60ae_dd92;
                d_60ae_dd92 = 3;
                d_60ae_dd60 = 1;
            }
}

void f_8683_1165(int x)
{
    unsigned char rows;
    unsigned char cols;

    rows = d_60ae_dd9c <= 37 ? 6 : 4;
    cols = d_60ae_dd9c <= 37 ? 3 : 4;
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= rows - 1; d_60ae_dd60++)
        for (d_60ae_dd92 = 0; d_60ae_dd92 <= cols - 1; d_60ae_dd92++)
            if (d_2289_bda4[d_60ae_dd60][d_60ae_dd92] == x) {
                d_60ae_dc6a = d_60ae_dd60;
                d_60ae_dc68 = d_60ae_dd92;
                d_60ae_dd92 = 4;
                d_60ae_dd60 = 7;
            }
}

void f_8683_11f8(int team, long amount, long z)
{
    if (team < 80) {
        d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
        d_60ae_fade->v[team] += amount;
        f_8683_1244(team, z);
    }
}

void f_8683_1244(int team, int amount)
{
    d_60ae_faee = f_1bd3_1617(d_60ae_fdea, 1);
    d_60ae_faee[d_323f_47b4[team]] += amount / 50 * 50;
    d_60ae_fae2 = f_1bd3_1617(d_60ae_fde4, 1);
    ((int far *)(d_60ae_fae2 + 2600))[d_323f_47b4[team]] += amount / 50 * 50;
}

void f_8683_12d3(void)
{
    unsigned char far *p;
    unsigned char old;
    char last;
    char pair;
    char buf[320];
    register int i;
    int n;

    last = d_60ae_dd9c == 98 ? -1 : 0;
    for (d_60ae_dd64 = 0; d_60ae_dd64 <= 79; d_60ae_dd64++) {
        d_60ae_dd5a = d_2289_fb10[0][d_60ae_dd64];
        old = d_323f_4f9a[d_60ae_dd5a];
        d_323f_4f9a[d_60ae_dd5a] = 2;
        p = d_60ae_2ce0;
        for (i = 1; i <= 7; i++) {
            d_60ae_dd3c = *p;
            p++;
            d_60ae_dd26 = *p;
            p++;
            if (d_60ae_dd64 == d_60ae_dd3c) {
                if (f_a3de_0000(d_60ae_dd26) + (38 - d_60ae_dd78) * 3 < f_a3de_0000(d_60ae_dd64) || d_60ae_dd78 == 38) {
                    pair = (d_60ae_dd3c == 0 || d_60ae_dd3c == 20 || d_60ae_dd3c == 40 || d_60ae_dd3c == 60) && d_60ae_dd3c + 1 == d_60ae_dd26;
                    d_323f_4f9a[d_60ae_dd5a] = pair ? 4 : 3;
                    i = 7;
                }
            }
        }
        if (last) {
            if ((d_60ae_dd64 / 20 == 1 && d_323f_0460[0] == d_60ae_dd5a) ||
                (d_60ae_dd64 / 20 == 2 && d_323f_0460[1] == d_60ae_dd5a) ||
                (d_60ae_dd64 / 20 == 3 && d_323f_0460[2] == d_60ae_dd5a))
                d_323f_4f9a[d_60ae_dd5a] = 3;
        }
        p = d_60ae_2cee;
        for (i = 1; i <= 10; i++) {
            d_60ae_dd3c = *p;
            p++;
            d_60ae_dd26 = *p;
            p++;
            if (d_60ae_dd64 == d_60ae_dd3c) {
                if (f_a3de_0000(d_60ae_dd64) + (38 - d_60ae_dd78) * 3 < f_a3de_0000(d_60ae_dd26) || d_60ae_dd78 == 38) {
                    d_323f_4f9a[d_60ae_dd5a] = 1;
                    i = 9;
                }
            }
        }
        if (old == 2) {
            if (d_323f_4f9a[d_60ae_dd5a] > 2) {
                n = d_323f_4f9a[d_60ae_dd5a] == 4 ? 2 : 1;
                switch (d_60ae_dd5a / 20) {
                case 0:
                    f_8683_11f8(d_60ae_dd5a, n * 125000L, 10000L);
                    break;
                case 1:
                    f_8683_11f8(d_60ae_dd5a, (long)(n * 12500), 5000L);
                    break;
                case 2:
                case 3:
                    f_8683_11f8(d_60ae_dd5a, (long)(n * 6250), 5000L);
                    break;
                }
                if (f_14bc_2cc0(d_60ae_dd5a)) {
                    if (d_60ae_dd64 == 0)
                        strcpy(buf, "Champions!  A great performance.");
                    else
                        strcpy(buf, "Promotion!  A successful season.");
                    f_96bb_1968(d_60ae_dd5a, buf);
                }
            } else if (d_323f_4f9a[d_60ae_dd5a] == 1) {
                if (f_14bc_2cc0(d_60ae_dd5a)) {
                    if (d_60ae_dd64 == 19)
                        strcpy(buf, "Relegation to non-league.  You prat.");
                    else
                        strcpy(buf, "Relegation.  Very poor.");
                    f_96bb_1968(d_60ae_dd5a, buf);
                }
                f_8683_1661(d_60ae_dd5a, -10);
            }
        }
        if (d_60ae_dd78 < 39) {
            if (d_60ae_dd78 == 38)
                f_96bb_6852(0, d_2289_fb10[0][0], d_2289_fb10[0][1]);
            d_323f_5320[d_60ae_dd78][d_60ae_dd5a] = d_60ae_dd64 % 20 + 1;
        }
    }
}

void f_8683_1661(int team, int delta)
{
    if (d_323f_4854[team] < 650) {
        if (d_323f_4f9a[team] < 3 || delta > 0) {
            if (d_323f_211c[d_323f_47b4[team]] < 10)
                d_323f_4e00[team] = f_1bd3_1307(f_1bd3_1369(d_323f_4e00[team] + delta, 100), 0);
        }
    }
}

/* the name of the competition the match of week b is in, and for a cup the round
 * (CM1's f_7eeb_1afc). This C is the original's: BCC 3.0 -S writes exactly the original
 * layout (TASM-assembled, it matches), but BCC -c merges the cups' identical tails
 * (push ax / push si / call f_8683_1914 / add sp,6) into the FA Cup branch instead of the
 * European Cup one, so the object differs from +0x21 (jumps only, same instructions). */
void f_8683_16db(int team, int b, int c)
{
    if (f_14bc_248a(team)) {
        if (c >= 60) {
            __emit__(0x1e);                                 /* push ds */
            _AX = (unsigned)(char near *)"Division Three";
            __emit__((char)0xe9, (char)0xa6, 0x01);         /* jmp 18a4 */
        }
        if (c >= 40) {
            __emit__(0x1e);
            _AX = (unsigned)(char near *)"Division Two";
            __emit__((char)0xe9, (char)0x99, 0x01);
        }
        if (c >= 20) {
            __emit__(0x1e);
            _AX = (unsigned)(char near *)"Division One";
            __emit__((char)0xe9, (char)0x8c, 0x01);
        }
        __emit__(0x1e);
        _AX = (unsigned)(char near *)"FA Premier";
        __emit__((char)0xe9, (char)0x85, 0x01);
    }
    if (f_14bc_2594(team)) {
        strcpy(d_2289_4368, "FA Cup");
        f_8683_18b9(team, 0x4e, 0x4f);
        __emit__((char)0xb8, 0x5d, 0, 0x50, (char)0xb8, 0x5c, 0, (char)0xe9, 0x19, 0x01);
    }                                   /* push 5d / mov ax,5c / jmp 1873 (f_8683_1914) */
    if (f_14bc_25c5(team)) {
        strcpy(d_2289_4368, "Coca-Cola Cup");
        f_8683_18b9(team, 0x3f, 0x43);
        __emit__((char)0xb8, 0x53, 0, 0x50, (char)0xb8, 0x52, 0, (char)0xe9, (char)0xde, 0);
    }
    if (f_14bc_295d(team, b)) {
        strcpy(d_2289_4368, "Ang/Ita Cup");
        f_8683_18b9(team, 0x45, 0x49);
        __emit__((char)0xb8, (char)0xff, (char)0xff, 0x50, (char)0xb8, 0x56, 0, (char)0xe9, (char)0xa1, 0);
    }
    if (f_14bc_2784(team, b)) {
        strcpy(d_2289_4368, "UEFA Cup");
        f_8683_18b9(team, 0x4d, 0x51);
        __emit__((char)0xb8, 0x5f, 0, 0x50, (char)0xb8, 0x59, 0, (char)0xeb, 0x65);
    }
    if (f_14bc_2835(team, b)) {
        strcpy(d_2289_4368, "C/Winners Cup");
        f_8683_18b9(team, 0x4d, 0x51);
        __emit__((char)0xb8, (char)0xff, (char)0xff, 0x50, (char)0xb8, 0x5b, 0, (char)0xeb, 0x29);
    }
    if (f_14bc_28cc(team, b)) {
        strcpy(d_2289_4368, "European Cup");
        f_8683_1914(team, 0x61, -1);
        __emit__((char)0xeb, 0x36);                     /* jmp 18b5 (the epilogue) */
    }
    if (f_14bc_2b82(team)) {
        __emit__(0x1e);
        _AX = (unsigned)(char near *)"Playoff";
        __emit__((char)0xeb, 0x14);                     /* jmp 18a4 */
    }
    if (team == 10) {
        __emit__(0x1e);
        _AX = (unsigned)(char near *)"Charity Shield";
        __emit__((char)0xeb, 0x09);
    }
    if (team < 10)
        strcpy(d_2289_4368, "Friendly");
}

void f_8683_18b9(int t, int a, int b)
{
    if (t == a || t == b) {
        if (strlen(d_2289_4368) + 11 <= 19)
            strcat(d_2289_4368, " Semi-Final");
        else if (strlen(d_2289_4368) + 5 <= 19)
            strcat(d_2289_4368, " Semi");
    }
}

void f_8683_1914(int t, int a, int b)
{
    if (t == a || t == b) {
        if (strlen(d_2289_4368) + 6 <= 19)
            strcat(d_2289_4368, " Final");
    }
}

void f_8683_1952(void)
{
    switch (d_60ae_dd9c) {
    case 1:
        f_8683_2a29(2, 1, 0x20, 0xf, 0x13);
        f_8683_21a4();
        f_8683_2a29(4, 1, 0x40, 0x15, 0x19);
        f_8683_2a29(6, 1, 0x20, 0x1d, 0x21);
        f_8683_2a29(5, 0x21, 0x40, 0x1d, 0x21);
        break;
    case 19:
        for (d_60ae_dd5c = 16; d_60ae_dd5c <= 63; d_60ae_dd5c++)
            d_323f_0000[2][d_60ae_dd5c] = d_323f_0000[2][d_60ae_dd5c + 16];
        f_8683_2a29(2, 1, 0x40, 0x17, 0x1b);
        break;
    case 25:
        f_8683_2a29(4, 1, 0x20, 0x25, 0x29);
        break;
    case 27:
        f_8683_2a29(2, 1, 0x20, 0x1f, -1);
        break;
    case 31:
        f_8683_2a29(2, 1, 0x10, 0x2b, -1);
        break;
    case 32:
        for (d_60ae_dd5c = 0; d_60ae_dd5c <= 19; d_60ae_dd5c++)
            d_323f_0000[1][d_60ae_dd5c + 36] = d_60ae_dd5c + 60;
        f_8683_2a29(1, 1, 0x38, 0x26, -1);
        break;
    case 33:
        f_8683_2a29(6, 1, 0x10, 0x2f, 0x33);
        f_8683_2a29(5, 0x11, 0x20, 0x2f, 0x33);
        break;
    case 37:
        f_8683_245e();
        break;
    case 38:
    case 39:
        for (d_60ae_dd5c = 0; d_60ae_dd5c <= 19; d_60ae_dd5c++)
            d_323f_0000[1][d_60ae_dd5c + 28] = d_60ae_dd5c + 40;
        f_8683_2a29(1, 1, 0x30, 0x2c, -1);
        break;
    case 41:
        f_8683_2a29(4, 0x21, 0x30, 0x2f, 0x33);
        break;
    case 43:
        f_8683_2a29(2, 1, 8, 0x37, -1);
        break;
    case 44:
    case 45:
        for (d_60ae_dd5c = 0; d_60ae_dd5c <= 39; d_60ae_dd5c++)
            d_323f_0000[1][d_60ae_dd5c + 24] = d_60ae_dd5c;
        f_8683_2a29(1, 1, 0x40, 0x34, -1);
        break;
    case 51:
        f_8683_1f24();
        f_8683_2a29(5, 9, 0x10, 0x45, 0x49);
        f_8683_2a29(4, 0x11, 0x18, 0x45, 0x49);
        break;
    case 52:
    case 53:
        f_8683_2a29(1, 1, 0x20, 0x3a, -1);
        break;
    case 55:
        f_8683_2a29(2, 1, 4, 0x3f, 0x43);
        break;
    case 58:
    case 59:
        f_8683_2a29(1, 1, 0x10, 0x40, -1);
        break;
    case 61:
        f_8683_2a29(3, 0x19, 0x1c, 0x45, 0x49);
        break;
    case 64:
    case 65:
        f_8683_2a29(1, 1, 8, 0x46, -1);
        break;
    case 67:
        d_54d9_1076[1][0][82] = d_323f_0000[2][0] << 5;
        d_54d9_1076[1][1][82] = d_323f_0000[2][1] << 5;
        d_60ae_dd82 = 82;
        f_96bb_4bc4(d_323f_0000[2][0], 2, 82);
        f_96bb_4bc4(d_323f_0000[2][1], 2, 82);
        break;
    case 70:
    case 71:
        f_8683_2a29(1, 1, 4, 0x4e, -1);
        break;
    case 73:
        f_8683_2a29(5, 9, 0xc, 0x4d, 0x51);
        f_8683_2a29(4, 0xd, 0x10, 0x4d, 0x51);
        d_54d9_1076[1][0][86] = d_323f_0000[3][0] << 5;
        d_54d9_1076[1][1][86] = d_323f_0000[3][1] << 5;
        d_60ae_dd28 = 86;
        f_96bb_4bc4(d_323f_0000[3][0], 3, 86);
        f_96bb_4bc4(d_323f_0000[3][1], 3, 86);
        break;
    case 78:
    case 79:
        d_54d9_1076[1][0][92] = d_323f_0000[1][0] << 5;
        d_54d9_1076[1][1][92] = d_323f_0000[1][1] << 5;
        d_60ae_dd80 = 92;
        f_96bb_4bc4(d_323f_0000[1][0], 1, 92);
        f_96bb_4bc4(d_323f_0000[1][1], 1, 92);
        break;
    case 81:
        d_54d9_1076[1][0][97] = d_323f_0000[6][0] << 5;
        d_54d9_1076[1][1][97] = d_323f_0000[6][1] << 5;
        d_60ae_dd7a = 97;
        f_96bb_4bc4(d_323f_0000[6][0], 6, 97);
        f_96bb_4bc4(d_323f_0000[6][1], 6, 97);
        d_54d9_1076[1][0][91] = d_323f_0000[5][0] << 5;
        d_54d9_1076[1][1][91] = d_323f_0000[5][1] << 5;
        d_60ae_dd7c = 91;
        f_96bb_4bc4(d_323f_0000[5][0], 5, 91);
        f_96bb_4bc4(d_323f_0000[5][1], 5, 91);
        d_54d9_1076[1][0][89] = d_323f_0000[4][0] << 5;
        d_54d9_1076[1][1][89] = d_323f_0000[4][1] << 5;
        d_60ae_dd7e = 89;
        f_96bb_4bc4(d_323f_0000[4][0], 4, 89);
        f_96bb_4bc4(d_323f_0000[4][1], 4, 89);
        d_54d9_1076[1][0][95] = d_54d9_1076[1][1][89];
        d_54d9_1076[1][1][95] = d_54d9_1076[1][0][89];
        break;
    }
}

void f_8683_1f24(void)
{
    unsigned char far *p;
    unsigned char a;
    unsigned char b;
    unsigned char c;
    char first;
    char second;

    first = 0;
    second = 0;
    for (d_60ae_dd5c = 0; d_60ae_dd5c < 80; d_60ae_dd5c++)
        d_2289_5838[d_60ae_dd5c] = 0;
    for (d_60ae_db84 = 0; d_60ae_db84 <= 7; d_60ae_db84++) {
        if (d_60ae_db84 < 4) {
            d_2289_be10[0][d_60ae_db84] = d_323f_0000[6][d_60ae_db84];
            if (f_14bc_2cc0(d_323f_0000[6][d_60ae_db84]))
                first = -1;
        } else {
            d_2289_be10[0][d_60ae_db84] = d_323f_0000[6][d_60ae_db84];
            if (f_14bc_2cc0(d_323f_0000[6][d_60ae_db84]))
                second = -1;
        }
        if (d_323f_0000[6][d_60ae_db84] < 80)
            d_2289_5838[d_323f_0000[6][d_60ae_db84]] = -1;
    }
    memset(d_2289_bde0, 0, 0x30);
    p = d_60ae_2d02;
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 5; d_60ae_dd92++) {
        a = *p++;
        for (d_60ae_dd48 = 0; d_60ae_dd48 <= 1; d_60ae_dd48++) {
            b = *p++;
            c = *p++;
            for (d_60ae_dd60 = 0; d_60ae_dd60 <= 1; d_60ae_dd60++) {
                d_54d9_1076[d_60ae_dd48 + d_60ae_dd60 * 2 + 1][0][a] = d_2289_be10[d_60ae_dd60][b - 1] << 5;
                d_54d9_1076[d_60ae_dd48 + d_60ae_dd60 * 2 + 1][1][a] = d_2289_be10[d_60ae_dd60][c - 1] << 5;
            }
        }
    }
    if (first)
        f_8683_27fb(0);
    if (second)
        f_8683_27fb(1);
    d_60ae_dd7a = 57;
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 1; d_60ae_dd92++)
        for (d_60ae_dd48 = 0; d_60ae_dd48 <= 3; d_60ae_dd48++)
            f_96bb_4bc4(d_2289_be10[d_60ae_dd92][d_60ae_dd48], 6, 57);
}

void f_8683_21a4(void)
{
    int col, row;
    int a, b;
    char used[6];
    unsigned char far *p;
    char taken[540];

    memset(taken, 0, 540);
    memset(used, 0, 6);
    for (d_60ae_dd5c = 0; d_60ae_dd5c < 80; d_60ae_dd5c++)
        d_2289_5748[d_60ae_dd5c] = 0;
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= 5; d_60ae_dd60++) {
        for (d_60ae_dd92 = 0; d_60ae_dd92 <= 2; d_60ae_dd92++) {
            do
                d_60ae_dd5c = f_1bd3_0d69(20) + 20;
            while (taken[d_60ae_dd5c] != 0);
            taken[d_60ae_dd5c] = -1;
            if (f_a3de_0319(d_60ae_dd5c)) {
                do
                    ;
                while (f_a3de_0319(d_60ae_dd5c = f_1bd3_0d69(20) + 40));
                taken[d_60ae_dd5c] = -1;
            }
            if (d_60ae_dd5c < 80)
                d_2289_5748[d_60ae_dd5c] = -1;
            d_2289_bda4[d_60ae_dd60][d_60ae_dd92] = d_60ae_dd5c;
            if (f_14bc_2cc0(d_60ae_dd5c))
                used[d_60ae_dd60] = -1;
        }
    }
    memset(d_2289_bb10, 0, 180);
    p = d_60ae_2d20;
    for (d_60ae_dd92 = 1; d_60ae_dd92 <= 3; d_60ae_dd92++) {
        col = *p++;
        row = *p++;
        a = *p++;
        b = *p++;
        for (d_60ae_dd60 = 0; d_60ae_dd60 <= 5; d_60ae_dd60++) {
            d_54d9_1076[row + d_60ae_dd60][0][col] = d_2289_bda4[d_60ae_dd60][a - 1] << 5;
            d_54d9_1200[row + d_60ae_dd60 - 1][1][col - 1] = d_2289_bda4[d_60ae_dd60][b - 1] << 5;
        }
    }
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= 5; d_60ae_dd60++)
        if (used[d_60ae_dd60])
            f_8683_28f5(d_60ae_dd60);
    d_60ae_dd28 = 29;
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= 5; d_60ae_dd60++)
        for (d_60ae_dd92 = 0; d_60ae_dd92 <= 2; d_60ae_dd92++)
            f_96bb_4bc4(d_2289_bda4[d_60ae_dd60][d_60ae_dd92], 3, 29);
}

void f_8683_245e(void)
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
    for (d_60ae_dd5c = 0; d_60ae_dd5c < 80; d_60ae_dd5c++)
        d_2289_5748[d_60ae_dd5c] = 0;
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= 3; d_60ae_dd60++) {
        d_2289_bda4[0][d_60ae_dd60] = d_323f_0000[3][d_60ae_dd60];
        if (f_14bc_2cc0(d_323f_0000[3][d_60ae_dd60]))
            used[0] = -1;
        if (d_323f_0000[3][d_60ae_dd60] < 80)
            d_2289_5748[d_323f_0000[3][d_60ae_dd60]] = -1;
        d_2289_bda4[1][d_60ae_dd60] = d_323f_0000[3][d_60ae_dd60 + 8];
        d_2289_bda4[2][d_60ae_dd60] = d_323f_0000[3][d_60ae_dd60 + 4];
        if (f_14bc_2cc0(d_323f_0000[3][d_60ae_dd60 + 4]))
            used[2] = -1;
        if (d_323f_0000[3][d_60ae_dd60 + 4] < 80)
            d_2289_5748[d_323f_0000[3][d_60ae_dd60 + 4]] = -1;
        d_2289_bda4[3][d_60ae_dd60] = d_323f_0000[3][d_60ae_dd60 + 12];
    }
    memset(d_2289_bb10, 0, 180);
    p = d_60ae_2d2c;
    for (d_60ae_dd60 = 1; d_60ae_dd60 <= 4; d_60ae_dd60++) {
        col = *p++;
        row = *p++;
        for (d_60ae_dd92 = 1; d_60ae_dd92 <= 4; d_60ae_dd92++) {
            a = *p++;
            b = *p++;
            c = *p++;
            d = *p++;
            d_54d9_1076[row][0][col] = d_2289_bda4[a][b] << 5;
            d_54d9_1200[row - 1][1][col - 1] = d_2289_bda4[c][d] << 5;
            d_54d9_1076[row + 4][0][col] = d_2289_bda4[a + 2][b] << 5;
            d_54d9_1076[row + 4][1][col] = d_2289_bda4[c + 2][d] << 5;
            row++;
        }
    }
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= 3; d_60ae_dd60++)
        if (used[d_60ae_dd60])
            f_8683_28f5(d_60ae_dd60);
    d_60ae_dd28 = 47;
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= 3; d_60ae_dd60++)
        for (d_60ae_dd92 = 0; d_60ae_dd92 <= 3; d_60ae_dd92++)
            if (d_60ae_dd60 % 2 == 0)
                f_96bb_4bc4(d_2289_bda4[d_60ae_dd60][d_60ae_dd92], 3, 47);
}

void f_8683_27fb(int g)
{
    char buf[320];

    f_14bc_4bd3("European Cup");
    sprintf(buf, "Group %c Qualifiers", g + 'A');
    f_14bc_3c75(-1.0, 8.0, 2, buf);
    for (d_60ae_dd5c = 0; d_60ae_dd5c <= 3; d_60ae_dd5c++)
        f_14bc_3c75(-1.0, d_60ae_dd5c * 2 + 10, f_14bc_2cc0(d_2289_be10[g][d_60ae_dd5c]) * 5 + 6, f_14bc_3523(d_2289_be10[g][d_60ae_dd5c]));
    f_14bc_58db(0);
}

void f_8683_28f5(int g)
{
    unsigned char n;
    char buf[30];

    n = d_60ae_dd9c <= 37 ? 3 : 4;
    f_14bc_4bd3("Anglo-Italian Cup");
    if (d_60ae_dd9c <= 37)
        sprintf(buf, "Group %c Qualifiers", g + 'A');
    else
        sprintf(buf, "International Group %c", g / 2 + 'A');
    f_14bc_3c75(-1, 7, 2, buf);
    for (d_60ae_dd5c = 0; d_60ae_dd5c <= n - 1; d_60ae_dd5c++)
        f_14bc_3c75(-1, (n == 4 ? 10 : 11) + d_60ae_dd5c * 2, f_14bc_2cc0(d_2289_bda4[g][d_60ae_dd5c]) * 5 + 6, f_14bc_3523(d_2289_bda4[g][d_60ae_dd5c]));
    f_14bc_58db(0);
}

void f_8683_2a29(int comp, int first, int last, int week, int other)
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
    for (d_60ae_dd5c = 0; d_60ae_dd5c <= 79; d_60ae_dd5c++)
        d_2289_5658[comp][d_60ae_dd5c] = 0;
    d_60ae_dce0 = (last - first + 1) / 2;
    half = (first - 1) / 2;
    count = 0;
    if (comp >= 4 && comp <= 6)
        for (d_60ae_db86 = 0; d_60ae_db86 <= d_60ae_dce0 * 2 - 1; d_60ae_db86++)
            if (d_2289_c250[d_323f_0000[comp][d_60ae_db86]] > 0)
                count++;
    random = comp != 3 || week != 69 ? -1 : 0;
    d_60ae_dd92 = -1;
    for (d_60ae_dd60 = half; d_60ae_dd60 <= half + d_60ae_dce0 - 1; d_60ae_dd60++) {
        flag = count > 0 && d_60ae_dce0 > 4;
        for (d_60ae_dcc4 = 0; d_60ae_dcc4 <= 1; d_60ae_dcc4++) {
            do {
                do
                    d_60ae_dd92 = random ? f_1bd3_0d69(d_60ae_dce0 * 2) : d_60ae_dd92 + 1;
                while (used[d_60ae_dd92] != 0);
                ok = -1;
                if (flag && d_60ae_dcc4 == 1
                    && d_2289_c250[d_323f_0000[comp][d_60ae_dd92]] == d_2289_c250[d_60ae_dcd2])
                    ok = 0;
            } while (!ok);
            d_54d9_1076[d_60ae_dd60 + 1][d_60ae_dcc4][week] = d_323f_0000[comp][d_60ae_dd92] << 5;
            if (other != -1)
                d_54d9_1076[d_60ae_dd60 + 1][1 - d_60ae_dcc4][other] = d_323f_0000[comp][d_60ae_dd92] << 5;
            if (d_60ae_dcc4 == 0)
                d_60ae_dcd2 = d_323f_0000[comp][d_60ae_dd92];
            else
                d_60ae_dcd0 = d_323f_0000[comp][d_60ae_dd92];
            used[d_60ae_dd92] = -1;
            if (count > 0 && d_2289_c250[d_323f_0000[comp][d_60ae_dd92]] > 0)
                count--;
        }
        d_60ae_d974 = f_14bc_2cc0(d_60ae_dcd2);
        if (d_60ae_d974 == 0)
            d_60ae_d974 = f_14bc_2cc0(d_60ae_dcd0);
        if (d_60ae_dcd2 < 80)
            d_2289_5658[comp][d_60ae_dcd2] = -1;
        if (d_60ae_dcd0 < 80)
            d_2289_5658[comp][d_60ae_dcd0] = -1;
        switch (comp) {
        case 1:
            strcpy(name, "FA Cup");
            d_60ae_dd80 = week;
            break;
        case 2:
            strcpy(name, "Coca-Cola Cup");
            d_60ae_dd82 = week;
            break;
        case 3:
            strcpy(name, "Anglo-Italian Cup");
            d_60ae_dd28 = week;
            break;
        case 4:
            strcpy(name, "UEFA Cup");
            d_60ae_dd7e = week;
            break;
        case 5:
            strcpy(name, "Cup Winners Cup");
            d_60ae_dd7c = week;
            break;
        case 6:
            strcpy(name, "European Cup");
            d_60ae_dd7a = week;
            break;
        }
        if (d_60ae_d974) {
            f_14bc_4bd3("");
            sprintf(buf, "%s draw:", name);
            f_14bc_3c75(-1, 10, 2, buf);
            sprintf(buf, "%s v %s", f_1bd3_100b(f_14bc_3523(d_60ae_dcd2)), f_1bd3_100b(f_14bc_3523(d_60ae_dcd0)));
            f_14bc_3c75(-1, 12, 6, buf);
            w = f_14bc_6b05(week);
            if (week % 2 == 1)
                sprintf(buf, "Week %d Midweek", w);
            else
                sprintf(buf, "Week %d", w);
            f_14bc_3c75(-1, 14, 3, buf);
            f_14bc_58db(0);
        }
        f_96bb_4bc4(d_60ae_dcd2, comp, week);
        f_96bb_4bc4(d_60ae_dcd0, comp, week);
    }
}

void f_8683_2f3b(void)
{
    int far *p;
    unsigned char r;
    int c[30];
    int b[30];
    int a[30];
    char used[460];
    register int i;
    int n;
    int k = 78;

    memset(used, 0, sizeof used);
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= 13; d_60ae_dd60++) {
        d_323f_0e52[d_60ae_dd60] = 1859;
        d_323f_0e6e[d_60ae_dd60] = 1859;
    }
    for (d_60ae_dd26 = 5; d_60ae_dd26 <= 6; d_60ae_dd26++)
        for (d_60ae_db86 = 0; d_60ae_db86 <= 1; d_60ae_db86++) {
            i = d_323f_0000[d_60ae_dd26][d_60ae_db86];
            if (i > 79)
                used[i - 80] = -1;
        }
    p = d_60ae_2d74;
    for (d_60ae_dd60 = 1; d_60ae_dd60 <= 30; d_60ae_dd60++) {
        d_60ae_dcdc = *p;
        p++;
        d_60ae_dcda = *p;
        p++;
        d_60ae_dc8e = *p;
        p++;
        a[d_60ae_dd60 - 1] = d_60ae_dcdc;
        b[d_60ae_dd60 - 1] = d_60ae_dcda;
        c[d_60ae_dd60 - 1] = d_60ae_dc8e;
        for (d_60ae_dd92 = d_60ae_dcdc; d_60ae_dd92 <= d_60ae_dcda - 1; d_60ae_dd92++)
            for (d_60ae_dd48 = d_60ae_dd92 + 1; d_60ae_dd48 <= d_60ae_dcda; d_60ae_dd48++) {
                if (d_60ae_dcdc == 51 && d_60ae_dd98 == 1)
                    r = 1;
                else
                    r = 3;
                if (d_54d9_0903[0][d_60ae_dd92] + f_1bd3_0d69(r) - f_1bd3_0d69(r) <
                    d_54d9_0903[0][d_60ae_dd48] + f_1bd3_0d69(r) - f_1bd3_0d69(r)) {
                    f_1bd3_13a3((void *)&d_60ae_b6b8[d_60ae_dd92], (void *)&d_60ae_b6b8[d_60ae_dd48], 2);
                    f_1bd3_13a3((void *)&used[d_60ae_dd92 - 1], (void *)&used[d_60ae_dd48 - 1], 1);
                    for (d_60ae_dcc4 = 0; d_60ae_dcc4 <= 4; d_60ae_dcc4++)
                        f_1bd3_13a3(&d_54d9_0903[d_60ae_dcc4][d_60ae_dd92], &d_54d9_0903[d_60ae_dcc4][d_60ae_dd48], 1);
                    f_9e77_4d7d(d_60ae_dd92 + 79, d_60ae_dd48 + 79);
                    for (d_60ae_dd26 = 1; d_60ae_dd26 <= 6; d_60ae_dd26++)
                        for (d_60ae_dbc8 = 0; d_60ae_dbc8 <= 63; d_60ae_dbc8++) {
                            if (d_323f_0000[d_60ae_dd26][d_60ae_dbc8] == d_60ae_dd92 + 79)
                                d_323f_0000[d_60ae_dd26][d_60ae_dbc8] = d_60ae_dd48 + 79;
                            else if (d_323f_0000[d_60ae_dd26][d_60ae_dbc8] == d_60ae_dd48 + 79)
                                d_323f_0000[d_60ae_dd26][d_60ae_dbc8] = d_60ae_dd92 + 79;
                        }
                }
            }
    }
    for (d_60ae_dd26 = 6; d_60ae_dd26 >= 5; d_60ae_dd26--)
        for (d_60ae_db84 = 2; d_60ae_db84 <= 31; d_60ae_db84++) {
            while (used[a[d_60ae_db84 - 2] - 1] != 0)
                a[d_60ae_db84 - 2]++;
            d_323f_0000[d_60ae_dd26][d_60ae_db84] = a[d_60ae_db84 - 2] + 79;
            used[a[d_60ae_db84 - 2] - 1] = -1;
            a[d_60ae_db84 - 2]++;
        }
    i = 4;
    for (d_60ae_db82 = 0; d_60ae_db82 <= 29; d_60ae_db82++)
        for (n = 1; n <= c[d_60ae_db82]; n++) {
            while (used[a[d_60ae_db82] - 1] != 0)
                a[d_60ae_db82]++;
            d_323f_0000[4][i] = a[d_60ae_db82] + 79;
            used[a[d_60ae_db82] - 1] = -1;
            i++;
            a[d_60ae_db82]++;
        }
    for (n = 1; n <= 8; n++) {
        while (used[k - 1] != 0)
            k--;
        d_323f_0000[3][n + 7] = k + 79;
        used[k - 1] = -1;
    }
    for (i = 1; i <= 36; i++) {
        do {
            d_60ae_dd5c = f_1bd3_0d69(60);
        } while (used[d_60ae_dd5c + 400] != 0);
        d_323f_0000[1][i - 1] = d_60ae_dd5c + 480;
        used[d_60ae_dd5c + 400] = -1;
    }
}

void f_8683_3456(void)
{
    char buf[320];
    register int best = 0;

    memset(d_2289_c250, 0, 540);
    for (d_60ae_dd26 = 4; d_60ae_dd26 <= 6; d_60ae_dd26++)
        for (d_60ae_dd24 = 1; d_60ae_dd24 <= 8; d_60ae_dd24++) {
            d_60ae_dd5a = -1;
            for (d_60ae_db80 = 0; d_60ae_db80 <= (d_60ae_dd26 == 4 ? 63 : 31); d_60ae_db80++) {
                d_60ae_dd5c = d_323f_0000[d_60ae_dd26][d_60ae_db80];
                d_60ae_db7e = f_14bc_2cf4(d_60ae_dd5c) + (d_60ae_dd5c >= 80);
                if (d_2289_c250[d_60ae_dd5c] == 0 && (d_60ae_db7e > best || d_60ae_dd5a == -1)) {
                    best = d_60ae_db7e;
                    d_60ae_dd5a = d_60ae_dd5c;
                }
            }
            d_2289_c250[d_60ae_dd5a] = d_60ae_dd26;
            if (f_14bc_2cc0(d_60ae_dd5a)) {
                if (d_60ae_dd26 == 4)
                    strcpy(d_2289_4d9a, "UEFA");
                else if (d_60ae_dd26 == 5)
                    strcpy(d_2289_4d9a, "Cup Winners");
                else
                    strcpy(d_2289_4d9a, "European");
                sprintf(buf, "%s have been seeded|in the %s cup", (char far *)d_60ae_b572[d_60ae_dd5a], d_2289_4d9a);
                f_14bc_0b83(buf);
            }
        }
}

void f_8683_35c9(void)
{
    char used[540];

    memset(used, 0, sizeof used);
    for (d_60ae_dd26 = 6; d_60ae_dd26 >= 5; d_60ae_dd26--) {
        do {
            d_60ae_dd5a = f_1bd3_0d69(400) + 80;
        } while (used[d_60ae_dd5a] != 0 || d_54d9_08b4[d_60ae_dd5a] <= 16);
        d_323f_0000[d_60ae_dd26][0] = d_60ae_dd5a;
        used[d_60ae_dd5a] = -1;
        d_60ae_dd5a = -1;
        for (d_60ae_dd5c = 0; d_60ae_dd5c <= 19; d_60ae_dd5c++) {
            if (used[d_60ae_dd5c] == 0 && f_14bc_2cc0(d_60ae_dd5c) == 0) {
                d_60ae_dbda = d_60ae_dd26 == 5 ? 4 : 2;
                d_60ae_db7e = f_14bc_2cf4(d_60ae_dd5c) + f_1bd3_0d69(d_60ae_dbda) - f_1bd3_0d69(d_60ae_dbda);
                if (d_60ae_db7e > d_60ae_dd52 || d_60ae_dd5a == -1) {
                    d_60ae_dd5a = d_60ae_dd5c;
                    d_60ae_dd52 = d_60ae_db7e;
                }
            }
        }
        d_323f_0000[d_60ae_dd26][1] = d_60ae_dd5a;
        used[d_60ae_dd5a] = -1;
    }
    for (d_60ae_db80 = 1; d_60ae_db80 <= 4; d_60ae_db80++) {
        d_60ae_dd5a = -1;
        for (d_60ae_dd5c = 0; d_60ae_dd5c <= 19; d_60ae_dd5c++) {
            if (used[d_60ae_dd5c] == 0 && f_14bc_2cc0(d_60ae_dd5c) == 0) {
                d_60ae_db7e = f_14bc_2cf4(d_60ae_dd5c) + f_1bd3_0d69(2) - f_1bd3_0d69(2);
                if (d_60ae_db7e > d_60ae_dd52 || d_60ae_dd5a == -1) {
                    d_60ae_dd5a = d_60ae_dd5c;
                    d_60ae_dd52 = d_60ae_db7e;
                }
            }
        }
        d_323f_0000[4][d_60ae_db80 - 1] = d_60ae_dd5a;
        used[d_60ae_dd5a] = -1;
    }
    d_2289_fb0c[0] = d_323f_0000[5][1];
    d_2289_fb0c[1] = d_323f_0000[6][1];
    memset(used, 0, sizeof used);
    for (d_60ae_db80 = 0; d_60ae_db80 <= 79; d_60ae_db80++) {
        d_60ae_dd5a = -1;
        for (d_60ae_dd5c = 0; d_60ae_dd5c <= 79; d_60ae_dd5c++) {
            if (used[d_60ae_dd5c] == 0) {
                d_60ae_db7e = f_14bc_2cf4(d_60ae_dd5c) + 150 - d_60ae_dd5c / 20 * 50;
                if (d_60ae_db7e > d_60ae_dd52 || d_60ae_dd5a == -1) {
                    d_60ae_dd5a = d_60ae_dd5c;
                    d_60ae_dd52 = d_60ae_db7e;
                }
            }
        }
        if (d_60ae_db80 < 48)
            d_323f_0000[2][d_60ae_db80 + 32] = d_60ae_dd5a;
        else
            d_323f_0000[2][d_60ae_db80 - 48] = d_60ae_dd5a;
        used[d_60ae_dd5a] = -1;
    }
}

void f_8683_3924(void)
{
    d_60ae_dd86++;
    d_54d9_1200[d_60ae_dd86 - 1][0][d_60ae_dd9c] = d_60ae_dc82 * 32;
    d_54d9_1200[d_60ae_dd86 - 1][1][d_60ae_dd9c] = d_60ae_dc84 * 32;
}

void f_8683_3974(void)
{
    register int i;

    if (d_60ae_dd9c == 90) {
        for (d_60ae_dd54 = 0; d_60ae_dd54 <= 2; d_60ae_dd54++)
            for (i = 0; i <= 1; i++) {
                d_54d9_1200[d_60ae_dd54 * 2][i][i * 2 + 93] = d_2289_fb10[d_60ae_dd54 + 1][5] * 32;
                d_54d9_1200[d_60ae_dd54 * 2][1 - i][i * 2 + 93] = d_2289_fb10[d_60ae_dd54 + 1][2] * 32;
                d_54d9_1200[d_60ae_dd54 * 2 + 1][i][i * 2 + 93] = d_2289_fb10[d_60ae_dd54 + 1][4] * 32;
                d_54d9_1200[d_60ae_dd54 * 2 + 1][1 - i][i * 2 + 93] = d_2289_fb10[d_60ae_dd54 + 1][3] * 32;
            }
    } else {
        for (d_60ae_dd54 = 0; d_60ae_dd54 <= 2; d_60ae_dd54++) {
            d_54d9_1200[d_60ae_dd54][0][97] = d_323f_0460[d_60ae_dd54 * 2] * 32;
            d_54d9_1200[d_60ae_dd54][1][97] = d_323f_0460[d_60ae_dd54 * 2 + 1] * 32;
        }
    }
}

void f_8683_3b21(void)
{
    d_60ae_dcc4 = 0;
    do {
        d_60ae_dd92 = d_60ae_dcc4 * 20;
        do {
            d_60ae_dd48 = d_60ae_dd92 + 1;
            do {
                d_60ae_db7c = d_323f_4fec[0][d_2289_fb10[0][d_60ae_dd92]] * 3 + d_60ae_dd78
                    - d_323f_4fec[0][d_2289_fb10[0][d_60ae_dd92]] - d_323f_4fec[1][d_2289_fb10[0][d_60ae_dd92]];
                d_60ae_db7a = d_323f_4fec[0][d_2289_fb10[0][d_60ae_dd48]] * 3 + d_60ae_dd78
                    - d_323f_4fec[0][d_2289_fb10[0][d_60ae_dd48]] - d_323f_4fec[1][d_2289_fb10[0][d_60ae_dd48]];
                d_60ae_db78 = d_323f_4fec[2][d_2289_fb10[0][d_60ae_dd92]];
                d_60ae_db76 = d_323f_4fec[2][d_2289_fb10[0][d_60ae_dd48]];
                d_60ae_dc36 = d_60ae_dcc4 == 0 ? d_323f_4fec[3][d_2289_fb10[0][d_60ae_dd92]] : 0;
                d_60ae_dc34 = d_60ae_dcc4 == 0 ? d_323f_4fec[3][d_2289_fb10[0][d_60ae_dd48]] : 0;
                if (d_60ae_db7c < d_60ae_db7a ||
                    (d_60ae_db7c == d_60ae_db7a && d_60ae_db78 - d_60ae_dc36 < d_60ae_db76 - d_60ae_dc34) ||
                    (d_60ae_db7c == d_60ae_db7a && d_60ae_db78 - d_60ae_dc36 == d_60ae_db76 - d_60ae_dc34 &&
                     d_60ae_db78 < d_60ae_db76))
                    f_1bd3_13a3(&d_2289_fb10[0][d_60ae_dd92], &d_2289_fb10[0][d_60ae_dd48], 1);
                d_60ae_dd48++;
            } while (d_60ae_dd48 != d_60ae_dcc4 * 20 + 20);
            d_60ae_dd92++;
        } while (d_60ae_dd92 != d_60ae_dcc4 * 20 + 19);
        d_60ae_dcc4++;
    } while (d_60ae_dcc4 != 4);
}
