/* @at 9100:0000 */
/* @data 5d9c:71bc */
/* @module */

/* Overlay 7: the seasons and the files: a new game and its clubs, the savegame, records
 * and history files, players' ratings and moods, team lists and money, non-league
 * clubs, retirements and insurance, the end of a season (attendances, ground capacity,
 * the club records and history), the club records, club history and past winners
 * screens, and the cups' round names. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <stdlib.h>
#include <math.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_9100_0000(void);
void f_9100_0300(void);
void f_9100_044e(void);
void f_9100_04ed(void);
void f_9100_06bc(void);
void f_9100_076a(int player, int team, unsigned char mode);
int f_9100_16d4(int p);
void f_9100_172e(int p, unsigned char c);
void f_9100_19d0(int p, int q);
void f_9100_1c1d(int p, int a, int c);
char f_9100_21b6(int p, int n);
int f_9100_2281(int p, int n);
char f_9100_2319(int a, char b);
void f_9100_23c7(void);
void f_9100_243d(int a, char c);
void f_9100_24d0(int a, char c, int i, int n);
void f_9100_2583(void);
void f_9100_2832(void);
void f_9100_2f2d(int a);
void f_9100_34d9(void);
void f_9100_3827(void);
void f_9100_3cea(int player, int age, int a, int b);
void f_9100_3edf(int player);
void f_9100_418b(void);
void f_9100_43fe(void);
void f_9100_4e00(int team, int other, int a, int b);
void f_9100_4e9f(int team, int other, int a, int b);
void f_9100_4f3e(int team, int other, long v);
void f_9100_4fc9(int team, int other, long v);
void f_9100_5076(int team, int a, int player, int b);
void f_9100_50ca(int team, int row, int v);
void f_9100_510c(int player, int from, int to, long fee);
void f_9100_518c(int player, int from, int to, long fee);
void f_9100_520c(int team, int player, int a, int b, int c);
void f_9100_52ff(int team);
void f_9100_643d(int team);
void f_9100_6ce3(int cup, int winner, int runner);
void f_9100_6dd0(void);
void f_9100_722d(int n, char c);
char far *f_9100_7386(int round);
char far *f_9100_7482(int round);
char far *f_9100_7560(int round, int cup);

int f_14d2_0c2a(int n);
int f_14d2_0c45(char far *path);
int f_14d2_13eb(int a, int b);
char far *f_14d2_0d08(char far *s);
char f_1680_0003(int x);
long f_1680_2782(int x);
void f_88c9_7813(void);
void f_88c9_7889(int i, char c);
void f_88c9_7933(int i, char c, int a, int b);
extern int d_5d9c_9f67;
extern int d_5d9c_9f69;
extern int d_5d9c_9fa1;
extern int d_5d9c_9f91;
extern int d_5d9c_9ccd;
extern int d_5d9c_9ccf;
extern int d_5d9c_9f19;
extern int d_5d9c_9cff;
extern int d_5d9c_9d01;
extern FILE *d_5d9c_00e6;
extern char near *d_5d9c_08bc[];
extern unsigned char far d_5739_0000[][82];
extern unsigned char far d_5739_142e[];
extern unsigned char far d_5739_1992[];
extern int far d_2f3c_7e53[];
extern int far d_2f3c_7c73[][80];
extern long far d_2f3c_74f3[][80];
extern unsigned char far d_2f3c_1b60[];
extern unsigned char far d_2f3c_1048[];
extern char far d_1f3e_5634[];
extern char far d_1f3e_40d0[];
extern char far d_1f3e_3d38[];
extern char far * far d_5471_0000[];
extern char far * far d_5471_0a70[];
int f_14d2_144d(int a, int b);
float f_1680_0037(int x);
int f_1680_00fb(int x);
int f_a1c3_2107(int team);
int f_8352_3455(int player, int team);
extern unsigned char huge d_483b_0000[][1702];
extern unsigned char huge d_3e42_0000[][1702];
extern char far d_1f3e_5be8[][0x6a6];
extern char far d_1f3e_7680[][0x6a6];
extern char far d_1f3e_b256[];
extern int far d_2f3c_85f7[][0x6a6];
extern int far d_2f3c_d5bf[];
extern int far d_2f3c_e30b[];
extern int far d_2f3c_7f93[][80];
extern unsigned char far d_2f3c_5905[];
extern int far d_2f3c_addb[];
extern unsigned char far d_5471_2507[][9];
extern unsigned char far d_5471_2c14[][10];
extern unsigned char far d_5739_023e[];
extern unsigned char far d_5739_02e2[];
extern char d_5d9c_9b30;
extern int d_5d9c_9dd7;
extern int d_5d9c_9e27;
extern int d_5d9c_9ccb;
extern int d_5d9c_9f49;
extern int d_5d9c_9cc9;
extern int d_5d9c_9cc7;
extern int d_5d9c_9cc5;
extern int d_5d9c_9cc3;
extern int d_5d9c_9cc1;
extern float d_5d9c_9a8c;
extern float d_5d9c_9a90;
extern float d_5d9c_9a94;
extern int d_5d9c_9de9;
extern int d_5d9c_9d65;
extern int d_5d9c_9ecf;
extern int d_5d9c_9cbf;
extern int d_5d9c_9cbd;
float f_14d2_13c3(float a, float b);
float f_14d2_1425(float a, float b);
float f_14d2_0eef(void);
int f_8352_3666(int age);
extern float d_5d9c_9a80;
extern float d_5d9c_9a84;
extern float d_5d9c_9a88;
extern char d_5d9c_9b2c;
extern char d_5d9c_9b2e;
extern char d_5d9c_9b2f;
extern int d_5d9c_9c9f;
extern int d_5d9c_9ca1;
extern int d_5d9c_9ca3;
extern int d_5d9c_9ca5;
extern int d_5d9c_9ca7;
extern int d_5d9c_9ca9;
extern int d_5d9c_9cab;
extern int d_5d9c_9cad;
extern int d_5d9c_9caf;
extern int d_5d9c_9cb1;
extern int d_5d9c_9cb3;
extern int d_5d9c_9cb5;
extern int d_5d9c_9cb7;
extern int d_5d9c_9cb9;
extern int d_5d9c_9cbb;
extern int d_5d9c_9ced;
extern int d_5d9c_9cf3;
extern int d_5d9c_9d07;
extern int d_5d9c_9d0b;
extern int d_5d9c_9d17;
extern int d_5d9c_9d4b;
extern int d_5d9c_9d8d;
extern int d_5d9c_9d9b;
extern int d_5d9c_9dbb;
extern int d_5d9c_9f51;
extern int d_5d9c_9f5f;
extern int d_5d9c_9f75;
extern int d_5d9c_9fa7;
extern char far d_1f3e_3c20[];
extern char far d_1f3e_3c21[][6];
extern int far d_2f3c_9343[];
extern int far d_2f3c_a08f[];
void f_a1c3_27e4(char far *title);
void f_14d2_0722(int c);
void f_14d2_075a(int x1, int y1, int x2, int y2);
void f_1680_2ea0(float x, float y, int bg, int fg, int w, char far *s);
void f_1680_312c(float x, float y, int bg, int fg, int w, int len, char far *s);
void far *f_14d2_16bc(int handle, int page);
char far *f_a1c3_229c(int manager, char full);
void f_14d2_148f(void far *a, void far *b, int n);
void f_992a_6bab(void);
void f_1680_0d7a(int a, int b);
char f_1680_07cb(int v);
void f_88c9_4cf8(int club, int a);
extern int d_5d9c_9e73;
extern int d_5d9c_9e71;
extern int d_5d9c_9f29;
extern int d_5d9c_9c9d;
extern char far *d_5d9c_00ba[];
extern char d_5d9c_9b2d;
extern int d_5d9c_9f4f;
extern int d_5d9c_9ef3;
extern int d_5d9c_9f55;
extern int d_5d9c_9f6d;
extern int d_5d9c_a35e;
extern int d_5d9c_a34e;
extern long far *d_5d9c_a054;
extern char far *d_5d9c_9fd2;
extern int d_5d9c_9f61;
extern int d_5d9c_9d8f;
extern int d_5d9c_9d95;
extern int d_5d9c_9c9b;
extern int d_5d9c_9ee3;
extern int d_5d9c_9fa9;
extern unsigned char d_5d9c_a022[];
extern long far d_2f3c_1d44[];
extern unsigned char far d_2f3c_5167[];
extern unsigned char far d_2f3c_2794[][20];
extern int far d_2f3c_27e4[][80];
extern unsigned char far d_2f3c_567b[];
int f_1680_02ed(int x);
void f_1680_341b(void);
void f_992a_7aeb(int a, int b);
void f_992a_7d4d(int a, int b);
void f_88c9_422a(int p, int c, char flag);
long f_88c9_12b3(int p, int n);
long f_88c9_26a0(long v, char c);
void f_8352_15e0(int p, char all);
char far *f_a1c3_213c(int player);
char far *f_a1c3_2243(int player);
void f_a1c3_5c9f(int team, char far *title, char far *text);
extern int d_5d9c_9c99;
extern int d_5d9c_9cf9;
extern int d_5d9c_9ba5;
extern int d_5d9c_9ce1;
extern int d_5d9c_9c97;
extern int d_5d9c_9c95;
extern int d_5d9c_9d11;
extern char d_5d9c_9b29;
extern char d_5d9c_9b2a;
extern char d_5d9c_9b2b;
extern int d_5d9c_a360;
extern long far *d_5d9c_a058;
extern long d_5d9c_99fc;
extern char near *d_5d9c_0524[];
extern unsigned char far d_5739_15fa[];
extern unsigned char far d_5739_17c6[];
extern unsigned char far d_5739_57ea[][140];
extern unsigned char far d_5739_13dc[];
extern unsigned char far d_5739_0290[];
extern unsigned char far d_2f3c_5e19[];
extern unsigned char far d_2f3c_60a3[];
extern unsigned char far d_2f3c_632d[];
extern unsigned char far d_2f3c_65b7[];
extern char far d_1f3e_0ab4[][101];
extern char far d_1f3e_9118[];
extern char far d_1f3e_ccee[];
extern char far d_1f3e_e0e0[];
long f_14d2_1400(long a, long b);
int f_1680_0287(int x);
char far *f_1680_1a91(int x);
char far *f_a1c3_21cc(int player);
int f_a1c3_20c5(int team);
extern int far d_2f3c_bb27[];
extern long far d_2f3c_7b33[];
extern unsigned char far d_5739_0052[];
extern unsigned char far d_5739_138a[];
extern float d_5d9c_9aec;
extern int d_5d9c_9c8f;
extern int d_5d9c_9c91;
extern int d_5d9c_9c93;
extern long d_5d9c_99f0;
extern long d_5d9c_99f4;
extern long d_5d9c_99f8;
extern char far d_1f3e_a50a[];
extern char far d_1f3e_3a68[];
extern char far d_1f3e_3ab8[];
extern char far d_1f3e_3afc[][12];
extern char far d_1f3e_3b08[];
extern char far d_1f3e_3b14[];
extern char far d_1f3e_3b80[];
extern char far d_1f3e_3b8c;
extern char far d_1f3e_3b8d[];
extern char far d_1f3e_3b99;
extern char far d_1f3e_3b9a[];
extern char far d_1f3e_3ba6;
extern char far d_1f3e_3ba7[];
extern char far d_1f3e_3bb3;
extern char far d_1f3e_3bb4[];
extern char far d_1f3e_3bc1;
extern char far d_1f3e_3bc2[];
extern char far d_1f3e_3bcf;
extern char far d_1f3e_3bd0[];
extern char far d_1f3e_3bdd[];
extern char far d_1f3e_3be9;
extern char far d_1f3e_3bea[];
extern char far d_1f3e_3bf7[];
extern char far d_1f3e_3c03;
extern char far d_1f3e_3c04;
extern char far d_1f3e_3c05[];
extern char far d_1f3e_3c12[];
extern char far d_1f3e_3c1e;
extern int far d_2f3c_029c[][140];
extern unsigned char far d_2f3c_0d8c[][140];
extern int far d_483b_c2b2[];
extern float far d_483b_a232[];
extern unsigned char far d_5739_03d8[];
extern unsigned char far d_5739_042a[];
extern unsigned char far d_5739_047c[];
extern unsigned char far d_5739_04ce[];
extern int d_5d9c_9f85;
extern int d_5d9c_9c83;
extern int d_5d9c_9c85;
extern int d_5d9c_9c87;
extern int d_5d9c_9c89;
extern int d_5d9c_9c8b;
extern int d_5d9c_9c8d;
extern int d_5d9c_a33e;
extern int d_5d9c_a348;
extern float far *d_5d9c_9ffa;
extern int (far *d_5d9c_a05c)[80];
extern int d_5d9c_9c81;
extern int d_5d9c_a34a;
extern long (far *d_5d9c_9ffe)[140];
void f_67ee_5ab6(float x, int team, char far *title);
void f_1680_2867(float x, float y, int bg, int fg, int w, char far *s);
char far *f_14d2_0e72(char far *s);
char far *f_a1c3_261d(int division);
void f_a1c3_2d08(int a, float x, float y, int c, int d, int e, char far *s);
int f_a1c3_3298(int a);
extern int d_5d9c_9f63;
extern int d_5d9c_9faf;
extern int d_5d9c_9c7b;
extern int d_5d9c_9c7d;
extern int d_5d9c_9c7f;
extern char far d_1f3e_396e[];
extern char far d_1f3e_39be[];
extern char far d_1f3e_3a0e[];
extern char far d_1f3e_3a5e[];
extern char far d_1f3e_3f90[];
extern char far d_1f3e_41c2[];
extern char far d_1f3e_52f6[];
extern char far d_1f3e_5396[];
extern unsigned char far d_2f3c_0e18[];
extern unsigned char far d_2f3c_0ea4[];
extern unsigned char far d_2f3c_0f30[];
extern unsigned char far d_2f3c_0fbc[];
extern unsigned char far d_2f3c_14a8[];
extern int far d_2f3c_03b4[];
extern int far d_2f3c_04cc[];
extern int far d_2f3c_05e4[];
extern int far d_2f3c_06fc[];
extern int far d_2f3c_0814[];
extern int far d_2f3c_092c[];
extern int far d_2f3c_0a44[];
extern int far d_2f3c_0b5c[];
extern int far d_2f3c_0c74[];
struct recpos { float x, y; int bg, fg, w; };
void f_a1c3_3505(int a);
int f_14d2_0ac1(void);
int f_14d2_0ab9(void);
void f_14d2_0609(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
extern int (far *d_5d9c_9fea)[16][8];
extern int d_5d9c_a346;
extern int d_5d9c_9ed7;
extern int d_5d9c_9c79;
extern int d_5d9c_9c77;
extern int d_5d9c_9c75;
extern int d_5d9c_9c73;
extern int d_5d9c_9c71;
extern int d_5d9c_9c6f;
extern int d_5d9c_9c6d;
extern int d_5d9c_9c6b;
extern float d_5d9c_9a7c;
extern float d_5d9c_9a78;
void f_14d2_073e(int c);
void f_14d2_07af(int x1, int y1, int x2, int y2);
unsigned f_14d2_09ce(char far *s, char far *set);
unsigned f_14d2_0a1c(char far *s, char far *set);
char far *f_14d2_0d40(void);
char far *f_14d2_0dc8(char far *s, unsigned i, unsigned n);
void f_1680_27aa(int x, int y, int colour, char far *s);
extern char far d_1f3e_387e[];
extern char far d_1f3e_38ce[];
extern char far d_1f3e_391e[];

/* the competitions' names */
static char far *d_5d9c_71bc[] = {
    "League Champions", "FA Cup", "Rumbelows Cup", "Zenith Cup", "Domark Trophy",
    "UEFA Cup", "Cup Winners Cup", "European Cup"
};

