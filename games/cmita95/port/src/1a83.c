/* Native port of decomp/src/1A83.C (see ../README.md). */
/* @at 1a83:0007 */
/* @data 61eb:031e */
/* @module */

/* Segment 1a83. */
#include "port.h"

/* the functions of the segment */
void f_1a83_0007(float x, int16_t team, char *title);
void f_1a83_0134(int16_t x1, int16_t y1, int16_t x2, int16_t y2);
int32_t f_1a83_01d6(int16_t p, int16_t n);
void f_1a83_0b12(int16_t line, char *s);
void f_1a83_0b7d(char *s);
void f_1a83_0bb7(char *s);
char f_1a83_0c63(void);
int32_t f_1a83_0cef(int32_t v, char c);
int32_t f_1a83_0d8f(int32_t v);
char *f_1a83_0e35(int32_t amount);
void f_1a83_0e84(int16_t p);
void f_1a83_11f6(unsigned char team, unsigned char pos);
void f_1a83_12f6(register int16_t player);
void f_1a83_1625(int16_t p);
void f_1a83_18fd(int16_t p);
void f_1a83_1cf2(int16_t p);
int16_t f_1a83_1dd9(int16_t player);
int16_t f_1a83_1e51(int16_t player);
int16_t f_1a83_1eed(int16_t a, int16_t player, int16_t c);
int32_t f_1a83_21df(int16_t player, int16_t team, unsigned char pos, unsigned char second);
int16_t f_1a83_234b(unsigned char a);
char f_1a83_2387(volatile int16_t w) /* volatile + ternary: the value through AX (mov ax,[bp+6] / sub ax,18 / mov bx,ax) */;
char f_1a83_2448(int16_t w);
char f_1a83_247b(int16_t w);
char f_1a83_24d8(int16_t w);
char f_1a83_2531(int16_t w);
char f_1a83_2592(int16_t w);
char f_1a83_25e7(int16_t w);
char f_1a83_2644(int16_t w, int16_t n);
char f_1a83_26ed(int16_t w, int16_t n);
char f_1a83_277e(int16_t w, int16_t n);
char f_1a83_280b(int16_t w, int16_t n);
char f_1a83_28a0(int16_t w);
char f_1a83_2901(int16_t w);
char f_1a83_2962(int16_t w, int16_t n);
char f_1a83_29a3(int16_t w);
char f_1a83_29b8(int16_t w, int16_t n);
char f_1a83_2a21(int16_t x);
int16_t f_1a83_2a42(int16_t a, int16_t b);
char f_1a83_2ad4(int16_t x);
float f_1a83_2b0c(int16_t x);
int16_t f_1a83_2bdb(int16_t x);
char f_1a83_2c20(int16_t player);
char f_1a83_2c8b(int16_t player);
char *f_1a83_2d52(int16_t x, char c);
void f_1a83_2da6(int16_t n, char *title, char *items);
void f_1a83_30ca(int16_t a, int16_t b, int16_t line);
void f_1a83_3122(int16_t last);
static void f_1a83_32e9(int16_t i);
char *f_1a83_3300(int16_t x);
void f_1a83_3347(int16_t x, int16_t y, int16_t colour, char *s);
void f_1a83_3450(float x, float y, int16_t bg, int16_t fg, int16_t w, char *s);
void f_1a83_3697(float x, float y, int16_t colour, char *s);
void f_1a83_380b(float x, float y, int16_t bg, int16_t fg, int16_t w, char *s);
void f_1a83_3a43(float x, float y, int16_t colour, char *s);
void f_1a83_3c08(float x, float y, int16_t bg, int16_t fg, int16_t w, char *s);
static void f_1a83_407f(float x, float y, int16_t bg, int16_t fg, int16_t w, int16_t len, char *s);
static void f_1a83_42ba(float x, float y, int16_t team);
void f_1a83_4327(float x, float y, int16_t team);
char *f_1a83_438a(int16_t n, char *s);
int16_t f_1a83_440f(int16_t team);
int16_t f_1a83_4455(int16_t team);
char *f_1a83_4485(int16_t player);
char *f_1a83_45b4(int16_t player);
char *f_1a83_462c(int16_t player);
char *f_1a83_4686(int16_t manager, char full);
char *f_1a83_477e(int16_t player);
char *f_1a83_47e8(int16_t division);
char *f_1a83_4876(int16_t division, char full);
void f_1a83_48f9(char *title);
void f_1a83_4a35(float x, int16_t w, char *prompt);
void f_1a83_4aaa(int16_t x, float y, int16_t colour, int16_t maxlen);
void f_1a83_4d03(void);
void f_1a83_4d96(int16_t a, float x, float y, int16_t c, int16_t d, int16_t e, char *s);
void f_1a83_5117(int16_t n, char swap);
int16_t f_1a83_5296(int16_t a);
void f_1a83_54f9(int16_t team);
void f_1a83_5512(void);
void f_1a83_5540(int16_t a);
void f_1a83_569b(void);
static char *f_1a83_56ca(char *s);
int32_t f_1a83_5747(int16_t team);
void f_1a83_5844(int16_t team, char *title, char *text);
int16_t f_1a83_59ee(FILE *fp);
char f_1a83_5a2e(int16_t player);
char f_1a83_5a4c(int16_t player);
int16_t f_1a83_5a62(int16_t player);
unsigned char f_1a83_5a80(int16_t player);
unsigned char f_1a83_5a9f(int16_t player, unsigned char a);
void f_1a83_5b92(void);
void f_1a83_5bd6(int16_t a, int16_t b, char *s);
void f_1a83_5ccd(void);
void f_1a83_5ce1(void);
char f_1a83_5cf5(int16_t p);
char f_1a83_5d3d(char team, char week, char n);
void f_1a83_5d48(unsigned char team, unsigned char player, uint16_t x, uint16_t y);
char f_1a83_633a(int16_t a, int16_t b);
char f_1a83_64cf(int16_t x);
char f_1a83_64f5(int16_t x);
char f_1a83_6516(int16_t x);
char f_1a83_6537(int16_t x);
char f_1a83_655d(int16_t x);
char f_1a83_6583(int16_t x);
char f_1a83_65a9(char foreign);
double f_1a83_65dc(int16_t x, int16_t y);
int16_t f_1a83_669a(int16_t a, int16_t b, int16_t c);
int16_t f_1a83_66e8(int16_t x);
float f_1a83_66fa(int16_t x);
char f_1a83_6728(int16_t player, char c);
char f_1a83_6b4c(int16_t player);
char f_1a83_6b6e(int16_t player);
int16_t f_1a83_6b9e(int16_t player, int16_t club);
char f_1a83_6d2f(void);
unsigned char f_1a83_6d76(unsigned char div);
unsigned char f_1a83_6d8b(unsigned char team);

char unmapped_f_1a70_243f(int16_t w);
char unmapped_f_1a70_2490(int16_t w);
char unmapped_f_1a70_24c5(int16_t w);
char unmapped_f_1a70_29ad(int16_t w, int16_t n);
char unmapped_f_1a70_29fa(int16_t x);
char unmapped_f_1a70_2a7d(int16_t x);
void f_215d_07ec(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2);
void f_215d_088c();
void f_215d_089b();
void f_215d_1016(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2);
void f_215d_08aa(int16_t x1, int16_t y1, int16_t x2, int16_t y2);
uint16_t f_215d_0b10(char *s, char *set);
void f_215d_0df0(int16_t ticks);
int16_t f_215d_1343(int16_t a, int16_t b);
int32_t f_215d_135c(int32_t a, int32_t b);
int16_t f_215d_13af(int16_t a, int16_t b);
void *f_215d_1629(int16_t handle, int16_t page);
struct flags_w { uint16_t f0 : 1; uint16_t f1 : 1; uint16_t f2 : 1; uint16_t f3 : 1; uint16_t f4 : 1; uint16_t f5 : 1; uint16_t f6 : 1; uint16_t f7 : 1; uint16_t f8 : 1; uint16_t f9 : 1; uint16_t f10 : 1; uint16_t f11 : 1; uint16_t f12 : 1; uint16_t f13 : 1; uint16_t f14 : 1; uint16_t f15 : 1; uint16_t f16 : 1; uint16_t f17 : 1; uint16_t f18 : 1; uint16_t f19 : 1; uint16_t f20 : 1; uint16_t f21 : 1; uint16_t f22 : 1; uint16_t f23 : 1; uint16_t f24 : 1; uint16_t f25 : 1; uint16_t f26 : 1; uint16_t f27 : 1; uint16_t f28 : 1; uint16_t f29 : 1; uint16_t f30 : 1; uint16_t f31 : 1; };
extern struct flags_w d_432e_45de[];
extern int16_t d_61eb_dc4e;
extern unsigned char d_3334_0000[][1500];
extern unsigned char d_28d4_1958[][1500];
extern int16_t d_28c3_0000[];
extern float d_28c6_0000[];
extern int16_t d_3334_a410[];
extern int16_t d_3334_ca6e[];
extern unsigned char d_3334_db94[][650];
extern float d_61eb_dabd;
extern float d_61eb_dab9;
extern char d_432e_c125[];
extern unsigned char d_3334_be02[];
extern nearptr d_61eb_b0ec[];
extern int32_t d_61eb_db51;
extern int32_t d_61eb_db4d;
extern float d_61eb_dac1;
extern float d_61eb_dab5;
extern float d_61eb_dab1;
extern float d_61eb_da65;
extern char d_61eb_da12;
extern int16_t d_61eb_d82a;
extern int16_t d_61eb_d824;
extern int16_t d_61eb_d822;
extern int16_t d_61eb_d820;
extern int16_t d_61eb_d81e;
extern int16_t d_61eb_d81c;
extern int16_t d_61eb_d81a;
extern int16_t d_61eb_d818;
extern int16_t d_61eb_d664;
extern int16_t d_61eb_d5ec;
extern int16_t d_61eb_d5c4;
extern int16_t d_61eb_d5a4;
extern int16_t (*d_61eb_dbb8)[1500];
extern int32_t *d_61eb_dbac;
extern int16_t d_61eb_dc48;
char *f_215d_0f2d(void);
extern int16_t d_28d4_081c[][26];
extern int16_t d_3334_f9f8[][16];
extern unsigned char d_3334_f278[][3][16];
extern unsigned char d_3334_d90a[];
extern unsigned char d_3334_beca[];
extern unsigned char d_432e_3a2e[][80];
extern unsigned char d_432e_3a3e[][80];
extern int16_t d_61eb_d908;
extern int16_t d_61eb_d906;
extern int16_t d_61eb_d904;
extern int16_t d_61eb_d902;
extern int16_t d_61eb_d900;
extern int16_t d_61eb_d8fe;
extern int16_t d_61eb_d8fc;
extern int16_t d_61eb_d8fa;
extern int16_t d_61eb_d8f6;
extern int16_t d_61eb_d8f2;
extern int16_t d_61eb_d8f0;
extern int16_t d_61eb_d8ee;
extern int16_t d_61eb_d8ea;
extern int16_t d_61eb_d8e8;
extern int16_t d_61eb_d8e6;
extern int16_t d_61eb_d8e4;
extern int16_t d_61eb_d8e2;
extern int16_t d_61eb_d7da;
extern int16_t d_61eb_d68c;
extern int16_t d_61eb_d65e;
extern int16_t d_61eb_d65c;
extern int16_t d_61eb_d608;
extern int16_t d_61eb_d5de;
extern int16_t d_61eb_d5aa;
extern int16_t d_61eb_d912;
extern int16_t d_61eb_d910;
extern int16_t d_61eb_d90e;
extern int16_t d_61eb_d90c;
extern int16_t d_61eb_d90a;
extern int16_t d_61eb_d800;
extern unsigned char d_28d4_82d0[];
extern int16_t d_3334_8ca0[];
void f_215d_0987(int16_t a);
void f_215d_09d7(int16_t x, int16_t y, char *s);
void f_215d_0b01(int16_t on);
int16_t f_215d_0c08(void);
int16_t f_215d_0c14(void);
int16_t f_215d_0c20(void);
int32_t f_215d_0e27(void);
char *f_215d_0e90(char *s);
extern char d_432e_ba27[];
extern char d_432e_b86b[];
extern unsigned char d_432e_39fe[][5][16];
extern float d_432e_0e2e[];
extern float d_432e_0e7e[];
extern float d_432e_0ece[];
extern unsigned char d_432e_0000[][82];
extern unsigned char d_3334_be52[];
extern unsigned char d_3334_bf42[][82];
extern unsigned char d_3334_bf6a[];
extern unsigned char d_53fc_099a[];
extern int16_t d_53fc_138c[][2][98];
extern nearptr d_61eb_b140[];
extern float d_61eb_da55;
extern float d_61eb_da51;
extern char d_61eb_da3e;
extern char d_61eb_d9c2;
extern int16_t d_61eb_d978;
extern int16_t d_61eb_d94a;
extern int16_t d_61eb_d948;
extern int16_t d_61eb_d946;
extern int16_t d_61eb_d944;
extern int16_t d_61eb_d77e;
extern int16_t d_61eb_d61a;
extern int16_t d_61eb_d5f0;
extern int16_t d_61eb_d5ca;
extern int16_t d_61eb_d59e;
extern unsigned char d_432e_0640[];
extern int16_t d_61eb_d852;
extern int16_t d_61eb_d7ac;
extern int16_t d_61eb_d5d4;
void f_215d_033b(void);
void f_215d_0904(int16_t x1, int16_t y1, int16_t x2, int16_t y2);
char *f_215d_0d0f(void);
char *f_215d_0155(char c);
void f_215d_1a06(void);
void f_215d_1a24(void);
extern farptr d_5b9b_1395[];
extern int16_t d_3334_9858[];
extern int16_t d_3334_afc8[];
extern char d_432e_d55b[];
extern char d_432e_c369[];
extern unsigned char d_432e_b8cb[];
extern float d_432e_0fa6[][100];
extern unsigned char d_28d4_1798[][100];
extern unsigned char d_28d4_17fc[];
extern char d_61eb_da13;
extern int16_t d_61eb_d97a;
extern int16_t d_61eb_d6a8;
extern int16_t d_61eb_d62a;
extern int16_t d_61eb_d5e2;
extern int16_t d_61eb_d5da;
extern float d_61eb_daf5;
extern float d_61eb_daed;
extern float d_61eb_da6d;
extern float d_61eb_da61;
extern float d_61eb_da5d;
extern int16_t (*d_61eb_dbd0)[2][16];
extern int16_t (*d_61eb_dbbc)[650];
extern int16_t d_61eb_dc5a;
extern int16_t d_61eb_dc50;
int32_t f_215d_0d96(int32_t n);
void f_215d_13f1(void *a, void *b, int16_t n);
int32_t f_9f8d_1ec1(int16_t team);
void f_a214_2db7(void);
void f_a214_2e56(void);
void f_b26d_0849(void);
extern char d_432e_e903[];
extern struct { int16_t a, b, start, len; } d_432e_5d4e[];
extern int32_t d_3334_cc82[][38];
extern int32_t d_61eb_db91;
extern int32_t d_61eb_db8d;
extern int32_t d_61eb_db89;
extern int32_t d_61eb_db85;
extern float d_61eb_dafd;
extern float d_61eb_daf9;
extern char d_61eb_da41;
extern char d_61eb_da29;
extern char d_61eb_da23;
extern char d_61eb_d9c5;
extern char d_61eb_d9c4;
extern char d_61eb_d9c3;
extern char d_61eb_d9bf;
extern int16_t d_61eb_d97e;
extern int16_t d_61eb_d97c;
extern int16_t d_61eb_d94e;
extern int16_t d_61eb_d94c;
extern int16_t d_61eb_d6ba;
extern int16_t d_61eb_d5d0;
extern int16_t d_61eb_d58e;
extern char *d_61eb_dbd4;
extern unsigned char (*d_61eb_dbcc)[1500];
extern int32_t (*d_61eb_dbc0)[38];
extern int16_t d_61eb_df30;
extern int16_t d_61eb_dc5c;
extern int16_t d_61eb_dc58;
extern int16_t d_61eb_dc52;
float f_215d_1385(float a, float b);
extern unsigned char d_53fc_0bb6[];
extern unsigned char d_3334_bc2a[][16];
extern int16_t d_3334_caba[];
extern unsigned char d_3334_d680[];
extern unsigned char d_53fc_095c[][10];
extern int16_t d_61eb_d666;
extern int16_t d_61eb_d6b6;
extern int16_t d_61eb_d6b4;
extern int16_t d_61eb_d5a2;
extern int16_t d_61eb_d590;
extern char d_61eb_da10;
extern char d_61eb_da0f;
extern char d_61eb_da0d;
extern char d_61eb_da0a;
extern int16_t d_61eb_d780;
extern int16_t d_61eb_d816;
extern int16_t d_61eb_d814;
extern int16_t d_61eb_d812;
extern int16_t d_61eb_d810;
extern int16_t d_61eb_d802;
extern unsigned char d_53fc_075d[][12][5];
extern int16_t d_28d4_bd3c[][2][13];
void f_215d_038c();
extern uint16_t d_28d2_0014;
extern uint16_t d_28d2_0012;
extern char d_432e_ffe7[][80];
extern unsigned char d_28d2_0000[];
extern farptr d_5b9b_019f[];
extern char d_432e_d5ad[];
extern char d_432e_c2c9[][4][20];
extern char d_432e_f047[][40];
extern char d_432e_c887[];
extern char d_432e_df8f[];
extern char d_432e_d32b[];
extern float d_28cd_0000[];
extern char d_28d2_0018;
extern int16_t d_28d2_0016;
extern uint16_t d_28d2_0010;
extern int16_t d_28d4_0064[][2][13];
extern unsigned char d_3334_fe98[][1860];
extern unsigned char d_432e_00a4[];
extern unsigned char d_3334_bdb2[][40];
extern char d_5313_0000[][80];
extern farptr d_5b9b_0000[];
extern char d_432e_eea3[][40];


