/* @at 7c74:0000 */
/* @data 60ae:1fe4 */
/* @module */

/* Overlay 3: the match: setting it up and restoring the teams afterwards, the ground and
 * the gate, the halves, extra time and penalties, the clock and the score, keys during
 * play, fouls, injuries, bookings and sendings off with their commentary, tactical
 * moves and substitutions. CM93's version of CM1's 7555.C. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <math.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_7c74_0000(char far *s);
void f_7c74_00ce(int team);
void f_7c74_00eb(void);
void f_7c74_0769(char flag, char far *s);
void f_7c74_08c5(void);
void f_7c74_0a8f(void);
void f_7c74_0bb2(void);
void f_7c74_1203(void);
void f_7c74_1465(void);
void f_7c74_1ca2(void);
void f_7c74_1db5(int team);
void f_7c74_2043(void);
char f_7c74_2387(int club, int round);
char f_7c74_23db(int club, int round);
void f_7c74_2408(int a, int b, int c);
void f_7c74_258c(void);
void f_7c74_2698(void);
void f_7c74_271d(void);
void f_7c74_27a2(void);
void f_7c74_2810(void);
void f_7c74_287e(void);
void f_7c74_2a5a(void);
unsigned char f_7c74_2c36(unsigned char a, int b);
unsigned char f_7c74_2c72(unsigned char a, int b);
void f_7c74_2cae(void);
void f_7c74_2eb3(void);
void f_7c74_2f7a(int team);
void f_7c74_304d(int team);
void f_7c74_30d7(int team);
int f_7c74_3123(int team, int p);
void f_7c74_32f3(int team);
void f_7c74_387e(int a, int b, int team, int n);
void f_7c74_3d87(int team, int p);
void f_7c74_428d(void);
void f_7c74_42ef(int team, char c);
void f_7c74_445d();             /* no prototype: 38b3 passes it two arguments */
void f_7c74_4913(int team);
void f_7c74_49bd(float x, float y);
void f_7c74_4a2e(void);