void f_9100_0000(void)
{
    for (d_5d9c_9f67 = 0; d_5d9c_9f67 <= 79; d_5d9c_9f67++) {
        d_5739_0000[5][d_5d9c_9f67] = f_14d2_0c2a(5) + 5;
        if (f_1680_0003(d_5d9c_9f67) == 0) {
            d_5739_0000[6][d_5d9c_9f67] = f_14d2_13eb(d_5739_0000[0][d_5d9c_9f67] * 8 / 3 + 27, 50);
        } else {
            d_5739_0000[0][d_5d9c_9f67] = 8;
            d_5739_0000[6][d_5d9c_9f67] = 50;
        }
        d_5739_0000[7][d_5d9c_9f67] = 0;
        d_5739_0000[9][d_5d9c_9f67] = 0;
        d_5739_0000[11][d_5d9c_9f67] = 2;
        d_2f3c_7e53[d_5d9c_9f67] = f_14d2_0c2a(9);
        for (d_5d9c_9fa1 = (f_1680_0003(d_5d9c_9f67) != 0) + 5; d_5d9c_9fa1 <= 11; d_5d9c_9fa1++)
            d_2f3c_7c73[d_5d9c_9fa1][d_5d9c_9f67] = 650;
        switch (d_5d9c_9f67 / 20) {
        case 0:
            strcpy(d_1f3e_5634, f_14d2_0d08(d_5d9c_08bc[d_5d9c_9f67]));
            if (strcmp(d_1f3e_5634, "EVERTON") == 0 || strcmp(d_1f3e_5634, "LIVERPOOL") == 0
                || strcmp(d_1f3e_5634, "ARSENAL") == 0 || strcmp(d_1f3e_5634, "TOTTENHAM") == 0
                || strcmp(d_1f3e_5634, "MAN UTD") == 0)
                d_2f3c_74f3[0][d_5d9c_9f67] = f_14d2_0c2a(16960) + 3000000L;
            else
                d_2f3c_74f3[0][d_5d9c_9f67] = f_14d2_0c2a(16960) + 1000000L;
            d_5739_0000[22][d_5d9c_9f67] = f_14d2_0c2a(3);
            break;
        case 1:
            d_2f3c_74f3[0][d_5d9c_9f67] = f_14d2_0c2a(41248) + 500000L;
            d_5739_0000[22][d_5d9c_9f67] = f_14d2_0c2a(3) + 1;
            break;
        case 2:
            d_2f3c_74f3[0][d_5d9c_9f67] = f_14d2_0c2a(53392) + 250000L;
            d_5739_0000[22][d_5d9c_9f67] = f_14d2_0c2a(3) + 2;
            break;
        case 3:
            d_2f3c_74f3[0][d_5d9c_9f67] = f_14d2_0c2a(59464) + 125000L;
            d_5739_0000[22][d_5d9c_9f67] = f_14d2_0c2a(3) + 2;
            break;
        }
        d_2f3c_74f3[0][d_5d9c_9f67] += f_1680_2782(d_5d9c_9f67);
    }
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 139; d_5d9c_9f69++) {
        d_2f3c_1b60[d_5d9c_9f69] = d_5d9c_9f69;
        d_2f3c_1048[d_5d9c_9f69] = 80;
    }
}

void f_9100_0300(void)
{
    FILE *fp;
    char buf[320];

    f_88c9_7813();
    f_88c9_7889(0, -1);
    if (f_14d2_0c45("savegame"))
        remove(buf);
    if (f_14d2_0c45("records") == 0) {
        fp = fopen("records", "wb");
        memset(buf, 0, 279);
        for (d_5d9c_9ccf = 1; d_5d9c_9ccf <= 140; d_5d9c_9ccf++)
            fwrite(buf, 1, 279, fp);
        fclose(fp);
    }
    if (f_14d2_0c45("history") == 0) {
        fp = fopen("history", "wb");
        fwrite(buf, 1, 133, fp);
        fclose(fp);
    }
    if (f_14d2_0c45("matchfax") == 0) {
        fp = fopen("matchfax", "wb");
        fwrite(buf, 1, 149, fp);
        fclose(fp);
    }
}

void f_9100_044e(void)
{
    f_88c9_7889(1, 0);
    f_88c9_7889(2, 0);
    d_5d9c_00e6 = fopen("history", "rb+");
    for (d_5d9c_9f91 = 0; d_5d9c_9f91 <= 1699; d_5d9c_9f91++) {
        f_9100_076a(d_5d9c_9f91, -1, d_5d9c_9f91 < 160 ? 0 : 1);
        f_88c9_7933(2, -1, d_5d9c_9f91, 1699);
    }
    fclose(d_5d9c_00e6);
    d_5d9c_00e6 = 0;
}

void f_9100_04ed(void)
{
    f_88c9_7889(2, 0);
    f_88c9_7889(3, 0);
    for (d_5d9c_9ccd = 0; d_5d9c_9ccd <= 459; d_5d9c_9ccd++) {
        f_88c9_7933(3, -1, d_5d9c_9ccd, 459);
        switch (d_5739_142e[d_5d9c_9ccd]) {
        case 0: d_5739_142e[d_5d9c_9ccd] = 20; break;
        case 1: d_5739_142e[d_5d9c_9ccd] = 17; break;
        case 2: d_5739_142e[d_5d9c_9ccd] = 15; break;
        case 3: d_5739_142e[d_5d9c_9ccd] = 12; break;
        case 4: d_5739_142e[d_5d9c_9ccd] = 10; break;
        case 5: d_5739_142e[d_5d9c_9ccd] = 7; break;
        case 6: d_5739_142e[d_5d9c_9ccd] = 5; break;
        case 7:
        case 8: d_5739_142e[d_5d9c_9ccd] = 3; break;
        }
        d_5d9c_9f19 = f_14d2_0c2a(100);
        if (d_5d9c_9f19 <= 5)
            d_5739_1992[d_5d9c_9ccd] = 0;
        else if (d_5d9c_9f19 <= 6)
            d_5739_1992[d_5d9c_9ccd] = 1;
        else if (d_5d9c_9f19 <= 70)
            d_5739_1992[d_5d9c_9ccd] = 2;
        else if (d_5d9c_9f19 <= 80)
            d_5739_1992[d_5d9c_9ccd] = 6;
        else if (d_5d9c_9f19 <= 85)
            d_5739_1992[d_5d9c_9ccd] = 3;
        else if (d_5d9c_9f19 <= 88)
            d_5739_1992[d_5d9c_9ccd] = 4;
        else if (d_5d9c_9f19 <= 93)
            d_5739_1992[d_5d9c_9ccd] = 5;
        else
            d_5739_1992[d_5d9c_9ccd] = 7;
    }
}

void f_9100_06bc(void)
{
    do {
        d_5d9c_9d01 = f_14d2_0c2a(447) + 53;
        d_5d9c_9cff = f_14d2_0c2a(747) + 53;
        strcpy(d_1f3e_40d0, d_5471_0a70[d_5d9c_9cff]);
        sprintf(d_1f3e_3d38, "%s %s", d_5471_0000[d_5d9c_9d01], d_1f3e_40d0);
    } while (strlen(d_1f3e_3d38) >= 18 || strlen(d_1f3e_40d0) >= 12);
}

void f_9100_076a(int player, int team, unsigned char mode)
{
    d_5d9c_9b30 = (team > -1 && mode < 2) ? -1 : 0;
again:
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 47; d_5d9c_9fa1++) {
        if (d_5d9c_9fa1 < 24) {
            d_483b_0000[d_5d9c_9fa1][player] = 0;
            d_1f3e_5be8[d_5d9c_9fa1][player] = 0;
            if (d_5d9c_9fa1 < 8)
                d_2f3c_85f7[d_5d9c_9fa1][player] = 0;
        } else
            d_3e42_0000[d_5d9c_9fa1 - 24][player] = 0;
    }
    f_9100_06bc();
    d_2f3c_d5bf[player] = d_5d9c_9d01;
    d_2f3c_e30b[player] = d_5d9c_9cff;
    do {
        d_5d9c_9dd7 = f_14d2_0c2a(1000) + 1;
    } while (!(((mode == 0 || mode == 2) && d_5d9c_9dd7 < 101) ||
               (mode == 1 && d_5d9c_9dd7 > 100) || mode == 3));
    d_1f3e_5be8[0][player] = d_5d9c_9dd7 < 101 ? -1 : 0;
    d_1f3e_5be8[1][player] = (d_5d9c_9dd7 > 100 && d_5d9c_9dd7 < 400) ||
        (d_5d9c_9dd7 > 760 && d_5d9c_9dd7 < 855) || d_5d9c_9dd7 > 998 ? -1 : 0;
    d_1f3e_5be8[2][player] = (d_5d9c_9dd7 > 399 && d_5d9c_9dd7 < 572) ||
        d_5d9c_9dd7 > 760 ? -1 : 0;
    d_1f3e_5be8[3][player] = (d_5d9c_9dd7 > 571 && d_5d9c_9dd7 < 761) ||
        d_5d9c_9dd7 > 854 ? -1 : 0;
    if (d_1f3e_5be8[0][player] == 0) {
        d_5d9c_9dd7 = f_14d2_0c2a(1000) + 1;
        d_1f3e_7680[0][player] = d_5d9c_9dd7 < 153 ||
            (d_5d9c_9dd7 > 873 && d_5d9c_9dd7 < 930) || d_5d9c_9dd7 > 981 ? -1 : 0;
        d_1f3e_7680[1][player] = (d_5d9c_9dd7 > 152 && d_5d9c_9dd7 < 331) ||
            d_5d9c_9dd7 > 929 ? -1 : 0;
        d_1f3e_7680[2][player] = (d_5d9c_9dd7 > 330 && d_5d9c_9dd7 < 982) ||
            d_5d9c_9dd7 > 998 ? -1 : 0;
        if (d_1f3e_5be8[3][player] != 0 && d_1f3e_7680[2][player] == 0 &&
            d_1f3e_5be8[2][player] == 0) {
            if (f_14d2_0c2a(2) == 0)
                d_1f3e_7680[2][player] = -1;
            else
                d_1f3e_5be8[2][player] = -1;
        }
        if (d_1f3e_5be8[2][player] != 0 && d_1f3e_7680[2][player] == 0 &&
            d_1f3e_5be8[3][player] == 0 && d_1f3e_5be8[1][player] == 0) {
            d_5d9c_9dd7 = f_14d2_0c2a(3);
            if (d_5d9c_9dd7 == 0)
                d_1f3e_7680[2][player] = -1;
            else if (d_5d9c_9dd7 == 1)
                d_1f3e_5be8[3][player] = -1;
            else
                d_1f3e_5be8[1][player] = -1;
        }
        d_483b_0000[1][player] = f_9100_2319(d_1f3e_5be8[2][player] || d_1f3e_5be8[3][player], 0);
        d_483b_0000[2][player] = f_9100_2319(f_14d2_13eb(d_1f3e_5be8[1][player] ? 2 : 0,
                                                         d_1f3e_5be8[2][player] ? 1 : 0), 0);
        d_483b_0000[3][player] = f_9100_2319(1,
            d_1f3e_7680[0][player] || d_1f3e_7680[1][player] ? -1 : 0);
        d_483b_0000[4][player] = f_9100_2319(1,
            d_1f3e_7680[2][player] && (d_1f3e_5be8[1][player] || d_1f3e_5be8[3][player]) ? -1 : 0);
        d_483b_0000[5][player] = f_9100_2319(d_1f3e_5be8[3][player] ? 1 : 0,
            d_1f3e_7680[0][player] || d_1f3e_7680[1][player] ? -1 : 0);
        d_483b_0000[6][player] = f_9100_2319(d_1f3e_5be8[2][player] || d_1f3e_5be8[3][player], 0);
        d_483b_0000[7][player] = f_9100_2319(f_14d2_13eb(d_1f3e_5be8[2][player] ? 1 : 0,
                                                         d_1f3e_5be8[3][player] ? 2 : 0),
            d_1f3e_7680[2][player] ? -1 : 0);
        for (d_5d9c_9e27 = 0; d_5d9c_9e27 <= 6; d_5d9c_9e27++) {
            d_5d9c_9ccb = 0;
            for (d_5d9c_9f49 = 2; d_5d9c_9f49 <= 10; d_5d9c_9f49++) {
                if (d_1f3e_5be8[(d_5d9c_9f49 + 1) / 3][player] &&
                    d_1f3e_7680[(d_5d9c_9f49 + 1) % 3][player] &&
                    d_5471_2507[d_5d9c_9e27][d_5d9c_9f49] > d_5d9c_9ccb)
                    d_5d9c_9ccb = d_5471_2507[d_5d9c_9e27][d_5d9c_9f49];
            }
            d_483b_0000[d_5d9c_9e27 + 1][player] =
                f_14d2_13eb(d_483b_0000[d_5d9c_9e27 + 1][player], d_5d9c_9ccb);
        }
    }
    d_483b_0000[10][player] = f_9100_2319(1, 0);
    d_483b_0000[11][player] = f_9100_2319(1, 0);
    d_483b_0000[13][player] = f_9100_2319(1, 0);
    if (mode < 2) {
        d_5d9c_9cc9 = f_14d2_0c2a(18 - d_1f3e_5be8[0][player] * 5) + 17;
        d_5d9c_9cc7 = f_14d2_0c2a(18 - d_1f3e_5be8[0][player] * 5) + 17;
        if (abs(d_5d9c_9cc9 - 28) < abs(d_5d9c_9cc7 - 28))
            d_483b_0000[17][player] = d_5d9c_9cc9;
        else
            d_483b_0000[17][player] = d_5d9c_9cc7;
    } else
        d_483b_0000[17][player] = f_14d2_0c2a(5) + 16;
    d_483b_0000[0][player] = f_14d2_0c2a(91) + 10;
    d_483b_0000[9][player] = f_9100_16d4(player);
    d_3e42_0000[17][player] = f_14d2_0c2a(10);
    d_5d9c_9a94 = 1.0;
    d_5d9c_9a90 = 1.0;
    switch (d_3e42_0000[17][player]) {
    case 0:
        d_5d9c_9cc5 = f_14d2_0c2a(3) + 1;
        d_5d9c_9cc3 = f_14d2_0c2a(5) + 1;
        d_5d9c_9cc1 = f_14d2_0c2a(20) + 1;
        d_5d9c_9a94 = 0.7;
        break;
    case 1:
        d_5d9c_9cc5 = f_14d2_0c2a(4) + 3;
        d_5d9c_9cc3 = f_14d2_0c2a(8) + 3;
        d_5d9c_9cc1 = f_14d2_0c2a(5) + 16;
        break;
    case 2:
        d_5d9c_9cc5 = f_14d2_0c2a(5) + 1;
        d_5d9c_9cc3 = f_14d2_0c2a(8) + 5;
        d_5d9c_9cc1 = f_14d2_0c2a(10) + 3;
        d_5d9c_9a94 = 2.0;
        d_5d9c_9a90 = 0.5;
        break;
    case 3:
        d_5d9c_9cc5 = f_14d2_0c2a(6) + 3;
        d_5d9c_9cc3 = f_14d2_0c2a(8) + 8;
        d_5d9c_9cc1 = f_14d2_0c2a(11) + 5;
        d_5d9c_9a94 = 0.5;
        d_5d9c_9a90 = 2.0;
        break;
    case 4:
        d_5d9c_9cc5 = f_14d2_0c2a(6) + 3;
        d_5d9c_9cc3 = f_14d2_0c2a(7) + 4;
        d_5d9c_9cc1 = f_14d2_0c2a(12) + 1;
        d_5d9c_9a90 = 0.75;
        d_5d9c_9a94 = 1.25;
        break;
    case 5:
        d_5d9c_9cc5 = f_14d2_0c2a(8) + 3;
        d_5d9c_9cc3 = f_14d2_0c2a(6) + 15;
        d_5d9c_9cc1 = f_14d2_0c2a(5) + 16;
        break;
    case 6:
        d_5d9c_9cc5 = f_14d2_0c2a(4) + 5;
        d_5d9c_9cc3 = f_14d2_0c2a(8) + 8;
        d_5d9c_9cc1 = f_14d2_0c2a(8) + 1;
        break;
    case 7:
        d_5d9c_9cc5 = f_14d2_0c2a(3) + 8;
        d_5d9c_9cc3 = f_14d2_0c2a(9) + 12;
        d_5d9c_9cc1 = f_14d2_0c2a(11) + 5;
        d_5d9c_9a94 = 1.5;
        break;
    case 8:
        d_5d9c_9cc5 = f_14d2_0c2a(8) + 2;
        d_5d9c_9cc3 = f_14d2_0c2a(11) + 10;
        d_5d9c_9cc1 = f_14d2_0c2a(11) + 10;
        d_5d9c_9a90 = 1.5;
        break;
    case 9:
        d_5d9c_9cc5 = f_14d2_0c2a(6) + 1;
        d_5d9c_9cc3 = f_14d2_0c2a(7) + 6;
        d_5d9c_9cc1 = f_14d2_0c2a(3) + 1;
        d_5d9c_9a8c = 0.75;
        break;
    }
    d_483b_0000[6][player] = f_14d2_144d(d_483b_0000[6][player] * d_5d9c_9a90, 20);
    d_483b_0000[7][player] = f_14d2_144d(d_483b_0000[7][player] * d_5d9c_9a94, 20);
    d_483b_0000[8][player] = d_5d9c_9cc5;
    d_483b_0000[12][player] = d_5d9c_9cc3;
    d_483b_0000[14][player] = d_5d9c_9cc1;
    if (d_1f3e_7680[2][player] && f_14d2_0c2a(4) > 0)
        d_483b_0000[22][player] = f_14d2_0c2a(11) + 10;
    else
        d_483b_0000[22][player] = f_14d2_0c2a(20) + 1;
    d_3e42_0000[18][player] = f_9100_16d4(player);
    f_9100_172e(player, mode);
    if (team > -1 || mode == 2) {
        d_5d9c_9f67 = team;
        if (d_5d9c_9f67 > -1 && mode < 2 &&
            f_1680_00fb(player) - f_1680_0037(d_5d9c_9f67) >= 4.0)
            goto again;
    } else if (mode < 2) {
        d_5d9c_9f67 = -1;
        d_5d9c_9de9 = 0;
        do {
            do {
                d_5d9c_9f69 = f_14d2_0c2a(80);
            } while (d_5739_023e[d_5d9c_9f69] >= f_a1c3_2107(d_5d9c_9f69) ||
                     (mode != 1 && (mode != 0 || d_5739_02e2[d_5d9c_9f69] >= 2)));
            d_5d9c_9d65 = d_5471_2c14[d_2f3c_5905[d_2f3c_7f93[0][d_5d9c_9f69]]][d_3e42_0000[17][player]];
            if ((abs(d_5d9c_9ecf = f_1680_00fb(player) - f_1680_0037(d_5d9c_9f69)) < d_5d9c_9cbf ||
                 d_5d9c_9f67 == -1) &&
                d_5d9c_9ecf < 4 && f_14d2_0c2a(3) + 8 > d_5d9c_9d65) {
                d_5d9c_9f67 = d_5d9c_9f69;
                d_5d9c_9cbf = abs(d_5d9c_9ecf);
            }
            d_5d9c_9de9++;
        } while (d_5d9c_9de9 < 10 || (d_5d9c_9de9 != 40 && d_5d9c_9f67 <= -1));
        if (d_5d9c_9f67 == -1)
            goto again;
    } else if (mode == 3) {
        d_5d9c_9f67 = -1;
        d_5d9c_9de9 = 0;
        do {
            d_5d9c_9f67 = f_14d2_0c2a(80);
            d_5d9c_9de9++;
        } while (d_5739_023e[d_5d9c_9f67] >= d_5d9c_9de9 / 80 + 14);
    }
    if (mode == 0) {
        if (d_5739_02e2[d_5d9c_9f67] == 0 && d_3e42_0000[5][player] < 40)
            goto again;
        if (d_5739_02e2[d_5d9c_9f67] > 0 && d_3e42_0000[5][player] > 5)
            goto again;
    }
    f_9100_19d0(player, d_5d9c_9f67);
    d_1f3e_b256[player] = mode > 1 ? -1 : 0;
    d_483b_0000[18][player] = d_5d9c_9f67;
    d_3e42_0000[10][player] = d_5d9c_9cbd;
    d_483b_0000[21][player] = 100;
    d_2f3c_addb[player] = f_8352_3455(player, d_5d9c_9f67);
    d_5739_023e[d_5d9c_9f67]++;
    d_5739_02e2[d_5d9c_9f67] -= d_1f3e_5be8[0][player];
}

