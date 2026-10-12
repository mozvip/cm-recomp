/* Native port of decomp/src/A3DE.C (see ../README.md). */
/* @at a3de:0000 */
/* @data 60ae:5dda */
/* @module */

/* Overlay 10: team helpers moved out of CM1's root module 1680: the formations and the
 * tactics, picking the team, players' positions and fitness, the week's match setup and
 * the cup draws. CM93's version of part of CM1's 1680.C, with new code (16b2, 21e1). */
#include "port.h"

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
int16_t f_a3de_0000(int16_t x);
void f_a3de_0066(int16_t a, int16_t b);
char f_a3de_0319(int16_t v);
void f_a3de_0398(void);
void f_a3de_03bb(int16_t a, int16_t b, int16_t c);
void f_a3de_0416(void);
void f_a3de_048b(void);
void f_a3de_05c9(void);
void f_a3de_069a(int16_t t);
void f_a3de_08c3(int16_t a, int16_t b);
void f_a3de_0f2a(int16_t t, int16_t k, char c);
void f_a3de_1021(void);
void f_a3de_10b8(int16_t n);
void f_a3de_14f5(char all);
void f_a3de_1630(char all);
void f_a3de_16b2(int16_t team, char reserves);
void f_a3de_2142(int16_t line);
int32_t f_a3de_21b9(int16_t x);
void f_a3de_21e1(void);

