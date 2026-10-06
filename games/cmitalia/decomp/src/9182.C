/* @at 9182:0000 */
/* @data 5d51:4854 */
/* @module */

/* Overlay 9182: CM93's overlay 96bb (games/cm93/decomp/src/96BB.C) changed for CM Italia:
 * player values and wages, transfer news, retirements, the staff screen and the board's
 * messages (the end of CM1's 88c9), and the seasons and the files (most of CM1's 9100). */
#include <string.h>
#include <stdio.h>
#include <mem.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
int f_9182_0000(int team, int x);
void f_9182_01ac(int team, int x);
int f_9182_09e8(int x);
void f_9182_0a23(int team);
void f_9182_0eca(float x, float y, int c, int c2, int type, int team);
char far *f_9182_14f6(int manager, int type);
void f_9182_1618(void);
void f_9182_18e5(int club);
void f_9182_1975(int team, char far *s);
char far *f_9182_19b6(int n);
void f_9182_1a19(void);
void f_9182_1c3b(void);
void f_9182_1dc1(void);
void f_9182_1f7d(void);
void f_9182_234b(void);
void f_9182_298b(int team);
void f_9182_2f15(void);
void f_9182_3210(void);
void f_9182_369b(int player, int age, int games, int rating);
void f_9182_3807(void);
void f_9182_3e11(void);
void f_9182_47ca(int team, int other, int a, int b);
void f_9182_4869(int team, int other, int a, int b);
void f_9182_4908(int team, int other, long v);
void f_9182_4993(int team, int other, long v);
void f_9182_4a40(int team, int a, int player, int b);
void f_9182_4a94(int team, int row, int v);
void f_9182_4ad7(int player, int from, int to, long fee);
void f_9182_4b57(int player, int from, int to, long fee);
void f_9182_4bd7(int team, int player, int a, int b, int c);
void f_9182_4c86(int team);
void f_9182_5e5f(int team);
void f_9182_667a(int cup, int winner, int runner);
void f_9182_6751(void);
void f_9182_6bc3(int n, char c);
char far *f_9182_6d1c(int round);
char far *f_9182_6df8(int round, int cup);

