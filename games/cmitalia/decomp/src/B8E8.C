/* @at b8e8:0000 */
/* @data 5d51:90e6 */
/* @module */

/* Overlay b8e8: CM93's overlay be31 (games/cm93/decomp/src/BE31.C) changed for CM Italia:
 * the formation and tactics editor with its pitch drawing and position-group checks, a
 * message box, the Multi-Save slot menu and the copy protection question (patched out in
 * CM.EXE). Squads are 16 players (14 in CM93) and there are 38 clubs (80); the editor gains
 * BONUS and SWAP positions and a "No captain elected" check, and its menu loses "Swap With"
 * and "Win Bonus". */
#include <string.h>
#include <mem.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_b8e8_0000(unsigned char team);
void f_b8e8_11df(unsigned char button, char lit);
void f_b8e8_1361(void);
void f_b8e8_13cb(unsigned char from, unsigned char to, unsigned char team, unsigned char p);
unsigned char f_b8e8_1529(unsigned char pos, unsigned char which);
void f_b8e8_15b3(unsigned char team);
void f_b8e8_192e(int cx, int cy, int r, unsigned char colour);
void f_b8e8_19e0(int x1, int y1, int x2, int y2, int cx, int cy, int r, unsigned char colour);
void f_b8e8_1b01(char far *s);
void f_b8e8_1bfb(unsigned char team, unsigned char n);
char f_b8e8_1d16(unsigned char team);
void f_b8e8_1e9f(void);
void f_b8e8_20b3(void);

