/* @at ad38:0000 */
/* @data 60ae:6bea */
/* @module */

/* Overlay ad38: new in CM93: loading the data files (team.dat, league.dat, foreign.dat),
 * player info, fines, the match history files, the club's season, league and cup records
 * and transfers, board messages and the scouts. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mem.h>
#include <bios.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_ad38_0000(void);
void f_ad38_0256(void);
unsigned char f_ad38_0557(int player, int team, char c);
char f_ad38_08d6(int p, int team, char mode);
char f_ad38_2038(int a, char b);
void f_ad38_2135(int p, unsigned char a, char kind);
unsigned char f_ad38_27f9(int p, unsigned char r, unsigned char x);
void f_ad38_28e3(int p, unsigned char week, int team, unsigned char r, unsigned char apps, unsigned char goals, int z, unsigned char perf);
void f_ad38_2f53(int player);
void f_ad38_3179(int p, unsigned char team);
void f_ad38_3276(unsigned char team, unsigned char i);
void f_ad38_3423(void);
void f_ad38_34a0(unsigned char team, unsigned char i);
unsigned char f_ad38_3974(unsigned char team, unsigned char gk);
void f_ad38_3a4b(unsigned char team);
void f_ad38_3c81(void);
void f_ad38_3fe8(void);
void f_ad38_3fed(void);
void f_ad38_3ff2(char far *s);
void f_ad38_4019(unsigned char n);
void f_ad38_4044(unsigned team);
void f_ad38_4141(unsigned team);
void f_ad38_41c9(void);
void f_ad38_4201(void);
void f_ad38_422d(void);
void f_ad38_428a(unsigned char team, char mode, int player, unsigned char club, long fee, unsigned char x);
void f_ad38_47f5(unsigned char team, unsigned char idx);
void f_ad38_48e5(unsigned char team, unsigned char idx);
void f_ad38_4982(unsigned char team, unsigned char idx);
void f_ad38_4a1f(void);
void f_ad38_4dd8(void);
void f_ad38_534e(void);
void f_ad38_56ab(void);
void f_ad38_5a19(void);
void f_ad38_5c73(void);
void f_ad38_5ecd(void);
void f_ad38_5fc8(void);
char f_ad38_6227(unsigned char club, char far *title);
void f_ad38_6337(unsigned char team, int player);
void f_ad38_664f(unsigned char m);
void f_ad38_6e29(unsigned char n, char lit);
void f_ad38_6f7c(void);
void f_ad38_6fe5(unsigned char h, unsigned char n);
void f_ad38_7df8(unsigned char n, char lit);
void f_ad38_7f63(void);
unsigned char f_ad38_7fd9(unsigned char h, unsigned char n);
void f_ad38_8047(int player, char ev);

struct flags_a { unsigned char b0; unsigned f8 : 1; unsigned f9 : 1; unsigned : 6; unsigned : 2; unsigned f18 : 1; unsigned f19 : 1; unsigned : 4; unsigned : 0; unsigned f24 : 1; unsigned : 3; unsigned f28 : 1; unsigned : 1; unsigned f30 : 1; unsigned : 1; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
void f_1bd3_1a23();
long f_1bd3_0d69(long n);
int f_1bd3_1369(int a, int b);
void far *f_1bd3_1617(int handle, int page);
int f_14bc_5ddb(FILE *fp);
char f_14bc_6f7c(int player);
int f_14bc_6f9a(int player, int club);
void f_b628_674e(char a);
void f_b628_68ca(char a, int i, int n);
extern char far d_2289_0050[];
extern int far d_2289_7486[][80];
extern long far d_323f_3f94[][80];
extern unsigned char far d_323f_4c14[][82];
extern unsigned char far d_323f_6138[];
extern unsigned char far d_323f_4e52[];
extern unsigned char far d_323f_4f48[][82];
extern int far d_323f_653a[][1860];
extern int far d_323f_824a[];
extern unsigned char far d_471b_0000[][1860];
extern unsigned char far d_3c35_0000[][1860];
extern FILE *d_60ae_0094;
extern FILE *d_60ae_d7a7;
extern char d_60ae_d8f6;
extern int d_60ae_dd92;
extern int d_60ae_dd98;
extern int d_60ae_dda2;
extern int d_60ae_dda4;
extern union flags d_60ae_ddbe[];
extern unsigned char (far *d_60ae_fad2)[1860];
extern int (far *d_60ae_fae6)[1860];
extern int d_60ae_fddc;
extern int d_60ae_fde6;
int f_1bd3_1307(int a, int b);
int f_b628_4413(char c);
int f_b628_448b(char c);
extern unsigned char far d_2289_a0c6[][5][16];
extern int far d_323f_73c2[];
extern int far d_323f_90d2[];
extern float d_60ae_d86f;
extern float d_60ae_d873;
extern float d_60ae_d877;
extern int d_60ae_dab2;
extern int d_60ae_dab4;
extern int d_60ae_dab6;
extern int d_60ae_dab8;
extern int d_60ae_daba;
extern int d_60ae_dbc8;
extern int d_60ae_dc64;
extern int d_60ae_dc66;
extern int d_60ae_dd1e;
extern int (far *d_60ae_face)[2][16];
extern int d_60ae_fdda;
float f_14bc_2cf4(int x);
char f_14bc_60ea(int p);
float f_1bd3_1088(void);
float f_1bd3_12df(float a, float b);
float f_1bd3_1341(float a, float b);
extern char far d_2289_33c2[][6];
extern char far d_2289_33c3[][6];
extern unsigned char far d_2289_de84[];
extern float d_60ae_d863;
extern float d_60ae_d867;
extern float d_60ae_d86b;
extern int d_60ae_da90;
extern int d_60ae_da92;
extern int d_60ae_da94;
extern int d_60ae_da98;
extern int d_60ae_da9a;
extern int d_60ae_da9c;
extern int d_60ae_daa2;
extern int d_60ae_dafc;
extern int d_60ae_db8c;
extern int d_60ae_dbac;
extern int d_60ae_dd5c;
void f_1bd3_08cb(int c);
void f_1bd3_08e1(int x1, int y1, int x2, int y2);
void f_1bd3_1a28(void);
void f_1bd3_1a2d(void);
void f_1bd3_03a2(char on);
int f_1bd3_0c16(void);
void f_14bc_3672(float x, float y, int bg, int fg, int w, char far *s);
char f_14bc_5e32(int player);
void f_14bc_5bfe(int team, char far *title, char far *text);
int f_14bc_6b05(int x);
char f_14bc_2594(int w);
char f_14bc_25c5(int w);
void f_8683_1661(int team, int delta);
void f_9e77_139d(int player, int a, int b);
void f_9e77_1699(int p);
extern unsigned char far d_2289_a0f6[][80];
extern unsigned char far d_2289_a106[][80];
extern char far *far d_59f5_0000[];
extern char far *far d_59f5_0fc0[];
extern char far d_2289_5658[][80];
extern int d_60ae_dd9c;
extern int far d_323f_0592[][14];
extern unsigned char far d_323f_1e8e[];
extern int far d_471b_b7a8[][26];
extern unsigned char far d_471b_82c8[];
extern unsigned char far d_3c35_32dc[];
extern char near *d_60ae_b572[];
extern int d_60ae_fde2;
extern long (far *d_60ae_fade)[80];
extern char d_60ae_d97d;
extern unsigned far d_2287_001d;
extern struct { int a, b, start, len; } far d_2289_9766[];
extern int d_60ae_fdd8;
extern char far *d_60ae_ddba;
extern int d_60ae_dce8;
struct s_trans { int a[15]; /* +00 d_323f_73c2[player] */ int b[15]; /* +1e d_323f_90d2[player] */ char club[15][15]; /* +3c the other club's name */ long fee[15]; /* +11d */ unsigned char c[15]; /* +159 */ };
struct s_mhst { unsigned char season; /* 00 season + 91 */ char name[15]; /* 01 the club's name */ unsigned char pos; /* 10 league position (index in d_2289_fb10) */ unsigned char played; /* 11 */ unsigned char won; /* 12 */ unsigned char drawn; /* 13 */ unsigned char lost; /* 14 */ unsigned char gf; /* 15 */ unsigned char ga; /* 16 */ unsigned char pts; /* 17 */ unsigned char conf; /* 18 d_323f_4e00[team] */ char manager[10]; /* 19 f_96bb_14f5(team + 646, 0) */ unsigned char n[2]; /* 23 players bought, sold */ unsigned char x25; /* 25 d_323f_5f9e[team] */ long x26; /* 26 d_323f_4354[team] */ unsigned char x2a; /* 2a d_2289_d2a4[team] */ unsigned char x2b; /* 2b d_2289_d330[team] */ unsigned char cup; /* 2c */ unsigned char cupround; /* 2d */ struct s_trans t[2]; /* 2e bought, 196 sold */ };
int f_1bd3_0d9b(char far *path);
void f_14bc_0b83(char far *s);
void f_14bc_3e40(float x, float y, int bg, int fg, int w, char far *s);
char far *f_14bc_490d(int manager, char full);
char far *f_14bc_4a83(int division);
char far *f_14bc_4b12(int division, char full);
void f_14bc_4bd3(char far *title);
void f_14bc_50f8(int a, float x, float y, int c, int d, int e, char far *s);
int f_14bc_5635(int a);
void f_14bc_589c(int team);
void f_14bc_60ca(void);
void f_14bc_60da(void);
char far *f_96bb_14f5(int manager, int type);
int f_a3de_0000(int x);
void f_a3de_14f5(char all);
extern char far d_2289_0000[];
extern unsigned char far d_2289_5bd8[];
extern unsigned char far d_2289_cf5c[][140];
extern unsigned char far d_2289_d2a4[];
extern unsigned char far d_2289_d330[];
extern unsigned char far d_2289_d3bc[];
extern unsigned char far d_2289_d448[];
extern unsigned char far d_2289_d4d4[];
extern unsigned char far d_2289_d560[];
extern unsigned char far d_2289_fb10[];
extern long far d_323f_4354[];
extern unsigned char far d_323f_4e00[];
extern unsigned char far d_323f_4fec[];
extern unsigned char far d_323f_503e[];
extern unsigned char far d_323f_5090[];
extern unsigned char far d_323f_50e2[];
extern unsigned char far d_323f_5f9e[];
extern struct s_mhst far d_54a9_0000;
extern char far * far d_54d9_0000[];
extern int d_60ae_d9bc;
extern int d_60ae_dd56;
extern int d_60ae_dd78;
void f_14bc_2f90(int n, char far *title, char far *items);
char f_14bc_2cc0(int x);
void f_14bc_3334(int last);
void f_14bc_356a(int x, int y, int colour, char far *s);
char f_14bc_69ec(int x);
void f_8683_11f8(int team, long amount, long z);
char far *f_96bb_6ee2(int round);
char far *f_96bb_6fde(int round);
char far *f_96bb_70c0(int round, int cup);
extern char far d_54a9_0019[];
extern unsigned char far d_54a9_0018;
extern unsigned char far d_54a9_0023;
extern unsigned char far d_54a9_0024;
extern unsigned char far d_54a9_0025;
extern unsigned long far d_54a9_0026;
extern unsigned char far d_54a9_002a;
extern unsigned char far d_54a9_002b;
extern unsigned char far d_54a9_002c;
extern unsigned char far d_54a9_002d;
extern int far d_54a9_002e[];
extern int far d_54a9_004c[];
extern char far d_54a9_006a[][15];
extern long far d_54a9_014b[];
extern char far d_54a9_0187[];
extern int far d_54a9_0196[];
extern int far d_54a9_01b4[];
extern char far d_54a9_01d2[][15];
extern long far d_54a9_02b3[];
extern char far d_54a9_02ef[];
extern char far d_2289_2fd0[];
extern char far d_2289_3070[];
extern char far d_2289_30c0[];
extern int far d_323f_48f4[][80];
extern unsigned char far d_323f_60e6[];
extern int d_60ae_dd5a;
extern int d_60ae_dda0;
struct scout { char used; /* +00 */ unsigned player; /* +01: player watched + 1, 0: none */ unsigned match; /* +03: record of the match in the match file */ unsigned char comp; /* +05 */ unsigned char week; /* +06 */ int opponent; /* +07 */ unsigned char shirt; /* +09: 0 not picked */ unsigned char fitness; /* +0a */ unsigned char minutes; /* +0b: minutes played */ unsigned char rating[6]; /* +0c: this match, then the last five */ unsigned char goals; /* +12 */ unsigned char booked; /* +13: minute */ unsigned char sent_off; /* +14: minute */ unsigned char injured; /* +15: minute */ unsigned char other; /* +16: team + 1 of another club's scout present */ };
void f_14bc_0ac0(int line, char far *s);
void f_14bc_0b30(char far *s);
char far *f_14bc_4703(int player);
char far *f_14bc_48b4(int player);
char far *f_14bc_483d(int player);
void f_14bc_548f(int a, char b);
void f_96bb_0a22(int team);
void f_a694_49c9(int player, int a, char b);
void f_8aa1_4f06(int player, int a);
void f_1bd3_08d6(int c);
void f_1bd3_0928(int x1, int y1, int x2, int y2);
int f_1bd3_0c06(void);
int f_1bd3_0c0e(void);
extern int far d_323f_47b4[][80];
extern unsigned char far d_323f_4cb8[];
extern struct scout far d_2289_95f6[][4];
extern int d_60ae_dd4a;
extern char d_60ae_d975;
char far *f_14bc_3523(int x);
void f_14bc_4587(float x, float y, int team);
void f_70a9_5667(int team);
void f_7732_31e2(int team);
void f_817e_3d44(int a, int b, char c);
int f_8aa1_1a8b(int team, int p);
char f_9107_316b(int p, int team, int n);
extern char far d_2289_0078[];
extern char far d_2289_73ec[];
extern int far d_323f_4cc0[];
extern unsigned char far d_3c35_a71c[];
extern unsigned char far d_471b_9894[];
extern int far d_54d9_1200[][2][98];
extern char near *d_60ae_b570[];
extern int d_60ae_db8e;
extern int d_60ae_dc7a;
extern int d_60ae_dc98;
extern int d_60ae_dc9a;
extern int d_60ae_dcb8;
extern int d_60ae_dd76;