struct staffbox { /* 6-byte entries at 60ae:4746 */ unsigned char x1, y1; int x2; unsigned char y2, colour; };
struct staffpanel { /* 10-byte entries at 60ae:4764 */ float x, y; unsigned char a, b; };
struct recpos { float x, y; int bg, fg, w; };
void f_1646_0003(float x, int team, char far *title);
void f_1646_0b2f(int n, char far *s);
void f_1646_0b9f(char far *s);
void f_1646_0bf2(char far *s);
char f_1646_2cc9(int x);
void f_1646_2fa4(int n, char far *title, char far *items);
void f_1646_3348(int last);
void f_1646_3686(float x, float y, int bg, int fg, int w, char far *s);
void f_1646_3c89(float x, float y, int colour, char far *s);
void f_1646_459b(float x, float y, int team);
char far *f_1646_4919(int manager, char full);
void f_1646_4ba0(char far *title);
void f_1646_50c5(int a, float x, float y, int c, int d, int e, char far *s);
void f_1646_545c(int a, char b);
int f_1646_5602(int a);
void f_1646_6097(void);
void f_1646_60a7(void);
void f_1d5e_08cc(int c);
void f_1d5e_08e2(int x1, int y1, int x2, int y2);
int f_1d5e_0c07(void);
int f_1d5e_0c0f(void);
void far *f_1d5e_1618(int handle, int page);
void f_8ba7_1e33(int a, int b, int bg, int fg, char far *s1, char far *s2);
void f_8ba7_2aea(void);
void f_8ba7_4f61(int club, int n);
char f_8ba7_552e(int p, int team, int x);
extern char far d_2414_34c6[];
extern char far d_2414_3516[];
extern char far d_2414_4d86[];
extern char far d_2414_4fd4[];
extern char far d_2414_bc16[][4][23];
extern unsigned char far d_2414_d28c[];
extern unsigned char far d_3404_1abe[];
extern unsigned char far d_3404_1d48[];
extern unsigned char far d_3404_225c[];
extern int far d_3404_4226[][38];
extern int far d_44d7_8caa[];
extern char far * far d_4f37_0654[];
extern char near *d_5d51_b476[];
extern char d_5d51_d583;
extern char d_5d51_d588;
extern char d_5d51_d591;
extern char d_5d51_d5a5;
extern char d_5d51_d5ca;
extern char d_5d51_d5df;
extern unsigned char d_5d51_d5f0;
extern int d_5d51_d736;
extern int d_5d51_d738;
extern int d_5d51_d740;
extern int d_5d51_d76a;
extern int d_5d51_d76c;
extern int d_5d51_d76e;
extern int d_5d51_d776;
extern int d_5d51_d77a;
extern int d_5d51_d87e;
extern int d_5d51_d8ee;
extern int d_5d51_d8fe;
extern int d_5d51_d98e;
extern int d_5d51_d9ac;
extern int d_5d51_d9b0;
extern int d_5d51_d9b4;
extern int d_5d51_d9b8;
extern int d_5d51_d9c0;
extern int d_5d51_d9c6;
extern int d_5d51_da0a;
extern int far *d_5d51_da5c;
extern int d_5d51_dda4;
int f_1646_46a0(int team);
unsigned char f_1646_717d(char team);
char far *f_1d5e_0efc(void);
int f_1d5e_1308(int a, int b);
int f_1d5e_136a(int a, int b);
void f_8119_1634(int team, int delta);
extern char far d_2414_33d6[];
extern char far d_2414_3426[];
extern unsigned char far d_3404_2770[][650];
extern int far d_3404_40aa[][38];
extern unsigned char far d_3404_44da[];
extern unsigned char far d_3404_452a[];
extern int far d_4f37_0898[][5];
extern int far d_4f37_1392[][2][100];
extern long d_5d51_d449;
extern long d_5d51_d44d;
extern char d_5d51_d581;
extern char d_5d51_d582;
extern int d_5d51_d730;
extern int d_5d51_d732;
extern int d_5d51_d734;
extern int d_5d51_d86e;
extern int d_5d51_d9ca;
extern int d_5d51_da0e;
void f_1646_5bcb(int team, char far *title, char far *text);
long f_1d5e_0d6a(long n);
int f_1d5e_0d9c(char far *path);
void f_1d5e_13a4(void far *a, void far *b, int n);
void f_1d5e_1a24();
void f_9915_4872(void);
long f_9e79_2216(int team);
char f_b0f1_01df(char team);
void f_b0f1_66b9(char a);
void f_b0f1_6835(char a, int i, int n);
extern char far d_2414_0028[];
extern char far d_2414_0050[];
extern char far d_2414_0078[];
extern unsigned char far d_2414_e88c[][140];
extern unsigned char far d_2414_f168[];
extern long far d_2414_fe5c[][2];
extern long far d_3404_3e4a[][38];
extern int far d_3404_418e[];
extern unsigned char far d_3404_443a[][40];
extern unsigned char far d_4f37_09c4[][502];
extern unsigned char far d_4f37_0ffa[];
extern char d_5d51_d55c;
extern char d_5d51_d57b;
extern int d_5d51_d72a;
extern int d_5d51_d72c;
extern int d_5d51_d958;
extern int d_5d51_d97e;
extern int d_5d51_d9b2;
extern int d_5d51_d9cc;
extern int d_5d51_d9d0;
extern int d_5d51_d9fe;
extern char far *d_5d51_da28;
extern long far *d_5d51_da54;
extern int d_5d51_dd8a;
extern int d_5d51_dda0;
void f_8539_1978(int p, char all);
void f_8ba7_3559(int staff, int team, char c);
void f_8ba7_41f1(int club, int a);
void f_9915_4ac8(int a, int b);
void f_9915_4d1c(int a, int b);
void f_9e79_08fb(int a, int b);
void f_9e79_222f(void);
void f_a7f0_0592(int player, int team, char c);
void f_a7f0_3054(int player);
void f_a7f0_331b(char team, char n);
void f_b0f1_62ac(void);
void f_b0f1_6516(void);
extern unsigned char far d_2414_0724[];
extern unsigned char far d_3404_0728[];
extern int far d_3404_0866[][80];
extern unsigned char far d_3404_1fd2[];
extern unsigned char far d_3404_29fa[];
extern unsigned char far d_3404_2c84[];
extern unsigned char far d_3404_2f0e[];
extern unsigned char far d_3c0d_0000[][1500];
extern unsigned char far d_44d7_0000[][1500];
extern unsigned char far d_4f37_50d2[][140];
extern char near *d_5d51_b4c6[];
extern char near *d_5d51_b516[];
extern int d_5d51_d602;
extern int d_5d51_d6f2;
extern int d_5d51_d6f4;
extern int d_5d51_d6f6;
extern int d_5d51_d71c;
extern int d_5d51_d73e;
extern int d_5d51_d756;
extern int d_5d51_d7a8;
extern int d_5d51_d7ea;
extern int d_5d51_d7ec;
extern int d_5d51_d7f2;
extern int d_5d51_d84a;
extern int d_5d51_d9c2;
extern int d_5d51_d9c4;
extern int d_5d51_d9f0;
extern int d_5d51_da04;
extern int d_5d51_da16;
extern int d_5d51_da18;
extern int d_5d51_da1a;
extern char (far *d_5d51_da2c)[101];
extern unsigned char (far *d_5d51_da38)[1500];
extern int (far *d_5d51_da4c)[1500];
extern int d_5d51_dd92;
extern int d_5d51_dd8c;
extern int d_5d51_dd9c;
struct flags_a { unsigned char b0; unsigned f8 : 1; unsigned f9 : 1; unsigned : 6; unsigned : 2; unsigned f18 : 1; unsigned f19 : 1; unsigned : 4; unsigned : 0; unsigned f24 : 1; unsigned : 3; unsigned f28 : 1; unsigned : 1; unsigned f30 : 1; unsigned : 1; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
extern union flags far d_2414_af3c[];
long f_1646_0204(int p, int n);
long f_1646_0da1(long v, char c);
char far *f_1646_470f(int player);
char far *f_1646_48c0(int player);
float f_1d5e_1089(void);
long f_1d5e_131d(long a, long b);
extern long far d_3404_4012[];
extern unsigned char far d_3404_4462[];
extern unsigned char far d_3404_4552[];
extern unsigned char far d_3404_45ca[][82];
extern unsigned char far d_3404_4dc2[];
extern unsigned char far d_3404_4e8a[];
extern long d_5d51_d43d;
extern long d_5d51_d441;
extern long d_5d51_d445;
extern float d_5d51_d535;
extern char d_5d51_d577;
extern char d_5d51_d578;
extern char d_5d51_d579;
extern int d_5d51_d6ec;
extern int d_5d51_d6ee;
extern int d_5d51_d6f0;
extern int d_5d51_d750;
extern long far *d_5d51_da58;
extern int d_5d51_dda2;
char far *f_1646_3537(int x);
char far *f_1646_4849(int player);
int f_9e79_0000(int x);
extern char far d_2414_3066[];
extern char far d_2414_30b6[];
extern char far d_2414_30fa[][12];
extern char far d_2414_3106[];
extern char far d_2414_3112[];
extern char far d_2414_317e[];
extern char far d_2414_318a;
extern char far d_2414_318b[];
extern char far d_2414_3197;
extern char far d_2414_3198[];
extern char far d_2414_31a4;
extern char far d_2414_31a5[];
extern char far d_2414_31b1;
extern char far d_2414_31b2[];
extern char far d_2414_31bf;
extern char far d_2414_31c0[];
extern char far d_2414_31cd;
extern char far d_2414_31ce[];
extern char far d_2414_31db[];
extern char far d_2414_31e7;
extern char far d_2414_31e8[];
extern char far d_2414_31f5[];
extern char far d_2414_3201;
extern char far d_2414_3202;
extern char far d_2414_3203[];
extern char far d_2414_3210[];
extern char far d_2414_321c;
extern float far d_2414_d694[];
extern int far d_2414_dae0[][140];
extern unsigned char far d_2414_e5d0[][140];
extern unsigned char far d_3404_461a[];
extern unsigned char far d_3404_4642[];
extern unsigned char far d_3404_466a[];
extern unsigned char far d_3404_4692[];
extern int far d_44d7_9260[][38];
extern float far d_44d7_958c[];
extern int far d_44d7_a594[];
extern char far * far d_4f37_0610[];
extern int d_5d51_d6de;
extern int d_5d51_d6e0;
extern int d_5d51_d6e2;
extern int d_5d51_d6e4;
extern int d_5d51_d6fc;
extern long (far *d_5d51_da3c)[140];
extern int d_5d51_dd94;
char far *f_1d5e_100c(char far *s);
char far *f_1646_4a8f(int n);
char far *f_1646_4b1e(int division, char full);
extern char far d_2414_2f6c[];
extern char far d_2414_2fbc[];
extern char far d_2414_300c[];
extern char far d_2414_305c[];
extern char far d_2414_358e[];
extern char far d_2414_37c0[];
extern char far d_2414_4c96[];
extern char far d_2414_4d36[];
extern unsigned char far d_2414_e65c[];
extern unsigned char far d_2414_e6e8[];
extern unsigned char far d_2414_e774[];
extern unsigned char far d_2414_e800[];
extern unsigned char far d_2414_ec60[];
extern int far d_44d7_92ac[];
extern char far * far d_4f37_0000[];
extern int d_5d51_d6d8;
extern int d_5d51_d6da;
extern int d_5d51_d6dc;
void f_1646_58a8(int a);
extern float d_5d51_d4c1;
extern float d_5d51_d4c5;
extern int d_5d51_d6c8;
extern int d_5d51_d6ca;
extern int d_5d51_d6cc;
extern int d_5d51_d6ce;
extern int d_5d51_d6d0;
extern int d_5d51_d6d2;
extern int d_5d51_d6d4;
extern int d_5d51_d6d6;
void f_1646_357e(int x, int y, int colour, char far *s);
void f_1d5e_0822(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_1d5e_08d7(int c);
void f_1d5e_0929(int x1, int y1, int x2, int y2);
unsigned f_1d5e_0b1c(char far *s, char far *set);
unsigned f_1d5e_0b6a(char far *s, char far *set);
char far *f_1d5e_0f84(char far *s, unsigned i, unsigned n);
extern char far d_2414_2e7c[];
extern char far d_2414_2ecc[];
extern char far d_2414_2f1c[];
extern int far d_2414_5590[3][16][8];
extern int d_5d51_d93c;
extern int d_5d51_d996;
extern int d_5d51_d9d8;
extern char far * far d_4f37_0653[];
extern unsigned char far d_4f37_0fa6[];
extern FILE *d_5d51_0098;
extern int far d_3404_074e[][100];
extern unsigned char far d_4f37_7792[][140];
extern int d_5d51_da10;
extern int d_5d51_da12;
extern int d_5d51_da14;
extern int d_5d51_da0c;

/* the competitions' names (room for 8; CM93's 7 had "FA Cup" and "Coca-Cola Cup" where
 * Italia has the Italian Cup) */
static char far *d_5d51_4854[8] = {
    "League Champions", "Italian Cup", "Anglo-Ital Cup", "UEFA Cup", "Cup Winners Cup",
    "European Cup"
};

int f_9182_0000(int team, int x)
{
    char buf[320];

    memset(d_2414_d28c, 0, 60);
    d_5d51_d740 = -1;
    strcpy(d_2414_3516, f_9182_19b6(x));
    do {
        sprintf(buf, "Appoint %s", d_2414_3516);
        f_1646_4ba0(buf);
        f_1646_459b(1.0, 4.0, team);
        f_1646_2fa4(7, "", "Own Search|Board Decision|");
        f_1646_3348(1);
        d_5d51_d77a = d_5d51_da0a;
        if (d_5d51_d77a == 0) {
            memset(d_2414_d28c, 0, 60);
            d_5d51_da5c = f_1d5e_1618(d_5d51_dda4, 1);
            memset(d_5d51_da5c, -1, 0xbb8);
            f_8ba7_1e33(11, 14, 1, 2, "Age", "35-40|40-50|50-60|60+|");
            if (d_5d51_d5df == 0) {
                f_8ba7_1e33(16, 18, 1, 2, "Division", "Serie A|Serie B|Unemployed|");
                if (d_5d51_d5df == 0) {
                    f_8ba7_1e33(20, 25, 1, 2, "Reputation", "Unknown|Poor|Fair|Good|Very Good|Superb|");
                    if (d_5d51_d5df == 0)
                        f_9182_01ac(team, x);
                }
            }
        }
    } while ((d_5d51_d77a != 0 || d_5d51_d740 == -1) && d_5d51_d77a != 1);
    return d_5d51_d740;
}

void f_9182_01ac(int team, int x)
{
    int n;
    int j;
    char buf[320];

    n = 0;
    f_1646_4ba0("");
    f_1646_3c89(-1.0, 12.5, 1, "Searching");
    for (j = 1; j <= 2; j++)
        for (d_5d51_d9b4 = 0; d_5d51_d9b4 <= 0x285; d_5d51_d9b4++) {
            d_5d51_d5ca = -1;
            if (d_3404_1abe[d_5d51_d9b4] != team && j == 1)
                d_5d51_d5ca = 0;
            if (d_5d51_d5ca != 0 && d_3404_1abe[d_5d51_d9b4] == team && j == 2)
                d_5d51_d5ca = 0;
            if (d_5d51_d5ca != 0 && d_3404_4226[x][team] == d_5d51_d9b4)
                d_5d51_d5ca = 0;
            if (d_3404_1abe[d_5d51_d9b4] != d_5d51_d87e) {
                if (d_5d51_d5ca != 0) {
                    d_5d51_d591 = 0;
                    if (d_2414_d28c[15] != 0)
                        d_5d51_d591 = -1;
                    else {
                        d_5d51_d76e = d_3404_1d48[d_5d51_d9b4];
                        if (d_5d51_d76e <= 40)
                            d_5d51_d591 = d_2414_d28c[11];
                        else if (d_5d51_d76e <= 50)
                            d_5d51_d591 = d_2414_d28c[12];
                        else if (d_5d51_d76e <= 60)
                            d_5d51_d591 = d_2414_d28c[13];
                        else
                            d_5d51_d591 = d_2414_d28c[14];
                    }
                    if (d_5d51_d591 == 0)
                        d_5d51_d5ca = 0;
                }
                if (d_5d51_d5ca != 0 && d_2414_d28c[19] == 0)
                    if (d_3404_1abe[d_5d51_d9b4] == 0xff && d_2414_d28c[18] == 0
                        || d_3404_1abe[d_5d51_d9b4] < 0xff && d_2414_d28c[16 + f_1646_717d(d_3404_1abe[d_5d51_d9b4])] == 0)
                        d_5d51_d5ca = 0;
                if (d_5d51_d5ca != 0 && d_2414_d28c[26] == 0) {
                    strcpy(d_2414_34c6, f_9182_14f6(d_5d51_d9b4, x));
                    if (d_2414_d28c[20 + d_5d51_d9b0] == 0)
                        d_5d51_d5ca = 0;
                }
            }
            if (d_5d51_d5ca != 0) {
                n++;
                d_5d51_da5c = f_1d5e_1618(d_5d51_dda4, 1);
                d_5d51_da5c[n - 1] = d_5d51_d9b4;
            }
        }
    if (n > 0) {
        d_5d51_d76c = 1;
        do {
            sprintf(buf, "New %s %s", (char far *)d_5d51_b476[team], d_2414_3516);
            f_1646_6097();
            f_1646_4ba0(buf);
            f_1646_3686(1.125, 4.5, 0, 1, 72, " NAME");
            f_1646_3686(10.375, 4.5, 0, 1, 78, " CLUB");
            f_1646_3686(20.375, 4.5, 0, 1, 22, " YR");
            f_1646_3686(23.375, 4.5, 0, 1, 72, " CHARACTER");
            f_1646_3686(32.625, 4.5, 0, 1, 52, " REP");
            f_1646_60a7();
            f_8ba7_2aea();
            d_5d51_d8fe = 0;
            for (d_5d51_d98e = d_5d51_d76c; d_5d51_d76c + 14 >= d_5d51_d98e; d_5d51_d98e++) {
                d_5d51_da5c = f_1d5e_1618(d_5d51_dda4, 0);
                d_5d51_d9b4 = d_5d51_da5c[d_5d51_d98e - 1];
                if (d_5d51_d9b4 > -1) {
                    d_44d7_8caa[d_5d51_d8fe] = d_5d51_d9b4;
                    d_5d51_d8fe++;
                } else
                    d_5d51_d98e = d_5d51_d76c + 14;
            }
            f_1646_6097();
            for (d_5d51_d98e = 1; d_5d51_d98e <= d_5d51_d8fe; d_5d51_d98e++) {
                if (d_5d51_d98e & 1)
                    d_5d51_d9b8 = 2;
                else
                    d_5d51_d9b8 = 9;
                d_5d51_d9b4 = d_44d7_8caa[d_5d51_d98e - 1];
                sprintf(buf, " %.11s", f_1646_4919(d_5d51_d9b4, -1));
                f_1646_50c5(0, 1.125, d_5d51_d98e + 5, 1, d_5d51_d9b8, 72, buf);
                if (d_3404_1abe[d_5d51_d9b4] < 0xff)
                    strcpy(d_2414_4fd4, d_5d51_b476[d_3404_1abe[d_5d51_d9b4]]);
                else
                    strcpy(d_2414_4fd4, "Unemployed");
                d_5d51_d9b8 = d_3404_1abe[d_5d51_d9b4] == team ? 3 : 12;
                sprintf(buf, " %.12s", d_2414_4fd4);
                f_1646_3686(10.375, d_5d51_d98e + 5, 1, d_5d51_d9b8, 78, buf);
                sprintf(buf, " %d", d_3404_1d48[d_5d51_d9b4]);
                f_1646_3686(20.375, d_5d51_d98e + 5, 1, 4, 22, buf);
                sprintf(buf, " %s", d_4f37_0654[d_3404_225c[d_5d51_d9b4]]);
                f_1646_3686(23.375, d_5d51_d98e + 5, 1, 4, 72, buf);
                sprintf(buf, " %s", f_9182_14f6(d_5d51_d9b4, x));
                f_1646_3686(32.625, d_5d51_d98e + 5, 6, 3, 52, buf);
            }
            f_1646_60a7();
            do
                d_5d51_d776 = f_1646_5602(-1);
            while (d_5d51_d776 < 1);
            if (d_5d51_d776 == 1 && d_5d51_d5f0 < 3)
                d_5d51_d76c -= 15;
            else if (d_5d51_d776 == 3 && d_5d51_d5f0 == 1 || d_5d51_d776 == 2 && d_5d51_d5f0 == 3)
                d_5d51_d76c += 15;
            else if (d_5d51_d776 >= d_5d51_d76a) {
                d_5d51_d8ee = d_5d51_d776 - d_5d51_d76a;
                d_5d51_d9b4 = d_44d7_8caa[d_5d51_d8ee];
                sprintf(buf, "Appoint %s", f_1646_4919(d_5d51_d9b4, 0));
                f_1646_2fa4(0, buf, "Cancel|Appoint Him|");
                if (d_5d51_da0a == 1) {
                    strcpy(d_2414_4d86, f_1646_4919(d_5d51_d9b4, -1));
                    if (f_8ba7_552e(d_5d51_d9b4, team, x)) {
                        sprintf(buf, "%s accepts the offer", d_2414_4d86);
                        f_1646_0b9f(buf);
                        d_5d51_d740 = d_5d51_d9b4;
                    } else {
                        sprintf(buf, "%s refuses the offer", d_2414_4d86);
                        f_1646_0b9f(buf);
                    }
                }
            }
        } while ((d_5d51_d776 != 2 || d_5d51_d5f0 >= 3) && (d_5d51_d776 != 1 || d_5d51_d5f0 <= 2)
                 && d_5d51_d740 == -1);
    } else
        f_1646_0bf2("Nobody found");
}

int f_9182_09e8(int x)
{
    switch (x) {
    case 0:
    case 1:
        d_5d51_d9c0 = x;
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        d_5d51_d9c0 = 2;
        break;
    case 6:
        d_5d51_d9c0 = 3;
        break;
    }
    return d_5d51_d9c0;
}

/* the staff screen: its boxes, and where each member of staff is drawn */
static struct staffbox d_5d51_4874[] = {
    {8, 24, 156, 74, 4}, {8, 80, 156, 188, 14}, {164, 24, 312, 66, 3},
    {164, 74, 312, 116, 14}, {164, 124, 312, 166, 14}
};
static struct staffpanel d_5d51_4892[] = {
    {1.375, 5, 1, 28}, {20.875, 5, 1, 31}, {1.375, 12, 1, 24}, {1.375, 16.125, 1, 24},
    {1.375, 20.25, 1, 24}, {20.875, 17.5, 1, 24}, {20.875, 11.25, 1, 24}
};

void f_9182_0a23(int team)
{
    struct staffbox far *p;
    struct staffpanel far *q;
    int x2[5];
    int x1[5];
    int y2[5];
    int y1[5];
    char buf[320];

    do {
        d_5d51_d5a5 = 0;
        f_1646_0003(1.25, team, "Staff");
        p = d_5d51_4874;
        for (d_5d51_d738 = 0; d_5d51_d738 <= 4; d_5d51_d738++, p++) {
            f_1d5e_08cc(16);
            f_1d5e_08e2(p->x1 + 4, p->y1 + 4, p->x2 + 4, p->y2 + 4);
            f_1d5e_08cc(p->colour + 16);
            f_1d5e_08e2(p->x1, p->y1, p->x2, p->y2);
            x1[d_5d51_d738] = p->x1;
            x2[d_5d51_d738] = p->x2;
            y1[d_5d51_d738] = p->y1;
            y2[d_5d51_d738] = p->y2;
        }
        q = d_5d51_4892;
        for (d_5d51_d9ac = 0; d_5d51_d9ac <= 6; d_5d51_d9ac++, q++)
            f_9182_0eca(q->x, q->y, q->a, q->b, d_5d51_d9ac, team);
        f_1646_50c5(2, 20.75, 22.25, 1, 4, 0x94, "       DONE");
        if (f_1646_2cc9(team))
            f_1646_50c5(2, 35.0, 1.125, 1, 3, 0, "SACK");
        d_5d51_d588 = 0;
        do {
            d_5d51_d583 = 0;
            d_5d51_da0a = f_1646_5602(d_5d51_d9c6);
            if (d_5d51_da0a == 0 && d_5d51_d588 != 0) {
                d_5d51_d736 = -1;
                for (d_5d51_d738 = 0; d_5d51_d738 <= 4; d_5d51_d738++) {
                    if (f_1d5e_0c0f() >= x1[d_5d51_d738] && f_1d5e_0c0f() <= x2[d_5d51_d738]) {
                        if (d_5d51_d738 == 1) {
                            if (f_1d5e_0c07() >= 90 && f_1d5e_0c07() <= 120)
                                d_5d51_d736 = 2;
                            else if (f_1d5e_0c07() >= 123 && f_1d5e_0c07() <= 153)
                                d_5d51_d736 = 3;
                            else if (f_1d5e_0c07() >= 156 && f_1d5e_0c07() <= 186)
                                d_5d51_d736 = 4;
                        } else if (f_1d5e_0c07() >= y1[d_5d51_d738] && f_1d5e_0c07() <= y2[d_5d51_d738]) {
                            switch (d_5d51_d738) {
                            case 2:
                                d_5d51_d736 = 1;
                                break;
                            case 3:
                                d_5d51_d736 = 6;
                                break;
                            case 4:
                                d_5d51_d736 = 5;
                                break;
                            }
                        }
                    }
                }
                if (d_5d51_d736 > -1) {
                    strcpy(d_2414_4d86, f_1646_4919(d_3404_4226[d_5d51_d736][team], 0));
                    sprintf(buf, "Sack %s", d_2414_4d86);
                    f_1646_4ba0(buf);
                    if (d_5d51_d736 >= 2 && d_5d51_d736 <= 5)
                        f_1646_0b2f(5, "Any report will be lost");
                    f_1646_2fa4(d_5d51_d736 >= 2 && d_5d51_d736 <= 5 ? 8 : 5, "", "*Exit|Sack Him|");
                    f_1646_3348(1);
                    if (d_5d51_da0a == 1) {
                        sprintf(buf, "%s leaves club", d_2414_4d86);
                        f_1646_0bf2(buf);
                        f_8ba7_4f61(team, d_5d51_d736);
                        if (d_5d51_d736 >= 2 && d_5d51_d736 <= 5)
                            d_2414_bc16[d_3404_4226[0][team]][d_5d51_d736][0] = 0;
                    }
                    d_5d51_d5a5 = -1;
                } else {
                    d_5d51_d588 = 0;
                    f_1646_545c(2, 0);
                }
            } else if (d_5d51_da0a == 1) {
                d_5d51_d583 = -1;
            } else if (d_5d51_da0a == 2) {
                f_1646_545c(2, d_5d51_d588 = !d_5d51_d588);
            }
        } while (d_5d51_d583 == 0 && d_5d51_d5a5 == 0);
    } while (!d_5d51_d583);
}

void f_9182_0eca(float x, float y, int c, int c2, int type, int team)
{
    char buf[320];

    d_5d51_d734 = d_3404_4226[type][team];
    strcpy(d_2414_3426, f_9182_19b6(type));
    if (type == 2)
        strcat(d_2414_3426, "s");
    if (type != 3 && type != 4) {
        sprintf(buf, "%*s", strlen(d_2414_3426) + 12 - strlen(d_2414_3426) / 2, d_2414_3426);
        f_1646_3686(x, y - 1, c / 16, c % 16, 0x90, buf);
    }
    if (d_5d51_d734 < 0x28a) {
        strcpy(d_2414_4d86, f_1646_4919(d_5d51_d734, 0));
        sprintf(buf, "%*s", strlen(d_2414_4d86) + 12 - strlen(d_2414_4d86) / 2, d_2414_4d86);
        d_5d51_d582 = type == 2 || type == 3 || type == 4;
        f_1646_3686(x, y, c2 / 16 - (d_5d51_d582 ? 5 : 0), c2 % 16, 0x90, buf);
        f_1646_3686(x, y + 1, c2 / 16, c2 % 16, 0x47, " Age");
        sprintf(buf, " %d YRS", d_3404_1d48[d_5d51_d734]);
        f_1646_3686(x + 9.125, y + 1, c2 / 16, c2 % 16, 0x47, buf);
        f_1646_3686(x, y + 2, c2 / 16, c2 % 16, 0x47, " Character");
        sprintf(buf, " %s", d_4f37_0654[d_3404_225c[d_5d51_d734]]);
        f_1646_3686(x + 9.125, y + 2, c2 / 16, c2 % 16, 0x47, buf);
        f_1646_3686(x, y + 3, c2 / 16, c2 % 16, 0x47, type == 0 ? " Reputation" : " Ability");
        sprintf(buf, " %s", f_9182_14f6(d_5d51_d734, type));
        f_1646_3686(x + 9.125, y + 3, c2 / 16, c2 % 16, 0x47, buf);
        if (type == 0) {
            f_1646_3686(x, y + 4, c2 / 16, c2 % 16, 0x47, " Board");
            sprintf(buf, " %d%%", d_3404_452a[team]);
            f_1646_3686(x + 9.125, y + 4, c2 / 16, c2 % 16, 0x47, buf);
        }
    } else {
        f_1646_3686(x, y, c2 / 16, c2 % 16, 0x90, "");
        f_1646_3686(x, y + 1, c2 / 16, c2 % 16, 0x90, "      The coach is");
        f_1646_3686(x, y + 2, c2 / 16, c2 % 16, 0x90, "   temporary manager");
        f_1646_3686(x, y + 3, c2 / 16, c2 % 16, 0x90, "");
    }
    if (type == 0) {
        f_1646_3686(x, y + 4, c2 / 16, c2 % 16, 0x47, " Board");
        sprintf(buf, " %d%%", d_3404_452a[team]);
        f_1646_3686(x + 9.125, y + 4, c2 / 16, c2 % 16, 0x47, buf);
    }
}

/* The rating word of a manager's (type 0: reputation) or a coach's or scout's ability;
   d_5d51_d9b0 gets its rank (0 unknown, 1 poor ... 5 superb). */
char far *f_9182_14f6(int manager, int type)
{
    char far *s;

    s = f_1d5e_0efc();
    if (d_3404_1d48[manager] > 35) {
        switch (d_3404_2770[f_9182_09e8(type)][manager] / 10) {
        case 0: case 1: case 2: case 3: case 4:
            strcpy(s, "Poor");
            d_5d51_d9b0 = 1;
            break;
        case 5: case 6: case 7: case 8: case 9: case 10: case 11:
            strcpy(s, "Fair");
            d_5d51_d9b0 = 2;
            break;
        case 12: case 13: case 14:
            strcpy(s, "Good");
            d_5d51_d9b0 = 3;
            break;
        case 15: case 16:
            strcpy(s, "V Good");
            d_5d51_d9b0 = 4;
            break;
        default:
            strcpy(s, "Superb");
            d_5d51_d9b0 = 5;
            break;
        }
    } else {
        strcpy(s, "Unknown");
        d_5d51_d9b0 = 0;
    }
    return s;
}

void f_9182_1618(void)
{
    for (d_5d51_d9ca = 0; d_5d51_d9ca <= 37; d_5d51_d9ca++) {
        d_5d51_d9ac = f_1646_46a0(d_5d51_d9ca) - (d_5d51_d9ca >= 18 ? 18 : 0);
        d_5d51_d732 = f_1d5e_136a(f_1d5e_1308(d_3404_44da[d_5d51_d9ca] - 13, 0), 4);
        d_5d51_d730 = (d_3404_452a[d_5d51_d9ca] * (38 - d_5d51_da0e)
                       + d_4f37_0898[d_5d51_d9ac][d_5d51_d732] * d_5d51_da0e) / 38;
        d_5d51_d86e = (d_3404_452a[d_5d51_d9ca] * 3 + d_5d51_d730) / 4 - d_3404_452a[d_5d51_d9ca];
        if (d_5d51_d86e < 0 && d_3404_40aa[0][d_5d51_d9ca] != 0) {
            d_5d51_d44d = d_4f37_1392[d_3404_40aa[1][d_5d51_d9ca]][0][d_3404_40aa[2][d_5d51_d9ca]];
            d_5d51_d449 = d_4f37_1392[d_3404_40aa[1][d_5d51_d9ca]][1][d_3404_40aa[2][d_5d51_d9ca]];
            d_5d51_d581 = d_5d51_d9ca == d_5d51_d44d / 32 && d_5d51_d44d % 32 > d_5d51_d449 % 32
                       || d_5d51_d9ca == d_5d51_d449 / 32 && d_5d51_d449 % 32 > d_5d51_d44d % 32;
            if (d_5d51_d581)
                d_5d51_d86e = 0;
        }
        f_8119_1634(d_5d51_d9ca, d_5d51_d86e);
        if (f_1646_2cc9(d_5d51_d9ca) && (d_5d51_da0e == 10 || d_5d51_da0e == 20 || d_5d51_da0e == 30)) {
            if (d_4f37_0898[d_5d51_d9ac][d_5d51_d732] < 50)
                f_9182_1975(d_5d51_d9ca, "Our league position is unacceptable.");
            else if (d_4f37_0898[d_5d51_d9ac][d_5d51_d732] == 100)
                f_9182_1975(d_5d51_d9ca, "An excellent league position.");
        }
    }
}

void f_9182_18e5(int club)
{
    char buf[320];
    unsigned char v;

    v = d_3404_452a[club];
    if (v <= 24)
        strcpy(d_2414_33d6, "were going to sack you anyway.");
    else if (v <= 34)
        strcpy(d_2414_33d6, "are not particularly disappointed.");
    else if (v <= 59)
        strcpy(d_2414_33d6, "are a little disappointed.");
    else if (v <= 94)
        strcpy(d_2414_33d6, "are very disappointed at your decision.");
    else if (v <= 99)
        strcpy(d_2414_33d6, "are astonished at your decision.");
    else
        strcpy(d_2414_33d6, "think you are a right bandit.");
    sprintf(buf, "We %s", d_2414_33d6);
    f_9182_1975(club, buf);
}

void f_9182_1975(int team, char far *s)
{
    char buf[320];

    sprintf(buf, "%s board message", (char far *)d_5d51_b476[team]);
    f_1646_5bcb(team, buf, s);
}

char far *f_9182_19b6(int n)
{
    char far *p;

    p = f_1d5e_0efc();
    switch (n) {
    case 0:
        strcpy(p, "Manager");
        break;
    case 1:
        strcpy(p, "Team Coach");
        break;
    case 2:
    case 3:
    case 4:
        strcpy(p, "League Scout");
        break;
    case 5:
        strcpy(p, "Youth Scout");
        break;
    case 6:
        strcpy(p, "Club Physio");
        break;
    }
    return p;
}

void f_9182_1a19(void)
{
    for (d_5d51_d9ca = 0; d_5d51_d9ca <= 37; d_5d51_d9ca++) {
        d_3404_443a[5][d_5d51_d9ca] = f_1d5e_0d6a(5) + 5;
        if (f_1646_2cc9(d_5d51_d9ca)) {
            d_3404_443a[0][d_5d51_d9ca] = 8;
            d_3404_443a[6][d_5d51_d9ca] = 50;
        }
        d_3404_443a[7][d_5d51_d9ca] = 0;
        d_3404_443a[11][d_5d51_d9ca] = 2;
        d_3404_443a[68][d_5d51_d9ca] = 255;
        d_3404_443a[69][d_5d51_d9ca] = 255;
        d_3404_443a[70][d_5d51_d9ca] = 255;
        d_3404_418e[d_5d51_d9ca] = f_1d5e_0d6a(9);
        for (d_5d51_d9fe = (f_1646_2cc9(d_5d51_d9ca) != 0) + 5; d_5d51_d9fe <= 11; d_5d51_d9fe++)
            d_3404_40aa[d_5d51_d9fe][d_5d51_d9ca] = 650;
        switch (f_1646_717d(d_5d51_d9ca)) {
        case 0:
            if (d_5d51_d55c == 0) {
                if (f_b0f1_01df(d_5d51_d9ca))
                    d_3404_3e4a[0][d_5d51_d9ca] = f_1d5e_0d6a(1000000L) + 10000000L;
                else
                    d_3404_3e4a[0][d_5d51_d9ca] = f_1d5e_0d6a(1000000L) + 5000000L;
            }
            d_3404_443a[22][d_5d51_d9ca] = f_1d5e_0d6a(3);
            break;
        case 1:
            if (d_5d51_d55c == 0)
                d_3404_3e4a[0][d_5d51_d9ca] = f_1d5e_0d6a(500000L) + 500000L;
            d_3404_443a[22][d_5d51_d9ca] = f_1d5e_0d6a(3) + 1;
            break;
        }
        d_3404_3e4a[0][d_5d51_d9ca] += f_9e79_2216(d_5d51_d9ca);
    }
    for (d_5d51_d9cc = 0; d_5d51_d9cc <= 139; d_5d51_d9cc++) {
        d_2414_f168[d_5d51_d9cc] = d_5d51_d9cc;
        d_2414_e88c[0][d_5d51_d9cc] = 38;
    }
}

void f_9182_1c3b(void)
{
    FILE *fp;
    char buf[320];

    f_1d5e_1a24(2);
    f_b0f1_66b9(0);
    if (f_1d5e_0d9c(d_2414_0028) == 0) {
        fp = fopen(d_2414_0028, "wb");
        memset(buf, 0, 279);
        for (d_5d51_d72c = 1; d_5d51_d72c <= 140; d_5d51_d72c++)
            fwrite(buf, 1, 279, fp);
        fclose(fp);
    }
    f_1d5e_1a24(2);
    if (f_1d5e_0d9c(d_2414_0050) == 0) {
        fp = fopen(d_2414_0050, "wb");
        for (d_5d51_d72c = 1; d_5d51_d72c <= 1500; d_5d51_d72c++) {
            fwrite(buf, 1, 133, fp);
            f_b0f1_6835(0, d_5d51_d72c - 1, 1499);
        }
        fclose(fp);
    }
    f_1d5e_1a24(2);
    if (f_1d5e_0d9c(d_2414_0078) == 0) {
        fp = fopen(d_2414_0078, "wb");
        fwrite(buf, 1, 174, fp);
        fclose(fp);
    }
}

void f_9182_1dc1(void)
{
    f_b0f1_66b9(3);
    for (d_5d51_d72a = 0; d_5d51_d72a <= 501; d_5d51_d72a++) {
        f_b0f1_6835(3, d_5d51_d72a, 501);
        switch (d_4f37_09c4[0][d_5d51_d72a]) {
        case 0: d_4f37_09c4[0][d_5d51_d72a] = 20; break;
        case 1: d_4f37_09c4[0][d_5d51_d72a] = 17; break;
        case 2: d_4f37_09c4[0][d_5d51_d72a] = 15; break;
        case 3: d_4f37_09c4[0][d_5d51_d72a] = 12; break;
        case 4: d_4f37_09c4[0][d_5d51_d72a] = 10; break;
        case 5: d_4f37_09c4[0][d_5d51_d72a] = 7; break;
        case 6: d_4f37_09c4[0][d_5d51_d72a] = 5; break;
        case 7:
        case 8: d_4f37_09c4[0][d_5d51_d72a] = 3; break;
        }
        d_5d51_d97e = f_1d5e_0d6a(100);
        if (d_5d51_d97e <= 5)
            d_4f37_0fa6[d_5d51_d72a] = 0;
        else if (d_5d51_d97e <= 6)
            d_4f37_0fa6[d_5d51_d72a] = 1;
        else if (d_5d51_d97e <= 70)
            d_4f37_0fa6[d_5d51_d72a] = 2;
        else if (d_5d51_d97e <= 80)
            d_4f37_0fa6[d_5d51_d72a] = 6;
        else if (d_5d51_d97e <= 85)
            d_4f37_0fa6[d_5d51_d72a] = 3;
        else if (d_5d51_d97e <= 88)
            d_4f37_0fa6[d_5d51_d72a] = 4;
        else if (d_5d51_d97e <= 93)
            d_4f37_0fa6[d_5d51_d72a] = 5;
        else
            d_4f37_0fa6[d_5d51_d72a] = 7;
    }
}

void f_9182_1f7d(void)
{
    unsigned char k;

    d_5d51_d57b = 0;
    for (k = 0; k <= 1; k = k + 1) {
        for (d_5d51_d9b2 = k == 0 ? 646 : 0; d_5d51_d9b2 <= d_5d51_d958 + 645; d_5d51_d9b2++) {
            d_5d51_d9b8 = 0;
            for (d_5d51_d9fe = 0; d_5d51_d9fe <= 19; d_5d51_d9fe++)
                if (d_2414_fe5c[d_5d51_d9fe][k] <= d_2414_fe5c[d_5d51_d9b8][k])
                    d_5d51_d9b8 = d_5d51_d9fe;
            d_5d51_da54 = f_1d5e_1618(d_5d51_dda0, 0);
            if (d_2414_fe5c[d_5d51_d9b8][k] < d_5d51_da54[d_5d51_d9b2]) {
                d_5d51_da54 = f_1d5e_1618(d_5d51_dda0, 0);
                d_2414_fe5c[d_5d51_d9b8][k] = d_5d51_da54[d_5d51_d9b2];
                d_5d51_da28 = f_1d5e_1618(d_5d51_dd8a, 1);
                strcpy(d_5d51_da28 + d_5d51_d9b8 * 160 + k * 80, f_1646_4919(d_5d51_d9b2, 0));
                if (d_3404_1abe[d_5d51_d9b2] < 255)
                    strcpy(d_2414_4fd4, d_5d51_b476[d_3404_1abe[d_5d51_d9b2]]);
                else
                    strcpy(d_2414_4fd4, "NO CLUB");
                d_5d51_da28 = f_1d5e_1618(d_5d51_dd8a, 1);
                strcpy(d_5d51_da28 + d_5d51_d9b8 * 160 + k * 80 + 3200, d_2414_4fd4);
                d_5d51_d57b = -1;
            }
        }
        for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 18; d_5d51_d9d0++)
            for (d_5d51_d9fe = d_5d51_d9d0 + 1; d_5d51_d9fe <= 19; d_5d51_d9fe++)
                if (d_2414_fe5c[d_5d51_d9d0][k] < d_2414_fe5c[d_5d51_d9fe][k]) {
                    f_1d5e_13a4(&d_2414_fe5c[d_5d51_d9d0][k], &d_2414_fe5c[d_5d51_d9fe][k], 4);
                    d_5d51_da28 = f_1d5e_1618(d_5d51_dd8a, 1);
                    f_1d5e_13a4(d_5d51_da28 + d_5d51_d9d0 * 160 + k * 80,
                                d_5d51_da28 + d_5d51_d9fe * 160 + k * 80, 80);
                    f_1d5e_13a4(d_5d51_da28 + d_5d51_d9d0 * 160 + k * 80 + 3200,
                                d_5d51_da28 + d_5d51_d9fe * 160 + k * 80 + 3200, 80);
                }
    }
    if (d_5d51_d57b != 0)
        f_9915_4872();
}

void f_9182_234b(void)
{
    int a[11];
    int b[11];
    int c[11];
    unsigned k;

    for (d_5d51_d9ac = 0; d_5d51_d9ac <= 37; d_5d51_d9ac++) {
        d_5d51_d9ca = d_3404_0728[d_5d51_d9ac];
        d_3404_443a[70][d_5d51_d9ca] = d_3404_443a[69][d_5d51_d9ca];
        d_3404_443a[69][d_5d51_d9ca] = d_3404_443a[68][d_5d51_d9ca];
        d_3404_443a[68][d_5d51_d9ca] = d_5d51_d9ac;
        d_3404_443a[0][d_5d51_d9ca] = (d_3404_443a[0][d_5d51_d9ca] * 2 + 8) / 3;
        if (d_3404_443a[11][d_5d51_d9ca] == 1 && d_5d51_d9ac < 18)
            d_3404_3e4a[0][d_5d51_d9ca] = d_3404_3e4a[0][d_5d51_d9ca]
                + (f_9e79_2216(18) - f_9e79_2216(d_5d51_d9ca));
        else if (d_3404_443a[11][d_5d51_d9ca] > 2 && d_5d51_d9ac > 0)
            d_3404_3e4a[0][d_5d51_d9ca] = d_3404_3e4a[0][d_5d51_d9ca]
                + (f_9e79_2216(0) - f_9e79_2216(d_5d51_d9ca));
        d_3404_443a[11][d_5d51_d9ca] = 2;
    }
    f_b0f1_62ac();
    a[0] = d_3404_074e[6][0];
    a[1] = d_3404_0728[0];
    a[2] = d_3404_074e[6][1];
    for (d_5d51_d9cc = 3; d_5d51_d9cc <= 10; d_5d51_d9cc++)
        a[d_5d51_d9cc] = d_3404_0728[d_5d51_d9cc - 2];
    b[0] = d_3404_074e[5][0];
    b[1] = d_3404_074e[1][0];
    b[2] = d_3404_074e[1][1];
    b[3] = d_3404_074e[5][1];
    for (d_5d51_d9cc = 4; d_5d51_d9cc <= 10; d_5d51_d9cc++)
        b[d_5d51_d9cc] = d_3404_0728[d_5d51_d9cc - 3];
    c[0] = d_3404_074e[4][0];
    for (d_5d51_d9cc = 1; d_5d51_d9cc <= 10; d_5d51_d9cc++)
        c[d_5d51_d9cc] = d_3404_0728[d_5d51_d9cc + 1];

    for (d_5d51_d7ec = 0; d_5d51_d7ec <= 1; d_5d51_d7ec++)
        for (d_5d51_d7f2 = d_5d51_d7ec + 1; d_5d51_d7f2 <= 10; d_5d51_d7f2++)
            if (a[d_5d51_d7f2] == a[d_5d51_d7ec]) {
                for (k = d_5d51_d7f2; k < 10; k++)
                    a[k] = a[k + 1];
                d_5d51_d7f2--;
                a[10] = -1;
            }
    for (d_5d51_d7ec = 0; d_5d51_d7ec <= 1; d_5d51_d7ec++)
        for (d_5d51_d7f2 = 0; d_5d51_d7f2 <= 10; d_5d51_d7f2++)
            if (b[d_5d51_d7f2] == a[d_5d51_d7ec]) {
                for (k = d_5d51_d7f2; k < 10; k++)
                    b[k] = b[k + 1];
                d_5d51_d7f2--;
                b[10] = -1;
            }
    for (d_5d51_d7ec = 0; d_5d51_d7ec <= 1; d_5d51_d7ec++)
        for (d_5d51_d7f2 = 0; d_5d51_d7f2 <= 10; d_5d51_d7f2++)
            if (c[d_5d51_d7f2] == a[d_5d51_d7ec]) {
                for (k = d_5d51_d7f2; k < 10; k++)
                    c[k] = c[k + 1];
                d_5d51_d7f2--;
                c[10] = -1;
            }
    for (d_5d51_d7ec = 0; d_5d51_d7ec <= 1; d_5d51_d7ec++)
        for (d_5d51_d7f2 = d_5d51_d7ec + 1; d_5d51_d7f2 <= 10; d_5d51_d7f2++)
            if (b[d_5d51_d7f2] == b[d_5d51_d7ec]) {
                for (k = d_5d51_d7f2; k < 10; k++)
                    b[k] = b[k + 1];
                d_5d51_d7f2--;
                b[10] = -1;
            }
    for (d_5d51_d7ec = 0; d_5d51_d7ec <= 1; d_5d51_d7ec++)
        for (d_5d51_d7f2 = 0; d_5d51_d7f2 <= 10; d_5d51_d7f2++)
            if (c[d_5d51_d7f2] == b[d_5d51_d7ec]) {
                for (k = d_5d51_d7f2; k < 10; k++)
                    c[k] = c[k + 1];
                d_5d51_d7f2--;
                c[10] = -1;
            }
    for (d_5d51_d7ec = 0; d_5d51_d7ec <= 1; d_5d51_d7ec++)
        for (d_5d51_d7f2 = d_5d51_d7ec + 1; d_5d51_d7f2 <= 10; d_5d51_d7f2++)
            if (c[d_5d51_d7f2] == c[d_5d51_d7ec]) {
                for (k = d_5d51_d7f2; k < 10; k++)
                    c[k] = c[k + 1];
                d_5d51_d7f2--;
                c[10] = -1;
            }

    memset(d_3404_074e, -1, 0x640);
    for (d_5d51_d7ec = 0; d_5d51_d7ec <= 3; d_5d51_d7ec++) {
        d_3404_074e[4][d_5d51_d7ec] = c[d_5d51_d7ec];
        if (d_5d51_d7ec < 2) {
            d_3404_074e[5][d_5d51_d7ec] = b[d_5d51_d7ec];
            d_3404_074e[6][d_5d51_d7ec] = a[d_5d51_d7ec];
        }
    }

    /* Serie A's last four (14-17) go down, Serie B's first four (18-21) up */
    f_9e79_08fb(d_3404_0728[14], d_3404_0728[18]);
    f_9e79_08fb(d_3404_0728[15], d_3404_0728[19]);
    f_9e79_08fb(d_3404_0728[16], d_3404_0728[20]);
    f_9e79_08fb(d_3404_0728[17], d_3404_0728[21]);

    /* Serie B's last four (34-37) */
    d_5d51_da16 = d_3404_0728[34];
    d_5d51_da14 = d_3404_0728[35];
    d_5d51_da12 = d_3404_0728[36];
    d_5d51_da10 = d_3404_0728[37];
    f_8ba7_41f1(d_5d51_da16, 2);
    f_8ba7_41f1(d_5d51_da14, 2);
    f_8ba7_41f1(d_5d51_da12, 2);
    f_8ba7_41f1(d_5d51_da10, 2);
    f_b0f1_6516();
}

/* A non-league club (400-501, the best of 30 random draws) takes the place of club
   `team`: names, attributes, fixtures, staff and players are swapped or reset. */
void f_9182_298b(int team)
{
    unsigned char i;

    if (d_5d51_da04 > 1) {
        d_5d51_d84a = 0;
        do {
            d_5d51_d9cc = f_1d5e_0d6a(102) + 400;
            if ((d_5d51_d7ea = d_4f37_09c4[0][d_5d51_d9cc]) > d_5d51_d9c2 || d_5d51_d84a == 0) {
                d_5d51_d9c2 = d_4f37_09c4[0][d_5d51_d9cc];
                d_5d51_d6f6 = d_5d51_d9cc;
            }
            d_5d51_d84a++;
        } while (d_5d51_d84a < 30);
        f_1d5e_13a4((void *)&d_5d51_b476[team], (void *)&d_5d51_b516[d_5d51_d6f6], 2);
        d_5d51_b4c6[team] = d_5d51_b476[team];
        d_3404_443a[0][team] = 10;
        d_3404_443a[1][team] = f_1d5e_0d6a(10) + 10;
        f_1d5e_13a4(&d_3404_443a[2][team], &d_4f37_09c4[1][d_5d51_d6f6], 1);
        f_1d5e_13a4(&d_3404_443a[3][team], &d_4f37_09c4[2][d_5d51_d6f6], 1);
        d_3404_443a[4][team] = 13;
        d_3404_443a[5][team] = f_1d5e_0d6a(5) + 5;
        d_3404_443a[6][team] = 100;
        d_3404_443a[11][team] = 2;
        d_3404_443a[22][team] = f_1d5e_0d6a(3) + 2;
        d_3404_3e4a[0][team] = f_1d5e_0d6a(125000L) + 125000L;
        d_3404_3e4a[0][team] += f_9e79_2216(team);
        d_4f37_09c4[0][d_5d51_d6f6] = 10;
        for (d_5d51_d9fe = 0; d_5d51_d9fe <= 139; d_5d51_d9fe++)
            if (d_2414_f168[d_5d51_d9fe] == team)
                d_2414_f168[d_5d51_d9fe] = d_5d51_d6f6 - 362;
            else if (d_2414_f168[d_5d51_d9fe] == d_5d51_d6f6 - 362)
                d_2414_f168[d_5d51_d9fe] = team;
        for (d_5d51_d9fe = 0; d_5d51_d9fe <= 37; d_5d51_d9fe++)
            for (d_5d51_d9b8 = 1; d_5d51_d9b8 <= 7; d_5d51_d9b8++) {
                if (d_5d51_d9b8 == 2)
                    continue;
                if (d_3404_074e[d_5d51_d9b8][d_5d51_d9fe] == team)
                    d_3404_074e[d_5d51_d9b8][d_5d51_d9fe] = d_5d51_d6f6 + 38;
                else if (d_3404_074e[d_5d51_d9b8][d_5d51_d9fe] == d_5d51_d6f6 + 38)
                    d_3404_074e[d_5d51_d9b8][d_5d51_d9fe] = team;
            }
        f_1d5e_13a4(&d_4f37_7792[0][team], &d_4f37_7792[0][d_5d51_d6f6 - 362], 1);
        f_1d5e_13a4(&d_4f37_7792[1][team], &d_4f37_7792[1][d_5d51_d6f6 - 362], 1);
        for (d_5d51_d9fe = 0; d_5d51_d9fe <= d_5d51_da1a - 1; d_5d51_d9fe++)
            if (d_3c0d_0000[10][d_5d51_d9fe] == team)
                d_3c0d_0000[10][d_5d51_d9fe] = d_5d51_d6f6 - 362;
            else if (d_3c0d_0000[10][d_5d51_d9fe] == d_5d51_d6f6 - 362)
                d_3c0d_0000[10][d_5d51_d9fe] = team;
        f_9915_4ac8(team, d_5d51_d6f6 - 362);
        f_9915_4d1c(team, d_5d51_d6f6 + 38);
        for (d_5d51_d756 = 0; d_5d51_d756 <= 6; d_5d51_d756++)
            d_3404_4226[d_5d51_d756][team] = 650;
        for (d_5d51_d602 = 0; d_5d51_d602 <= 6; d_5d51_d602++) {
            d_5d51_d73e = -1;
            for (d_5d51_d9b2 = 0; d_5d51_d9b2 <= 645; d_5d51_d9b2++)
                if (d_3404_1abe[d_5d51_d9b2] == 255) {
                    if ((d_5d51_d7a8 = f_1d5e_1308(d_3404_2770[0][d_5d51_d9b2],
                                         f_1d5e_1308(d_3404_29fa[d_5d51_d9b2],
                                             f_1d5e_1308(d_3404_2c84[d_5d51_d9b2],
                                                         d_3404_2f0e[d_5d51_d9b2]))))
                            < d_5d51_d71c || d_5d51_d73e == -1) {
                        d_5d51_d73e = d_5d51_d9b2;
                        d_5d51_d71c = d_5d51_d7a8;
                    }
                }
            f_8ba7_3559(d_5d51_d73e, team, 0);
        }
        d_3404_443a[62][team] = 0;
        d_5d51_da2c = f_1d5e_1618(d_5d51_dd8c, 1);
        strcpy(d_5d51_da2c[team], "");
        d_3404_443a[7][team] = 0;
        d_3404_443a[10][team] = 0;
        d_5d51_d6f4 = 0;
        for (d_5d51_d9f0 = 0; d_5d51_d9f0 <= d_5d51_da1a - 1; d_5d51_d9f0++)
            if (d_44d7_0000[18][d_5d51_d9f0] == team) {
                f_a7f0_0592(d_5d51_d9f0, team, d_5d51_d6f4 < 2 ? 1 : 0);
                d_5d51_d6f4++;
                f_8539_1978(d_5d51_d9f0, -1);
            }
        for (i = 0; i <= 15; i = i + 1)
            f_a7f0_331b(team, i);
    }
}

/* The players' yearly ageing and attribute drift. */
void f_9182_2f15(void)
{
    f_b0f1_66b9(1);
    for (d_5d51_d6f2 = 1; d_5d51_d6f2 <= 3; d_5d51_d6f2++)
        f_9e79_222f();
    d_5d51_d9f0 = 0;
    f_1d5e_1a24(2);
    d_5d51_0098 = fopen(d_2414_0050, "rb+");
    do {
        if (d_5d51_da1a - 1 >= d_5d51_d9f0)
            f_b0f1_6835(1, d_5d51_d9f0, d_5d51_da1a - 1);
        d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
        f_9182_369b(d_5d51_d9f0, d_44d7_0000[17][d_5d51_d9f0], d_3c0d_0000[0][d_5d51_d9f0],
                    d_5d51_da4c[0][d_5d51_d9f0]);
        f_a7f0_3054(d_5d51_d9f0);
        d_44d7_0000[8][d_5d51_d9f0] = f_1d5e_136a(d_44d7_0000[8][d_5d51_d9f0] + (f_1d5e_0d6a(3) == 0), 9);
        d_44d7_0000[11][d_5d51_d9f0] = f_1d5e_1308(d_44d7_0000[11][d_5d51_d9f0] - (f_1d5e_0d6a(3) == 0), 1);
        d_44d7_0000[12][d_5d51_d9f0] = f_1d5e_136a(d_44d7_0000[12][d_5d51_d9f0] + (f_1d5e_0d6a(3) == 0), 20);
        d_44d7_0000[14][d_5d51_d9f0] = f_1d5e_1308(d_44d7_0000[14][d_5d51_d9f0] - (f_1d5e_0d6a(3) == 0), 1);
        d_44d7_0000[17][d_5d51_d9f0]++;
        d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 1);
        d_3c0d_0000[5][d_5d51_d9f0] = d_3c0d_0000[0][d_5d51_d9f0];
        d_3c0d_0000[6][d_5d51_d9f0] = d_3c0d_0000[1][d_5d51_d9f0];
        d_5d51_da38[6][d_5d51_d9f0] = d_3c0d_0000[2][d_5d51_d9f0];
        d_5d51_da38[6][d_5d51_d9f0] = d_5d51_da38[6][d_5d51_d9f0] - d_5d51_da38[6][d_5d51_d9f0] % 5;
        d_5d51_da38[7][d_5d51_d9f0] = d_3c0d_0000[3][d_5d51_d9f0];
        d_5d51_da38[8][d_5d51_d9f0] = d_3c0d_0000[4][d_5d51_d9f0];
        d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 1);
        d_5d51_da4c[1][d_5d51_d9f0] = d_5d51_da4c[0][d_5d51_d9f0];
        if (d_5d51_da1a - 1 == d_5d51_d9f0)
            d_5d51_d9f0 = 1000;
        else
            d_5d51_d9f0++;
    } while (d_5d51_da18 + 999 >= d_5d51_d9f0);
    fclose(d_5d51_0098);
}

