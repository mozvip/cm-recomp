/* Native port of decomp/src/9F8D.C (see ../README.md). */
/* @at 9f8d:0000 */
/* @data 61eb:5bf4 */
/* @module */

/* Overlay 9f8d (CM94's A83A.C, CM93's A3DE.C, from CM1's root module 1680): team helpers
 * moved out of the root module: the formations and the tactics, picking the team, players'
 * positions and fitness, the week's match setup, the manager choice and the squad list
 * sorted by surname. CM Italia 95: 38 clubs (Serie A 0-17, Serie B 18-37), 16-player
 * squads. Its data starts with the nine tactics' 16 (position, flag) pairs (CM94 had 14),
 * followed by its literal pool. */
#include "port.h"

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
int16_t f_9f8d_0000(int16_t x);
void f_9f8d_0073(int16_t a, int16_t b);
char f_9f8d_0305(int16_t v);
void f_9f8d_0385(void);
void f_9f8d_03ac(int16_t a, int16_t b, int16_t c);
void f_9f8d_0408(void);
void f_9f8d_0480(void);
void f_9f8d_05b6(void);
void f_9f8d_0670(int16_t t);
void f_9f8d_08a7(int16_t a, int16_t b);
void f_9f8d_0ea8(int16_t t, int16_t k, char c);
void f_9f8d_0f83(void);
void f_9f8d_101a(int16_t n);
void f_9f8d_1379(char all);
void f_9f8d_14a0(char all);
void f_9f8d_151b(int16_t team, char reserves);
void f_9f8d_1e48(int16_t line);
int32_t f_9f8d_1ec1(int16_t x);
void f_9f8d_1ede(void);

struct flags_w { uint16_t f0 : 1; uint16_t f1 : 1; uint16_t f2 : 1; uint16_t f3 : 1; uint16_t f4 : 1; uint16_t f5 : 1; uint16_t f6 : 1; uint16_t f7 : 1; uint16_t f8 : 1; uint16_t f9 : 1; uint16_t f10 : 1; uint16_t f11 : 1; uint16_t f12 : 1; uint16_t f13 : 1; uint16_t f14 : 1; uint16_t f15 : 1; uint16_t f16 : 1; uint16_t f17 : 1; uint16_t f18 : 1; uint16_t f19 : 1; uint16_t f20 : 1; uint16_t f21 : 1; uint16_t f22 : 1; uint16_t f23 : 1; uint16_t f24 : 1; uint16_t f25 : 1; uint16_t f26 : 1; uint16_t f27 : 1; uint16_t f28 : 1; uint16_t f29 : 1; uint16_t f30 : 1; uint16_t f31 : 1; };
void f_1a83_0bb7(char *s);
void f_1a83_0e84(int16_t p);
void f_1a83_1625(int16_t p);
char f_1a83_2ad4(int16_t x);
float f_1a83_2b0c(int16_t x);
void f_1a83_2da6(int16_t n, char *title, char *items);
void f_1a83_3450(float x, float y, int16_t bg, int16_t fg, int16_t w, char *s);
char *f_1a83_477e(int16_t player);
void f_1a83_48f9(char *);
void f_1a83_4d96(int16_t a, float x, float y, int16_t c, int16_t d, int16_t e, char *s);
int16_t f_1a83_5296(int16_t a);
void f_1a83_54f9(int16_t team);
unsigned char f_1a83_6d76(unsigned char div);
unsigned char f_1a83_6d8b(unsigned char team);
int16_t f_215d_0c20(void);
int32_t f_215d_0d96(int32_t n);
void f_215d_13f1(void *a, void *b, int16_t n);
void *f_215d_1629(int16_t handle, int16_t page);
void f_9a9e_43ba(int16_t a, int16_t b);
void f_9a9e_45df(int16_t a, int16_t b);
extern nearptr d_61eb_b0ec[];
extern nearptr d_61eb_b13c[];
extern unsigned char d_3334_0000[][1500];
extern unsigned char d_3334_bdb2[][40];
extern unsigned char d_3334_beca[];
extern unsigned char d_3334_bf92[];
extern unsigned char d_3334_bfba[];
extern unsigned char d_3334_c0fa[];
extern int16_t d_3334_c8f2[][38];
extern int16_t d_3334_ca6e[];
extern int32_t d_3334_cc82[][38];
extern unsigned char d_3334_cee2[];
extern unsigned char d_3334_d90a[];
extern int16_t d_3334_f26e;
extern unsigned char d_3334_f278[][3][16];
extern int16_t d_3334_f9f8[][16];
extern int16_t d_28d4_0064[][2][13];
extern int16_t d_28d4_081c[][26];
extern unsigned char d_28d4_1958[][1500];
extern int16_t d_432e_0000[][100];
extern unsigned char d_432e_0640[];
extern char d_432e_066a[];
extern int16_t d_432e_066e[][16];
extern char d_432e_0b2e[][16];
extern unsigned char d_432e_1a96[];
extern int16_t d_432e_1b22[][4][2][30];
extern unsigned char d_432e_31aa[];
extern unsigned char d_432e_39fe[][5][16];
extern unsigned char d_432e_3a3e[][80];
extern struct flags_w d_432e_45de[];
extern char d_432e_b73b[][38];
extern char d_432e_ba27[];
extern char d_432e_bca7[];
extern char d_432e_cddb[];
extern char d_432e_cf6b[];
extern char d_432e_d0ab[];
extern char d_432e_d37b[];
extern char d_432e_dfdf[];
extern char d_432e_ed13[][40][5];
extern int16_t d_53fc_11fc[][2][100];
extern unsigned char d_53fc_778e[][140];
extern int16_t d_61eb_d58e;
extern int16_t d_61eb_d592;
extern int16_t d_61eb_d594;
extern int16_t d_61eb_d596;
extern int16_t d_61eb_d598;
extern int16_t d_61eb_d59a;
extern int16_t d_61eb_d59c;
extern int16_t d_61eb_d59e;
extern int16_t d_61eb_d5a4;
extern int16_t d_61eb_d5aa;
extern int16_t d_61eb_d5b8;
extern int16_t d_61eb_d5c4;
extern int16_t d_61eb_d5ca;
extern int16_t d_61eb_d5d8;
extern int16_t d_61eb_d5da;
extern int16_t d_61eb_d5dc;
extern int16_t d_61eb_d5de;
extern int16_t d_61eb_d5e4;
extern int16_t d_61eb_d5f0;
extern int16_t d_61eb_d5f4;
extern int16_t d_61eb_d5f6;
extern int16_t d_61eb_d612;
extern int16_t d_61eb_d62a;
extern int16_t d_61eb_d634;
extern int16_t d_61eb_d650;
extern int16_t d_61eb_d652;
extern int16_t d_61eb_d654;
extern int16_t d_61eb_d774;
extern int16_t d_61eb_d7be;
extern int16_t d_61eb_d7da;
extern int16_t d_61eb_d818;
extern int16_t d_61eb_d934;
extern int16_t d_61eb_d936;
extern int16_t d_61eb_d93a;
extern int16_t d_61eb_d93c;
extern int16_t d_61eb_d942;
extern int16_t d_61eb_d9ae;
extern char d_61eb_da3a;
extern char d_61eb_da3b;
extern char d_61eb_da3c;
extern char d_61eb_da4c;
extern float d_61eb_da55;
extern float d_61eb_da5d;
extern char *d_61eb_dbbc;
extern int32_t (*d_61eb_dbc0)[38];
extern int16_t (*d_61eb_dbd0)[2][16];
extern char (*d_61eb_dbd8)[101];
extern char *d_61eb_dbe0;
extern char (*d_61eb_dbe4)[151];
extern char (*d_61eb_dbe8)[151];
extern int16_t d_61eb_dc50;
extern int16_t d_61eb_dc52;
extern int16_t d_61eb_dc5a;
extern int16_t d_61eb_dc5e;
extern int16_t d_61eb_dc62;
extern int16_t d_61eb_dc64;
extern int16_t d_61eb_dc66;
char *f_1a83_4686(int16_t manager, char full);
extern int16_t d_61eb_d980;
extern int16_t d_61eb_d950;
char *f_1a83_2d52(int16_t x, char c);
int16_t f_1a83_1dd9(int16_t player);
char *f_1a83_4485(int16_t player);
char *f_1a83_462c(int16_t player);
char f_1a83_6728(int16_t player, char c);
uint16_t f_215d_0b10(char *s, char *set);
extern char d_432e_e02f[];
extern char d_432e_d855[];
extern char d_432e_c7e7[];
extern char d_432e_c747[];
extern char d_432e_c607[];
extern unsigned char d_432e_3a2e[][80];
extern int16_t d_432e_1ee2[];
extern int16_t d_3334_a410[];
extern farptr d_5b9b_0000[];
extern farptr d_5b9b_1395[];
extern float d_61eb_daf1;
extern float d_61eb_daed;
extern float d_61eb_da6d;
extern int16_t d_61eb_d952;
extern int16_t d_61eb_d780;
extern int16_t d_61eb_d67c;
extern int16_t d_61eb_d5ec;
extern int16_t d_61eb_d5e0;
void f_1a83_12f6(int16_t player);
void f_1a83_5844(int16_t team, char *title, char *text);
int16_t f_1a83_66e8(int16_t x);
int16_t f_215d_1343(int16_t a, int16_t b);
int16_t f_215d_13af(int16_t a, int16_t b);
void f_9a9e_125e(int16_t player, int16_t a, int16_t b);
void f_9a9e_155d(int16_t n);
extern char d_61eb_da23;
extern int16_t d_61eb_d916;
extern int16_t d_61eb_d674;
extern int16_t d_61eb_d5a2;
extern unsigned char d_3334_e332[];
extern int16_t d_3334_cc36[];

