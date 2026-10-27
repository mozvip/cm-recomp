/* Native port of decomp/src/B085.C (see ../README.md). */
/* @at b085:0000 */
/* @data 69da:68d6 */
/* @module */

/* Overlay b085 (CM93's AD38.C): loading the data files (team.dat, league.dat, foreign.dat,
 * the player file) and generating the players, their attributes and ratings, player info,
 * the youth players, fines for fielding reserves, printing the week's news, the match
 * history records (the club's season, league and cup records and transfers)
 * and the scouts: sending one to watch a player, the scouts screen, their
 * reports and the match events they record. Compiled with `#pragma option -O-` from
 * 35be on (33dc matches either way, 2db0 and earlier need -O1's jump optimisation). Its
 * data is three function-local initialisers (25df's 12 bytes of ratings, then the two
 * scout screens' button labels, 69c6 and 75ba), followed by its literal pool. */
#include "port.h"

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_b085_0000(void);
void f_b085_0298(void);
void f_b085_05a8(void);
unsigned char f_b085_08ac(int16_t player, int16_t team, char c);
char f_b085_0caf(int16_t p, int16_t team, char mode);
char f_b085_24ed(int16_t a, char b);
void f_b085_25df(int16_t p, unsigned char a, char kind);
unsigned char f_b085_2cc3(int16_t p, unsigned char r, unsigned char x);
void f_b085_2db0(int16_t p, unsigned char week, int16_t team, unsigned char r, unsigned char apps, unsigned char goals, int16_t z, unsigned char perf);
void f_b085_33dc(int16_t player);
void f_b085_35be(int16_t p, unsigned char team);
void f_b085_36c7(unsigned char team, unsigned char i);
void f_b085_3836(void);
void f_b085_38a5(unsigned char team, unsigned char i);
unsigned char f_b085_3c6d(unsigned char team, unsigned char gk);
void f_b085_3d39(unsigned char team);
void f_b085_3f64(void);
void f_b085_42bd(void);
void f_b085_42c6(void);
void f_b085_42cf(char *s);
void f_b085_42fa(unsigned char n);
void f_b085_4327(uint16_t team);
void f_b085_442e(uint16_t team);
void f_b085_44b7(void);
void f_b085_4503(void);
void f_b085_4566(unsigned char team, char mode, int16_t player, unsigned char club, int32_t fee, unsigned char x);
void f_b085_4bb3(unsigned char team);
void f_b085_4b1f(unsigned char team, unsigned char idx);
void f_b085_4ca8(void);
void f_b085_4f87(void);
void f_b085_531d(void);
void f_b085_55b2(void);
void f_b085_5806(void);
void f_b085_5a25(void);
void f_b085_5c44(void);
void f_b085_5d39(void);
char f_b085_5f91(unsigned char club, char *title);
void f_b085_6084(unsigned char team, int16_t player);
void f_b085_6338(unsigned char m);
void f_b085_69c6(unsigned char n, char lit);
void f_b085_6aef(void);
void f_b085_6b59(unsigned char h, unsigned char n);
void f_b085_75ba(unsigned char n, char lit);
void f_b085_771d(void);
unsigned char f_b085_7793(unsigned char h, unsigned char n);
void f_b085_77f9(int16_t player, char ev);

struct flags_w { uint16_t f0 : 1; uint16_t f1 : 1; uint16_t f2 : 1; uint16_t f3 : 1; uint16_t f4 : 1; uint16_t f5 : 1; uint16_t f6 : 1; uint16_t f7 : 1; uint16_t f8 : 1; uint16_t f9 : 1; uint16_t f10 : 1; uint16_t f11 : 1; uint16_t f12 : 1; uint16_t f13 : 1; uint16_t f14 : 1; uint16_t f15 : 1; uint16_t f16 : 1; uint16_t f17 : 1; uint16_t f18 : 1; uint16_t f19 : 1; uint16_t f20 : 1; uint16_t f21 : 1; uint16_t f22 : 1; uint16_t f23 : 1; uint16_t f24 : 1; uint16_t f25 : 1; uint16_t f26 : 1; uint16_t f27 : 1; uint16_t f28 : 1; uint16_t f29 : 1; uint16_t f30 : 1; uint16_t f31 : 1; };
extern struct flags_w d_4512_bdc8[];
extern unsigned char d_28da_2a78[][1860];
extern int16_t d_536d_2b66[][80];
extern unsigned char d_4512_1524[];
extern char d_536d_a49d[];
extern FILE *d_69da_0090;
void f_2162_19f6();
int32_t f_2162_0da1(int32_t n);
int16_t f_2162_13ba(int16_t a, int16_t b);
void *f_2162_1634(int16_t handle, int16_t page);
int16_t f_1a70_5b36(FILE *fp);
char f_1a70_6d23(int16_t player);
int16_t f_1a70_6d45(int16_t player, int16_t club);
void f_b8da_61ff(char a);
void f_b8da_6369(char a, int16_t i, int16_t n);
extern int32_t d_4512_1e90[][80];
extern unsigned char d_4512_0000[][82];
extern unsigned char d_4512_023e[];
extern unsigned char d_4512_0334[][82];
extern int16_t d_3668_ae60[][1860];
extern int16_t d_3668_cb70[];
extern unsigned char d_3668_0000[][1860];
extern FILE *d_69da_0094;
extern char d_69da_de3d;
extern int16_t d_69da_d9a0;
extern int16_t d_69da_d99a;
extern int16_t d_69da_d990;
extern int16_t d_69da_d98e;
extern unsigned char (*d_69da_dfba)[1860];
extern int16_t (*d_69da_dfa6)[1860];
extern int16_t d_69da_dff6;
extern int16_t d_69da_dfec;
int16_t f_2162_134e(int16_t a, int16_t b);
int16_t f_b8da_3e41(char c);
int16_t f_b8da_3ebf(char c);
extern unsigned char d_4512_a4c8[][5][16];
extern int16_t d_3668_bce8[];
extern int16_t d_3668_d9f8[];
extern float d_69da_dec1;
extern float d_69da_debd;
extern float d_69da_deb9;
extern int16_t d_69da_dc80;
extern int16_t d_69da_dc7e;
extern int16_t d_69da_dc7c;
extern int16_t d_69da_dc7a;
extern int16_t d_69da_dc78;
extern int16_t d_69da_db6a;
extern int16_t d_69da_dace;
extern int16_t d_69da_dacc;
extern int16_t d_69da_da14;
extern int16_t (*d_69da_dfbe)[2][16];
extern int16_t d_69da_dff8;
float f_1a70_2bff(int16_t x);
char f_1a70_5e5a(int16_t p);
float f_2162_10cf(void);
float f_2162_1324(float a, float b);
float f_2162_1390(float a, float b);
extern float d_69da_decd;
extern float d_69da_dec9;
extern float d_69da_dec5;
extern int16_t d_69da_dca2;
extern int16_t d_69da_dca0;
extern int16_t d_69da_dc9e;
extern int16_t d_69da_dc9a;
extern int16_t d_69da_dc98;
extern int16_t d_69da_dc96;
extern int16_t d_69da_dc90;
extern int16_t d_69da_dc36;
extern int16_t d_69da_dba6;
extern int16_t d_69da_db86;
extern int16_t d_69da_d9d6;
void f_2162_0897();
void f_2162_08b5(int16_t x1, int16_t y1, int16_t x2, int16_t y2);
void f_2162_19ff(void);
void f_2162_1a08(void);
int16_t f_2162_0c2b(void);
void f_1a70_3554(float x, float y, int16_t bg, int16_t fg, int16_t w, char *s);
char f_1a70_5b94(int16_t player);
void f_1a70_598c(int16_t team, char *title, char *text);
int16_t f_1a70_68a4(int16_t x);
char f_1a70_2490(int16_t w);
char f_1a70_24c5(int16_t w);
void f_8c32_150f(int16_t team, int16_t delta);
void f_a330_12ed(int16_t player, int16_t a, int16_t b);
void f_a330_15f1(int16_t p);
extern unsigned char d_4512_a4f8[][80];
extern unsigned char d_4512_a508[][80];
extern farptr d_62e5_11f6[];
extern int16_t d_69da_d996;
extern unsigned char d_3668_32dc[];
extern nearptr d_69da_b1fc[];
extern int16_t d_69da_dff0;
extern int32_t (*d_69da_dfae)[80];
extern char d_69da_ddb6;
extern struct { int16_t a, b, start, len; } d_4512_dad8[];
extern int16_t d_69da_dffa;
extern char *d_69da_dfc2;
extern int16_t d_69da_da4a;
struct s_trans { int16_t a[15]; /* +00 d_3668_bce8[player] */ int16_t b[15]; /* +1e d_3668_d9f8[player] */ char club[15][15]; /* +3c the other club's name */ int32_t fee[15]; /* +11d */ unsigned char c[15]; /* +159 */ };
struct s_mhst { unsigned char season; /* 00 season + 91 */ char name[15]; /* 01 the club's name */ unsigned char pos; /* 10 league position (index in d_4512_6324) */ unsigned char played; /* 11 */ unsigned char won; /* 12 */ unsigned char drawn; /* 13 */ unsigned char lost; /* 14 */ unsigned char gf; /* 15 */ unsigned char ga; /* 16 */ unsigned char pts; /* 17 */ unsigned char conf; /* 18 d_4512_01ec[team] */ char manager[10]; /* 19 f_9c01_12e0(team + 646, 0) */ unsigned char n[2]; /* 23 players bought, sold */ unsigned char x25; /* 25 d_4512_e424[team] */ int32_t x26; /* 26 d_4512_2250[team] */ unsigned char x2a; /* 2a d_28d8_6818[team] */ unsigned char x2b; /* 2b d_28d8_68a4[team] */ unsigned char cup; /* 2c */ unsigned char cupround; /* 2d */ struct s_trans t[2]; /* 2e bought, 196 sold */ };
int16_t f_2162_0dd7(char *path);
void f_1a70_0b80(char *s);
void f_1a70_3d0c(float x, float y, int16_t bg, int16_t fg, int16_t w, char *s);
char *f_1a70_4793(int16_t manager, char full);
char *f_1a70_48f5(int16_t division);
char *f_1a70_4983(int16_t division, char full);
void f_1a70_4a41(char *title);
void f_1a70_4ede(int16_t a, float x, float y, int16_t c, int16_t d, int16_t e, char *s);
int16_t f_1a70_53de(int16_t a);
void f_1a70_5e32(void);
void f_1a70_5e46(void);
char *f_9c01_12e0(int16_t manager, int16_t type);
int16_t f_a83a_0000(int16_t x);
void f_a83a_1344(char all);
extern unsigned char d_28d8_6818[];
extern unsigned char d_28d8_68a4[];
extern unsigned char d_4512_6324[];
extern int32_t d_4512_2250[];
extern unsigned char d_4512_01ec[];
extern unsigned char d_4512_03d8[];
extern unsigned char d_4512_042a[];
extern unsigned char d_4512_047c[];
extern unsigned char d_4512_04ce[];
extern unsigned char d_4512_e424[];
extern struct s_mhst d_536d_2868;
extern int16_t d_69da_dd76;
extern int16_t d_69da_d9dc;
extern int16_t d_69da_d9ba;
void f_1a70_2eaa(int16_t n, char *title, char *items);
char f_1a70_2bc7(int16_t x);
void f_1a70_3226(int16_t last);
void f_1a70_344b(int16_t x, int16_t y, int16_t colour, char *s);
char f_1a70_6783(int16_t x);
void f_8c32_10af(int16_t team, int32_t amount, int32_t z);
char *f_9c01_6630(int16_t round);
char *f_9c01_6728(int16_t round);
char *f_9c01_6806(int16_t round, int16_t cup);
extern char d_536d_2881[];
extern unsigned char d_536d_2880;
extern unsigned char d_536d_288b;
extern unsigned char d_536d_288c;
extern unsigned char d_536d_288d;
extern uint32_t d_536d_288e;
extern unsigned char d_536d_2892;
extern unsigned char d_536d_2893;
extern unsigned char d_536d_2894;
extern unsigned char d_536d_2895;
extern int16_t d_536d_2896[];
extern int16_t d_536d_28b4[];
extern char d_536d_28d2[][15];
extern int32_t d_536d_29b3[];
extern char d_536d_29ef[];
extern int16_t d_536d_29fe[];
extern int16_t d_536d_2a1c[];
extern char d_536d_2a3a[][15];
extern int32_t d_536d_2b1b[];
extern int16_t d_4512_1b70[][80];
extern int16_t d_69da_d9d8;
extern int16_t d_69da_d992;
struct scout { char used; /* +00 */ uint16_t player; /* +01: player watched + 1, 0: none */ uint16_t match; /* +03: record of the match in the match file */ unsigned char comp; /* +05 */ unsigned char week; /* +06 */ int16_t opponent; /* +07 */ unsigned char shirt; /* +09: 0 not picked */ unsigned char fitness; /* +0a */ unsigned char minutes; /* +0b: minutes played */ unsigned char rating[6]; /* +0c: this match, then the last five */ unsigned char goals; /* +12 */ unsigned char booked; /* +13: minute */ unsigned char sent_off; /* +14: minute */ unsigned char injured; /* +15: minute */ unsigned char other; /* +16: team + 1 of another club's scout present */ };
void f_1a70_0adb(int16_t line, char *s);
void f_1a70_0b46(char *s);
char *f_1a70_4592(int16_t player);
char *f_1a70_4739(int16_t player);
char *f_1a70_46c1(int16_t player);
void f_1a70_525f(int16_t a, char b);
void f_9c01_08e4(int16_t team);
void f_aac9_42ed(int16_t player, int16_t a, char b);
void f_9007_4da1(int16_t player, int16_t a);
void f_2162_08a6();
void f_2162_090f(int16_t x1, int16_t y1, int16_t x2, int16_t y2);
int16_t f_2162_0c13(void);
int16_t f_2162_0c1f(void);
extern int16_t d_4512_1a30[][80];
extern unsigned char d_4512_00a4[];
extern int16_t d_69da_d9e8;
extern char d_69da_ddbe;
char *f_1a70_3404(int16_t x);
void f_1a70_442b(float x, float y, int16_t team);
void f_7827_4b4d(int16_t team);
void f_7dd6_2dcf(int16_t team);
void f_8773_3a79(int16_t a, int16_t b, char c);
char f_9661_3081(int16_t p, int16_t team, int16_t n);
extern int16_t d_5dbf_1292[][2][98];
extern nearptr d_69da_b1fa[];
extern int16_t d_69da_dba4;
extern int16_t d_69da_dab8;
extern int16_t d_69da_da9a;
extern int16_t d_69da_da98;
extern int16_t d_69da_da7a;
extern int16_t d_69da_d9bc;
extern unsigned char d_28da_ad40[];
extern unsigned char d_62e5_53ae[];
extern char d_536d_703b[][6];
extern char d_536d_703c[][6];
extern unsigned char d_4512_7f74[];
void f_2162_0397();
void f_2162_0dfb(int16_t ticks);
extern farptr d_62e5_0000[];
extern char d_536d_4c3d[][80];
extern int16_t d_4512_549a[][14];
extern unsigned char d_4512_2616[];
extern int16_t d_28da_10f0[][26];
extern uint16_t d_28d8_0010;
void f_1a70_5641(int16_t x);
extern struct s_mhst d_536d_1c70[];
extern unsigned char d_536d_4939[];
extern char d_536d_a4ed[];
extern unsigned char d_4512_138a[];
extern unsigned char d_4512_8b54[];
extern unsigned char d_4512_8be0[];
extern unsigned char d_4512_8c6c[];
extern unsigned char d_4512_8cf8[];
extern unsigned char d_4512_8d84[];
extern unsigned char d_4512_8e10[];
extern unsigned char d_4512_880c[][140];
extern farptr d_5dbf_0000[];
extern char d_536d_7405[];
extern char d_536d_7455[];
extern char d_536d_2b57[];
extern char d_536d_74f5[];
extern unsigned char d_4512_14d2[];
extern struct scout d_4512_e438[][4];
int16_t f_9007_1a61(int16_t team, int16_t p);
extern char d_536d_a475[];
extern char d_536d_3066[];
extern int16_t d_4512_1f3c[];
extern unsigned char d_28da_c30c[];

