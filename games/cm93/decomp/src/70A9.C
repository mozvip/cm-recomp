/* @at 70a9:0000 */
/* @data 60ae:0598 */
/* @module */

/* Overlay 1: the season's main menu and the screens it leads to: tables, top scorers,
 * discipline, ratings and man of the match awards, form guides, attendances and job news,
 * manager points, rankings and hall of fame, awards, international squads, fixtures,
 * cups, European seedings and groups, the Anglo-Italian cup, squads, transfers and the
 * league progress graph. CM93's version of CM1's 67EE.C. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <stdlib.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_70a9_0000(void);
void f_70a9_0261(int n, char lit);
void f_70a9_05ab(void);
void f_70a9_0660(int div);
void f_70a9_0b88(int div, unsigned char far (*t)[20]);
char f_70a9_0dd0(int pos, int div);
void f_70a9_0e12(void);
void f_70a9_0e62(int mode, int team);
void f_70a9_187c(int mode);
void f_70a9_233c(void);
void f_70a9_27f7(char mode);
void f_70a9_2d90(void);
void f_70a9_316b(char year);
void f_70a9_3a67(void);
void f_70a9_3a86(void);
void f_70a9_400d(void);
void f_70a9_43b6(void);
void f_70a9_43c7(void);
void f_70a9_46eb(void);
void f_70a9_479c(void);
void f_70a9_4add(int a, int b, unsigned char n, char far *title, float x);
void f_70a9_4e55(int team);
void f_70a9_530e(int team, char far names[][98][20], unsigned char far *comp, unsigned char far *week);
void f_70a9_562e(void);
void f_70a9_5667(int team);
void f_70a9_5bc8(int team);
void f_70a9_6083(int team);

int f_14bc_6b05(int x);
void f_14bc_4bd3(char far *title);
long f_1bd3_0df6(void);
void f_1bd3_03a2(char on);
int f_1bd3_0c16(void);
int f_1bd3_0c0e(void);
int f_1bd3_0c06(void);
void f_b628_0ea6(void);
void f_7732_0f57(void);
void f_7732_0000(void);
void f_7732_0616(void);
void f_7732_0d91(void);
void f_7732_1199(void);
void f_7732_12ec(void);
void f_7732_31e2(int);
char f_14bc_2c1d(int);
void f_1bd3_08cb(int c);
void f_1bd3_08e1(int x1, int y1, int x2, int y2);
void f_1bd3_08d6(int c);
void f_1bd3_0fe2(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
unsigned f_1bd3_0b1b(char far *s, char far *set);
char far *f_1bd3_0e5e(char far *s);
void f_14bc_38bc(float x, float y, int colour, char far *s);
void f_14bc_2f90(int n, char far *title, char far *items);
void f_14bc_60ca(void);
void f_14bc_60da(void);
char far *f_14bc_4b12(int division, char full);
void f_14bc_3672(float x, float y, int bg, int fg, int w, char far *s);
void f_14bc_356a(int x, int y, int colour, char far *s);
char f_14bc_2cc0(int x);
void f_14bc_50f8(int a, float x, float y, int c, int d, int e, char far *s);
void f_1bd3_13a3(void far *a, void far *b, int n);
int f_14bc_5635(int a);
int f_a694_21b2(void);
extern char d_60ae_d97b;
extern char d_60ae_d97c;
extern int d_60ae_dd92;
extern int d_60ae_dd9c;
extern int d_60ae_dd98;
extern int d_60ae_dda0;
extern int d_60ae_dd76;
extern float d_60ae_d8ef;
extern float d_60ae_d8eb;
extern int d_60ae_dd70;
extern int d_60ae_dd74;
extern int d_60ae_dd72;
extern int d_60ae_dd6e;
extern int d_60ae_dd6c;
extern int d_60ae_dd6a;
extern int d_60ae_dd68;
extern int d_60ae_dd66;
extern int d_60ae_dd64;
extern int d_60ae_dd62;
extern int d_60ae_dd60;
extern int d_60ae_dd5e;
extern int d_60ae_dd5c;
extern int d_60ae_dd5a;
extern int d_60ae_dd58;
extern int d_60ae_dd56;
extern char near *d_60ae_b572[];
extern unsigned char far d_323f_0538[];
extern unsigned char far d_323f_0546[];
extern char far d_2289_5308[];
extern char far d_2289_52b8[];
extern char far d_2289_5268[];
extern char far d_2289_5448[][2];
extern unsigned char far d_471b_b3dc[][20];
void f_14bc_000b(float x, int team, char far *title);
void unmapped_f_67ee_5c0f(int team);
void f_a694_22e9(char far *title);
void f_1bd3_0928(int x1, int y1, int x2, int y2);
void f_14bc_0b83(char far *);
void far *unmapped_f_14d2_16bc(int handle, int page);
void f_14bc_589c(int team);
void unmapped_f_992a_0000(int div);
void f_14bc_548f(int a, char b);
int f_1bd3_1307(int a, int b);
int f_a3de_0000(int x);
extern char d_60ae_d979;
extern int far d_2289_d704[][4][2][30];
extern unsigned char far d_471b_0000[][1860];
extern unsigned char far d_3c35_0000[][1860];
extern int far d_471b_b7a8[][26];
extern unsigned char far d_323f_618a[];
extern char far d_2289_5218[];
extern char far d_2289_51c8[];
extern int d_60ae_dda4;
extern int d_60ae_fde6;
extern int d_60ae_fddc;
extern int (far *d_60ae_fae6)[1860];
extern unsigned char (far *d_60ae_fad2)[1860];
void far *f_1bd3_1617(int handle, int page);
extern char d_60ae_d97d;
extern char d_60ae_d97e;
extern int d_60ae_fafc[];
extern int d_60ae_dd78;
extern int unmapped_d_5d9c_a336;
extern unsigned char far d_2289_fb10[];
extern unsigned char far unmapped_d_2f3c_2d0b[];
extern unsigned char far unmapped_d_2f3c_2d18[];
extern unsigned char far unmapped_d_2f3c_2794[][20];
extern char far d_2289_57c4[];
extern char far d_2289_5774[];
extern char far d_2289_5724[];
extern unsigned char far unmapped_d_483b_9fb6[][20];
extern unsigned char far d_323f_4f9a[];
extern unsigned char far d_323f_4fec[];
extern unsigned char far d_323f_503e[];
extern unsigned char far d_323f_5090[];
extern unsigned char far d_323f_50e2[];
extern unsigned char far d_323f_5134[];
extern unsigned char far d_323f_5186[];
extern unsigned char far d_323f_51d8[];
extern unsigned char far d_323f_522a[];
extern unsigned char far d_323f_527c[];
void f_14bc_3e40(float x, float y, int a, int b, int c, char far *s);
void f_14bc_4587(float x, float y, int team);
char far *f_14bc_4703(int player);
void f_a694_49c9(int player, int a, char b);
void f_8aa1_4f06(int player, int a);
extern char d_60ae_d975;
extern char d_60ae_d976;
extern char d_60ae_d977;
extern char d_60ae_d978;
extern float d_60ae_d8e3;
extern float d_60ae_d8e7;
extern int d_60ae_dd4a;
extern int d_60ae_dd4c;
extern int d_60ae_dd4e;
extern int d_60ae_dd50;
extern int d_60ae_dd52;
extern int d_60ae_dd54;
extern int d_60ae_dd84;
extern int far unmapped_d_2f3c_15c0[4][3][2][30];
extern int far unmapped_d_2f3c_85f7[];
extern int far unmapped_d_2f3c_bb27[];
extern unsigned char huge unmapped_d_483b_0000[][1702];
extern unsigned char huge unmapped_d_3e42_0000[][1702];
extern char far d_2289_a50a[];
extern char far d_2289_56d4[];
extern char far d_2289_5684[];
extern unsigned char far d_323f_4e52[];
extern int far unmapped_d_483b_a372[][26];
char far *f_14bc_490d(int manager, char full);
extern long d_60ae_d83f;
extern long d_60ae_d83b;
extern int d_60ae_dd48;
extern int d_60ae_dd3c;
extern char far d_2289_55e4[];
extern char far d_2289_5594[];
extern char far d_2289_54f4[];
extern char far d_2289_2b9a[];
extern char far d_2289_2b4a[];
extern char far d_2289_0780[][82][5];
extern long far unmapped_d_2f3c_7b33[];
extern int far unmapped_d_2f3c_7f93[];
extern unsigned char far d_323f_4e00[];
extern unsigned char far d_323f_5f9e[];
extern unsigned char far d_323f_5ff0[];
char far *f_96bb_14f5(int a, int b);
extern long d_60ae_d837;
extern int d_60ae_dd3e;
extern int d_60ae_dd40;
extern int d_60ae_dd42;
extern int d_60ae_dd44;
extern int d_60ae_dd46;
extern char d_60ae_d974;
extern int d_60ae_fdd4;
extern int d_60ae_fdea;
extern long far *d_60ae_faee;
extern char far *d_60ae_ddb2;
extern unsigned char far unmapped_d_2f3c_5e19[];
extern unsigned char far unmapped_d_2f3c_53f1[];
extern unsigned char far unmapped_d_2f3c_5167[];
extern long far unmapped_d_2f3c_1d40[];
char far *f_14bc_48b4(int player);
char far *f_14bc_483d(int player);
char far *unmapped_f_992a_5114(int n);
extern int d_60ae_dd3a;
extern int d_60ae_dd36;
extern int d_60ae_dd38;
extern int d_60ae_dd34;
extern int d_60ae_dd32;
extern int d_60ae_dd30;
extern int d_60ae_dd2e;
extern int unmapped_d_5d9c_a344;
extern int d_60ae_dcd0[];
extern float d_60ae_d8df;
extern unsigned char d_60ae_0094[];
extern int (far *d_60ae_face)[2][22];
extern char far d_2289_5454[];
extern char far d_2289_5404[];
extern char far d_2289_5396[];
extern char far d_2289_5346[];
extern char far d_2289_52f6[];
extern char far d_2289_52a6[];
extern long far unmapped_d_2f3c_0040[];
extern float far unmapped_d_2f3c_0050[][4];
extern int far unmapped_d_2f3c_0070[][4];
extern char far * far unmapped_d_5471_17c4[];
void f_14bc_3334(int last);
void f_7732_136d(int, int, int);
char f_14bc_2b02(int);
char f_14bc_2a5c(int);
char far *f_14bc_3523(int x);
void f_96bb_6929(void);
extern int d_60ae_dd2c;
extern int d_60ae_dd2a;
extern int d_60ae_dcd8;
extern char d_60ae_d960;
extern char d_60ae_d973;
extern char d_60ae_d972;
extern int d_60ae_dd80;
extern int d_60ae_dd82;
extern int d_60ae_dd28;
extern int d_60ae_dd7e;
extern int d_60ae_dd7c;
extern int d_60ae_dd7a;
extern int unmapped_d_5d9c_9f87;
extern int far unmapped_d_483b_a174[];
extern int far unmapped_d_2f3c_27e4[][80];
extern int d_60ae_dd26;
extern int d_60ae_dd24;
extern char far d_2289_5256[];
extern unsigned char far unmapped_d_2f3c_0080[];
extern unsigned char far d_323f_0fe4[];
extern char far * far unmapped_d_5471_16f0[];
extern int d_60ae_dd22;
extern int d_60ae_dd20;
extern int far d_2289_ff85[][5];
extern int d_60ae_dd1e;
extern int far unmapped_d_2f3c_0030[][4];
extern unsigned char far unmapped_d_2f3c_0000[][2][4];
extern unsigned char far d_2289_fcb5[][8][5];
void f_817e_3d44(int a, int b, char c);
char f_14bc_2594(int);
char f_14bc_2b82(int);
char f_14bc_25c5(int);
char f_14bc_2784(int, int);
char f_14bc_2835(int, int);
char f_14bc_28cc(int, int);
char unmapped_f_992a_752d(int, int);
char unmapped_f_992a_75bc(int, int);
char f_14bc_2b27(int a, int b);
void f_a3de_10b8(int);
void f_a3de_16b2(int team, char reserves);
void f_7c74_00eb(int team);
void unmapped_f_88c9_68aa(int team);
long f_1bd3_0d69(long n);
void f_7732_0027(int team);
void f_a694_09a0(int team);
void f_7732_0855(int team);
extern unsigned char far d_323f_4cb8[];
extern int far d_323f_1200[][2][94];
extern int far unmapped_d_483b_a0ba[];
extern char far d_2289_49e6[];
extern int far unmapped_d_2f3c_1584[];
extern int d_60ae_dcfc;
extern int d_60ae_dcfe;
extern int d_60ae_dd00;
extern int d_60ae_dd02;
extern int d_60ae_dd04;
extern int d_60ae_dd06;
extern int d_60ae_dd08;
extern int d_60ae_dd0a;
extern int d_60ae_dd0c;
extern int unmapped_d_5d9c_9f19;
extern int d_60ae_dd12;
extern int unmapped_d_5d9c_9f1d;
extern int d_60ae_dd14;
extern int d_60ae_dd16;
extern int d_60ae_dd18;
extern int d_60ae_dd1a;
extern int d_60ae_dd1c;
char far *f_1bd3_0f30(char far *s, unsigned n);
char far *f_1bd3_0f83(char far *s, unsigned i, unsigned n);
char far *f_14bc_0e7a(long amount);
struct label { int x, y; char far *s; };
extern char far d_2289_51b6[];
extern char far d_2289_5544[];
extern char far d_2289_5166[];
extern unsigned char far d_323f_5320[][82];
extern float d_60ae_d8db;
extern int d_60ae_fde4;
extern int far *d_60ae_faea;
extern int unmapped_d_5d9c_9f05;
extern long unmapped_d_5d9c_9a4c;
extern long d_60ae_d833;
extern int d_60ae_dcf8;
extern int d_60ae_dcf6;
extern int d_60ae_dcf4;
extern int d_60ae_dcf2;
extern char far *d_60ae_dd86;
unsigned char f_b628_0957(char team);
extern char far d_2289_5128[];
extern char far d_2289_5038[];
extern char far d_2289_2288[];
extern char far d_2289_2238[];
extern char far d_2289_1e28[][82][5];
extern long far d_323f_4354[];
extern int far d_323f_47b4[];
extern int d_60ae_fde8;
extern unsigned char far d_323f_1c08[];
extern unsigned char far d_323f_1e92[];
extern unsigned char far d_323f_28ba[];
extern long far d_2289_eb60[][2];
extern char d_60ae_d8f4;
extern char far d_2289_4f98[];
extern char far d_2289_4f48[];
extern char far d_2289_4eda[];
extern char far d_2289_4e8a[];
extern char far d_2289_4e3a[];
extern char far d_2289_4dea[];
extern long far d_2289_be20[];
extern int far d_2289_be30[];
extern float far d_2289_be38[][4];
extern int far d_2289_be58[][4];
extern int far d_2289_be68[][2][22];
extern unsigned char far d_3c35_32dc[];
extern unsigned char far d_471b_82c8[];
extern unsigned char far d_2276_0000[];
extern char far * far d_54d9_0000[];
extern char far * far d_54d9_04d2[];
void f_14bc_5053(void);
char f_14bc_6f7c(int player);
extern int far d_471b_b5a2[];
extern int far d_2289_bda4[][5];
extern char far d_2289_4d9a[];
extern unsigned char far d_2289_c250[];
extern unsigned char far d_54d9_0fe4[];
extern int far d_323f_00a0[][80];
void f_1bd3_1a23();
char f_14bc_295d(int, int);
extern int d_60ae_dd0e;
extern int far d_54d9_1200[][2][98];
extern int far d_471b_b4e0[];
extern char far d_2289_0078[];
extern char far d_2289_73ec[];
extern int far d_2289_be10[][4];
extern unsigned char far d_2289_bde0[][2][4];
extern unsigned char far d_2289_bb10[][6][5];
char f_14bc_5e32(int player);
void f_be31_0000(char team);
void f_96bb_0a22(int team);
void f_ad38_34a0(char team, char n);
void f_b628_5a8e(char team);
extern long d_60ae_d82f;
extern int d_60ae_dcfa;
extern int far d_2289_d6c8[];
extern long far d_323f_3f94[][80];
struct transfers { int in[6], out[6]; /* the players */ unsigned char in_club[6], out_club[6]; /* the other club */ long in_fee[6], out_fee[6]; /* the fee, 1 for a loan */ unsigned char n_in, n_out; /* how many so far */ };
extern struct transfers far d_2289_7b16[];