int f_9100_16d4(int p)
{
    d_5d9c_9d07 = d_483b_0000[0][p] + f_14d2_0c2a(191 - d_483b_0000[0][p]) + 10;
    return d_5d9c_9d07;
}

void f_9100_172e(int p, unsigned char c)
{
    memset(d_1f3e_3c20, 0, 152);
    d_5d9c_9cbb = d_483b_0000[17][p] + 1;
    d_5d9c_9cb9 = 1;
    d_5d9c_9cb7 = 0;
    d_5d9c_9d0b = 0;
    if (c < 2) {
        d_5d9c_9b2f = 0;
        d_5d9c_9d8d = f_14d2_0c2a(20) + 1;
        d_5d9c_9cbb = 17;
        for (d_5d9c_9f75 = 16; d_5d9c_9f75 <= d_483b_0000[17][p] - 1; d_5d9c_9f75++) {
            if (d_5d9c_9f75 == d_5d9c_9cbb)
                d_5d9c_9cbb += f_8352_3666(d_5d9c_9f75);
            if (f_9100_21b6(p, d_5d9c_9d8d)) {
                d_5d9c_9cb7 = d_5d9c_9f75;
                d_5d9c_9cb5 = f_9100_2281(p, d_5d9c_9d8d);
                d_5d9c_9cb9 = f_14d2_0c2a(46) + 1;
                if (d_5d9c_9cb9 > 4) {
                    d_5d9c_9f5f = (d_5d9c_9cb9 - 4) / 42.0 * 50.0;
                    f_9100_1c1d(p, d_5d9c_9d8d, d_5d9c_9f5f);
                    d_5d9c_9cb3 = d_5d9c_9cb1;
                    d_5d9c_9caf = d_5d9c_9d0b;
                    d_5d9c_9cad = d_5d9c_9ca3;
                    d_5d9c_9d8d = d_5d9c_9cb5;
                    f_9100_1c1d(p, d_5d9c_9d8d, 50 - d_5d9c_9f5f);
                    d_5d9c_9cb1 += d_5d9c_9cb3;
                    d_5d9c_9d0b += d_5d9c_9caf;
                    d_5d9c_9ca3 += d_5d9c_9cad;
                } else {
                    d_5d9c_9d8d = d_5d9c_9cb5;
                    f_9100_1c1d(p, d_5d9c_9d8d, 50);
                }
                d_5d9c_9cbb = d_5d9c_9f75 + f_8352_3666(d_5d9c_9f75);
            } else {
                f_9100_1c1d(p, d_5d9c_9d8d, 50);
            }
            f_9100_3cea(p, d_5d9c_9f75, d_5d9c_9d0b, d_5d9c_9cb1);
        }
    }
    if (d_5d9c_9d0b > 0) {
        d_3e42_0000[5][p] = d_5d9c_9d0b;
        d_3e42_0000[6][p] = d_5d9c_9d9b;
        d_3e42_0000[7][p] = d_5d9c_9ca3;
        d_3e42_0000[8][p] = d_5d9c_9cab;
        d_3e42_0000[9][p] = d_5d9c_9ca9;
        d_2f3c_9343[p] = d_5d9c_9cb1;
    }
    d_2f3c_a08f[p] = (d_5d9c_9fa7 + d_5d9c_9cbb - d_483b_0000[17][p]) * 100 + d_5d9c_9cb9;
}

void f_9100_19d0(int p, int q)
{
    FILE *fp;

    d_5d9c_9cbd = 255;
    d_5d9c_9ca7 = (int)d_3e42_0000[20][p];
    for (d_5d9c_9ccf = d_5d9c_9ca7 - 1; d_5d9c_9ccf >= 0; d_5d9c_9ccf--) {
        d_5d9c_9d8d = d_1f3e_3c21[d_5d9c_9ccf][1] - 32;
        if (d_5d9c_9ca7 - 1 == d_5d9c_9ccf) {
            d_5d9c_9cf3 = q;
            d_5d9c_9d17 = d_5d9c_9d8d;
        } else if (d_5d9c_9d8d != d_5d9c_9d17) {
            d_5d9c_9b2e = d_5d9c_9cf3 == q && d_5d9c_9cbd == 255 ? -1 : 0;
            d_5d9c_9ced = d_5d9c_9cf3;
            d_5d9c_9cf3 = -1;
            d_5d9c_9de9 = 0;
            do {
                do {
                    if (d_5d9c_9b30) {
                        d_5d9c_9f69 = f_14d2_0c2a(60) + 80;
                        d_5d9c_9ca5 = f_1680_0037(d_5d9c_9f69 + 320);
                    } else {
                        d_5d9c_9f69 = f_14d2_0c2a(80);
                        d_5d9c_9ca5 = f_1680_0037(d_5d9c_9f69);
                    }
                } while (d_5d9c_9f69 == d_5d9c_9ced);
                d_5d9c_9ecf = abs(d_5d9c_9ca5 - d_5d9c_9d8d);
                if (d_5d9c_9de9 / 10 + 3 > d_5d9c_9ecf) {
                    d_5d9c_9cf3 = d_5d9c_9f69;
                    d_5d9c_9cbf = d_5d9c_9ecf;
                }
                d_5d9c_9de9++;
            } while (d_5d9c_9cf3 == -1);
            d_5d9c_9d17 = d_5d9c_9d8d;
            if (d_5d9c_9b2e)
                d_5d9c_9cbd = d_5d9c_9cf3;
        }
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 139; d_5d9c_9f69++) {
            if (d_2f3c_1b60[d_5d9c_9f69] == d_5d9c_9cf3) {
                d_1f3e_3c21[d_5d9c_9ccf][1] = d_5d9c_9f69 + 32;
                d_5d9c_9f69 = 139;
            }
        }
    }
    if (d_5d9c_00e6 == NULL) {
        fp = fopen("history", "rb+");
        fseek(fp, (long)p * 133, 0);
        fwrite(d_1f3e_3c20, 1, 133, fp);
        fclose(fp);
    } else {
        fseek(d_5d9c_00e6, (long)p * 133, 0);
        fwrite(d_1f3e_3c20, 1, 133, d_5d9c_00e6);
    }
}

void f_9100_1c1d(int p, int a, int c)
{
    char far *s;

    d_5d9c_9dbb = f_14d2_13eb(f_14d2_144d(d_483b_0000[0][p] + f_14d2_0c2a(20) - f_14d2_0c2a(20),
                                          d_483b_0000[9][p]), 10);
    d_5d9c_9d0b = f_14d2_13eb(f_14d2_144d((d_5d9c_9dbb / 10.0 - a) * 16 + 70, 40) / 40.0 * c, 0);
    d_5d9c_9d0b = f_14d2_13eb(f_14d2_13eb(f_14d2_0c2a(d_5d9c_9d0b), f_14d2_0c2a(d_5d9c_9d0b)),
                              f_14d2_0c2a(d_5d9c_9d0b));
    d_5d9c_9d9b = 0;
    d_5d9c_9ca3 = 0;
    d_5d9c_9cb1 = 0;
    if (d_5d9c_9d0b > 0) {
        d_5d9c_9b2f = -1;
        d_5d9c_9a88 = f_14d2_13c3(f_14d2_1425(d_5d9c_9dbb / 40.0 + 3.0, 8.0), 3.0);
        d_5d9c_9cb1 = f_14d2_1425(f_14d2_13c3((f_14d2_0eef() - f_14d2_0eef()) *
                                              (2.0 - d_5d9c_9d0b * 0.03) + d_5d9c_9a88, 1.0),
                                  10.0) * d_5d9c_9d0b + 0.5;
        d_5d9c_9a84 = (float)d_5d9c_9cb1 / d_5d9c_9d0b;
        d_5d9c_9cab = d_5d9c_9a84;
        d_5d9c_9ca9 = d_5d9c_9cab + (d_5d9c_9cab < d_5d9c_9a84);
        if (d_5d9c_9d0b > 2) {
            d_5d9c_9cab = f_14d2_13eb(d_5d9c_9cab - f_14d2_0c2a(2), 1);
            d_5d9c_9ca9 = f_14d2_144d(d_5d9c_9ca9 + f_14d2_0c2a(2), 10);
        }
        d_5d9c_9ca3 = (f_14d2_13eb(f_14d2_0c2a(d_483b_0000[11][p]), f_14d2_0c2a(d_483b_0000[11][p])) + 1) *
                      ((float)d_5d9c_9d0b / c * 50.0) / 20.0;
        d_5d9c_9ca3 = d_5d9c_9ca3 / 5.0 * 5.0;
        if (d_1f3e_5be8[0][p] == 0) {
            if (d_1f3e_5be8[3][p])
                d_5d9c_9ca1 = f_14d2_144d((d_1f3e_5be8[2][p] ? f_14d2_0c2a(2) : 0) +
                                          (d_1f3e_5be8[1][p] ? f_14d2_0c2a(2) : 0) * 2 + 1, 3);
            else if (d_1f3e_5be8[2][p])
                d_5d9c_9ca1 = (d_1f3e_5be8[1][p] ? f_14d2_0c2a(2) : 0) + 2;
            else if (d_1f3e_5be8[1][p])
                d_5d9c_9ca1 = 3;
            d_5d9c_9a80 = (d_483b_0000[7][p] * 0.03 + 0.07) / d_5d9c_9ca1 - f_14d2_0eef() / 5.0 +
                          f_14d2_0eef() / 5.0;
            d_5d9c_9d9b = f_14d2_13eb(0, f_14d2_0c2a(3) - f_14d2_0c2a(3) + d_5d9c_9d0b * d_5d9c_9a80 + 0.5);
            if (d_5d9c_9d9b < 0 || d_5d9c_9d9b > 50)
                d_5d9c_9d9b = d_5d9c_9d9b;
        }
    }
    if (d_5d9c_9b2f) {
        d_5d9c_9ca7 = (int)d_3e42_0000[20][p];
        if (d_5d9c_9ca7 > 21)
            d_5d9c_9c9f = d_5d9c_9ca7 - 22;
        else
            d_5d9c_9c9f = d_5d9c_9ca7;
        s = d_1f3e_3c21[d_5d9c_9c9f];
        *s = d_5d9c_9fa7 + 99 - (d_483b_0000[17][p] - d_5d9c_9f75);
        s++;
        *s = a + 32;
        s++;
        *s = d_5d9c_9d0b + 32;
        s++;
        *s = d_5d9c_9d9b + 32;
        s++;
        *s = d_5d9c_9cb1 >> 8;
        s++;
        *s = d_5d9c_9cb1 & 0xff;
        d_3e42_0000[20][p] = d_5d9c_9ca7 + 1;
    }
}

