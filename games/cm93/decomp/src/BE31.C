/* @at be31:0000 */
/* @data 60ae:91ee */
/* @module */

/* Overlay 11: new in CM93: the formation and tactics editor (positions, styles, swapping
 * players, substitutions, win bonuses) with its pitch drawing and position-group checks,
 * a message box, the Multi-Save slot menu and the copy protection question (patched out
 * in the shipped executable). It replaces CM1's formation editor, f_6e68_4b39. */
#include <string.h>
#include <mem.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_be31_0000(unsigned char team);
void f_be31_1213(unsigned char button, char lit);
void f_be31_1476(void);
void f_be31_1504(unsigned char from, unsigned char to, unsigned char team, unsigned char p);
unsigned char f_be31_1662(unsigned char pos, unsigned char which);
void f_be31_16ec(unsigned char team);
void f_be31_1a69(int cx, int cy, int r, unsigned char colour);
void f_be31_1b1b(int x1, int y1, int x2, int y2, int cx, int cy, int r, unsigned char colour);
void f_be31_1c3c(char far *s);
void f_be31_1d36(unsigned char team, unsigned char n);
char f_be31_1e52(unsigned char team);
void f_be31_1f93(void);
void f_be31_21a7(void);

void f_14bc_4bd3(char far *title);
void f_1bd3_08cb(int c);
void f_1bd3_08d6(int c);
void f_1bd3_08e1(int x1, int y1, int x2, int y2);
void f_1bd3_0928(int x1, int y1, int x2, int y2);
void f_1bd3_0fe2(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_1bd3_13a3(void far *a, void far *b, int n);
void f_14bc_3e40(float x, float y, int bg, int fg, int w, char far *s);
void f_14bc_3672(float x, float y, int bg, int fg, int w, char far *s);
void f_14bc_50f8(int a, float x, float y, int c, int d, int e, char far *s);
char f_14bc_2cc0(int x);
char far *f_14bc_2f2c(int x, char c);
char far *f_14bc_48b4(int player);
char f_14bc_5e18(int player);
char f_14bc_5e32(int player);
unsigned char f_14bc_5e60(int player);
void f_14bc_548f(int a, char b);
void f_14bc_589c(int team);
int f_14bc_5635(int a);
char f_14bc_612e(char team, char week, char n);
void f_817e_2b51(int team);
void f_a694_49c9(int player, int a, char b);
void f_8aa1_4f06(int player, int a);
void f_ad38_34a0(char team, char n);
void f_7732_4c3e(int team);
void f_7732_4b16(int team);
void f_b628_25b2(char team, int n);
extern char near *d_60ae_b572[];
extern int d_60ae_dcd0;
extern int d_60ae_dcd2;
extern int d_60ae_dc82;
extern int d_60ae_dc84;
extern int d_60ae_dc9a;
extern int d_60ae_dcba;
extern int d_60ae_dda0;
extern int d_60ae_dd4a;
extern int d_60ae_dd76;
extern int d_60ae_dd9c;
extern char d_60ae_d961;
extern char d_60ae_d969;
extern char d_60ae_d975;
extern unsigned char d_60ae_d981;
extern unsigned char d_60ae_d982;
extern unsigned char far d_323f_4cb8[];
extern unsigned char far d_54d9_0ad0[];
extern int far d_323f_47b4[];
extern unsigned char far d_2289_f882[];
extern int far d_323f_0592[][14];
extern unsigned char far d_323f_0e8a[][3][14];
extern unsigned char far d_323f_0538[][14];
extern unsigned char far d_323f_0500[][14];
extern unsigned char far d_323f_051c[][14];
extern unsigned char far d_471b_ae55[][3];
extern unsigned char far d_323f_6529[][3];
extern unsigned char far d_323f_2630[];
extern char far * far d_54d9_04d2[];
extern char far * far d_54d9_0619[];
void f_14bc_356a(int x, int y, int colour, char far *s);
int f_1bd3_0c06(void);
int f_1bd3_0c0e(void);
void f_14bc_6199(unsigned char team, unsigned char player, int x, int y);
void f_14bc_0ac0(int line, char far *s);
void f_14bc_2f90(int n, char far *title, char far *items);
void f_14bc_3334(int last);
void f_14bc_3c75(float x, float y, int colour, char far *s);
char far *f_1bd3_0cec(void);
long f_1bd3_0d69(long n);
int f_1bd3_0d9b(char far *path);
void f_1bd3_0dbc(int ticks);
void f_1bd3_1215(void);
void f_1bd3_1a23();
void f_1bd3_1a28(void);
void f_1bd3_1a2d(void);
void f_1bd3_1a32(void);
void f_1bd3_1a4c(void);
extern char far d_2289_0000[];
extern char far d_2289_0028[];
extern char far d_2289_0050[];
extern char far d_2289_0078[];
extern char far d_2289_00a0[];
extern unsigned char far d_54d9_5058[][5][2];


void f_be31_0000(unsigned char team)
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
        f_14bc_4bd3("");
        f_1bd3_08cb(0x10);
        f_1bd3_08e1(12, 12, 132, 196);
        f_1bd3_08cb(0x1f);
        f_1bd3_08e1(8, 8, 128, 192);
        f_1bd3_08d6(0x13);
        f_1bd3_0928(8, 8, 128, 192);
        f_1bd3_0fe2(8, 22, 128, 22);
        strcpy(buf, "");
        for (n = (88 - strlen(d_60ae_b572[team]) * 4) / 8; n > 0; n--)
            strcat(buf, " ");
        strcat(buf, d_60ae_b572[team]);
        if (team < 80)
            f_14bc_3e40(17.25, 1.625, -(d_323f_4cb8[team] / 16), d_323f_4cb8[team] % 16, 0xad, buf);
        else
            f_14bc_3e40(17.25, 1.625,
                        -(d_54d9_0ad0[team == d_60ae_dcd2 ? d_60ae_dc84 - 80 : d_60ae_dc82 - 80] / 16),
                        d_54d9_0ad0[team == d_60ae_dcd2 ? d_60ae_dc84 - 80 : d_60ae_dc82 - 80] % 16, 0xad, buf);
        if (f_14bc_2cc0(team) == 0)
            f_817e_2b51(team);
        else
            d_60ae_dcba = d_2289_f882[d_323f_47b4[team]];
        for (a = 1; a <= 3; ++a)
            for (b = 1; b <= 14; ++b) {
                y = b + 5.875;
                if (a == 1) {
                    sprintf(buf, " %s", f_14bc_2f2c(b, 1));
                    f_14bc_50f8(0, 17.125, y, 1, 4, 0x18, buf);
                    if (f_14bc_2cc0(team) == 0)
                        f_14bc_589c(b);
                } else if (a == 2) {
                    unsigned char k;

                    k = 1;
                    player = d_323f_0592[team][b - 1];
                    strcpy(buf, "");
                    if (team < 80) {
                        sprintf(buf, " %s", f_14bc_48b4(player));
                        if (f_14bc_5e32(player))
                            k = 6;
                    } else
                        sprintf(buf, " %s", d_54d9_04d2[d_323f_0e8a[team][0][b - 1]]);
                    f_14bc_50f8(0, 20.375, y, k, b % 2 == 0 ? 8 : 14, 0x50, buf);
                    f_be31_1d36(team, b);
                } else if (a == 3) {
                    sprintf(buf, " %s", pos[b - 1]);
                    f_14bc_50f8(0, 33.125, y, b <= 10 ? 5 : 1, b <= 10 ? 11 : 9, 0x30, buf);
                    if (f_14bc_2cc0(team) == 0)
                        f_14bc_589c(b + 28);
                }
            }
        f_14bc_50f8(2, 17.25, 22.75, 1, 4, 0xad, "         Done");
        f_be31_1213(0, 0);
        f_be31_1213(1, 0);
        f_be31_1213(2, 0);
        f_be31_1213(3, 0);
        mode = 0;
        for (sel = 1; d_323f_0538[team == d_60ae_dcd2 ? 0 : 1][sel - 1] >= 2; sel++)
            ;
        if (f_14bc_2cc0(team)) {
            unsigned char k, k2;

            k = f_be31_1662(d_323f_0e8a[team][0][sel - 1], 0);
            k2 = f_be31_1662(d_323f_0e8a[team][0][sel - 1], 1);
            f_14bc_548f(sel, -1);
            if (k != 0xff)
                f_14bc_548f(k, -1);
            if (k2 != 0xff)
                f_14bc_548f(k2, -1);
            f_14bc_548f(d_323f_0e8a[team][2][sel - 1] + 40, -1);
        }
        if (team < 80)
            strcpy(buf2, d_54d9_0619[d_323f_2630[d_323f_47b4[team]] / 16]);
        else {
            unsigned u;

            u = team == d_60ae_dcd2 ? d_60ae_dc84 : d_60ae_dc82;
            if (u < 480)
                strcpy(buf2, "Continental");
            else
                strcpy(buf2, "Up-and-under");
        }
        strcpy(buf, " ");
        for (n = (56 - strlen(buf2) * 3) / 8; n > 0; n--)
            strcat(buf, " ");
        strcat(buf, buf2);
        f_14bc_3672(1.625, 2.25, 0, 1, 0x70, buf);
        f_be31_16ec(team);
        do {
            done = 0;
            do {
                d_60ae_dda0 = f_14bc_5635(-1);
                if (d_60ae_dda0 == 0)
                    f_be31_1476();
                choice = d_60ae_dda0;
            } while (choice == 0);
            if (choice >= 1 && choice <= 14) {
                if (choice != sel) {
                    if (mode == 0) {
                        if (d_323f_0538[team == d_60ae_dcd2 ? 0 : 1][choice - 1] < 2 ||
                            d_323f_0538[team == d_60ae_dcd2 ? 0 : 1][choice - 1] == 6) {
                            f_14bc_548f(sel, 0);
                            f_14bc_548f(choice, -1);
                            f_be31_1504(d_323f_0e8a[team][0][sel - 1], d_323f_0e8a[team][0][choice - 1], team, -1);
                            if (d_323f_0e8a[team][2][sel - 1] != d_323f_0e8a[team][2][choice - 1]) {
                                f_14bc_548f(d_323f_0e8a[team][2][sel - 1] + 40, 0);
                                f_14bc_548f(d_323f_0e8a[team][2][choice - 1] + 40, -1);
                            }
                            sel = choice;
                        }
                    } else if (mode == 1) {
                        unsigned char k;
                        unsigned char p, q;

                        p = d_323f_0538[team == d_60ae_dcd2 ? 0 : 1][choice - 1];
                        q = d_323f_0538[team == d_60ae_dcd2 ? 0 : 1][sel - 1];
                        if (p < 2 && q < 2) {
                            if (d_323f_0e8a[team][0][sel - 1] != d_323f_0e8a[team][0][choice - 1] ||
                                d_323f_0e8a[team][2][sel - 1] != d_323f_0e8a[team][2][choice - 1]) {
                                f_14bc_548f(sel, 0);
                                f_14bc_548f(choice, -1);
                                for (k = 0; k <= 2; ++k)
                                    f_1bd3_13a3(&d_323f_0e8a[team][k][sel - 1], &d_323f_0e8a[team][k][choice - 1], 1);
                                f_be31_16ec(team);
                                sel = choice;
                            }
                        } else if (p == 4 && (q < 2 || q == 6) && d_60ae_d961) {
                            if (choice == 14 && f_14bc_612e(team, d_60ae_dd9c, d_60ae_dd76 + 1) == 0) {
                                f_be31_1c3c("No.15 ineligible for this match");
                                done = 1;
                            } else if (team == d_60ae_dcd2 && d_60ae_d982 >= 2 ||
                                       team == d_60ae_dcd0 && d_60ae_d981 >= 2) {
                                f_be31_1c3c("Maximum 2 subs per game");
                                done = 1;
                            } else if (choice == 14 && d_323f_0e8a[team][0][sel - 1] != 1) {
                                f_be31_1c3c("No.15 can only replace 'keeper");
                                done = 1;
                            } else {
                                f_14bc_548f(sel, 0);
                                f_14bc_548f(choice, -1);
                                for (k = 0; k <= 2; ++k)
                                    d_323f_0e8a[team][k][choice - 1] = d_323f_0e8a[team][k][sel - 1];
                                d_323f_0538[team == d_60ae_dcd2 ? 0 : 1][choice - 1] = 0;
                                if (d_323f_0538[team == d_60ae_dcd2 ? 0 : 1][sel - 1] == 6)
                                    d_323f_0538[team == d_60ae_dcd2 ? 0 : 1][sel - 1] = 3;
                                else
                                    d_323f_0538[team == d_60ae_dcd2 ? 0 : 1][sel - 1] = 5;
                                d_323f_0500[team == d_60ae_dcd2 ? 0 : 1][sel - 1] = d_60ae_dc9a;
                                d_323f_051c[team == d_60ae_dcd2 ? 0 : 1][choice - 1] = d_60ae_dc9a;
                                d_471b_ae55[team == d_60ae_dcd2 ? 0 : 1][choice - 1] = sel - 1;
                                d_323f_6529[team == d_60ae_dcd2 ? 0 : 1][choice - 1] = d_60ae_dc9a;
                                f_be31_16ec(team);
                                sel = choice;
                                if (team == d_60ae_dcd2)
                                    d_60ae_d982++;
                                else
                                    d_60ae_d981++;
                            }
                        }
                        mode = 0;
                        f_be31_1213(2, 0);
                    }
                }
            } else if (choice >= 15 && choice <= 28) {
                if (team < 80) {
                    player = d_323f_0592[team][choice - 15];
                    if (f_14bc_5e18(player)) {
                        do {
                            f_a694_49c9(player, -1, -1);
                            f_8aa1_4f06(player, d_60ae_dd4a);
                        } while (!d_60ae_d975);
                        done = 1;
                    } else if (f_14bc_5e32(player)) {
                        f_ad38_34a0(team, f_14bc_5e60(player));
                        done = 1;
                    }
                }
            } else if (choice >= 29 && choice <= 42) {
                unsigned char k;
                unsigned char p, q;

                p = d_323f_0e8a[team][0][sel - 1];
                k = 0;
                q = d_323f_0e8a[team][2][sel - 1];
                if (p == 3 || p == 6 || p == 9)
                    k = 1;
                else if (p == 4 || p == 7 || p == 10)
                    k = 2;
                p -= k;
                if (choice == 29)
                    f_be31_1504(p + k, 1, team, sel);
                else if (choice >= 30 && choice <= 35) {
                    if (sel < 14) {
                        if (choice == 30)
                            f_be31_1504(p + k, 11, team, sel);
                        else if (choice == 31)
                            f_be31_1504(p + k, 12, team, sel);
                        else if (choice == 32)
                            f_be31_1504(p + k, (p == 1 || p >= 11 ? 2 : k) + 2, team, sel);
                        else if (choice == 33)
                            f_be31_1504(p + k, (p == 1 || p >= 11 ? 2 : k) + 5, team, sel);
                        else if (choice == 34)
                            f_be31_1504(p + k, (p == 1 || p >= 11 ? 2 : k) + 8, team, sel);
                        else if (choice == 35)
                            f_be31_1504(p + k, 13, team, sel);
                    } else {
                        f_be31_1c3c("No.15 cannot be repositioned");
                        done = 1;
                    }
                } else if (choice == 36 && p + k >= 2 && p + k <= 10)
                    f_be31_1504(p + k, p, team, sel);
                else if (choice == 37 && p + k >= 2 && p + k <= 10)
                    f_be31_1504(p + k, p + 1, team, sel);
                else if (choice == 38 && p + k >= 2 && p + k <= 10)
                    f_be31_1504(p + k, p + 2, team, sel);
                else if (choice == 39) {
                    if (d_2289_f882[d_323f_47b4[team]] != sel) {
                        d_60ae_dcba = sel;
                        f_be31_1d36(team, d_2289_f882[d_323f_47b4[team]]);
                        d_2289_f882[d_323f_47b4[team]] = sel;
                        f_be31_1d36(team, d_2289_f882[d_323f_47b4[team]]);
                    }
                } else if (choice >= 40 && choice <= 42 && p + k >= 2 && p + k <= 10 && choice - 40 != q) {
                    f_14bc_548f(q + 40, 0);
                    f_14bc_548f(choice, -1);
                    d_323f_0e8a[team][2][sel - 1] = choice - 40;
                    f_be31_16ec(team);
                }
            } else if (choice == 43 && f_14bc_2cc0(team)) {
                if (f_be31_1e52(team) == 1) {
                    choice = 0;
                    done = 1;
                }
            } else if (choice == 44 && f_14bc_2cc0(team)) {
                f_7732_4c3e(team);
                done = 1;
            } else if (choice == 45 && f_14bc_2cc0(team)) {
                f_7732_4b16(team);
                done = 1;
            } else if (choice == 46 && f_14bc_2cc0(team)) {
                f_be31_1213(2, mode = !mode);
            } else if (choice == 47 && f_14bc_2cc0(team) && d_60ae_d969) {
                f_b628_25b2(team, team == d_60ae_dcd2 ? d_60ae_dc82 : d_60ae_dc84);
                done = 1;
            }
        } while (done == 0 && choice != 43);
    } while (choice != 43);
}

