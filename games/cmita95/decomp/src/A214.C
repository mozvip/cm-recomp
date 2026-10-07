/* @at a214:0000 */
/* @data 61eb:5e68 */
/* @module */

/* Overlay a214. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <stdlib.h>
#include <dos.h>
#include <ctype.h>
#pragma option -O-

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_a214_0000(int player, int mode);
void f_a214_07c3(int team);
void f_a214_164f(char a);
char far *f_a214_19b6(int a, int b);
int f_a214_1a52(void);
void f_a214_1abc(void);
void f_a214_1bc8(void);
void f_a214_1bf0(void);
void f_a214_1c54(int p);
void f_a214_2db7(void);
void f_a214_2e56(void);
void f_a214_2ea7(void);
int f_a214_32ea(int p);
int f_a214_3501(int p);
void f_a214_35d3(void);
void f_a214_3d33(void);
void f_a214_3e5f(void);
void f_a214_4036(void);
void f_a214_4120(int player, int team, char buy);
void f_a214_510d(int p);

void f_1a83_5ccd(void);
void f_1a83_5ce1(void);
void f_1a83_48f9(char far *title);
char far *f_1a83_4485(int player);
char f_1a83_6b4c(int player);
void f_1a83_3450(float x, float y, int bg, int fg, int w, char far *s);
void f_1a83_3c08(float x, float y, int bg, int fg, int w, char far *s);
void f_1a83_3347(int x, int y, int colour, char far *s);
void f_1a83_0007(float x, int team, char far *title);
void f_1a83_4d96(int a, float x, float y, int c, int d, int e, char far *s);
void f_1a83_5117(int a, char b);
int f_1a83_5296(int a);
void f_1a83_54f9(int team);
char f_1a83_2ad4(int x);
int f_1a83_440f(int team);
char far *f_1a83_45b4(int player);
char far *f_1a83_4686(int manager, char full);
char far *f_1a83_47e8(int n);
char far *f_1a83_4876(int division, char full);
unsigned char f_1a83_6d8b(unsigned char team);
void f_215d_088c();
void f_215d_08aa(int x1, int y1, int x2, int y2);
void f_215d_13f1(void far *a, void far *b, int n);
void f_215d_0b01();
long f_215d_135c(long a, long b);
void far *f_215d_1629(int handle, int page);
long f_9f8d_1ec1(int x);
int f_9f8d_0000(int x);
char far *f_93a1_63d8(int round);
char far *f_93a1_64b0(int round, int cup);
void f_9a9e_0000(int team);
void f_93a1_57bd(int team);
void f_93a1_482d(int team);
struct label { int x, y; char far *s; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
extern unsigned char far d_28d4_1958[][1500];
extern unsigned char far d_3334_0000[][1500];
extern int far d_28d4_081c[][26];
extern struct flags_w far d_432e_45de[];
extern unsigned char far d_3334_be02[];
extern unsigned char far d_432e_1a96[];
extern int far d_3334_ca6e[];
extern long far d_3334_cc82[][38];
extern long far d_3334_ce4a[];
extern unsigned char far d_3334_bdda[];
extern unsigned char far d_3334_c802[];
extern unsigned char far d_3334_bea2[];
extern unsigned char far d_3334_beca[];
extern unsigned char far d_3334_bf42[][40];
extern unsigned char far d_3334_bf92[];
extern unsigned char far d_3334_bfba[];
extern unsigned char far d_3334_c73a[];
extern unsigned char far d_432e_1f9e[][140];
extern unsigned char far d_432e_22e6[];
extern unsigned char far d_432e_23fe[];
extern unsigned char far d_432e_248a[];
extern unsigned char far d_432e_2516[];
extern unsigned char far d_432e_25a2[];
extern char far d_432e_d995[][6];
extern char far d_432e_d996[][6];
extern char far d_432e_dc15[];
extern char far d_432e_ea93[];
extern char far d_432e_eae3[];
extern char far d_432e_dd5f[];
extern char far d_432e_ddaf[];
extern char far d_432e_c125[];
extern char far d_432e_bf45[];
extern char far * far d_53fc_0000[];
extern char near *d_61eb_b0ec[];
extern char near *d_61eb_b460[];
extern int (far *d_61eb_dbb8)[1500];
extern char d_61eb_d9c8;
extern char d_61eb_d9c4;
extern char d_61eb_d9c2;
extern int d_61eb_dc4e;
extern int d_61eb_d5c6;
extern int d_61eb_d5f0;
extern int d_61eb_d5ca;
extern int d_61eb_d95e;
extern int d_61eb_d960;
extern int d_61eb_d962;
extern int d_61eb_d964;
extern int d_61eb_d966;
extern int d_61eb_d968;
extern int d_61eb_d96a;
extern int d_61eb_d96c;
extern int d_61eb_d96e;
extern int d_61eb_d970;
extern int d_61eb_d972;
extern int d_61eb_d8a4;
extern int d_61eb_d77a;
extern int d_61eb_d8d6;
extern int d_61eb_d5aa;
extern int d_61eb_d858;
extern int d_61eb_d840;
extern int d_61eb_d7b0;
extern int d_61eb_d89a;
extern int d_61eb_d8a8;
extern float d_61eb_da71;
extern int d_61eb_d66c;
extern int d_61eb_d5fc;
extern int d_61eb_d5d8;
extern float d_61eb_da5d;
extern int d_61eb_d61a;
extern int d_61eb_d59a;
extern int d_61eb_d59c;
extern int d_61eb_d5e2;
extern int d_61eb_d59e;
extern int d_61eb_d5b8;
char far *unmapped_f_9c01_6630(int round);
char far *unmapped_f_9c01_6728(int round);
extern unsigned char far d_28d4_82d0[];
extern unsigned char far d_432e_00a4[];
extern long far d_432e_cda2[];
extern unsigned char far d_432e_0052[];
extern unsigned char far d_432e_1626[];
extern unsigned char far d_432e_01ec[];
extern unsigned char far d_432e_bf42[][82];
extern unsigned char far d_432e_03d8[];
extern unsigned char far d_432e_042a[];
extern unsigned char far d_432e_147c[];
extern unsigned char far unmapped_d_4512_8b54[];
extern unsigned char far unmapped_d_4512_8be0[];
extern char far d_5313_d995[][6];
extern char far d_5313_d996[][6];
extern char far d_5313_dc15[];
extern char far d_5313_ea93[];
extern char far d_5313_eae3[];
extern char far d_5313_dd5f[];
extern char far d_5313_ddaf[];
extern char far d_5313_c125[];
extern char far d_5313_bf45[];
extern char far * far d_53fc_bce0[];
extern unsigned char far d_3334_cee2[];
char far *f_1a83_438a(int n, char far *s);
char far *f_1a83_462c(int player);
char far *f_1a83_477e(int player);
extern long d_61eb_db09;
extern int d_61eb_d976;
extern int d_61eb_d974;
extern int d_61eb_d75a;
extern int d_61eb_d650;
extern int d_61eb_d602;
extern int d_61eb_d5f6;
extern int d_61eb_d5e4;
extern long far *d_61eb_dbb0;
extern int d_61eb_dc4a;
void f_215d_01c2(void);
void f_215d_0465(void);
void f_215d_0978(void);
char far *f_215d_0f2d(void);
void f_215d_19eb();
extern int d_61eb_dc5e;
extern long (far *d_61eb_dbc0)[38];
extern float d_61eb_da55;
extern char d_61eb_da41;
int f_1a83_1dd9(int player);
long f_1a83_01d6(int p, int n);
long f_1a83_0d8f(long v);
char far *f_1a83_0e35(long amount);
long f_8e0f_138d(int player);
char f_1a83_6728(int player, char c);
char far *f_1a83_2d52(int x, char c);
extern long d_61eb_db05;
extern char d_61eb_da0a;
extern int d_61eb_d95a;
extern int d_61eb_d958;
extern int d_61eb_d956;
extern int d_61eb_d780;
extern unsigned char far d_432e_efe4[];
void f_1a83_2da6(int n, char far *title, char far *items);
void f_1a83_3122(int last);
char far *f_1a83_3300(int x);
float f_1a83_2b0c(int x);
void f_9f8d_0073(int a, int b);
void f_9a9e_46c0(int n);
extern char d_61eb_da40;
extern char d_61eb_da3f;
extern char d_61eb_da3a;
extern int d_61eb_d938;
extern int d_61eb_d936;
extern int d_61eb_d934;
extern int d_61eb_d932;
extern int d_61eb_d7be;
extern int d_61eb_d674;
extern int d_61eb_d654;
extern int d_61eb_d652;
extern int d_61eb_d5f2;
extern int d_61eb_d5de;
extern int d_61eb_d5dc;
extern char near *d_61eb_b140[];
extern unsigned char far d_432e_0000[][82];
void f_9f8d_03ac(int a, int b, int c);
void f_9f8d_0670(int t);
void f_9f8d_08a7(int a, int b);
int f_215d_13af(int a, int b);
char f_1a83_2387(int);
void f_ab30_5ded(char a);
void f_ab30_5f57(char a, int i, int n);
extern int d_61eb_d5a4;
extern int d_61eb_d85c;
extern int d_61eb_d7ba;
extern int d_61eb_d68c;
extern int d_61eb_d92c;
extern int d_61eb_d92e;
extern int d_61eb_d93e;
extern int d_61eb_d940;
extern int d_61eb_d5a2;
extern int d_61eb_d6be;
extern int unmapped_d_69da_d9b2;
extern int unmapped_d_69da_d9b0;
extern int d_61eb_d610;
extern int d_61eb_d5bc;
extern int d_61eb_d5be;
extern int d_61eb_d5c0;
extern int d_61eb_dc4c;
extern int d_61eb_dc54;
extern long d_61eb_db95;
extern char d_61eb_da3d;
extern int far *d_61eb_dbb4;
extern int far *d_61eb_dbc4;
extern unsigned char far d_3334_bf6a[];
char far *f_215d_0e90(char far *s);
char far *f_215d_0f63(char far *s, unsigned n);
char f_1a83_65a9(char foreign);
char f_1a83_2c20(int x);
void f_9f8d_1379(char all);
void f_9f8d_14a0(char redraw);
void f_1a83_0bb7(char far *s);
extern unsigned char far d_432e_0552[];
extern char d_61eb_d9d5;
extern char d_61eb_d9ca;
extern int d_61eb_d9ac;
extern int d_61eb_d980;
extern int d_61eb_d954;
extern int d_61eb_d6ca;
extern int d_61eb_d6c8;
extern int d_61eb_d5ee;
extern int d_61eb_d95c;
extern float far d_432e_365e[][4];
extern int far d_432e_364e[][4];
extern long far d_432e_3686[];
extern int far d_432e_367e[];
extern int d_61eb_d58e;
extern int d_61eb_dc50;
extern char far *d_61eb_dbbc;
void f_215d_0595(char reset);
void f_215d_0395(int i, char r, char g, char b);
extern char far d_432e_eb83[];
extern char far d_432e_c279[];
extern unsigned char far d_53fc_09c0[][502];
char f_ab30_482b(int player);
extern int far d_3334_a410[];
extern char far * far d_53fc_0371[];
extern char far * far d_53fc_0650[];
extern int d_61eb_dc58;
extern unsigned char (far *d_61eb_dbcc)[1500];
extern char far d_432e_e903[];
long f_215d_0d96(long n);
extern unsigned char far d_3334_d680[];
extern unsigned char far d_3334_db94[];
extern unsigned char far d_53fc_0b90[];
extern unsigned char far d_53fc_0d86[];
extern unsigned char far d_53fc_778e[][140];
extern char near *d_61eb_b13c[];
extern char d_61eb_da4d;
void f_1a83_5844(int team, char far *title, char far *text);
int f_ab30_0000(int a, char team);
void f_ab30_5c8d(void);
extern int far d_432e_c91c[][80];
extern long far d_432e_cdc2[];
extern long far d_432e_cf02[];
extern unsigned char far d_432e_0640[];
extern int far d_53fc_138e[][2][98];
extern unsigned char d_61eb_dba1;
extern char d_61eb_da4f;
extern int d_61eb_d590;
extern int d_61eb_d62a;
extern int d_61eb_dc52;
extern char (far *d_61eb_dbd8)[101];
int f_87dc_1a90(int team, int p);
extern char far d_5313_df3f[];
extern char far d_5313_c035[];
extern char far d_5313_e07f[];
extern char far d_5313_e0cf[];
extern char far d_5313_e11f[];
extern char far d_5313_e16f[];
extern char far d_5313_e1bf[];
extern char far d_5313_d855[];
extern char far d_5313_e02f[];
extern char far d_5313_e57f[];
extern char far d_5313_d55d[];
extern char far d_5313_cf1b[];
extern char far d_5313_e5cf[];
extern char far d_5313_e61f[];
extern char far d_5313_e66f[];
extern char far d_5313_e6bf[];
extern char far d_5313_e70f[];
extern char far d_5313_e773[];
extern char far d_5313_e7c3[];
extern char far d_5313_e813[];
extern char far d_5313_e863[];
extern char far d_5313_e8b3[];
extern char far d_5313_e953[];
extern char far d_5313_e4df[];
extern char far d_5313_e9f3[];
extern char far d_5313_e52f[];
extern char far d_5313_e20f[];
extern char far d_5313_e25f[];
extern char far d_5313_e2af[];
extern char far d_5313_e2ff[];
extern char far d_5313_e34f[];
extern char far d_5313_e39f[];
extern char far d_5313_e3ef[];
extern char far d_5313_e43f[];
extern char far d_5313_e48f[];
extern char far d_5313_d32b[];
extern char far d_5313_ea43[];
extern int far d_432e_38aa[];
extern unsigned char far d_432e_d16c[];
extern unsigned char far d_432e_d3f6[];
struct transfers { int in[6], out[6]; /* the players */ unsigned char in_club[6], out_club[6]; /* the other club */ long in_fee[6], out_fee[6]; /* the fee, 1 for a loan */ unsigned char n_in, n_out; /* how many so far */ };
extern int far d_28d4_bc8c[];
extern int far d_28d4_106c[];
extern int far d_28d4_1134[];
extern unsigned char far d_432e_c782[];
extern unsigned char far d_432e_c8ca[];
extern unsigned char far d_432e_0668[];
extern int far d_432e_066e[][16];
extern unsigned char far d_432e_26ba[];
extern int far d_432e_35f6[];
extern struct transfers far d_5313_69ae[];
extern unsigned char far d_5313_861e[][766];
extern unsigned char far d_5313_b5eb[][80];
extern char far d_5313_ed13[][82][5];
extern unsigned char far d_432e_1582[];
extern char far d_5313_dfdf[];
extern char far d_5313_0df7[];
extern unsigned char far d_432e_cee2[];
extern unsigned char far d_3334_d16c[];
extern unsigned char far d_3334_d3f6[];
extern unsigned char far d_3334_efe4[];
extern unsigned char far d_3334_bdb2[][40];
extern char far d_5313_eb83[];
extern char far d_5313_c279[];
extern char far d_432e_df3f[];
extern char far d_432e_c035[];
extern char far d_432e_e07f[];
extern char far d_432e_e0cf[];
extern char far d_432e_e11f[];
extern char far d_432e_e16f[];
extern char far d_432e_e1bf[];
extern char far d_432e_d855[];
extern char far d_432e_e02f[];
extern char far d_432e_e57f[];
extern char far d_432e_d55d[];
extern char far d_432e_cf1b[];
extern char far d_432e_e5cf[];
extern char far d_432e_e61f[];
extern char far d_432e_e66f[];
extern char far d_432e_e6bf[];
extern char far d_432e_e70f[];
extern char far d_432e_e773[];
extern char far d_432e_e7c3[];
extern char far d_432e_e813[];
extern char far d_432e_e863[];
extern char far d_432e_e8b3[];
extern char far d_432e_e953[];
extern char far d_432e_e4df[];
extern char far d_432e_e9f3[];
extern char far d_432e_e52f[];
extern char far d_432e_e20f[];
extern char far d_432e_e25f[];
extern char far d_432e_e2af[];
extern char far d_432e_e2ff[];
extern char far d_432e_e34f[];
extern char far d_432e_e39f[];
extern char far d_432e_e3ef[];
extern char far d_432e_e43f[];
extern char far d_432e_e48f[];
extern char far d_432e_d32b[];
extern char far d_432e_ea43[];
char f_1a83_2448(int);
unsigned char f_1a83_6d76(int div);
extern int far d_28d4_0000[];
extern int far d_3334_c8f2[][38];
extern long far d_3334_cd1a[];
extern long far d_3334_cdb2[];
extern unsigned char far d_3334_c82a[];
extern unsigned char far d_3334_c8ca[];
extern char far d_432e_ed13[][40][5];
extern struct transfers far d_432e_681e[];
extern unsigned char far d_432e_b73b[][38];
extern unsigned char d_61eb_dba3;
extern int d_61eb_d5ba;
char f_1a83_6b6e(int player);
extern unsigned char far d_3334_c0fa[];
extern unsigned char far d_3334_c7b2[];
extern char far d_432e_dfdf[];
extern char far d_5313_0e10[];