void f_ad38_0000(void)
{
    unsigned char i;
    FILE *fp;

    f_1bd3_1a23(2);
    fp = fopen("team.dat", "rb");
    for (i = 0; i <= 79; i = i + 1) {
        d_323f_4c14[1][i] = fgetc(fp);
        d_323f_6138[i] = fgetc(fp);
        d_323f_4c14[2][i] = fgetc(fp);
        d_323f_4c14[3][i] = fgetc(fp);
        d_323f_4c14[4][i] = fgetc(fp);
        d_323f_4c14[0][i] = fgetc(fp);
        d_323f_3f94[0][i] = (long)(unsigned)f_14bc_5ddb(fp) * 1000;
        d_323f_4c14[6][i] = fgetc(fp);
        d_2289_7486[0][i] = f_14bc_5ddb(fp);
        d_2289_7486[1][i] = f_14bc_5ddb(fp);
        d_2289_7486[2][i] = fgetc(fp);
        d_2289_7486[3][i] = fgetc(fp);
        d_2289_7486[4][i] = fgetc(fp);
        d_2289_7486[5][i] = fgetc(fp);
        d_2289_7486[6][i] = f_14bc_5ddb(fp);
        d_2289_7486[7][i] = f_14bc_5ddb(fp);
    }
    fclose(fp);
}

void f_ad38_0256(void)
{
    unsigned char i;
    unsigned char j;
    int p;
    register int n;
    register int done;

    n = 0;
    d_60ae_dda4 = 1667;
    d_60ae_dda2 = 131;
    for (i = 0; i <= 79; i = i + 1) {
        d_323f_4e52[i] = 0;
        d_323f_4f48[0][i] = 0;
    }
    f_b628_674e(1);
    f_1bd3_1a23(2);
    d_60ae_0094 = fopen(d_2289_0050, "rb+");
    if (d_60ae_d8f6 != 0) {
        f_1bd3_1a23(2);
        d_60ae_d7a7 = fopen("league.dat", "rb");
        for (i = 0; i <= 79; i = i + 1) {
            do {
                done = f_ad38_0557(n, i, 4);
                if (done == 0) {
                    f_b628_68ca(1, n, d_60ae_dda4 + d_60ae_dda2 - 1);
                    n++;
                }
            } while (done == 0);
            for (j = 0; j <= 15; j = j + 1)
                f_ad38_3276(i, j);
        }
        fclose(d_60ae_d7a7);
    } else if (d_60ae_d8f6 == 0) {
        for (i = 0; i <= 79; i = i + 1) {
            float f;
            unsigned char k;
            unsigned char count;

            f = (d_60ae_dda4 - n) / (80 - i) + (i < 79 ? 0.5 : 0.0);
            count = f;
            for (k = 1; k <= count; k = k + 1) {
                done = f_ad38_0557(n, i, k <= 2 ? 1 : 0);
                if (done == 0) {
                    f_b628_68ca(1, n, d_60ae_dda4 + d_60ae_dda2 - 1);
                    n++;
                }
            }
            for (j = 0; j <= 15; j = j + 1)
                f_ad38_3276(i, j);
        }
    }
    p = 1700;
    if (d_60ae_d8f6 != 0) {
        f_1bd3_1a23(2);
        d_60ae_d7a7 = fopen("foreign.dat", "rb");
        do {
            done = f_ad38_0557(p, 255, 4);
            if (done == 0) {
                f_b628_68ca(1, n, d_60ae_dda4 + d_60ae_dda2 - 1);
                p++;
                n++;
            }
        } while (done == 0);
        fclose(d_60ae_d7a7);
    } else if (d_60ae_d8f6 == 0) {
        unsigned char m;

        for (m = 1; m <= d_60ae_dda2; m = m + 1) {
            done = f_ad38_0557(p, 255, f_1bd3_0d69(10) == 0 ? 1 : 0);
            if (done == 0) {
                f_b628_68ca(1, n, d_60ae_dda4 + d_60ae_dda2 - 1);
                p++;
                n++;
            }
        }
    }
    fclose(d_60ae_0094);
    d_60ae_0094 = 0;
}

unsigned char f_ad38_0557(int player, int team, char c)
{
    d_60ae_ddbe[player].w.f0 = 0;
    d_60ae_ddbe[player].w.f1 = 0;
    d_60ae_ddbe[player].w.f2 = 0;
    d_60ae_ddbe[player].w.f3 = 0;
    d_60ae_ddbe[player].w.f4 = 0;
    d_60ae_ddbe[player].w.f5 = 0;
    d_60ae_ddbe[player].w.f6 = 0;
    d_60ae_ddbe[player].w.f7 = 0;
    d_60ae_ddbe[player].w.f8 = 0;
    d_60ae_ddbe[player].w.f9 = 0;
    d_60ae_ddbe[player].w.f10 = 0;
    d_60ae_ddbe[player].w.f11 = 0;
    d_60ae_ddbe[player].w.f12 = 0;
    d_60ae_ddbe[player].w.f13 = 0;
    d_60ae_ddbe[player].w.f14 = 0;
    d_60ae_ddbe[player].w.f15 = 0;
    d_60ae_ddbe[player].w.f16 = 0;
    d_60ae_ddbe[player].w.f17 = 0;
    d_60ae_ddbe[player].w.f18 = 0;
    d_60ae_ddbe[player].w.f19 = 0;
    d_60ae_ddbe[player].w.f20 = 0;
    d_60ae_ddbe[player].w.f21 = 0;
    d_60ae_ddbe[player].w.f22 = 0;
    d_60ae_ddbe[player].w.f23 = 0;
    d_60ae_ddbe[player].w.f24 = 0;
    d_60ae_ddbe[player].w.f25 = 0;
    d_60ae_ddbe[player].w.f26 = 0;
    d_60ae_ddbe[player].w.f27 = 0;
    d_60ae_ddbe[player].w.f28 = 0;
    d_60ae_ddbe[player].w.f29 = 0;
    d_60ae_ddbe[player].w.f30 = 0;
    d_60ae_ddbe[player].w.f31 = 0;
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 47; d_60ae_dd92++) {
        if (d_60ae_dd92 < 24)
            d_471b_0000[d_60ae_dd92][player] = 0;
        else
            d_3c35_0000[d_60ae_dd92 - 24][player] = 0;
        if (d_60ae_dd92 < 5) {
            d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 1);
            d_60ae_fae6[d_60ae_dd92][player] = 0;
        }
        if (d_60ae_dd92 < 10) {
            d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 1);
            d_60ae_fad2[d_60ae_dd92][player] = d_60ae_dd92 <= 1 ? 255 : 0;
        }
        if (d_60ae_dd92 < 4)
            d_323f_653a[d_60ae_dd92][player] = 0;
    }
    if (f_ad38_08d6(player, team, c) == 1)
        return 1;
    f_ad38_2135(player, team, c);
    d_60ae_ddbe[player].w.f13 = c == 2 || c == 3;
    d_471b_0000[21][player] = 100;
    d_3c35_0000[7][player] = 255;
    d_323f_824a[player] = (d_60ae_dd98 + f_1bd3_1369(f_1bd3_0d69(5), f_1bd3_0d69(5))
                           + d_60ae_ddbe[player].w.f9) * 100 + f_1bd3_0d69(30) + 1;
    if (f_14bc_6f7c(player) == 0) {
        d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 1);
        d_60ae_fae6[4][player] = f_14bc_6f9a(player, team);
        d_323f_4e52[team]++;
        if (d_60ae_ddbe[player].w.f0)
            d_323f_4f48[0][team]++;
    }
    return 0;
}

/* Fills player p's attributes: from the open data file (mode 4), from the team's
   default squad (modes 2 and 3) or at random. */