/* One of the editor's four buttons: 0 New Style, 1 New Formation, 2 Swap With,
   3 Win Bonus; lit: drawn highlighted. */
void f_be31_1213(unsigned char button, char lit)
{
    char far *labels[6] = {"New", "Style", "New", "Formation", "Swap With", "Win Bonus"};
    int x;

    x = (button == 0 || button == 2) ? 136 : 226;
    if (button < 2) {
        f_1bd3_08cb(16);
        f_1bd3_08e1(x + 2, 30, x + 88, 46);
        f_1bd3_08cb((lit ? 1 : 4) + 16);
        f_1bd3_08e1(x, 28, x + 86, 44);
        f_1bd3_08d6(28);
        f_1bd3_0fe2(x, 44, x, 28);
        f_1bd3_0fe2(x, 28, x + 86, 28);
        f_14bc_356a(x + (43 - strlen(labels[button * 2]) * 3) + 8, 36, lit ? 12 : 1,
                    labels[button * 2]);
        f_14bc_356a(x + (43 - strlen(labels[button * 2 + 1]) * 3) + 8, 43, lit ? 12 : 1,
                    labels[button * 2 + 1]);
    } else {
        f_1bd3_08cb(16);
        f_1bd3_08e1(x + 2, 164, x + 88, 175);
        f_1bd3_08cb((lit ? 1 : 4) + 16);
        f_1bd3_08e1(x, 162, x + 86, 173);
        f_1bd3_08d6(28);
        f_1bd3_0fe2(x, 173, x, 162);
        f_1bd3_0fe2(x, 162, x + 86, 162);
        f_14bc_356a(x + (43 - strlen(labels[button == 2 ? 4 : 5]) * 3) + 8, 171, lit ? 0 : 1,
                    labels[button == 2 ? 4 : 5]);
    }
}