/* port: the players being read from the database (../../../port/db93.c), in place of
   LEAGUE.DAT and FOREIGN.DAT (d_69da_df89), and their careers */
static port_rows *db_players;
static struct port_player db_player;
static struct port_career db_career;

/* port: f_b085_0000, the teams, read from the database in place of TEAM.DAT, is the
   platform's load_teams() (../../../port/db93.c) */

void f_b085_0298(void)
{
    unsigned char i;
    unsigned char j;
    int16_t n;
    int16_t p;
    int16_t done;

    n = 0;
    d_69da_d98e = 1626;
    d_69da_d990 = 170;
    if (d_69da_de3d != 0) {
        /* port: as many players as the database has */
        d_69da_d98e = port_db_count_players(PORT_DB_LEAGUE);
        d_69da_d990 = port_db_count_players(PORT_DB_ABROAD);
    }
    for (i = 0; i <= 79; i = i + 1) {
        d_4512_023e[i] = 0;
        d_4512_0334[0][i] = 0;
    }
    f_b8da_61ff(1);
    f_2162_19f6(2);
    d_69da_0090 = fopen(d_536d_a49d, "rb+");
    if (d_69da_de3d != 0) {
        f_2162_19f6(2);
        for (i = 0; i <= 79; i = i + 1) {
            /* port: the team's players in the database, not LEAGUE.DAT */
            db_players = port_db_players(i);
            do {
                done = f_b085_08ac(n, i, 4);
                if (done == 0) {
                    f_b8da_6369(1, n, d_69da_d98e + d_69da_d990 - 1);
                    n++;
                }
            } while (done == 0);
            port_db_done(db_players);
            for (j = 0; j <= 15; j = j + 1)
                f_b085_36c7(i, j);
        }
    } else if (d_69da_de3d == 0) {
        for (i = 0; i <= 79; i = i + 1) {
            float f;
            unsigned char k;
            unsigned char count;

            f = (d_69da_d98e - n) / (80 - i) + (i < 79 ? 0.5 : 0.0);
            count = f;
            for (k = 1; k <= count; k = k + 1) {
                done = f_b085_08ac(n, i, k <= 2 ? 1 : 0);
                if (done == 0) {
                    f_b8da_6369(1, n, d_69da_d98e + d_69da_d990 - 1);
                    n++;
                }
            }
            for (j = 0; j <= 15; j = j + 1)
                f_b085_36c7(i, j);
        }
    }
    p = 1680;
    if (d_69da_de3d != 0) {
        f_2162_19f6(2);
        /* port: the players abroad in the database, not FOREIGN.DAT */
        db_players = port_db_players(PORT_DB_ABROAD);
        do {
            done = f_b085_08ac(p, 255, 4);
            if (done == 0) {
                f_b8da_6369(1, n, d_69da_d98e + d_69da_d990 - 1);
                p++;
                n++;
            }
        } while (done == 0);
        port_db_done(db_players);
    } else if (d_69da_de3d == 0) {
        unsigned char m;

        for (m = 1; m <= d_69da_d990; m = m + 1) {
            done = f_b085_08ac(p, 255, f_2162_0da1(10) == 0 ? 1 : 0);
            if (done == 0) {
                f_b8da_6369(1, n, d_69da_d98e + d_69da_d990 - 1);
                p++;
                n++;
            }
        }
    }
    fclose(d_69da_0090);
    d_69da_0090 = 0;
}

void f_b085_05a8(void)
{
    unsigned char i;
    unsigned char j;
    int16_t n;
    int16_t p;
    int16_t done;

    n = 0;
    d_69da_d98e = 1626;
    d_69da_d990 = 170;
    for (i = 0; i <= 79; i = i + 1) {
        d_4512_023e[i] = 0;
        d_4512_0334[0][i] = 0;
    }
    f_b8da_61ff(1);
    f_2162_19f6(2);
    d_69da_0090 = fopen(d_536d_a49d, "rb+");
    f_2162_19f6(2);
    for (i = 0; i <= 79; i = i + 1) {
        /* port: team%d.dat (team255.dat for made-up players): the team's players in the
           database, if it has some (nothing calls this function) */
        db_players = port_db_count_players(d_69da_de3d ? i : 255)
                     ? port_db_players(d_69da_de3d ? i : 255)
                     : NULL;
        if (db_players != 0) {
            do {
                done = f_b085_08ac(n, i, 4);
                if (done == 0) {
                    f_b8da_6369(1, n, d_69da_d98e + d_69da_d990 - 1);
                    n++;
                }
            } while (done == 0);
            for (j = 0; j <= 15; j = j + 1)
                f_b085_36c7(i, j);
            port_db_done(db_players);
        } else {
            float f;
            unsigned char k;
            unsigned char count;

            f = (d_69da_d98e - n) / (80 - i) + (i < 79 ? 0.5 : 0.0);
            count = f;
            for (k = 1; k <= count; k = k + 1) {
                done = f_b085_08ac(n, i, k <= 2 ? 1 : 0);
                if (done == 0) {
                    f_b8da_6369(1, n, d_69da_d98e + d_69da_d990 - 1);
                    n++;
                }
            }
            for (j = 0; j <= 15; j = j + 1)
                f_b085_36c7(i, j);
        }
    }
    p = 1680;
    f_2162_19f6(2);
    /* port: the players abroad in the database, if it has some */
    db_players = port_db_count_players(PORT_DB_ABROAD)
                 ? port_db_players(PORT_DB_ABROAD) : NULL;
    if (db_players != 0) {
        do {
            done = f_b085_08ac(p, 255, 4);
            if (done == 0) {
                f_b8da_6369(1, n, d_69da_d98e + d_69da_d990 - 1);
                p++;
                n++;
            }
        } while (done == 0);
        port_db_done(db_players);
    } else {
        uint16_t m;

        for (m = 1; m <= d_69da_d990; m++) {
            done = f_b085_08ac(p, 255, f_2162_0da1(10) == 0 ? 1 : 0);
            if (done == 0) {
                f_b8da_6369(1, n, d_69da_d98e + d_69da_d990 - 1);
                p++;
                n++;
            }
        }
    }
    fclose(d_69da_0090);
    d_69da_0090 = 0;
}

unsigned char f_b085_08ac(int16_t player, int16_t team, char c)
{
    d_4512_bdc8[player].f0 = 0;
    d_4512_bdc8[player].f1 = 0;
    d_4512_bdc8[player].f2 = 0;
    d_4512_bdc8[player].f3 = 0;
    d_4512_bdc8[player].f4 = 0;
    d_4512_bdc8[player].f5 = 0;
    d_4512_bdc8[player].f6 = 0;
    d_4512_bdc8[player].f7 = 0;
    d_4512_bdc8[player].f8 = 0;
    d_4512_bdc8[player].f9 = 0;
    d_4512_bdc8[player].f10 = 0;
    d_4512_bdc8[player].f11 = 0;
    d_4512_bdc8[player].f12 = 0;
    d_4512_bdc8[player].f13 = 0;
    d_4512_bdc8[player].f14 = 0;
    d_4512_bdc8[player].f15 = 0;
    d_4512_bdc8[player].f16 = 0;
    d_4512_bdc8[player].f17 = 0;
    d_4512_bdc8[player].f18 = 0;
    d_4512_bdc8[player].f19 = 0;
    d_4512_bdc8[player].f20 = 0;
    d_4512_bdc8[player].f21 = 0;
    d_4512_bdc8[player].f22 = 0;
    d_4512_bdc8[player].f23 = 0;
    d_4512_bdc8[player].f24 = 0;
    d_4512_bdc8[player].f25 = 0;
    d_4512_bdc8[player].f26 = 0;
    d_4512_bdc8[player].f27 = 0;
    d_4512_bdc8[player].f28 = 0;
    d_4512_bdc8[player].f29 = 0;
    d_4512_bdc8[player].f30 = 0;
    d_4512_bdc8[player].f31 = 0;
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 47; d_69da_d9a0++) {
        if (d_69da_d9a0 < 24)
            d_28da_2a78[d_69da_d9a0][player] = 0;
        else
            d_3668_0000[d_69da_d9a0 - 24][player] = 0;
        if (d_69da_d9a0 < 5) {
            d_69da_dfa6 = f_2162_1634(d_69da_dfec, 1);
            d_69da_dfa6[d_69da_d9a0][player] = 0;
        }
        if (d_69da_d9a0 < 10) {
            d_69da_dfba = f_2162_1634(d_69da_dff6, 1);
            d_69da_dfba[d_69da_d9a0][player] = d_69da_d9a0 <= 1 ? 255 : 0;
        }
        if (d_69da_d9a0 < 4)
            d_3668_ae60[d_69da_d9a0][player] = 0;
    }
    if (f_b085_0caf(player, team, c) == 1)
        return 1;
    f_b085_25df(player, team, c);
    d_4512_bdc8[player].f13 = c == 2 || c == 3;
    d_28da_2a78[21][player] = 100;
    d_3668_0000[7][player] = 255;
    d_3668_cb70[player] = (d_69da_d99a + f_2162_13ba(f_2162_0da1(5), f_2162_0da1(5))
                           + d_4512_bdc8[player].f9) * 100 + f_2162_0da1(30) + 1;
    if (f_1a70_6d23(player) == 0) {
        d_69da_dfa6 = f_2162_1634(d_69da_dfec, 1);
        d_69da_dfa6[4][player] = f_1a70_6d45(player, team);
        d_4512_023e[team]++;
        if (d_4512_bdc8[player].f0)
            d_4512_0334[0][team]++;
    }
    return 0;
}

/* Fills player p's attributes: from the open data file (mode 4), from the team's
   default squad (modes 2 and 3) or at random. */