void f_14bc_3e40(float x, float y, int a, int b, int c, char far *s);
void f_14bc_3672(float x, float y, int bg, int fg, int w, char far *s);
void f_14bc_356a(int x, int y, int colour, char far *s);
void f_1bd3_0dbc(int ticks);
void f_14bc_548f(int a, char b);
char f_14bc_2cc0(int x);
long f_1bd3_0d69(long n);
char far *f_1bd3_0157();
char far *f_1bd3_0f30(char far *s, unsigned n);
void f_1bd3_114b(unsigned x, int y, unsigned x2, unsigned y2, int dy, int colour);
void f_1bd3_0fe2(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_1bd3_08cb(int c);
void f_1bd3_08d6(int c);
void f_1bd3_08e1(int x1, int y1, int x2, int y2);
void f_14bc_4bd3(char far *title);
char far *f_14bc_4b12(int division, char full);
int f_14bc_6b05(int x);
char f_14bc_248a(int);
char f_14bc_2594(int);
char f_14bc_25c5(int);
char f_14bc_295d(int, int);
char f_14bc_2784(int, int);
char f_14bc_2835(int, int);
char f_14bc_28cc(int, int);
char f_14bc_2b82(int);
char f_14bc_2ab7(int, int);
char f_14bc_2b27(int a, int b);
void f_14bc_58db(int a);
void f_817e_2fde(void);
void f_817e_3d44(int a, int b, char c);
void f_817e_2e44(int team);
void f_ad38_4141(int team);
void f_b628_59d8(int team);
void f_8683_00a2(void);
void f_8683_0000(void);
extern int d_60ae_dda0;
extern int d_60ae_dcb4;
extern char near *d_60ae_b572[];
extern char near *d_60ae_b616[];
extern int d_60ae_dd86;
extern int d_60ae_dc7c;
extern char d_60ae_d96a;
extern int d_60ae_dd9c;
extern int d_60ae_dc7a;
extern int d_60ae_dce0;
extern int d_60ae_dc78;
extern int d_60ae_dc76;
extern int d_60ae_dc74;
extern int d_60ae_dd76;
extern int d_60ae_dcd2;
extern int d_60ae_dcd0;
extern int d_60ae_dc84;
extern int d_60ae_dc82;
extern int d_60ae_dc72;
extern char d_60ae_d95c;
extern int d_60ae_dc70;
extern int d_60ae_dc6e;
extern int d_60ae_dd98;
extern int d_60ae_dc6c;
extern int d_60ae_dd48;
extern char d_60ae_d95b;
extern int d_60ae_dc6a;
extern int d_60ae_dc68;
extern int d_60ae_dc66;
extern int d_60ae_dc64;
extern char d_60ae_d95a;
extern int d_60ae_dc62;
extern int d_60ae_dc60;
extern int d_60ae_dc5e;
extern int d_60ae_dc5c;
extern int d_60ae_dc5a;
extern int far d_2289_d678[];
extern int far d_471b_b4de[];
extern int far d_471b_b5a2[];
extern int far d_54d9_11fe[][2][98];
extern char far d_2289_5bdc[];
struct score { unsigned home : 4; unsigned away : 4; };
extern struct score far d_2289_73ec[];
extern int far d_323f_4494[][80];
extern char far d_2289_5658[][80];
extern char far d_2289_4458[];
extern char far d_2289_44a8[];
extern char far d_2289_44f8[];
extern char far d_2289_4408[];
extern char far d_2289_4548[];
extern char far d_2289_43b8[];
extern unsigned char far d_323f_4c14[][82];
char f_14bc_2a01(int);
char f_14bc_2a5c(int);
int f_14bc_2c3a(int, int);
int f_14bc_468c(int team);
float f_1bd3_1088(void);
int f_1bd3_1307(int a, int b);
int f_1bd3_1369(int a, int b);
float f_1bd3_1341(float a, float b);
long f_1bd3_131c(long a, long b);
void f_a3de_0f2a(int t, int k, char c);
void f_7732_31e2(int team);
int f_7732_292a(int week, int n);
void f_8683_16db(int team, int b, int c);
extern char near *d_60ae_b61a[];
extern char near *d_60ae_b612;
extern char near *d_60ae_b614;
extern int d_60ae_dd78;
extern int d_60ae_dce4;
extern int d_60ae_dd60;
extern int d_60ae_dc58;
extern int d_60ae_dc56;
extern int d_60ae_dc54;
extern int d_60ae_dc48;
extern int d_60ae_dc44;
extern long d_60ae_d81f;
extern float d_60ae_d8c3;
extern float d_60ae_d8bf;
extern unsigned char d_60ae_d98e;
extern int d_60ae_dd54;
extern float d_60ae_d8bb;
extern float d_60ae_d8b7;
extern float d_60ae_d8b3;
extern float d_60ae_d8af;
extern unsigned char far d_323f_4f9a[];
extern unsigned char far d_323f_4e00[];
extern unsigned char far d_323f_5f9e[];
extern unsigned char far d_323f_4e52[];
extern int d_60ae_dc52;
extern int d_60ae_dc50;
extern int d_60ae_dc4e;
extern int d_60ae_dc4c;
extern int d_60ae_dc4a;
extern int d_60ae_dc46;
extern int d_60ae_dcb8;
extern int d_60ae_dd30;
extern int d_60ae_dc42;
extern int d_60ae_dc40;
extern int d_60ae_dc3e;
extern int d_60ae_dc3c;
extern int d_60ae_dc3a;
extern int d_60ae_dc38;
extern int d_60ae_dc36;
extern int d_60ae_dc34;
extern int d_60ae_dc2c;
extern int d_60ae_dc2a;
extern int d_60ae_dc32;
extern int d_60ae_dc9a;
extern int d_60ae_dc30;
extern int d_60ae_dc2e;
extern int d_60ae_dcca;
extern int d_60ae_dcc8;
extern int d_60ae_dccc;
extern char d_60ae_d959;
extern char d_60ae_d973;
extern char d_60ae_d958;
extern char d_60ae_d957;
extern int d_60ae_dc28;
extern int d_60ae_dc26;
extern int d_60ae_dc24;
extern int d_60ae_dc22;
extern int d_60ae_dc20;
extern int d_60ae_dc1e;
char f_14bc_5e32(int player);
void f_ad38_4044(int team);
void f_b628_5940(int team);
void f_ad38_8047(int player, char c);
extern unsigned char far d_54d9_4f40[][140];
extern unsigned char far d_54d9_0e18[];
extern unsigned char far d_54d9_08b4[];
extern unsigned char far d_54d9_0fe4[];
extern int far d_323f_47b4[];
extern unsigned char far d_323f_2630[];
extern long far d_323f_4354[];
extern unsigned char far d_323f_0500[][14];
extern unsigned char far d_323f_0538[][14];
extern int far d_323f_0592[][14];
extern unsigned char far d_471b_0000[][1860];
extern int far d_323f_058c[];
extern long far d_2289_ea08[][14];
extern unsigned char d_60ae_d982;
extern unsigned char d_60ae_d981;
extern char d_60ae_d969;
extern int far d_471b_b7a8[][26];
extern unsigned char d_60ae_ddbf[][4];
extern unsigned char d_60ae_ddc0[][4];
extern char far d_2289_4318[];
extern char far d_2289_42c8[];
extern int d_60ae_dd92;
extern char far d_471b_b01c[];
extern unsigned char far d_323f_64e0[][3][14];
extern unsigned char far d_323f_0e8a[][3][14];
unsigned char f_b628_27dc(int player);
void f_817e_160e(int team);
void f_817e_1b3e(int team);
void f_817e_0799(char c);
void f_1bd3_0c36(void);
void f_817e_030a(void);
void f_817e_0bfb(int team, char far *s);
void f_817e_0ef8(void);
void f_8683_3924(void);
char f_14bc_2b02(int);
extern int d_60ae_dc1c;
extern int d_60ae_dc1a;
extern int d_60ae_dd84;
extern int d_60ae_dc18;
extern int d_60ae_dc16;
extern char d_60ae_d94c;
extern int d_60ae_dc14;
extern int d_60ae_dc12;
extern int d_60ae_dc10;
extern int d_60ae_dc0e;
extern int d_60ae_dcce;
extern int d_60ae_dd58;
extern char d_60ae_d956;
extern unsigned char far d_323f_4ea4[];
extern unsigned char far d_323f_4ef6[];
extern unsigned char far d_323f_648c[][14];
extern unsigned char far d_323f_4cb8[];
extern unsigned char far d_323f_4d0a[];
extern unsigned char far d_54d9_0a80[];
extern unsigned char far d_54d9_0c4c[];
extern char far d_2289_4278[];
extern char far d_2289_41d8[];
extern char far d_2289_4188[];
void unmapped_f_7555_0390(int team, int mode);
void unmapped_f_7555_0634(void);
void f_a694_22e9(char far *title);
void f_817e_2b51(int team);
void unmapped_f_6e68_5848(int team);
int f_14bc_5635(int a);
void f_a694_49c9(int player, int a, char b);
void f_8aa1_4f06(int player, int a);
void f_1bd3_0928(int x1, int y1, int x2, int y2);
void f_14bc_50f8(int a, float x, float y, int c, int d, int e, char far *s);
char far *f_14bc_2f2c(int x, char c);
char far *f_14bc_48b4(int player);
char far *f_14bc_4703(int player);
void far *f_1bd3_1617(int handle, int page);
char unmapped_f_992a_74c1(int, int);
char unmapped_f_992a_752d(int, int);
char unmapped_f_992a_75bc(int, int);
extern int d_60ae_d9aa;
extern int d_60ae_dc86;
extern int d_60ae_dd5c;
extern int d_60ae_dcba;
extern int d_60ae_058c[];
extern char d_60ae_d977;
extern char d_60ae_d975;
extern int d_60ae_dc80;
extern int d_60ae_dd4a;
extern int d_60ae_dd44;
extern int d_60ae_dc7e;
extern float d_60ae_d8eb;
extern int d_60ae_fdea;
extern char far *d_60ae_dd8a;
extern int far unmapped_d_2f3c_7f93[];
extern unsigned char far unmapped_d_2f3c_5b8f[];
extern unsigned char far unmapped_d_2f3c_35ad[][3][13];
extern unsigned char far unmapped_d_2f3c_35ac[][3][13];
extern unsigned char far unmapped_d_2f3c_2ce4[][13];
extern int far unmapped_d_2f3c_2d55[][13];
extern int far unmapped_d_2f3c_2d57[][13];
extern int far unmapped_d_2f3c_1534[];
extern int far unmapped_d_2f3c_7c73[][80];
extern unsigned char far d_323f_0fe4[];
extern unsigned char far d_323f_0e18[];
extern unsigned char far d_323f_0a80[];
extern int far d_323f_11fe[][2][94];
extern char far * far unmapped_d_5471_16f0[];
extern char far * far unmapped_d_5471_17c4[];
extern int far unmapped_d_483b_a0b8[];
extern int far unmapped_d_483b_a174[];
extern char far d_2289_4c0c[];
extern char far d_2289_52f6[];
extern char far d_2289_4a7c[];
extern char far d_2289_49e6[];
extern char far d_2289_5918[][80];
extern char far d_2289_4996[];
extern char far d_2289_4946[];
extern char far d_2289_48f6[];
void f_1bd3_0c31(int a);
void unmapped_f_14d2_0aef(void);
char unmapped_f_992a_79b8(int);
extern char far d_2289_48a6[];
extern char far d_2289_4856[];
extern unsigned char far d_323f_3c78[][140];
extern long far unmapped_d_2f3c_7b33[];
extern int d_60ae_fdda;
extern char far *unmapped_d_5d9c_a050;
extern unsigned char far d_323f_08b4[];
extern long far unmapped_d_2f3c_1bec[][13];
extern unsigned char far unmapped_d_2f3c_855b[][13];
extern unsigned char huge unmapped_d_483b_0000[][1702];
extern int far unmapped_d_483b_a372[][26];
extern char far d_2289_bfa2[];
extern char far d_2289_f4d2[];
extern char far d_2289_4806[];
extern char far d_2289_47b6[];
extern char far d_2289_4766[];
void f_817e_11f4(int team, int a, int b);
void f_817e_0ada(void);
void f_817e_0239(int team);
void f_817e_0371(int a, char c, char d, char e, int b, int team);
void unmapped_f_7eeb_3b4b(void);
void f_1bd3_0821(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
extern int d_60ae_dd08;
extern int d_60ae_dc0a;
extern int d_60ae_dc0c;
extern int d_60ae_dc08;
extern char d_60ae_d98d;
extern int d_60ae_dc06;
extern int d_60ae_dc02;
extern int d_60ae_dc00;
extern int d_60ae_dbfe;
extern int d_60ae_dbfc;
extern int d_60ae_dbfa;
extern int d_60ae_dbf8;
extern int d_60ae_dbf6;
extern int d_60ae_dbf4;
extern char d_60ae_d8fd;
extern int d_60ae_d9a8;
extern int d_60ae_d9a6;
extern int d_60ae_dd42;
extern int d_60ae_dbf2;
extern int d_60ae_dbf0;
extern int d_60ae_dbee;
extern int d_60ae_dbec;
extern int d_60ae_dbea;
extern int d_60ae_dbe8;
extern char d_60ae_d955;
extern char d_60ae_d953;
extern char d_60ae_d954;
extern char d_60ae_d968;
void f_b628_3e2f(char team);
void f_b628_3926(char team);
void f_b628_41ed(char team);
void f_b628_37d5(char team);
void f_b628_3b3f(char team);
unsigned char f_b628_4310(char team);
extern char far d_2289_4716[];
extern char far d_2289_4676[];
extern char far d_2289_4626[];
extern unsigned char far d_323f_0c4c[];
extern unsigned char far d_323f_63d8[][60];
extern unsigned char far d_323f_6324[][60];
int f_1bd3_0c16(void);
char far *f_1bd3_0cec(void);
char f_14bc_679d(int a, int b);
char f_14bc_692a(int x);
char f_14bc_694c(int x);
char f_14bc_6969(int x);
char f_14bc_6986(int x);
char f_14bc_69a8(int x);
char f_14bc_69ca(int x);
void f_817e_019a(int minute);
unsigned char f_817e_1709(int p, int team);
extern int d_60ae_dbe6;
extern int d_60ae_dbe4;
extern int d_60ae_dbe2;
extern int d_60ae_dbe0;
extern char d_60ae_d952;
extern char d_60ae_d951;
extern char d_60ae_d950;
extern char d_60ae_d94f;
extern char d_60ae_d94e;
extern char d_60ae_d94d;
extern char d_60ae_d94b;
extern char d_60ae_d98c;
extern int d_60ae_dcc4;
extern int d_60ae_dbde;
extern int d_60ae_dbdc;
extern int d_60ae_dcac;
extern int d_60ae_dd0e;
extern int d_60ae_dcfa;
extern int d_60ae_dbda;
extern int d_60ae_dbd8;
extern int d_60ae_dbd6;
extern int d_60ae_dbd4;
extern int d_60ae_dbd2;
extern int d_60ae_dbd0;
extern int d_60ae_dd52;
extern char far d_2289_45d2[];
extern char far d_2289_4582[];
void f_817e_0c86(void);
void f_be31_0000(char team);
void f_14bc_3c75(float x, float y, int colour, char far *s);
void f_14bc_4587(float x, float y, int team);
void f_14bc_2f90(int n, char far *title, char far *items);
void f_14bc_3334(int last);
extern char d_60ae_d961;
extern int d_60ae_dbc8;
extern int d_60ae_dbca;
extern int d_60ae_dbcc;
extern int d_60ae_dbce;
extern int d_60ae_dd5a;
extern char far d_2289_43f2[];
extern char far d_2289_4442[];
extern char far d_2289_4492[];
extern char far d_2289_44e2[];
extern char far d_2289_4532[];
extern unsigned char far unmapped_d_2f3c_2d16[][13];
void f_817e_0000(int a, int b, int c, int d);
char far *f_14bc_483d(int player);
void f_14bc_38bc(float x, float y, int colour, char far *s);
extern int d_60ae_dbc0;
extern int d_60ae_dbc2;
extern int d_60ae_dbc4;
extern int d_60ae_dbc6;
extern char d_60ae_dd7e[][2];
extern char d_60ae_dd82[][2];
extern char far d_2289_56d4[];
extern char far d_2289_5684[];
char f_14bc_612e(char team, char week, char n);
extern unsigned char far d_323f_0543[][14];
extern char far d_2289_4134[];
extern char far d_2289_40e4[];
extern char far d_2289_4094[];
extern char far d_2289_3f54[];
extern char far d_2289_3c84[];
extern char far d_2289_3dc4[];
extern char far d_2289_3f04[];
extern char far d_2289_51c8[];
extern char far d_2289_5218[];
extern unsigned char far d_323f_051c[][14];
extern unsigned char far d_323f_6529[][3];
extern unsigned char far d_471b_ae55[][3];


void f_7c74_0000(char far *s)
{
    char buf[80];

    sprintf(buf, "%*s", (72 - strlen(s) * 4) / 8 + strlen(s), s);
    f_14bc_3e40(1.5, 21.875, 1, 2, 0x90, buf);
    f_1bd3_0dbc(75);
    f_14bc_3e40(1.5, 21.875, 1, 4, 0x90, "       DONE");
    f_14bc_548f(d_60ae_dda0, 0);
}

void f_7c74_00ce(int team)
{
    if (team > 0) {
        f_14bc_548f(team, 0);
        d_60ae_dcb4 = 0;
    }
}

/* the week's matches, played in the background, with the latest results on screen
 * (CM1's f_7555_0634) */
void f_7c74_00eb(void)
{
    char buf[80];
    unsigned n;

    for (d_60ae_dd86 = 0; d_60ae_dd86 < 40; d_60ae_dd86++)
        d_2289_d678[d_60ae_dd86] = 0;
    n = d_60ae_dd86 = 0;
    d_60ae_dc7c = -1;
    d_60ae_d96a = -1;
    d_471b_b4de[d_60ae_dd9c] = d_60ae_dc7a;
    d_471b_b5a2[d_60ae_dd9c] = d_60ae_dce0;
    f_7c74_08c5();
    d_60ae_dc78 = 1;
    d_60ae_dc76 = ((d_60ae_dd9c & 1) && d_60ae_dd9c > 6 ? 910 : 440) + f_1bd3_0d69(3);
    if (f_14bc_248a(d_60ae_dd9c))
        d_60ae_dc76 += 5;
    for (d_60ae_dc74 = 0; d_60ae_dc74 <= d_60ae_dce0 - 1; d_60ae_dc74++) {
        d_60ae_dd76 = d_2289_4548[d_60ae_dc74] - 32;
        d_60ae_dcd2 = d_54d9_11fe[d_60ae_dd76][0][d_60ae_dd9c] / 32;
        d_60ae_dcd0 = d_54d9_11fe[d_60ae_dd76][1][d_60ae_dd9c] / 32;
        d_60ae_dc84 = d_60ae_dcd2;
        d_60ae_dc82 = d_60ae_dcd0;
        f_7c74_1203();
        f_7c74_1465();
        f_7c74_0a8f();
        f_7c74_0bb2();
        f_7c74_2043();
        f_7c74_1ca2();
        d_60ae_d95c = d_60ae_dc72 > 90 ? -1 : 0;
        d_60ae_dc72 = -1;
        f_817e_2fde();
        if (d_60ae_dc70 + d_60ae_dc6e > 0) {
            f_14bc_58db(0);
            f_817e_3d44(d_60ae_dc84, d_60ae_dc82, -1);
        }
        if (d_60ae_dcd2 < 80)
            f_817e_2e44(d_60ae_dcd2);
        if (d_60ae_dcd0 < 80)
            f_817e_2e44(d_60ae_dcd0);
        memcpy(d_2289_5bdc + d_60ae_dd76 * 154, d_2289_73ec, 154);
        if (d_60ae_dcd2 < 80) {
            d_323f_4494[0][d_60ae_dcd2] = d_60ae_dc7a + d_60ae_dd76;
            d_323f_4494[1][d_60ae_dcd2] = d_60ae_dd76;
            d_323f_4494[2][d_60ae_dcd2] = d_60ae_dd9c - 1;
            d_2289_5658[0][d_60ae_dcd2] = -1;
            f_ad38_4141(d_60ae_dcd2);
            f_b628_59d8(d_60ae_dcd2);
        }
        if (d_60ae_dcd0 < 80) {
            d_323f_4494[0][d_60ae_dcd0] = d_60ae_dc7a + d_60ae_dd76;
            d_323f_4494[1][d_60ae_dcd0] = d_60ae_dd76;
            d_323f_4494[2][d_60ae_dcd0] = d_60ae_dd9c - 1;
            d_2289_5658[0][d_60ae_dcd0] = -1;
            f_ad38_4141(d_60ae_dcd0);
            f_b628_59d8(d_60ae_dcd0);
        }
        f_8683_00a2();
        if (d_60ae_dc70 + d_60ae_dc6e == 0 && d_60ae_d95c == 0
            && (f_1bd3_0d69(3) > 0 || d_60ae_dc74 == 0
                || f_14bc_248a(d_60ae_dd9c) && d_60ae_dcd2 / 20 == 0)
            && d_60ae_dce0 > 3 && n < 12) {
            if (d_60ae_dd9c % 2 == 0)
                strcpy(d_2289_44f8, "Today's");
            else
                strcpy(d_2289_44f8, "Tonights");
            strcpy(buf, d_2289_44a8);
            if (f_14bc_248a(d_60ae_dd9c))
                sprintf(d_2289_44a8, "%s  %s", f_14bc_4b12(d_60ae_dcd2 / 20 + 1, 2), buf);
            else if (f_14bc_2594(d_60ae_dd9c))
                sprintf(d_2289_44a8, "FA  %s", buf);
            else if (f_14bc_25c5(d_60ae_dd9c))
                sprintf(d_2289_44a8, "%cC  %s", "Coca-Cola"[0], buf);
            else if (f_14bc_295d(d_60ae_dd9c, d_60ae_dd76 + 1))
                sprintf(d_2289_44a8, "AI  %s", buf);
            else if (f_14bc_2784(d_60ae_dd9c, d_60ae_dd76 + 1))
                sprintf(d_2289_44a8, "UE  %s", buf);
            else if (f_14bc_2835(d_60ae_dd9c, d_60ae_dd76 + 1))
                sprintf(d_2289_44a8, "CW  %s", buf);
            else if (f_14bc_28cc(d_60ae_dd9c, d_60ae_dd76 + 1))
                sprintf(d_2289_44a8, "EC  %s", buf);
            else if (f_14bc_2b82(d_60ae_dd9c))
                sprintf(d_2289_44a8, "PL  %s", buf);
            else if (d_60ae_dd9c == 10)
                sprintf(d_2289_44a8, "SH  %s", buf);
            else if (d_60ae_dd9c <= 8)
                sprintf(d_2289_44a8, "FR  %s", buf);
            strcat(d_2289_44f8, " Result");
            if (d_60ae_dce0 > 1)
                strcat(d_2289_44f8, "s");
            if (d_60ae_dc78 == 1) {
                f_14bc_4bd3("");
                f_1bd3_08cb(16);
                f_1bd3_08e1(20, 20, 308, 188);
                f_1bd3_08cb(20);
                f_1bd3_08e1(16, 16, 304, 184);
                f_14bc_3e40(2.5, 3.0, 1, 8, 0x119, "           Latest Results");
                f_7c74_0769(1, d_2289_44f8);
                sprintf(buf, "Week %d Season %d", f_14bc_6b05(d_60ae_dd9c), d_60ae_dd98);
                f_7c74_0769(0, buf);
            }
            if (d_60ae_dc78 == 3 || f_1bd3_0d69(3) == 0) {
                if (d_60ae_dc78 > 1)
                    f_7c74_0769(0, "");
                sprintf(d_2289_4458, "%d", d_60ae_dc76);
                sprintf(buf, "%c.%s", d_2289_4458[0], f_1bd3_0f30(d_2289_4458, 2));
                f_7c74_0769(1, buf);
                d_60ae_dc76++;
            }
            f_7c74_0769(0, d_2289_44a8);
            n++;
        }
    }
    if (d_60ae_dc78 > 1) {
        f_7c74_0769(0, "");
        f_7c74_0769(0, "");
        f_7c74_0769(0, "Classified Check Follows");
    }
    f_8683_0000();
    d_60ae_dc7a += d_60ae_dce0;
    d_60ae_d96a = 0;
}

void f_7c74_0769(char flag, char far *s)
{
    char buf[320];

    if (d_60ae_dc78 == 17) {
        for (d_60ae_dc6c = 1; d_60ae_dc6c <= 4; d_60ae_dc6c++) {
            f_1bd3_114b(16, 38, 304, 183, 2, 20);
            f_1bd3_08d6(20);
            f_1bd3_0fe2(18, 38, 302, 38);
            f_1bd3_0fe2(18, 39, 302, 39);
        }
        d_60ae_dc78 = 16;
    }
    if (strlen(s) != 0) {
        if (flag)
            f_14bc_3672(3.0, d_60ae_dc78 + 4.875, 1, 2, 0, s);
        else
            for (d_60ae_dd48 = 1; d_60ae_dd48 <= strlen(s); d_60ae_dd48++) {
                sprintf(buf, "%c", s[d_60ae_dd48 - 1]);
                f_14bc_356a((d_60ae_dd48 - 1) * 6 + 32, d_60ae_dc78 * 8 + 39, 1, buf);
                f_1bd3_0dbc(1);
            }
    }
    d_60ae_dc78++;
}

void f_7c74_08c5(void)
{
    char buf[320];

    strcpy(d_2289_4408, "");
    strcpy(d_2289_4548, "");
    for (d_60ae_dd76 = 0; d_60ae_dd76 <= d_60ae_dce0 - 1; d_60ae_dd76++) {
        d_60ae_dcd2 = d_54d9_11fe[d_60ae_dd76][0][d_60ae_dd9c] / 32;
        d_60ae_dcd0 = d_54d9_11fe[d_60ae_dd76][1][d_60ae_dd9c] / 32;
        d_60ae_d95b = f_14bc_2cc0(d_60ae_dcd2);
        if (d_60ae_d95b == 0)
            d_60ae_d95b = f_14bc_2cc0(d_60ae_dcd0);
        if (d_60ae_d95b)
            strcat(d_2289_4408, f_1bd3_0157(d_60ae_dd76 + 32));
        else
            strcat(d_2289_4548, f_1bd3_0157(d_60ae_dd76 + 32));
    }
    for (d_60ae_dd76 = 0; d_60ae_dd76 <= d_60ae_dce0 - 1; d_60ae_dd76++) {
        d_60ae_dc6a = f_1bd3_0d69(strlen(d_2289_4548));
        d_60ae_dc68 = f_1bd3_0d69(strlen(d_2289_4548));
        d_60ae_dc66 = d_2289_4548[d_60ae_dc6a];
        d_60ae_dc64 = d_2289_4548[d_60ae_dc68];
        d_2289_4548[d_60ae_dc6a] = d_60ae_dc64;
        d_2289_4548[d_60ae_dc68] = d_60ae_dc66;
    }
    strcpy(buf, d_2289_4548);
    sprintf(d_2289_4548, "%s%s", d_2289_4408, buf);
}

void f_7c74_0a8f(void)
{
    d_60ae_d95a = 0;
    if (f_14bc_2ab7(d_60ae_dd9c, d_60ae_dd76 + 1)) {
        strcpy(d_2289_43b8, "WEMBLEY STADIUM");
        d_60ae_dc62 = 2;
        d_60ae_dc60 = 2;
    } else if (d_60ae_dd9c == 91) {
        strcpy(d_2289_43b8, "ROTTERDAM");
        d_60ae_dc62 = 2;
        d_60ae_dc60 = 2;
    } else if (d_60ae_dd9c == 97) {
        strcpy(d_2289_43b8, "MILAN");
        d_60ae_dc62 = 2;
        d_60ae_dc60 = 2;
    } else if (f_14bc_2b27(d_60ae_dd9c, d_60ae_dd76 + 1)) {
        d_60ae_dc5c = 0;
        for (d_60ae_dc5a = 0; d_60ae_dc5a <= 79; d_60ae_dc5a++)
            if (d_323f_4c14[1][d_60ae_dc5a] > d_60ae_dc5c && d_60ae_dc5a != d_60ae_dcd2
                && d_60ae_dc5a != d_60ae_dcd0 && d_60ae_dc5a != d_60ae_dc7c) {
                d_60ae_dc5c = d_323f_4c14[1][d_60ae_dc5a];
                d_60ae_dc5e = d_60ae_dc5a;
            }
        d_60ae_dc7c = d_60ae_dc5e;
        strcpy(d_2289_43b8, d_60ae_b616[d_60ae_dc5e]);
        d_60ae_dc62 = 2;
        d_60ae_dc60 = 2;
    } else {
        d_60ae_dc5e = d_60ae_dcd2;
        if (d_60ae_dc5e < 80)
            strcpy(d_2289_43b8, d_60ae_b616[d_60ae_dc5e]);
        else
            strcpy(d_2289_43b8, d_60ae_b572[d_60ae_dc5e]);
        d_60ae_dc62 = 3;
        d_60ae_dc60 = 1;
        d_60ae_d95a = -1;
    }
}

void f_7c74_0bb2(void)
{
    d_60ae_dc58 = 0;
    if (strstr(d_2289_43b8, "WEMBLEY") || strstr(d_2289_43b8, "MILAN")
        || strstr(d_2289_43b8, "ROTTERDAM")) {
        d_60ae_d81f = ((d_60ae_dd9c == 10 ? 60 : 80) - f_1bd3_1088()) * 1000.0;
        return;
    }
    if (d_60ae_dd9c == 78 || d_60ae_dd9c == 79) {
        d_60ae_d81f = (d_323f_4c14[1][d_60ae_dc5e] - f_1bd3_1088()) * 1000.0;
        return;
    }
    if ((d_60ae_dc84 < 80 || d_60ae_dc84 >= 480) && (d_60ae_dc82 < 80 || d_60ae_dc82 >= 480)
        && d_60ae_dd9c > 10) {
        long dx, dy;

        d_60ae_dce4 = d_60ae_dc84 - (d_60ae_dc84 >= 480 ? 400 : 0);
        d_60ae_dd60 = d_60ae_dc82 - (d_60ae_dc82 >= 480 ? 400 : 0);
        dx = d_54d9_4f40[0][d_60ae_dce4] - d_54d9_4f40[0][d_60ae_dd60];
        dy = d_54d9_4f40[1][d_60ae_dce4] - d_54d9_4f40[1][d_60ae_dd60];
        d_60ae_dc58 = 30.0 - sqrt(dx * dx + dy * dy) * 0.857;
    }
    d_60ae_dc56 = d_60ae_dc58 > 0 ? d_60ae_dc58 : 0;
    d_60ae_dc54 = d_60ae_dc58;
    if (f_14bc_248a(d_60ae_dd9c)) {
        if (d_323f_4f9a[d_60ae_dcd2] > 1)
            d_60ae_dc56 += f_14bc_2c3a(d_60ae_dc48, d_60ae_dd78);
        if (d_323f_4f9a[d_60ae_dcd0] > 1)
            d_60ae_dc54 += f_14bc_2c3a(d_60ae_dc44, d_60ae_dd78);
    }
    d_60ae_d8c3 = 0.875;
    d_60ae_d8bf = 0.125;
    if (f_14bc_248a(d_60ae_dd9c))
        d_60ae_d98e = 70 - d_60ae_dcd2 / 20 * 6;
    else if (f_14bc_2594(d_60ae_dd9c)) {
        if (d_60ae_dd9c <= 53)
            d_60ae_d98e = 50;
        else if (d_60ae_dd9c >= 58 && d_60ae_dd9c <= 71)
            d_60ae_d98e = 65;
        else {
            d_60ae_d98e = 100;
            /* the original jumps from here to the 0.75/0.25 assignments BCC shares with the
             * f_14bc_2b82 branch (0f00), and keeps the end-of-branch jump after it (a dead
             * jmp 0f00). No C form found gives both while keeping this branch's leaves apart
             * from the 25c5 branch's identical ones (about 150 tried, gotos and labels
             * included): BCC merges them, or drops the dead jump */
            asm db 0E9h, 0AAh, 00h
        }
        d_60ae_d8c3 = 0.75;
        d_60ae_d8bf = 0.25;
    } else if (f_14bc_25c5(d_60ae_dd9c)) {
        if (d_60ae_dd9c <= 27)
            d_60ae_d98e = 50;
        else if (d_60ae_dd9c >= 31 && d_60ae_dd9c <= 55)
            d_60ae_d98e = 65;
        else
            d_60ae_d98e = 80;
        d_60ae_d8c3 = 0.75;
        d_60ae_d8bf = 0.25;
    } else if (f_14bc_2784(d_60ae_dd9c, d_60ae_dd76 + 1) || f_14bc_2835(d_60ae_dd9c, d_60ae_dd76 + 1)
               || f_14bc_28cc(d_60ae_dd9c, d_60ae_dd76 + 1)) {
        d_60ae_d98e = 100;
        d_60ae_d8c3 = 0.95;
        d_60ae_d8bf = 0.05;
    } else if (f_14bc_2b82(d_60ae_dd9c)) {
        d_60ae_d98e = 100;
        d_60ae_d8c3 = 0.75;
        d_60ae_d8bf = 0.25;
    } else if (f_14bc_295d(d_60ae_dd9c, d_60ae_dd76 + 1))
        d_60ae_d98e = 40;
    else
        d_60ae_d98e = 30;
    if (d_60ae_dc58 > 24)
        d_60ae_d98e = d_60ae_d98e + 50;
    d_60ae_dc56 = f_1bd3_1369(100, f_1bd3_1307(d_60ae_dc56 + d_60ae_d98e, 10));
    d_60ae_dc54 = f_1bd3_1369(100, f_1bd3_1307(d_60ae_dc54 + d_60ae_d98e, 10));
    d_60ae_dd54 = (f_1bd3_1369(d_60ae_dcd2 / 20, 3) + f_1bd3_1369(d_60ae_dcd0 / 20, 3)) * 25;
    d_60ae_d8bb = ((d_323f_4e00[d_60ae_dcd2] + d_323f_4c14[0][d_60ae_dcd2] * 2 - 100) / 200.0 + 1)
                  * (d_60ae_dc56 / (d_60ae_dd54 + 75.0));
    d_60ae_d8b7 = ((d_323f_4e00[d_60ae_dcd0] + d_323f_4c14[0][d_60ae_dcd0] * 2 - 75) / 200.0 + 1)
                  * (d_60ae_dc54 / (d_60ae_dd54 + 75.0));
    d_60ae_d8b3 = f_1bd3_1341(d_323f_4c14[1][d_60ae_dcd2] * d_60ae_d8bb * d_60ae_d8c3,
                              d_323f_4c14[1][d_60ae_dcd2] * d_60ae_d8c3);
    d_60ae_d8af = f_1bd3_1341(d_323f_4c14[1][d_60ae_dcd0] * d_60ae_d8b7 * 0.3,
                              d_323f_4c14[1][d_60ae_dcd2] * d_60ae_d8bf);
    d_60ae_d81f = f_1bd3_131c(2000.0 - f_1bd3_1088() * 1000.0,
                              (f_1bd3_1341(d_60ae_d8b3 + d_60ae_d8af - f_1bd3_1088(),
                                           d_323f_4c14[1][d_60ae_dc5e]) - f_1bd3_1088()) * 1000.0);
    if (d_60ae_dcd2 < 80 && d_60ae_dd9c > 10 && d_60ae_dc5e == d_60ae_dcd2) {
        d_323f_5f9e[d_60ae_dcd2]++;
        d_323f_4354[d_60ae_dcd2] += d_60ae_d81f;
    }
}

void f_7c74_1203(void)
{
    if (d_60ae_dcd2 > 79) {
        d_60ae_b612 = d_60ae_b61a[d_60ae_dcd2];
        d_60ae_dc52 = d_54d9_0e18[d_60ae_dcd2];
        f_a3de_0f2a(80, d_60ae_dc52, 0);
        d_323f_4c14[0][80] = f_1bd3_0d69(9) + 4;
        d_323f_4c14[1][80] = f_1bd3_1307((d_54d9_08b4[d_60ae_dcd2] * 6 - 50) * (1 - f_1bd3_0d69(6) / 20.0), 5);
        d_323f_4c14[4][80] = d_54d9_08b4[d_60ae_dcd2];
        d_323f_4c14[6][80] = 100;
        d_60ae_dc50 = d_54d9_0fe4[d_60ae_dcd2];
        if (d_60ae_dc50 == 59)
            d_60ae_dc50 = 0;
        d_60ae_dcd2 = 80;
    } else {
        d_60ae_dc52 = d_323f_2630[d_323f_47b4[d_60ae_dcd2]] % 16;
        d_60ae_dc50 = 0;
    }
    if (d_60ae_dcd0 > 79) {
        d_60ae_b614 = d_60ae_b61a[d_60ae_dcd0];
        d_60ae_dc4e = d_54d9_0e18[d_60ae_dcd0];
        f_a3de_0f2a(81, d_60ae_dc4e, 0);
        d_323f_4c14[0][81] = f_1bd3_0d69(9) + 4;
        d_323f_4c14[1][81] = f_1bd3_1307((d_54d9_08b4[d_60ae_dcd0] * 6 - 50) * (1 - f_1bd3_0d69(6) / 5.0), 5);
        d_323f_4c14[4][81] = d_54d9_08b4[d_60ae_dcd0];
        d_323f_4c14[6][81] = 100;
        d_60ae_dc4c = d_54d9_0fe4[d_60ae_dcd0];
        if (d_60ae_dc4c == 59)
            d_60ae_dc4c = 0;
        d_60ae_dcd0 = 81;
    } else {
        d_60ae_dc4e = d_323f_2630[d_323f_47b4[d_60ae_dcd0]] % 16;
        d_60ae_dc4c = 0;
    }
}

void f_7c74_1465(void)
{
    unsigned i, j;

    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 13; d_60ae_dd92++) {
        d_323f_0538[0][d_60ae_dd92] = d_60ae_dd92 > 10 ? 4 : 0;
        d_323f_0538[1][d_60ae_dd92] = d_60ae_dd92 > 10 ? 4 : 0;
        d_323f_0538[2][d_60ae_dd92] = 0;
        d_323f_0538[3][d_60ae_dd92] = 0;
        d_323f_0500[0][d_60ae_dd92] = 255;
        d_323f_0500[1][d_60ae_dd92] = 255;
        d_323f_0500[2][d_60ae_dd92] = 255;
        d_323f_0500[3][d_60ae_dd92] = 255;
        if (d_60ae_dcd2 < 80) {
            if (!f_14bc_5e32(d_323f_0592[d_60ae_dcd2][d_60ae_dd92]))
                d_323f_0538[4][d_60ae_dd92] = d_471b_0000[11][d_323f_0592[d_60ae_dcd2][d_60ae_dd92]];
            else
                d_323f_0538[4][d_60ae_dd92] = 1;
            d_60ae_dcb8 = d_60ae_dc82;
        } else
            d_323f_0538[4][d_60ae_dd92] = 16;
        if (d_60ae_dcd0 < 80) {
            if (!f_14bc_5e32(d_323f_0592[d_60ae_dcd0][d_60ae_dd92]))
                d_323f_0538[5][d_60ae_dd92] = d_471b_0000[11][d_323f_0592[d_60ae_dcd0][d_60ae_dd92]];
            else
                d_323f_0538[5][d_60ae_dd92] = 1;
            d_60ae_dcb8 = d_60ae_dc84;
        } else
            d_323f_0538[5][d_60ae_dd92] = 16;
    }
    d_60ae_d982 = 0;
    d_60ae_d981 = 0;
    for (i = 0; i < 3; i++)
        d_323f_058c[i] = 0;
    for (i = 0; i < 2; i++)
        for (j = 0; j <= 13; j++)
            d_2289_ea08[i][j] = 0;

    d_60ae_dc70 = 0;
    d_60ae_dc4a = 1;
    if (d_60ae_dcd2 < 80) {
        f_ad38_4044(d_60ae_dcd2);
        f_b628_5940(d_60ae_dcd2);
        if (f_14bc_2cc0(d_60ae_dcd2)) {
            d_60ae_dcb8 = d_60ae_dcd0;
            d_60ae_d969 = -1;
            f_7732_31e2(d_60ae_dcd2);
            d_60ae_d969 = 0;
            d_60ae_dc70 = 1;
            d_60ae_dc4a = 0;
        }
        d_60ae_dc48 = f_14bc_468c(d_60ae_dcd2);
        for (d_60ae_dd30 = 0; d_60ae_dd30 <= d_323f_4e52[d_60ae_dcd2] - 1; d_60ae_dd30++) {
            d_60ae_ddbf[d_471b_b7a8[d_60ae_dcd2][d_60ae_dd30]][0] &= 0x7f;
            d_60ae_ddc0[d_471b_b7a8[d_60ae_dcd2][d_60ae_dd30]][0] &= 0x7f;
        }
    } else
        d_60ae_dc48 = f_1bd3_0d69(10);
    f_7c74_1db5(d_60ae_dcd2);

    d_60ae_dc6e = 0;
    d_60ae_dc46 = 1;
    if (d_60ae_dcd0 < 80) {
        f_ad38_4044(d_60ae_dcd0);
        f_b628_5940(d_60ae_dcd0);
        if (f_14bc_2cc0(d_60ae_dcd0)) {
            d_60ae_dcb8 = d_60ae_dcd2;
            d_60ae_d969 = -1;
            f_7732_31e2(d_60ae_dcd0);
            d_60ae_d969 = 0;
            d_60ae_dc6e = 1;
            d_60ae_dc46 = 0;
        }
        d_60ae_dc44 = f_14bc_468c(d_60ae_dcd0);
        for (d_60ae_dd30 = 0; d_60ae_dd30 <= d_323f_4e52[d_60ae_dcd0] - 1; d_60ae_dd30++) {
            d_60ae_ddbf[d_471b_b7a8[d_60ae_dcd0][d_60ae_dd30]][0] &= 0x7f;
            d_60ae_ddc0[d_471b_b7a8[d_60ae_dcd0][d_60ae_dd30]][0] &= 0x7f;
        }
    } else
        d_60ae_dc44 = f_1bd3_0d69(10);
    f_7c74_1db5(d_60ae_dcd0);

    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 13; d_60ae_dd92++) {
        if (d_60ae_dcd2 < 80) {
            d_60ae_dcb8 = d_60ae_dc82;
            f_ad38_8047(d_323f_0592[d_60ae_dcd2][d_60ae_dd92], 0);
        }
        if (d_60ae_dcd0 < 80) {
            d_60ae_dcb8 = d_60ae_dc84;
            f_ad38_8047(d_323f_0592[d_60ae_dcd0][d_60ae_dd92], 0);
        }
    }

    memset(d_2289_73ec, 0, 154);
    d_2289_73ec[0].home = 15;
    d_2289_73ec[0].away = 15;
    d_2289_73ec[1].home = 15;
    d_2289_73ec[1].away = 15;
    d_2289_73ec[2].home = 15;
    d_2289_73ec[2].away = 15;
    d_2289_73ec[3].home = 15;
    d_2289_73ec[3].away = 15;
    if (d_60ae_dc70 + d_60ae_dc6e > 0)
        f_8683_16db(d_60ae_dd9c, d_60ae_dd76 + 1, d_60ae_dc48);
    d_60ae_dc42 = 0;
    d_60ae_dc40 = 0;
    d_60ae_dc3e = 1;
    d_60ae_dc3c = 1;
    d_60ae_dc3a = 1;
    d_60ae_dc38 = 1;
    d_60ae_dc36 = 1;
    d_60ae_dc34 = 1;
    d_60ae_dc2c = 0;
    d_60ae_dc2a = 0;
    strcpy(d_2289_4318, "");
    strcpy(d_2289_42c8, "");
    d_60ae_dc32 = 0;
    d_60ae_dc9a = 0;
    d_60ae_dc72 = 45;
    d_60ae_dc30 = 0;
    d_60ae_dc2e = 0;
    d_60ae_dcca = 0;
    d_60ae_dcc8 = 0;
    d_60ae_d959 = 0;
    d_60ae_d973 = 0;
    if (f_14bc_2a01(d_60ae_dd9c) || f_14bc_2a5c(d_60ae_dd9c)) {
        d_60ae_d958 = 0;
        if (f_14bc_25c5(d_60ae_dd9c)
            || f_14bc_295d(d_60ae_dd9c, d_60ae_dd76 + 1) && (d_60ae_dd9c == 69 || d_60ae_dd9c == 73)
            || f_14bc_2784(d_60ae_dd9c, d_60ae_dd76 + 1)
            || f_14bc_2835(d_60ae_dd9c, d_60ae_dd76 + 1) && d_60ae_dd9c != 91
            || f_14bc_28cc(d_60ae_dd9c, d_60ae_dd76 + 1) && d_60ae_dd9c < 57
            || f_14bc_2b82(d_60ae_dd9c))
            d_60ae_d958 = -1;
        if (f_14bc_2a01(d_60ae_dd9c))
            d_60ae_d959 = d_60ae_d958;
        else if (f_14bc_2a5c(d_60ae_dd9c))
            d_60ae_d973 = d_60ae_d958;
    }
    if (d_60ae_d973) {
        d_60ae_dccc = f_7732_292a(d_60ae_dd9c, d_60ae_dd76 + 1);
        d_60ae_dcca = (unsigned char)d_471b_b01c[d_60ae_dccc * 80 + d_60ae_dd76 * 2 + 1];
        d_60ae_dcc8 = (unsigned char)d_471b_b01c[d_60ae_dccc * 80 + d_60ae_dd76 * 2];
    }
    d_60ae_d957 = 0;
    d_60ae_dc28 = 0;
    d_60ae_dc26 = 0;
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 13; d_60ae_dd92++)
        for (d_60ae_dd48 = 0; d_60ae_dd48 <= 2; d_60ae_dd48++) {
            if (d_60ae_dcd2 < 80)
                d_323f_64e0[0][d_60ae_dd48][d_60ae_dd92] = d_323f_0e8a[d_60ae_dcd2][d_60ae_dd48][d_60ae_dd92];
            if (d_60ae_dcd0 < 80)
                d_323f_64e0[1][d_60ae_dd48][d_60ae_dd92] = d_323f_0e8a[d_60ae_dcd0][d_60ae_dd48][d_60ae_dd92];
        }
    if (d_60ae_dcd2 < 80) {
        d_60ae_dc24 = d_323f_2630[d_323f_47b4[d_60ae_dcd2]] / 16;
        d_60ae_dc22 = d_323f_2630[d_323f_47b4[d_60ae_dcd2]] % 16;
    }
    if (d_60ae_dcd0 < 80) {
        d_60ae_dc20 = d_323f_2630[d_323f_47b4[d_60ae_dcd0]] / 16;
        d_60ae_dc1e = d_323f_2630[d_323f_47b4[d_60ae_dcd0]] % 16;
    }
}