char f_9100_21b6(int p, int n)
{
    d_5d9c_9b2c = 0;
    d_5d9c_9d4b = d_483b_0000[0][p] * 0.1;
    if ((n + f_14d2_0c2a(3) < d_5d9c_9d4b && f_14d2_0c2a(5) == 0) ||
        (n - 2.5 - f_14d2_0c2a(3) > d_5d9c_9d4b && f_14d2_0c2a(5) == 0) ||
        f_14d2_0c2a(10) == 0)
        d_5d9c_9b2c = -1;
    return d_5d9c_9b2c;
}

int f_9100_2281(int p, int n)
{
    d_5d9c_9de9 = 0;
    do {
        do {
            d_5d9c_9f51 = f_14d2_0c2a(20) + 1;
        } while (d_5d9c_9f51 == n);
        d_5d9c_9d4b = d_483b_0000[0][p] * 0.1;
        if (abs(d_5d9c_9f51 - d_5d9c_9d4b) < abs(n - d_5d9c_9d4b) || d_5d9c_9de9 == 0)
            d_5d9c_9cb5 = d_5d9c_9f51;
        d_5d9c_9de9++;
    } while (d_5d9c_9cb5 <= -1 || d_5d9c_9de9 < 5);
    return d_5d9c_9cb5;
}

char f_9100_2319(int a, char b)
{
    if (a == 0) {
        d_5d9c_9e73 = 1;
        d_5d9c_9e71 = 2;
    } else if (a == 1) {
        d_5d9c_9e73 = 0;
        d_5d9c_9e71 = 2;
    } else {
        d_5d9c_9e73 = 0;
        d_5d9c_9e71 = 1;
    }
    switch (f_14d2_0c2a(20) + 1) {
    case 1:
    case 2:
    case 3:
    case 4:
        d_5d9c_9f29 = d_5d9c_9e73;
        break;
    case 5:
    case 6:
    case 7:
    case 8:
        d_5d9c_9f29 = d_5d9c_9e71;
        break;
    default:
        d_5d9c_9f29 = a;
    }
    return d_5d9c_9f29 = f_14d2_144d(d_5d9c_9f29 * 7 + f_14d2_0c2a(7)
                                     + (b ? f_14d2_0c2a(5) : 0) + 1, 20);
}

void f_9100_23c7(void)
{
    f_a1c3_27e4("");
    f_14d2_0722(16);
    f_14d2_075a(40, 34, 288, 177);
    f_14d2_0722(20);
    f_14d2_075a(36, 30, 284, 173);
    for (d_5d9c_9c9d = 0; d_5d9c_9c9d <= 6; d_5d9c_9c9d++)
        f_9100_243d(d_5d9c_9c9d, 0);
}

void f_9100_243d(int a, char c)
{
    char buf[320];

    sprintf(buf, "%*s", strlen(d_5d9c_00ba[a]) / 2 + 15, d_5d9c_00ba[a]);
    f_1680_2ea0(5.25, a * 2.5 + 4.875, 0, c * 8 + 9, 237, buf);
}

void f_9100_24d0(int a, char c, int i, int n)
{
    char buf[320];

    sprintf(buf, "%*s", strlen(d_5d9c_00ba[a]) / 2 + 15, d_5d9c_00ba[a]);
    f_1680_312c(5.25, a * 2.5 + 4.875, 0, c * 8 + 9, 237, 237L * i / n, buf);
}

void f_9100_2583(void)
{
    d_5d9c_9b2d = 0;
    for (d_5d9c_9f4f = 646; d_5d9c_9f4f <= d_5d9c_9ef3 + 645; d_5d9c_9f4f++) {
        d_5d9c_9f55 = 0;
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 19; d_5d9c_9fa1++)
            if (d_2f3c_1d44[d_5d9c_9fa1] < d_2f3c_1d44[d_5d9c_9f55])
                d_5d9c_9f55 = d_5d9c_9fa1;
        d_5d9c_a054 = f_14d2_16bc(d_5d9c_a35e, 0);
        if (d_2f3c_1d44[d_5d9c_9f55] < d_5d9c_a054[d_5d9c_9f4f]) {
            d_2f3c_1d44[d_5d9c_9f55] = d_5d9c_a054[d_5d9c_9f4f];
            d_5d9c_9fd2 = f_14d2_16bc(d_5d9c_a34e, 1);
            strcpy(d_5d9c_9fd2 + d_5d9c_9f55 * 80, f_a1c3_229c(d_5d9c_9f4f, 0));
            if (d_2f3c_5167[d_5d9c_9f4f] < 255)
                strcpy(d_1f3e_5634, d_5d9c_08bc[d_2f3c_5167[d_5d9c_9f4f]]);
            else
                strcpy(d_1f3e_5634, "NO CLUB");
            strcpy(d_5d9c_9fd2 + d_5d9c_9f55 * 80 + 1600, d_1f3e_5634);
            d_5d9c_9b2d = -1;
        }
    }
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 18; d_5d9c_9f6d++)
        for (d_5d9c_9fa1 = d_5d9c_9f6d + 1; d_5d9c_9fa1 <= 19; d_5d9c_9fa1++)
            if (d_2f3c_1d44[d_5d9c_9f6d] < d_2f3c_1d44[d_5d9c_9fa1]) {
                f_14d2_148f(&d_2f3c_1d44[d_5d9c_9f6d], &d_2f3c_1d44[d_5d9c_9fa1], 4);
                d_5d9c_9fd2 = f_14d2_16bc(d_5d9c_a34e, 1);
                f_14d2_148f(d_5d9c_9fd2 + d_5d9c_9f6d * 80,
                            d_5d9c_9fd2 + d_5d9c_9fa1 * 80, 80);
                f_14d2_148f(d_5d9c_9fd2 + d_5d9c_9f6d * 80 + 1600,
                            d_5d9c_9fd2 + d_5d9c_9fa1 * 80 + 1600, 80);
            }
    if (d_5d9c_9b2d != 0)
        f_992a_6bab();
}

void f_9100_2832(void)
{
    int d[3];
    int a[11];
    int b[11];
    int c[11];
    unsigned k;

    for (d_5d9c_9f49 = 0; d_5d9c_9f49 <= 79; d_5d9c_9f49++) {
        d_5d9c_9f67 = d_2f3c_2794[0][d_5d9c_9f49];
        d_5739_0000[0][d_5d9c_9f67] = (d_5739_0000[0][d_5d9c_9f67] * 2 + 8) / 3;
        if (d_5739_0000[11][d_5d9c_9f67] == 1 && d_5d9c_9f49 < 79)
            d_2f3c_74f3[0][d_5d9c_9f67] = d_2f3c_74f3[0][d_5d9c_9f67]
                + (f_1680_2782(d_5d9c_9f67 + 20) - f_1680_2782(d_5d9c_9f67));
        else if (d_5739_0000[11][d_5d9c_9f67] > 2 && d_5d9c_9f49 > 0)
            d_2f3c_74f3[0][d_5d9c_9f67] = d_2f3c_74f3[0][d_5d9c_9f67]
                + (f_1680_2782(d_5d9c_9f67 - 20) - f_1680_2782(d_5d9c_9f67));
        d_5739_0000[11][d_5d9c_9f67] = 2;
    }
    d_5d9c_a022[0] = d_2f3c_2794[0][0];
    d_5d9c_a022[1] = d_2f3c_27e4[0][0];
    if (d_5d9c_a022[0] == d_5d9c_a022[1])
        d_5d9c_a022[1] = d_2f3c_2794[0][1];
    a[0] = d_2f3c_27e4[6][0];
    a[1] = d_2f3c_2794[0][0];
    a[2] = d_2f3c_27e4[6][1];
    for (d_5d9c_9f69 = 3; d_5d9c_9f69 <= 10; d_5d9c_9f69++)
        a[d_5d9c_9f69] = d_2f3c_2794[0][d_5d9c_9f69 - 2];
    b[0] = d_2f3c_27e4[5][0];
    b[1] = d_2f3c_27e4[0][0];
    b[2] = d_2f3c_27e4[5][1];
    b[3] = d_2f3c_27e4[0][1];
    for (d_5d9c_9f69 = 4; d_5d9c_9f69 <= 10; d_5d9c_9f69++)
        b[d_5d9c_9f69] = d_2f3c_2794[0][d_5d9c_9f69 - 3];
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 10; d_5d9c_9f69++)
        c[d_5d9c_9f69] = d_2f3c_2794[0][d_5d9c_9f69 + 1];

    for (d_5d9c_9d8f = 0; d_5d9c_9d8f <= 1; d_5d9c_9d8f++)
        for (d_5d9c_9d95 = d_5d9c_9d8f + 1; d_5d9c_9d95 <= 10; d_5d9c_9d95++)
            if (a[d_5d9c_9d95] == a[d_5d9c_9d8f]) {
                for (k = d_5d9c_9d95; k < 10; k++)
                    a[k] = a[k + 1];
                d_5d9c_9d95--;
                a[10] = -1;
            }
    for (d_5d9c_9d8f = 0; d_5d9c_9d8f <= 1; d_5d9c_9d8f++)
        for (d_5d9c_9d95 = 0; d_5d9c_9d95 <= 10; d_5d9c_9d95++)
            if (b[d_5d9c_9d95] == a[d_5d9c_9d8f]) {
                for (k = d_5d9c_9d95; k < 10; k++)
                    b[k] = b[k + 1];
                d_5d9c_9d95--;
                b[10] = -1;
            }
    for (d_5d9c_9d8f = 0; d_5d9c_9d8f <= 1; d_5d9c_9d8f++)
        for (d_5d9c_9d95 = 0; d_5d9c_9d95 <= 10; d_5d9c_9d95++)
            if (c[d_5d9c_9d95] == a[d_5d9c_9d8f]) {
                for (k = d_5d9c_9d95; k < 10; k++)
                    c[k] = c[k + 1];
                d_5d9c_9d95--;
                c[10] = -1;
            }
    for (d_5d9c_9d8f = 0; d_5d9c_9d8f <= 1; d_5d9c_9d8f++)
        for (d_5d9c_9d95 = d_5d9c_9d8f + 1; d_5d9c_9d95 <= 10; d_5d9c_9d95++)
            if (b[d_5d9c_9d95] == b[d_5d9c_9d8f]) {
                for (k = d_5d9c_9d95; k < 10; k++)
                    b[k] = b[k + 1];
                d_5d9c_9d95--;
                b[10] = -1;
            }
    for (d_5d9c_9d8f = 0; d_5d9c_9d8f <= 1; d_5d9c_9d8f++)
        for (d_5d9c_9d95 = 0; d_5d9c_9d95 <= 10; d_5d9c_9d95++)
            if (c[d_5d9c_9d95] == b[d_5d9c_9d8f]) {
                for (k = d_5d9c_9d95; k < 10; k++)
                    c[k] = c[k + 1];
                d_5d9c_9d95--;
                c[10] = -1;
            }

    d[0] = d_2f3c_27e4[7][0];
    d[1] = d_2f3c_27e4[7][1];
    d[2] = d_2f3c_27e4[7][2];
    memset(d_2f3c_27e4, -1, 0x500);
    for (d_5d9c_9d8f = 0; d_5d9c_9d8f <= 3; d_5d9c_9d8f++) {
        d_2f3c_27e4[4][d_5d9c_9d8f] = c[d_5d9c_9d8f];
        if (d_5d9c_9d8f < 2) {
            d_2f3c_27e4[5][d_5d9c_9d8f] = b[d_5d9c_9d8f];
            d_2f3c_27e4[6][d_5d9c_9d8f] = a[d_5d9c_9d8f];
        }
    }
    for (d_5d9c_9f69 = 48; d_5d9c_9f69 <= 79; d_5d9c_9f69++)
        d_2f3c_27e4[1][d_5d9c_9f69 - 48] = d_2f3c_2794[0][d_5d9c_9f69];
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 47; d_5d9c_9f69++)
        d_2f3c_27e4[1][d_5d9c_9f69 + 32] = d_2f3c_2794[0][d_5d9c_9f69];

    for (d_5d9c_9f61 = 0; d_5d9c_9f61 <= 2; d_5d9c_9f61++) {
        for (d_5d9c_9f49 = 0; d_5d9c_9f49 <= 1; d_5d9c_9f49++) {
            d_2f3c_567b[d_2f3c_7f93[0][d_2f3c_2794[d_5d9c_9f61 + 1][d_5d9c_9f49]]] =
                d_2f3c_567b[d_2f3c_7f93[0][d_2f3c_2794[d_5d9c_9f61 + 1][d_5d9c_9f49]]] + 50;
            f_1680_0d7a(d_2f3c_2794[d_5d9c_9f61][d_5d9c_9f49 + 18],
                        d_2f3c_2794[d_5d9c_9f61 + 1][d_5d9c_9f49]);
        }
        d_2f3c_567b[d_2f3c_7f93[0][d[d_5d9c_9f61]]] =
            d_2f3c_567b[d_2f3c_7f93[0][d[d_5d9c_9f61]]] + 50;
        f_1680_0d7a(d_2f3c_2794[d_5d9c_9f61][17], d[d_5d9c_9f61]);
    }

    d_5d9c_9c9b = 0;
    for (d_5d9c_9f69 = 39; d_5d9c_9f69 >= 0; d_5d9c_9f69--)
        if (f_1680_07cb(d_5d9c_9f69) == 0) {
            d_2f3c_27e4[2][d_5d9c_9c9b] = d_5d9c_9f69;
            d_5d9c_9c9b++;
        }
    d_5d9c_9ee3 = d_5d9c_9c9b - 32;
    d_5d9c_9fa9 = d_2f3c_2794[3][19];
    f_88c9_4cf8(d_5d9c_9fa9, 2);
    f_9100_23c7();
}