void f_1a83_0007(float x, int16_t team, char *title)
{
    char buf[320];

    f_1a83_48f9("");
    sprintf(d_432e_c125, "%s %s", (char *)NEAR_PTR(d_61eb_b0ec[team]), title);
    if (x == -1)
        d_61eb_da65 = 19 - strlen(d_432e_c125) / 2;
    else
        d_61eb_da65 = x;
    f_215d_088c(16);
    f_215d_08aa((d_61eb_da65 * 8 + 6), 7, ((strlen(d_432e_c125) + d_61eb_da65) * 8 + 19), 21);
    sprintf(buf, " %s ", d_432e_c125);
    f_1a83_3c08(d_61eb_da65, 1.125, -(d_3334_be02[team] / 16), d_3334_be02[team] % 16, 0, buf);
}

/* Draws a filled box with a drop shadow and a two-tone border. */
void f_1a83_0134(int16_t x1, int16_t y1, int16_t x2, int16_t y2)
{
    f_215d_088c(16);
    f_215d_08aa(x1 + 4, y1 + 4, x2 + 1, y2 + 1);
    f_215d_088c(d_61eb_d664 + 16);
    f_215d_08aa(x1, y1, x2, y2);
    f_215d_089b(17);
    f_215d_1016(x1, y2, x1, y1);
    f_215d_1016(x1, y1, x2, y1);
    f_215d_089b(16);
    f_215d_1016(x2, y1, x2, y2);
    f_215d_1016(x2, y2, x1, y2);
}

/* Player p's transfer value to team n (-1: none). CM1's overlay 88c9 player value, reworked: 60-game
   form window, the player flags d_432e_45de in place of CM1's flag rows, more
   attributes. The float m is declared per block: it sits below the temporaries. Italia 95 as the
   first Italia (1646:0204): base 1000, da12 also set by the paged row d_61eb_dbcc[9][p] (status
   2, 3, 8, 11, 30, 57, 59, 60), Serie B players halved, 38 clubs. */
int32_t f_1a83_01d6(int16_t p, int16_t n)
{
    if (p != d_61eb_d818) {
        float m;

        d_61eb_d81a = f_215d_13af(d_3334_0000[5][p], 60);
        d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
        if (d_3334_0000[5][p] > 0)
            d_61eb_dab1 = d_61eb_dbb8[1][p] / (float)d_3334_0000[5][p] * 2.0;
        else
            d_61eb_dab1 = 0;
        d_61eb_d81c = f_215d_13af(d_3334_0000[0][p], 60);
        if (d_3334_0000[0][p] > 0)
            d_61eb_dab5 = d_61eb_dbb8[0][p] / (float)d_3334_0000[0][p] * 2.0;
        else
            d_61eb_dab5 = 0;
        d_61eb_d81e = (d_28d4_1958[0][p] * (60 - d_61eb_d81a) * 0.1 + d_61eb_d81a * d_61eb_dab1) / 60.0 * 0.5
                    + (d_28d4_1958[0][p] * (60 - d_61eb_d81c) * 0.1 + d_61eb_d81c * d_61eb_dab5) / 60.0 * 0.5;
        d_61eb_d81e = f_215d_1343(f_215d_13af(d_61eb_d81e, 20), 1);
        if (d_432e_45de[p].f0) {
            d_61eb_dab9 = 1;
            d_61eb_dabd = 1;
            d_61eb_dac1 = 1;
        } else {
            d_61eb_dab9 = d_432e_45de[p].f1 / 10.0 + 0.9 + d_432e_45de[p].f2 / 10.0 + d_432e_45de[p].f3 / 10.0;
            d_61eb_dabd = d_432e_45de[p].f4 / 10.0 + 0.9 + d_432e_45de[p].f5 / 10.0 + d_432e_45de[p].f6 / 10.0;
            d_61eb_dac1 = d_28d4_1958[2][p] / 10.0 * 0.0375 + 0.7
                        + d_28d4_1958[1][p] / 10.0 * 0.06125
                        + d_28d4_1958[3][p] / 10.0 * 0.025
                        + d_28d4_1958[5][p] / 10.0 * 0.1
                        + d_28d4_1958[6][p] / 10.0 * 0.075
                        + d_28d4_1958[7][p] / 10.0 * 0.15
                        + d_28d4_1958[8][p] / 5.0 * 0.06;
        }
        if (d_432e_45de[p].f18 && d_432e_45de[p].f19 == 0
                || d_61eb_dbcc[9][p] == 2 || d_61eb_dbcc[9][p] == 3 || d_61eb_dbcc[9][p] == 8
                || d_61eb_dbcc[9][p] == 11 || d_61eb_dbcc[9][p] == 30 || d_61eb_dbcc[9][p] == 57
                || d_61eb_dbcc[9][p] == 59 || d_61eb_dbcc[9][p] == 60)
            d_61eb_da12 = -1;
        else
            d_61eb_da12 = 0;
        m = d_28c6_0000[d_28d4_1958[17][p] - 16];
        d_61eb_db4d = d_28c3_0000[d_61eb_d81e - 1] * m
                    * d_61eb_dab9 * d_61eb_dabd * d_61eb_dac1 * 1000.0 * (d_61eb_da12 ? 1.25 : 1);
        if (d_432e_45de[p].f28 && d_28d4_1958[17][p] < 30)
            d_61eb_db4d = d_61eb_db4d * 1.25;
        if (d_28d4_1958[18][p] < 38 && (int16_t)f_1a83_6d8b(d_28d4_1958[18][p]) == 1)
            d_61eb_db4d = d_61eb_db4d / 2;
    }
    if (n == -1 || n >= 38)
        d_61eb_db51 = d_61eb_db4d * (d_28d4_1958[23][p] == 1 ? 1.5 : 1);
    else {
        if (d_28d4_1958[18][p] == n) {
            if (!d_432e_45de[p].f8 || d_432e_45de[p].f8 && d_432e_45de[p].f24) {
                float m;

                m = 1;
                d_61eb_d824 = f_215d_1343(d_3334_a410[p] / 100 - d_61eb_d5a4, 0);
                m += d_61eb_d824 / 5.0;
                if (d_3334_a410[p] == 0)
                    m += 0.5;
                if (d_28d4_1958[23][p] == 1)
                    m += 0.5;
                d_61eb_db51 = d_61eb_db4d * m;
            } else {
                d_61eb_dbac = f_215d_1629(d_61eb_dc48, 0);
                d_61eb_db51 = d_61eb_dbac[p];
            }
        } else {
            float m;

            m = 1;
            d_61eb_d824 = f_215d_1343(d_3334_a410[p] / 100 - d_61eb_d5a4, 0);
            m += d_61eb_d824 / 5.0;
            if (d_3334_a410[p] == 0)
                m += 0.5;
            if (d_28d4_1958[23][p] == 1)
                m += 0.5;
            d_61eb_db51 = d_61eb_db4d * m;
        }
        if (!d_432e_45de[p].f8 && d_28d4_1958[17][p] < (d_432e_45de[p].f0 ? 31 : 27)) {
            d_61eb_d820 = f_215d_1343(10.0 - d_3334_db94[0][d_3334_ca6e[n]] * 0.05, 1);
            d_61eb_d822 = f_215d_1343(f_215d_13af(d_28d4_1958[9][p] * 0.1 + p % d_61eb_d820 - d_61eb_d820 * 0.5, 20), 1);
            d_61eb_db51 = d_61eb_db51 * 0.95 + d_28c3_0000[d_61eb_d822 - 1] * 50;
        }
    }
    if (!d_432e_45de[p].f8 || f_1a83_2ad4(d_28d4_1958[18][p]) == 0)
        d_61eb_db51 = f_1a83_0cef(d_61eb_db51, -1);
    d_61eb_d818 = p;
    return f_215d_135c(d_61eb_db51, d_61eb_db51 ? 1000 : 0);
}

void f_1a83_0b12(int16_t line, char *s)
{
    d_61eb_d5ec = 9;
    if (line == 4)
        d_61eb_d5ec = 1;
    else if (line == 7)
        d_61eb_d5ec = 6;
    else if (line == 9 || line < 0)
        d_61eb_d5ec = 5;
    if (line < 0)
        line = -line;
    f_1a83_3a43(2.0, line, d_61eb_d5ec, s);
}

void f_1a83_0b7d(char *s)
{
    f_1a83_3a43(2.0, 22.5, 1, s);
    f_215d_0df0(75);
    f_215d_07ec(4, 175, 316, 190);
}

void f_1a83_0bb7(char *s)
{
    char buf[80];

    f_1a83_48f9("");
    d_61eb_d5c4 = f_215d_0b10(s, "|");
    if (d_61eb_d5c4 == 0)
        f_1a83_3a43(-1.0, 12.5, 6, s);
    else {
        strcpy(buf, s);
        buf[d_61eb_d5c4 - 1] = 0;
        f_1a83_3a43(-1.0, 11.5, 6, buf);
        strcpy(buf, s + d_61eb_d5c4);
        f_1a83_3a43(-1.0, 13.5, 6, buf);
    }
    f_1a83_5540(0);
}