static char d_61eb_5bf4[9][32] = {      /* 16 (position, flag) pairs per tactic */
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 5, 1, 7, 0, 10, 0, 10, 0, 6, 1, 4, 0, 7, 0, 10, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 8, 2, 7, 0, 10, 0, 10, 0, 9, 2, 4, 0, 7, 0, 10, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 1, 3, 1, 4, 0, 4, 0, 4, 0, 5, 0, 7, 0, 10, 0, 10, 0, 6, 0, 4, 0, 7, 0, 10, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 1, 3, 1, 11, 0, 4, 0, 4, 0, 5, 0, 7, 0, 10, 0, 10, 0, 6, 0, 4, 0, 7, 0, 10, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 5, 0, 6, 0, 10, 0, 10, 0, 10, 0, 4, 0, 7, 0, 10, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 1, 3, 1, 4, 0, 4, 0, 4, 0, 8, 0, 7, 0, 10, 0, 7, 0, 9, 0, 4, 0, 7, 0, 10, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 5, 0, 7, 0, 10, 0, 7, 1, 6, 0, 4, 0, 7, 0, 10, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 12, 0, 5, 0, 7, 0, 10, 0, 10, 0, 6, 0, 4, 0, 7, 0, 10, 0, 10, 0, 1, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 5, 0, 13, 0, 10, 0, 10, 0, 6, 0, 4, 0, 7, 0, 10, 0, 10, 0, 1, 0 }
};

int16_t f_9f8d_0000(int16_t x)
{
    return d_3334_bf92[d_432e_0640[x]] * 3 + (x < 18 ? d_61eb_d59a : d_61eb_d59c)
           - d_3334_bf92[d_432e_0640[x]] - d_3334_bfba[d_432e_0640[x]];
}

