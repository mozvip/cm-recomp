/* @at b6f6:0000 */
/* @data 61eb:8bfe */
/* @module */

/* Overlay b6f6 (CM94's C06B.C): the formation and tactics editor (positions, styles,
 * swapping players, substitutions, win bonuses) with its pitch drawing and position-group
 * checks, a message box, the Multi-Save slot menu, the copy protection question (the
 * manual's match result check, intact in this executable) and the coverdisk demo's end
 * screen (20b3, the Intelek ordering address). Its data starts with the functions'
 * initialised local tables (the position names, the button labels, the pitch columns,
 * the group sizes and names), then the literal pool. */
#include <string.h>
#include <stdio.h>
#include <mem.h>
#include <stdlib.h>
#include <math.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_b6f6_0000(unsigned char team);
void f_b6f6_10ca(unsigned char button, char lit);
void f_b6f6_1238(void);
void f_b6f6_12a5(unsigned char from, unsigned char to, unsigned char team, unsigned char p);
unsigned char f_b6f6_13ed(unsigned char pos, unsigned char which);
void f_b6f6_147b(unsigned char team);
void f_b6f6_17ba(int cx, int cy, int r, unsigned char colour);
void f_b6f6_187f(int x1, int y1, int x2, int y2, int cx, int cy, int r, unsigned char colour);
void f_b6f6_19b8(char far *s);
void f_b6f6_1a7f(unsigned char team, unsigned char n);
char f_b6f6_1b8d(unsigned char team);
void f_b6f6_1d07(void);
void f_b6f6_1f02(void);
void f_b6f6_20b3(void);

