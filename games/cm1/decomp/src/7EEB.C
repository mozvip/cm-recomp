/* @at 7eeb:0000 */
/* @data 5d9c:576e */
/* @module */

/* Overlay 4: the end of a match and of a season (the result line, the form tables and
 * league tables, promotions and relegations), the cup and European draws and fixtures. */
#include <stdio.h>
#include <string.h>
#include <mem.h>

/* the functions, in address order: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void save_match_facts(void);
void record_match_result(void);
void record_cup_winner(int winner, int loser, int winner_goals, int loser_goals);
void record_group_draw(int home, int away, int home_score, int away_score);
void find_euro_group_slot(int team);
void find_domark_group_slot(int team);
void award_prize_money(int team, long prize, long points);
void add_manager_points(int team, int points);
void settle_promotion_relegation(void);
void change_board_confidence(int team, int delta);
void rate_match_result(int team, int opponent, int strength, int opp_strength, int gf, int ga);
void set_competition_name(int week, int match, int league_pos);
void append_semi_final(int week, int semi1, int semi2);
void append_final(int week, int final1, int final2);
void make_weekly_cup_draws(void);
void draw_euro_cup_groups(void);
void show_euro_cup_group(int group);
void draw_domark_groups(void);
void show_domark_group(int group);
void draw_cup_round(int comp, int first_slot, int last_slot, int week, int return_week);
void pick_european_entrants(void);
void seed_european_cups(void);
void pick_cup_entrants(void);
void add_fixture(void);
void set_playoff_fixtures(void);
void arrange_friendlies(void);
void arrange_friendly(int team, int week);
char has_fixture_in_week(int team, int week);
void sort_league_table(void);
void far *vm_map(int handle, int page);
char far *right_chars(char far *s, unsigned n);
char far *number_in_words(int player);
float team_rating(int x);
int two_leg_comp_index(int week, int n);
char is_league_week(int);
char is_fa_cup_week(int);
char is_playoff_week(int);
char is_rumbelows_match(int, int);
char is_uefa_match(int, int);
char is_cup_winners_match(int, int);
char is_european_cup_match(int, int);
char is_zenith_match(int, int);
char is_domark_match(int, int);
void check_heaviest_defeat(int, int, int, int);
void check_biggest_victory(int, int, int, int);
void check_highest_attendance(int, int, int, int);
void check_lowest_attendance(int, int, int, int);
void set_club_season_result(int, int, int);
void record_cup_winners(int, int, int);
extern int matchfax_handle;
extern int fixture_index;
extern int week_match_count;
extern int match_counter;
extern char far *matchfax_buf;
extern char far *first_leg_scores;
extern int first_leg_ems_handle;
extern int current_week;
extern int cup_slot;
extern char in_penalty_shootout;
extern char is_first_leg;
extern char at_home_ground;
extern char is_second_leg;
extern int home_goals;
extern int away_goals;
extern int home_team;
extern int away_team;
extern int away_club;
extern int home_club;
extern int attendance;
extern int attendance_hi;
extern int home_first_leg_goals;
extern int away_first_leg_goals;
extern int home_won_on_away_goals;
extern int away_won_on_away_goals;
extern int fa_cup_through;
extern int league_cup_through;
extern int zenith_cup_through;
extern int domark_through;
extern int uefa_cup_through;
extern int cwc_through;
extern int euro_cup_through;
extern int fa_cup_next_week;
extern int league_cup_next_week;
extern int zenith_cup_next_week;
extern int domark_cup_next_week;
extern int uefa_cup_next_week;
extern int cup_winners_next_week;
extern int european_cup_next_week;
extern int found_group_slot;
extern int found_group;
extern char near *team_names[];
extern char far result_line[];
extern char far team_form[][82][5];
extern unsigned char far domark_group_stats[][8][5];
extern unsigned char far team_stats[][82];
extern int far cup_entrants[][80];
extern unsigned char far euro_group_stats[][2][4];
char is_neutral_venue_match(int a, int b);
int min_int(int a, int b);
int max_int(int a, int b);
char is_human_team(int);
int league_points_at(int x);
float division_factor(int x);
void board_message(int team, char far *s);
extern int loop_i;
extern int loop_j;
extern int accounts_ems_handle;
extern int manager_points_handle;
struct s_a01a { long pad[400]; long v[80]; };
extern struct s_a01a far *accounts_table;
extern long far *manager_points_ptr;
extern int d_5d9c_9f71;
extern int selected_team;
extern int best_league_slot;
extern int d_5d9c_9f31;
extern int league_round;
extern unsigned char promotion_rules[];
extern unsigned char relegation_rules[];
extern int result_rating;
extern int derby_factor;
extern int best_result_rating;
extern int best_result_team;
extern int best_result_opponent;
extern int best_result_gf;
extern int best_result_ga;
extern int home_league_pos;
extern int far domark_groups[][5];
extern char far best_result_desc[];
extern char far competition_name[];
extern int far euro_cup_groups[][4];
extern int far team_manager[];
extern int far manager_season_points[];
extern int far club_coaches[];
extern unsigned char far staff_contract[];
extern unsigned char far league_table[][20];
extern unsigned char far league_runner_up;
extern int far playoff_winners[];
extern unsigned char far board_confidence[];
extern unsigned char far season_status[];
extern unsigned char far league_position_history[][82];
char far *club_name(int x);
void draw_text_font2(float x, float y, int colour, char far *s);
void new_screen(char far *title);
void wait_for_click(int a);
extern unsigned char far in_euro_cup_groups[];
extern int far fixtures[][2][94];
extern unsigned char euro_group_schedule[];
extern int zenith_qualifier_count;
extern int d_5d9c_9f69;
extern int d_5d9c_9d93;
extern int loop_k;
int random_below(int n);                 /* random below n */
char far *trim_spaces(char far *s);
int contract_period_of_week(int x);
char is_european_entrant(int v);
extern int d_5d9c_9ee7;
extern int d_5d9c_9d95;
extern int d_5d9c_9ecf;
extern char draw_involves_human;
extern unsigned char domark_group_schedule[];
extern char far in_cup_draw[][80];
extern int far week_fixtures[][2][94];
extern unsigned char far cup_seeding[];
void swap_bytes(void far *a, void far *b, int n);
void swap_teams_in_draws(int a, int b);
extern int d_5d9c_9ee5;
extern int d_5d9c_9e9b;
extern int d_5d9c_9dd7;
extern int d_5d9c_9d91;
extern int d_5d9c_9f2f;
extern int d_5d9c_9d8f;
extern int d_5d9c_9d8d;
extern int d_5d9c_9de9;
extern int last_ranked_row;
extern int d_5d9c_9dd5;
extern char cwc_english_entrant;
extern char euro_english_entrant;
extern unsigned char far foreign_team_rating[];
extern int replay_count;
extern int stats_division;
extern int d_5d9c_9bc1;
extern int human_manager_index;
extern int human_count;
extern int opponent_team;
extern int d_5d9c_9f0f;
extern int d_5d9c_9d8b;
extern int d_5d9c_9d89;
extern int d_5d9c_9d87;
extern int d_5d9c_9d85;
extern int home_attack_wins;
extern int away_attack_wins;
extern char position_ok;
extern char found_flag;
extern int friendly_counts[];
extern unsigned char far manager_team[];
extern unsigned char far team_wins[][82];
extern char far euro_cup_title[];
void message_box(char far *);
extern int foreign_country_ranges[];
extern int d_5d9c_0522[];
extern int far d_2f3c_3579[];
extern int far d_2f3c_3593[];
extern unsigned char far foreign_team_stats[][460];

void save_match_facts(void)
{
    FILE *fp;

    fp = fopen("matchfax", "rb+");
    matchfax_buf = vm_map(matchfax_handle, 0);
    for (fixture_index = 0; fixture_index <= week_match_count - 1; fixture_index++) {
        fseek(fp, (long)(match_counter + fixture_index - 1) * 149, 0);
        fwrite(matchfax_buf + fixture_index * 150, 1, 149, fp);
    }
    fclose(fp);
}