void f_1646_4ba0(char far *title);
void f_1d5e_08cc(int c);
void f_1d5e_08d7(int c);
void f_1d5e_08e2(int x1, int y1, int x2, int y2);
void f_1d5e_0929(int x1, int y1, int x2, int y2);
void f_1d5e_0fe3(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_1d5e_13a4(void far *a, void far *b, int n);
void f_1646_3e54(float x, float y, int bg, int fg, int w, char far *s);
void f_1646_3686(float x, float y, int bg, int fg, int w, char far *s);
void f_1646_50c5(int a, float x, float y, int c, int d, int e, char far *s);
char f_1646_2cc9(int x);
char far *f_1646_2f4b(int x, char c);
char far *f_1646_48c0(int player);
char f_1646_5de5(int player);
char f_1646_5dff(int player);
unsigned char f_1646_5e2d(int player);
void f_1646_545c(int a, char b);
void f_1646_5869(int team);
int f_1646_5602(int a);
char f_1646_60fb(char team, char week, char n);
void f_7c1d_2aec(int team);
void f_a13d_4a1b(int player, int a, char b);
void f_8539_4fbd(int player, int a);
void f_a7f0_3545(char team, char n);
void f_71c8_4a6c(int team);
void f_71c8_4947(int team);
void f_b0f1_258b(char team, int n);
extern char near *d_5d51_b476[];
extern int d_5d51_d940;
extern int d_5d51_d942;
extern int d_5d51_d8f2;
extern int d_5d51_d8f4;
extern int d_5d51_d90a;
extern int d_5d51_d92a;
extern int d_5d51_da0a;
extern int d_5d51_d9ba;
extern int d_5d51_d9e6;
extern int d_5d51_da06;
extern char d_5d51_d5cb;
extern char d_5d51_d5d3;
extern char d_5d51_d5df;
extern unsigned char d_5d51_d5eb;
extern unsigned char d_5d51_d5ec;
extern unsigned char far d_3404_448a[];
extern unsigned char far d_4f37_0bba[];
extern int far d_3404_4226[];
extern unsigned char far d_3404_049a[];
extern int far d_3404_0e34[][16];
extern unsigned char far d_3404_1334[][3][16];
extern unsigned char far d_3404_0dce[][16];
extern unsigned char far d_3404_0d8e[][16];
extern unsigned char far d_3404_0dae[][16];
extern unsigned char far d_44d7_8c95[][5];
extern unsigned char far d_3404_5197[][5];
extern unsigned char far d_3404_24e6[];
extern char far * far d_4f37_0593[];
extern char far * far d_4f37_06da[];
void f_1646_357e(int x, int y, int colour, char far *s);
int f_1d5e_0c07(void);
int f_1d5e_0c0f(void);
void f_1646_6102(unsigned char team, unsigned char player, int x, int y);
void f_1646_0b2f(int line, char far *s);
void f_1646_2fa4(int n, char far *title, char far *items);
void f_1646_3348(int last);
void f_1646_3c89(float x, float y, int colour, char far *s);
char far *f_1d5e_0ced(void);
long f_1d5e_0d6a(long n);
int f_1d5e_0d9c(char far *path);
void f_1d5e_0dbd(int ticks);
void f_1d5e_1216(void);
void f_1d5e_1a24();
void f_1d5e_1a29(void);
void f_1d5e_1a2e(void);
void f_1d5e_1a33(void);
void f_1d5e_1a4d(void);
extern char far d_2414_07c6[];
extern char far d_2414_07ee[];
extern char far d_2414_0816[];
extern char far d_2414_083e[];
extern char far d_2414_0866[];
extern unsigned char far d_4f37_51ea[][5][2];
extern char far d_2414_0000[];
extern char far d_2414_0028[];
extern char far d_2414_0050[];
extern char far d_2414_0078[];
extern char far d_2414_00a0[];
extern unsigned char far d_4f37_78aa[][5][2];


void f_b8e8_0000(unsigned char team)
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
        f_1646_4ba0("");
        f_1d5e_08cc(0x10);
        f_1d5e_08e2(12, 12, 132, 196);
        f_1d5e_08cc(0x1f);
        f_1d5e_08e2(8, 8, 128, 192);
        f_1d5e_08d7(0x13);
        f_1d5e_0929(8, 8, 128, 192);
        f_1d5e_0fe3(8, 22, 128, 22);
        strcpy(buf, "");
        for (n = (88 - strlen(d_5d51_b476[team]) * 4) / 8; n > 0; n--)
            strcat(buf, " ");
        strcat(buf, d_5d51_b476[team]);
        if (team < 38)
            f_1646_3e54(17.25, 1.625, -(d_3404_448a[team] / 16), d_3404_448a[team] % 16, 0xad, buf);
        else
            f_1646_3e54(17.25, 1.625,
                        -(d_4f37_0bba[team == d_5d51_d942 ? d_5d51_d8f4 - 38 : d_5d51_d8f2 - 38] / 16),
                        d_4f37_0bba[team == d_5d51_d942 ? d_5d51_d8f4 - 38 : d_5d51_d8f2 - 38] % 16, 0xad, buf);
        if (f_1646_2cc9(team) == 0)
            f_7c1d_2aec(team);
        else
            d_5d51_d92a = d_3404_049a[d_3404_4226[team]];
        for (a = 1; a <= 3; ++a)
            for (b = 1; b <= 16; ++b) {
                y = b + 5.875;
                if (a == 1) {
                    sprintf(buf, " %s", f_1646_2f4b(b, 1));
                    f_1646_50c5(0, 17.125, y, 1, 4, 0x18, buf);
                    if (f_1646_2cc9(team) == 0)
                        f_1646_5869(b);
                } else if (a == 2) {
                    unsigned char k;

                    k = 1;
                    player = d_3404_0e34[team][b - 1];
                    strcpy(buf, "");
                    if (team < 38) {
                        sprintf(buf, " %s", f_1646_48c0(player));
                        if (f_1646_5dff(player))
                            k = 6;
                    } else
                        sprintf(buf, " %s", d_4f37_0593[d_3404_1334[team][0][b - 1]]);
                    f_1646_50c5(0, 20.375, y, k, b % 2 == 0 ? 8 : 14, 0x50, buf);
                    f_b8e8_1bfb(team, b);
                } else if (a == 3) {
                    sprintf(buf, " %s", pos[b - 1]);
                    f_1646_50c5(0, 33.125, y, b <= 10 ? 5 : 1, b <= 10 ? 11 : 9, 0x30, buf);
                    if (f_1646_2cc9(team) == 0)
                        f_1646_5869(b + 32);
                }
            }
        f_1646_50c5(2, 17.25, 22.875, 1, 4, 0xad, "         Done");
        f_b8e8_11df(0, 0);
        f_b8e8_11df(1, 0);
        mode = 0;
        for (sel = 1; d_3404_0dce[team == d_5d51_d942 ? 0 : 1][sel - 1] >= 2; sel++)
            ;
        if (f_1646_2cc9(team)) {
            unsigned char k, k2;

            k = f_b8e8_1529(d_3404_1334[team][0][sel - 1], 0);
            k2 = f_b8e8_1529(d_3404_1334[team][0][sel - 1], 1);
            f_1646_545c(sel, -1);
            if (k != 0xff)
                f_1646_545c(k, -1);
            if (k2 != 0xff)
                f_1646_545c(k2, -1);
            f_1646_545c(d_3404_1334[team][2][sel - 1] + 44, -1);
        }
        if (team < 38)
            strcpy(buf2, d_4f37_06da[d_3404_24e6[d_3404_4226[team]] / 16]);
        else {
            unsigned u;

            u = team == d_5d51_d942 ? d_5d51_d8f4 : d_5d51_d8f2;
            if (u < 438)
                strcpy(buf2, "Continental");
            else
                strcpy(buf2, "Up-and-under");
        }
        strcpy(buf, " ");
        for (n = (56 - strlen(buf2) * 3) / 8; n > 0; n--)
            strcat(buf, " ");
        strcat(buf, buf2);
        f_1646_3686(1.625, 2.25, 0, 1, 0x70, buf);
        f_b8e8_15b3(team);
        do {
            done = 0;
            do {
                d_5d51_da0a = f_1646_5602(-1);
                if (d_5d51_da0a == 0)
                    f_b8e8_1361();
                choice = d_5d51_da0a;
            } while (choice == 0);
            if (choice >= 1 && choice <= 16) {
                if (choice != sel) {
                    if (mode == 0) {
                        if (d_3404_0dce[team == d_5d51_d942 ? 0 : 1][choice - 1] < 2 ||
                            d_3404_0dce[team == d_5d51_d942 ? 0 : 1][choice - 1] == 6) {
                            f_1646_545c(sel, 0);
                            f_1646_545c(choice, -1);
                            f_b8e8_13cb(d_3404_1334[team][0][sel - 1], d_3404_1334[team][0][choice - 1], team, -1);
                            if (d_3404_1334[team][2][sel - 1] != d_3404_1334[team][2][choice - 1]) {
                                f_1646_545c(d_3404_1334[team][2][sel - 1] + 44, 0);
                                f_1646_545c(d_3404_1334[team][2][choice - 1] + 44, -1);
                            }
                            sel = choice;
                        }
                    } else if (mode == 1) {
                        unsigned char p, q;
                        unsigned char k;

                        p = d_3404_0dce[team == d_5d51_d942 ? 0 : 1][choice - 1];
                        q = d_3404_0dce[team == d_5d51_d942 ? 0 : 1][sel - 1];
                        if (p < 2 && q < 2) {
                            if (d_3404_1334[team][0][sel - 1] != d_3404_1334[team][0][choice - 1] ||
                                d_3404_1334[team][2][sel - 1] != d_3404_1334[team][2][choice - 1]) {
                                f_1646_545c(sel, 0);
                                f_1646_545c(choice, -1);
                                for (k = 0; k <= 2; ++k)
                                    f_1d5e_13a4(&d_3404_1334[team][k][sel - 1], &d_3404_1334[team][k][choice - 1], 1);
                                f_b8e8_15b3(team);
                                sel = choice;
                            }
                        } else if (p == 4 && (q < 2 || q == 6) && d_5d51_d5cb) {
                            if (choice == 16 && f_1646_60fb(team, d_5d51_da06, d_5d51_d9e6 + 1) == 0) {
                                f_b8e8_1b01("No.16 ineligible for this match");
                                done = 1;
                            } else if (team == d_5d51_d942 && d_5d51_d5ec >= 2 ||
                                       team == d_5d51_d940 && d_5d51_d5eb >= 2) {
                                f_b8e8_1b01("Maximum 2 subs per game");
                                done = 1;
                            } else if (choice == 16 && d_3404_1334[team][0][sel - 1] != 1) {
                                f_b8e8_1b01("No.16 can only replace 'keeper");
                                done = 1;
                            } else {
                                f_1646_545c(sel, 0);
                                f_1646_545c(choice, -1);
                                for (k = 0; k <= 2; ++k)
                                    d_3404_1334[team][k][choice - 1] = d_3404_1334[team][k][sel - 1];
                                d_3404_0dce[team == d_5d51_d942 ? 0 : 1][choice - 1] = 0;
                                if (d_3404_0dce[team == d_5d51_d942 ? 0 : 1][sel - 1] == 6)
                                    d_3404_0dce[team == d_5d51_d942 ? 0 : 1][sel - 1] = 3;
                                else
                                    d_3404_0dce[team == d_5d51_d942 ? 0 : 1][sel - 1] = 5;
                                d_3404_0d8e[team == d_5d51_d942 ? 0 : 1][sel - 1] = d_5d51_d90a;
                                d_3404_0dae[team == d_5d51_d942 ? 0 : 1][choice - 1] = d_5d51_d90a;
                                d_44d7_8c95[team == d_5d51_d942 ? 0 : 1][choice - 1] = sel - 1;
                                d_3404_5197[team == d_5d51_d942 ? 0 : 1][choice - 1] = d_5d51_d90a;
                                f_b8e8_15b3(team);
                                sel = choice;
                                if (team == d_5d51_d942)
                                    d_5d51_d5ec++;
                                else
                                    d_5d51_d5eb++;
                            }
                        }
                        mode = 0;
                        f_1646_545c(48, 0);
                    }
                }
            } else if (choice >= 17 && choice <= 32) {
                if (team < 38) {
                    player = d_3404_0e34[team][choice - 17];
                    if (f_1646_5de5(player)) {
                        do {
                            f_a13d_4a1b(player, -1, -1);
                            f_8539_4fbd(player, d_5d51_d9ba);
                        } while (!d_5d51_d5df);
                        done = 1;
                    } else if (f_1646_5dff(player)) {
                        f_a7f0_3545(team, f_1646_5e2d(player));
                        done = 1;
                    }
                }
            } else if (choice >= 33 && choice <= 46) {
                unsigned char k;
                unsigned char p, q;

                p = d_3404_1334[team][0][sel - 1];
                k = 0;
                q = d_3404_1334[team][2][sel - 1];
                if (p == 3 || p == 6 || p == 9)
                    k = 1;
                else if (p == 4 || p == 7 || p == 10)
                    k = 2;
                p -= k;
                if (choice == 33)
                    f_b8e8_13cb(p + k, 1, team, sel);
                else if (choice >= 34 && choice <= 39) {
                    if (sel < 16) {
                        if (choice == 34)
                            f_b8e8_13cb(p + k, 11, team, sel);
                        else if (choice == 35)
                            f_b8e8_13cb(p + k, 12, team, sel);
                        else if (choice == 36)
                            f_b8e8_13cb(p + k, (p == 1 || p >= 11 ? 2 : k) + 2, team, sel);
                        else if (choice == 37)
                            f_b8e8_13cb(p + k, (p == 1 || p >= 11 ? 2 : k) + 5, team, sel);
                        else if (choice == 38)
                            f_b8e8_13cb(p + k, (p == 1 || p >= 11 ? 2 : k) + 8, team, sel);
                        else if (choice == 39)
                            f_b8e8_13cb(p + k, 13, team, sel);
                    } else {
                        f_b8e8_1b01("No.16 cannot be repositioned");
                        done = 1;
                    }
                } else if (choice == 40 && p + k >= 2 && p + k <= 10)
                    f_b8e8_13cb(p + k, p, team, sel);
                else if (choice == 41 && p + k >= 2 && p + k <= 10)
                    f_b8e8_13cb(p + k, p + 1, team, sel);
                else if (choice == 42 && p + k >= 2 && p + k <= 10)
                    f_b8e8_13cb(p + k, p + 2, team, sel);
                else if (choice == 43) {
                    if (d_3404_049a[d_3404_4226[team]] != sel) {
                        d_5d51_d92a = sel;
                        f_b8e8_1bfb(team, d_3404_049a[d_3404_4226[team]]);
                        d_3404_049a[d_3404_4226[team]] = sel;
                        f_b8e8_1bfb(team, d_3404_049a[d_3404_4226[team]]);
                    }
                } else if (choice >= 44 && choice <= 46 && p + k >= 2 && p + k <= 10 && choice - 44 != q) {
                    f_1646_545c(q + 44, 0);
                    f_1646_545c(choice, -1);
                    d_3404_1334[team][2][sel - 1] = choice - 44;
                    f_b8e8_15b3(team);
                }
            } else if (choice == 49 && f_1646_2cc9(team)) {
                if (f_b8e8_1d16(team) == 1) {
                    choice = 0;
                    done = 1;
                }
            } else if (choice == 50 && f_1646_2cc9(team)) {
                f_71c8_4a6c(team);
                done = 1;
            } else if (choice == 51 && f_1646_2cc9(team)) {
                f_71c8_4947(team);
                done = 1;
            } else if (choice == 48 && f_1646_2cc9(team)) {
                f_1646_545c(48, mode = !mode);
            } else if (choice == 47 && f_1646_2cc9(team) && d_5d51_d5d3) {
                f_b0f1_258b(team, team == d_5d51_d942 ? d_5d51_d8f2 : d_5d51_d8f4);
                done = 1;
            }
        } while (done == 0 && choice != 49);
    } while (choice != 49);
}

