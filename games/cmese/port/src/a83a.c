/* Native port of decomp/src/A83A.C (see ../README.md). */
/* @at a83a:0000 */
/* @data 69da:5bea */
/* @module */

/* Overlay a83a (CM93's A3DE.C, from CM1's root module 1680): team helpers moved out of
 * the root module: the formations and the tactics, picking the team, players' positions
 * and fitness, the week's match setup, the manager choice and the squad list sorted by
 * surname. Its data starts with the nine tactics' 14 (position, flag) pairs, the same
 * as CM93's, followed by its literal pool. */
#include "port.h"

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
int16_t f_a83a_0000(int16_t x);
void f_a83a_004b(int16_t a, int16_t b);
char f_a83a_02ce(int16_t v);
void f_a83a_034e(void);
void f_a83a_036f(int16_t a, int16_t b, int16_t c);
void f_a83a_03cb(void);
void f_a83a_0440(void);
void f_a83a_0576(void);
void f_a83a_0630(int16_t t);
void f_a83a_0852(int16_t a, int16_t b);
void f_a83a_0e3f(int16_t t, int16_t k, char c);
void f_a83a_0f1a(void);
void f_a83a_0fad(int16_t n);
void f_a83a_1344(char all);
void f_a83a_146b(char all);
void f_a83a_14e6(int16_t team, char reserves);
void f_a83a_1e28(int16_t line);
int32_t f_a83a_1ea1(int16_t x);
void f_a83a_1ecd(void);

struct flags_w { uint16_t f0 : 1; uint16_t f1 : 1; uint16_t f2 : 1; uint16_t f3 : 1; uint16_t f4 : 1; uint16_t f5 : 1; uint16_t f6 : 1; uint16_t f7 : 1; uint16_t f8 : 1; uint16_t f9 : 1; uint16_t f10 : 1; uint16_t f11 : 1; uint16_t f12 : 1; uint16_t f13 : 1; uint16_t f14 : 1; uint16_t f15 : 1; uint16_t f16 : 1; uint16_t f17 : 1; uint16_t f18 : 1; uint16_t f19 : 1; uint16_t f20 : 1; uint16_t f21 : 1; uint16_t f22 : 1; uint16_t f23 : 1; uint16_t f24 : 1; uint16_t f25 : 1; uint16_t f26 : 1; uint16_t f27 : 1; uint16_t f28 : 1; uint16_t f29 : 1; uint16_t f30 : 1; uint16_t f31 : 1; };
void f_1a70_0e4d(int16_t p);
void f_1a70_1600(int16_t p);
char f_1a70_2bc7(int16_t x);
float f_1a70_2bff(int16_t x);
int32_t f_2162_0da1(int32_t n);
void f_2162_13fc(void *a, void *b, int16_t n);
void *f_2162_1634(int16_t handle, int16_t page);
extern char d_4512_6378[];
extern unsigned char d_4512_6324[];
extern char d_536d_4c3d[][80];
extern int16_t d_4512_8000[][4][2][30];
extern char d_536d_6481[];
extern char d_536d_6611[];
extern char d_536d_6751[];
extern char d_536d_6a21[];
extern unsigned char d_4512_a508[][80];
extern int16_t d_4512_5e24[][80];
extern unsigned char d_4512_2390[];
extern int16_t d_4512_471c;
extern unsigned char d_4512_2db8[];
extern int32_t d_4512_1e90[][80];
extern int16_t d_4512_1710[][80];
extern int16_t d_4512_1a30[];
extern unsigned char d_4512_0000[][82];
extern unsigned char d_4512_023e[];
extern unsigned char d_4512_03d8[];
extern unsigned char d_4512_042a[];
extern unsigned char d_4512_06ba[];
extern unsigned char d_3668_0000[][1860];
extern int16_t d_5dbf_1108[][2][98];
extern unsigned char d_5dbf_4fd2[][140];
extern nearptr d_69da_b1fc[];
extern nearptr d_69da_b2a0[];
extern char d_69da_de2c;
extern char d_69da_de2b;
extern int16_t d_69da_dd38;
extern int16_t d_69da_dd32;
extern int16_t d_69da_dd30;
extern int16_t d_69da_dd2c;
extern int16_t d_69da_dd2a;
extern int16_t d_69da_dc0e;
extern int16_t d_69da_dbd0;
extern int16_t d_69da_dbb4;
extern int16_t d_69da_db6a;
extern int16_t d_69da_da4e;
extern int16_t d_69da_da4a;
extern int16_t d_69da_da2e;
extern int16_t d_69da_da24;
extern int16_t d_69da_da0c;
extern int16_t d_69da_d9ee;
extern int16_t d_69da_d9d8;
extern int16_t d_69da_d9d6;
extern int16_t d_69da_d9be;
extern int16_t d_69da_d9ba;
extern int16_t d_69da_d9ae;
extern int16_t d_69da_d9a0;
extern int16_t d_69da_d99a;
extern int16_t d_69da_d998;
extern int16_t d_69da_d98e;
extern char (*d_69da_dfd6)[151];
extern char (*d_69da_dfd2)[151];
extern char *d_69da_dfce;
extern struct flags_w d_4512_bdc8[];
extern unsigned char d_28da_2a78[][1860];
extern int16_t d_28da_10f0[][26];
extern int16_t d_4512_549a[][14];
extern int16_t d_28da_00b0[][2][13];
extern int32_t (*d_69da_dfae)[80];
extern char *d_69da_dfaa;
extern int16_t d_69da_e004;
extern int16_t d_69da_e002;
extern int16_t d_69da_e000;
extern int16_t d_69da_dff0;
extern int16_t d_69da_dfee;
void f_a330_4570(int16_t a, int16_t b);
void f_a330_4795(int16_t a, int16_t b);
extern int16_t d_69da_dffc;
extern int16_t d_69da_dff8;
extern char (*d_69da_dfc6)[101];
extern int16_t (*d_69da_dfbe)[2][16];
extern int16_t d_69da_d9ea;
extern char d_536d_83b9[][82][5];
extern int16_t d_4512_637c[][16];
extern char d_4512_6d7c[][16];
extern unsigned char d_4512_a4c8[][5][16];
extern unsigned char d_4512_4726[][3][14];
extern unsigned char d_4512_6376[];
extern unsigned char d_4512_7f74[];
extern unsigned char d_4512_9a18[];
void f_1a70_0b80(char *s);
void f_1a70_2eaa(int16_t n, char *title, char *items);
void f_1a70_3554(float x, float y, int16_t bg, int16_t fg, int16_t w, char *s);
char *f_1a70_488b(int16_t player);
void f_1a70_4a41(char *);
void f_1a70_4ede(int16_t a, float x, float y, int16_t c, int16_t d, int16_t e, char *s);
int16_t f_1a70_53de(int16_t a);
void f_1a70_5641(int16_t team);
extern char d_536d_7685[];
extern char d_536d_534d[];
extern char d_536d_50cd[];
extern float d_69da_de4d;
extern float d_69da_de45;
extern char d_69da_de3c;
extern char d_69da_de2a;
extern int16_t d_69da_da4c;
extern int16_t d_69da_d9f0;
extern int16_t d_69da_d9de;
extern int16_t d_69da_d9d4;
extern int16_t d_69da_d9d2;
extern int16_t d_69da_d9c4;
extern int16_t d_69da_d992;
char *f_1a70_4793(int16_t manager, char full);
extern int16_t d_69da_dd76;
extern int16_t d_69da_dd46;
char *f_1a70_2e4a(int16_t x, char c);
int16_t f_1a70_1dc1(int16_t player);
char *f_1a70_4592(int16_t player);
char *f_1a70_4739(int16_t player);
char f_1a70_68f0(int16_t player, char c);
uint16_t f_2162_0b1b(char *s, char *set);
extern char d_536d_76d5[];
extern char d_536d_6efb[];
extern char d_536d_5e8d[];
extern char d_536d_5ded[];
extern char d_536d_5cad[];
extern unsigned char d_4512_a4f8[][80];
extern int16_t d_4512_8780[];
extern int16_t d_3668_cb70[];
extern farptr d_62e5_0000[];
extern farptr d_62e5_11f6[];
extern float d_69da_dee1;
extern float d_69da_dedd;
extern float d_69da_de5d;
extern int16_t d_69da_dd48;
extern int16_t d_69da_db76;
extern int16_t d_69da_da76;
extern int16_t d_69da_d9e6;
extern int16_t d_69da_d9da;
void f_1a70_12cd(int16_t player);
void f_1a70_598c(int16_t team, char *title, char *text);
int16_t f_1a70_68a4(int16_t x);
int16_t f_2162_134e(int16_t a, int16_t b);
int16_t f_2162_13ba(int16_t a, int16_t b);
void f_a330_12ed(int16_t player, int16_t a, int16_t b);
void f_a330_15f1(int16_t n);
extern char d_69da_de13;
extern int16_t d_69da_dd0c;
extern int16_t d_69da_da6e;
extern int16_t d_69da_d996;
extern unsigned char d_4512_37e0[];
extern int16_t d_4512_1df0[];

