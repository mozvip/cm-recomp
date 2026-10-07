/* @at b26d:0000 */
/* @data 61eb:8418 */
/* @module */

/* Overlay b26d. */
#include <mem.h>
#include <string.h>
#include <fcntl.h>
#include <alloc.h>
#include <bios.h>
#include <conio.h>
#include <ctype.h>
#include <io.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <math.h>
#include <dos.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_b26d_0000(unsigned char team, unsigned char i);
void f_b26d_016f(void);
void f_b26d_01de(unsigned char team, unsigned char i);
unsigned char f_b26d_0586(unsigned char team, unsigned char gk);
void f_b26d_0652(unsigned char team);
void f_b26d_0849(void);
void f_b26d_0b9a();
void f_b26d_0ba3(void);
void f_b26d_0bac(char far *s);
void f_b26d_0bd7(unsigned char n);
void f_b26d_0c04(unsigned team);
void f_b26d_0cf8(unsigned team);
void f_b26d_0d6e(void);
void f_b26d_0dba(void);
void f_b26d_0e1c(unsigned char team, char mode, int player, unsigned char club, long fee, unsigned char x);
void f_b26d_13c9(unsigned char team, unsigned char idx);
void f_b26d_1456(unsigned char team);
void f_b26d_1547(void);
void f_b26d_181d(void);
void f_b26d_1b8d(void);
void f_b26d_1d99(void);
void f_b26d_1fca(void);
void f_b26d_21e3(void);
void f_b26d_23fc(void);
void f_b26d_24ec(void);
char f_b26d_2715(unsigned char club, char far *title);
void f_b26d_27fd(unsigned char team, int player);
void f_b26d_2a9b(unsigned char m);
void f_b26d_3126(unsigned char n, char lit);
void f_b26d_324f(void);
void f_b26d_32b9(unsigned char h, unsigned char n);
void f_b26d_3d14(unsigned char n, char lit);
void f_b26d_3e77(void);
unsigned char f_b26d_3eed(unsigned char h, unsigned char n);
void f_b26d_3f53(int player, char ev);

char f_1a83_247b(int w);
void f_1a83_3450(float x, float y, int bg, int fg, int w, char far *s);
void f_1a83_5844(int team, char far *title, char far *text);
char f_1a83_5a4c(int player);
int f_1a83_66e8(int x);
unsigned char f_1a83_6d8b(unsigned char team);
void f_215d_038c();
void f_215d_088c();
void f_215d_08aa(int x1, int y1, int x2, int y2);
int f_215d_0c20(void);
long f_215d_0d96(long n);
int f_215d_1343(int a, int b);
void far *f_215d_1629(int handle, int page);
void f_215d_19f4(void);
void f_215d_19fd(void);
void f_8402_14c0(int team, int delta);
void f_9a9e_125e(int player, int a, int b);
void f_9a9e_155d(int p);
int f_ab30_3d3f(char c);
int f_ab30_3db7(char c);
extern unsigned far d_28d2_0010;
extern int far d_28d4_081c[][26];
extern unsigned char far d_28d4_1958[][1500];
extern unsigned char far d_3334_2904[];
extern unsigned char far d_3334_beca[];
extern int far d_3334_f9f8[][16];
extern unsigned char far d_432e_39fe[][5][16];
extern unsigned char far d_432e_3a2e[][80];
extern unsigned char far d_432e_3a3e[][80];
extern struct { int a, b, start, len; } far d_432e_5d4e[];
extern char far d_432e_b73b[][38];
extern unsigned char far d_3334_d168[];
extern char far *far d_5b9b_0000[];
extern char far *far d_5b9b_1395[];
extern char near *d_61eb_b0ec[];
extern int d_61eb_d58e;
extern int d_61eb_d5a2;
extern int d_61eb_d5a4;
extern int d_61eb_d650;
extern char d_61eb_d9c2;
extern long (far *d_61eb_dbc0)[38];
extern unsigned char (far *d_61eb_dbcc)[1500];
extern int (far *d_61eb_dbd0)[2][16];
extern char far *d_61eb_dbd4;
extern int d_61eb_dc52;
extern int d_61eb_dc58;
extern int d_61eb_dc5a;
extern int d_61eb_dc5c;
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
struct goals { unsigned char pad; unsigned char g[2][14]; };
struct s_trans { int a[15]; /* +00 d_3668_bce8[player] */ int b[15]; /* +1e d_3668_d9f8[player] */ char club[15][15]; /* +3c the other club's name */ long fee[15]; /* +11d */ unsigned char c[15]; /* +159 */ };
struct s_mhst { unsigned char season; /* 00 season + 91 */ char name[15]; /* 01 the club's name */ unsigned char pos; /* 10 league position (index in d_4512_6324) */ unsigned char played; /* 11 */ unsigned char won; /* 12 */ unsigned char drawn; /* 13 */ unsigned char lost; /* 14 */ unsigned char gf; /* 15 */ unsigned char ga; /* 16 */ unsigned char pts; /* 17 */ unsigned char conf; /* 18 d_4512_01ec[team] */ char manager[10]; /* 19 f_9c01_12e0(team + 646, 0) */ unsigned char n[2]; /* 23 players bought, sold */ unsigned char x25; /* 25 d_4512_e424[team] */ long x26; /* 26 d_4512_2250[team] */ unsigned char x2a; /* 2a d_28d8_6818[team] */ unsigned char x2b; /* 2b d_28d8_68a4[team] */ unsigned char cup; /* 2c */ unsigned char cupround; /* 2d */ struct s_trans t[2]; /* 2e bought, 196 sold */ };
struct scout { char used; /* +00 */ unsigned player; /* +01: player watched + 1, 0: none */ unsigned match; /* +03: record of the match in the match file */ unsigned char comp; /* +05 */ unsigned char week; /* +06 */ int opponent; /* +07 */ unsigned char shirt; /* +09: 0 not picked */ unsigned char fitness; /* +0a */ unsigned char minutes; /* +0b: minutes played */ unsigned char rating[6]; /* +0c: this match, then the last five */ unsigned char goals; /* +12 */ unsigned char booked; /* +13: minute */ unsigned char sent_off; /* +14: minute */ unsigned char injured; /* +15: minute */ unsigned char other; /* +16: team + 1 of another club's scout present */ };
void f_1a83_0b12(int line, char far *s);
void f_1a83_0b7d(char far *s);
void f_1a83_0bb7(char far *s);
char f_1a83_2ad4(int x);
void f_1a83_2da6(int n, char far *title, char far *items);
void f_1a83_3122(int last);
char far *f_1a83_3300(int x);
void f_1a83_3347(int x, int y, int colour, char far *s);
void f_1a83_3c08(float x, float y, int bg, int fg, int w, char far *s);
void f_1a83_4327(float x, float y, int team);
char far *f_1a83_4485(int player);
char far *f_1a83_45b4(int player);
char far *f_1a83_462c(int player);
char far *f_1a83_4686(int manager, char full);
char far *f_1a83_47e8(int division);
char far *f_1a83_4876(int division, char full);
void f_1a83_48f9(char far *title);
void f_1a83_4d96(int a, float x, float y, int c, int d, int e, char far *s);
void f_1a83_5117(int a, char b);
int f_1a83_5296(int a);
void f_1a83_54f9(int x);
void f_1a83_5ccd(void);
void f_1a83_5ce1(void);
char f_1a83_65a9(char foreign);
void f_215d_089b();
void f_215d_0904(int x1, int y1, int x2, int y2);
int f_215d_0c08(void);
int f_215d_0c14(void);
int f_215d_0dcc(char far *path);
void f_215d_0df0(int ticks);
int f_215d_13af(int a, int b);
void f_215d_19eb();
void f_6ffe_4a89(int team);
void f_75a4_2bd7(int team);
void f_7f4a_3a06(int a, int b, char c);
void f_8402_10b8(int team, long amount, long z);
int f_87dc_1a90(int team, int p);
void f_87dc_4c9b(int player, int a);
char f_8e0f_2fa1(int p, int team, int n);
void f_93a1_08e4(int team);
char far *f_93a1_63d8(int round);
char far *f_93a1_64b0(int round, int cup);
char far *f_93a1_12de(int manager, int type);
int f_9f8d_0000(int x);
void f_9f8d_1379(char all);
void f_a214_4120(int player, int a, char b);
extern unsigned char far d_28d4_82d0[];
extern unsigned char far d_28d4_9464[];
extern int far d_3334_9858[];
extern int far d_3334_afc8[];
extern int far d_3334_ca6e[][38];
extern long far d_3334_cc82[][38];
extern unsigned char far d_3334_fe98[][1860];
extern unsigned char far d_432e_00a4[];
extern unsigned char far d_432e_01ec[];
extern unsigned char far d_432e_03d8[];
extern unsigned char far d_432e_042a[];
extern unsigned char far d_432e_0640[];
extern unsigned char far d_432e_147c[];
extern unsigned char far d_432e_15d4[];
extern unsigned char far d_432e_1f9e[][140];
extern unsigned char far d_432e_23fe[];
extern unsigned char far d_432e_248a[];
extern unsigned char far d_432e_2516[];
extern unsigned char far d_432e_25a2[];
extern struct flags_w far d_432e_45de[];
extern struct scout far d_432e_66ae[][4];
extern struct s_mhst far d_432e_7672[];
extern unsigned char far d_3334_bf92[];
extern unsigned char far d_3334_bfba[];
extern unsigned char far d_3334_bfe2[];
extern unsigned char far d_3334_c00a[];
extern unsigned char far d_3334_bea2[];
extern unsigned char far d_3334_c73a[];
extern long far d_3334_ce4a[];
extern unsigned char far d_432e_22e6[];
extern char far * far d_53fc_0000[];
extern int d_61eb_d59c;
extern struct s_mhst far d_432e_9216;
extern unsigned char far d_432e_8282;
extern char far d_432e_8283[];
extern unsigned char far d_432e_828d;
extern unsigned char far d_432e_828e;
extern unsigned char far d_432e_828f;
extern unsigned long far d_432e_8290;
extern int far d_432e_8298[];
extern int far d_432e_82b6[];
extern char far d_432e_82d4[][15];
extern long far d_432e_83b5[];
extern char far d_432e_83f1[];
extern unsigned char far d_432e_b2e7[];
extern char far d_432e_b5eb[][80];
extern unsigned char far d_432e_c00a[];
extern unsigned char far d_432e_c05c[];
extern int far d_432e_cb5a[][80];
extern int far d_432e_cd2e[];
extern long far d_432e_cda2[];
extern unsigned char far d_432e_d168[];
extern char far d_432e_de4f[];
extern char far d_5313_0dcf[];
extern char far d_5313_0e47[];
extern struct s_mhst far d_5313_861e[];
extern struct s_mhst far d_432e_826a;
extern char far d_432e_dd5f[];
extern char far d_432e_ddaf[];
extern char far d_5313_0e60[];
extern unsigned char far d_432e_b437[];
extern char far d_5313_9a14[];
extern unsigned char far d_5313_b2e7[];
extern int far d_53fc_138e[][2][100];
extern char far * far d_53fc_bce0[];
extern char near *d_61eb_b0ea[];
extern int d_61eb_d59a;
extern int d_61eb_d59e;
extern int d_61eb_d5aa;
extern int d_61eb_d5c2;
extern int d_61eb_d5de;
extern int d_61eb_d5e2;
extern int d_61eb_d5ee;
extern int d_61eb_d680;
extern int d_61eb_d69e;
extern int d_61eb_d6a0;
extern int d_61eb_d6be;
extern int d_61eb_d7ae;
extern int d_61eb_d980;
extern char d_61eb_d9ca;
extern unsigned char far unmapped_d_4512_8b54[];
extern unsigned char far unmapped_d_4512_8be0[];
char unmapped_f_1a70_2490(int w);
char unmapped_f_1a70_24c5(int w);
extern unsigned char far d_3334_be02[];
extern unsigned char far d_3334_c7da[];
extern struct s_mhst far d_432e_861e[];
extern unsigned char far d_432e_922e;
extern char far d_432e_922f[];
extern unsigned char far d_432e_9239;
extern unsigned char far d_432e_923a;
extern unsigned char far d_432e_923b;
extern unsigned long far d_432e_923c;
extern int far d_432e_9244[];
extern int far d_432e_9262[];
extern char far d_432e_9280[][15];
extern long far d_432e_9361[];
extern char far d_432e_939d[];
extern int far d_432e_8400[];
extern int far d_432e_841e[];
extern char far d_432e_843c[][15];
extern long far d_432e_851d[];
extern char far d_432e_8559[];
extern int far d_3334_cb06[][38];
extern struct s_mhst far d_5313_9216;
extern unsigned char far d_3334_0000[][1500];
extern int far d_3334_cf7a[];
extern char far d_5313_0de8[];
extern char far d_432e_87c8[];
extern char far *far d_5b9b_019f[];