/* the career screen's buttons */
static struct label d_61eb_5e68[] = {
    {263, 50, "Seasons"}, {272, 84, "Apps"}, {269, 118, "Goals"}, {272, 152, "Av R"}
};

void f_a214_0000(int player, int mode)
{
    struct label far *q;
    char buf[320];

    f_1a83_5ccd();
    f_1a83_48f9("");
    sprintf(buf, " %s - aged %d", f_1a83_4485(player), d_28d4_1958[17][player]);
    if (f_1a83_6b4c(player) == 0) {
        if (d_3334_0000[7][player] < 255)
            f_1a83_3c08(1.25, 1.25, d_3334_be02[d_3334_0000[7][player]] / 16,
                        d_3334_be02[d_3334_0000[7][player]] % 16, 0, buf);
        else
            f_1a83_3c08(1.25, 1.25, d_3334_be02[d_28d4_1958[18][player]] / 16,
                        d_3334_be02[d_28d4_1958[18][player]] % 16, 0, buf);
    } else
        f_1a83_3c08(1.25, 1.25, 1, 4, 0, buf);
    f_1a83_3450(1.125, 5.25, 1, 8, 0, " YEAR ");
    f_1a83_3450(5.875, 5.25, 1, 8, 100, " CLUB");
    f_1a83_3450(18.625, 5.25, 1, 8, 0, " AP ");
    f_1a83_3450(21.875, 5.25, 1, 8, 0, " GL ");
    f_1a83_3450(25.125, 5.25, 1, 8, 0, " AV R ");
    d_61eb_d5c6 = 6;
    d_61eb_d5f0 = 4;
    d_61eb_d5ca = 12;
    d_61eb_d95e = 0;
    d_61eb_d960 = 0;
    d_61eb_d962 = 0;
    d_61eb_d964 = 0;
    if (d_61eb_d8a4 == 0) {
        f_1a83_3450(1.125, 4.0, 0, 6, 0x130, " NO LEAGUE CAREER TO DATE");
    } else {
        d_61eb_d966 = -1;
        d_61eb_d968 = -1;
        if (d_61eb_d8a4 > 22) {
            d_61eb_d77a = d_61eb_d8a4 - 21;
            d_61eb_d96e = d_61eb_d77a - 1;
        } else {
            d_61eb_d77a = 1;
            d_61eb_d96e = d_61eb_d8a4;
        }
        d_61eb_d8d6 = d_432e_d996[d_61eb_d77a - 1][0] + 1900;
        sprintf(buf, " FOOTBALL LEAGUE CAREER SINCE %d", d_61eb_d8d6);
        f_1a83_3450(1.125, 4.0, 0, 6, 0x130, buf);
        d_61eb_d5aa = d_61eb_d77a;
        d_61eb_d970 = 1;
        do {
            unsigned char far *p;

            p = (unsigned char far *)d_432e_dc15;
            memcpy(d_432e_dc15, &d_432e_d995[d_61eb_d5aa - 1][1], 6);
            d_432e_dc15[6] = 0;
            d_61eb_d8d6 = d_432e_dc15[0] + 1900;
            if (d_61eb_d8d6 != d_61eb_d966) {
                d_61eb_d95e++;
                d_61eb_d966 = d_61eb_d8d6;
            }
            d_61eb_d858 = (unsigned char)d_432e_dc15[1] < 140
                ? d_432e_1a96[(unsigned char)d_432e_dc15[1]] : (unsigned char)d_432e_dc15[1];
            d_61eb_d840 = d_432e_dc15[2];
            d_61eb_d960 += d_61eb_d840;
            d_61eb_d7b0 = d_432e_dc15[3];
            d_61eb_d962 += d_61eb_d7b0;
            d_61eb_d89a = (p[4] << 8) | p[5];
            d_61eb_d964 += d_61eb_d89a;
            if ((mode == 0 && d_61eb_d970 < 17) || (mode == 1 && d_61eb_d970 > 16)) {
                sprintf(buf, " %d ", d_61eb_d8d6);
                f_1a83_3450(1.125, d_61eb_d5c6 + 0.25, 6, 3, 0, buf);
                if (d_61eb_d858 != d_61eb_d968) {
                    if (d_61eb_d858 <= 37)
                        sprintf(buf, " %.15s", (char far *)d_61eb_b0ec[d_61eb_d858]);
                    else if (d_61eb_d858 <= 139)
                        sprintf(buf, " %.15s", (char far *)d_61eb_b460[d_61eb_d858]);
                    else
                        sprintf(buf, " <%.13s>", d_53fc_0000[d_61eb_d858 - 140]);
                    d_61eb_d968 = d_61eb_d858;
                } else
                    strcpy(buf, "");
                f_1a83_3450(5.875, d_61eb_d5c6 + 0.25, 1, d_61eb_d5f0, 100, buf);
                sprintf(buf, " %02d ", d_61eb_d840);
                f_1a83_3450(18.625, d_61eb_d5c6 + 0.25, 1, 2, 0, buf);
                sprintf(buf, " %02d ", d_61eb_d7b0);
                f_1a83_3450(21.875, d_61eb_d5c6 + 0.25, 1, 2, 0, buf);
                sprintf(buf, " %s ", f_a214_19b6(d_61eb_d840, d_61eb_d89a));
                f_1a83_3450(25.125, d_61eb_d5c6 + 0.25, 1, 9, 0, buf);
                f_215d_13f1(&d_61eb_d5f0, &d_61eb_d5ca, 2);
                d_61eb_d5c6++;
            }
            d_61eb_d970++;
            d_61eb_d9c8 = d_61eb_d5aa == d_61eb_d96e;
            if (d_61eb_d5aa == 22)
                d_61eb_d5aa = 1;
            else
                d_61eb_d5aa++;
        } while (!d_61eb_d9c8);
    }
    while (d_61eb_d5c6 < 22) {
        f_1a83_3450(1.125, d_61eb_d5c6 + 0.25, 6, 3, 0, "      ");
        f_1a83_3450(5.875, d_61eb_d5c6 + 0.25, 1, d_61eb_d5f0, 100, "");
        f_1a83_3450(18.625, d_61eb_d5c6 + 0.25, 1, 2, 0, "    ");
        f_1a83_3450(21.875, d_61eb_d5c6 + 0.25, 1, 2, 0, "    ");
        f_1a83_3450(25.125, d_61eb_d5c6 + 0.25, 1, 9, 0, "      ");
        f_215d_13f1(&d_61eb_d5f0, &d_61eb_d5ca, 2);
        d_61eb_d5c6++;
    }
    f_1a83_5ce1();
    for (d_61eb_d5c6 = 36, q = d_61eb_5e68; d_61eb_d5c6 <= 138; d_61eb_d5c6 += 34, q++) {
        f_215d_088c(24);
        f_215d_08aa(238, d_61eb_d5c6, 312, d_61eb_d5c6 + 15);
        f_1a83_3347(266, d_61eb_d5c6 + 7, 1, "Career");
        f_1a83_3347(q->x, q->y, 1, q->s);
    }
    sprintf(buf, "   %03d", d_61eb_d95e);
    f_1a83_3c08(30.0, 7.25, 0, 1, 71, buf);
    sprintf(buf, "   %03d", d_61eb_d960);
    f_1a83_3c08(30.0, 11.5, 0, 1, 71, buf);
    sprintf(buf, "   %03d", d_61eb_d962);
    f_1a83_3c08(30.0, 15.75, 0, 1, 71, buf);
    sprintf(buf, "   %.3s", f_a214_19b6(-d_61eb_d960, d_61eb_d964));
    f_1a83_3c08(30.0, 20.0, 0, 1, 71, buf);
}