void record_match_result(void)
{
    char mark[8];
    char buf[320];
    int home_rating, away_rating;

    cup_slot = two_leg_comp_index(current_week, fixture_index + 1);
    if (is_first_leg) {
        first_leg_scores = vm_map(first_leg_ems_handle, 1);
        *(first_leg_scores + cup_slot * 80 + fixture_index * 2) = home_goals;
        *(first_leg_scores + cup_slot * 80 + fixture_index * 2 + 1) = away_goals;
    }
    sprintf(result_line, "%s %d", (char far *)team_names[home_team], home_goals);
    if (home_goals > 6) {
        strcat(result_line, " (");
        strcat(result_line, number_in_words(home_goals));
        strcat(result_line, ")");
    }
    strcat(result_line, " ");
    strcat(result_line, team_names[away_team]);
    strcat(result_line, " ");
    sprintf(buf, "%d", away_goals);
    strcat(result_line, buf);
    if (away_goals > 6) {
        strcat(result_line, " (");
        strcat(result_line, number_in_words(away_goals));
        strcat(result_line, ")");
    }
    if (current_week > 4 && in_penalty_shootout == 0) {
        if (home_goals > away_goals) {
            check_heaviest_defeat(away_club, home_club, away_goals, home_goals);
            check_biggest_victory(home_club, away_club, home_goals, away_goals);
        } else if (away_goals > home_goals) {
            check_biggest_victory(away_club, home_club, away_goals, home_goals);
            check_heaviest_defeat(home_club, away_club, home_goals, away_goals);
        }
    }
    if (current_week > 5 && at_home_ground) {
        check_highest_attendance(home_club, away_club, attendance, attendance_hi);
        check_lowest_attendance(home_club, away_club, attendance, attendance_hi);
    }
    home_rating = team_rating(home_club);
    away_rating = team_rating(away_club);
    if (current_week > 4) {
        rate_match_result(home_team, away_team, home_rating, away_rating, home_goals, away_goals);
        rate_match_result(away_team, home_team, away_rating, home_rating, away_goals, home_goals);
    }
    if (is_playoff_week(current_week) || is_rumbelows_match(current_week, fixture_index + 1)
        || is_uefa_match(current_week, fixture_index + 1) || is_cup_winners_match(current_week, fixture_index + 1)
        || is_european_cup_match(current_week, fixture_index + 1)) {
        home_goals += home_first_leg_goals;
        away_goals += away_first_leg_goals;
        if (is_second_leg) {
            sprintf(buf, "  AGG:%d-%d", home_goals, away_goals);
            strcat(result_line, buf);
        }
        home_goals += home_won_on_away_goals;
        away_goals += away_won_on_away_goals;
    }
    if (home_goals > away_goals) {
        if (is_league_week(current_week)) {
            team_stats[12][home_team]++;
            team_stats[13][away_team]++;
            team_stats[18][away_team]++;
            sprintf(buf, "%sW", team_form[0][home_team]);
            strcpy(team_form[0][home_team], right_chars(buf, 4));
            sprintf(buf, "%sL", team_form[1][away_team]);
            strcpy(team_form[1][away_team], right_chars(buf, 4));
        } else
            record_cup_winner(home_club, away_club, home_goals, away_goals);
    } else if (home_goals == away_goals) {
        if (is_league_week(current_week)) {
            team_stats[17][away_team]++;
            if (home_goals > 0)
                strcpy(mark, "X");
            else
                strcpy(mark, "D");
            sprintf(buf, "%s%s", team_form[0][home_team], (char far *)mark);
            strcpy(team_form[0][home_team], right_chars(buf, 4));
            sprintf(buf, "%s%s", team_form[1][away_team], (char far *)mark);
            strcpy(team_form[1][away_team], right_chars(buf, 4));
        } else
            record_group_draw(home_club, away_club, home_goals, away_goals);
    } else {
        if (is_league_week(current_week)) {
            team_stats[12][away_team]++;
            team_stats[16][away_team]++;
            team_stats[13][home_team]++;
            sprintf(buf, "%sL", team_form[0][home_team]);
            strcpy(team_form[0][home_team], right_chars(buf, 4));
            sprintf(buf, "%sW", team_form[1][away_team]);
            strcpy(team_form[1][away_team], right_chars(buf, 4));
        } else
            record_cup_winner(away_club, home_club, away_goals, home_goals);
    }
    if (is_league_week(current_week)) {
        team_stats[14][home_team] += home_goals;
        team_stats[15][home_team] += away_goals;
        team_stats[14][away_team] += away_goals;
        team_stats[15][away_team] += home_goals;
        team_stats[19][away_team] += away_goals;
        team_stats[20][away_team] += home_goals;
    }
}

void record_cup_winner(int winner, int loser, int winner_goals, int loser_goals)
{
    if (is_fa_cup_week(current_week)) {
        cup_entrants[0][fa_cup_through] = winner;
        fa_cup_through++;
        if (current_week > 87) {
            cup_entrants[0][1] = loser;
            fa_cup_next_week = -1;
            set_club_season_result(winner, 6, 100);
            award_prize_money(winner, 100000L, 7500L);
            record_cup_winners(2, winner, loser);
        }
    } else if (is_rumbelows_match(current_week, fixture_index + 1) && is_first_leg == 0) {
        cup_entrants[1][league_cup_through] = winner;
        league_cup_through++;
        if (current_week > 81) {
            cup_entrants[1][1] = loser;
            league_cup_next_week = -1;
            set_club_season_result(winner, 10, 100);
            award_prize_money(winner, 150000L, 5000L);
            record_cup_winners(3, winner, loser);
        }
    } else if (is_zenith_match(current_week, fixture_index + 1)) {
        cup_entrants[2][zenith_cup_through] = winner;
        zenith_cup_through++;
        if (current_week > 52) {
            cup_entrants[2][1] = loser;
            zenith_cup_next_week = -1;
            set_club_season_result(winner, 11, 100);
            award_prize_money(winner, 100000L, 2000L);
            record_cup_winners(4, winner, loser);
        }
    } else if (is_domark_match(current_week, fixture_index + 1)) {
        if (current_week < 68) {
            find_domark_group_slot(winner);
            domark_group_stats[0][found_group][found_group_slot] = domark_group_stats[0][found_group][found_group_slot] + 1;
            domark_group_stats[1][found_group][found_group_slot] = domark_group_stats[1][found_group][found_group_slot] + 1;
            domark_group_stats[4][found_group][found_group_slot] = domark_group_stats[4][found_group][found_group_slot] + winner_goals;
            domark_group_stats[5][found_group][found_group_slot] = domark_group_stats[5][found_group][found_group_slot] + loser_goals;
            find_domark_group_slot(loser);
            domark_group_stats[0][found_group][found_group_slot] = domark_group_stats[0][found_group][found_group_slot] + 1;
            domark_group_stats[3][found_group][found_group_slot] = domark_group_stats[3][found_group][found_group_slot] + 1;
            domark_group_stats[4][found_group][found_group_slot] = domark_group_stats[4][found_group][found_group_slot] + loser_goals;
            domark_group_stats[5][found_group][found_group_slot] = domark_group_stats[5][found_group][found_group_slot] + winner_goals;
        } else {
            cup_entrants[3][domark_through] = winner;
            domark_through++;
            if (current_week > 86) {
                cup_entrants[3][1] = loser;
                domark_cup_next_week = -1;
                set_club_season_result(winner, 12, 100);
                award_prize_money(winner, 75000L, 2000L);
                record_cup_winners(5, winner, loser);
            }
        }
    } else if (is_uefa_match(current_week, fixture_index + 1)) {
        cup_entrants[4][uefa_cup_through] = winner;
        uefa_cup_through++;
        if (current_week > 90) {
            cup_entrants[4][1] = loser;
            uefa_cup_next_week = -1;
            set_club_season_result(winner, 7, 100);
            award_prize_money(winner, 250000L, 10000L);
            record_cup_winners(6, winner, loser);
        }
    } else if (is_cup_winners_match(current_week, fixture_index + 1)) {
        cup_entrants[5][cwc_through] = winner;
        cwc_through++;
        if (current_week > 90) {
            cup_entrants[5][1] = loser;
            cup_winners_next_week = -1;
            set_club_season_result(winner, 8, 100);
            award_prize_money(winner, 250000L, 10000L);
            record_cup_winners(7, winner, loser);
        }
    } else if (is_european_cup_match(current_week, fixture_index + 1)) {
        if (current_week < 53 || current_week > 90) {
            cup_entrants[6][euro_cup_through] = winner;
            euro_cup_through++;
            if (current_week > 90) {
                cup_entrants[6][1] = loser;
                european_cup_next_week = -1;
                set_club_season_result(winner, 9, 100);
                award_prize_money(winner, 1000000L, 20000L);
                record_cup_winners(8, winner, loser);
            }
        } else {
            find_euro_group_slot(winner);
            euro_group_stats[0][found_group][found_group_slot] = euro_group_stats[0][found_group][found_group_slot] + 1;
            euro_group_stats[1][found_group][found_group_slot] = euro_group_stats[1][found_group][found_group_slot] + 1;
            euro_group_stats[4][found_group][found_group_slot] = euro_group_stats[4][found_group][found_group_slot] + winner_goals;
            euro_group_stats[5][found_group][found_group_slot] = euro_group_stats[5][found_group][found_group_slot] + loser_goals;
            find_euro_group_slot(loser);
            euro_group_stats[0][found_group][found_group_slot] = euro_group_stats[0][found_group][found_group_slot] + 1;
            euro_group_stats[3][found_group][found_group_slot] = euro_group_stats[3][found_group][found_group_slot] + 1;
            euro_group_stats[4][found_group][found_group_slot] = euro_group_stats[4][found_group][found_group_slot] + loser_goals;
            euro_group_stats[5][found_group][found_group_slot] = euro_group_stats[5][found_group][found_group_slot] + winner_goals;
        }
    } else if (current_week == 92 || current_week == 94) {
        cup_entrants[7][fixture_index] = winner;
    }
}