/* which of the four buttons (two columns of two) the mouse is on: sets d_60ae_dda0 to 44 + its number */
void f_be31_1476(void)
{
    unsigned char i;
    unsigned x;

    for (i = 0; i <= 3; i = i + 1) {
        x = i == 0 || i == 2 ? 0x88 : 0xe2;
        if (f_1bd3_0c0e() >= x && f_1bd3_0c0e() <= x + 0x56
            && f_1bd3_0c06() >= (i < 2 ? 0x1c : 0xa1)
            && f_1bd3_0c06() <= (i < 2 ? 0x2c : 0xac)) {
            d_60ae_dda0 = i + 0x2c;
            i = 3;
        }
    }
}

void f_be31_1504(unsigned char from, unsigned char to, unsigned char team, unsigned char p)
{
    unsigned char a, b, i, changed;

    changed = 0;
    for (i = 0; i <= 1; i = i + 1) {
        a = f_be31_1662(from, i);
        b = f_be31_1662(to, i);
        if (a != b) {
            if (a != 0xff)
                f_14bc_548f(a, 0);
            if (b != 0xff)
                f_14bc_548f(b, -1);
            changed = 1;
        }
    }
    if (p < 0xff) {
        if (to == 1 || to >= 11) {
            if (d_323f_0e8a[team][2][p - 1] > 0) {
                f_14bc_548f(d_323f_0e8a[team][2][p - 1] + 40, 0);
                d_323f_0e8a[team][2][p - 1] = 0;
                f_14bc_548f(d_323f_0e8a[team][2][p - 1] + 40, -1);
            }
        }
        d_323f_0e8a[team][0][p - 1] = to;
        if (changed)
            f_be31_16ec(team);
    }
}