void f_a214_07c3(int team)
{
    int who[3];
    char buf[320];
    char far *names[7] = { "PLD", "WON", "DRN", "LST", "FOR", "AGG", "PTS" };
    float best[3];
    unsigned i;
    int j;

    do {
        f_1a83_5ccd();
        f_1a83_0007(1.25, team, "Info");
        f_215d_0b01(1);
        f_215d_088c(16);
        f_215d_08aa(12, 28, 160, 86);
        f_215d_08aa(12, 128, 316, 170);
        f_215d_08aa(168, 28, 316, 86);
        f_215d_08aa(12, 94, 316, 120);
        f_215d_088c(20);
        f_215d_08aa(8, 24, 156, 82);
        f_215d_088c(19);
        f_215d_08aa(8, 124, 312, 166);
        f_215d_088c(20);
        f_215d_08aa(164, 24, 312, 82);
        f_215d_088c(30);
        f_215d_08aa(8, 90, 312, 116);
        f_1a83_3450(1.375, 4.0, 0, 1, 144, "        General");
        f_1a83_3450(1.375, 5.0, 1, 12, 71, " Manager");
        sprintf(buf, " %.10s", f_1a83_4686(d_3334_ca6e[team], -1));
        f_1a83_3450(10.5, 5.0, 1, 12, 71, buf);
        f_1a83_3450(1.375, 6.0, 1, 12, 71, " Board");
        sprintf(buf, " %d%%", d_3334_bea2[team]);
        f_1a83_3450(10.5, 6.0, 1, 12, 71, buf);
        f_1a83_3450(1.375, 7.0, 1, 12, 71, " Capacity");
        sprintf(buf, " %ld (%d)", d_3334_bdda[team] * 1000L, d_3334_c802[team]);
        f_1a83_3450(10.5, 7.0, 1, 12, 71, buf);
        f_1a83_3450(1.375, 8.0, 1, 12, 71, " Cash");
        if (d_61eb_d9c4 != 0 || f_1a83_2ad4(team))
            sprintf(buf, " %ld", f_215d_135c(d_3334_cc82[0][team] - f_9f8d_1ec1(team), 0L));
        else
            strcpy(buf, " Unknown");
        f_1a83_3450(10.5, 8.0, 1, 12, 71, buf);
        f_1a83_3450(1.375, 9.0, 1, 12, 71, " Ints");
        d_61eb_d96a = 0;
        d_61eb_d96c = 0;
        for (i = 0; i < 3; i++)
            best[i] = -1;
        for (j = 0; j <= d_3334_beca[team] - 1; j++) {
            d_61eb_d5b8 = d_28d4_081c[team][j];
            if (d_432e_45de[d_61eb_d5b8].f18) {
                if (d_432e_45de[d_61eb_d5b8].f19)
                    d_61eb_d96c++;
                else
                    d_61eb_d96a++;
            }
            d_61eb_d840 = d_3334_0000[12][d_61eb_d5b8];
            if (d_61eb_d840 > 0) {
                d_61eb_d7b0 = d_3334_0000[13][d_61eb_d5b8];
                d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
                d_61eb_da71 = (float)d_61eb_dbb8[2][d_61eb_d5b8] / d_61eb_d840;
                d_61eb_d8a8 = d_3334_0000[2][d_61eb_d5b8] - d_3334_0000[2][d_61eb_d5b8] % 5;
                if (d_61eb_d7b0 > best[0] || best[0] == -1) {
                    best[0] = d_61eb_d7b0;
                    who[0] = d_61eb_d5b8;
                }
                if (d_61eb_da71 > best[1] || best[1] == -1) {
                    best[1] = d_61eb_da71;
                    who[1] = d_61eb_d5b8;
                }
                if (d_61eb_d8a8 > best[2] || best[2] == -1) {
                    best[2] = d_61eb_d8a8;
                    who[2] = d_61eb_d5b8;
                }
            }
        }
        sprintf(buf, " %d", d_61eb_d96a);
        f_1a83_3450(10.5, 9.0, 1, 12, 71, buf);
        f_1a83_3450(1.375, 10.0, 1, 12, 71, " U-21s");
        sprintf(buf, " %d", d_61eb_d96c);
        f_1a83_3450(10.5, 10.0, 1, 12, 71, buf);
        f_1a83_3450(20.875, 4.0, 0, 1, 144, "       CUP ROUNDS");
        f_1a83_3450(20.875, 5.0, 1, 12, 144, "      ITALIAN CUP");
        strcpy(d_432e_ea93, "Draw Not Made");
        if (d_432e_22e6[team] > 0) {
            strcpy(d_432e_eae3, f_93a1_63d8(d_432e_22e6[team]));
            strcpy(d_432e_ea93, d_432e_dd5f);
        }
        sprintf(buf, "%*s", (72 - strlen(d_432e_ea93) * 3) / 6 + strlen(d_432e_ea93), d_432e_ea93);
        f_1a83_3450(20.875, 6.0, 6, 12, 144, buf);
        d_61eb_d66c = 0;
        if (d_432e_23fe[team] > 0)
            d_61eb_d66c = 8;
        else if (d_432e_248a[team] > 0)
            d_61eb_d66c = 9;
        else if (d_432e_2516[team] > 0)
            d_61eb_d66c = 10;
        else if (d_432e_25a2[team] > 0)
            d_61eb_d66c = 11;
        if (d_61eb_d66c > 0) {
            strcpy(d_432e_eae3, f_93a1_64b0(d_432e_1f9e[d_61eb_d66c][team], d_61eb_d66c - 5));
            sprintf(d_432e_c125, "THE %s", d_432e_ddaf);
            sprintf(buf, "%*s", (72 - strlen(d_432e_c125) * 3) / 6 + strlen(d_432e_c125), d_432e_c125);
            f_1a83_3450(20.875, 7.0, 1, 12, 144, buf);
            strcpy(d_432e_ea93, "Draw Not Made");
            if (d_432e_1f9e[d_61eb_d66c][team] > 0)
                strcpy(d_432e_ea93, d_432e_dd5f);
            sprintf(buf, "%*s", (72 - strlen(d_432e_ea93) * 3) / 6 + strlen(d_432e_ea93), d_432e_ea93);
            f_1a83_3450(20.875, 8.0, 6, 12, 144, buf);
        } else {
            f_1a83_3450(20.875, 7.0, 1, 12, 144, "");
            f_1a83_3450(20.875, 8.0, 6, 12, 144, "");
        }
        f_1a83_3450(20.875, 9.0, 1, 12, 144, "");
        f_1a83_3450(20.875, 10.0, 6, 12, 144, "");
        f_1a83_3450(1.375, 12.25, 1, 2, 300, "                  League Record");
        d_61eb_d5fc = f_1a83_440f(team);
        f_1a83_3450(1.375, 13.25, 0, 1, 34, " SER");
        sprintf(buf, " %s", f_1a83_4876(f_1a83_6d8b(d_61eb_d5fc) + 1, 3));
        f_1a83_3450(1.375, 14.25, 1, 4, 34, buf);
        f_1a83_3450(5.875, 13.25, 0, 1, 33, " POS");
        sprintf(buf, " %s", f_1a83_47e8(d_61eb_d5fc < 18 ? d_61eb_d5fc + 1 : d_61eb_d5fc - 17));
        f_1a83_3450(5.875, 14.25, 1, 4, 33, buf);
        for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 6; d_61eb_d5d8++) {
            d_61eb_da5d = d_61eb_d5d8 * 4.125 + 10.25;
            sprintf(buf, " %s", names[d_61eb_d5d8]);
            f_1a83_3450(d_61eb_da5d, 13.25, 0, 6, 31, buf);
            if (d_61eb_d5d8 == 0)
                d_61eb_d61a = d_61eb_d5fc < 18 ? d_61eb_d59a : d_61eb_d59c;
            else if (d_61eb_d5d8 == 1)
                d_61eb_d61a = d_3334_bf92[team];
            else if (d_61eb_d5d8 == 2)
                d_61eb_d61a = (d_61eb_d5fc < 18 ? d_61eb_d59a : d_61eb_d59c) - d_3334_bf92[team] - d_3334_bfba[team];
            else if (d_61eb_d5d8 == 6)
                d_61eb_d61a = f_9f8d_0000(d_61eb_d5fc);
            else
                d_61eb_d61a = d_3334_bf42[d_61eb_d5d8][team];
            sprintf(buf, "%3d", d_61eb_d61a);
            f_1a83_3450(d_61eb_da5d, 14.25, 1, 4, 31, buf);
        }
        f_1a83_3450(1.375, 16.5, 0, 1, 300, "                   This season");
        f_1a83_3450(1.375, 17.5, 0, 6, 149, " Average attendance");
        strcpy(d_432e_c125, "");
        if (d_3334_c73a[team] > 0)
            sprintf(d_432e_c125, " %ld", d_3334_ce4a[team] / d_3334_c73a[team]);
        f_1a83_3450(20.25, 17.5, 0, 6, 149, d_432e_c125);
        f_1a83_3450(1.375, 18.5, 0, 6, 149, " Top Goalscorer");
        strcpy(d_432e_c125, "");
        if (best[0] > 0) {
            strcpy(buf, f_1a83_45b4(who[0]));
            buf[18] = 0;
            sprintf(d_432e_c125, " %s - %d", buf, (int)best[0]);
        }
        f_1a83_3450(20.25, 18.5, 0, 6, 149, d_432e_c125);
        f_1a83_3450(1.375, 19.5, 0, 6, 149, " Best Average Rating");
        strcpy(d_432e_c125, "");
        if (best[1] > 0) {
            sprintf(d_432e_bf45, "%4.2f", best[1]);
            strcpy(buf, f_1a83_45b4(who[1]));
            buf[16] = 0;
            sprintf(d_432e_c125, " %s - %s", buf, d_432e_bf45);
        }
        f_1a83_3450(20.25, 19.5, 0, 6, 149, d_432e_c125);
        f_1a83_3450(1.375, 20.5, 0, 6, 149, " Worst Discipline");
        strcpy(d_432e_c125, "");
        if (best[2] > 0) {
            strcpy(buf, f_1a83_45b4(who[2]));
            buf[18] = 0;
            sprintf(d_432e_c125, " %s - %d", buf, (int)best[2]);
        }
        f_1a83_3450(20.25, 20.5, 0, 6, 149, d_432e_c125);
        f_1a83_5ce1();
        f_1a83_4d96(2, 25.75, 1.125, 1, 2, 31, "PRNT");
        f_1a83_4d96(2, 30.25, 1.125, 1, 2, 31, "HIST");
        f_1a83_4d96(2, 34.75, 1.125, 1, 2, 31, "RECS");
        f_1a83_4d96(2, 1.25, 22.5, 1, 4, 301, "                 DONE");
        if (d_61eb_d9c2 == 0)
            f_1a83_54f9(1);
        do {
            d_61eb_d972 = d_61eb_d59e = f_1a83_5296(d_61eb_d5e2);
            if (d_61eb_d972 == 1) {
                f_9a9e_0000(team);
                f_1a83_5117(1, 0);
            }
        } while (d_61eb_d972 <= 0);
        if (d_61eb_d972 == 2)
            f_93a1_57bd(team);
        else if (d_61eb_d972 == 3)
            f_93a1_482d(team);
    } while (d_61eb_d972 != 4);
}