static char d_69da_5bea[9][28] = {      /* 14 (position, flag) pairs per tactic */
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 5, 1, 7, 0, 10, 0, 10, 0, 6, 1, 7, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 8, 2, 7, 0, 10, 0, 10, 0, 9, 2, 7, 0, 7, 0, 1, 0 },
    { 1, 0, 2, 1, 3, 1, 4, 0, 4, 0, 4, 0, 5, 0, 7, 0, 10, 0, 10, 0, 6, 0, 7, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 1, 3, 1, 11, 0, 4, 0, 4, 0, 5, 0, 7, 0, 10, 0, 10, 0, 6, 0, 7, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 5, 0, 6, 0, 10, 0, 10, 0, 10, 0, 7, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 1, 3, 1, 4, 0, 4, 0, 4, 0, 8, 0, 7, 0, 10, 0, 7, 0, 9, 0, 7, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 5, 0, 7, 0, 10, 0, 7, 1, 6, 0, 10, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 12, 0, 5, 0, 7, 0, 10, 0, 10, 0, 6, 0, 7, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 5, 0, 13, 0, 10, 0, 10, 0, 6, 0, 7, 0, 10, 0, 1, 0 }
};

int16_t f_a83a_0000(int16_t x)
{
    return d_4512_03d8[d_4512_6324[x]] * 3 + d_69da_d9ba - 1
           - d_4512_03d8[d_4512_6324[x]] - d_4512_042a[d_4512_6324[x]];
}