char f_1a83_0c63(void)
{
    f_1a83_3a43(2.0, 22.5, 5, "Confirm");
    f_1a83_4d96(2, 9.0, 22.5, 6, 2, 0, " Y ");
    f_1a83_4d96(2, 13.0, 22.5, 6, 2, 0, " N ");
    do
        d_61eb_d82a = f_1a83_5296(0);
    while (d_61eb_d82a <= 0);
    f_215d_07ec(4, 174, 160, 191);
    return d_61eb_d82a == 1 ? -1 : 0;
}

int32_t f_1a83_0cef(int32_t v, char c)
{
    int32_t r;

    if (v < 10000)
        r = 1000;
    else if (v < 100000)
        r = c ? 10000 : 5000;
    else if (v < 1000000)
        r = c ? 50000 : 10000;
    else
        r = c ? 100000 : 25000;
    return v / r * r;
}

int32_t f_1a83_0d8f(int32_t v)
{
    int32_t r;

    if (v <= 100000)
        r = 50000;
    else if (v <= 500000)
        r = 100000;
    else if (v <= 1000000)
        r = 250000;
    else
        r = 500000;
    return f_215d_135c(v / r * r, v ? 50000 : 0);
}

char *f_1a83_0e35(int32_t amount)
{
    char *s;

    s = f_215d_0f2d();
    if (amount)
        sprintf(s, "%d", amount);
    else
        strcpy(s, "Free");
    return s;
}

void f_1a83_0e84(int16_t p)
{
    int32_t best, cur, other;

    d_61eb_d8e6 = p;
    if (!f_1a83_5a4c(d_61eb_d8e6)) {
        d_61eb_d5de = d_28d4_1958[18][d_61eb_d8e6];
        if (d_432e_45de[d_61eb_d8e6].f7 == 0)
            return;
        d_432e_45de[d_61eb_d8e6].f7 = 0;
    } else {
        d_61eb_d5de = f_1a83_5a62(d_61eb_d8e6);
        if (d_432e_3a3e[d_61eb_d5de][f_1a83_5a80(d_61eb_d8e6)] == 0)
            return;
        d_432e_3a3e[d_61eb_d5de][f_1a83_5a80(d_61eb_d8e6)] = 0;
    }
    d_61eb_d8ea = d_61eb_d8e8 = f_1a83_1dd9(d_61eb_d8e6);
again:
    d_3334_f9f8[d_61eb_d5de][d_61eb_d8ea] = 1499;
    best = -5000;
    d_61eb_d8ee = -1;
    d_61eb_d8f0 = -1;
    for (d_61eb_d608 = 0; d_61eb_d608 <= d_3334_beca[d_61eb_d5de] - 1; d_61eb_d608++) {
        d_61eb_d8f2 = d_28d4_081c[d_61eb_d5de][d_61eb_d608];
        if (d_28d4_1958[20][d_61eb_d8f2] == 0) {
            d_61eb_d68c = d_3334_f278[d_61eb_d5de][0][d_61eb_d8ea];
            if (d_61eb_d68c > 1 || (d_61eb_d68c == 1 && d_432e_45de[d_61eb_d8f2].f0)) {
                cur = f_1a83_1eed(d_61eb_d68c, d_61eb_d8f2, d_3334_d90a[d_3334_ca6e[d_61eb_d5de]] / 16);
                cur = cur * d_28d4_1958[15][d_61eb_d8f2];
                if (cur > best) {
                    if (d_432e_45de[d_61eb_d8f2].f7) {
                        d_61eb_d8e8 = f_1a83_1dd9(d_61eb_d8f2);
                        if ((d_61eb_d8ea < 11 && d_61eb_d8e8 < 11) || (d_61eb_d8ea > 10 && d_61eb_d8e8 > 10)
                            || (d_61eb_d8e8 > 10 && d_61eb_d8ea < 11)) {
                            other = f_1a83_1eed(d_3334_f278[d_61eb_d5de][0][d_61eb_d8e8], d_61eb_d8f2,
                                                d_3334_d90a[d_3334_ca6e[d_61eb_d5de]] / 16);
                            other = other * d_28d4_1958[15][d_61eb_d8f2];
                            if (cur > other || (d_61eb_d8e8 > 10 && d_61eb_d8ea < 11)) {
                                best = cur;
                                d_61eb_d8ee = d_61eb_d8f2;
                                d_61eb_d8f0 = d_61eb_d8e8;
                            }
                        }
                    }
                    if (d_432e_45de[d_61eb_d8f2].f7 == 0) {
                        best = cur;
                        d_61eb_d8ee = d_61eb_d8f2;
                        d_61eb_d8f0 = -1;
                    }
                }
            }
        }
    }
    if (d_61eb_d8ee == -1) {
        f_1a83_11f6(d_61eb_d5de, d_61eb_d8ea);
    } else {
        d_61eb_d8e6 = d_61eb_d8ee;
        d_3334_f9f8[d_61eb_d5de][d_61eb_d8ea] = d_61eb_d8e6;
        d_432e_45de[d_61eb_d8e6].f7 = 1;
        if (d_61eb_d8f0 > -1) {
            d_61eb_d8ea = d_61eb_d8f0;
            goto again;
        }
    }
}

void f_1a83_11f6(unsigned char team, unsigned char pos)
{
    unsigned char i, want, best;
    register int16_t p, found;

    want = d_3334_f278[team][0][pos];
    best = 0;
    for (i = 0; i <= 15; i = i + 1) {
        if (d_432e_3a2e[team][i] == 0 && d_432e_3a3e[team][i] == 0) {
            p = team * 20 + i + 3000;
            if (f_1a83_5a9f(p, want) > best) {
                best = f_1a83_5a9f(p, want);
                found = p;
            }
        }
    }
    d_3334_f9f8[team][pos] = found;
    d_432e_3a3e[team][f_1a83_5a80(found)] = -1;
}

void f_1a83_12f6(register int16_t player)
{
    int32_t best, a, b;

    if (d_432e_45de[player].f7)
        return;
    d_61eb_d5de = d_28d4_1958[18][player];
again:
    d_61eb_d8f6 = -1;
    best = -5000;
    d_61eb_d65c = d_432e_45de[player].f0 ? 0 : 1;
    d_61eb_d65e = d_432e_45de[player].f0 ? 0 : 14;
loop:
    for (d_61eb_d5aa = d_61eb_d65c; d_61eb_d5aa <= d_61eb_d65e; d_61eb_d5aa++) {
        d_61eb_d8e2 = d_3334_f9f8[d_61eb_d5de][d_61eb_d5aa];
        if (!f_1a83_5a4c(d_61eb_d8e2)) {
            a = f_1a83_1eed(d_3334_f278[d_61eb_d5de][0][d_61eb_d5aa], d_61eb_d8e2,
                            d_3334_d90a[d_3334_ca6e[d_61eb_d5de]] / 16);
            a = a * d_28d4_1958[15][d_61eb_d8e2];
        } else
            a = f_1a83_5a9f(d_61eb_d8e2, d_3334_f278[d_61eb_d5de][0][d_61eb_d5aa]);
        b = f_1a83_1eed(d_3334_f278[d_61eb_d5de][0][d_61eb_d5aa], player,
                        d_3334_d90a[d_3334_ca6e[d_61eb_d5de]] / 16);
        b = b * d_28d4_1958[15][player];
        if (b > a && b - a > best && (d_61eb_d5aa < 11 || (d_61eb_d5aa > 10 && d_61eb_d8f6 == -1))) {
            best = b - a;
            d_61eb_d8f6 = d_61eb_d5aa;
        }
    }
    if (d_432e_45de[player].f0 && d_61eb_d65c == 0) {
        d_61eb_d65c = 15;
        d_61eb_d65e = 15;
        goto loop;
    }
    if (d_61eb_d8f6 == -1)
        return;
    d_432e_45de[player].f7 = 1;
    if (!f_1a83_5a4c(d_3334_f9f8[d_61eb_d5de][d_61eb_d8f6]))
        d_432e_45de[d_3334_f9f8[d_61eb_d5de][d_61eb_d8f6]].f7 = 0;
    else
        d_432e_3a3e[d_61eb_d5de][f_1a83_5a80(d_3334_f9f8[d_61eb_d5de][d_61eb_d8f6])] = 0;
    d_61eb_d8fa = d_3334_f9f8[d_61eb_d5de][d_61eb_d8f6];
    d_3334_f9f8[d_61eb_d5de][d_61eb_d8f6] = player;
    if (!f_1a83_5a4c(d_61eb_d8fa)) {
        player = d_61eb_d8fa;
        if (d_61eb_d8f6 < 13)
            goto again;
    }
}

void f_1a83_1625(int16_t p)
{
    int32_t cur, best, other;

    d_61eb_d8e6 = p;
    if (*(d_28d4_1958[23] + d_61eb_d8e6) == 3)
        return;
    d_61eb_d5de = d_28d4_1958[18][d_61eb_d8e6];
    d_61eb_d8ea = d_61eb_d8e8 = f_1a83_1e51(d_61eb_d8e6);
    d_61eb_d8fc = d_61eb_d8fe;
    d_28d4_1958[23][d_61eb_d8e6] = 3;
again:
    d_61eb_d8e4 = 1499;
    d_28d4_0064[d_61eb_d5de][d_61eb_d8fc][d_61eb_d8ea] = d_61eb_d8e4;
    best = -5000;
    d_61eb_d8ee = -1;
    for (d_61eb_d608 = 0; d_61eb_d608 <= d_3334_beca[d_61eb_d5de] - 1; d_61eb_d608++) {
        d_61eb_d8f2 = d_28d4_081c[d_61eb_d5de][d_61eb_d608];
        d_61eb_d68c = d_3334_f278[d_61eb_d5de][0][d_61eb_d8ea];
        if (f_1a83_633a(d_61eb_d8f2, d_61eb_d68c)) {
            cur = f_1a83_21df(d_61eb_d8f2, d_61eb_d5de, d_61eb_d68c, d_61eb_d8fc == 1 ? 1 : 0);
            if (cur > best) {
                if ((d_61eb_d8fc == 0 && d_28d4_1958[23][d_61eb_d8f2] < 3)
                    || (d_61eb_d8fc == 1 && d_28d4_1958[23][d_61eb_d8f2] == 2)) {
                    d_61eb_d8e8 = f_1a83_1e51(d_61eb_d8f2);
                    other = f_1a83_21df(d_61eb_d8f2, d_61eb_d5de, d_3334_f278[d_61eb_d5de][0][d_61eb_d8e8],
                                        d_61eb_d8fc == 1 ? 1 : 0);
                    if (cur > other || (d_61eb_d8fc == 0 && d_61eb_d8fe == 1)) {
                        best = cur;
                        d_61eb_d8ee = d_61eb_d8f2;
                        d_61eb_d900 = d_61eb_d8e8;
                        d_61eb_d902 = d_61eb_d8fe;
                    }
                }
            }
            if (cur > best && d_28d4_1958[23][d_61eb_d8f2] == 3) {
                best = cur;
                d_61eb_d8ee = d_61eb_d8f2;
                d_61eb_d900 = -1;
                d_61eb_d902 = -1;
            }
        }
    }
    if (d_61eb_d8ee > -1 && d_61eb_d8ee < 1499) {
        d_61eb_d8f2 = d_61eb_d8ee;
        d_28d4_0064[d_61eb_d5de][d_61eb_d8fc][d_61eb_d8ea] = d_61eb_d8f2;
        d_28d4_1958[23][d_61eb_d8f2] = d_61eb_d8fc + 1;
        if (d_61eb_d900 > -1) {
            d_61eb_d8ea = d_61eb_d900;
            d_61eb_d8fc = d_61eb_d902;
            goto again;
        }
    } else {
        d_61eb_d8e4 = 1499;
        d_28d4_0064[d_61eb_d5de][d_61eb_d8fc][d_61eb_d8ea] = d_61eb_d8e4;
    }
}