char f_ad38_08d6(int p, int team, char mode)
{
    unsigned char i;
    unsigned char k;
    char fromfile;
    char squad;
    char a[7];
    char ok;

    fromfile = mode == 4 ? -1 : 0;
    squad = mode == 2 || mode == 3 ? -1 : 0;
    if (fromfile) {
        d_323f_73c2[p] = f_14bc_5ddb(d_60ae_d7a7);
        if (d_323f_73c2[p] == 3000)
            return 1;
    } else if (squad) {
        k = f_ad38_3974(team, mode == 3 ? 1 : 0);
        d_60ae_face = f_1bd3_1617(d_60ae_fdda, 0);
        d_323f_73c2[p] = d_60ae_face[team][0][k];
    } else
        d_323f_73c2[p] = 3000;
    if (fromfile)
        d_323f_90d2[p] = f_14bc_5ddb(d_60ae_d7a7);
    else if (squad) {
        d_60ae_face = f_1bd3_1617(d_60ae_fdda, 0);
        d_323f_90d2[p] = d_60ae_face[team][1][k];
    } else
        d_323f_90d2[p] = 3000;
    if (fromfile) {
        d_60ae_ddbe[p].w.f9 = fgetc(d_60ae_d7a7);
        if (f_14bc_6f7c(p))
            d_471b_0000[18][p] = fgetc(d_60ae_d7a7);
        d_60ae_ddbe[p].a.f28 = fgetc(d_60ae_d7a7);
    }
    for (i = 0; i <= 6; i = i + 1) {
        a[i] = fromfile ? fgetc(d_60ae_d7a7) : 100;
        if (a[i] == 1)
            a[i] = -1;
        if (squad && i <= 3)
            a[i] = d_2289_a0c6[team][0][k] - 1 == i ? -1 : 0;
    }
    if (fromfile && a[3] && !a[2] && !a[1] && !a[6])
        a[2] = -1;
    if (fromfile && a[2] && !a[3] && !a[1] && !a[6])
        a[6] = -1;
    d_471b_0000[17][p] = fromfile ? fgetc(d_60ae_d7a7) : -1;
    if (squad)
        d_471b_0000[17][p] = d_2289_a0c6[team][1][k];
    d_3c35_0000[17][p] = fromfile ? fgetc(d_60ae_d7a7) : -1;
    d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 1);
    d_60ae_fad2[9][p] = fromfile ? fgetc(d_60ae_d7a7) : -1;
    d_471b_0000[0][p] = fromfile ? fgetc(d_60ae_d7a7) : -1;
    if (squad) {
        d_471b_0000[0][p] = d_2289_a0c6[team][2][k];
        f_ad38_3276(team, k);
    }
    for (i = 1; i <= 14; i = i + 1)
        d_471b_0000[i][p] = fromfile ? fgetc(d_60ae_d7a7) : -1;
    d_471b_0000[22][p] = fromfile ? fgetc(d_60ae_d7a7) : -1;
    do {
        ok = 1;
        d_60ae_dbc8 = f_1bd3_0d69(1000) + 1;
        if (d_60ae_dbc8 < 101 && mode != 1 && mode != 3 && mode != 4)
            ok = 0;
        else if (d_60ae_dbc8 >= 101 && (mode == 1 || mode == 3))
            ok = 0;
    } while (ok == 0);
    if (a[0] == 100)
        a[0] = d_60ae_dbc8 < 101 ? -1 : 0;
    if (a[1] == 100)
        a[1] = d_60ae_dbc8 > 100 && d_60ae_dbc8 < 400 || d_60ae_dbc8 > 760 && d_60ae_dbc8 < 855
               || d_60ae_dbc8 > 998 ? -1 : 0;
    if (a[2] == 100)
        a[2] = d_60ae_dbc8 > 399 && d_60ae_dbc8 < 572 || d_60ae_dbc8 > 760 ? -1 : 0;
    if (a[3] == 100)
        a[3] = d_60ae_dbc8 > 571 && d_60ae_dbc8 < 761 || d_60ae_dbc8 > 854 ? -1 : 0;
    if (a[0] == 0) {
        unsigned char j;
        unsigned char m;

        d_60ae_dbc8 = f_1bd3_0d69(1000) + 1;
        if (a[4] == 100)
            a[4] = d_60ae_dbc8 < 153 || d_60ae_dbc8 > 873 && d_60ae_dbc8 < 930
                   || d_60ae_dbc8 > 981 ? -1 : 0;
        if (a[5] == 100)
            a[5] = d_60ae_dbc8 > 152 && d_60ae_dbc8 < 331 || d_60ae_dbc8 > 929 ? -1 : 0;
        if (a[6] == 100)
            a[6] = d_60ae_dbc8 > 330 && d_60ae_dbc8 < 982 || d_60ae_dbc8 > 998 ? -1 : 0;
        if (fromfile == 0 && a[3] && a[6] == 0 && a[2] == 0) {
            if (f_1bd3_0d69(2) == 0)
                a[6] = -1;
            else
                a[2] = -1;
        }
        if (fromfile == 0 && a[2] && a[6] == 0 && a[3] == 0 && a[1] == 0) {
            d_60ae_dbc8 = f_1bd3_0d69(3);
            if (d_60ae_dbc8 == 0)
                a[6] = -1;
            else if (d_60ae_dbc8 == 1)
                a[3] = -1;
            else
                a[1] = -1;
        }
        if (d_471b_0000[1][p] == 255)
            d_471b_0000[1][p] = f_ad38_2038(a[2] || a[3], 0);
        if (d_471b_0000[2][p] == 255)
            d_471b_0000[2][p] = f_ad38_2038(f_1bd3_1307(a[1] ? 2 : 0, a[2] ? 1 : 0), 0);
        if (d_471b_0000[3][p] == 255)
            d_471b_0000[3][p] = f_ad38_2038(1, a[4] || a[5] ? -1 : 0);
        if (d_471b_0000[4][p] == 255)
            d_471b_0000[4][p] = f_ad38_2038(1, a[6] && (a[1] || a[3]) ? -1 : 0);
        if (d_471b_0000[5][p] == 255)
            d_471b_0000[5][p] = f_ad38_2038(a[3] ? 1 : 0, a[4] || a[5] ? -1 : 0);
        if (d_471b_0000[6][p] == 255)
            d_471b_0000[6][p] = f_ad38_2038(a[2] || a[3], 0);
        if (d_471b_0000[7][p] == 255)
            d_471b_0000[7][p] = f_ad38_2038(f_1bd3_1307(a[2] ? 1 : 0, a[3] ? 2 : 0), a[6] ? -1 : 0);
        if (a[1] && (a[4] || a[5])) {
            for (j = 0; d_471b_0000[2][p] + d_471b_0000[3][p] < 30; j++)
                d_471b_0000[j % 2 == 0 ? 2 : 3][p] = f_1bd3_1369(d_471b_0000[j % 2 == 0 ? 2 : 3][p] + 1, 20);
        }
        if (a[1] && a[6]) {
            for (j = 0; d_471b_0000[2][p] + d_471b_0000[4][p] < 30; j++)
                d_471b_0000[j % 2 == 0 ? 2 : 4][p] = f_1bd3_1369(d_471b_0000[j % 2 == 0 ? 2 : 4][p] + 1, 20);
            for (j = 0; d_471b_0000[5][p] + d_471b_0000[6][p] > 15; j++)
                d_471b_0000[j % 2 == 0 ? 5 : 6][p] = f_1bd3_1307(d_471b_0000[j % 2 == 0 ? 5 : 6][p] - 1, 1);
        }
        if (a[2] && (a[4] || a[5])) {
            for (j = 0; d_471b_0000[1][p] + d_471b_0000[3][p] + d_471b_0000[6][p] < 30; j++) {
                if (j % 3 == 0)
                    m = 1;
                else if (j % 3 == 1)
                    m = 3;
                else
                    m = 6;
                d_471b_0000[m][p] = f_1bd3_1369(d_471b_0000[m][p] + 1, 20);
            }
            for (j = 0; d_471b_0000[6][p] < d_471b_0000[1][p] - 5; j++) {
                if (j % 2 == 0)
                    d_471b_0000[6][p] = f_1bd3_1369(d_471b_0000[6][p] + 1, 20);
                else
                    d_471b_0000[1][p] = f_1bd3_1307(d_471b_0000[1][p] - 1, 1);
            }
        }
        if (a[2] && a[6]) {
            for (j = 0; d_471b_0000[1][p] + d_471b_0000[2][p] < 30; j++)
                d_471b_0000[j % 2 == 0 ? 1 : 2][p] = f_1bd3_1369(d_471b_0000[j % 2 == 0 ? 1 : 2][p] + 1, 20);
            for (j = 0; d_471b_0000[6][p] < d_471b_0000[1][p] - 5; j++) {
                if (j % 2 == 0)
                    d_471b_0000[6][p] = f_1bd3_1369(d_471b_0000[6][p] + 1, 20);
                else
                    d_471b_0000[1][p] = f_1bd3_1307(d_471b_0000[1][p] - 1, 1);
            }
        }
        if (a[3] && (a[4] || a[5])) {
            for (j = 0; d_471b_0000[3][p] + d_471b_0000[5][p] < 30; j++)
                d_471b_0000[j % 2 == 0 ? 3 : 5][p] = f_1bd3_1369(d_471b_0000[j % 2 == 0 ? 3 : 5][p] + 1, 20);
            for (j = 0; d_471b_0000[6][p] < d_471b_0000[5][p] - 5; j++) {
                if (j % 2 == 0)
                    d_471b_0000[6][p] = f_1bd3_1369(d_471b_0000[6][p] + 1, 20);
                else
                    d_471b_0000[5][p] = f_1bd3_1307(d_471b_0000[5][p] - 1, 1);
            }
        }
        if (a[3] && a[6]) {
            for (j = 0; d_471b_0000[6][p] + d_471b_0000[7][p] > 25; j++)
                d_471b_0000[j % 2 == 0 ? 6 : 7][p] = f_1bd3_1307(d_471b_0000[j % 2 == 0 ? 6 : 7][p] - 1, 1);
            for (j = 0; d_471b_0000[4][p] + d_471b_0000[5][p] > 25; j++)
                d_471b_0000[j % 2 == 0 ? 4 : 5][p] = f_1bd3_1307(d_471b_0000[j % 2 == 0 ? 4 : 5][p] - 1, 1);
            for (j = 0; d_471b_0000[5][p] < d_471b_0000[6][p] - 5; j++) {
                if (j % 2 == 0)
                    d_471b_0000[5][p] = f_1bd3_1369(d_471b_0000[5][p] + 1, 20);
                else
                    d_471b_0000[6][p] = f_1bd3_1307(d_471b_0000[6][p] - 1, 1);
            }
        }
    } else {
        a[1] = 0;
        a[2] = 0;
        a[3] = 0;
        a[4] = 0;
        a[5] = 0;
        a[6] = 0;
        d_471b_0000[1][p] = 0;
        d_471b_0000[2][p] = 0;
        d_471b_0000[3][p] = 0;
        d_471b_0000[4][p] = 0;
        d_471b_0000[5][p] = 0;
        d_471b_0000[6][p] = 0;
        d_471b_0000[7][p] = 0;
    }
    if (d_471b_0000[10][p] == 255)
        d_471b_0000[10][p] = f_ad38_2038(1, 0);
    if (d_471b_0000[11][p] == 255)
        d_471b_0000[11][p] = f_ad38_2038(1, 0);
    if (d_471b_0000[13][p] == 255)
        d_471b_0000[13][p] = f_ad38_2038(1, 0);
    if (d_471b_0000[17][p] == 255) {
        if (mode != 2 && mode != 3) {
            d_60ae_daba = f_1bd3_0d69(18 - a[0] * 5) + 17;
            d_60ae_dab8 = f_1bd3_0d69(18 - a[0] * 5) + 17;
            if (abs(d_60ae_daba - 28) < abs(d_60ae_dab8 - 28))
                d_471b_0000[17][p] = d_60ae_daba;
            else
                d_471b_0000[17][p] = d_60ae_dab8;
        } else
            d_471b_0000[17][p] = f_1bd3_0d69(5) + 16;
    }
    if (d_3c35_0000[17][p] == 255)
        d_3c35_0000[17][p] = f_1bd3_0d69(10);
    d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 0);
    if (d_60ae_fad2[9][p] == 255) {
        unsigned char j;

        if (squad) {
            d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 1);
            d_60ae_fad2[9][p] = 0;
        } else if (f_14bc_6f7c(p) || f_1bd3_0d69(100) == 0) {
            unsigned char t[26] = { 12, 6, 17, 20, 30, 27, 3, 11, 15, 8, 19, 26, 4, 24, 21, 18,
                                    42, 2, 22, 5, 16, 38, 29, 44, 43, 45 };

            j = f_1bd3_0d69(26);
            d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 1);
            d_60ae_fad2[9][p] = t[j];
            if (f_14bc_6f7c(p))
                d_471b_0000[18][p] = t[j] + 140;
        } else {
            j = f_1bd3_0d69(100) + 1;
            d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 1);
            if (j >= 1 && j <= 35)
                d_60ae_fad2[9][p] = 0;
            else if (j >= 36 && j <= 60)
                d_60ae_fad2[9][p] = 25;
            else if (j >= 61 && j <= 75)
                d_60ae_fad2[9][p] = 9;
            else if (j >= 76 && j <= 90)
                d_60ae_fad2[9][p] = 10;
            else
                d_60ae_fad2[9][p] = 32;
        }
    }
    if (d_323f_73c2[p] == 3000) {
        d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 0);
        d_323f_73c2[p] = f_b628_4413(d_60ae_fad2[9][p]);
    }
    if (d_323f_90d2[p] == 3000) {
        d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 0);
        d_323f_90d2[p] = f_b628_448b(d_60ae_fad2[9][p]);
    }
    d_60ae_d877 = 1;
    d_60ae_d873 = 1;
    switch (d_3c35_0000[17][p]) {
    case 0:
        d_60ae_dab6 = f_1bd3_0d69(3) + 1;
        d_60ae_dab4 = f_1bd3_0d69(5) + 1;
        d_60ae_dab2 = f_1bd3_0d69(20) + 1;
        d_60ae_d877 = 0.7;
        break;
    case 1:
        d_60ae_dab6 = f_1bd3_0d69(4) + 3;
        d_60ae_dab4 = f_1bd3_0d69(8) + 3;
        d_60ae_dab2 = f_1bd3_0d69(5) + 16;
        break;
    case 2:
        d_60ae_dab6 = f_1bd3_0d69(5) + 1;
        d_60ae_dab4 = f_1bd3_0d69(8) + 5;
        d_60ae_dab2 = f_1bd3_0d69(10) + 3;
        d_60ae_d877 = 2.0;
        d_60ae_d873 = 0.5;
        break;
    case 3:
        d_60ae_dab6 = f_1bd3_0d69(6) + 3;
        d_60ae_dab4 = f_1bd3_0d69(8) + 8;
        d_60ae_dab2 = f_1bd3_0d69(11) + 5;
        d_60ae_d877 = 0.5;
        d_60ae_d873 = 2.0;
        break;
    case 4:
        d_60ae_dab6 = f_1bd3_0d69(6) + 3;
        d_60ae_dab4 = f_1bd3_0d69(7) + 4;
        d_60ae_dab2 = f_1bd3_0d69(12) + 1;
        d_60ae_d873 = 0.75;
        d_60ae_d877 = 1.25;
        break;
    case 5:
        d_60ae_dab6 = f_1bd3_0d69(8) + 3;
        d_60ae_dab4 = f_1bd3_0d69(6) + 15;
        d_60ae_dab2 = f_1bd3_0d69(5) + 16;
        break;
    case 6:
        d_60ae_dab6 = f_1bd3_0d69(4) + 5;
        d_60ae_dab4 = f_1bd3_0d69(8) + 8;
        d_60ae_dab2 = f_1bd3_0d69(8) + 1;
        break;
    case 7:
        d_60ae_dab6 = f_1bd3_0d69(3) + 8;
        d_60ae_dab4 = f_1bd3_0d69(9) + 12;
        d_60ae_dab2 = f_1bd3_0d69(11) + 5;
        d_60ae_d877 = 1.5;
        break;
    case 8:
        d_60ae_dab6 = f_1bd3_0d69(8) + 2;
        d_60ae_dab4 = f_1bd3_0d69(11) + 10;
        d_60ae_dab2 = f_1bd3_0d69(11) + 10;
        d_60ae_d873 = 1.5;
        break;
    case 9:
        d_60ae_dab6 = f_1bd3_0d69(6) + 1;
        d_60ae_dab4 = f_1bd3_0d69(7) + 6;
        d_60ae_dab2 = f_1bd3_0d69(3) + 1;
        d_60ae_d86f = 0.75;
        break;
    }
    if (!fromfile) {
        d_471b_0000[6][p] = f_1bd3_1369(d_471b_0000[6][p] * d_60ae_d873, 20);
        d_471b_0000[7][p] = f_1bd3_1369(d_471b_0000[7][p] * d_60ae_d877, 20);
    }
    if (d_471b_0000[8][p] == 255)
        d_471b_0000[8][p] = d_60ae_dab6;
    if (d_471b_0000[12][p] == 255)
        d_471b_0000[12][p] = d_60ae_dab4;
    if (d_471b_0000[14][p] == 255)
        d_471b_0000[14][p] = d_60ae_dab2;
    if (d_471b_0000[22][p] == 255)
        d_471b_0000[22][p] = a[6] && f_1bd3_0d69(4) > 0 ? f_1bd3_0d69(11) + 10 : f_1bd3_0d69(20) + 1;
    d_60ae_ddbe[p].w.f0 = a[0] ? 1 : 0;
    d_60ae_ddbe[p].w.f1 = a[1] ? 1 : 0;
    d_60ae_ddbe[p].w.f2 = a[2] ? 1 : 0;
    d_60ae_ddbe[p].w.f3 = a[3] ? 1 : 0;
    d_60ae_ddbe[p].w.f4 = a[4] ? 1 : 0;
    d_60ae_ddbe[p].w.f5 = a[5] ? 1 : 0;
    d_60ae_ddbe[p].w.f6 = a[6] ? 1 : 0;
    return 0;
}