void f_a83a_004b(int16_t a, int16_t b)
{
    d_69da_de2b = a / 20 < b - 1;
    d_69da_dd2a = -1;
    for (d_69da_d9d6 = (b - 1) * 20; d_69da_d9d6 <= (b - 1) * 20 + 19; d_69da_d9d6++) {
        if (f_1a70_2bc7(d_69da_d9d6) == 0) {
            d_69da_dbb4 = f_1a70_2bff(d_69da_d9d6) + f_2162_0da1(2) - f_2162_0da1(2);
            if (d_69da_de2b) {
                if (d_69da_dbb4 > d_69da_dd2c || d_69da_dd2a == -1) {
                    d_69da_dd2c = d_69da_dbb4;
                    d_69da_dd2a = d_69da_d9d6;
                }
            } else {
                if (d_69da_dbb4 < d_69da_dd2c || d_69da_dd2a == -1) {
                    d_69da_dd2c = d_69da_dbb4;
                    d_69da_dd2a = d_69da_d9d6;
                }
            }
        }
    }
    f_2162_13fc((void *)&d_69da_b1fc[a], (void *)&d_69da_b1fc[d_69da_dd2a], 2);
    f_2162_13fc((void *)&d_69da_b2a0[a], (void *)&d_69da_b2a0[d_69da_dd2a], 2);
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 71; d_69da_d9a0++)
        f_2162_13fc(&d_4512_0000[d_69da_d9a0][a], &d_4512_0000[d_69da_d9a0][d_69da_dd2a], 1);
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 5; d_69da_d9a0++)
        f_2162_13fc(&d_4512_1710[d_69da_d9a0][a], &d_4512_1710[d_69da_d9a0][d_69da_dd2a], 2);
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 3; d_69da_d9a0++)
        f_2162_13fc(&d_4512_1e90[d_69da_d9a0][a], &d_4512_1e90[d_69da_d9a0][d_69da_dd2a], 4);
    for (d_69da_d9ee = 0x286; d_69da_d9ee <= d_69da_da4a + 0x285; d_69da_d9ee++) {
        if (d_4512_2390[d_69da_d9ee] == a)
            d_4512_2390[d_69da_d9ee] = d_69da_dd2a;
        else if (d_4512_2390[d_69da_d9ee] == d_69da_dd2a)
            d_4512_2390[d_69da_d9ee] = a;
    }
    f_2162_13fc(&d_5dbf_4fd2[0][a], &d_5dbf_4fd2[0][d_69da_dd2a], 1);
    f_2162_13fc(&d_5dbf_4fd2[1][a], &d_5dbf_4fd2[1][d_69da_dd2a], 1);
}

char f_a83a_02ce(int16_t v)
{
    d_69da_de2c = 0;
    for (d_69da_da0c = 4; d_69da_da0c <= 6; d_69da_da0c++)
        for (d_69da_db6a = 0; d_69da_db6a <= 3; d_69da_db6a++)
            if ((d_69da_db6a < 2 || d_69da_da0c == 4) && d_4512_5e24[d_69da_da0c][d_69da_db6a] == v) {
                d_69da_dd30 = d_69da_da0c;
                d_69da_dd32 = d_69da_db6a;
                d_69da_de2c = -1;
                d_69da_db6a = 3;
                d_69da_da0c = 6;
            }
    return d_69da_de2c;
}

void f_a83a_034e(void)
{
    d_69da_d99a = 1;
    memset(d_4512_6378, 1, 4);
}

void f_a83a_036f(int16_t a, int16_t b, int16_t c)
{
    d_69da_dd38 = -32;
    for (d_69da_da2e = a; d_69da_da2e <= b; d_69da_da2e++)
        for (d_69da_d9d8 = 0; d_69da_d9d8 <= 1; d_69da_d9d8++)
            d_5dbf_1108[d_69da_da2e][d_69da_d9d8][c] = d_69da_dd38;
}

void f_a83a_03cb(void)
{
    for (d_69da_d9ae = 0; d_69da_d9ae <= d_69da_d98e - 1; d_69da_d9ae++) {
        d_3668_0000[21][d_69da_d9ae] = 0;
        d_3668_0000[22][d_69da_d9ae] = 0;
    }
    d_69da_dfaa = f_2162_1634(d_69da_dfee, 1);
    for (d_69da_d9ee = 0; d_69da_d9ee <= d_69da_da4a + 0x285; d_69da_d9ee++)
        ((int16_t *)(d_69da_dfaa + 2600))[d_69da_d9ee] = 0;
}

void f_a83a_0440(void)
{
    d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
    for (d_69da_d9d6 = 0; d_69da_d9d6 <= 79; d_69da_d9d6++) {
        for (d_69da_da24 = 0; d_69da_da24 <= 13; d_69da_da24++)
            if (d_69da_da24 != 1)
                d_69da_dfae[d_69da_da24][d_69da_d9d6] = 0;
        d_4512_06ba[d_69da_d9d6] = 0;
    }
    for (d_69da_da4e = 0; d_69da_da4e <= 3; d_69da_da4e++) {
        d_69da_dfce = f_2162_1634(d_69da_e000, 1);
        strcpy(d_69da_dfce + d_69da_da4e * 151, "");
        d_69da_dfd2 = f_2162_1634(d_69da_e002, 1);
        strcpy(d_69da_dfd2[d_69da_da4e], "");
        d_69da_dfd6 = f_2162_1634(d_69da_e004, 1);
        strcpy(d_69da_dfd6[d_69da_da4e], "");
    }
    d_4512_471c = -1;
}

void f_a83a_0576(void)
{
    uint16_t i, j, k, l;

    for (d_69da_d9d6 = 0; d_69da_d9d6 < 80; d_69da_d9d6++)
        d_536d_4c3d[0][d_69da_d9d6] = 0;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            for (k = 0; k < 2; k++)
                for (l = 0; l < 30; l++)
                    d_4512_8000[i][j][k][l] = -2;
    strcpy(d_536d_6481, "");
    strcpy(d_536d_6611, "");
    strcpy(d_536d_6751, "");
    strcpy(d_536d_6a21, "");
    d_69da_dc0e = -1;
}