void record_group_draw(int home, int away, int home_score, int away_score)
{
    if (is_domark_match(current_week, fixture_index + 1)) {
        find_domark_group_slot(home);
        domark_group_stats[0][found_group][found_group_slot] = domark_group_stats[0][found_group][found_group_slot] + 1;
        domark_group_stats[2][found_group][found_group_slot] = domark_group_stats[2][found_group][found_group_slot] + 1;
        domark_group_stats[4][found_group][found_group_slot] = domark_group_stats[4][found_group][found_group_slot] + home_score;
        domark_group_stats[5][found_group][found_group_slot] = domark_group_stats[5][found_group][found_group_slot] + away_score;
        find_domark_group_slot(away);
        domark_group_stats[0][found_group][found_group_slot] = domark_group_stats[0][found_group][found_group_slot] + 1;
        domark_group_stats[2][found_group][found_group_slot] = domark_group_stats[2][found_group][found_group_slot] + 1;
        domark_group_stats[4][found_group][found_group_slot] = domark_group_stats[4][found_group][found_group_slot] + away_score;
        domark_group_stats[5][found_group][found_group_slot] = domark_group_stats[5][found_group][found_group_slot] + home_score;
    } else if (is_european_cup_match(current_week, fixture_index + 1) && current_week > 52 && current_week < 80) {
        find_euro_group_slot(home);
        euro_group_stats[0][found_group][found_group_slot] = euro_group_stats[0][found_group][found_group_slot] + 1;
        euro_group_stats[2][found_group][found_group_slot] = euro_group_stats[2][found_group][found_group_slot] + 1;
        euro_group_stats[4][found_group][found_group_slot] = euro_group_stats[4][found_group][found_group_slot] + home_score;
        euro_group_stats[5][found_group][found_group_slot] = euro_group_stats[5][found_group][found_group_slot] + away_score;
        find_euro_group_slot(away);
        euro_group_stats[0][found_group][found_group_slot] = euro_group_stats[0][found_group][found_group_slot] + 1;
        euro_group_stats[2][found_group][found_group_slot] = euro_group_stats[2][found_group][found_group_slot] + 1;
        euro_group_stats[4][found_group][found_group_slot] = euro_group_stats[4][found_group][found_group_slot] + away_score;
        euro_group_stats[5][found_group][found_group_slot] = euro_group_stats[5][found_group][found_group_slot] + home_score;
    }
}

void find_euro_group_slot(int team)
{
    for (loop_i = 0; loop_i <= 1; loop_i++)
        for (loop_j = 0; loop_j <= 3; loop_j++)
            if (euro_cup_groups[loop_i][loop_j] == team) {
                found_group = loop_i;
                found_group_slot = loop_j;
                loop_j = 3;
                loop_i = 1;
            }
}

void find_domark_group_slot(int team)
{
    for (loop_i = 0; loop_i <= 7; loop_i++)
        for (loop_j = 0; loop_j <= 4; loop_j++)
            if (domark_groups[loop_i][loop_j] == team) {
                found_group = loop_i;
                found_group_slot = loop_j;
                loop_j = 4;
                loop_i = 7;
            }
}

void award_prize_money(int team, long prize, long points)
{
    if (team < 80) {
        accounts_table = vm_map(accounts_ems_handle, 1);
        accounts_table->v[team] += prize;
        add_manager_points(team, points);
    }
}

void add_manager_points(int team, int points)
{
    manager_points_ptr = vm_map(manager_points_handle, 1);
    manager_points_ptr[team_manager[team]] += points / 50 * 50;
    manager_season_points[team_manager[team]] += points / 50 * 50;
}

void settle_promotion_relegation(void)
{
    unsigned char far *p;
    unsigned char old_status;
    char last_week;
    char champion;
    char buf[320];
    register int i;
    int mult;

    last_week = current_week == 94 ? -1 : 0;
    for (d_5d9c_9f71 = 0; d_5d9c_9f71 <= 79; d_5d9c_9f71++) {
        selected_team = league_table[0][d_5d9c_9f71];
        old_status = season_status[selected_team];
        season_status[selected_team] = 2;
        p = promotion_rules;
        for (i = 1; i <= 7; i++) {
            best_league_slot = *p;
            p++;
            d_5d9c_9f31 = *p;
            p++;
            if (d_5d9c_9f71 == best_league_slot) {
                if (league_points_at(d_5d9c_9f31) + (38 - league_round) * 3 < league_points_at(d_5d9c_9f71) || league_round == 38) {
                    champion = (best_league_slot == 0 || best_league_slot == 20 || best_league_slot == 40 || best_league_slot == 60) && best_league_slot + 1 == d_5d9c_9f31;
                    season_status[selected_team] = champion ? 4 : 3;
                    i = 7;
                }
            }
        }
        if (last_week) {
            if ((d_5d9c_9f71 / 20 == 1 && playoff_winners[0] == selected_team) ||
                (d_5d9c_9f71 / 20 == 2 && playoff_winners[1] == selected_team) ||
                (d_5d9c_9f71 / 20 == 3 && playoff_winners[2] == selected_team))
                season_status[selected_team] = 3;
        }
        p = relegation_rules;
        for (i = 1; i <= 10; i++) {
            best_league_slot = *p;
            p++;
            d_5d9c_9f31 = *p;
            p++;
            if (d_5d9c_9f71 == best_league_slot) {
                if (league_points_at(d_5d9c_9f71) + (38 - league_round) * 3 < league_points_at(d_5d9c_9f31) || league_round == 38) {
                    season_status[selected_team] = 1;
                    i = 9;
                }
            }
        }
        if (old_status == 2) {
            if (season_status[selected_team] > 2) {
                mult = season_status[selected_team] == 4 ? 2 : 1;
                switch (selected_team / 20) {
                case 0:
                    award_prize_money(selected_team, mult * 125000L, 10000L);
                    break;
                case 1:
                    award_prize_money(selected_team, (long)(mult * 12500), 5000L);
                    break;
                case 2:
                case 3:
                    award_prize_money(selected_team, (long)(mult * 6250), 5000L);
                    break;
                }
                if (is_human_team(selected_team)) {
                    if (d_5d9c_9f71 == 0)
                        strcpy(buf, "Champions!  A great performance.");
                    else
                        strcpy(buf, "Promotion!  A successful season.");
                    board_message(selected_team, buf);
                }
                if (d_5d9c_9f71 == 0)
                    record_cup_winners(1, selected_team, league_runner_up);
            } else if (season_status[selected_team] == 1) {
                if (is_human_team(selected_team)) {
                    if (d_5d9c_9f71 == 19)
                        strcpy(buf, "Relegation to non-league.  You prat.");
                    else
                        strcpy(buf, "Relegation.  Very poor.");
                    board_message(selected_team, buf);
                }
                change_board_confidence(selected_team, -10);
            }
        }
        if (league_round < 39)
            league_position_history[league_round][selected_team] = d_5d9c_9f71 % 20 + 1;
    }
}