struct flags_a { unsigned char b0; uint16_t f8 : 1; uint16_t f9 : 1; uint16_t : 6; uint16_t : 2; uint16_t f18 : 1; uint16_t f19 : 1; uint16_t : 4; uint16_t f24 : 1; uint16_t : 3; uint16_t f28 : 1; uint16_t : 1; uint16_t f30 : 1; uint16_t : 1; };   /* port: without BCC's ": 0" (GCC would start f24 at byte 4, not 3) */
struct flags_w { uint16_t f0 : 1; uint16_t f1 : 1; uint16_t f2 : 1; uint16_t f3 : 1; uint16_t f4 : 1; uint16_t f5 : 1; uint16_t f6 : 1; uint16_t f7 : 1; uint16_t f8 : 1; uint16_t f9 : 1; uint16_t f10 : 1; uint16_t f11 : 1; uint16_t f12 : 1; uint16_t f13 : 1; uint16_t f14 : 1; uint16_t f15 : 1; uint16_t f16 : 1; uint16_t f17 : 1; uint16_t f18 : 1; uint16_t f19 : 1; uint16_t f20 : 1; uint16_t f21 : 1; uint16_t f22 : 1; uint16_t f23 : 1; uint16_t f24 : 1; uint16_t f25 : 1; uint16_t f26 : 1; uint16_t f27 : 1; uint16_t f28 : 1; uint16_t f29 : 1; uint16_t f30 : 1; uint16_t f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
void f_14bc_0ecb(int16_t p);
void f_14bc_16af(int16_t p);
char f_14bc_2cc0(int16_t x);
float f_14bc_2cf4(int16_t x);
int32_t f_1bd3_0d69(int32_t n);
void f_1bd3_13a3(void *a, void *b, int16_t n);
void *f_1bd3_1617(int16_t handle, int16_t page);
extern char d_2289_fb08[];
extern unsigned char d_2289_fb10[];
extern char d_2289_5658[][80];
extern int16_t d_2289_d704[][4][2][30];
extern char d_2289_3f54[];
extern char d_2289_3dc4[];
extern char d_2289_3c84[];
extern char d_2289_39b4[];
extern unsigned char d_2289_a106[][80];
extern int16_t d_323f_0000[][80];
extern int16_t d_323f_0592[][14];
extern unsigned char d_323f_1c08[];
extern int16_t d_323f_1bfe;
extern unsigned char d_323f_2630[];
extern unsigned char d_323f_3c78[][140];
extern int32_t d_323f_3f94[][80];
extern int16_t d_323f_4494[][80];
extern int16_t d_323f_47b4[];
extern unsigned char d_323f_4c14[][82];
extern unsigned char d_323f_4e52[];
extern unsigned char d_323f_4fec[];
extern unsigned char d_323f_503e[];
extern unsigned char d_323f_52ce[];
extern unsigned char d_3c35_0000[][1860];
extern unsigned char d_471b_0000[][1860];
extern unsigned char d_471b_82c8[];
extern int16_t d_471b_b7a8[][26];
extern int16_t d_471b_c7e8[][2][13];
extern int16_t d_54d9_1076[][2][98];
extern unsigned char d_54d9_4f40[][140];
extern nearptr d_60ae_b572[];
extern nearptr d_60ae_b616[];
extern char d_60ae_d907;
extern char d_60ae_d908;
extern int16_t d_60ae_d9fa;
extern int16_t d_60ae_da00;
extern int16_t d_60ae_da02;
extern int16_t d_60ae_da06;
extern int16_t d_60ae_da08;
extern int16_t d_60ae_db24;
extern int16_t d_60ae_db62;
extern int16_t d_60ae_db7e;
extern int16_t d_60ae_dbc8;
extern int16_t d_60ae_dce4;
extern int16_t d_60ae_dce8;
extern int16_t d_60ae_dd04;
extern int16_t d_60ae_dd0e;
extern int16_t d_60ae_dd26;
extern int16_t d_60ae_dd44;
extern int16_t d_60ae_dd5a;
extern int16_t d_60ae_dd5c;
extern int16_t d_60ae_dd74;
extern int16_t d_60ae_dd78;
extern int16_t d_60ae_dd84;
extern int16_t d_60ae_dd92;
extern int16_t d_60ae_dd98;
extern int16_t d_60ae_dd9a;
extern int16_t d_60ae_dda4;
extern char (*d_60ae_dda6)[151];
extern char (*d_60ae_ddaa)[151];
extern char *d_60ae_ddae;
extern union flags d_60ae_ddbe[];
extern int32_t (*d_60ae_fade)[80];
extern char *d_60ae_fae2;
extern int16_t d_60ae_fdce;
extern int16_t d_60ae_fdd0;
extern int16_t d_60ae_fdd2;
extern int16_t d_60ae_fde2;
extern int16_t d_60ae_fde4;
void f_9e77_4b29(int16_t a, int16_t b);
void f_9e77_4d7d(int16_t a, int16_t b);
extern int16_t d_60ae_fdd6;
extern int16_t d_60ae_fdda;
extern char (*d_60ae_ddb6)[101];
extern int16_t (*d_60ae_face)[2][16];
extern int16_t d_60ae_dd48;
extern char d_2289_1e28[][82][5];
extern int16_t d_2289_f108[][16];
extern char d_2289_ec08[][16];
extern unsigned char d_2289_a0c6[][5][16];
extern unsigned char d_323f_0e8a[][3][14];
extern unsigned char d_2289_fb0c[];
extern unsigned char d_2289_de84[];
extern unsigned char d_2289_c250[];
void f_14bc_0b83(char *s);
void f_14bc_2f90(int16_t n, char *title, char *items);
void f_14bc_3672(float x, float y, int16_t bg, int16_t fg, int16_t w, char *s);
char *f_14bc_490d(int16_t manager, char full);
char *f_14bc_4a14(int16_t player);
void f_14bc_4bd3(char *);
void f_14bc_50f8(int16_t a, float x, float y, int16_t c, int16_t d, int16_t e, char *s);
int16_t f_14bc_5635(int16_t a);
void f_14bc_589c(int16_t team);
extern char d_2289_2e3f[];
extern char d_2289_5178[];
extern char d_2289_5308[];
extern float d_60ae_d8e3;
extern float d_60ae_d8eb;
extern char d_60ae_d8f7;
extern char d_60ae_d909;
extern int16_t d_60ae_d9bc;
extern int16_t d_60ae_d9ec;
extern int16_t d_60ae_dce6;
extern int16_t d_60ae_dd42;
extern int16_t d_60ae_dd54;
extern int16_t d_60ae_dd5e;
extern int16_t d_60ae_dd60;
extern int16_t d_60ae_dd6e;
extern int16_t d_60ae_dda0;
char *f_14bc_2f2c(int16_t x, char c);
int16_t f_14bc_1eb7(int16_t player);
char *f_14bc_4703(int16_t player);
char *f_14bc_48b4(int16_t player);
char f_14bc_6b4a(int16_t player, char c);
uint16_t f_1bd3_0b1b(char *s, char *set);
extern char d_2289_2df0[];
extern char d_2289_35ca[];
extern char d_2289_4638[];
extern char d_2289_46d8[];
extern char d_2289_4818[];
extern unsigned char d_2289_a0f6[][80];
extern int16_t d_2289_d6c8[];
extern int16_t d_323f_824a[];
extern farptr d_59f5_0000[];
extern farptr d_59f5_0fc0[];
extern float d_60ae_d84f;
extern float d_60ae_d853;
extern float d_60ae_d8d3;
extern int16_t d_60ae_d9ea;
extern int16_t d_60ae_dbbc;
extern int16_t d_60ae_dcbc;
extern int16_t d_60ae_dd4c;
extern int16_t d_60ae_dd58;
void f_14bc_1365(int16_t player);
void f_14bc_5bfe(int16_t team, char *title, char *text);
int16_t f_14bc_6b05(int16_t x);
int16_t f_1bd3_1307(int16_t a, int16_t b);
int16_t f_1bd3_1369(int16_t a, int16_t b);
void f_9e77_139d(int16_t player, int16_t a, int16_t b);
void f_9e77_1699(int16_t n);
extern char d_60ae_d920;
extern int16_t d_60ae_da26;
extern int16_t d_60ae_dcc4;
extern int16_t d_60ae_dd9c;
extern unsigned char d_323f_3058[];
extern int16_t d_323f_4b74[];

char d_60ae_5dda[9][28] = {      /* 14 (position, flag) pairs per tactic */
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

int16_t f_a3de_0000(int16_t x)
{
    return d_323f_4fec[d_2289_fb10[x]] * 3 + d_60ae_dd78 - 1
           - d_323f_4fec[d_2289_fb10[x]] - d_323f_503e[d_2289_fb10[x]];
}

void f_a3de_0066(int16_t a, int16_t b)
{
    d_60ae_d908 = a / 20 < b - 1;
    d_60ae_da08 = -1;
    for (d_60ae_dd5c = (b - 1) * 20; d_60ae_dd5c <= (b - 1) * 20 + 19; d_60ae_dd5c++) {
        if (f_14bc_2cc0(d_60ae_dd5c) == 0) {
            d_60ae_db7e = f_14bc_2cf4(d_60ae_dd5c) + f_1bd3_0d69(2) - f_1bd3_0d69(2);
            if (d_60ae_d908) {
                if (d_60ae_db7e > d_60ae_da06 || d_60ae_da08 == -1) {
                    d_60ae_da06 = d_60ae_db7e;
                    d_60ae_da08 = d_60ae_dd5c;
                }
            } else {
                if (d_60ae_db7e < d_60ae_da06 || d_60ae_da08 == -1) {
                    d_60ae_da06 = d_60ae_db7e;
                    d_60ae_da08 = d_60ae_dd5c;
                }
            }
        }
    }
    f_1bd3_13a3((void *)&d_60ae_b572[a], (void *)&d_60ae_b572[d_60ae_da08], 2);
    f_1bd3_13a3((void *)&d_60ae_b616[a], (void *)&d_60ae_b616[d_60ae_da08], 2);
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 71; d_60ae_dd92++)
        f_1bd3_13a3(&d_323f_4c14[d_60ae_dd92][a], &d_323f_4c14[d_60ae_dd92][d_60ae_da08], 1);
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 5; d_60ae_dd92++)
        f_1bd3_13a3(&d_323f_4494[d_60ae_dd92][a], &d_323f_4494[d_60ae_dd92][d_60ae_da08], 2);
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 3; d_60ae_dd92++)
        f_1bd3_13a3(&d_323f_3f94[d_60ae_dd92][a], &d_323f_3f94[d_60ae_dd92][d_60ae_da08], 4);
    for (d_60ae_dd44 = 0x286; d_60ae_dd44 <= d_60ae_dce8 + 0x285; d_60ae_dd44++) {
        if (d_323f_1c08[d_60ae_dd44] == a)
            d_323f_1c08[d_60ae_dd44] = d_60ae_da08;
        else if (d_323f_1c08[d_60ae_dd44] == d_60ae_da08)
            d_323f_1c08[d_60ae_dd44] = a;
    }
    f_1bd3_13a3(&d_54d9_4f40[0][a], &d_54d9_4f40[0][d_60ae_da08], 1);
    f_1bd3_13a3(&d_54d9_4f40[1][a], &d_54d9_4f40[1][d_60ae_da08], 1);
}