/* a new youth player in a team's slot */
void f_b26d_0000(unsigned char team, unsigned char i)
{
    unsigned char r;

    d_61eb_dbd0 = f_215d_1629(d_61eb_dc5a, 1);
    d_61eb_dbd0[team][0][i] = f_ab30_3d3f(0);
    d_61eb_dbd0[team][1][i] = f_ab30_3db7(0);
    if (i <= 1)
        d_432e_39fe[team][0][i] = 1;
    else {
        r = f_215d_0d96(14) + 1;
        if (r <= 5)
            d_432e_39fe[team][0][i] = 2;
        else if (r >= 6 && r <= 10)
            d_432e_39fe[team][0][i] = 3;
        else if (r >= 11)
            d_432e_39fe[team][0][i] = 4;
    }
    d_432e_39fe[team][1][i] = f_215d_0d96(4) + 16;
    d_432e_39fe[team][2][i] = f_215d_0d96(50) + 90;
    d_432e_3a2e[team][i] = 0;
    d_432e_3a3e[team][i] = 0;
}

/* the youth players get a year older */
void f_b26d_016f(void)
{
    unsigned char team, i;

    for (team = 0; team <= 37; team = team + 1)
        for (i = 0; i <= 15; i = i + 1) {
            d_432e_39fe[team][1][i]++;
            if (d_432e_39fe[team][1][i] > 23)
                f_b26d_0000(team, i);
        }
}