/* One of the editor's two buttons: 0 New Style, 1 New Formation; lit: drawn highlighted. */
void f_b8e8_11df(unsigned char button, char lit)
{
    char far *labels[4] = {"New", "Style", "New", "Formation"};
    int x;

    x = button == 0 ? 136 : 226;
    f_1d5e_08cc(16);
    f_1d5e_08e2(x + 2, 30, x + 88, 46);
    f_1d5e_08cc((lit ? 1 : 4) + 16);
    f_1d5e_08e2(x, 28, x + 86, 44);
    f_1d5e_08d7(28);
    f_1d5e_0fe3(x, 44, x, 28);
    f_1d5e_0fe3(x, 28, x + 86, 28);
    f_1646_357e(x + (43 - strlen(labels[button * 2]) * 3) + 8, 36, lit ? 12 : 1,
                labels[button * 2]);
    f_1646_357e(x + (43 - strlen(labels[button * 2 + 1]) * 3) + 8, 43, lit ? 12 : 1,
                labels[button * 2 + 1]);
}

/* which of the two buttons the mouse is on: sets d_5d51_da0a to 50 + its number */
void f_b8e8_1361(void)
{
    unsigned char i;
    unsigned x;

    for (i = 0; i <= 1; i = i + 1) {
        x = i == 0 ? 0x88 : 0xe2;
        if (f_1d5e_0c0f() >= x && f_1d5e_0c0f() <= x + 0x56
            && f_1d5e_0c07() >= 0x1c
            && f_1d5e_0c07() <= 0x2c) {
            d_5d51_da0a = i + 0x32;
            i = 1;
        }
    }
}