#pragma option -O-
void f_a214_164f(char a)
{
    unsigned i, j;
    register unsigned char c;
    unsigned char k, n;
    unsigned char used[2][2];

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            d_432e_365e[i][j] = 0;
    memset(d_432e_364e, -1, 16);
    memset(d_432e_3686, 0, 16);
    memset(d_432e_367e, -1, 8);
    memset(used, 0, 4);
    d_61eb_d974 = 3 - a * 17;
    do {
        for (d_61eb_d5b8 = 0; d_61eb_d5b8 <= d_61eb_d58e - 1; d_61eb_d5b8++) {
            d_61eb_d840 = d_3334_0000[a ? 0 : 21][d_61eb_d5b8];
            d_61eb_d5e4 = f_1a83_6d8b(d_28d4_1958[18][d_61eb_d5b8]);
            d_61eb_d602 = d_28d4_1958[17][d_61eb_d5b8] < 22;
            if (used[d_61eb_d602][d_61eb_d5e4] == 0 && d_61eb_d840 >= d_61eb_d974) {
                if (a) {
                    d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
                    d_61eb_d976 = (*d_61eb_dbb8)[d_61eb_d5b8];
                } else
                    d_61eb_d976 = d_3334_0000[0][22 * 1500 + d_61eb_d5b8];
                d_61eb_da71 = (float)d_61eb_d976 / d_61eb_d840;
                if (d_432e_365e[d_61eb_d602][d_61eb_d5e4] < d_61eb_da71) {
                    d_432e_364e[d_61eb_d602][d_61eb_d5e4] = d_61eb_d5b8;
                    d_432e_365e[d_61eb_d602][d_61eb_d5e4] = d_61eb_da71;
                }
            }
        }
        n = 0;
        for (c = 0; c <= 1; c++)
            for (k = 0; k <= 3; ++k)
                if (d_432e_364e[c][k] > -1) {
                    used[c][k] = 1;
                    n++;
                }
        d_61eb_d974--;
    } while (n < 8 && d_61eb_d974 > 1);
    for (d_61eb_d5f6 = 0; d_61eb_d5f6 <= d_61eb_d650 + 645; d_61eb_d5f6++) {
        if (d_3334_cee2[d_61eb_d5f6] < 0xff) {
            if (a) {
                d_61eb_dbb0 = f_215d_1629(d_61eb_dc4a, 0);
                d_61eb_db09 = d_61eb_dbb0[d_61eb_d5f6];
            } else {
                d_61eb_dbbc = f_215d_1629(d_61eb_dc50, 0);
                d_61eb_db09 = ((int far *)(d_61eb_dbbc + 2600))[d_61eb_d5f6];
            }
            d_61eb_d5e4 = f_1a83_6d8b(d_3334_cee2[d_61eb_d5f6]);
            if (d_432e_3686[d_61eb_d5e4] < d_61eb_db09) {
                d_432e_367e[d_61eb_d5e4] = d_61eb_d5f6;
                d_432e_3686[d_61eb_d5e4] = d_61eb_db09;
            }
        }
    }
}

char far *f_a214_19b6(int a, int b)
{
    char far *buf;

    buf = f_215d_0f2d();
    if (a == 0)
        strcpy(buf, "----");
    else if (a > 0)
        sprintf(buf, "%4.2f", (float)b / a);
    else if (a < 0)
        sprintf(buf, "%3.1f", (float)b / abs(a));
    return buf;
}

int f_a214_1a52(void)
{
    int m;

    m = 2;
    if (d_61eb_d9c4 == 0) {
        for (d_61eb_d5d8 = 646; d_61eb_d5d8 <= d_61eb_d650 + 645; d_61eb_d5d8++) {
            if (d_3334_cee2[d_61eb_d5d8] < 0xff) {
                d_61eb_d5e4 = f_1a83_6d8b(d_3334_cee2[d_61eb_d5d8]);
                if (d_61eb_d5e4 < m)
                    m = d_61eb_d5e4;
            }
        }
    }
    if (m == 2)
        m = 0;
    return m;
}

void f_a214_1abc(void)
{
    f_a214_1bc8();
    f_215d_0978();
    f_215d_0465();
    strcpy(d_432e_eb83, "");
    strcpy(d_432e_c279, "picture1.lbm");
    f_215d_0595(-1);
    f_a214_1bf0();
    d_53fc_09c0[1][318] = 0x60;
    d_53fc_09c0[2][318] = 0x01;
    d_53fc_09c0[1][319] = 0x13;
    d_53fc_09c0[2][319] = 0x12;
    d_53fc_09c0[1][320] = 0x54;
    d_53fc_09c0[2][320] = 0x46;
    d_53fc_09c0[1][321] = 0x03;
    d_53fc_09c0[2][321] = 0x31;
    d_53fc_09c0[1][322] = 0x14;
    d_53fc_09c0[2][322] = 0x12;
    d_53fc_09c0[1][323] = 0x14;
    d_53fc_09c0[2][323] = 0x46;
    d_53fc_09c0[1][324] = 0x31;
    d_53fc_09c0[2][324] = 0x06;
    d_53fc_09c0[1][325] = 0x1c;
    d_53fc_09c0[2][325] = 0x12;
    d_53fc_09c0[1][326] = 0x41;
    d_53fc_09c0[2][326] = 0x12;
    d_53fc_09c0[1][327] = 0x01;
    d_53fc_09c0[2][327] = 0x12;
    d_53fc_09c0[1][328] = 0x42;
    d_53fc_09c0[2][328] = 0x21;
    d_53fc_09c0[1][329] = 0x12;
    d_53fc_09c0[2][329] = 0x41;
}

void f_a214_1bc8(void)
{
    f_215d_01c2();
    f_215d_088c(0);
    f_215d_08aa(0, 0, 0x13f, 0xc7);
}

/* colours 16-31 of the palette, as RGB triples */
static unsigned char d_61eb_5ea4[] = {
    0, 0, 0, 15, 15, 15, 13, 0, 0, 0, 10, 4, 0, 4, 10, 0, 14, 14, 14, 14, 6, 12, 0, 14,
    10, 10, 10, 14, 8, 0, 2, 2, 8, 6, 0, 6, 2, 8, 12, 7, 0, 1, 7, 7, 7, 0, 8, 2
};

void f_a214_1bf0(void)
{
    int r, g, b;
    unsigned char far *p;

    p = d_61eb_5ea4;
    for (d_61eb_d75a = 16; d_61eb_d75a <= 31; d_61eb_d75a++) {
        r = *p++;
        g = *p++;
        b = *p++;
        f_215d_0395(d_61eb_d75a, r, g, b);
    }
}