char f_a3de_0319(int16_t v)
{
    d_60ae_d907 = 0;
    for (d_60ae_dd26 = 4; d_60ae_dd26 <= 6; d_60ae_dd26++)
        for (d_60ae_dbc8 = 0; d_60ae_dbc8 <= 3; d_60ae_dbc8++)
            if ((d_60ae_dbc8 < 2 || d_60ae_dd26 == 4) && d_323f_0000[d_60ae_dd26][d_60ae_dbc8] == v) {
                d_60ae_da02 = d_60ae_dd26;
                d_60ae_da00 = d_60ae_dbc8;
                d_60ae_d907 = -1;
                d_60ae_dbc8 = 3;
                d_60ae_dd26 = 6;
            }
    return d_60ae_d907;
}

void f_a3de_0398(void)
{
    d_60ae_dd98 = 1;
    memset(d_2289_fb08, 1, 4);
}

void f_a3de_03bb(int16_t a, int16_t b, int16_t c)
{
    d_60ae_d9fa = -32;
    for (d_60ae_dd04 = a; d_60ae_dd04 <= b; d_60ae_dd04++)
        for (d_60ae_dd5a = 0; d_60ae_dd5a <= 1; d_60ae_dd5a++)
            d_54d9_1076[d_60ae_dd04][d_60ae_dd5a][c] = d_60ae_d9fa;
}

void f_a3de_0416(void)
{
    for (d_60ae_dd84 = 0; d_60ae_dd84 <= d_60ae_dda4 - 1; d_60ae_dd84++) {
        d_3c35_0000[21][d_60ae_dd84] = 0;
        d_3c35_0000[22][d_60ae_dd84] = 0;
    }
    d_60ae_fae2 = f_1bd3_1617(d_60ae_fde4, 1);
    for (d_60ae_dd44 = 0; d_60ae_dd44 <= d_60ae_dce8 + 0x285; d_60ae_dd44++)
        ((int16_t *)(d_60ae_fae2 + 2600))[d_60ae_dd44] = 0;
}

void f_a3de_048b(void)
{
    d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
    for (d_60ae_dd5c = 0; d_60ae_dd5c <= 79; d_60ae_dd5c++) {
        for (d_60ae_dd0e = 0; d_60ae_dd0e <= 13; d_60ae_dd0e++)
            if (d_60ae_dd0e != 1)
                d_60ae_fade[d_60ae_dd0e][d_60ae_dd5c] = 0;
        d_323f_52ce[d_60ae_dd5c] = 0;
    }
    for (d_60ae_dce4 = 0; d_60ae_dce4 <= 3; d_60ae_dce4++) {
        d_60ae_ddae = f_1bd3_1617(d_60ae_fdd2, 1);
        strcpy(d_60ae_ddae + d_60ae_dce4 * 151, "");
        d_60ae_ddaa = f_1bd3_1617(d_60ae_fdd0, 1);
        strcpy(d_60ae_ddaa[d_60ae_dce4], "");
        d_60ae_dda6 = f_1bd3_1617(d_60ae_fdce, 1);
        strcpy(d_60ae_dda6[d_60ae_dce4], "");
    }
    d_323f_1bfe = -1;
}

void f_a3de_05c9(void)
{
    uint16_t i, j, k, l;

    for (d_60ae_dd5c = 0; d_60ae_dd5c < 80; d_60ae_dd5c++)
        d_2289_5658[0][d_60ae_dd5c] = 0;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            for (k = 0; k < 2; k++)
                for (l = 0; l < 30; l++)
                    d_2289_d704[i][j][k][l] = -2;
    strcpy(d_2289_3f54, "");
    strcpy(d_2289_3dc4, "");
    strcpy(d_2289_3c84, "");
    strcpy(d_2289_39b4, "");
    d_60ae_db24 = -1;
}

void f_a3de_069a(int16_t t)
{
    int16_t n;

    if (d_60ae_dd98 == 1 || (d_60ae_dd98 > 1 && t == d_60ae_dd9a))
        f_a3de_0f2a(t, d_323f_2630[d_323f_47b4[t]] % 16, 0);
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= d_323f_4e52[t] - 1; d_60ae_dd92++) {
        d_60ae_ddbe[d_471b_b7a8[t][d_60ae_dd92]].w.f7 = 0;
        d_471b_0000[23][d_471b_b7a8[t][d_60ae_dd92]] = 3;
    }
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 15; d_60ae_dd92++)
        d_2289_a106[t][d_60ae_dd92] = 0;
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 13; d_60ae_dd92++) {
        n = 1859;
        d_323f_0592[t][d_60ae_dd92] = n;
        if (d_60ae_dd92 <= 12) {
            d_471b_c7e8[t][0][d_60ae_dd92] = n;
            d_471b_c7e8[t][1][d_60ae_dd92] = n;
        }
    }
    if (f_14bc_2cc0(t) == 0) {
        n = 1858;
        for (d_60ae_dd74 = 0; d_60ae_dd74 <= 13; d_60ae_dd74++) {
            d_323f_0592[t][d_60ae_dd74] = n;
            d_60ae_ddbe[n].w.f7 = 1;
            d_471b_82c8[n] = t;
            f_14bc_0ecb(n);
        }
    }
    for (d_60ae_db62 = 0; d_60ae_db62 <= 1; d_60ae_db62++) {
        n = 1858;
        for (d_60ae_dd74 = 0; d_60ae_dd74 <= 10; d_60ae_dd74++) {
            d_471b_c7e8[t][d_60ae_db62][d_60ae_dd74] = n;
            d_471b_82c8[n] = t;
            d_471b_0000[23][n] = d_60ae_db62 + 1;
            f_14bc_16af(n);
        }
    }
}