void f_b8e8_13cb(unsigned char from, unsigned char to, unsigned char team, unsigned char p)
{
    unsigned char a, b, i, changed;

    changed = 0;
    for (i = 0; i <= 1; i = i + 1) {
        a = f_b8e8_1529(from, i);
        b = f_b8e8_1529(to, i);
        if (a != b) {
            if (a != 0xff)
                f_1646_545c(a, 0);
            if (b != 0xff)
                f_1646_545c(b, -1);
            changed = 1;
        }
    }
    if (p < 0xff) {
        if (to == 1 || to >= 11) {
            if (d_3404_1334[team][2][p - 1] > 0) {
                f_1646_545c(d_3404_1334[team][2][p - 1] + 44, 0);
                d_3404_1334[team][2][p - 1] = 0;
                f_1646_545c(d_3404_1334[team][2][p - 1] + 44, -1);
            }
        }
        d_3404_1334[team][0][p - 1] = to;
        if (changed)
            f_b8e8_15b3(team);
    }
}

unsigned char f_b8e8_1529(unsigned char pos, unsigned char which)
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

void f_b8e8_15b3(unsigned char team)
{
    unsigned char i;
    int *p4, *p7, *p10;
    unsigned char n[13];
    int two[11] = {50, 86, 50, 86, 50, 86, 50, 86, 50, 86, 50};
    int three[11] = {68, 43, 93, 68, 43, 93, 68, 43, 93, 68, 43};
    register unsigned x, y;
    unsigned char pos;

    f_1d5e_08cc(31);
    f_1d5e_08e2(9, 0x17, 0x7f, 0xbf);
    f_1d5e_08d7(19);
    f_1d5e_0fe3(8, 0x16, 0x80, 0x16);
    f_1d5e_0fe3(8, 0x6b, 0x80, 0x6b);
    f_1d5e_0929(0x1e, 0x16, 0x6a, 0x34);
    f_1d5e_0929(0x31, 0x16, 0x57, 0x22);
    f_1d5e_0929(0x1e, 0xa2, 0x6a, 0xc0);
    f_1d5e_0929(0x31, 0xb4, 0x57, 0xc0);
    f_b8e8_192e(0x44, 0x6b, 0x16, 3);
    f_1d5e_08d7(19);
    f_1d5e_0fe3(0x44, 0x2b, 0x44, 0x2b);
    f_1d5e_0fe3(0x44, 0xa9, 0x44, 0xa9);
    f_b8e8_19e0(0, 0x34, 0x140, 0x64, 0x44, 0x2b, 0x11, 3);
    f_b8e8_19e0(0, 0x64, 0x140, 0xa2, 0x44, 0xab, 0x11, 3);
    memset(n, 0, 13);
    for (i = 1; i <= 16; i = i + 1)
        if (d_3404_0dce[team == d_5d51_d942 ? 0 : 1][i - 1] < 2)
            n[d_3404_1334[team][0][i - 1] - 1]++;
    p4 = n[3] == 2 ? two : three;
    p7 = n[6] == 2 ? two : three;
    p10 = n[9] == 2 ? two : three;
    for (i = 1; i <= 16; i = i + 1) {
        if (d_3404_0dce[team == d_5d51_d942 ? 0 : 1][i - 1] < 2) {
            pos = d_3404_1334[team][0][i - 1];
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
            f_1646_6102(team, i, x - 7, y - 6);
        }
    }
}