void f_9182_3210(void)
{
    char buf[320];
    char title[80];
    char text[80];

    f_b0f1_66b9(6);
    for (d_5d51_d9f0 = 0; d_5d51_d9f0 <= d_5d51_da1a - 1; d_5d51_d9f0++) {
        f_b0f1_6835(6, d_5d51_d9f0, d_5d51_da1a - 1);
        if (d_5d51_d55c && d_5d51_da04 == 1)
            continue;
        d_5d51_d750 = d_44d7_0000[18][d_5d51_d9f0];
        d_5d51_d76e = d_44d7_0000[17][d_5d51_d9f0];
        if (d_2414_af3c[d_5d51_d9f0].w.f0 && d_5d51_d76e > 28)
            d_5d51_d76e = f_1d5e_1308(d_5d51_d76e - 4, 28);
        d_5d51_d579 = d_5d51_d76e > 30 && d_2414_af3c[d_5d51_d9f0].a.f8;
        d_5d51_d578 = d_2414_af3c[d_5d51_d9f0].w.f17 == 1;
        if (d_5d51_d578 != 0 || d_5d51_d76e > 38 ||
            (d_5d51_d76e > 33 && d_44d7_0000[0][d_5d51_d9f0] < 40) ||
            (d_5d51_d76e > 30 && d_44d7_0000[0][d_5d51_d9f0] < 30) || d_5d51_d579 != 0) {
            d_5d51_d577 = 0;
            if (f_1646_2cc9(d_5d51_d750) && d_5d51_da04 > 1) {
                sprintf(title, "%s squad news", (char far *)d_5d51_b476[d_5d51_d750]);
                if (d_5d51_d578 != 0)
                    sprintf(buf, "%s has been forced to retire through injury", f_1646_470f(d_5d51_d9f0));
                else if (d_5d51_d579 != 0) {
                    sprintf(buf, "%s has decided to go into non league soccer", f_1646_470f(d_5d51_d9f0));
                    d_5d51_da58 = f_1d5e_1618(d_5d51_dda2, 0);
                    d_3404_3e4a[0][d_5d51_d750] += d_5d51_da58[d_5d51_d9f0] / (f_1d5e_1089() + 1);
                } else
                    sprintf(buf, "%s has decided to hang up his boots", f_1646_470f(d_5d51_d9f0));
                sprintf(text, "%s at the age of %d.", buf, d_44d7_0000[17][d_5d51_d9f0]);
                f_1646_5bcb(d_5d51_d750, title, text);
                d_5d51_d577 = -1;
            }
            if (d_5d51_d578 != 0 && d_2414_af3c[d_5d51_d9f0].w.f20) {
                d_5d51_d445 = f_1646_0da1(f_1646_0204(d_5d51_d9f0, -1), 0);
                if (f_1646_2cc9(d_5d51_d750) && d_5d51_da04 > 1) {
                    sprintf(title, "%s squad news", (char far *)d_5d51_b476[d_5d51_d750]);
                    sprintf(text, "The club receives %ld from the insurance company following %s's retirement.",
                            d_5d51_d445, f_1646_48c0(d_5d51_d9f0));
                    f_1646_5bcb(d_5d51_d750, title, text);
                    d_5d51_d577 = -1;
                }
                d_3404_3e4a[0][d_5d51_d750] += d_5d51_d445;
            }
            if (d_5d51_d577 != 0) {
                f_b0f1_6516();
                f_b0f1_66b9(6);
            }
            d_3404_4552[d_5d51_d750]--;
            if (d_2414_af3c[d_5d51_d9f0].w.f0)
                d_3404_45ca[0][d_5d51_d750]--;
            if (d_3404_4552[d_5d51_d750] < 17 || d_3404_45ca[0][d_5d51_d750] == 0)
                f_a7f0_0592(d_5d51_d9f0, d_5d51_d750, d_3404_45ca[0][d_5d51_d750] == 0 ? 3 : 2);
            else {
                d_5d51_d9ca = -1;
                d_5d51_d84a = 0;
                do {
                    d_5d51_d9ca = f_1d5e_0d6a(38);
                    d_5d51_d84a++;
                } while (d_3404_4552[d_5d51_d9ca] >= d_5d51_d84a / 60 + 14 || d_3404_4552[d_5d51_d9ca] > 25);
                f_a7f0_0592(d_5d51_d9f0, d_5d51_d9ca, 2);
            }
            f_8539_1978(d_5d51_d9f0, -1);
        }
    }
}