void f_a83a_0630(int16_t t)
{
    int16_t n;

    if (d_69da_d99a == 1 || (d_69da_d99a > 1 && t == d_69da_d998))
        f_a83a_0e3f(t, d_4512_2db8[d_4512_1a30[t]] % 16, 0);
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= d_4512_023e[t] - 1; d_69da_d9a0++) {
        d_4512_bdc8[d_28da_10f0[t][d_69da_d9a0]].f7 = 0;
        d_28da_2a78[23][d_28da_10f0[t][d_69da_d9a0]] = 3;
    }
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 15; d_69da_d9a0++)
        d_4512_a508[t][d_69da_d9a0] = 0;
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 13; d_69da_d9a0++) {
        n = 1859;
        d_4512_549a[t][d_69da_d9a0] = n;
        if (d_69da_d9a0 <= 12) {
            d_28da_00b0[t][0][d_69da_d9a0] = n;
            d_28da_00b0[t][1][d_69da_d9a0] = n;
        }
    }
    if (f_1a70_2bc7(t) == 0) {
        n = 1858;
        for (d_69da_d9be = 0; d_69da_d9be <= 13; d_69da_d9be++) {
            d_4512_549a[t][d_69da_d9be] = n;
            d_4512_bdc8[n].f7 = 1;
            d_28da_2a78[18][n] = t;
            f_1a70_0e4d(n);
        }
    }
    for (d_69da_dbd0 = 0; d_69da_dbd0 <= 1; d_69da_dbd0++) {
        n = 1858;
        for (d_69da_d9be = 0; d_69da_d9be <= 10; d_69da_d9be++) {
            d_28da_00b0[t][d_69da_dbd0][d_69da_d9be] = n;
            d_28da_2a78[18][n] = t;
            d_28da_2a78[23][n] = d_69da_dbd0 + 1;
            f_1a70_1600(n);
        }
    }
}

void f_a83a_0852(int16_t a, int16_t b)
{
    f_2162_13fc((void *)&d_69da_b1fc[a], (void *)&d_69da_b1fc[b], 2);
    f_2162_13fc((void *)&d_69da_b2a0[a], (void *)&d_69da_b2a0[b], 2);
    d_69da_dfc6 = f_2162_1634(d_69da_dffc, 1);
    f_2162_13fc((void *)d_69da_dfc6[a], (void *)d_69da_dfc6[b], 101);
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 71; d_69da_d9a0++) {
        f_2162_13fc((void *)&d_4512_0000[d_69da_d9a0][a], (void *)&d_4512_0000[d_69da_d9a0][b], 1);
        if (d_69da_d9a0 < 12) {
            f_2162_13fc((void *)&d_4512_1710[d_69da_d9a0][a], (void *)&d_4512_1710[d_69da_d9a0][b], 2);
            if (d_69da_d9a0 < 8) {
                f_2162_13fc((void *)&d_536d_4c3d[d_69da_d9a0][a], (void *)&d_536d_4c3d[d_69da_d9a0][b], 1);
                if (d_69da_d9a0 < 4) {
                    f_2162_13fc((void *)&d_4512_1e90[d_69da_d9a0][a], (void *)&d_4512_1e90[d_69da_d9a0][b], 4);
                    if (d_69da_d9a0 < 2)
                        f_2162_13fc((void *)d_536d_83b9[d_69da_d9a0][a], (void *)d_536d_83b9[d_69da_d9a0][b], 5);
                }
            }
        }
    }
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 15; d_69da_d9a0++) {
        f_2162_13fc((void *)&d_4512_637c[a][d_69da_d9a0], (void *)&d_4512_637c[b][d_69da_d9a0], 2);
        f_2162_13fc((void *)&d_4512_6d7c[a][d_69da_d9a0], (void *)&d_4512_6d7c[b][d_69da_d9a0], 1);
        for (d_69da_d9ea = 0; d_69da_d9ea <= 3; d_69da_d9ea++) {
            f_2162_13fc((void *)&d_4512_a4c8[a][d_69da_d9ea][d_69da_d9a0],
                        (void *)&d_4512_a4c8[b][d_69da_d9ea][d_69da_d9a0], 1);
            if (d_69da_d9ea <= 1) {
                d_69da_dfbe = f_2162_1634(d_69da_dff8, 1);
                f_2162_13fc((void *)&d_69da_dfbe[a][d_69da_d9ea][d_69da_d9a0],
                            (void *)&d_69da_dfbe[b][d_69da_d9ea][d_69da_d9a0], 2);
            }
        }
    }
    f_a330_4570(a, b);
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 13; d_69da_d9a0++)
        for (d_69da_d9ea = 0; d_69da_d9ea <= 2; d_69da_d9ea++)
            f_2162_13fc((void *)&d_4512_4726[a][d_69da_d9ea][d_69da_d9a0],
                        (void *)&d_4512_4726[b][d_69da_d9ea][d_69da_d9a0], 1);
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 79; d_69da_d9a0++)
        for (d_69da_d9ea = 0; d_69da_d9ea <= 7; d_69da_d9ea++) {
            if (d_4512_5e24[d_69da_d9ea][d_69da_d9a0] == a)
                d_4512_5e24[d_69da_d9ea][d_69da_d9a0] = b;
            else if (d_4512_5e24[d_69da_d9ea][d_69da_d9a0] == b)
                d_4512_5e24[d_69da_d9ea][d_69da_d9a0] = a;
        }
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 1; d_69da_d9a0++) {
        if (d_4512_6376[d_69da_d9a0] == a)
            d_4512_6376[d_69da_d9a0] = b;
        else if (d_4512_6376[d_69da_d9a0] == b)
            d_4512_6376[d_69da_d9a0] = a;
        f_2162_13fc((void *)&d_5dbf_4fd2[d_69da_d9a0][a], (void *)&d_5dbf_4fd2[d_69da_d9a0][b], 1);
    }
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= d_69da_da4a + 0x285; d_69da_d9a0++) {
        if (d_4512_2390[d_69da_d9a0] == a)
            d_4512_2390[d_69da_d9a0] = b;
        else if (d_4512_2390[d_69da_d9a0] == b)
            d_4512_2390[d_69da_d9a0] = a;
    }
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= d_69da_d98e - 1; d_69da_d9a0++) {
        if (d_28da_2a78[18][d_69da_d9a0] == a)
            d_28da_2a78[18][d_69da_d9a0] = b;
        else if (d_28da_2a78[18][d_69da_d9a0] == b)
            d_28da_2a78[18][d_69da_d9a0] = a;
        if (d_3668_0000[10][d_69da_d9a0] == a)
            d_3668_0000[10][d_69da_d9a0] = b;
        else if (d_3668_0000[10][d_69da_d9a0] == b)
            d_3668_0000[10][d_69da_d9a0] = a;
    }
    f_a330_4795(a, b);
    if (d_69da_d998 == a)
        d_69da_d998 = b;
    else if (d_69da_d998 == b)
        d_69da_d998 = a;
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 0x8b; d_69da_d9a0++) {
        if (d_4512_7f74[d_69da_d9a0] == a)
            d_4512_7f74[d_69da_d9a0] = b;
        else if (d_4512_7f74[d_69da_d9a0] == b)
            d_4512_7f74[d_69da_d9a0] = a;
    }
    f_2162_13fc((void *)&d_4512_9a18[a], (void *)&d_4512_9a18[b], 1);
}