/* the main menu: per item, the button's position and colour */
static unsigned char d_60ae_0598[][3] = {
    {8, 32, 15}, {164, 32, 3}, {242, 32, 15}, {8, 88, 15}, {86, 88, 3}, {164, 88, 15},
    {242, 88, 3}, {8, 144, 3}, {86, 144, 15}, {164, 144, 3}, {242, 144, 15}
};

void f_70a9_0000(void)
{
    char buf[320];

    d_60ae_d97c = -1;
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 13; d_60ae_dd92++)
        d_323f_0546[d_60ae_dd92] = d_323f_0538[d_60ae_dd92] = d_60ae_dd92 > 10 ? 4 : 0;
    do {
        sprintf(buf, "Week %d %s %d", f_14bc_6b05(d_60ae_dd9c),
                d_60ae_dd9c > 8 ? "Season" : "Preseason", d_60ae_dd98);
        f_14bc_4bd3(buf);
        for (d_60ae_dd76 = 0; d_60ae_dd76 <= 10; d_60ae_dd76++)
            f_70a9_0261(d_60ae_dd76, 0);
        d_60ae_d8ef = f_1bd3_0df6();
        f_1bd3_03a2(0);
        do {
            d_60ae_dd70 = -1;
            if (f_1bd3_0c16() > 0) {
                for (d_60ae_dd76 = 0; d_60ae_dd76 <= 10; d_60ae_dd76++) {
                    d_60ae_dd74 = d_60ae_0598[d_60ae_dd76][0];
                    d_60ae_dd72 = d_60ae_0598[d_60ae_dd76][1];
                    if (f_1bd3_0c0e() >= d_60ae_dd74
                        && f_1bd3_0c0e() <= d_60ae_dd74 + (d_60ae_dd76 == 0 ? 148 : 70)
                        && f_1bd3_0c06() >= d_60ae_dd72
                        && f_1bd3_0c06() <= d_60ae_dd72 + 48) {
                        f_70a9_0261(d_60ae_dd76, -1);
                        d_60ae_dd70 = d_60ae_dd76;
                        d_60ae_dd76 = 10;
                    }
                }
            }
            if (d_60ae_d97b && f_1bd3_0df6() - d_60ae_d8ef > 400 && d_60ae_dd70 == -1) {
                d_60ae_dd70 = 0;
                f_70a9_0261(0, -1);
            }
        } while (d_60ae_dd70 <= -1);
        f_1bd3_03a2(1);
        if (d_60ae_dd70 > 0) {
            switch (d_60ae_dd70) {
            case 1: f_70a9_05ab(); break;
            case 2: f_70a9_400d(); break;
            case 3: f_70a9_562e(); break;
            case 4:
                if (d_60ae_dd9c <= 8)
                    f_b628_0ea6();
                else
                    f_7732_0f57();
                break;
            case 5: f_7732_0000(); break;
            case 6: f_7732_0616(); break;
            case 7: f_7732_0d91(); break;
            case 8: f_70a9_3a67(); break;
            case 9: f_7732_1199(); break;
            case 10: f_7732_12ec(); break;
            }
        }
    } while (d_60ae_dd70 != 0);
    d_60ae_d97c = 0;
}

/* the main menu's labels (the first and sixth are rewritten each week) */
static char far *d_60ae_05b9[] = {
    "Saturday Fixtures", "View Tables", "Fixture Info", "Club Details", "Match Reports",
    "Find Player", "Board Resign", "Manager Jobs", "National Squads", "New Picture",
    "Save Game"
};

void f_70a9_0261(int n, char lit)
{
    if (n == 0 && d_60ae_dd9c == 99)
        strcpy(d_2289_5308, "New Season");
    else if (n == 0 && f_14bc_2c1d(d_60ae_dd9c) == 0)
        strcpy(d_2289_5308, "Continue Season");
    else if (n == 0 && d_60ae_dd9c % 2 == 1)
        strcpy(d_2289_5308, "Midweek Fixtures");
    else if (n == 4 && d_60ae_dd9c <= 8)
        strcpy(d_2289_5308, "Arrange Friendly");
    else if (n == 5 && d_60ae_d97b)
        strcpy(d_2289_5308, "Short Lists");
    else
        strcpy(d_2289_5308, d_60ae_05b9[n]);
    d_60ae_dd74 = d_60ae_0598[n][0];
    d_60ae_dd72 = d_60ae_0598[n][1];
    d_60ae_dd6e = lit ? 8 : d_60ae_0598[n][2];
    d_60ae_dd6c = n == 0 ? 148 : 70;
    f_1bd3_08cb(16);
    f_1bd3_08e1(d_60ae_dd74 + 4, d_60ae_dd72 + 4,
                d_60ae_dd74 + d_60ae_dd6c + 4, d_60ae_dd72 + 52);
    f_1bd3_08cb(d_60ae_dd6e + 16);
    f_1bd3_08e1(d_60ae_dd74, d_60ae_dd72, d_60ae_dd74 + d_60ae_dd6c, d_60ae_dd72 + 48);
    if (d_60ae_dd6e == 3)
        d_60ae_dd6a = 15;
    else if (d_60ae_dd6e == 15)
        d_60ae_dd6a = 3;
    else
        d_60ae_dd6a = 1;
    f_1bd3_08d6(d_60ae_dd6a + 16);
    f_1bd3_0fe2(d_60ae_dd74, d_60ae_dd72 + 48, d_60ae_dd74, d_60ae_dd72);
    f_1bd3_0fe2(d_60ae_dd74, d_60ae_dd72, d_60ae_dd74 + d_60ae_dd6c, d_60ae_dd72);
    f_1bd3_08d6(16);
    f_1bd3_0fe2(d_60ae_dd74 + d_60ae_dd6c, d_60ae_dd72,
                d_60ae_dd74 + d_60ae_dd6c, d_60ae_dd72 + 48);
    f_1bd3_0fe2(d_60ae_dd74 + d_60ae_dd6c, d_60ae_dd72 + 48,
                d_60ae_dd74, d_60ae_dd72 + 48);
    d_60ae_dd68 = f_1bd3_0b1b(d_2289_5308, " ");
    strcpy(d_2289_52b8, d_2289_5308);
    d_2289_52b8[d_60ae_dd68 - 1] = 0;
    strcpy(d_2289_5268, &d_2289_5308[d_60ae_dd68]);
    d_60ae_dd66 = d_60ae_dd6c / 2 - strlen(d_2289_52b8) * 4;
    f_14bc_38bc((d_60ae_dd74 + d_60ae_dd66 + 8) / 8.0, (d_60ae_dd72 + 23) / 8.0, 1,
                f_1bd3_0e5e(d_2289_52b8));
    d_60ae_dd66 = d_60ae_dd6c / 2 - strlen(d_2289_5268) * 4;
    f_14bc_38bc((d_60ae_dd74 + d_60ae_dd66 + 8) / 8.0, (d_60ae_dd72 + 31) / 8.0, 1,
                f_1bd3_0e5e(d_2289_5268));
}

void f_70a9_05ab(void)
{
    do {
        f_14bc_2f90(0, "Tables/Awards", "*Exit|League Tables|Group Tables|Top Goalscorers|Worst Discipline|Average Ratings|M/O/M Awards|Team Form Guide|Average Gates|Manager Scores|Manager Rankings|Manager Salary|Hall Of Fame|Monthly Awards|");
        d_60ae_dd64 = d_60ae_dda0;
        switch (d_60ae_dd64) {
        case 1:
            f_70a9_0660(-1);
            break;
        case 2:
            f_70a9_0e12();
            break;
        case 3:
        case 4:
        case 5:
        case 6:
            f_70a9_0e62(d_60ae_dd64 - 3, -1);
            break;
        case 7:
            f_70a9_187c(0);
            break;
        case 8:
            f_70a9_187c(1);
            break;
        case 9:
            f_70a9_233c();
            break;
        case 10:
            f_70a9_27f7(0);
            break;
        case 11:
            f_70a9_27f7(1);
            break;
        case 12:
            f_70a9_2d90();
            break;
        case 13:
            f_70a9_316b(0);
            break;
        }
    } while (d_60ae_dd64 != 0);
}

/* the league table's column headings */
static char far *d_60ae_05e5[] = {
    "PL", "W", "D", "L", "F", "A", "W", "D", "L", "F", "A", "PT"
};