void change_board_confidence(int team, int delta)
{
    if (club_coaches[team] < 650) {
        if (season_status[team] < 3 || delta > 0) {
            if (staff_contract[team_manager[team]] < 10)
                board_confidence[team] = max_int(min_int(board_confidence[team] + delta, 100), 0);
        }
    }
}

void rate_match_result(int team, int opponent, int strength, int opp_strength, int gf, int ga)
{
    float div_factor;
    char buf[320];
    int bonus;

    if (current_week <= 5)
        return;
    result_rating = 6;
    if (gf > ga) {
        result_rating += team == away_team ? 2 : 1;
        strength = opp_strength - strength;
        if (strength > 0)
            result_rating += strength;
        bonus = 0;
        switch (current_week) {
        case 53: case 59: case 61: case 65: case 67: case 71:
        case 75: case 76: case 77: case 79:
            bonus = 2;
            break;
        case 82: case 83: case 88: case 89: case 91: case 94:
            bonus = 3;
            break;
        }
        result_rating += bonus;
        if (derby_factor > 0)
            result_rating += derby_factor / 10;
        if (in_penalty_shootout == 0)
            result_rating = result_rating + (gf - ga) * 0.5;
    } else if (gf == ga) {
        result_rating += team == away_team;
        strength = opp_strength - strength;
        result_rating = result_rating + strength * 0.5;
    } else {
        result_rating -= team == home_team ? 2 : 1;
        strength = strength - opp_strength;
        if (strength > 0)
            result_rating -= strength;
        if (in_penalty_shootout == 0)
            result_rating = result_rating - (ga - gf) * 0.5;
    }
    result_rating = max_int(min_int(result_rating, 12), 0);
    if (is_human_team(team)) {
        buf[0] = 0;
        switch (result_rating) {
        case 0: strcpy(buf, "a disgraceful"); break;
        case 1: strcpy(buf, "a very poor"); break;
        case 2: case 3: strcpy(buf, "a disappointing"); break;
        case 9: strcpy(buf, "a good"); break;
        case 10: strcpy(buf, "an excellent"); break;
        case 11: case 12: strcpy(buf, "a superb"); break;
        }
        if (buf[0] != 0) {
            if (derby_factor > 22)
                strcat(buf, " derby");
            strcat(buf, " result.");
            if (is_human_team(team))
                board_message(team, buf);
        }
    }
    if (team >= 80)
        return;
    switch (result_rating) {
    case 0: case 1: case 2: case 3:
        change_board_confidence(team, -((4 - result_rating) * 5));
        break;
    case 9: case 10: case 11: case 12:
        change_board_confidence(team, (result_rating - 8) * 5);
        break;
    }
    div_factor = division_factor(team);
    add_manager_points(team, result_rating * 750 / div_factor);
    team_stats[0][team] = max_int(1, min_int(16, team_stats[0][team] + (result_rating - 6) * 1.3333333333333333));
    if (result_rating < 10)
        return;
    if (current_week <= 5)
        return;
    if (is_zenith_match(current_week, fixture_index + 1))
        return;
    if (is_domark_match(current_week, fixture_index + 1))
        return;
    if (result_rating > best_result_rating || best_result_team == -1) {
        if (team == home_team) {
            best_result_team = home_club;
            best_result_opponent = away_club;
            strcpy(best_result_desc, "H");
        } else {
            best_result_team = away_club;
            best_result_opponent = home_club;
            strcpy(best_result_desc, "A");
        }
        if (is_neutral_venue_match(current_week, fixture_index + 1))
            strcpy(best_result_desc, "N");
        best_result_gf = gf;
        if (in_penalty_shootout)
            best_result_gf = -best_result_gf;
        best_result_ga = ga;
        best_result_rating = result_rating;
        set_competition_name(current_week, fixture_index + 1, home_league_pos);
        strcat(best_result_desc, competition_name);
    }
}

/* set_competition_name: the name of the competition match `match` of `week` is in (competition_name), and
 * for a cup the round. BCC merges the cups' identical tails (the pushes and the call of
 * append_final) into the FA Cup branch, where the original has them in the European Cup
 * one, unless the file is compiled with -y (see the Makefile); it was given here byte for
 * byte with __emit__ before that was found. */
void set_competition_name(int week, int match, int league_pos)
{
    if (is_league_week(week)) {
        if (league_pos >= 60)
            strcpy(competition_name, "Division Four");
        else if (league_pos >= 40)
            strcpy(competition_name, "Division Three");
        else if (league_pos >= 20)
            strcpy(competition_name, "Division Two");
        else
            strcpy(competition_name, "Division One");
    } else if (is_fa_cup_week(week)) {
        strcpy(competition_name, "FA Cup");
        append_semi_final(week, 0x4c, 0x4d);
        append_final(week, 0x58, 0x59);
    } else if (is_rumbelows_match(week, match)) {
        strcpy(competition_name, "Rumbelows Cup");
        append_semi_final(week, 0x3d, 0x41);
        append_final(week, 0x52, 0x53);
    } else if (is_zenith_match(week, match)) {
        strcpy(competition_name, "Zenith Cup");
        append_semi_final(week, 0x29, -1);
        append_final(week, 0x35, -1);
    } else if (is_domark_match(week, match)) {
        sprintf(competition_name, "Domark Trophy");
        append_semi_final(week, 0x49, -1);
        append_final(week, 0x57, -1);
    } else if (is_uefa_match(week, match)) {
        strcpy(competition_name, "UEFA Cup");
        append_semi_final(week, 0x4b, 0x4f);
        append_final(week, 0x57, 0x5b);
    } else if (is_cup_winners_match(week, match)) {
        strcpy(competition_name, "C/Winners Cup");
        append_semi_final(week, 0x4b, 0x4f);
        append_final(week, 0x5b, -1);
    } else if (is_european_cup_match(week, match)) {
        strcpy(competition_name, "European Cup");
        append_final(week, 0x5b, -1);
    } else if (is_playoff_week(week))
        strcpy(competition_name, "Playoff");
    else if (week == 5)
        strcpy(competition_name, "Charity Shield");
    else if (week < 5)
        strcpy(competition_name, "Friendly");
}

void append_semi_final(int week, int semi1, int semi2)
{
    if (week == semi1 || week == semi2) {
        if (strlen(competition_name) + 11 <= 19)
            strcat(competition_name, " Semi-Final");
        else if (strlen(competition_name) + 5 <= 19)
            strcat(competition_name, " Semi");
    }
}

