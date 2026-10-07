/* @at c06b:0000 */
/* @data 69da:8ea0 */
/* @module */

/* Overlay c06b (CM93's BE31.C): the formation and tactics editor (positions, styles,
 * swapping players, substitutions, win bonuses) with its pitch drawing and position-group
 * checks, a message box, the Multi-Save slot menu and the copy protection question (the
 * manual word check, patched out with NOPs in the shipped executable). Its data starts
 * with the functions' initialised local tables (the position names, the button labels,
 * the pitch columns, the group sizes and names), then the literal pool. */
#include <string.h>
#include <stdio.h>
#include <mem.h>
#include <stdlib.h>
#include <math.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_c06b_0000(unsigned char team);
void f_c06b_10e2(unsigned char button, char lit);
void f_c06b_132e(void);
void f_c06b_13bf(unsigned char from, unsigned char to, unsigned char team, unsigned char p);
unsigned char f_c06b_1507(unsigned char pos, unsigned char which);
void f_c06b_1595(unsigned char team);
void f_c06b_18d4(int cx, int cy, int r, unsigned char colour);
void f_c06b_1999(int x1, int y1, int x2, int y2, int cx, int cy, int r, unsigned char colour);
void f_c06b_1ad2(char far *s);
void f_c06b_1b99(unsigned char team, unsigned char n);
char f_c06b_1ca7(unsigned char team);
void f_c06b_1e21(void);
void f_c06b_201c(void);