/* info on a youth player */
void f_b26d_01de(unsigned char team, unsigned char i)
{
    char buf[80], line[80];

    f_215d_19f4();
    f_215d_088c(16);
    f_215d_08aa(0x3d, 0x51, 0x10b, 0x7b);
    f_215d_088c(19);
    f_215d_08aa(0x39, 0x4d, 0x107, 0x77);
    d_61eb_dbd0 = f_215d_1629(d_61eb_dc5a, 0);
    sprintf(buf, "Info on %s %s", d_5b9b_0000[d_61eb_dbd0[team][0][i]],
            d_5b9b_1395[d_61eb_dbd0[team][1][i]]);
    sprintf(line, "%*s", 17 - strlen(buf) / 2 + strlen(buf), buf);
    f_1a83_3450(7.5, 10.625, 0, 1, 0xca, line);
    f_1a83_3450(7.5, 11.625, 6, 15, 100, " Age");
    sprintf(buf, " %d Yrs", d_432e_39fe[team][1][i]);
    f_1a83_3450(20.25, 11.625, 6, 15, 100, buf);
    f_1a83_3450(7.5, 12.625, 6, 15, 100, " Position");
    if (d_432e_39fe[team][0][i] == 1)
        strcpy(buf, " Goalkeeper");
    else if (d_432e_39fe[team][0][i] == 2)
        strcpy(buf, " Defence");
    else if (d_432e_39fe[team][0][i] == 3)
        strcpy(buf, " Midfield");
    else if (d_432e_39fe[team][0][i] == 4)
        strcpy(buf, " Attack");
    f_1a83_3450(20.25, 12.625, 6, 15, 100, buf);
    f_1a83_3450(7.5, 13.625, 6, 15, 100, " Rating");
    if (d_432e_39fe[team][2][i] >= 80)
        strcpy(buf, " Good");
    else if (d_432e_39fe[team][2][i] >= 60)
        strcpy(buf, " Promising");
    else
        strcpy(buf, " Fair");
    f_1a83_3450(20.25, 13.625, 6, 15, 100, buf);
    f_1a83_3450(7.5, 14.625, 6, 15, 100, " Status");
    if (d_432e_3a2e[team][i] == 0)
        strcpy(buf, " Available");
    else
        sprintf(buf, " Out %d week%s", d_432e_3a2e[team][i],
                d_432e_3a2e[team][i] > 1 ? "s" : "");
    f_1a83_3450(20.25, 14.625, 6, 15, 100, buf);
    f_215d_038c(0);
    while (f_215d_0c20() == 0)
        ;
    f_215d_038c(1);
    f_215d_19fd();
}

/* the best youth player of a team (keepers only if gk == 1) */
unsigned char f_b26d_0586(unsigned char team, unsigned char gk)
{
    unsigned char i, best, bestv;

    best = 0;
    bestv = 0;
    for (i = 0; i <= 15; i = i + 1) {
        if (gk == 1 && d_432e_39fe[team][0][i] > 1)
            continue;
        if (d_432e_39fe[team][2][i] + f_215d_0d96(10) - f_215d_0d96(10) > bestv) {
            bestv = d_432e_39fe[team][2][i];
            best = i;
        }
    }
    return best;
}

/* fine a club for fielding reserve players */
void f_b26d_0652(unsigned char team)
{
    unsigned char n1, n2, i;
    long fine;
    char buf[320];

    if (d_432e_b73b[0][team] != 0 && d_61eb_d5a2 > 12) {
        n1 = 0;
        n2 = 0;
        for (i = 0; i <= 10; i = i + 1)
            if (f_1a83_5a4c(d_3334_f9f8[team][i]))
                n1++;
        for (i = 0; d_3334_beca[team] - 1 >= i; i = i + 1)
            if (d_28d4_1958[20][d_28d4_081c[team][i]] == 0)
                n2++;
        if (n1 >= f_215d_1343(15 - n2, 0) && n1 >= 5) {
            switch (f_1a83_6d8b(team)) {
            case 0:
                fine = f_215d_0d96(6) * 2500 + 20000;
                break;
            case 1:
                fine = f_215d_0d96(6) * 1000 + 10000;
                break;
            }
            sprintf(buf, "%s have been fined %ld for unnecessarily fielding reserve players.",
                    (char far *)d_61eb_b0ec[team], fine);
            f_1a83_5844(team, "Disciplinary action", buf);
            d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
            d_61eb_dbc0[12][team] = d_61eb_dbc0[12][team] + fine;
            f_8402_14c0(team, -(f_215d_0d96(5) + 5));
        }
    }
}

/* print the week's news */
void f_b26d_0849(void)
{
    unsigned char cnt;
    unsigned i;
    int last;
    char buf[80];

    if (d_28d2_0010 > 0 && d_61eb_d9c2 != 0) {
        f_b26d_0b9a();
        f_b26d_0bac("______________________________________________________________________________\n");
        f_b26d_0bd7(2);
        sprintf(buf, "                                Week %d/Season %d",
                f_1a83_66e8(d_61eb_d5a2), d_61eb_d5a4);
        f_b26d_0bac(buf);
        f_b26d_0bd7(2);
        for (i = 0; i <= d_28d2_0010 - 2; i++) {
            unsigned j;
            int d;

            for (j = i + 1; j <= d_28d2_0010 - 1; j++) {
                d = d_432e_5d4e[i].b - d_432e_5d4e[j].b;
                if (d >= 8 || (abs(d) < 8 && d_432e_5d4e[i].a > d_432e_5d4e[j].a)) {
                    int t;

                    t = d_432e_5d4e[i].a;
                    d_432e_5d4e[i].a = d_432e_5d4e[j].a;
                    d_432e_5d4e[j].a = t;
                    t = d_432e_5d4e[i].b;
                    d_432e_5d4e[i].b = d_432e_5d4e[j].b;
                    d_432e_5d4e[j].b = t;
                    t = d_432e_5d4e[i].start;
                    d_432e_5d4e[i].start = d_432e_5d4e[j].start;
                    d_432e_5d4e[j].start = t;
                    t = d_432e_5d4e[i].len;
                    d_432e_5d4e[i].len = d_432e_5d4e[j].len;
                    d_432e_5d4e[j].len = t;
                }
            }
        }
        i = 0;
        last = -1;
        while (i <= d_28d2_0010 - 1) {
            if (d_432e_5d4e[i].b - last >= 8 || last == -1) {
                f_b26d_0bd7(1);
                f_b26d_0bac("   ");
                cnt = 0;
                last = d_432e_5d4e[i].b;
            }
            if (cnt == d_432e_5d4e[i].a / 4) {
                int start;
                int len;
                int t;

                start = d_432e_5d4e[i].start;
                len = d_432e_5d4e[i].len;
                d_61eb_dbd4 = f_215d_1629(d_61eb_dc5c, 0);
                for (t = 0; t <= len - 1; t++)
                    buf[t] = d_61eb_dbd4[start + t];
                buf[len] = 0;
                f_b26d_0bac(buf);
                cnt += strlen(buf);
                i++;
            } else {
                f_b26d_0bac(" ");
                cnt++;
            }
        }
        f_b26d_0bd7(3);
        f_b26d_0bac("______________________________________________________________________________\n");
        f_b26d_0bd7(2);
        f_b26d_0ba3();
    }
}

void f_b26d_0b9a()
{
}

void f_b26d_0ba3(void)
{
}

/* print a string */
void f_b26d_0bac(char far *s)
{
    while (*s != 0)
        _bios_printer(0, 0, *s++);
}

/* print n new lines */
void f_b26d_0bd7(unsigned char n)
{
    unsigned char i;

    for (i = 1; i <= n; i = i + 1)
        f_b26d_0bac("\r\n");
}

void f_b26d_0c04(unsigned team)
{
    unsigned char i, k;
    int p;

    if (f_1a83_247b(d_61eb_d5a2) && team < 38) {
        k = f_1a83_247b(d_61eb_d5a2) ? 0 : 1;
        for (i = 0; i <= d_3334_beca[team] - 1; i = i + 1) {
            p = d_28d4_081c[team][i];
            d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 0);
            if ((d_61eb_dbcc[k][p] != 255 && d_61eb_dbcc[k][p] != d_28d4_1958[18][p])
                || d_3334_2904[p] < 255)
                f_9a9e_125e(p, 50, 1);
        }
    }
}

void f_b26d_0cf8(unsigned team)
{
    unsigned char i;
    int p;

    if (f_1a83_247b(d_61eb_d5a2) && team < 38)
        for (i = 0; i <= d_3334_beca[team] - 1; i = i + 1) {
            p = d_28d4_081c[team][i];
            if (d_28d4_1958[19][p] == 50)
                f_9a9e_155d(p);
        }
}