void f_a83a_0e3f(int16_t t, int16_t k, char c)
{
    char *p;

    switch (k) {
    case 0: p = d_69da_5bea[0]; break;
    case 1: p = d_69da_5bea[1]; break;
    case 2: p = d_69da_5bea[3]; break;
    case 3: p = d_69da_5bea[2]; break;
    case 4: p = d_69da_5bea[4]; break;
    case 5: p = d_69da_5bea[5]; break;
    case 6: p = d_69da_5bea[6]; break;
    case 7: p = d_69da_5bea[7]; break;
    case 8: p = d_69da_5bea[8]; break;
    }
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 13; d_69da_d9a0++) {
        if (c == 0) {
            d_4512_4726[t][0][d_69da_d9a0] = *p++;
            d_4512_4726[t][2][d_69da_d9a0] = *p++;
            d_4512_4726[t][1][d_69da_d9a0] = 0;
        }
    }
}

void f_a83a_0f1a(void)
{
    unsigned char n[80];

    memset(n, 0, 80);
    for (d_69da_d9ae = 0; d_69da_d9ae <= d_69da_d98e - 1; d_69da_d9ae++) {
        d_69da_d9d8 = d_28da_2a78[18][d_69da_d9ae];
        d_28da_10f0[d_69da_d9d8][n[d_69da_d9d8]] = d_69da_d9ae;
        n[d_69da_d9d8]++;
        if (n[d_69da_d9d8] > 26)
            f_1a70_0b80(">26");
    }
}

void f_a83a_0fad(int16_t n)
{
    char buf[320];
    char item[80];
    uint16_t i;

    d_69da_d9d8 = -1;
    d_69da_de3c = 0;
    if (n == -1 && d_69da_da4c > 0) {
        f_a83a_146b(0);
        strcpy(d_536d_50cd, "");
        for (i = 1; i <= strlen(d_536d_7685); i += 3) {
            sprintf(buf, "%.3s", d_536d_7685 + i - 1);
            d_69da_d9f0 = atol(buf);
            strcpy(d_536d_534d, NEAR_PTR(d_69da_b1fc[d_4512_2390[d_69da_d9f0]]));
            sprintf(buf, "%.13s", d_536d_534d);
            sprintf(item, "%s|", buf);
            strcat(d_536d_50cd, item);
        }
        sprintf(buf, "*Exit|%sAnother Team|", d_536d_50cd);
        f_1a70_2eaa(0, "Team choice", buf);
        if (d_69da_d992 == 0)
            d_69da_de3c = -1;
        else if (d_69da_d992 >= 1 && d_69da_d992 <= d_69da_da4c) {
            sprintf(buf, "%.3s", &d_536d_7685[(d_69da_d992 - 1) * 3]);
            d_69da_d9d8 = d_4512_2390[atol(buf)];
            d_69da_de3c = -1;
        }
    }
    if (d_69da_de3c == 0) {
        d_69da_d9de = 0;
        if (n >= 0)
            sprintf(buf, "Player %s Team", f_1a70_488b(n + 1));
        else
            strcpy(buf, "Team Choice");
        f_1a70_4a41(buf);
        f_1a70_3554(1.5, 3.75, 1, 2, 0x49, " FA PREMIER");
        f_1a70_3554(10.875, 3.75, 1, 2, 0x49, " DIV ONE");
        f_1a70_3554(20.25, 3.75, 1, 2, 0x49, " DIV TWO");
        f_1a70_3554(29.625, 3.75, 1, 2, 0x49, " DIV THREE");
        d_69da_d9c4 = 8;
        d_69da_d9d4 = 14;
        for (d_69da_d9d2 = 0; d_69da_d9d2 <= 79; d_69da_d9d2++) {
            if (d_69da_d9d2 == 20) {
                d_69da_d9c4 = 12;
                d_69da_d9d4 = 4;
            }
            if (d_69da_d9d2 <= 19) {
                d_69da_de4d = 1.5;
                d_69da_de45 = d_69da_d9d2 + 5;
            } else if (d_69da_d9d2 <= 39) {
                d_69da_de4d = 10.875;
                d_69da_de45 = d_69da_d9d2 - 15;
            } else if (d_69da_d9d2 <= 59) {
                d_69da_de4d = 20.25;
                d_69da_de45 = d_69da_d9d2 - 35;
            } else if (d_69da_d9d2 <= 79) {
                d_69da_de4d = 29.625;
                d_69da_de45 = d_69da_d9d2 - 55;
            }
            sprintf(buf, " %.11s", (char *)NEAR_PTR(d_69da_b1fc[d_69da_d9d2]));
            f_1a70_4ede(0, d_69da_de4d, d_69da_de45, 1 - f_1a70_2bc7(d_69da_d9d2) * 5, d_69da_d9c4, 0x49, buf);
            f_2162_13fc(&d_69da_d9c4, &d_69da_d9d4, 2);
        }
        if (n > -1 && d_69da_de2a == 0)
            for (d_69da_d9d2 = 0; d_69da_d9d2 <= 79; d_69da_d9d2++)
                if (f_1a70_2bc7(d_69da_d9d2))
                    f_1a70_5641(d_69da_d9d2 + 1);
        do
            d_69da_d992 = f_1a70_53de(0);
        while (d_69da_d992 <= 0);
        d_69da_d9d8 = d_69da_d992 - 1;
    }
}