void f_1a83_18fd(int16_t p)
{
    int32_t best, a, b, c;

    d_61eb_d8e6 = p;
    if (*(d_28d4_1958[23] + d_61eb_d8e6) == 1)
        return;
    d_61eb_d7da = 0;
    d_61eb_d5de = d_28d4_1958[18][d_61eb_d8e6];
again:
    d_61eb_d8e8 = f_1a83_1e51(d_61eb_d8e6);
    if (d_61eb_d8fe > -1) {
        d_61eb_d8e4 = 1499;
        d_28d4_0064[d_61eb_d5de][d_61eb_d8fe][d_61eb_d8e8] = d_61eb_d8e4;
    }
    d_28d4_1958[23][d_61eb_d8e6] = 3;
    d_61eb_d904 = -1;
    best = -5000;
    if (d_432e_45de[d_61eb_d8e6].f0) {
        d_61eb_d65c = 0;
        d_61eb_d65e = 0;
    } else {
        d_61eb_d65c = 1;
        d_61eb_d65e = 10;
    }
    for (d_61eb_d5aa = d_61eb_d65c; d_61eb_d5aa <= d_61eb_d65e; d_61eb_d5aa++) {
        if (f_1a83_633a(d_61eb_d8e6, d_3334_f278[d_61eb_d5de][0][d_61eb_d5aa])) {
            d_61eb_d8e2 = d_28d4_0064[d_61eb_d5de][d_61eb_d7da][d_61eb_d5aa];
            a = f_1a83_21df(d_61eb_d8e2, d_61eb_d5de, d_3334_f278[d_61eb_d5de][0][d_61eb_d5aa],
                            d_61eb_d7da == 1 ? 1 : 0);
            b = f_1a83_21df(d_61eb_d8e6, d_61eb_d5de, d_3334_f278[d_61eb_d5de][0][d_61eb_d5aa],
                            d_61eb_d7da == 1 ? 1 : 0);
            if (b > a && b > best) {
                best = b;
                d_61eb_d904 = d_61eb_d5aa;
            }
        }
    }
    if (d_61eb_d904 == -1) {
        if (d_61eb_d7da == 0) {
            d_61eb_d7da = 1;
            goto again;
        }
    } else {
        d_28d4_1958[23][d_61eb_d8e6] = d_61eb_d7da + 1;
        d_28d4_1958[23][d_28d4_0064[d_61eb_d5de][d_61eb_d7da][d_61eb_d904]] = 3;
        d_61eb_d8fa = d_28d4_0064[d_61eb_d5de][d_61eb_d7da][d_61eb_d904];
        d_28d4_0064[d_61eb_d5de][d_61eb_d7da][d_61eb_d904] = d_61eb_d8e6;
        d_61eb_d8e6 = d_61eb_d8fa;
        if (d_61eb_d8e6 > -1 && d_61eb_d8e6 < 1499) {
            d_61eb_d7da = 0;
            goto again;
        }
    }
    for (d_61eb_d7da = 0; d_61eb_d7da <= 1; d_61eb_d7da++) {
        for (d_61eb_d5aa = 0; d_61eb_d5aa <= 10; d_61eb_d5aa++) {
            if (d_28d4_0064[d_61eb_d5de][d_61eb_d7da][d_61eb_d5aa] == 1499) {
                best = -5000;
                d_61eb_d906 = 1499;
                for (d_61eb_d608 = 0; d_61eb_d608 <= d_3334_beca[d_61eb_d5de] - 1; d_61eb_d608++) {
                    d_61eb_d908 = d_28d4_081c[d_61eb_d5de][d_61eb_d608];
                    if (f_1a83_633a(d_61eb_d908, d_3334_f278[d_61eb_d5de][0][d_61eb_d5aa])
                        && d_28d4_1958[23][d_61eb_d908] == 3) {
                        c = f_1a83_21df(d_61eb_d908, d_61eb_d5de, d_3334_f278[d_61eb_d5de][0][d_61eb_d5aa],
                                        d_61eb_d7da == 1 ? 1 : 0);
                        if (c > best) {
                            best = c;
                            d_61eb_d906 = d_61eb_d908;
                        }
                    }
                }
                if (d_61eb_d906 < 1499) {
                    d_28d4_0064[d_61eb_d5de][d_61eb_d7da][d_61eb_d5aa] = d_61eb_d906;
                    d_28d4_1958[23][d_61eb_d906] = d_61eb_d7da + 1;
                }
            }
        }
    }
}

void f_1a83_1cf2(int16_t p)
{
    unsigned char team;

    if (!f_1a83_5a4c(p)) {
        team = d_28d4_82d0[p];
        if (d_432e_45de[p].f7) {
            d_3334_f9f8[team][f_1a83_1dd9(p)] = 1499;
            d_432e_45de[p].f7 = 0;
        }
    } else {
        team = f_1a83_5a62(p);
        if (d_432e_3a3e[team][f_1a83_5a80(p)]) {
            d_3334_f9f8[team][f_1a83_1dd9(p)] = 1499;
            d_432e_3a3e[team][f_1a83_5a80(p)] = 0;
        }
    }
}

int16_t f_1a83_1dd9(int16_t player)
{
    unsigned char team;

    if (!f_1a83_5a4c(player))
        team = d_28d4_82d0[player];
    else
        team = f_1a83_5a62(player);
    d_61eb_d8e8 = -1;
    for (d_61eb_d90a = 0; d_61eb_d90a <= 15; d_61eb_d90a++) {
        if (d_3334_f9f8[team][d_61eb_d90a] == player) {
            d_61eb_d8e8 = d_61eb_d90a;
            d_61eb_d90a = 15;
        }
    }
    return d_61eb_d8e8;
}

int16_t f_1a83_1e51(int16_t player)
{
    d_61eb_d8e8 = -1;
    d_61eb_d8fe = -1;
    for (d_61eb_d90a = 0; d_61eb_d90a <= 10; d_61eb_d90a++) {
        if (d_28d4_0064[d_28d4_82d0[player]][0][d_61eb_d90a] == player) {
            d_61eb_d8e8 = d_61eb_d90a;
            d_61eb_d8fe = 0;
            d_61eb_d90a = 10;
        } else if (d_28d4_0064[d_28d4_1958[18][player]][1][d_61eb_d90a] == player) {
            d_61eb_d8e8 = d_61eb_d90a;
            d_61eb_d8fe = 1;
            d_61eb_d90a = 10;
        }
    }
    return d_61eb_d8e8;
}

int16_t f_1a83_1eed(int16_t a, int16_t player, int16_t c)
{
    d_61eb_d90c = d_3334_0000[16][player] / 16;
    d_61eb_d90e = d_3334_0000[16][player] % 16;
    if (a != d_61eb_d90c || c != d_61eb_d90e) {
        d_61eb_d910 = 1500;
        if (a == 1 && !d_432e_45de[player].f0 || a > 1 && d_432e_45de[player].f0)
            d_61eb_d910 -= 1000;
        else {
            if ((a == 2 || a == 5 || a == 8) && !d_432e_45de[player].f4
                || (a == 3 || a == 6 || a == 9) && !d_432e_45de[player].f5
                || (a == 4 || a == 7 || a == 10) && !d_432e_45de[player].f6)
                d_61eb_d910 -= 400;
            if (a >= 2 && a <= 4 && !d_432e_45de[player].f1) {
                d_61eb_d910 -= 400;
                if (d_432e_45de[player].f3)
                    d_61eb_d910 = -200;
            } else if (a >= 5 && a <= 7 && !d_432e_45de[player].f2
                       || a >= 8 && a <= 10 && !d_432e_45de[player].f3)
                d_61eb_d910 -= 400;
            else if ((a == 11 || a == 12) && !d_432e_45de[player].f1 && !d_432e_45de[player].f2
                     || a == 13 && !d_432e_45de[player].f2 && !d_432e_45de[player].f3)
                d_61eb_d910 -= 150;
        }
        if (a > 1) {
            unsigned char i;
            int16_t sum;
            int16_t weights;
            int32_t l;

            sum = 0;
            weights = 0;
            for (i = 0; i <= 4; i = i + 1) {
                sum += d_53fc_075d[c][a][i] * d_28d4_1958[i + 1][player];
                weights += d_53fc_075d[c][a][i];
            }
            l = sum * 10 / weights;
            d_61eb_d910 += l;
            if (a == 10)
                d_61eb_d910 += d_28d4_1958[7][player] * 5;
        }
        d_3334_0000[16][player] = (a << 4) + c;
        d_3334_8ca0[player] = d_61eb_d910;
    } else
        d_61eb_d910 = d_3334_8ca0[player];
    return d_61eb_d910 = d_61eb_d910 * (d_28d4_1958[21][player] / 100.0);
}

int32_t f_1a83_21df(int16_t player, int16_t team, unsigned char pos, unsigned char second)
{
    int32_t v;

    v = f_1a83_1eed(pos, player, d_3334_d90a[d_3334_ca6e[team]] / 16);
    if (second == 0 || d_28d4_1958[17][player] >= 27)
        d_61eb_d800 = f_215d_1343(d_28d4_1958[15][player], d_28d4_1958[0][player]) * 0.1;
    else {
        int32_t t;

        t = ((200 - d_3334_db94[0][d_3334_ca6e[team]]) * d_3334_0000[18][player]
             + d_3334_db94[0][d_3334_ca6e[team]] * d_28d4_1958[9][player]) / 200;
        d_61eb_d800 = f_215d_1343(d_28d4_1958[15][player], d_28d4_1958[0][player]) * 0.075 + t * 0.025;
    }
    v *= d_61eb_d800;
    return v;
}

int16_t f_1a83_234b(unsigned char a)
{
    switch (a) {
    case 1:
        d_61eb_d912 = 1700;
        break;
    default:
        d_61eb_d912 = 1700;
        break;
    case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11:
        d_61eb_d912 = 1700;
        break;
    }
    return d_61eb_d912;
}

char f_1a83_2387(volatile int16_t w)   /* volatile + ternary: the value through AX (mov ax,[bp+6] / sub ax,18 / mov bx,ax) */
{
    switch (w ? w : w) {
    case 18: case 20: case 22: case 24: case 26: case 30: case 32: case 34: case 36: case 40:
    case 42: case 44: case 46: case 52: case 54: case 56: case 58: case 60: case 62: case 64:
    case 68: case 70: case 72: case 74: case 76: case 78: case 80: case 82: case 84: case 88:
    case 90: case 92: case 94: case 96:
        return -1;
    }
    return 0;
}

char f_1a83_2448(int16_t w)
{
    if (f_1a83_2387(w))
        return -1;
    if (w == 28 || w == 38 || w == 66 || w == 86)
        return -1;
    return 0;
}

char f_1a83_247b(int16_t w)
{
    switch (w) {
    case 14: case 15: case 17: case 27: case 33: case 59: case 63: case 71: case 77: case 98:
    case 100:
        return -1;
    }
    return 0;
}

char f_1a83_24d8(int16_t w)
{
    switch (w) {
    case 19: case 23: case 29: case 37: case 41: case 45: case 47: case 61: case 65: case 75:
        return -1;
    }
    return 0;
}

char f_1a83_2531(int16_t w)
{
    switch (w) {
    case 21: case 25: case 31: case 35: case 41: case 45: case 69: case 73: case 79: case 83:
    case 87: case 91:
        return -1;
    }
    return 0;
}

char f_1a83_2592(int16_t w)
{
    switch (w) {
    case 21: case 25: case 31: case 35: case 69: case 73: case 79: case 83: case 89:
        return -1;
    }
    return 0;
}

char f_1a83_25e7(int16_t w)
{
    switch (w) {
    case 21: case 25: case 31: case 35: case 41: case 45: case 69: case 73: case 79: case 83:
    case 93:
        return -1;
    }
    return 0;
}

char f_1a83_2644(int16_t w, int16_t n)
{
    switch (w) {
    case 21: case 25:
        return n >= 33 && n <= 64 ? -1 : 0;
    case 31: case 35:
        return n >= 17 && n <= 32 ? -1 : 0;
    case 41: case 45:
        return n >= 5 && n <= 12 ? -1 : 0;
    case 69: case 73:
        return n >= 9 && n <= 12 ? -1 : 0;
    case 79: case 83:
        return n >= 7 && n <= 8 ? -1 : 0;
    case 87: case 91:
        return n == 1 ? -1 : 0;
    }
    return 0;
}

char f_1a83_26ed(int16_t w, int16_t n)
{
    switch (w) {
    case 21: case 25:
        return n >= 17 && n <= 32 ? -1 : 0;
    case 31: case 35:
        return n >= 9 && n <= 16 ? -1 : 0;
    case 69: case 73:
        return n >= 5 && n <= 8 ? -1 : 0;
    case 79: case 83:
        return n >= 5 && n <= 6 ? -1 : 0;
    case 89:
        return n == 1 ? -1 : 0;
    }
    return 0;
}

char f_1a83_277e(int16_t w, int16_t n)
{
    switch (w) {
    case 21: case 25:
        return n >= 1 && n <= 16 ? -1 : 0;
    case 31: case 35:
        return n >= 1 && n <= 8 ? -1 : 0;
    case 41: case 45: case 69: case 73: case 79: case 83:
        return n >= 1 && n <= 4 ? -1 : 0;
    case 93:
        return n == 1 ? -1 : 0;
    }
    return 0;
}

char f_1a83_280b(int16_t w, int16_t n)
{
    switch (w) {
    case 19: case 23: case 29:
        return n >= 1 && n <= 6 ? -1 : 0;
    case 37: case 47:
        return n >= 1 && n <= 8 ? -1 : 0;
    case 41: case 45:
        return n >= 13 && n <= 20 ? -1 : 0;
    case 61: case 65:
        return n >= 1 && n <= 2 ? -1 : 0;
    case 75:
        return n == 1 ? -1 : 0;
    }
    return 0;
}

char f_1a83_28a0(int16_t w)
{
    switch (w) {
    case 15: case 21: case 27: case 31: case 41: case 59: case 61: case 69: case 71: case 79:
    case 87: case 98:
        return -1;
    }
    return 0;
}

char f_1a83_2901(int16_t w)
{
    switch (w) {
    case 17: case 25: case 33: case 35: case 45: case 63: case 65: case 73: case 77: case 83:
    case 91: case 100:
        return -1;
    }
    return 0;
}

char f_1a83_2962(int16_t w, int16_t n)
{
    switch (w) {
    case 75: case 89: case 93: case 97:
        return -1;
    }
    return 0;
}

char f_1a83_29a3(int16_t w)
{
    if (w == 97)
        return -1;
    return 0;
}

char f_1a83_29b8(int16_t w, int16_t n)
{
    switch (w) {
    case 19: case 23: case 29:
        return n - 1;
    case 37: case 47:
        return (n - 1) / 4;
    case 41: case 45:
        if (n >= 13)
            return (n - 13) / 4;
        break;
    }
    return 0;
}

char f_1a83_2a21(int16_t x)
{
    if (d_53fc_138c[0][0][x] != -32)
        return -1;
    return 0;
}