void f_b8e8_192e(int cx, int cy, int r, unsigned char colour)
{
    int h, px, py;
    int x;

    px = -r;
    py = 0;
    f_1d5e_08d7(colour + 16);
    for (x = -r; x <= r; x++) {
        h = sqrt(r * r - x * x);
        f_1d5e_0fe3(cx + px, cy + py, cx + x, cy + h);
        f_1d5e_0fe3(cx + px, cy - py, cx + x, cy - h);
        px = x;
        py = h;
    }
}

void f_b8e8_19e0(x1, y1, x2, y2, cx, cy, r, colour)
int x1, y1, x2, y2, cx;
register int cy;
int r;
unsigned char colour;
{
    int h, px, py;
    register int x;

    px = -r;
    py = 0;
    f_1d5e_08d7(colour + 16);
    for (x = -r; x <= r; x++) {
        h = sqrt(r * r - x * x);
        if (cx + x >= x1 && cx + x <= x2) {
            if (cy + py >= y1 && cy + py <= y2 && cy + h >= y1 && cy + h <= y2)
                f_1d5e_0fe3(cx + px, cy + py, cx + x, cy + h);
            if (cy - py >= y1 && cy - py <= y2 && cy - h >= y1 && cy - h <= y2)
                f_1d5e_0fe3(cx + px, cy - py, cx + x, cy - h);
        }
        px = x;
        py = h;
    }
}