void f_b26d_0d6e(void)
{
    unsigned i;

    for (i = 0; i <= d_61eb_d58e - 1; i++) {
        d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 1);
        d_61eb_dbcc[0][i] = 255;
        d_61eb_dbcc[1][i] = 255;
    }
}

void f_b26d_0dba(void)
{
    unsigned char i;

    if (d_61eb_d650 > 0)
        for (i = 0; i <= d_61eb_d650 - 1; i = i + 1)
            if (d_3334_d168[i] < 255) {
                f_b26d_0e1c(i, 0, 0, 0, 0L, 0);
                f_b26d_1456(i);
            }
}

void f_b26d_0e1c(unsigned char team, char mode, int player, unsigned char club, long fee, unsigned char x)
{
    char buf[40];

    if (mode == 0) {
        unsigned char t;
        unsigned char c;

        t = d_3334_d168[team];
        strcpy(buf, d_61eb_b0ec[t]);
        buf[14] = 0;
        d_432e_7672[team].season = d_61eb_d5a4 + 94;
        strcpy(d_432e_7672[team].name, buf);
        for (d_432e_7672[team].pos = 0; d_432e_0640[d_432e_7672[team].pos] != t; d_432e_7672[team].pos++)
            ;
        d_432e_7672[team].played = t < 18 ? d_61eb_d59a : d_61eb_d59c;
        d_432e_7672[team].won = d_3334_bf92[t];
        d_432e_7672[team].lost = d_3334_bfba[t];
        d_432e_7672[team].drawn = d_432e_7672[team].played - d_432e_7672[team].won - d_432e_7672[team].lost;
        d_432e_7672[team].gf = d_3334_bfe2[t];
        d_432e_7672[team].ga = d_3334_c00a[t];
        d_432e_7672[team].pts = f_9f8d_0000(d_432e_7672[team].pos);
        d_432e_7672[team].conf = d_3334_bea2[t];
        strcpy(d_432e_7672[team].manager, f_93a1_12de(team + 646, 0));
        d_432e_7672[team].x25 = d_3334_c73a[t];
        d_432e_7672[team].x26 = d_3334_ce4a[t];
        d_432e_7672[team].x2a = d_432e_22e6[t];
        c = 0;
        if (d_432e_23fe[t] > 0)
            c = 8;
        else if (d_432e_248a[t] > 0)
            c = 9;
        else if (d_432e_2516[t] > 0)
            c = 10;
        else if (d_432e_25a2[t] > 0)
            c = 11;
        if (c > 0) {
            d_432e_7672[team].cup = c - 5;
            d_432e_7672[team].cupround = d_432e_1f9e[c][t];
        } else
            d_432e_7672[team].cup = 0;
    } else {
        if (club < 38)
            strcpy(buf, d_61eb_b0ec[club]);
        else
            sprintf(buf, "<%s>", d_53fc_0000[club - 140]);
        buf[14] = 0;
        if (mode == 1 && d_432e_7672[team].n[0] < 13) {
            d_432e_7672[team].t[0].a[d_432e_7672[team].n[0]] = d_3334_9858[player];
            d_432e_7672[team].t[0].b[d_432e_7672[team].n[0]] = d_3334_afc8[player];
            strcpy(d_432e_7672[team].t[0].club[d_432e_7672[team].n[0]], buf);
            d_432e_7672[team].t[0].fee[d_432e_7672[team].n[0]] = fee;
            d_432e_7672[team].t[0].c[d_432e_7672[team].n[0]] = x;
            d_432e_7672[team].n[0]++;
        } else if (mode == 2 && d_432e_7672[team].n[1] < 13) {
            d_432e_7672[team].t[1].a[d_432e_7672[team].n[1]] = d_3334_9858[player];
            d_432e_7672[team].t[1].b[d_432e_7672[team].n[1]] = d_3334_afc8[player];
            strcpy(d_432e_7672[team].t[1].club[d_432e_7672[team].n[1]], buf);
            d_432e_7672[team].t[1].fee[d_432e_7672[team].n[1]] = fee;
            d_432e_7672[team].t[1].c[d_432e_7672[team].n[1]] = x;
            d_432e_7672[team].n[1]++;
        }
    }
}

void f_b26d_13c9(unsigned char team, unsigned char idx)
{
    FILE *fp;
    char buf[40];

    f_215d_19eb(2);
    sprintf(buf, "mhstP%d%s", team, d_5313_0e60);
    fp = fopen(buf, "rb+");
    fseek(fp, (long)idx * 0x2fe, 0);
    fread(&d_432e_826a, 1, 0x2fe, fp);
    fclose(fp);
}

void f_b26d_1456(unsigned char team)
{
    FILE *fp;
    unsigned char idx;
    char buf[40];

    idx = d_432e_b437[team] % 25;
    f_215d_19eb(2);
    sprintf(buf, "mhstP%d%s", team, d_5313_0e60);
    if (f_215d_0dcc(buf) == 0)
        fp = fopen(buf, "wb");
    else {
        fp = fopen(buf, "rb+");
        fseek(fp, (long)idx * 0x2fe, 0);
    }
    fwrite(&d_432e_7672[team], 1, 0x2fe, fp);
    fclose(fp);
    d_432e_b437[team]++;
}

void f_b26d_1547(void)
{
    unsigned char t;
    unsigned char key;
    unsigned char idx;
    unsigned char page;
    char buf[320];

    f_9f8d_1379(-1);
    if (d_61eb_d980 > -1) {
        t = d_61eb_d980 + 122;
        if (d_432e_b437[t] > 0) {
            idx = (d_432e_b437[t] - 1) % 25;
            page = 0;
            f_b26d_13c9(t, idx);
            do {
                f_1a83_5ccd();
                f_1a83_48f9(f_1a83_4686(t + 646, 0));
                sprintf(buf, " Season %d/%s ", d_432e_826a.season - 94, d_432e_826a.name);
                f_1a83_3c08(1.25, 3.5, 0, 1, 0, buf);
                if (page == 0) {
                    f_b26d_181d();
                    f_b26d_1b8d();
                    f_b26d_1d99();
                    f_1a83_5ce1();
                    f_1a83_4d96(2, 29.0, 3.5, 1, 12, 37, "Bght");
                    f_1a83_4d96(2, 34.25, 3.5, 1, 12, 37, "Sold");
                } else if (page == 1) {
                    f_b26d_1fca();
                    f_1a83_5ce1();
                    f_1a83_4d96(2, 29.0, 3.5, 0, 6, 37, "Misc");
                    f_1a83_4d96(2, 34.25, 3.5, 0, 6, 37, "Sold");
                } else if (page == 2) {
                    f_b26d_21e3();
                    f_1a83_5ce1();
                    f_1a83_4d96(2, 29.0, 3.5, 0, 6, 37, "Misc");
                    f_1a83_4d96(2, 34.25, 3.5, 0, 6, 37, "Bght");
                }
                f_1a83_4d96(2, 1.25, 22.5, 6, 2, 53, " - Rec");
                f_1a83_4d96(2, 32.25, 22.5, 6, 2, 53, " Rec +");
                f_1a83_4d96(2, 8.5, 22.5, 1, 4, 185, "          Done");
                if (idx == 0)
                    f_1a83_54f9(3);
                if (d_432e_b437[t] - 1 == idx)
                    f_1a83_54f9(4);
                do
                    key = f_1a83_5296(d_61eb_d5e2);
                while (key <= 0);
                if (page == 0 && key == 1 || page == 2 && key == 2)
                    page = 1;
                else if (page == 0 && key == 2 || page == 1 && key == 2)
                    page = 2;
                else if (page == 1 && key == 1 || page == 2 && key == 1)
                    page = 0;
                else if (key == 3) {
                    idx = idx == 0 ? 24 : idx - 1;
                    f_b26d_13c9(t, idx);
                } else if (key == 4) {
                    idx = idx == 24 ? 0 : idx + 1;
                    f_b26d_13c9(t, idx);
                }
            } while (key != 5);
        } else
            f_1a83_0bb7("No records to show");
    }
}