void append_final(int week, int final1, int final2)
{
    if (week == final1 || week == final2) {
        if (strlen(competition_name) + 6 <= 19)
            strcat(competition_name, " Final");
    }
}

void make_weekly_cup_draws(void)
{
    switch (current_week) {
    case 1:
        if (zenith_qualifier_count > 0)
            draw_cup_round(3, 1, zenith_qualifier_count * 2, 7, -1);
        draw_cup_round(2, 1, 0x20, 9, 0xd);
        draw_cup_round(5, 1, 0x40, 0xb, 0xf);
        draw_cup_round(6, 1, 0x20, 0x11, 0x15);
        draw_cup_round(7, 0x21, 0x40, 0x11, 0x15);
        draw_domark_groups();
        break;
    case 7:
        if (zenith_qualifier_count > 0)
            for (d_5d9c_9f69 = zenith_qualifier_count; d_5d9c_9f69 <= 31; d_5d9c_9f69++)
                cup_entrants[2][d_5d9c_9f69] = cup_entrants[2][d_5d9c_9f69 + zenith_qualifier_count];
        draw_cup_round(3, 0x21, 0x40, 9, -1);
        break;
    case 9:
        draw_cup_round(3, 0x41, 0x50, 0xb, -1);
        break;
    case 11:
        draw_cup_round(3, 0x21, 0x28, 0x17, -1);
        break;
    case 13:
        for (d_5d9c_9f69 = 16; d_5d9c_9f69 <= 63; d_5d9c_9f69++)
            cup_entrants[1][d_5d9c_9f69] = cup_entrants[1][d_5d9c_9f69 + 16];
        draw_cup_round(2, 1, 0x40, 0x13, -1);
        break;
    case 15:
        draw_cup_round(5, 1, 0x20, 0x17, 0x19);
        break;
    case 19:
        draw_cup_round(2, 1, 0x20, 0x1b, -1);
        break;
    case 21:
        draw_cup_round(6, 0x11, 0x20, 0x1f, 0x23);
        draw_cup_round(7, 0x21, 0x30, 0x1f, 0x23);
        break;
    case 23:
        draw_cup_round(3, 1, 4, 0x29, -1);
        break;
    case 25:
        draw_cup_round(5, 1, 0x10, 0x1f, 0x23);
        break;
    case 27:
        draw_cup_round(2, 1, 0x10, 0x21, -1);
        break;
    case 31:
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 19; d_5d9c_9f69++)
            cup_entrants[0][d_5d9c_9f69 + 36] = d_5d9c_9f69 + 60;
        draw_cup_round(1, 1, 0x38, 0x26, -1);
        break;
    case 33:
        draw_cup_round(2, 1, 8, 0x2b, -1);
        break;
    case 35:
        draw_cup_round(5, 9, 0x10, 0x43, 0x47);
        draw_cup_round(6, 0x11, 0x18, 0x43, 0x47);
        draw_euro_cup_groups();
        break;
    case 38:
    case 39:
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 19; d_5d9c_9f69++)
            cup_entrants[0][d_5d9c_9f69 + 28] = d_5d9c_9f69 + 40;
        draw_cup_round(1, 1, 0x30, 0x2c, -1);
        break;
    case 41:
        fixtures[5][0][53] = cup_entrants[2][0] << 5;
        fixtures[5][1][53] = cup_entrants[2][1] << 5;
        zenith_cup_next_week = 53;
        set_club_season_result(cup_entrants[2][0], 11, 53);
        set_club_season_result(cup_entrants[2][1], 11, 53);
        break;
    case 43:
        draw_cup_round(2, 1, 4, 0x3d, 0x41);
        break;
    case 44:
    case 45:
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 39; d_5d9c_9f69++)
            cup_entrants[0][d_5d9c_9f69 + 24] = d_5d9c_9f69;
        draw_cup_round(1, 1, 0x40, 0x32, -1);
        break;
    case 50:
    case 51:
        draw_cup_round(1, 1, 0x20, 0x38, -1);
        break;
    case 56:
    case 57:
        draw_cup_round(1, 1, 0x10, 0x3e, -1);
        break;
    case 62:
    case 63:
        draw_cup_round(1, 1, 8, 0x44, -1);
        break;
    case 65:
        fixtures[1][0][82] = cup_entrants[1][0] << 5;
        fixtures[1][1][82] = cup_entrants[1][1] << 5;
        league_cup_next_week = 82;
        set_club_season_result(cup_entrants[1][0], 10, 82);
        set_club_season_result(cup_entrants[1][1], 10, 82);
        break;
    case 67:
        draw_cup_round(4, 0x19, 0x20, 0x47, -1);
        break;
    case 68:
    case 69:
        draw_cup_round(1, 1, 4, 0x4c, -1);
        break;
    case 71:
        draw_cup_round(4, 1, 4, 0x49, -1);
        draw_cup_round(5, 9, 0xc, 0x4b, 0x4f);
        draw_cup_round(6, 0xd, 0x10, 0x4b, 0x4f);
        break;
    case 73:
        fixtures[2][0][87] = cup_entrants[3][0] << 5;
        fixtures[2][1][87] = cup_entrants[3][1] << 5;
        domark_cup_next_week = 87;
        set_club_season_result(cup_entrants[3][0], 12, 87);
        set_club_season_result(cup_entrants[3][1], 12, 87);
        break;
    case 76:
    case 77:
        fixtures[1][0][88] = cup_entrants[0][0] << 5;
        fixtures[1][1][88] = cup_entrants[0][1] << 5;
        fa_cup_next_week = 88;
        set_club_season_result(cup_entrants[0][0], 6, 88);
        set_club_season_result(cup_entrants[0][1], 6, 88);
        break;
    case 79:
        fixtures[1][0][87] = cup_entrants[4][0] << 5;
        fixtures[1][1][87] = cup_entrants[4][1] << 5;
        uefa_cup_next_week = 87;
        set_club_season_result(cup_entrants[4][0], 7, 87);
        set_club_season_result(cup_entrants[4][1], 7, 87);
        fixtures[1][0][91] = fixtures[1][1][87];
        fixtures[1][1][91] = fixtures[1][0][87];
        fixtures[2][0][91] = cup_entrants[5][0] << 5;
        fixtures[2][1][91] = cup_entrants[5][1] << 5;
        cup_winners_next_week = 91;
        set_club_season_result(cup_entrants[5][0], 8, 91);
        set_club_season_result(cup_entrants[5][1], 8, 91);
        fixtures[3][0][91] = cup_entrants[6][0] << 5;
        fixtures[3][1][91] = cup_entrants[6][1] << 5;
        european_cup_next_week = 91;
        set_club_season_result(cup_entrants[6][0], 9, 91);
        set_club_season_result(cup_entrants[6][1], 9, 91);
        break;
    }
}