void f_9f8d_0073(int16_t a, int16_t b)
{
    d_61eb_da3b = f_1a83_6d8b(a) < b - 1;
    d_61eb_d934 = -1;
    for (d_61eb_d5dc = (b - 1) * 18; d_61eb_d5dc <= f_1a83_6d76(b - 1) + (b - 1) * 18 - 1; d_61eb_d5dc++) {
        if (f_1a83_2ad4(d_61eb_d5dc) == 0) {
            d_61eb_d7be = f_1a83_2b0c(d_61eb_d5dc) + f_215d_0d96(2) - f_215d_0d96(2);
            if (d_61eb_da3b) {
                if (d_61eb_d7be > d_61eb_d936 || d_61eb_d934 == -1) {
                    d_61eb_d936 = d_61eb_d7be;
                    d_61eb_d934 = d_61eb_d5dc;
                }
            } else {
                if (d_61eb_d7be < d_61eb_d936 || d_61eb_d934 == -1) {
                    d_61eb_d936 = d_61eb_d7be;
                    d_61eb_d934 = d_61eb_d5dc;
                }
            }
        }
    }
    f_215d_13f1((void *)&d_61eb_b0ec[a], (void *)&d_61eb_b0ec[d_61eb_d934], 2);
    f_215d_13f1((void *)&d_61eb_b13c[a], (void *)&d_61eb_b13c[d_61eb_d934], 2);
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 71; d_61eb_d5aa++)
        f_215d_13f1(&d_3334_bdb2[d_61eb_d5aa][a], &d_3334_bdb2[d_61eb_d5aa][d_61eb_d934], 1);
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 5; d_61eb_d5aa++)
        f_215d_13f1(&d_3334_c8f2[d_61eb_d5aa][a], &d_3334_c8f2[d_61eb_d5aa][d_61eb_d934], 2);
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 3; d_61eb_d5aa++)
        f_215d_13f1(&d_3334_cc82[d_61eb_d5aa][a], &d_3334_cc82[d_61eb_d5aa][d_61eb_d934], 4);
    for (d_61eb_d5f4 = 0x286; d_61eb_d5f4 <= d_61eb_d650 + 0x285; d_61eb_d5f4++) {
        if (d_3334_cee2[d_61eb_d5f4] == a)
            d_3334_cee2[d_61eb_d5f4] = d_61eb_d934;
        else if (d_3334_cee2[d_61eb_d5f4] == d_61eb_d934)
            d_3334_cee2[d_61eb_d5f4] = a;
    }
    f_215d_13f1(&d_53fc_778e[0][a], &d_53fc_778e[0][d_61eb_d934], 1);
    f_215d_13f1(&d_53fc_778e[1][a], &d_53fc_778e[1][d_61eb_d934], 1);
}

char f_9f8d_0305(int16_t v)
{
    d_61eb_da3c = 0;
    for (d_61eb_d612 = 4; d_61eb_d612 <= 6; d_61eb_d612++)
        for (d_61eb_d774 = 0; d_61eb_d774 <= 3; d_61eb_d774++)
            if ((d_61eb_d774 < 2 || d_61eb_d612 == 4) && d_432e_0000[d_61eb_d612][d_61eb_d774] == v) {
                d_61eb_d93a = d_61eb_d612;
                d_61eb_d93c = d_61eb_d774;
                d_61eb_da3c = -1;
                d_61eb_d774 = 3;
                d_61eb_d612 = 6;
            }
    return d_61eb_da3c;
}

void f_9f8d_0385(void)
{
    d_61eb_d5a4 = 1;
    memset(d_432e_066a, 1, 4);
    d_61eb_d9ae = 0;
}

void f_9f8d_03ac(int16_t a, int16_t b, int16_t c)
{
    d_61eb_d942 = -32;
    for (d_61eb_d634 = a; d_61eb_d634 <= b; d_61eb_d634++)
        for (d_61eb_d5de = 0; d_61eb_d5de <= 1; d_61eb_d5de++)
            d_53fc_11fc[d_61eb_d634][d_61eb_d5de][c] = d_61eb_d942;
}

void f_9f8d_0408(void)
{
    for (d_61eb_d5b8 = 0; d_61eb_d5b8 <= d_61eb_d58e - 1; d_61eb_d5b8++) {
        d_3334_0000[21][d_61eb_d5b8] = 0;
        d_3334_0000[22][d_61eb_d5b8] = 0;
    }
    d_61eb_dbbc = f_215d_1629(d_61eb_dc50, 1);
    for (d_61eb_d5f4 = 0; d_61eb_d5f4 <= d_61eb_d650 + 0x285; d_61eb_d5f4++)
        ((int16_t *)(d_61eb_dbbc + 2600))[d_61eb_d5f4] = 0;
}

void f_9f8d_0480(void)
{
    d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
    for (d_61eb_d5dc = 0; d_61eb_d5dc <= 37; d_61eb_d5dc++) {
        for (d_61eb_d62a = 0; d_61eb_d62a <= 13; d_61eb_d62a++)
            if (d_61eb_d62a != 1)
                d_61eb_dbc0[d_61eb_d62a][d_61eb_d5dc] = 0;
        d_3334_c0fa[d_61eb_d5dc] = 0;
    }
    for (d_61eb_d654 = 0; d_61eb_d654 <= 3; d_61eb_d654++) {
        d_61eb_dbe0 = f_215d_1629(d_61eb_dc62, 1);
        strcpy(d_61eb_dbe0 + d_61eb_d654 * 151, "");
        d_61eb_dbe4 = f_215d_1629(d_61eb_dc64, 1);
        strcpy(d_61eb_dbe4[d_61eb_d654], "");
        d_61eb_dbe8 = f_215d_1629(d_61eb_dc66, 1);
        strcpy(d_61eb_dbe8[d_61eb_d654], "");
    }
    d_3334_f26e = -1;
}

void f_9f8d_05b6(void)
{
    uint16_t i, j, k, l;

    for (d_61eb_d5dc = 0; d_61eb_d5dc < 38; d_61eb_d5dc++)
        d_432e_b73b[0][d_61eb_d5dc] = 0;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 4; j++)
            for (k = 0; k < 2; k++)
                for (l = 0; l < 30; l++)
                    d_432e_1b22[i][j][k][l] = -2;
    strcpy(d_432e_cddb, "");
    strcpy(d_432e_cf6b, "");
    strcpy(d_432e_d0ab, "");
    strcpy(d_432e_d37b, "");
    d_61eb_d818 = -1;
}