void f_9182_369b(int player, int age, int games, int rating)
{
    if (games > 0)
        d_5d51_d535 = (float)rating / games * 41 - 120;
    else
        d_5d51_d535 = d_44d7_0000[0][player];
    d_5d51_d6f0 = d_44d7_0000[0][player];
    if (d_2414_af3c[player].w.f0 && age > 28)
        d_5d51_d6ee = f_1d5e_1308(age - 4, 28);
    else
        d_5d51_d6ee = age;
    if (d_5d51_d6ee <= 27) {
        d_44d7_0000[0][player] = (d_44d7_0000[0][player] * 4 + d_44d7_0000[9][player]) / 5;
        d_5d51_d6ec = f_1d5e_136a(38, games);
        d_44d7_0000[0][player] = f_1d5e_1308(f_1d5e_136a((d_44d7_0000[0][player] * (100 - d_5d51_d6ec) +
                                                          d_5d51_d6ec * d_5d51_d535 * 1.03) / 100,
                                                         d_44d7_0000[9][player]), 10);
    } else if (d_5d51_d6ee >= 30)
        d_44d7_0000[0][player] = (d_44d7_0000[0][player] * 5 + 10) / 6;
}

void f_9182_3807(void)
{
    long cap;

    for (d_5d51_d9cc = 0; d_5d51_d9cc <= 37; d_5d51_d9cc++) {
        long cost;
        unsigned char stand;
        unsigned char seat;

        cap = d_3404_4462[d_5d51_d9cc] * 1000L;
        d_5d51_d441 = d_3404_4012[d_5d51_d9cc] / d_3404_4dc2[d_5d51_d9cc];
        if (f_1646_2cc9(d_5d51_d9cc)) {
            char title[80];
            char text[80];

            sprintf(title, "%s club news", (char far *)d_5d51_b476[d_5d51_d9cc]);
            sprintf(text, "Our average attendance for the season was %ld.", d_5d51_d441);
            f_1646_5bcb(d_5d51_d9cc, title, text);
        }
        if (d_5d51_d441 > cap * 0.8 && d_3404_4462[d_5d51_d9cc] < 80) {
            d_5d51_d43d = f_1d5e_131d(d_3404_3e4a[0][d_5d51_d9cc] - f_9e79_2216(d_5d51_d9cc), 0L) * 0.75;
            cost = f_1d5e_136a(d_5d51_d43d, (f_1d5e_0d6a(6) * 10 + 200) * 1000);
            if (cost < 0)
                cost = 0;
            stand = d_5d51_d9cc < 18 && d_3404_4462[d_5d51_d9cc] < 40 && f_1d5e_0d6a(30) == 0 ?
                    f_1d5e_0d6a(6) + 5 : f_1d5e_0d6a(3) + 1;
            seat = d_5d51_d9cc < 38 ? stand : 0;
            d_3404_3e4a[0][d_5d51_d9cc] -= cost;
            d_3404_4462[d_5d51_d9cc] += stand;
            d_3404_4e8a[d_5d51_d9cc] += seat;
            if (f_1646_2cc9(d_5d51_d9cc)) {
                char title[80];
                char text[180];

                sprintf(title, "%s ground news", (char far *)d_5d51_b476[d_5d51_d9cc]);
                if (seat > 0)
                    sprintf(text, "The board has decided to increase standing capacity by %ld and seating capacity by %ld. Total capacity is now %ld. %ld of the cost is from club funds.",
                            (stand - seat) * 1000L, seat * 1000L, d_3404_4462[d_5d51_d9cc] * 1000L, cost);
                else
                    sprintf(text, "The board has decided to increase standing capacity by %ld. Total capacity is now %ld. %ld of the cost is from club funds.",
                            stand * 1000L, d_3404_4462[d_5d51_d9cc] * 1000L, cost);
                f_1646_5bcb(d_5d51_d9cc, title, text);
            }
        } else if (f_1646_717d(d_5d51_d9cc) == 0 && d_3404_4e8a[d_5d51_d9cc] < d_3404_4462[d_5d51_d9cc]) {
            d_5d51_d43d = f_1d5e_131d(d_3404_3e4a[0][d_5d51_d9cc] - f_9e79_2216(d_5d51_d9cc), 0L) * 0.75;
            cost = f_1d5e_136a(d_5d51_d43d, (f_1d5e_0d6a(6) * 10 + 100) * 1000);
            if (cost < 0)
                cost = 0;
            stand = (d_3404_4462[d_5d51_d9cc] - d_3404_4e8a[d_5d51_d9cc]) / 2;
            stand = f_1d5e_136a(f_1d5e_1308(stand, 1), f_1d5e_0d6a(4) + 5);
            d_3404_3e4a[0][d_5d51_d9cc] -= cost;
            d_3404_4e8a[d_5d51_d9cc] += stand;
            d_3404_4462[d_5d51_d9cc] = d_3404_4462[d_5d51_d9cc] - stand * 0.4;
            if (d_3404_4462[d_5d51_d9cc] < d_3404_4e8a[d_5d51_d9cc])
                d_3404_4462[d_5d51_d9cc] = d_3404_4e8a[d_5d51_d9cc];
            if (f_1646_2cc9(d_5d51_d9cc)) {
                char title[80];
                char text[180];

                sprintf(title, "%s ground news", (char far *)d_5d51_b476[d_5d51_d9cc]);
                if (d_3404_4462[d_5d51_d9cc] == d_3404_4e8a[d_5d51_d9cc])
                    sprintf(text, "The board has decided to convert the remaining standing areas to seating. The all-seater capacity is now %ld. %ld of the cost is from club funds.",
                            d_3404_4462[d_5d51_d9cc] * 1000L, cost);
                else
                    sprintf(text, "The board has decided to convert part of the standing area to seating. Seating capacity is now %ld, but total capacity is reduced to %ld. %ld of the cost is from club funds.",
                            d_3404_4e8a[d_5d51_d9cc] * 1000L, d_3404_4462[d_5d51_d9cc] * 1000L, cost);
                f_1646_5bcb(d_5d51_d9cc, title, text);
            }
        }
    }
}