void f_70a9_0660(int div)
{
    int y;
    char buf[320];

    memset(d_471b_b3dc, 0, 260);
    if (div == -1)
        d_60ae_dd62 = f_a694_21b2();
    else
        d_60ae_dd62 = div;
    do {
        f_70a9_0b88(d_60ae_dd62, d_471b_b3dc);
        f_14bc_60ca();
        f_14bc_4bd3("");
        sprintf(buf, " %s", f_14bc_4b12(d_60ae_dd62 + 1, 0));
        f_14bc_3672(1.125, 1.25, 1, 2, 0x61, buf);
        for (d_60ae_dd60 = 0; d_60ae_dd60 <= 11; d_60ae_dd60++) {
            sprintf(buf, "%-2s", d_60ae_05e5[d_60ae_dd60]);
            f_14bc_3672(d_60ae_dd60 * 2 + 15.625 + (d_60ae_dd60 == 0 ? -1 : 0), 1.25, 1, 8, 0, buf);
        }
        d_60ae_d8eb = 2.5;
        y = 20;
        d_60ae_dd6e = d_60ae_dd62 == 0 ? 14 : 4;
        d_60ae_dd5e = d_60ae_dd62 == 0 ? 8 : 12;
        for (d_60ae_dd5c = 0; d_60ae_dd5c <= 19; d_60ae_dd5c++) {
            f_14bc_356a(11, y, 1, d_2289_5448[d_60ae_dd5c]);
            if (f_14bc_2cc0(d_60ae_dd5a = d_471b_b3dc[0][d_60ae_dd5c]))
                d_60ae_dd58 = 3;
            else
                d_60ae_dd58 = d_60ae_dd5e;
            sprintf(buf, " %.15s", (char far *)d_60ae_b572[d_60ae_dd5a]);
            f_14bc_50f8(0, 1.125, d_60ae_d8eb, 1, d_60ae_dd58, 0x61, buf);
            sprintf(buf, "%-2d", d_471b_b3dc[1][d_60ae_dd5c]);
            f_14bc_356a(125, y, 5, buf);
            for (d_60ae_dd92 = 2; d_60ae_dd92 <= 11; d_60ae_dd92++) {
                sprintf(buf, "%-2d", d_471b_b3dc[d_60ae_dd92][d_60ae_dd5c]);
                f_14bc_356a((d_60ae_dd92 - 2) * 16 + 149, y, d_60ae_dd92 > 6 ? 1 : 6, buf);
            }
            sprintf(buf, "%-2d", d_471b_b3dc[12][d_60ae_dd5c]);
            f_14bc_3672(37.625, d_60ae_d8eb, 1, 2, 0, buf);
            if (f_70a9_0dd0(d_60ae_dd5c, d_60ae_dd62)) {
                f_1bd3_08d6(22);
                f_1bd3_0fe2(8, d_60ae_d8eb * 8.0 + 2.0, 105, d_60ae_d8eb * 8.0 + 2.0);
                d_60ae_d8eb = d_60ae_d8eb + 1.125;
                y += 9;
            } else {
                d_60ae_d8eb += 1;
                y += 8;
            }
            f_1bd3_13a3(&d_60ae_dd6e, &d_60ae_dd5e, 2);
        }
        f_14bc_60da();
        f_14bc_50f8(2, 1.25, 22.75, 6, 2, 0x35, " - DIV");
        f_14bc_50f8(2, 32.25, 22.75, 6, 2, 0x35, " + DIV");
        f_14bc_50f8(2, 8.5, 22.75, 1, 4, 0xb9, "          EXIT");
        do
            d_60ae_dda0 = f_14bc_5635(d_60ae_dd56);
        while (d_60ae_dda0 <= 0);
        if (d_60ae_dda0 >= 1 && d_60ae_dda0 <= 20) {
            if (f_14bc_2cc0(d_60ae_dd5c = d_471b_b3dc[0][d_60ae_dda0 - 1]))
                f_7732_31e2(d_60ae_dd5c);
            else
                f_70a9_5667(d_60ae_dd5c);
        } else if (d_60ae_dda0 == 21) {
            d_60ae_dd62--;
            if (d_60ae_dd62 < 0)
                d_60ae_dd62 = 3;
        } else if (d_60ae_dda0 == 22) {
            d_60ae_dd62++;
            if (d_60ae_dd62 > 3)
                d_60ae_dd62 = 0;
        } else if (d_60ae_dda0 == 23)
            d_60ae_dd62 = -1;
    } while (d_60ae_dd62 != -1);
}

void f_70a9_0b88(int div, unsigned char far (*t)[20])
{
    d_60ae_dd64 = 0;
    for (d_60ae_dd60 = div * 20; d_60ae_dd60 <= div * 20 + 19; d_60ae_dd60++) {
        d_60ae_dd5a = d_2289_fb10[d_60ae_dd60];
        strcpy(d_2289_5448[d_60ae_dd64], " ");
        if (d_323f_4f9a[d_60ae_dd5a] == 1)
            strcpy(d_2289_5448[d_60ae_dd64], "R");
        else if (d_323f_4f9a[d_60ae_dd5a] == 3)
            strcpy(d_2289_5448[d_60ae_dd64], "P");
        else if (d_323f_4f9a[d_60ae_dd5a] == 4)
            strcpy(d_2289_5448[d_60ae_dd64], "C");
        t[0][d_60ae_dd64] = d_60ae_dd5a;
        t[1][d_60ae_dd64] = d_60ae_dd78 - 1;
        t[2][d_60ae_dd64] = d_323f_4fec[d_60ae_dd5a] - d_323f_5134[d_60ae_dd5a];
        t[3][d_60ae_dd64] = f_1bd3_1307(d_60ae_dd78 - 1 - d_323f_4fec[d_60ae_dd5a]
                                        - d_323f_503e[d_60ae_dd5a], 0)
                            - d_323f_5186[d_60ae_dd5a];
        t[4][d_60ae_dd64] = d_323f_503e[d_60ae_dd5a] - d_323f_51d8[d_60ae_dd5a];
        t[5][d_60ae_dd64] = d_323f_5090[d_60ae_dd5a] - d_323f_522a[d_60ae_dd5a];
        t[6][d_60ae_dd64] = d_323f_50e2[d_60ae_dd5a] - d_323f_527c[d_60ae_dd5a];
        t[7][d_60ae_dd64] = d_323f_5134[d_60ae_dd5a];
        t[8][d_60ae_dd64] = d_323f_5186[d_60ae_dd5a];
        t[9][d_60ae_dd64] = d_323f_51d8[d_60ae_dd5a];
        t[10][d_60ae_dd64] = d_323f_522a[d_60ae_dd5a];
        t[11][d_60ae_dd64] = d_323f_527c[d_60ae_dd5a];
        t[12][d_60ae_dd64] = f_a3de_0000(d_60ae_dd60);
        d_60ae_dd64++;
    }
}

char f_70a9_0dd0(int pos, int div)
{
    d_60ae_d979 = 0;
    if ((pos == 0 && div == 0)
        || (div > 0 && (pos == 1 || pos == 5))
        || (div < 3 && pos == 16)
        || (div == 3 && pos == 18))
        d_60ae_d979 = -1;
    return d_60ae_d979;
}

void f_70a9_0e12(void)
{
    do {
        f_14bc_2f90(0, "Group Tables", "*Exit|European Cup|Anglo-Ital Cup|");
        if (d_60ae_dda0 == 1) {
            if (d_60ae_dd9c <= 51)
                f_14bc_0b83("Groups not yet decided");
            else
                f_70a9_46eb();
        } else if (d_60ae_dda0 == 2)
            f_70a9_479c();
    } while (d_60ae_dda0 > 0);
}

void f_70a9_0e62(int mode, int team)
{
    char shown;
    char sel[1860];
    int list[30];
    char buf[320];

    d_60ae_d978 = team < 0 ? -1 : 0;
    if (d_60ae_d978)
        d_60ae_dd54 = f_a694_21b2();
    for (;;) {
        memset(sel, 0, 1860);
        shown = 0;
        memset(list, -1, 60);
        f_14bc_60ca();
        if (mode == 0) {
            f_14bc_4bd3(d_60ae_d978 ? "Top Goalscorers" : "Goalscorers");
        } else if (mode == 1) {
            f_14bc_4bd3(d_60ae_d978 ? "Worst Discipline" : "Discipline");
        } else if (mode == 2) {
            f_14bc_4bd3(d_60ae_d978 ? "Top Av Ratings" : "Av Ratings");
        } else if (mode == 3) {
            f_14bc_4bd3(d_60ae_d978 ? "Most M/O/M Awards" : "M/O/M Awards");
        }
        if (d_60ae_d978) {
            sprintf(buf, " %s ", f_14bc_4b12(d_60ae_dd54 + 1, 0));
            f_14bc_3e40(1.25, 4.0, 0, 9, 0, buf);
        } else
            f_14bc_4587(1.25, 4.0, team);
        d_60ae_dd6e = (d_60ae_d978 && d_60ae_dd54 == 0) || (team < 20 && !d_60ae_d978) ? 14 : 4;
        d_60ae_dd5e = (d_60ae_d978 && d_60ae_dd54 == 0) || (team < 20 && !d_60ae_d978) ? 8 : 12;
        d_60ae_d977 = 0;
        d_60ae_dd52 = -1;
        for (d_60ae_dd64 = 0; d_60ae_dd64 <= 29; d_60ae_dd64++) {
            d_60ae_dd84 = -1;
            d_60ae_dd50 = 0;
            if (d_60ae_d977 == 0) {
                if (d_60ae_d978) {
                    if (d_2289_d704[d_60ae_dd54][mode][0][d_60ae_dd64] == -2) {
                        for (d_60ae_dd60 = 0; d_60ae_dd60 <= d_60ae_dda4 - 1; d_60ae_dd60++) {
                            int k;
                            k = d_471b_0000[18][d_60ae_dd60] / 20;
                            if (sel[d_60ae_dd60] == 0 && k == d_60ae_dd54) {
                                d_60ae_dd4e = 0;
                                if (mode == 0)
                                    d_60ae_dd4e = d_3c35_0000[1][d_60ae_dd60];
                                else if (mode == 1)
                                    d_60ae_dd4e = d_3c35_0000[2][d_60ae_dd60] - d_3c35_0000[2][d_60ae_dd60] % 5;
                                else if (mode == 2) {
                                    if (d_3c35_0000[0][d_60ae_dd60] > d_60ae_dd78 / 2) {
                                        d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
                                        d_60ae_dd4e = (float)d_60ae_fae6[0][d_60ae_dd60] / d_3c35_0000[0][d_60ae_dd60] * 1000;
                                    }
                                } else if (mode == 3) {
                                    d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 0);
                                    d_60ae_dd4e = d_60ae_fad2[3][d_60ae_dd60];
                                }
                                if (d_60ae_dd4e > d_60ae_dd50) {
                                    d_60ae_dd84 = d_60ae_dd60;
                                    d_60ae_dd50 = d_60ae_dd4e;
                                }
                            }
                        }
                        d_2289_d704[d_60ae_dd54][mode][0][d_60ae_dd64] = d_60ae_dd84;
                        d_2289_d704[d_60ae_dd54][mode][1][d_60ae_dd64] = d_60ae_dd50;
                    } else {
                        d_60ae_dd84 = d_2289_d704[d_60ae_dd54][mode][0][d_60ae_dd64];
                        d_60ae_dd50 = d_2289_d704[d_60ae_dd54][mode][1][d_60ae_dd64];
                    }
                } else {
                    for (d_60ae_dd92 = 0; d_60ae_dd92 <= d_323f_4e52[team] - 1; d_60ae_dd92++) {
                        d_60ae_dd60 = d_471b_b7a8[team][d_60ae_dd92];
                        d_60ae_dd4e = 0;
                        if (sel[d_60ae_dd60] == 0) {
                            if (mode == 0)
                                d_60ae_dd4e = d_3c35_0000[13][d_60ae_dd60];
                            else if (mode == 1)
                                d_60ae_dd4e = d_3c35_0000[2][d_60ae_dd60] - d_3c35_0000[2][d_60ae_dd60] % 5;
                            else if (mode == 2) {
                                if (d_3c35_0000[12][d_60ae_dd60] > 0) {
                                    d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
                                    d_60ae_dd4e = (float)d_60ae_fae6[2][d_60ae_dd60] / d_3c35_0000[12][d_60ae_dd60] * 1000;
                                }
                            } else if (mode == 3) {
                                d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 0);
                                d_60ae_dd4e = d_60ae_fad2[3][d_60ae_dd60];
                            }
                            if (d_60ae_dd4e > d_60ae_dd50) {
                                d_60ae_dd84 = d_60ae_dd60;
                                d_60ae_dd50 = d_60ae_dd4e;
                            }
                        }
                    }
                }
            }
            d_60ae_dd4c = d_60ae_dd5e;
            if (d_60ae_dd84 > -1 && (d_60ae_dd50 > 0 && d_60ae_d978 || d_60ae_d978 == 0)) {
                sprintf(d_2289_5218, " %.17s", f_14bc_4703(d_60ae_dd84));
                if (mode != 2) {
                    if (d_60ae_dd50 > 0)
                        sprintf(d_2289_51c8, " %02d", d_60ae_dd50);
                    else
                        strcpy(d_2289_51c8, " --");
                } else if (d_60ae_dd50 > 0) {
                    d_60ae_d8e7 = d_60ae_dd50 / 1000.0;
                    sprintf(d_2289_51c8, "%4.2f", d_60ae_d8e7);
                    d_2289_51c8[4] = 0;
                } else
                    strcpy(d_2289_51c8, "----");
                sel[d_60ae_dd84] = -1;
                list[d_60ae_dd64] = d_60ae_dd84;
                d_60ae_dd52 = d_60ae_dd64;
                if (d_60ae_d978 && f_14bc_2cc0(d_471b_0000[18][d_60ae_dd84]))
                    d_60ae_dd4c = 3;
            } else {
                strcpy(d_2289_5218, "");
                strcpy(d_2289_51c8, "");
                d_60ae_d977 = -1;
            }
            if (d_60ae_dd64 < 15) {
                d_60ae_d8e3 = 1.125;
                d_60ae_d8eb = d_60ae_dd64 + 7.25;
            } else {
                d_60ae_d8e3 = 20.25;
                d_60ae_d8eb = d_60ae_dd64 - 15 + 7.25;
            }
            sprintf(buf, "%02d", d_60ae_dd64 + 1);
            f_14bc_3672(d_60ae_d8e3, d_60ae_d8eb, 6, 3, 0, buf);
            if (list[d_60ae_dd64] == -1) {
                if (shown == 0 && mode == 0 && d_60ae_d978 == 0 && d_323f_618a[team] > 0) {
                    strcpy(d_2289_5218, " Own Goals");
                    sprintf(d_2289_51c8, " %02d", d_323f_618a[team]);
                }
                f_14bc_3672(d_60ae_d8e3 + 1.75, d_60ae_d8eb, 6, d_60ae_dd4c, 111, d_2289_5218);
                shown = -1;
            } else {
                int p;
                p = list[d_60ae_dd64];
                f_14bc_50f8(0, d_60ae_d8e3 + 1.75, d_60ae_d8eb, d_3c35_0000[7][p] < 255 ? 6 : 1, d_60ae_dd4c, 111, d_2289_5218);
            }
            f_14bc_3672(d_60ae_d8e3 + 15.875, d_60ae_d8eb, 1, 2, 24, d_2289_51c8);
            f_1bd3_13a3(&d_60ae_dd6e, &d_60ae_dd5e, 2);
        }
        f_14bc_60da();
        if (d_60ae_d978) {
            f_14bc_50f8(2, 8.5, 22.5, 1, 4, 185, "          EXIT");
            f_14bc_50f8(2, 1.25, 22.5, 6, 2, 53, " - DIV");
            f_14bc_50f8(2, 32.25, 22.5, 6, 2, 53, " + DIV");
        } else
            f_14bc_50f8(2, 1.25, 22.5, 1, 4, 301, "                 EXIT");
        do
            d_60ae_dda0 = f_14bc_5635(d_60ae_dd56);
        while (d_60ae_dda0 <= 0);
        if (d_60ae_dd52 + 2 > d_60ae_dda0) {
            d_60ae_dd84 = list[d_60ae_dda0 - 1];
            do {
                f_a694_49c9(d_60ae_dd84, -1, -1);
                f_8aa1_4f06(d_60ae_dd84, d_60ae_dd4a);
            } while (!d_60ae_d975);
        } else if (d_60ae_dd52 + 3 == d_60ae_dda0) {
            d_60ae_dd54--;
            if (d_60ae_dd54 < 0)
                d_60ae_dd54 = 3;
        } else if (d_60ae_dd52 + 4 == d_60ae_dda0) {
            d_60ae_dd54++;
            if (d_60ae_dd54 > 3)
                d_60ae_dd54 = 0;
        } else
            break;
    }
}