#pragma option -O-
void f_a214_1c54(int p)
{
    char buf[320];
    int m;

    sprintf(buf, "%d years", d_28d4_1958[17][p]);
    strcpy(d_432e_df3f, f_1a83_438a(12, buf));
    if (f_1a83_6b4c(p) == 0) {
        if (d_3334_0000[7][p] < 255) {
            strcpy(buf, d_61eb_b0ec[d_3334_0000[7][p]]);
            d_61eb_b0ec; /* keeps this copy of the shared tail */
        } else
            strcpy(buf, d_61eb_b0ec[d_28d4_82d0[p]]);
    } else
        sprintf(buf, "<%s>", d_53fc_0000[d_28d4_1958[18][p] - 140]);
    strcpy(d_432e_c035, f_1a83_438a(12, buf));
    d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 0);
    strcpy(buf, d_53fc_0000[d_61eb_dbcc[9][p]]);
    if (d_432e_45de[p].f18) {
        if (d_432e_45de[p].f19 == 0)
            strcat(buf, " I");
        else
            strcat(buf, " U");
    }
    strcpy(d_432e_e07f, f_1a83_438a(12, buf));
    if (f_1a83_6b4c(p) == 0) {
        if (d_3334_a410[p] > 0)
            sprintf(buf, "EXP %d/%d", d_61eb_d956 % 100, (d_61eb_d956 = d_3334_a410[p]) / 100);
        else
            strcpy(buf, "Free agent");
    } else
        strcpy(buf, "Unknown");
    strcpy(d_432e_e0cf, f_1a83_438a(12, buf));
    if (f_1a83_6b4c(p) == 0) {
        d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
        sprintf(buf, "%d p/w", d_61eb_dbb8[4][p]);
    } else
        strcpy(buf, "Unknown");
    strcpy(d_432e_e11f, f_1a83_438a(12, buf));
    if (d_3334_0000[7][p] < 255)
        strcpy(buf, "On Loan");
    else {
        if (d_432e_45de[p].f8)
            strcpy(buf, d_432e_45de[p].f10 ? "R/" : "L/");
        else
            strcpy(buf, "");
        if (d_432e_45de[p].f24)
            strcat(buf, "For Loan");
        else {
            d_61eb_db05 = f_1a83_01d6(p, d_28d4_1958[18][p]);
            if (d_432e_45de[p].f8 == 0 && f_1a83_2ad4(d_28d4_1958[18][p]) == 0)
                d_61eb_db05 = f_1a83_0d8f(d_61eb_db05);
            strcat(buf, f_1a83_0e35(d_61eb_db05));
        }
    }
    strcpy(d_432e_e16f, f_1a83_438a(12, buf));
    if (d_432e_45de[p].f20)
        sprintf(buf, "%ld p/w", f_8e0f_138d(p));
    else
        strcpy(buf, "NONE");
    strcpy(d_432e_e1bf, f_1a83_438a(12, buf));

    strcpy(d_432e_d855, "");
    if (d_432e_45de[p].f0)
        strcat(d_432e_d855, " GK");
    if (d_432e_45de[p].f1)
        strcat(d_432e_d855, " DEF");
    if (d_432e_45de[p].f2)
        strcat(d_432e_d855, " MID");
    if (d_432e_45de[p].f3)
        strcat(d_432e_d855, " ATT");
    strcpy(buf, &d_432e_d855[1]);
    strcpy(d_432e_d855, f_1a83_438a(12, buf));
    if (d_432e_45de[p].f0 == 0) {
        strcpy(d_432e_e02f, "");
        if (d_432e_45de[p].f4)
            strcat(d_432e_e02f, " R");
        if (d_432e_45de[p].f5)
            strcat(d_432e_e02f, " L");
        if (d_432e_45de[p].f6)
            strcat(d_432e_e02f, " C");
    } else if (f_1a83_6b4c(p) == 0)
        sprintf(d_432e_e02f, " %d", d_28d4_1958[1][p]);
    else
        strcpy(d_432e_e02f, " Unknown");
    strcpy(d_432e_e02f, &d_432e_e02f[1]);
    strcpy(d_432e_e02f, f_1a83_438a(12, d_432e_e02f));

    sprintf(buf, "%d", d_3334_0000[12][p]);
    strcpy(d_432e_e57f, f_1a83_438a(8, buf));
    sprintf(buf, "%d", d_3334_0000[13][p]);
    strcpy(d_432e_d55d, f_1a83_438a(8, buf));
    sprintf(buf, "%d", d_3334_0000[2][p] / 5 * 5);
    strcpy(d_432e_cf1b, f_1a83_438a(8, buf));
    if (d_3334_0000[12][p] > 0) {
        d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
        sprintf(buf, "%4.2f", (float)d_61eb_dbb8[2][p] / d_3334_0000[12][p]);
    } else
        strcpy(buf, "----");
    strcpy(d_432e_bf45, f_1a83_438a(8, buf));
    if (d_3334_0000[0][p] > 0) {
        sprintf(buf, "%d", d_3334_0000[3][p]);
        strcpy(d_432e_e5cf, f_1a83_438a(8, buf));
        sprintf(buf, "%d", d_3334_0000[4][p]);
        strcpy(d_432e_e61f, f_1a83_438a(8, buf));
    } else {
        strcpy(d_432e_e5cf, " -      ");
        strcpy(d_432e_e61f, d_432e_e5cf);
    }
    d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 0);
    sprintf(buf, "%d", d_61eb_dbcc[3][p]);
    strcpy(d_432e_e66f, f_1a83_438a(8, buf));
    d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 0);
    sprintf(buf, "%d", d_61eb_dbcc[2][p]);
    strcpy(d_432e_e6bf, f_1a83_438a(8, buf));
    sprintf(buf, "%d", d_3334_0000[5][p]);
    strcpy(d_432e_e70f, f_1a83_438a(7, buf));
    sprintf(buf, "%d", d_3334_0000[6][p]);
    strcpy(d_432e_e773, f_1a83_438a(7, buf));
    d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 0);
    sprintf(buf, "%d", d_61eb_dbcc[6][p]);
    strcpy(d_432e_e7c3, f_1a83_438a(7, buf));
    d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
    if (d_3334_0000[5][p] > 0)
        sprintf(buf, "%4.2f", (float)d_61eb_dbb8[1][p] / d_3334_0000[5][p]);
    else
        strcpy(buf, "----");
    strcpy(d_432e_e813, f_1a83_438a(7, buf));
    if (d_3334_0000[5][p] > 0) {
        d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 0);
        sprintf(buf, "%d", d_61eb_dbcc[7][p]);
        strcpy(d_432e_e863, f_1a83_438a(7, buf));
        d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 0);
        sprintf(buf, "%d", d_61eb_dbcc[8][p]);
        strcpy(d_432e_e953, f_1a83_438a(7, buf));
    } else {
        strcpy(d_432e_e863, " -     ");
        strcpy(d_432e_e953, d_432e_e863);
    }

    strcpy(d_432e_e4df, "                  AVAILABILITY");
    if (d_28d4_1958[20][p] > 0 && d_28d4_1958[19][p] != 51) {
        if (d_28d4_1958[19][p] < 27) {
            if (d_28d4_1958[20][p] < 3)
                strcpy(d_432e_e9f3, "soon");
            else
                sprintf(d_432e_e9f3, "in about %d weeks", d_28d4_1958[20][p]);
            sprintf(d_432e_e52f, "Has %s - back %s", d_53fc_0371[d_28d4_1958[19][p]], d_432e_e9f3);
        } else if (d_28d4_1958[19][p] == 27) {
            if (d_28d4_1958[20][p] == 1)
                strcpy(d_432e_e9f3, "match");
            else
                sprintf(d_432e_e9f3, "%d matches", d_28d4_1958[20][p]);
            sprintf(d_432e_e52f, "Suspended for next %s", d_432e_e9f3);
        } else if (d_28d4_1958[19][p] == 50)
            strcpy(d_432e_e52f, "Cup-tied for this match");
    } else {
        sprintf(d_432e_e52f, "%d%% match fit", d_28d4_1958[21][p]);
        if (d_432e_45de[p].f7) {
            unsigned char n;

            n = f_1a83_1dd9(p) + 1;
            sprintf(buf, " - Shirt No.%s", f_1a83_2d52(n, 0));
            strcat(d_432e_e52f, buf);
        }
    }
    strcpy(d_432e_e20f, d_53fc_0650[d_3334_0000[17][p]]);
    if (d_432e_45de[p].f0 == 0) {
        sprintf(d_432e_e25f, "%d", d_28d4_1958[1][p]);
        sprintf(d_432e_e2af, "%d", d_28d4_1958[2][p]);
        sprintf(d_432e_e2ff, "%d", d_28d4_1958[3][p]);
        sprintf(d_432e_e34f, "%d", d_28d4_1958[4][p]);
        sprintf(d_432e_e39f, "%d", d_28d4_1958[5][p]);
        sprintf(d_432e_e3ef, "%d", d_28d4_1958[6][p]);
        sprintf(d_432e_e43f, "%d", d_28d4_1958[22][p]);
    } else {
        strcpy(d_432e_e25f, "");
        strcpy(d_432e_e2af, "");
        strcpy(d_432e_e2ff, "");
        strcpy(d_432e_e34f, "");
        strcpy(d_432e_e39f, "");
        strcpy(d_432e_e3ef, "");
        strcpy(d_432e_e43f, "");
    }
    sprintf(d_432e_e48f, "%d", d_28d4_1958[12][p]);
    m = d_28d4_1958[15][p] - d_28d4_1958[0][p];
    if (m <= -24)
        strcpy(d_432e_e8b3, "Very low");
    else if (m <= -16)
        strcpy(d_432e_e8b3, "Low");
    else if (m <= 8)
        strcpy(d_432e_e8b3, "Ok");
    else if (m <= 24)
        strcpy(d_432e_e8b3, "Good");
    else
        strcpy(d_432e_e8b3, "Superb");

    d_61eb_da0a = f_1a83_6728(p, 0);
    if (d_61eb_da0a && (d_61eb_d780 == 1 || d_61eb_d780 == 2) && d_3334_0000[14][p] == 0)
        d_61eb_da0a = 0;
    if (d_432e_45de[p].f8 && d_432e_45de[p].f10) {
        if (d_61eb_da0a == 0)
            strcpy(d_432e_d32b, "But having second thoughts");
        sprintf(d_432e_ea43, "Requested move - %s", d_432e_d32b);
    } else if (d_61eb_da0a) {
        if (d_3334_0000[14][p] > 0)
            sprintf(d_432e_ea43, "%s to leave - %s", d_432e_45de[p].f8 ? "Wants" : "May ask", d_432e_d32b);
        else
            sprintf(d_432e_ea43, "Unhappy - %s", d_432e_d32b);
    } else if (f_ab30_482b(p)) {
        if (d_61eb_dbcc[9][p]) {
            strcpy(d_432e_ea43, "Expected to return home at end of season");
            d_61eb_dbcc; /* keeps this copy of the shared tail */
        } else
            strcpy(d_432e_ea43, "Expected to move to Serie C at end of season");
    } else
        sprintf(d_432e_ea43, "%s happy to stay at the club", d_432e_45de[p].f8 ? "He would be" : "He is");

    strcpy(d_432e_e903, "");
    if (*(d_3334_0000[23] + p) > 0 && !d_432e_45de[p].f9 && !d_432e_45de[p].f30) {
        d_61eb_d958 = 0;
        for (d_61eb_d95a = 0; d_61eb_d95a <= 37; d_61eb_d95a++) {
            if (f_1a83_2ad4(d_61eb_d95a) == 0 && f_87dc_1a90(d_61eb_d95a, p) > 0) {
                d_61eb_d958++;
                if (d_61eb_d958 > 1) {
                    if (d_3334_0000[23][p] == d_61eb_d958)
                        strcat(d_432e_e903, " and ");
                    else if (d_3334_0000[23][p] > d_61eb_d958)
                        strcat(d_432e_e903, ", ");
                }
                strcat(d_432e_e903, d_61eb_b0ec[d_61eb_d95a]);
            }
        }
    }
}

void f_a214_2db7(void)
{
    f_1a83_3450(1.375, 24.375, 6, 4, 0x12a, "");
    if (d_61eb_da3f == 0) {
        f_1a83_3450(1.375, 23.5, 0, 1, 0x12a, "                     FUTURE");
        f_1a83_3450(-1.0, 24.375, 6, 4, 0, d_432e_ea43);
    } else {
        f_1a83_3450(1.375, 23.5, 0, 6, 0x12a, "                   TARGETED BY");
        f_1a83_3450(-1.0, 24.375, 1, 4, 0, d_432e_e903);
    }
    d_61eb_da3f = !d_61eb_da3f;
}

void f_a214_2e56(void)
{
    f_1a83_3450(37.375, 23.5, 2, d_61eb_da3f ? 1 : 6, 0, d_61eb_da40 ? ">" : " ");
    d_61eb_da40 = !d_61eb_da40;
}