void f_9182_3e11(void)
{
    FILE *fp;
    char buf[320];
    unsigned char i;

    f_b0f1_66b9(4);
    for (i = 0; i <= 37; i++) {
        d_44d7_a594[i] = 0;
        d_44d7_958c[i] = 0;
    }
    for (d_5d51_d9f0 = 0; d_5d51_d9f0 <= d_5d51_da1a - 1; d_5d51_d9f0++) {
        d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
        f_9182_4bd7(d_5d51_d9f0, d_44d7_0000[18][d_5d51_d9f0], d_3c0d_0000[13][d_5d51_d9f0],
                    d_3c0d_0000[12][d_5d51_d9f0], d_5d51_da4c[2][d_5d51_d9f0]);
    }
    f_1d5e_1a24(2);
    fp = fopen(d_2414_0028, "rb+");
    for (d_5d51_d9cc = 0; d_5d51_d9cc <= 139; d_5d51_d9cc++) {
        f_b0f1_6835(4, d_5d51_d9cc, 139);
        fseek(fp, (long)d_5d51_d9cc * 279, 0);
        fread(d_2414_3106, 1, 279, fp);
        if (d_2414_dae0[0][d_5d51_d9cc] > -1) {
            sprintf(d_2414_4fd4, "%.12s", f_1646_3537(d_2414_dae0[0][d_5d51_d9cc]));
            sprintf(d_2414_317e, "%-12s", d_2414_4fd4);
            d_2414_318a = d_5d51_da04 + 99;
        }
        if (d_2414_dae0[1][d_5d51_d9cc] > -1) {
            sprintf(d_2414_4fd4, "%.12s", f_1646_3537(d_2414_dae0[1][d_5d51_d9cc]));
            sprintf(d_2414_318b, "%-12s", d_2414_4fd4);
            d_2414_3197 = d_5d51_da04 + 99;
        }
        if (d_2414_dae0[2][d_5d51_d9cc] > -1) {
            sprintf(d_2414_4fd4, "%.12s", f_1646_3537(d_2414_dae0[2][d_5d51_d9cc]));
            sprintf(d_2414_3198, "%-12s", d_2414_4fd4);
            d_2414_31a4 = d_5d51_da04 + 99;
        }
        if (d_2414_dae0[3][d_5d51_d9cc] > -1) {
            sprintf(d_2414_4fd4, "%.12s", f_1646_3537(d_2414_dae0[3][d_5d51_d9cc]));
            sprintf(d_2414_31a5, "%-12s", d_2414_4fd4);
            d_2414_31b1 = d_5d51_da04 + 99;
        }
        if (d_2414_dae0[8][d_5d51_d9cc] > -1) {
            sprintf(d_2414_30b6, "%.13s", f_1646_4849(d_2414_dae0[9][d_5d51_d9cc]));
            sprintf(d_2414_3203, "%-13s", d_2414_30b6);
            sprintf(d_2414_4fd4, "%.12s", f_1646_3537(d_2414_dae0[8][d_5d51_d9cc]));
            sprintf(d_2414_3210, "%-12s", d_2414_4fd4);
            d_2414_321c = d_5d51_da04 + 99;
        }
        if (d_2414_dae0[4][d_5d51_d9cc] > -1) {
            sprintf(d_2414_30b6, "%.13s", f_1646_4849(d_2414_dae0[4][d_5d51_d9cc]));
            sprintf(d_2414_31ce, "%-13s", d_2414_30b6);
            if (d_2414_dae0[5][d_5d51_d9cc] < 38)
                strcpy(d_2414_4fd4, d_5d51_b476[d_2414_dae0[5][d_5d51_d9cc]]);
            else
                sprintf(d_2414_4fd4, "<%s>", d_4f37_0000[d_2414_dae0[5][d_5d51_d9cc] - 140]);
            sprintf(d_2414_31db, "%-12s", d_2414_4fd4);
            d_2414_31e7 = d_5d51_da04 + 99;
        }
        if (d_2414_dae0[6][d_5d51_d9cc] > -1) {
            sprintf(d_2414_30b6, "%.13s", f_1646_4849(d_2414_dae0[6][d_5d51_d9cc]));
            sprintf(d_2414_31e8, "%-13s", d_2414_30b6);
            if (d_2414_dae0[7][d_5d51_d9cc] < 38)
                sprintf(d_2414_4fd4, "%.12s", (char far *)d_5d51_b476[d_2414_dae0[7][d_5d51_d9cc]]);
            else
                sprintf(d_2414_4fd4, "<%.12s>", d_4f37_0000[d_2414_dae0[7][d_5d51_d9cc] - 140]);
            sprintf(d_2414_31f5, "%-12s", d_2414_4fd4);
            d_2414_3201 = d_5d51_da04 + 99;
        }
        if (d_5d51_d9cc < 38) {
            if (d_2414_e5d0[4][d_5d51_d9cc] < d_44d7_a594[d_5d51_d9cc]) {
                d_2414_e5d0[4][d_5d51_d9cc] = d_44d7_a594[d_5d51_d9cc];
                sprintf(d_2414_30b6, "%.13s", f_1646_4849(d_44d7_9260[0][d_5d51_d9cc]));
                sprintf(d_2414_31b2, "%-13s", d_2414_30b6);
                d_2414_31bf = d_5d51_da04 + 99;
            }
            if (d_44d7_958c[d_5d51_d9cc] > d_2414_d694[d_5d51_d9cc]) {
                d_2414_d694[d_5d51_d9cc] = d_44d7_958c[d_5d51_d9cc];
                sprintf(d_2414_30b6, "%.13s", f_1646_4849(d_44d7_9260[1][d_5d51_d9cc]));
                sprintf(d_2414_31c0, "%-13s", d_2414_30b6);
                d_2414_31cd = d_5d51_da04 + 99;
            }
        }
        d_5d51_d9ac = f_1646_46a0(d_5d51_d9cc);
        if (d_2414_e5d0[5][d_5d51_d9cc] > d_5d51_d9ac) {
            d_2414_e5d0[5][d_5d51_d9cc] = d_5d51_d9ac;
            d_2414_3202 = d_5d51_da04 + 99;
        }
        sprintf(d_2414_3066, "%c%c", d_5d51_da04 + 99, d_5d51_d9ac + 32);
        if (d_5d51_d9cc < 38) {
            d_5d51_d6e4 = d_3404_461a[d_5d51_d9cc];
            d_5d51_d6e2 = d_3404_4642[d_5d51_d9cc];
            d_5d51_d6e0 = (d_5d51_d9cc < 18 ? d_5d51_da0e : d_5d51_da0c) - d_5d51_d6e4 - d_5d51_d6e2;
            sprintf(buf, "%c%c%c%c%c%c", d_5d51_d6e4 + 32, d_5d51_d6e0 + 32, d_5d51_d6e2 + 32,
                    d_3404_466a[d_5d51_d9cc] + 32, d_3404_4692[d_5d51_d9cc] + 32,
                    f_9e79_0000(d_5d51_d9ac) + 32);
            strcat(d_2414_3066, buf);
        } else
            strcat(d_2414_3066, "      ");
        sprintf(d_2414_3066 + strlen(d_2414_3066), "%c%c",
                d_2414_e5d0[6][d_5d51_d9cc] + 32, 32);
        if (d_2414_e5d0[8][d_5d51_d9cc] > 0)
            sprintf(d_2414_3066 + strlen(d_2414_3066), "%c%c", 35, d_2414_e5d0[8][d_5d51_d9cc] + 32);
        else if (d_2414_e5d0[9][d_5d51_d9cc] > 0)
            sprintf(d_2414_3066 + strlen(d_2414_3066), "%c%c", 36, d_2414_e5d0[9][d_5d51_d9cc] + 32);
        else if (d_2414_e5d0[10][d_5d51_d9cc] > 0)
            sprintf(d_2414_3066 + strlen(d_2414_3066), "%c%c", 37, d_2414_e5d0[10][d_5d51_d9cc] + 32);
        else if (d_2414_e5d0[11][d_5d51_d9cc] > 0)
            sprintf(d_2414_3066 + strlen(d_2414_3066), "%c%c", 38, d_2414_e5d0[11][d_5d51_d9cc] + 32);
        else
            strcat(d_2414_3066, "  ");
        d_5d51_d6fc = f_1d5e_136a(d_5d51_da04, 10);
        if (d_5d51_da04 > 10)
            memcpy(d_2414_3106, d_2414_3112, 108);
        memcpy(d_2414_30fa[d_5d51_d6fc], d_2414_3066, 12);
        fseek(fp, (long)d_5d51_d9cc * 279, 0);
        fwrite(d_2414_3106, 1, 279, fp);
    }
    fclose(fp);
}