void f_70a9_187c(int mode)
{
    char used[80];
    int list[21];
    char buf[318];
    unsigned char c;

    d_60ae_dd62 = f_a694_21b2();
    do {
        memset(used, 0, 80);
        f_14bc_60ca();
        f_14bc_4bd3("");
        sprintf(d_2289_5128, "%s", f_14bc_4b12(d_60ae_dd62 + 1, 0));
        if (mode < 2) {
            if (mode == 0) {
                sprintf(buf, "Form Guide %s", d_2289_5128);
                f_14bc_3672(1.125, 1.5, 0, 1, 0x86, buf);
                f_14bc_3672(18.125, 1.5, 1, 8, 0, " HOME ");
                f_14bc_3672(22.875, 1.5, 1, 8, 0, " AWAY ");
            } else {
                sprintf(buf, "Attendance %s", d_2289_5128);
                f_14bc_3672(1.125, 1.5, 0, 1, 0x86, buf);
                f_14bc_3672(18.125, 1.5, 1, 2, 0x4a, " AVERAGE");
            }
            f_14bc_3672(27.625, 1.5, 1, 8 - mode * 6, 0, " LP ");
            f_14bc_3672(30.875, 1.5, 1, 8 - mode * 6, 0, "BOARD %  ");
        } else {
            sprintf(buf, "Job News %s", d_2289_5128);
            f_14bc_3672(1.125, 1.5, 0, 1, 0x86, buf);
            f_14bc_3672(18.125, 1.5, 1, 2, 0x53, " MANAGER");
            f_14bc_3672(28.75, 1.5, 0, 6, 0x53, " JOB");
        }
        d_60ae_dd6e = d_60ae_dd62 == 0 ? 14 : 4;
        d_60ae_dd5e = d_60ae_dd62 == 0 ? 8 : 12;
        d_60ae_dd72 = 6;
        d_60ae_dd60 = 1;
        while (d_60ae_dd60 <= 20) {
            d_60ae_dd5a = -1;
            d_60ae_d83f = 0;
            for (d_60ae_dd92 = d_60ae_dd62 * 20; d_60ae_dd92 <= d_60ae_dd62 * 20 + 19; d_60ae_dd92++) {
                d_60ae_dd5c = d_2289_fb10[d_60ae_dd92];
                if (used[d_60ae_dd5c] == 0) {
                    d_60ae_d83b = 0;
                    if (mode == 0) {
                        d_60ae_d83b = f_b628_0957(d_60ae_dd5c);
                    } else if (mode == 1) {
                        if (d_323f_5f9e[d_60ae_dd5c] > 0)
                            d_60ae_d83b = d_323f_4354[d_60ae_dd5c] / d_323f_5f9e[d_60ae_dd5c];
                    } else {
                        d_60ae_d83b = 100 - d_323f_4e00[d_60ae_dd5c];
                        if (d_323f_5ff0[d_60ae_dd5c] > 0)
                            d_60ae_d83b = 255;
                    }
                    if (d_60ae_d83b > d_60ae_d83f || d_60ae_dd5a == -1) {
                        d_60ae_d83f = d_60ae_d83b;
                        d_60ae_dd3c = d_60ae_dd92;
                        d_60ae_dd5a = d_60ae_dd5c;
                    }
                }
            }
            d_60ae_dd58 = d_60ae_dd5e;
            if (mode < 2) {
                if (f_14bc_2cc0(d_60ae_dd5a))
                    d_60ae_dd58 = 3;
                sprintf(buf, " %02d ", d_60ae_dd60);
                f_14bc_3672(1.125, d_60ae_dd72 + 0.25 - 3.5, 0, 6, 0, buf);
                sprintf(buf, " %.17s", (char far *)d_60ae_b572[d_60ae_dd5a]);
                f_14bc_50f8(0, 4.375, d_60ae_dd72 + 0.25 - 3.5, 1, d_60ae_dd58, 0x6c, buf);
                if (mode == 0) {
                    sprintf(buf, " %s", d_2289_1e28[0][d_60ae_dd5a]);
                    f_14bc_3672(18.125, d_60ae_dd72 + 0.25 - 3.5, 6, 2, 0x24, buf);
                    sprintf(buf, " %s", d_2289_1e28[1][d_60ae_dd5a]);
                    f_14bc_3672(22.875, d_60ae_dd72 + 0.25 - 3.5, 6, 2, 0x24, buf);
                } else {
                    strcpy(buf, "");
                    if (d_60ae_d83f > 0)
                        sprintf(buf, "   %ld", d_60ae_d83f);
                    f_14bc_3672(18.125, d_60ae_dd72 + 0.25 - 3.5, 1,
                                d_60ae_dd5e == 8 || d_60ae_dd5e == 14 ? 4 : 14, 0x4a, buf);
                }
                sprintf(buf, " %02d ", d_60ae_dd3c + 1 - d_60ae_dd62 * 20);
                f_14bc_3672(27.625, d_60ae_dd72 + 0.25 - 3.5, 1, 9, 0, buf);
                sprintf(d_2289_5038, "%d%%", d_323f_4e00[d_60ae_dd5a]);
                sprintf(buf, "    %s", d_2289_5038);
                f_14bc_3672(30.875, d_60ae_dd72 + 0.25 - 3.5, 6, 3, 0x42, buf);
            } else {
                if (f_14bc_2cc0(d_60ae_dd5a))
                    d_60ae_dd58 = 12;
                sprintf(buf, " %.21s", (char far *)d_60ae_b572[d_60ae_dd5a]);
                f_14bc_50f8(0, 1.125, d_60ae_dd72 - 3.25, 1, d_60ae_dd58, 0x86, buf);
                if (d_323f_5ff0[d_60ae_dd5a] > 0) {
                    strcpy(d_2289_2288, "");
                    strcpy(d_2289_2238, "Available");
                } else {
                    strcpy(d_2289_2288, f_14bc_490d(d_323f_47b4[d_60ae_dd5a], -1));
                    c = d_323f_4e00[d_60ae_dd5a];
                    if (c <= 29)
                        strcpy(d_2289_2238, "Under threat");
                    else if (c <= 39)
                        strcpy(d_2289_2238, "Insecure");
                    else
                        strcpy(d_2289_2238, "Safe");
                }
                sprintf(buf, " %s", d_2289_2288);
                f_14bc_3672(18.125, d_60ae_dd72 - 3.25, 1, 9, 0x53, buf);
                sprintf(buf, " %s", d_2289_2238);
                f_14bc_3672(28.75, d_60ae_dd72 - 3.25, d_2289_2288[0] != 0 ? 1 : 15,
                            d_323f_5ff0[d_60ae_dd5a] > 0 ? 1 : 3, 0x53, buf);
            }
            d_60ae_dd72++;
            f_1bd3_13a3(&d_60ae_dd6e, &d_60ae_dd5e, 2);
            used[d_60ae_dd5a] = -1;
            list[d_60ae_dd60] = d_60ae_dd5a;
            d_60ae_dd60++;
        }
        f_14bc_60da();
        f_14bc_50f8(2, 1.25, 23.0, 6, 2, 0x35, " - DIV");
        f_14bc_50f8(2, 32.25, 23.0, 6, 2, 0x35, " + DIV");
        f_14bc_50f8(2, 8.5, 23.0, 1, 4, 0xb9, "          EXIT");
        do
            d_60ae_dda0 = f_14bc_5635(d_60ae_dd56);
        while (d_60ae_dda0 <= 0);
        if (d_60ae_dda0 >= 1 && d_60ae_dda0 <= 20) {
            if (f_14bc_2cc0(d_60ae_dd5c = list[d_60ae_dda0]))
                f_7732_31e2(d_60ae_dd5c);
            else
                f_70a9_5667(d_60ae_dd5c);
        } else if (d_60ae_dda0 == 21) {
            d_60ae_dd62--;
            if (d_60ae_dd62 < 0)
                d_60ae_dd62 = 3;
        } else if (d_60ae_dda0 == 22) {
            d_60ae_dd62++;
            if (d_60ae_dd62 > 3)
                d_60ae_dd62 = 0;
        } else if (d_60ae_dda0 == 23)
            d_60ae_dd62 = -1;
    } while (d_60ae_dd62 != -1);
}

/* the managers' points table of a division */
void f_70a9_233c(void)
{
    char used[80];
    char buf[320];

    d_60ae_dd54 = f_a694_21b2();
    do {
        memset(used, 0, 80);
        f_14bc_60ca();
        f_14bc_4bd3("");
        sprintf(buf, "Manager Pts %s", f_14bc_4b12(d_60ae_dd54 + 1, 0));
        f_14bc_3672(1.125, 1.5, 0, 1, 0x88, buf);
        f_14bc_3672(18.375, 1.5, 1, 4, 0x6e, " CLUB");
        f_14bc_3672(32.375, 1.5, 1, 4, 0x36, " PTS");
        d_60ae_dd72 = 6;
        d_60ae_dd6e = d_60ae_dd54 == 0 ? 8 : 2;
        d_60ae_dd5e = d_60ae_dd54 == 0 ? 14 : 9;
        for (d_60ae_dd60 = 1; d_60ae_dd60 <= 20; d_60ae_dd60++) {
            d_60ae_d83f = 0;
            for (d_60ae_dd5c = d_60ae_dd54 * 20; d_60ae_dd5c <= d_60ae_dd54 * 20 + 19;
                 d_60ae_dd5c++) {
                if (used[d_60ae_dd5c] == 0) {
                    d_60ae_faee = f_1bd3_1617(d_60ae_fdea, 0);
                    d_60ae_d837 = d_60ae_faee[d_323f_47b4[d_60ae_dd5c]];
                    if (d_60ae_d837 >= d_60ae_d83f) {
                        d_60ae_d83f = d_60ae_d837;
                        d_60ae_dd5a = d_60ae_dd5c;
                    }
                }
            }
            if (f_14bc_2cc0(d_60ae_dd5a))
                d_60ae_dd58 = 12;
            else
                d_60ae_dd58 = d_60ae_dd5e;
            sprintf(buf, " %02d ", d_60ae_dd60);
            f_14bc_3672(1.125, d_60ae_dd72 + 0.25 - 3.5, 1, 4, 0, buf);
            sprintf(buf, " %s", f_14bc_490d(d_323f_47b4[d_60ae_dd5a], 0));
            f_14bc_3672(4.375, d_60ae_dd72 + 0.25 - 3.5, 1, d_60ae_dd58, 0x6e, buf);
            sprintf(buf, " %.17s", (char far *)d_60ae_b572[d_60ae_dd5a]);
            f_14bc_3672(18.375, d_60ae_dd72 + 0.25 - 3.5, 1, 3, 0x6e, buf);
            sprintf(buf, " %06ld", d_60ae_d83f);
            f_14bc_3672(32.375, d_60ae_dd72 + 0.25 - 3.5, 2, 6, 0x36, buf);
            d_60ae_dd72++;
            f_1bd3_13a3(&d_60ae_dd6e, &d_60ae_dd5e, 2);
            used[d_60ae_dd5a] = -1;
        }
        f_14bc_60da();
        f_14bc_50f8(2, 1.25, 23.0, 6, 2, 0x35, " - DIV");
        f_14bc_50f8(2, 32.25, 23.0, 6, 2, 0x35, " + DIV");
        f_14bc_50f8(2, 8.5, 23.0, 1, 4, 0xb9, "          EXIT");
        do
            d_60ae_dda0 = f_14bc_5635(d_60ae_dd56);
        while (d_60ae_dda0 <= 0);
        if (d_60ae_dda0 == 1) {
            d_60ae_dd54--;
            if (d_60ae_dd54 < 0)
                d_60ae_dd54 = 3;
        } else if (d_60ae_dda0 == 2) {
            d_60ae_dd54++;
            if (d_60ae_dd54 > 3)
                d_60ae_dd54 = 0;
        } else
            d_60ae_dd54 = -1;
    } while (d_60ae_dd54 != -1);
}