void f_b26d_181d(void)
{
    char buf[320];

    f_215d_088c(16);
    f_215d_08aa(12, 47, 316, 73);
    f_215d_088c(20);
    f_215d_08aa(8, 43, 312, 69);
    f_1a83_3450(1.375, 6.375, 0, 1, 300, " League Record");
    f_1a83_3450(1.375, 7.375, 0, 5, 31, " SER");
    sprintf(buf, " %s", f_1a83_4876(f_1a83_6d8b(d_432e_826a.pos) + 1, 3));
    f_1a83_3450(1.375, 8.375, 1, 8, 31, buf);
    f_1a83_3450(5.5, 7.375, 0, 5, 31, " POS");
    sprintf(buf, " %s", f_1a83_47e8(d_432e_826a.pos < 18 ? d_432e_826a.pos + 1 : d_432e_826a.pos - 17));
    f_1a83_3450(5.5, 8.375, 1, 8, 31, buf);
    f_1a83_3450(9.625, 7.375, 0, 5, 31, " PLD");
    sprintf(buf, "  %d", d_432e_826a.played);
    f_1a83_3450(9.625, 8.375, 1, 8, 31, buf);
    f_1a83_3450(13.75, 7.375, 0, 5, 32, " WON");
    sprintf(buf, "  %d", d_432e_826a.won);
    f_1a83_3450(13.75, 8.375, 1, 8, 32, buf);
    f_1a83_3450(18.0, 7.375, 0, 5, 32, " DRN");
    sprintf(buf, "  %d", d_432e_826a.drawn);
    f_1a83_3450(18.0, 8.375, 1, 8, 32, buf);
    f_1a83_3450(22.25, 7.375, 0, 5, 32, " LST");
    sprintf(buf, "  %d", d_432e_826a.lost);
    f_1a83_3450(22.25, 8.375, 1, 8, 32, buf);
    f_1a83_3450(26.5, 7.375, 0, 5, 32, " FOR");
    sprintf(buf, "  %d", d_432e_826a.gf);
    f_1a83_3450(26.5, 8.375, 1, 8, 32, buf);
    f_1a83_3450(30.75, 7.375, 0, 5, 32, " AGG");
    sprintf(buf, "  %d", d_432e_826a.ga);
    f_1a83_3450(30.75, 8.375, 1, 8, 32, buf);
    f_1a83_3450(35.0, 7.375, 0, 5, 31, " PTS");
    sprintf(buf, "  %d", d_432e_826a.pts);
    f_1a83_3450(35.0, 8.375, 1, 8, 31, buf);
}

void f_b26d_1b8d(void)
{
    char buf[320];
    char buf2[320];

    f_215d_088c(16);
    f_215d_08aa(12, 0x51, 0x13c, 0x73);
    f_215d_088c(20);
    f_215d_08aa(8, 0x4d, 0x138, 0x6f);
    f_1a83_3450(1.375, 10.625, 0, 1, 300, " Cup Record");
    f_1a83_3450(1.375, 11.625, 1, 12, 0x95, " Italian Cup");
    strcpy(buf, "");
    if (d_432e_826a.x2a > 0) {
        strcpy(buf, f_93a1_63d8(d_432e_826a.x2a));
        sprintf(buf, " %s", d_432e_dd5f);
    } else
        strcpy(buf, " Draw Not Made");
    f_1a83_3450(20.25, 11.625, 1, 12, 0x95, buf);
    strcpy(buf, "");
    strcpy(buf2, "");
    if (d_432e_826a.cup > 0) {
        strcpy(buf, f_93a1_64b0(d_432e_826a.cupround, d_432e_826a.cup));
        sprintf(buf, " %s", d_432e_ddaf);
        if (d_432e_826a.cupround > 0)
            sprintf(buf2, " %s", d_432e_dd5f);
        else
            strcpy(buf2, " Draw Not Made");
    }
    f_1a83_3450(1.375, 12.625, 1, 12, 0x95, buf);
    f_1a83_3450(20.25, 12.625, 1, 12, 0x95, buf2);
    f_1a83_3450(1.375, 13.625, 1, 12, 0x95, "");
    f_1a83_3450(20.25, 13.625, 1, 12, 0x95, "");
}

void f_b26d_1d99(void)
{
    unsigned long avg;
    char buf[320];

    f_215d_088c(16);
    f_215d_08aa(12, 0x7a, 0x13c, 0xac);
    f_215d_088c(31);
    f_215d_08aa(8, 0x76, 0x138, 0xa8);
    f_1a83_3450(1.375, 15.75, 0, 6, 300, " General Stats");
    f_1a83_3450(1.375, 16.75, 1, 3, 0x95, " Players Bought");
    sprintf(buf, " %d", d_432e_828d);
    f_1a83_3450(20.25, 16.75, 1, 3, 0x95, buf);
    f_1a83_3450(1.375, 17.75, 1, 3, 0x95, " Players Sold");
    sprintf(buf, " %d", d_432e_828e);
    f_1a83_3450(20.25, 17.75, 1, 3, 0x95, buf);
    f_1a83_3450(1.375, 18.75, 1, 3, 0x95, " Average Gate");
    strcpy(buf, "");
    if (d_432e_828f > 0) {
        avg = d_432e_8290 / d_432e_828f;
        sprintf(buf, " %ld", avg);
    }
    f_1a83_3450(20.25, 18.75, 1, 3, 0x95, buf);
    f_1a83_3450(1.375, 19.75, 1, 3, 0x95, " Board Confidence");
    sprintf(buf, " %d%", d_432e_8282);
    f_1a83_3450(20.25, 19.75, 1, 3, 0x95, buf);
    f_1a83_3450(1.375, 20.75, 1, 3, 0x95, " Manager Rating");
    sprintf(buf, " %s", d_432e_8283);
    f_1a83_3450(20.25, 20.75, 1, 3, 0x95, buf);
}

void f_b26d_1fca(void)
{
    unsigned char y;
    char name[50];
    char info[50];

    y = 0x3f;
    f_1a83_3450(1.125, 6.375, 1, 8, 0x130, "Players Bought/Loaned in");
    if (d_432e_828d > 0) {
        unsigned char i;

        for (i = 0; i <= d_432e_828d - 1; ++i) {
            sprintf(name, "%s %s", d_5b9b_0000[d_432e_8298[i]], d_5b9b_1395[d_432e_82b6[i]]);
            if (d_432e_83b5[i] == 0)
                sprintf(info, "%s Free Transfer", d_432e_82d4[i]);
            else if (d_432e_83b5[i] == 1)
                sprintf(info, "%s On Loan", d_432e_82d4[i]);
            else
                sprintf(info, "%s %ld%s", d_432e_82d4[i], d_432e_83b5[i], d_432e_83f1[i] ? "T" : "");
            if (i % 2 == 0) {
                f_1a83_3347(0x11, y, 6, name);
                f_1a83_3347(0x11, y + 8, 2, info);
            } else {
                f_1a83_3347(0xa9, y, 6, name);
                f_1a83_3347(0xa9, y + 8, 2, info);
                y += 20;
            }
        }
    } else
        f_1a83_3347(0x11, y, 5, "No players");
}