void f_b8e8_1b01(char far *s)
{
    float x;

    f_1d5e_1a29();
    f_1d5e_08cc(16);
    f_1d5e_08e2(0x16, 0x5c, 0x12e, 0x70);
    f_1d5e_08cc(20);
    f_1d5e_08e2(0x14, 0x5a, 0x12c, 0x6e);
    f_1d5e_08d7(28);
    f_1d5e_0fe3(0x14, 0x6e, 0x14, 0x5a);
    f_1d5e_0fe3(0x14, 0x5a, 0x12c, 0x5a);
    x = (160 - strlen(s) * 4) / 8.0 + 1;
    f_1646_3c89(x, 12.25, 1, s);
    f_1d5e_0dbd(70);
    f_1d5e_1a2e();
}

void f_b8e8_1bfb(unsigned char team, unsigned char n)
{
    unsigned char bg = 1;
    unsigned char fg;
    char buf[320];
    unsigned char st;

    fg = n % 2 == 0 ? 8 : 14;
    strcpy(buf, "");
    if (n == d_5d51_d92a) {
        strcpy(buf, "Cpt");
        bg = 0;
        fg = 2;
    } else {
        st = d_3404_0dce[team == d_5d51_d942 ? 0 : 1][n - 1];
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
    f_1646_3686(30.375, n + 5.875, bg, fg, 20, buf);
}

char f_b8e8_1d16(unsigned char team)
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
    for (i = 1; i <= 16; i = i + 1)
        if (d_3404_0dce[team == d_5d51_d942 ? 0 : 1][i - 1] < 2)
            cnt[d_3404_1334[team][0][i - 1] - 1]++;
    for (j = 1; j <= 13; j++)
        if (cnt[j - 1] > max[j - 1]) {
            sprintf(buf, "%d %s selected", cnt[j - 1], names[j - 1]);
            f_b8e8_1b01(buf);
            r = 1;
            j = 13;
        }
    if (r == 0 && cnt[10] == 1 && cnt[11] == 1) {
        f_b8e8_1b01("Can't play Sweeper & Anchor man");
        r = 1;
    }
    if (r == 0 && d_3404_0dce[team == d_5d51_d942 ? 0 : 1][d_5d51_d92a - 1] >= 2) {
        f_b8e8_1b01("No captain elected");
        r = 1;
    }
    return r;
}