void f_9100_2f2d(int a)
{
    if (d_5d9c_9fa7 > 1) {
        d_5d9c_9de9 = 0;
        do {
            d_5d9c_9f69 = f_14d2_0c2a(60) + 400;
            d_5d9c_9d8d = d_5739_142e[d_5d9c_9f69];
            if (d_5d9c_9d8d > d_5d9c_9f5f || d_5d9c_9de9 == 0) {
                d_5d9c_9f5f = d_5739_142e[d_5d9c_9f69];
                d_5d9c_9c99 = d_5d9c_9f69;
            }
            d_5d9c_9de9++;
        } while (d_5d9c_9de9 < 30);
        f_14d2_148f((void *)&d_5d9c_08bc[a], (void *)&d_5d9c_0524[d_5d9c_9c99], 2);
        d_5739_0000[0][a] = 10;
        d_5739_0000[1][a] = f_14d2_0c2a(10) + 10;
        f_14d2_148f((void *)&d_5739_0000[2][a], (void *)&d_5739_15fa[d_5d9c_9c99], 1);
        f_14d2_148f((void *)&d_5739_0000[3][a], (void *)&d_5739_17c6[d_5d9c_9c99], 1);
        d_5739_0000[4][a] = 13;
        d_5739_0000[5][a] = f_14d2_0c2a(5) + 5;
        d_5739_0000[6][a] = 100;
        d_5739_0000[11][a] = 2;
        d_5739_0000[22][a] = f_14d2_0c2a(3) + 2;
        d_2f3c_74f3[0][a] = f_14d2_0c2a(59464) + 125000L;
        d_2f3c_74f3[0][a] += f_1680_2782(a);
        d_5739_142e[d_5d9c_9c99] = 10;
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 0x8b; d_5d9c_9fa1++) {
            if (d_2f3c_1b60[d_5d9c_9fa1] == a)
                d_2f3c_1b60[d_5d9c_9fa1] = d_5d9c_9c99 - 320;
            else if (d_2f3c_1b60[d_5d9c_9fa1] == d_5d9c_9c99 - 320)
                d_2f3c_1b60[d_5d9c_9fa1] = a;
        }
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 79; d_5d9c_9fa1++)
            for (d_5d9c_9f55 = 0; d_5d9c_9f55 <= 7; d_5d9c_9f55++) {
                if (d_2f3c_27e4[d_5d9c_9f55][d_5d9c_9fa1] == a)
                    d_2f3c_27e4[d_5d9c_9f55][d_5d9c_9fa1] = d_5d9c_9c99 + 80;
                else if (d_2f3c_27e4[d_5d9c_9f55][d_5d9c_9fa1] == d_5d9c_9c99 + 80)
                    d_2f3c_27e4[d_5d9c_9f55][d_5d9c_9fa1] = a;
            }
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 1; d_5d9c_9fa1++) {
            if (d_5d9c_a022[d_5d9c_9fa1] == a)
                d_5d9c_a022[d_5d9c_9fa1] = d_5d9c_9c99 + 80;
            else if (d_5d9c_a022[d_5d9c_9fa1] == d_5d9c_9c99 + 80)
                d_5d9c_a022[d_5d9c_9fa1] = a;
        }
        f_14d2_148f((void *)&d_5739_57ea[0][a], (void *)&d_5739_57ea[0][d_5d9c_9c99 - 320], 1);
        f_14d2_148f((void *)&d_5739_57ea[1][a], (void *)&d_5739_57ea[1][d_5d9c_9c99 - 320], 1);
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 0x6a3; d_5d9c_9fa1++) {
            if (d_3e42_0000[10][d_5d9c_9fa1] == a)
                d_3e42_0000[10][d_5d9c_9fa1] = d_5d9c_9c99 - 320;
            else if (d_3e42_0000[10][d_5d9c_9fa1] == d_5d9c_9c99 - 320)
                d_3e42_0000[10][d_5d9c_9fa1] = a;
        }
        f_992a_7aeb(a, d_5d9c_9c99 - 320);
        f_992a_7d4d(a, d_5d9c_9c99 + 80);
        for (d_5d9c_9cf9 = 0; d_5d9c_9cf9 <= 6; d_5d9c_9cf9++)
            d_2f3c_7f93[d_5d9c_9cf9][a] = 650;
        for (d_5d9c_9ba5 = 0; d_5d9c_9ba5 <= 6; d_5d9c_9ba5++) {
            d_5d9c_9ce1 = -1;
            for (d_5d9c_9f4f = 0; d_5d9c_9f4f <= 0x285; d_5d9c_9f4f++)
                if (d_2f3c_5167[d_5d9c_9f4f] == 0xff) {
                    d_5d9c_9d4b = f_14d2_13eb(d_2f3c_5e19[d_5d9c_9f4f],
                                  f_14d2_13eb(d_2f3c_60a3[d_5d9c_9f4f],
                                  f_14d2_13eb(d_2f3c_632d[d_5d9c_9f4f], d_2f3c_65b7[d_5d9c_9f4f])));
                    if (d_5d9c_9d4b < d_5d9c_9cbf || d_5d9c_9ce1 == -1) {
                        d_5d9c_9ce1 = d_5d9c_9f4f;
                        d_5d9c_9cbf = d_5d9c_9d4b;
                    }
                }
            f_88c9_422a(d_5d9c_9ce1, a, 0);
        }
        d_5739_13dc[a] = 0;
        strcpy(d_1f3e_0ab4[a], "");
        d_5739_023e[a] = 0;
        d_5739_0290[a] = 0;
        d_5739_02e2[a] = 0;
        d_5d9c_9c97 = 0;
        for (d_5d9c_9f91 = 0; d_5d9c_9f91 <= 0x6a3; d_5d9c_9f91++)
            if (d_483b_0000[18][d_5d9c_9f91] == a) {
                f_9100_076a(d_5d9c_9f91, a, (d_5d9c_9c97 < 2) + 1);
                d_5d9c_9c97++;
                f_8352_15e0(d_5d9c_9f91, -1);
            }
    }
}

void f_9100_34d9(void)
{
    f_9100_243d(1, 0);
    f_9100_243d(2, 0);
    for (d_5d9c_9c95 = 1; d_5d9c_9c95 <= 3; d_5d9c_9c95++)
        f_1680_341b();
    for (d_5d9c_9f91 = 0; d_5d9c_9f91 <= 0x6a3; d_5d9c_9f91++) {
        f_9100_24d0(2, -1, d_5d9c_9f91, 1699);
        f_9100_3cea(d_5d9c_9f91, d_483b_0000[17][d_5d9c_9f91], d_3e42_0000[0][d_5d9c_9f91], d_2f3c_85f7[0][d_5d9c_9f91]);
        f_9100_3edf(d_5d9c_9f91);
        d_483b_0000[8][d_5d9c_9f91] = f_14d2_144d(d_483b_0000[8][d_5d9c_9f91] + (f_14d2_0c2a(3) == 0), 9);
        d_483b_0000[11][d_5d9c_9f91] = f_14d2_13eb(d_483b_0000[11][d_5d9c_9f91] - (f_14d2_0c2a(3) == 0), 1);
        d_483b_0000[12][d_5d9c_9f91] = f_14d2_144d(d_483b_0000[12][d_5d9c_9f91] + (f_14d2_0c2a(3) == 0), 20);
        d_483b_0000[14][d_5d9c_9f91] = f_14d2_13eb(d_483b_0000[14][d_5d9c_9f91] - (f_14d2_0c2a(3) == 0), 1);
        d_483b_0000[17][d_5d9c_9f91]++;
        for (d_5d9c_9f6d = 29; d_5d9c_9f6d <= 33; d_5d9c_9f6d++)
            d_3e42_0000[d_5d9c_9f6d - 24][d_5d9c_9f91] = d_3e42_0000[d_5d9c_9f6d - 29][d_5d9c_9f91];
        d_3e42_0000[7][d_5d9c_9f91] = d_3e42_0000[7][d_5d9c_9f91] - d_3e42_0000[7][d_5d9c_9f91] % 5;
        d_2f3c_9343[d_5d9c_9f91] = d_2f3c_85f7[0][d_5d9c_9f91];
    }
}

void f_9100_3827(void)
{
    char buf[320];
    char title[80];
    char text[80];

    f_9100_243d(3, 0);
    f_9100_243d(4, 0);
    for (d_5d9c_9f91 = 0; d_5d9c_9f91 <= 0x6a3; d_5d9c_9f91++) {
        f_9100_24d0(4, -1, d_5d9c_9f91, 1699);
        d_5d9c_9cf3 = d_483b_0000[18][d_5d9c_9f91];
        d_5d9c_9d11 = d_483b_0000[17][d_5d9c_9f91];
        if (d_1f3e_5be8[0][d_5d9c_9f91] != 0 && d_5d9c_9d11 > 28)
            d_5d9c_9d11 = f_14d2_13eb(d_5d9c_9d11 - 4, 28);
        d_5d9c_9b2b = d_5d9c_9d11 > 30 && d_1f3e_9118[d_5d9c_9f91] != 0;
        d_5d9c_9b2a = d_1f3e_ccee[d_5d9c_9f91];
        if (d_5d9c_9b2a != 0 || d_5d9c_9d11 > 38 ||
            (d_5d9c_9d11 > 33 && d_483b_0000[0][d_5d9c_9f91] < 40) ||
            (d_5d9c_9d11 > 30 && d_483b_0000[0][d_5d9c_9f91] < 30) || d_5d9c_9b2b != 0) {
            d_5d9c_9b29 = 0;
            if (f_1680_0003(d_5d9c_9cf3) && d_5d9c_9fa7 > 1) {
                sprintf(title, "%s squad news", (char far *)d_5d9c_08bc[d_5d9c_9cf3]);
                if (d_5d9c_9b2a != 0)
                    sprintf(buf, "%s has been forced to retire through injury", f_a1c3_213c(d_5d9c_9f91));
                else if (d_5d9c_9b2b != 0) {
                    d_5d9c_a058 = f_14d2_16bc(d_5d9c_a360, 0);
                    sprintf(buf, "%s has decided to go into non league soccer", f_a1c3_213c(d_5d9c_9f91));
                    d_2f3c_74f3[0][d_5d9c_9cf3] += d_5d9c_a058[d_5d9c_9f91] / (f_14d2_0eef() + 1);
                } else
                    sprintf(buf, "%s has decided to hang up his boots", f_a1c3_213c(d_5d9c_9f91));
                sprintf(text, "%s at the age of %d.", buf, d_483b_0000[17][d_5d9c_9f91]);
                f_a1c3_5c9f(d_5d9c_9cf3, title, text);
                d_5d9c_9b29 = -1;
            }
            if (d_5d9c_9b2a != 0 && d_1f3e_e0e0[d_5d9c_9f91] != 0) {
                d_5d9c_99fc = f_88c9_26a0(f_88c9_12b3(d_5d9c_9f91, -1), 0);
                if (f_1680_0003(d_5d9c_9cf3) && d_5d9c_9fa7 > 1) {
                    sprintf(title, "%s squad news", (char far *)d_5d9c_08bc[d_5d9c_9cf3]);
                    sprintf(text, "The club receives %ld from the insurance company following %s's retirement.",
                            d_5d9c_99fc, f_a1c3_2243(d_5d9c_9f91));
                    f_a1c3_5c9f(d_5d9c_9cf3, title, text);
                    d_5d9c_9b29 = -1;
                }
                d_2f3c_74f3[0][d_5d9c_9cf3] += d_5d9c_99fc;
            }
            if (d_5d9c_9b29 != 0) {
                f_9100_23c7();
                f_9100_243d(4, 0);
            }
            d_5739_023e[d_5d9c_9cf3]--;
            d_5739_0290[d_5d9c_9cf3] -= d_483b_0000[20][d_5d9c_9f91] > 0 ? 1 : 0;
            d_5739_02e2[d_5d9c_9cf3] -= d_1f3e_5be8[0][d_5d9c_9f91] != 0 && d_483b_0000[20][d_5d9c_9f91] == 0 ? 1 : 0;
            if (f_1680_02ed(d_5d9c_9cf3) < 14 || d_5739_02e2[d_5d9c_9cf3] == 0)
                f_9100_076a(d_5d9c_9f91, d_5d9c_9cf3, d_5739_02e2[d_5d9c_9cf3] == 0 ? 2 : 3);
            else
                f_9100_076a(d_5d9c_9f91, -1, 3);
            f_8352_15e0(d_5d9c_9f91, -1);
        }
    }
}

void f_9100_3cea(int player, int age, int a, int b)
{
    if (a > 0)
        d_5d9c_9aec = (float)b / a * 40.0 - 120.0;
    else
        d_5d9c_9aec = d_483b_0000[0][player];
    d_5d9c_9c93 = d_483b_0000[0][player];
    if (d_1f3e_5be8[0][player] != 0 && age > 28)
        d_5d9c_9c91 = f_14d2_13eb(age - 4, 28);
    else
        d_5d9c_9c91 = age;
    if (d_5d9c_9c91 <= 27) {
        d_483b_0000[0][player] = (d_483b_0000[0][player] * 4 + d_483b_0000[9][player]) / 5;
        d_5d9c_9c8f = f_14d2_144d(38, a);
        d_483b_0000[0][player] = f_14d2_13eb(f_14d2_144d(
            (d_483b_0000[0][player] * (57 - d_5d9c_9c8f) + d_5d9c_9c8f * d_5d9c_9aec * 1.03) / 57.0,
            d_483b_0000[9][player]), 10);
    } else if (d_5d9c_9c91 >= 30)
        d_483b_0000[0][player] = (d_483b_0000[0][player] * 5 + 10) / 6;
}

