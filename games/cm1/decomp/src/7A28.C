/* @at 7a28:0000 */
/* @data 5d9c:4d80 */
/* @module */

/* Overlay 4: the match engine's events: goals and their commentary, disallowed goals,
 * penalties and shoot-outs, the score bar and attempts, team strengths and player
 * ratings during the match, the result, and the match statistics screen. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <stdlib.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void draw_match_screen(char attacking);
void draw_score(void);
void draw_clock_box(void);
void print_match_minute(int minute);
void show_commentary(int team, char far *msg);
void clear_commentary(void);
void draw_zone_bar(int home_count, int away_count, int home_col, int away_col);
void away_goals_winner(void);
void disallowed_goal(int team);
void score_goal(int player, char silent, int slot, int team);
void make_goal_commentary(int team);
void penalty_shootout(void);
char shootout_decided(int home_score, int away_score, int home_taken, int away_taken, int kicks);
void pick_penalty_taker(int team);
void take_penalty(int team, int chance, int shootout);
void set_big_match_factor(int team);
unsigned char player_match_strength(int slot, int team);
void compute_team_strengths(int team);
void pick_captain(int team);
void add_home_zone_curve(unsigned char level, unsigned char minute, unsigned char line);
void add_away_zone_curve(unsigned char level, unsigned char minute, unsigned char line);
void add_gate_receipts(int team);
void finish_match_stats(void);
void record_player_ratings();             /* no prototype: 2b9b passes it words, it reads bytes */
int minutes_played(int slot, int team);
void match_stats_screen(int home, int away, char full_time);
void print_team_stats_column(char is_home, int defence, int midfield, int attack, int attempts, float col);