unsigned char f_be31_1662(unsigned char pos, unsigned char which)
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

void f_be31_16ec(unsigned char team)
{
    unsigned char i;
    int *p4, *p7, *p10;
    unsigned char n[13];
    int two[11] = {50, 86, 50, 86, 50, 86, 50, 86, 50, 86, 50};
    int three[11] = {68, 43, 93, 68, 43, 93, 68, 43, 93, 68, 43};
    register unsigned x, y;
    unsigned char pos;

    f_1bd3_08cb(31);
    f_1bd3_08e1(9, 0x17, 0x7f, 0xbf);
    f_1bd3_08d6(19);
    f_1bd3_0fe2(8, 0x16, 0x80, 0x16);
    f_1bd3_0fe2(8, 0x6b, 0x80, 0x6b);
    f_1bd3_0928(0x1e, 0x16, 0x6a, 0x34);
    f_1bd3_0928(0x31, 0x16, 0x57, 0x22);
    f_1bd3_0928(0x1e, 0xa2, 0x6a, 0xc0);
    f_1bd3_0928(0x31, 0xb4, 0x57, 0xc0);
    f_be31_1a69(0x44, 0x6b, 0x16, 3);
    f_1bd3_08d6(19);
    f_1bd3_0fe2(0x44, 0x2b, 0x44, 0x2b);
    f_1bd3_0fe2(0x44, 0xa9, 0x44, 0xa9);
    f_be31_1b1b(0, 0x34, 0x140, 0x64, 0x44, 0x2b, 0x11, 3);
    f_be31_1b1b(0, 0x64, 0x140, 0xa2, 0x44, 0xab, 0x11, 3);
    memset(n, 0, 13);
    for (i = 1; i <= 14; i = i + 1)
        if (d_323f_0538[team == d_60ae_dcd2 ? 0 : 1][i - 1] < 2)
            n[d_323f_0e8a[team][0][i - 1] - 1]++;
    p4 = n[3] == 2 ? two : three;
    p7 = n[6] == 2 ? two : three;
    p10 = n[9] == 2 ? two : three;
    for (i = 1; i <= 14; i = i + 1) {
        if (d_323f_0538[team == d_60ae_dcd2 ? 0 : 1][i - 1] < 2) {
            pos = d_323f_0e8a[team][0][i - 1];
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
            f_14bc_6199(team, i, x - 7, y - 6);
        }
    }
}