void f_1a83_48f9(char far *title);
void f_215d_088c();
void f_215d_089b();
void f_215d_08aa(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_215d_0904(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_215d_1016(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_215d_13f1(char far *a, char far *b, unsigned n);
void f_1a83_3c08(float x, float y, int bg, int fg, int w, char far *s);
void f_1a83_3450(float x, float y, int bg, int fg, int w, char far *s);
void f_1a83_4d96(int a, float x, float y, int c, int d, int e, char far *s);
char f_1a83_2ad4(int x);
char far *f_1a83_2d52(int x, char c);
char far *f_1a83_462c(int player);
char f_1a83_5a2e(int player);
char f_1a83_5a4c(int player);
unsigned char f_1a83_5a80(int player);
void f_1a83_5117(int a, char b);
void f_1a83_54f9(int n);
int f_1a83_5296(int a);
char f_1a83_5d3d(char team, char week, char n);
void f_7f4a_28bf(int team);
void f_a214_4120(int player, int a, char b);
void f_87dc_4c9b(int player, int a);
void f_b26d_01de(char team, char n);
void f_75a4_426e(int team);
void f_75a4_414f(int team);
void f_ab30_21cf(char team, int n);
extern char near *d_61eb_b0ec[];
extern int d_61eb_d668;
extern int d_61eb_d666;
extern int d_61eb_d6b6;
extern int d_61eb_d6b4;
extern int d_61eb_d69e;
extern int d_61eb_d67e;
extern int d_61eb_d59e;
extern int d_61eb_d5ee;
extern int d_61eb_d5c2;
extern int d_61eb_d5a2;
extern char d_61eb_d9de;
extern char d_61eb_d9d6;
extern char d_61eb_d9ca;
extern unsigned char d_61eb_d9be;
extern unsigned char d_61eb_d9bd;
extern unsigned char far d_3334_be02[];
extern unsigned char far d_53fc_0bb6[];
extern int far d_3334_ca6e[];
extern unsigned char far d_432e_066a[];
extern int far d_3334_f9f8[][16];
extern unsigned char far d_3334_f278[][3][16];
extern unsigned char far d_3334_fefe[][16];
extern unsigned char far d_3334_ff7e[][16];
extern unsigned char far d_3334_ff5e[][16];
extern unsigned char far d_28d4_194e[][5];
extern unsigned char far d_3334_bb80[][5];
extern unsigned char far d_3334_d90a[];
extern char far * far d_53fc_058f[];
extern char far * far d_53fc_06d6[];
void f_ab30_6968(char far *title);
void f_1a83_5540(int a);
extern unsigned char far d_3334_fefd[][16];
void f_1a83_3347(int x, int y, int colour, char far *s);
int f_215d_0c08(void);
int f_215d_0c14(void);
void f_1a83_5d48(unsigned char team, unsigned char player, int x, int y);
void f_1a83_0b12(int line, char far *s);
void f_1a83_2da6(int n, char far *title, char far *items);
void f_1a83_3122(int last);
void f_1a83_3a43(float x, float y, int colour, char far *s);
char far *f_215d_0d0f(void);
unsigned long f_215d_0d96(unsigned long n);
int f_215d_0dcc(char far *path);
void f_215d_0df0(int ticks);
void f_215d_124b(void);
void f_215d_19eb();
void f_215d_19f4(void);
void f_215d_19fd(void);
void f_215d_1a06(void);
void f_215d_1a24(void);
extern char far d_5313_0e60[];
extern char far d_5313_0e38[];
extern char far d_5313_0e10[];
extern char far d_5313_0de8[];
extern char far d_5313_0dc0[];
extern unsigned char far d_53fc_78a6[][5][2];


/* the formation editor's screen. BCC 4.02 source-form tells kept here: the three code-free
 * `0;` statements choose which copy of the shared call tails the compiler keeps (the
 * 12a5 calls of choices 33-42 all end in choice 42's, the 10e2/1b99 ones in mode 1's);
 * the casts (and the initialisers of p and q) choose between an index folded into the
 * displacement and the table address computed at run time (`mov bx,4726 / dec bx`). */
void f_b6f6_0000(unsigned char team)
{
    char far *pos[16] = {"GK", "SWP", "ANCHOR", "DEF", "MID", "ATT", "SUPP",
                         "RIGHT", "LEFT", "CENTRE", "CAPT", "NORM", "FORW", "BACK", "BONUS", "SWAP"};
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
        f_1a83_48f9("");
        f_215d_088c(0x10);
        f_215d_08aa(12, 12, 132, 196);
        f_215d_088c(0x1f);
        f_215d_08aa(8, 8, 128, 192);
        f_215d_089b(0x13);
        f_215d_0904(8, 8, 128, 192);
        f_215d_1016(8, 22, 128, 22);
        strcpy(buf, "");
        for (n = (88 - strlen(d_61eb_b0ec[team]) * 4) / 8; n > 0; n--)
            strcat(buf, " ");
        strcat(buf, d_61eb_b0ec[team]);
        if (team < 38)
            f_1a83_3c08(17.25, 1.625, -(d_3334_be02[team] / 16), d_3334_be02[team] % 16, 0xad, buf);
        else
            f_1a83_3c08(17.25, 1.625,
                        -(d_53fc_0bb6[team == d_61eb_d666 ? d_61eb_d6b4 - 38 : d_61eb_d6b6 - 38] / 16),
                        d_53fc_0bb6[team == d_61eb_d666 ? d_61eb_d6b4 - 38 : d_61eb_d6b6 - 38] % 16, 0xad, buf);
        if (f_1a83_2ad4(team) == 0)
            f_7f4a_28bf(team);
        else
            d_61eb_d67e = (int)d_432e_066a[d_3334_ca6e[team] - 646];
        for (a = 1; a <= 3; ++a)
            for (b = 1; b <= 16; ++b) {
                y = b + 5.875;
                if (a == 1) {
                    sprintf(buf, " %s", f_1a83_2d52(b, 1));
                    f_1a83_4d96(0, 17.125, y, 1, 4, 0x18, buf);
                    if (f_1a83_2ad4(team) == 0)
                        f_1a83_54f9(b);
                } else if (a == 2) {
                    unsigned char k;

                    k = 1;
                    player = d_3334_f9f8[team][b - 1];
                    strcpy(buf, "");
                    if (team < 38) {
                        sprintf(buf, " %s", f_1a83_462c(player));
                        if (f_1a83_5a4c(player))
                            k = 6;
                    } else
                        sprintf(buf, " %s", d_53fc_058f[d_3334_f278[team][0][b - 1]]);
                    f_1a83_4d96(0, 20.375, y, k, b % 2 == 0 ? 8 : 14, 0x50, buf);
                    f_b6f6_1a7f(team, b);
                } else if (a == 3) {
                    sprintf(buf, " %s", pos[b - 1]);
                    f_1a83_4d96(0, 33.125, y, b <= 10 ? 5 : 1, b <= 10 ? 11 : 9, 0x30, buf);
                    if (f_1a83_2ad4(team) == 0)
                        f_1a83_54f9(b + 32);
                }
            }
        f_1a83_4d96(2, 17.25, 22.875, 1, 4, 0xad, "         Done");
        f_b6f6_10ca(0, 0);
        f_b6f6_10ca(1, 0);
        mode = 0;
        for (sel = 1; d_3334_fefe[team == d_61eb_d666 ? 0 : 1][sel - 1] >= 2; sel++)
            ;
        if (f_1a83_2ad4(team)) {
            unsigned char k, k2;

            k = f_b6f6_13ed((unsigned char)d_3334_f278[team][0][sel - 1], 0);
            k2 = f_b6f6_13ed((unsigned char)d_3334_f278[team][0][sel - 1], 1);
            f_1a83_5117(sel, -1);
            if (k != 0xff)
                f_1a83_5117(k, -1);
            if (k2 != 0xff)
                f_1a83_5117(k2, -1);
            f_1a83_5117(d_3334_f278[team][2][sel - 1] + 44, -1);
        }
        if (team < 38)
            strcpy(buf2, d_53fc_06d6[d_3334_d90a[d_3334_ca6e[team]] / 16]);
        else {
            unsigned u;

            u = team == d_61eb_d666 ? d_61eb_d6b4 : d_61eb_d6b6;
            if (u < 438)
                strcpy(buf2, "Continental");
            else
                strcpy(buf2, "Up-and-under");
        }
        strcpy(buf, " ");
        for (n = (56 - strlen(buf2) * 3) / 8; n > 0; n--)
            strcat(buf, " ");
        strcat(buf, buf2);
        f_1a83_3450(1.625, 2.25, 0, 1, 0x70, buf);
        f_b6f6_147b(team);
        do {
            done = 0;
            do {
                d_61eb_d59e = f_1a83_5296(-1);
                if (d_61eb_d59e == 0)
                    f_b6f6_1238();
                choice = d_61eb_d59e;
            } while (choice == 0);
            if (choice >= 1 && choice <= 16) {
                if (choice != sel) {
                    if (mode == 0) {
                        if (d_3334_fefe[team == d_61eb_d666 ? 0 : 1][choice - 1] < 2 ||
                            d_3334_fefe[team == d_61eb_d666 ? 0 : 1][choice - 1] == 6) {
                            f_1a83_5117(sel, 0);
                            f_1a83_5117(choice, -1);
                            f_b6f6_12a5(d_3334_f278[team][0][sel - 1], d_3334_f278[team][0][choice - 1], team, -1);
                            if (d_3334_f278[team][2][sel - 1] != d_3334_f278[team][2][choice - 1]) {
                                f_1a83_5117(d_3334_f278[team][2][sel - 1] + 44, 0);
                                f_1a83_5117(d_3334_f278[team][2][choice - 1] + 44, -1);
                            }
                            sel = choice;
                        }
                    } else if (mode == 1) {
                        unsigned char k;
                        unsigned char p, q;

                        p = d_3334_fefe[team == d_61eb_d666 ? 0 : 1][choice - 1];
                        q = d_3334_fefe[team == d_61eb_d666 ? 0 : 1][sel - 1];
                        if (p < 2 && q < 2) {
                            if (d_3334_f278[team][0][sel - 1] != d_3334_f278[team][0][choice - 1] ||
                                d_3334_f278[team][2][sel - 1] != d_3334_f278[team][2][choice - 1]) {
                                f_1a83_5117(sel, 0);
                                f_1a83_5117(choice, -1);
                                for (k = 0; k <= 2; ++k)
                                    f_215d_13f1((char far *)&d_3334_f278[team][k][sel - 1], (char far *)&d_3334_f278[team][k][choice - 1], 1);
                                f_b6f6_147b(team);
                                sel = choice;
                            }
                        } else if (p == 4 && (q < 2 || q == 6) && d_61eb_d9de) {
                            if (choice == 16 && f_1a83_5d3d(team, d_61eb_d5a2, d_61eb_d5c2 + 1) == 0) {
                                f_b6f6_19b8("No.16 ineligible for this match");
                                done = 1;
                            } else if (team == d_61eb_d666 && d_61eb_d9bd >= 2 ||
                                       team == d_61eb_d668 && d_61eb_d9be >= 2) {
                                f_b6f6_19b8("Maximum 2 subs per game");
                                done = 1;
                            } else if (choice == 16 && d_3334_f278[team][0][sel - 1] != 1) {
                                f_b6f6_19b8("No.16 can only replace 'keeper");
                                done = 1;
                            } else {
                                f_1a83_5117(sel, 0);
                                f_1a83_5117(choice, -1);
                                for (k = 0; k <= 2; ++k)
                                    d_3334_f278[team][k][choice - 1] = d_3334_f278[team][k][sel - 1];
                                d_3334_fefe[team == d_61eb_d666 ? 0 : 1][choice - 1] = 0;
                                if (d_3334_fefe[team == d_61eb_d666 ? 0 : 1][sel - 1] == 6)
                                    d_3334_fefe[team == d_61eb_d666 ? 0 : 1][sel - 1] = 3;
                                else
                                    d_3334_fefe[team == d_61eb_d666 ? 0 : 1][sel - 1] = 5;
                                d_3334_ff7e[team == d_61eb_d666 ? 0 : 1][sel - 1] = d_61eb_d69e;
                                d_3334_ff5e[team == d_61eb_d666 ? 0 : 1][choice - 1] = d_61eb_d69e;
                                d_28d4_194e[team == d_61eb_d666 ? 0 : 1][choice - 12] = sel - 1;
                                d_3334_bb80[team == d_61eb_d666 ? 0 : 1][choice - 12] = d_61eb_d69e;
                                f_b6f6_147b(team);
                                sel = choice;
                                if (team == d_61eb_d666)
                                    d_61eb_d9bd++;
                                else
                                    d_61eb_d9be++;
                            }
                        }
                        mode = 0;
                        f_1a83_5117(48, 0);
                        0;
                    }
                }
            } else if (choice >= 17 && choice <= 32) {
                if (team < 38) {
                    player = d_3334_f9f8[team][choice - 17];
                    if (f_1a83_5a2e(player)) {
                        do {
                            f_a214_4120(player, -1, -1);
                            f_87dc_4c9b(player, d_61eb_d5ee);
                        } while (!d_61eb_d9ca);
                        done = 1;
                    } else if (f_1a83_5a4c(player)) {
                        f_b26d_01de(team, f_1a83_5a80(player));
                        done = 1;
                    }
                }
            } else if (choice >= 33 && choice <= 46) {
                unsigned char p = d_3334_f278[team][0][sel - 1];
                unsigned char k = 0;
                unsigned char q = d_3334_f278[team][2][sel - 1];
                if (p == 3 || p == 6 || p == 9)
                    k = 1;
                else if (p == 4 || p == 7 || p == 10)
                    k = 2;
                p -= k;
                if (choice == 33)
                    f_b6f6_12a5(p + k, 1, team, sel);
                else if (choice >= 34 && choice <= 39) {
                    if (sel < 16) {
                        if (choice == 34)
                            f_b6f6_12a5(p + k, 11, team, sel);
                        else if (choice == 35)
                            f_b6f6_12a5(p + k, 12, team, sel);
                        else if (choice == 36)
                            f_b6f6_12a5(p + k, (p == 1 || p >= 11 ? 2 : k) + 2, team, sel);
                        else if (choice == 37)
                            f_b6f6_12a5(p + k, (p == 1 || p >= 11 ? 2 : k) + 5, team, sel);
                        else if (choice == 38)
                            f_b6f6_12a5(p + k, (p == 1 || p >= 11 ? 2 : k) + 8, team, sel);
                        else if (choice == 39)
                            f_b6f6_12a5(p + k, 13, team, sel);
                    } else {
                        f_b6f6_19b8("No.16 cannot be repositioned");
                        done = 1;
                    }
                } else if (choice == 40 && p + k >= 2 && p + k <= 10)
                    f_b6f6_12a5(p + k, p, team, sel);
                else if (choice == 41 && p + k >= 2 && p + k <= 10)
                    f_b6f6_12a5(p + k, p + 1, team, sel);
                else if (choice == 42 && p + k >= 2 && p + k <= 10)
                    f_b6f6_12a5(p + k, p + 2, team, sel);
                else if (choice == 43) {
                    if (d_432e_066a[d_3334_ca6e[team] - 646] != sel) {
                        d_61eb_d67e = sel;
                        f_b6f6_1a7f(team, d_432e_066a[d_3334_ca6e[team] - 646]);
                        d_432e_066a[d_3334_ca6e[team] - 646] = sel;
                        f_b6f6_1a7f(team, d_432e_066a[d_3334_ca6e[team] - 646]);
                        0;
                    }
                } else if (choice >= 44 && choice <= 46 && p + k >= 2 && p + k <= 10 && choice - 44 != q) {
                    f_1a83_5117(q + 44, 0);
                    f_1a83_5117(choice, -1);
                    d_3334_f278[team][2][sel - 1] = choice - 44;
                    f_b6f6_147b(team);
                }
            } else if (choice == 49 && f_1a83_2ad4(team)) {
                if (f_b6f6_1b8d(team) == 1) {
                    choice = 0;
                    done = 1;
                }
            } else if (choice == 50 && f_1a83_2ad4(team)) {
                f_75a4_426e(team);
                done = 1;
            } else if (choice == 51 && f_1a83_2ad4(team)) {
                f_75a4_414f(team);
                done = 1;
            } else if (choice == 48 && f_1a83_2ad4(team)) {
                mode = !mode;
                f_1a83_5117(48, mode);
                0;
            } else if (choice == 47 && f_1a83_2ad4(team) && d_61eb_d9d6) {
                f_ab30_21cf(team, team == d_61eb_d666 ? d_61eb_d6b6 : d_61eb_d6b4);
                done = 1;
            }
        } while (done == 0 && choice != 49);
    } while (choice != 49);
}

/* One of the editor's two buttons: 0 New Style, 1 New Formation; lit: drawn highlighted. */
void f_b6f6_10ca(unsigned char button, char lit)
{
    char far *labels[4] = {"New", "Style", "New", "Formation"};
    int x;

    x = button == 0 ? 136 : 226;
    f_215d_088c(16);
    f_215d_08aa(x + 2, 30, x + 88, 46);
    f_215d_088c((lit ? 1 : 4) + 16);
    f_215d_08aa(x, 28, x + 86, 44);
    f_215d_089b(28);
    f_215d_1016(x, 44, x, 28);
    f_215d_1016(x, 28, x + 86, 28);
    f_1a83_3347(x + (43 - strlen(labels[button * 2]) * 3) + 8, 36, lit ? 12 : 1,
                labels[button * 2]);
    f_1a83_3347(x + (43 - strlen(labels[button * 2 + 1]) * 3) + 8, 43, lit ? 12 : 1,
                labels[button * 2 + 1]);
}

/* which of the two buttons the mouse is on: sets d_61eb_d59e to 50 + its number */
void f_b6f6_1238(void)
{
    unsigned char i;
    unsigned x;

    for (i = 0; i <= 1; i = i + 1) {
        x = i == 0 ? 0x88 : 0xe2;
        if (f_215d_0c14() >= x && f_215d_0c14() <= x + 0x56
            && f_215d_0c08() >= 0x1c && f_215d_0c08() <= 0x2c) {
            d_61eb_d59e = i + 0x32;
            i = 1;
        }
    }
}

void f_b6f6_12a5(unsigned char from, unsigned char to, unsigned char team, unsigned char p)
{
    unsigned char a, b, i, changed;

    changed = 0;
    for (i = 0; i <= 1; i = i + 1) {
        a = f_b6f6_13ed(from, i);
        b = f_b6f6_13ed(to, i);
        if (a != b) {
            if (a != 0xff)
                f_1a83_5117(a, 0);
            if (b != 0xff)
                f_1a83_5117(b, -1);
            changed = 1;
        }
    }
    if (p < 0xff) {
        if (to == 1 || to >= 11) {
            if (d_3334_f278[team][2][p - 1] > 0) {
                f_1a83_5117(d_3334_f278[team][2][p - 1] + 44, 0);
                d_3334_f278[team][2][p - 1] = 0;
                f_1a83_5117(d_3334_f278[team][2][p - 1] + 44, -1);
            }
        }
        d_3334_f278[team][0][p - 1] = to;
        if (changed)
            f_b6f6_147b(team);
    }
}

unsigned char f_b6f6_13ed(unsigned char pos, unsigned char which)
{
    unsigned char r = 0xff;

    if (which == 0) {
        if (pos == 1)
            r = 0x21;
        else if (pos >= 2 && pos <= 4)
            r = 0x24;
        else if (pos >= 5 && pos <= 7)
            r = 0x25;
        else if (pos >= 8 && pos <= 10)
            r = 0x26;
        else if (pos == 11)
            r = 0x22;
        else if (pos == 12)
            r = 0x23;
        else if (pos == 13)
            r = 0x27;
    } else if (which == 1) {
        if (pos == 2 || pos == 5 || pos == 8)
            r = 0x28;
        else if (pos == 3 || pos == 6 || pos == 9)
            r = 0x29;
        else if (pos == 4 || pos == 7 || pos == 10)
            r = 0x2a;
    }
    return r;
}

void f_b6f6_147b(unsigned char team)
{
    unsigned char i;
    unsigned x, y;
    int *p4, *p7, *p10;
    unsigned char n[13];
    int two[11] = {50, 86, 50, 86, 50, 86, 50, 86, 50, 86, 50};
    int three[11] = {68, 43, 93, 68, 43, 93, 68, 43, 93, 68, 43};
    unsigned char pos;

    f_215d_088c(31);
    f_215d_08aa(9, 0x17, 0x7f, 0xbf);
    f_215d_089b(19);
    f_215d_1016(8, 0x16, 0x80, 0x16);
    f_215d_1016(8, 0x6b, 0x80, 0x6b);
    f_215d_0904(0x1e, 0x16, 0x6a, 0x34);
    f_215d_0904(0x31, 0x16, 0x57, 0x22);
    f_215d_0904(0x1e, 0xa2, 0x6a, 0xc0);
    f_215d_0904(0x31, 0xb4, 0x57, 0xc0);
    f_b6f6_17ba(0x44, 0x6b, 0x16, 3);
    f_215d_089b(19);
    f_215d_1016(0x44, 0x2b, 0x44, 0x2b);
    f_215d_1016(0x44, 0xa9, 0x44, 0xa9);
    f_b6f6_187f(0, 0x34, 0x140, 0x64, 0x44, 0x2b, 0x11, 3);
    f_b6f6_187f(0, 0x64, 0x140, 0xa2, 0x44, 0xab, 0x11, 3);
    memset(n, 0, 13);
    for (i = 1; i <= 16; i = i + 1)
        if (d_3334_fefe[team == d_61eb_d666 ? 0 : 1][i - 1] < 2)
            n[d_3334_f278[team][0][i - 1] - 1]++;
    p4 = n[3] == 2 ? two : three;
    p7 = n[6] == 2 ? two : three;
    p10 = n[9] == 2 ? two : three;
    for (i = 1; i <= 16; i = i + 1) {
        if (d_3334_fefe[team == d_61eb_d666 ? 0 : 1][i - 1] < 2) {
            pos = d_3334_f278[team][0][i - 1];
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
            f_1a83_5d48(team, i, x - 7, y - 6);
        }
    }
}

void f_b6f6_17ba(int cx, int cy, int r, unsigned char colour)
{
    int x, h, px, py;

    px = -r;
    py = 0;
    f_215d_089b(colour + 16);
    for (x = -r; x <= r; x++) {
        h = sqrt(r * r - x * x);
        f_215d_1016(cx + px, cy + py, cx + x, cy + h);
        f_215d_1016(cx + px, cy - py, cx + x, cy - h);
        px = x;
        py = h;
    }
}

void f_b6f6_187f(int x1, int y1, int x2, int y2, int cx, int cy, int r, unsigned char colour)
{
    int x, h, px, py;

    px = -r;
    py = 0;
    f_215d_089b(colour + 16);
    for (x = -r; x <= r; x++) {
        h = sqrt(r * r - x * x);
        if (cx + x >= x1 && cx + x <= x2) {
            if (cy + py >= y1 && cy + py <= y2 && cy + h >= y1 && cy + h <= y2)
                f_215d_1016(cx + px, cy + py, cx + x, cy + h);
            if (cy - py >= y1 && cy - py <= y2 && cy - h >= y1 && cy - h <= y2)
                f_215d_1016(cx + px, cy - py, cx + x, cy - h);
        }
        px = x;
        py = h;
    }
}

void f_b6f6_19b8(char far *s)
{
    float x;

    f_215d_19f4();
    f_215d_088c(16);
    f_215d_08aa(0x16, 0x5c, 0x12e, 0x70);
    f_215d_088c(20);
    f_215d_08aa(0x14, 0x5a, 0x12c, 0x6e);
    f_215d_089b(28);
    f_215d_1016(0x14, 0x6e, 0x14, 0x5a);
    f_215d_1016(0x14, 0x5a, 0x12c, 0x5a);
    x = (160 - strlen(s) * 4) / 8.0 + 1;
    f_1a83_3a43(x, 12.25, 1, s);
    f_215d_0df0(70);
    f_215d_19fd();
}

void f_b6f6_1a7f(unsigned char team, unsigned char n)
{
    unsigned char bg = 1;
    unsigned char fg;
    char buf[320];
    unsigned char st;

    fg = n % 2 == 0 ? 8 : 14;
    strcpy(buf, "");
    if (n == d_61eb_d67e) {
        strcpy(buf, "Cpt");
        bg = 0;
        fg = 2;
    } else {
        st = d_3334_fefd[team == d_61eb_d666 ? 0 : 1][n];
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
    f_1a83_3450(30.375, n + 5.875, bg, fg, 20, buf);
}

char f_b6f6_1b8d(unsigned char team)
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
    for (i = 1; i <= 16; i++)
        if (d_3334_fefe[team == d_61eb_d666 ? 0 : 1][i - 1] < 2)
            cnt[d_3334_f278[team][0][i - 1] - 1]++;
    for (j = 1; j <= 13; j++)
        if (cnt[j - 1] > max[j - 1]) {
            sprintf(buf, "%d %s selected", cnt[j - 1], names[j - 1]);
            f_b6f6_19b8(buf);
            r = 1;
            j = 13;
        }
    if (r == 0 && cnt[10] == 1 && cnt[11] == 1) {
        f_b6f6_19b8("Can't play Sweeper & Anchor man");
        r = 1;
    }
    if (r == 0 && d_3334_fefe[team == d_61eb_d666 ? 0 : 1][d_61eb_d67e - 1] >= 2) {
        f_b6f6_19b8("No captain elected");
        r = 1;
    }
    return r;
}

void f_b6f6_1d07(void)
{
    unsigned char n = 1;
    unsigned char max;
    unsigned char i;
    char name[40];
    char line[320];
    char items[320];

    f_215d_19eb(1);
    if (f_215d_0dcc("svgameG8"))
        max = 8;
    else if (f_215d_0dcc("svgameG7"))
        max = 7;
    else if (f_215d_0dcc("svgameG6"))
        max = 6;
    else if (f_215d_0dcc("svgameG5"))
        max = 5;
    else if (f_215d_0dcc("svgameG4"))
        max = 4;
    else if (f_215d_0dcc("svgameG3"))
        max = 3;
    else if (f_215d_0dcc("svgameG2"))
        max = 2;
    else
        max = 1;
    if (max > 1) {
        f_1a83_48f9("Multi-Save");
        f_1a83_0b12(5, "Please enter game number");
        strcpy(items, "Default|");
        for (i = 2; i <= max; i = i + 1) {
            sprintf(line, "Game %d|", i);
            strcat(items, line);
        }
        f_1a83_2da6(8, "", items);
        f_1a83_3122(max - 1);
        n = d_61eb_d59e + 1;
    }
    if (n > 1)
        sprintf(name, "G%d", n);
    else
        strcpy(name, "");
    sprintf(d_5313_0dc0, "svgame%s", name);
    sprintf(d_5313_0de8, "mchfax%s", name);
    sprintf(d_5313_0e10, "plhist%s", name);
    sprintf(d_5313_0e38, "clrecs%s", name);
    sprintf(d_5313_0e60, "%s", name);
}

void f_b6f6_1f02(void)
{
    unsigned char page;
    unsigned char match;
    unsigned char i;
    unsigned char ok;
    unsigned char key[6];
    unsigned char tries;
    char buf[320];

    f_215d_1a06();
    tries = 0;
    do {
        f_1a83_48f9("Copy Protection");
        f_1a83_3c08(11.625, 5.0, 0, 2, 0, " Refer To Manual ");
        page = f_215d_0d96(32) + 1;
        match = f_215d_0d96(5) + 1;
        f_1a83_3a43(5.0, 10.0, 6, "Please enter the result of match");
        sprintf(buf, "%d on page %d of the manual.", match, page);
        f_1a83_3a43(5.0, 13.0, 6, buf);
        f_1a83_3a43(5.0, 20.0, 1, "Result ?");
        ok = 1;
        for (i = 1; i <= 2; i++) {
            do
                strcpy(key, f_215d_0d0f());
            while (key[0] < '0' || key[0] > '9');
            f_1a83_3a43((i - 1) * 2 + 14, 20.0, 5, key);
            if (i == 1)
                f_1a83_3a43(15.0, 20.0, 5, "-");
            if (d_53fc_78a6[page - 1][match - 1][i - 1] != key[0] - '0')
                ok = 0;
        }
        tries++;
    } while (tries < 1 && ok == 0);
    f_215d_1a24();
    if (ok == 0) {
        f_215d_124b();
        exit(0);
    }
}

/* the coverdisk demo's end screen: the ordering address, then waits forever */
void f_b6f6_20b3(void)
{
    f_ab30_6968("Coverdisk Demo For The One Amiga");
    f_1a83_3347(0x26, 0x38, 5, "You've been playing the Championship Manager");
    f_1a83_3347(0x26, 0x40, 5, "Italia Coverdisk Demo.");
    f_1a83_3347(0x26, 0x4c, 5, "If  you'd  like to  obtain the fully working");
    f_1a83_3347(0x26, 0x54, 5, "and  packaged version  then send a cheque or");
    f_1a83_3347(0x26, 0x5c, 5, "postal  order  with  your name, address, and");
    f_1a83_3347(0x26, 0x64, 5, "computer type to : -");
    f_1a83_3347(0x36, 0x70, 6, "Intelek");
    f_1a83_3347(0x36, 0x78, 6, "P.O. Box 1738");
    f_1a83_3347(0x36, 0x80, 6, "Bournemouth");
    f_1a83_3347(0x36, 0x88, 6, "England");
    f_1a83_3347(0x36, 0x90, 6, "BH4 8YN");
    f_1a83_3347(0x26, 0x9c, 5, "Cheques  and  postal  orders should be made");
    f_1a83_3347(0x26, 0xa4, 5, "payable to  Intelek.  Please  allow 28 days");
    f_1a83_3347(0x26, 0xac, 5, "for delivery.");
    f_1a83_5540(0);
    for (;;)
        ;
}