char f_b085_0caf(int16_t p, int16_t team, char mode)
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
        /* port: the next row of the database; the end of the list was a first name of 3000 */
        if (port_db_next_player(db_players, &db_player) == 0) {
            d_3668_bce8[p] = 3000;
            return 1;
        }
        d_3668_bce8[p] = db_player.first_name;
    } else if (squad) {
        k = f_b085_3c6d(team, mode == 3 ? 1 : 0);
        d_69da_dfbe = f_2162_1634(d_69da_dff8, 0);
        d_3668_bce8[p] = d_69da_dfbe[team][0][k];
    } else
        d_3668_bce8[p] = 3000;
    if (fromfile)
        d_3668_d9f8[p] = db_player.surname;
    else if (squad) {
        d_69da_dfbe = f_2162_1634(d_69da_dff8, 0);
        d_3668_d9f8[p] = d_69da_dfbe[team][1][k];
    } else
        d_3668_d9f8[p] = 3000;
    if (fromfile) {
        d_4512_bdc8[p].f9 = db_player.settled;
        if (f_1a70_6d23(p))
            d_28da_ad40[p] = db_player.club;
        d_4512_bdc8[p].f28 = db_player.star;
    }
    for (i = 0; i <= 6; i = i + 1) {
        a[i] = fromfile ? db_player.position[i] : 100;
        if (a[i] == 1)
            a[i] = -1;
        if (squad && i <= 3)
            a[i] = d_4512_a4c8[team][0][k] - 1 == i ? -1 : 0;
    }
    if (fromfile && a[3] && !a[2] && !a[1] && !a[6])
        a[2] = -1;
    if (fromfile && a[2] && !a[3] && !a[1] && !a[6])
        a[6] = -1;
    d_28da_2a78[17][p] = fromfile ? db_player.age : -1;
    if (squad)
        d_28da_2a78[17][p] = d_4512_a4c8[team][1][k];
    d_3668_0000[17][p] = fromfile ? db_player.character : -1;
    d_69da_dfba = f_2162_1634(d_69da_dff6, 1);
    d_69da_dfba[9][p] = fromfile ? db_player.nationality : -1;
    d_28da_2a78[0][p] = fromfile ? db_player.ability : -1;
    if (squad) {
        d_28da_2a78[0][p] = d_4512_a4c8[team][2][k];
        f_b085_36c7(team, k);
    }
    for (i = 1; i <= 14; i = i + 1)
        d_28da_2a78[i][p] = fromfile ? db_player.attribute[i - 1] : -1;
    d_28da_2a78[22][p] = fromfile ? db_player.stamina : -1;
    do {
        ok = 1;
        d_69da_db6a = f_2162_0da1(1000) + 1;
        if (d_69da_db6a < 101 && mode != 1 && mode != 3 && mode != 4)
            ok = 0;
        else if (d_69da_db6a >= 101 && (mode == 1 || mode == 3))
            ok = 0;
    } while (ok == 0);
    if (a[0] == 100)
        a[0] = d_69da_db6a < 101 ? -1 : 0;
    if (a[1] == 100)
        a[1] = d_69da_db6a > 100 && d_69da_db6a < 400 || d_69da_db6a > 760 && d_69da_db6a < 855
               || d_69da_db6a > 998 ? -1 : 0;
    if (a[2] == 100)
        a[2] = d_69da_db6a > 399 && d_69da_db6a < 572 || d_69da_db6a > 760 ? -1 : 0;
    if (a[3] == 100)
        a[3] = d_69da_db6a > 571 && d_69da_db6a < 761 || d_69da_db6a > 854 ? -1 : 0;
    if (a[0] == 0) {
        unsigned char j;
        unsigned char m;

        d_69da_db6a = f_2162_0da1(1000) + 1;
        if (a[4] == 100)
            a[4] = d_69da_db6a < 153 || d_69da_db6a > 873 && d_69da_db6a < 930
                   || d_69da_db6a > 981 ? -1 : 0;
        if (a[5] == 100)
            a[5] = d_69da_db6a > 152 && d_69da_db6a < 331 || d_69da_db6a > 929 ? -1 : 0;
        if (a[6] == 100)
            a[6] = d_69da_db6a > 330 && d_69da_db6a < 982 || d_69da_db6a > 998 ? -1 : 0;
        if (fromfile == 0 && a[3] && a[6] == 0 && a[2] == 0) {
            if (f_2162_0da1(2) == 0)
                a[6] = -1;
            else
                a[2] = -1;
        }
        if (fromfile == 0 && a[2] && a[6] == 0 && a[3] == 0 && a[1] == 0) {
            d_69da_db6a = f_2162_0da1(3);
            if (d_69da_db6a == 0)
                a[6] = -1;
            else if (d_69da_db6a == 1)
                a[3] = -1;
            else
                a[1] = -1;
        }
        if (d_28da_2a78[1][p] == 255)
            d_28da_2a78[1][p] = f_b085_24ed(a[2] || a[3], 0);
        if (d_28da_2a78[2][p] == 255)
            d_28da_2a78[2][p] = f_b085_24ed(f_2162_134e(a[1] ? 2 : 0, a[2] ? 1 : 0), 0);
        if (d_28da_2a78[3][p] == 255)
            d_28da_2a78[3][p] = f_b085_24ed(1, a[4] || a[5] ? -1 : 0);
        if (d_28da_2a78[4][p] == 255)
            d_28da_2a78[4][p] = f_b085_24ed(1, a[6] && (a[1] || a[3]) ? -1 : 0);
        if (d_28da_2a78[5][p] == 255)
            d_28da_2a78[5][p] = f_b085_24ed(a[3] ? 1 : 0, a[4] || a[5] ? -1 : 0);
        if (d_28da_2a78[6][p] == 255)
            d_28da_2a78[6][p] = f_b085_24ed(a[2] || a[3], 0);
        if (d_28da_2a78[7][p] == 255)
            d_28da_2a78[7][p] = f_b085_24ed(f_2162_134e(a[2] ? 1 : 0, a[3] ? 2 : 0), a[6] ? -1 : 0);
        if (a[1] && (a[4] || a[5])) {
            for (j = 0; d_28da_2a78[2][p] + d_28da_2a78[3][p] < 30; j++)
                d_28da_2a78[j % 2 == 0 ? 2 : 3][p] = f_2162_13ba(d_28da_2a78[j % 2 == 0 ? 2 : 3][p] + 1, 20);
        }
        if (a[1] && a[6]) {
            for (j = 0; d_28da_2a78[2][p] + d_28da_2a78[4][p] < 30; j++)
                d_28da_2a78[j % 2 == 0 ? 2 : 4][p] = f_2162_13ba(d_28da_2a78[j % 2 == 0 ? 2 : 4][p] + 1, 20);
            for (j = 0; d_28da_2a78[5][p] + d_28da_2a78[6][p] > 15; j++)
                d_28da_2a78[j % 2 == 0 ? 5 : 6][p] = f_2162_134e(d_28da_2a78[j % 2 == 0 ? 5 : 6][p] - 1, 1);
        }
        if (a[2] && (a[4] || a[5])) {
            for (j = 0; d_28da_2a78[1][p] + d_28da_2a78[3][p] + d_28da_2a78[6][p] < 30; j++) {
                if (j % 3 == 0)
                    m = 1;
                else if (j % 3 == 1)
                    m = 3;
                else
                    m = 6;
                d_28da_2a78[m][p] = f_2162_13ba(d_28da_2a78[m][p] + 1, 20);
            }
            for (j = 0; d_28da_2a78[6][p] < d_28da_2a78[1][p] - 5; j++) {
                if (j % 2 == 0)
                    d_28da_2a78[6][p] = f_2162_13ba(d_28da_2a78[6][p] + 1, 20);
                else
                    d_28da_2a78[1][p] = f_2162_134e(d_28da_2a78[1][p] - 1, 1);
            }
        }
        if (a[2] && a[6]) {
            for (j = 0; d_28da_2a78[1][p] + d_28da_2a78[2][p] < 30; j++)
                d_28da_2a78[j % 2 == 0 ? 1 : 2][p] = f_2162_13ba(d_28da_2a78[j % 2 == 0 ? 1 : 2][p] + 1, 20);
            for (j = 0; d_28da_2a78[6][p] < d_28da_2a78[1][p] - 5; j++) {
                if (j % 2 == 0)
                    d_28da_2a78[6][p] = f_2162_13ba(d_28da_2a78[6][p] + 1, 20);
                else
                    d_28da_2a78[1][p] = f_2162_134e(d_28da_2a78[1][p] - 1, 1);
            }
        }
        if (a[3] && (a[4] || a[5])) {
            for (j = 0; d_28da_2a78[3][p] + d_28da_2a78[5][p] < 30; j++)
                d_28da_2a78[j % 2 == 0 ? 3 : 5][p] = f_2162_13ba(d_28da_2a78[j % 2 == 0 ? 3 : 5][p] + 1, 20);
            for (j = 0; d_28da_2a78[6][p] < d_28da_2a78[5][p] - 5; j++) {
                if (j % 2 == 0)
                    d_28da_2a78[6][p] = f_2162_13ba(d_28da_2a78[6][p] + 1, 20);
                else
                    d_28da_2a78[5][p] = f_2162_134e(d_28da_2a78[5][p] - 1, 1);
            }
        }
        if (a[3] && a[6]) {
            for (j = 0; d_28da_2a78[6][p] + d_28da_2a78[7][p] > 25; j++)
                d_28da_2a78[j % 2 == 0 ? 6 : 7][p] = f_2162_134e(d_28da_2a78[j % 2 == 0 ? 6 : 7][p] - 1, 1);
            for (j = 0; d_28da_2a78[4][p] + d_28da_2a78[5][p] > 25; j++)
                d_28da_2a78[j % 2 == 0 ? 4 : 5][p] = f_2162_134e(d_28da_2a78[j % 2 == 0 ? 4 : 5][p] - 1, 1);
            for (j = 0; d_28da_2a78[5][p] < d_28da_2a78[6][p] - 5; j++) {
                if (j % 2 == 0)
                    d_28da_2a78[5][p] = f_2162_13ba(d_28da_2a78[5][p] + 1, 20);
                else
                    d_28da_2a78[6][p] = f_2162_134e(d_28da_2a78[6][p] - 1, 1);
            }
        }
    } else {
        a[1] = 0;
        a[2] = 0;
        a[3] = 0;
        a[4] = 0;
        a[5] = 0;
        a[6] = 0;
        d_28da_2a78[1][p] = 0;
        d_28da_2a78[2][p] = 0;
        d_28da_2a78[3][p] = 0;
        d_28da_2a78[4][p] = 0;
        d_28da_2a78[5][p] = 0;
        d_28da_2a78[6][p] = 0;
        d_28da_2a78[7][p] = 0;
    }
    if (d_28da_2a78[10][p] == 255)
        d_28da_2a78[10][p] = f_b085_24ed(1, 0);
    if (d_28da_2a78[11][p] == 255)
        d_28da_2a78[11][p] = f_b085_24ed(1, 0);
    if (d_28da_2a78[13][p] == 255)
        d_28da_2a78[13][p] = f_b085_24ed(1, 0);
    if (d_28da_2a78[17][p] == 255) {
        if (mode != 2 && mode != 3) {
            d_69da_dc78 = f_2162_0da1(18 - a[0] * 5) + 17;
            d_69da_dc7a = f_2162_0da1(18 - a[0] * 5) + 17;
            if (abs(d_69da_dc78 - 28) < abs(d_69da_dc7a - 28)) {
                d_28da_2a78[17][p] = d_69da_dc78;
                d_69da_dc78;
            } else
                d_28da_2a78[17][p] = d_69da_dc7a;
        } else
            d_28da_2a78[17][p] = f_2162_0da1(5) + 16;
    }
    if (d_3668_0000[17][p] == 255)
        d_3668_0000[17][p] = f_2162_0da1(10);
    d_69da_dfba = f_2162_1634(d_69da_dff6, 0);
    if (d_69da_dfba[9][p] == 255) {
        uint16_t j;

        if ((f_1a70_6d23(p) || f_2162_0da1(100) <= 4) && !squad) {
            do
                j = f_2162_0da1(1408);
            while (d_62e5_53ae[j] == 0);
            d_69da_dfba = f_2162_1634(d_69da_dff6, 1);
            d_69da_dfba[9][p] = d_62e5_53ae[j];
            if (f_1a70_6d23(p))
                d_28da_ad40[p] = d_62e5_53ae[j] + 140;
        } else {
            j = f_2162_0da1(1000) + 1;
            d_69da_dfba = f_2162_1634(d_69da_dff6, 1);
            if (j >= 1 && j <= 843)
                d_69da_dfba[9][p] = 0;
            else if (j >= 844 && j <= 896)
                d_69da_dfba[9][p] = 25;
            else if (j >= 897 && j <= 920)
                d_69da_dfba[9][p] = 10;
            else if (j >= 921 && j <= 952)
                d_69da_dfba[9][p] = 9;
            else
                d_69da_dfba[9][p] = 32;
        }
    }
    if (d_3668_bce8[p] == 3000) {
        d_69da_dfba = f_2162_1634(d_69da_dff6, 0);
        d_3668_bce8[p] = f_b8da_3e41(d_69da_dfba[9][p]);
    }
    if (d_3668_d9f8[p] == 3000) {
        d_69da_dfba = f_2162_1634(d_69da_dff6, 0);
        d_3668_d9f8[p] = f_b8da_3ebf(d_69da_dfba[9][p]);
    }
    d_69da_deb9 = 1;
    d_69da_debd = 1;
    switch (d_3668_0000[17][p]) {
    case 0:
        d_69da_dc7c = f_2162_0da1(3) + 1;
        d_69da_dc7e = f_2162_0da1(5) + 1;
        d_69da_dc80 = f_2162_0da1(20) + 1;
        d_69da_deb9 = 0.7;
        break;
    case 1:
        d_69da_dc7c = f_2162_0da1(4) + 3;
        d_69da_dc7e = f_2162_0da1(8) + 3;
        d_69da_dc80 = f_2162_0da1(5) + 16;
        break;
    case 2:
        d_69da_dc7c = f_2162_0da1(5) + 1;
        d_69da_dc7e = f_2162_0da1(8) + 5;
        d_69da_dc80 = f_2162_0da1(10) + 3;
        d_69da_deb9 = 2.0;
        d_69da_debd = 0.5;
        break;
    case 3:
        d_69da_dc7c = f_2162_0da1(6) + 3;
        d_69da_dc7e = f_2162_0da1(8) + 8;
        d_69da_dc80 = f_2162_0da1(11) + 5;
        d_69da_deb9 = 0.5;
        d_69da_debd = 2.0;
        break;
    case 4:
        d_69da_dc7c = f_2162_0da1(6) + 3;
        d_69da_dc7e = f_2162_0da1(7) + 4;
        d_69da_dc80 = f_2162_0da1(12) + 1;
        d_69da_debd = 0.75;
        d_69da_deb9 = 1.25;
        break;
    case 5:
        d_69da_dc7c = f_2162_0da1(8) + 3;
        d_69da_dc7e = f_2162_0da1(6) + 15;
        d_69da_dc80 = f_2162_0da1(5) + 16;
        break;
    case 6:
        d_69da_dc7c = f_2162_0da1(4) + 5;
        d_69da_dc7e = f_2162_0da1(8) + 8;
        d_69da_dc80 = f_2162_0da1(8) + 1;
        break;
    case 7:
        d_69da_dc7c = f_2162_0da1(3) + 8;
        d_69da_dc7e = f_2162_0da1(9) + 12;
        d_69da_dc80 = f_2162_0da1(11) + 5;
        d_69da_deb9 = 1.5;
        break;
    case 8:
        d_69da_dc7c = f_2162_0da1(8) + 2;
        d_69da_dc7e = f_2162_0da1(11) + 10;
        d_69da_dc80 = f_2162_0da1(11) + 10;
        d_69da_debd = 1.5;
        break;
    case 9:
        d_69da_dc7c = f_2162_0da1(6) + 1;
        d_69da_dc7e = f_2162_0da1(7) + 6;
        d_69da_dc80 = f_2162_0da1(3) + 1;
        d_69da_dec1 = 0.75;
        break;
    }
    if (!fromfile) {
        d_28da_2a78[6][p] = f_2162_13ba(d_28da_2a78[6][p] * d_69da_debd, 20);
        d_28da_2a78[7][p] = f_2162_13ba(d_28da_2a78[7][p] * d_69da_deb9, 20);
    }
    if (d_28da_2a78[8][p] == 255)
        d_28da_2a78[8][p] = d_69da_dc7c;
    if (d_28da_2a78[12][p] == 255)
        d_28da_2a78[12][p] = d_69da_dc7e;
    if (d_28da_2a78[14][p] == 255)
        d_28da_2a78[14][p] = d_69da_dc80;
    if (d_28da_2a78[22][p] == 255)
        d_28da_2a78[22][p] = a[6] && f_2162_0da1(4) > 0 ? f_2162_0da1(11) + 10 : f_2162_0da1(20) + 1;
    d_4512_bdc8[p].f0 = a[0] ? 1 : 0;
    d_4512_bdc8[p].f1 = a[1] ? 1 : 0;
    d_4512_bdc8[p].f2 = a[2] ? 1 : 0;
    d_4512_bdc8[p].f3 = a[3] ? 1 : 0;
    d_4512_bdc8[p].f4 = a[4] ? 1 : 0;
    d_4512_bdc8[p].f5 = a[5] ? 1 : 0;
    d_4512_bdc8[p].f6 = a[6] ? 1 : 0;
    return 0;
}