void f_a3de_08c3(int16_t a, int16_t b)
{
    f_1bd3_13a3((void *)&d_60ae_b572[a], (void *)&d_60ae_b572[b], 2);
    f_1bd3_13a3((void *)&d_60ae_b616[a], (void *)&d_60ae_b616[b], 2);
    d_60ae_ddb6 = f_1bd3_1617(d_60ae_fdd6, 1);
    f_1bd3_13a3((void *)d_60ae_ddb6[a], (void *)d_60ae_ddb6[b], 101);
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 71; d_60ae_dd92++) {
        f_1bd3_13a3((void *)&d_323f_4c14[d_60ae_dd92][a], (void *)&d_323f_4c14[d_60ae_dd92][b], 1);
        if (d_60ae_dd92 < 12) {
            f_1bd3_13a3((void *)&d_323f_4494[d_60ae_dd92][a], (void *)&d_323f_4494[d_60ae_dd92][b], 2);
            if (d_60ae_dd92 < 8) {
                f_1bd3_13a3((void *)&d_2289_5658[d_60ae_dd92][a], (void *)&d_2289_5658[d_60ae_dd92][b], 1);
                if (d_60ae_dd92 < 4) {
                    f_1bd3_13a3((void *)&d_323f_3f94[d_60ae_dd92][a], (void *)&d_323f_3f94[d_60ae_dd92][b], 4);
                    if (d_60ae_dd92 < 2)
                        f_1bd3_13a3((void *)d_2289_1e28[d_60ae_dd92][a], (void *)d_2289_1e28[d_60ae_dd92][b], 5);
                }
            }
        }
    }
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 15; d_60ae_dd92++) {
        f_1bd3_13a3((void *)&d_2289_f108[a][d_60ae_dd92], (void *)&d_2289_f108[b][d_60ae_dd92], 2);
        f_1bd3_13a3((void *)&d_2289_ec08[a][d_60ae_dd92], (void *)&d_2289_ec08[b][d_60ae_dd92], 1);
        for (d_60ae_dd48 = 0; d_60ae_dd48 <= 3; d_60ae_dd48++) {
            f_1bd3_13a3((void *)&d_2289_a0c6[a][d_60ae_dd48][d_60ae_dd92],
                        (void *)&d_2289_a0c6[b][d_60ae_dd48][d_60ae_dd92], 1);
            if (d_60ae_dd48 <= 1) {
                d_60ae_face = f_1bd3_1617(d_60ae_fdda, 1);
                f_1bd3_13a3((void *)&d_60ae_face[a][d_60ae_dd48][d_60ae_dd92],
                            (void *)&d_60ae_face[b][d_60ae_dd48][d_60ae_dd92], 2);
            }
        }
    }
    f_9e77_4b29(a, b);
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 13; d_60ae_dd92++)
        for (d_60ae_dd48 = 0; d_60ae_dd48 <= 2; d_60ae_dd48++)
            f_1bd3_13a3((void *)&d_323f_0e8a[a][d_60ae_dd48][d_60ae_dd92],
                        (void *)&d_323f_0e8a[b][d_60ae_dd48][d_60ae_dd92], 1);
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 79; d_60ae_dd92++)
        for (d_60ae_dd48 = 0; d_60ae_dd48 <= 7; d_60ae_dd48++) {
            if (d_323f_0000[d_60ae_dd48][d_60ae_dd92] == a)
                d_323f_0000[d_60ae_dd48][d_60ae_dd92] = b;
            else if (d_323f_0000[d_60ae_dd48][d_60ae_dd92] == b)
                d_323f_0000[d_60ae_dd48][d_60ae_dd92] = a;
        }
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 1; d_60ae_dd92++) {
        if (d_2289_fb0c[d_60ae_dd92] == a)
            d_2289_fb0c[d_60ae_dd92] = b;
        else if (d_2289_fb0c[d_60ae_dd92] == b)
            d_2289_fb0c[d_60ae_dd92] = a;
        f_1bd3_13a3((void *)&d_54d9_4f40[d_60ae_dd92][a], (void *)&d_54d9_4f40[d_60ae_dd92][b], 1);
    }
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= d_60ae_dce8 + 0x285; d_60ae_dd92++) {
        if (d_323f_1c08[d_60ae_dd92] == a)
            d_323f_1c08[d_60ae_dd92] = b;
        else if (d_323f_1c08[d_60ae_dd92] == b)
            d_323f_1c08[d_60ae_dd92] = a;
    }
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= d_60ae_dda4 - 1; d_60ae_dd92++) {
        if (d_471b_0000[18][d_60ae_dd92] == a)
            d_471b_0000[18][d_60ae_dd92] = b;
        else if (d_471b_0000[18][d_60ae_dd92] == b)
            d_471b_0000[18][d_60ae_dd92] = a;
        if (d_3c35_0000[10][d_60ae_dd92] == a)
            d_3c35_0000[10][d_60ae_dd92] = b;
        else if (d_3c35_0000[10][d_60ae_dd92] == b)
            d_3c35_0000[10][d_60ae_dd92] = a;
    }
    f_9e77_4d7d(a, b);
    if (d_60ae_dd9a == a)
        d_60ae_dd9a = b;
    else if (d_60ae_dd9a == b)
        d_60ae_dd9a = a;
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 0x8b; d_60ae_dd92++) {
        if (d_2289_de84[d_60ae_dd92] == a)
            d_2289_de84[d_60ae_dd92] = b;
        else if (d_2289_de84[d_60ae_dd92] == b)
            d_2289_de84[d_60ae_dd92] = a;
    }
    f_1bd3_13a3((void *)&d_2289_c250[a], (void *)&d_2289_c250[b], 1);
}