void f_7c74_1ca2(void)
{
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 13; d_60ae_dd92++)
        for (d_60ae_dd48 = 0; d_60ae_dd48 <= 2; d_60ae_dd48++) {
            if (d_60ae_dcd2 < 80)
                d_323f_0e8a[d_60ae_dcd2][d_60ae_dd48][d_60ae_dd92] = d_323f_64e0[0][d_60ae_dd48][d_60ae_dd92];
            if (d_60ae_dcd0 < 80)
                d_323f_0e8a[d_60ae_dcd0][d_60ae_dd48][d_60ae_dd92] = d_323f_64e0[1][d_60ae_dd48][d_60ae_dd92];
        }
    if (d_60ae_dcd2 < 80)
        d_323f_2630[d_323f_47b4[d_60ae_dcd2]] = d_60ae_dc24 * 16 + d_60ae_dc22;
    if (d_60ae_dcd0 < 80)
        d_323f_2630[d_323f_47b4[d_60ae_dcd0]] = d_60ae_dc20 * 16 + d_60ae_dc1e;
}

void f_7c74_1db5(int team)
{
    d_60ae_dc1c = team == d_60ae_dcd2 ? d_60ae_dc56 : d_60ae_dc54;
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 13; d_60ae_dd92++) {
        if (team < 80) {
            d_60ae_dd84 = d_323f_0592[team][d_60ae_dd92];
            if (!f_14bc_5e32(d_60ae_dd84)) {
                d_471b_0000[16][d_60ae_dd84] = f_1bd3_0d69(d_471b_0000[8][d_60ae_dd84]) == 0
                    ? f_1bd3_1307(d_471b_0000[15][d_60ae_dd84] * (f_1bd3_0d69(3) + 4) * 0.1, 10)
                    : d_471b_0000[15][d_60ae_dd84];
                if (d_60ae_dc1c > 65) {
                    if (d_60ae_dd84 % 8 == 0)
                        d_471b_0000[16][d_60ae_dd84] = f_1bd3_1369(d_471b_0000[16][d_60ae_dd84] + f_1bd3_0d69(10) + 15,
                                                                   d_471b_0000[9][d_60ae_dd84] + 25);
                    else if (d_60ae_dd84 % 8 == 1)
                        d_471b_0000[16][d_60ae_dd84] = f_1bd3_1307(d_471b_0000[16][d_60ae_dd84] - 15 - f_1bd3_0d69(10), 10);
                }
                if (d_323f_4ea4[team] > 0)
                    d_471b_0000[16][d_60ae_dd84] = f_1bd3_1369(d_471b_0000[16][d_60ae_dd84] + f_b628_27dc(d_60ae_dd84),
                                                               d_471b_0000[9][d_60ae_dd84] + 25);
            }
        } else {
            if (team == 80)
                d_60ae_dc1a = d_54d9_08b4[d_60ae_dc84];
            else if (team == 81)
                d_60ae_dc1a = d_54d9_08b4[d_60ae_dc82];
            d_323f_648c[team == 81][d_60ae_dd92] = f_1bd3_1307(d_60ae_dc1a + f_1bd3_0d69(5) - f_1bd3_0d69(5), 1);
        }
    }
    if (team < 80) {
        if (d_323f_4ea4[team] > 0)
            d_323f_4ef6[team]++;
        d_323f_4ea4[team] = 0;
    }
}