void f_9f8d_0670(int16_t t)
{
    int16_t n;

    if (d_61eb_d5a4 == 1 || (d_61eb_d5a4 > 1 && (t == d_61eb_d592 || t == d_61eb_d594 || t == d_61eb_d596 || t == d_61eb_d598)))
        f_9f8d_0ea8(t, d_3334_d90a[d_3334_ca6e[t]] % 16, 0);
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= d_3334_beca[t] - 1; d_61eb_d5aa++) {
        d_432e_45de[d_28d4_081c[t][d_61eb_d5aa]].f7 = 0;
        d_28d4_1958[23][d_28d4_081c[t][d_61eb_d5aa]] = 3;
    }
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 15; d_61eb_d5aa++)
        d_432e_3a3e[t][d_61eb_d5aa] = 0;
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 15; d_61eb_d5aa++) {
        n = 1499;
        d_3334_f9f8[t][d_61eb_d5aa] = n;
        if (d_61eb_d5aa <= 12) {
            d_28d4_0064[t][0][d_61eb_d5aa] = n;
            d_28d4_0064[t][1][d_61eb_d5aa] = n;
        }
    }
    if (f_1a83_2ad4(t) == 0) {
        n = 1498;
        for (d_61eb_d5c4 = 0; d_61eb_d5c4 <= 15; d_61eb_d5c4++) {
            d_3334_f9f8[t][d_61eb_d5c4] = n;
            d_432e_45de[n].f7 = 1;
            d_28d4_1958[18][n] = t;
            f_1a83_0e84(n);
        }
    }
    for (d_61eb_d7da = 0; d_61eb_d7da <= 1; d_61eb_d7da++) {
        n = 1498;
        for (d_61eb_d5c4 = 0; d_61eb_d5c4 <= 10; d_61eb_d5c4++) {
            d_28d4_0064[t][d_61eb_d7da][d_61eb_d5c4] = n;
            d_28d4_1958[18][n] = t;
            d_28d4_1958[23][n] = d_61eb_d7da + 1;
            f_1a83_1625(n);
        }
    }
}

void f_9f8d_08a7(int16_t a, int16_t b)
{
    f_215d_13f1((void *)&d_61eb_b0ec[a], (void *)&d_61eb_b0ec[b], 2);
    f_215d_13f1((void *)&d_61eb_b13c[a], (void *)&d_61eb_b13c[b], 2);
    d_61eb_dbd8 = f_215d_1629(d_61eb_dc5e, 1);
    f_215d_13f1((void *)d_61eb_dbd8[a], (void *)d_61eb_dbd8[b], 101);
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 71; d_61eb_d5aa++) {
        f_215d_13f1((void *)&d_3334_bdb2[d_61eb_d5aa][a], (void *)&d_3334_bdb2[d_61eb_d5aa][b], 1);
        if (d_61eb_d5aa < 12) {
            f_215d_13f1((void *)&d_3334_c8f2[d_61eb_d5aa][a], (void *)&d_3334_c8f2[d_61eb_d5aa][b], 2);
            if (d_61eb_d5aa < 8) {
                f_215d_13f1((void *)&d_432e_b73b[d_61eb_d5aa][a], (void *)&d_432e_b73b[d_61eb_d5aa][b], 1);
                if (d_61eb_d5aa < 4) {
                    f_215d_13f1((void *)&d_3334_cc82[d_61eb_d5aa][a], (void *)&d_3334_cc82[d_61eb_d5aa][b], 4);
                    if (d_61eb_d5aa < 2)
                        f_215d_13f1((void *)d_432e_ed13[d_61eb_d5aa][a], (void *)d_432e_ed13[d_61eb_d5aa][b], 5);
                }
            }
        }
    }
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 15; d_61eb_d5aa++) {
        f_215d_13f1((void *)&d_432e_066e[a][d_61eb_d5aa], (void *)&d_432e_066e[b][d_61eb_d5aa], 2);
        f_215d_13f1((void *)&d_432e_0b2e[a][d_61eb_d5aa], (void *)&d_432e_0b2e[b][d_61eb_d5aa], 1);
        for (d_61eb_d5f0 = 0; d_61eb_d5f0 <= 3; d_61eb_d5f0++) {
            f_215d_13f1((void *)&d_432e_39fe[a][d_61eb_d5f0][d_61eb_d5aa],
                        (void *)&d_432e_39fe[b][d_61eb_d5f0][d_61eb_d5aa], 1);
            if (d_61eb_d5f0 <= 1) {
                d_61eb_dbd0 = f_215d_1629(d_61eb_dc5a, 1);
                f_215d_13f1((void *)&d_61eb_dbd0[a][d_61eb_d5f0][d_61eb_d5aa],
                            (void *)&d_61eb_dbd0[b][d_61eb_d5f0][d_61eb_d5aa], 2);
            }
        }
    }
    f_9a9e_43ba(a, b);
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 15; d_61eb_d5aa++)
        for (d_61eb_d5f0 = 0; d_61eb_d5f0 <= 2; d_61eb_d5f0++)
            f_215d_13f1((void *)&d_3334_f278[a][d_61eb_d5f0][d_61eb_d5aa],
                        (void *)&d_3334_f278[b][d_61eb_d5f0][d_61eb_d5aa], 1);
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 37; d_61eb_d5aa++)
        for (d_61eb_d5f0 = 0; d_61eb_d5f0 <= 7; d_61eb_d5f0++) {
            if (d_432e_0000[d_61eb_d5f0][d_61eb_d5aa] == a)
                d_432e_0000[d_61eb_d5f0][d_61eb_d5aa] = b;
            else if (d_432e_0000[d_61eb_d5f0][d_61eb_d5aa] == b)
                d_432e_0000[d_61eb_d5f0][d_61eb_d5aa] = a;
        }
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 1; d_61eb_d5aa++)
        f_215d_13f1((void *)&d_53fc_778e[d_61eb_d5aa][a], (void *)&d_53fc_778e[d_61eb_d5aa][b], 1);
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= d_61eb_d650 + 0x285; d_61eb_d5aa++) {
        if (d_3334_cee2[d_61eb_d5aa] == a)
            d_3334_cee2[d_61eb_d5aa] = b;
        else if (d_3334_cee2[d_61eb_d5aa] == b)
            d_3334_cee2[d_61eb_d5aa] = a;
    }
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= d_61eb_d58e - 1; d_61eb_d5aa++) {
        if (d_28d4_1958[18][d_61eb_d5aa] == a)
            d_28d4_1958[18][d_61eb_d5aa] = b;
        else if (d_28d4_1958[18][d_61eb_d5aa] == b)
            d_28d4_1958[18][d_61eb_d5aa] = a;
        if (d_3334_0000[10][d_61eb_d5aa] == a)
            d_3334_0000[10][d_61eb_d5aa] = b;
        else if (d_3334_0000[10][d_61eb_d5aa] == b)
            d_3334_0000[10][d_61eb_d5aa] = a;
    }
    f_9a9e_45df(a, b);
    if (d_61eb_d592 == a)
        d_61eb_d592 = b;
    else if (d_61eb_d592 == b)
        d_61eb_d592 = a;
    if (d_61eb_d594 == a)
        d_61eb_d594 = b;
    else if (d_61eb_d594 == b)
        d_61eb_d594 = a;
    if (d_61eb_d596 == a)
        d_61eb_d596 = b;
    else if (d_61eb_d596 == b)
        d_61eb_d596 = a;
    if (d_61eb_d598 == a)
        d_61eb_d598 = b;
    else if (d_61eb_d598 == b)
        d_61eb_d598 = a;
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 0x8b; d_61eb_d5aa++) {
        if (d_432e_1a96[d_61eb_d5aa] == a)
            d_432e_1a96[d_61eb_d5aa] = b;
        else if (d_432e_1a96[d_61eb_d5aa] == b)
            d_432e_1a96[d_61eb_d5aa] = a;
    }
    f_215d_13f1((void *)&d_432e_31aa[a], (void *)&d_432e_31aa[b], 1);
}