void f_b26d_21e3(void)
{
    unsigned char y;
    char name[50];
    char info[50];

    y = 0x3f;
    f_1a83_3450(1.125, 6.375, 1, 8, 0x130, "Players Sold/Loaned out");
    if (d_432e_828e > 0) {
        unsigned char i;

        for (i = 0; i <= d_432e_828e - 1; ++i) {
            sprintf(name, "%s %s", d_5b9b_0000[d_432e_8400[i]], d_5b9b_1395[d_432e_841e[i]]);
            if (d_432e_851d[i] == 0)
                sprintf(info, "%s Free Transfer", d_432e_843c[i]);
            else if (d_432e_851d[i] == 1)
                sprintf(info, "%s On Loan", d_432e_843c[i]);
            else
                sprintf(info, "%s %ld%s", d_432e_843c[i], d_432e_851d[i], d_432e_8559[i] ? "T" : "");
            if (i % 2 == 0) {
                f_1a83_3347(0x11, y, 6, name);
                f_1a83_3347(0x11, y + 8, 2, info);
            } else {
                f_1a83_3347(0xa9, y, 6, name);
                f_1a83_3347(0xa9, y + 8, 2, info);
                y += 20;
            }
        }
    } else
        f_1a83_3347(0x11, y, 5, "No players");
}

void f_b26d_23fc(void)
{
    unsigned char club;
    unsigned char a;
    unsigned char n;
    int p;

    if (f_215d_0d96(20))
        return;
    club = f_215d_0d96(38);
    a = f_215d_0d96(3) + 4;
    n = f_215d_0d96(5) + 2;
    strcpy(d_432e_de4f, "");
    for (; n > 0; n--) {
        do
            p = d_28d4_081c[club][f_215d_0d96(d_3334_beca[club])];
        while (d_28d4_1958[20][p] > 0);
        f_9a9e_125e(p, a, f_215d_13af(f_215d_0d96(2) + 1, f_215d_0d96(2) + 1));
    }
}

void f_b26d_24ec(void)
{
    unsigned char i;
    long limit;
    long amount;
    char title[320];
    char text[320];
    unsigned char c;

    for (i = 0; i <= 37; ++i) {
        if (d_3334_bea2[i] < 95)
            d_3334_c7da[i] = 0;
        if (d_3334_c7da[i] < 15)
            c = 50;
        else if (d_3334_c7da[i] >= 15 && d_3334_c7da[i] < 30)
            c = 35;
        else
            c = 20;
        if (d_3334_bea2[i] >= 95 && !f_215d_0d96(c) && (!f_1a83_65a9(0) || !f_1a83_65a9(1))) {
            switch (f_1a83_6d8b(i)) {
            case 0:
                limit = 1500000L;
                amount = (f_215d_0d96(4) + 2) * 100000L;
                break;
            case 1:
                limit = 500000L;
                amount = (f_215d_0d96(4) + 2) * 50000L;
                break;
            }
            if (d_3334_cc82[0][i] < limit && d_3334_beca[i] < 24) {
                f_8402_10b8(i, amount, 0L);
                if (f_1a83_2ad4(i)) {
                    sprintf(title, "%s board message", (char far *)d_61eb_b0ec[i]);
                    sprintf(text, "The board have made %ld available for the signing of new players. Keep up the good work!", amount);
                    f_1a83_5844(d_61eb_d5de, title, text);
                }
            }
        }
        if (d_3334_bea2[i] >= 95 && d_3334_c7da[i] < 100)
            d_3334_c7da[i]++;
    }
}

char f_b26d_2715(unsigned char club, char far *title)
{
    unsigned char i;
    char buf[320];

    f_1a83_48f9(title);
    f_1a83_3c08(1.0, 4.0, 0, 2, 0, " Select Scout ");
    strcpy(buf, "*Exit|");
    for (i = 0; i <= 3; ++i) {
        if (i == 3)
            strcat(buf, "$");
        strcat(buf, f_1a83_4686(d_3334_cb06[i][club], -1));
        strcat(buf, "|");
    }
    f_1a83_2da6(7, "", buf);
    f_1a83_3122(4);
    if (d_61eb_d59e > 0)
        i = d_61eb_d59e - 1;
    else
        i = 0xff;
    return i;
}

/* sends one of the team's scouts to watch a player */
void f_b26d_27fd(unsigned char team, int player)
{
    unsigned char s, m;
    char buf[320];
    register unsigned char i;

    m = d_3334_ca6e[0][team] - 646;
    s = f_b26d_2715(team, "Watch Player");
    if (s < 255) {
        unsigned char ok;

        ok = 1;
        if (d_432e_66ae[m][s].player > 0) {
            if (d_432e_66ae[m][s].player - 1 != player) {
                f_1a83_48f9("Watch Player");
                f_1a83_3c08(1.25, 4.0, -(d_3334_be02[team] / 16), d_3334_be02[team] % 16, 0,
                            d_61eb_b0ec[team]);
                sprintf(buf, "%s is currently assigned", f_1a83_4686(d_3334_cb06[s][team], -1));
                f_1a83_0b12(7, buf);
                sprintf(buf, "to watch %s", f_1a83_4485(d_432e_66ae[m][s].player - 1));
                f_1a83_0b12(9, buf);
                f_1a83_2da6(12, "", "*Exit|Continue|");
                f_1a83_3122(1);
                if (d_61eb_d59e == 0)
                    ok = 0;
            } else {
                sprintf(buf, "%s already|watched by %s", f_1a83_462c(player),
                        f_1a83_4686(d_3334_cb06[s][team], 0));
                f_1a83_0bb7(buf);
                ok = 0;
            }
        }
        if (ok == 1) {
            sprintf(buf, "Ok - %s now|watched by %s", f_1a83_462c(player),
                    f_1a83_4686(d_3334_cb06[s][team], 0));
            f_1a83_0bb7(buf);
            d_432e_66ae[m][s].used = 0;
            d_432e_66ae[m][s].player = player + 1;
            for (i = 0; i <= 5; i++)
                d_432e_66ae[m][s].rating[i] = 0;
        }
    }
}