int16_t f_1a83_2a42(int16_t a, int16_t b)
{
    return exp(fabs(10.5 - (a - (a >= 18 ? 18 : 0) + 1)) / 2.0) / 10.0 * 0.005 * exp(b / 10.0) * 35.0;
}

char f_1a83_2ad4(int16_t x)
{
    if (x < 38 && d_3334_ca6e[x] >= 0x286 && d_3334_ca6e[x] < 0x28a)
        return -1;
    return 0;
}

float f_1a83_2b0c(int16_t x)
{
    if (x <= 37)
        return f_215d_1343(f_215d_13af(d_3334_be52[x] - (f_1a83_6d8b(x) + f_215d_13af(d_3334_bf6a[x], 3) - 2) * 2 - 3
                                       + d_3334_bdb2[0][x] / 16.0 - 0.5, 17), 6);
    if (x <= 437)
        return d_53fc_099a[x] - 3;
    return d_53fc_099a[x] - 5;
}

int16_t f_1a83_2bdb(int16_t x)
{
    return f_215d_1343(f_215d_13af((d_28d4_1958[0][x] - 30) / 10.0, 17), 6);
}

char f_1a83_2c20(int16_t player)
{
    if (f_1a83_6b4c(player))
        return -1;
    if (d_3334_beca[d_28d4_1958[18][player]] < 17)
        return -1;
    if (d_432e_45de[player].f0 && d_3334_bf42[0][d_28d4_1958[18][player]] < 2)
        return -1;
    return 0;
}

char f_1a83_2c8b(int16_t player)
{
    unsigned char team;
    unsigned char pos;
    unsigned char keepers;
    unsigned char others;
    unsigned char i;

    team = f_1a83_5a62(player);
    pos = f_1a83_5a80(player);
    keepers = 0;
    others = 0;
    for (i = 0; i <= 15; i++)
        if (d_432e_3a2e[team][i] == 0) {
            if (d_432e_39fe[team][0][i] == 1)
                keepers++;
            else
                others++;
        }
    if (d_432e_39fe[team][0][pos] > 1 && others < 13)
        return -1;
    if (d_432e_39fe[team][0][pos] == 1 && keepers < 2)
        return -1;
    return 0;
}

char *f_1a83_2d52(int16_t x, char c)
{
    char *s;

    s = f_215d_0f2d();
    if (x <= 15)
        sprintf(s, "%02d", x);
    else
        strcpy(s, c == 0 ? "16" : "GK");
    return s;
}

void f_1a83_2da6(int16_t n, char *title, char *items)
{
    char buf[320];
    int16_t k;

    memset(d_432e_b86b, 0, 20);
    d_61eb_d944 = -1;
    if (strlen(title) > 1)
        f_1a83_48f9(title);
    d_61eb_d946 = n > 0 ? n - 5 : 0;
    strcpy(d_432e_ba27, items);
    d_61eb_d61a = 0;
    for (d_61eb_d5f0 = 1; d_61eb_d5f0 <= strlen(items); d_61eb_d5f0++)
        if (items[d_61eb_d5f0 - 1] == '|')
            d_61eb_d61a++;
    d_61eb_d61a--;
    d_61eb_d948 = 0;
    while (d_432e_ba27[0]) {
        k = f_215d_0b10(d_432e_ba27, "|") - 1;
        strncpy(buf, d_432e_ba27, k);
        buf[k] = 0;
        if (buf[0] == '*') {
            strcpy(buf, buf + 1);
            d_61eb_da3e = -1;
        } else
            d_61eb_da3e = 0;
        if (buf[0] == '$') {
            strcpy(buf, buf + 1);
            d_61eb_d5ca = 110;
        } else
            d_61eb_d5ca = 30;
        sprintf(d_432e_c125, " %-17s", buf);
        strcpy(d_432e_ba27, &d_432e_ba27[k + 1]);
        if ((d_61eb_d61a + 1) / 2 > d_61eb_d948) {
            d_61eb_d5c4 = 1;
            d_61eb_da55 = d_61eb_d948 * 2.5 + d_61eb_d946 + 5.0;
        } else {
            if (d_61eb_d948 == d_61eb_d61a && !(d_61eb_d61a & 1))
                d_61eb_d5c4 = 11;
            else
                d_61eb_d5c4 = 21;
            d_61eb_da55 = (d_61eb_d948 - (d_61eb_d61a + 1) / 2) * 2.5 + d_61eb_d946 + 5.0;
        }
        d_432e_0e2e[d_61eb_d948] = d_61eb_d5c4;
        d_432e_0e7e[d_61eb_d948] = d_61eb_da55;
        strcpy(d_5313_0000[d_61eb_d948], d_432e_c125);
        f_215d_088c(16);
        f_215d_08aa(d_61eb_d5c4 * 8 + 6, d_61eb_da55 * 8.0 - 2.0,
                    (d_61eb_d5c4 + strlen(d_432e_c125)) * 8 + 3, d_61eb_da55 * 8.0 + 13.0);
        if (d_61eb_da3e) {
            d_432e_0ece[d_61eb_d948] = 24.0;
            f_1a83_30ca(1, 8, d_61eb_d948);
        } else {
            d_432e_0ece[d_61eb_d948] = d_61eb_d5ca;
            f_1a83_30ca(d_61eb_d5ca / 16, d_61eb_d5ca % 16, d_61eb_d948);
        }
        d_61eb_d948++;
    }
    if (strlen(title) > 1)
        f_1a83_3122(d_61eb_d948 - 1);
}

void f_1a83_30ca(int16_t a, int16_t b, int16_t line)
{
    f_1a83_3c08(d_432e_0e2e[line], -d_432e_0e7e[line], a, b, 0, d_5313_0000[line]);
}

void f_1a83_3122(int16_t last)
{
    if (d_61eb_d944 > -1 && last > -1)
        f_1a83_30ca(d_432e_0ece[d_61eb_d944] / 16.0, (int16_t)d_432e_0ece[d_61eb_d944] % 16, d_61eb_d944);
    f_1a83_569b();
    d_61eb_da51 = f_215d_0e27();
    f_215d_038c(0);
    do {
        d_61eb_d59e = -1;
        if (f_215d_0c20() > 0)
            for (d_61eb_d94a = 0; d_61eb_d94a <= abs(last); d_61eb_d94a++) {
                d_61eb_d5c4 = d_432e_0e2e[d_61eb_d94a];
                d_61eb_da55 = d_432e_0e7e[d_61eb_d94a];
                if (d_432e_b86b[d_61eb_d94a] == 0 && f_215d_0c14() >= d_61eb_d5c4 * 8 - 2 &&
                    f_215d_0c14() <= (d_61eb_d5c4 + 17) * 8 + 10 &&
                    f_215d_0c08() >= d_61eb_da55 * 8.0 + 15.0 - 20.0 &&
                    f_215d_0c08() <= d_61eb_da55 * 8.0 + 31.0 - 20.0)
                    d_61eb_d59e = d_61eb_d94a;
            }
    } while (d_61eb_d59e <= -1);
    f_215d_038c(1);
    if (last > -1 || d_5313_0000[d_61eb_d59e][0] == '*') {
        f_1a83_30ca(1, 12, d_61eb_d59e);
        d_61eb_d944 = d_61eb_d59e;
    }
}

static void f_1a83_32e9(int16_t i)
{
    d_432e_b86b[i] = -1;
}

char *f_1a83_3300(int16_t x)
{
    char *p;

    p = f_215d_0f2d();
    if (x < 38)
        strcpy(p, NEAR_PTR(d_61eb_b0ec[x]));
    else
        strcpy(p, NEAR_PTR(d_61eb_b140[x]));
    return p;
}

void f_1a83_3347(int16_t x, int16_t y, int16_t colour, char *s)
{
    if (*s) {
        if (x == -1)
            x = 160 - strlen(s) * 3;
        d_28d2_0012 = x - 8;
        d_28d2_0014 = abs(y) + 1;
        f_215d_0b01(0);
        if (d_61eb_d77e)
            f_215d_0987(0);
        if (colour > 0 && y > 0) {
            f_215d_089b(16);
            f_215d_09d7(x - 9, y, f_215d_0e90(s));
        }
        f_215d_089b(colour + 16);
        f_215d_09d7(x - 8, abs(y) + 1, f_215d_0e90(s));
        f_215d_0b01(1);
        if (d_61eb_d9c2)
            f_1a83_5bd6(d_28d2_0012, d_28d2_0014 - 7, s);
    }
}

void f_1a83_3450(float x, float y, int16_t bg, int16_t fg, int16_t w, char *s)
{
    if (*s || w > 0) {
        if (w > 0)
            d_61eb_d978 = w;
        else
            d_61eb_d978 = strlen(s) * 6;
        if (x == -1)
            x = (160.0 - d_61eb_d978 / 2.0) / 8.0;
        f_215d_088c(fg + 16);
        f_215d_08aa(x * 8.0 - 1, fabs(y) * 8.0 - 6.0, x * 8.0 - 1 + d_61eb_d978, fabs(y) * 8.0);
        if (*s) {
            d_28d2_0012 = x * 8.0;
            d_28d2_0014 = fabs(y) * 8.0 + 1;
            f_215d_0b01(0);
            if (d_61eb_d77e)
                f_215d_0987(0);
            if (y < 0) {
                f_215d_089b(16);
                f_215d_09d7(x * 8.0 - 1, fabs(y) * 8.0, f_215d_0e90(s));
            }
            f_215d_089b(abs(bg) + 16);
            f_215d_09d7(d_28d2_0012, d_28d2_0014, f_215d_0e90(s));
            f_215d_0b01(1);
            if (d_61eb_d9c2)
                f_1a83_5bd6(d_28d2_0012, d_28d2_0014 - 7, s);
        }
    }
}

void f_1a83_3697(float x, float y, int16_t colour, char *s)
{
    if (*s) {
        if (x == -1)
            x = 21.0 - strlen(s) / 2.0;
        d_28d2_0012 = x * 8.0 - 8.0;
        d_28d2_0014 = fabs(y) * 8.0 - 1;
        f_215d_0b01(0);
        if (d_61eb_d77e != 1)
            f_215d_0987(1);
        if (colour > 0 && y > 0) {
            f_215d_089b(16);
            f_215d_09d7(x * 8.0 - 9.0, y * 8.0 - 1, s);
        }
        f_215d_089b(colour + 16);
        f_215d_09d7(d_28d2_0012, d_28d2_0014, s);
        f_215d_0b01(1);
        if (d_61eb_d9c2)
            f_1a83_5bd6(d_28d2_0012, d_28d2_0014 - 7, s);
    }
}

void f_1a83_380b(float x, float y, int16_t bg, int16_t fg, int16_t w, char *s)
{
    if (*s || w > 0) {
        if (w > 0)
            d_61eb_d978 = w;
        else
            d_61eb_d978 = strlen(s) * 8;
        if (x == -1)
            x = (160.0 - d_61eb_d978 / 2.0) / 8.0;
        f_215d_088c(fg + 16);
        f_215d_08aa(x * 8.0 - 2.0, fabs(y) * 8.0 - 8.0, x * 8.0 + d_61eb_d978 + 1, fabs(y) * 8.0);
        if (*s) {
            d_28d2_0012 = x * 8.0;
            d_28d2_0014 = fabs(y) * 8.0 - 1;
            f_215d_0b01(0);
            if (d_61eb_d77e != 1)
                f_215d_0987(1);
            if (y < 0) {
                f_215d_089b(16);
                f_215d_09d7(x * 8.0 - 1, fabs(y) * 8.0 - 1, s);
            }
            f_215d_089b(abs(bg) + 16);
            f_215d_09d7(d_28d2_0012, d_28d2_0014, s);
            f_215d_0b01(1);
            if (d_61eb_d9c2)
                f_1a83_5bd6(d_28d2_0012, d_28d2_0014 - 7, s);
        }
    }
}

void f_1a83_3a43(float x, float y, int16_t colour, char *s)
{
    if (*s) {
        if (x == -1)
            x = 21.0 - strlen(s) / 2.0;
        d_28d2_0012 = x * 8.0 - 8.0;
        d_28d2_0014 = fabs(y) * 8.0 + 10.0;
        f_215d_0b01(0);
        if (d_61eb_d77e != 2)
            f_215d_0987(2);
        if (colour > 0 && y > 0) {
            f_215d_089b(16);
            f_215d_09d7(x * 8.0 - 8.0 - 2.0, y * 8.0 + 10.0 - 1, s);
            f_215d_09d7(x * 8.0 - 8.0 - 1, y * 8.0 + 10.0 - 1, s);
        }
        f_215d_089b(colour + 16);
        f_215d_09d7(d_28d2_0012, d_28d2_0014, s);
        f_215d_0b01(1);
        if (d_61eb_d9c2)
            f_1a83_5bd6(d_28d2_0012, d_28d2_0014 - 15, s);
    }
}