void f_be31_1a69(int cx, int cy, int r, unsigned char colour)
{
    int h, px, py;
    int x;

    px = -r;
    py = 0;
    f_1bd3_08d6(colour + 16);
    for (x = -r; x <= r; x++) {
        h = sqrt(r * r - x * x);
        f_1bd3_0fe2(cx + px, cy + py, cx + x, cy + h);
        f_1bd3_0fe2(cx + px, cy - py, cx + x, cy - h);
        px = x;
        py = h;
    }
}

void f_be31_1b1b(x1, y1, x2, y2, cx, cy, r, colour)
int x1, y1, x2, y2, cx;
register int cy;
int r;
unsigned char colour;
{
    int h, px, py;
    register int x;

    px = -r;
    py = 0;
    f_1bd3_08d6(colour + 16);
    for (x = -r; x <= r; x++) {
        h = sqrt(r * r - x * x);
        if (cx + x >= x1 && cx + x <= x2) {
            if (cy + py >= y1 && cy + py <= y2 && cy + h >= y1 && cy + h <= y2)
                f_1bd3_0fe2(cx + px, cy + py, cx + x, cy + h);
            if (cy - py >= y1 && cy - py <= y2 && cy - h >= y1 && cy - h <= y2)
                f_1bd3_0fe2(cx + px, cy - py, cx + x, cy - h);
        }
        px = x;
        py = h;
    }
}