char f_b085_24ed(int16_t a, char b)
{
    if (a == 0) {
        d_69da_dacc = 1;
        d_69da_dace = 2;
    } else if (a == 1) {
        d_69da_dacc = 0;
        d_69da_dace = 2;
    } else {
        d_69da_dacc = 0;
        d_69da_dace = 1;
    }
    switch (f_2162_0da1(20) + 1) {
    case 1:
    case 2:
    case 3:
    case 4:
        d_69da_da14 = d_69da_dacc;
        break;
    case 5:
    case 6:
    case 7:
    case 8:
        d_69da_da14 = d_69da_dace;
        break;
    default:
        d_69da_da14 = a;
    }
    return d_69da_da14 = f_2162_13ba(d_69da_da14 * 7 + (int16_t)f_2162_0da1(7)
                                     + (b ? (int16_t)f_2162_0da1(5) : 0) + 1, 20);
}

void f_b085_25df(int16_t p, unsigned char a, char kind)
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
    uint16_t v;
    float f;
    unsigned char tbl[12] = {80, 100, 100, 110, 125, 130, 145, 160, 165, 170, 170, 170};
    port_rows *career = NULL;

    if (d_28da_2a78[0][p] == 0xff) {
        ed = f_1a70_6d23(p) ? (unsigned char)f_1a70_5e5a(p) : f_1a70_2bff(a);
        do {
            done = 1;
            v = tbl[ed - 6] + f_2162_134e(f_2162_0da1(25) - f_2162_0da1(25), f_2162_0da1(25) - f_2162_0da1(25));
            if (f_2162_0da1(6) == 0)
                v = v * 0.65;
            else if (f_2162_0da1(50) == 0)
                v += 20;
            if (d_28da_2a78[17][p] < 22) {
                f = 1 - (22 - d_28da_2a78[17][p]) / 15;
                v = v * f;
            }
            if (v > 190)
                v = 190;
            d_28da_2a78[0][p] = v;
        } while (done == 0);
    }
    if (d_28da_2a78[9][p] == 0xff) {
        n = 0;
        do {
            done = 1;
            d_28da_2a78[9][p] = f_2162_0da1(126) + 75;
            if (d_28da_2a78[9][p] < d_28da_2a78[0][p])
                done = 0;
            else if (abs(28 - d_28da_2a78[17][p]) < 3 && d_28da_2a78[9][p] - d_28da_2a78[0][p] > n * 2 + 20)
                done = 0;
            n++;
        } while (done == 0);
    }
    d_3668_0000[18][p] = d_28da_2a78[0][p] + f_2162_0da1(200 - d_28da_2a78[0][p]);
    memset(d_536d_703b, 0, 0x98);
    d_3668_0000[20][p] = 0;
    d_69da_dc36 = 0;
    if (!c23) {
        r = f_2162_134e(d_28da_2a78[0][p] / 2 + f_2162_0da1(20) - f_2162_0da1(20), 20);
        week = c4 ? 0 : 95 - (d_28da_2a78[17][p] - 16);
        team = c4 ? 0 : f_b085_2cc3(p, r, -1);
        if (c4)                 /* port: his seasons in the database, which LEAGUE.DAT had next */
            career = port_db_careers(db_player.id);
        do {
            if (week < 95) {
                last = week;
                if (c4) {
                    /* port: the player's careers rows; the end of the list was a season of 255 */
                    week = port_db_next_career(career, &db_career) ? db_career.season : 255;
                    if (week < 255) {
                        team = db_career.club;
                        goals = db_career.apps;
                        ed = goals == 255 ? 50 : goals;
                        perf = db_career.goals;
                        f_b085_2db0(p, week, team, r, goals, perf, 255, ed);
                    } else
                        week = 95;
                } else {
                    ed = f_1a70_6d23(p) ? (unsigned char)f_1a70_5e5a(p) : f_1a70_2bff(team);
                    if (abs(ed - r / 10) > 3 && f_2162_0da1(5) == 0 || f_2162_0da1(10) == 0) {
                        ec = f_2162_0da1(40) + 1;
                        f_b085_2db0(p, week, team, r, -1, -1, 255, ec / 40.0 * 50.0);
                        team = f_b085_2cc3(p, r, team);
                        f_b085_2db0(p, week, team, r, -1, -1, 255, (40 - ec) / 40.0 * 50.0);
                    } else
                        f_b085_2db0(p, week, team, r, -1, -1, 255, 50);
                    week++;
                }
                if (week > last && week < 95)
                    r = (d_28da_2a78[17][p] - (95 - week) >= 30 ? r * 2 + 100 : r * 2 + d_28da_2a78[9][p]) / 3;
            }
        } while (week < 95);
        port_db_done(career);
    }
    if (!f_1a70_6d23(p))
        d_28da_2a78[18][p] = a;
    if (!c4 && !c23)
        f_b085_35be(p, d_28da_2a78[18][p]);
    if (d_69da_0090 == 0) {
        f_2162_19f6(2);
        fp = fopen(d_536d_a49d, "rb+");
        fseek(fp, (int32_t)p * 133, 0);
        fwrite(d_536d_703b, 1, 133, fp);
        fclose(fp);
    } else {
        fseek(d_69da_0090, (int32_t)p * 133, 0);
        fwrite(d_536d_703b, 1, 133, d_69da_0090);
    }
    if (d_69da_dc36 > 0) {
        d_3668_0000[5][p] = d_69da_dc36;
        d_3668_0000[6][p] = d_69da_dba6;
        d_69da_dfba = f_2162_1634(d_69da_dff6, 1);
        d_69da_dfba[6][p] = d_69da_dc9e;
        d_69da_dfba[7][p] = d_69da_dc96;
        d_69da_dfba[8][p] = d_69da_dc98;
        d_69da_dfa6 = f_2162_1634(d_69da_dfec, 1);
        d_69da_dfa6[1][p] = d_69da_dc90;
    }
}
}

unsigned char f_b085_2cc3(int16_t p, unsigned char r, unsigned char x)
{
    char done;
    unsigned char v;
    unsigned char i;
    unsigned char pos;

    i = 0;
    d_69da_dfba = f_2162_1634(d_69da_dff6, 0);
    pos = d_69da_dfba[9][p];
    if (f_1a70_6d23(p) == 0 && (pos == 0 || pos == 9 || pos == 10 || pos == 32)) {
        do {
            done = 1;
            v = f_2162_0da1(80);
            if (abs((int16_t)(f_1a70_2bff(v) - r / 10)) > i / 5 + 2 || v == x)
                done = 0;
            i++;
        } while (done == 0);
    } else {
        d_69da_dfba = f_2162_1634(d_69da_dff6, 0);
        v = d_69da_dfba[9][p] - 116;
    }
    return v;
}

void f_b085_2db0(int16_t p, unsigned char week, int16_t team, unsigned char r, unsigned char apps,
                 unsigned char goals, int16_t z, unsigned char perf)
{
    char *s;
    unsigned char q;

    if (team < 80)
        q = f_1a70_2bff(team);
    else if (team < 140)
        q = f_1a70_2bff(team + 320);
    else
        q = 14;
    if (week == 93)
        d_69da_db86 = f_2162_13ba(d_28da_2a78[0][p] + f_2162_0da1(15) - f_2162_0da1(15), d_28da_2a78[9][p]);
    else
        d_69da_db86 = f_2162_134e(f_2162_13ba(r + f_2162_0da1(25) - f_2162_0da1(25), d_28da_2a78[9][p]), 10);
    if (apps == 255) {
        float f;
        unsigned char a;
        unsigned char b;
        unsigned char c;

        f = (d_69da_db86 / 10.0 - q) * 16.0 + 70.0;
        if (f > 40.0)
            f = 40.0;
        else if (f < 0)
            f = 0;
        f = f / 40.0;
        d_69da_dc36 = perf * f;
        a = f_2162_0da1(d_69da_dc36);
        b = f_2162_0da1(d_69da_dc36);
        c = f_2162_0da1(d_69da_dc36);
        if (a > b && a > c)
            d_69da_dc36 = a;
        else if (b > a && b > c)
            d_69da_dc36 = b;
        else
            d_69da_dc36 = c;
    } else
        d_69da_dc36 = apps;
    d_69da_dba6 = 0;
    d_69da_dc9e = 0;
    d_69da_dc90 = 0;
    if (d_69da_dc36 > 0) {
        d_69da_dec5 = f_2162_1324(f_2162_1390(d_69da_db86 / 40.0 + 3.0, 8.0), 3.0);
        d_69da_dc90 = f_2162_1390(f_2162_1324((f_2162_10cf() - f_2162_10cf()) *
                                              (2.0 - d_69da_dc36 * 0.03) + d_69da_dec5, 1.0),
                                  10.0) * d_69da_dc36 + 0.5;
        d_69da_dec9 = (float)d_69da_dc90 / d_69da_dc36;
        d_69da_dc96 = d_69da_dec9;
        d_69da_dc98 = d_69da_dc96 + (d_69da_dc96 < d_69da_dec9);
        if (d_69da_dc36 > 2) {
            d_69da_dc96 = f_2162_134e(d_69da_dc96 - f_2162_0da1(2), 1);
            d_69da_dc98 = f_2162_13ba(d_69da_dc98 + f_2162_0da1(2), 10);
        }
        d_69da_dc9e = (float)d_69da_dc36 / perf * 50.0 *
                      (f_2162_134e(f_2162_0da1(d_28da_2a78[11][p]), f_2162_0da1(d_28da_2a78[11][p])) + 1) / 20.0;
        d_69da_dc9e = d_69da_dc9e / 5 * 5;
        if (d_4512_bdc8[p].f0 == 0 && goals == 255) {
            if (d_4512_bdc8[p].f3)
                d_69da_dca0 = f_2162_13ba((d_4512_bdc8[p].f2 ? f_2162_0da1(2) : 0) +
                                          (d_4512_bdc8[p].f1 ? f_2162_0da1(2) : 0) * 2 + 1, 3);
            else if (d_4512_bdc8[p].f2)
                d_69da_dca0 = (d_4512_bdc8[p].f1 ? f_2162_0da1(2) : 0) + 2;
            else if (d_4512_bdc8[p].f1)
                d_69da_dca0 = 3;
            d_69da_decd = (d_28da_2a78[7][p] * 0.03 + 0.07) / d_69da_dca0 - f_2162_10cf() / 5.0 +
                          f_2162_10cf() / 5.0;
            d_69da_dba6 = f_2162_134e(0, f_2162_0da1(3) - f_2162_0da1(3) + d_69da_dc36 * d_69da_decd + 0.5);
            if (d_69da_dba6 < 0 || d_69da_dba6 > 50)
                d_69da_dba6 = d_69da_dba6;
        } else if (goals != 255)
            d_69da_dba6 = goals;
        else
            d_69da_dba6 = 0;
    }
    d_69da_dc9a = d_3668_0000[20][p];
    if (d_69da_dc9a > 21)
        d_69da_dca2 = d_69da_dc9a - 22;
    else
        d_69da_dca2 = d_69da_dc9a;
    s = d_536d_703c[d_69da_dca2];
    *s++ = week;
    if (team < 140) {
        for (d_69da_d9d6 = 0; d_69da_d9d6 <= 139; d_69da_d9d6++) {
            if (d_4512_7f74[d_69da_d9d6] == team) {
                *s++ = d_69da_d9d6;
                d_69da_d9d6 = 139;
            }
        }
    } else
        *s++ = team;
    *s++ = d_69da_dc36;
    *s++ = d_69da_dba6;
    *s++ = d_69da_dc90 >> 8;
    *s = d_69da_dc90 & 0xff;
    d_3668_0000[20][p] = d_69da_dc9a + 1;
}