void f_9182_47ca(int team, int other, int a, int b)
{
    if (team < 38 || team >= 438) {
        d_5d51_d9cc = team - (team >= 438 ? 400 : 0);
        d_5d51_d6de = d_2414_e5d0[0][d_5d51_d9cc] - d_2414_e5d0[1][d_5d51_d9cc];
        if (a - b > d_5d51_d6de
            || (a - b == d_5d51_d6de && d_2414_e5d0[0][d_5d51_d9cc] < a)) {
            d_2414_e5d0[0][d_5d51_d9cc] = a;
            d_2414_e5d0[1][d_5d51_d9cc] = b;
            d_2414_dae0[0][d_5d51_d9cc] = other;
        }
    }
}

void f_9182_4869(int team, int other, int a, int b)
{
    if (team < 38 || team >= 438) {
        d_5d51_d9cc = team - (team >= 438 ? 400 : 0);
        d_5d51_d6de = d_2414_e5d0[3][d_5d51_d9cc] - d_2414_e5d0[2][d_5d51_d9cc];
        if (b - a > d_5d51_d6de
            || (b - a == d_5d51_d6de && d_2414_e5d0[3][d_5d51_d9cc] < b)) {
            d_2414_e5d0[2][d_5d51_d9cc] = a;
            d_2414_e5d0[3][d_5d51_d9cc] = b;
            d_2414_dae0[1][d_5d51_d9cc] = other;
        }
    }
}

void f_9182_4908(int team, int other, long v)
{
    if (team < 38 || team >= 438) {
        d_5d51_d9cc = team - (team >= 438 ? 400 : 0);
        d_5d51_da3c = f_1d5e_1618(d_5d51_dd94, 1);
        if (d_5d51_da3c[0][d_5d51_d9cc] < v) {
            d_5d51_da3c[0][d_5d51_d9cc] = v;
            d_2414_dae0[2][d_5d51_d9cc] = other;
        }
    }
}