void f_be31_1c3c(char far *s)
{
    float x;

    f_1bd3_1a28();
    f_1bd3_08cb(16);
    f_1bd3_08e1(0x16, 0x5c, 0x12e, 0x70);
    f_1bd3_08cb(20);
    f_1bd3_08e1(0x14, 0x5a, 0x12c, 0x6e);
    f_1bd3_08d6(28);
    f_1bd3_0fe2(0x14, 0x6e, 0x14, 0x5a);
    f_1bd3_0fe2(0x14, 0x5a, 0x12c, 0x5a);
    x = (160 - strlen(s) * 4) / 8.0 + 1;
    f_14bc_3c75(x, 12.25, 1, s);
    f_1bd3_0dbc(70);
    f_1bd3_1a2d();
}

void f_be31_1d36(unsigned char team, unsigned char n)
{
    unsigned char bg = 1;
    unsigned char fg;
    char buf[320];
    unsigned char st;

    fg = n % 2 == 0 ? 8 : 14;
    strcpy(buf, "");
    if (n == d_60ae_dcba) {
        strcpy(buf, "Cpt");
        bg = 0;
        fg = 2;
    } else {
        st = d_323f_0538[team == d_60ae_dcd2 ? 0 : 1][n - 1];
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
    f_14bc_3672(30.375, n + 5.875, bg, fg, 20, buf);
}

char f_be31_1e52(unsigned char team)
{
    char r = 0;
    unsigned char cnt[13];
    unsigned char max[13] = {1, 1, 1, 3, 1, 1, 3, 1, 1, 3, 1, 1, 1};
    char buf[320];
    char far *names[13] = {"Goalkeepers", "Right-backs", "Left-backs", "Centre-backs",
        "Right-midfielders", "Left-midfielders", "Centre-midfielders", "Right-wingers",
        "Left-wingers", "Centre-forwards", "Sweepers", "Anchor men", "Support men"};
    unsigned char i;

    memset(cnt, 0, 13);
    for (i = 1; i <= 14; i++)
        if (d_323f_0538[team == d_60ae_dcd2 ? 0 : 1][i - 1] < 2)
            cnt[d_323f_0e8a[team][0][i - 1] - 1]++;
    for (i = 1; i <= 13; i++)
        if (cnt[i - 1] > max[i - 1]) {
            sprintf(buf, "%d %s selected", cnt[i - 1], names[i - 1]);
            f_be31_1c3c(buf);
            r = 1;
            i = 13;
        }
    if (r == 0 && cnt[10] == 1 && cnt[11] == 1) {
        f_be31_1c3c("Can't play Sweeper & Anchor man");
        r = 1;
    }
    return r;
}

void f_be31_1f93(void)
{
    unsigned char n = 1;
    unsigned char max;
    unsigned char i;
    char name[40];
    char line[320];
    char items[320];

    f_1bd3_1a23(1);
    if (f_1bd3_0d9b("svgameG8"))
        max = 8;
    else if (f_1bd3_0d9b("svgameG7"))
        max = 7;
    else if (f_1bd3_0d9b("svgameG6"))
        max = 6;
    else if (f_1bd3_0d9b("svgameG5"))
        max = 5;
    else if (f_1bd3_0d9b("svgameG4"))
        max = 4;
    else if (f_1bd3_0d9b("svgameG3"))
        max = 3;
    else if (f_1bd3_0d9b("svgameG2"))
        max = 2;
    else
        max = 1;
    if (max > 1) {
        f_14bc_4bd3("Multi-Save");
        f_14bc_0ac0(5, "Please enter game number");
        strcpy(items, "Default|");
        for (i = 2; i <= max; i = i + 1) {
            sprintf(line, "Game %d|", i);
            strcat(items, line);
        }
        f_14bc_2f90(8, "", items);
        f_14bc_3334(max - 1);
        n = d_60ae_dda0 + 1;
    }
    if (n > 1)
        sprintf(name, "G%d", n);
    else
        strcpy(name, "");
    sprintf(d_2289_00a0, "svgame%s", name);
    sprintf(d_2289_0078, "mchfax%s", name);
    sprintf(d_2289_0050, "plhist%s", name);
    sprintf(d_2289_0028, "clrecs%s", name);
    sprintf(d_2289_0000, "%s", name);
}

void f_be31_21a7(void)
{
    unsigned char page;
    unsigned char match;
    unsigned char i;
    unsigned char ok;
    unsigned char key[6];
    unsigned char tries;
    char buf[320];

    f_1bd3_1a32();
    tries = 0;
    do {
        f_14bc_4bd3("Copy Protection");
        f_14bc_3e40(11.625, 5.0, 0, 2, 0, " Refer To Manual ");
        page = f_1bd3_0d69(36) + 1;
        match = f_1bd3_0d69(5) + 1;
        f_14bc_3c75(5.0, 10.0, 6, "Please enter the result of match");
        sprintf(buf, "%d on page %d of the manual.", match, page);
        f_14bc_3c75(5.0, 13.0, 6, buf);
        f_14bc_3c75(5.0, 20.0, 1, "Result ?");
        ok = 1;
        for (i = 1; i <= 2; i++) {
            do
                strcpy(key, f_1bd3_0cec());
            while (key[0] < '0' || key[0] > '9');
            f_14bc_3c75((i - 1) * 2 + 14, 20.0, 5, key);
            if (i == 1)
                f_14bc_3c75(15.0, 20.0, 5, "-");
            /* The original compared the manual's digit with the key typed:
               if (d_54d9_5058[page - 1][match - 1][i - 1] != key[0] - '0') ok = 0;
               the copy is cracked: those 8 bytes now copy the digit into key[0]
               and into DX (mov dx,ax / mov [bp-10],dl / 3 nops), so the test always
               passes. */
            _AX = (unsigned char)d_54d9_5058[page - 1][match - 1][i - 1];
            __emit__(0x8b, 0xd0, 0x88, 0x56, 0xf6, 0x90, 0x90, 0x90);
            if (_AX != _DX)
                ok = 0;
        }
        tries++;
    } while (tries < 3 && ok == 0);
    f_1bd3_1a4c();
    if (ok == 0) {
        f_1bd3_1215();
        exit(0);
    }
}