void f_a83a_1344(char all)
{
    char buf[320];
    uint16_t i;

    d_69da_dd76 = -1;
    f_a83a_146b(all);
    if (strlen(d_536d_7685) == 3)
        d_69da_dd76 = atol(d_536d_7685);
    else if (strlen(d_536d_7685) > 3) {
        strcpy(d_536d_50cd, "*Exit|");
        for (i = 1; i <= strlen(d_536d_7685); i += 3) {
            sprintf(buf, "%.3s", d_536d_7685 + i - 1);
            d_69da_d9f0 = atol(buf);
            sprintf(buf, "%s|", f_1a70_4793(d_69da_d9f0, 0));
            strcat(d_536d_50cd, buf);
        }
        f_1a70_2eaa(0, "Choose manager", d_536d_50cd);
        if (d_69da_d992 > 0) {
            sprintf(buf, "%.3s", d_536d_7685 + (d_69da_d992 - 1) * 3);
            d_69da_dd76 = atol(buf);
        }
    }
}

void f_a83a_146b(char all)
{
    char buf[320];

    strcpy(d_536d_7685, "");
    for (d_69da_dd46 = 0x286; d_69da_dd46 <= d_69da_da4a + 0x285; d_69da_dd46++)
        if ((all == 0 && d_4512_2390[d_69da_dd46] < 0xff) || all != 0) {
            sprintf(buf, "%03d", d_69da_dd46);
            strcat(d_536d_7685, buf);
        }
}

/* The squad list: the team's players (or its reserves) sorted by surname, one per line,
   with their positions, sides, status and fitness. */