void f_1a83_3c08(float x, float y, int16_t bg, int16_t fg, int16_t w, char *s)
{
    if (*s || w > 0) {
        if (w > 0)
            d_61eb_d978 = w;
        else
            d_61eb_d978 = strlen(s) * 8;
        if (x == -1)
            x = (160.0 - d_61eb_d978 / 2.0) / 8.0;
        f_215d_088c(fg + 16);
        f_215d_08aa(x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0, x * 8.0 + d_61eb_d978 + 2.0, fabs(y) * 8.0 + 11.0);
        f_215d_089b(d_28d2_0000[fg] + 16);
        f_215d_1016(x * 8.0 - 2.0, fabs(y) * 8.0 + 11.0, x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0);
        f_215d_1016(x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0, x * 8.0 + d_61eb_d978 + 2.0, fabs(y) * 8.0 - 5.0);
        f_215d_089b(16);
        f_215d_1016(x * 8.0 + d_61eb_d978 + 2.0, fabs(y) * 8.0 - 5.0, x * 8.0 + d_61eb_d978 + 2.0, fabs(y) * 8.0 + 11.0);
        f_215d_1016(x * 8.0 + d_61eb_d978 + 2.0, fabs(y) * 8.0 + 11.0, x * 8.0 - 2.0, fabs(y) * 8.0 + 11.0);
        if (*s) {
            d_28d2_0012 = x * 8.0;
            d_28d2_0014 = fabs(y) * 8.0 + 10.0;
            f_215d_0b01(0);
            if (d_61eb_d77e != 2)
                f_215d_0987(2);
            if (y < 0) {
                f_215d_089b(16);
                f_215d_09d7(x * 8.0 - 1, fabs(y) * 8.0 + 9.0, s);
            }
            f_215d_089b(abs(bg) + 16);
            f_215d_09d7(d_28d2_0012, d_28d2_0014, s);
            f_215d_0b01(1);
            if (d_61eb_d9c2)
                f_1a83_5bd6(d_28d2_0012, d_28d2_0014 - 15, s);
        }
    }
}

static void f_1a83_407f(float x, float y, int16_t bg, int16_t fg, int16_t w, int16_t len, char *s)
{
    if (*s || w > 0) {
        if (w > 0)
            d_61eb_d978 = w;
        else
            d_61eb_d978 = strlen(s) * 8;
        if (x == -1)
            x = (160.0 - d_61eb_d978 / 2.0) / 8.0;
        f_215d_088c(fg + 16);
        f_215d_08aa(x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0, x * 8.0 + len + 1, fabs(y) * 8.0 + 10.0);
        if (*s) {
            d_28d2_0012 = x * 8.0;
            d_28d2_0014 = fabs(y) * 8.0 + 10.0;
            f_215d_0b01(0);
            if (d_61eb_d77e != 2)
                f_215d_0987(2);
            if (y < 0) {
                f_215d_089b(16);
                f_215d_09d7(x * 8.0 - 1, fabs(y) * 8.0 + 9.0, s);
            }
            f_215d_089b(abs(bg) + 16);
            f_215d_09d7(d_28d2_0012, d_28d2_0014, s);
            f_215d_0b01(1);
            if (d_61eb_d9c2)
                f_1a83_5bd6(d_28d2_0012, d_28d2_0014 - 15, s);
        }
    }
}

static void f_1a83_42ba(float x, float y, int16_t team)
{
    char buf[160];

    sprintf(buf, " %s ", f_215d_0e90(NEAR_PTR(d_61eb_b0ec[team])));
    f_1a83_380b(x, y, -(d_3334_be02[team] / 16), d_3334_be02[team] % 16, 0, buf);
}

void f_1a83_4327(float x, float y, int16_t team)
{
    char buf[160];

    sprintf(buf, " %s ", (char *)NEAR_PTR(d_61eb_b0ec[team]));
    f_1a83_3c08(x, y, -(d_3334_be02[team] / 16), d_3334_be02[team] % 16, 0, buf);
}

char *f_1a83_438a(int16_t n, char *s)
{
    char *buf;
    char tmp[320];

    buf = f_215d_0f2d();
    if (strlen(s) > n - 1) {
        sprintf(tmp, "%.*s", n - 1, s);
        sprintf(buf, " %s", tmp);
    } else
        sprintf(buf, " %-*s", n - 1, s);
    return buf;
}

int16_t f_1a83_440f(int16_t team)
{
    d_61eb_d852 = 38;
    for (d_61eb_d5d4 = 0; d_61eb_d5d4 <= 37; d_61eb_d5d4++) {
        if (d_432e_0640[d_61eb_d5d4] == team) {
            d_61eb_d852 = d_61eb_d5d4;
            d_61eb_d5d4 = 37;
        }
    }
    return d_61eb_d852;
}

int16_t f_1a83_4455(int16_t team)
{
    switch (f_1a83_6d8b(team)) {
    case 0:
        d_61eb_d7ac = 22;
        break;
    case 1:
        d_61eb_d7ac = 21;
    }
    return d_61eb_d7ac;
}

char *f_1a83_4485(int16_t player)
{
    char *buf;

    buf = f_215d_0f2d();
    if (f_1a83_5a2e(player) || f_1a83_6b4c(player)) {
        sprintf(buf, "%s %s", FAR_PTR(d_5b9b_0000[d_3334_9858[player]]), FAR_PTR(d_5b9b_1395[d_3334_afc8[player]]));
    } else if (f_1a83_5a4c(player)) {
        unsigned char a, b;

        a = f_1a83_5a62(player);
        b = f_1a83_5a80(player);
        d_61eb_dbd0 = f_215d_1629(d_61eb_dc5a, 0);
        sprintf(buf, "%s %s", FAR_PTR(d_5b9b_0000[d_61eb_dbd0[a][0][b]]), FAR_PTR(d_5b9b_1395[d_61eb_dbd0[a][1][b]]));
    } else
        strcpy(buf, "");
    return buf;
}

char *f_1a83_45b4(int16_t player)
{
    char c;
    char *buf;

    buf = f_215d_0f2d();
    c = f_215d_0b10(f_1a83_4485(player), " ");
    if (c != 0)
        sprintf(buf, "%c.", *f_1a83_4485(player));
    strcat(buf, f_1a83_462c(player));
    return buf;
}

char *f_1a83_462c(int16_t player)
{
    char *buf;
    char tmp[40];

    buf = f_215d_0f2d();
    strcpy(tmp, f_1a83_4485(player));
    strcpy(buf, tmp + f_215d_0b10(tmp, " "));
    return buf;
}

char *f_1a83_4686(int16_t manager, char full)
{
    char *buf;
    char tmp[80];

    buf = f_215d_0f2d();
    if (manager < 646) {
        d_61eb_dbbc = f_215d_1629(d_61eb_dc50, 0);
        strcpy(tmp, FAR_PTR(d_5b9b_0000[d_61eb_dbbc[0][manager]]));
        strcpy(d_432e_d5ad, FAR_PTR(d_5b9b_1395[d_61eb_dbbc[1][manager]]));
    } else {
        strcpy(tmp, d_432e_c2c9[0][manager - 646]);
        strcpy(d_432e_d5ad, d_432e_c2c9[1][manager - 646]);
    }
    if (!full)
        sprintf(buf, "%s %s", tmp, d_432e_d5ad);
    else
        strcpy(buf, d_432e_d5ad);
    return buf;
}

/* numbers in words, for 488b (players 1-15): its strings sit in the pool where the table is
 * defined, between 4793's and 488b's literals */
char *d_61eb_031e[15] = {
    "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
    "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen"
};

char *f_1a83_477e(int16_t player)
{
    char *buf;

    buf = f_215d_0f2d();
    strcpy(buf, "");
    if (player >= 1 && player <= 15)
        strcpy(buf, d_61eb_031e[player - 1]);
    else
        sprintf(buf, "%d", player);
    return buf;
}

char *f_1a83_47e8(int16_t division)
{
    char *buf;

    buf = f_215d_0f2d();
    sprintf(buf, "%d", division);
    if (division % 10 == 1 && division != 11)
        strcat(buf, "ST");
    else if (division % 10 == 2 && division != 12)
        strcat(buf, "ND");
    else if (division % 10 == 3 && division != 13)
        strcat(buf, "RD");
    else
        strcat(buf, "TH");
    return buf;
}

/* a division's name, by length (full 0-3): Serie A (division 1) or Serie B */
char *f_1a83_4876(int16_t division, char full)
{
    char *buf;

    buf = f_215d_0f2d();
    if (division == 1) {
        if (full == 0)
            strcpy(buf, "Serie A");
        else if (full == 1 || full == 2)
            strcpy(buf, "SR/A");
        else if (full == 3)
            strcpy(buf, " A");
    } else if (full == 0)
        strcpy(buf, "Serie B");
    else if (full == 1 || full == 2)
        strcpy(buf, "SR/B");
    else if (full == 3)
        strcpy(buf, " B");
    return buf;
}

void f_1a83_48f9(char *title)
{
    char t[160];
    char t2[320];

    strcpy(t, title);
    f_1a83_4d03();
    f_215d_033b();
    f_1a83_5b92();
    f_215d_089b(17);
    f_215d_0904(0, 0, 0x13f, 0xc7);
    if (t[0] != 0) {
        d_61eb_da5d = 19.0 - strlen(t) / 2.0;
        f_215d_088c(16);
        f_215d_08aa(d_61eb_da5d * 8.0 + 6.0, 6, (strlen(t) + d_61eb_da5d) * 8.0 + 19.0, 20);
        sprintf(t2, " %s ", t);
        f_1a83_3c08(d_61eb_da5d, -1.0, 1, 4, 0, t2);
    }
    if (strstr(title, "Manager Italia"))
        f_1a83_3450(34.375, 24.625, 0, 1, 42, " v5.3i");
    d_61eb_da13 = -1;
}

void f_1a83_4a35(float x, int16_t w, char *prompt)
{
    f_1a83_3a43(x, 21.0, 5, prompt);
    f_1a83_4aaa(x + 1 + strlen(prompt), 21.0, 9, w);
    f_215d_07ec(4, 0xa3, 0x13c, 0xb2);
}

void f_1a83_4aaa(int16_t x, float y, int16_t colour, int16_t maxlen)
{
    register int16_t c;

    f_215d_038c(0);
    f_215d_1a06();
    f_1a83_569b();
    strcpy(d_432e_c369, "");
    do {
        d_61eb_da51 = f_215d_0e27();
        do {
            strcpy(d_432e_d55b, f_215d_0d0f());
            if (f_215d_0c20() == 0)
                d_61eb_da51 = f_215d_0e27();
            else if (f_215d_0e27() - d_61eb_da51 > 300)
                strcpy(d_432e_d55b, f_215d_0155(13));
        } while (!(d_432e_d55b[0] == 0x7f || d_432e_d55b[0] == 13 || d_432e_d55b[0] == 8
                   || d_432e_d55b[0] == '.' || d_432e_d55b[0] == ' ' || d_432e_d55b[0] == '\''
                   || (d_432e_d55b[0] >= '0' && d_432e_d55b[0] <= '9')
                   || (d_432e_d55b[0] >= 'A' && d_432e_d55b[0] <= 'Z')
                   || (d_432e_d55b[0] >= 'a' && d_432e_d55b[0] <= 'z')));
        c = d_432e_d55b[0];
        if ((c == 0x7f || c == 8) && d_432e_c369 != "") {
            d_432e_c369[strlen(d_432e_c369) - 1] = 0;
            f_215d_07ec(x * 8 - 10, y * 8.0 - 5.0, (x + maxlen - 1) * 8 - 1, y * 8.0 + 10.0);
            f_1a83_3a43(x, y, colour, d_432e_c369);
        } else if (strlen(d_432e_c369) < maxlen && c != 13 && c != 0x7f && c != 8) {
            strcat(d_432e_c369, d_432e_d55b);
            f_215d_07ec(x * 8 - 10, y * 8.0 - 5.0, (x + maxlen - 1) * 8 - 1, y * 8.0 + 10.0);
            f_1a83_3a43(x, y, colour, d_432e_c369);
        }
    } while (c != 13 && maxlen != 1);
    f_215d_1a24();
    f_215d_038c(1);
}

void f_1a83_4d03(void)
{
    uint16_t i, j;

    memset(d_28d4_1798, 0, 400);
    memset(d_432e_b8cb, 0, 100);
    for (i = 0; i < 7; i++)
        for (j = 0; j < 100; j++)
            d_432e_0fa6[i][j] = 0;
    for (d_61eb_d6a8 = 0; d_61eb_d6a8 <= 99; d_61eb_d6a8++)
        strcpy(d_432e_eea3[d_61eb_d6a8], "");
    d_61eb_d97a = 0;
    d_61eb_d5e2 = 0;
}