void f_7c74_2043(void)
{
    f_817e_160e(d_60ae_dcd2);
    f_817e_160e(d_60ae_dcd0);
    f_817e_1b3e(d_60ae_dcd2);
    f_817e_1b3e(d_60ae_dcd0);
    f_7c74_2eb3();
    strcpy(d_2289_4278, "1st Half");
    if (d_60ae_dc70 + d_60ae_dc6e > 0) {
        f_817e_0799(0);
        f_14bc_58db(1);
        f_1bd3_0c36();
    }
    d_60ae_dc18 = 7;
    d_60ae_d94c = 0;
    for (;;) {
        d_60ae_dc16 = 0;
        do
            f_7c74_258c();
        while (d_60ae_dc9a < d_60ae_dc72);
        d_60ae_d94c = -1;
        while (d_60ae_dc16 > 0) {
            f_7c74_258c();
            d_60ae_dc16--;
        }
        d_60ae_d94c = 0;
        if (d_60ae_dc70 + d_60ae_dc6e > 0)
            f_1bd3_0dbc(50);
        if (d_60ae_dc72 == 45) {
            d_2289_73ec[0].home = d_60ae_dc2c;
            d_2289_73ec[0].away = d_60ae_dc2a;
            strcpy(d_2289_4278, "2nd Half");
            d_60ae_dc72 = 90;
            if (d_60ae_dc70 + d_60ae_dc6e > 0) {
                f_14bc_58db(0);
                f_817e_2fde();
                f_817e_3d44(d_60ae_dc84, d_60ae_dc82, 0);
                f_817e_0799(0);
            }
            continue;
        }
        if (d_60ae_dc72 == 90) {
            d_2289_73ec[1].home = d_60ae_dc2c;
            d_2289_73ec[1].away = d_60ae_dc2a;
            if (d_60ae_dc2c + d_60ae_dcca == d_60ae_dc2a + d_60ae_dcc8
                && f_14bc_248a(d_60ae_dd9c) == 0 && d_60ae_dd9c > 10) {
                if (d_60ae_d973 != 0 && d_60ae_dc2a != d_60ae_dcca)
                    f_817e_030a();
                else if (f_7c74_2387(d_60ae_dd9c, d_60ae_dd76 + 1)) {
                    d_60ae_dc72 = 105;
                    strcpy(d_2289_4278, "Extra Time");
                    if (d_60ae_dc70 + d_60ae_dc6e > 0) {
                        f_817e_0bfb(d_60ae_dcd2, d_2289_4278);
                        f_14bc_58db(1);
                    }
                    continue;
                } else if (f_14bc_2594(d_60ae_dd9c) || d_60ae_dd9c == 82)
                    f_8683_3924();
            }
        }
        if (d_60ae_dc72 == 105) {
            d_60ae_dc72 = 120;
            if (d_60ae_dc70 + d_60ae_dc6e > 0)
                f_14bc_58db(1);
            continue;
        }
        if (d_60ae_dc72 == 120) {
            d_2289_73ec[2].home = d_60ae_dc2c;
            d_2289_73ec[2].away = d_60ae_dc2a;
            if (d_60ae_dc2c + d_60ae_dcca == d_60ae_dc2a + d_60ae_dcc8) {
                if (d_60ae_d973 != 0 && d_60ae_dc2a != d_60ae_dcca)
                    f_817e_030a();
                else if (f_7c74_23db(d_60ae_dd9c, d_60ae_dd76 + 1)) {
                    d_60ae_d957 = -1;
                    strcpy(d_2289_4278, "Penalty Shoot-Out !");
                    if (d_60ae_dc70 + d_60ae_dc6e > 0)
                        f_14bc_58db(1);
                    f_817e_0ef8();
                    d_2289_73ec[3].home = d_60ae_dc2c;
                    d_2289_73ec[3].away = d_60ae_dc2a;
                } else if (f_14bc_2594(d_60ae_dd9c) || d_60ae_dd9c == 82)
                    f_8683_3924();
            }
        }
        break;
    }
}