void f_1a70_4a41(char far *title);
void f_2162_0897();
void f_2162_08a6();
void f_2162_08b5(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_2162_090f(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_2162_1021(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_2162_13fc(char far *a, char far *b, unsigned n);
void f_1a70_3d0c(float x, float y, int bg, int fg, int w, char far *s);
void f_1a70_3554(float x, float y, int bg, int fg, int w, char far *s);
void f_1a70_4ede(int a, float x, float y, int c, int d, int e, char far *s);
char f_1a70_2bc7(int x);
char far *f_1a70_2e4a(int x, char c);
char far *f_1a70_4739(int player);
char f_1a70_5b76(int player);
char f_1a70_5b94(int player);
unsigned char f_1a70_5bc8(int player);
void f_1a70_525f(int a, char b);
void f_1a70_5641(int n);
int f_1a70_53de(int a);
char f_1a70_5ea2(char team, char week, char n);
void f_8773_28ec(int team);
void f_aac9_42ed(int player, int a, char b);
void f_9007_4da1(int player, int a);
void f_b085_38a5(char team, char n);
void f_7dd6_44a5(int team);
void f_7dd6_4386(int team);
void f_b8da_229c(char team, int n);
extern char near *d_69da_b1fc[];
extern int d_69da_da62;
extern int d_69da_da60;
extern int d_69da_dab0;
extern int d_69da_daae;
extern int d_69da_da98;
extern int d_69da_da78;
extern int d_69da_d992;
extern int d_69da_d9e8;
extern int d_69da_d9bc;
extern int d_69da_d996;
extern char d_69da_ddd2;
extern char d_69da_ddca;
extern char d_69da_ddbe;
extern unsigned char d_69da_ddb2;
extern unsigned char d_69da_ddb1;
extern unsigned char far d_4512_00a4[];
extern unsigned char far d_5dbf_0b62[];
extern int far d_4512_1a30[];
extern unsigned char far d_4512_6378[];
extern int far d_4512_549a[][14];
extern unsigned char far d_4512_4726[][3][14];
extern unsigned char far d_4512_5d98[][14];
extern unsigned char far d_4512_5e08[][14];
extern unsigned char far d_4512_5dec[][14];
extern unsigned char far d_28da_2a72[][3];
extern unsigned char far d_3668_e880[][3];
extern unsigned char far d_4512_2db8[];
extern char far * far d_5dbf_0565[];
extern char far * far d_5dbf_06ac[];
void f_1a70_565a(int team);
extern unsigned char far d_4512_6096[];
extern int far d_4512_0592[][14];
extern unsigned char far d_4512_5d97[][14];
extern unsigned char far d_4512_0500[][14];
extern unsigned char far d_4512_051c[][14];
extern unsigned char far d_4512_ae4f[][3];
void f_1a70_344b(int x, int y, int colour, char far *s);
int f_2162_0c13(void);
int f_2162_0c1f(void);
void f_1a70_5f14(unsigned char team, unsigned char player, int x, int y);
void f_1a70_0adb(int line, char far *s);
void f_1a70_2eaa(int n, char far *title, char far *items);
void f_1a70_3226(int last);
void f_1a70_3b47(float x, float y, int colour, char far *s);
char far *f_2162_0d1a(void);
unsigned long f_2162_0da1(unsigned long n);
int f_2162_0dd7(char far *path);
void f_2162_0dfb(int ticks);
void f_2162_1256(void);
void f_2162_19f6();
void f_2162_19ff(void);
void f_2162_1a08(void);
void f_2162_1a11(void);
void f_2162_1a2f(void);
extern char far d_536d_a4ed[];
extern char far d_536d_a4c5[];
extern char far d_536d_a49d[];
extern char far d_536d_a475[];
extern char far d_536d_a44d[];
extern unsigned char far d_5dbf_50ea[][5][2];


/* the formation editor's screen. BCC 4.02 source-form tells kept here: the three code-free
 * `0;` statements choose which copy of the shared call tails the compiler keeps (the
 * 13bf calls of choices 29-38 all end in choice 38's, the 10e2/1b99 ones in mode 1's);
 * the casts (and the initialisers of p and q) choose between an index folded into the
 * displacement and the table address computed at run time (`mov bx,4726 / dec bx`). */
void f_c06b_0000(unsigned char team)
{
    char far *pos[14] = {"GK", "SWP", "ANCHOR", "DEF", "MID", "ATT", "SUPP",
                         "RIGHT", "LEFT", "CENTRE", "CAPT", "NORM", "FORW", "BACK"};
    unsigned char a;
    unsigned char b;
    unsigned char choice;
    unsigned char sel;
    unsigned char n;
    float y;
    char mode;
    char done;
    char buf[320];
    char buf2[320];
    int player;

    do {
        f_1a70_4a41("");
        f_2162_0897(0x10);
        f_2162_08b5(12, 12, 132, 196);
        f_2162_0897(0x1f);
        f_2162_08b5(8, 8, 128, 192);
        f_2162_08a6(0x13);
        f_2162_090f(8, 8, 128, 192);
        f_2162_1021(8, 22, 128, 22);
        strcpy(buf, "");
        for (n = (88 - strlen(d_69da_b1fc[team]) * 4) / 8; n > 0; n--)
            strcat(buf, " ");
        strcat(buf, d_69da_b1fc[team]);
        if (team < 80)
            f_1a70_3d0c(17.25, 1.625, -(d_4512_00a4[team] / 16), d_4512_00a4[team] % 16, 0xad, buf);
        else
            f_1a70_3d0c(17.25, 1.625,
                        -(d_5dbf_0b62[team == d_69da_da60 ? d_69da_daae - 80 : d_69da_dab0 - 80] / 16),
                        d_5dbf_0b62[team == d_69da_da60 ? d_69da_daae - 80 : d_69da_dab0 - 80] % 16, 0xad, buf);
        if (f_1a70_2bc7(team) == 0)
            f_8773_28ec(team);
        else
            d_69da_da78 = (int)d_4512_6378[d_4512_1a30[team] - 646];
        for (a = 1; a <= 3; ++a)
            for (b = 1; b <= 14; ++b) {
                y = b + 5.875;
                if (a == 1) {
                    sprintf(buf, " %s", f_1a70_2e4a(b, 1));
                    f_1a70_4ede(0, 17.125, y, 1, 4, 0x18, buf);
                    if (f_1a70_2bc7(team) == 0)
                        f_1a70_5641(b);
                } else if (a == 2) {
                    unsigned char k;

                    k = 1;
                    player = d_4512_549a[team][b - 1];
                    strcpy(buf, "");
                    if (team < 80) {
                        sprintf(buf, " %s", f_1a70_4739(player));
                        if (f_1a70_5b94(player))
                            k = 6;
                    } else
                        sprintf(buf, " %s", d_5dbf_0565[d_4512_4726[team][0][b - 1]]);
                    f_1a70_4ede(0, 20.375, y, k, b % 2 == 0 ? 8 : 14, 0x50, buf);
                    f_c06b_1b99(team, b);
                } else if (a == 3) {
                    sprintf(buf, " %s", pos[b - 1]);
                    f_1a70_4ede(0, 33.125, y, b <= 10 ? 5 : 1, b <= 10 ? 11 : 9, 0x30, buf);
                    if (f_1a70_2bc7(team) == 0)
                        f_1a70_5641(b + 28);
                }
            }
        f_1a70_4ede(2, 17.25, 22.75, 1, 4, 0xad, "         Done");
        f_c06b_10e2(0, 0);
        f_c06b_10e2(1, 0);
        f_c06b_10e2(2, 0);
        f_c06b_10e2(3, 0);
        mode = 0;
        for (sel = 1; d_4512_5d98[team == d_69da_da60 ? 0 : 1][sel - 1] >= 2; sel++)
            ;
        if (f_1a70_2bc7(team)) {
            unsigned char k, k2;

            k = f_c06b_1507((unsigned char)d_4512_4726[team][0][sel - 1], 0);
            k2 = f_c06b_1507((unsigned char)d_4512_4726[team][0][sel - 1], 1);
            f_1a70_525f(sel, -1);
            if (k != 0xff)
                f_1a70_525f(k, -1);
            if (k2 != 0xff)
                f_1a70_525f(k2, -1);
            f_1a70_525f(d_4512_4726[team][2][sel - 1] + 40, -1);
        }
        if (team < 80)
            strcpy(buf2, d_5dbf_06ac[d_4512_2db8[d_4512_1a30[team]] / 16]);
        else {
            unsigned u;

            u = team == d_69da_da60 ? d_69da_daae : d_69da_dab0;
            if (u < 480)
                strcpy(buf2, "Continental");
            else
                strcpy(buf2, "Up-and-under");
        }
        strcpy(buf, " ");
        for (n = (56 - strlen(buf2) * 3) / 8; n > 0; n--)
            strcat(buf, " ");
        strcat(buf, buf2);
        f_1a70_3554(1.625, 2.25, 0, 1, 0x70, buf);
        f_c06b_1595(team);
        do {
            done = 0;
            do {
                d_69da_d992 = f_1a70_53de(-1);
                if (d_69da_d992 == 0)
                    f_c06b_132e();
                choice = d_69da_d992;
            } while (choice == 0);
            if (choice >= 1 && choice <= 14) {
                if (choice != sel) {
                    if (mode == 0) {
                        if (d_4512_5d98[team == d_69da_da60 ? 0 : 1][choice - 1] < 2 ||
                            d_4512_5d98[team == d_69da_da60 ? 0 : 1][choice - 1] == 6) {
                            f_1a70_525f(sel, 0);
                            f_1a70_525f(choice, -1);
                            f_c06b_13bf(d_4512_4726[team][0][sel - 1], d_4512_4726[team][0][choice - 1], team, -1);
                            if (d_4512_4726[team][2][sel - 1] != d_4512_4726[team][2][choice - 1]) {
                                f_1a70_525f(d_4512_4726[team][2][sel - 1] + 40, 0);
                                f_1a70_525f(d_4512_4726[team][2][choice - 1] + 40, -1);
                            }
                            sel = choice;
                        }
                    } else if (mode == 1) {
                        unsigned char k;
                        unsigned char p, q;

                        p = d_4512_5d98[team == d_69da_da60 ? 0 : 1][choice - 1];
                        q = d_4512_5d98[team == d_69da_da60 ? 0 : 1][sel - 1];
                        if (p < 2 && q < 2) {
                            if (d_4512_4726[team][0][sel - 1] != d_4512_4726[team][0][choice - 1] ||
                                d_4512_4726[team][2][sel - 1] != d_4512_4726[team][2][choice - 1]) {
                                f_1a70_525f(sel, 0);
                                f_1a70_525f(choice, -1);
                                for (k = 0; k <= 2; ++k)
                                    f_2162_13fc((char far *)&d_4512_4726[team][k][sel - 1], (char far *)&d_4512_4726[team][k][choice - 1], 1);
                                f_c06b_1595(team);
                                sel = choice;
                            }
                        } else if (p == 4 && (q < 2 || q == 6) && d_69da_ddd2) {
                            if (choice == 14 && f_1a70_5ea2(team, d_69da_d996, d_69da_d9bc + 1) == 0) {
                                f_c06b_1ad2("No.15 ineligible for this match");
                                done = 1;
                            } else if (team == d_69da_da60 && d_69da_ddb1 >= 2 ||
                                       team == d_69da_da62 && d_69da_ddb2 >= 2) {
                                f_c06b_1ad2("Maximum 2 subs per game");
                                done = 1;
                            } else if (choice == 14 && d_4512_4726[team][0][sel - 1] != 1) {
                                f_c06b_1ad2("No.15 can only replace 'keeper");
                                done = 1;
                            } else {
                                f_1a70_525f(sel, 0);
                                f_1a70_525f(choice, -1);
                                for (k = 0; k <= 2; ++k)
                                    d_4512_4726[team][k][choice - 1] = d_4512_4726[team][k][sel - 1];
                                d_4512_5d98[team == d_69da_da60 ? 0 : 1][choice - 1] = 0;
                                if (d_4512_5d98[team == d_69da_da60 ? 0 : 1][sel - 1] == 6)
                                    d_4512_5d98[team == d_69da_da60 ? 0 : 1][sel - 1] = 3;
                                else
                                    d_4512_5d98[team == d_69da_da60 ? 0 : 1][sel - 1] = 5;
                                d_4512_5e08[team == d_69da_da60 ? 0 : 1][sel - 1] = d_69da_da98;
                                d_4512_5dec[team == d_69da_da60 ? 0 : 1][choice - 1] = d_69da_da98;
                                d_28da_2a72[team == d_69da_da60 ? 0 : 1][choice - 12] = sel - 1;
                                d_3668_e880[team == d_69da_da60 ? 0 : 1][choice - 12] = d_69da_da98;
                                f_c06b_1595(team);
                                sel = choice;
                                if (team == d_69da_da60)
                                    d_69da_ddb1++;
                                else
                                    d_69da_ddb2++;
                            }
                        }
                        mode = 0;
                        f_c06b_10e2(2, 0);
                        0;
                    }
                }
            } else if (choice >= 15 && choice <= 28) {
                if (team < 80) {
                    player = d_4512_549a[team][choice - 15];
                    if (f_1a70_5b76(player)) {
                        do {
                            f_aac9_42ed(player, -1, -1);
                            f_9007_4da1(player, d_69da_d9e8);
                        } while (!d_69da_ddbe);
                        done = 1;
                    } else if (f_1a70_5b94(player)) {
                        f_b085_38a5(team, f_1a70_5bc8(player));
                        done = 1;
                    }
                }
            } else if (choice >= 29 && choice <= 42) {
                unsigned char p = d_4512_4726[team][0][sel - 1];
                unsigned char k = 0;
                unsigned char q = d_4512_4726[team][2][sel - 1];
                if (p == 3 || p == 6 || p == 9)
                    k = 1;
                else if (p == 4 || p == 7 || p == 10)
                    k = 2;
                p -= k;
                if (choice == 29)
                    f_c06b_13bf(p + k, 1, team, sel);
                else if (choice >= 30 && choice <= 35) {
                    if (sel < 14) {
                        if (choice == 30)
                            f_c06b_13bf(p + k, 11, team, sel);
                        else if (choice == 31)
                            f_c06b_13bf(p + k, 12, team, sel);
                        else if (choice == 32)
                            f_c06b_13bf(p + k, (p == 1 || p >= 11 ? 2 : k) + 2, team, sel);
                        else if (choice == 33)
                            f_c06b_13bf(p + k, (p == 1 || p >= 11 ? 2 : k) + 5, team, sel);
                        else if (choice == 34)
                            f_c06b_13bf(p + k, (p == 1 || p >= 11 ? 2 : k) + 8, team, sel);
                        else if (choice == 35)
                            f_c06b_13bf(p + k, 13, team, sel);
                    } else {
                        f_c06b_1ad2("No.15 cannot be repositioned");
                        done = 1;
                    }
                } else if (choice == 36 && p + k >= 2 && p + k <= 10)
                    f_c06b_13bf(p + k, p, team, sel);
                else if (choice == 37 && p + k >= 2 && p + k <= 10)
                    f_c06b_13bf(p + k, p + 1, team, sel);
                else if (choice == 38 && p + k >= 2 && p + k <= 10)
                    f_c06b_13bf(p + k, p + 2, team, sel);
                else if (choice == 39) {
                    if (d_4512_6378[d_4512_1a30[team] - 646] != sel) {
                        d_69da_da78 = sel;
                        f_c06b_1b99(team, d_4512_6378[d_4512_1a30[team] - 646]);
                        d_4512_6378[d_4512_1a30[team] - 646] = sel;
                        f_c06b_1b99(team, d_4512_6378[d_4512_1a30[team] - 646]);
                        0;
                    }
                } else if (choice >= 40 && choice <= 42 && p + k >= 2 && p + k <= 10 && choice - 40 != q) {
                    f_1a70_525f(q + 40, 0);
                    f_1a70_525f(choice, -1);
                    d_4512_4726[team][2][sel - 1] = choice - 40;
                    f_c06b_1595(team);
                }
            } else if (choice == 43 && f_1a70_2bc7(team)) {
                if (f_c06b_1ca7(team) == 1) {
                    choice = 0;
                    done = 1;
                }
            } else if (choice == 44 && f_1a70_2bc7(team)) {
                f_7dd6_44a5(team);
                done = 1;
            } else if (choice == 45 && f_1a70_2bc7(team)) {
                f_7dd6_4386(team);
                done = 1;
            } else if (choice == 46 && f_1a70_2bc7(team)) {
                mode = !mode;
                f_c06b_10e2(2, mode);
                0;
            } else if (choice == 47 && f_1a70_2bc7(team) && d_69da_ddca) {
                f_b8da_229c(team, team == d_69da_da60 ? d_69da_dab0 : d_69da_daae);
                done = 1;
            }
        } while (done == 0 && choice != 43);
    } while (choice != 43);
}

/* One of the editor's four buttons: 0 New Style, 1 New Formation, 2 Swap With,
   3 Win Bonus; lit: drawn highlighted. */
void f_c06b_10e2(unsigned char button, char lit)
{
    char far *labels[6] = {"New", "Style", "New", "Formation", "Swap With", "Win Bonus"};
    int x;

    x = (button == 0 || button == 2) ? 136 : 226;
    if (button < 2) {
        f_2162_0897(16);
        f_2162_08b5(x + 2, 30, x + 88, 46);
        f_2162_0897((lit ? 1 : 4) + 16);
        f_2162_08b5(x, 28, x + 86, 44);
        f_2162_08a6(28);
        f_2162_1021(x, 44, x, 28);
        f_2162_1021(x, 28, x + 86, 28);
        f_1a70_344b(x + (43 - strlen(labels[button * 2]) * 3) + 8, 36, lit ? 12 : 1,
                    labels[button * 2]);
        f_1a70_344b(x + (43 - strlen(labels[button * 2 + 1]) * 3) + 8, 43, lit ? 12 : 1,
                    labels[button * 2 + 1]);
    } else {
        f_2162_0897(16);
        f_2162_08b5(x + 2, 164, x + 88, 175);
        f_2162_0897((lit ? 1 : 4) + 16);
        f_2162_08b5(x, 162, x + 86, 173);
        f_2162_08a6(28);
        f_2162_1021(x, 173, x, 162);
        f_2162_1021(x, 162, x + 86, 162);
        f_1a70_344b(x + (43 - strlen(labels[button == 2 ? 4 : 5]) * 3) + 8, 171, lit ? 0 : 1,
                    labels[button == 2 ? 4 : 5]);
    }
}

/* which of the four buttons (two columns of two) the mouse is on: sets d_69da_d992 to 44 + its number */
void f_c06b_132e(void)
{
    unsigned char i;
    unsigned x;

    for (i = 0; i <= 3; i = i + 1) {
        x = i == 0 || i == 2 ? 0x88 : 0xe2;
        if (f_2162_0c1f() >= x && f_2162_0c1f() <= x + 0x56
            && f_2162_0c13() >= (i < 2 ? 0x1c : 0xa1)
            && f_2162_0c13() <= (i < 2 ? 0x2c : 0xac)) {
            d_69da_d992 = i + 0x2c;
            i = 3;
        }
    }
}

void f_c06b_13bf(unsigned char from, unsigned char to, unsigned char team, unsigned char p)
{
    unsigned char a, b, i, changed;

    changed = 0;
    for (i = 0; i <= 1; i = i + 1) {
        a = f_c06b_1507(from, i);
        b = f_c06b_1507(to, i);
        if (a != b) {
            if (a != 0xff)
                f_1a70_525f(a, 0);
            if (b != 0xff)
                f_1a70_525f(b, -1);
            changed = 1;
        }
    }
    if (p < 0xff) {
        if (to == 1 || to >= 11) {
            if (d_4512_4726[team][2][p - 1] > 0) {
                f_1a70_525f(d_4512_4726[team][2][p - 1] + 40, 0);
                d_4512_4726[team][2][p - 1] = 0;
                f_1a70_525f(d_4512_4726[team][2][p - 1] + 40, -1);
            }
        }
        d_4512_4726[team][0][p - 1] = to;
        if (changed)
            f_c06b_1595(team);
    }
}

unsigned char f_c06b_1507(unsigned char pos, unsigned char which)
{
    unsigned char r = 0xff;

    if (which == 0) {
        if (pos == 1)
            r = 0x1d;
        else if (pos >= 2 && pos <= 4)
            r = 0x20;
        else if (pos >= 5 && pos <= 7)
            r = 0x21;
        else if (pos >= 8 && pos <= 10)
            r = 0x22;
        else if (pos == 11)
            r = 0x1e;
        else if (pos == 12)
            r = 0x1f;
        else if (pos == 13)
            r = 0x23;
    } else if (which == 1) {
        if (pos == 2 || pos == 5 || pos == 8)
            r = 0x24;
        else if (pos == 3 || pos == 6 || pos == 9)
            r = 0x25;
        else if (pos == 4 || pos == 7 || pos == 10)
            r = 0x26;
    }
    return r;
}

void f_c06b_1595(unsigned char team)
{
    unsigned char i;
    unsigned x, y;
    int *p4, *p7, *p10;
    unsigned char n[13];
    int two[11] = {50, 86, 50, 86, 50, 86, 50, 86, 50, 86, 50};
    int three[11] = {68, 43, 93, 68, 43, 93, 68, 43, 93, 68, 43};
    unsigned char pos;

    f_2162_0897(31);
    f_2162_08b5(9, 0x17, 0x7f, 0xbf);
    f_2162_08a6(19);
    f_2162_1021(8, 0x16, 0x80, 0x16);
    f_2162_1021(8, 0x6b, 0x80, 0x6b);
    f_2162_090f(0x1e, 0x16, 0x6a, 0x34);
    f_2162_090f(0x31, 0x16, 0x57, 0x22);
    f_2162_090f(0x1e, 0xa2, 0x6a, 0xc0);
    f_2162_090f(0x31, 0xb4, 0x57, 0xc0);
    f_c06b_18d4(0x44, 0x6b, 0x16, 3);
    f_2162_08a6(19);
    f_2162_1021(0x44, 0x2b, 0x44, 0x2b);
    f_2162_1021(0x44, 0xa9, 0x44, 0xa9);
    f_c06b_1999(0, 0x34, 0x140, 0x64, 0x44, 0x2b, 0x11, 3);
    f_c06b_1999(0, 0x64, 0x140, 0xa2, 0x44, 0xab, 0x11, 3);
    memset(n, 0, 13);
    for (i = 1; i <= 14; i = i + 1)
        if (d_4512_5d98[team == d_69da_da60 ? 0 : 1][i - 1] < 2)
            n[d_4512_4726[team][0][i - 1] - 1]++;
    p4 = n[3] == 2 ? two : three;
    p7 = n[6] == 2 ? two : three;
    p10 = n[9] == 2 ? two : three;
    for (i = 1; i <= 14; i = i + 1) {
        if (d_4512_5d98[team == d_69da_da60 ? 0 : 1][i - 1] < 2) {
            pos = d_4512_4726[team][0][i - 1];
            if (pos == 1) {
                x = 0x44;
                y = 0xba;
            } else if (pos == 2) {
                x = 0x75;
                y = 0x92;
            } else if (pos == 3) {
                x = 0x13;
                y = 0x92;
            } else if (pos == 4) {
                x = *p4++;
                y = 0x92;
            } else if (pos == 5) {
                x = 0x75;
                y = 0x67;
            } else if (pos == 6) {
                x = 0x13;
                y = 0x67;
            } else if (pos == 7) {
                x = *p7++;
                y = 0x67;
            } else if (pos == 8) {
                x = 0x75;
                y = 0x3c;
            } else if (pos == 9) {
                x = 0x13;
                y = 0x3c;
            } else if (pos == 10) {
                x = *p10++;
                y = 0x3c;
            } else if (pos == 11) {
                x = 0x44;
                y = 0xa3;
            } else if (pos == 12) {
                x = 0x44;
                y = 0x7c;
            } else if (pos == 13) {
                x = 0x44;
                y = 0x51;
            }
            f_1a70_5f14(team, i, x - 7, y - 6);
        }
    }
}

void f_c06b_18d4(int cx, int cy, int r, unsigned char colour)
{
    int x, h, px, py;

    px = -r;
    py = 0;
    f_2162_08a6(colour + 16);
    for (x = -r; x <= r; x++) {
        h = sqrt(r * r - x * x);
        f_2162_1021(cx + px, cy + py, cx + x, cy + h);
        f_2162_1021(cx + px, cy - py, cx + x, cy - h);
        px = x;
        py = h;
    }
}

void f_c06b_1999(int x1, int y1, int x2, int y2, int cx, int cy, int r, unsigned char colour)
{
    int x, h, px, py;

    px = -r;
    py = 0;
    f_2162_08a6(colour + 16);
    for (x = -r; x <= r; x++) {
        h = sqrt(r * r - x * x);
        if (cx + x >= x1 && cx + x <= x2) {
            if (cy + py >= y1 && cy + py <= y2 && cy + h >= y1 && cy + h <= y2)
                f_2162_1021(cx + px, cy + py, cx + x, cy + h);
            if (cy - py >= y1 && cy - py <= y2 && cy - h >= y1 && cy - h <= y2)
                f_2162_1021(cx + px, cy - py, cx + x, cy - h);
        }
        px = x;
        py = h;
    }
}

void f_c06b_1ad2(char far *s)
{
    float x;

    f_2162_19ff();
    f_2162_0897(16);
    f_2162_08b5(0x16, 0x5c, 0x12e, 0x70);
    f_2162_0897(20);
    f_2162_08b5(0x14, 0x5a, 0x12c, 0x6e);
    f_2162_08a6(28);
    f_2162_1021(0x14, 0x6e, 0x14, 0x5a);
    f_2162_1021(0x14, 0x5a, 0x12c, 0x5a);
    x = (160 - strlen(s) * 4) / 8.0 + 1;
    f_1a70_3b47(x, 12.25, 1, s);
    f_2162_0dfb(70);
    f_2162_1a08();
}

void f_c06b_1b99(unsigned char team, unsigned char n)
{
    unsigned char bg = 1;
    unsigned char fg;
    char buf[320];
    unsigned char st;

    fg = n % 2 == 0 ? 8 : 14;
    strcpy(buf, "");
    if (n == d_69da_da78) {
        strcpy(buf, "Cpt");
        bg = 0;
        fg = 2;
    } else {
        st = d_4512_5d97[team == d_69da_da60 ? 0 : 1][n];
        if (st == 1) {
            strcpy(buf, "Bkd");
            bg = 6;
        } else if (st == 2) {
            strcpy(buf, "Snt");
            bg = 2;
        } else if (st == 3 || st == 6) {
            strcpy(buf, "Inj");
            bg = 2;
        }
    }
    f_1a70_3554(30.375, n + 5.875, bg, fg, 20, buf);
}

char f_c06b_1ca7(unsigned char team)
{
    char r = 0;
    unsigned char cnt[13];
    unsigned char max[13] = {1, 1, 1, 3, 1, 1, 3, 1, 1, 3, 1, 1, 1};
    char buf[320];
    char far *names[13] = {"Goalkeepers", "Right-backs", "Left-backs", "Centre-backs",
        "Right-midfielders", "Left-midfielders", "Centre-midfielders", "Right-wingers",
        "Left-wingers", "Centre-forwards", "Sweepers", "Anchor men", "Support men"};
    unsigned char i;
    unsigned char j;

    memset(cnt, 0, 13);
    for (i = 1; i <= 14; i++)
        if (d_4512_5d98[team == d_69da_da60 ? 0 : 1][i - 1] < 2)
            cnt[d_4512_4726[team][0][i - 1] - 1]++;
    for (j = 1; j <= 13; j++)
        if (cnt[j - 1] > max[j - 1]) {
            sprintf(buf, "%d %s selected", cnt[j - 1], names[j - 1]);
            f_c06b_1ad2(buf);
            r = 1;
            j = 13;
        }
    if (r == 0 && cnt[10] == 1 && cnt[11] == 1) {
        f_c06b_1ad2("Can't play Sweeper & Anchor man");
        r = 1;
    }
    if (r == 0 && d_4512_5d98[team == d_69da_da60 ? 0 : 1][d_69da_da78 - 1] >= 2) {
        f_c06b_1ad2("No captain elected");
        r = 1;
    }
    return r;
}

void f_c06b_1e21(void)
{
    unsigned char n = 1;
    unsigned char max;
    unsigned char i;
    char name[40];
    char line[320];
    char items[320];

    f_2162_19f6(1);
    if (f_2162_0dd7("svgameG8"))
        max = 8;
    else if (f_2162_0dd7("svgameG7"))
        max = 7;
    else if (f_2162_0dd7("svgameG6"))
        max = 6;
    else if (f_2162_0dd7("svgameG5"))
        max = 5;
    else if (f_2162_0dd7("svgameG4"))
        max = 4;
    else if (f_2162_0dd7("svgameG3"))
        max = 3;
    else if (f_2162_0dd7("svgameG2"))
        max = 2;
    else
        max = 1;
    if (max > 1) {
        f_1a70_4a41("Multi-Save");
        f_1a70_0adb(5, "Please enter game number");
        strcpy(items, "Default|");
        for (i = 2; i <= max; i = i + 1) {
            sprintf(line, "Game %d|", i);
            strcat(items, line);
        }
        f_1a70_2eaa(8, "", items);
        f_1a70_3226(max - 1);
        n = d_69da_d992 + 1;
    }
    if (n > 1)
        sprintf(name, "G%d", n);
    else
        strcpy(name, "");
    sprintf(d_536d_a44d, "svgame%s", name);
    sprintf(d_536d_a475, "mchfax%s", name);
    sprintf(d_536d_a49d, "plhist%s", name);
    sprintf(d_536d_a4c5, "clrecs%s", name);
    sprintf(d_536d_a4ed, "%s", name);
}

void f_c06b_201c(void)
{
    unsigned char page;
    unsigned char match;
    unsigned char i;
    unsigned char ok;
    unsigned char key[6];
    unsigned char tries;
    char buf[320];

    f_2162_1a11();
    tries = 0;
    do {
        f_1a70_4a41("Copy Protection");
        f_1a70_3d0c(11.625, 5.0, 0, 2, 0, " Refer To Manual ");
        page = f_2162_0da1(36) + 1;
        match = f_2162_0da1(5) + 1;
        f_1a70_3b47(5.0, 10.0, 6, "Please enter the result of match");
        sprintf(buf, "%d on page %d of the manual.", match, page);
        f_1a70_3b47(5.0, 13.0, 6, buf);
        f_1a70_3b47(5.0, 20.0, 1, "Result ?");
        ok = 1;
        for (i = 1; i <= 2; i++) {
            do
                strcpy(key, f_2162_0d1a());
            while (key[0] < '0' || key[0] > '9');
            f_1a70_3b47((i - 1) * 2 + 14, 20.0, 5, key);
            if (i == 1)
                f_1a70_3b47(15.0, 20.0, 5, "-");
            /* The original compared the manual's digit with the key typed:
               if (d_5dbf_50ea[page - 1][match - 1][i - 1] != key[0] - '0') ok = 0;
               the copy is cracked: the 6 bytes of the jump and the store
               (je +4 / mov [bp-4],0) are NOPs, so the test always passes. */
            _AX = (unsigned char)d_5dbf_50ea[page - 1][match - 1][i - 1];
            __emit__(0x8a, 0x56, 0xf6, 0xb6, 0x00, 0x83, 0xc2, 0xd0, 0x3b, 0xc2,
                     0x90, 0x90, 0x90, 0x90, 0x90, 0x90);
        }
        tries++;
    } while (tries < 3 && ok == 0);
    f_2162_1a2f();
    if (ok == 0) {
        f_2162_1256();
        exit(0);
    }
}