char f_ad38_2038(int a, char b)
{
    if (a == 0) {
        d_60ae_dc66 = 1;
        d_60ae_dc64 = 2;
    } else if (a == 1) {
        d_60ae_dc66 = 0;
        d_60ae_dc64 = 2;
    } else {
        d_60ae_dc66 = 0;
        d_60ae_dc64 = 1;
    }
    switch (f_1bd3_0d69(20) + 1) {
    case 1:
    case 2:
    case 3:
    case 4:
        d_60ae_dd1e = d_60ae_dc66;
        break;
    case 5:
    case 6:
    case 7:
    case 8:
        d_60ae_dd1e = d_60ae_dc64;
        break;
    default:
        d_60ae_dd1e = a;
    }
    return d_60ae_dd1e = f_1bd3_1369(d_60ae_dd1e * 7 + (int)f_1bd3_0d69(7)
                                     + (b ? (int)f_1bd3_0d69(5) : 0) + 1, 20);
}

void f_ad38_2135(int p, unsigned char a, char kind)
{
    FILE *fp;
    char c4 = kind == 4 ? -1 : 0;
    char c23 = kind == 2 || kind == 3 ? -1 : 0;
    char done;
    unsigned char n;
    unsigned char r;
    unsigned char week;
    unsigned char last;
    unsigned char team;
    unsigned char goals;
    unsigned char perf;
    {
    unsigned char ed;
    unsigned char ec;
    unsigned v;
    float f;
    unsigned char tbl[12] = {80, 100, 100, 110, 125, 130, 145, 160, 165, 170, 170, 170};

    if (d_471b_0000[0][p] == 0xff) {
        ed = f_14bc_6f7c(p) ? (unsigned char)f_14bc_60ea(p) : f_14bc_2cf4(a);
        do {
            done = 1;
            v = tbl[ed - 6] + f_1bd3_1307(f_1bd3_0d69(25) - f_1bd3_0d69(25), f_1bd3_0d69(25) - f_1bd3_0d69(25));
            if (f_1bd3_0d69(6) == 0)
                v = v * 0.65;
            else if (f_1bd3_0d69(50) == 0)
                v += 20;
            if (d_471b_0000[17][p] < 22) {
                f = 1 - (22 - d_471b_0000[17][p]) / 15;
                v = v * f;
            }
            if (v > 190)
                v = 190;
            d_471b_0000[0][p] = v;
        } while (done == 0);
    }
    if (d_471b_0000[9][p] == 0xff) {
        n = 0;
        do {
            done = 1;
            d_471b_0000[9][p] = f_1bd3_0d69(126) + 75;
            if (d_471b_0000[9][p] < d_471b_0000[0][p] ||
                abs(28 - d_471b_0000[17][p]) < 3 && d_471b_0000[9][p] - d_471b_0000[0][p] > n * 2 + 20)
                done = 0;
            n++;
        } while (done == 0);
    }
    d_3c35_0000[18][p] = d_471b_0000[0][p] + f_1bd3_0d69(200 - d_471b_0000[0][p]);
    memset(d_2289_33c2, 0, 0x98);
    d_3c35_0000[20][p] = 0;
    d_60ae_dafc = 0;
    if (!c23) {
        r = f_1bd3_1307(d_471b_0000[0][p] / 2 + f_1bd3_0d69(20) - f_1bd3_0d69(20), 20);
        week = c4 ? 0 : 93 - (d_471b_0000[17][p] - 16);
        team = c4 ? 0 : f_ad38_27f9(p, r, -1);
        do {
            if (week < 93) {
                last = week;
                if (c4) {
                    week = fgetc(d_60ae_d7a7);
                    if (week < 255) {
                        team = fgetc(d_60ae_d7a7);
                        goals = fgetc(d_60ae_d7a7);
                        ed = goals == 255 ? 50 : goals;
                        perf = fgetc(d_60ae_d7a7);
                        f_ad38_28e3(p, week, team, r, goals, perf, 255, ed);
                    } else
                        week = 93;
                } else {
                    ed = f_14bc_6f7c(p) ? (unsigned char)f_14bc_60ea(p) : f_14bc_2cf4(team);
                    if (abs(ed - r / 10) > 3 && f_1bd3_0d69(5) == 0 || f_1bd3_0d69(10) == 0) {
                        ec = f_1bd3_0d69(40) + 1;
                        f_ad38_28e3(p, week, team, r, -1, -1, 255, ec / 40.0 * 50.0);
                        team = f_ad38_27f9(p, r, team);
                        f_ad38_28e3(p, week, team, r, -1, -1, 255, (40 - ec) / 40.0 * 50.0);
                    } else
                        f_ad38_28e3(p, week, team, r, -1, -1, 255, 50);
                    week++;
                }
                if (week > last && week < 93)
                    r = (d_471b_0000[17][p] - (93 - week) >= 30 ? r * 2 + 100 : r * 2 + d_471b_0000[9][p]) / 3;
            }
        } while (week < 93);
    }
    if (!f_14bc_6f7c(p))
        d_471b_0000[18][p] = a;
    if (!c4 && !c23)
        f_ad38_3179(p, d_471b_0000[18][p]);
    if (d_60ae_0094 == 0) {
        f_1bd3_1a23(2);
        fp = fopen(d_2289_0050, "rb+");
        fseek(fp, (long)p * 133, 0);
        fwrite(d_2289_33c2, 1, 133, fp);
        fclose(fp);
    } else {
        fseek(d_60ae_0094, (long)p * 133, 0);
        fwrite(d_2289_33c2, 1, 133, d_60ae_0094);
    }
    if (d_60ae_dafc > 0) {
        d_3c35_0000[5][p] = d_60ae_dafc;
        d_3c35_0000[6][p] = d_60ae_db8c;
        d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 1);
        d_60ae_fad2[6][p] = d_60ae_da94;
        d_60ae_fad2[7][p] = d_60ae_da9c;
        d_60ae_fad2[8][p] = d_60ae_da9a;
        d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 1);
        d_60ae_fae6[1][p] = d_60ae_daa2;
    }
}
}

unsigned char f_ad38_27f9(int p, unsigned char r, unsigned char x)
{
    char done;
    unsigned char v;
    unsigned char i;
    unsigned char pos;

    i = 0;
    d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 0);
    pos = d_60ae_fad2[9][p];
    if (f_14bc_6f7c(p) == 0 && (pos == 0 || pos == 9 || pos == 10 || pos == 32)) {
        do {
            done = 1;
            v = f_1bd3_0d69(80);
            if (abs((int)(f_14bc_2cf4(v) - r / 10)) > i / 5 + 2 || v == x)
                done = 0;
            i++;
        } while (done == 0);
    } else {
        d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 0);
        v = d_60ae_fad2[9][p] - 116;
    }
    return v;
}

void f_ad38_28e3(int p, unsigned char week, int team, unsigned char r, unsigned char apps,
                 unsigned char goals, int z, unsigned char perf)
{
    char far *s;
    unsigned char q;

    if (team < 80)
        q = f_14bc_2cf4(team);
    else if (team < 140)
        q = f_14bc_2cf4(team + 320);
    else
        q = 14;
    if (week == 92)
        d_60ae_dbac = f_1bd3_1369(d_471b_0000[0][p] + f_1bd3_0d69(15) - f_1bd3_0d69(15), d_471b_0000[9][p]);
    else
        d_60ae_dbac = f_1bd3_1307(f_1bd3_1369(r + f_1bd3_0d69(25) - f_1bd3_0d69(25), d_471b_0000[9][p]), 10);
    if (apps == 255) {
        float f;
        unsigned char a;
        unsigned char b;
        unsigned char c;

        f = (d_60ae_dbac / 10.0 - q) * 16.0 + 70.0;
        if (f > 40.0)
            f = 40.0;
        else if (f < 0)
            f = 0;
        f = f / 40.0;
        d_60ae_dafc = perf * f;
        a = f_1bd3_0d69(d_60ae_dafc);
        b = f_1bd3_0d69(d_60ae_dafc);
        c = f_1bd3_0d69(d_60ae_dafc);
        if (a > b && a > c)
            d_60ae_dafc = a;
        else if (b > a && b > c)
            d_60ae_dafc = b;
        else
            d_60ae_dafc = c;
    } else
        d_60ae_dafc = apps;
    d_60ae_db8c = 0;
    d_60ae_da94 = 0;
    d_60ae_daa2 = 0;
    if (d_60ae_dafc > 0) {
        d_60ae_d86b = f_1bd3_12df(f_1bd3_1341(d_60ae_dbac / 40.0 + 3.0, 8.0), 3.0);
        d_60ae_daa2 = f_1bd3_1341(f_1bd3_12df((f_1bd3_1088() - f_1bd3_1088()) *
                                              (2.0 - d_60ae_dafc * 0.03) + d_60ae_d86b, 1.0),
                                  10.0) * d_60ae_dafc + 0.5;
        d_60ae_d867 = (float)d_60ae_daa2 / d_60ae_dafc;
        d_60ae_da9c = d_60ae_d867;
        d_60ae_da9a = d_60ae_da9c + (d_60ae_da9c < d_60ae_d867);
        if (d_60ae_dafc > 2) {
            d_60ae_da9c = f_1bd3_1307(d_60ae_da9c - f_1bd3_0d69(2), 1);
            d_60ae_da9a = f_1bd3_1369(d_60ae_da9a + f_1bd3_0d69(2), 10);
        }
        d_60ae_da94 = (float)d_60ae_dafc / perf * 50.0 *
                      (f_1bd3_1307(f_1bd3_0d69(d_471b_0000[11][p]), f_1bd3_0d69(d_471b_0000[11][p])) + 1) / 20.0;
        d_60ae_da94 = d_60ae_da94 / 5 * 5;
        if (d_60ae_ddbe[p].w.f0 == 0 && goals == 255) {
            if (d_60ae_ddbe[p].w.f3)
                d_60ae_da92 = f_1bd3_1369((d_60ae_ddbe[p].w.f2 ? f_1bd3_0d69(2) : 0) +
                                          (d_60ae_ddbe[p].w.f1 ? f_1bd3_0d69(2) : 0) * 2 + 1, 3);
            else if (d_60ae_ddbe[p].w.f2)
                d_60ae_da92 = (d_60ae_ddbe[p].w.f1 ? f_1bd3_0d69(2) : 0) + 2;
            else if (d_60ae_ddbe[p].w.f1)
                d_60ae_da92 = 3;
            d_60ae_d863 = (d_471b_0000[7][p] * 0.03 + 0.07) / d_60ae_da92 - f_1bd3_1088() / 5.0 +
                          f_1bd3_1088() / 5.0;
            d_60ae_db8c = f_1bd3_1307(0, f_1bd3_0d69(3) - f_1bd3_0d69(3) + d_60ae_dafc * d_60ae_d863 + 0.5);
            if (d_60ae_db8c < 0 || d_60ae_db8c > 50)
                d_60ae_db8c = d_60ae_db8c;
        } else if (goals != 255)
            d_60ae_db8c = goals;
        else
            d_60ae_db8c = 0;
    }
    d_60ae_da98 = d_3c35_0000[20][p];
    if (d_60ae_da98 > 21)
        d_60ae_da90 = d_60ae_da98 - 22;
    else
        d_60ae_da90 = d_60ae_da98;
    s = d_2289_33c3[d_60ae_da90];
    *s++ = week;
    if (team < 140) {
        for (d_60ae_dd5c = 0; d_60ae_dd5c <= 139; d_60ae_dd5c++) {
            if (d_2289_de84[d_60ae_dd5c] == team) {
                *s++ = d_60ae_dd5c;
                d_60ae_dd5c = 139;
            }
        }
    } else
        *s++ = team;
    *s++ = d_60ae_dafc;
    *s++ = d_60ae_db8c;
    *s++ = d_60ae_daa2 >> 8;
    *s = d_60ae_daa2 & 0xff;
    d_3c35_0000[20][p] = d_60ae_da98 + 1;
}