char f_7c74_2387(int club, int round)
{
    if (f_14bc_2b02(club) || club == 78 || club == 92)
        return -1;
    if (d_60ae_d973 != 0)
        return -1;
    if (club == 31 || club == 43 || club == 55 || club == 82 || club == 86
        || club == 91 || club == 97 || club == 98)
        return -1;
    return 0;
}

char f_7c74_23db(int club, int round)
{
    if (f_7c74_2387(club, round) && club != 78 && club != 92 && club != 82)
        return -1;
    return 0;
}

/* the formations' shirt numbers that 2408 looks for */
static char far *d_60ae_1fe4[] = {
    "04 10 11 12 13", "07 11", "02 09", "06 14", "03 13"
};

void f_7c74_2408(int a, int b, int c)
{
    d_60ae_dc14 = b < 80 ? d_323f_4cb8[b] : d_54d9_0a80[b];
    if (c < 80) {
        d_60ae_dc12 = d_323f_4cb8[c];
        d_60ae_dc10 = d_323f_4d0a[c];
    } else {
        d_60ae_dc12 = d_54d9_0a80[c];
        d_60ae_dc10 = d_54d9_0c4c[c];
    }
    if (a == b) {
        d_60ae_dcce = d_60ae_dc14 / 16;
        d_60ae_dd58 = d_60ae_dc14 % 16;
    } else {
        d_60ae_dcce = d_60ae_dc12 / 16;
        d_60ae_dd58 = d_60ae_dc12 % 16;
        d_60ae_d956 = d_60ae_dc14 % 16 == d_60ae_dc12 % 16;
        if (d_60ae_d956 == 0) {
            sprintf(d_2289_41d8, "%02d", d_60ae_dc14 % 16);
            sprintf(d_2289_4188, "%02d", d_60ae_dc12 % 16);
            for (d_60ae_dc0e = 0; d_60ae_dc0e <= 4; d_60ae_dc0e++)
                if (strstr(d_60ae_1fe4[d_60ae_dc0e], d_2289_41d8)
                    && strstr(d_60ae_1fe4[d_60ae_dc0e], d_2289_4188)) {
                    d_60ae_d956 = -1;
                    d_60ae_dc0e = 4;
                }
        }
        if (d_60ae_d956 != 0) {
            d_60ae_dcce = d_60ae_dc10 / 16;
            d_60ae_dd58 = d_60ae_dc10 % 16;
        }
    }
}

void f_7c74_258c(void)
{
    d_60ae_dc0c = f_1bd3_0d69(d_60ae_dd08 - (d_60ae_dc58 > 24
        ? (d_60ae_dd08 - d_60ae_dc0a) / 3 - f_7c74_2c36(1, d_60ae_dc9a) : 0));
    d_60ae_dc08 = f_1bd3_0d69(d_60ae_dc0a + (d_60ae_dc58 > 24
        ? (d_60ae_dd08 - d_60ae_dc0a) / 3 - f_7c74_2c72(1, d_60ae_dc9a) : 0));
    if (d_60ae_dc0c >= d_60ae_dc08) {
        d_60ae_dc3a++;
        d_60ae_d98d = 1;
        if (d_60ae_dc70 + d_60ae_dc6e > 0)
            f_7c74_49bd(3.5, 21.5);
        f_7c74_2cae();
        f_7c74_2698();
    } else {
        d_60ae_dc38++;
        d_60ae_d98d = 2;
        if (d_60ae_dc70 + d_60ae_dc6e > 0)
            f_7c74_49bd(21.5, 3.5);
        f_7c74_2cae();
        f_7c74_271d();
    }
}

void f_7c74_2698(void)
{
    do {
        d_60ae_dc06 = 0;
        d_60ae_dc02 = f_1bd3_0d69(d_60ae_dc00 - f_7c74_2c36(2, d_60ae_dc9a));
        d_60ae_dbfe = f_1bd3_0d69(d_60ae_dbfc - f_7c74_2c72(0, d_60ae_dc9a));
        if (d_60ae_dc02 >= d_60ae_dbfe) {
            d_60ae_dc36++;
            f_7c74_2cae();
            f_7c74_27a2();
        } else {
            d_60ae_dc3c++;
            f_7c74_2cae();
        }
    } while (d_60ae_dbfe <= d_60ae_dc02 && d_60ae_dc06 == 0);
}