void f_a3de_0f2a(int16_t t, int16_t k, char c)
{
    char *p;

    switch (k) {
    case 0: p = d_60ae_5dda[0]; break;
    case 1: p = d_60ae_5dda[1]; break;
    case 2: p = d_60ae_5dda[3]; break;
    case 3: p = d_60ae_5dda[2]; break;
    case 4: p = d_60ae_5dda[4]; break;
    case 5: p = d_60ae_5dda[5]; break;
    case 6: p = d_60ae_5dda[6]; break;
    case 7: p = d_60ae_5dda[7]; break;
    case 8: p = d_60ae_5dda[8]; break;
    }
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 13; d_60ae_dd92++) {
        if (c == 0) {
            d_323f_0e8a[t][0][d_60ae_dd92] = *p++;
            d_323f_0e8a[t][2][d_60ae_dd92] = *p++;
            d_323f_0e8a[t][1][d_60ae_dd92] = 0;
        }
    }
}

void f_a3de_1021(void)
{
    unsigned char n[80];

    memset(n, 0, 80);
    for (d_60ae_dd84 = 0; d_60ae_dd84 <= d_60ae_dda4 - 1; d_60ae_dd84++) {
        d_60ae_dd5a = d_471b_82c8[d_60ae_dd84];
        d_471b_b7a8[d_60ae_dd5a][n[d_60ae_dd5a]] = d_60ae_dd84;
        n[d_60ae_dd5a]++;
        if (n[d_60ae_dd5a] > 26)
            f_14bc_0b83(">26");
    }
}

void f_a3de_10b8(int16_t n)
{
    char buf[320];
    char item[80];
    uint16_t i;

    d_60ae_dd5a = -1;
    d_60ae_d8f7 = 0;
    if (n == -1 && d_60ae_dce6 > 0) {
        f_a3de_1630(0);
        strcpy(d_2289_5308, "");
        for (i = 1; i <= strlen(&d_2289_2e3f[1]); i += 3) {
            sprintf(buf, "%.3s", &d_2289_2e3f[i]);
            d_60ae_dd42 = atol(buf);
            strcpy(d_2289_5178, NEAR_PTR(d_60ae_b572[d_323f_1c08[d_60ae_dd42]]));
            sprintf(buf, "%.13s", d_2289_5178);
            sprintf(item, "%s|", buf);
            strcat(d_2289_5308, item);
        }
        sprintf(buf, "*Exit|%sAnother Team|", d_2289_5308);
        f_14bc_2f90(0, "Team choice", buf);
        if (d_60ae_dda0 == 0)
            d_60ae_d8f7 = -1;
        else if (d_60ae_dda0 >= 1 && d_60ae_dda0 <= d_60ae_dce6) {
            sprintf(buf, "%.3s", &d_2289_2e3f[d_60ae_dda0 * 3 - 2]);
            d_60ae_dd5a = d_323f_1c08[atol(buf)];
            d_60ae_d8f7 = -1;
        }
    }
    if (d_60ae_d8f7 == 0) {
        d_60ae_dd54 = 0;
        if (n >= 0)
            sprintf(buf, "Player %s Team", f_14bc_4a14(n + 1));
        else
            strcpy(buf, "Team Choice");
        f_14bc_4bd3(buf);
        f_14bc_3672(1.5, 3.75, 1, 2, 0x49, " FA PREMIER");
        f_14bc_3672(10.875, 3.75, 1, 2, 0x49, " DIV ONE");
        f_14bc_3672(20.25, 3.75, 1, 2, 0x49, " DIV TWO");
        f_14bc_3672(29.625, 3.75, 1, 2, 0x49, " DIV THREE");
        d_60ae_dd6e = 8;
        d_60ae_dd5e = 14;
        for (d_60ae_dd60 = 0; d_60ae_dd60 <= 79; d_60ae_dd60++) {
            if (d_60ae_dd60 == 20) {
                d_60ae_dd6e = 12;
                d_60ae_dd5e = 4;
            }
            if (d_60ae_dd60 <= 19) {
                d_60ae_d8e3 = 1.5;
                d_60ae_d8eb = d_60ae_dd60 + 5;
            } else if (d_60ae_dd60 <= 39) {
                d_60ae_d8e3 = 10.875;
                d_60ae_d8eb = d_60ae_dd60 - 15;
            } else if (d_60ae_dd60 <= 59) {
                d_60ae_d8e3 = 20.25;
                d_60ae_d8eb = d_60ae_dd60 - 35;
            } else if (d_60ae_dd60 <= 79) {
                d_60ae_d8e3 = 29.625;
                d_60ae_d8eb = d_60ae_dd60 - 55;
            }
            sprintf(buf, " %.11s", (char *)NEAR_PTR(d_60ae_b572[d_60ae_dd60]));
            f_14bc_50f8(0, d_60ae_d8e3, d_60ae_d8eb, 1 - f_14bc_2cc0(d_60ae_dd60) * 5, d_60ae_dd6e, 0x49, buf);
            f_1bd3_13a3(&d_60ae_dd6e, &d_60ae_dd5e, 2);
        }
        if (n > -1 && d_60ae_d909 == 0)
            for (d_60ae_dd60 = 0; d_60ae_dd60 <= 79; d_60ae_dd60++)
                if (f_14bc_2cc0(d_60ae_dd60))
                    f_14bc_589c(d_60ae_dd60 + 1);
        do
            d_60ae_dda0 = f_14bc_5635(0);
        while (d_60ae_dda0 <= 0);
        d_60ae_dd5a = d_60ae_dda0 - 1;
    }
}