void f_ad38_2f53(int player)
{
    char far *s;
    FILE *fp;
    unsigned char t;
    int n;

    f_1bd3_1a23(2);
    fp = fopen(d_2289_0050, "rb+");
    fseek(fp, (long)player * 133, 0);
    fread(d_2289_33c2, 1, 133, fp);
    fclose(fp);
    d_60ae_da98 = d_3c35_0000[20][player];
    if (d_60ae_da98 > 0 || d_3c35_0000[12][player] > 0) {
        t = 255;
        if (d_471b_0000[18][player] < 140) {
            for (d_60ae_dd5c = 0; d_60ae_dd5c <= 139; d_60ae_dd5c++) {
                if (d_2289_de84[d_60ae_dd5c] == d_471b_0000[18][player]) {
                    t = d_60ae_dd5c;
                    d_60ae_dd5c = 139;
                }
            }
        } else
            t = d_471b_0000[18][player];
        if (t < 255) {
            if (d_60ae_da98 > 21)
                d_60ae_da90 = d_60ae_da98 - 22;
            else
                d_60ae_da90 = d_60ae_da98;
            s = d_2289_33c3[d_60ae_da90];
            *s++ = d_60ae_dd98 + 92;
            *s++ = t;
            *s++ = d_3c35_0000[12][player];
            *s++ = d_3c35_0000[13][player];
            d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
            n = d_60ae_fae6[2][player];
            *s++ = n >> 8;
            *s = n;
            d_3c35_0000[20][player] = d_60ae_da98 + 1;
            f_1bd3_1a23(2);
            fp = fopen(d_2289_0050, "rb+");
            fseek(fp, (long)player * 133, 0);
            fwrite(d_2289_33c2, 1, 133, fp);
            fclose(fp);
        }
    }
}

void f_ad38_3179(int p, unsigned char team)
{
    unsigned char cur;
    unsigned char old;
    unsigned char i;
    unsigned char k;
    unsigned char n;

    d_3c35_0000[10][p] = 255;
    if (d_3c35_0000[20][p] > 0) {
        n = d_3c35_0000[20][p];
        old = d_2289_33c3[n > 22 ? n - 23 : n - 1][1];
        do {
            cur = d_2289_33c3[n > 22 ? n - 23 : n - 1][1];
            if (cur == old) {
                for (i = 0; i <= 139; i = i + 1)
                    if (d_2289_de84[i] == team)
                        k = i;
                d_2289_33c3[n > 22 ? n - 23 : n - 1][1] = k;
            } else if (cur != team) {
                d_3c35_0000[10][p] = cur;
                n = 1;
            }
            n--;
        } while (n > 0);
    }
}

/* a new youth player in a team's slot */
void f_ad38_3276(unsigned char team, unsigned char i)
{
    unsigned char r;

    d_60ae_face = f_1bd3_1617(d_60ae_fdda, 1);
    d_60ae_face[team][0][i] = f_b628_4413(0);
    d_60ae_face[team][1][i] = f_b628_448b(0);
    if (i <= 1)
        d_2289_a0c6[team][0][i] = 1;
    else {
        r = f_1bd3_0d69(14) + 1;
        if (r <= 5)
            d_2289_a0c6[team][0][i] = 2;
        else if (r >= 6 && r <= 10)
            d_2289_a0c6[team][0][i] = 3;
        else if (r >= 11)
            d_2289_a0c6[team][0][i] = 4;
    }
    d_2289_a0c6[team][1][i] = f_1bd3_0d69(4) + 16;
    d_2289_a0c6[team][2][i] = f_1bd3_0d69(60) + 20;
    d_2289_a0f6[team][i] = 0;
    d_2289_a106[team][i] = 0;
}

/* the youth players get a year older */
void f_ad38_3423(void)
{
    unsigned char team, i;

    for (team = 0; team <= 79; team = team + 1)
        for (i = 0; i <= 15; i = i + 1) {
            d_2289_a0c6[team][1][i]++;
            if (d_2289_a0c6[team][1][i] > 23)
                f_ad38_3276(team, i);
        }
}

/* info on a youth player */
void f_ad38_34a0(unsigned char team, unsigned char i)
{
    char buf[80], line[80];

    f_1bd3_1a28();
    f_1bd3_08cb(16);
    f_1bd3_08e1(0x3d, 0x51, 0x10b, 0x7b);
    f_1bd3_08cb(19);
    f_1bd3_08e1(0x39, 0x4d, 0x107, 0x77);
    d_60ae_face = f_1bd3_1617(d_60ae_fdda, 0);
    sprintf(buf, "Info on %s %s", d_59f5_0000[d_60ae_face[team][0][i]],
            d_59f5_0fc0[d_60ae_face[team][1][i]]);
    sprintf(line, "%*s", 17 - strlen(buf) / 2 + strlen(buf), buf);
    f_14bc_3672(7.5, 10.625, 0, 1, 0xca, line);
    f_14bc_3672(7.5, 11.625, 6, 15, 100, " Age");
    sprintf(buf, " %d Yrs", d_2289_a0c6[team][1][i]);
    f_14bc_3672(20.25, 11.625, 6, 15, 100, buf);
    f_14bc_3672(7.5, 12.625, 6, 15, 100, " Position");
    if (d_2289_a0c6[team][0][i] == 1)
        strcpy(buf, " Goalkeeper");
    else if (d_2289_a0c6[team][0][i] == 2)
        strcpy(buf, " Defence");
    else if (d_2289_a0c6[team][0][i] == 3)
        strcpy(buf, " Midfield");
    else if (d_2289_a0c6[team][0][i] == 4)
        strcpy(buf, " Attack");
    f_14bc_3672(20.25, 12.625, 6, 15, 100, buf);
    f_14bc_3672(7.5, 13.625, 6, 15, 100, " Rating");
    if (d_2289_a0c6[team][2][i] >= 80)
        strcpy(buf, " Good");
    else if (d_2289_a0c6[team][2][i] >= 60)
        strcpy(buf, " Promising");
    else
        strcpy(buf, " Fair");
    f_14bc_3672(20.25, 13.625, 6, 15, 100, buf);
    f_14bc_3672(7.5, 14.625, 6, 15, 100, " Status");
    if (d_2289_a0f6[team][i] == 0)
        strcpy(buf, " Available");
    else
        sprintf(buf, " Out %d week%s", d_2289_a0f6[team][i],
                d_2289_a0f6[team][i] > 1 ? "s" : "");
    f_14bc_3672(20.25, 14.625, 6, 15, 100, buf);
    f_1bd3_03a2(0);
    while (f_1bd3_0c16() == 0)
        ;
    f_1bd3_03a2(1);
    f_1bd3_1a2d();
}

/* the best youth player of a team (keepers only if gk == 1) */
unsigned char f_ad38_3974(unsigned char team, unsigned char gk)
{
    unsigned char i, best, bestv;

    best = 0;
    bestv = 0;
    for (i = 0; i <= 15; i = i + 1) {
        if (gk == 1 && d_2289_a0c6[team][0][i] > 1)
            continue;
        if (d_2289_a0c6[team][2][i] + f_1bd3_0d69(10) - f_1bd3_0d69(10) > bestv) {
            bestv = d_2289_a0c6[team][2][i];
            best = i;
        }
    }
    return best;
}

/* fine a club for fielding reserve players */
void f_ad38_3a4b(unsigned char team)
{
    unsigned char n1, n2, i;
    long fine;
    char buf[320];

    if (d_2289_5658[0][team] != 0 && d_60ae_dd9c > 10) {
        n1 = 0;
        n2 = 0;
        for (i = 0; i <= 10; i = i + 1)
            if (f_14bc_5e32(d_323f_0592[team][i]))
                n1++;
        for (i = 0; d_323f_4e52[team] - 1 >= i; i = i + 1)
            if (d_471b_0000[20][d_471b_b7a8[team][i]] == 0)
                n2++;
        if (n1 >= f_1bd3_1307(15 - n2, 0) && n1 >= 5) {
            switch (team / 20) {
            case 0:
                fine = f_1bd3_0d69(6) * 2500 + 20000;
                break;
            case 1:
                fine = f_1bd3_0d69(6) * 1000 + 10000;
                break;
            case 2:
            case 3:
                fine = f_1bd3_0d69(6) * 500 + 2500;
                break;
            }
            sprintf(buf, "%s have been fined %ld for unnecessarily fielding reserve players.",
                    (char far *)d_60ae_b572[team], fine);
            f_14bc_5bfe(team, "FA Disciplinary action", buf);
            d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
            d_60ae_fade[12][team] = d_60ae_fade[12][team] + fine;
            f_8683_1661(team, -(f_1bd3_0d69(5) + 5));
        }
    }
}

/* print the week's news */
void f_ad38_3c81(void)
{
    unsigned char cnt;
    int last;
    int start;
    int len;
    char buf[80];
    unsigned i, j;
    int t, d;

    if (d_2287_001d > 0 && d_60ae_d97d != 0) {
        f_ad38_3fe8();
        f_ad38_3ff2("______________________________________________________________________________\n");
        f_ad38_4019(2);
        sprintf(buf, "                                Week %d/Season %d",
                f_14bc_6b05(d_60ae_dd9c), d_60ae_dd98);
        f_ad38_3ff2(buf);
        f_ad38_4019(2);
        for (i = 0; i <= d_2287_001d - 2; i = i + 1)
            for (j = i + 1; j <= d_2287_001d - 1; j++) {
                d = d_2289_9766[i].b - d_2289_9766[j].b;
                if (d >= 8 || (abs(d) < 8 && d_2289_9766[i].a > d_2289_9766[j].a)) {
                    t = d_2289_9766[i].a;
                    d_2289_9766[i].a = d_2289_9766[j].a;
                    d_2289_9766[j].a = t;
                    t = d_2289_9766[i].b;
                    d_2289_9766[i].b = d_2289_9766[j].b;
                    d_2289_9766[j].b = t;
                    t = d_2289_9766[i].start;
                    d_2289_9766[i].start = d_2289_9766[j].start;
                    d_2289_9766[j].start = t;
                    t = d_2289_9766[i].len;
                    d_2289_9766[i].len = d_2289_9766[j].len;
                    d_2289_9766[j].len = t;
                }
            }
        i = 0;
        last = -1;
        while (i <= d_2287_001d - 1) {
            if (d_2289_9766[i].b - last >= 8 || last == -1) {
                f_ad38_4019(1);
                f_ad38_3ff2("   ");
                cnt = 0;
                last = d_2289_9766[i].b;
            }
            if (cnt == d_2289_9766[i].a / 4) {
                start = d_2289_9766[i].start;
                len = d_2289_9766[i].len;
                d_60ae_ddba = f_1bd3_1617(d_60ae_fdd8, 0);
                for (t = 0; t <= len - 1; t++)
                    buf[t] = d_60ae_ddba[start + t];
                buf[len] = 0;
                f_ad38_3ff2(buf);
                cnt += strlen(buf);
                i++;
            } else {
                f_ad38_3ff2(" ");
                cnt++;
            }
        }
        f_ad38_4019(3);
        f_ad38_3ff2("______________________________________________________________________________\n");
        f_ad38_4019(2);
        f_ad38_3fed();
    }
}

void f_ad38_3fe8(void)
{
}

void f_ad38_3fed(void)
{
}

/* print a string */
void f_ad38_3ff2(char far *s)
{
    while (*s != 0)
        _bios_printer(0, 0, *s++);
}

/* print n new lines */
void f_ad38_4019(unsigned char n)
{
    unsigned char i;

    for (i = 1; i <= n; i = i + 1)
        f_ad38_3ff2("\r\n");
}

void f_ad38_4044(unsigned team)
{
    unsigned char i, k;
    int p;

    if ((f_14bc_2594(d_60ae_dd9c) || f_14bc_25c5(d_60ae_dd9c)) && team < 80) {
        k = f_14bc_2594(d_60ae_dd9c) ? 0 : 1;
        for (i = 0; i <= d_323f_4e52[team] - 1; i = i + 1) {
            p = d_471b_b7a8[team][i];
            d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 0);
            if ((d_60ae_fad2[k][p] != 255 && d_60ae_fad2[k][p] != d_471b_82c8[p])
                || d_3c35_32dc[p] < 255)
                f_9e77_139d(p, 50, 1);
        }
    }
}

void f_ad38_4141(unsigned team)
{
    unsigned char i;
    int p;

    if ((f_14bc_2594(d_60ae_dd9c) || f_14bc_25c5(d_60ae_dd9c)) && team < 80)
        for (i = 0; i <= d_323f_4e52[team] - 1; i = i + 1) {
            p = d_471b_b7a8[team][i];
            if (d_471b_0000[19][p] == 50)
                f_9e77_1699(p);
        }
}

void f_ad38_41c9(void)
{
    unsigned i;

    for (i = 0; i <= d_60ae_dda4 - 1; i = i + 1) {
        d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 1);
        d_60ae_fad2[0][i] = 255;
        d_60ae_fad2[1][i] = 255;
    }
}

void f_ad38_4201(void)
{
    unsigned char i;

    for (i = 0; i <= 3; i = i + 1)
        f_ad38_47f5(i, 0);
}