void f_1a83_4d96(int16_t a, float x, float y, int16_t c, int16_t d, int16_t e, char *s)
{
    int16_t o7b, o6b, o19;
    float ox, oy;

    o7b = d_61eb_d5ca;
    o6b = d_61eb_d5da;
    ox = d_61eb_da5d;
    oy = d_61eb_da55;
    o19 = d_61eb_d62a;
    d_61eb_d5ca = c;
    d_61eb_d5da = d;
    d_61eb_d62a = a;
    d_61eb_da5d = x;
    d_61eb_da55 = y;
    strcpy(d_432e_c887, s);
    if (d_61eb_da5d == -1) {
        if (d_61eb_d62a > 0)
            d_61eb_da5d = 20.0 - strlen(d_432e_c887) / 2.0;
        else
            d_61eb_da5d = (160 - strlen(d_432e_c887) * 3) / 8.0;
    }
    strcpy(d_432e_eea3[d_61eb_d97a], d_432e_c887);
    d_28d4_1798[0][d_61eb_d97a] = (d_61eb_d5ca << 4) + d_61eb_d5da;
    d_28d4_17fc[d_61eb_d97a] = d_61eb_d62a;
    d_432e_0fa6[0][d_61eb_d97a] = d_61eb_da5d;
    d_432e_0fa6[1][d_61eb_d97a] = d_61eb_da55;
    if (e > 0)
        d_61eb_d978 = e;
    else
        d_61eb_d978 = strlen(d_432e_c887) * (8 - (d_61eb_d62a == 0 ? 2 : 0));
    if (d_61eb_d62a == 0) {
        d_61eb_da6d = d_61eb_da5d * 8.0 - 1;
        d_61eb_da61 = d_61eb_da55 * 8.0 - 6.0;
        d_61eb_daed = d_61eb_da5d * 8.0 + d_61eb_d978 - 1;
        d_61eb_daf5 = d_61eb_da55 * 8.0;
    } else if (d_61eb_d62a == 1) {
        d_61eb_da6d = d_61eb_da5d * 8.0 - 2.0;
        d_61eb_da61 = d_61eb_da55 * 8.0 - 8.0;
        d_61eb_daed = d_61eb_da5d * 8.0 + d_61eb_d978 + 1;
        d_61eb_daf5 = d_61eb_da55 * 8.0;
    } else if (d_61eb_d62a == 2) {
        d_61eb_da6d = d_61eb_da5d * 8.0 - 2.0;
        d_61eb_da61 = d_61eb_da55 * 8.0 - 5.0;
        d_61eb_daed = d_61eb_da5d * 8.0 + d_61eb_d978 + 1;
        d_61eb_daf5 = d_61eb_da55 * 8.0 + 10.0;
    }
    d_432e_0fa6[2][d_61eb_d97a] = d_61eb_da6d;
    d_432e_0fa6[3][d_61eb_d97a] = d_61eb_da61;
    d_432e_0fa6[4][d_61eb_d97a] = d_61eb_daed;
    d_432e_0fa6[5][d_61eb_d97a] = d_61eb_daf5;
    d_432e_0fa6[6][d_61eb_d97a] = e;
    d_61eb_d97a++;
    f_1a83_5117(d_61eb_d97a, 0);
    d_61eb_d5ca = o7b;
    d_61eb_d5da = o6b;
    d_61eb_d62a = o19;
    d_61eb_da5d = ox;
    d_61eb_da55 = oy;
}

/* Draw button n (1-based), its colours swapped when asked. */
void f_1a83_5117(int16_t n, char swap)
{
    d_61eb_d5d0 = n - 1;
    if (d_61eb_d5d0 < 0)
        return;
    d_61eb_d5ca = d_28d4_1798[0][d_61eb_d5d0] / 16;
    d_61eb_d5da = d_28d4_1798[0][d_61eb_d5d0] % 16;
    if (d_61eb_d5ca <= 0 && d_61eb_d5da <= 0)
        return;
    if (swap != 0 && d_61eb_d5da > 0)
        f_215d_13f1(&d_61eb_d5ca, &d_61eb_d5da, 2);
    d_61eb_d62a = d_28d4_1798[1][d_61eb_d5d0];
    d_61eb_da5d = d_432e_0fa6[0][d_61eb_d5d0];
    d_61eb_da55 = d_432e_0fa6[1][d_61eb_d5d0];
    d_61eb_d6ba = d_432e_0fa6[6][d_61eb_d5d0];
    if (d_61eb_d62a == 0)
        f_1a83_3450(d_61eb_da5d, d_61eb_da55, d_61eb_d5ca, d_61eb_d5da, d_61eb_d6ba,
                    d_432e_eea3[d_61eb_d5d0]);
    else if (d_61eb_d62a == 1)
        f_1a83_380b(d_61eb_da5d, d_61eb_da55, d_61eb_d5ca, d_61eb_d5da, d_61eb_d6ba,
                    d_432e_eea3[d_61eb_d5d0]);
    else if (d_61eb_d62a == 2)
        f_1a83_3c08(d_61eb_da5d, d_61eb_da55, d_61eb_d5ca, d_61eb_d5da, d_61eb_d6ba,
                    d_432e_eea3[d_61eb_d5d0]);
}

/* Wait for a click on a button; returns its number. */
int16_t f_1a83_5296(int16_t a)
{
    char buf[6];

    f_1a83_569b();
    d_61eb_d97c = -1;
    d_61eb_daf9 = f_215d_0e27();
    d_61eb_dafd = f_215d_0e27();
    f_215d_038c(0);
    do {
top:
        strcpy(buf, f_215d_0d0f());
        if (buf[0] == 'P' || buf[0] == 'p')
            f_b26d_0849();
        if (f_215d_0c20() > 0) {
            if (d_61eb_df30 == 0 && f_1a83_6d2f()) {
                f_b26d_0849();
                goto top;
            }
            d_61eb_d97c = 0;
            for (d_61eb_d6a8 = 0; d_61eb_d97a - 1 >= d_61eb_d6a8; d_61eb_d6a8++) {
                if (f_215d_0c14() >= d_432e_0fa6[2][d_61eb_d6a8] &&
                    f_215d_0c14() <= d_432e_0fa6[4][d_61eb_d6a8] &&
                    f_215d_0c08() >= d_432e_0fa6[3][d_61eb_d6a8] &&
                    f_215d_0c08() <= d_432e_0fa6[5][d_61eb_d6a8]) {
                    if (d_432e_b8cb[d_61eb_d6a8] == 0)
                        d_61eb_d97c = d_61eb_d6a8 + 1;
                    else
                        d_61eb_d97c = -1;
                    d_61eb_d6a8 = d_61eb_d97a - 1;
                }
            }
        }
        if (d_61eb_da41 != 0 && d_432e_e903[0] != 0) {
            if (f_215d_0e27() - d_61eb_daf9 > 500) {
                f_a214_2db7();
                d_61eb_daf9 = f_215d_0e27();
            }
            if (f_215d_0e27() - d_61eb_dafd > 100) {
                f_a214_2e56();
                d_61eb_dafd = f_215d_0e27();
            }
        }
    } while (d_61eb_d97c <= -1);
    f_215d_038c(1);
    if (a > 0)
        f_1a83_5117(a, 0);
    if (d_61eb_d97c > 0 && a > -1)
        f_1a83_5117(d_61eb_d97c, -1);
    return d_61eb_d5e2 = d_61eb_d97c;
}

void f_1a83_54f9(int16_t team)
{
    d_432e_b8cb[team - 1] = 0xff;
}

void f_1a83_5512(void)
{
    for (d_61eb_d6a8 = 0; d_61eb_d97a - 1 >= d_61eb_d6a8; d_61eb_d6a8++)
        d_432e_b8cb[d_61eb_d6a8] = 0;
}

void f_1a83_5540(int16_t a)
{
    int16_t m;

    f_215d_038c(0);
    f_1a83_3347(0xfc, 0xc5, 5, "CLICK MOUSE");
    if (d_61eb_d9c4 != 0 && d_61eb_d9c3 == 0 && d_61eb_da29 == 0 ||
        d_61eb_d9bf != 0 && d_61eb_d9c5 != 0 || d_61eb_da23 != 0 && d_61eb_d9c5 != 0) {
        d_61eb_da51 = f_215d_0e27();
        do
            f_215d_0d96(2);
        while (f_215d_0c20() != 0 || f_215d_0e27() - d_61eb_da51 <= 75);
    } else {
        f_1a83_569b();
        do {
again:
            f_215d_0d96(2);
            strcpy(d_432e_d55b, f_215d_0d0f());
            if (d_432e_d55b[0] == 'P' || d_432e_d55b[0] == 'p')
                f_b26d_0849();
            m = f_215d_0c20();
            if (d_61eb_df30 == 0 && m > 0 && f_1a83_6d2f()) {
                f_b26d_0849();
                goto again;
            }
        } while (m <= 0 && (d_432e_d55b[0] == 0 || a != 2));
    }
    f_215d_07ec(0xf3, 0xbf, 0x13e, 0xc5);
    if (a == 0)
        f_1a83_3347(0xfc, 0xc5, 5, "PLEASE WAIT");
    f_215d_038c(1);
}

void f_1a83_569b(void)
{
    char buf[10];

    do
        strcpy(buf, f_215d_0d0f());
    while (buf[0] != 0 || f_215d_0c20() != 0);
}

/* Copy of s with all but the first letter in lower case (not called). */
static char *f_1a83_56ca(char *s)
{
    char *p;

    p = f_215d_0f2d();
    strcpy(p, s);
    for (d_61eb_d97e = 1; strlen(p) > d_61eb_d97e; d_61eb_d97e++)
        if (isupper(p[d_61eb_d97e]))
            p[d_61eb_d97e] = tolower(p[d_61eb_d97e]);
    return p;
}

int32_t f_1a83_5747(int16_t team)
{
    d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 0);
    d_61eb_db85 = d_61eb_dbc0[0][team] + d_61eb_dbc0[5][team] + d_61eb_dbc0[2][team];
    d_61eb_db89 = d_61eb_dbc0[9][team] + d_61eb_dbc0[12][team] + d_61eb_dbc0[13][team];
    d_61eb_db8d = f_215d_135c(d_3334_cc82[0][team] - f_9f8d_1ec1(team), 0) + d_61eb_db85 - d_61eb_db89;
    d_61eb_db91 = f_1a83_0cef(d_61eb_db8d * 0.9, 0);
    return d_61eb_db91;
}

void f_1a83_5844(int16_t team, char *title, char *text)
{
    char buf[180];
    int16_t x, y;

    f_1a83_48f9("");
    d_61eb_d94c = 4;
    f_215d_088c(16);
    f_215d_08aa(40, 80, 288, d_61eb_d94c * 8 + 104);
    f_215d_088c(19);
    f_215d_08aa(36, 76, 284, d_61eb_d94c * 8 + 100);
    d_61eb_d5ca = d_3334_be02[team] / 16;
    d_61eb_d5da = d_3334_be02[team] % 16;
    if (d_61eb_d5da == 3)
        f_215d_13f1(&d_61eb_d5ca, &d_61eb_d5da, 2);
    f_1a83_3450(5.125, 11.0, d_61eb_d5ca, d_61eb_d5da, 240, title);
    sprintf(buf, "%s ", text);
    x = 0;
    y = 100;
    while (f_215d_0b10(buf, " ") > 0) {
        d_61eb_d94e = f_215d_0b10(buf, " ");
        strncpy(d_432e_df8f, buf, d_61eb_d94e - 1);
        d_432e_df8f[d_61eb_d94e - 1] = 0;
        if (x + strlen(d_432e_df8f) * 6 > 240) {
            y += 8;
            x = 0;
        }
        f_1a83_3347(x + 49, y, 6, d_432e_df8f);
        x += (int16_t)(strlen(d_432e_df8f) + 1) * 6;
        strcpy(buf, buf + d_61eb_d94e);
    }
    f_1a83_5540(0);
}

/* Read a big-endian word. */
int16_t f_1a83_59ee(FILE *fp)
{
    int16_t v;
    unsigned char hi, lo;

    hi = fgetc(fp);
    lo = fgetc(fp);
    v = (hi << 8) + lo;
    return v;
}

char f_1a83_5a2e(int16_t player)
{
    if (player >= 0 && d_61eb_d58e - 1 >= player)
        return -1;
    return 0;
}

char f_1a83_5a4c(int16_t player)
{
    if (player >= 3000)
        return -1;
    return 0;
}

int16_t f_1a83_5a62(int16_t player)
{
    unsigned char c;

    c = (player - 3000u) / 20;
    return c;
}

unsigned char f_1a83_5a80(int16_t player)
{
    unsigned char c;

    c = (player - 3000u) % 20;
    return c;
}

unsigned char f_1a83_5a9f(int16_t player, unsigned char a)
{
    unsigned char q, r, v, s;

    q = f_1a83_5a62(player);
    r = f_1a83_5a80(player);
    v = d_432e_39fe[q][2][r];
    s = d_432e_39fe[q][0][r];
    if (a == 1) {
        if (s != 1)
            v = v * 0.3;
    } else if (f_1a83_64cf(a)) {
        if (s == 1)
            v = v * 0.3;
        else if (s != 2)
            v = v * 0.6;
    } else if (f_1a83_64f5(a)) {
        if (s == 1)
            v = v * 0.3;
        else if (s != 3)
            v = v * 0.6;
    } else if (f_1a83_6516(a)) {
        if (s == 1)
            v = v * 0.3;
        else if (s != 4)
            v = v * 0.6;
    }
    return v / 10;
}

void f_1a83_5b92(void)
{
    d_61eb_dbd4 = f_215d_1629(d_61eb_dc5c, 1);
    strcpy(d_61eb_dbd4, "");
    d_28d2_0016 = 0;
    d_28d2_0010 = 0;
}

void f_1a83_5bd6(int16_t a, int16_t b, char *s)
{
    if (d_28d2_0018 != 0 && d_28d2_0010 < 300) {
        d_432e_5d4e[d_28d2_0010].a = a;
        d_432e_5d4e[d_28d2_0010].b = b;
        d_432e_5d4e[d_28d2_0010].start = d_28d2_0016;
        d_432e_5d4e[d_28d2_0010].len = strlen(s);
        d_28d2_0016 = d_28d2_0016 + d_432e_5d4e[d_28d2_0010].len;
        d_61eb_dbd4 = f_215d_1629(d_61eb_dc5c, 1);
        strcat(d_61eb_dbd4, s);
        d_28d2_0010++;
    }
}

void f_1a83_5ccd(void)
{
    d_28d2_0018 = -1;
}

void f_1a83_5ce1(void)
{
    d_28d2_0018 = 0;
}

char f_1a83_5cf5(int16_t p)
{
    unsigned char c;

    d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 0);
    c = d_61eb_dbcc[9][p];
    if (c == 0 || c == 2 || c == 3 || c == 4 || c == 11)
        return 17;
    return 15;
}