void f_9f8d_0ea8(int16_t t, int16_t k, char c)
{
    char *p;

    switch (k) {
    case 0: p = d_61eb_5bf4[0]; break;
    case 1: p = d_61eb_5bf4[1]; break;
    case 2: p = d_61eb_5bf4[3]; break;
    case 3: p = d_61eb_5bf4[2]; break;
    case 4: p = d_61eb_5bf4[4]; break;
    case 5: p = d_61eb_5bf4[5]; break;
    case 6: p = d_61eb_5bf4[6]; break;
    case 7: p = d_61eb_5bf4[7]; break;
    case 8: p = d_61eb_5bf4[8]; break;
    }
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 15; d_61eb_d5aa++) {
        if (c == 0) {
            d_3334_f278[t][0][d_61eb_d5aa] = *p++;
            d_3334_f278[t][2][d_61eb_d5aa] = *p++;
            d_3334_f278[t][1][d_61eb_d5aa] = 0;
        }
    }
}

void f_9f8d_0f83(void)
{
    unsigned char n[38];

    memset(n, 0, 38);
    for (d_61eb_d5b8 = 0; d_61eb_d5b8 <= d_61eb_d58e - 1; d_61eb_d5b8++) {
        d_61eb_d5de = d_28d4_1958[18][d_61eb_d5b8];
        d_28d4_081c[d_61eb_d5de][n[d_61eb_d5de]] = d_61eb_d5b8;
        n[d_61eb_d5de]++;
        if (n[d_61eb_d5de] > 26) {
            f_1a83_0bb7(">26");
            while (f_215d_0c20() == 0)
                ;
        }
    }
}

void f_9f8d_101a(int16_t n)
{
    char buf[320];
    char item[80];
    uint16_t i;

    d_61eb_d5de = -1;
    d_61eb_da4c = 0;
    if (n == -1 && d_61eb_d652 > 0) {
        f_9f8d_14a0(0);
        strcpy(d_432e_ba27, "");
        for (i = 1; i <= strlen(d_432e_dfdf); i += 3) {
            sprintf(buf, "%.3s", d_432e_dfdf + i - 1);
            d_61eb_d5f6 = atol(buf);
            strcpy(d_432e_bca7, NEAR_PTR(d_61eb_b0ec[d_3334_cee2[d_61eb_d5f6]]));
            sprintf(buf, "%.13s", d_432e_bca7);
            sprintf(item, "%s|", buf);
            strcat(d_432e_ba27, item);
        }
        sprintf(buf, "*Exit|%sAnother Team|", d_432e_ba27);
        f_1a83_2da6(0, "Team choice", buf);
        if (d_61eb_d59e == 0)
            d_61eb_da4c = -1;
        else if (d_61eb_d59e >= 1 && d_61eb_d59e <= d_61eb_d652) {
            sprintf(buf, "%.3s", &d_432e_dfdf[(d_61eb_d59e - 1) * 3]);
            d_61eb_d5de = d_3334_cee2[atol(buf)];
            d_61eb_da4c = -1;
        }
    }
    if (d_61eb_da4c == 0) {
        d_61eb_d5e4 = 0;
        if (n >= 0)
            sprintf(buf, "Player %s Team", f_1a83_477e(n + 1));
        else
            strcpy(buf, "Team Choice");
        f_1a83_48f9(buf);
        f_1a83_3450(1.5, 3.75, 1, 2, 0x94, " SERIE A");
        f_1a83_3450(20.25, 3.75, 1, 2, 0x94, " SERIE B");
        d_61eb_d5ca = 8;
        d_61eb_d5da = 14;
        for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 37; d_61eb_d5d8++) {
            if (d_61eb_d5d8 == 18) {
                d_61eb_d5ca = 12;
                d_61eb_d5da = 4;
            }
            if (d_61eb_d5d8 <= 17) {
                d_61eb_da5d = 1.5;
                d_61eb_da55 = d_61eb_d5d8 + 5;
            } else {
                d_61eb_da5d = 20.25;
                d_61eb_da55 = d_61eb_d5d8 - 13;
            }
            sprintf(buf, " %s", (char *)NEAR_PTR(d_61eb_b0ec[d_61eb_d5d8]));
            f_1a83_4d96(0, d_61eb_da5d, d_61eb_da55, 1 - f_1a83_2ad4(d_61eb_d5d8) * 5, d_61eb_d5ca, 0x94, buf);
            f_215d_13f1(&d_61eb_d5ca, &d_61eb_d5da, 2);
        }
        f_1a83_3450(1.5, 23.0, 1, 8, 0x94, "");
        f_1a83_3450(1.5, 24.0, 1, 14, 0x94, "");
        if (n > -1 && d_61eb_da3a == 0)
            for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 37; d_61eb_d5d8++)
                if (f_1a83_2ad4(d_61eb_d5d8))
                    f_1a83_54f9(d_61eb_d5d8 + 1);
        do
            d_61eb_d59e = f_1a83_5296(0);
        while (d_61eb_d59e <= 0);
        d_61eb_d5de = d_61eb_d59e - 1;
    }
}