void f_b085_33dc(int16_t player)
{
    char *s;
    unsigned char t;
    int16_t n;

    fseek(d_69da_0094, (int32_t)player * 133, 0);
    fread(d_536d_703b, 1, 133, d_69da_0094);
    d_69da_dc9a = d_3668_0000[20][player];
    if (d_69da_dc9a > 0 || d_3668_0000[12][player] > 0) {
        t = 255;
        if (d_28da_2a78[18][player] < 140) {
            for (d_69da_d9d6 = 0; d_69da_d9d6 <= 139; d_69da_d9d6++) {
                if (d_4512_7f74[d_69da_d9d6] == d_28da_2a78[18][player]) {
                    t = d_69da_d9d6;
                    d_69da_d9d6 = 139;
                }
            }
        } else
            t = d_28da_ad40[player];
        if (t < 255) {
            if (d_69da_dc9a > 21)
                d_69da_dca2 = d_69da_dc9a - 22;
            else
                d_69da_dca2 = d_69da_dc9a;
            s = d_536d_703c[d_69da_dca2];
            *s++ = d_69da_d99a + 93;
            *s++ = t;
            *s++ = d_3668_0000[12][player];
            *s++ = d_3668_0000[13][player];
            d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
            n = d_69da_dfa6[2][player];
            *s++ = n >> 8;
            *s = n;
            d_3668_0000[20][player] = d_69da_dc9a + 1;
            fseek(d_69da_0094, (int32_t)player * 133, 0);
            fwrite(d_536d_703b, 1, 133, d_69da_0094);
        }
    }
}

#pragma option -O-
void f_b085_35be(int16_t p, unsigned char team)
{
    unsigned char cur;
    unsigned char old;
    unsigned char i;
    unsigned char k;
    unsigned char n;

    d_3668_0000[10][p] = 255;
    if (d_3668_0000[20][p] > 0) {
        n = d_3668_0000[20][p];
        old = d_536d_703c[n > 22 ? n - 23 : n - 1][1];
        do {
            cur = d_536d_703c[n > 22 ? n - 23 : n - 1][1];
            if (cur == old) {
                for (i = 0; i <= 139; i = i + 1)
                    if (d_4512_7f74[i] == team)
                        k = i;
                d_536d_703c[n > 22 ? n - 23 : n - 1][1] = k;
            } else if (cur != team) {
                d_3668_0000[10][p] = cur;
                n = 1;
            }
            n--;
        } while (n > 0);
    }
}

/* a new youth player in a team's slot */
void f_b085_36c7(unsigned char team, unsigned char i)
{
    unsigned char r;

    d_69da_dfbe = f_2162_1634(d_69da_dff8, 1);
    d_69da_dfbe[team][0][i] = f_b8da_3e41(0);
    d_69da_dfbe[team][1][i] = f_b8da_3ebf(0);
    if (i <= 1)
        d_4512_a4c8[team][0][i] = 1;
    else {
        r = f_2162_0da1(14) + 1;
        if (r <= 5)
            d_4512_a4c8[team][0][i] = 2;
        else if (r >= 6 && r <= 10)
            d_4512_a4c8[team][0][i] = 3;
        else if (r >= 11)
            d_4512_a4c8[team][0][i] = 4;
    }
    d_4512_a4c8[team][1][i] = f_2162_0da1(4) + 16;
    d_4512_a4c8[team][2][i] = f_2162_0da1(60) + 20;
    d_4512_a4f8[team][i] = 0;
    d_4512_a508[team][i] = 0;
}

/* the youth players get a year older */
void f_b085_3836(void)
{
    unsigned char team, i;

    for (team = 0; team <= 79; team = team + 1)
        for (i = 0; i <= 15; i = i + 1) {
            d_4512_a4c8[team][1][i]++;
            if (d_4512_a4c8[team][1][i] > 23)
                f_b085_36c7(team, i);
        }
}

/* info on a youth player */
void f_b085_38a5(unsigned char team, unsigned char i)
{
    char buf[80], line[80];

    f_2162_19ff();
    f_2162_0897(16);
    f_2162_08b5(0x3d, 0x51, 0x10b, 0x7b);
    f_2162_0897(19);
    f_2162_08b5(0x39, 0x4d, 0x107, 0x77);
    d_69da_dfbe = f_2162_1634(d_69da_dff8, 0);
    sprintf(buf, "Info on %s %s", FAR_PTR(d_62e5_0000[d_69da_dfbe[team][0][i]]),
            FAR_PTR(d_62e5_11f6[d_69da_dfbe[team][1][i]]));
    sprintf(line, "%*s", 17 - strlen(buf) / 2 + strlen(buf), buf);
    f_1a70_3554(7.5, 10.625, 0, 1, 0xca, line);
    f_1a70_3554(7.5, 11.625, 6, 15, 100, " Age");
    sprintf(buf, " %d Yrs", d_4512_a4c8[team][1][i]);
    f_1a70_3554(20.25, 11.625, 6, 15, 100, buf);
    f_1a70_3554(7.5, 12.625, 6, 15, 100, " Position");
    if (d_4512_a4c8[team][0][i] == 1)
        strcpy(buf, " Goalkeeper");
    else if (d_4512_a4c8[team][0][i] == 2)
        strcpy(buf, " Defence");
    else if (d_4512_a4c8[team][0][i] == 3)
        strcpy(buf, " Midfield");
    else if (d_4512_a4c8[team][0][i] == 4)
        strcpy(buf, " Attack");
    f_1a70_3554(20.25, 12.625, 6, 15, 100, buf);
    f_1a70_3554(7.5, 13.625, 6, 15, 100, " Rating");
    if (d_4512_a4c8[team][2][i] >= 80)
        strcpy(buf, " Good");
    else if (d_4512_a4c8[team][2][i] >= 60)
        strcpy(buf, " Promising");
    else
        strcpy(buf, " Fair");
    f_1a70_3554(20.25, 13.625, 6, 15, 100, buf);
    f_1a70_3554(7.5, 14.625, 6, 15, 100, " Status");
    if (d_4512_a4f8[team][i] == 0)
        strcpy(buf, " Available");
    else
        sprintf(buf, " Out %d week%s", d_4512_a4f8[team][i],
                d_4512_a4f8[team][i] > 1 ? "s" : "");
    f_1a70_3554(20.25, 14.625, 6, 15, 100, buf);
    f_2162_0397(0);
    f_2162_0dfb(20);
    while (f_2162_0c2b() == 0)
        ;
    f_2162_0397(1);
    f_2162_1a08();
}

/* the best youth player of a team (keepers only if gk == 1) */
unsigned char f_b085_3c6d(unsigned char team, unsigned char gk)
{
    unsigned char i, best, bestv;

    best = 0;
    bestv = 0;
    for (i = 0; i <= 15; i = i + 1) {
        if (gk == 1 && d_4512_a4c8[team][0][i] > 1)
            continue;
        if (d_4512_a4c8[team][2][i] + f_2162_0da1(10) - f_2162_0da1(10) > bestv) {
            bestv = d_4512_a4c8[team][2][i];
            best = i;
        }
    }
    return best;
}

/* fine a club for fielding reserve players */
void f_b085_3d39(unsigned char team)
{
    unsigned char n1, n2, i;
    int32_t fine;
    char buf[320];

    if (d_536d_4c3d[0][team] != 0 && d_69da_d996 > 10) {
        n1 = 0;
        n2 = 0;
        for (i = 0; i <= 10; i = i + 1)
            if (f_1a70_5b94(d_4512_549a[team][i]))
                n1++;
        for (i = 0; d_4512_023e[team] - 1 >= i; i = i + 1)
            if (d_28da_2a78[20][d_28da_10f0[team][i]] == 0)
                n2++;
        if (n1 >= f_2162_134e(15 - n2, 0) && n1 >= 5) {
            switch (team / 20) {
            case 0:
                fine = f_2162_0da1(6) * 2500 + 20000;
                break;
            case 1:
                fine = f_2162_0da1(6) * 1000 + 10000;
                break;
            case 2:
            case 3:
                fine = f_2162_0da1(6) * 500 + 2500;
                break;
            }
            sprintf(buf, "%s have been fined %d for unnecessarily fielding reserve players.",
                    (char *)NEAR_PTR(d_69da_b1fc[team]), fine);
            f_1a70_598c(team, "FA Disciplinary action", buf);
            d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
            d_69da_dfae[12][team] = d_69da_dfae[12][team] + fine;
            f_8c32_150f(team, -(f_2162_0da1(5) + 5));
        }
    }
}

/* print the week's news */
void f_b085_3f64(void)
{
    unsigned char cnt;
    uint16_t i;
    int16_t last;
    char buf[80];

    if (d_28d8_0010 > 0 && d_69da_ddb6 != 0) {
        f_b085_42bd();
        f_b085_42cf("______________________________________________________________________________\n");
        f_b085_42fa(2);
        sprintf(buf, "                                Week %d/Season %d",
                f_1a70_68a4(d_69da_d996), d_69da_d99a);
        f_b085_42cf(buf);
        f_b085_42fa(2);
        for (i = 0; i <= d_28d8_0010 - 2; i++) {
            uint16_t j;
            int16_t d;

            for (j = i + 1; j <= d_28d8_0010 - 1; j++) {
                d = d_4512_dad8[i].b - d_4512_dad8[j].b;
                if (d >= 8 || (abs(d) < 8 && d_4512_dad8[i].a > d_4512_dad8[j].a)) {
                    int16_t t;

                    t = d_4512_dad8[i].a;
                    d_4512_dad8[i].a = d_4512_dad8[j].a;
                    d_4512_dad8[j].a = t;
                    t = d_4512_dad8[i].b;
                    d_4512_dad8[i].b = d_4512_dad8[j].b;
                    d_4512_dad8[j].b = t;
                    t = d_4512_dad8[i].start;
                    d_4512_dad8[i].start = d_4512_dad8[j].start;
                    d_4512_dad8[j].start = t;
                    t = d_4512_dad8[i].len;
                    d_4512_dad8[i].len = d_4512_dad8[j].len;
                    d_4512_dad8[j].len = t;
                }
            }
        }
        i = 0;
        last = -1;
        while (i <= d_28d8_0010 - 1) {
            if (d_4512_dad8[i].b - last >= 8 || last == -1) {
                f_b085_42fa(1);
                f_b085_42cf("   ");
                cnt = 0;
                last = d_4512_dad8[i].b;
            }
            if (cnt == d_4512_dad8[i].a / 4) {
                int16_t start;
                int16_t len;
                int16_t t;

                start = d_4512_dad8[i].start;
                len = d_4512_dad8[i].len;
                d_69da_dfc2 = f_2162_1634(d_69da_dffa, 0);
                for (t = 0; t <= len - 1; t++)
                    buf[t] = d_69da_dfc2[start + t];
                buf[len] = 0;
                f_b085_42cf(buf);
                cnt += strlen(buf);
                i++;
            } else {
                f_b085_42cf(" ");
                cnt++;
            }
        }
        f_b085_42fa(3);
        f_b085_42cf("______________________________________________________________________________\n");
        f_b085_42fa(2);
        f_b085_42c6();
    }
}

void f_b085_42bd(void)
{
}

void f_b085_42c6(void)
{
}

/* print a string */
void f_b085_42cf(char *s)
{
    while (*s != 0)
        _bios_printer(0, 0, *s++);
}