void f_ad38_422d(void)
{
    unsigned char i;

    if (d_60ae_dce8 > 0)
        for (i = 0; i <= d_60ae_dce8 - 1; i = i + 1)
            if (d_323f_1e8e[i] < 255)
                f_ad38_428a(i, 0, 0, 0, 0L, 0);
}

void f_ad38_428a(unsigned char team, char mode, int player, unsigned char club, long fee, unsigned char x)
{
    unsigned char t;
    char buf[40];
    unsigned char c;

    if (mode == 0) {
        t = d_323f_1e8e[team];
        f_ad38_48e5(team, d_2289_5bd8[team] % 25);
        strcpy(buf, d_60ae_b572[t]);
        buf[14] = 0;
        d_54a9_0000.season = d_60ae_dd98 + 91;
        strcpy(d_54a9_0000.name, buf);
        for (d_54a9_0000.pos = 0; d_2289_fb10[d_54a9_0000.pos] != t; d_54a9_0000.pos++)
            ;
        d_54a9_0000.played = d_60ae_dd78 - 1;
        d_54a9_0000.won = d_323f_4fec[t];
        d_54a9_0000.lost = d_323f_503e[t];
        d_54a9_0000.drawn = d_54a9_0000.played - d_54a9_0000.won - d_54a9_0000.lost;
        d_54a9_0000.gf = d_323f_5090[t];
        d_54a9_0000.ga = d_323f_50e2[t];
        d_54a9_0000.pts = f_a3de_0000(d_54a9_0000.pos);
        d_54a9_0000.conf = d_323f_4e00[t];
        strcpy(d_54a9_0000.manager, f_96bb_14f5(team + 646, 0));
        d_54a9_0000.x25 = d_323f_5f9e[t];
        d_54a9_0000.x26 = d_323f_4354[t];
        d_54a9_0000.x2a = d_2289_d2a4[t];
        d_54a9_0000.x2b = d_2289_d330[t];
        c = 0;
        if (d_2289_d3bc[t] > 0)
            c = 8;
        else if (d_2289_d448[t] > 0)
            c = 9;
        else if (d_2289_d4d4[t] > 0)
            c = 10;
        else if (d_2289_d560[t] > 0)
            c = 11;
        if (c > 0) {
            d_54a9_0000.cup = c - 5;
            d_54a9_0000.cupround = d_2289_cf5c[c][t];
        } else
            d_54a9_0000.cup = 0;
        f_ad38_4982(team, d_2289_5bd8[team] % 25);
        d_2289_5bd8[team]++;
        f_ad38_47f5(team, d_2289_5bd8[team] % 25);
    } else {
        f_ad38_48e5(team, d_2289_5bd8[team] % 25);
        if (club < 80)
            strcpy(buf, d_60ae_b572[club]);
        else
            sprintf(buf, "<%s>", d_54d9_0000[club - 140]);
        buf[14] = 0;
        if (mode == 1 && d_54a9_0000.n[0] < 15) {
            d_54a9_0000.t[0].a[d_54a9_0000.n[0]] = d_323f_73c2[player];
            d_54a9_0000.t[0].b[d_54a9_0000.n[0]] = d_323f_90d2[player];
            strcpy(d_54a9_0000.t[0].club[d_54a9_0000.n[0]], buf);
            d_54a9_0000.t[0].fee[d_54a9_0000.n[0]] = fee;
            d_54a9_0000.t[0].c[d_54a9_0000.n[0]] = x;
            d_54a9_0000.n[0]++;
        } else if (mode == 2 && d_54a9_0000.n[1] < 15) {
            d_54a9_0000.t[1].a[d_54a9_0000.n[1]] = d_323f_73c2[player];
            d_54a9_0000.t[1].b[d_54a9_0000.n[1]] = d_323f_90d2[player];
            strcpy(d_54a9_0000.t[1].club[d_54a9_0000.n[1]], buf);
            d_54a9_0000.t[1].fee[d_54a9_0000.n[1]] = fee;
            d_54a9_0000.t[1].c[d_54a9_0000.n[1]] = x;
            d_54a9_0000.n[1]++;
        } else
            return;
        f_ad38_4982(team, d_2289_5bd8[team] % 25);
    }
}

void f_ad38_47f5(unsigned char team, unsigned char idx)
{
    FILE *fp;
    char buf[40];

    memset(&d_54a9_0000, 0, 0x2fe);
    f_1bd3_1a23(2);
    sprintf(buf, "mhstP%d%s", team, d_2289_0000);
    if (f_1bd3_0d9b(buf) == 0) {
        d_2289_5bd8[team] = 0;
        fp = fopen(buf, "wb");
    } else {
        fp = fopen(buf, "rb+");
        fseek(fp, (long)idx * 0x2fe, 0);
    }
    fwrite(&d_54a9_0000, 1, 0x2fe, fp);
    fclose(fp);
}

void f_ad38_48e5(unsigned char team, unsigned char idx)
{
    FILE *fp;
    char buf[40];

    f_1bd3_1a23(2);
    sprintf(buf, "mhstP%d%s", team, d_2289_0000);
    fp = fopen(buf, "rb+");
    fseek(fp, (long)idx * 0x2fe, 0);
    fread(&d_54a9_0000, 1, 0x2fe, fp);
    fclose(fp);
}

void f_ad38_4982(unsigned char team, unsigned char idx)
{
    FILE *fp;
    char buf[40];

    f_1bd3_1a23(2);
    sprintf(buf, "mhstP%d%s", team, d_2289_0000);
    fp = fopen(buf, "rb+");
    fseek(fp, (long)idx * 0x2fe, 0);
    fwrite(&d_54a9_0000, 1, 0x2fe, fp);
    fclose(fp);
}

void f_ad38_4a1f(void)
{
    unsigned char t;
    unsigned char key;
    unsigned char idx;
    unsigned char page;
    char buf[320];

    f_a3de_14f5(-1);
    if (d_60ae_d9bc > -1) {
        t = d_60ae_d9bc + 122;
        if (d_2289_5bd8[t] > 0) {
            idx = (d_2289_5bd8[t] - 1) % 25;
            page = 0;
            f_ad38_48e5(t, idx);
            do {
                f_14bc_60ca();
                f_14bc_4bd3(f_14bc_490d(t + 646, 0));
                sprintf(buf, " Season %d/%s ", d_54a9_0000.season - 91, d_54a9_0000.name);
                f_14bc_3e40(1.25, 3.5, 0, 1, 0, buf);
                if (page == 0) {
                    f_ad38_4dd8();
                    f_ad38_534e();
                    f_ad38_56ab();
                    f_14bc_60da();
                    f_14bc_50f8(2, 29.0, 3.5, 1, 12, 37, "Bght");
                    f_14bc_50f8(2, 34.25, 3.5, 1, 12, 37, "Sold");
                } else if (page == 1) {
                    f_ad38_5a19();
                    f_14bc_60da();
                    f_14bc_50f8(2, 29.0, 3.5, 0, 6, 37, "Misc");
                    f_14bc_50f8(2, 34.25, 3.5, 0, 6, 37, "Sold");
                } else if (page == 2) {
                    f_ad38_5c73();
                    f_14bc_60da();
                    f_14bc_50f8(2, 29.0, 3.5, 0, 6, 37, "Misc");
                    f_14bc_50f8(2, 34.25, 3.5, 0, 6, 37, "Bght");
                }
                f_14bc_50f8(2, 1.25, 22.5, 6, 2, 53, " - Rec");
                f_14bc_50f8(2, 32.25, 22.5, 6, 2, 53, " Rec +");
                f_14bc_50f8(2, 8.5, 22.5, 1, 4, 185, "          Done");
                if (idx == 0)
                    f_14bc_589c(3);
                if (d_2289_5bd8[t] - 1 == idx)
                    f_14bc_589c(4);
                do
                    key = f_14bc_5635(d_60ae_dd56);
                while (key <= 0);
                if (page == 0 && key == 1 || page == 2 && key == 2)
                    page = 1;
                else if (page == 0 && key == 2 || page == 1 && key == 2)
                    page = 2;
                else if (page == 1 && key == 1 || page == 2 && key == 1)
                    page = 0;
                else if (key == 3)
                    f_ad38_48e5(t, idx = idx == 0 ? 24 : idx - 1);
                else if (key == 4)
                    f_ad38_48e5(t, idx = idx == 24 ? 0 : idx + 1);
            } while (key != 5);
        } else
            f_14bc_0b83("No records to show");
    }
}

void f_ad38_4dd8(void)
{
    char buf[320];

    f_1bd3_08cb(16);
    f_1bd3_08e1(12, 47, 316, 73);
    f_1bd3_08cb(20);
    f_1bd3_08e1(8, 43, 312, 69);
    f_14bc_3672(1.375, 6.375, 0, 1, 300, " League Record");
    f_14bc_3672(1.375, 7.375, 0, 5, 31, " DIV");
    sprintf(buf, " %s", f_14bc_4b12(d_54a9_0000.pos / 20 + 1, 3));
    f_14bc_3672(1.375, 8.375, 1, 8, 31, buf);
    f_14bc_3672(5.5, 7.375, 0, 5, 31, " POS");
    sprintf(buf, " %s", f_14bc_4a83(d_54a9_0000.pos % 20 + 1));
    f_14bc_3672(5.5, 8.375, 1, 8, 31, buf);
    f_14bc_3672(9.625, 7.375, 0, 5, 31, " PLD");
    sprintf(buf, "  %d", d_54a9_0000.played);
    f_14bc_3672(9.625, 8.375, 1, 8, 31, buf);
    f_14bc_3672(13.75, 7.375, 0, 5, 32, " WON");
    sprintf(buf, "  %d", d_54a9_0000.won);
    f_14bc_3672(13.75, 8.375, 1, 8, 32, buf);
    f_14bc_3672(18.0, 7.375, 0, 5, 32, " DRN");
    sprintf(buf, "  %d", d_54a9_0000.drawn);
    f_14bc_3672(18.0, 8.375, 1, 8, 32, buf);
    f_14bc_3672(22.25, 7.375, 0, 5, 32, " LST");
    sprintf(buf, "  %d", d_54a9_0000.lost);
    f_14bc_3672(22.25, 8.375, 1, 8, 32, buf);
    f_14bc_3672(26.5, 7.375, 0, 5, 32, " FOR");
    sprintf(buf, "  %d", d_54a9_0000.gf);
    f_14bc_3672(26.5, 8.375, 1, 8, 32, buf);
    f_14bc_3672(30.75, 7.375, 0, 5, 32, " AGG");
    sprintf(buf, "  %d", d_54a9_0000.ga);
    f_14bc_3672(30.75, 8.375, 1, 8, 32, buf);
    f_14bc_3672(35.0, 7.375, 0, 5, 31, " PTS");
    sprintf(buf, "  %d", d_54a9_0000.pts);
    f_14bc_3672(35.0, 8.375, 1, 8, 31, buf);
}

/* menu choice */
void f_ad38_534e(void)
{
    char buf[320];
    char buf2[320];

    f_1bd3_08cb(16);
    f_1bd3_08e1(12, 0x51, 0x13c, 0x73);
    f_1bd3_08cb(20);
    f_1bd3_08e1(8, 0x4d, 0x138, 0x6f);
    f_14bc_3672(1.375, 10.625, 0, 1, 300, " Cup Record");
    f_14bc_3672(1.375, 11.625, 1, 12, 0x95, " FA Cup");
    strcpy(buf, "");
    if (d_54a9_002a > 0) {
        strcpy(buf, f_96bb_6ee2(d_54a9_002a));
        sprintf(buf, " %s", d_2289_30c0);
    } else
        strcpy(buf, " Draw Not Made");
    f_14bc_3672(20.25, 11.625, 1, 12, 0x95, buf);
    f_14bc_3672(1.375, 12.625, 1, 12, 0x95, " League Cup");
    strcpy(buf, "");
    if (d_54a9_002b > 0) {
        strcpy(buf, f_96bb_6fde(d_54a9_002b));
        sprintf(buf, " %s", d_2289_30c0);
    } else
        strcpy(buf, " Draw Not Made");
    f_14bc_3672(20.25, 12.625, 1, 12, 0x95, buf);
    strcpy(buf, "");
    strcpy(buf2, "");
    if (d_54a9_002c > 0) {
        strcpy(buf, f_96bb_70c0(d_54a9_002d, d_54a9_002c));
        sprintf(buf, " %s", d_2289_3070);
        if (d_54a9_002d > 0)
            sprintf(buf2, " %s", d_2289_30c0);
        else
            strcpy(buf2, " Draw Not Made");
    }
    f_14bc_3672(1.375, 13.625, 1, 12, 0x95, buf);
    f_14bc_3672(20.25, 13.625, 1, 12, 0x95, buf2);
}