void f_a83a_14e6(int16_t team, char reserves)
{
    unsigned char n;
    char colour;
    char buf[80];
    char a[40];
    char b[40];

    n = reserves == 0 ? d_4512_023e[team] : 16;
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= n - 2; d_69da_d9d2++)
        for (d_69da_d9a0 = d_69da_d9d2 + 1; d_69da_d9a0 <= n - 1; d_69da_d9a0++) {
            if (reserves == 0) {
                if (strcmp(f_1a70_4739(d_28da_10f0[team][d_69da_d9d2]),
                           f_1a70_4739(d_28da_10f0[team][d_69da_d9a0])) > 0)
                    f_2162_13fc(&d_28da_10f0[team][d_69da_d9d2], &d_28da_10f0[team][d_69da_d9a0], 2);
            } else {
                d_69da_dfbe = f_2162_1634(d_69da_dff8, 0);
                strcpy(a, FAR_PTR(d_62e5_11f6[d_69da_dfbe[team][1][d_69da_d9d2]]));
                strcpy(b, FAR_PTR(d_62e5_11f6[d_69da_dfbe[team][1][d_69da_d9a0]]));
                if (strcmp(a, b) > 0) {
                    d_69da_dfbe = f_2162_1634(d_69da_dff8, 1);
                    f_2162_13fc(&d_69da_dfbe[team][1][d_69da_d9d2], &d_69da_dfbe[team][1][d_69da_d9a0], 2);
                }
            }
        }
    d_69da_dd48 = n - 1;
    if (team < 20)
        d_69da_d9e6 = 8;
    else
        d_69da_d9e6 = 12;
    d_69da_da76 = 0;
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= 25; d_69da_d9d2++) {
        f_a83a_1e28(d_69da_d9d2);
        if (d_69da_d9d2 <= d_69da_dd48) {
            d_69da_d9da = 18;
            if (reserves == 0) {
                d_69da_d9ae = d_28da_10f0[team][d_69da_d9d2];
                strcpy(d_536d_6efb, "");
                strcpy(d_536d_76d5, "");
                strcpy(d_536d_5e8d, "");
                if (d_4512_bdc8[d_69da_d9ae].f0)
                    strcpy(d_536d_6efb, "G");
                if (d_4512_bdc8[d_69da_d9ae].f1)
                    strcat(d_536d_6efb, "D");
                if (d_4512_bdc8[d_69da_d9ae].f2)
                    strcat(d_536d_6efb, "M");
                if (d_4512_bdc8[d_69da_d9ae].f3)
                    strcat(d_536d_6efb, "A");
                if (d_4512_bdc8[d_69da_d9ae].f4)
                    strcpy(d_536d_76d5, "R");
                if (d_4512_bdc8[d_69da_d9ae].f5)
                    strcat(d_536d_76d5, "L");
                if (d_4512_bdc8[d_69da_d9ae].f6)
                    strcat(d_536d_76d5, "C");
                sprintf(d_536d_5cad, "%s %s", d_536d_6efb, d_536d_76d5);
                if (d_28da_2a78[20][d_69da_d9ae] > 0) {
                    if (d_28da_2a78[19][d_69da_d9ae] == 50)
                        strcpy(d_536d_5e8d, "ct");
                    else if (d_28da_2a78[19][d_69da_d9ae] == 26) {
                        strcpy(d_536d_5e8d, "su");
                        d_69da_d9ae;    /* code-free: makes BCC keep this copy of the merged strcpy tail */
                    }
                    else if (d_28da_2a78[19][d_69da_d9ae] != 51)
                        strcpy(d_536d_5e8d, "ij");
                } else if (d_4512_bdc8[d_69da_d9ae].f7) {
                    unsigned char c;
                    c = f_1a70_1dc1(d_69da_d9ae) + 1;
                    strcpy(d_536d_5e8d, f_1a70_2e4a(c, 1));
                    d_69da_d9da = 33;
                }
                if (f_2162_0b1b(f_1a70_4592(d_69da_d9ae), " ") > 0)
                    sprintf(d_536d_5ded, "%s %c", f_1a70_4739(d_69da_d9ae), *f_1a70_4592(d_69da_d9ae));
                else
                    strcpy(d_536d_5ded, f_1a70_4739(d_69da_d9ae));
                if (d_4512_bdc8[d_69da_d9ae].f8 && !d_4512_bdc8[d_69da_d9ae].f10) {
                    sprintf(buf, "L %s", d_536d_5ded);
                    strcpy(d_536d_5ded, buf);
                } else if (d_4512_bdc8[d_69da_d9ae].f8 && d_4512_bdc8[d_69da_d9ae].f10) {
                    sprintf(buf, "R %s", d_536d_5ded);
                    strcpy(d_536d_5ded, buf);
                } else if (d_3668_cb70[d_69da_d9ae] == 0) {
                    sprintf(buf, "C %s", d_536d_5ded);
                    strcpy(d_536d_5ded, buf);
                } else if (f_1a70_68f0(d_69da_d9ae, -1)) {
                    if (d_69da_db76 > 2 || d_3668_0000[14][d_69da_d9ae] > 0) {
                        sprintf(buf, "U %s", d_536d_5ded);
                        strcpy(d_536d_5ded, buf);
                    } else {
                        sprintf(buf, "  %s", d_536d_5ded);
                        strcpy(d_536d_5ded, buf);
                    }
                } else {
                    sprintf(buf, "  %s", d_536d_5ded);
                    strcpy(d_536d_5ded, buf);
                }
                f_1a70_3554(d_69da_de5d, d_69da_de45, d_69da_d9da / 16, d_69da_d9da % 16, 12, d_536d_5e8d);
                if (d_3668_0000[7][d_69da_d9ae] < 255)
                    colour = 6;
                else if (d_4512_bdc8[d_69da_d9ae].f13)
                    colour = team < 20 ? 4 : 5;
                else
                    colour = 1;
                d_536d_5ded[15] = 0;
                f_1a70_4ede(0, d_69da_dedd, d_69da_de45, colour, d_69da_d9e6, 0x5a, d_536d_5ded);
                f_1a70_3554(d_69da_dee1, d_69da_de45, 2, 6, 0x2b, d_536d_5cad);
                d_4512_8780[d_69da_d9d2] = d_69da_d9ae;
                d_69da_da76++;
            } else {
                if (d_4512_a4c8[team][0][d_69da_d9d2] == 1)
                    strcpy(d_536d_6efb, " GK");
                else if (d_4512_a4c8[team][0][d_69da_d9d2] == 2)
                    strcpy(d_536d_6efb, " DEF");
                else if (d_4512_a4c8[team][0][d_69da_d9d2] == 3)
                    strcpy(d_536d_6efb, " MID");
                else if (d_4512_a4c8[team][0][d_69da_d9d2] == 4)
                    strcpy(d_536d_6efb, " ATT");
                strcpy(d_536d_5e8d, "");
                if (d_4512_a4f8[team][d_69da_d9d2] > 0)
                    strcpy(d_536d_5e8d, "na");
                else if (d_4512_a508[team][d_69da_d9d2]) {
                    unsigned char c;
                    c = f_1a70_1dc1(team * 20 + d_69da_d9d2 + 3000) + 1;
                    d_69da_d9da = 33;
                    strcpy(d_536d_5e8d, f_1a70_2e4a(c, 1));
                }
                f_1a70_3554(d_69da_de5d, d_69da_de45, d_69da_d9da / 16, d_69da_d9da % 16, 12, d_536d_5e8d);
                d_69da_dfbe = f_2162_1634(d_69da_dff8, 0);
                strcpy(buf, FAR_PTR(d_62e5_0000[d_69da_dfbe[team][0][d_69da_d9d2]]));
                sprintf(d_536d_5ded, "  %s %c", FAR_PTR(d_62e5_11f6[d_69da_dfbe[team][1][d_69da_d9d2]]), buf[0]);
                f_1a70_4ede(0, d_69da_dedd, d_69da_de45, 1, d_69da_d9e6, 0x5a, d_536d_5ded);
                f_1a70_3554(d_69da_dee1, d_69da_de45, 2, 6, 0x2b, d_536d_6efb);
                d_4512_8780[d_69da_d9d2] = team * 20 + d_69da_d9d2 + 3000;
                d_69da_da76++;
            }
        } else {
            f_1a70_3554(d_69da_de5d, d_69da_de45, 1, 2, 12, "");
            f_1a70_3554(d_69da_dedd, d_69da_de45, 1, d_69da_d9e6, 0x5a, "");
            f_1a70_3554(d_69da_dee1, d_69da_de45, 2, 6, 0x2b, "");
        }
        if (d_69da_d9e6 == 12)
            d_69da_d9e6 = 4;
        else if (d_69da_d9e6 == 4)
            d_69da_d9e6 = 12;
        else if (d_69da_d9e6 == 8)
            d_69da_d9e6 = 14;
        else if (d_69da_d9e6 == 14)
            d_69da_d9e6 = 8;
    }
}

void f_a83a_1e28(int16_t line)
{
    if (line < 13) {
        d_69da_de5d = 1.375;
        d_69da_dedd = 3.125;
        d_69da_dee1 = 14.625;
        d_69da_de45 = line + 6.5;
    } else {
        d_69da_de5d = 37.375;
        d_69da_dedd = 20.25;
        d_69da_dee1 = 31.75;
        d_69da_de45 = line - 13 + 6.5;
    }
}

int32_t f_a83a_1ea1(int16_t x)
{
    if (x <= 19)
        return 500000;
    if (x <= 39)
        return 250000;
    return 125000;
}