/* the manager rankings: by reputation (mode 0) or by salary (mode 1) */
void f_70a9_27f7(char mode)
{
    int i;
    int max = 0;
    int sal;
    char used[650];
    int order[80];
    char buf[320];

    memset(used, 0, 650);
    d_60ae_dd46 = 1;
    d_60ae_d974 = 0;
    for (i = 0; i <= 79; i++) {
        d_60ae_dd42 = -1;
        for (d_60ae_dd5c = 0; d_60ae_dd5c <= 79; d_60ae_dd5c++) {
            d_60ae_dd44 = d_323f_47b4[d_60ae_dd5c];
            if (used[d_60ae_dd44] == 0) {
                if (mode == 0) {
                    d_60ae_dd40 = d_323f_28ba[d_60ae_dd44];
                    if (d_323f_1e92[d_60ae_dd44] == 35)
                        d_60ae_dd40 = 0;
                    if (d_60ae_dd40 > d_60ae_dd52 || d_60ae_dd42 == -1) {
                        d_60ae_dd42 = d_60ae_dd44;
                        d_60ae_dd52 = d_60ae_dd40;
                    }
                } else if (mode == 1) {
                    d_60ae_faea = f_1bd3_1617(d_60ae_fde8, 0);
                    sal = d_60ae_faea[d_60ae_dd44];
                    if (sal > max || d_60ae_dd42 == -1) {
                        d_60ae_dd42 = d_60ae_dd44;
                        max = sal;
                    }
                }
            }
        }
        order[i] = d_60ae_dd42;
        if (d_60ae_dd42 != -1) {
            used[d_60ae_dd42] = -1;
            if (d_60ae_dd42 >= 646 && d_60ae_d974 == 0) {
                d_60ae_dd46 = i / 20 + 1;
                d_60ae_d974 = -1;
            }
        }
    }
    do {
        d_60ae_dd3e = (d_60ae_dd46 - 1) * 20;
        f_14bc_60ca();
        f_14bc_4bd3("");
        f_14bc_3672(1.125, 1.5, 0, 1, 0x88, "Manager Rankings");
        f_14bc_3672(18.375, 1.5, 1, 4, 0x6e, " CLUB");
        f_14bc_3672(32.375, 1.5, 1, 4, 0x36, mode == 0 ? " REP" : " SALARY");
        d_60ae_dd72 = 6;
        d_60ae_dd6e = 14;
        d_60ae_dd5e = 8;
        for (d_60ae_dd60 = 1; d_60ae_dd60 <= 20; d_60ae_dd60++) {
            d_60ae_dd64 = d_60ae_dd60 + d_60ae_dd3e;
            d_60ae_dd42 = order[d_60ae_dd64 - 1];
            if (d_60ae_dd42 == -1)
                continue;
            if (d_60ae_dd42 >= 646)
                d_60ae_dd58 = 9;
            else
                d_60ae_dd58 = d_60ae_dd5e;
            if (d_60ae_dd64 < 100)
                sprintf(buf, " %02d ", d_60ae_dd64);
            else
                strcpy(buf, "100 ");
            f_14bc_3672(1.125, d_60ae_dd72 + 0.25 - 3.5, 1, 12, 0, buf);
            sprintf(buf, " %s", f_14bc_490d(d_60ae_dd42, 0));
            f_14bc_3672(4.375, d_60ae_dd72 + 0.25 - 3.5, 1, d_60ae_dd58, 0x6e, buf);
            d_60ae_dd5a = d_323f_1c08[d_60ae_dd42];
            sprintf(buf, " %.17s", (char far *)d_60ae_b572[d_60ae_dd5a]);
            f_14bc_3672(18.375, d_60ae_dd72 + 0.25 - 3.5, 1, 2, 0x6e, buf);
            if (mode == 0)
                sprintf(buf, " %s", f_96bb_14f5(d_60ae_dd42, 0));
            else {
                d_60ae_faea = f_1bd3_1617(d_60ae_fde8, 0);
                sprintf(buf, " %dK", d_60ae_faea[d_60ae_dd42]);
            }
            f_14bc_3672(32.375, d_60ae_dd72 + 0.25 - 3.5, 1, 3, 0x36, buf);
            d_60ae_dd72++;
            f_1bd3_13a3(&d_60ae_dd6e, &d_60ae_dd5e, 2);
        }
        f_14bc_60da();
        f_14bc_50f8(2, 1.25, 23.0, 6, 2, 0x35, " - SCR");
        f_14bc_50f8(2, 32.25, 23.0, 6, 2, 0x35, " + SCR");
        f_14bc_50f8(2, 8.5, 23.0, 1, 4, 0xb9, "          EXIT");
        do
            d_60ae_dda0 = f_14bc_5635(d_60ae_dd56);
        while (d_60ae_dda0 <= 0);
        if (d_60ae_dda0 == 1) {
            d_60ae_dd46--;
            if (d_60ae_dd46 < 1)
                d_60ae_dd46 = 4;
        } else if (d_60ae_dda0 == 2) {
            d_60ae_dd46++;
            if (d_60ae_dd46 > 4)
                d_60ae_dd46 = 1;
        } else
            d_60ae_dd46 = -1;
    } while (d_60ae_dd46 != -1);
}

/* the hall of fame, and its second page (" II"): the button toggles between them */
void f_70a9_2d90(void)
{
    unsigned char second = 0;
    char buf[320];

    do {
        f_14bc_60ca();
        f_14bc_4bd3("");
        sprintf(buf, "Hall of Fame%s", second == 0 ? "" : " II");
        f_14bc_3672(1.125, 1.5, 0, 1, 0x88, buf);
        f_14bc_3672(18.375, 1.5, 1, 4, 0x6e, " CLUB");
        f_14bc_3672(32.375, 1.5, 1, 4, 0x36, " PTS");
        d_60ae_dd72 = 6;
        d_60ae_dd6e = 14;
        d_60ae_dd5e = 8;
        for (d_60ae_dd60 = 1; d_60ae_dd60 <= 20; d_60ae_dd60++) {
            sprintf(buf, " %02d ", d_60ae_dd60);
            f_14bc_3672(1.125, d_60ae_dd72 + 0.25 - 3.5, 1, 2, 0, buf);
            d_60ae_ddb2 = f_1bd3_1617(d_60ae_fdd4, 0);
            sprintf(buf, " %.17s", d_60ae_ddb2 + (d_60ae_dd60 - 1) * 160 + second * 80);
            f_14bc_3672(4.375, d_60ae_dd72 + 0.25 - 3.5, 1, d_60ae_dd5e, 0x6e, buf);
            d_60ae_ddb2 = f_1bd3_1617(d_60ae_fdd4, 0);
            sprintf(buf, " %.17s", d_60ae_ddb2 + (d_60ae_dd60 - 1) * 160 + second * 80 + 3200);
            f_14bc_3672(18.375, d_60ae_dd72 + 0.25 - 3.5, 0, 6, 0x6e, buf);
            sprintf(buf, " %6ld", d_2289_eb60[d_60ae_dd60][second]);
            f_14bc_3672(32.375, d_60ae_dd72 + 0.25 - 3.5, 1, 9, 0x36, buf);
            d_60ae_dd72++;
            f_1bd3_13a3(&d_60ae_dd6e, &d_60ae_dd5e, 2);
        }
        f_14bc_60da();
        f_14bc_50f8(2, 1.25, 23.0, 1, 4, 0xe0, "           EXIT");
        f_14bc_50f8(2, 29.875, 23.0, 1, 12, 0x48, second == 0 ? "   2ND" : "   1ST");
        do
            d_60ae_dda0 = f_14bc_5635(d_60ae_dd56);
        while (d_60ae_dda0 <= 0);
        if (d_60ae_dda0 == 2)
            second = second == 0 ? 1 : 0;
    } while (d_60ae_dda0 == 2);
}

/* the monthly or yearly awards: managers of each division, senior and young players */
void f_70a9_316b(char year)
{
    int club;
    char buf[320];

    if (d_60ae_d8f4) {
        if (year) {
            strcpy(d_2289_4f98, "");
            strcpy(d_2289_4f48, "Year");
        } else {
            strcpy(d_2289_4f98, " ");
            strcpy(d_2289_4f48, "Month");
        }
        sprintf(buf, "%sly Awards", d_2289_4f48);
        f_14bc_60ca();
        f_14bc_4bd3(buf);
        sprintf(buf, " MANAGER OF THE %s", d_2289_4f48);
        f_14bc_3672(1.125, 4.0, 0, 1, 178, buf);
        f_14bc_3672(23.625, 4.0, 0, 6, 36, " PTS");
        f_14bc_3672(28.375, 4.0, 0, 6, 86, " CLUB");
        for (d_60ae_dd3a = 0; d_60ae_dd3a <= 3; d_60ae_dd3a++) {
            sprintf(buf, " %s", f_14bc_4b12(d_60ae_dd3a + 1, 0));
            f_14bc_3672(1.125, d_60ae_dd3a + 5.25, 1, d_60ae_dd3a & 1 ? 8 : 14, 86, buf);
            if (d_2289_be30[d_60ae_dd3a] != -1) {
                sprintf(buf, " %s", f_14bc_490d(d_2289_be30[d_60ae_dd3a], -1));
                f_14bc_3672(12.125, d_60ae_dd3a + 5.25, 1, d_2289_be30[d_60ae_dd3a] >= 646 ? 3 : 12, 90, buf);
                sprintf(buf, "%s%ld", d_2289_4f98, d_2289_be20[d_60ae_dd3a]);
                f_14bc_3672(23.625, d_60ae_dd3a + 5.25, 1, 9, 36, buf);
                sprintf(buf, " %.13s", (char far *)d_60ae_b572[d_323f_1c08[d_2289_be30[d_60ae_dd3a]]]);
                f_14bc_3672(28.375, d_60ae_dd3a + 5.25, 1, 2, 86, buf);
            } else {
                f_14bc_3672(12.125, d_60ae_dd3a + 5.25, 1, 12, 90, "");
                f_14bc_3672(23.625, d_60ae_dd3a + 5.25, 1, 9, 36, "");
                f_14bc_3672(28.375, d_60ae_dd3a + 5.25, 1, 2, 86, "");
            }
        }
        sprintf(buf, " SENIOR PLAYER OF THE %s", d_2289_4f48);
        f_14bc_3672(1.125, 10.0, 0, 1, 178, buf);
        f_14bc_3672(23.625, 10.0, 0, 6, 36, " AV R");
        f_14bc_3672(28.375, 10.0, 0, 6, 86, " CLUB");
        sprintf(buf, " YOUNG PLAYER OF THE %s", d_2289_4f48);
        f_14bc_3672(1.125, 16.0, 0, 1, 178, buf);
        f_14bc_3672(23.625, 16.0, 0, 6, 36, " AV R");
        f_14bc_3672(28.375, 16.0, 0, 6, 86, " CLUB");
        for (d_60ae_dd36 = 0; d_60ae_dd36 <= 1; d_60ae_dd36++) {
            d_60ae_d8df = d_60ae_dd36 * 6 + 11.25;
            for (d_60ae_dd38 = 0; d_60ae_dd38 <= 3; d_60ae_dd38++) {
                d_60ae_dd84 = d_2289_be58[d_60ae_dd36][d_60ae_dd38];
                if (d_60ae_dd84 != -1) {
                    sprintf(buf, " %s", f_14bc_4b12(d_60ae_dd38 + 1, 0));
                    f_14bc_3672(1.125, d_60ae_dd38 + d_60ae_d8df, 1, d_60ae_dd38 & 1 ? 8 : 14, 86, buf);
                    sprintf(buf, " %.14s", f_14bc_483d(d_60ae_dd84));
                    f_14bc_3672(12.125, d_60ae_dd38 + d_60ae_d8df, 1, f_14bc_2cc0(d_471b_82c8[d_60ae_dd84]) ? 21 : 12, 90, buf);
                    sprintf(d_2289_4eda, "%4.2f", d_2289_be38[d_60ae_dd36][d_60ae_dd38]);
                    sprintf(buf, " %s", d_2289_4eda);
                    f_14bc_3672(23.625, d_60ae_dd38 + d_60ae_d8df, 1, 9, 36, buf);
                    club = d_3c35_32dc[d_60ae_dd84] < 255 ? d_3c35_32dc[d_60ae_dd84] : d_471b_82c8[d_60ae_dd84];
                    sprintf(buf, " %.13s", (char far *)d_60ae_b572[club]);
                    f_14bc_3672(28.375, d_60ae_dd38 + d_60ae_d8df, 1, 2, 86, buf);
                } else {
                    f_14bc_3672(1.125, d_60ae_dd38 + d_60ae_d8df, 1, d_60ae_dd38 & 1 ? 8 : 14, 86, "");
                    f_14bc_3672(12.125, d_60ae_dd38 + d_60ae_d8df, 1, 12, 90, "");
                    f_14bc_3672(23.625, d_60ae_dd38 + d_60ae_d8df, 1, 9, 36, "");
                    f_14bc_3672(28.375, d_60ae_dd38 + d_60ae_d8df, 1, 2, 86, "");
                }
            }
        }
        f_14bc_60da();
        f_14bc_50f8(2, 1.25, 22.5, 1, 4, 301, "                 DONE");
        do {
            d_60ae_dda0 = f_14bc_5635(d_60ae_dd56);
        } while (d_60ae_dda0 <= 0);
    } else
        f_14bc_0b83("No awards yet this season");
}