void set_fill_colour(int c);
void fill_rect(int x1, int y1, int x2, int y2);
void set_draw_colour(int c);
void draw_rect(int x1, int y1, int x2, int y2);
void present_screen_rect(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void set_text_opaque(int on);
void select_font(int a);
void draw_text(int x, int y, char far *s);
char far *upper_case(char far *s);
void wait_ticks(int ticks);
int random_below(int n);
void empty_stub(void);
void play_effect_stub(int a);
void draw_text_at(int x, int y, int colour, char far *s);
void draw_text_font2(float x, float y, int colour, char far *s);
void draw_text_box(float x, float y, int bg, int fg, int w, char far *s);
char far *player_short_name(int player);
void new_screen(char far *title);
void pick_shirt_colours(int a, int b, int c);
void init_substitutions(void);
void show_attack_direction(float x, float y);
extern char near *team_names[];
extern char is_second_leg;
extern int disallowed_reason;
extern int current_font_id;
extern int away_goals;
extern int home_goals;
extern int away_won_on_away_goals;
extern int home_won_on_away_goals;
extern int away_attempts;
extern int home_attempts;
extern int away_is_human;
extern int home_is_human;
extern int away_club;
extern int home_club;
extern int match_minute;
extern int opponent_team;
extern int away_first_leg_goals;
extern int home_first_leg_goals;
extern int shirt_bg;
extern int away_team;
extern int home_team;
extern int shirt_fg;
extern int loop_i;
extern int current_week;
extern char far hat_trick_players[];
extern char far disallowed_text[];
extern char far goal_place_text[];
extern char far goal_verb_text[];
extern char far goal_headline[];
extern char far match_period_text[];
extern char far competition_name[];
extern char far venue_name[];
extern char far slot_goals[][13];
extern unsigned char huge player_stats[][1702];
int scorer_chance(int team, int p);
char far *player_full_name(int player);
char far *player_surname(int player);
extern char away_has_keeper;
extern char home_has_keeper;
extern char is_set_piece;
extern char d_5d9c_9b61;
extern char penalty_scored;
extern char in_penalty_shootout;
extern char position_ok;
extern int d_5d9c_9baf;
extern int d_5d9c_9bb1;
extern int d_5d9c_9bb3;
extern int d_5d9c_9dc3;
extern int d_5d9c_9dc5;
extern int d_5d9c_9dc7;
extern int d_5d9c_9dc9;
extern int d_5d9c_9deb;
extern int scorer_slot;
extern int home_keeping;
extern int away_keeping;
extern int away_shootout_goals;
extern int home_shootout_goals;
extern int d_5d9c_9ecf;
extern int d_5d9c_9f51;
extern int selected_team;
extern int cur_player;
extern int loop_j;
extern char far penalty_miss_text[];
extern char far penalty_score_text[];
extern char far club_title_text[];
extern unsigned char far slot_status[][13];
extern int far team_selection[][13];
extern unsigned char huge player_attrs[][1702];
char is_fa_cup_week(int);
char is_rumbelows_match(int, int);
char is_uefa_match(int, int);
char is_cup_winners_match(int, int);
char is_european_cup_match(int, int);
int position_rating(int a, int b, int c);
int position_rating_norm(unsigned char a);
float max_float(float a, float b);
float min_float(float a, float b);
extern int fixture_index;
extern unsigned char d_5d9c_9b9a;
extern unsigned char d_5d9c_9b99;
extern char d_5d9c_9b60;
extern float big_match_factors[];
extern unsigned char d_5d9c_9b98;
extern unsigned char d_5d9c_9b97;
extern int d_5d9c_a02a[];
extern int d_5d9c_9dc1;
extern int d_5d9c_9dbf;
extern int d_5d9c_9dbb;
extern int d_5d9c_9dbd;
extern int d_5d9c_9db9;
extern int d_5d9c_9db7;
extern int d_5d9c_9db5;
extern unsigned char far slot_strengths[][13];
extern unsigned char far team_tactics[][3][13];
extern int far team_manager[];
extern int far club_coaches[];
extern unsigned char far staff_character[];
extern unsigned char far d_2f3c_60a3[];
extern unsigned char far manager_style_formation[];
extern unsigned char far foreign_slot_ratings[][13];
extern float far slot_ratings[][13];
extern unsigned char far character_clash[][10];
char is_human_team(int x);
int max_int(int a, int b);
char is_neutral_venue_match(int a, int b);
extern int d_5d9c_9e67;
extern int d_5d9c_9db3;
extern int d_5d9c_9db1;
extern int d_5d9c_9daf;
extern int d_5d9c_9dad;
extern int d_5d9c_9dab;
extern int d_5d9c_9da9;
extern int d_5d9c_9da7;
extern int d_5d9c_9da5;
extern int d_5d9c_9da3;
extern int d_5d9c_9dfd;
extern int d_5d9c_9da1;
extern float d_5d9c_9ac8;
extern float d_5d9c_9ac4;
extern float d_5d9c_9ac0;
extern float d_5d9c_9abc;
extern int foul_type;
extern int d_5d9c_9bad;
extern int d_5d9c_9bab;
extern int d_5d9c_9e27;
extern int d_5d9c_9eb7;
extern int d_5d9c_9c65;
extern char d_5d9c_9b2b;
extern unsigned char sub_minutes[][2];
extern int derby_factor;
extern int d_5d9c_9df5;
extern int d_5d9c_9df3;
extern int home_defence;
extern int home_midfield;
extern int home_attack_strength;
extern int home_shooting;
extern int d_5d9c_9bb7;
extern int away_defence;
extern int away_midfield;
extern int away_attack_strength;
extern int away_shooting;
extern int d_5d9c_9bb5;
extern unsigned char far d_2f3c_84a7[][60];
extern unsigned char far d_2f3c_83f3[][60];
extern unsigned char far staff_skills[];
extern unsigned char far team_stats[][82];
int foreign_player_rating(int a, int b, int c);
double player_match_rating(int x, int y);
float division_factor(int x);
long max_long(long a, long b);
void far *vm_map(int handle, int page);
extern int d_5d9c_9d9f;
extern int last_ranked_row;
extern int best_league_slot;
extern unsigned char manager_captain[];
extern int captain_slots[];
extern long attendance;
extern int accounts_ems_handle;
extern long (far *accounts_table)[80];
extern int away_attack_wins;
extern int home_attack_wins;
extern int away_attacks;
extern int home_attacks;
extern int away_defence_wins;
extern int home_defence_wins;
extern int d_5d9c_9ebd;
extern float performance_balance;
extern unsigned char far d_2f3c_846b[][60];
extern unsigned char far d_2f3c_83b7[][60];
extern unsigned char far ground_capacity[];
extern int far fixture_table[][2][94];
extern int far penalty_winner[];
int min_int(int a, int b);
void check_match_goals_record(int team, int a, int player, int b);
extern int cur_rating;
extern int d_5d9c_9d9b;
extern int period_end_minute;
extern unsigned char sub_replaced_slot[][2];
extern int far slot_final_ratings[][13];
extern int far player_rating_total[];
extern char far player_flags[][0x6a6];
extern char far record_player_ids[][13][2];
extern char far record_ratings[][13];
extern char far record_marks[][13];
extern char far d_1f3e_49ee[];
extern char far record_team_stats[];
char far *club_name(int x);
void draw_label(float x, float y, int bg, int fg, int w, char far *s);
void draw_text_font1(float x, float y, int colour, char far *s);
void draw_label_font1(float x, float y, int bg, int fg, int w, char far *s);
void tactical_move_menu(int team, char c);
void add_button(int a, float x, float y, int c, int d, int e, char far *s);
void disable_button(int team);
int wait_for_button(int a);
void draw_button(int a, char b);
void wait_for_click(int a);
void print_match_stats(void);
extern int stats_print_handle;
extern char far *stats_print_page;
extern int d_5d9c_9d99;
extern int d_5d9c_9d97;
extern int d_5d9c_9e09;
extern char printer_on;
extern int last_button;
extern int menu_choice;
extern int home_is_cpu;
extern int away_is_cpu;
extern char far match_record[];
extern char far key_text[];
extern char far sub_kind_text[];
extern char far sub_text[];
char far *shirt_number_text(int x);
void swap_bytes(void far *a, void far *b, int n);
extern int cur_y;
extern int row_colour_a;
extern int row_colour_b;
extern int attack_over;
extern int d_5d9c_9e8b;
extern char d_5d9c_9b62;
extern char d_5d9c_9b73;
extern signed char far record_home_captain;
extern signed char far record_away_captain;
extern char far d_1f3e_4120[];
extern char far * far position_names[];

/* the goal commentary: how the ball went in, where it went, and the pairs (verb, place)
 * that do not go together, ended by -1. A '*' is replaced by the keeper's name. */
static char far *goal_verbs[] = {
    "Tapped", "Volleyed", "Headed", "Guided", "Placed", "Side footed", "Driven", "Curled",
    "Chipped", "Thundered", "Flicked", "Lashed", "Hooked", "Scrambled", "Rifled",
    "Hammered", "Glorious strike", "Smashed", "Powered", "Downward header",
    "Bullet header", "Looping header", "Forced", "Rammed", "Despatched",
    "Hit ferociously", "Thumped", "Slotted", "Buried", "Bundled", "Hit first time",
    "Calmly placed", "Clinical strike", "Crashed"
};
static char far *goal_places[] = {
    "past*", "into the net", "into the corner", "into the top corner", "in off a post",
    "in off the bar", "in beyond*", "through a crowd", "under*", "home",
    "into the open net"
};
static char bad_goal_verb_places[] = {
    0, 3, 0, 5, 0, 7, 3, 7, 4, 7, 4, 9, 7, 7, 7, 8, 7, 9, 8, 7, 8, 8, 8, 9, 10, 7, 13, 3,
    16, 8, 16, 9, 19, 7, 19, 8, 19, 9, 20, 7, 20, 8, 20, 9, 21, 7, 21, 8, 21, 9, 22, 3,
    24, 9, 25, 9, 27, 3, 27, 4, 27, 5, 27, 7, 29, 3, 30, 3, 31, 7, 31, 9, 32, 7, 32, 9,
    33, 8, -1
};

void draw_zone_bar(int home_count, int away_count, int home_col, int away_col)
{
    int away_part, home_part;

    away_part = away_count * 38 / (home_count + away_count);
    home_part = 38 - away_part;
    set_fill_colour(16);
    fill_rect(home_col * 36 + 24, 139, home_col * 36 + 31, 177 - home_part);
    fill_rect(away_col * 36 + 168, 139, away_col * 36 + 175, 177 - away_part);
    set_fill_colour(28);
    fill_rect(home_col * 36 + 24, away_part + 139, home_col * 36 + 31, 177);
    fill_rect(away_col * 36 + 168, home_part + 139, away_col * 36 + 175, 177);
}

void draw_clock_box(void)
{
    set_fill_colour(28);
    fill_rect(224, 14, 306, 42);
    set_fill_colour(16);
    fill_rect(226, 16, 304, 40);
    set_draw_colour(22);
    draw_rect(222, 12, 308, 44);
    set_draw_colour(24);
    draw_rect(260, 18, 290, 36);
    draw_text_at(240, 30, 6, "TIME");
    print_match_minute(match_minute);
}

void print_match_minute(int minute)
{
    char buf[80];

    sprintf(buf, "%03d", minute);
    if (current_font_id != 2)
        select_font(2);
    set_draw_colour(18);
    set_fill_colour(16);
    set_text_opaque(1);
    draw_text(264, 34, buf);
    set_text_opaque(0);
}

void disallowed_goal(int team)
{
    char buf[320];

    if (home_is_human + away_is_human > 0) {
        if (team == home_team)
            opponent_team = away_team;
        else
            opponent_team = home_team;
        make_goal_commentary(opponent_team);
        sprintf(buf, "%s FOR %s!", goal_headline, upper_case(team_names[team]));
        show_commentary(team, buf);
        wait_ticks(125);
        sprintf(buf, "%s %s", goal_verb_text, goal_place_text);
        show_commentary(team, upper_case(buf));
        wait_ticks(125);
        show_commentary(team, "BUT IT'S DISALLOWED !");
        wait_ticks(75);
        switch (disallowed_reason = random_below(3)) {
        case 0:
            strcpy(disallowed_text, "The ref saw an infringement");
            break;
        case 1:
            strcpy(disallowed_text, "The linesman flagged for offside");
            break;
        case 2:
            strcpy(disallowed_text, "The linesman saw an infringement");
            break;
        }
        show_commentary(team, upper_case(disallowed_text));
        wait_ticks(75);
        show_commentary(home_team, match_period_text);
    }
}

void away_goals_winner(void)
{
    int team;
    char buf[320];

    if (away_goals > home_first_leg_goals) {
        team = away_team;
        away_won_on_away_goals = 1;
    }
    if (away_goals < home_first_leg_goals) {
        team = home_team;
        home_won_on_away_goals = 1;
    }
    if (home_is_human + away_is_human > 0) {
        sprintf(buf, "%s win on away goals!", (char far *)team_names[team]);
        show_commentary(team, buf);
    }
}

void score_goal(player, silent, slot, team)
int player; char silent; int slot; register int team;   /* old-style: team in SI, slot in DI */
{
    char buf[320];

    if (team < 80 && current_week > 4)
        player_stats[1][player]++;
    if (home_is_human + away_is_human > 0) {
        if (silent == 0) {
            play_effect_stub(0);
            if (team == home_team)
                opponent_team = away_team;
            else
                opponent_team = home_team;
            make_goal_commentary(opponent_team);
            sprintf(buf, "%s FOR %s!", goal_headline, upper_case(team_names[team]));
            show_commentary(team, buf);
            wait_ticks(125);
            sprintf(buf, "%s %s", goal_verb_text, goal_place_text);
            show_commentary(team, upper_case(buf));
            wait_ticks(125);
            if (team < 80)
                sprintf(buf, "SCORED BY %s", upper_case(player_short_name(player)));
            else
                sprintf(buf, "SCORED BY THEIR NO.%d", slot + (slot == 12) + 1);
            show_commentary(team, buf);
            wait_ticks(125);
            show_commentary(home_team, match_period_text);
        }
        draw_score();
        empty_stub();
        play_effect_stub(2);
    }
    if (team == home_team) {
        slot_goals[0][slot]++;
        if (slot_goals[0][slot] == 3 && team < 80) {
            sprintf(buf, "%04d", player);
            strcat(hat_trick_players, buf);
        }
    } else {
        slot_goals[1][slot]++;
        if (slot_goals[1][slot] == 3 && team < 80) {
            sprintf(buf, "%04d", player);
            strcat(hat_trick_players, buf);
        }
    }
    init_substitutions();
}

void draw_match_screen(char attacking)
{
    char buf[320];

    pick_shirt_colours(home_club, home_club, away_club);
    new_screen("");
    sprintf(buf, " %s", competition_name);
    draw_text_box(3.0, 2.0, -shirt_bg, shirt_fg, 165, buf);
    sprintf(buf, " FROM %s", upper_case(venue_name));
    draw_text_box(3.0, 4.5, -shirt_bg, shirt_fg, 165, buf);
    draw_clock_box();
    show_commentary(home_team, match_period_text);
    sprintf(buf, " %s ", upper_case(team_names[home_team]));
    draw_text_box(3.0, 12.0, -shirt_bg, shirt_fg, 0, buf);
    pick_shirt_colours(away_club, home_club, away_club);
    sprintf(buf, " %s ", upper_case(team_names[away_team]));
    draw_text_box(21.0, 12.0, -shirt_bg, shirt_fg, 0, buf);
    draw_score();
    draw_text_at(30, 132, 1, "ATTEMPTS:");
    sprintf(buf, "%d", home_attempts);
    draw_text_at(96, 132, 5, buf);
    draw_text_at(174, 132, 1, "ATTEMPTS:");
    sprintf(buf, "%d", away_attempts);
    draw_text_at(240, 132, 5, buf);
    set_draw_colour(17);
    for (loop_i = 0; loop_i <= 2; loop_i++) {
        draw_rect(loop_i * 36 + 23, 138, loop_i * 36 + 32, 178);
        draw_rect(loop_i * 36 + 167, 138, loop_i * 36 + 176, 178);
    }
    draw_text_at(28, 188, 6, "DEF   MID   ATT         DEF   MID   ATT");
    if (attacking == 1)
        show_attack_direction(3.5, 21.5);
    else if (attacking == 2)
        show_attack_direction(21.5, 3.5);
}

void draw_score(void)
{
    char buf[320];

    present_screen_rect(134, 91, 153, 106);
    present_screen_rect(278, 91, 297, 106);
    sprintf(buf, "%d", home_goals);
    draw_text_font2(18.0, 12.0, 1, buf);
    sprintf(buf, "%d", away_goals);
    draw_text_font2(36.0, 12.0, 1, buf);
    if (is_second_leg != 0) {
        present_screen_rect(223, 46, 277, 52);
        sprintf(buf, "AGG %d-%d", home_goals + home_first_leg_goals, away_goals + away_first_leg_goals);
        draw_text_at(232, 52, 3, buf);
    }
}

void show_commentary(int team, char far *msg)
{
    char buf[320];

    if (team == home_team)
        pick_shirt_colours(home_club, home_club, away_club);
    else
        pick_shirt_colours(away_club, home_club, away_club);
    clear_commentary();
    sprintf(buf, " %s ", upper_case(msg));
    draw_text_box(3.0, 8.5, -shirt_bg, shirt_fg, 0, buf);
}

void clear_commentary(void)
{
    present_screen_rect(0x10, 0x38, 0x138, 0x50);
}

void make_goal_commentary(int team)
{
    int verb;
    int bad_place;
    char buf[40];
    int i;
    int place;
    int bad_verb;

    do {
        position_ok = -1;
        verb = random_below(34);
        if ((home_has_keeper == 0 && team == home_team) ||
            (away_has_keeper == 0 && team == away_team))
            place = 10;
        else
            do {
                place = random_below(10);
            } while (random_below(3) && place >= 3 && place <= 5);
        i = 0;
        do {
            bad_verb = bad_goal_verb_places[i++];
            if (bad_verb != -1) {
                bad_place = bad_goal_verb_places[i++];
                if (verb == bad_verb && place == bad_place) {
                    position_ok = 0;
                    bad_verb = -1;
                }
            }
        } while (bad_verb != -1);
        if (position_ok != 0) {
            strcpy(goal_verb_text, goal_verbs[verb]);
            strcpy(goal_place_text, goal_places[place]);
            if (goal_place_text[strlen(goal_place_text) - 1] == '*') {
                if (team < 80)
                    strcpy(buf, player_surname(team_selection[team][0]));
                else
                    strcpy(buf, "their 'keeper");
                goal_place_text[strlen(goal_place_text) - 1] = ' ';
                strcat(goal_place_text, buf);
            }
            if (strlen(goal_verb_text) + strlen(goal_place_text) > 32)
                position_ok = 0;
        }
    } while (!position_ok);
    if (place < 10) {
        d_5d9c_9b61 = -1;
        switch (verb) {
        case 0: case 5: case 10: case 12: case 13: case 22: case 29:
            d_5d9c_9b61 = 0;
        }
        if (d_5d9c_9b61) {
            switch (place) {
            case 1: case 4: case 5: case 7: case 8:
                d_5d9c_9b61 = 0;
            }
        }
        if (is_set_piece)
            strcpy(goal_headline, "MAGNIFICENT GOAL");
        else if (d_5d9c_9b61 && (!random_below(5) || verb == 16)) {
            if (random_below(2) == 0)
                strcpy(goal_headline, "BRILLIANT GOAL");
            else
                strcpy(goal_headline, "SUPERB GOAL");
        } else
            strcpy(goal_headline, "GOAL");
    }
}

void penalty_shootout(void)
{
    if (home_is_human + away_is_human > 0)
        show_commentary(home_team, match_period_text);
    d_5d9c_9dc9 = 1;
    d_5d9c_9bb3 = 0;
    d_5d9c_9bb1 = 0;
    d_5d9c_9baf = 5;
    while (shootout_decided(home_shootout_goals, away_shootout_goals, d_5d9c_9bb3, d_5d9c_9bb1, d_5d9c_9baf) == 0) {
        take_penalty(home_team, away_keeping, 1);
        d_5d9c_9bb3++;
        if (penalty_scored) {
            home_shootout_goals++;
            home_goals++;
            if (home_is_human + away_is_human > 0)
                draw_score();
        }
        if (shootout_decided(home_shootout_goals, away_shootout_goals, d_5d9c_9bb3, d_5d9c_9bb1, d_5d9c_9baf) == 0) {
            take_penalty(away_team, home_keeping, 1);
            d_5d9c_9bb1++;
            if (penalty_scored) {
                away_shootout_goals++;
                away_goals++;
                if (home_is_human + away_is_human > 0)
                    draw_score();
            }
        }
        if (home_shootout_goals == away_shootout_goals && d_5d9c_9bb3 == d_5d9c_9baf)
            d_5d9c_9baf++;
    }
    if (home_is_human + away_is_human > 0) {
        selected_team = home_shootout_goals > away_shootout_goals ? home_team : away_team;
        sprintf(club_title_text, "%s win the match! ", (char far *)team_names[selected_team]);
        show_commentary(selected_team, club_title_text);
    }
    for (loop_i = 0; loop_i <= 12; loop_i++)
        for (loop_j = 0; loop_j <= 1; loop_j++)
            if (slot_status[loop_j][loop_i] == 7)
                slot_status[loop_j][loop_i] = 0;
}

char shootout_decided(int home_score, int away_score, int home_taken, int away_taken, int kicks)
{
    if (home_score != away_score) {
        if (home_score + (kicks - home_taken) < away_score)
            return -1;
        if (away_score + (kicks - away_taken) < home_score)
            return -1;
    }
    return 0;
}

void pick_penalty_taker(int team)
{
    for (;;) {
        d_5d9c_9ecf = 0;
        cur_player = 1700;
        scorer_slot = -1;
        for (loop_j = 0; loop_j <= 12; loop_j++) {
            if (slot_status[team == away_team][loop_j] < 2) {
                scorer_chance(team, loop_j);
                if (d_5d9c_9deb > d_5d9c_9ecf) {
                    d_5d9c_9ecf = d_5d9c_9deb;
                    cur_player = team_selection[team][loop_j];
                    scorer_slot = loop_j;
                }
            }
        }
        if (scorer_slot != -1)
            break;
        for (loop_j = 0; loop_j <= 12; loop_j++)
            if (slot_status[team == away_team][loop_j] == 7)
                slot_status[team == away_team][loop_j] = 0;
    }
}

void take_penalty(int team, int chance, int shootout)
{
    char buf[320];

    pick_penalty_taker(team);
    d_5d9c_9dc7 = team == home_team ? away_team : home_team;
    penalty_scored = 0;
    if (home_is_human + away_is_human > 0) {
        if (shootout) {
            sprintf(club_title_text, "%s's penalty....", (char far *)team_names[team]);
            show_commentary(team, club_title_text);
        } else {
            sprintf(buf, "%s PENALTY!", (char far *)team_names[team]);
            show_commentary(team, upper_case(buf));
        }
        wait_ticks(125);
        if (team < 80)
            sprintf(club_title_text, "%s steps up...", player_full_name(cur_player));
        else
            sprintf(club_title_text, "Their No.%d steps up...", scorer_slot + 1);
        show_commentary(team, club_title_text);
        wait_ticks(random_below(3) * 30 + 40);
    }
    d_5d9c_9f51 = random_below(450);
    if (random_below(chance) < d_5d9c_9f51) {
        if (d_5d9c_9f51 % 12 > 0) {
            d_5d9c_9dc5 = random_below(in_penalty_shootout + 5);
            switch (d_5d9c_9dc5) {
            case 0: strcpy(penalty_score_text, "blasts it home"); break;
            case 1: strcpy(penalty_score_text, "finds the corner"); break;
            case 2: strcpy(penalty_score_text, "scores easily"); break;
            case 3: strcpy(penalty_score_text, "buries it"); break;
            case 4:
                sprintf(penalty_score_text, "makes it %d-%d", home_goals + (team == home_team),
                        away_goals + (team == away_team));
                break;
            }
            if (team < 80)
                sprintf(club_title_text, "And %s %s !", player_surname(cur_player), penalty_score_text);
            else
                sprintf(club_title_text, "And he %s !", penalty_score_text);
            penalty_scored = -1;
        } else {
            d_5d9c_9dc3 = random_below(4);
            switch (d_5d9c_9dc3) {
            case 0: strcpy(penalty_miss_text, "blasts it over"); break;
            case 1: strcpy(penalty_miss_text, "puts it wide"); break;
            case 2: strcpy(penalty_miss_text, "hits the post"); break;
            case 3: strcpy(penalty_miss_text, "hits the bar"); break;
            }
            if (team < 80)
                sprintf(club_title_text, "But %s %s !", player_surname(cur_player), penalty_miss_text);
            else
                sprintf(club_title_text, "But he %s !", penalty_miss_text);
        }
    } else if (d_5d9c_9dc7 < 80) {
        sprintf(club_title_text, "But %s saves it !", player_surname(team_selection[d_5d9c_9dc7][0]));
        player_attrs[16][team_selection[d_5d9c_9dc7][0]] = player_attrs[16][team_selection[d_5d9c_9dc7][0]] + 10;
    } else
        strcpy(club_title_text, "But the 'keeper saves it !");
    if (home_is_human + away_is_human > 0) {
        show_commentary(team, club_title_text);
        wait_ticks(100);
    }
    if (shootout)
        slot_status[team == away_team][scorer_slot] = 7;
    else if (home_is_human + away_is_human > 0)
        show_commentary(home_team, match_period_text);
}

void set_big_match_factor(int team)
{
    float factor;

    factor = 1.0;
    if (is_fa_cup_week(current_week) || is_rumbelows_match(current_week, fixture_index + 1)) {
        d_5d9c_9b9a = home_team / 20;
        d_5d9c_9b99 = away_team / 20;
        d_5d9c_9b60 = (team == home_team && d_5d9c_9b9a > d_5d9c_9b99)
                   || (team == away_team && d_5d9c_9b9a < d_5d9c_9b99);
        factor = d_5d9c_9b60 ? 1.1 : 1.05;
    } else if (is_uefa_match(current_week, fixture_index + 1)
            || is_cup_winners_match(current_week, fixture_index + 1)
            || is_european_cup_match(current_week, fixture_index + 1)) {
        factor = 1.1;
    }
    big_match_factors[team == away_team] = factor;
}

unsigned char player_match_strength(int slot, int team)
{
    d_5d9c_9b98 = team == away_team ? 1 : 0;
    if (slot_strengths[d_5d9c_9b98][slot] == 0) {
        d_5d9c_9dc1 = d_5d9c_a02a[d_5d9c_9b98];
        if (team < 80) {
            d_5d9c_9b97 = team_tactics[team][0][slot];
            d_5d9c_9dbf = team_manager[team];
            cur_player = team_selection[team][slot];
            d_5d9c_9dbb = player_attrs[16][cur_player];
            d_5d9c_9dbd = club_coaches[team];
            if (d_5d9c_9dbd == 650) {
                d_5d9c_9db7 = d_5d9c_9dbb * 0.8;
            } else {
                d_5d9c_9db9 = (1 - (character_clash[staff_character[d_5d9c_9dbf]][staff_character[d_5d9c_9dbd]] - 5) * 0.05)
                            * d_2f3c_60a3[d_5d9c_9dbd];
                d_5d9c_9db7 = (1 - (character_clash[player_stats[17][cur_player]][staff_character[d_5d9c_9dbd]] - 5) * 0.05)
                            * ((d_5d9c_9dbb * 2 + d_5d9c_9db9) / 3.0);
            }
            d_5d9c_9db7 = (max_float(min_float(d_5d9c_9db7, d_5d9c_9dbb * 1.25), d_5d9c_9dbb * 0.75) * 0.4
                           + d_5d9c_9dc1) / 5.0;
            d_5d9c_9db5 = position_rating(d_5d9c_9b97, cur_player, manager_style_formation[team_manager[team]] / 16);
            if (position_rating_norm(d_5d9c_9b97) >= d_5d9c_9db5)
                d_5d9c_9db7 = d_5d9c_9db7 * d_5d9c_9db5 / position_rating_norm(d_5d9c_9b97);
            else
                d_5d9c_9db7 = (d_5d9c_9db5 / (position_rating_norm(d_5d9c_9b97) * 2.0) + 0.5) * d_5d9c_9db7;
        } else {
            d_5d9c_9db7 = (foreign_slot_ratings[team == 81][slot] * 4 + d_5d9c_9dc1) / 5;
        }
        d_5d9c_9db7 = d_5d9c_9db7 * big_match_factors[d_5d9c_9b98];
        slot_strengths[d_5d9c_9b98][slot] = d_5d9c_9db7 * 0.35 + 11.0;
        slot_ratings[d_5d9c_9b98][slot] = max_float(min_float(d_5d9c_9db7 * 0.25 + 3.0, 8.0), 3.0);
    }
    return slot_strengths[d_5d9c_9b98][slot];
}

void compute_team_strengths(team)
register int team;
{
    int midfield;
    unsigned char sub_minute;
    unsigned char level;
    float role_bias;
    float extra1;
    float extra2;
    float bonus;
    int j, i;

    d_5d9c_9e67 = 0;
    d_5d9c_9db3 = 0;
    midfield = 0;
    d_5d9c_9db1 = 0;
    d_5d9c_9f51 = 0;
    d_5d9c_9daf = 0;
    d_5d9c_9dad = 0;
    d_5d9c_9dab = 0;
    d_5d9c_9da9 = 0;
    d_5d9c_9da7 = 0;
    d_5d9c_9da5 = 0;
    d_5d9c_9da3 = 0;
    d_5d9c_9dfd = 0;
    d_5d9c_9da1 = 0;
    d_5d9c_9ac8 = 0;
    d_5d9c_9ac4 = 0;
    foul_type = 400;
    d_5d9c_9bad = 750;
    pick_captain(team);
    if (team == home_team) {
        for (i = 0; i < 3; i++)
            for (j = 0; j < 60; j++)
                d_2f3c_84a7[i][j] = 0;
    } else {
        for (i = 0; i < 3; i++)
            for (j = 0; j < 60; j++)
                d_2f3c_83f3[i][j] = 0;
    }
    for (loop_j = 0; loop_j <= 12; loop_j++) {
        if (slot_status[team == away_team][loop_j] < 2) {
            unsigned char role;

            d_5d9c_9e27 = player_match_strength(loop_j, team);
            d_5d9c_9eb7 = team_tactics[team][0][loop_j];
            role = team_tactics[team][2][loop_j];
            role_bias = (role == 1) * -0.25 + (role == 2) * 0.25;
            extra1 = 0;
            extra2 = 0;
            if (team < 80) {
                float power;

                d_5d9c_9c65 = team_selection[team][loop_j];
                d_5d9c_9ac8 = (j = player_attrs[6][d_5d9c_9c65]) * j / 2000.0;
                d_5d9c_9ac4 = (j = player_attrs[7][d_5d9c_9c65]) * j / 2000.0;
                if (d_5d9c_9eb7 == 7) {
                    extra1 = (j = player_attrs[1][d_5d9c_9c65]) * j / 1000.0;
                    extra2 = (j = player_attrs[2][d_5d9c_9c65]) * j / 1000.0;
                }
                bonus = (j = player_attrs[12][d_5d9c_9c65]) * j / 2000.0;
                level = max_int((int)(player_attrs[21][d_5d9c_9c65] / 100.0 * player_attrs[22][d_5d9c_9c65]), 1);
                foul_type -= player_attrs[11][d_5d9c_9c65];
                j = player_attrs[5][d_5d9c_9c65];
                power = player_attrs[16][d_5d9c_9c65] / 100.0 * (j * j / 100.0);
                d_5d9c_9bab = power * power * power;
            } else {
                if (team == home_team)
                    d_5d9c_9b2b = home_club >= 480 ? -1 : 0;
                else
                    d_5d9c_9b2b = away_club >= 480 ? -1 : 0;
                d_5d9c_9ac8 = d_5d9c_9b2b ? 0.095 : 0.1;
                d_5d9c_9ac4 = d_5d9c_9b2b ? 0.095 : 0.1;
                if (d_5d9c_9eb7 == 7) {
                    extra1 = d_5d9c_9b2b ? 0.095 : 0.1;
                    extra2 = d_5d9c_9b2b ? 0.095 : 0.1;
                }
                bonus = d_5d9c_9b2b ? 0.095 : 0.1;
                level = d_5d9c_9b2b ? 5 : 10;
                foul_type -= 16;
                d_5d9c_9bab = random_below(d_5d9c_9b2b ? 100 : 400);
            }
            if (loop_j > 10)
                sub_minute = sub_minutes[team == away_team][loop_j == 12];
            else
                sub_minute = 0;
            if (d_5d9c_9eb7 == 1 && d_5d9c_9dfd == 0) {
                d_5d9c_9e67 = (bonus + 3.95) * d_5d9c_9e27 + d_5d9c_9e67;
                d_5d9c_9dfd = 1;
                d_5d9c_9bab = 0;
            }
            if (d_5d9c_9eb7 == 11 && d_5d9c_9da1 == 0) {
                d_5d9c_9e67 = (bonus + 1.45) * d_5d9c_9e27 + d_5d9c_9e67;
                d_5d9c_9db3 = (bonus + 2.95) * d_5d9c_9e27 + d_5d9c_9db3;
                midfield = (bonus + 0.45) * d_5d9c_9e27 + midfield;
                if (team == home_team)
                    add_home_zone_curve(level, sub_minute, 0);
                else
                    add_away_zone_curve(level, sub_minute, 0);
                d_5d9c_9da1 = 1;
                d_5d9c_9bab /= 4;
            }
            if (d_5d9c_9eb7 > 1 && d_5d9c_9eb7 < 5) {
                d_5d9c_9e67 = (bonus + 0.95) * d_5d9c_9e27 + d_5d9c_9e67;
                d_5d9c_9db3 = (1.95 - role_bias + bonus) * d_5d9c_9e27 + d_5d9c_9db3;
                midfield = (role_bias + 0.95 + bonus) * d_5d9c_9e27 + midfield;
                d_5d9c_9f51 = (d_5d9c_9ac4 + 0.95) * d_5d9c_9e27 + d_5d9c_9f51;
                if (team == home_team)
                    add_home_zone_curve(level, sub_minute, 0);
                else
                    add_away_zone_curve(level, sub_minute, 0);
                d_5d9c_9bab = d_5d9c_9bab / (4.0 - role_bias * 2.0);
            }
            if (d_5d9c_9eb7 > 4 && d_5d9c_9eb7 < 8) {
                d_5d9c_9db3 = (bonus + 0.95) * d_5d9c_9e27 + d_5d9c_9db3;
                midfield = (1.75 - role_bias + extra1 + extra2 + bonus) * d_5d9c_9e27 + midfield;
                d_5d9c_9db1 = (role_bias + 0.8 + d_5d9c_9ac8 + bonus) * d_5d9c_9e27 + d_5d9c_9db1;
                d_5d9c_9f51 = (d_5d9c_9ac4 + 1.95) * d_5d9c_9e27 + d_5d9c_9f51;
                if (team == home_team)
                    add_home_zone_curve(level, sub_minute, 1);
                else
                    add_away_zone_curve(level, sub_minute, 1);
                d_5d9c_9bab = d_5d9c_9bab / (2.0 - role_bias * 2.0);
            }
            if (d_5d9c_9eb7 > 7 && d_5d9c_9eb7 < 11) {
                midfield = (0.95 - role_bias + bonus) * d_5d9c_9e27 + midfield;
                d_5d9c_9db1 = (role_bias + 1.8 + d_5d9c_9ac8 + bonus) * d_5d9c_9e27 + d_5d9c_9db1;
                d_5d9c_9f51 = (d_5d9c_9ac4 + 3.95) * d_5d9c_9e27 + d_5d9c_9f51;
                if (team == home_team)
                    add_home_zone_curve(level, sub_minute, 2);
                else
                    add_away_zone_curve(level, sub_minute, 2);
            }
            d_5d9c_9bad = max_int(3, d_5d9c_9bad - d_5d9c_9bab);
            switch (d_5d9c_9eb7) {
            case 2:
                d_5d9c_9daf++;
                break;
            case 3:
                d_5d9c_9dad++;
                break;
            case 4:
                d_5d9c_9dab++;
                break;
            case 5:
            case 8:
                d_5d9c_9da9++;
                break;
            case 6:
            case 9:
                d_5d9c_9da7++;
                break;
            case 7:
                d_5d9c_9da5++;
                break;
            case 10:
                d_5d9c_9da3++;
            }
        }
    }
    d_5d9c_9db3 += (d_5d9c_9daf != 1) * 15 + (d_5d9c_9dad != 1) * 15 + (d_5d9c_9dab < 1) * 15;
    midfield += (d_5d9c_9daf != 1) * 15 + (d_5d9c_9dad != 1) * 15 + (d_5d9c_9dab < 1) * 15
        + (d_5d9c_9da9 == 0 || d_5d9c_9da9 > 2) * 15 + (d_5d9c_9da7 == 0 || d_5d9c_9da7 > 2) * 15
        + (d_5d9c_9da5 == 0 || d_5d9c_9da5 > 3) * 15 + (d_5d9c_9da3 == 0 || d_5d9c_9da3 > 3) * 15;
    d_5d9c_9db1 += (d_5d9c_9da9 == 0 || d_5d9c_9da9 > 2) * 15 + (d_5d9c_9da7 == 0 || d_5d9c_9da7 > 2) * 15
        + (d_5d9c_9da5 == 0 || d_5d9c_9da5 > 3) * 15 + (d_5d9c_9da3 == 0 || d_5d9c_9da3 > 3) * 15;
    d_5d9c_9f51 += (d_5d9c_9da9 == 0 || d_5d9c_9da9 > 2) * 30 + (d_5d9c_9da7 == 0 || d_5d9c_9da7 > 2) * 30
        + (d_5d9c_9da5 == 0 || d_5d9c_9da5 > 3) * 30 + (d_5d9c_9da3 == 0 || d_5d9c_9da3 > 3) * 30;
    if (d_5d9c_9dab > 2 && d_5d9c_9da1 == 1 || d_5d9c_9dab > 3) {
        d_5d9c_9db3 -= (d_5d9c_9dab + d_5d9c_9da1 - 3) * 15;
        midfield -= (d_5d9c_9dab + d_5d9c_9da1 - 3) * 15;
    }
    d_5d9c_9e67 = d_5d9c_9e67 * 1.25;
    if (team < 80) {
        if (is_human_team(team) == 0) {
            float power;

            power = staff_skills[team_manager[team]] / 10.0;
            d_5d9c_9ac0 = power * power / 25000.0;
        } else
            d_5d9c_9ac0 = 0;
    } else
        d_5d9c_9ac0 = 0.01;
    if (team == home_team) {
        d_5d9c_9df5 = foul_type;
        if (is_neutral_venue_match(current_week, fixture_index + 1) == 0)
            d_5d9c_9abc = min_float(max_float(
                1.07 - derby_factor / 1000.0
                - (is_uefa_match(current_week, fixture_index + 1) || is_cup_winners_match(current_week, fixture_index + 1)
                   || is_european_cup_match(current_week, fixture_index + 1)) * 0.02
                + (is_fa_cup_week(current_week) || is_rumbelows_match(current_week, fixture_index + 1)) * 0.02,
                1.0), 1.11);
        else
            d_5d9c_9abc = 1.0;
        d_5d9c_9abc = (team_stats[0][home_team] - 8.5) / 300.0 + d_5d9c_9ac0 + d_5d9c_9abc;
        home_has_keeper = d_5d9c_9dfd == 1 ? -1 : 0;
        home_keeping = d_5d9c_9e67 * d_5d9c_9abc;
        home_defence = d_5d9c_9db3 * d_5d9c_9abc;
        home_midfield = midfield * d_5d9c_9abc;
        home_attack_strength = d_5d9c_9db1 * d_5d9c_9abc;
        home_shooting = d_5d9c_9f51 * d_5d9c_9abc;
        d_5d9c_9bb7 = d_5d9c_9bad;
    } else {
        d_5d9c_9abc = (team_stats[0][away_team] - 8.5) / 300.0 + 1.0 + d_5d9c_9ac0;
        d_5d9c_9df3 = foul_type;
        away_has_keeper = d_5d9c_9dfd == 1 ? -1 : 0;
        away_keeping = d_5d9c_9e67 * d_5d9c_9abc;
        away_defence = d_5d9c_9db3 * d_5d9c_9abc;
        away_midfield = midfield * d_5d9c_9abc;
        away_attack_strength = d_5d9c_9db1 * d_5d9c_9abc;
        away_shooting = d_5d9c_9f51 * d_5d9c_9abc;
        d_5d9c_9bb5 = d_5d9c_9bad;
    }
}

void pick_captain(int team)
{
    char ok;

    d_5d9c_9d9f = is_human_team(team) ? 12 : 10;
    last_ranked_row = 0;
    for (loop_j = 0; loop_j <= d_5d9c_9d9f; loop_j++) {
        if (slot_status[team == away_team][loop_j] < 2) {
            if (team > 79) {
                best_league_slot = team_tactics[team][0][loop_j];
                d_5d9c_9dc1 = foreign_player_rating(loop_j, team, best_league_slot);
                ok = -1;
            } else if (is_human_team(team) == 0) {
                d_5d9c_9dc1 = player_match_rating(team_selection[team][loop_j],
                                          team_tactics[team][0][loop_j]);
                ok = -1;
            } else {
                d_5d9c_9dc1 = player_match_rating(team_selection[team][loop_j],
                                          team_tactics[team][0][loop_j]);
                ok = manager_captain[team_manager[team]] - 1 == loop_j;
            }
            if (ok && d_5d9c_9dc1 > last_ranked_row) {
                last_ranked_row = d_5d9c_9dc1;
                captain_slots[team == away_team] = loop_j + 1;
            }
        }
    }
    captain_slots[team == away_team ? 3 : 2] = last_ranked_row;
}

void add_home_zone_curve(unsigned char level, unsigned char minute, unsigned char line)
{
    int base;

    base = level * 3 + minute + 57;
    for (loop_i = base; loop_i <= 119; loop_i++)
        d_2f3c_846b[line][loop_i] = d_2f3c_846b[line][loop_i] + (loop_i - base) / 4;
}

void add_away_zone_curve(unsigned char level, unsigned char minute, unsigned char line)
{
    int base;

    base = level * 3 + minute + 57;
    for (loop_i = base; loop_i <= 119; loop_i++)
        d_2f3c_83b7[line][loop_i] = d_2f3c_83b7[line][loop_i] + (loop_i - base) / 4;
}

void add_gate_receipts(int team)
{
    float rate;
    long receipts;

    switch (home_team / 20) {
    case 1:
        rate = 6.5;
        break;
    case 2:
    case 3:
        rate = 6.0;
        break;
    default:
        rate = 8.0;
    }
    receipts = max_long((long)(attendance - ground_capacity[home_team] * 1000
                                         / (division_factor(home_team) * 4.0)), 0L) * rate;
    if (is_neutral_venue_match(current_week, fixture_index + 1) || (current_week == 91 && fixture_index > 0))
        receipts = receipts / 2;
    else if (is_uefa_match(current_week, fixture_index + 1) || is_cup_winners_match(current_week, fixture_index + 1)
             || is_european_cup_match(current_week, fixture_index + 1))
        receipts = team == away_team ? 0 : receipts;
    else
        receipts = receipts * (team == away_team ? 0.25 : 0.75);
    accounts_table = vm_map(accounts_ems_handle, 1);
    (*accounts_table)[team] += receipts;
}

void finish_match_stats(void)
{
    int home_def, home_mid, home_att, away_def, away_mid, away_att;
    int home_ratings, home_play;
    int away_play;
    float ratio;

    fixture_table[fixture_index][0][current_week] = home_club * 32 + home_goals - home_shootout_goals;
    fixture_table[fixture_index][1][current_week] = away_club * 32 + away_goals - away_shootout_goals;
    if (in_penalty_shootout != 0)
        penalty_winner[fixture_index] = away_shootout_goals > home_shootout_goals ? 2 : 1;
    home_def = (long)home_defence_wins * 100 / (home_defence_wins + away_attack_wins);
    home_mid = (long)home_attacks * 100 / (home_attacks + away_attacks);
    home_att = (long)home_attack_wins * 100 / (home_attack_wins + away_defence_wins);
    away_def = (long)away_defence_wins * 100 / (away_defence_wins + home_attack_wins);
    away_mid = (long)away_attacks * 100 / (home_attacks + away_attacks);
    away_att = (long)away_attack_wins * 100 / (away_attack_wins + home_defence_wins);
    home_ratings = 0;
    d_5d9c_9ebd = 0;
    for (loop_j = 0; loop_j <= 10; loop_j++) {
        home_ratings = home_ratings + slot_ratings[0][loop_j];
        d_5d9c_9ebd = d_5d9c_9ebd + slot_ratings[1][loop_j];
    }
    home_play = home_attempts * 8 + home_def + home_mid + home_att;
    away_play = away_attempts * 8 + away_def + away_mid + away_att;
    home_play += (home_goals - home_shootout_goals) * 20
         + ((home_goals - home_shootout_goals) - (away_goals - away_shootout_goals)) * 8;
    away_play += (away_goals - away_shootout_goals) * 20
         + ((away_goals - away_shootout_goals) - (home_goals - home_shootout_goals)) * 8;
    ratio = (float)home_ratings / d_5d9c_9ebd / ((float)home_play / away_play);
    performance_balance = ratio > 1 ? ratio * 0.75 - 0.75 : ratio * 4.5 - 3.0;
    record_player_ratings(home_team, home_def, home_mid, home_att, home_attempts);
    record_player_ratings(away_team, away_def, away_mid, away_att, away_attempts);
}

void record_player_ratings(int team, char defence, char midfield, char attack, char attempts)
{
    int minutes;
    char status;
    long far *rec;

    for (loop_j = 0; loop_j <= 12; loop_j++) {
        if (team < 80)
            cur_player = team_selection[team][loop_j];
        else
            cur_player = team_tactics[team][0][loop_j] + 1700;
        status = slot_status[team == away_team][loop_j];
        if (status != 4 && minutes_played(loop_j, team) > 4) {
            if (slot_final_ratings[team == away_team][loop_j] == 0 || status == 0 || status == 1) {
                cur_rating = (team == home_team ? slot_ratings[0][loop_j] - performance_balance
                               : slot_ratings[1][loop_j] + performance_balance) + 0.5;
                cur_rating = min_int(max_int(1, cur_rating), 10);
                slot_final_ratings[team == away_team][loop_j] = cur_rating;
            } else
                cur_rating = slot_final_ratings[team == away_team][loop_j];
            if (period_end_minute == -1 && team < 80 && current_week > 4) {
                player_rating_total[cur_player] += cur_rating;
                player_stats[22][cur_player] += cur_rating;
                if (player_stats[3][cur_player] > cur_rating || player_stats[3][cur_player] == 0)
                    player_stats[3][cur_player] = cur_rating;
                if (player_stats[4][cur_player] < cur_rating || player_stats[4][cur_player] == 0)
                    player_stats[4][cur_player] = cur_rating;
                player_stats[0][cur_player]++;
                player_stats[21][cur_player]++;
                if (current_week > 4 && player_attrs[21][cur_player] >= 80) {
                    minutes = minutes_played(loop_j, team);
                    if (player_flags[0][cur_player] == 0)
                        player_attrs[21][cur_player] = max_int(0, player_attrs[21][cur_player]
                            - max_int(abs(28 - player_attrs[17][cur_player]) / 2, 2) * (minutes / 90));
                }
                if (5 - team / 20 + (team > 59) > cur_rating)
                    player_flags[15][cur_player] = -1;
                if (team == home_team) {
                    d_5d9c_9d9b = slot_goals[0][loop_j];
                    opponent_team = away_club;
                } else {
                    d_5d9c_9d9b = slot_goals[1][loop_j];
                    opponent_team = home_club;
                }
                check_match_goals_record(team, opponent_team, cur_player, d_5d9c_9d9b);
            }
        } else
            cur_rating = 0;
        if (team == home_team) {
            record_player_ids[0][loop_j][0] = cur_player >> 8;
            record_player_ids[0][loop_j][1] = cur_player;
            record_ratings[0][loop_j] = cur_rating;
            if (slot_status[team == away_team][loop_j] == 2)
                record_marks[0][loop_j] = 1;
            else if (slot_status[team == away_team][loop_j] == 3 ||
                     slot_status[team == away_team][loop_j] == 6)
                record_marks[0][loop_j] = 2;
        }
        if (team == away_team) {
            record_player_ids[1][loop_j][0] = cur_player >> 8;
            record_player_ids[1][loop_j][1] = cur_player;
            record_ratings[1][loop_j] = cur_rating;
            if (slot_status[team == away_team][loop_j] == 2)
                record_marks[1][loop_j] = 1;
            else if (slot_status[team == away_team][loop_j] == 3 ||
                     slot_status[team == away_team][loop_j] == 6)
                record_marks[1][loop_j] = 2;
        }
    }
    rec = (long far *)d_1f3e_49ee;
    *rec = attendance;
    if (team == home_team) {
        record_team_stats[0] = defence;
        record_team_stats[1] = midfield;
        record_team_stats[2] = attack;
        record_team_stats[3] = attempts;
        record_team_stats[5] = captain_slots[0];
    } else {
        record_team_stats[4] = attempts;
        record_team_stats[6] = captain_slots[1];
    }
}

int minutes_played(int slot, int team)
{
    int minutes;

    if (slot > 10)
        minutes = match_minute - sub_minutes[team == away_team][slot == 12];
    else if (slot_status[team == away_team][slot] == 3 || slot_status[team == away_team][slot] == 5) {
        if (sub_replaced_slot[team == away_team][0] == slot)
            minutes = sub_minutes[team == away_team][0];
        else if (sub_replaced_slot[team == away_team][1] == slot)
            minutes = sub_minutes[team == away_team][1];
    } else
        minutes = match_minute;
    return minutes;
}

/* the match statistics screen (full_time: full time, else half time / so far) */
void match_stats_screen(int home, int away, char full_time)
{
    unsigned i;
    unsigned j;
    long far *rec;
    int defence;
    int midfield;
    int ft_home;
    int ft_away;
    int key;
    char done;
    char ok;
    char away_name[80];
    char home_name[80];
    char text[320];

    do {
        stats_print_page = vm_map(stats_print_handle, 1);
        for (i = 0; i < 2; i++)
            for (j = 0; j < 20; j++)
                strcpy(stats_print_page + i * 1600 + j * 80, "");
        done = -1;
        if (full_time) {
            new_screen("Match Statistics");
            if (match_record[4] == 'Z' && match_record[5] == 'Z') {
                d_5d9c_9d99 = match_record[2];
                d_5d9c_9d97 = match_record[3];
            } else {
                d_5d9c_9d99 = match_record[4];
                d_5d9c_9d97 = match_record[5];
            }
        } else {
            if (match_minute == 45)
                strcpy(text, "Half-time Stats");
            else
                sprintf(text, "Stats %d mins", match_minute);
            new_screen(text);
            d_5d9c_9d99 = home_goals;
            d_5d9c_9d97 = away_goals;
        }
        rec = (long far *)&match_record[8];
        attendance = *rec;
        defence = match_record[0x8e];
        midfield = match_record[0x8f];
        d_5d9c_9e09 = match_record[0x90];
        home_attempts = match_record[0x91];
        away_attempts = match_record[0x92];

        pick_shirt_colours(home, home, away);
        strcpy(home_name, upper_case(club_name(home)));
        sprintf(text, " %s ", home_name);
        draw_label_font1(1.25, 4.0, shirt_bg, shirt_fg, 0, text);
        sprintf(text, " %d", d_5d9c_9d99);
        draw_text_font1(17.5, 4.0, 1, text);
        stats_print_page = vm_map(stats_print_handle, 1);
        sprintf(stats_print_page, "%-26s%d", home_name, d_5d9c_9d99);

        pick_shirt_colours(away, home, away);
        strcpy(away_name, upper_case(club_name(away)));
        sprintf(text, " %s ", away_name);
        draw_label_font1(20.5, 4.0, shirt_bg, shirt_fg, 0, text);
        sprintf(text, " %d", d_5d9c_9d97);
        draw_text_font1(36.75, 4.0, 1, text);
        stats_print_page = vm_map(stats_print_handle, 1);
        sprintf(stats_print_page + 1600, "%-26s%d", away_name, d_5d9c_9d97);

        if (full_time) {
            sprintf(club_title_text, "HT %d-%d", match_record[0], match_record[1]);
            sprintf(text, " %s ", club_title_text);
            draw_label(1.125, 5.0, 1, 12, 0, text);
            stats_print_page = vm_map(stats_print_handle, 1);
            strcpy(stats_print_page + 80, club_title_text);
            if (match_record[4] != 'Z' || match_record[5] != 'Z') {
                ft_home = match_record[2];
                ft_away = match_record[3];
                sprintf(club_title_text, "FT %d-%d", ft_home, ft_away);
                sprintf(text, " %s ", club_title_text);
                draw_label(7.375, 5.0, 1, 12, 0, text);
                stats_print_page = vm_map(stats_print_handle, 1);
                strcat(stats_print_page + 80, " ");
                strcat(stats_print_page + 80, club_title_text);
                if (match_record[6] != 'Z' || match_record[7] != 'Z') {
                    sprintf(club_title_text, "%d-%d PENS", match_record[6] - d_5d9c_9d99,
                            match_record[7] - d_5d9c_9d97);
                    sprintf(text, " %s ", club_title_text);
                    draw_label(13.625, 5.0, 1, 12, 0, text);
                    stats_print_page = vm_map(stats_print_handle, 1);
                    strcat(stats_print_page + 80, " ");
                    strcat(stats_print_page + 80, club_title_text);
                }
            }
        }

        print_team_stats_column(-1, defence, midfield, d_5d9c_9e09, home_attempts, 1.125);
        print_team_stats_column(0, 100 - d_5d9c_9e09, 100 - midfield, 100 - defence, away_attempts, 20.375);
        strcpy(sub_kind_text, "Attendance");
        sprintf(sub_text, "%7ld", attendance);
        sprintf(text, " %s     -%s", sub_kind_text, sub_text);
        draw_label(1.125, 23.0, 1, 12, 150, text);
        stats_print_page = vm_map(stats_print_handle, 1);
        sprintf(stats_print_page + 1520, "%s         -%s", sub_kind_text, sub_text);

        if (full_time) {
            add_button(2, 1.25, 1.125, 1, 2, 31, "PRNT");
            if (printer_on == 0)
                disable_button(1);
            do {
                key = menu_choice = wait_for_button(last_button);
                if (key == 1) {
                    print_match_stats();
                    draw_button(1, 0);
                }
            } while (key != 0);
        } else if (match_minute == 45) {
            do {
                ok = -1;
                wait_for_click(2);
                if (strcmp(upper_case(key_text), "H") == 0 && home_is_cpu == 0) {
                    tactical_move_menu(home_team, -1);
                    done = 0;
                } else if (strcmp(upper_case(key_text), "A") == 0 && away_is_cpu == 0) {
                    tactical_move_menu(away_team, -1);
                    done = 0;
                } else if (key_text[0] != 0)
                    ok = 0;
            } while (!ok);
        } else
            wait_for_click(0);
    } while (!done);
}

void print_team_stats_column(char is_home, int defence, int midfield, int attack, int attempts, float col)
{
    int px;
    int bg;
    char sent_off;
    unsigned char far *id_bytes;
    int y;
    int fg;
    char mark[80];
    char line[160];
    char num[80];
    char buf[320];

    px = col * 8;
    cur_y = 0;
    y = 0;
    loop_j = 0;
    row_colour_a = 14;
    row_colour_b = 8;
    do {
        if (is_home) {
            id_bytes = (unsigned char far *)record_player_ids[0][loop_j];
            cur_player = id_bytes[0] << 8 | id_bytes[1];
            cur_rating = record_ratings[0][loop_j];
            sent_off = record_marks[0][loop_j] == 1;
            d_5d9c_9b62 = record_marks[0][loop_j] == 2;
            attack_over = slot_goals[0][loop_j];
            d_5d9c_9b73 = record_home_captain == loop_j + 1;
        } else {
            id_bytes = (unsigned char far *)record_player_ids[1][loop_j];
            cur_player = id_bytes[0] << 8 | id_bytes[1];
            cur_rating = record_ratings[1][loop_j];
            sent_off = record_marks[1][loop_j] == 1;
            d_5d9c_9b62 = record_marks[1][loop_j] == 2;
            attack_over = slot_goals[1][loop_j];
            d_5d9c_9b73 = record_away_captain == loop_j + 1;
        }
        bg = loop_j > 10 ? 6 : 1;
        strcpy(mark, "");
        if (sent_off)
            strcpy(mark, "so");
        else if (d_5d9c_9b62)
            strcpy(mark, "ij");
        else if (d_5d9c_9b73)
            strcpy(mark, "c");
        strcpy(d_1f3e_4120, "");
        if (attack_over > 0)
            sprintf(d_1f3e_4120, "%d", attack_over);
        if (cur_player >= 1701) {
            strcpy(sub_kind_text, position_names[cur_player - 1700]);
            if (loop_j > 10)
                sprintf(sub_kind_text, "Substitute %c", loop_j + 54);
            strcpy(club_title_text, sub_kind_text);
        } else {
            strcpy(sub_kind_text, player_short_name(cur_player));
            if (strlen(mark) == 0)
                d_5d9c_9e8b = 14;
            else
                d_5d9c_9e8b = 14 - (strlen(mark) + 1);
            sprintf(club_title_text, "%.*s", d_5d9c_9e8b, sub_kind_text);
        }
        sprintf(buf, " %s", shirt_number_text(loop_j + 1));
        if (row_colour_a == 14)
            fg = 9;
        else
            fg = 2;
        draw_label(col, cur_y + 6, 1, fg, 24, buf);
        sprintf(line, "%2d", loop_j + (loop_j == 12 ? 2 : 1));
        sprintf(buf, " %s", club_title_text);
        draw_label(col + 3.25, cur_y + 6, bg, row_colour_a, 92, buf);
        strcat(line, "  ");
        strcat(line, sub_kind_text);
        if (cur_rating > 0) {
            draw_text_at(px + min_int(strlen(club_title_text), 11) * 6 + 48, -(y + 48),
                        strcmp(mark, "c") == 0 ? 6 : 2, mark);
            strcat(line, "  ");
            strcat(line, mark);
            sprintf(num, "%2d", cur_rating);
            sprintf(buf, " %s", num);
            draw_label(col + 15, -(cur_y + 6), 1, 3, 30, buf);
            sprintf(buf, "%*s", 25 - strlen(line), "");
            strcat(line, buf);
            strcat(line, num);
            draw_text_at(px + strlen(num) * 6 + 136, -(y + 48), 6, d_1f3e_4120);
            strcat(line, " ");
            strcat(line, d_1f3e_4120);
        } else {
            draw_label(col + 15, -(cur_y + 6), 1, 3, 30, "  -");
            sprintf(buf, "%*s", 26 - strlen(line), "");
            strcat(line, buf);
            strcat(line, "-");
        }
        stats_print_page = vm_map(stats_print_handle, 1);
        strcpy(stats_print_page + (is_home + 1) * 1600 + (loop_j + 2) * 80, line);
        cur_y++;
        y += 8;
        swap_bytes(&row_colour_a, &row_colour_b, 2);
        loop_j++;
    } while (loop_j != 13);
    sprintf(buf, " Defence        -    %d%%", defence);
    draw_label(col, 19, 1, 4, 150, buf);
    stats_print_page = vm_map(stats_print_handle, 1);
    sprintf(stats_print_page + (is_home + 1) * 1600 + 1200, "Defence            -%6d%%", defence);
    sprintf(buf, " Midfield       -    %d%%", midfield);
    draw_label(col, 20, 1, 4, 150, buf);
    stats_print_page = vm_map(stats_print_handle, 1);
    sprintf(stats_print_page + (is_home + 1) * 1600 + 1280, "Midfield           -%6d%%", midfield);
    sprintf(buf, " Attack         -    %d%%", attack);
    draw_label(col, 21, 1, 4, 150, buf);
    stats_print_page = vm_map(stats_print_handle, 1);
    sprintf(stats_print_page + (is_home + 1) * 1600 + 1360, "Attack             -%6d%%", attack);
    sprintf(buf, " Attempts       -    %d", attempts);
    draw_label(col, 22, 1, 4, 150, buf);
    stats_print_page = vm_map(stats_print_handle, 1);
    sprintf(stats_print_page + (is_home + 1) * 1600 + 1440, "Attempts           -%6d", attempts);
}