void f_9f8d_1379(char all)
{
    char buf[320];
    uint16_t i;

    d_61eb_d980 = -1;
    f_9f8d_14a0(all);
    if (strlen(d_432e_dfdf) == 3)
        d_61eb_d980 = atol(d_432e_dfdf);
    else if (strlen(d_432e_dfdf) > 3) {
        strcpy(d_432e_ba27, "*Exit|");
        for (i = 1; i <= strlen(d_432e_dfdf); i += 3) {
            sprintf(buf, "%.3s", d_432e_dfdf + i - 1);
            d_61eb_d5f6 = atol(buf);
            sprintf(buf, "%s|", f_1a83_4686(d_61eb_d5f6, 0));
            strcat(d_432e_ba27, buf);
        }
        f_1a83_2da6(0, "Choose manager", d_432e_ba27);
        if (d_61eb_d59e > 0) {
            sprintf(buf, "%.3s", d_432e_dfdf + (d_61eb_d59e - 1) * 3);
            d_61eb_d980 = atol(buf);
        }
    }
}

void f_9f8d_14a0(char all)
{
    char buf[320];

    strcpy(d_432e_dfdf, "");
    for (d_61eb_d950 = 0x286; d_61eb_d950 <= d_61eb_d650 + 0x285; d_61eb_d950++)
        if ((all == 0 && d_3334_cee2[d_61eb_d950] < 0xff) || all != 0) {
            sprintf(buf, "%03d", d_61eb_d950);
            strcat(d_432e_dfdf, buf);
        }
}

/* The squad list: the team's players (or its reserves) sorted by surname, one per line,
   with their positions, sides, status and fitness. */