void f_a3de_14f5(char all)
{
    char buf[320];
    uint16_t i;

    d_60ae_d9bc = -1;
    f_a3de_1630(all);
    if (strlen(&d_2289_2e3f[1]) == 3)
        d_60ae_d9bc = atol(&d_2289_2e3f[1]);
    else if (strlen(&d_2289_2e3f[1]) > 3) {
        strcpy(d_2289_5308, "*Exit|");
        for (i = 1; i <= strlen(&d_2289_2e3f[1]); i += 3) {
            sprintf(buf, "%.3s", &d_2289_2e3f[i]);
            d_60ae_dd42 = atol(buf);
            sprintf(buf, "%s|", f_14bc_490d(d_60ae_dd42, 0));
            strcat(d_2289_5308, buf);
        }
        f_14bc_2f90(0, "Choose manager", d_2289_5308);
        if (d_60ae_dda0 > 0) {
            sprintf(buf, "%.3s", &d_2289_2e3f[d_60ae_dda0 * 3 - 2]);
            d_60ae_d9bc = atol(buf);
        }
    }
}

void f_a3de_1630(char all)
{
    char buf[320];

    strcpy(&d_2289_2e3f[1], "");
    for (d_60ae_d9ec = 0x286; d_60ae_d9ec <= d_60ae_dce8 + 0x285; d_60ae_d9ec++)
        if ((all == 0 && d_323f_1c08[d_60ae_d9ec] < 0xff) || all != 0) {
            sprintf(buf, "%03d", d_60ae_d9ec);
            strcat(&d_2289_2e3f[1], buf);
        }
}

/* The squad list: the team's players (or its reserves) sorted by surname, one per line,
   with their positions, sides, status and fitness. */