void f_70a9_3a67(void)
{
    if (d_60ae_dd9c < 16)
        f_14bc_0b83("National squads not chosen");
    else
        f_70a9_3a86();
}

/* the national squads: senior and U-21 */
void f_70a9_3a86(void)
{
    unsigned char nation[5] = {0, 25, 9, 10, 32};
    int club;
    char buf[320];

    do {
        f_14bc_2f90(0, "International Squads", "*Exit|England|Scotland|Ireland|N.Ireland|Wales|England U-21|Scotland U-21|Ireland U-21|N.Ireland U-21|Wales U-21|");
        d_60ae_dd34 = d_60ae_dda0;
        if (d_60ae_dd34 > 0) {
            d_60ae_dd32 = 0;
            strcpy(d_2289_4e8a, "");
            if (d_60ae_dd34 > 5) {
                d_60ae_dd32 = 1;
                strcpy(d_2289_4e8a, "U-21 ");
                d_60ae_dd34 -= 5;
            }
            do {
                f_14bc_60ca();
                f_14bc_4bd3("International squad");
                switch (d_60ae_dd34) {
                case 1:
                    d_60ae_dd48 = 65;
                    break;
                case 2:
                    d_60ae_dd48 = 20;
                    break;
                case 3:
                case 4:
                    d_60ae_dd48 = 19;
                    break;
                case 5:
                    d_60ae_dd48 = 18;
                    break;
                }
                sprintf(buf, " %s %s", d_54d9_0000[nation[d_60ae_dd34 - 1]], d_2289_4e8a);
                f_14bc_3e40(1.25, 4.0, d_60ae_dd48 / 16, d_60ae_dd48 % 16, 0, buf);
                f_14bc_3672(1.125, 7.0, 1, 2, 76, " NAME");
                f_14bc_3672(10.875, 7.0, 1, 2, 73, " CLUB");
                f_14bc_3672(20.25, 7.0, 1, 2, 76, " NAME");
                f_14bc_3672(30.0, 7.0, 1, 2, 73, " CLUB");
                f_14bc_60da();
                f_14bc_5053();
                f_14bc_50f8(2, 1.25, 22.5, 1, 4, 301, "                 EXIT");
                f_14bc_60ca();
                for (d_60ae_dd30 = 0; d_60ae_dd30 <= 21; d_60ae_dd30++) {
                    d_60ae_dd2e = d_2276_0000[d_60ae_dd30];
                    d_60ae_d8e3 = d_60ae_dd30 > 10 ? 20.25 : 1.125;
                    d_60ae_d8eb = d_60ae_dd30 > 10 ? d_60ae_dd30 - 2 : d_60ae_dd30 + 9;
                    d_60ae_dd48 = d_60ae_dd30 & 1 ? 8 : 14;
                    d_60ae_dd84 = d_2289_be68[d_60ae_dd34 - 1][d_60ae_dd32][d_60ae_dd30];
                    if (d_60ae_dd84 > -1) {
                        strcpy(d_2289_4e3a, f_14bc_48b4(d_60ae_dd84));
                        if (f_14bc_6f7c(d_60ae_dd84))
                            sprintf(d_2289_4dea, "<%s>", d_54d9_0000[d_471b_82c8[d_60ae_dd84] - 140]);
                        else {
                            club = d_3c35_32dc[d_60ae_dd84] < 255 ? d_3c35_32dc[d_60ae_dd84] : d_471b_82c8[d_60ae_dd84];
                            strcpy(d_2289_4dea, (char far *)d_60ae_b572[club]);
                        }
                        if (f_14bc_2cc0(d_471b_82c8[d_60ae_dd84]))
                            d_60ae_dd48 = 3;
                    } else {
                        strcpy(d_2289_4e3a, d_54d9_04d2[d_60ae_dd2e]);
                        switch (d_60ae_dd34) {
                        case 1:
                        case 5:
                            strcpy(d_2289_4dea, "Non-lge");
                            break;
                        case 2:
                            strcpy(d_2289_4dea, "Scots-lge");
                            break;
                        case 3:
                        case 4:
                            strcpy(d_2289_4dea, "Irish-lge");
                            break;
                        }
                    }
                    sprintf(buf, " %.11s", d_2289_4e3a);
                    f_14bc_50f8(0, d_60ae_d8e3, d_60ae_d8eb, 1, d_60ae_dd48, 76, buf);
                    sprintf(buf, " %.11s", d_2289_4dea);
                    f_14bc_3672(d_60ae_d8e3 + 9.75, d_60ae_d8eb, 1, 4, 73, buf);
                }
                f_14bc_60da();
                do {
                    d_60ae_dda0 = f_14bc_5635(d_60ae_dd56);
                } while (d_60ae_dda0 <= 0);
                if (d_60ae_dda0 > 1) {
                    d_60ae_dd84 = d_2289_be68[d_60ae_dd34 - 1][d_60ae_dd32][d_60ae_dda0 - 2];
                    if (d_60ae_dd84 > -1) {
                        do {
                            f_a694_49c9(d_60ae_dd84, -1, -1);
                            f_8aa1_4f06(d_60ae_dd84, d_60ae_dd4a);
                        } while (!d_60ae_d975);
                    } else
                        f_14bc_0b83("No information available");
                }
            } while (d_60ae_dda0 != 1);
        }
    } while (d_60ae_dd34 != 0);
}

void f_70a9_400d(void)
{
    char buf[300];
    register char found;

    do {
        f_14bc_4bd3("Fixture Info");
        f_14bc_2f90(0, "", "*Exit|Last Results|Next Fixtures|Next FA Cup|Next Coca-Cola|Next Anglo-Ital|Next UEFA|Next Cup Winners|Next European|Next Playoffs|Group Tables|Euro Seedings|Past Winners|");
        f_14bc_3334(12);
        d_60ae_dd2c = d_60ae_dda0;
        if (d_60ae_dd2c == 1) {
            found = 0;
            if (d_60ae_dd9c > 1) {
                for (d_60ae_dd2a = d_60ae_dd9c - 1; d_60ae_dd2a >= 1; d_60ae_dd2a--) {
                    if (d_471b_b5a2[d_60ae_dd2a] > 0) {
                        f_7732_136d(d_60ae_dd2a, 1, -1);
                        found = 1;
                        d_60ae_dd2a = 1;
                    }
                }
            }
            if (found == 0)
                f_14bc_0b83("No matches last week");
        } else if (d_60ae_dd2c == 2) {
            if (d_60ae_dd9c <= 98) {
                for (d_60ae_dd2a = d_60ae_dd9c; !f_14bc_2c1d(d_60ae_dd2a); d_60ae_dd2a++)
                    ;
                f_7732_136d(d_60ae_dd2a, 0, -1);
            } else
                f_14bc_0b83("The season is over");
        } else if (d_60ae_dd2c == 3) {
            if (d_60ae_dd80 > -1) {
                if (d_60ae_dd80 > 0)
                    f_7732_136d(d_60ae_dd80, f_14bc_2b02(d_60ae_dd80) || d_60ae_dd80 == 92 ? 0 : 2, 1);
                else
                    f_70a9_43b6();
            } else {
                sprintf(buf, "%s won the FA Cup", f_14bc_3523(d_323f_00a0[0][0]));
                f_14bc_0b83(buf);
            }
        } else if (d_60ae_dd2c == 4) {
            if (d_60ae_dd82 > -1) {
                if (d_60ae_dd82 > 0)
                    f_7732_136d(d_60ae_dd82, f_14bc_2a5c(d_60ae_dd82) || f_14bc_2b02(d_60ae_dd82) || d_60ae_dd82 == 82 ? 0 : 2, 2);
                else
                    f_70a9_43b6();
            } else {
                sprintf(buf, "%s won the Coca-Cola Cup", f_14bc_3523(d_323f_00a0[1][0]));
                f_14bc_0b83(buf);
            }
        } else if (d_60ae_dd2c == 5) {
            if (d_60ae_dd28 > -1) {
                if (d_60ae_dd28 > 0)
                    f_7732_136d(d_60ae_dd28, d_60ae_dd28 == 69 ? 2 : 0, 3);
                else
                    f_70a9_43b6();
            } else {
                sprintf(buf, "%s won the Anglo-Italian Cup", f_14bc_3523(d_323f_00a0[2][0]));
                f_14bc_0b83(buf);
            }
        } else if (d_60ae_dd2c == 6) {
            if (d_60ae_dd7e > -1) {
                if (d_60ae_dd7e > 0)
                    f_7732_136d(d_60ae_dd7e, f_14bc_2a5c(d_60ae_dd7e) ? 0 : 2, 4);
                else
                    f_70a9_43b6();
            } else {
                sprintf(buf, "%s won the UEFA Cup", f_14bc_3523(d_323f_00a0[3][0]));
                f_14bc_0b83(buf);
            }
        } else if (d_60ae_dd2c == 7) {
            if (d_60ae_dd7c > -1) {
                if (d_60ae_dd7c > 0)
                    f_7732_136d(d_60ae_dd7c, f_14bc_2a5c(d_60ae_dd7c) || d_60ae_dd7c == 91 ? 0 : 2, 5);
                else
                    f_70a9_43b6();
            } else {
                sprintf(buf, "%s won the Cup Winners Cup", f_14bc_3523(d_323f_00a0[4][0]));
                f_14bc_0b83(buf);
            }
        } else if (d_60ae_dd2c == 8) {
            if (d_60ae_dd7a > -1) {
                if (d_60ae_dd7a > 0)
                    f_7732_136d(d_60ae_dd7a, d_60ae_dd7a == 29 || d_60ae_dd7a == 47 ? 2 : 0, 6);
                else
                    f_70a9_43b6();
            } else {
                sprintf(buf, "%s won the European Cup", f_14bc_3523(d_323f_00a0[5][0]));
                f_14bc_0b83(buf);
            }
        } else if (d_60ae_dd2c == 9) {
            switch (d_60ae_dd9c) {
            case 91: case 92: case 93: case 94:
                f_7732_136d(94, 0, 7);
                break;
            case 95: case 96:
                f_7732_136d(96, 0, 7);
                break;
            case 97: case 98:
                f_7732_136d(98, 0, 7);
                break;
            default:
                if (d_60ae_dd9c <= 90)
                    f_14bc_0b83("Playoffs not yet decided");
                else
                    f_14bc_0b83("Playoffs have finished");
            }
        } else if (d_60ae_dd2c == 10)
            f_70a9_0e12();
        else if (d_60ae_dd2c == 11)
            f_70a9_43c7();
        else if (d_60ae_dd2c == 12)
            f_96bb_6929();
    } while (d_60ae_dd2c != 0);
}

void f_70a9_43b6(void)
{
    f_14bc_0b83("Draw not yet made");
}