void f_9182_4993(int team, int other, long v)
{
    if (team < 38 || team >= 438) {
        d_5d51_d9cc = team - (team >= 438 ? 400 : 0);
        d_5d51_da3c = f_1d5e_1618(d_5d51_dd94, 1);
        if (d_5d51_da3c[1][d_5d51_d9cc] > v || d_5d51_da3c[1][d_5d51_d9cc] == 0) {
            d_5d51_da3c[1][d_5d51_d9cc] = v;
            d_2414_dae0[3][d_5d51_d9cc] = other;
        }
    }
}

void f_9182_4a40(int team, int a, int player, int b)
{
    if (team < 38) {
        d_5d51_d9cc = team;
        if (d_2414_e5d0[12][d_5d51_d9cc] < b) {
            d_2414_e5d0[12][d_5d51_d9cc] = b;
            d_2414_dae0[8][d_5d51_d9cc] = a;
            d_2414_dae0[9][d_5d51_d9cc] = player;
        }
    }
}

void f_9182_4a94(int team, int row, int v)
{
    if (team < 38 || team >= 438) {
        d_5d51_d9cc = team - (team >= 438 ? 400 : 0);
        d_2414_e88c[row][d_5d51_d9cc] = v;
    }
}

void f_9182_4ad7(int player, int from, int to, long fee)
{
    d_5d51_da3c = f_1d5e_1618(d_5d51_dd94, 1);
    if (d_5d51_da3c[2][to] < fee) {
        d_5d51_da3c[2][to] = fee;
        d_2414_dae0[4][to] = player;
        d_2414_dae0[5][to] = from;
    }
}

void f_9182_4b57(int player, int from, int to, long fee)
{
    d_5d51_da3c = f_1d5e_1618(d_5d51_dd94, 1);
    if (d_5d51_da3c[3][from] < fee) {
        d_5d51_da3c[3][from] = fee;
        d_2414_dae0[6][from] = player;
        d_2414_dae0[7][from] = to;
    }
}

void f_9182_4bd7(int team, int player, int a, int b, int c)
{
    if (d_44d7_a594[player] < a) {
        d_44d7_a594[player] = a;
        d_44d7_9260[0][player] = team;
    }
    if (b >= 20) {
        d_5d51_d535 = (float)c / b;
        if (d_44d7_958c[player] < d_5d51_d535) {
            d_44d7_958c[player] = d_5d51_d535;
            d_44d7_92ac[player] = team;
        }
    }
}

void f_9182_4c86(int team)
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

    f_1d5e_1a24(2);
    fp = fopen(d_2414_0028, "rb+");
    fseek(fp, (long)team * 279, 0);
    fread(d_2414_3106, 1, 279, fp);
    fclose(fp);
    f_1646_6097();

    f_1646_0003(1.25, team, "Club Records");
    sprintf(d_2414_305c, "%d", d_5d51_da04 + 1993);
    f_1646_3686(1.125, 4.0, 1, 8, 0x130, "                   CLUB RECORDS");
    f_1646_3686(1.125, 11.75, 1, 8, 0x130, "                 TRANSFER RECORDS");
    f_1646_3686(1.125, 16.5, 1, 8, 0x130, "                  PLAYER RECORDS");
    for (d_5d51_d6dc = 0; d_5d51_d6dc <= 1; d_5d51_d6dc++) {
        f_1646_3686(1.125, d_5d51_d6dc * 12.5 + 5.25, 1, 12, 0x7e, " ACHIEVEMENT");
        f_1646_3686(17.125, d_5d51_d6dc * 12.5 + 5.25, 1, 4, 0x8a, " RECORD");
        f_1646_3686(34.625, d_5d51_d6dc * 12.5 + 5.25, 1, 4, 0x24, " YEAR");
    }
    for (d_5d51_d6da = 0; d_5d51_d6da <= 19; d_5d51_d6da++)
        strcpy(lines[d_5d51_d6da], "");

    /* best league placing */
    f_1646_3686(1.125, 6.5, 1, 14, 0x7e, " BEST LEAGUE PLACING");
    d_5d51_d9c4 = f_1646_717d(d_2414_e88c[0][team]) + 1;
    if (d_5d51_d9c4 < 2) {
        sprintf(lines[0], " %s IN %s", f_1646_4a8f(d_2414_e88c[0][team] % 20 + 1), f_1646_4b1e(d_5d51_d9c4, 0));
        sprintf(lines[1], " %d", d_2414_3202 + 1894);
    }

    /* biggest victory */
    f_1646_3686(1.125, 7.5, 1, 14, 0x7e, " BIGGEST VICTORY");
    sprintf(d_2414_37c0, "%d-%d", d_2414_e5d0[0][team], d_2414_e65c[team]);
    if (strcmp(d_2414_37c0, "0-0")) {
        sprintf(lines[2], " %s V ", d_2414_37c0);
        if (d_2414_dae0[0][team] == -1) {
            strncpy(buf, d_2414_317e, 12);
            buf[12] = 0;
            strcat(lines[2], f_1d5e_100c(buf));
            sprintf(lines[3], " %d", d_2414_318a + 1894);
        } else {
            sprintf(buf, "%.12s", f_1646_3537(d_2414_dae0[0][team]));
            strcat(lines[2], buf);
            sprintf(lines[3], " %s", d_2414_305c);
        }
    }

    /* heaviest defeat */
    f_1646_3686(1.125, 8.5, 1, 14, 0x7e, " HEAVIEST DEFEAT");
    sprintf(d_2414_37c0, "%d-%d", d_2414_e6e8[team], d_2414_e774[team]);
    if (strcmp(d_2414_37c0, "0-0")) {
        sprintf(lines[4], " %s V ", d_2414_37c0);
        if (d_2414_dae0[1][team] == -1) {
            strncpy(buf, d_2414_318b, 12);
            buf[12] = 0;
            strcat(lines[4], f_1d5e_100c(buf));
            sprintf(lines[5], " %d", d_2414_3197 + 1894);
        } else {
            sprintf(buf, "%.12s", f_1646_3537(d_2414_dae0[1][team]));
            strcat(lines[4], buf);
            sprintf(lines[5], " %s", d_2414_305c);
        }
    }

    /* highest attendance */
    f_1646_3686(1.125, 9.5, 1, 14, 0x7e, " HIGHEST ATTENDANCE");
    d_5d51_da3c = f_1d5e_1618(d_5d51_dd94, 0);
    sprintf(d_2414_300c, "%ld", d_5d51_da3c[0][team]);
    if (strcmp(d_2414_300c, "0")) {
        sprintf(lines[6], " %s V ", d_2414_300c);
        if (d_2414_dae0[2][team] == -1) {
            strncpy(buf, d_2414_3198, 12);
            buf[12] = 0;
            strcat(lines[6], f_1d5e_100c(buf));
            sprintf(lines[7], " %d", d_2414_31a4 + 1894);
        } else {
            sprintf(buf, "%.12s", f_1646_3537(d_2414_dae0[2][team]));
            strcat(lines[6], buf);
            sprintf(lines[7], " %s", d_2414_305c);
        }
    }

    /* lowest attendance */
    f_1646_3686(1.125, 10.5, 1, 14, 0x7e, " LOWEST ATTENDANCE");
    d_5d51_da3c = f_1d5e_1618(d_5d51_dd94, 0);
    sprintf(d_2414_300c, "%ld", d_5d51_da3c[1][team]);
    if (strcmp(d_2414_300c, "0")) {
        sprintf(lines[8], " %s V ", d_2414_300c);
        if (d_2414_dae0[3][team] == -1) {
            strncpy(buf, d_2414_31a5, 12);
            buf[12] = 0;
            strcat(lines[8], f_1d5e_100c(buf));
            sprintf(lines[9], " %d", d_2414_31b1 + 1894);
        } else {
            sprintf(buf, "%.12s", f_1646_3537(d_2414_dae0[3][team]));
            strcat(lines[8], buf);
            sprintf(lines[9], " %s", d_2414_305c);
        }
    }

    /* goals in a season */
    f_1646_3686(1.125, 19.0, 1, 14, 0x7e, " GOALS IN A SEASON");
    sprintf(d_2414_2fbc, "%d", d_2414_e800[team]);
    if (strcmp(d_2414_2fbc, "0")) {
        strncpy(d_2414_4c96, d_2414_31b2, 13);
        d_2414_4c96[13] = 0;
        sprintf(lines[10], " %s - %s", f_1d5e_100c(d_2414_4c96), d_2414_2fbc);
        sprintf(lines[11], " %d", d_2414_31bf + 1894);
    }

    /* average rating in a season */
    f_1646_3686(1.125, 20.0, 1, 14, 0x7e, " AV RT IN A SEASON");
    if (d_2414_d694[team] > 0) {
        sprintf(d_2414_4d36, "%.2f", d_2414_d694[team]);
        strncpy(d_2414_4c96, d_2414_31c0, 13);
        d_2414_4c96[13] = 0;
        sprintf(lines[12], " %s - %s", f_1d5e_100c(d_2414_4c96), d_2414_4d36);
        sprintf(lines[13], " %d", d_2414_31cd + 1894);
    }

    /* record fee paid */
    f_1646_3686(1.125, 13.0, 1, 4, 0x97, " RECORD FEE PAID");
    d_5d51_da3c = f_1d5e_1618(d_5d51_dd94, 0);
    sprintf(d_2414_358e, "%ld", d_5d51_da3c[2][team]);
    if (strcmp(d_2414_358e, "0")) {
        sprintf(lines[14], " %s FOR ", d_2414_358e);
        strcpy(lines[15], " FROM ");
        if (d_2414_dae0[4][team] == -1) {
            strncpy(buf, d_2414_31ce, 13);
            buf[13] = 0;
            strcpy(name, f_1d5e_100c(buf));
            strncpy(buf, d_2414_31db, 12);
            buf[12] = 0;
            strcat(lines[15], f_1d5e_100c(buf));
            sprintf(buf, " %d", d_2414_31e7 + 1894);
        } else {
            strcpy(name, f_1646_4849(d_2414_dae0[4][team]));
            if (d_2414_dae0[5][team] < 38)
                sprintf(buf, "%.12s %s", f_1646_3537(d_2414_dae0[5][team]), d_2414_305c);
            else
                sprintf(buf, "<%.12s> %s", d_4f37_0000[d_2414_dae0[5][team] - 140], d_2414_305c);
        }
        strcat(lines[15], buf);
        if (strlen(name) > 12)
            strcpy(name, name + 2);
        strcat(lines[14], name);
    }

    /* record fee recouped */
    f_1646_3686(20.25, 13.0, 1, 4, 0x97, " RECORD FEE RECOUPED");
    d_5d51_da3c = f_1d5e_1618(d_5d51_dd94, 0);
    sprintf(d_2414_358e, "%ld", d_5d51_da3c[3][team]);
    if (strcmp(d_2414_358e, "0")) {
        sprintf(lines[16], " %s FOR ", d_2414_358e);
        strcpy(lines[17], " TO ");
        if (d_2414_dae0[6][team] == -1) {
            strncpy(buf, d_2414_31e8, 13);
            buf[13] = 0;
            strcpy(name, f_1d5e_100c(buf));
            strncpy(buf, d_2414_31f5, 12);
            buf[12] = 0;
            strcat(lines[17], f_1d5e_100c(buf));
            sprintf(buf, " %d", d_2414_31e7 + 1894);
        } else {
            strcpy(name, f_1646_4849(d_2414_dae0[6][team]));
            if (d_2414_dae0[7][team] < 38)
                sprintf(buf, "%.12s %s", f_1646_3537(d_2414_dae0[7][team]), d_2414_305c);
            else
                sprintf(buf, "<%.12s> %s", d_4f37_0000[d_2414_dae0[7][team] - 140], d_2414_305c);
        }
        strcat(lines[17], buf);
        if (strlen(name) > 12)
            strcpy(name, name + 2);
        strcat(lines[16], name);
    }

    /* goals in a match */
    f_1646_3686(1.125, 21.0, 1, 14, 0x7e, " GOALS IN A MATCH");
    sprintf(d_2414_2fbc, "%d", d_2414_ec60[team]);
    if (strcmp(d_2414_2fbc, "0")) {
        if (d_2414_dae0[8][team] == -1) {
            strncpy(buf, d_2414_3203, 13);
            buf[13] = 0;
            strcpy(d_2414_4c96, f_1d5e_100c(buf));
            strncpy(buf, d_2414_3210, 12);
            buf[12] = 0;
            strcpy(d_2414_2f6c, f_1d5e_100c(buf));
            sprintf(lines[19], " %d", d_2414_321c + 1894);
        } else {
            strcpy(d_2414_4c96, f_1646_4849(d_2414_dae0[9][team]));
            sprintf(d_2414_2f6c, "%.12s", f_1646_3537(d_2414_dae0[8][team]));
            sprintf(lines[19], " %s", d_2414_305c);
        }
        sprintf(lines[18], " %s -  %s", d_2414_4c96, d_2414_2fbc);
    }

    for (p = pos, d_5d51_d6d8 = 0; d_5d51_d6d8 <= 19; d_5d51_d6d8++, p++)
        f_1646_3686(p->x, p->y, p->bg, p->fg, p->w, lines[d_5d51_d6d8]);
    f_1646_60a7();
    f_1646_50c5(2, 1.25, 22.5, 1, 4, 0x12d, "                 DONE");
    do
        d_5d51_da0a = f_1646_5602(d_5d51_d9c6);
    while (d_5d51_da0a <= 0);
}