/* the scouts screen of human manager m */
void f_b26d_2a9b(unsigned char m)
{
    unsigned char team, c, i, sel;
    char buf[320];
    register unsigned p;

    team = d_3334_d168[m];
    sel = 0;
    do {
        f_1a83_48f9("Scouts");
        sprintf(buf, " %s ", (char far *)d_61eb_b0ec[team]);
        f_1a83_3c08(1.25, 4.0, -(d_3334_be02[team] / 16), d_3334_be02[team] % 16, 0, buf);
        f_1a83_5ce1();
        for (c = 0; c <= 3; ++c)
            f_b26d_3126(c, 0);
        f_1a83_4d96(2, 1.25, 22.5, 1, 4, 0x12d, "                 Done");
        f_1a83_5ccd();
        f_1a83_3450(1.125, 10.25, 1, 2, 0x62, " Scout");
        f_1a83_3450(13.625, 10.25, 1, 2, 0x36, " Rep");
        f_1a83_3450(20.625, 10.25, 1, 2, 0x62, " Watching");
        f_1a83_3450(33.125, 10.25, 1, 2, 0x30, " Report");
        for (i = 0; i <= 3; ++i) {
            sprintf(buf, " %s", f_1a83_4686(d_3334_cb06[i][team], -1));
            f_1a83_4d96(0, 1.125, i + 11.5, 1, i % 2 == 0 ? 12 : 4, 0x62, buf);
            sprintf(buf, " %s", f_93a1_12de(d_3334_cb06[i][team], i + 2));
            f_1a83_3450(13.625, i + 11.5, 1, 14, 0x36, buf);
            p = d_432e_66ae[m][i].player;
            if (p > 0)
                sprintf(buf, " %s", f_1a83_45b4(p - 1));
            else
                strcpy(buf, " -");
            f_1a83_3450(20.625, i + 11.5, 1, 3, 0x62, buf);
            if (p > 0)
                sprintf(buf, " %s", d_432e_66ae[m][i].used ? "Yes" : "No");
            else
                strcpy(buf, " -");
            f_1a83_3450(33.125, i + 11.5, 1, 15, 0x30, buf);
        }
        f_1a83_5117(sel + 2, -1);
        do {
            d_61eb_d59e = f_1a83_5296(0);
            if (d_61eb_d59e == 0)
                f_b26d_324f();
            c = d_61eb_d59e;
            if (c >= 2 && c <= 5 && c - 2 != sel) {
                f_1a83_5117(sel + 2, 0);
                sel = c - 2;
                f_1a83_5117(sel + 2, -1);
            } else if (c == 6) {
                if (d_432e_66ae[m][sel].player > 0) {
                    if (d_432e_66ae[m][sel].used)
                        f_b26d_32b9(m, sel);
                    else
                        f_1a83_0bb7("No report to show");
                } else
                    c = 0;
            } else if (c == 7) {
                if (d_432e_66ae[m][sel].player > 0) {
                    f_1a83_48f9(f_1a83_4686(d_3334_cb06[sel][team], 0));
                    f_1a83_3c08(1.25, 4.0, -(d_3334_be02[team] / 16), d_3334_be02[team] % 16, 0,
                                d_61eb_b0ec[team]);
                    sprintf(buf, "Stop reporting on %s?", f_1a83_462c(d_432e_66ae[m][sel].player - 1));
                    f_1a83_0b12(7, buf);
                    f_1a83_2da6(10, "", "*Exit|Stop Reporting|");
                    f_1a83_3122(1);
                    if (d_61eb_d59e == 1) {
                        sprintf(buf, "Ok - %s no longer watched",
                                f_1a83_462c(d_432e_66ae[m][sel].player - 1));
                        f_1a83_0b7d(buf);
                        d_432e_66ae[m][sel].player = 0;
                    }
                } else
                    c = 0;
            } else if (c == 8) {
                if (d_432e_66ae[m][sel].player > 0) {
                    p = d_432e_66ae[m][sel].player - 1;
                    do {
                        f_a214_4120(p, -1, -1);
                        f_87dc_4c9b(p, d_61eb_d5ee);
                    } while (!d_61eb_d9ca);
                    d_61eb_d9ca = 0;
                } else
                    c = 0;
            } else if (c == 9)
                f_93a1_08e4(team);
        } while (c != 1 && c != 6 && c != 7 && c != 8 && c != 9);
    } while (c != 1);
}

/* one of the four scout buttons, lit or not */
void f_b26d_3126(unsigned char n, char lit)
{
    register unsigned x = n * 77 + 8;
    char far *labels[8] = {"Last", "Report", "Stop", "Watching", "Player", "Factfile", "View", "Staff"};

    f_215d_088c(16);
    f_215d_08aa(x + 2, 0x34, x + 0x4b, 0x48);
    f_215d_088c((lit ? 8 : 14) + 16);
    f_215d_08aa(x, 0x32, x + 0x49, 0x46);
    f_215d_089b(0x18);
    f_215d_0904(x, 0x32, x + 0x49, 0x46);
    f_1a83_3347(x + (36 - strlen(labels[n * 2]) * 3) + 8, 0x3b, 1, labels[n * 2]);
    f_1a83_3347(x + (36 - strlen(labels[n * 2 + 1]) * 3) + 8, 0x43, 1, labels[n * 2 + 1]);
}

/* which of the four scout buttons the mouse is on: sets d_61eb_d59e to 6 + its number */
void f_b26d_324f(void)
{
    unsigned char i;
    register unsigned x;

    for (i = 0; i <= 3; ++i) {
        x = i * 77 + 8;
        if (f_215d_0c14() >= x && f_215d_0c14() <= x + 0x49 && f_215d_0c08() >= 0x32 &&
            f_215d_0c08() <= 0x46) {
            d_61eb_d59e = i + 6;
            i = 3;
        }
    }
}

#pragma option -O-
/* f_b26d_32b9: human h's scout n's report on a player; buttons View Factfile, Match
   Report, His Squad, Our Squad */
void f_b26d_32b9(unsigned char h, unsigned char n)
{
    unsigned char team, i, j;
    char choice;
    int p;
    char played;
    char buf[320];

    team = d_3334_d168[h];
    do {
        f_1a83_48f9("Scout Report");
        f_1a83_4327(1.25, 3.0, team);
        p = d_432e_66ae[h][n].player - 1;
        sprintf(buf, " Report on %s of %s ", f_1a83_4485(p),
                (char far *)d_61eb_b0ec[d_28d4_1958[18][p]]);
        f_1a83_3450(1.125, 6.25, 0, 1, 0x130, buf);
        f_215d_088c(16);
        f_215d_08aa(12, 58, 238, 164);
        f_215d_088c(19);
        f_215d_08aa(8, 54, 234, 160);
        for (i = 0; i <= 3; i = i + 1)
            f_b26d_3d14(i, 0);
        f_1a83_3450(1.375, 7.75, 0, 6, 0x6e, " Scout Present");
        sprintf(buf, " %s", f_1a83_4686(d_3334_cb06[n][team], 0));
        f_1a83_3450(15.375, 7.75, 0, 6, 0x6e, buf);
        f_1a83_3450(1.375, 8.75, 1, 15, 0x6e, " Opponents");
        sprintf(buf, " %s", f_1a83_3300(d_432e_66ae[h][n].opponent));
        f_1a83_3450(15.375, 8.75, 1, 15, 0x6e, buf);
        f_1a83_3450(1.375, 9.75, 1, 15, 0x6e, " Shirt / Fitness");
        if (d_432e_66ae[h][n].shirt == 0)
            sprintf(buf, " Not Picked / %d%", d_432e_66ae[h][n].fitness);
        else
            sprintf(buf, " No.%d / %d%", d_432e_66ae[h][n].shirt, d_432e_66ae[h][n].fitness);
        f_1a83_3450(15.375, 9.75, 1, 15, 0x6e, buf);
        played = d_432e_66ae[h][n].shirt > 0 && d_432e_66ae[h][n].minutes > 0;
        f_1a83_3450(1.375, 10.75, 1, 15, 0x6e, " Played");
        strcpy(buf, " -");
        if (played)
            sprintf(buf, " %d mins", d_432e_66ae[h][n].minutes);
        f_1a83_3450(15.375, 10.75, 1, 15, 0x6e, buf);
        f_1a83_3450(1.375, 11.75, 1, 15, 0x6e, " Rating");
        strcpy(buf, " -");
        if (played && d_432e_66ae[h][n].rating[0] > 0)
            sprintf(buf, " %d", d_432e_66ae[h][n].rating[0]);
        f_1a83_3450(15.375, 11.75, 1, 15, 0x6e, buf);
        f_1a83_3450(1.375, 12.75, 1, 15, 0x6e, " Goals");
        strcpy(buf, " -");
        if (played)
            sprintf(buf, " %d", d_432e_66ae[h][n].goals);
        f_1a83_3450(15.375, 12.75, 1, 15, 0x6e, buf);
        f_1a83_3450(1.375, 13.75, 1, 15, 0x6e, " Booked");
        strcpy(buf, " -");
        if (played && d_432e_66ae[h][n].booked > 0)
            sprintf(buf, " %d mins", d_432e_66ae[h][n].booked);
        f_1a83_3450(15.375, 13.75, 1, 15, 0x6e, buf);
        f_1a83_3450(1.375, 14.75, 1, 15, 0x6e, " Sent off");
        strcpy(buf, " -");
        if (played && d_432e_66ae[h][n].sent_off > 0)
            sprintf(buf, " %d mins", d_432e_66ae[h][n].sent_off);
        f_1a83_3450(15.375, 14.75, 1, 15, 0x6e, buf);
        f_1a83_3450(1.375, 15.75, 1, 15, 0x6e, " Injured");
        strcpy(buf, " -");
        if (played && d_432e_66ae[h][n].injured > 0)
            sprintf(buf, " %d mins", d_432e_66ae[h][n].injured);
        f_1a83_3450(15.375, 15.75, 1, 15, 0x6e, buf);
        f_1a83_3450(1.375, 16.75, 1, 15, 0x6e, " Last 5 games");
        strcpy(buf, "");
        for (j = 1; j <= 5; j = j + 1) {
            if (d_432e_66ae[h][n].rating[j] > 0) {
                char tmp[5];
                sprintf(tmp, " %d", d_432e_66ae[h][n].rating[j]);
                strcat(buf, tmp);
            } else
                strcat(buf, " -");
        }
        f_1a83_3450(15.375, 16.75, 1, 15, 0x6e, buf);
        f_1a83_3450(1.375, 17.75, 1, 4, 0xde, "            Other Scouts");
        if (d_432e_66ae[h][n].other > 0)
            sprintf(buf, "A scout from %s was present",
                    (char far *)d_61eb_b0ea[d_432e_66ae[h][n].other]);
        else
            strcpy(buf, "                None");
        f_1a83_3450(1.375, 18.75, 1, 4, 0xde, buf);
        f_1a83_3450(1.375, 19.75, 0, 5, 0x6e, " Approach ?");
        if (f_8e0f_2fa1(p, team, n))
            strcpy(buf, " Yes");
        else
            strcpy(buf, " No");
        f_1a83_3450(15.375, 19.75, 0, 5, 0x6e, buf);
        f_1a83_4d96(2, 1.25, 22.5, 1, 4, 0x12d, "                 Done");
        do {
            d_61eb_d59e = f_1a83_5296(-1);
            if (d_61eb_d59e == 0)
                f_b26d_3e77();
            choice = d_61eb_d59e;
        } while (choice == 0);
        if (choice == 2) {
            do {
                f_a214_4120(p, -1, -1);
                f_87dc_4c9b(p, d_61eb_d5ee);
            } while (!d_61eb_d9ca);
            d_61eb_d9ca = 0;
        } else if (choice == 3) {
            FILE *fp;
            f_215d_19eb(2);
            fp = fopen(d_5313_0de8, "rb");
            fseek(fp, d_432e_66ae[h][n].match * 175L, 0);
            fread(d_432e_87c8, 1, 175, fp);
            fclose(fp);
            f_7f4a_3a06(d_53fc_138e[d_432e_66ae[h][n].comp][0][d_432e_66ae[h][n].week] / 32,
                        d_53fc_138e[d_432e_66ae[h][n].comp][1][d_432e_66ae[h][n].week] / 32, -1);
        } else if (choice == 4)
            f_6ffe_4a89(d_28d4_82d0[p]);
        else if (choice == 5)
            f_75a4_2bd7(team);
    } while (choice != 1);
}