void f_a83a_1ecd(void)
{
    unsigned char i;
    unsigned char j;
    char injured;
    char title[80];
    char text[180];

    for (d_69da_d9ae = 0; d_69da_d9ae <= d_69da_d98e - 1; d_69da_d9ae++) {
        unsigned char c;
        injured = f_1a70_2bc7((int16_t)d_28da_2a78[18][d_69da_d9ae]);
        if (injured == 0) {
            d_69da_d9de = (int16_t)d_28da_2a78[18][d_69da_d9ae] / 20 + 1;
            if (d_4512_bdc8[d_69da_d9ae].f20 == 0) {
                if (d_28da_2a78[23][d_69da_d9ae] == 1 && d_69da_d9de < 3 && d_28da_2a78[20][d_69da_d9ae] == 0)
                    d_4512_bdc8[d_69da_d9ae].f20 = 1;
            } else if ((d_28da_2a78[23][d_69da_d9ae] > 1 || d_69da_d9de > 2) && d_4512_bdc8[d_69da_d9ae].f17 == 0)
                d_4512_bdc8[d_69da_d9ae].f20 = 0;
        }
        if (d_28da_2a78[20][d_69da_d9ae] > 0 && d_28da_2a78[19][d_69da_d9ae] < 26) {
            c = d_4512_37e0[d_4512_1df0[(int16_t)d_28da_2a78[18][d_69da_d9ae]]] / 10 + 40;
            if (d_4512_bdc8[d_69da_d9ae].f25)
                c = f_2162_13ba(d_28da_2a78[21][d_69da_d9ae], 80);
            else if (d_4512_bdc8[d_69da_d9ae].f26)
                c = f_2162_13ba(d_28da_2a78[21][d_69da_d9ae], 70);
            else if (d_4512_bdc8[d_69da_d9ae].f27)
                c = f_2162_13ba(d_28da_2a78[21][d_69da_d9ae], 65);
            d_28da_2a78[21][d_69da_d9ae] = d_28da_2a78[21][d_69da_d9ae] - (f_2162_0da1(3) + 3);
            if (d_28da_2a78[21][d_69da_d9ae] < c)
                d_28da_2a78[21][d_69da_d9ae] = c;
        }
        if (d_28da_2a78[21][d_69da_d9ae] < 100 && (d_28da_2a78[20][d_69da_d9ae] == 0
                || d_28da_2a78[20][d_69da_d9ae] > 0 && d_28da_2a78[19][d_69da_d9ae] == 26)) {
            d_28da_2a78[21][d_69da_d9ae] += (100 - d_28da_2a78[21][d_69da_d9ae]) / 2 + f_2162_0da1(5);
            if (d_28da_2a78[21][d_69da_d9ae] > 100)
                d_28da_2a78[21][d_69da_d9ae] = 100;
            if (injured == 0 && d_4512_bdc8[d_69da_d9ae].f7 == 0 && d_28da_2a78[20][d_69da_d9ae] == 0
                    && d_28da_2a78[21][d_69da_d9ae] > 90 && d_69da_de13 == 0)
                f_1a70_12cd(d_69da_d9ae);
        }
        if (d_28da_2a78[20][d_69da_d9ae] > 0 && d_28da_2a78[19][d_69da_d9ae] < 26) {
            d_69da_da6e = d_4512_bdc8[d_69da_d9ae].f17 == 1 ? 0 : 1;
            if (d_28da_2a78[20][d_69da_d9ae] >= 10)
                d_69da_da6e = d_69da_da6e + (f_2162_0da1(10) == 0);
            d_28da_2a78[20][d_69da_d9ae] = f_2162_134e(d_28da_2a78[20][d_69da_d9ae] - d_69da_da6e, 0);
            if (d_28da_2a78[20][d_69da_d9ae] == 0)
                f_a330_15f1(d_69da_d9ae);
        } else if (d_28da_2a78[19][d_69da_d9ae] >= 27 && d_28da_2a78[19][d_69da_d9ae] < 50 && d_69da_d996 > 8)
            f_a330_12ed(d_69da_d9ae, 26, (int16_t)d_28da_2a78[19][d_69da_d9ae] - 26);
        if (d_69da_de13)
            continue;
        d_3668_0000[11][d_69da_d9ae] -= d_4512_bdc8[d_69da_d9ae].f8 && d_69da_d996 < 67;
        if (f_1a70_68f0(d_69da_d9ae, -1)) {
            d_3668_0000[14][d_69da_d9ae] += d_4512_bdc8[d_69da_d9ae].f8 == 0 ? 1 : 0;
            d_3668_0000[15][d_69da_d9ae] = 0;
        } else {
            d_3668_0000[15][d_69da_d9ae] += d_4512_bdc8[d_69da_d9ae].f8 ? 1 : 0;
            d_3668_0000[14][d_69da_d9ae] = 0;
        }
        d_69da_dd0c = d_3668_cb70[d_69da_d9ae];
        if (d_69da_dd0c / 100 == d_69da_d99a && f_1a70_68a4(d_69da_d996) == d_69da_dd0c % 100) {
            if (d_3668_0000[7][d_69da_d9ae] < 255)
                c = d_3668_0000[7][d_69da_d9ae];
            else
                c = d_28da_2a78[18][d_69da_d9ae];
            if (f_1a70_2bc7(c)) {
                sprintf(title, "%s squad news", (char *)NEAR_PTR(d_69da_b1fc[d_28da_2a78[18][d_69da_d9ae]]));
                sprintf(text, "%s's contract expired this week - he is now a free agent.", f_1a70_4592(d_69da_d9ae));
                f_1a70_598c(c, title, text);
            }
            d_3668_cb70[d_69da_d9ae] = 0;
            d_4512_bdc8[d_69da_d9ae].f9 = 0;
            d_3668_0000[19][d_69da_d9ae] = 0;
        }
        if (d_4512_bdc8[d_69da_d9ae].f16 && f_2162_0da1(10) == 0)
            d_4512_bdc8[d_69da_d9ae].f16 = 0;
    }
    for (i = 0; i <= 79; i = i + 1)
        for (j = 0; j <= 15; j = j + 1)
            if (d_4512_a4f8[i][j] > 0) {
                d_4512_a4f8[i][j]--;
                if (d_4512_a4f8[i][j] == 0)
                    f_a330_15f1(i * 20 + j + 3000);
            }
}