void f_9f8d_151b(int16_t team, char reserves)
{
    unsigned char n;
    char colour;
    char buf[80];
    char a[40];
    char b[40];

    n = reserves == 0 ? d_3334_beca[team] : 16;
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= n - 2; d_61eb_d5d8++)
        for (d_61eb_d5aa = d_61eb_d5d8 + 1; d_61eb_d5aa <= n - 1; d_61eb_d5aa++) {
            if (reserves == 0) {
                if (strcmp(f_1a83_462c(d_28d4_081c[team][d_61eb_d5d8]),
                           f_1a83_462c(d_28d4_081c[team][d_61eb_d5aa])) > 0)
                    f_215d_13f1(&d_28d4_081c[team][d_61eb_d5d8], &d_28d4_081c[team][d_61eb_d5aa], 2);
            } else {
                d_61eb_dbd0 = f_215d_1629(d_61eb_dc5a, 0);
                strcpy(a, FAR_PTR(d_5b9b_1395[d_61eb_dbd0[team][1][d_61eb_d5d8]]));
                strcpy(b, FAR_PTR(d_5b9b_1395[d_61eb_dbd0[team][1][d_61eb_d5aa]]));
                if (strcmp(a, b) > 0) {
                    d_61eb_dbd0 = f_215d_1629(d_61eb_dc5a, 1);
                    f_215d_13f1(&d_61eb_dbd0[team][1][d_61eb_d5d8], &d_61eb_dbd0[team][1][d_61eb_d5aa], 2);
                }
            }
        }
    d_61eb_d952 = n - 1;
    if (team < 18)
        d_61eb_d5ec = 8;
    else
        d_61eb_d5ec = 12;
    d_61eb_d67c = 0;
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 25; d_61eb_d5d8++) {
        f_9f8d_1e48(d_61eb_d5d8);
        if (d_61eb_d5d8 <= d_61eb_d952) {
            d_61eb_d5e0 = 18;
            if (reserves == 0) {
                d_61eb_d5b8 = d_28d4_081c[team][d_61eb_d5d8];
                strcpy(d_432e_d855, "");
                strcpy(d_432e_e02f, "");
                strcpy(d_432e_c7e7, "");
                if (d_432e_45de[d_61eb_d5b8].f0)
                    strcpy(d_432e_d855, "G");
                if (d_432e_45de[d_61eb_d5b8].f1)
                    strcat(d_432e_d855, "D");
                if (d_432e_45de[d_61eb_d5b8].f2)
                    strcat(d_432e_d855, "M");
                if (d_432e_45de[d_61eb_d5b8].f3)
                    strcat(d_432e_d855, "A");
                if (d_432e_45de[d_61eb_d5b8].f4)
                    strcpy(d_432e_e02f, "R");
                if (d_432e_45de[d_61eb_d5b8].f5)
                    strcat(d_432e_e02f, "L");
                if (d_432e_45de[d_61eb_d5b8].f6)
                    strcat(d_432e_e02f, "C");
                sprintf(d_432e_c607, "%s %s", d_432e_d855, d_432e_e02f);
                if (d_28d4_1958[20][d_61eb_d5b8] > 0) {
                    if (d_28d4_1958[19][d_61eb_d5b8] == 50)
                        strcpy(d_432e_c7e7, "ct");
                    else if (d_28d4_1958[19][d_61eb_d5b8] == 27) {
                        strcpy(d_432e_c7e7, "su");
                        d_61eb_d5b8;    /* code-free: makes BCC keep this copy of the merged strcpy tail */
                    }
                    else if (d_28d4_1958[19][d_61eb_d5b8] != 51)
                        strcpy(d_432e_c7e7, "ij");
                } else if (d_432e_45de[d_61eb_d5b8].f7) {
                    unsigned char c;
                    c = f_1a83_1dd9(d_61eb_d5b8) + 1;
                    strcpy(d_432e_c7e7, f_1a83_2d52(c, 1));
                    d_61eb_d5e0 = 33;
                }
                if (f_215d_0b10(f_1a83_4485(d_61eb_d5b8), " ") > 0)
                    sprintf(d_432e_c747, "%s %c", f_1a83_462c(d_61eb_d5b8), *f_1a83_4485(d_61eb_d5b8));
                else
                    strcpy(d_432e_c747, f_1a83_462c(d_61eb_d5b8));
                if (d_432e_45de[d_61eb_d5b8].f8 && !d_432e_45de[d_61eb_d5b8].f10) {
                    sprintf(buf, "L %s", d_432e_c747);
                    strcpy(d_432e_c747, buf);
                } else if (d_432e_45de[d_61eb_d5b8].f8 && d_432e_45de[d_61eb_d5b8].f10) {
                    sprintf(buf, "R %s", d_432e_c747);
                    strcpy(d_432e_c747, buf);
                } else if (d_3334_a410[d_61eb_d5b8] == 0) {
                    sprintf(buf, "C %s", d_432e_c747);
                    strcpy(d_432e_c747, buf);
                } else if (f_1a83_6728(d_61eb_d5b8, -1)) {
                    if (d_61eb_d780 > 2 || d_3334_0000[14][d_61eb_d5b8] > 0) {
                        sprintf(buf, "U %s", d_432e_c747);
                        strcpy(d_432e_c747, buf);
                    } else {
                        sprintf(buf, "  %s", d_432e_c747);
                        strcpy(d_432e_c747, buf);
                    }
                } else {
                    sprintf(buf, "  %s", d_432e_c747);
                    strcpy(d_432e_c747, buf);
                }
                f_1a83_3450(d_61eb_da6d, d_61eb_da55, d_61eb_d5e0 / 16, d_61eb_d5e0 % 16, 12, d_432e_c7e7);
                if (d_3334_0000[7][d_61eb_d5b8] < 255)
                    colour = 6;
                else if (d_432e_45de[d_61eb_d5b8].f13)
                    colour = team < 20 ? 4 : 5;
                else
                    colour = 1;
                d_432e_c747[15] = 0;
                f_1a83_4d96(0, d_61eb_daed, d_61eb_da55, colour, d_61eb_d5ec, 0x5a, d_432e_c747);
                f_1a83_3450(d_61eb_daf1, d_61eb_da55, 2, 6, 0x2b, d_432e_c607);
                d_432e_1ee2[d_61eb_d5d8] = d_61eb_d5b8;
                d_61eb_d67c++;
            } else {
                if (d_432e_39fe[team][0][d_61eb_d5d8] == 1)
                    strcpy(d_432e_d855, " GK");
                else if (d_432e_39fe[team][0][d_61eb_d5d8] == 2)
                    strcpy(d_432e_d855, " DEF");
                else if (d_432e_39fe[team][0][d_61eb_d5d8] == 3)
                    strcpy(d_432e_d855, " MID");
                else if (d_432e_39fe[team][0][d_61eb_d5d8] == 4)
                    strcpy(d_432e_d855, " ATT");
                strcpy(d_432e_c7e7, "");
                if (d_432e_3a2e[team][d_61eb_d5d8] > 0)
                    strcpy(d_432e_c7e7, "na");
                else if (d_432e_3a3e[team][d_61eb_d5d8]) {
                    unsigned char c;
                    c = f_1a83_1dd9(team * 20 + d_61eb_d5d8 + 3000) + 1;
                    d_61eb_d5e0 = 33;
                    strcpy(d_432e_c7e7, f_1a83_2d52(c, 1));
                }
                f_1a83_3450(d_61eb_da6d, d_61eb_da55, d_61eb_d5e0 / 16, d_61eb_d5e0 % 16, 12, d_432e_c7e7);
                d_61eb_dbd0 = f_215d_1629(d_61eb_dc5a, 0);
                strcpy(buf, FAR_PTR(d_5b9b_0000[d_61eb_dbd0[team][0][d_61eb_d5d8]]));
                sprintf(d_432e_c747, "  %s %c", FAR_PTR(d_5b9b_1395[d_61eb_dbd0[team][1][d_61eb_d5d8]]), buf[0]);
                f_1a83_4d96(0, d_61eb_daed, d_61eb_da55, 1, d_61eb_d5ec, 0x5a, d_432e_c747);
                f_1a83_3450(d_61eb_daf1, d_61eb_da55, 2, 6, 0x2b, d_432e_d855);
                d_432e_1ee2[d_61eb_d5d8] = team * 20 + d_61eb_d5d8 + 3000;
                d_61eb_d67c++;
            }
        } else {
            f_1a83_3450(d_61eb_da6d, d_61eb_da55, 1, 2, 12, "");
            f_1a83_3450(d_61eb_daed, d_61eb_da55, 1, d_61eb_d5ec, 0x5a, "");
            f_1a83_3450(d_61eb_daf1, d_61eb_da55, 2, 6, 0x2b, "");
        }
        if (d_61eb_d5ec == 12)
            d_61eb_d5ec = 4;
        else if (d_61eb_d5ec == 4)
            d_61eb_d5ec = 12;
        else if (d_61eb_d5ec == 8)
            d_61eb_d5ec = 14;
        else if (d_61eb_d5ec == 14)
            d_61eb_d5ec = 8;
    }
}

void f_9f8d_1e48(int16_t line)
{
    if (line < 13) {
        d_61eb_da6d = 1.375;
        d_61eb_daed = 3.125;
        d_61eb_daf1 = 14.625;
        d_61eb_da55 = line + 6.5;
    } else {
        d_61eb_da6d = 37.375;
        d_61eb_daed = 20.25;
        d_61eb_daf1 = 31.75;
        d_61eb_da55 = line - 13 + 6.5;
    }
}

int32_t f_9f8d_1ec1(int16_t x)
{
    if (x <= 17)
        return 500000;
    return 125000;
}