void f_a214_2ea7(void)
{
    for (d_61eb_d5dc = 0; d_61eb_d5dc <= 139; d_61eb_d5dc++)
        d_432e_38aa[d_61eb_d5dc] = (d_61eb_d5dc >= 38 ? 400 : 0) + d_61eb_d5dc;
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 138; d_61eb_d5d8++)
        for (d_61eb_d5aa = d_61eb_d5d8 + 1; d_61eb_d5aa <= 139; d_61eb_d5aa++)
            if (strcmp(f_1a83_3300(d_432e_38aa[d_61eb_d5d8]), f_1a83_3300(d_432e_38aa[d_61eb_d5aa])) > 0)
                f_215d_13f1(&d_432e_38aa[d_61eb_d5d8], &d_432e_38aa[d_61eb_d5aa], 2);
    d_61eb_da3a = -1;
    for (d_61eb_d654 = 0x286; d_61eb_d654 < 0x28a; d_61eb_d654++)
        d_3334_cee2[d_61eb_d654] = 255;
    f_1a83_2da6(0, "New game", "Demo Game|One Player|Two Players|Three Players|Four Players|");
    d_61eb_d650 = d_61eb_d652 = d_61eb_d59e;
    d_61eb_d9c4 = d_61eb_d652 == 0 ? -1 : 0;
    if (d_61eb_d652 > 0) {
        for (d_61eb_d5b8 = 1; d_61eb_d5b8 <= d_61eb_d650; d_61eb_d5b8++) {
            d_61eb_d5de = f_a214_32ea(d_61eb_d654 = d_61eb_d5b8 + 0x285);
            if (d_61eb_d5de >= 400) {
                d_61eb_d934 = -1;
                for (d_61eb_d5dc = 18; d_61eb_d5dc <= 37; d_61eb_d5dc++) {
                    if (f_1a83_2ad4(d_61eb_d5dc) == 0) {
                        if ((d_61eb_d7be = f_1a83_2b0c(d_61eb_d5dc) + f_215d_0d96(2) - f_215d_0d96(2)) < d_61eb_d936
                            || d_61eb_d934 == -1) {
                            d_61eb_d936 = d_61eb_d7be;
                            d_61eb_d934 = d_61eb_d5dc;
                        }
                    }
                }
                d_61eb_b13c[d_61eb_d934] = d_61eb_b140[d_61eb_d5de];
                f_215d_13f1((void *)&d_61eb_b0ec[d_61eb_d934], (void *)&d_61eb_b140[d_61eb_d5de], 2);
                d_3334_bdb2[0][d_61eb_d934] = 10;
                d_3334_bdb2[1][d_61eb_d934] = f_215d_0d96(10) + 10;
                f_215d_13f1(&d_3334_bdb2[2][d_61eb_d934], &d_53fc_0b90[d_61eb_d5de], 1);
                f_215d_13f1(&d_3334_bdb2[3][d_61eb_d934], &d_53fc_0d86[d_61eb_d5de], 1);
                d_3334_bdb2[4][d_61eb_d934] = 13;
                d_53fc_09c0[0][d_61eb_d5de - 38] = 10;
                f_215d_13f1(&d_53fc_778e[0][d_61eb_d934], d_53fc_778e[0] - 400 + d_61eb_d5de, 1);
                f_215d_13f1(&d_53fc_778e[1][d_61eb_d934], d_53fc_778e[1] - 400 + d_61eb_d5de, 1);
                d_61eb_d5de = d_61eb_d934;
            }
            d_61eb_d654 = d_61eb_d5b8 + 0x285;
            d_3334_ca6e[d_61eb_d5de] = d_61eb_d654;
            d_3334_cee2[d_61eb_d654] = d_61eb_d5de;
            d_3334_d16c[d_61eb_d654] = 35;
            d_3334_d3f6[d_61eb_d654] = 25;
            d_3334_efe4[d_61eb_d654] = 0;
            d_3334_db94[d_61eb_d654] = 80;
            d_3334_d680[d_61eb_d654] = f_a214_3501(d_61eb_d654);
            f_9a9e_46c0(d_61eb_d5b8 - 1);
        }
        if (d_61eb_da4d == 0) {
            f_1a83_2da6(0, "Starting Division", "Serie A|Serie B|");
            d_61eb_d932 = d_61eb_d59e + 1;
            for (d_61eb_d5f6 = 0x286; d_61eb_d5f6 <= d_61eb_d650 + 0x285; d_61eb_d5f6++) {
                d_61eb_d5de = d_3334_cee2[d_61eb_d5f6];
                if (d_61eb_d5de < 255) {
                    if ((d_61eb_d5e4 = f_1a83_6d8b(d_61eb_d5de) + 1) < d_61eb_d932) {
                        for (d_61eb_d674 = d_61eb_d5e4; d_61eb_d674 <= d_61eb_d932 - 1; d_61eb_d674++) {
                            f_9f8d_0073(d_61eb_d5de, d_61eb_d674 + 1);
                            d_61eb_d5de = d_61eb_d934;
                        }
                    } else if (d_61eb_d5e4 > d_61eb_d932) {
                        for (d_61eb_d674 = d_61eb_d5e4; d_61eb_d674 >= d_61eb_d932 + 1; d_61eb_d674--) {
                            f_9f8d_0073(d_61eb_d5de, d_61eb_d674 - 1);
                            d_61eb_d5de = d_61eb_d934;
                        }
                    }
                }
            }
        }
    }
    d_61eb_da3a = 0;
}

#pragma option -O-
int f_a214_32ea(int p)
{
    char buf[320];
    int list[48];

    d_61eb_d5de = -1;
    d_61eb_d5f2 = 1;
    do {
        f_1a83_48f9("Team Choice");
        sprintf(buf, " Player %s choose team ", f_1a83_477e(p - 645));
        f_1a83_3450(1.125, 4.0, 1, 2, 0x130, buf);
        f_1a83_4d96(2, 1.25, 22.5, 1, 4, 0x12d, "                 MORE");
        for (d_61eb_d5dc = 0; d_61eb_d5dc <= (d_61eb_d5f2 == 3 ? 43 : 47); d_61eb_d5dc++) {
            list[d_61eb_d5dc] = d_432e_38aa[(d_61eb_d5f2 - 1) * 48 + d_61eb_d5dc];
            d_61eb_da5d = d_61eb_d5dc / 16 * 12.75 + 1.125;
            d_61eb_da55 = d_61eb_d5dc + 6 - d_61eb_d5dc / 16 * 16;
            sprintf(buf, " %.15s", f_1a83_3300(list[d_61eb_d5dc]));
            f_1a83_4d96(0, d_61eb_da5d, d_61eb_da55, f_1a83_2ad4(list[d_61eb_d5dc]) ? 6 : 1,
                        d_61eb_d5dc & 1 ? 15 : 3, 100, buf);
            if (f_1a83_2ad4(list[d_61eb_d5dc]) || (list[d_61eb_d5dc] >= 38 && d_61eb_da4d))
                f_1a83_54f9(d_61eb_d5dc + 2);
        }
        do {
            d_61eb_d59e = f_1a83_5296(d_61eb_d5e2);
        } while (d_61eb_d59e == 0);
        if (d_61eb_d59e == 1) {
            d_61eb_d5f2++;
            if (d_61eb_d5f2 == 4)
                d_61eb_d5f2 = 1;
        } else
            d_61eb_d5de = list[d_61eb_d59e - 2];
    } while (d_61eb_d5de == -1);
    return d_61eb_d5de;
}

int f_a214_3501(int p)
{
    char buf[320];

    sprintf(buf, "Player %s", f_1a83_477e(p - 645));
    f_1a83_48f9(buf);
    f_1a83_3c08(1.0, 4.0, 1, 2, 0, " Select Personality ");
    strcpy(buf, "");
    for (d_61eb_d938 = 0; d_61eb_d938 <= 9; d_61eb_d938++) {
        strcat(buf, d_53fc_0650[d_61eb_d938]);
        strcat(buf, "|");
    }
    f_1a83_2da6(7, "", buf);
    f_1a83_3122(9);
    return d_61eb_d59e;
}

void f_a214_35d3(void)
{
    int salary;
    char title[320];
    char text[320];

    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 37; d_61eb_d5d8++) {
        for (d_61eb_d5aa = 0; d_61eb_d5aa <= 21; d_61eb_d5aa++) {
            switch (d_61eb_d5aa) {
            case 8: case 9: case 12: case 13: case 14: case 15: case 16: case 17: case 18:
            case 19: case 20:
                d_3334_bdb2[d_61eb_d5aa][d_61eb_d5d8] = 0;
                break;
            case 0: case 1: case 2: case 4:
                d_3334_c8f2[d_61eb_d5aa][d_61eb_d5d8] = 0;
                break;
            }
        }
        d_3334_bf6a[d_61eb_d5d8] = 2;
        d_3334_cd1a[d_61eb_d5d8] = 0;
        d_3334_cdb2[d_61eb_d5d8] = 0;
        d_3334_ce4a[d_61eb_d5d8] = 0;
        d_3334_c73a[d_61eb_d5d8] = 0;
        d_3334_c82a[d_61eb_d5d8] = 0;
        d_3334_c8ca[d_61eb_d5d8] = 0;
        d_61eb_db95 = (f_1a83_2b0c(d_61eb_d5d8) + f_215d_0d96(2) - f_215d_0d96(2))
            * (4 - f_1a83_6d8b(d_61eb_d5d8)) * 500.0f;
        d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
        d_61eb_dbc0[1][d_61eb_d5d8] = d_61eb_db95 / 2500 * 2500;
        d_61eb_dbd8 = f_215d_1629(d_61eb_dc5e, 1);
        strcpy(d_61eb_dbd8[d_61eb_d5d8], "");
        for (d_61eb_d5aa = 0; d_61eb_d5aa <= 1; d_61eb_d5aa++)
            strcpy(d_432e_ed13[d_61eb_d5aa][d_61eb_d5d8], "");
        d_432e_681e[d_61eb_d5d8].n_in = 0;
        d_432e_681e[d_61eb_d5d8].n_out = 0;
        for (d_61eb_d5aa = 1; d_61eb_d5aa <= 6; d_61eb_d5aa++)
            d_432e_b73b[d_61eb_d5aa][d_61eb_d5d8] = 0;
        salary = f_ab30_0000(d_3334_ca6e[d_61eb_d5d8], d_61eb_d5d8);
        d_61eb_dbb4 = f_215d_1629(d_61eb_dc4c, 0);
        if (d_61eb_dbb4[d_3334_ca6e[d_61eb_d5d8]] < salary) {
            d_61eb_dbb4 = f_215d_1629(d_61eb_dc4c, 1);
            d_61eb_dbb4[d_3334_ca6e[d_61eb_d5d8]] = salary;
            if (f_1a83_2ad4(d_61eb_d5d8) && d_61eb_d5a4 > 1) {
                sprintf(title, "%s board message", (char far *)d_61eb_b0ec[d_61eb_d5d8]);
                sprintf(text, "We have increased your salary to %ld per year.", salary * 1000L);
                f_1a83_5844(d_61eb_d5d8, title, text);
                f_ab30_5c8d();
            }
        }
    }
    d_61eb_dbb0 = f_215d_1629(d_61eb_dc4a, 1);
    memset(d_61eb_dbb0, 0, 2600);
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= d_61eb_d58e - 1; d_61eb_d5d8++) {
        if (f_1a83_2ad4(d_61eb_d5de = d_28d4_1958[18][d_61eb_d5d8]) == 0 && (d_61eb_da4d == 0 || d_61eb_d5a4 != 1))
            d_432e_45de[d_61eb_d5d8].f9 = 0;
        d_432e_45de[d_61eb_d5d8].f11 = 0;
        d_432e_45de[d_61eb_d5d8].f12 = 0;
        d_432e_45de[d_61eb_d5d8].f13 = 0;
        d_432e_45de[d_61eb_d5d8].f15 = 0;
        d_432e_45de[d_61eb_d5d8].f16 = 0;
        d_432e_45de[d_61eb_d5d8].f17 = 0;
        d_432e_45de[d_61eb_d5d8].f18 = 0;
        d_432e_45de[d_61eb_d5d8].f19 = 0;
        d_432e_45de[d_61eb_d5d8].f23 = 0;
        if (d_432e_45de[d_61eb_d5d8].f0)
            d_28d4_1958[1][d_61eb_d5d8] = 0;
        for (d_61eb_d5aa = 0; d_61eb_d5aa <= 51; d_61eb_d5aa++) {
            switch (d_61eb_d5aa) {
            case 24: case 25: case 26: case 27: case 28: case 33: case 36: case 37: case 43: case 47:
                d_3334_0000[d_61eb_d5aa - 24][d_61eb_d5d8] = 0;
                break;
            case 0: case 2:
                d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 1);
                d_61eb_dbb8[d_61eb_d5aa][d_61eb_d5d8] = 0;
                break;
            }
        }
        d_28d4_1958[21][d_61eb_d5d8] = 70;
        if (d_28d4_1958[19][d_61eb_d5d8] == 27) {
            if (d_28d4_1958[20][d_61eb_d5d8] > 0 && d_28d4_1958[20][d_61eb_d5d8] < 5) {
                d_28d4_1958[19][d_61eb_d5d8] = d_28d4_1958[20][d_61eb_d5d8] + 27;
                d_28d4_1958[20][d_61eb_d5d8] = 0;
            }
        }
        d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 1);
        d_61eb_dbcc[3][d_61eb_d5d8] = 0;
    }
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 139; d_61eb_d5d8++)
        for (d_61eb_d5aa = 6; d_61eb_d5aa <= 11; d_61eb_d5aa++)
            d_432e_1f9e[d_61eb_d5aa][d_61eb_d5d8] = 0;
    memset(d_432e_26ba, -1, 2800);
    for (d_61eb_d5dc = 0; d_61eb_d5dc <= 37; d_61eb_d5dc++)
        if (f_1a83_2ad4(d_61eb_d5dc) == 0 || d_61eb_d5a4 == 1)
            d_432e_066e[d_61eb_d5dc][0] = 0;
    memset(d_432e_35f6, -1, 88);
    d_61eb_d5a2 = 1;
    d_61eb_d59a = d_61eb_d59c = 0;
    d_61eb_d6be = 1;
    d_61eb_d5ba = 0;
    d_61eb_d610 = 0;
    d_61eb_d5bc = 0;
    d_61eb_d5be = 0;
    d_61eb_d5c0 = 0;
    for (d_61eb_d62a = 0; d_61eb_d62a <= 99; d_61eb_d62a++) {
        d_28d4_106c[d_61eb_d62a] = 0;
        d_28d4_1134[d_61eb_d62a] = 0;
    }
    memset(d_28d4_0000, 0, 24);
    for (d_61eb_d85c = 1; d_61eb_d85c <= 100; d_61eb_d85c++)
        if (f_1a83_2387(d_61eb_d85c) == 0 && f_1a83_2448(d_61eb_d85c) == 0)
            f_9f8d_03ac(1, 64, d_61eb_d85c);
    d_61eb_dba3 = 0;
    d_61eb_dba1 = f_215d_0d96(200) + 1;
    d_61eb_da4f = 0;
}