/* a club's history: its league and cup record over the last ten seasons (Italia: Serie A
 * and B, one domestic cup) */
void f_9182_5e5f(int team)
{
    FILE *fp;
    char buf[12][80];
    int i;

    f_1d5e_1a24(2);
    fp = fopen(d_2414_0028, "rb+");
    fseek(fp, (long)team * 279, 0);
    fread(d_2414_3106, 1, 279, fp);
    fclose(fp);
    f_1646_6097();
    f_1646_0003(1.25, team, "History");
    f_1646_3686(1.125, 4.0, 0, 1, 0x130, "LEAGUE AND ITALIAN CUP");
    f_1646_3686(1.125, 5.25, 1, 12, 0x22, " YEAR");
    f_1646_3686(5.625, 5.25, 1, 12, 0x1c, " SER");
    f_1646_3686(9.375, 5.25, 1, 12, 0x12, "POS");
    f_1646_3686(11.875, 5.25, 1, 12, 0x12, " W");
    f_1646_3686(14.375, 5.25, 1, 12, 0x12, " D");
    f_1646_3686(16.875, 5.25, 1, 12, 0x12, " L");
    f_1646_3686(19.375, 5.25, 1, 12, 0x12, " F");
    f_1646_3686(21.875, 5.25, 1, 12, 0x12, " A");
    f_1646_3686(24.375, 5.25, 1, 12, 0x12, "PTS");
    f_1646_3686(26.875, 5.25, 1, 12, 0x62, " ITALIAN CUP");
    f_1646_3686(1.125, 16.75, 0, 1, 0x130, "EUROPEAN AND OTHER CUPS");
    for (d_5d51_d6d6 = 0; d_5d51_d6d6 <= 1; d_5d51_d6d6++) {
        f_1646_3686(d_5d51_d6d6 * 19.125 + 1.125, 18.0, 1, 12, 0x22, " YEAR");
        f_1646_3686(d_5d51_d6d6 * 19.125 + 5.625, 18.0, 1, 12, 0x73, " ACHIEVEMENT");
    }
    for (d_5d51_d6da = 0; d_5d51_d6da <= 11; d_5d51_d6da++)
        strcpy(buf[d_5d51_d6da], "");
    for (i = 1; i <= 10; i++) {
        memcpy(d_2414_3066, d_2414_30fa[i], 12);
        d_2414_3066[12] = 0;
        d_5d51_d4c5 = i + 5.5;
        if (i < 6) {
            d_5d51_d4c1 = 1.125;
            d_5d51_d6d4 = i + 18;
        } else {
            d_5d51_d4c1 = 20.25;
            d_5d51_d6d4 = i + 13;
        }
        d_5d51_d6d2 = d_2414_3066[0] + 1894;
        if (d_5d51_d6d2 > 1894 && d_5d51_da04 + 1993 > d_5d51_d6d2) {
            sprintf(buf[0], " %d", d_5d51_d6d2);
            d_5d51_d9ac = (unsigned char)d_2414_3066[1] - 32;
            if (d_5d51_d9ac < 38) {
                sprintf(buf[1], " %s", f_1646_4b1e(f_1646_717d(d_5d51_d9ac) + 1, 3));
                sprintf(buf[2], "%3d", d_5d51_d9ac - (d_5d51_d9ac >= 18 ? 18 : 0) + 1);
                for (d_5d51_d6d0 = 3; d_5d51_d6d0 <= 8; d_5d51_d6d0++)
                    sprintf(buf[d_5d51_d6d0], "%3d", (unsigned char)d_2414_3066[d_5d51_d6d0 - 1] - 32);
            } else
                strcpy(buf[1], " NLG");
            d_5d51_d6ce = (unsigned char)d_2414_3066[8] - 32;
            if (d_5d51_d6ce > 0) {
                f_9182_6d1c(d_5d51_d6ce);
                sprintf(buf[9], " %s", d_2414_2f1c);
            }
            d_5d51_d6ca = (unsigned char)d_2414_3066[11] - 32;
            if (d_5d51_d6ca > 0) {
                d_5d51_d6c8 = (unsigned char)d_2414_3066[10] - 32;
                sprintf(buf[11], " %s", f_9182_6df8(d_5d51_d6ca, d_5d51_d6c8));
            }
        }
        f_1646_3686(1.125, d_5d51_d4c5, 1, 4, 0x22, buf[0]);
        f_1646_3686(d_5d51_d4c1, d_5d51_d6d4, 1, 4, 0x22, buf[0]);
        strcpy(buf[0], "");
        f_1646_3686(5.625, d_5d51_d4c5, 6, 3, 0x1c, buf[1]);
        strcpy(buf[1], "");
        for (d_5d51_d6d0 = 2; d_5d51_d6d0 <= 8; d_5d51_d6d0++) {
            f_1646_3686((d_5d51_d6d0 - 2) * 2.5 + 9.375, d_5d51_d4c5, 1, i & 1 ? 8 : 14, 0x12, buf[d_5d51_d6d0]);
            strcpy(buf[d_5d51_d6d0], "");
        }
        f_1646_3686(26.875, d_5d51_d4c5, 1, i & 1 ? 2 : 9, 0x62, buf[9]);
        strcpy(buf[9], "");
        f_1646_3686(d_5d51_d4c1 + 4.5, d_5d51_d6d4, 1, i & 1 ? 8 : 14, 0x73, buf[11]);
        strcpy(buf[11], "");
    }
    f_1646_60a7();
    f_1646_58a8(0);
}

/* records a cup's winner and runner-up for this season, shifting the table up when full */
void f_9182_667a(int cup, int winner, int runner)
{
    if (d_5d51_da04 <= 16)
        d_5d51_d93c = d_5d51_da04 - 1;
    else {
        for (d_5d51_d9d8 = 0; d_5d51_d9d8 <= 14; d_5d51_d9d8++)
            for (d_5d51_d9fe = 0; d_5d51_d9fe <= 2; d_5d51_d9fe++)
                d_2414_5590[d_5d51_d9fe][d_5d51_d9d8][cup] = d_2414_5590[d_5d51_d9fe][d_5d51_d9d8 + 1][cup];
        d_5d51_d93c = 15;
    }
    d_2414_5590[0][d_5d51_d93c][cup] = d_5d51_da04;
    d_2414_5590[1][d_5d51_d93c][cup] = winner;
    d_2414_5590[2][d_5d51_d93c][cup] = runner;
}

/* the past winners screen: Italia's six competitions (the Anglo-Ital Cup, button 2, has no
 * column of its own: the later ones read column i + 1) */
void f_9182_6751(void)
{
    int i;
    int j;
    char buf[160];

    f_1646_6097();
    f_1646_4ba0("Past Winners");
    f_1646_3686(1.125, 5.25, 0, 6, 0, " Year ");
    f_1646_3686(5.875, 5.25, 0, 6, 0x5c, " Winners");
    f_1646_3686(17.625, 5.25, 0, 6, 0x5c, " Runners up");
    f_1646_60a7();
    for (d_5d51_d9d8 = 0; d_5d51_d9d8 <= 5; d_5d51_d9d8++)
        f_9182_6bc3(d_5d51_d9d8, 0);
    f_1646_50c5(2, 1.25, 22.5, 1, 4, 0x12d, "                 Done");
    f_1646_6097();
    i = 0;
    do {
        f_9182_6bc3(i, -1);
        sprintf(buf, " Past %s", d_5d51_4854[i]);
        if (i > 0)
            strcat(buf, " Winners");
        f_1646_3686(1.125, 4.0, 0, 1, 0x130, buf);
        for (d_5d51_d9d8 = 0; d_5d51_d9d8 <= 15; d_5d51_d9d8++) {
            d_5d51_d9b8 = d_5d51_d9d8 & 1 ? 15 : 3;
            j = i + (i >= 2);
            if (d_2414_5590[0][d_5d51_d9d8][j] > 0) {
                sprintf(buf, " %d", d_2414_5590[0][d_5d51_d9d8][j] + 1993);
                f_1646_3686(1.125, d_5d51_d9d8 + 6.25, 1, 4, 0x24, buf);
                sprintf(buf, " %s", f_1646_3537(d_2414_5590[1][d_5d51_d9d8][j]));
                f_1646_3686(5.875, d_5d51_d9d8 + 6.25, 1, d_5d51_d9b8, 0x5c, buf);
                sprintf(buf, " %s", f_1646_3537(d_2414_5590[2][d_5d51_d9d8][j]));
                f_1646_3686(17.625, d_5d51_d9d8 + 6.25, 1, d_5d51_d9b8, 0x5c, buf);
            } else {
                f_1646_3686(1.125, d_5d51_d9d8 + 6.25, 1, 4, 0x24, "");
                f_1646_3686(5.875, d_5d51_d9d8 + 6.25, 1, d_5d51_d9b8, 0x5c, "");
                f_1646_3686(17.625, d_5d51_d9d8 + 6.25, 1, d_5d51_d9b8, 0x5c, "");
            }
        }
        f_1646_60a7();
        do {
            d_5d51_da0a = f_1646_5602(-1);
            if (d_5d51_da0a == 0 && f_1d5e_0c0f() >= 0xec && f_1d5e_0c0f() <= 0x138
                && f_1d5e_0c07() >= 0x24 && f_1d5e_0c07() <= 0xa5)
                d_5d51_da0a = (f_1d5e_0c07() - 36) / 22 + 2;
        } while (d_5d51_da0a <= 0 || i + 2 == d_5d51_da0a || d_5d51_da0a > 7);
        if (d_5d51_da0a > 1) {
            f_9182_6bc3(i, 0);
            i = d_5d51_da0a - 2;
            f_1d5e_0822(8, 0x2c, 0xe8, 0xaa);
        }
    } while (d_5d51_da0a != 1);
}

/* one competition's button of the past winners screen, highlighted when c */
void f_9182_6bc3(int n, char c)
{
    char buf[160];
    int len;

    f_1d5e_08cc(c ? 25 : 18);
    f_1d5e_08e2(236, n * 22 + 36, 312, n * 22 + 55);
    f_1d5e_08d7(25);
    f_1d5e_0929(236, n * 22 + 36, 312, n * 22 + 55);
    len = f_1d5e_0b6a(d_5d51_4854[n], " ");
    strcpy(buf, d_5d51_4854[n]);
    buf[len - 1] = 0;
    f_1646_357e(275 - strlen(buf) * 3 + 8, n * 22 + 45, 1, buf);
    strcpy(buf, f_1d5e_0f84(d_5d51_4854[n], len + 1, 100));
    f_1646_357e(275 - strlen(buf) * 3 + 8, n * 22 + 52, 1, buf);
}

/* the name of an Italian Cup round by its week */
char far *f_9182_6d1c(int round)
{
    char far *s;

    s = f_1d5e_0efc();
    switch (round) {
    case 14: strcpy(s, "  1ST"); break;
    case 15: case 17: strcpy(s, "  2ND"); break;
    case 27: case 33: strcpy(s, "  3RD"); break;
    case 59: case 63: strcpy(s, "  Q FIN"); break;
    case 71: case 77: strcpy(s, " SEMIS"); break;
    case 98: case 100: strcpy(s, " FINAL"); break;
    case 150: strcpy(s, "  WON"); break;
    }
    strcpy(d_2414_2f1c, f_1d5e_100c(s));
    if (round <= 33)
        strcat(d_2414_2f1c, " ROUND");
    return s;
}

/* the name of a European cup's round by its week: the cup's name, then the round */
char far *f_9182_6df8(int round, int cup)
{
    char far *s;

    s = f_1d5e_0efc();
    if (cup == 3)
        strcpy(d_2414_2ecc, "A/I CUP");
    else if (cup == 4)
        strcpy(d_2414_2ecc, "UEFA CUP");
    else if (cup == 5)
        strcpy(d_2414_2ecc, "C/W CUP");
    else if (cup == 6)
        strcpy(d_2414_2ecc, "EURO CUP");
    switch (round) {
    case 19: case 23: case 29: strcpy(d_2414_2e7c, "QUALS"); break;
    case 21: case 25: strcpy(d_2414_2e7c, "1ST RND"); break;
    case 31: case 35: strcpy(d_2414_2e7c, "2ND RND"); break;
    case 37: case 47: strcpy(d_2414_2e7c, "INTER"); break;
    case 41: case 45:
        if (cup == 6)
            strcpy(d_2414_2e7c, "GROUPS");
        else if (cup == 4)
            strcpy(d_2414_2e7c, "3RD RND");
        else if (cup == 3)
            strcpy(d_2414_2e7c, "INTS");
        break;
    case 61: case 65: strcpy(d_2414_2e7c, "SEMIS"); break;
    case 69: case 73:
        if (cup == 6)
            strcpy(d_2414_2e7c, "GROUPS");
        else if (cup == 4 || cup == 5)
            strcpy(d_2414_2e7c, "QRTERS");
        break;
    case 79: case 83:
        if (cup == 6)
            strcpy(d_2414_2e7c, "GROUPS");
        else if (cup == 4 || cup == 5)
            strcpy(d_2414_2e7c, "SEMIS");
        break;
    case 75: case 87: case 89: case 91: case 93: strcpy(d_2414_2e7c, "FINAL"); break;
    case 150: strcpy(d_2414_2e7c, "WINNERS"); break;
    }
    strcpy(d_2414_2f1c, d_2414_2e7c);
    d_5d51_d9d8 = f_1d5e_0b1c(d_2414_2e7c, "RND");
    if (d_5d51_d9d8 > 0)
        strcpy(&d_2414_2f1c[d_5d51_d9d8 - 1], "ROUND");
    sprintf(s, "%s %s", d_2414_2ecc, d_2414_2e7c);
    return s;
}