void f_9100_3edf(int player)
{
    char far *p;
    FILE *fp;
    int n;

    fp = fopen("history", "rb+");
    fseek(fp, (long)player * 133, 0);
    fread(d_1f3e_3c20, 1, 133, fp);
    fclose(fp);
    d_5d9c_9ca7 = (int)d_3e42_0000[20][player];
    if (d_5d9c_9ca7 > 0 || d_3e42_0000[0][player] - d_3e42_0000[12][player] > 0) {
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 139; d_5d9c_9f69++) {
            if (d_483b_0000[18][player] == d_2f3c_1b60[d_5d9c_9f69]) {
                if (d_5d9c_9ca7 > 21)
                    d_5d9c_9c9f = d_5d9c_9ca7 - 22;
                else
                    d_5d9c_9c9f = d_5d9c_9ca7;
                p = d_1f3e_3c21[d_5d9c_9c9f];
                *p++ = d_5d9c_9fa7 + 99;
                *p++ = d_5d9c_9f69 + 32;
                *p++ = d_3e42_0000[0][player] + 32 - d_3e42_0000[12][player];
                *p++ = d_3e42_0000[1][player] + 32 - d_3e42_0000[13][player];
                n = d_2f3c_85f7[0][player] - d_2f3c_bb27[player];
                *p++ = n >> 8;
                *p = n;
                d_3e42_0000[20][player] = d_5d9c_9ca7 + 1;
                fp = fopen("history", "rb+");
                fseek(fp, (long)player * 133, 0);
                fwrite(d_1f3e_3c20, 1, 133, fp);
                fclose(fp);
                break;
            }
        }
    }
}

void f_9100_418b(void)
{
    char title[80];
    char text[80];
    char text2[100];

    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 79; d_5d9c_9f69++) {
        d_5d9c_99f8 = d_2f3c_7b33[d_5d9c_9f69] / d_5739_138a[d_5d9c_9f69];
        if (f_1680_0003(d_5d9c_9f69)) {
            sprintf(title, "%s club news", (char far *)d_5d9c_08bc[d_5d9c_9f69]);
            sprintf(text, "Our average attendance for the season was %ld.", d_5d9c_99f8);
            f_a1c3_5c9f(d_5d9c_9f69, title, text);
        }
        if (d_5d9c_99f8 > d_5739_0052[d_5d9c_9f69] * 0.9) {
            d_5d9c_99f4 = f_14d2_1400(d_2f3c_74f3[0][d_5d9c_9f69] - f_1680_2782(d_5d9c_9f69), 0L) * 0.6;
            d_5d9c_9f75 = 0;
            if (d_5d9c_99f0 > 200000L)
                d_5d9c_9f75 = 2;
            else if (d_5d9c_99f0 > 100000L)
                d_5d9c_9f75 = 1;
            if (d_5d9c_9f75 > 0) {
                d_2f3c_74f3[0][d_5d9c_9f69] -= d_5d9c_9f75 * 100000L;
                d_5739_0052[d_5d9c_9f69] += d_5d9c_9f75;
                if (f_1680_0003(d_5d9c_9f69)) {
                    sprintf(title, "%s club news", (char far *)d_5d9c_08bc[d_5d9c_9f69]);
                    sprintf(text2, "The board has decided to increase ground capacity from %ld to %ld at a cost of %ld.",
                            (d_5739_0052[d_5d9c_9f69] - d_5d9c_9f75) * 1000L,
                            d_5739_0052[d_5d9c_9f69] * 1000L, d_5d9c_9f75 * 100000L);
                    f_a1c3_5c9f(d_5d9c_9f69, title, text2);
                }
            }
        }
    }
}

void f_9100_43fe(void)
{
    FILE *fp;
    char buf[320];

    f_9100_243d(0, -1);
    for (d_5d9c_9f91 = 0; d_5d9c_9f91 <= 1699; d_5d9c_9f91++) {
        d_5d9c_9c8d = d_3e42_0000[13][d_5d9c_9f91];
        d_5d9c_9c8b = d_3e42_0000[12][d_5d9c_9f91];
        d_5d9c_9c89 = d_2f3c_bb27[d_5d9c_9f91];
        f_9100_520c(d_5d9c_9f91, d_483b_0000[18][d_5d9c_9f91],
                    d_3e42_0000[1][d_5d9c_9f91] - d_5d9c_9c8d,
                    d_3e42_0000[0][d_5d9c_9f91] - d_5d9c_9c8b,
                    d_2f3c_85f7[0][d_5d9c_9f91] - d_5d9c_9c89);
        if (d_1f3e_a50a[d_5d9c_9f91])
            f_9100_520c(d_5d9c_9f91, d_3e42_0000[10][d_5d9c_9f91], d_5d9c_9c8d, d_5d9c_9c8b, d_5d9c_9c89);
    }
    fp = fopen("records", "rb+");
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 139; d_5d9c_9f69++) {
        fseek(fp, (long)d_5d9c_9f69 * 279, 0);
        fread(d_1f3e_3b08, 1, 279, fp);
        if (d_2f3c_029c[0][d_5d9c_9f69] > -1) {
            sprintf(d_1f3e_5634, "%.12s", f_1680_1a91(d_2f3c_029c[0][d_5d9c_9f69]));
            sprintf(d_1f3e_3b80, "%-12s", d_1f3e_5634);
            d_1f3e_3b8c = d_5d9c_9fa7 + 99;
        }
        if (d_2f3c_029c[1][d_5d9c_9f69] > -1) {
            sprintf(d_1f3e_5634, "%.12s", f_1680_1a91(d_2f3c_029c[1][d_5d9c_9f69]));
            sprintf(d_1f3e_3b8d, "%-12s", d_1f3e_5634);
            d_1f3e_3b99 = d_5d9c_9fa7 + 99;
        }
        if (d_2f3c_029c[2][d_5d9c_9f69] > -1) {
            sprintf(d_1f3e_5634, "%.12s", f_1680_1a91(d_2f3c_029c[2][d_5d9c_9f69]));
            sprintf(d_1f3e_3b9a, "%-12s", d_1f3e_5634);
            d_1f3e_3ba6 = d_5d9c_9fa7 + 99;
        }
        if (d_2f3c_029c[3][d_5d9c_9f69] > -1) {
            sprintf(d_1f3e_5634, "%.12s", f_1680_1a91(d_2f3c_029c[3][d_5d9c_9f69]));
            sprintf(d_1f3e_3ba7, "%-12s", d_1f3e_5634);
            d_1f3e_3bb3 = d_5d9c_9fa7 + 99;
        }
        if (d_2f3c_029c[8][d_5d9c_9f69] > -1) {
            sprintf(d_1f3e_3ab8, "%.13s", f_a1c3_21cc(d_2f3c_029c[9][d_5d9c_9f69]));
            sprintf(d_1f3e_3c05, "%-13s", d_1f3e_3ab8);
            sprintf(d_1f3e_5634, "%.12s", f_1680_1a91(d_2f3c_029c[8][d_5d9c_9f69]));
            sprintf(d_1f3e_3c12, "%-12s", d_1f3e_5634);
            d_1f3e_3c1e = d_5d9c_9fa7 + 99;
        }
        if (d_2f3c_029c[4][d_5d9c_9f69] > -1) {
            sprintf(d_1f3e_3ab8, "%.13s", f_a1c3_21cc(d_2f3c_029c[4][d_5d9c_9f69]));
            sprintf(d_1f3e_3bd0, "%-13s", d_1f3e_3ab8);
            strcpy(d_1f3e_5634, d_5d9c_08bc[d_2f3c_029c[5][d_5d9c_9f69]]);
            sprintf(d_1f3e_3bdd, "%-12s", d_1f3e_5634);
            d_1f3e_3be9 = d_5d9c_9fa7 + 99;
        }
        if (d_2f3c_029c[6][d_5d9c_9f69] > -1) {
            sprintf(d_1f3e_3ab8, "%.13s", f_a1c3_21cc(d_2f3c_029c[6][d_5d9c_9f69]));
            sprintf(d_1f3e_3bea, "%-13s", d_1f3e_3ab8);
            sprintf(d_1f3e_5634, "%.12s", (char far *)d_5d9c_08bc[d_2f3c_029c[7][d_5d9c_9f69]]);
            sprintf(d_1f3e_3bf7, "%-12s", d_1f3e_5634);
            d_1f3e_3c03 = d_5d9c_9fa7 + 99;
        }
        if (d_5d9c_9f69 < 80) {
            if (d_2f3c_0d8c[4][d_5d9c_9f69] < d_483b_c2b2[d_5d9c_9f69]) {
                d_2f3c_0d8c[4][d_5d9c_9f69] = d_483b_c2b2[d_5d9c_9f69];
                d_5d9c_a05c = f_14d2_16bc(d_5d9c_a33e, 0);
                sprintf(d_1f3e_3ab8, "%.13s", f_a1c3_21cc(d_5d9c_a05c[0][d_5d9c_9f69]));
                sprintf(d_1f3e_3bb4, "%-13s", d_1f3e_3ab8);
                d_1f3e_3bc1 = d_5d9c_9fa7 + 99;
            }
            d_5d9c_9ffa = f_14d2_16bc(d_5d9c_a348, 1);
            if (d_483b_a232[d_5d9c_9f69] > d_5d9c_9ffa[d_5d9c_9f69]) {
                d_5d9c_9ffa[d_5d9c_9f69] = d_483b_a232[d_5d9c_9f69];
                d_5d9c_a05c = f_14d2_16bc(d_5d9c_a33e, 0);
                sprintf(d_1f3e_3ab8, "%.13s", f_a1c3_21cc(d_5d9c_a05c[1][d_5d9c_9f69]));
                sprintf(d_1f3e_3bc2, "%-13s", d_1f3e_3ab8);
                d_1f3e_3bcf = d_5d9c_9fa7 + 99;
            }
        }
        d_5d9c_9f49 = f_a1c3_20c5(d_5d9c_9f69);
        if (d_2f3c_0d8c[5][d_5d9c_9f69] > d_5d9c_9f49) {
            d_2f3c_0d8c[5][d_5d9c_9f69] = d_5d9c_9f49;
            d_1f3e_3c04 = d_5d9c_9fa7 + 99;
        }
        sprintf(d_1f3e_3a68, "%c%c", d_5d9c_9fa7 + 99, d_5d9c_9f49 + 32);
        if (d_5d9c_9f69 < 80) {
            d_5d9c_9c87 = d_5739_03d8[d_5d9c_9f69];
            d_5d9c_9c85 = d_5739_042a[d_5d9c_9f69];
            d_5d9c_9c83 = d_5d9c_9f85 - d_5d9c_9c87 - d_5d9c_9c85 - 1;
            sprintf(buf, "%c%c%c%c%c%c", d_5d9c_9c87 + 32, d_5d9c_9c83 + 32, d_5d9c_9c85 + 32,
                    d_5739_047c[d_5d9c_9f69] + 32, d_5739_04ce[d_5d9c_9f69] + 32,
                    f_1680_0287(d_5d9c_9f49) + 32);
            strcat(d_1f3e_3a68, buf);
        } else
            strcat(d_1f3e_3a68, "      ");
        sprintf(d_1f3e_3a68 + strlen(d_1f3e_3a68), "%c%c",
                d_2f3c_0d8c[6][d_5d9c_9f69] + 32, d_2f3c_0d8c[10][d_5d9c_9f69] + 32);
        if (d_2f3c_0d8c[7][d_5d9c_9f69] > 0)
            sprintf(d_1f3e_3a68 + strlen(d_1f3e_3a68), "%c%c", 33, d_2f3c_0d8c[7][d_5d9c_9f69] + 32);
        else if (d_2f3c_0d8c[8][d_5d9c_9f69] > 0)
            sprintf(d_1f3e_3a68 + strlen(d_1f3e_3a68), "%c%c", 34, d_2f3c_0d8c[8][d_5d9c_9f69] + 32);
        else if (d_2f3c_0d8c[9][d_5d9c_9f69] > 0)
            sprintf(d_1f3e_3a68 + strlen(d_1f3e_3a68), "%c%c", 35, d_2f3c_0d8c[9][d_5d9c_9f69] + 32);
        else if (d_2f3c_0d8c[11][d_5d9c_9f69] > 0)
            sprintf(d_1f3e_3a68 + strlen(d_1f3e_3a68), "%c%c", 36, d_2f3c_0d8c[11][d_5d9c_9f69] + 32);
        else if (d_2f3c_0d8c[12][d_5d9c_9f69] > 0)
            sprintf(d_1f3e_3a68 + strlen(d_1f3e_3a68), "%c%c", 37, d_2f3c_0d8c[12][d_5d9c_9f69] + 32);
        else
            strcat(d_1f3e_3a68, "  ");
        d_5d9c_9c9f = f_14d2_144d(d_5d9c_9fa7, 10);
        if (d_5d9c_9fa7 > 10)
            memcpy(d_1f3e_3b08, d_1f3e_3b14, 108);
        memcpy(d_1f3e_3afc[d_5d9c_9c9f], d_1f3e_3a68, 12);
        fseek(fp, (long)d_5d9c_9f69 * 279, 0);
        fwrite(d_1f3e_3b08, 1, 279, fp);
    }
    fclose(fp);
}

void f_9100_4e00(int team, int other, int a, int b)
{
    if (team < 80 || team >= 480) {
        d_5d9c_9f69 = team - (team >= 480 ? 400 : 0);
        d_5d9c_9c81 = d_2f3c_0d8c[0][d_5d9c_9f69] - d_2f3c_0d8c[1][d_5d9c_9f69];
        if (a - b > d_5d9c_9c81
            || (a - b == d_5d9c_9c81 && d_2f3c_0d8c[0][d_5d9c_9f69] < a)) {
            d_2f3c_0d8c[0][d_5d9c_9f69] = a;
            d_2f3c_0d8c[1][d_5d9c_9f69] = b;
            d_2f3c_029c[0][d_5d9c_9f69] = other;
        }
    }
}

void f_9100_4e9f(int team, int other, int a, int b)
{
    if (team < 80 || team >= 480) {
        d_5d9c_9f69 = team - (team >= 480 ? 400 : 0);
        d_5d9c_9c81 = d_2f3c_0d8c[3][d_5d9c_9f69] - d_2f3c_0d8c[2][d_5d9c_9f69];
        if (b - a > d_5d9c_9c81
            || (b - a == d_5d9c_9c81 && d_2f3c_0d8c[3][d_5d9c_9f69] < b)) {
            d_2f3c_0d8c[2][d_5d9c_9f69] = a;
            d_2f3c_0d8c[3][d_5d9c_9f69] = b;
            d_2f3c_029c[1][d_5d9c_9f69] = other;
        }
    }
}

void f_9100_4f3e(int team, int other, long v)
{
    if (team < 80 || team >= 480) {
        d_5d9c_9f69 = team - (team >= 480 ? 400 : 0);
        d_5d9c_9ffe = f_14d2_16bc(d_5d9c_a34a, 1);
        if (d_5d9c_9ffe[0][d_5d9c_9f69] < v) {
            d_5d9c_9ffe[0][d_5d9c_9f69] = v;
            d_2f3c_029c[2][d_5d9c_9f69] = other;
        }
    }
}

void f_9100_4fc9(int team, int other, long v)
{
    if (team < 80 || team >= 480) {
        d_5d9c_9f69 = team - (team >= 480 ? 400 : 0);
        d_5d9c_9ffe = f_14d2_16bc(d_5d9c_a34a, 1);
        if (d_5d9c_9ffe[1][d_5d9c_9f69] > v || d_5d9c_9ffe[1][d_5d9c_9f69] == 0) {
            d_5d9c_9ffe[1][d_5d9c_9f69] = v;
            d_2f3c_029c[3][d_5d9c_9f69] = other;
        }
    }
}