void f_b8e8_1e9f(void)
{
    unsigned char n = 1;
    unsigned char max;
    unsigned char i;
    char name[40];
    char line[320];
    char items[320];

    f_1d5e_1a24(1);
    if (f_1d5e_0d9c("svgameG8"))
        max = 8;
    else if (f_1d5e_0d9c("svgameG7"))
        max = 7;
    else if (f_1d5e_0d9c("svgameG6"))
        max = 6;
    else if (f_1d5e_0d9c("svgameG5"))
        max = 5;
    else if (f_1d5e_0d9c("svgameG4"))
        max = 4;
    else if (f_1d5e_0d9c("svgameG3"))
        max = 3;
    else if (f_1d5e_0d9c("svgameG2"))
        max = 2;
    else
        max = 1;
    if (max > 1) {
        f_1646_4ba0("Multi-Save");
        f_1646_0b2f(5, "Please enter game number");
        strcpy(items, "Default|");
        for (i = 2; i <= max; i = i + 1) {
            sprintf(line, "Game %d|", i);
            strcat(items, line);
        }
        f_1646_2fa4(8, "", items);
        f_1646_3348(max - 1);
        n = d_5d51_da0a + 1;
    }
    if (n > 1)
        sprintf(name, "G%d", n);
    else
        strcpy(name, "");
    sprintf(d_2414_00a0, "svgame%s", name);
    sprintf(d_2414_0078, "mchfax%s", name);
    sprintf(d_2414_0050, "plhist%s", name);
    sprintf(d_2414_0028, "clrecs%s", name);
    sprintf(d_2414_0000, "%s", name);
}

void f_b8e8_20b3(void)
{
    unsigned char page;
    unsigned char match;
    unsigned char i;
    unsigned char ok;
    unsigned char key[6];
    unsigned char tries;
    char buf[320];

    f_1d5e_1a33();
    tries = 0;
    do {
        f_1646_4ba0("Copy Protection");
        f_1646_3e54(11.625, 5.0, 0, 2, 0, " Refer To Manual ");
        page = f_1d5e_0d6a(36) + 1;
        match = f_1d5e_0d6a(5) + 1;
        f_1646_3c89(5.0, 10.0, 6, "Please enter the result of match");
        sprintf(buf, "%d on page %d of the manual.", match, page);
        f_1646_3c89(5.0, 13.0, 6, buf);
        f_1646_3c89(5.0, 20.0, 1, "Result ?");
        ok = 1;
        for (i = 1; i <= 2; i++) {
            do
                strcpy(key, f_1d5e_0ced());
            while (key[0] < '0' || key[0] > '9');
            f_1646_3c89((i - 1) * 2 + 14, 20.0, 5, key);
            if (i == 1)
                f_1646_3c89(15.0, 20.0, 5, "-");
            if (d_4f37_78aa[page - 1][match - 1][i - 1] != key[0] - '0')
                ok = 0;
        }
        tries++;
    } while (tries < 1 && ok == 0);
    f_1d5e_1a4d();
    if (ok == 0) {
        f_1d5e_1216();
        exit(0);
    }
}