/* f_b26d_3d14: button n of the scout report; lit: drawn highlighted */
void f_b26d_3d14(unsigned char n, char lit)
{
    char far *labels[8] = {"View", "Factfile", "Match", "Report", "His", "Squad", "Our", "Squad"};
    int y;

    y = n * 27 + 54;
    f_215d_088c(16);
    f_215d_08aa(244, y + 2, 314, y + 25);
    f_215d_088c((lit ? 1 : 2) + 16);
    f_215d_08aa(242, y, 312, y + 23);
    f_215d_089b(25);
    f_215d_0904(242, y, 312, y + 23);
    f_1a83_3347(35 - strlen(labels[n * 2]) * 3 + 250, y + 11, lit ? 0 : 1, labels[n * 2]);
    f_1a83_3347(35 - strlen(labels[n * 2 + 1]) * 3 + 250, y + 19, lit ? 0 : 1, labels[n * 2 + 1]);
}

/* f_b26d_3e77: which button the mouse is on: sets d_61eb_d59e to 2 + its number */
void f_b26d_3e77(void)
{
    unsigned char i;
    unsigned y;

    for (i = 0; i <= 4; i = i + 1) {
        y = i * 27 + 54;
        if (f_215d_0c14() >= 242 && f_215d_0c14() <= 312 && f_215d_0c08() >= y
            && f_215d_0c08() <= y + 23) {
            f_b26d_3d14(i, -1);
            d_61eb_d59e = i + 2;
            i = 4;
        }
    }
}

/* f_b26d_3eed: human h's next scout after n with a report, or -1 */
unsigned char f_b26d_3eed(unsigned char h, unsigned char n)
{
    unsigned char c;

    c = n;
    do
        c = c == 3 ? 0 : c + 1;
    while (d_432e_66ae[h][c].used == 0 && c != n);
    return d_432e_66ae[h][c].used == 0 ? -1 : c;
}

/* f_b26d_3f53: a match event for a player the scouts watch (0 picked, 1 goal, 2 booked,
   3 sent off, 4 injured, 5 full time) */
void f_b26d_3f53(int player, char ev)
{
    unsigned char h, n;

    for (h = 0; h <= 3; h = h + 1) {
        if (d_3334_d168[h] < 255) {
            for (n = 0; n <= 3; n = n + 1) {
                if (d_432e_66ae[h][n].player > 0 && d_432e_66ae[h][n].player - 1 == player) {
                    if (ev == 0) {
                        d_432e_66ae[h][n].used = -1;
                        d_432e_66ae[h][n].match = d_61eb_d6be + d_61eb_d5c2 - 1;
                        d_432e_66ae[h][n].comp = d_61eb_d5c2;
                        d_432e_66ae[h][n].week = d_61eb_d5a2 - 1;
                        d_432e_66ae[h][n].opponent = d_61eb_d680;
                        d_432e_66ae[h][n].shirt = d_61eb_d5aa + (d_61eb_d5aa == 12 ? 1 : 0) + 1;
                        d_432e_66ae[h][n].fitness = d_28d4_9464[player];
                        d_432e_66ae[h][n].goals = 0;
                        d_432e_66ae[h][n].booked = 0;
                        d_432e_66ae[h][n].sent_off = 0;
                        d_432e_66ae[h][n].injured = 0;
                        d_432e_66ae[h][n].minutes = 0;
                        d_432e_66ae[h][n].other = 0;
                    } else if (ev == 1)
                        d_432e_66ae[h][n].goals++;
                    else if (ev == 2)
                        d_432e_66ae[h][n].booked = d_61eb_d69e;
                    else if (ev == 3)
                        d_432e_66ae[h][n].sent_off = d_61eb_d69e;
                    else if (ev == 4)
                        d_432e_66ae[h][n].injured = d_61eb_d69e;
                    else if (ev == 5) {
                        unsigned char k;
                        d_432e_66ae[h][n].minutes = d_61eb_d6a0;
                        for (k = 5; k >= 1; k = k - 1)
                            d_432e_66ae[h][n].rating[k] = d_432e_66ae[h][n].rating[k - 1];
                        d_432e_66ae[h][n].rating[0] = d_61eb_d7ae;
                        d_432e_66ae[h][n].other = 0;
                        if (*(d_3334_0000[23] + player) > 0 && !d_432e_45de[player].f9
                            && !d_432e_45de[player].f30) {
                            unsigned char t, cnt;
                            cnt = 0;
                            do {
                                do
                                    t = f_215d_0d96(38);
                                while (t == d_3334_cf7a[h]);
                                cnt++;
                            } while (f_87dc_1a90(t, player) == 0 && cnt < 40);
                            if (cnt < 40)
                                d_432e_66ae[h][n].other = t + 1;
                        }
                    }
                }
            }
        }
    }
}