void f_9100_5076(int team, int a, int player, int b)
{
    if (team < 80) {
        d_5d9c_9f69 = team;
        if (d_2f3c_0d8c[13][d_5d9c_9f69] < b) {
            d_2f3c_0d8c[13][d_5d9c_9f69] = b;
            d_2f3c_029c[8][d_5d9c_9f69] = a;
            d_2f3c_029c[9][d_5d9c_9f69] = player;
        }
    }
}

void f_9100_50ca(int team, int row, int v)
{
    if (team < 80 || team >= 480) {
        d_5d9c_9f69 = team - (team >= 480 ? 400 : 0);
        d_2f3c_0d8c[row][d_5d9c_9f69] = v;
    }
}

void f_9100_510c(int player, int from, int to, long fee)
{
    d_5d9c_9ffe = f_14d2_16bc(d_5d9c_a34a, 1);
    if (d_5d9c_9ffe[2][to] < fee) {
        d_5d9c_9ffe[2][to] = fee;
        d_2f3c_029c[4][to] = player;
        d_2f3c_029c[5][to] = from;
    }
}

void f_9100_518c(int player, int from, int to, long fee)
{
    d_5d9c_9ffe = f_14d2_16bc(d_5d9c_a34a, 1);
    if (d_5d9c_9ffe[3][from] < fee) {
        d_5d9c_9ffe[3][from] = fee;
        d_2f3c_029c[6][from] = player;
        d_2f3c_029c[7][from] = to;
    }
}

void f_9100_520c(int team, int player, int a, int b, int c)
{
    if (d_483b_c2b2[player] < a) {
        d_483b_c2b2[player] = a;
        d_5d9c_a05c = f_14d2_16bc(d_5d9c_a33e, 1);
        d_5d9c_a05c[0][player] = team;
    }
    if (b >= 20) {
        d_5d9c_9aec = (int)((float)c / b * 100) / 100;
        if (d_483b_a232[player] < d_5d9c_9aec) {
            d_483b_a232[player] = d_5d9c_9aec;
            d_5d9c_a05c = f_14d2_16bc(d_5d9c_a33e, 1);
            d_5d9c_a05c[1][player] = team;
        }
    }
}

void f_9100_52ff(int team)
{
    struct recpos far *p;
    FILE *fp;
    char lines[20][80];
    char buf[320];
    char name[40];
    struct recpos pos[20] = {
        { 17.125, 6.5, 6, 2, 138 }, { 34.625, 6.5, 6, 3, 36 },
        { 17.125, 7.5, 6, 9, 138 }, { 34.625, 7.5, 6, 3, 36 },
        { 17.125, 8.5, 6, 2, 138 }, { 34.625, 8.5, 6, 3, 36 },
        { 17.125, 9.5, 6, 9, 138 }, { 34.625, 9.5, 6, 3, 36 },
        { 17.125, 10.5, 6, 2, 138 }, { 34.625, 10.5, 6, 3, 36 },
        { 17.125, 19.0, 6, 2, 138 }, { 34.625, 19.0, 6, 3, 36 },
        { 17.125, 20.0, 6, 9, 138 }, { 34.625, 20.0, 6, 3, 36 },
        { 1.125, 14.25, 6, 14, 151 }, { 1.125, 15.25, 6, 14, 151 },
        { 20.25, 14.25, 6, 14, 151 }, { 20.25, 15.25, 6, 14, 151 },
        { 17.125, 21.0, 6, 2, 138 }, { 34.625, 21.0, 6, 3, 36 }
    };

    fp = fopen("records", "rb+");
    fseek(fp, (long)team * 279, 0);
    fread(d_1f3e_3b08, 1, 279, fp);
    fclose(fp);

    f_67ee_5ab6(1.25, team, "Club Records");
    sprintf(d_1f3e_3a5e, "%d", d_5d9c_9fa7 + 1991);
    f_1680_2867(1.125, 4.0, 1, 8, 0x130, "                   CLUB RECORDS");
    f_1680_2867(1.125, 11.75, 1, 8, 0x130, "                 TRANSFER RECORDS");
    f_1680_2867(1.125, 16.5, 1, 8, 0x130, "                  PLAYER RECORDS");
    for (d_5d9c_9c7f = 0; d_5d9c_9c7f <= 1; d_5d9c_9c7f++) {
        f_1680_2867(1.125, d_5d9c_9c7f * 12.5 + 5.25, 1, 12, 0x7e, " ACHIEVEMENT");
        f_1680_2867(17.125, d_5d9c_9c7f * 12.5 + 5.25, 1, 4, 0x8a, " RECORD");
        f_1680_2867(34.625, d_5d9c_9c7f * 12.5 + 5.25, 1, 4, 0x24, " YEAR");
    }
    for (d_5d9c_9c7d = 0; d_5d9c_9c7d <= 19; d_5d9c_9c7d++)
        strcpy(lines[d_5d9c_9c7d], "");

    /* best league placing */
    f_1680_2867(1.125, 6.5, 1, 14, 0x7e, " BEST LEAGUE PLACING");
    d_5d9c_9f61 = d_2f3c_1048[team] / 20 + 1;
    if (d_5d9c_9f61 < 5) {
        sprintf(lines[0], " %s IN DIVISION %d", f_a1c3_261d(d_2f3c_1048[team] % 20 + 1), d_5d9c_9f61);
        sprintf(lines[1], " %d", d_1f3e_3c04 + 1892);
    }

    /* biggest victory */
    f_1680_2867(1.125, 7.5, 1, 14, 0x7e, " BIGGEST VICTORY");
    sprintf(d_1f3e_41c2, "%d-%d", d_2f3c_0d8c[0][team], d_2f3c_0e18[team]);
    if (strcmp(d_1f3e_41c2, "0-0")) {
        sprintf(lines[2], " %s V ", d_1f3e_41c2);
        if (d_2f3c_029c[0][team] == -1) {
            strncpy(buf, d_1f3e_3b80, 12);
            buf[12] = 0;
            strcat(lines[2], f_14d2_0e72(buf));
            sprintf(lines[3], " %d", d_1f3e_3b8c + 1892);
        } else {
            sprintf(buf, "%.12s", f_1680_1a91(d_2f3c_029c[0][team]));
            strcat(lines[2], buf);
            sprintf(lines[3], " %s", d_1f3e_3a5e);
        }
    }

    /* heaviest defeat */
    f_1680_2867(1.125, 8.5, 1, 14, 0x7e, " HEAVIEST DEFEAT");
    sprintf(d_1f3e_41c2, "%d-%d", d_2f3c_0ea4[team], d_2f3c_0f30[team]);
    if (strcmp(d_1f3e_41c2, "0-0")) {
        sprintf(lines[4], " %s V ", d_1f3e_41c2);
        if (d_2f3c_03b4[team] == -1) {
            strncpy(buf, d_1f3e_3b8d, 12);
            buf[12] = 0;
            strcat(lines[4], f_14d2_0e72(buf));
            sprintf(lines[5], " %d", d_1f3e_3b99 + 1892);
        } else {
            sprintf(buf, "%.12s", f_1680_1a91(d_2f3c_03b4[team]));
            strcat(lines[4], buf);
            sprintf(lines[5], " %s", d_1f3e_3a5e);
        }
    }

    /* highest attendance */
    f_1680_2867(1.125, 9.5, 1, 14, 0x7e, " HIGHEST ATTENDANCE");
    d_5d9c_9ffe = f_14d2_16bc(d_5d9c_a34a, 0);
    sprintf(d_1f3e_3a0e, "%ld", d_5d9c_9ffe[0][team]);
    if (strcmp(d_1f3e_3a0e, "0")) {
        sprintf(lines[6], " %s V ", d_1f3e_3a0e);
        if (d_2f3c_04cc[team] == -1) {
            strncpy(buf, d_1f3e_3b9a, 12);
            buf[12] = 0;
            strcat(lines[6], f_14d2_0e72(buf));
            sprintf(lines[7], " %d", d_1f3e_3ba6 + 1892);
        } else {
            sprintf(buf, "%.12s", f_1680_1a91(d_2f3c_04cc[team]));
            strcat(lines[6], buf);
            sprintf(lines[7], " %s", d_1f3e_3a5e);
        }
    }

    /* lowest attendance */
    f_1680_2867(1.125, 10.5, 1, 14, 0x7e, " LOWEST ATTENDANCE");
    d_5d9c_9ffe = f_14d2_16bc(d_5d9c_a34a, 0);
    sprintf(d_1f3e_3a0e, "%ld", d_5d9c_9ffe[1][team]);
    if (strcmp(d_1f3e_3a0e, "0")) {
        sprintf(lines[8], " %s V ", d_1f3e_3a0e);
        if (d_2f3c_05e4[team] == -1) {
            strncpy(buf, d_1f3e_3ba7, 12);
            buf[12] = 0;
            strcat(lines[8], f_14d2_0e72(buf));
            sprintf(lines[9], " %d", d_1f3e_3bb3 + 1892);
        } else {
            sprintf(buf, "%.12s", f_1680_1a91(d_2f3c_05e4[team]));
            strcat(lines[8], buf);
            sprintf(lines[9], " %s", d_1f3e_3a5e);
        }
    }

    /* goals in a season */
    f_1680_2867(1.125, 19.0, 1, 14, 0x7e, " GOALS IN A SEASON");
    sprintf(d_1f3e_39be, "%d", d_2f3c_0fbc[team]);
    if (strcmp(d_1f3e_39be, "0")) {
        strncpy(d_1f3e_52f6, d_1f3e_3bb4, 13);
        d_1f3e_52f6[13] = 0;
        sprintf(lines[10], " %s - %s", f_14d2_0e72(d_1f3e_52f6), d_1f3e_39be);
        sprintf(lines[11], " %d", d_1f3e_3bc1 + 1892);
    }

    /* average rating in a season */
    f_1680_2867(1.125, 20.0, 1, 14, 0x7e, " AV RT IN A SEASON");
    d_5d9c_9ffa = f_14d2_16bc(d_5d9c_a348, 0);
    if (d_5d9c_9ffa[team] > 0) {
        sprintf(d_1f3e_5396, "%.2f", d_5d9c_9ffa[team]);
        strncpy(d_1f3e_52f6, d_1f3e_3bc2, 13);
        d_1f3e_52f6[13] = 0;
        sprintf(lines[12], " %s - %s", f_14d2_0e72(d_1f3e_52f6), d_1f3e_5396);
        sprintf(lines[13], " %d", d_1f3e_3bcf + 1892);
    }

    /* record fee paid */
    f_1680_2867(1.125, 13.0, 1, 4, 0x97, " RECORD FEE PAID");
    d_5d9c_9ffe = f_14d2_16bc(d_5d9c_a34a, 0);
    sprintf(d_1f3e_3f90, "%ld", d_5d9c_9ffe[2][team]);
    if (strcmp(d_1f3e_3f90, "0")) {
        sprintf(lines[14], " %s FOR ", d_1f3e_3f90);
        strcpy(lines[15], " FROM ");
        if (d_2f3c_06fc[team] == -1) {
            strncpy(buf, d_1f3e_3bd0, 13);
            buf[13] = 0;
            strcpy(name, f_14d2_0e72(buf));
            strncpy(buf, d_1f3e_3bdd, 12);
            buf[12] = 0;
            strcat(lines[15], f_14d2_0e72(buf));
            sprintf(buf, " %d", d_1f3e_3be9 + 1892);
        } else {
            strcpy(name, f_a1c3_21cc(d_2f3c_06fc[team]));
            sprintf(buf, "%.12s %s", f_1680_1a91(d_2f3c_0814[team]), d_1f3e_3a5e);
        }
        strcat(lines[15], buf);
        if (strlen(name) > 12)
            strcpy(name, name + 2);
        strcat(lines[14], name);
    }

    /* record fee recouped */
    f_1680_2867(20.25, 13.0, 1, 4, 0x97, " RECORD FEE RECOUPED");
    d_5d9c_9ffe = f_14d2_16bc(d_5d9c_a34a, 0);
    sprintf(d_1f3e_3f90, "%ld", d_5d9c_9ffe[3][team]);
    if (strcmp(d_1f3e_3f90, "0")) {
        sprintf(lines[16], " %s FOR ", d_1f3e_3f90);
        strcpy(lines[17], " TO ");
        if (d_2f3c_092c[team] == -1) {
            strncpy(buf, d_1f3e_3bea, 13);
            buf[13] = 0;
            strcpy(name, f_14d2_0e72(buf));
            strncpy(buf, d_1f3e_3bf7, 12);
            buf[12] = 0;
            strcat(lines[17], f_14d2_0e72(buf));
            sprintf(buf, " %d", d_1f3e_3be9 + 1892);
        } else {
            strcpy(name, f_a1c3_21cc(d_2f3c_092c[team]));
            sprintf(buf, "%.12s %s", f_1680_1a91(d_2f3c_0a44[team]), d_1f3e_3a5e);
        }
        strcat(lines[17], buf);
        if (strlen(name) > 12)
            strcpy(name, name + 2);
        strcat(lines[16], name);
    }

    /* goals in a match */
    f_1680_2867(1.125, 21.0, 1, 14, 0x7e, " GOALS IN A MATCH");
    sprintf(d_1f3e_39be, "%d", d_2f3c_14a8[team]);
    if (strcmp(d_1f3e_39be, "0")) {
        if (d_2f3c_0b5c[team] == -1) {
            strncpy(buf, d_1f3e_3c05, 13);
            buf[13] = 0;
            strcpy(d_1f3e_52f6, f_14d2_0e72(buf));
            strncpy(buf, d_1f3e_3c12, 12);
            buf[12] = 0;
            strcpy(d_1f3e_396e, f_14d2_0e72(buf));
            sprintf(lines[19], " %d", d_1f3e_3c1e + 1892);
        } else {
            strcpy(d_1f3e_52f6, f_a1c3_21cc(d_2f3c_0c74[team]));
            sprintf(d_1f3e_396e, "%.12s", f_1680_1a91(d_2f3c_0b5c[team]));
            sprintf(lines[19], " %s", d_1f3e_3a5e);
        }
        sprintf(lines[18], " %s -  %s", d_1f3e_52f6, d_1f3e_39be);
    }

    for (p = pos, d_5d9c_9c7b = 0; d_5d9c_9c7b <= 19; d_5d9c_9c7b++, p++)
        f_1680_2867(p->x, p->y, p->bg, p->fg, p->w, lines[d_5d9c_9c7b]);
    f_a1c3_2d08(2, 1.25, 22.5, 1, 4, 0x12d, "                 DONE");
    do
        d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
    while (d_5d9c_9faf <= 0);
}