void f_70a9_43c7(void)
{
    char done[540];
    char buf[320];

    memset(done, 0, 540);
    f_14bc_60ca();
    f_14bc_4bd3("European Seedings");
    for (d_60ae_dd26 = 4; d_60ae_dd26 <= 6; d_60ae_dd26++) {
        if (d_60ae_dd26 == 4)
            strcpy(d_2289_4d9a, "UEFA CUP");
        else if (d_60ae_dd26 == 5)
            strcpy(d_2289_4d9a, "CUP WINNERS CUP");
        else
            strcpy(d_2289_4d9a, "EUROPEAN CUP");
        sprintf(buf, " %s", d_2289_4d9a);
        f_14bc_3672(1.125, (d_60ae_dd26 - 4) * 6.25 + 4.0, 0, 1, 0x130, buf);
        for (d_60ae_dd24 = 1; d_60ae_dd24 <= 8; d_60ae_dd24++) {
            for (d_60ae_dd5c = 0; d_60ae_dd5c <= 539; d_60ae_dd5c++) {
                if (d_2289_c250[d_60ae_dd5c] == d_60ae_dd26 && done[d_60ae_dd5c] == 0) {
                    d_60ae_d8e3 = d_60ae_dd24 > 4 ? 20.25 : 1.125;
                    d_60ae_d8eb = (d_60ae_dd26 - 4) * 6.25 + 5.25 + d_60ae_dd24 - 1 - (d_60ae_dd24 > 4 ? 4 : 0);
                    sprintf(buf, " %.12s", f_14bc_3523(d_60ae_dd5c));
                    buf[13] = 0;
                    if (f_14bc_2cc0(d_60ae_dd5c))
                        d_60ae_dd5e = 3;
                    else
                        d_60ae_dd5e = d_60ae_dd24 & 1 ? 8 : 14;
                    f_14bc_3672(d_60ae_d8e3, d_60ae_d8eb, d_60ae_dd5c < 80 ? 6 : 1, d_60ae_dd5e, 0x59, buf);
                    if (d_60ae_dd5c < 80)
                        strcpy(buf, " ENGLAND");
                    else {
                        sprintf(buf, " %s", d_54d9_0000[d_54d9_0fe4[d_60ae_dd5c]]);
                        buf[9] = 0;
                    }
                    f_14bc_3672(d_60ae_d8e3 + 11.375, d_60ae_d8eb, 1, 2, 0x3c, buf);
                    done[d_60ae_dd5c] = -1;
                    d_60ae_dd5c = 539;
                }
            }
        }
    }
    f_14bc_60da();
    f_14bc_50f8(2, 1.25, 22.5, 1, 4, 0x12d, "                 DONE");
    do
        d_60ae_dda0 = f_14bc_5635(d_60ae_dd56);
    while (d_60ae_dda0 <= 0);
}

void f_70a9_46eb(void)
{
    f_14bc_60ca();
    f_14bc_4bd3("European Cup");
    f_70a9_4add(6, 0, 4, " Group A", 4.0);
    f_70a9_4add(6, 1, 4, " Group B", 11.375);
    f_14bc_60da();
    f_14bc_50f8(2, 1.25, 22.5, 1, 4, 0x12d, "                 DONE");
    do
        d_60ae_dda0 = f_14bc_5635(d_60ae_dd56);
    while (d_60ae_dda0 <= 0);
}

void f_70a9_479c(void)
{
    unsigned char groups, size;
    char buf[320];

    groups = d_60ae_dd9c <= 37 ? 6 : 4;
    size = d_60ae_dd9c <= 37 ? 3 : 4;
    d_60ae_dd22 = 0;
    for (d_60ae_dd20 = 0; d_60ae_dd20 <= groups - 1; d_60ae_dd20++)
        for (d_60ae_dd92 = 0; d_60ae_dd92 <= size - 1; d_60ae_dd92++)
            if (f_14bc_2cc0(d_2289_bda4[d_60ae_dd20][d_60ae_dd92])) {
                d_60ae_dd22 = d_60ae_dd9c <= 37 ? d_60ae_dd20 / 3 : d_60ae_dd20 / 2;
                d_60ae_dd92 = size - 1;
                d_60ae_dd20 = groups - 1;
            }
    do {
        f_14bc_60ca();
        f_14bc_4bd3("Anglo-Italian Cup");
        if (d_60ae_dd9c <= 37) {
            sprintf(buf, " Group %c", d_60ae_dd22 * 3 + 'A');
            f_70a9_4add(3, d_60ae_dd22 * 3, size, buf, 4.0);
            sprintf(buf, " Group %c", d_60ae_dd22 * 3 + 'B');
            f_70a9_4add(3, d_60ae_dd22 * 3 + 1, size, buf, 10.0);
            sprintf(buf, " Group %c", d_60ae_dd22 * 3 + 'C');
            f_70a9_4add(3, d_60ae_dd22 * 3 + 2, size, buf, 16.0);
        } else {
            sprintf(buf, " English Group %c", d_60ae_dd22 + 'A');
            f_70a9_4add(3, d_60ae_dd22 * 2, size, buf, 4.0);
            sprintf(buf, " Italian Group %c", d_60ae_dd22 + 'A');
            f_70a9_4add(3, d_60ae_dd22 * 2 + 1, size, buf, 11.375);
        }
        f_14bc_60da();
        f_14bc_50f8(2, 1.25, 22.5, 6, 2, 0x35, " - GRP");
        f_14bc_50f8(2, 32.25, 22.5, 6, 2, 0x35, " + GRP");
        f_14bc_50f8(2, 8.5, 22.5, 1, 4, 0xb9, "          EXIT");
        do
            d_60ae_dda0 = f_14bc_5635(d_60ae_dd56);
        while (d_60ae_dda0 <= 0);
        if (d_60ae_dda0 == 1) {
            if (d_60ae_dd22 == 0)
                d_60ae_dd22 = 1;
            else
                d_60ae_dd22--;
        } else if (d_60ae_dda0 == 2) {
            if (d_60ae_dd22 == 1)
                d_60ae_dd22 = 0;
            else
                d_60ae_dd22++;
        }
    } while (d_60ae_dda0 != 3);
}

/* the group table's column headings */
static char far *d_60ae_061a[] = {
    " P ", " W ", " D ", " L ", " F ", " A ", "PTS"
};

void f_70a9_4add(int a, int b, unsigned char n, char far *title, float x)
{
    float y;
    float ys[7];
    char buf[320];

    f_14bc_3672(1.125, x, 0, 1, 0x130, title);
    f_14bc_3672(1.125, x + 1.125, 1, 12, 0x50, " Team");
    for (d_60ae_dd60 = 0, y = 11.375; d_60ae_dd60 <= 6; d_60ae_dd60++, y += 4.0) {
        ys[d_60ae_dd60] = y;
        sprintf(buf, " %s ", d_60ae_061a[d_60ae_dd60]);
        f_14bc_3672(ys[d_60ae_dd60], x + 1.125, 1, 2, 0, buf);
    }
    for (d_60ae_dd64 = 0; d_60ae_dd64 <= n - 1; d_60ae_dd64++) {
        if (a == 6)
            d_60ae_dd5c = d_2289_be10[b][d_60ae_dd64];
        else
            d_60ae_dd5c = d_2289_bda4[b][d_60ae_dd64];
        if (f_14bc_2cc0(d_60ae_dd5c))
            d_60ae_dd48 = 3;
        else
            d_60ae_dd48 = d_60ae_dd64 & 1 ? 14 : 8;
        sprintf(buf, " %s", f_14bc_3523(d_60ae_dd5c));
        f_14bc_3672(1.125, x + 2.375 + d_60ae_dd64, a == 6 && d_60ae_dd5c < 80 ? 6 : 1, d_60ae_dd48, 0x50, buf);
        for (d_60ae_dd60 = 0; d_60ae_dd60 <= 6; d_60ae_dd60++) {
            if (d_60ae_dd60 < 6) {
                if (a == 6)
                    d_60ae_dd1e = d_2289_bde0[d_60ae_dd60][b][d_60ae_dd64];
                else
                    d_60ae_dd1e = d_2289_bb10[d_60ae_dd60][b][d_60ae_dd64];
            } else {
                if (a == 6)
                    d_60ae_dd1e = d_2289_bde0[1][b][d_60ae_dd64] * 2 + d_2289_bde0[2][b][d_60ae_dd64];
                else
                    d_60ae_dd1e = d_2289_bb10[1][b][d_60ae_dd64] * 2 + d_2289_bb10[2][b][d_60ae_dd64];
            }
            sprintf(buf, "  %d", d_60ae_dd1e);
            f_14bc_3672(ys[d_60ae_dd60], x + 2.375 + d_60ae_dd64, 1, 4, 0x1e, buf);
        }
    }
}

void f_70a9_4e55(int team)
{
    char names[4][98][20];
    char buf[320];
    unsigned char comp[98];
    unsigned char week[98];

    f_70a9_530e(team, names, comp, week);
    for (;;) {
        d_60ae_dd1c = d_60ae_dd1a / 3 + (d_60ae_dd1a % 3 > 0);
        f_14bc_60ca();
        if (d_60ae_dd1c <= 20)
            f_14bc_000b(-1.0, team, "Fixtures");
        else {
            f_14bc_4bd3("");
            sprintf(buf, " %s fixtures ", (char far *)d_60ae_b572[team]);
            f_14bc_3672(1.5, 1.5, -(d_323f_4cb8[team] / 16), d_323f_4cb8[team] % 16, 0, buf);
        }
        d_60ae_dd48 = 4;
        d_60ae_dd16 = (d_60ae_dd18 = d_60ae_dd1c) + 1;
        d_60ae_dd14 = d_60ae_dd1c * 2;
        d_60ae_dd12 = d_60ae_dd1c * 2 + 1;
        for (d_60ae_dd0e = 0; d_60ae_dd1a - 1 >= d_60ae_dd0e; d_60ae_dd0e++) {
            d_60ae_d8eb = d_60ae_dd0e % d_60ae_dd1c + 4.5 - (d_60ae_dd1c > 20 ? 1.5 : 0);
            if (d_60ae_dd0e + 1 <= d_60ae_dd18)
                d_60ae_d8e3 = 0.5;
            else if (d_60ae_dd0e + 1 <= d_60ae_dd14)
                d_60ae_d8e3 = 13.3;
            else
                d_60ae_d8e3 = 26.1;
            sprintf(buf, "%.2s", names[0][d_60ae_dd0e]);
            d_60ae_dd4c = atoi(buf);
            sprintf(buf, "%s", names[0][d_60ae_dd0e] + 2);
            f_14bc_3672(d_60ae_d8e3 + 1, d_60ae_d8eb, d_60ae_dd4c / 16, d_60ae_dd4c % 16, 0, buf);
            if (d_60ae_dd0e + 1 >= d_60ae_dd0c && d_60ae_dd0c > -1) {
                if (d_60ae_dd0e + 1 == d_60ae_dd0c)
                    d_60ae_dd4c = 3;
                else
                    d_60ae_dd4c = d_60ae_dd48;
                sprintf(buf, "%-11s", names[1][d_60ae_dd0e]);
                buf[11] = 0;
                f_14bc_3672(d_60ae_d8e3 + 3.0, d_60ae_d8eb, 1, d_60ae_dd4c, 0, buf);
            } else {
                sprintf(buf, "%-11s", names[1][d_60ae_dd0e]);
                buf[11] = 0;
                f_14bc_50f8(0, d_60ae_d8e3 + 3.0, d_60ae_d8eb, 1, d_60ae_dd48, 0, buf);
            }
            f_14bc_3672(d_60ae_d8e3 + 11.75, d_60ae_d8eb, 3, 6, 0, names[2][d_60ae_dd0e]);
            d_60ae_dd48 = d_60ae_dd48 == 12 ? 4 : 12;
        }
        f_14bc_60da();
        d_60ae_dda0 = f_14bc_5635(d_60ae_dd56);
        if (d_60ae_dda0 <= 0)
            break;
        {
        FILE *fp;
        d_60ae_dd0a = week[d_60ae_dda0 - 1] - 1;
        d_60ae_dd08 = comp[d_60ae_dd0a];
        d_60ae_dd06 = d_471b_b4e0[d_60ae_dd0a] + d_60ae_dd08;
        f_1bd3_1a23(2);
        fp = fopen(d_2289_0078, "rb");
        fseek(fp, (long)(d_60ae_dd06 - 1) * 154, 0);
        fread(d_2289_73ec, 1, 154, fp);
        fclose(fp);
        f_817e_3d44(d_54d9_1200[comp[d_60ae_dd0a]][0][d_60ae_dd0a] / 32,
                    d_54d9_1200[comp[d_60ae_dd0a]][1][d_60ae_dd0a] / 32, -1);
        }
    }
}