/* print n new lines */
void f_b085_42fa(unsigned char n)
{
    unsigned char i;

    for (i = 1; i <= n; i = i + 1)
        f_b085_42cf("\r\n");
}

void f_b085_4327(uint16_t team)
{
    unsigned char i, k;
    int16_t p;

    if ((f_1a70_2490(d_69da_d996) || f_1a70_24c5(d_69da_d996)) && team < 80) {
        k = f_1a70_2490(d_69da_d996) ? 0 : 1;
        for (i = 0; i <= d_4512_023e[team] - 1; i = i + 1) {
            p = d_28da_10f0[team][i];
            d_69da_dfba = f_2162_1634(d_69da_dff6, 0);
            if ((d_69da_dfba[k][p] != 255 && d_69da_dfba[k][p] != d_28da_2a78[18][p])
                || d_3668_32dc[p] < 255)
                f_a330_12ed(p, 50, 1);
        }
    }
}

void f_b085_442e(uint16_t team)
{
    unsigned char i;
    int16_t p;

    if ((f_1a70_2490(d_69da_d996) || f_1a70_24c5(d_69da_d996)) && team < 80)
        for (i = 0; i <= d_4512_023e[team] - 1; i = i + 1) {
            p = d_28da_10f0[team][i];
            if (d_28da_2a78[19][p] == 50)
                f_a330_15f1(p);
        }
}

void f_b085_44b7(void)
{
    uint16_t i;

    for (i = 0; i <= d_69da_d98e - 1; i++) {
        d_69da_dfba = f_2162_1634(d_69da_dff6, 1);
        d_69da_dfba[0][i] = 255;
        d_69da_dfba[1][i] = 255;
    }
}

void f_b085_4503(void)
{
    unsigned char i;

    if (d_69da_da4a > 0)
        for (i = 0; i <= d_69da_da4a - 1; i = i + 1)
            if (d_4512_2616[i] < 255) {
                f_b085_4566(i, 0, 0, 0, 0, 0);
                f_b085_4bb3(i);
            }
}

void f_b085_4566(unsigned char team, char mode, int16_t player, unsigned char club, int32_t fee, unsigned char x)
{
    char buf[40];

    if (mode == 0) {
        unsigned char t;
        unsigned char c;

        t = d_4512_2616[team];
        strcpy(buf, NEAR_PTR(d_69da_b1fc[t]));
        buf[14] = 0;
        d_536d_1c70[team].season = d_69da_d99a + 93;
        strcpy(d_536d_1c70[team].name, buf);
        for (d_536d_1c70[team].pos = 0; d_4512_6324[d_536d_1c70[team].pos] != t; d_536d_1c70[team].pos++)
            ;
        d_536d_1c70[team].played = d_69da_d9ba - 1;
        d_536d_1c70[team].won = d_4512_03d8[t];
        d_536d_1c70[team].lost = d_4512_042a[t];
        d_536d_1c70[team].drawn = d_536d_1c70[team].played - d_536d_1c70[team].won - d_536d_1c70[team].lost;
        d_536d_1c70[team].gf = d_4512_047c[t];
        d_536d_1c70[team].ga = d_4512_04ce[t];
        d_536d_1c70[team].pts = f_a83a_0000(d_536d_1c70[team].pos);
        d_536d_1c70[team].conf = d_4512_01ec[t];
        strcpy(d_536d_1c70[team].manager, f_9c01_12e0(team + 646, 0));
        d_536d_1c70[team].x25 = d_4512_138a[t];
        d_536d_1c70[team].x26 = d_4512_2250[t];
        d_536d_1c70[team].x2a = d_4512_8b54[t];
        d_536d_1c70[team].x2b = d_4512_8be0[t];
        c = 0;
        if (d_4512_8c6c[t] > 0)
            c = 8;
        else if (d_4512_8cf8[t] > 0)
            c = 9;
        else if (d_4512_8d84[t] > 0)
            c = 10;
        else if (d_4512_8e10[t] > 0)
            c = 11;
        if (c > 0) {
            d_536d_1c70[team].cup = c - 5;
            d_536d_1c70[team].cupround = d_4512_880c[c][t];
        } else
            d_536d_1c70[team].cup = 0;
    } else {
        if (club < 80)
            strcpy(buf, NEAR_PTR(d_69da_b1fc[club]));
        else
            sprintf(buf, "<%s>", FAR_PTR(d_5dbf_0000[club - 140]));
        buf[14] = 0;
        if (mode == 1 && d_536d_1c70[team].n[0] < 13) {
            d_536d_1c70[team].t[0].a[d_536d_1c70[team].n[0]] = d_3668_bce8[player];
            d_536d_1c70[team].t[0].b[d_536d_1c70[team].n[0]] = d_3668_d9f8[player];
            strcpy(d_536d_1c70[team].t[0].club[d_536d_1c70[team].n[0]], buf);
            d_536d_1c70[team].t[0].fee[d_536d_1c70[team].n[0]] = fee;
            d_536d_1c70[team].t[0].c[d_536d_1c70[team].n[0]] = x;
            d_536d_1c70[team].n[0]++;
        } else if (mode == 2 && d_536d_1c70[team].n[1] < 13) {
            d_536d_1c70[team].t[1].a[d_536d_1c70[team].n[1]] = d_3668_bce8[player];
            d_536d_1c70[team].t[1].b[d_536d_1c70[team].n[1]] = d_3668_d9f8[player];
            strcpy(d_536d_1c70[team].t[1].club[d_536d_1c70[team].n[1]], buf);
            d_536d_1c70[team].t[1].fee[d_536d_1c70[team].n[1]] = fee;
            d_536d_1c70[team].t[1].c[d_536d_1c70[team].n[1]] = x;
            d_536d_1c70[team].n[1]++;
        }
    }
}

void f_b085_4b1f(unsigned char team, unsigned char idx)
{
    FILE *fp;
    char buf[40];

    f_2162_19f6(2);
    sprintf(buf, "mhstP%d%s", team, d_536d_a4ed);
    fp = fopen(buf, "rb+");
    fseek(fp, (int32_t)idx * 0x2fe, 0);
    fread(&d_536d_2868, 1, 0x2fe, fp);
    fclose(fp);
}

void f_b085_4bb3(unsigned char team)
{
    FILE *fp;
    unsigned char idx;
    char buf[40];

    idx = d_536d_4939[team] % 25;
    f_2162_19f6(2);
    sprintf(buf, "mhstP%d%s", team, d_536d_a4ed);
    if (f_2162_0dd7(buf) == 0)
        fp = fopen(buf, "wb");
    else {
        fp = fopen(buf, "rb+");
        fseek(fp, (int32_t)idx * 0x2fe, 0);
    }
    fwrite(&d_536d_1c70[team], 1, 0x2fe, fp);
    fclose(fp);
    d_536d_4939[team]++;
}

void f_b085_4ca8(void)
{
    unsigned char t;
    unsigned char key;
    unsigned char idx;
    unsigned char page;
    char buf[320];

    f_a83a_1344(-1);
    if (d_69da_dd76 > -1) {
        t = d_69da_dd76 + 122;
        if (d_536d_4939[t] > 0) {
            idx = (d_536d_4939[t] - 1) % 25;
            page = 0;
            f_b085_4b1f(t, idx);
            do {
                f_1a70_5e32();
                f_1a70_4a41(f_1a70_4793(t + 646, 0));
                sprintf(buf, " Season %d/%s ", d_536d_2868.season - 93, d_536d_2868.name);
                f_1a70_3d0c(1.25, 3.5, 0, 1, 0, buf);
                if (page == 0) {
                    f_b085_4f87();
                    f_b085_531d();
                    f_b085_55b2();
                    f_1a70_5e46();
                    f_1a70_4ede(2, 29.0, 3.5, 1, 12, 37, "Bght");
                    f_1a70_4ede(2, 34.25, 3.5, 1, 12, 37, "Sold");
                } else if (page == 1) {
                    f_b085_5806();
                    f_1a70_5e46();
                    f_1a70_4ede(2, 29.0, 3.5, 0, 6, 37, "Misc");
                    f_1a70_4ede(2, 34.25, 3.5, 0, 6, 37, "Sold");
                } else if (page == 2) {
                    f_b085_5a25();
                    f_1a70_5e46();
                    f_1a70_4ede(2, 29.0, 3.5, 0, 6, 37, "Misc");
                    f_1a70_4ede(2, 34.25, 3.5, 0, 6, 37, "Bght");
                }
                f_1a70_4ede(2, 1.25, 22.5, 6, 2, 53, " - Rec");
                f_1a70_4ede(2, 32.25, 22.5, 6, 2, 53, " Rec +");
                f_1a70_4ede(2, 8.5, 22.5, 1, 4, 185, "          Done");
                if (idx == 0)
                    f_1a70_5641(3);
                if (d_536d_4939[t] - 1 == idx)
                    f_1a70_5641(4);
                do
                    key = f_1a70_53de(d_69da_d9dc);
                while (key <= 0);
                if (page == 0 && key == 1 || page == 2 && key == 2)
                    page = 1;
                else if (page == 0 && key == 2 || page == 1 && key == 2)
                    page = 2;
                else if (page == 1 && key == 1 || page == 2 && key == 1)
                    page = 0;
                else if (key == 3) {
                    idx = idx == 0 ? 24 : idx - 1;
                    f_b085_4b1f(t, idx);
                } else if (key == 4) {
                    idx = idx == 24 ? 0 : idx + 1;
                    f_b085_4b1f(t, idx);
                }
            } while (key != 5);
        } else
            f_1a70_0b80("No records to show");
    }
}

void f_b085_4f87(void)
{
    char buf[320];

    f_2162_0897(16);
    f_2162_08b5(12, 47, 316, 73);
    f_2162_0897(20);
    f_2162_08b5(8, 43, 312, 69);
    f_1a70_3554(1.375, 6.375, 0, 1, 300, " League Record");
    f_1a70_3554(1.375, 7.375, 0, 5, 31, " DIV");
    sprintf(buf, " %s", f_1a70_4983(d_536d_2868.pos / 20 + 1, 3));
    f_1a70_3554(1.375, 8.375, 1, 8, 31, buf);
    f_1a70_3554(5.5, 7.375, 0, 5, 31, " POS");
    sprintf(buf, " %s", f_1a70_48f5(d_536d_2868.pos % 20 + 1));
    f_1a70_3554(5.5, 8.375, 1, 8, 31, buf);
    f_1a70_3554(9.625, 7.375, 0, 5, 31, " PLD");
    sprintf(buf, "  %d", d_536d_2868.played);
    f_1a70_3554(9.625, 8.375, 1, 8, 31, buf);
    f_1a70_3554(13.75, 7.375, 0, 5, 32, " WON");
    sprintf(buf, "  %d", d_536d_2868.won);
    f_1a70_3554(13.75, 8.375, 1, 8, 32, buf);
    f_1a70_3554(18.0, 7.375, 0, 5, 32, " DRN");
    sprintf(buf, "  %d", d_536d_2868.drawn);
    f_1a70_3554(18.0, 8.375, 1, 8, 32, buf);
    f_1a70_3554(22.25, 7.375, 0, 5, 32, " LST");
    sprintf(buf, "  %d", d_536d_2868.lost);
    f_1a70_3554(22.25, 8.375, 1, 8, 32, buf);
    f_1a70_3554(26.5, 7.375, 0, 5, 32, " FOR");
    sprintf(buf, "  %d", d_536d_2868.gf);
    f_1a70_3554(26.5, 8.375, 1, 8, 32, buf);
    f_1a70_3554(30.75, 7.375, 0, 5, 32, " AGG");
    sprintf(buf, "  %d", d_536d_2868.ga);
    f_1a70_3554(30.75, 8.375, 1, 8, 32, buf);
    f_1a70_3554(35.0, 7.375, 0, 5, 31, " PTS");
    sprintf(buf, "  %d", d_536d_2868.pts);
    f_1a70_3554(35.0, 8.375, 1, 8, 31, buf);
}

/* menu choice */
void f_b085_531d(void)
{
    char buf[320];
    char buf2[320];

    f_2162_0897(16);
    f_2162_08b5(12, 0x51, 0x13c, 0x73);
    f_2162_0897(20);
    f_2162_08b5(8, 0x4d, 0x138, 0x6f);
    f_1a70_3554(1.375, 10.625, 0, 1, 300, " Cup Record");
    f_1a70_3554(1.375, 11.625, 1, 12, 0x95, " FA Cup");
    strcpy(buf, "");
    if (d_536d_2892 > 0) {
        strcpy(buf, f_9c01_6630(d_536d_2892));
        sprintf(buf, " %s", d_536d_7405);
    } else
        strcpy(buf, " Draw Not Made");
    f_1a70_3554(20.25, 11.625, 1, 12, 0x95, buf);
    f_1a70_3554(1.375, 12.625, 1, 12, 0x95, " League Cup");
    strcpy(buf, "");
    if (d_536d_2893 > 0) {
        strcpy(buf, f_9c01_6728(d_536d_2893));
        sprintf(buf, " %s", d_536d_7405);
    } else
        strcpy(buf, " Draw Not Made");
    f_1a70_3554(20.25, 12.625, 1, 12, 0x95, buf);
    strcpy(buf, "");
    strcpy(buf2, "");
    if (d_536d_2894 > 0) {
        strcpy(buf, f_9c01_6806(d_536d_2895, d_536d_2894));
        sprintf(buf, " %s", d_536d_7455);
        if (d_536d_2895 > 0)
            sprintf(buf2, " %s", d_536d_7405);
        else
            strcpy(buf2, " Draw Not Made");
    }
    f_1a70_3554(1.375, 13.625, 1, 12, 0x95, buf);
    f_1a70_3554(20.25, 13.625, 1, 12, 0x95, buf2);
}