void f_a3de_16b2(int16_t team, char reserves)
{
    unsigned char n;
    volatile unsigned char c;   /* kept in memory, as in the original (-Oe would put it in DL) */
    char buf[80];
    char a[40];
    char b[40];
    char colour;

    n = reserves == 0 ? d_323f_4e52[team] : 16;
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= n - 2; d_60ae_dd60++)
        for (d_60ae_dd92 = d_60ae_dd60 + 1; d_60ae_dd92 <= n - 1; d_60ae_dd92++) {
            if (reserves == 0) {
                if (strcmp(f_14bc_48b4(d_471b_b7a8[team][d_60ae_dd60]),
                           f_14bc_48b4(d_471b_b7a8[team][d_60ae_dd92])) > 0)
                    f_1bd3_13a3(&d_471b_b7a8[team][d_60ae_dd60], &d_471b_b7a8[team][d_60ae_dd92], 2);
            } else {
                d_60ae_face = f_1bd3_1617(d_60ae_fdda, 0);
                strcpy(a, FAR_PTR(d_59f5_0fc0[d_60ae_face[team][1][d_60ae_dd60]]));
                strcpy(b, FAR_PTR(d_59f5_0fc0[d_60ae_face[team][1][d_60ae_dd92]]));
                if (strcmp(a, b) > 0) {
                    d_60ae_face = f_1bd3_1617(d_60ae_fdda, 1);
                    f_1bd3_13a3(&d_60ae_face[team][1][d_60ae_dd60], &d_60ae_face[team][1][d_60ae_dd92], 2);
                }
            }
        }
    d_60ae_d9ea = n - 1;
    if (team < 20)
        d_60ae_dd4c = 8;
    else
        d_60ae_dd4c = 12;
    d_60ae_dcbc = 0;
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= 25; d_60ae_dd60++) {
        f_a3de_2142(d_60ae_dd60);
        if (d_60ae_dd60 <= d_60ae_d9ea) {
            d_60ae_dd58 = 18;
            if (reserves == 0) {
                d_60ae_dd84 = d_471b_b7a8[team][d_60ae_dd60];
                strcpy(d_2289_35ca, "");
                strcpy(d_2289_2df0, "");
                strcpy(d_2289_4638, "");
                if (d_60ae_ddbe[d_60ae_dd84].w.f0)
                    strcpy(d_2289_35ca, "G");
                if (d_60ae_ddbe[d_60ae_dd84].w.f1)
                    strcat(d_2289_35ca, "D");
                if (d_60ae_ddbe[d_60ae_dd84].w.f2)
                    strcat(d_2289_35ca, "M");
                if (d_60ae_ddbe[d_60ae_dd84].w.f3)
                    strcat(d_2289_35ca, "A");
                if (d_60ae_ddbe[d_60ae_dd84].w.f4)
                    strcpy(d_2289_2df0, "R");
                if (d_60ae_ddbe[d_60ae_dd84].w.f5)
                    strcat(d_2289_2df0, "L");
                if (d_60ae_ddbe[d_60ae_dd84].w.f6)
                    strcat(d_2289_2df0, "C");
                sprintf(d_2289_4818, "%s %s", d_2289_35ca, d_2289_2df0);
                if (d_471b_0000[20][d_60ae_dd84] > 0) {
                    if (d_471b_0000[19][d_60ae_dd84] == 50)
                        strcpy(d_2289_4638, "ct");
                    else if (d_471b_0000[19][d_60ae_dd84] == 26)
                        strcpy(d_2289_4638, "su");
                    else if (d_471b_0000[19][d_60ae_dd84] != 51)
                        strcpy(d_2289_4638, "ij");
                } else if (d_60ae_ddbe[d_60ae_dd84].w.f7) {
                    c = f_14bc_1eb7(d_60ae_dd84) + 1;
                    strcpy(d_2289_4638, f_14bc_2f2c(c, 1));
                    d_60ae_dd58 = 33;
                }
                if (f_1bd3_0b1b(f_14bc_4703(d_60ae_dd84), " ") > 0)
                    sprintf(d_2289_46d8, "%s %c", f_14bc_48b4(d_60ae_dd84), *f_14bc_4703(d_60ae_dd84));
                else
                    strcpy(d_2289_46d8, f_14bc_48b4(d_60ae_dd84));
                if (d_60ae_ddbe[d_60ae_dd84].w.f8 && !d_60ae_ddbe[d_60ae_dd84].w.f10)
                    sprintf(buf, "L %s", d_2289_46d8);
                else if (d_60ae_ddbe[d_60ae_dd84].w.f8 && d_60ae_ddbe[d_60ae_dd84].w.f10)
                    sprintf(buf, "R %s", d_2289_46d8);
                else if (d_323f_824a[d_60ae_dd84] == 0)
                    sprintf(buf, "C %s", d_2289_46d8);
                else if (f_14bc_6b4a(d_60ae_dd84, -1)) {
                    if (d_60ae_dbbc > 2 || d_3c35_0000[14][d_60ae_dd84] > 0)
                        sprintf(buf, "U %s", d_2289_46d8);
                    else
                        sprintf(buf, "  %s", d_2289_46d8);
                } else
                    sprintf(buf, "  %s", d_2289_46d8);
                strcpy(d_2289_46d8, buf);
                f_14bc_3672(d_60ae_d8d3, d_60ae_d8eb, d_60ae_dd58 / 16, d_60ae_dd58 % 16, 12, d_2289_4638);
                if (d_3c35_0000[7][d_60ae_dd84] < 255)
                    colour = 6;
                else if (d_60ae_ddbe[d_60ae_dd84].w.f13)
                    colour = team < 20 ? 4 : 5;
                else
                    colour = 1;
                d_2289_46d8[15] = 0;
                f_14bc_50f8(0, d_60ae_d853, d_60ae_d8eb, colour, d_60ae_dd4c, 0x5a, d_2289_46d8);
                f_14bc_3672(d_60ae_d84f, d_60ae_d8eb, 2, 6, 0x2b, d_2289_4818);
                d_2289_d6c8[d_60ae_dd60] = d_60ae_dd84;
                d_60ae_dcbc++;
            } else {
                if (d_2289_a0c6[team][0][d_60ae_dd60] == 1)
                    strcpy(d_2289_35ca, " GK");
                else if (d_2289_a0c6[team][0][d_60ae_dd60] == 2)
                    strcpy(d_2289_35ca, " DEF");
                else if (d_2289_a0c6[team][0][d_60ae_dd60] == 3)
                    strcpy(d_2289_35ca, " MID");
                else if (d_2289_a0c6[team][0][d_60ae_dd60] == 4)
                    strcpy(d_2289_35ca, " ATT");
                strcpy(d_2289_4638, "");
                if (d_2289_a0f6[team][d_60ae_dd60] > 0)
                    strcpy(d_2289_4638, "na");
                else if (d_2289_a106[team][d_60ae_dd60]) {
                    c = f_14bc_1eb7(team * 20 + d_60ae_dd60 + 3000) + 1;
                    d_60ae_dd58 = 33;
                    strcpy(d_2289_4638, f_14bc_2f2c(c, 1));
                }
                f_14bc_3672(d_60ae_d8d3, d_60ae_d8eb, d_60ae_dd58 / 16, d_60ae_dd58 % 16, 12, d_2289_4638);
                d_60ae_face = f_1bd3_1617(d_60ae_fdda, 0);
                strcpy(buf, FAR_PTR(d_59f5_0000[d_60ae_face[team][0][d_60ae_dd60]]));
                sprintf(d_2289_46d8, "  %s %c", FAR_PTR(d_59f5_0fc0[d_60ae_face[team][1][d_60ae_dd60]]), buf[0]);
                f_14bc_50f8(0, d_60ae_d853, d_60ae_d8eb, 1, d_60ae_dd4c, 0x5a, d_2289_46d8);
                f_14bc_3672(d_60ae_d84f, d_60ae_d8eb, 2, 6, 0x2b, d_2289_35ca);
                d_2289_d6c8[d_60ae_dd60] = team * 20 + d_60ae_dd60 + 3000;
                d_60ae_dcbc++;
            }
        } else {
            f_14bc_3672(d_60ae_d8d3, d_60ae_d8eb, 1, 2, 12, "");
            f_14bc_3672(d_60ae_d853, d_60ae_d8eb, 1, d_60ae_dd4c, 0x5a, "");
            f_14bc_3672(d_60ae_d84f, d_60ae_d8eb, 2, 6, 0x2b, "");
        }
        if (d_60ae_dd4c == 12)
            d_60ae_dd4c = 4;
        else if (d_60ae_dd4c == 4)
            d_60ae_dd4c = 12;
        else if (d_60ae_dd4c == 8)
            d_60ae_dd4c = 14;
        else if (d_60ae_dd4c == 14)
            d_60ae_dd4c = 8;
    }
}

void f_a3de_2142(int16_t line)
{
    if (line < 13) {
        d_60ae_d8d3 = 1.375;
        d_60ae_d853 = 3.125;
        d_60ae_d84f = 14.625;
        d_60ae_d8eb = line + 6.5;
    } else {
        d_60ae_d8d3 = 37.375;
        d_60ae_d853 = 20.25;
        d_60ae_d84f = 31.75;
        d_60ae_d8eb = line - 13 + 6.5;
    }
}

int32_t f_a3de_21b9(int16_t x)
{
    if (x <= 19)
        return 500000;
    if (x <= 39)
        return 250000;
    return 125000;
}