/* a club's history: its league and cup record over the last ten seasons */
void f_9100_643d(int team)
{
    FILE *fp;
    char buf[12][80];
    int i;

    fp = fopen("records", "rb+");
    fseek(fp, (long)team * 279, 0);
    fread(d_1f3e_3b08, 1, 279, fp);
    fclose(fp);
    f_67ee_5ab6(1.25, team, "History");
    f_1680_2867(1.125, 4.0, 0, 1, 0x130, "LEAGUE, FA CUP AND LEAGUE CUP");
    f_1680_2867(1.125, 5.25, 1, 12, 0x22, " YEAR");
    f_1680_2867(5.625, 5.25, 1, 12, 0x1c, " DIV");
    f_1680_2867(9.375, 5.25, 1, 12, 0x12, "POS");
    f_1680_2867(11.875, 5.25, 1, 12, 0x12, " W");
    f_1680_2867(14.375, 5.25, 1, 12, 0x12, " D");
    f_1680_2867(16.875, 5.25, 1, 12, 0x12, " L");
    f_1680_2867(19.375, 5.25, 1, 12, 0x12, " F");
    f_1680_2867(21.875, 5.25, 1, 12, 0x12, " A");
    f_1680_2867(24.375, 5.25, 1, 12, 0x12, "PTS");
    f_1680_2867(26.875, 5.25, 1, 12, 0x30, " FA CUP");
    f_1680_2867(33.125, 5.25, 1, 12, 0x30, " LG CUP");
    f_1680_2867(1.125, 16.75, 0, 1, 0x130, "EUROPEAN AND OTHER CUPS");
    for (d_5d9c_9c79 = 0; d_5d9c_9c79 <= 1; d_5d9c_9c79++) {
        f_1680_2867(d_5d9c_9c79 * 19.125 + 1.125, 18.0, 1, 12, 0x22, " YEAR");
        f_1680_2867(d_5d9c_9c79 * 19.125 + 5.625, 18.0, 1, 12, 0x73, " ACHIEVEMENT");
    }
    for (d_5d9c_9c7d = 0; d_5d9c_9c7d <= 11; d_5d9c_9c7d++)
        strcpy(buf[d_5d9c_9c7d], "");
    for (i = 1; i <= 10; i++) {
        memcpy(d_1f3e_3a68, d_1f3e_3afc[i], 12);
        d_1f3e_3a68[12] = 0;
        d_5d9c_9a7c = i + 5.5;
        if (i < 6) {
            d_5d9c_9a78 = 1.125;
            d_5d9c_9c77 = i + 18;
        } else {
            d_5d9c_9a78 = 20.25;
            d_5d9c_9c77 = i + 13;
        }
        d_5d9c_9c75 = d_1f3e_3a68[0] + 1892;
        if (d_5d9c_9c75 > 1892 && d_5d9c_9fa7 + 1991 > d_5d9c_9c75) {
            sprintf(buf[0], " %d", d_5d9c_9c75);
            d_5d9c_9f49 = (unsigned char)d_1f3e_3a68[1] - 32;
            if (d_5d9c_9f49 < 80) {
                sprintf(buf[1], " %s", f_a1c3_261d(d_5d9c_9f49 / 20 + 1));
                sprintf(buf[2], "%3d", d_5d9c_9f49 % 20 + 1);
                for (d_5d9c_9c73 = 3; d_5d9c_9c73 <= 8; d_5d9c_9c73++)
                    sprintf(buf[d_5d9c_9c73], "%3d", (unsigned char)d_1f3e_3a68[d_5d9c_9c73 - 1] - 32);
            } else
                strcpy(buf[1], " NLG");
            d_5d9c_9c71 = (unsigned char)d_1f3e_3a68[8] - 32;
            if (d_5d9c_9c71 > 0)
                sprintf(buf[9], " %s", f_9100_7386(d_5d9c_9c71));
            d_5d9c_9c6f = (unsigned char)d_1f3e_3a68[9] - 32;
            if (d_5d9c_9c6f > 0)
                sprintf(buf[10], " %s", f_9100_7482(d_5d9c_9c6f));
            d_5d9c_9c6d = (unsigned char)d_1f3e_3a68[11] - 32;
            if (d_5d9c_9c6d > 0) {
                d_5d9c_9c6b = (unsigned char)d_1f3e_3a68[10] - 32;
                sprintf(buf[11], " %s", f_9100_7560(d_5d9c_9c6d, d_5d9c_9c6b));
            }
        }
        f_1680_2867(1.125, d_5d9c_9a7c, 1, 4, 0x22, buf[0]);
        f_1680_2867(d_5d9c_9a78, d_5d9c_9c77, 1, 4, 0x22, buf[0]);
        strcpy(buf[0], "");
        f_1680_2867(5.625, d_5d9c_9a7c, 6, 3, 0x1c, buf[1]);
        strcpy(buf[1], "");
        for (d_5d9c_9c73 = 2; d_5d9c_9c73 <= 8; d_5d9c_9c73++) {
            f_1680_2867((d_5d9c_9c73 - 2) * 2.5 + 9.375, d_5d9c_9a7c, 1, i & 1 ? 8 : 14, 0x12, buf[d_5d9c_9c73]);
            strcpy(buf[d_5d9c_9c73], "");
        }
        f_1680_2867(26.875, d_5d9c_9a7c, 1, i & 1 ? 2 : 9, 0x30, buf[9]);
        strcpy(buf[9], "");
        f_1680_2867(33.125, d_5d9c_9a7c, 1, i & 1 ? 2 : 9, 0x30, buf[10]);
        strcpy(buf[10], "");
        f_1680_2867(d_5d9c_9a78 + 4.5, d_5d9c_9c77, 1, i & 1 ? 8 : 14, 0x73, buf[11]);
        strcpy(buf[11], "");
    }
    f_a1c3_3505(0);
}

/* records a cup's winner and runner-up for this season, shifting the table up when full */
void f_9100_6ce3(int cup, int winner, int runner)
{
    d_5d9c_9fea = f_14d2_16bc(d_5d9c_a346, 1);
    if (d_5d9c_9fa7 <= 16)
        d_5d9c_9ed7 = d_5d9c_9fa7 - 1;
    else {
        for (d_5d9c_9f75 = 0; d_5d9c_9f75 <= 14; d_5d9c_9f75++)
            for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 2; d_5d9c_9fa1++)
                d_5d9c_9fea[d_5d9c_9fa1][d_5d9c_9f75][cup - 1] = d_5d9c_9fea[d_5d9c_9fa1][d_5d9c_9f75 + 1][cup - 1];
        d_5d9c_9ed7 = 15;
    }
    d_5d9c_9fea[0][d_5d9c_9ed7][cup - 1] = d_5d9c_9fa7;
    d_5d9c_9fea[1][d_5d9c_9ed7][cup - 1] = winner;
    d_5d9c_9fea[2][d_5d9c_9ed7][cup - 1] = runner;
}

/* the past winners screen */
void f_9100_6dd0(void)
{
    int i;
    char buf[160];

    f_a1c3_27e4("Past Winners");
    f_1680_2867(1.125, 5.25, 0, 6, 0, " Year ");
    f_1680_2867(5.875, 5.25, 0, 6, 0x5c, " Winners");
    f_1680_2867(17.625, 5.25, 0, 6, 0x5c, " Runners up");
    for (d_5d9c_9f75 = 0; d_5d9c_9f75 <= 7; d_5d9c_9f75++)
        f_9100_722d(d_5d9c_9f75, 0);
    f_a1c3_2d08(2, 1.25, 22.5, 1, 4, 0x12d, "                 Done");
    i = 0;
    do {
        f_9100_722d(i, -1);
        sprintf(buf, " Past %s", d_5d9c_71bc[i]);
        if (i > 0)
            strcat(buf, " Winners");
        f_1680_2867(1.125, 4.0, 0, 1, 0x130, buf);
        d_5d9c_9fea = f_14d2_16bc(d_5d9c_a346, 0);
        for (d_5d9c_9f75 = 0; d_5d9c_9f75 <= 15; d_5d9c_9f75++) {
            d_5d9c_9f55 = d_5d9c_9f75 & 1 ? 15 : 3;
            if (d_5d9c_9fea[0][d_5d9c_9f75][i] > 0) {
                sprintf(buf, " %d", d_5d9c_9fea[0][d_5d9c_9f75][i] + 1991);
                f_1680_2867(1.125, d_5d9c_9f75 + 6.25, 1, 4, 0x24, buf);
                sprintf(buf, " %s", f_1680_1a91(d_5d9c_9fea[1][d_5d9c_9f75][i]));
                f_1680_2867(5.875, d_5d9c_9f75 + 6.25, 1, d_5d9c_9f55, 0x5c, buf);
                sprintf(buf, " %s", f_1680_1a91(d_5d9c_9fea[2][d_5d9c_9f75][i]));
                f_1680_2867(17.625, d_5d9c_9f75 + 6.25, 1, d_5d9c_9f55, 0x5c, buf);
            } else {
                f_1680_2867(1.125, d_5d9c_9f75 + 6.25, 1, 4, 0x24, "");
                f_1680_2867(5.875, d_5d9c_9f75 + 6.25, 1, d_5d9c_9f55, 0x5c, "");
                f_1680_2867(17.625, d_5d9c_9f75 + 6.25, 1, d_5d9c_9f55, 0x5c, "");
            }
        }
        do {
            d_5d9c_9faf = f_a1c3_3298(-1);
            if (d_5d9c_9faf == 0 && f_14d2_0ac1() >= 0xec && f_14d2_0ac1() <= 0x138
                && f_14d2_0ab9() >= 0x24 && f_14d2_0ab9() <= 0xaa)
                d_5d9c_9faf = (f_14d2_0ab9() - 36) / 17 + 2;
        } while (d_5d9c_9faf <= 0 || i + 2 == d_5d9c_9faf || d_5d9c_9faf > 9);
        if (d_5d9c_9faf > 1) {
            f_9100_722d(i, 0);
            i = d_5d9c_9faf - 2;
            f_14d2_0609(8, 0x2c, 0xe8, 0xaa);
        }
    } while (d_5d9c_9faf != 1);
}

void f_9100_722d(int n, char c)
{
    char buf[160];
    int len;

    f_14d2_0722(c ? 25 : 18);
    f_14d2_075a(236, n * 17 + 36, 312, n * 17 + 51);
    f_14d2_073e(25);
    f_14d2_07af(236, n * 17 + 36, 312, n * 17 + 51);
    len = f_14d2_0a1c(d_5d9c_71bc[n], " ");
    strcpy(buf, d_5d9c_71bc[n]);
    buf[len - 1] = 0;
    f_1680_27aa(275 - strlen(buf) * 3 + 8, n * 17 + 43, 1, buf);
    strcpy(buf, f_14d2_0dc8(d_5d9c_71bc[n], len + 1, 100));
    f_1680_27aa(275 - strlen(buf) * 3 + 8, n * 17 + 50, 1, buf);
}

char far *f_9100_7386(int round)
{
    char far *s;

    s = f_14d2_0d40();
    switch (round) {
    case 38: case 39: strcpy(s, "  1ST"); break;
    case 44: case 45: strcpy(s, "  2ND"); break;
    case 50: case 51: strcpy(s, "  3RD"); break;
    case 56: case 57: strcpy(s, "  4TH"); break;
    case 62: case 63: strcpy(s, "  5TH"); break;
    case 68: case 69: strcpy(s, " Q FIN"); break;
    case 76: case 77: strcpy(s, " SEMIS"); break;
    case 88: case 89: strcpy(s, " FINAL"); break;
    case 100: strcpy(s, "  WON"); break;
    }
    strcpy(d_1f3e_391e, f_14d2_0e72(s));
    if (round < 68)
        strcat(d_1f3e_391e, " ROUND");
    return s;
}

char far *f_9100_7482(int round)
{
    char far *s;

    s = f_14d2_0d40();
    switch (round) {
    case 9: case 13: strcpy(s, "  1ST"); break;
    case 19: strcpy(s, "  2ND"); break;
    case 27: strcpy(s, "  3RD"); break;
    case 33: strcpy(s, "  4TH"); break;
    case 43: strcpy(s, " Q FIN"); break;
    case 61: case 65: strcpy(s, " SEMIS"); break;
    case 82: case 83: strcpy(s, " FINAL"); break;
    case 100: strcpy(s, "  WON"); break;
    }
    strcpy(d_1f3e_391e, f_14d2_0e72(s));
    if (round < 43)
        strcat(d_1f3e_391e, " ROUND");
    return s;
}

char far *f_9100_7560(int round, int cup)
{
    char far *s;

    s = f_14d2_0d40();
    if (cup == 1)
        strcpy(d_1f3e_38ce, "UEFA CUP");
    else if (cup == 2)
        strcpy(d_1f3e_38ce, "CW CUP");
    else if (cup == 3)
        strcpy(d_1f3e_38ce, "EURO CUP");
    else if (cup == 4)
        strcpy(d_1f3e_38ce, "Zenith CUP");
    else
        strcpy(d_1f3e_38ce, "Domark CUP");
    if (round == 100)
        strcpy(d_1f3e_387e, "WINNERS");
    else if (cup < 3) {
        switch (round) {
        case 11: case 15: strcpy(d_1f3e_387e, "PRELIMS"); break;
        case 17: case 21: case 23: case 25: strcpy(d_1f3e_387e, "1ST RND"); break;
        case 31: case 35: strcpy(d_1f3e_387e, "2ND RND"); break;
        case 53: case 59: strcpy(d_1f3e_387e, "GROUPS"); break;
        case 67: case 71: strcpy(d_1f3e_387e, "3RD RND"); break;
        case 75: case 79: strcpy(d_1f3e_387e, "SEMIS"); break;
        case 87: case 91: strcpy(d_1f3e_387e, "FINAL"); break;
        }
    } else if (cup == 3) {
        switch (round) {
        case 17: case 21: strcpy(d_1f3e_387e, "1ST RND"); break;
        case 31: case 35: strcpy(d_1f3e_387e, "2ND RND");
        case 53: case 59: case 67: case 71: case 75: case 79:
            strcpy(d_1f3e_387e, "GROUPS"); break;
        case 91: strcpy(d_1f3e_387e, "FINAL"); break;
        }
    } else if (cup == 4) {
        switch (round) {
        case 7: strcpy(d_1f3e_387e, "QUALS"); break;
        case 9: strcpy(d_1f3e_387e, "1ST RND"); break;
        case 11: strcpy(d_1f3e_387e, "2ND RND"); break;
        case 23: strcpy(d_1f3e_387e, "3RD RND"); break;
        case 41: strcpy(d_1f3e_387e, "SEMIS"); break;
        case 53: strcpy(d_1f3e_387e, "FINAL"); break;
        }
    } else {
        switch (round) {
        case 71: strcpy(d_1f3e_387e, "Q FINS"); break;
        case 73: strcpy(d_1f3e_387e, "SEMIS"); break;
        case 87: strcpy(d_1f3e_387e, "FINAL"); break;
        default:
            if (round <= 67)
                strcpy(d_1f3e_387e, "GROUPS");
            break;
        }
    }
    strcpy(d_1f3e_391e, d_1f3e_387e);
    d_5d9c_9f75 = f_14d2_09ce(d_1f3e_387e, "RND");
    if (d_5d9c_9f75 > 0)
        strcpy(&d_1f3e_391e[d_5d9c_9f75], "ROUND");
    sprintf(s, "%s %s", d_1f3e_38ce, d_1f3e_387e);
    return s;
}