void draw_euro_cup_groups(void)
{
    unsigned char far *p;
    unsigned char col;
    unsigned char home_slot;
    unsigned char away_slot;
    char human_in_a;
    char human_in_b;

    human_in_a = 0;
    human_in_b = 0;
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 < 80; d_5d9c_9f69++)
        in_euro_cup_groups[d_5d9c_9f69] = 0;
    for (d_5d9c_9d93 = 0; d_5d9c_9d93 <= 7; d_5d9c_9d93++) {
        if (d_5d9c_9d93 < 4) {
            euro_cup_groups[0][d_5d9c_9d93] = cup_entrants[6][d_5d9c_9d93];
            if (is_human_team(cup_entrants[6][d_5d9c_9d93]))
                human_in_a = -1;
        } else {
            euro_cup_groups[0][d_5d9c_9d93] = cup_entrants[6][d_5d9c_9d93];
            if (is_human_team(cup_entrants[6][d_5d9c_9d93]))
                human_in_b = -1;
        }
        if (cup_entrants[6][d_5d9c_9d93] < 80)
            in_euro_cup_groups[cup_entrants[6][d_5d9c_9d93]] = -1;
    }
    memset(euro_group_stats, 0, 0x30);
    p = euro_group_schedule;
    for (loop_j = 0; loop_j <= 5; loop_j++) {
        col = *p++;
        for (loop_k = 0; loop_k <= 1; loop_k++) {
            home_slot = *p++;
            away_slot = *p++;
            for (loop_i = 0; loop_i <= 1; loop_i++) {
                fixtures[loop_k + loop_i * 2 + 1][0][col] = euro_cup_groups[loop_i][home_slot - 1] << 5;
                fixtures[loop_k + loop_i * 2 + 1][1][col] = euro_cup_groups[loop_i][away_slot - 1] << 5;
            }
        }
    }
    if (human_in_a)
        show_euro_cup_group(0);
    if (human_in_b)
        show_euro_cup_group(1);
    european_cup_next_week = 53;
    for (loop_j = 0; loop_j <= 1; loop_j++)
        for (loop_k = 0; loop_k <= 3; loop_k++)
            set_club_season_result(euro_cup_groups[loop_j][loop_k], 9, 53);
}

void show_euro_cup_group(int group)
{
    char buf[320];

    new_screen("European Cup");
    sprintf(buf, "Group %c Qualifiers", group + 'A');
    draw_text_font2(-1.0, 8.0, 2, buf);
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 3; d_5d9c_9f69++)
        draw_text_font2(-1.0, d_5d9c_9f69 * 2 + 10, is_human_team(euro_cup_groups[group][d_5d9c_9f69]) * 5 + 6, club_name(euro_cup_groups[group][d_5d9c_9f69]));
    wait_for_click(0);
}

void draw_domark_groups(void)
{
    int col, start;
    int end, h1, a1, h2, a2;
    char has_human[8];
    unsigned char far *p;
    char taken[540];

    memset(taken, 0, 540);
    memset(has_human, 0, 8);
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 < 80; d_5d9c_9f69++)
        in_cup_draw[5][d_5d9c_9f69] = 0;
    for (loop_i = 0; loop_i <= 7; loop_i++) {
        for (loop_j = 0; loop_j <= 4; loop_j++) {
            do
                d_5d9c_9f69 = random_below(40) + 40;
            while (taken[d_5d9c_9f69] != 0);
            taken[d_5d9c_9f69] = -1;
            if (is_european_entrant(d_5d9c_9f69)) {
                do
                    d_5d9c_9f69 = random_below(60) + 480;
                while (taken[d_5d9c_9f69] != 0);
                taken[d_5d9c_9f69] = -1;
            }
            if (d_5d9c_9f69 < 80)
                in_cup_draw[5][d_5d9c_9f69] = -1;
            domark_groups[loop_i][loop_j] = d_5d9c_9f69;
            if (is_human_team(d_5d9c_9f69))
                has_human[loop_i] = -1;
        }
    }
    memset(domark_group_stats, 0, 240);
    p = domark_group_schedule;
    for (loop_j = 0; loop_j <= 11; loop_j++) {
        col = *p++;
        d_5d9c_9ee7 = *p++;
        start = *p++;
        end = *p++;
        h1 = *p++;
        a1 = *p++;
        h2 = *p++;
        a2 = *p++;
        for (loop_i = start; loop_i <= end; loop_i++) {
            loop_k = d_5d9c_9ee7 + (loop_i - start) * 2;
            fixtures[loop_k][0][col] = domark_groups[loop_i][h1 - 1] << 5;
            week_fixtures[loop_k - 1][1][col - 1] = domark_groups[loop_i][a1 - 1] << 5;
            fixtures[loop_k + 1][0][col] = domark_groups[loop_i][h2 - 1] << 5;
            fixtures[loop_k + 1][1][col] = domark_groups[loop_i][a2 - 1] << 5;
        }
    }
    for (loop_i = 0; loop_i <= 7; loop_i++)
        if (has_human[loop_i])
            show_domark_group(loop_i);
    domark_cup_next_week = 15;
    for (loop_j = 0; loop_j <= 7; loop_j++)
        for (loop_k = 0; loop_k <= 4; loop_k++)
            set_club_season_result(domark_groups[loop_j][loop_k], 12, 15);
}

void show_domark_group(int group)
{
    char buf[30];

    new_screen("Domark Trophy");
    sprintf(buf, "Group %c Qualifiers", group + 'A');
    draw_text_font2(-1, 7, 2, buf);
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 4; d_5d9c_9f69++)
        draw_text_font2(-1, d_5d9c_9f69 * 2 + 9, is_human_team(domark_groups[group][d_5d9c_9f69]) * 5 + 6, club_name(domark_groups[group][d_5d9c_9f69]));
    wait_for_click(0);
}

void draw_cup_round(int comp, int first_slot, int last_slot, int week, int return_week)
{
    char separate_seeds;
    int first_tie, seeded_left;
    char used[100];
    char name[80];
    char buf[320];
    char ok;
    int week_no;

    memset(used, 0, 100);
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 79; d_5d9c_9f69++)
        in_cup_draw[comp + 1][d_5d9c_9f69] = 0;
    week_match_count = (last_slot - first_slot + 1) / 2;
    first_tie = (first_slot - 1) / 2;
    seeded_left = 0;
    if (comp == 5 || comp == 6 || comp == 7)
        for (d_5d9c_9d95 = 0; d_5d9c_9d95 <= week_match_count * 2 - 1; d_5d9c_9d95++)
            if (cup_seeding[cup_entrants[comp - 1][d_5d9c_9d95]] > 0)
                seeded_left++;
    for (loop_i = first_tie; loop_i <= first_tie + week_match_count - 1; loop_i++) {
        separate_seeds = seeded_left > 0 && week_match_count > 4;
        for (d_5d9c_9ecf = 0; d_5d9c_9ecf <= 1; d_5d9c_9ecf++) {
            do {
                do
                    loop_j = random_below(week_match_count * 2);
                while (used[loop_j] != 0);
                ok = -1;
                if (separate_seeds && d_5d9c_9ecf == 1
                    && cup_seeding[cup_entrants[comp - 1][loop_j]] == cup_seeding[home_team])
                    ok = 0;
            } while (!ok);
            fixtures[loop_i + 1][d_5d9c_9ecf][week] = cup_entrants[comp - 1][loop_j] << 5;
            if (return_week != -1)
                fixtures[loop_i + 1][1 - d_5d9c_9ecf][return_week] = cup_entrants[comp - 1][loop_j] << 5;
            if (d_5d9c_9ecf == 0)
                home_team = cup_entrants[comp - 1][loop_j];
            else
                away_team = cup_entrants[comp - 1][loop_j];
            used[loop_j] = -1;
            if (seeded_left > 0 && cup_seeding[cup_entrants[comp - 1][loop_j]] > 0)
                seeded_left--;
        }
        draw_involves_human = is_human_team(home_team);
        if (draw_involves_human == 0)
            draw_involves_human = is_human_team(away_team);
        if (home_team < 80)
            in_cup_draw[comp + 1][home_team] = -1;
        if (away_team < 80)
            in_cup_draw[comp + 1][away_team] = -1;
        switch (comp) {
        case 1:
            strcpy(name, "FA Cup");
            fa_cup_next_week = week;
            cup_slot = 6;
            break;
        case 2:
            strcpy(name, "Rumbelows Cup");
            league_cup_next_week = week;
            cup_slot = 10;
            break;
        case 3:
            strcpy(name, "Zenith Cup");
            zenith_cup_next_week = week;
            cup_slot = 11;
            break;
        case 4:
            strcpy(name, "Domark Trophy");
            domark_cup_next_week = week;
            cup_slot = 12;
            break;
        case 5:
            strcpy(name, "UEFA Cup");
            uefa_cup_next_week = week;
            cup_slot = 7;
            break;
        case 6:
            strcpy(name, "Cup Winners Cup");
            cup_winners_next_week = week;
            cup_slot = 8;
            break;
        case 7:
            strcpy(name, "European Cup");
            european_cup_next_week = week;
            cup_slot = 9;
            break;
        }
        if (draw_involves_human) {
            new_screen("");
            sprintf(buf, "%s draw:", name);
            draw_text_font2(-1, 10, 2, buf);
            sprintf(buf, "%s v %s", trim_spaces(club_name(home_team)), trim_spaces(club_name(away_team)));
            draw_text_font2(-1, 12, 6, buf);
            week_no = contract_period_of_week(week);
            if (week & 1 && week > 6)
                sprintf(buf, "Week %d Midweek", week_no);
            else
                sprintf(buf, "Week %d", week_no);
            draw_text_font2(-1, 14, 3, buf);
            wait_for_click(0);
        }
        set_club_season_result(home_team, cup_slot, week);
        set_club_season_result(away_team, cup_slot, week);
    }
}