void f_b085_55b2(void)
{
    uint32_t avg;
    char buf[320];

    f_2162_0897(16);
    f_2162_08b5(12, 0x7a, 0x13c, 0xac);
    f_2162_0897(31);
    f_2162_08b5(8, 0x76, 0x138, 0xa8);
    f_1a70_3554(1.375, 15.75, 0, 6, 300, " General Stats");
    f_1a70_3554(1.375, 16.75, 1, 3, 0x95, " Players Bought");
    sprintf(buf, " %d", d_536d_288b);
    f_1a70_3554(20.25, 16.75, 1, 3, 0x95, buf);
    f_1a70_3554(1.375, 17.75, 1, 3, 0x95, " Players Sold");
    sprintf(buf, " %d", d_536d_288c);
    f_1a70_3554(20.25, 17.75, 1, 3, 0x95, buf);
    f_1a70_3554(1.375, 18.75, 1, 3, 0x95, " Average Gate");
    strcpy(buf, "");
    if (d_536d_288d > 0) {
        avg = d_536d_288e / d_536d_288d;
        sprintf(buf, " %d", avg);
    }
    f_1a70_3554(20.25, 18.75, 1, 3, 0x95, buf);
    f_1a70_3554(1.375, 19.75, 1, 3, 0x95, " Board Confidence");
    sprintf(buf, " %d%%", d_536d_2880);   /* port: Borland printed a trailing %, glibc drops it */
    f_1a70_3554(20.25, 19.75, 1, 3, 0x95, buf);
    f_1a70_3554(1.375, 20.75, 1, 3, 0x95, " Manager Rating");
    sprintf(buf, " %s", d_536d_2881);
    f_1a70_3554(20.25, 20.75, 1, 3, 0x95, buf);
}

void f_b085_5806(void)
{
    unsigned char y;
    char name[50];
    char info[50];

    y = 0x3f;
    f_1a70_3554(1.125, 6.375, 1, 8, 0x130, "Players Bought/Loaned in");
    if (d_536d_288b > 0) {
        unsigned char i;

        for (i = 0; i <= d_536d_288b - 1; ++i) {
            sprintf(name, "%s %s", FAR_PTR(d_62e5_0000[d_536d_2896[i]]), FAR_PTR(d_62e5_11f6[d_536d_28b4[i]]));
            if (d_536d_29b3[i] == 0)
                sprintf(info, "%s Free Transfer", d_536d_28d2[i]);
            else if (d_536d_29b3[i] == 1)
                sprintf(info, "%s On Loan", d_536d_28d2[i]);
            else
                sprintf(info, "%s %d%s", d_536d_28d2[i], d_536d_29b3[i], d_536d_29ef[i] ? "T" : "");
            if (i % 2 == 0) {
                f_1a70_344b(0x11, y, 6, name);
                f_1a70_344b(0x11, y + 8, 2, info);
            } else {
                f_1a70_344b(0xa9, y, 6, name);
                f_1a70_344b(0xa9, y + 8, 2, info);
                y += 20;
            }
        }
    } else
        f_1a70_344b(0x11, y, 5, "No players");
}

void f_b085_5a25(void)
{
    unsigned char y;
    char name[50];
    char info[50];

    y = 0x3f;
    f_1a70_3554(1.125, 6.375, 1, 8, 0x130, "Players Sold/Loaned out");
    if (d_536d_288c > 0) {
        unsigned char i;

        for (i = 0; i <= d_536d_288c - 1; ++i) {
            sprintf(name, "%s %s", FAR_PTR(d_62e5_0000[d_536d_29fe[i]]), FAR_PTR(d_62e5_11f6[d_536d_2a1c[i]]));
            if (d_536d_2b1b[i] == 0)
                sprintf(info, "%s Free Transfer", d_536d_2a3a[i]);
            else if (d_536d_2b1b[i] == 1)
                sprintf(info, "%s On Loan", d_536d_2a3a[i]);
            else
                sprintf(info, "%s %d%s", d_536d_2a3a[i], d_536d_2b1b[i], d_536d_2b57[i] ? "T" : "");
            if (i % 2 == 0) {
                f_1a70_344b(0x11, y, 6, name);
                f_1a70_344b(0x11, y + 8, 2, info);
            } else {
                f_1a70_344b(0xa9, y, 6, name);
                f_1a70_344b(0xa9, y + 8, 2, info);
                y += 20;
            }
        }
    } else
        f_1a70_344b(0x11, y, 5, "No players");
}

void f_b085_5c44(void)
{
    unsigned char club;
    unsigned char a;
    unsigned char n;
    int16_t p;

    if (f_2162_0da1(20))
        return;
    club = f_2162_0da1(80);
    a = f_2162_0da1(3) + 4;
    n = f_2162_0da1(5) + 2;
    strcpy(d_536d_74f5, "");
    for (; n > 0; n--) {
        do
            p = d_28da_10f0[club][f_2162_0da1(d_4512_023e[club])];
        while (d_28da_2a78[20][p] > 0);
        f_a330_12ed(p, a, f_2162_13ba(f_2162_0da1(2) + 1, f_2162_0da1(2) + 1));
    }
}

void f_b085_5d39(void)
{
    unsigned char i;
    int32_t limit;
    int32_t amount;
    char title[320];
    char text[320];
    unsigned char c;

    for (i = 0; i <= 79; ++i) {
        if (d_4512_01ec[i] < 95)
            d_4512_14d2[i] = 0;
        if (d_4512_14d2[i] < 15)
            c = 50;
        else if (d_4512_14d2[i] >= 15 && d_4512_14d2[i] < 30)
            c = 35;
        else
            c = 20;
        if (d_4512_01ec[i] >= 95 && !f_2162_0da1(c) && !f_1a70_6783(d_69da_d996)) {
            switch (i / 20) {
            case 0:
                limit = 1500000;
                amount = (f_2162_0da1(4) + 2) * 100000;
                break;
            case 1:
                limit = 500000;
                amount = (f_2162_0da1(4) + 2) * 50000;
                break;
            case 2:
            case 3:
                limit = 250000;
                amount = (f_2162_0da1(4) + 2) * 25000;
                break;
            }
            if (d_4512_1e90[0][i] < limit && d_4512_023e[i] < 24) {
                f_8c32_10af(i, amount, 0);
                if (f_1a70_2bc7(i)) {
                    sprintf(title, "%s board message", (char *)NEAR_PTR(d_69da_b1fc[i]));
                    sprintf(text, "The board have made %d available for the signing of new players. Keep up the good work!", amount);
                    f_1a70_598c(d_69da_d9d8, title, text);
                }
            }
        }
        if (d_4512_01ec[i] >= 95 && d_4512_14d2[i] < 100)
            d_4512_14d2[i]++;
    }
}

char f_b085_5f91(unsigned char club, char *title)
{
    unsigned char i;
    char buf[320];

    f_1a70_4a41(title);
    f_1a70_3d0c(1.0, 4.0, 0, 2, 0, " Select Scout ");
    strcpy(buf, "*Exit|");
    for (i = 0; i <= 3; ++i) {
        if (i == 3)
            strcat(buf, "$");
        strcat(buf, f_1a70_4793(d_4512_1b70[i][club], -1));
        strcat(buf, "|");
    }
    f_1a70_2eaa(7, "", buf);
    f_1a70_3226(4);
    if (d_69da_d992 > 0)
        i = d_69da_d992 - 1;
    else
        i = 0xff;
    return i;
}

/* sends one of the team's scouts to watch a player */
void f_b085_6084(unsigned char team, int16_t player)
{
    unsigned char s, m;
    char buf[320];
    register unsigned char i;

    m = d_4512_1a30[0][team] - 646;
    s = f_b085_5f91(team, "Watch Player");
    if (s < 255) {
        unsigned char ok;

        ok = 1;
        if (d_4512_e438[m][s].player > 0) {
            if (d_4512_e438[m][s].player - 1 != player) {
                f_1a70_4a41("Watch Player");
                f_1a70_3d0c(1.25, 4.0, -(d_4512_00a4[team] / 16), d_4512_00a4[team] % 16, 0,
                            NEAR_PTR(d_69da_b1fc[team]));
                sprintf(buf, "%s is currently assigned", f_1a70_4793(d_4512_1b70[s][team], -1));
                f_1a70_0adb(7, buf);
                sprintf(buf, "to watch %s", f_1a70_4592(d_4512_e438[m][s].player - 1));
                f_1a70_0adb(9, buf);
                f_1a70_2eaa(12, "", "*Exit|Continue|");
                f_1a70_3226(1);
                if (d_69da_d992 == 0)
                    ok = 0;
            } else {
                sprintf(buf, "%s already|watched by %s", f_1a70_4739(player),
                        f_1a70_4793(d_4512_1b70[s][team], 0));
                f_1a70_0b80(buf);
                ok = 0;
            }
        }
        if (ok == 1) {
            sprintf(buf, "Ok - %s now|watched by %s", f_1a70_4739(player),
                    f_1a70_4793(d_4512_1b70[s][team], 0));
            f_1a70_0b80(buf);
            d_4512_e438[m][s].used = 0;
            d_4512_e438[m][s].player = player + 1;
            for (i = 0; i <= 5; i++)
                d_4512_e438[m][s].rating[i] = 0;
        }
    }
}

/* the scouts screen of human manager m */
void f_b085_6338(unsigned char m)
{
    unsigned char team, c, i, sel;
    char buf[320];
    register uint16_t p;

    team = d_4512_2616[m];
    sel = 0;
    do {
        f_1a70_4a41("Scouts");
        sprintf(buf, " %s ", (char *)NEAR_PTR(d_69da_b1fc[team]));
        f_1a70_3d0c(1.25, 4.0, -(d_4512_00a4[team] / 16), d_4512_00a4[team] % 16, 0, buf);
        f_1a70_5e46();
        for (c = 0; c <= 3; ++c)
            f_b085_69c6(c, 0);
        f_1a70_4ede(2, 1.25, 22.5, 1, 4, 0x12d, "                 Done");
        f_1a70_5e32();
        f_1a70_3554(1.125, 10.25, 1, 2, 0x62, " Scout");
        f_1a70_3554(13.625, 10.25, 1, 2, 0x36, " Rep");
        f_1a70_3554(20.625, 10.25, 1, 2, 0x62, " Watching");
        f_1a70_3554(33.125, 10.25, 1, 2, 0x30, " Report");
        for (i = 0; i <= 3; ++i) {
            sprintf(buf, " %s", f_1a70_4793(d_4512_1b70[i][team], -1));
            f_1a70_4ede(0, 1.125, i + 11.5, 1, i % 2 == 0 ? 12 : 4, 0x62, buf);
            sprintf(buf, " %s", f_9c01_12e0(d_4512_1b70[i][team], i + 2));
            f_1a70_3554(13.625, i + 11.5, 1, 14, 0x36, buf);
            p = d_4512_e438[m][i].player;
            if (p > 0)
                sprintf(buf, " %s", f_1a70_46c1(p - 1));
            else
                strcpy(buf, " -");
            f_1a70_3554(20.625, i + 11.5, 1, 3, 0x62, buf);
            if (p > 0)
                sprintf(buf, " %s", d_4512_e438[m][i].used ? "Yes" : "No");
            else
                strcpy(buf, " -");
            f_1a70_3554(33.125, i + 11.5, 1, 15, 0x30, buf);
        }
        f_1a70_525f(sel + 2, -1);
        do {
            d_69da_d992 = f_1a70_53de(0);
            if (d_69da_d992 == 0)
                f_b085_6aef();
            c = d_69da_d992;
            if (c >= 2 && c <= 5 && c - 2 != sel) {
                f_1a70_525f(sel + 2, 0);
                sel = c - 2;
                f_1a70_525f(sel + 2, -1);
            } else if (c == 6) {
                if (d_4512_e438[m][sel].player > 0) {
                    if (d_4512_e438[m][sel].used)
                        f_b085_6b59(m, sel);
                    else
                        f_1a70_0b80("No report to show");
                } else
                    c = 0;
            } else if (c == 7) {
                if (d_4512_e438[m][sel].player > 0) {
                    f_1a70_4a41(f_1a70_4793(d_4512_1b70[sel][team], 0));
                    f_1a70_3d0c(1.25, 4.0, -(d_4512_00a4[team] / 16), d_4512_00a4[team] % 16, 0,
                                NEAR_PTR(d_69da_b1fc[team]));
                    sprintf(buf, "Stop reporting on %s?", f_1a70_4739(d_4512_e438[m][sel].player - 1));
                    f_1a70_0adb(7, buf);
                    f_1a70_2eaa(10, "", "*Exit|Stop Reporting|");
                    f_1a70_3226(1);
                    if (d_69da_d992 == 1) {
                        sprintf(buf, "Ok - %s no longer watched",
                                f_1a70_4739(d_4512_e438[m][sel].player - 1));
                        f_1a70_0b46(buf);
                        d_4512_e438[m][sel].player = 0;
                    }
                } else
                    c = 0;
            } else if (c == 8) {
                if (d_4512_e438[m][sel].player > 0) {
                    p = d_4512_e438[m][sel].player - 1;
                    do {
                        f_aac9_42ed(p, -1, -1);
                        f_9007_4da1(p, d_69da_d9e8);
                    } while (!d_69da_ddbe);
                    d_69da_ddbe = 0;
                } else
                    c = 0;
            } else if (c == 9)
                f_9c01_08e4(team);
        } while (c != 1 && c != 6 && c != 7 && c != 8 && c != 9);
    } while (c != 1);
}