void f_70a9_530e(int team, char far names[][98][20], unsigned char far *comp,
                 unsigned char far *week)
{
    d_60ae_dd02 = -1;
    d_60ae_dd1a = 0;
    d_60ae_dd0c = -1;
    for (d_60ae_dd0e = 0; d_60ae_dd0e <= 97; d_60ae_dd0e++) {
        d_60ae_dd04 = -1;
        for (d_60ae_dd60 = 0; d_60ae_dd60 <= 1; d_60ae_dd60++)
            for (d_60ae_dd92 = 0; d_60ae_dd92 <= 39; d_60ae_dd92++)
                if (d_54d9_1200[d_60ae_dd92][d_60ae_dd60][d_60ae_dd0e] / 32 == team)
                    d_60ae_dd04 = d_60ae_dd92;
        if (d_60ae_dd04 > -1) {
            if (d_60ae_dd0e + 1 <= 8)
                strcpy(names[0][d_60ae_dd1a], "38PF");
            else if (d_60ae_dd0e + 1 == 10)
                strcpy(names[0][d_60ae_dd1a], "38CH");
            else if (f_14bc_2594(d_60ae_dd0e + 1))
                strcpy(names[0][d_60ae_dd1a], "38FA");
            else if (f_14bc_25c5(d_60ae_dd0e + 1))
                strcpy(names[0][d_60ae_dd1a], "38CC");
            else if (f_14bc_295d(d_60ae_dd0e + 1, d_60ae_dd04 + 1))
                strcpy(names[0][d_60ae_dd1a], "05AI");
            else if (f_14bc_2b82(d_60ae_dd0e + 1))
                strcpy(names[0][d_60ae_dd1a], "38PL");
            else if (f_14bc_28cc(d_60ae_dd0e + 1, d_60ae_dd04 + 1))
                strcpy(names[0][d_60ae_dd1a], "01EC");
            else if (f_14bc_2835(d_60ae_dd0e + 1, d_60ae_dd04 + 1))
                strcpy(names[0][d_60ae_dd1a], "01CW");
            else if (f_14bc_2784(d_60ae_dd0e + 1, d_60ae_dd04 + 1))
                strcpy(names[0][d_60ae_dd1a], "01UE");
            else
                strcpy(names[0][d_60ae_dd1a], "98LG");
            strcpy(names[2][d_60ae_dd1a], "");
            if (f_14bc_2b27(d_60ae_dd0e + 1, d_60ae_dd04 + 1))
                strcpy(names[2][d_60ae_dd1a], "N");
            d_60ae_dd00 = d_54d9_1200[d_60ae_dd04][0][d_60ae_dd0e] / 32;
            d_60ae_dcfe = d_54d9_1200[d_60ae_dd04][1][d_60ae_dd0e] / 32;
            if (d_60ae_dd00 == team) {
                strcpy(names[1][d_60ae_dd1a], f_14bc_3523(d_60ae_dcfe));
                if (strlen(names[2][d_60ae_dd1a]) == 0)
                    strcpy(names[2][d_60ae_dd1a], "H");
            } else {
                strcpy(names[1][d_60ae_dd1a], f_14bc_3523(d_60ae_dd00));
                if (strlen(names[2][d_60ae_dd1a]) == 0)
                    strcpy(names[2][d_60ae_dd1a], "A");
            }
            comp[d_60ae_dd0e] = d_60ae_dd04;
            week[d_60ae_dd1a] = d_60ae_dd0e + 1;
            d_60ae_dd1a++;
            if (d_60ae_dd0c == -1 && d_60ae_dd0e + 1 >= d_60ae_dd9c)
                d_60ae_dd0c = d_60ae_dd1a;
        }
    }
}

void f_70a9_562e(void)
{
    f_a3de_10b8(-1);
    if (d_60ae_dd5a > -1) {
        if (f_14bc_2cc0(d_60ae_dd5a))
            f_7732_31e2(d_60ae_dd5a);
        else
            f_70a9_5667(d_60ae_dd5a);
    }
}

void f_70a9_5667(int team)
{
    char buf[320];
    char reserves;

    reserves = 0;
    do {
        f_14bc_60ca();
        f_14bc_000b(1.5, team, reserves ? "Reserves" : "Squad");
        f_14bc_60da();
        f_14bc_50f8(2, 1.5, 19.625, 6, 3, 0x37, " GOAL");
        f_14bc_50f8(2, 9.0, 19.625, 6, 3, 0x37, " DISP");
        f_14bc_50f8(2, 16.5, 19.625, 6, 3, 0x37, " AV R");
        f_14bc_50f8(2, 24.0, 19.625, 6, 3, 0x38, " M/O/M");
        f_14bc_50f8(2, 31.625, 19.625, 6, 3, 0x38, " TEAM");
        f_14bc_50f8(2, 1.5, 22.0, 1, 4, 0x129, "                 DONE");
        f_14bc_50f8(2, 1.5, 4.0, 1, 14, 0x26, "Trns");
        f_14bc_50f8(2, 6.875, 4.0, 1, 14, 0x26, "Staf");
        f_14bc_50f8(2, 12.25, 4.0, 1, 14, 0x26, "Leag");
        f_14bc_50f8(2, 17.625, 4.0, 1, 14, 0x26, "Fixt");
        f_14bc_50f8(2, 23.0, 4.0, 1, 14, 0x26, "Accs");
        f_14bc_50f8(2, 28.375, 4.0, 1, 14, 0x26, "Info");
        f_14bc_50f8(2, 33.75, 4.0, 1, 8, 0x27, reserves ? "Senr" : "Rsrv");
        if (d_323f_5ff0[team] > 0)
            f_14bc_50f8(2, 33.75, 1.125, 1, 2, 0x27, "Appl");
        f_14bc_60ca();
        f_a3de_16b2(team, reserves);
        f_14bc_60da();
        do
            d_60ae_dcfc = f_14bc_5635(0);
        while (d_60ae_dcfc <= 0);
        if (d_60ae_dcfc >= 1 && d_60ae_dcfc <= 4)
            f_70a9_0e62(d_60ae_dcfc - 1, team);
        else if (d_60ae_dcfc == 5)
            f_be31_0000(team);
        else if (d_60ae_dcfc == 7)
            f_70a9_5bc8(team);
        else if (d_60ae_dcfc == 8)
            f_96bb_0a22(team);
        else if (d_60ae_dcfc == 9)
            f_70a9_6083(team);
        else if (d_60ae_dcfc == 10)
            f_70a9_4e55(team);
        else if (d_60ae_dcfc == 11) {
            if (d_60ae_d97b || f_1bd3_0d69(50) == 0)
                f_7732_0027(team);
            else {
                sprintf(buf, "%s refuse access|to their accounts", (char far *)d_60ae_b572[team]);
                f_14bc_0b83(buf);
            }
        } else if (d_60ae_dcfc == 12)
            f_a694_09a0(team);
        else if (d_60ae_dcfc == 13)
            reserves = !reserves;
        else if (d_60ae_dcfc == 14 && d_323f_5ff0[team] > 0)
            f_7732_0855(team);
        else if ((d_323f_5ff0[team] > 0 ? 15 : 14) <= d_60ae_dcfc) {
            d_60ae_dd30 = d_60ae_dcfc - (d_323f_5ff0[team] > 0 ? 15 : 14);
            d_60ae_dd84 = d_2289_d6c8[d_60ae_dd30];
            if (!f_14bc_5e32(d_60ae_dd84)) {
                do {
                    f_a694_49c9(d_60ae_dd84, -1, -1);
                    f_8aa1_4f06(d_60ae_dd84, d_60ae_dd4a);
                } while (!d_60ae_d975);
            } else
                f_ad38_34a0(team, d_60ae_dd30);
        }
    } while (d_60ae_dcfc != 6);
}

void f_70a9_5bc8(int team)
{
    char buf[320];
    register int y;
    register int x;
    unsigned char n, first, i, last, done;

    do {
        f_14bc_60ca();
        f_14bc_000b(-1, team, "Transfers");
        f_14bc_3672(1.125, 4, 1, 8, 150, "PLAYERS IN");
        f_14bc_3672(20.375, 4, 1, 8, 150, "PLAYERS OUT");
        for (d_60ae_dd5c = 5; d_60ae_dd5c >= 4; d_60ae_dd5c--) {
            d_60ae_d8e3 = d_60ae_dd5c == 4 ? 21.375 : 2.125;
            x = d_60ae_dd5c == 4 ? 171 : 17;
            n = d_60ae_dd5c == 5 ? d_2289_7b16[team].n_in : d_2289_7b16[team].n_out;
            if (n > 0) {
                d_60ae_d8eb = 5.5;
                y = 44;
                d_60ae_d833 = 0;
                if (n <= 6) {
                    first = 0;
                    last = n - 1;
                } else {
                    first = n % 6;
                    last = first > 0 ? first - 1 : 5;
                }
                i = first;
                do {
                    done = i == last ? 1 : 0;
                    d_60ae_dd84 = d_60ae_dd5c == 5 ? d_2289_7b16[team].in[i] : d_2289_7b16[team].out[i];
                    d_60ae_dcfa = d_60ae_dd5c == 5 ? d_2289_7b16[team].in_club[i] : d_2289_7b16[team].out_club[i];
                    d_60ae_d82f = d_60ae_dd5c == 5 ? d_2289_7b16[team].in_fee[i] : d_2289_7b16[team].out_fee[i];
                    f_14bc_356a(x, y, 6, f_14bc_4703(d_60ae_dd84));
                    if (d_60ae_d82f == 1)
                        sprintf(buf, "%s On Loan", (char far *)d_60ae_b572[d_60ae_dcfa]);
                    else {
                        if (d_60ae_dcfa < 80)
                            sprintf(buf, "%s %s", (char far *)d_60ae_b572[d_60ae_dcfa], f_14bc_0e7a(d_60ae_d82f));
                        else
                            sprintf(buf, "<%s> %s", d_54d9_0000[d_60ae_dcfa - 140], f_14bc_0e7a(d_60ae_d82f));
                        d_60ae_d833 += d_60ae_d82f;
                    }
                    f_14bc_356a(x, y + 8, 5, buf);
                    d_60ae_d8eb = d_60ae_d8eb + 2.5;
                    y += 20;
                    i = i < 5 ? i + 1 : 0;
                } while (done == 0);
                sprintf(buf, "TOTAL %s", d_60ae_dd5c == 5 ? "SPENDING" : "INCOME");
                f_14bc_356a(x, y, 1, buf);
                sprintf(buf, "%ld", d_323f_3f94[d_60ae_dd5c == 5 ? 1 : 2][team]);
                f_14bc_356a(x + (d_60ae_dd5c == 5 ? 90 : 78), y, 2, buf);
            } else
                f_14bc_356a(x, 48, 5, "NOBODY");
        }
        f_14bc_60da();
        f_14bc_50f8(2, 1.25, 22.5, 1, 4, 301, "                 DONE");
        f_14bc_50f8(2, 33.75, 1.125, 1, 2, 0, "Loans");
        do
            d_60ae_dda0 = f_14bc_5635(d_60ae_dd56);
        while (d_60ae_dda0 == 0);
        if (d_60ae_dda0 == 2)
            f_b628_5a8e(team);
    } while (d_60ae_dda0 != 1);
}

/* the league progress graph's axis labels */
static struct label d_60ae_0636[] = {
    {17, 34, "1"}, {17, 62, "5"}, {11, 97, "10"}, {11, 132, "15"}, {11, 167, "20"},
    {21, 30, "1"}, {162, 30, "19"}, {314, 30, "38"}
};

void f_70a9_6083(int team)
{
    f_14bc_000b(-1, team, "League Progress");
    f_1bd3_08cb(16);
    f_1bd3_08e1(19, 35, 315, 168);
    f_1bd3_08cb(30);
    f_1bd3_08e1(15, 31, 311, 164);
    f_1bd3_08d6(24);
    for (d_60ae_dd74 = 15; d_60ae_dd74 <= 311; d_60ae_dd74 += 8)
        f_1bd3_0fe2(d_60ae_dd74, 31, d_60ae_dd74, 164);
    for (d_60ae_dd72 = 31; d_60ae_dd72 <= 164; d_60ae_dd72 += 7)
        f_1bd3_0fe2(15, d_60ae_dd72, 311, d_60ae_dd72);
    if (d_60ae_dd78 > 1) {
        d_60ae_dcf8 = -1;
        for (d_60ae_dcf6 = 1; d_60ae_dcf6 <= d_60ae_dd78 - 1; d_60ae_dcf6++) {
            d_60ae_dd74 = d_60ae_dcf6 * 8 + 7;
            d_60ae_dd72 = d_323f_5320[d_60ae_dcf6][team] * 7 + 24;
            f_1bd3_08d6(18);
            f_1bd3_0fe2(d_60ae_dd74 - 2, d_60ae_dd72 + 2, d_60ae_dd74 + 2, d_60ae_dd72 - 2);
            f_1bd3_0fe2(d_60ae_dd74 - 2, d_60ae_dd72 - 2, d_60ae_dd74 + 2, d_60ae_dd72 + 2);
            if (d_60ae_dcf8 > -1) {
                f_1bd3_08d6(22);
                f_1bd3_0fe2(d_60ae_dcf8, d_60ae_dcf4, d_60ae_dd74, d_60ae_dd72);
            }
            d_60ae_dcf8 = d_60ae_dd74;
            d_60ae_dcf4 = d_60ae_dd72;
        }
    }
    for (d_60ae_dcf2 = 0; d_60ae_dcf2 <= 7; d_60ae_dcf2++)
        f_14bc_356a(d_60ae_0636[d_60ae_dcf2].x, d_60ae_0636[d_60ae_dcf2].y, 1, d_60ae_0636[d_60ae_dcf2].s);
    f_14bc_50f8(2, 2.125, 22.75, 1, 4, 293, "                DONE");
    do
        d_60ae_dda0 = f_14bc_5635(d_60ae_dd56);
    while (d_60ae_dda0 <= 0);
}