void pick_european_entrants(void)
{
    int far *p;
    int places[30];
    int hi[30];
    int lo[30];
    char used[460];
    register int i;
    int slot;

    memset(used, 0, sizeof used);
    for (loop_i = 0; loop_i <= 12; loop_i++) {
        d_2f3c_3579[loop_i] = 1701;
        d_2f3c_3593[loop_i] = 1701;
    }
    for (d_5d9c_9f31 = 5; d_5d9c_9f31 <= 6; d_5d9c_9f31++)
        for (d_5d9c_9d95 = 0; d_5d9c_9d95 <= 1; d_5d9c_9d95++) {
            i = cup_entrants[d_5d9c_9f31][d_5d9c_9d95];
            if (i > 79)
                used[i - 80] = -1;
        }
    p = foreign_country_ranges;
    for (loop_i = 1; loop_i <= 30; loop_i++) {
        d_5d9c_9ee7 = *p;
        p++;
        d_5d9c_9ee5 = *p;
        p++;
        d_5d9c_9e9b = *p;
        p++;
        lo[loop_i - 1] = d_5d9c_9ee7;
        hi[loop_i - 1] = d_5d9c_9ee5;
        places[loop_i - 1] = d_5d9c_9e9b;
        for (loop_j = d_5d9c_9ee7; loop_j <= d_5d9c_9ee5 - 1; loop_j++)
            for (loop_k = loop_j + 1; loop_k <= d_5d9c_9ee5; loop_k++) {
                if (foreign_team_stats[0][loop_j] + random_below(3) - random_below(3) <
                    foreign_team_stats[0][loop_k] + random_below(3) - random_below(3)) {
                    swap_bytes((void *)&d_5d9c_0522[loop_j], (void *)&d_5d9c_0522[loop_k], 2);
                    swap_bytes((void *)&used[loop_j - 1], (void *)&used[loop_k - 1], 1);
                    for (d_5d9c_9ecf = 0; d_5d9c_9ecf <= 4; d_5d9c_9ecf++)
                        swap_bytes(&foreign_team_stats[d_5d9c_9ecf][loop_j], &foreign_team_stats[d_5d9c_9ecf][loop_k], 1);
                    swap_teams_in_draws(loop_j + 79, loop_k + 79);
                    d_5d9c_9f31 = 0;
                    do {
                        for (d_5d9c_9dd7 = 0; d_5d9c_9dd7 <= 63; d_5d9c_9dd7++) {
                            if (cup_entrants[d_5d9c_9f31][d_5d9c_9dd7] == loop_j + 79)
                                cup_entrants[d_5d9c_9f31][d_5d9c_9dd7] = loop_k + 79;
                            else if (cup_entrants[d_5d9c_9f31][d_5d9c_9dd7] == loop_k + 79)
                                cup_entrants[d_5d9c_9f31][d_5d9c_9dd7] = loop_j + 79;
                        }
                        if (d_5d9c_9f31 == 0)
                            d_5d9c_9f31 = 4;
                        else
                            d_5d9c_9f31++;
                    } while (d_5d9c_9f31 != 7);
                }
            }
    }
    for (d_5d9c_9f31 = 6; d_5d9c_9f31 >= 5; d_5d9c_9f31--)
        for (d_5d9c_9d93 = 2; d_5d9c_9d93 <= 31; d_5d9c_9d93++) {
            while (used[lo[d_5d9c_9d93 - 2] - 1] != 0)
                lo[d_5d9c_9d93 - 2]++;
            cup_entrants[d_5d9c_9f31][d_5d9c_9d93] = lo[d_5d9c_9d93 - 2] + 79;
            used[lo[d_5d9c_9d93 - 2] - 1] = -1;
            lo[d_5d9c_9d93 - 2]++;
        }
    slot = 4;
    for (d_5d9c_9d91 = 0; d_5d9c_9d91 <= 29; d_5d9c_9d91++)
        for (i = 1; i <= places[d_5d9c_9d91]; i++) {
            while (used[lo[d_5d9c_9d91] - 1] != 0)
                lo[d_5d9c_9d91]++;
            cup_entrants[4][slot] = lo[d_5d9c_9d91] + 79;
            used[lo[d_5d9c_9d91] - 1] = -1;
            slot++;
            lo[d_5d9c_9d91]++;
        }
    for (i = 1; i <= 36; i++) {
        do {
            d_5d9c_9f69 = random_below(60);
        } while (used[d_5d9c_9f69 + 400] != 0);
        cup_entrants[0][i - 1] = d_5d9c_9f69 + 480;
        used[d_5d9c_9f69 + 400] = -1;
    }
}

void seed_european_cups(void)
{
    char buf[320];
    register int best = 0;

    memset(cup_seeding, 0, 540);
    for (d_5d9c_9f31 = 4; d_5d9c_9f31 <= 6; d_5d9c_9f31++)
        for (d_5d9c_9f2f = 1; d_5d9c_9f2f <= 8; d_5d9c_9f2f++) {
            selected_team = -1;
            for (d_5d9c_9d8f = 0; d_5d9c_9d8f <= (d_5d9c_9f31 == 4 ? 63 : 31); d_5d9c_9d8f++) {
                d_5d9c_9f69 = cup_entrants[d_5d9c_9f31][d_5d9c_9d8f];
                d_5d9c_9d8d = team_rating(d_5d9c_9f69) + (d_5d9c_9f69 >= 80);
                if (cup_seeding[d_5d9c_9f69] == 0 && (d_5d9c_9d8d > best || selected_team == -1)) {
                    best = d_5d9c_9d8d;
                    selected_team = d_5d9c_9f69;
                }
            }
            cup_seeding[selected_team] = d_5d9c_9f31;
            if (is_human_team(selected_team)) {
                if (d_5d9c_9f31 == 4)
                    strcpy(euro_cup_title, "UEFA");
                else if (d_5d9c_9f31 == 5)
                    strcpy(euro_cup_title, "Cup Winners");
                else
                    strcpy(euro_cup_title, "European");
                sprintf(buf, "%s have been seeded|in the %s cup", (char far *)team_names[selected_team], euro_cup_title);
                message_box(buf);
            }
        }
}