void f_ad38_56ab(void)
{
    unsigned long avg;
    char buf[320];

    f_1bd3_08cb(16);
    f_1bd3_08e1(12, 0x7a, 0x13c, 0xac);
    f_1bd3_08cb(31);
    f_1bd3_08e1(8, 0x76, 0x138, 0xa8);
    f_14bc_3672(1.375, 15.75, 0, 6, 300, " General Stats");
    f_14bc_3672(1.375, 16.75, 1, 3, 0x95, " Players Bought");
    sprintf(buf, " %d", d_54a9_0023);
    f_14bc_3672(20.25, 16.75, 1, 3, 0x95, buf);
    f_14bc_3672(1.375, 17.75, 1, 3, 0x95, " Players Sold");
    sprintf(buf, " %d", d_54a9_0024);
    f_14bc_3672(20.25, 17.75, 1, 3, 0x95, buf);
    f_14bc_3672(1.375, 18.75, 1, 3, 0x95, " Average Gate");
    strcpy(buf, "");
    if (d_54a9_0025 > 0) {
        avg = d_54a9_0026 / d_54a9_0025;
        sprintf(buf, " %ld", avg);
    }
    f_14bc_3672(20.25, 18.75, 1, 3, 0x95, buf);
    f_14bc_3672(1.375, 19.75, 1, 3, 0x95, " Board Confidence");
    sprintf(buf, " %d%", d_54a9_0018);
    f_14bc_3672(20.25, 19.75, 1, 3, 0x95, buf);
    f_14bc_3672(1.375, 20.75, 1, 3, 0x95, " Manager Rating");
    sprintf(buf, " %s", d_54a9_0019);
    f_14bc_3672(20.25, 20.75, 1, 3, 0x95, buf);
}

void f_ad38_5a19(void)
{
    unsigned char y;
    unsigned char i;
    char name[50];
    char info[50];

    y = 0x3f;
    f_14bc_3672(1.125, 6.375, 1, 8, 0x130, "Players Bought/Loaned in");
    if (d_54a9_0023 > 0) {
        for (i = 0; i <= d_54a9_0023 - 1; ++i) {
            sprintf(name, "%s %s", d_59f5_0000[d_54a9_002e[i]], d_59f5_0fc0[d_54a9_004c[i]]);
            if (d_54a9_014b[i] == 0)
                sprintf(info, "%s Free Transfer", d_54a9_006a[i]);
            else if (d_54a9_014b[i] == 1)
                sprintf(info, "%s On Loan", d_54a9_006a[i]);
            else
                sprintf(info, "%s %ld%s", d_54a9_006a[i], d_54a9_014b[i], d_54a9_0187[i] ? "T" : "");
            if (i % 2 == 0) {
                f_14bc_356a(0x11, y, 6, name);
                f_14bc_356a(0x11, y + 8, 2, info);
            } else {
                f_14bc_356a(0xa9, y, 6, name);
                f_14bc_356a(0xa9, y + 8, 2, info);
                y += 20;
            }
        }
    } else
        f_14bc_356a(0x11, y, 5, "No players");
}

void f_ad38_5c73(void)
{
    unsigned char y;
    unsigned char i;
    char name[50];
    char info[50];

    y = 0x3f;
    f_14bc_3672(1.125, 6.375, 1, 8, 0x130, "Players Sold/Loaned out");
    if (d_54a9_0024 > 0) {
        for (i = 0; i <= d_54a9_0024 - 1; ++i) {
            sprintf(name, "%s %s", d_59f5_0000[d_54a9_0196[i]], d_59f5_0fc0[d_54a9_01b4[i]]);
            if (d_54a9_02b3[i] == 0)
                sprintf(info, "%s Free Transfer", d_54a9_01d2[i]);
            else if (d_54a9_02b3[i] == 1)
                sprintf(info, "%s On Loan", d_54a9_01d2[i]);
            else
                sprintf(info, "%s %ld%s", d_54a9_01d2[i], d_54a9_02b3[i], d_54a9_02ef[i] ? "T" : "");
            if (i % 2 == 0) {
                f_14bc_356a(0x11, y, 6, name);
                f_14bc_356a(0x11, y + 8, 2, info);
            } else {
                f_14bc_356a(0xa9, y, 6, name);
                f_14bc_356a(0xa9, y + 8, 2, info);
                y += 20;
            }
        }
    } else
        f_14bc_356a(0x11, y, 5, "No players");
}

void f_ad38_5ecd(void)
{
    unsigned char club;
    unsigned char a;
    unsigned char n;
    int p;

    if (f_1bd3_0d69(20))
        return;
    club = f_1bd3_0d69(80);
    a = f_1bd3_0d69(3) + 4;
    n = f_1bd3_0d69(5) + 2;
    strcpy(d_2289_2fd0, "");
    for (; n > 0; n--) {
        do
            p = d_471b_b7a8[club][f_1bd3_0d69(d_323f_4e52[club])];
        while (d_471b_0000[20][p] > 0);
        f_9e77_139d(p, a, f_1bd3_1369(f_1bd3_0d69(2) + 1, f_1bd3_0d69(2) + 1));
    }
}

void f_ad38_5fc8(void)
{
    unsigned char i;
    long limit;
    long amount;
    char title[320];
    char text[320];
    unsigned char c;

    for (i = 0; i <= 79; ++i) {
        if (d_323f_4e00[i] < 95)
            d_323f_60e6[i] = 0;
        if (d_323f_60e6[i] < 15)
            c = 50;
        else if (d_323f_60e6[i] >= 15 && d_323f_60e6[i] < 30)
            c = 35;
        else
            c = 20;
        if (d_323f_4e00[i] >= 95 && !f_1bd3_0d69(c) && !f_14bc_69ec(d_60ae_dd9c)) {
            switch (i / 20) {
            case 0:
                limit = 1500000L;
                amount = (f_1bd3_0d69(4) + 2) * 100000L;
                break;
            case 1:
                limit = 500000L;
                amount = (f_1bd3_0d69(4) + 2) * 50000L;
                break;
            case 2:
            case 3:
                limit = 250000L;
                amount = (f_1bd3_0d69(4) + 2) * 25000L;
                break;
            }
            if (d_323f_3f94[0][i] < limit && d_323f_4e52[i] < 24) {
                f_8683_11f8(i, amount, 0L);
                if (f_14bc_2cc0(i)) {
                    sprintf(title, "%s board message", (char far *)d_60ae_b572[i]);
                    sprintf(text, "The board have made %ld available for the signing of new players. Keep up the good work!", amount);
                    f_14bc_5bfe(d_60ae_dd5a, title, text);
                }
            }
        }
        if (d_323f_4e00[i] >= 95 && d_323f_60e6[i] < 100)
            d_323f_60e6[i]++;
    }
}

char f_ad38_6227(unsigned char club, char far *title)
{
    unsigned char i;
    char buf[320];

    f_14bc_4bd3(title);
    f_14bc_3e40(1.0, 4.0, 0, 2, 0, " Select Scout ");
    strcpy(buf, "*Exit|");
    for (i = 0; i <= 3; ++i) {
        if (i == 3)
            strcat(buf, "$");
        strcat(buf, f_14bc_490d(d_323f_48f4[i][club], -1));
        strcat(buf, "|");
    }
    f_14bc_2f90(7, "", buf);
    f_14bc_3334(4);
    if (d_60ae_dda0 > 0)
        i = d_60ae_dda0 - 1;
    else
        i = 0xff;
    return i;
}

/* sends one of the team's scouts to watch a player */
void f_ad38_6337(unsigned char team, int player)
{
    unsigned char s, m, ok;
    char buf[320];
    register unsigned char i;

    m = d_323f_47b4[0][team] - 646;
    s = f_ad38_6227(team, "Watch Player");
    if (s < 255) {
        ok = 1;
        if (d_2289_95f6[m][s].player > 0) {
            if (d_2289_95f6[m][s].player - 1 != player) {
                f_14bc_4bd3("Watch Player");
                f_14bc_3e40(1.25, 4.0, -(d_323f_4cb8[team] / 16), d_323f_4cb8[team] % 16, 0,
                            d_60ae_b572[team]);
                sprintf(buf, "%s is currently assigned", f_14bc_490d(d_323f_48f4[s][team], -1));
                f_14bc_0ac0(7, buf);
                sprintf(buf, "to watch %s", f_14bc_4703(d_2289_95f6[m][s].player - 1));
                f_14bc_0ac0(9, buf);
                f_14bc_2f90(12, "", "*Exit|Continue|");
                f_14bc_3334(1);
                if (d_60ae_dda0 == 0)
                    ok = 0;
            } else {
                sprintf(buf, "%s already|watched by %s", f_14bc_48b4(player),
                        f_14bc_490d(d_323f_48f4[s][team], 0));
                f_14bc_0b83(buf);
                ok = 0;
            }
        }
        if (ok == 1) {
            sprintf(buf, "Ok - %s now|watched by %s", f_14bc_48b4(player),
                    f_14bc_490d(d_323f_48f4[s][team], 0));
            f_14bc_0b83(buf);
            d_2289_95f6[m][s].used = 0;
            d_2289_95f6[m][s].player = player + 1;
            for (i = 0; i <= 5; i++)
                d_2289_95f6[m][s].rating[i] = 0;
        }
    }
}

/* the scouts screen of human manager m */
void f_ad38_664f(unsigned char m)
{
    unsigned char team, c, i, sel;
    char buf[320];
    register unsigned p;

    team = d_323f_1e8e[m];
    sel = 0;
    do {
        f_14bc_4bd3("Scouts");
        sprintf(buf, " %s ", (char far *)d_60ae_b572[team]);
        f_14bc_3e40(1.25, 4.0, -(d_323f_4cb8[team] / 16), d_323f_4cb8[team] % 16, 0, buf);
        f_14bc_60da();
        for (c = 0; c <= 3; ++c)
            f_ad38_6e29(c, 0);
        f_14bc_50f8(2, 1.25, 22.5, 1, 4, 0x12d, "                 Done");
        f_14bc_60ca();
        f_14bc_3672(1.125, 10.25, 1, 2, 0x62, " Scout");
        f_14bc_3672(13.625, 10.25, 1, 2, 0x36, " Rep");
        f_14bc_3672(20.625, 10.25, 1, 2, 0x62, " Watching");
        f_14bc_3672(33.125, 10.25, 1, 2, 0x30, " Report");
        for (i = 0; i <= 3; ++i) {
            sprintf(buf, " %s", f_14bc_490d(d_323f_48f4[i][team], -1));
            f_14bc_50f8(0, 1.125, i + 11.5, 1, i % 2 == 0 ? 12 : 4, 0x62, buf);
            sprintf(buf, " %s", f_96bb_14f5(d_323f_48f4[i][team], i + 2));
            f_14bc_3672(13.625, i + 11.5, 1, 14, 0x36, buf);
            p = d_2289_95f6[m][i].player;
            if (p > 0)
                sprintf(buf, " %s", f_14bc_483d(p - 1));
            else
                strcpy(buf, " -");
            f_14bc_3672(20.625, i + 11.5, 1, 3, 0x62, buf);
            if (p > 0)
                sprintf(buf, " %s", d_2289_95f6[m][i].used ? "Yes" : "No");
            else
                strcpy(buf, " -");
            f_14bc_3672(33.125, i + 11.5, 1, 15, 0x30, buf);
        }
        f_14bc_548f(sel + 2, -1);
        do {
            d_60ae_dda0 = f_14bc_5635(0);
            if (d_60ae_dda0 == 0)
                f_ad38_6f7c();
            c = d_60ae_dda0;
            if (c >= 2 && c <= 5 && c - 2 != sel) {
                f_14bc_548f(sel + 2, 0);
                sel = c - 2;
                f_14bc_548f(sel + 2, -1);
            } else if (c == 6) {
                if (d_2289_95f6[m][sel].player > 0) {
                    if (d_2289_95f6[m][sel].used)
                        f_ad38_6fe5(m, sel);
                    else
                        f_14bc_0b83("No report to show");
                } else
                    c = 0;
            } else if (c == 7) {
                if (d_2289_95f6[m][sel].player > 0) {
                    f_14bc_4bd3(f_14bc_490d(d_323f_48f4[sel][team], 0));
                    f_14bc_3e40(1.25, 4.0, -(d_323f_4cb8[team] / 16), d_323f_4cb8[team] % 16, 0,
                                d_60ae_b572[team]);
                    sprintf(buf, "Stop reporting on %s?", f_14bc_48b4(d_2289_95f6[m][sel].player - 1));
                    f_14bc_0ac0(7, buf);
                    f_14bc_2f90(10, "", "*Exit|Stop Reporting|");
                    f_14bc_3334(1);
                    if (d_60ae_dda0 == 1) {
                        sprintf(buf, "Ok - %s no longer watched",
                                f_14bc_48b4(d_2289_95f6[m][sel].player - 1));
                        f_14bc_0b30(buf);
                        d_2289_95f6[m][sel].player = 0;
                    }
                } else
                    c = 0;
            } else if (c == 8) {
                if (d_2289_95f6[m][sel].player > 0) {
                    p = d_2289_95f6[m][sel].player - 1;
                    do {
                        f_a694_49c9(p, -1, -1);
                        f_8aa1_4f06(p, d_60ae_dd4a);
                    } while (!d_60ae_d975);
                    d_60ae_d975 = 0;
                } else
                    c = 0;
            } else if (c == 9)
                f_96bb_0a22(team);
        } while (c != 1 && c != 6 && c != 7 && c != 8 && c != 9);
    } while (c != 1);
}