void f_7c74_271d(void)
{
    do {
        d_60ae_dc06 = 0;
        d_60ae_dbfa = f_1bd3_0d69(d_60ae_dbf8 - f_7c74_2c72(2, d_60ae_dc9a));
        d_60ae_dbf6 = f_1bd3_0d69(d_60ae_dbf4 - f_7c74_2c36(0, d_60ae_dc9a));
        if (d_60ae_dbfa >= d_60ae_dbf6) {
            d_60ae_dc34++;
            f_7c74_2cae();
            f_7c74_2810();
        } else {
            d_60ae_dc3e++;
            f_7c74_2cae();
        }
    } while (d_60ae_dbf6 <= d_60ae_dbfa && d_60ae_dc06 == 0);
}

void f_7c74_27a2(void)
{
    d_60ae_d8fd = f_1bd3_0d69(d_60ae_d9a8) == 0 ? -1 : 0;
    d_60ae_dd42 = d_60ae_dc2c * 20 + 180;
    d_60ae_dd44 = f_1bd3_0d69(d_60ae_dbf2) + (d_60ae_d8fd ? 100 : 0);
    if (d_60ae_dd44 > d_60ae_dd42) {
        d_60ae_dc42++;
        f_7c74_2cae();
        f_7c74_287e();
    } else
        f_7c74_2cae();
}

void f_7c74_2810(void)
{
    d_60ae_d8fd = f_1bd3_0d69(d_60ae_d9a6) == 0 ? -1 : 0;
    d_60ae_dd42 = d_60ae_dc2a * 20 + 180;
    d_60ae_dd44 = f_1bd3_0d69(d_60ae_dbf0) + (d_60ae_d8fd ? 100 : 0);
    if (d_60ae_dd44 > d_60ae_dd42) {
        d_60ae_dc40++;
        f_7c74_2cae();
        f_7c74_2a5a();
    } else
        f_7c74_2cae();
}

void f_7c74_287e(void)
{
    char buf[320];

    d_60ae_d955 = 0;
    d_60ae_d954 = 0;
    d_60ae_d968 = 0;
    if (d_60ae_dc70 + d_60ae_dc6e > 0) {
        f_1bd3_0821(0x57, 0x7e, 0x63, 0x84);
        sprintf(buf, "%d", d_60ae_dc42);
        f_14bc_356a(0x60, 0x84, 5, buf);
    }
    d_60ae_dbee = f_1bd3_0d69(d_60ae_dbec);
    if (d_60ae_dbee < 26) {
        if (f_1bd3_0d69(30) == 0) {
            f_7c74_30d7(d_60ae_dcd2);
            d_60ae_d954 = -1;
        } else if (f_1bd3_0d69(2) == 0) {
            f_b628_3e2f(d_60ae_dcd2);
            d_60ae_d968 = -1;
        } else
            f_7c74_304d(d_60ae_dcd2);
        d_60ae_dc06 = 1;
    } else if (d_60ae_dbee < 29) {
        f_b628_3926(d_60ae_dcd2);
        if (d_60ae_dc70 + d_60ae_dc6e > 0)
            f_817e_0ada();
        d_60ae_dc06 = -d_60ae_d953;
        if (d_60ae_d953)
            d_60ae_d955 = -1;
    } else if (d_60ae_dc70 + d_60ae_dc6e > 0 && d_60ae_dbee < 50) {
        if (f_1bd3_0d69(10) == 0) {
            if (f_1bd3_0d69(2) == 0)
                f_817e_0239(d_60ae_dcd2);
            else {
                f_b628_3e2f(d_60ae_dcd2);
                f_b628_41ed(d_60ae_dcd2);
                f_817e_0bfb(d_60ae_dcd2, d_2289_4278);
            }
        } else if (f_1bd3_0d69(8) == 0)
            f_b628_37d5(d_60ae_dcd2);
        else
            f_b628_3b3f(d_60ae_dcd2);
    }
    if (d_60ae_dc06 == 1) {
        d_60ae_dc2c++;
        f_817e_0371(d_60ae_dd84, d_60ae_d955, d_60ae_d954, d_60ae_d968, d_60ae_dbe8, d_60ae_dcd2);
    }
    f_7c74_2cae();
}

void f_7c74_2a5a(void)
{
    char buf[320];

    d_60ae_d955 = 0;
    d_60ae_d954 = 0;
    d_60ae_d968 = 0;
    if (d_60ae_dc70 + d_60ae_dc6e > 0) {
        f_1bd3_0821(0xe7, 0x7e, 0xf3, 0x84);
        sprintf(buf, "%d", d_60ae_dc40);
        f_14bc_356a(0xf0, 0x84, 5, buf);
    }
    d_60ae_dbee = f_1bd3_0d69(d_60ae_dbea);
    if (d_60ae_dbee < 26) {
        if (f_1bd3_0d69(30) == 0) {
            f_7c74_30d7(d_60ae_dcd0);
            d_60ae_d954 = -1;
        } else if (f_1bd3_0d69(2) == 0) {
            f_b628_3e2f(d_60ae_dcd0);
            d_60ae_d968 = -1;
        } else
            f_7c74_304d(d_60ae_dcd0);
        d_60ae_dc06 = 1;
    } else if (d_60ae_dbee < 29) {
        f_b628_3926(d_60ae_dcd0);
        if (d_60ae_dc70 + d_60ae_dc6e > 0)
            f_817e_0ada();
        d_60ae_dc06 = -d_60ae_d953;
        if (d_60ae_d953)
            d_60ae_d955 = -1;
    } else if (d_60ae_dc70 + d_60ae_dc6e > 0 && d_60ae_dbee < 50) {
        if (f_1bd3_0d69(10) == 0) {
            if (f_1bd3_0d69(2) == 0)
                f_817e_0239(d_60ae_dcd0);
            else {
                f_b628_3e2f(d_60ae_dcd0);
                f_b628_41ed(d_60ae_dcd0);
                f_817e_0bfb(d_60ae_dcd2, d_2289_4278);   /* sic: the home team, as in the original */
            }
        } else if (f_1bd3_0d69(8) == 0)
            f_b628_37d5(d_60ae_dcd0);
        else
            f_b628_3b3f(d_60ae_dcd0);
    }
    if (d_60ae_dc06 == 1) {
        d_60ae_dc2a++;
        f_817e_0371(d_60ae_dd84, d_60ae_d955, d_60ae_d954, d_60ae_d968, d_60ae_dbe8, d_60ae_dcd0);
    }
    f_7c74_2cae();
}

unsigned char f_7c74_2c36(unsigned char a, int b)
{
    return b < 60 ? 0 : d_323f_63d8[a][f_1bd3_1369(b - 60, 59)];
}

unsigned char f_7c74_2c72(unsigned char a, int b)
{
    return b < 60 ? 0 : d_323f_6324[a][f_1bd3_1369(b - 60, 59)];
}

void f_7c74_2cae(void)
{
    char key[4];
    char c;

    d_60ae_dc32++;
    d_60ae_dc9a = d_60ae_dc32 / 2;
    if (d_60ae_dc9a > d_60ae_dc72) {
        d_60ae_dc9a = d_60ae_dc72;
        d_60ae_dc32 = d_60ae_dc9a * 2;
    }
    if (d_60ae_dc70 + d_60ae_dc6e > 0) {
        f_817e_019a(d_60ae_dc9a);
        f_7c74_4a2e();
        strcpy(key, strupr(f_1bd3_0cec()));
        c = f_1bd3_0c16();
        if (c != 3 && key[0] != ' ') {
            f_1bd3_0dbc(9);
            if (d_60ae_dc4a == 0 && (c == 1 || c != 0 && d_60ae_dc46 == 1 || key[0] == 'H'))
                f_7c74_42ef(d_60ae_dcd2, 0);
            if (d_60ae_dc46 == 0 && (c == 2 || c != 0 && d_60ae_dc4a == 1 || key[0] == 'A'))
                f_7c74_42ef(d_60ae_dcd0, 0);
        }
    }
    if (f_1bd3_0d69(d_60ae_dbe6) == 0)
        f_7c74_32f3(d_60ae_dcd2);
    if (f_1bd3_0d69(d_60ae_dbe4) == 0)
        f_7c74_32f3(d_60ae_dcd0);
    if (d_60ae_dc9a > 65) {
        if (d_60ae_dc4a == 1 && d_60ae_dc9a > d_60ae_dbe2 && d_323f_0538[0][11] == 4 && d_60ae_d952 &&
            d_60ae_d982 < 2)
            f_7c74_445d(d_60ae_dcd2, 1);
        if (d_60ae_dc46 == 1 && d_60ae_dc9a > d_60ae_dbe0 && d_323f_0538[1][11] == 4 && d_60ae_d951 &&
            d_60ae_d981 < 2)
            f_7c74_445d(d_60ae_dcd0, 1);
        if (d_60ae_dc4a == 1 && d_60ae_dc9a > d_60ae_dbe2 && d_323f_0538[0][12] == 4 && d_60ae_d950 &&
            d_60ae_d982 < 2)
            f_7c74_445d(d_60ae_dcd2, 1);
        if (d_60ae_dc46 == 1 && d_60ae_dc9a > d_60ae_dbe0 && d_323f_0538[1][12] == 4 && d_60ae_d94f &&
            d_60ae_d981 < 2)
            f_7c74_445d(d_60ae_dcd0, 1);
    }
}

void f_7c74_2eb3(void)
{
    d_60ae_dbe2 = f_1bd3_0d69(20) + 65;
    d_60ae_dbe0 = f_1bd3_0d69(20) + 65;
    d_60ae_d952 = 0;
    d_60ae_d950 = 0;
    d_60ae_d951 = 0;
    d_60ae_d94f = 0;
    if (d_60ae_dc2c + d_60ae_dcca < d_60ae_dc2a + d_60ae_dcc8 ||
        d_60ae_dc2c + d_60ae_dcca == d_60ae_dc2a + d_60ae_dcc8 && d_60ae_dc2a >= d_60ae_dcca) {
        d_60ae_d952 = -1;
        d_60ae_d950 = -1;
    }
    if (d_60ae_dc2a + d_60ae_dcc8 < d_60ae_dc2c + d_60ae_dcca ||
        d_60ae_dc2a + d_60ae_dcc8 == d_60ae_dc2c + d_60ae_dcca && d_60ae_dc2c >= d_60ae_dcc8) {
        d_60ae_d951 = -1;
        d_60ae_d94f = -1;
    }
    f_7c74_2f7a(d_60ae_dcd2);
    f_7c74_2f7a(d_60ae_dcd0);
}

void f_7c74_2f7a(int team)
{
    if (f_14bc_2cc0(team) == 0) {
        for (d_60ae_dd60 = 11; d_60ae_dd60 <= 12; d_60ae_dd60++) {
            for (d_60ae_dd48 = 2; d_60ae_dd48 <= 10; d_60ae_dd48++) {
                if (f_14bc_679d(d_323f_0592[team][d_60ae_dd60], d_60ae_dd48)) {
                    d_323f_0e8a[team][0][d_60ae_dd60] = d_60ae_dd48 + (d_60ae_dd48 < 5 ? 3 : 0);
                    d_323f_64e0[team == d_60ae_dcd0][0][d_60ae_dd60] = d_60ae_dd48 + (d_60ae_dd48 < 5 ? 3 : 0);
                }
            }
        }
    }
}

void f_7c74_304d(int team)
{
    d_60ae_dcc4 = 0;
    d_60ae_dbe8 = -1;
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 13; d_60ae_dd92++) {
        if (d_323f_0538[team == d_60ae_dcd0][d_60ae_dd92] < 2) {
            if ((d_60ae_dbde = f_7c74_3123(team, d_60ae_dd92)) > d_60ae_dcc4) {
                d_60ae_dcc4 = d_60ae_dbde;
                d_60ae_dd84 = d_323f_0592[team][d_60ae_dd92];
                d_60ae_dbe8 = d_60ae_dd92;
            }
        }
    }
}