char f_1a83_5d3d(char team, char week, char n)
{
    return -1;
}

/* draws a player's shirt with his number at x, y (and the arrow of his position) */
void f_1a83_5d48(unsigned char team, unsigned char player, uint16_t x, uint16_t y)
{
    unsigned char num[6], d1[6], d2[6];
    unsigned char col, col2, col3;

    if (team < 38) {
        col = d_3334_be02[team] / 16;
        col2 = d_3334_be02[team] % 16;
    } else {
        col = d_53fc_0bb6[team == d_61eb_d666 ? d_61eb_d6b4 - 38 : d_61eb_d6b6 - 38] / 16;
        col2 = d_53fc_0bb6[team == d_61eb_d666 ? d_61eb_d6b4 - 38 : d_61eb_d6b6 - 38] % 16;
    }
    if (player == 1) {
        col = col2 == 6 ? 1 : 0;
        col2 = col2 == 6 ? 4 : 6;
    }
    col3 = col == 15 || col == 3 ? 0 : col;
    f_215d_089b(col2 + 16);
    f_215d_1016(x + 1, y, x + 3, y);
    f_215d_1016(x + 10, y, x + 12, y);
    f_215d_1016(x, y + 1, x + 4, y + 1);
    f_215d_1016(x + 9, y + 1, x + 13, y + 1);
    f_215d_1016(x - 1, y + 2, x + 14, y + 2);
    f_215d_1016(x - 1, y + 3, x + 14, y + 3);
    f_215d_1016(x - 1, y + 4, x, y + 4);
    f_215d_1016(x + 2, y + 4, x + 11, y + 4);
    f_215d_1016(x + 13, y + 4, x + 14, y + 4);
    f_215d_089b(col3 + 16);
    f_215d_1016(x + 4, y, x + 4, y);
    f_215d_1016(x + 9, y, x + 9, y);
    f_215d_1016(x + 5, y + 1, x + 8, y + 1);
    f_215d_1016(x - 2, y + 3, x - 2, y + 3);
    f_215d_1016(x + 15, y + 3, x + 15, y + 3);
    f_215d_1016(x - 2, y + 4, x - 2, y + 4);
    f_215d_1016(x + 15, y + 4, x + 15, y + 4);
    f_215d_088c(col2 + 16);
    f_215d_08aa(x + 2, y + 5, x + 11, y + 10);
    f_215d_089b(col2 + 16);
    f_215d_1016(x + 3, y + 11, x + 10, y + 11);
shirt_number:   /* unused label: the original pops the line call before the sprintf */
    sprintf(num, "%d", player);
    sprintf(d1, "%c", num[0]);
    f_1a83_3347(x + 13 - (player >= 10 ? 4 : 0) - (player == 1 ? 1 : 0), -(y + 14 - 6 + 1), col, d1);
    if (player >= 10) {
        sprintf(d2, "%c", num[1]);
        f_1a83_3347(x + 20 - 6 - (player == 1 ? 1 : 0), -(y + 14 - 6 + 1), col, d2);
    }
    if (d_3334_f278[team][0][player - 1] == 11 || d_3334_f278[team][0][player - 1] == 12) {
        f_215d_089b(22);
        f_215d_1016(x - 1, y + 7, x - 9, y + 7);
        f_215d_1016(x - 9, y + 7, x - 7, y + 5);
        f_215d_1016(x - 9, y + 7, x - 7, y + 9);
        f_215d_1016(x + 14, y + 7, x + 22, y + 7);
        f_215d_1016(x + 22, y + 7, x + 20, y + 5);
        f_215d_1016(x + 22, y + 7, x + 20, y + 9);
    } else if (d_3334_f278[team][2][player - 1] == 1) {
        f_215d_089b(22);
        f_215d_1016(x + 7, y - 1, x + 7, y - 9);
        f_215d_1016(x + 7, y - 9, x + 5, y - 7);
        f_215d_1016(x + 7, y - 9, x + 9, y - 7);
    } else if (d_3334_f278[team][2][player - 1] == 2) {
        f_215d_089b(22);
        f_215d_089b(22);
        f_215d_1016(x + 7, y + 13, x + 7, y + 21);
        f_215d_1016(x + 7, y + 21, x + 5, y + 19);
        f_215d_1016(x + 7, y + 21, x + 9, y + 19);
    }
}

/* can player a play in position b */
char f_1a83_633a(int16_t a, int16_t b)
{
    char x, y;

    if (!f_1a83_5a4c(a)) {
        if (b == 11)
            return -1;
        if (b == 1 && d_432e_45de[a].f0)
            return -1;
        x = 0;
        y = 0;
        if ((f_1a83_64cf(b) && d_432e_45de[a].f1) || (f_1a83_64f5(b) && d_432e_45de[a].f2) ||
            (f_1a83_6516(b) && d_432e_45de[a].f3))
            x = 1;
        if ((f_1a83_655d(b) && d_432e_45de[a].f4) || (f_1a83_6537(b) && d_432e_45de[a].f5) ||
            (f_1a83_6583(b) && d_432e_45de[a].f6))
            y = 1;
        if (x == 1 && y == 1)
            return -1;
    } else {
        x = d_432e_39fe[f_1a83_5a62(a)][0][f_1a83_5a80(a)];
        return (b == 1 && x == 1) || (f_1a83_64cf(b) && x == 2) || (f_1a83_64f5(b) && x == 3) ||
               (f_1a83_6516(b) && x == 4) ? -1 : 0;
    }
    return 0;
}

char f_1a83_64cf(int16_t x)
{
    if (x == 2 || x == 3 || x == 4 || x == 11)
        return -1;
    return 0;
}

char f_1a83_64f5(int16_t x)
{
    if (x == 5 || x == 6 || x == 7)
        return -1;
    return 0;
}

char f_1a83_6516(int16_t x)
{
    if (x == 8 || x == 9 || x == 10)
        return -1;
    return 0;
}

char f_1a83_6537(int16_t x)
{
    if (x == 3 || x == 6 || x == 9 || x == 11)
        return -1;
    return 0;
}

char f_1a83_655d(int16_t x)
{
    if (x == 2 || x == 5 || x == 8 || x == 11)
        return -1;
    return 0;
}

char f_1a83_6583(int16_t x)
{
    if (x == 4 || x == 7 || x == 10 || x == 11)
        return -1;
    return 0;
}

/* is it the transfer window (weeks 5-36 or from 39 on; from week 13 when foreign) */
char f_1a83_65a9(char foreign)
{
    if (foreign == 0) {
        if ((d_61eb_d5a2 >= 5 && d_61eb_d5a2 <= 36) || d_61eb_d5a2 >= 39)
            return -1;
        else
            return 0;
    } else if (d_61eb_d5a2 >= 13)
        return -1;
    return 0;
}

double f_1a83_65dc(int16_t x, int16_t y)
{
    return (f_215d_1385(d_28d4_1958[15][x], d_28d4_1958[9][x]) * 0.1 + d_28d4_1958[12][x]
            + d_28d4_1958[17][x] * 0.5 + (y == 1 || y == 4 || y == 7 || y > 9 ? 3 : 0)) / 3.0;
}

int16_t f_1a83_669a(int16_t a, int16_t b, int16_t c)
{
    return d_3334_bc2a[b == 39 ? 1 : 0][a] + (c == 1 || c == 4 || c == 7 || c > 9 ? 2 : 0);
}

int16_t f_1a83_66e8(int16_t x)
{
    return (x + 1) / 2;
}

float f_1a83_66fa(int16_t x)
{
    if (x <= 17 || x >= 38)
        return 1.1;
    if (x <= 37)
        return 2.5;
    return 3.5;
}

/* is the player unhappy: the reason in d_432e_d32b (unless c), its code in d_61eb_d780 */
char f_1a83_6728(int16_t player, char c)
{
    d_61eb_da0a = 0;
    d_61eb_d780 = 0;
    if (f_1a83_6b4c(player) == 0 && d_3334_0000[7][player] == 255 && !d_432e_45de[player].f30) {
        if (!d_432e_45de[player].f11) {
            d_61eb_d810 = d_28d4_1958[23][player];
            d_61eb_da0d = f_1a83_2ad4(d_61eb_d812 = d_28d4_1958[18][player]);
            if (d_61eb_d5a2 > 18 && !d_432e_45de[player].f23) {
                d_61eb_da0f = d_432e_45de[player].f7 == 0 || f_1a83_1dd9(player) > 10;
                d_61eb_da10 = d_28d4_1958[20][player] == 0 && d_28d4_1958[21][player] > 90;
                if (d_61eb_da0f && d_61eb_da10 && d_61eb_d810 == 1) {
                    if (!c)
                        strcpy(d_432e_d32b, "Feels he should be in the team");
                    d_61eb_da0a = -1;
                    d_61eb_d780 = 1;
                }
                if (d_61eb_da0f && d_61eb_da10 && d_61eb_d810 > 1 &&
                    d_28d4_1958[17][player] > (d_432e_45de[player].f0 << 2) + 30) {
                    if (!c)
                        strcpy(d_432e_d32b, "Wants first team football");
                    d_61eb_da0a = -1;
                    d_61eb_d780 = 2;
                }
            }
            if (d_3334_caba[d_61eb_d812] == 650) {
                d_61eb_d814 = 0;
                d_61eb_d816 = 0;
            } else {
                d_61eb_d814 = d_53fc_095c[d_3334_0000[17][player]][d_3334_d680[d_3334_ca6e[d_61eb_d812]]];
                d_61eb_d816 = d_53fc_095c[d_3334_0000[17][player]][d_3334_d680[d_3334_caba[d_61eb_d812]]];
            }
            if (f_1a83_2bdb(player) - f_1a83_2b0c(d_61eb_d812) > (d_3334_a410[player] > 0 ? 8 : 6) &&
                f_1a83_2b0c(d_61eb_d812) < 15.0) {
                if (!c)
                    strcpy(d_432e_d32b, "Wants to move to a better club");
                d_61eb_da0a = -1;
                d_61eb_d780 = 3;
            } else if (d_61eb_d814 > 8) {
                if (!c) {
                    if (d_61eb_da0d)
                        strcpy(d_432e_d32b, "Is not happy working for you");
                    else
                        strcpy(d_432e_d32b, "Cannot work with his manager");
                }
                d_61eb_da0a = -1;
                d_61eb_d780 = 4;
            } else if (d_61eb_d816 > 8) {
                if (!c)
                    sprintf(d_432e_d32b, "Cannot work with %s coach", d_61eb_da0d ? "the" : "his");
                d_61eb_da0a = -1;
                d_61eb_d780 = 5;
            } else {
                d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
                if (d_61eb_dbb8[4][player] < f_1a83_6b9e(player, d_61eb_d812) * 0.8 && d_3334_a410[player] > 0) {
                    if (!c)
                        strcpy(d_432e_d32b, "Wants higher wages");
                    d_61eb_da0a = -1;
                    d_61eb_d780 = 6;
                }
            }
        }
        if (d_432e_45de[player].f16) {
            if (!c)
                strcpy(d_432e_d32b, "Feels he's been fined unfairly");
            d_61eb_da0a = -1;
            d_61eb_d780 = 7;
        }
    }
    return d_61eb_da0a;
}

/* is the player one of the players abroad (1000..) */
char f_1a83_6b4c(int16_t player)
{
    if ((uint16_t)player >= 1000 && d_61eb_d590 + 999 >= (uint16_t)player)
        return -1;
    return 0;
}

/* is the player's club outside 141..212 */
char f_1a83_6b6e(int16_t player)
{
    if (d_28d4_1958[18][player] <= 140)
        return -1;
    if (d_28d4_1958[18][player] >= 213)
        return -1;
    return 0;
}

/* the wage a player asks of a club */
int16_t f_1a83_6b9e(int16_t player, int16_t club)
{
    unsigned char rep, level;
    unsigned char a = club < 38 ? f_1a83_2b0c(club) : 16.0;
    float v;
    float t[4] = { 1.0, 0.7, 0.4, 0.3 };

    rep = d_3334_0000[18][player];
    d_61eb_d800 = (d_28d4_1958[0][player] * 4 + rep) / 5;
    level = f_215d_1343(f_215d_13af(19, d_61eb_d800 / 10), 0);
    v = a * 0.14 * (d_28cd_0000[level] * 400.0) * t[club < 38 ? f_1a83_6d8b(club) : 0];
    v = v * (d_28d4_1958[17][player] / 100.0 + 1);
    if (d_432e_45de[player].f28)
        v = v * 1.3;
    d_61eb_d802 = (int16_t)(v / 50.0) * 50;
    d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
    if (d_61eb_dbb8[4][player] > d_61eb_d802 && d_28d4_1958[17][player] < 30)
        d_61eb_d802 = d_61eb_dbb8[4][player];
    return d_61eb_d802;
}

/* waits up to 10 ticks for a key or a click */
char f_1a83_6d2f(void)
{
    char r = 0;
    int32_t t;

    t = f_215d_0e27();
    do {
        if (f_215d_0c20() > 0)
            r = -1;
    } while (f_215d_0e27() - t < 10 && !r);
    return r;
}

/* the number of clubs in a division: 18 in Serie A, 20 in Serie B */
unsigned char f_1a83_6d76(unsigned char div)
{
    return div == 0 ? 18 : 20;
}

/* the division of a club: 0 for Serie A (0-17), 1 for Serie B */
unsigned char f_1a83_6d8b(unsigned char team)
{
    return team <= 17 ? 0 : 1;
}