void f_9f8d_1ede(void)
{
    unsigned char i;
    unsigned char j;
    char injured;
    char title[80];
    char text[180];

    for (d_61eb_d5b8 = 0; d_61eb_d5b8 <= d_61eb_d58e - 1; d_61eb_d5b8++) {
        unsigned char c;
        injured = f_1a83_2ad4((int16_t)d_28d4_1958[18][d_61eb_d5b8]);
        if (injured == 0) {
            d_61eb_d5e4 = f_1a83_6d8b(d_28d4_1958[18][d_61eb_d5b8]) + 1;
            if (d_432e_45de[d_61eb_d5b8].f20 == 0) {
                if (d_28d4_1958[23][d_61eb_d5b8] == 1 && d_61eb_d5e4 == 0 && d_28d4_1958[20][d_61eb_d5b8] == 0)
                    d_432e_45de[d_61eb_d5b8].f20 = 1;
            } else if ((d_28d4_1958[23][d_61eb_d5b8] > 1 || d_61eb_d5e4 > 0) && d_432e_45de[d_61eb_d5b8].f17 == 0)
                d_432e_45de[d_61eb_d5b8].f20 = 0;
        }
        if (d_28d4_1958[20][d_61eb_d5b8] > 0 && d_28d4_1958[19][d_61eb_d5b8] < 27) {
            c = d_3334_e332[d_3334_cc36[(int16_t)d_28d4_1958[18][d_61eb_d5b8]]] / 10 + 40;
            if (d_432e_45de[d_61eb_d5b8].f25)
                c = f_215d_13af(d_28d4_1958[21][d_61eb_d5b8], 80);
            else if (d_432e_45de[d_61eb_d5b8].f26)
                c = f_215d_13af(d_28d4_1958[21][d_61eb_d5b8], 70);
            else if (d_432e_45de[d_61eb_d5b8].f27)
                c = f_215d_13af(d_28d4_1958[21][d_61eb_d5b8], 65);
            d_28d4_1958[21][d_61eb_d5b8] = d_28d4_1958[21][d_61eb_d5b8] - (f_215d_0d96(3) + 3);
            if (d_28d4_1958[21][d_61eb_d5b8] < c)
                d_28d4_1958[21][d_61eb_d5b8] = c;
        }
        if (d_28d4_1958[21][d_61eb_d5b8] < 100 && (d_28d4_1958[20][d_61eb_d5b8] == 0
                || d_28d4_1958[20][d_61eb_d5b8] > 0 && d_28d4_1958[19][d_61eb_d5b8] == 27)) {
            d_28d4_1958[21][d_61eb_d5b8] += (100 - d_28d4_1958[21][d_61eb_d5b8]) / 2 + f_215d_0d96(5);
            if (d_28d4_1958[21][d_61eb_d5b8] > 100)
                d_28d4_1958[21][d_61eb_d5b8] = 100;
            if (injured == 0 && d_432e_45de[d_61eb_d5b8].f7 == 0 && d_28d4_1958[20][d_61eb_d5b8] == 0
                    && d_28d4_1958[21][d_61eb_d5b8] > 90 && d_61eb_da23 == 0)
                f_1a83_12f6(d_61eb_d5b8);
        }
        if (d_28d4_1958[20][d_61eb_d5b8] > 0 && d_28d4_1958[19][d_61eb_d5b8] < 27) {
            d_61eb_d674 = d_432e_45de[d_61eb_d5b8].f17 == 1 ? 0 : 1;
            if (d_28d4_1958[20][d_61eb_d5b8] >= 10)
                d_61eb_d674 = d_61eb_d674 + (f_215d_0d96(10) == 0);
            d_28d4_1958[20][d_61eb_d5b8] = f_215d_1343(d_28d4_1958[20][d_61eb_d5b8] - d_61eb_d674, 0);
            if (d_28d4_1958[20][d_61eb_d5b8] == 0)
                f_9a9e_155d(d_61eb_d5b8);
        } else if (d_28d4_1958[19][d_61eb_d5b8] >= 28 && d_28d4_1958[19][d_61eb_d5b8] < 50 && d_61eb_d5a2 > 12)
            f_9a9e_125e(d_61eb_d5b8, 27, (int16_t)d_28d4_1958[19][d_61eb_d5b8] - 27);
        if (d_61eb_da23)
            continue;
        d_3334_0000[11][d_61eb_d5b8] -= d_432e_45de[d_61eb_d5b8].f8 && d_61eb_d5a2 <= 12;
        if (f_1a83_6728(d_61eb_d5b8, -1)) {
            d_3334_0000[14][d_61eb_d5b8] += d_432e_45de[d_61eb_d5b8].f8 == 0 ? 1 : 0;
            d_3334_0000[15][d_61eb_d5b8] = 0;
        } else {
            d_3334_0000[15][d_61eb_d5b8] += d_432e_45de[d_61eb_d5b8].f8 ? 1 : 0;
            d_3334_0000[14][d_61eb_d5b8] = 0;
        }
        d_61eb_d916 = d_3334_a410[d_61eb_d5b8];
        if (d_61eb_d916 / 100 == d_61eb_d5a4 && f_1a83_66e8(d_61eb_d5a2) == d_61eb_d916 % 100) {
            if (d_3334_0000[7][d_61eb_d5b8] < 255)
                c = d_3334_0000[7][d_61eb_d5b8];
            else
                c = d_28d4_1958[18][d_61eb_d5b8];
            if (f_1a83_2ad4(c)) {
                sprintf(title, "%s squad news", (char *)NEAR_PTR(d_61eb_b0ec[d_28d4_1958[18][d_61eb_d5b8]]));
                sprintf(text, "%s's contract expired this week - he is now a free agent.", f_1a83_4485(d_61eb_d5b8));
                f_1a83_5844(c, title, text);
            }
            d_3334_a410[d_61eb_d5b8] = 0;
            d_432e_45de[d_61eb_d5b8].f9 = 0;
            d_3334_0000[19][d_61eb_d5b8] = 0;
        }
        if (d_432e_45de[d_61eb_d5b8].f16 && f_215d_0d96(10) == 0)
            d_432e_45de[d_61eb_d5b8].f16 = 0;
    }
    for (i = 0; i <= 37; i = i + 1)
        for (j = 0; j <= 15; j = j + 1)
            if (d_432e_3a2e[i][j] > 0) {
                d_432e_3a2e[i][j]--;
                if (d_432e_3a2e[i][j] == 0)
                    f_9a9e_155d(i * 20 + j + 3000);
            }
}