void f_7c74_30d7(int team)
{
    int other;

    other = team == d_60ae_dcd2 ? d_60ae_dcd0 : d_60ae_dcd2;
    d_60ae_dbe8 = f_b628_4310(other);
    d_60ae_dd84 = d_323f_0592[other][d_60ae_dbe8];
}

int f_7c74_3123(int team, int p)
{
    d_60ae_dcac = d_323f_0e8a[team][0][p];
    if (d_60ae_dcac > 1) {
        d_60ae_d98c = d_323f_0e8a[team][2][p];
        if (d_60ae_d98c == 1)
            d_60ae_dd0e = 1;
        else if (d_60ae_d98c == 2)
            d_60ae_dd0e = -1;
        else
            d_60ae_dd0e = 0;
        switch (d_60ae_dcac) {
        case 2:
        case 3:
        case 11:
        case 12:
            d_60ae_dbde = 5;
            break;
        case 4:
            d_60ae_dbde = 10;
            break;
        case 5:
        case 6:
            d_60ae_dbde = 15;
            break;
        case 7:
        case 8:
        case 9:
        case 13:
            d_60ae_dbde = 20;
            break;
        case 10:
            d_60ae_dbde = 35;
            break;
        }
        d_60ae_dbde += d_60ae_dd0e * 5 + f_817e_1709(p, team) * 2;
        if (team < 80) {
            if (!f_14bc_5e32(d_323f_0592[team][p]))
                d_60ae_dbde = d_471b_0000[7][d_323f_0592[team][p]] * 0.75 +
                              (d_60ae_d8fd ? d_471b_0000[5][d_323f_0592[team][p]] * 10 : 0) + d_60ae_dbde;
        } else
            d_60ae_dbde += 10;
        d_60ae_dbdc = d_60ae_dbde;
        d_60ae_dbde += f_1bd3_0d69(125);
    } else {
        d_60ae_dbdc = 0;
        d_60ae_dbde = 0;
    }
    return d_60ae_dbde;
}

void f_7c74_32f3(int team)
{
    d_60ae_d94e = 0;
    d_60ae_dcfa = team == d_60ae_dcd2 ? d_60ae_dcd0 : d_60ae_dcd2;
    d_60ae_dd84 = -1;
    d_60ae_dbda = 0;
    do {
        do {
            d_60ae_dd92 = f_1bd3_0d69(14);
        } while (d_323f_0e8a[team][0][d_60ae_dd92] <= 1 ||
                 d_323f_0538[team == d_60ae_dcd0][d_60ae_dd92] >= 2);
        if ((d_60ae_dbd8 = f_1bd3_0d69(d_323f_0538[team == d_60ae_dcd0 ? 5 : 4][d_60ae_dd92] + 10 + f_1bd3_0d69(4))) > d_60ae_dd52 ||
            d_60ae_dd84 == -1) {
            d_60ae_dd84 = d_60ae_dd92;
            d_60ae_dd52 = d_60ae_dbd8;
        }
        d_60ae_dbda++;
    } while (d_60ae_dd84 <= -1 || d_60ae_dbda < 5);
    d_60ae_dbd6 = d_323f_0e8a[team][0][d_60ae_dd84];
    d_60ae_dbd4 = -1;
    d_60ae_dbda = 0;
    do {
        do {
            d_60ae_dd92 = f_1bd3_0d69(14);
            d_60ae_dbd2 = d_323f_0e8a[d_60ae_dcfa][0][d_60ae_dd92];
        } while (d_323f_0538[d_60ae_dcfa == d_60ae_dcd0][d_60ae_dd92] >= 2);
        d_60ae_dbd8 = f_14bc_692a(d_60ae_dbd6) && f_14bc_6969(d_60ae_dbd2) ||
                      f_14bc_694c(d_60ae_dbd6) && f_14bc_694c(d_60ae_dbd2) ||
                      f_14bc_6969(d_60ae_dbd6) && (d_60ae_dbd2 == 1 || f_14bc_692a(d_60ae_dbd2)) ? 11 : 0;
        d_60ae_dbd8 += f_14bc_6986(d_60ae_dbd6) && f_14bc_69a8(d_60ae_dbd2) ||
                       f_14bc_69ca(d_60ae_dbd6) && f_14bc_69ca(d_60ae_dbd2) ||
                       f_14bc_69a8(d_60ae_dbd6) && f_14bc_6986(d_60ae_dbd2) ? 10 : 0;
        if (d_60ae_dbd8 > d_60ae_dd52 || d_60ae_dbd4 == -1) {
            d_60ae_dbd4 = d_60ae_dd92;
            d_60ae_dd52 = d_60ae_dbd8;
        }
        d_60ae_dbda++;
    } while (d_60ae_dbd4 <= -1 || d_60ae_dbda < 5);
    if (d_60ae_dc70 + d_60ae_dc6e > 0) {
        if (team < 80)
            strcpy(d_2289_4134, f_14bc_48b4(d_323f_0592[team][d_60ae_dd84]));
        else
            sprintf(d_2289_4134, "No.%s", f_14bc_2f2c(d_60ae_dd84 + 1, 0));
        if (d_60ae_dcfa < 80) {
            strcpy(d_2289_40e4, f_14bc_48b4(d_323f_0592[d_60ae_dcfa][d_60ae_dbd4]));
            if (!f_14bc_5e32(d_323f_0592[d_60ae_dcfa][d_60ae_dbd4]))
                d_60ae_d94e = f_1bd3_0d69(d_471b_0000[14][d_323f_0592[d_60ae_dcfa][d_60ae_dbd4]] + 10) < f_1bd3_0d69(10);
            else
                d_60ae_d94e = f_1bd3_0d69(5) == 0;
        } else {
            sprintf(d_2289_40e4, "their no.%s", f_14bc_2f2c(d_60ae_dbd4 + 1, 0));
            d_60ae_d94e = f_1bd3_0d69(2) == 0;
        }
    }
    f_7c74_428d();
    d_60ae_d94d = 0;
    switch (d_60ae_dbd0) {
    case 0:
    case 1:
    case 2:
    case 5:
    case 6:
    case 7:
    case 11:
    case 15:
    case 17:
    case 18:
    case 20:
        if (d_60ae_dcfa < 80) {
            if (!f_14bc_5e32(d_323f_0592[d_60ae_dcfa][d_60ae_dbd4]))
                d_60ae_d94b = f_1bd3_0d69(d_471b_0000[13][d_323f_0592[d_60ae_dcfa][d_60ae_dbd4]]) > f_1bd3_0d69(10);
            else
                d_60ae_d94b = f_1bd3_0d69(10) > f_1bd3_0d69(10);
        } else
            d_60ae_d94b = f_1bd3_0d69(12) > f_1bd3_0d69(10);
        if (d_60ae_d94b)
            f_7c74_387e(team, d_60ae_dd84, d_60ae_dcfa, d_60ae_dbd4);
        break;
    }
    f_7c74_3d87(team, d_60ae_dd84);
    if (d_60ae_d94e)
        d_323f_0538[d_60ae_dcfa == d_60ae_dcd0 ? 5 : 4][d_60ae_dbd4] = 20;
    if (d_60ae_dc70 + d_60ae_dc6e > 0)
        f_817e_0bfb(d_60ae_dcd2, d_2289_4278);
}

void f_7c74_387e(int a, int b, int team, int n)
{
    char hurt;
    char buf[320];
    char r;
    register int old = d_60ae_dd84;
    register int saved = d_60ae_dbd4;

    hurt = f_1bd3_0d69(3) == 0 ? -1 : 0;
    d_60ae_dd84 = b;
    d_60ae_dbd4 = n;
    if (d_60ae_dc70 + d_60ae_dc6e > 0) {
        sprintf(buf, "%s injured by %s", d_2289_40e4, d_2289_4134);
        f_817e_0bfb(team, buf);
        f_1bd3_0dbc(100);
        f_817e_0c86();
        sprintf(buf, "He was %s", d_2289_4094);
        f_817e_0bfb(a, buf);
        f_1bd3_0dbc(75);
        f_817e_0c86();
        if (hurt) {
            r = f_1bd3_0d69(4);
            if (r == 0) {
                sprintf(buf, "He's struggling");
                f_817e_0bfb(team, buf);
                d_323f_0538[team == d_60ae_dcd0 ? 3 : 2][d_60ae_dbd4] =
                    d_323f_0538[team == d_60ae_dcd0 ? 3 : 2][d_60ae_dbd4] * 0.8;
                f_817e_1b3e(team);
            } else if (r == 1) {
                sprintf(buf, "He looks in trouble");
                f_817e_0bfb(team, buf);
                d_323f_0538[team == d_60ae_dcd0 ? 3 : 2][d_60ae_dbd4] =
                    d_323f_0538[team == d_60ae_dcd0 ? 3 : 2][d_60ae_dbd4] * 0.8;
                f_817e_1b3e(team);
            } else if (r == 2) {
                sprintf(buf, "He should be ok");
                f_817e_0bfb(team, buf);
            } else if (r == 3) {
                sprintf(buf, "He's ok though");
                f_817e_0bfb(team, buf);
            }
        } else {
            sprintf(buf, "He'll have to come off");
            f_817e_0bfb(team, buf);
        }
        f_1bd3_0dbc(100);
        f_817e_0c86();
        d_60ae_d94d = -1;
    }
    if (hurt == 0) {
        d_323f_0538[team == d_60ae_dcd0][d_60ae_dbd4] = 6;
        if (team < 80) {
            sprintf(buf, "%s%04d", d_2289_3f54, d_323f_0592[team][d_60ae_dbd4]);
            strcpy(d_2289_3f54, buf);
            f_ad38_8047(d_323f_0592[team][d_60ae_dbd4], 4);
        }
        d_60ae_dbce = 0;
        d_60ae_dbcc = 1;
        if (d_323f_0e8a[team][0][d_60ae_dbd4] > 7 && d_323f_0e8a[team][0][d_60ae_dbd4] < 11) {
            d_60ae_dbce = 1;
            d_60ae_dbcc = 0;
        }
        if (f_14bc_2cc0(team)) {
            d_60ae_d961 = -1;
            f_be31_0000(team);
            d_60ae_d961 = 0;
            for (d_60ae_dd92 = 0; d_60ae_dd92 <= 13; d_60ae_dd92++)
                d_323f_0538[team == d_60ae_dcd0 ? 3 : 2][d_60ae_dd92] = 0;
            f_817e_1b3e(team);
            f_817e_0799(d_60ae_d98d);
            f_817e_0bfb(d_60ae_dcd2, d_2289_4278);
        } else if (d_323f_0e8a[team][0][d_60ae_dbd4] == 1 && d_323f_0543[team == d_60ae_dcd0][2] == 4 &&
                   (team == d_60ae_dcd2 && d_60ae_d982 < 2 || team == d_60ae_dcd0 && d_60ae_d981 < 2) &&
                   f_14bc_612e(team, d_60ae_dd9c, d_60ae_dd76 + 1)) {
            f_7c74_445d(team, 2);
        } else if (d_323f_0543[team == d_60ae_dcd0][d_60ae_dbce] == 4 &&
                   (team == d_60ae_dcd2 && d_60ae_d982 < 2 || team == d_60ae_dcd0 && d_60ae_d981 < 2)) {
            f_7c74_445d(team, d_60ae_dbce);
        } else if (d_323f_0543[team == d_60ae_dcd0][d_60ae_dbcc] == 4 &&
                   (team == d_60ae_dcd2 && d_60ae_d982 < 2 || team == d_60ae_dcd0 && d_60ae_d981 < 2)) {
            f_7c74_445d(team, d_60ae_dbcc);
        } else {
            f_817e_1b3e(team);
            d_60ae_dc16 += f_1bd3_0d69(3) * 2;
        }
    } else
        d_60ae_dc16 += f_1bd3_0d69(3) * 2;
    d_60ae_dd84 = old;
    d_60ae_dbd4 = saved;
}