/* one of the four scout buttons, lit or not */
void f_ad38_6e29(unsigned char n, char lit)
{
    register unsigned x = n * 77 + 8;
    char far *labels[8] = {"Last", "Report", "Stop", "Watching", "Player", "Factfile", "View", "Staff"};

    f_1bd3_08cb(16);
    f_1bd3_08e1(x + 2, 0x34, x + 0x4b, 0x48);
    f_1bd3_08cb((lit ? 8 : 14) + 16);
    f_1bd3_08e1(x, 0x32, x + 0x49, 0x46);
    f_1bd3_08d6(0x18);
    f_1bd3_0928(x, 0x32, x + 0x49, 0x46);
    f_14bc_356a(x + (36 - strlen(labels[n * 2]) * 3) + 8, 0x3b, 1, labels[n * 2]);
    f_14bc_356a(x + (36 - strlen(labels[n * 2 + 1]) * 3) + 8, 0x43, 1, labels[n * 2 + 1]);
}

/* which of the four scout buttons the mouse is on: sets d_60ae_dda0 to 6 + its number */
void f_ad38_6f7c(void)
{
    unsigned char i;
    register unsigned x;

    for (i = 0; i <= 3; ++i) {
        x = i * 77 + 8;
        if (f_1bd3_0c0e() >= x && f_1bd3_0c0e() <= x + 0x49 && f_1bd3_0c06() >= 0x32 &&
            f_1bd3_0c06() <= 0x46) {
            d_60ae_dda0 = i + 6;
            i = 3;
        }
    }
}

/* f_ad38_6fe5: human h's scout n's report on a player; buttons View Factfile, Match
   Report, His Squad, Our Squad */
void f_ad38_6fe5(unsigned char h, unsigned char n)
{
    unsigned char team, i, j;
    char choice, played;
    register int p;
    char buf[320];

    team = d_323f_1e8e[h];
    do {
        f_14bc_4bd3("Scout Report");
        f_14bc_4587(1.25, 3.0, team);
        p = d_2289_95f6[h][n].player - 1;
        sprintf(buf, " Report on %s of %s ", f_14bc_4703(p),
                (char far *)d_60ae_b572[d_471b_82c8[p]]);
        f_14bc_3672(1.125, 6.25, 0, 1, 0x130, buf);
        f_1bd3_08cb(16);
        f_1bd3_08e1(12, 58, 238, 164);
        f_1bd3_08cb(19);
        f_1bd3_08e1(8, 54, 234, 160);
        for (i = 0; i <= 3; i = i + 1)
            f_ad38_7df8(i, 0);
        f_14bc_3672(1.375, 7.75, 0, 6, 0x6e, " Scout Present");
        sprintf(buf, " %s", f_14bc_490d(d_323f_48f4[n][team], 0));
        f_14bc_3672(15.375, 7.75, 0, 6, 0x6e, buf);
        f_14bc_3672(1.375, 8.75, 1, 15, 0x6e, " Opponents");
        sprintf(buf, " %s", f_14bc_3523(d_2289_95f6[h][n].opponent));
        f_14bc_3672(15.375, 8.75, 1, 15, 0x6e, buf);
        f_14bc_3672(1.375, 9.75, 1, 15, 0x6e, " Shirt / Fitness");
        if (d_2289_95f6[h][n].shirt == 0)
            sprintf(buf, " Not Picked / %d%", d_2289_95f6[h][n].fitness);
        else
            sprintf(buf, " No.%d / %d%", d_2289_95f6[h][n].shirt, d_2289_95f6[h][n].fitness);
        f_14bc_3672(15.375, 9.75, 1, 15, 0x6e, buf);
        played = d_2289_95f6[h][n].shirt > 0 && d_2289_95f6[h][n].minutes > 0;
        f_14bc_3672(1.375, 10.75, 1, 15, 0x6e, " Played");
        strcpy(buf, " -");
        if (played)
            sprintf(buf, " %d mins", d_2289_95f6[h][n].minutes);
        f_14bc_3672(15.375, 10.75, 1, 15, 0x6e, buf);
        f_14bc_3672(1.375, 11.75, 1, 15, 0x6e, " Rating");
        strcpy(buf, " -");
        if (played && d_2289_95f6[h][n].rating[0] > 0)
            sprintf(buf, " %d", d_2289_95f6[h][n].rating[0]);
        f_14bc_3672(15.375, 11.75, 1, 15, 0x6e, buf);
        f_14bc_3672(1.375, 12.75, 1, 15, 0x6e, " Goals");
        strcpy(buf, " -");
        if (played)
            sprintf(buf, " %d", d_2289_95f6[h][n].goals);
        f_14bc_3672(15.375, 12.75, 1, 15, 0x6e, buf);
        f_14bc_3672(1.375, 13.75, 1, 15, 0x6e, " Booked");
        strcpy(buf, " -");
        if (played && d_2289_95f6[h][n].booked > 0)
            sprintf(buf, " %d mins", d_2289_95f6[h][n].booked);
        f_14bc_3672(15.375, 13.75, 1, 15, 0x6e, buf);
        f_14bc_3672(1.375, 14.75, 1, 15, 0x6e, " Sent off");
        strcpy(buf, " -");
        if (played && d_2289_95f6[h][n].sent_off > 0)
            sprintf(buf, " %d mins", d_2289_95f6[h][n].sent_off);
        f_14bc_3672(15.375, 14.75, 1, 15, 0x6e, buf);
        f_14bc_3672(1.375, 15.75, 1, 15, 0x6e, " Injured");
        strcpy(buf, " -");
        if (played && d_2289_95f6[h][n].injured > 0)
            sprintf(buf, " %d mins", d_2289_95f6[h][n].injured);
        f_14bc_3672(15.375, 15.75, 1, 15, 0x6e, buf);
        f_14bc_3672(1.375, 16.75, 1, 15, 0x6e, " Last 5 games");
        strcpy(buf, "");
        for (j = 1; j <= 5; j = j + 1) {
            if (d_2289_95f6[h][n].rating[j] > 0) {
                char tmp[5];
                sprintf(tmp, " %d", d_2289_95f6[h][n].rating[j]);
                strcat(buf, tmp);
            } else
                strcat(buf, " -");
        }
        f_14bc_3672(15.375, 16.75, 1, 15, 0x6e, buf);
        f_14bc_3672(1.375, 17.75, 1, 4, 0xde, "            Other Scouts");
        if (d_2289_95f6[h][n].other > 0)
            sprintf(buf, "A scout from %s was present",
                    (char far *)d_60ae_b570[d_2289_95f6[h][n].other]);
        else
            strcpy(buf, "                None");
        f_14bc_3672(1.375, 18.75, 1, 4, 0xde, buf);
        f_14bc_3672(1.375, 19.75, 0, 5, 0x6e, " Approach ?");
        if (f_9107_316b(p, team, n))
            strcpy(buf, " Yes");
        else
            strcpy(buf, " No");
        f_14bc_3672(15.375, 19.75, 0, 5, 0x6e, buf);
        f_14bc_50f8(2, 1.25, 22.5, 1, 4, 0x12d, "                 Done");
        do {
            d_60ae_dda0 = f_14bc_5635(-1);
            if (d_60ae_dda0 == 0)
                f_ad38_7f63();
            choice = d_60ae_dda0;
        } while (choice == 0);
        if (choice == 2) {
            do {
                f_a694_49c9(p, -1, -1);
                f_8aa1_4f06(p, d_60ae_dd4a);
            } while (!d_60ae_d975);
            d_60ae_d975 = 0;
        } else if (choice == 3) {
            FILE *fp;
            f_1bd3_1a23(2);
            fp = fopen(d_2289_0078, "rb");
            fseek(fp, d_2289_95f6[h][n].match * 154L, 0);
            fread(d_2289_73ec, 1, 154, fp);
            fclose(fp);
            f_817e_3d44(d_54d9_1200[d_2289_95f6[h][n].comp][0][d_2289_95f6[h][n].week] / 32,
                        d_54d9_1200[d_2289_95f6[h][n].comp][1][d_2289_95f6[h][n].week] / 32, -1);
        } else if (choice == 4)
            f_70a9_5667(d_471b_82c8[p]);
        else if (choice == 5)
            f_7732_31e2(team);
    } while (choice != 1);
}

/* f_ad38_7df8: button n of the scout report; lit: drawn highlighted */
void f_ad38_7df8(unsigned char n, char lit)
{
    char far *labels[4][2] = {{"View", "Factfile"}, {"Match", "Report"}, {"His", "Squad"},
                              {"Our", "Squad"}};
    int y;

    y = n * 27 + 54;
    f_1bd3_08cb(16);
    f_1bd3_08e1(244, y + 2, 314, y + 25);
    f_1bd3_08cb((lit ? 1 : 2) + 16);
    f_1bd3_08e1(242, y, 312, y + 23);
    f_1bd3_08d6(25);
    f_1bd3_0928(242, y, 312, y + 23);
    f_14bc_356a(35 - strlen(labels[n][0]) * 3 + 250, y + 11, lit ? 0 : 1, labels[n][0]);
    f_14bc_356a(35 - strlen(labels[n][1]) * 3 + 250, y + 19, lit ? 0 : 1, labels[n][1]);
}

/* f_ad38_7f63: which button the mouse is on: sets d_60ae_dda0 to 2 + its number */
void f_ad38_7f63(void)
{
    unsigned char i;
    unsigned y;

    for (i = 0; i <= 4; i = i + 1) {
        y = i * 22 + 54;
        if (f_1bd3_0c0e() >= 242 && f_1bd3_0c0e() <= 312 && f_1bd3_0c06() >= y
            && f_1bd3_0c06() <= y + 18) {
            f_ad38_7df8(i, -1);
            d_60ae_dda0 = i + 2;
            i = 4;
        }
    }
}

/* f_ad38_7fd9: human h's next scout after n with a report, or -1 */
unsigned char f_ad38_7fd9(unsigned char h, unsigned char n)
{
    unsigned char c;

    c = n;
    do
        c = c == 3 ? 0 : c + 1;
    while (d_2289_95f6[h][c].used == 0 && c != n);
    return d_2289_95f6[h][c].used == 0 ? -1 : c;
}

/* f_ad38_8047: a match event for a player the scouts watch (0 picked, 1 goal, 2 booked,
   3 sent off, 4 injured, 5 full time) */
void f_ad38_8047(int player, char ev)
{
    unsigned char h, n, t, cnt;
    unsigned char k;

    for (h = 0; h <= 3; h = h + 1) {
        if (d_323f_1e8e[h] < 255) {
            for (n = 0; n <= 3; n = n + 1) {
                if (d_2289_95f6[h][n].player > 0 && d_2289_95f6[h][n].player - 1 == player) {
                    if (ev == 0) {
                        d_2289_95f6[h][n].used = -1;
                        d_2289_95f6[h][n].match = d_60ae_dc7a + d_60ae_dd76 - 1;
                        d_2289_95f6[h][n].comp = d_60ae_dd76;
                        d_2289_95f6[h][n].week = d_60ae_dd9c - 1;
                        d_2289_95f6[h][n].opponent = d_60ae_dcb8;
                        d_2289_95f6[h][n].shirt = d_60ae_dd92 + (d_60ae_dd92 == 12 ? 1 : 0) + 1;
                        d_2289_95f6[h][n].fitness = d_471b_9894[player];
                        d_2289_95f6[h][n].goals = 0;
                        d_2289_95f6[h][n].booked = 0;
                        d_2289_95f6[h][n].sent_off = 0;
                        d_2289_95f6[h][n].injured = 0;
                        d_2289_95f6[h][n].minutes = 0;
                        d_2289_95f6[h][n].other = 0;
                    } else if (ev == 1)
                        d_2289_95f6[h][n].goals++;
                    else if (ev == 2)
                        d_2289_95f6[h][n].booked = d_60ae_dc9a;
                    else if (ev == 3)
                        d_2289_95f6[h][n].sent_off = d_60ae_dc9a;
                    else if (ev == 4)
                        d_2289_95f6[h][n].injured = d_60ae_dc9a;
                    else if (ev == 5) {
                        d_2289_95f6[h][n].minutes = d_60ae_dc98;
                        for (k = 5; k >= 1; k = k - 1)
                            d_2289_95f6[h][n].rating[k] = d_2289_95f6[h][n].rating[k - 1];
                        d_2289_95f6[h][n].rating[0] = d_60ae_db8e;
                        d_2289_95f6[h][n].other = 0;
                        if (d_3c35_a71c[player] > 0 && !d_60ae_ddbe[player].a.f9
                            && !d_60ae_ddbe[player].a.f30) {
                            cnt = 0;
                            do {
                                do
                                    ;
                                while ((t = f_1bd3_0d69(80)) == d_323f_4cc0[h]);
                                cnt++;
                            } while (f_8aa1_1a8b(t, player) == 0 && cnt < 40);
                            if (cnt < 40)
                                d_2289_95f6[h][n].other = t + 1;
                        }
                    }
                }
            }
        }
    }
}