void f_a3de_21e1(void)
{
    unsigned char i;
    unsigned char j;
    char injured;
    unsigned char c;
    char title[80];
    char text[180];

    for (d_60ae_dd84 = 0; d_60ae_dd84 <= d_60ae_dda4 - 1; d_60ae_dd84++) {
        injured = f_14bc_2cc0(d_471b_0000[18][d_60ae_dd84]);
        if (injured == 0) {
            d_60ae_dd54 = d_471b_0000[18][d_60ae_dd84] / 20 + 1;
            if (d_60ae_ddbe[d_60ae_dd84].w.f20 == 0) {
                if (d_471b_0000[23][d_60ae_dd84] == 1 && d_60ae_dd54 < 3 && d_471b_0000[20][d_60ae_dd84] == 0)
                    d_60ae_ddbe[d_60ae_dd84].w.f20 = 1;
            } else if ((d_471b_0000[23][d_60ae_dd84] > 1 || d_60ae_dd54 > 2) && d_60ae_ddbe[d_60ae_dd84].w.f17 == 0)
                d_60ae_ddbe[d_60ae_dd84].w.f20 = 0;
        }
        if (d_471b_0000[20][d_60ae_dd84] > 0 && d_471b_0000[19][d_60ae_dd84] < 26) {
            c = d_323f_3058[d_323f_4b74[d_471b_0000[18][d_60ae_dd84]]] / 10 + 40;
            if (d_60ae_ddbe[d_60ae_dd84].w.f25)
                c = f_1bd3_1369(d_471b_0000[21][d_60ae_dd84], 80);
            else if (d_60ae_ddbe[d_60ae_dd84].w.f26)
                c = f_1bd3_1369(d_471b_0000[21][d_60ae_dd84], 70);
            else if (d_60ae_ddbe[d_60ae_dd84].w.f27)
                c = f_1bd3_1369(d_471b_0000[21][d_60ae_dd84], 65);
            d_471b_0000[21][d_60ae_dd84] -= f_1bd3_0d69(3) + 3;
            if (d_471b_0000[21][d_60ae_dd84] < c)
                d_471b_0000[21][d_60ae_dd84] = c;
        }
        if (d_471b_0000[21][d_60ae_dd84] < 100 && (d_471b_0000[20][d_60ae_dd84] == 0
                || d_471b_0000[20][d_60ae_dd84] > 0 && d_471b_0000[19][d_60ae_dd84] == 26)) {
            d_471b_0000[21][d_60ae_dd84] += (100 - d_471b_0000[21][d_60ae_dd84]) / 2 + f_1bd3_0d69(5);
            if (d_471b_0000[21][d_60ae_dd84] > 100)
                d_471b_0000[21][d_60ae_dd84] = 100;
            if (injured == 0 && d_60ae_ddbe[d_60ae_dd84].w.f7 == 0 && d_471b_0000[20][d_60ae_dd84] == 0
                    && d_471b_0000[21][d_60ae_dd84] > 90 && d_60ae_d920 == 0)
                f_14bc_1365(d_60ae_dd84);
        }
        if (d_471b_0000[20][d_60ae_dd84] > 0 && d_471b_0000[19][d_60ae_dd84] < 26) {
            d_60ae_dcc4 = d_60ae_ddbe[d_60ae_dd84].w.f17 == 1 ? 0 : 1;
            if (d_471b_0000[20][d_60ae_dd84] >= 10)
                d_60ae_dcc4 = d_60ae_dcc4 + (f_1bd3_0d69(10) == 0);
            d_471b_0000[20][d_60ae_dd84] = f_1bd3_1307(d_471b_0000[20][d_60ae_dd84] - d_60ae_dcc4, 0);
            if (d_471b_0000[20][d_60ae_dd84] == 0)
                f_9e77_1699(d_60ae_dd84);
        } else if (d_471b_0000[19][d_60ae_dd84] >= 27 && d_471b_0000[19][d_60ae_dd84] < 50 && d_60ae_dd9c > 8)
            f_9e77_139d(d_60ae_dd84, 26, d_471b_0000[19][d_60ae_dd84] - 26);
        if (d_60ae_d920)
            continue;
        d_3c35_0000[11][d_60ae_dd84] -= d_60ae_ddbe[d_60ae_dd84].w.f8 && d_60ae_dd9c < 67;
        if (f_14bc_6b4a(d_60ae_dd84, -1)) {
            d_3c35_0000[14][d_60ae_dd84] += d_60ae_ddbe[d_60ae_dd84].w.f8 == 0 ? 1 : 0;
            d_3c35_0000[15][d_60ae_dd84] = 0;
        } else {
            d_3c35_0000[15][d_60ae_dd84] += d_60ae_ddbe[d_60ae_dd84].w.f8 ? 1 : 0;
            d_3c35_0000[14][d_60ae_dd84] = 0;
        }
        d_60ae_da26 = d_323f_824a[d_60ae_dd84];
        if (d_60ae_da26 / 100 == d_60ae_dd98 && f_14bc_6b05(d_60ae_dd9c) == d_60ae_da26 % 100) {
            if (d_3c35_0000[7][d_60ae_dd84] < 255)
                c = d_3c35_0000[7][d_60ae_dd84];
            else
                c = d_471b_0000[18][d_60ae_dd84];
            if (f_14bc_2cc0(c)) {
                sprintf(title, "%s squad news", (char *)NEAR_PTR(d_60ae_b572[d_471b_0000[18][d_60ae_dd84]]));
                sprintf(text, "%s's contract expired this week - he is now a free agent.", f_14bc_4703(d_60ae_dd84));
                f_14bc_5bfe(c, title, text);
            }
            d_323f_824a[d_60ae_dd84] = 0;
            d_60ae_ddbe[d_60ae_dd84].w.f9 = 0;
            d_3c35_0000[19][d_60ae_dd84] = 0;
        }
        if (d_60ae_ddbe[d_60ae_dd84].w.f16 && f_1bd3_0d69(10) == 0)
            d_60ae_ddbe[d_60ae_dd84].w.f16 = 0;
    }
    for (i = 0; i <= 79; i = i + 1)
        for (j = 0; j <= 15; j = j + 1)
            if (d_2289_a0f6[i][j] > 0) {
                d_2289_a0f6[i][j]--;
                if (d_2289_a0f6[i][j] == 0)
                    f_9e77_1699(i * 20 + j + 3000);
            }
}