void f_7c74_3d87(int team, int p)
{
    int r;
    char buf[320];

    d_60ae_dbca = 0;
    d_60ae_dcc4 = d_60ae_dbd0 >= 15 && f_1bd3_0d69(3) > 0 ? (int)f_1bd3_0d69(2) + 1 : (int)f_1bd3_0d69(2);
    if (d_60ae_dcc4 == 2 || d_60ae_dcc4 == 1 && d_323f_0538[team == d_60ae_dcd0][p] == 1) {
        if (f_1bd3_0d69(2) == 0)
            strcpy(d_2289_3f04, "Sent off");
        else
            strcpy(d_2289_3f04, "Shown the red card");
        d_323f_0538[team == d_60ae_dcd0][p] = 2;
        d_323f_0500[team == d_60ae_dcd2 ? 0 : 1][p] = d_60ae_dc9a;
        if (team < 80) {
            sprintf(buf, "%s%04d", d_2289_3dc4, d_323f_0592[team][p]);
            strcpy(d_2289_3dc4, buf);
            f_ad38_8047(d_323f_0592[team][p], 3);
        }
        d_60ae_dbca = 2;
        f_817e_1b3e(team);
        d_60ae_dc16 += f_1bd3_0d69(2) * 2;
    } else if (d_60ae_dcc4 == 1) {
        if (f_1bd3_0d69(2) == 0)
            strcpy(d_2289_3f04, "Booked");
        else
            strcpy(d_2289_3f04, "Shown the yellow card");
        d_323f_0538[team == d_60ae_dcd0][p] = 1;
        if (team < 80) {
            sprintf(buf, "%s%04d", d_2289_3c84, d_323f_0592[team][p]);
            strcpy(d_2289_3c84, buf);
            f_ad38_8047(d_323f_0592[team][p], 2);
        }
        d_60ae_dbca = 6;
    } else if (d_60ae_dcc4 == 0) {
        r = f_1bd3_0d69(4);
        switch (r) {
        case 0: strcpy(d_2289_3f04, "warned"); break;
        case 1: strcpy(d_2289_3f04, "lectured"); break;
        case 2: strcpy(d_2289_3f04, "ticked off"); break;
        case 3: strcpy(d_2289_3f04, "spoken to"); break;
        }
        d_60ae_dbca = 1;
    }
    if (d_60ae_dc70 + d_60ae_dc6e > 0 && d_60ae_dbca > 0) {
        f_817e_0c86();
        if (team == d_60ae_dcd2)
            f_7c74_2408(d_60ae_dc84, d_60ae_dc84, d_60ae_dc82);
        else
            f_7c74_2408(d_60ae_dc82, d_60ae_dc84, d_60ae_dc82);
        strcpy(buf, d_2289_4134);
        f_14bc_3e40(3.0, 8.5, -d_60ae_dcce, d_60ae_dd58, 0, buf);
        f_14bc_3c75(strlen(d_2289_4134) + 5, 8.5, d_60ae_dbca, d_2289_3f04);
        if (d_60ae_d94d == 0) {
            if (strcmp(f_1bd3_0f30(d_2289_4094, 1), "*") == 0) {
                d_2289_4094[strlen(d_2289_4094) - 1] = 0;
            } else {
                strcat(d_2289_4094, " ");
                strcat(d_2289_4094, d_2289_40e4);
            }
            f_1bd3_0dbc(75);
            f_817e_0c86();
            sprintf(buf, "He %s", d_2289_4094);
            f_817e_0bfb(team, buf);
        }
        f_1bd3_0dbc(75);
        f_817e_0c86();
        if (d_60ae_dbca == 2 && f_14bc_2cc0(team)) {
            d_60ae_d961 = -1;
            f_be31_0000(team);
            d_60ae_d961 = 0;
            for (d_60ae_dd92 = 0; d_60ae_dd92 <= 13; d_60ae_dd92++)
                d_323f_0538[team == d_60ae_dcd0 ? 3 : 2][d_60ae_dd92] = 0;
            f_817e_1b3e(team);
            f_817e_0799(d_60ae_d98d);
            f_817e_0bfb(d_60ae_dcd2, d_2289_4278);
        }
    }
}

/* the commentary's fouls */
static char far *d_60ae_1ff8[] = {
    "brought down", "hacked at", "kicked", "body checked", "obstructed", "up-ended",
    "flattened", "tripped", "pushed", "shoved", "held back", "clattered into",
    "handballed*", "said too much*", "kicked the ball away*", "punched", "headbutted",
    "brought down", "cynically hacked", "spat at", "elbowed"
};

void f_7c74_428d(void)
{
    d_60ae_dbc8 = f_1bd3_0d69(100) + 1;
    if (d_60ae_dbc8 <= 85)
        d_60ae_dbd0 = f_1bd3_0d69(15);
    else
        d_60ae_dbd0 = f_1bd3_0d69(6) + 15;
    strcpy(d_2289_4094, d_60ae_1ff8[d_60ae_dbd0]);
}

void f_7c74_42ef(int team, char c)
{
    int saved;
    char buf[320];
    int k;

    saved = d_60ae_dd5a;
    d_60ae_dd5a = team;
    for (;;) {
        f_14bc_4bd3("Tactical move");
        f_14bc_4587(1.0, 4.0, d_60ae_dd5a);
        strcpy(buf, "*Exit|Tactical change|Opponents team|");
        if (c == 0)
            strcat(buf, "Match Stats|");
        f_14bc_2f90(7, "", buf);
        f_14bc_3334(c + 3);
        k = d_60ae_dda0;
        if (k == 1) {
            d_60ae_d961 = -1;
            f_be31_0000(d_60ae_dd5a);
            d_60ae_d961 = 0;
            for (d_60ae_dd92 = 0; d_60ae_dd92 <= 13; d_60ae_dd92++)
                d_323f_0538[d_60ae_dd5a == d_60ae_dcd0 ? 3 : 2][d_60ae_dd92] = 0;
            f_817e_1b3e(d_60ae_dd5a);
        } else if (k == 2) {
            if (d_60ae_dd5a == d_60ae_dcd2)
                d_60ae_dcb8 = d_60ae_dcd0;
            else
                d_60ae_dcb8 = d_60ae_dcd2;
            f_be31_0000(d_60ae_dcb8);
        } else if (k == 3) {
            f_817e_2fde();
            f_817e_3d44(d_60ae_dc84, d_60ae_dc82, 0);
        } else
            break;
    }
    if (c == 0) {
        f_817e_0799(d_60ae_d98d);
        f_817e_0bfb(d_60ae_dcd2, d_2289_4278);
    }
    d_60ae_dd5a = saved;
}

void f_7c74_445d(int team, int mode)
{
    char buf[320];

    f_7c74_4913(team);
    if (mode == 2)
        d_60ae_dbc4 = 13;
    if (team == d_60ae_dcd2) {
        d_60ae_dbd4 = d_60ae_dcd0;
        d_60ae_dbc6 = d_60ae_dc52;
    } else {
        d_60ae_dbd4 = d_60ae_dcd2;
        d_60ae_dbc6 = d_60ae_dc4e;
    }
    d_60ae_dcac = d_323f_0e8a[team][0][d_60ae_dbc4];
    if (d_60ae_dbc6 == 0) {
        if (d_60ae_dcac > 7) {
            d_60ae_dd60 = 5;
            d_60ae_dd92 = 10;
        } else {
            d_60ae_dd60 = 2;
            d_60ae_dd92 = 7;
        }
    }
    if (d_60ae_dbc6 == 1) {
        d_60ae_dd60 = 8;
        d_60ae_dd92 = 10;
    }
    if (d_60ae_dbc6 == 2) {
        d_60ae_dd60 = 2;
        d_60ae_dd92 = 10;
    }
    d_60ae_dbc2 = 0;
    d_60ae_dd84 = -1;
    for (d_60ae_dd48 = 0; d_60ae_dd48 <= 13; d_60ae_dd48++) {
        if (d_323f_0538[team == d_60ae_dcd0][d_60ae_dd48] == 6) {
            d_60ae_dd84 = d_60ae_dd48;
            d_60ae_dd48 = 13;
        } else if (d_323f_0e8a[team][0][d_60ae_dd48] >= d_60ae_dd60
                   && d_323f_0e8a[team][0][d_60ae_dd48] <= d_60ae_dd92
                   && d_323f_0538[team == d_60ae_dcd0][d_60ae_dd48] < 2) {
            d_60ae_dc1a = f_817e_1709(d_60ae_dd48, team);
            if (d_60ae_dbc0 - d_60ae_dc1a > d_60ae_dbc2) {
                d_60ae_dbc2 = d_60ae_dbc0 - d_60ae_dc1a;
                d_60ae_dd84 = d_60ae_dd48;
            }
        }
    }
    if (d_60ae_dd84 != -1) {
        strcpy(d_2289_5218, "tactical");
        if (d_323f_0538[team == d_60ae_dcd0][d_60ae_dd84] == 6) {
            strcpy(d_2289_5218, "enforced");
            d_323f_0e8a[team][0][d_60ae_dbc4] = d_323f_0e8a[team][0][d_60ae_dd84];
        }
        if (team < 80) {
            strcpy(d_2289_51c8, f_14bc_483d(d_323f_0592[team][d_60ae_dbc4]));
            strcat(d_2289_51c8, " on for ");
            strcat(d_2289_51c8, f_14bc_483d(d_323f_0592[team][d_60ae_dd84]));
        } else {
            sprintf(d_2289_51c8, "Their No.%s on for their No.%s",
                    f_14bc_2f2c(d_60ae_dbc4 + 1, 0), f_14bc_2f2c(d_60ae_dd84 + 1, 0));
        }
        d_323f_0538[team == d_60ae_dcd0][d_60ae_dbc4] = 0;
        if (d_323f_0538[team == d_60ae_dcd0][d_60ae_dd84] == 6)
            d_323f_0538[team == d_60ae_dcd0][d_60ae_dd84] = 3;
        else
            d_323f_0538[team == d_60ae_dcd0][d_60ae_dd84] = 5;
        d_323f_0500[team == d_60ae_dcd2 ? 0 : 1][d_60ae_dd84] = d_60ae_dc9a;
        d_323f_051c[team == d_60ae_dcd2 ? 0 : 1][d_60ae_dbc4] = d_60ae_dc9a;
        d_471b_ae55[team == d_60ae_dcd0][d_60ae_dbc4] = d_60ae_dd84;
        d_323f_6529[team == d_60ae_dcd0][d_60ae_dbc4] = d_60ae_dc9a;
        if (team == d_60ae_dcd2)
            d_60ae_d982++;
        else
            d_60ae_d981++;
        f_817e_1b3e(team);
        if (d_60ae_dc70 + d_60ae_dc6e > 0) {
            sprintf(buf, "%s %s move", (char far *)d_60ae_b572[team], d_2289_5218);
            f_817e_0bfb(team, buf);
            f_1bd3_0dbc(75);
            f_817e_0bfb(team, d_2289_51c8);
            f_1bd3_0dbc(100);
            f_817e_0bfb(d_60ae_dcd2, d_2289_4278);
        }
    }
    if (team == d_60ae_dcd2) {
        if (d_60ae_d952)
            d_60ae_d952 = 0;
        else
            d_60ae_d950 = 0;
    } else {
        if (d_60ae_d951)
            d_60ae_d951 = 0;
        else
            d_60ae_d94f = 0;
    }
}

void f_7c74_4913(int team)
{
    int a;
    int b;

    d_60ae_dbd4 = team == d_60ae_dcd2 ? d_60ae_dcd0 : d_60ae_dcd2;
    a = -5000;
    b = -5000;
    if (d_323f_0538[team == d_60ae_dcd0][11] == 4)
        a = f_817e_1709(11, team);
    if (d_323f_0538[team == d_60ae_dcd0][12] == 4)
        b = f_817e_1709(12, team);
    if (b > a) {
        d_60ae_dbc4 = 12;
        d_60ae_dbc0 = b;
    } else {
        d_60ae_dbc4 = 11;
        d_60ae_dbc0 = a;
    }
}

void f_7c74_49bd(float x, float y)
{
    f_1bd3_0821(18, 112, 261, 120);
    f_14bc_38bc(x, 15.0, 6, "Attacking...");
    f_14bc_38bc(y, 15.0, 12, "Defending...");
}

void f_7c74_4a2e(void)
{
    f_817e_0000(d_60ae_dc3e, d_60ae_dc34, 0, 2);
    f_817e_0000(d_60ae_dc3a, d_60ae_dc38, 1, 1);
    f_817e_0000(d_60ae_dc36, d_60ae_dc3c, 2, 0);
}