/* one of the four scout buttons, lit or not */
void f_b085_69c6(unsigned char n, char lit)
{
    register uint16_t x = n * 77 + 8;
    char *labels[8] = {"Last", "Report", "Stop", "Watching", "Player", "Factfile", "View", "Staff"};

    f_2162_0897(16);
    f_2162_08b5(x + 2, 0x34, x + 0x4b, 0x48);
    f_2162_0897((lit ? 8 : 14) + 16);
    f_2162_08b5(x, 0x32, x + 0x49, 0x46);
    f_2162_08a6(0x18);
    f_2162_090f(x, 0x32, x + 0x49, 0x46);
    f_1a70_344b(x + (36 - strlen(labels[n * 2]) * 3) + 8, 0x3b, 1, labels[n * 2]);
    f_1a70_344b(x + (36 - strlen(labels[n * 2 + 1]) * 3) + 8, 0x43, 1, labels[n * 2 + 1]);
}

/* which of the four scout buttons the mouse is on: sets d_69da_d992 to 6 + its number */
void f_b085_6aef(void)
{
    unsigned char i;
    register uint16_t x;

    for (i = 0; i <= 3; ++i) {
        x = i * 77 + 8;
        if (f_2162_0c1f() >= x && f_2162_0c1f() <= x + 0x49 && f_2162_0c13() >= 0x32 &&
            f_2162_0c13() <= 0x46) {
            d_69da_d992 = i + 6;
            i = 3;
        }
    }
}

/* f_b085_6b59: human h's scout n's report on a player; buttons View Factfile, Match
   Report, His Squad, Our Squad */
void f_b085_6b59(unsigned char h, unsigned char n)
{
    unsigned char team, i, j;
    char choice;
    int16_t p;
    char played;
    char buf[320];

    team = d_4512_2616[h];
    do {
        f_1a70_4a41("Scout Report");
        f_1a70_442b(1.25, 3.0, team);
        p = d_4512_e438[h][n].player - 1;
        sprintf(buf, " Report on %s of %s ", f_1a70_4592(p),
                (char *)NEAR_PTR(d_69da_b1fc[d_28da_2a78[18][p]]));
        f_1a70_3554(1.125, 6.25, 0, 1, 0x130, buf);
        f_2162_0897(16);
        f_2162_08b5(12, 58, 238, 164);
        f_2162_0897(19);
        f_2162_08b5(8, 54, 234, 160);
        for (i = 0; i <= 3; i = i + 1)
            f_b085_75ba(i, 0);
        f_1a70_3554(1.375, 7.75, 0, 6, 0x6e, " Scout Present");
        sprintf(buf, " %s", f_1a70_4793(d_4512_1b70[n][team], 0));
        f_1a70_3554(15.375, 7.75, 0, 6, 0x6e, buf);
        f_1a70_3554(1.375, 8.75, 1, 15, 0x6e, " Opponents");
        sprintf(buf, " %s", f_1a70_3404(d_4512_e438[h][n].opponent));
        f_1a70_3554(15.375, 8.75, 1, 15, 0x6e, buf);
        f_1a70_3554(1.375, 9.75, 1, 15, 0x6e, " Shirt / Fitness");
        if (d_4512_e438[h][n].shirt == 0)
            sprintf(buf, " Not Picked / %d%%", d_4512_e438[h][n].fitness);   /* port: " %d%" */
        else
            sprintf(buf, " No.%d / %d%%", d_4512_e438[h][n].shirt, d_4512_e438[h][n].fitness);   /* port: " %d%" */
        f_1a70_3554(15.375, 9.75, 1, 15, 0x6e, buf);
        played = d_4512_e438[h][n].shirt > 0 && d_4512_e438[h][n].minutes > 0;
        f_1a70_3554(1.375, 10.75, 1, 15, 0x6e, " Played");
        strcpy(buf, " -");
        if (played)
            sprintf(buf, " %d mins", d_4512_e438[h][n].minutes);
        f_1a70_3554(15.375, 10.75, 1, 15, 0x6e, buf);
        f_1a70_3554(1.375, 11.75, 1, 15, 0x6e, " Rating");
        strcpy(buf, " -");
        if (played && d_4512_e438[h][n].rating[0] > 0)
            sprintf(buf, " %d", d_4512_e438[h][n].rating[0]);
        f_1a70_3554(15.375, 11.75, 1, 15, 0x6e, buf);
        f_1a70_3554(1.375, 12.75, 1, 15, 0x6e, " Goals");
        strcpy(buf, " -");
        if (played)
            sprintf(buf, " %d", d_4512_e438[h][n].goals);
        f_1a70_3554(15.375, 12.75, 1, 15, 0x6e, buf);
        f_1a70_3554(1.375, 13.75, 1, 15, 0x6e, " Booked");
        strcpy(buf, " -");
        if (played && d_4512_e438[h][n].booked > 0)
            sprintf(buf, " %d mins", d_4512_e438[h][n].booked);
        f_1a70_3554(15.375, 13.75, 1, 15, 0x6e, buf);
        f_1a70_3554(1.375, 14.75, 1, 15, 0x6e, " Sent off");
        strcpy(buf, " -");
        if (played && d_4512_e438[h][n].sent_off > 0)
            sprintf(buf, " %d mins", d_4512_e438[h][n].sent_off);
        f_1a70_3554(15.375, 14.75, 1, 15, 0x6e, buf);
        f_1a70_3554(1.375, 15.75, 1, 15, 0x6e, " Injured");
        strcpy(buf, " -");
        if (played && d_4512_e438[h][n].injured > 0)
            sprintf(buf, " %d mins", d_4512_e438[h][n].injured);
        f_1a70_3554(15.375, 15.75, 1, 15, 0x6e, buf);
        f_1a70_3554(1.375, 16.75, 1, 15, 0x6e, " Last 5 games");
        strcpy(buf, "");
        for (j = 1; j <= 5; j = j + 1) {
            if (d_4512_e438[h][n].rating[j] > 0) {
                char tmp[5];
                sprintf(tmp, " %d", d_4512_e438[h][n].rating[j]);
                strcat(buf, tmp);
            } else
                strcat(buf, " -");
        }
        f_1a70_3554(15.375, 16.75, 1, 15, 0x6e, buf);
        f_1a70_3554(1.375, 17.75, 1, 4, 0xde, "            Other Scouts");
        if (d_4512_e438[h][n].other > 0)
            sprintf(buf, "A scout from %s was present",
                    (char *)NEAR_PTR(d_69da_b1fa[d_4512_e438[h][n].other]));
        else
            strcpy(buf, "                None");
        f_1a70_3554(1.375, 18.75, 1, 4, 0xde, buf);
        f_1a70_3554(1.375, 19.75, 0, 5, 0x6e, " Approach ?");
        if (f_9661_3081(p, team, n))
            strcpy(buf, " Yes");
        else
            strcpy(buf, " No");
        f_1a70_3554(15.375, 19.75, 0, 5, 0x6e, buf);
        f_1a70_4ede(2, 1.25, 22.5, 1, 4, 0x12d, "                 Done");
        do {
            d_69da_d992 = f_1a70_53de(-1);
            if (d_69da_d992 == 0)
                f_b085_771d();
            choice = d_69da_d992;
        } while (choice == 0);
        if (choice == 2) {
            do {
                f_aac9_42ed(p, -1, -1);
                f_9007_4da1(p, d_69da_d9e8);
            } while (!d_69da_ddbe);
            d_69da_ddbe = 0;
        } else if (choice == 3) {
            FILE *fp;
            f_2162_19f6(2);
            fp = fopen(d_536d_a475, "rb");
            fseek(fp, d_4512_e438[h][n].match * 155, 0);
            fread(d_536d_3066, 1, 155, fp);
            fclose(fp);
            f_8773_3a79(d_5dbf_1292[d_4512_e438[h][n].comp][0][d_4512_e438[h][n].week] / 32,
                        d_5dbf_1292[d_4512_e438[h][n].comp][1][d_4512_e438[h][n].week] / 32, -1);
        } else if (choice == 4)
            f_7827_4b4d(d_28da_ad40[p]);
        else if (choice == 5)
            f_7dd6_2dcf(team);
    } while (choice != 1);
}

/* f_b085_75ba: button n of the scout report; lit: drawn highlighted */
void f_b085_75ba(unsigned char n, char lit)
{
    char *labels[8] = {"View", "Factfile", "Match", "Report", "His", "Squad", "Our", "Squad"};
    int16_t y;

    y = n * 27 + 54;
    f_2162_0897(16);
    f_2162_08b5(244, y + 2, 314, y + 25);
    f_2162_0897((lit ? 1 : 2) + 16);
    f_2162_08b5(242, y, 312, y + 23);
    f_2162_08a6(25);
    f_2162_090f(242, y, 312, y + 23);
    f_1a70_344b(35 - strlen(labels[n * 2]) * 3 + 250, y + 11, lit ? 0 : 1, labels[n * 2]);
    f_1a70_344b(35 - strlen(labels[n * 2 + 1]) * 3 + 250, y + 19, lit ? 0 : 1, labels[n * 2 + 1]);
}

/* f_b085_771d: which button the mouse is on: sets d_69da_d992 to 2 + its number */
void f_b085_771d(void)
{
    unsigned char i;
    uint16_t y;

    for (i = 0; i <= 4; i = i + 1) {
        y = i * 27 + 54;
        if (f_2162_0c1f() >= 242 && f_2162_0c1f() <= 312 && f_2162_0c13() >= y
            && f_2162_0c13() <= y + 23) {
            f_b085_75ba(i, -1);
            d_69da_d992 = i + 2;
            i = 4;
        }
    }
}

/* f_b085_7793: human h's next scout after n with a report, or -1 */
unsigned char f_b085_7793(unsigned char h, unsigned char n)
{
    unsigned char c;

    c = n;
    do
        c = c == 3 ? 0 : c + 1;
    while (d_4512_e438[h][c].used == 0 && c != n);
    return d_4512_e438[h][c].used == 0 ? -1 : c;
}

/* f_b085_77f9: a match event for a player the scouts watch (0 picked, 1 goal, 2 booked,
   3 sent off, 4 injured, 5 full time) */
void f_b085_77f9(int16_t player, char ev)
{
    unsigned char h, n;

    for (h = 0; h <= 3; h = h + 1) {
        if (d_4512_2616[h] < 255) {
            for (n = 0; n <= 3; n = n + 1) {
                if (d_4512_e438[h][n].player > 0 && d_4512_e438[h][n].player - 1 == player) {
                    if (ev == 0) {
                        d_4512_e438[h][n].used = -1;
                        d_4512_e438[h][n].match = d_69da_dab8 + d_69da_d9bc - 1;
                        d_4512_e438[h][n].comp = d_69da_d9bc;
                        d_4512_e438[h][n].week = d_69da_d996 - 1;
                        d_4512_e438[h][n].opponent = d_69da_da7a;
                        d_4512_e438[h][n].shirt = d_69da_d9a0 + (d_69da_d9a0 == 12 ? 1 : 0) + 1;
                        d_4512_e438[h][n].fitness = d_28da_c30c[player];
                        d_4512_e438[h][n].goals = 0;
                        d_4512_e438[h][n].booked = 0;
                        d_4512_e438[h][n].sent_off = 0;
                        d_4512_e438[h][n].injured = 0;
                        d_4512_e438[h][n].minutes = 0;
                        d_4512_e438[h][n].other = 0;
                    } else if (ev == 1)
                        d_4512_e438[h][n].goals++;
                    else if (ev == 2)
                        d_4512_e438[h][n].booked = d_69da_da98;
                    else if (ev == 3)
                        d_4512_e438[h][n].sent_off = d_69da_da98;
                    else if (ev == 4)
                        d_4512_e438[h][n].injured = d_69da_da98;
                    else if (ev == 5) {
                        unsigned char k;
                        d_4512_e438[h][n].minutes = d_69da_da9a;
                        for (k = 5; k >= 1; k = k - 1)
                            d_4512_e438[h][n].rating[k] = d_4512_e438[h][n].rating[k - 1];
                        d_4512_e438[h][n].rating[0] = d_69da_dba4;
                        d_4512_e438[h][n].other = 0;
                        if (*(d_3668_0000[23] + player) > 0 && !d_4512_bdc8[player].f9
                            && !d_4512_bdc8[player].f30) {
                            unsigned char t, cnt;
                            cnt = 0;
                            do {
                                do
                                    t = f_2162_0da1(80);
                                while (t == d_4512_1f3c[h]);
                                cnt++;
                            } while (f_9007_1a61(t, player) == 0 && cnt < 40);
                            if (cnt < 40)
                                d_4512_e438[h][n].other = t + 1;
                        }
                    }
                }
            }
        }
    }
}