void f_a214_3d33(void)
{
    f_ab30_5ded(7);
    for (d_61eb_d5b8 = 0; d_61eb_d5b8 <= d_61eb_d58e - 1; d_61eb_d5b8++) {
        f_ab30_5f57(7, d_61eb_d5b8, d_61eb_d58e - 1);
        if (d_432e_45de[d_61eb_d5b8].f13)
            d_28d4_1958[15][d_61eb_d5b8] = f_215d_13af(d_28d4_1958[0][d_61eb_d5b8] + f_215d_0d96(10),
                d_28d4_1958[9][d_61eb_d5b8] + 25);
        else if (d_61eb_da4d && d_61eb_d5a4 == 1 && d_432e_45de[d_61eb_d5b8].f28)
            d_28d4_1958[15][d_61eb_d5b8] = d_28d4_1958[0][d_61eb_d5b8] + f_215d_0d96(15) + 10;
        else
            d_28d4_1958[15][d_61eb_d5b8] = d_28d4_1958[0][d_61eb_d5b8] + f_215d_0d96(10);
    }
    f_ab30_5ded(8);
    for (d_61eb_d5de = 0; d_61eb_d5de <= 37; d_61eb_d5de++) {
        f_ab30_5f57(8, d_61eb_d5de, 42);
        f_9f8d_0670(d_61eb_d5de);
    }
}

void f_a214_3e5f(void)
{
    int cnt[3];
    unsigned char nation[5] = {0, 0, 0, 0, 0};
    unsigned char tries;
    char used[1500];

    memset(used, 0, 1500);
    memset(cnt, 0, 6);
    for (d_61eb_d7ba = 0; d_61eb_d7ba <= 0; d_61eb_d7ba++) {
        f_ab30_5f57(8, d_61eb_d7ba + 38, 38);
        d_61eb_da3d = 0;
        for (d_61eb_d68c = 1; d_61eb_d68c <= 100; d_61eb_d68c++) {
            tries = 1;
            d_61eb_d92c = -1;
            do {
                d_61eb_d5b8 = 0;
                do {
                    d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 0);
                    if (d_61eb_dbcc[9][d_61eb_d5b8] == nation[d_61eb_d7ba] && used[d_61eb_d5b8] == 0
                        && (d_61eb_d68c <= 50 && d_28d4_1958[17][d_61eb_d5b8] < 22
                            || d_61eb_d68c > 50 || tries == 2)
                        && d_432e_45de[d_61eb_d5b8].f0 == ((d_61eb_d68c - 1) % 50 > 4 ? 0 : 1)
                        && (d_61eb_d92c == -1 || d_28d4_1958[0][d_61eb_d5b8] > d_61eb_d92e)) {
                        d_61eb_d92c = d_61eb_d5b8;
                        d_61eb_d92e = d_28d4_1958[0][d_61eb_d5b8];
                    }
                    if (d_61eb_d58e - 1 == d_61eb_d5b8)
                        d_61eb_d5b8 = 1000;
                    else
                        d_61eb_d5b8++;
                } while (d_61eb_d590 + 999 >= d_61eb_d5b8);
                tries++;
            } while (d_61eb_d92c == -1 && tries < 3);
            d_61eb_dbc4 = f_215d_1629(d_61eb_dc54, 1);
            d_61eb_dbc4[d_61eb_d68c - 1] = d_61eb_d92c;
            if (d_61eb_d92c > -1)
                used[d_61eb_d92c] = -1;
        }
    }
}

void f_a214_4036(void)
{
    f_ab30_5ded(5);
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 37; d_61eb_d5d8++)
        d_432e_0640[d_61eb_d5d8] = d_61eb_d5d8;
    for (d_61eb_d5d8 = 1; d_61eb_d5d8 <= 20; d_61eb_d5d8++)
        for (d_61eb_d5e4 = 0; d_61eb_d5e4 <= 1; d_61eb_d5e4++) {
            f_ab30_5f57(5, (d_61eb_d5d8 - 1) * 2 + d_61eb_d5e4, 40);
            d_61eb_d93e = d_432e_0640[d_61eb_d5e4 * 18 + f_215d_0d96(f_1a83_6d76(d_61eb_d5e4))];
            d_61eb_d940 = d_432e_0640[d_61eb_d5e4 * 18 + f_215d_0d96(f_1a83_6d76(d_61eb_d5e4))];
            f_9f8d_08a7(d_61eb_d93e, d_61eb_d940);
        }
}