void pick_cup_entrants(void)
{
    char used[540];

    memset(used, 0, sizeof used);
    for (d_5d9c_9f31 = 6; d_5d9c_9f31 >= 5; d_5d9c_9f31--) {
        do {
            selected_team = random_below(400) + 80;
        } while (used[selected_team] != 0 || foreign_team_rating[selected_team] <= 16);
        cup_entrants[d_5d9c_9f31][0] = selected_team;
        used[selected_team] = -1;
        selected_team = -1;
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 19; d_5d9c_9f69++) {
            if (used[d_5d9c_9f69] == 0 && is_human_team(d_5d9c_9f69) == 0) {
                d_5d9c_9de9 = d_5d9c_9f31 == 5 ? 4 : 2;
                d_5d9c_9d8d = team_rating(d_5d9c_9f69) + random_below(d_5d9c_9de9) - random_below(d_5d9c_9de9);
                if (d_5d9c_9d8d > last_ranked_row || selected_team == -1) {
                    selected_team = d_5d9c_9f69;
                    last_ranked_row = d_5d9c_9d8d;
                }
            }
        }
        cup_entrants[d_5d9c_9f31][1] = selected_team;
        used[selected_team] = -1;
    }
    for (d_5d9c_9d8f = 1; d_5d9c_9d8f <= 4; d_5d9c_9d8f++) {
        selected_team = -1;
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 19; d_5d9c_9f69++) {
            if (used[d_5d9c_9f69] == 0 && is_human_team(d_5d9c_9f69) == 0) {
                d_5d9c_9d8d = team_rating(d_5d9c_9f69) + random_below(2) - random_below(2);
                if (d_5d9c_9d8d > last_ranked_row || selected_team == -1) {
                    selected_team = d_5d9c_9f69;
                    last_ranked_row = d_5d9c_9d8d;
                }
            }
        }
        cup_entrants[4][d_5d9c_9d8f - 1] = selected_team;
        used[selected_team] = -1;
    }
    cwc_english_entrant = cup_entrants[5][1];
    euro_english_entrant = cup_entrants[6][1];
    for (d_5d9c_9dd5 = 1; d_5d9c_9dd5 <= 34; d_5d9c_9dd5++) {
        do {
            selected_team = d_5d9c_9dd5 < 5 ? random_below(20) + 20 : random_below(40);
        } while (used[selected_team] != 0);
        cup_entrants[2][d_5d9c_9dd5 - 1] = selected_team;
        used[selected_team] = -1;
    }
    zenith_qualifier_count = 2;
    memset(used, 0, sizeof used);
    for (d_5d9c_9d8f = 0; d_5d9c_9d8f <= 79; d_5d9c_9d8f++) {
        selected_team = -1;
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 79; d_5d9c_9f69++) {
            if (used[d_5d9c_9f69] == 0) {
                d_5d9c_9d8d = team_rating(d_5d9c_9f69) + 150 - d_5d9c_9f69 / 20 * 50;
                if (d_5d9c_9d8d > last_ranked_row || selected_team == -1) {
                    selected_team = d_5d9c_9f69;
                    last_ranked_row = d_5d9c_9d8d;
                }
            }
        }
        if (d_5d9c_9d8f < 48)
            cup_entrants[1][d_5d9c_9d8f + 32] = selected_team;
        else
            cup_entrants[1][d_5d9c_9d8f - 48] = selected_team;
        used[selected_team] = -1;
    }
}

void add_fixture(void)
{
    replay_count++;
    week_fixtures[replay_count - 1][0][current_week] = away_club * 32;
    week_fixtures[replay_count - 1][1][current_week] = home_club * 32;
}

void set_playoff_fixtures(void)
{
    register int i;

    if (current_week == 86) {
        for (stats_division = 0; stats_division <= 2; stats_division++)
            for (i = 0; i <= 1; i++) {
                week_fixtures[stats_division * 2][i][i * 2 + 89] = league_table[stats_division + 1][5] * 32;
                week_fixtures[stats_division * 2][1 - i][i * 2 + 89] = league_table[stats_division + 1][2] * 32;
                week_fixtures[stats_division * 2 + 1][i][i * 2 + 89] = league_table[stats_division + 1][4] * 32;
                week_fixtures[stats_division * 2 + 1][1 - i][i * 2 + 89] = league_table[stats_division + 1][3] * 32;
            }
    } else {
        for (stats_division = 0; stats_division <= 2; stats_division++) {
            week_fixtures[stats_division][0][93] = playoff_winners[stats_division * 2] * 32;
            week_fixtures[stats_division][1][93] = playoff_winners[stats_division * 2 + 1] * 32;
        }
    }
}

void arrange_friendlies(void)
{
    if (current_week < 5) {
        for (d_5d9c_9bc1 = current_week; d_5d9c_9bc1 <= 4; d_5d9c_9bc1++)
            for (human_manager_index = 646; human_manager_index <= human_count + 645; human_manager_index++) {
                selected_team = manager_team[human_manager_index];
                if (selected_team < 255)
                    arrange_friendly(selected_team, d_5d9c_9bc1);
            }
    }
}

void arrange_friendly(int team, int week)
{
    if (!has_fixture_in_week(team, week)) {
        stats_division = team / 20;
        do {
            do {
                opponent_team = random_below(540);
            } while (has_fixture_in_week(opponent_team, week));
            if (opponent_team <= 19)
                position_ok = stats_division == 1 || stats_division == 2;
            else if (opponent_team <= 39)
                position_ok = stats_division == 0 || stats_division == 2 || stats_division == 3;
            else if (opponent_team <= 59)
                position_ok = stats_division == 0 || stats_division == 1 || stats_division == 3;
            else if (opponent_team <= 79)
                position_ok = stats_division == 1 || stats_division == 2;
            else if (opponent_team <= 479)
                position_ok = stats_division == 0;
            else if (opponent_team <= 539)
                position_ok = stats_division == 3;
        } while (!position_ok);
        d_5d9c_9dd7 = random_below(2);
        week_fixtures[friendly_counts[week]][d_5d9c_9dd7][week - 1] = team * 32;
        week_fixtures[friendly_counts[week]][1 - d_5d9c_9dd7][week - 1] = opponent_team * 32;
        friendly_counts[week]++;
    }
}

char has_fixture_in_week(int team, int week)
{
    found_flag = 0;
    for (d_5d9c_9f0f = 0; d_5d9c_9f0f <= friendly_counts[week] - 1; d_5d9c_9f0f++) {
        home_team = week_fixtures[d_5d9c_9f0f][0][week - 1] / 32;
        away_team = week_fixtures[d_5d9c_9f0f][1][week - 1] / 32;
        if (team == home_team || team == away_team) {
            found_flag = -1;
            d_5d9c_9f0f = friendly_counts[week] - 1;
        }
    }
    return found_flag;
}

void sort_league_table(void)
{
    d_5d9c_9ecf = 0;
    do {
        loop_j = d_5d9c_9ecf * 20;
        do {
            loop_k = loop_j + 1;
            do {
                d_5d9c_9d8b = team_wins[0][league_table[0][loop_j]] * 3 + league_round
                    - team_wins[0][league_table[0][loop_j]] - team_wins[1][league_table[0][loop_j]];
                d_5d9c_9d89 = team_wins[0][league_table[0][loop_k]] * 3 + league_round
                    - team_wins[0][league_table[0][loop_k]] - team_wins[1][league_table[0][loop_k]];
                d_5d9c_9d87 = team_wins[2][league_table[0][loop_j]];
                d_5d9c_9d85 = team_wins[2][league_table[0][loop_k]];
                home_attack_wins = team_wins[3][league_table[0][loop_j]];
                away_attack_wins = team_wins[3][league_table[0][loop_k]];
                if (d_5d9c_9d8b < d_5d9c_9d89 ||
                    (d_5d9c_9d8b == d_5d9c_9d89 && d_5d9c_9d87 - home_attack_wins < d_5d9c_9d85 - away_attack_wins) ||
                    (d_5d9c_9d8b == d_5d9c_9d89 && d_5d9c_9d87 - home_attack_wins == d_5d9c_9d85 - away_attack_wins &&
                     d_5d9c_9d87 < d_5d9c_9d85))
                    swap_bytes(&league_table[0][loop_j], &league_table[0][loop_k], 1);
                loop_k++;
            } while (loop_k != d_5d9c_9ecf * 20 + 20);
            loop_j++;
        } while (loop_j != d_5d9c_9ecf * 20 + 19);
        d_5d9c_9ecf++;
    } while (d_5d9c_9ecf != 4);
}