#pragma option -O-
void f_a214_4120(int player, int team, char buy)
{
    int club;
    char buf[320];
    char more[80];
    char msg[20];

    club = d_3334_0000[7][player] < 255 ? d_3334_0000[7][player] : d_28d4_1958[18][player];
    d_61eb_da3f = 0;
    d_61eb_da40 = -1;
    f_a214_1c54(player);
    f_1a83_5ccd();
    f_1a83_48f9("");
    sprintf(buf, " %s ", f_215d_0e90(f_1a83_4485(player)));
    if (f_1a83_6b4c(player) == 0)
        f_1a83_3c08(1.25, 1.125, d_3334_be02[club] / 16, d_3334_be02[club] % 16, 0, buf);
    else
        f_1a83_3c08(1.25, 1.125, 1, 4, 0, buf);
    f_215d_0b01(1);
    f_215d_088c(16);
    f_215d_08aa(12, 26, 160, 98);
    f_215d_08aa(166, 26, 312, 98);
    f_215d_08aa(12, 104, 312, 116);
    f_215d_08aa(12, 122, 212, 162);
    f_215d_08aa(218, 122, 312, 178);
    f_215d_08aa(12, 171, 212, 178);
    f_215d_08aa(12, 184, 312, 197);
    f_215d_088c(19);
    f_215d_08aa(8, 100, 310, 114);
    f_215d_08aa(8, 118, 210, 160);
    f_215d_08aa(214, 118, 310, 176);
    f_215d_088c(20);
    f_215d_08aa(8, 22, 158, 96);
    f_215d_08aa(162, 22, 310, 96);
    f_215d_088c(30);
    f_215d_08aa(8, 165, 210, 176);
    f_215d_088c(20);
    f_215d_08aa(8, 180, 310, 195);
    f_1a83_3450(1.375, 3.75, 1, 12, 0, " AGE        ");
    f_1a83_3450(10.625, 3.75, 1, 12, 0, d_432e_df3f);
    f_1a83_3450(1.375, 4.75, 1, 12, 0, " CLUB       ");
    f_1a83_3450(10.625, 4.75, 1, 12, 0, d_432e_c035);
    f_1a83_3450(1.375, 5.75, 1, 12, 0, " COUNTRY    ");
    f_1a83_3450(10.625, 5.75, 1, 12, 0, d_432e_e07f);
    f_1a83_3450(1.375, 6.75, 1, 12, 0, " CONTRACT   ");
    f_1a83_3450(10.625, 6.75, 1, 12, 0, d_432e_e0cf);
    f_1a83_3450(1.375, 7.75, 1, 12, 0, " WAGES      ");
    f_1a83_3450(10.625, 7.75, 1, 12, 0, d_432e_e11f);
    f_1a83_3450(1.375, 8.75, 1, 12, 0, " STATUS/VAL ");
    f_1a83_3450(10.625, 8.75, 1, 12, 0, d_432e_e16f);
    f_1a83_3450(1.375, 9.75, 1, 12, 0, " INSURANCE  ");
    f_1a83_3450(10.625, 9.75, 1, 12, 0, d_432e_e1bf);
    f_1a83_3450(1.375, 10.75, 1, 12, 0, " POSITION   ");
    f_1a83_3450(10.625, 10.75, 1, 12, 0, d_432e_d855);
    if (d_432e_45de[player].f0 == 0)
        f_1a83_3450(1.375, 11.75, 1, 12, 0, " SIDE       ");
    else
        f_1a83_3450(1.375, 11.75, 1, 12, 0, " CONCEDED   ");
    f_1a83_3450(10.625, 11.75, 1, 12, 0, d_432e_e02f);
    f_1a83_3450(20.625, 3.75, 1, 12, 71, " CHARACTER");
    sprintf(buf, " %s", d_432e_e20f);
    f_1a83_3450(29.75, 3.75, 1, 12, 71, buf);
    f_1a83_3450(20.625, 4.75, 1, 12, 71, " PASSING");
    sprintf(buf, " %s", d_432e_e25f);
    f_1a83_3450(29.75, 4.75, 1, 12, 71, buf);
    f_1a83_3450(20.625, 5.75, 1, 12, 71, " TACKLING");
    sprintf(buf, " %s", d_432e_e2af);
    f_1a83_3450(29.75, 5.75, 1, 12, 71, buf);
    f_1a83_3450(20.625, 6.75, 1, 12, 71, " PACE");
    sprintf(buf, " %s", d_432e_e2ff);
    f_1a83_3450(29.75, 6.75, 1, 12, 71, buf);
    f_1a83_3450(20.625, 7.75, 1, 12, 71, " HEADING");
    sprintf(buf, " %s", d_432e_e34f);
    f_1a83_3450(29.75, 7.75, 1, 12, 71, buf);
    f_1a83_3450(20.625, 8.75, 1, 12, 71, " FLAIR    ");
    sprintf(buf, " %s", d_432e_e39f);
    f_1a83_3450(29.75, 8.75, 1, 12, 71, buf);
    f_1a83_3450(20.625, 9.75, 1, 12, 71, " CREATIVITY");
    sprintf(buf, " %s", d_432e_e3ef);
    f_1a83_3450(29.75, 9.75, 1, 12, 71, buf);
    f_1a83_3450(20.625, 10.75, 1, 12, 71, " STAMINA   ");
    sprintf(buf, " %s", d_432e_e43f);
    f_1a83_3450(29.75, 10.75, 1, 12, 71, buf);
    f_1a83_3450(20.625, 11.75, 1, 12, 71, " INFLUENCE");
    sprintf(buf, " %s", d_432e_e48f);
    f_1a83_3450(29.75, 11.75, 1, 12, 71, buf);
    f_1a83_3450(1.375, 13.375, 0, 6, 298, d_432e_e4df);
    f_1a83_3450(-1.0, 14.25, 1, 3, 0, d_432e_e52f);
    f_1a83_3450(1.375, 15.75, 0, 1, 198, "           THIS SEASON");
    f_1a83_3450(1.375, 16.75, 0, 6, 0, " APPS   ");
    f_1a83_3450(7.625, 16.75, 0, 6, 0, d_432e_e57f);
    f_1a83_3450(1.375, 17.75, 0, 6, 0, " GOALS  ");
    f_1a83_3450(7.625, 17.75, 0, 6, 0, d_432e_d55d);
    f_1a83_3450(1.375, 18.75, 0, 6, 0, " DISP   ");
    f_1a83_3450(7.625, 18.75, 0, 6, 0, d_432e_cf1b);
    f_1a83_3450(13.875, 16.75, 0, 6, 0, " AV R   ");
    f_1a83_3450(20.125, 16.75, 0, 6, 0, d_432e_bf45);
    f_1a83_3450(13.875, 17.75, 0, 6, 0, " MIN R  ");
    f_1a83_3450(20.125, 17.75, 0, 6, 0, d_432e_e5cf);
    f_1a83_3450(13.875, 18.75, 0, 6, 0, " MAX R  ");
    f_1a83_3450(20.125, 18.75, 0, 6, 0, d_432e_e61f);
    f_1a83_3450(1.375, 19.75, 0, 6, 0, " M/O/M  ");
    f_1a83_3450(7.625, 19.75, 0, 6, 0, d_432e_e66f);
    f_1a83_3450(13.875, 19.75, 0, 6, 0, " INTS   ");
    f_1a83_3450(20.125, 19.75, 0, 6, 0, d_432e_e6bf);
    f_1a83_3450(27.125, 15.75, 0, 1, 90, "  LAST SEASON");
    f_1a83_3450(37.875, 15.75, 0, 1, 0, " ");
    f_1a83_3450(27.125, 16.75, 0, 6, 0, " APPS   ");
    f_1a83_3450(33.375, 16.75, 0, 6, 0, d_432e_e70f);
    f_1a83_3450(27.125, 17.75, 0, 6, 0, " GOALS  ");
    f_1a83_3450(33.375, 17.75, 0, 6, 0, d_432e_e773);
    f_1a83_3450(27.125, 18.75, 0, 6, 0, " DISP   ");
    f_1a83_3450(33.375, 18.75, 0, 6, 0, d_432e_e7c3);
    f_1a83_3450(27.125, 19.75, 0, 6, 0, " AV R   ");
    f_1a83_3450(33.375, 19.75, 0, 6, 0, d_432e_e813);
    f_1a83_3450(27.125, 20.75, 0, 6, 0, " MIN R  ");
    f_1a83_3450(33.375, 20.75, 0, 6, 0, d_432e_e863);
    f_1a83_3450(27.125, 21.75, 0, 6, 0, " MAX R  ");
    f_1a83_3450(33.375, 21.75, 0, 6, 0, d_432e_e953);
    f_1a83_3450(1.375, 21.625, 1, 8, 98, " MORALE");
    sprintf(buf, " %s", d_432e_e8b3);
    f_1a83_3450(13.875, 21.625, 1, 8, 98, buf);
    f_a214_2db7();
    f_1a83_5ce1();
    if (d_432e_e903[0] != 0)
        f_a214_2e56();
    f_1a83_4d96(2, 35.5, 1.125, 1, 2, 24, "HST");
    if (buy != 0 && d_61eb_d9c4 == 0) {
        f_1a83_4d96(2, 24.625, 1.125, 1, 3, 24, "STA");
        f_1a83_4d96(2, 28.25, 1.125, 1, 3, 24, "BUY");
        f_1a83_4d96(2, 31.875, 1.125, 1, 3, 24, "ADD");
        if (f_1a83_2ad4(d_28d4_1958[18][player]) == 0 && d_28d4_1958[18][player] != team && f_1a83_2ad4(d_3334_0000[7][player]) == 0)
            f_1a83_54f9(2);
        if (d_61eb_d9d5 != 0) {
            f_1a83_54f9(2);
            f_1a83_54f9(3);
        }
        if (f_1a83_6b4c(player))
            f_1a83_54f9(2);
    }
    d_61eb_d9ca = 0;
    d_61eb_d5ee = 0;
    d_61eb_da41 = -1;
    d_61eb_d954 = f_1a83_5296(0);
    d_61eb_da41 = 0;
    if (d_61eb_d954 == 0)
        d_61eb_d9ca = -1;
    else if (d_61eb_d954 == 1)
        f_a214_510d(player);
    else if (d_61eb_d954 == 2)
        d_61eb_d5ee = -1;
    else if (d_61eb_d954 == 3 || d_61eb_d954 == 4) {
        d_61eb_d9ac = -1;
        if (team > -1)
            d_61eb_d9ac = team;
        else if (d_61eb_d652 == 2) {
            f_9f8d_14a0(0);
            sprintf(buf, "%.3s", d_432e_dfdf);
            d_61eb_d6c8 = atoi(buf);
            d_61eb_d6ca = atoi(f_215d_0f63(d_432e_dfdf, 3));
            if (d_3334_cee2[d_61eb_d6c8] == club)
                d_61eb_d9ac = d_3334_cee2[d_61eb_d6ca];
            else if (d_3334_cee2[d_61eb_d6ca] == club)
                d_61eb_d9ac = d_3334_cee2[d_61eb_d6c8];
        }
        if (d_61eb_d9ac == -1) {
            f_9f8d_1379(0);
            if (d_61eb_d980 > -1)
                d_61eb_d9ac = d_3334_cee2[d_61eb_d980];
        }
        if (d_61eb_d9ac > -1) {
            if (d_61eb_d9ac == club) {
                sprintf(buf, "You already own %s", f_1a83_462c(player));
                f_1a83_0bb7(buf);
            } else if (d_61eb_d954 == 3 && d_3334_0000[7][player] < 255)
                f_1a83_0bb7("His loan must be terminated first");
            else if (d_61eb_d954 == 3 && d_3334_bea2[d_61eb_d9ac] < 30)
                f_1a83_0bb7("The board refuse any transfers");
            else if (d_61eb_d954 == 3 && f_1a83_65a9(f_1a83_6b4c(player) && f_1a83_6b6e(player) == 0 ? 1 : 0)) {
                sprintf(msg, "%s transfer deadline|has passed", f_1a83_6b4c(player) && f_1a83_6b6e(player) == 0 ? "Foreign" : "Domestic");
                f_1a83_0bb7(msg);
            }
            else if (d_61eb_d954 == 3 && d_3334_c0fa[d_61eb_d9ac] > 3)
                f_1a83_0bb7("Not enough time");
            else if (d_61eb_d954 == 3 && (d_432e_45de[player].f9 || d_432e_45de[player].f30)) {
                sprintf(buf, "%s not for sale", f_1a83_462c(player));
                f_1a83_0bb7(buf);
            } else if (d_61eb_d954 == 3 && d_3334_beca[d_61eb_d9ac] + d_3334_c7b2[d_61eb_d9ac] >= 26) {
                strcpy(buf, "Maximum squad size is 26");
                if (d_3334_c7b2[d_61eb_d9ac] > 0) {
                    sprintf(more, "|(%d player%s loaned out)", d_3334_c7b2[d_61eb_d9ac], d_3334_c7b2[d_61eb_d9ac] > 1 ? "s" : "");
                    strcat(buf, more);
                }
                f_1a83_0bb7(buf);
            } else if (f_1a83_6b4c(player) == 0 && d_61eb_d954 == 3 && f_1a83_2c20(player)) {
                sprintf(buf, "%s have too few players", (char far *)d_61eb_b0ec[d_28d4_1958[18][player]]);
                f_1a83_0bb7(buf);
            } else if (d_61eb_d954 == 4 && d_432e_066e[d_61eb_d9ac][0] == 15)
                f_1a83_0bb7("shortlist is full");
            else if (d_61eb_d954 == 3)
                d_61eb_d5ee = d_61eb_d9ac + 1;
            else if (d_61eb_d954 == 4)
                d_61eb_d5ee = -d_61eb_d9ac - 2;
        }
    }
}

void f_a214_510d(int p)
{
    FILE *fp;

    f_215d_19eb(2);
    fp = fopen(d_5313_0e10, "rb+");
    fseek(fp, (long)p * 133, 0);
    fread(d_432e_d995, 1, 133, fp);
    fclose(fp);
    d_61eb_d8a4 = d_3334_0000[20][p];
    if (d_61eb_d8a4 < 17) {
        f_a214_0000(p, 0);
        f_1a83_4d96(2, 1.25, 22.5, 1, 4, 0x12d, "                 EXIT");
        do
            d_61eb_d59e = f_1a83_5296(d_61eb_d5e2);
        while (d_61eb_d59e <= 0);
    } else {
        d_61eb_d95c = 0;
        do {
            f_a214_0000(p, d_61eb_d95c);
            f_1a83_4d96(2, 1.25, 22.5, 1, 12, 0x49, "   MORE");
            f_1a83_4d96(2, 11.0, 22.5, 1, 4, 0xdf, "            EXIT");
            do
                d_61eb_d59e = f_1a83_5296(d_61eb_d5e2);
            while (d_61eb_d59e <= 0);
            if (d_61eb_d59e == 1)
                d_61eb_d95c = 1 - d_61eb_d95c;
        } while (d_61eb_d59e != 2);
    }
}
