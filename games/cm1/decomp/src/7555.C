/* @at 7555:0000 */
/* @data 5d9c:4890 */
/* @module */

/* Overlay 3: the match: setting it up and restoring the teams afterwards, the ground and
 * the gate, the halves, extra time and penalties, the clock and the score, keys during
 * play, fouls, injuries, bookings and sendings off with their commentary, tactical
 * moves and substitutions. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <math.h>

/* the functions, in address order: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void show_message_done(char far *msg);
void restore_menu_button(int team);
void view_team_tactics(int team);
void draw_team_sheet(int team, int full_names);
void play_week_matches(void);
void print_results_line(char instant, char far *line);
void order_week_fixtures(void);
void choose_match_venue(void);
void compute_gate_attendance(void);
void setup_foreign_teams(void);
void prepare_match(void);
void restore_match_tactics(void);
void roll_player_match_form(int team);
void play_match(void);
char has_extra_time(int week, int fixture);
char has_penalty_shootout(int week, int fixture);
void pick_shirt_colours(int team, int home, int away);
void play_attack(void);
void home_attack_phase(void);
void away_attack_phase(void);
void home_chance(void);
void away_chance(void);
void home_attempt_on_goal(void);
void away_attempt_on_goal(void);
unsigned char late_attack_bonus(unsigned char row, int minute);
unsigned char late_defence_bonus(unsigned char row, int minute);
void advance_match_clock(void);
void init_substitutions(void);
void set_bench_positions(int team);
void pick_goal_scorer(int team);
int scorer_chance(int team, int slot);
void commit_foul(int team);
void foul_injury(int fouler_team, int fouler, int victim_team, int victim);
void punish_foul(int team, int slot);
void pick_foul_type(void);
void tactical_move_menu(int team, char from_stats);
void make_substitution();             /* no prototype: 38b3 passes it two arguments */
void pick_best_substitute(int team);
void show_attack_direction(float attack_x, float defend_x);
void draw_match_stat_bars(void);

void draw_text_box(float x, float y, int bg, int fg, int w, char far *s);
void draw_label(float x, float y, int bg, int fg, int w, char far *s);
void wait_ticks(int ticks);
void draw_button(int a, char b);
void new_screen(char far *title);
char is_human_team(int x);
void apply_formation(int t, int k, char c);
void pick_captain(int team);
void draw_formation(int team);
int wait_for_button(int a);
void player_details_screen(int player, int a, char b);
void do_player_action(int player, int a);
void set_fill_colour(int c);
void fill_rect(int x1, int y1, int x2, int y2);
void set_draw_colour(int c);
void draw_rect(int x1, int y1, int x2, int y2);
void add_button(int a, float x, float y, int c, int d, int e, char far *s);
char far *shirt_number_text(int x);
char far *player_surname(int player);
char far *player_full_name(int player);
void finish_match_stats(void);
void wait_for_click(int a);
void match_stats_screen(int a, int b, char c);
void add_gate_receipts(int team);
void far *vm_map(int handle, int page);
void record_match_result(void);
void save_match_facts(void);
int random_below(int n);
char is_league_week(int);
char is_fa_cup_week(int);
char is_rumbelows_match(int, int);
char is_zenith_match(int, int);
char is_domark_match(int, int);
char is_uefa_match(int, int);
char is_cup_winners_match(int, int);
char is_european_cup_match(int, int);
char is_playoff_week(int);
int contract_period_of_week(int x);
char far *right_chars(char far *s, unsigned n);
extern int menu_choice;
extern int selected_slot;
extern char near *team_names[];
extern int style_and_formation;
extern int loop_j;
extern int d_5d9c_9e93;
extern int home_team;
extern int away_team;
extern int home_club;
extern int away_club;
extern int d_5d9c_9f69;
extern int captain_slot;
extern int captain_slots[];
extern char menu_choice_done;
extern char exit_chosen;
extern int d_5d9c_9e8d;
extern int cur_player;
extern int player_screen_action;
extern int loop_i;
extern int d_5d9c_9f51;
extern int d_5d9c_9e8b;
extern float text_y;
extern int replay_count;
extern int last_neutral_venue;
extern char playing_week_matches;
extern int current_week;
extern int match_counter;
extern int week_match_count;
extern int results_line;
extern int kickoff_time;
extern int fixture_loop;
extern int fixture_index;
extern char went_to_extra_time;
extern int period_end_minute;
extern int home_is_human;
extern int away_is_human;
extern int matchfax_handle;
extern char far *matchfax_buf;
extern int season;
extern int far team_manager[];
extern unsigned char far manager_style_formation[];
extern unsigned char far team_tactics[][3][13];
extern unsigned char far d_2f3c_35ac[][3][13];
extern unsigned char far edited_tactics[][13];
extern int far d_2f3c_2d55[][13];
extern int far d_2f3c_2d57[][13];
extern int far penalty_winner[];
extern int far last_match_info[][80];
extern unsigned char far team_colours[];
extern unsigned char far team_country[];
extern unsigned char far foreign_team_tactic[];
extern unsigned char far foreign_team_colours[];
extern int far fixture_table[][2][94];
extern char far * far country_names[];
extern char far * far position_names[];
extern int far week_first_match[];
extern int far week_fixture_counts[];
extern char far shirt_label[];
extern char far squad_name_text[];
extern char far fixture_order[];
extern char far match_record[];
extern char far in_cup_draw[][80];
extern char far results_heading[];
extern char far result_line[];
extern char far d_1f3e_48f6[];
void play_effect_stub(int a);
void empty_stub(void);
void scroll_rect_up(unsigned x, int y, unsigned x2, unsigned y2, int dy, int colour);
void draw_line(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
char far *char_to_string();
float random_fraction(void);
int max_int(int a, int b);
int min_int(int a, int b);
float min_float(float a, float b);
long max_long(long a, long b);
void draw_text_at(int x, int y, int colour, char far *s);
char is_wembley_match(int, int);
char is_neutral_venue_match(int a, int b);
char cup_crowd_percent(int);
int league_crowd_bonus(int, int);
extern int d_5d9c_9e79;
extern int loop_k;
extern char d_5d9c_9b70;
extern int found_group;
extern int found_group_slot;
extern int d_5d9c_9e73;
extern int d_5d9c_9e71;
extern char at_home_ground;
extern int d_5d9c_9e6f;
extern int d_5d9c_9e6d;
extern int venue_team;
extern int d_5d9c_9e69;
extern int d_5d9c_9e67;
extern int derby_factor;
extern long attendance;
extern int human_manager_index;
extern int home_interest;
extern int away_interest;
extern int league_round;
extern int home_league_pos;
extern int d_5d9c_9e51;
extern float home_crowd_share;
extern float away_crowd_share;
extern unsigned char match_interest;
extern int stats_division;
extern float d_5d9c_9ad8;
extern float d_5d9c_9ad4;
extern float d_5d9c_9ad0;
extern float d_5d9c_9acc;
extern char far human_fixtures[];
extern char far venue_name[];
extern unsigned char far team_stats[][82];
extern unsigned char far ground_coords[][140];
extern unsigned char far season_status[];
extern unsigned char far board_confidence[];
extern unsigned char far home_games_played[];
extern long far season_attendance_total[];
void squad_screen(int team);
int two_leg_comp_index(int week, int n);
int league_table_slot(int team);
void set_competition_name(int team, int b, int c);
char is_first_leg_week(int);
char is_second_leg_week(int);
extern char near *foreign_team_names[];
extern char near *home_foreign_name;
extern char near *away_foreign_name;
extern int home_tactic_style;
extern int home_country;
extern int away_tactic_style;
extern int away_country;
extern int home_is_cpu;
extern int away_is_cpu;
extern int opponent_team;
extern int d_5d9c_9f3d;
extern int home_attempts;
extern int away_attempts;
extern int home_defence_wins;
extern int away_defence_wins;
extern int home_attacks;
extern int away_attacks;
extern int home_attack_wins;
extern int away_attack_wins;
extern int home_goals;
extern int away_goals;
extern int match_half_minutes;
extern int match_minute;
extern int home_won_on_away_goals;
extern int away_won_on_away_goals;
extern int home_first_leg_goals;
extern int away_first_leg_goals;
extern int cup_slot;
extern char is_first_leg;
extern char is_second_leg;
extern char d_5d9c_9b6d;
extern char in_penalty_shootout;
extern int first_leg_ems_handle;
extern char far *first_leg_scores;
extern int home_shootout_goals;
extern int away_shootout_goals;
extern int d_5d9c_9e31;
extern int d_5d9c_9e2f;
extern int d_5d9c_9e2d;
extern int d_5d9c_9e2b;
extern int d_5d9c_9e29;
extern int d_5d9c_9e27;
extern unsigned char far squad_size[];
extern unsigned char far foreign_team_rating[];
extern unsigned char far slot_status[][13];
extern int far team_selection[][13];
extern long far slot_ratings[][13];
extern unsigned char far saved_lineups[][3][13];
extern unsigned char far foreign_slot_ratings[][13];
extern unsigned char huge player_attrs[][1702];
extern int far squad_players[][26];
extern char far d_1f3e_bfa2[];
extern char far d_1f3e_f4d2[];
extern char far competition_name[];
extern char far d_1f3e_47b6[];
extern char far d_1f3e_4766[];
void set_big_match_factor(int team);
void compute_team_strengths(int team);
void draw_match_screen(char c);
void away_goals_winner(void);
void show_commentary(int team, char far *s);
void penalty_shootout(void);
void take_penalty(int team, int a, int b);
void draw_score(void);
void disallowed_goal(int team);
void score_goal(int a, char c, int b, int team);
void add_fixture(void);
void wait_mouse_release(void);
void present_screen_rect(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
char is_cup_replay_week(int);
extern int d_5d9c_9e25;
extern int stoppage_time;
extern int d_5d9c_9e21;
extern int d_5d9c_9e1f;
extern int d_5d9c_9e1d;
extern int d_5d9c_9e1b;
extern int shirt_bg;
extern int shirt_fg;
extern char d_5d9c_9b6b;
extern int home_midfield;
extern int away_midfield;
extern int d_5d9c_9e19;
extern int d_5d9c_9e15;
extern char attacking_side;
extern int attack_over;
extern int d_5d9c_9e11;
extern int home_attack_strength;
extern int d_5d9c_9e0d;
extern int away_defence;
extern int d_5d9c_9e09;
extern int away_attack_strength;
extern int d_5d9c_9e05;
extern int home_defence;
extern char is_set_piece;
extern int d_5d9c_9bb7;
extern int d_5d9c_9bb5;
extern int ranked_manager;
extern int home_shooting;
extern int away_shooting;
extern int d_5d9c_9dfd;
extern int away_keeping;
extern int home_keeping;
extern int scorer_slot;
extern char d_5d9c_9b6a;
extern char penalty_scored;
extern char far match_period_text[];
extern char far d_1f3e_4676[];
extern char far d_1f3e_4626[];
extern unsigned char far team_away_colours[];
extern unsigned char far foreign_away_colours[];
extern unsigned char far d_2f3c_84a7[][60];
extern unsigned char far d_2f3c_83f3[][60];
int take_mouse_clicks(void);
char far *poll_key_string(void);
char can_play_position(int a, int b);
char is_defence_position(int x);
char is_midfield_position(int x);
char is_attack_position(int x);
char is_left_position(int x);
char is_right_position(int x);
char is_centre_position(int x);
void print_match_minute(int minute);
unsigned char player_match_strength(int p, int team);
extern int d_5d9c_9df5;
extern int d_5d9c_9df3;
extern int home_sub_minute;
extern int away_sub_minute;
extern char home_sub1_allowed;
extern char away_sub1_allowed;
extern char home_sub2_allowed;
extern char away_sub2_allowed;
extern char victim_retaliates;
extern char injury_shown;
extern char d_5d9c_9b62;
extern char d_5d9c_9b9b;
extern int d_5d9c_9ecf;
extern int d_5d9c_9ded;
extern int d_5d9c_9deb;
extern int d_5d9c_9eb7;
extern int button_style;
extern int transfer_other_club;
extern int d_5d9c_9de9;
extern int d_5d9c_9de7;
extern int d_5d9c_9de5;
extern int foul_victim_slot;
extern int d_5d9c_9de1;
extern int foul_type;
extern int last_ranked_row;
extern char far fouler_name[];
extern char far victim_name[];
void clear_commentary(void);
void tactics_editor(int team);
void draw_text_font2(float x, float y, int colour, char far *s);
void draw_team_label(float x, float y, int team);
void show_menu(int n, char far *title, char far *items);
void wait_menu_choice(int last);
extern char in_match_tactics;
extern int d_5d9c_9dd7;
extern int card_colour;
extern int d_5d9c_9ddb;
extern int d_5d9c_9ddd;
extern int selected_team;
extern char far booked_list[];
extern char far sent_off_list[];
extern char far punishment_text[];
extern char far injured_list[];
extern char far foul_text[];
extern unsigned char far d_2f3c_2d16[][13];
void draw_zone_bar(int a, int b, int c, int d);
char far *player_short_name(int player);
void draw_text_font1(float x, float y, int colour, char far *s);
extern int d_5d9c_9dcf;
extern int d_5d9c_9dd1;
extern int sub_slot;
extern int d_5d9c_9dd5;
extern char sub_minutes[][2];
extern char sub_replaced_slot[][2];
extern char far sub_kind_text[];
extern char far sub_text[];


void show_message_done(char far *msg)
{
    char buf[80];

    sprintf(buf, "%*s", (72 - strlen(msg) * 4) / 8 + strlen(msg), msg);
    draw_text_box(1.5, 21.875, 1, 2, 0x90, buf);
    wait_ticks(75);
    draw_text_box(1.5, 21.875, 1, 4, 0x90, "       DONE");
    draw_button(menu_choice, 0);
}

void restore_menu_button(int team)
{
    if (team > 0) {
        draw_button(team, 0);
        selected_slot = 0;
    }
}

void view_team_tactics(int team)
{
    char title[100];

    do {
        new_screen("Team and tactics");
        sprintf(title, " %s ", (char far *)team_names[team]);
        if (team < 80) {
            style_and_formation = manager_style_formation[team_manager[team]];
            if (is_human_team(team)) {
                for (loop_j = 0; loop_j <= 12; loop_j++) {
                    edited_tactics[0][loop_j] = team_tactics[team][0][loop_j];
                    edited_tactics[1][loop_j] = team_tactics[team][1][loop_j];
                    edited_tactics[2][loop_j] = team_tactics[team][2][loop_j];
                }
            } else {
                apply_formation(team, style_and_formation % 16, -1);
            }
            d_5d9c_9e93 = team_colours[team];
        } else {
            d_5d9c_9f69 = team == home_team ? home_club : away_club;
            strcat(title, " - ");
            strcat(title, country_names[team_country[d_5d9c_9f69]]);
            strcat(title, " ");
            apply_formation(team, foreign_team_tactic[d_5d9c_9f69], -1);
            d_5d9c_9e93 = foreign_team_colours[d_5d9c_9f69];
        }
        draw_text_box(1.0, 4.5, -(d_5d9c_9e93 / 16), d_5d9c_9e93 % 16, 0, title);
        pick_captain(team);
        captain_slot = captain_slots[team == away_team];
        draw_team_sheet(team, 1);
        draw_formation(team);
        do {
            menu_choice_done = 0;
            d_5d9c_9e8d = wait_for_button(-1);
            if (d_5d9c_9e8d == 1) {
                menu_choice_done = -1;
            } else if (d_5d9c_9e8d > 1 && d_5d9c_9e8d < 15) {
                cur_player = d_2f3c_2d55[team][d_5d9c_9e8d];
                if (cur_player < 1700) {
                    do {
                        player_details_screen(cur_player, -1, -1);
                        do_player_action(cur_player, player_screen_action);
                    } while (!exit_chosen);
                    menu_choice_done = -1;
                }
            }
        } while (!menu_choice_done);
    } while (d_5d9c_9e8d > 1);
}

void draw_team_sheet(int team, int full_names)
{
    set_fill_colour(19);
    fill_rect(6, 58, 166, 160 - is_human_team(team) * 8);
    set_draw_colour(16);
    draw_rect(6, 58, 166, 160 - is_human_team(team) * 8);
    add_button(2, 1.0, 22.125, 1, 4, 0x131, "                  OK");
    for (loop_i = 1; loop_i <= 2; loop_i++) {
        for (d_5d9c_9f51 = 1; d_5d9c_9f51 <= 13; d_5d9c_9f51++) {
            text_y = d_5d9c_9f51 + 7;
            if (loop_i == 1) {
                strcpy(shirt_label, shirt_number_text(d_5d9c_9f51));
                if (full_names == 0)
                    add_button(0, 21.25, text_y, 1, 9, 0, shirt_label);
                else
                    draw_label(21.25, text_y, 1, 9, 0, shirt_label);
            } else {
                if (team < 80) {
                    cur_player = d_2f3c_2d57[team][d_5d9c_9f51];
                    if (full_names == 0) {
                        sprintf(squad_name_text, " %.12s", player_surname(cur_player));
                        d_5d9c_9e8b = 78;
                    } else {
                        sprintf(squad_name_text, " %.20s", player_full_name(cur_player));
                        d_5d9c_9e8b = 131;
                    }
                    add_button(0, 23.0, text_y, 0, 0, d_5d9c_9e8b, squad_name_text);
                } else {
                    sprintf(squad_name_text, " %.20s", position_names[d_2f3c_35ac[team][0][d_5d9c_9f51]]);
                    d_5d9c_9e8b = 131;
                }
                draw_label(23.0, text_y, 1, 8, d_5d9c_9e8b, squad_name_text);
            }
        }
    }
}

void play_week_matches(void)
{
    char buf[80];
    unsigned shown;

    for (replay_count = 0; replay_count < 40; replay_count++)
        penalty_winner[replay_count] = 0;
    shown = replay_count = 0;
    last_neutral_venue = -1;
    playing_week_matches = -1;
    week_first_match[current_week] = match_counter;
    week_fixture_counts[current_week] = week_match_count;
    order_week_fixtures();
    results_line = 1;
    kickoff_time = (current_week & 1) && current_week > 6 ? 910 : 440;
    for (fixture_loop = 0; fixture_loop <= week_match_count - 1; fixture_loop++) {
        fixture_index = fixture_order[fixture_loop] - 32;
        home_team = fixture_table[fixture_index][0][current_week] / 32;
        away_team = fixture_table[fixture_index][1][current_week] / 32;
        home_club = home_team;
        away_club = away_team;
        setup_foreign_teams();
        prepare_match();
        choose_match_venue();
        compute_gate_attendance();
        play_match();
        restore_match_tactics();
        went_to_extra_time = period_end_minute > 90 ? -1 : 0;
        period_end_minute = -1;
        finish_match_stats();
        if (home_is_human + away_is_human > 0) {
            wait_for_click(0);
            match_stats_screen(home_club, away_club, -1);
        }
        if (home_team < 80)
            add_gate_receipts(home_team);
        if (away_team < 80)
            add_gate_receipts(away_team);
        matchfax_buf = vm_map(matchfax_handle, 1);
        memcpy(matchfax_buf + fixture_index * 150, match_record, 149);
        if (home_team < 80) {
            last_match_info[0][home_team] = match_counter + fixture_index;
            last_match_info[1][home_team] = fixture_index;
            last_match_info[2][home_team] = current_week - 1;
            in_cup_draw[0][home_team] = -1;
        }
        if (away_team < 80) {
            last_match_info[0][away_team] = match_counter + fixture_index;
            last_match_info[1][away_team] = fixture_index;
            last_match_info[2][away_team] = current_week - 1;
            in_cup_draw[0][away_team] = -1;
        }
        record_match_result();
        if (home_is_human + away_is_human == 0 && went_to_extra_time == 0
            && (random_below(3) > 0 || fixture_loop == 0) && week_match_count > 3 && shown < 12) {
            if ((current_week & 1) == 0 || current_week < 7)
                strcpy(results_heading, "Today's");
            else
                strcpy(results_heading, "Tonights");
            strcpy(buf, result_line);
            if (is_league_week(current_week))
                sprintf(result_line, "D%d  %s", home_team / 20 + 1, buf);
            else if (is_fa_cup_week(current_week))
                sprintf(result_line, "FA  %s", buf);
            else if (is_rumbelows_match(current_week, fixture_index + 1))
                sprintf(result_line, "%cC  %s", "Rumbelows"[0], buf);
            else if (is_zenith_match(current_week, fixture_index + 1))
                sprintf(result_line, "%cC  %s", "Zenith"[0], buf);
            else if (is_domark_match(current_week, fixture_index + 1))
                sprintf(result_line, "%cT  %s", "Domark"[0], buf);
            else if (is_uefa_match(current_week, fixture_index + 1))
                sprintf(result_line, "UE  %s", buf);
            else if (is_cup_winners_match(current_week, fixture_index + 1))
                sprintf(result_line, "CW  %s", buf);
            else if (is_european_cup_match(current_week, fixture_index + 1))
                sprintf(result_line, "EC  %s", buf);
            else if (is_playoff_week(current_week))
                sprintf(result_line, "PL  %s", buf);
            else if (current_week == 5)
                sprintf(result_line, "SH  %s", buf);
            else if (current_week <= 4)
                sprintf(result_line, "FR  %s", buf);
            strcat(results_heading, " Result");
            if (week_match_count > 1)
                strcat(results_heading, "s");
            if (results_line == 1) {
                new_screen("");
                set_fill_colour(16);
                fill_rect(20, 20, 308, 188);
                set_fill_colour(20);
                fill_rect(16, 16, 304, 184);
                draw_text_box(2.5, 3.0, 1, 8, 0x119, "            Latest Results");
                print_results_line(1, results_heading);
                sprintf(buf, "Week %d Season %d", contract_period_of_week(current_week), season);
                print_results_line(0, buf);
            }
            if (results_line == 3 || random_below(4) == 0) {
                if (results_line > 1)
                    print_results_line(0, "");
                sprintf(d_1f3e_48f6, "%d", kickoff_time);
                sprintf(buf, "%c.%s", d_1f3e_48f6[0], right_chars(d_1f3e_48f6, 2));
                print_results_line(1, buf);
                kickoff_time++;
            }
            print_results_line(0, result_line);
            shown++;
        }
    }
    if (results_line > 1) {
        print_results_line(0, "");
        print_results_line(0, "");
        print_results_line(0, "Classified Check Follows");
    }
    save_match_facts();
    match_counter += week_match_count;
    playing_week_matches = 0;
}

void print_results_line(char instant, char far *line)
{
    char buf[320];

    if (results_line == 17) {
        play_effect_stub(4);
        for (d_5d9c_9e79 = 1; d_5d9c_9e79 <= 4; d_5d9c_9e79++) {
            scroll_rect_up(16, 38, 304, 183, 2, 20);
            set_draw_colour(20);
            draw_line(18, 38, 302, 38);
            draw_line(18, 39, 302, 39);
        }
        results_line = 16;
        empty_stub();
    }
    if (strlen(line) != 0) {
        if (instant)
            draw_label(3.0, results_line + 4.875, 1, 2, 0, line);
        else
            for (loop_k = 1; loop_k <= strlen(line); loop_k++) {
                play_effect_stub(5);
                sprintf(buf, "%c", line[loop_k - 1]);
                draw_text_at((loop_k - 1) * 6 + 32, results_line * 8 + 39, 1, buf);
                wait_ticks(2);
            }
    }
    results_line++;
    empty_stub();
}

void order_week_fixtures(void)
{
    char buf[320];

    strcpy(human_fixtures, "");
    strcpy(fixture_order, "");
    for (fixture_index = 0; fixture_index <= week_match_count - 1; fixture_index++) {
        home_team = fixture_table[fixture_index][0][current_week] / 32;
        away_team = fixture_table[fixture_index][1][current_week] / 32;
        d_5d9c_9b70 = is_human_team(home_team);
        if (d_5d9c_9b70 == 0)
            d_5d9c_9b70 = is_human_team(away_team);
        if (d_5d9c_9b70)
            strcat(human_fixtures, char_to_string(fixture_index + 32));
        else
            strcat(fixture_order, char_to_string(fixture_index + 32));
    }
    for (fixture_index = 0; fixture_index <= week_match_count - 1; fixture_index++) {
        found_group = random_below(strlen(fixture_order));
        found_group_slot = random_below(strlen(fixture_order));
        d_5d9c_9e73 = fixture_order[found_group];
        d_5d9c_9e71 = fixture_order[found_group_slot];
        fixture_order[found_group] = d_5d9c_9e71;
        fixture_order[found_group_slot] = d_5d9c_9e73;
    }
    strcpy(buf, fixture_order);
    sprintf(fixture_order, "%s%s", human_fixtures, buf);
}

void choose_match_venue(void)
{
    at_home_ground = 0;
    if (is_wembley_match(current_week, fixture_index + 1)) {
        strcpy(venue_name, "WEMBLEY STADIUM");
        d_5d9c_9e6f = 2;
        d_5d9c_9e6d = 2;
    } else if (fixture_index == 0 && (current_week == 87 || current_week == 91)) {
        venue_team = home_team;
        strcpy(venue_name, team_names[venue_team]);
        d_5d9c_9e6f = 3;
        d_5d9c_9e6d = 1;
    } else if (current_week == 91 && fixture_index == 1) {
        strcpy(venue_name, "ROTTERDAM");
        d_5d9c_9e6f = 2;
        d_5d9c_9e6d = 2;
    } else if (current_week == 91 && fixture_index == 2) {
        strcpy(venue_name, "MILAN");
        d_5d9c_9e6f = 2;
        d_5d9c_9e6d = 2;
    } else if (is_neutral_venue_match(current_week, fixture_index + 1)) {
        d_5d9c_9e69 = 0;
        for (d_5d9c_9e67 = 0; d_5d9c_9e67 <= 79; d_5d9c_9e67++)
            if (team_stats[1][d_5d9c_9e67] > d_5d9c_9e69 && d_5d9c_9e67 != home_team
                && d_5d9c_9e67 != away_team && d_5d9c_9e67 != last_neutral_venue) {
                d_5d9c_9e69 = team_stats[1][d_5d9c_9e67];
                venue_team = d_5d9c_9e67;
            }
        last_neutral_venue = venue_team;
        strcpy(venue_name, team_names[venue_team]);
        d_5d9c_9e6f = 2;
        d_5d9c_9e6d = 2;
    } else {
        venue_team = home_team;
        strcpy(venue_name, team_names[venue_team]);
        d_5d9c_9e6f = 3;
        d_5d9c_9e6d = 1;
        at_home_ground = -1;
    }
}

void compute_gate_attendance(void)
{
    derby_factor = 0;
    if (strstr(venue_name, "WEMBLEY") || strstr(venue_name, "MILAN")
        || strstr(venue_name, "ROTTERDAM")) {
        attendance = ((current_week == 5 ? 60 : 80) - random_fraction()) * 1000.0;
        return;
    }
    if (current_week == 76 || current_week == 77) {
        attendance = (team_stats[1][venue_team] - random_fraction()) * 1000.0;
        return;
    }
    if ((home_club < 80 || home_club >= 480) && (away_club < 80 || away_club >= 480)
        && current_week > 5) {
        long dx, dy;

        human_manager_index = home_club - (home_club >= 480 ? 400 : 0);
        loop_i = away_club - (away_club >= 480 ? 400 : 0);
        dx = ground_coords[0][human_manager_index] - ground_coords[0][loop_i];
        dy = ground_coords[1][human_manager_index] - ground_coords[1][loop_i];
        derby_factor = 30.0 - sqrt(dx * dx + dy * dy) * 0.857;
    }
    home_interest = derby_factor > 0 ? derby_factor : 0;
    away_interest = derby_factor;
    if (is_league_week(current_week)) {
        if (season_status[home_team] > 1)
            home_interest += league_crowd_bonus(home_league_pos, league_round);
        if (season_status[away_team] > 1)
            away_interest += league_crowd_bonus(d_5d9c_9e51, league_round);
    }
    home_crowd_share = 0.875;
    away_crowd_share = 0.125;
    if (is_league_week(current_week))
        match_interest = 50 - home_team / 20 * 6;
    else if (is_fa_cup_week(current_week)) {
        match_interest = cup_crowd_percent(current_week);
        home_crowd_share = 0.75;
        away_crowd_share = 0.25;
    } else if (is_rumbelows_match(current_week, fixture_index + 1)) {
        match_interest = cup_crowd_percent(current_week);
        home_crowd_share = 0.75;
        away_crowd_share = 0.25;
    } else if (is_uefa_match(current_week, fixture_index + 1) || is_cup_winners_match(current_week, fixture_index + 1)
               || is_european_cup_match(current_week, fixture_index + 1)) {
        match_interest = 90;
        home_crowd_share = 0.95;
        away_crowd_share = 0.05;
    } else if (is_playoff_week(current_week)) {
        match_interest = 100;
        home_crowd_share = 0.75;
        away_crowd_share = 0.25;
    } else if (is_zenith_match(current_week, fixture_index + 1) || is_domark_match(current_week, fixture_index + 1))
        match_interest = 20;
    else
        match_interest = 10;
    if (derby_factor > 22)
        match_interest = match_interest + 50;
    home_interest = min_int(100, max_int(home_interest + match_interest, 10));
    away_interest = min_int(100, max_int(away_interest + match_interest, 10));
    stats_division = (min_int(home_team / 20, 3) + min_int(away_team / 20, 3)) * 25;
    d_5d9c_9ad8 = ((board_confidence[home_team] + team_stats[0][home_team] * 2 - 100) / 200.0 + 1)
                  * (home_interest / (stats_division + 75.0));
    d_5d9c_9ad4 = ((board_confidence[away_team] + team_stats[0][away_team] * 2 - 75) / 200.0 + 1)
                  * (away_interest / (stats_division + 75.0));
    d_5d9c_9ad0 = min_float(team_stats[1][home_team] * d_5d9c_9ad8 * home_crowd_share,
                              team_stats[1][home_team] * home_crowd_share);
    d_5d9c_9acc = min_float(team_stats[1][away_team] * d_5d9c_9ad4 * 0.3,
                              team_stats[1][home_team] * away_crowd_share);
    attendance = max_long(2000.0 - random_fraction() * 1000.0,
                              (min_float(d_5d9c_9ad0 + d_5d9c_9acc - random_fraction(),
                                           team_stats[1][venue_team]) - random_fraction()) * 1000.0);
    if (home_team < 80 && current_week > 4 && venue_team == home_team) {
        home_games_played[home_team]++;
        season_attendance_total[home_team] += attendance;
    }
}

void setup_foreign_teams(void)
{
    if (home_team > 79) {
        home_foreign_name = foreign_team_names[home_team];
        home_tactic_style = foreign_team_tactic[home_team];
        apply_formation(80, home_tactic_style, 0);
        team_stats[0][80] = random_below(9) + 4;
        team_stats[1][80] = max_int((foreign_team_rating[home_team] * 6 - 50) * (1 - random_below(6) / 20.0), 5);
        team_stats[4][80] = foreign_team_rating[home_team];
        team_stats[6][80] = 100;
        home_country = team_country[home_team];
        if (home_country == 31)
            home_country = 0;
        home_team = 80;
    } else {
        home_tactic_style = manager_style_formation[team_manager[home_team]] % 16;
        home_country = 0;
    }
    if (away_team > 79) {
        away_foreign_name = foreign_team_names[away_team];
        away_tactic_style = foreign_team_tactic[away_team];
        apply_formation(81, away_tactic_style, 0);
        team_stats[0][81] = random_below(9) + 4;
        team_stats[1][81] = max_int((foreign_team_rating[away_team] * 6 - 50) * (1 - random_below(6) / 5.0), 5);
        team_stats[4][81] = foreign_team_rating[away_team];
        team_stats[6][81] = 100;
        away_country = team_country[away_team];
        if (away_country == 31)
            away_country = 0;
        away_team = 81;
    } else {
        away_tactic_style = manager_style_formation[team_manager[away_team]] % 16;
        away_country = 0;
    }
}

void prepare_match(void)
{
    unsigned i, j;

    for (loop_j = 0; loop_j <= 12; loop_j++) {
        slot_status[0][loop_j] = loop_j > 10 ? 4 : 0;
        slot_status[1][loop_j] = loop_j > 10 ? 4 : 0;
        slot_status[2][loop_j] = 0;
        slot_status[3][loop_j] = 0;
        if (home_team < 80)
            slot_status[4][loop_j] = player_attrs[11][team_selection[home_team][loop_j]];
        else
            slot_status[4][loop_j] = 16;
        if (away_team < 80)
            slot_status[5][loop_j] = player_attrs[11][team_selection[away_team][loop_j]];
        else
            slot_status[5][loop_j] = 16;
    }
    for (i = 0; i < 6; i++)
        captain_slots[i] = 0;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 94; j++)
            slot_ratings[i][j] = 0;

    home_is_human = 0;
    home_is_cpu = 1;
    if (home_team < 80) {
        if (is_human_team(home_team)) {
            opponent_team = away_team;
            squad_screen(home_team);
            home_is_human = 1;
            home_is_cpu = 0;
        }
        home_league_pos = league_table_slot(home_team);
        for (d_5d9c_9f3d = 0; d_5d9c_9f3d <= squad_size[home_team] - 1; d_5d9c_9f3d++) {
            d_1f3e_bfa2[squad_players[home_team][d_5d9c_9f3d]] = 0;
            d_1f3e_f4d2[squad_players[home_team][d_5d9c_9f3d]] = 0;
        }
    } else
        home_league_pos = random_below(10);
    roll_player_match_form(home_team);

    away_is_human = 0;
    away_is_cpu = 1;
    if (away_team < 80) {
        if (is_human_team(away_team)) {
            opponent_team = home_team;
            squad_screen(away_team);
            away_is_human = 1;
            away_is_cpu = 0;
        }
        d_5d9c_9e51 = league_table_slot(away_team);
        for (d_5d9c_9f3d = 0; d_5d9c_9f3d <= squad_size[away_team] - 1; d_5d9c_9f3d++) {
            d_1f3e_bfa2[squad_players[away_team][d_5d9c_9f3d]] = 0;
            d_1f3e_f4d2[squad_players[away_team][d_5d9c_9f3d]] = 0;
        }
    } else
        d_5d9c_9e51 = random_below(10);
    roll_player_match_form(away_team);

    memset(match_record, 0, 149);
    strcpy(match_record, "ZZZZZZZZ");
    if (home_is_human + away_is_human > 0) {
        set_competition_name(current_week, fixture_index + 1, home_league_pos);
        strupr(competition_name);
    }
    home_attempts = 0;
    away_attempts = 0;
    home_defence_wins = 1;
    away_defence_wins = 1;
    home_attacks = 1;
    away_attacks = 1;
    home_attack_wins = 1;
    away_attack_wins = 1;
    home_goals = 0;
    away_goals = 0;
    strcpy(d_1f3e_47b6, "");
    strcpy(d_1f3e_4766, "");
    match_half_minutes = 0;
    match_minute = 0;
    period_end_minute = 45;
    home_won_on_away_goals = 0;
    away_won_on_away_goals = 0;
    home_first_leg_goals = 0;
    away_first_leg_goals = 0;
    is_first_leg = 0;
    is_second_leg = 0;
    if (is_first_leg_week(current_week) || is_second_leg_week(current_week)) {
        d_5d9c_9b6d = 0;
        if (is_rumbelows_match(current_week, fixture_index + 1)
            || is_uefa_match(current_week, fixture_index + 1)
            || is_cup_winners_match(current_week, fixture_index + 1) && current_week != 91
            || is_european_cup_match(current_week, fixture_index + 1)
               && (current_week < 53 || current_week > 79 && current_week != 91)
            || is_playoff_week(current_week))
            d_5d9c_9b6d = -1;
        if (is_first_leg_week(current_week))
            is_first_leg = d_5d9c_9b6d;
        else if (is_second_leg_week(current_week))
            is_second_leg = d_5d9c_9b6d;
    }
    if (is_second_leg) {
        cup_slot = two_leg_comp_index(current_week, fixture_index + 1);
        first_leg_scores = vm_map(first_leg_ems_handle, 0);
        home_first_leg_goals = *(unsigned char far *)(first_leg_scores + cup_slot * 80 + fixture_index * 2 + 1);
        away_first_leg_goals = *(unsigned char far *)(first_leg_scores + cup_slot * 80 + fixture_index * 2);
    }
    in_penalty_shootout = 0;
    home_shootout_goals = 0;
    away_shootout_goals = 0;
    for (loop_j = 0; loop_j <= 12; loop_j++)
        for (loop_k = 0; loop_k <= 2; loop_k++) {
            if (home_team < 80)
                saved_lineups[0][loop_k][loop_j] = team_tactics[home_team][loop_k][loop_j];
            if (away_team < 80)
                saved_lineups[1][loop_k][loop_j] = team_tactics[away_team][loop_k][loop_j];
        }
    if (home_team < 80) {
        d_5d9c_9e31 = manager_style_formation[team_manager[home_team]] / 16;
        d_5d9c_9e2f = manager_style_formation[team_manager[home_team]] % 16;
    }
    if (away_team < 80) {
        d_5d9c_9e2d = manager_style_formation[team_manager[away_team]] / 16;
        d_5d9c_9e2b = manager_style_formation[team_manager[away_team]] % 16;
    }
}

void restore_match_tactics(void)
{
    for (loop_j = 0; loop_j <= 12; loop_j++)
        for (loop_k = 0; loop_k <= 2; loop_k++) {
            if (home_team < 80)
                team_tactics[home_team][loop_k][loop_j] = saved_lineups[0][loop_k][loop_j];
            if (away_team < 80)
                team_tactics[away_team][loop_k][loop_j] = saved_lineups[1][loop_k][loop_j];
        }
    if (home_team < 80)
        manager_style_formation[team_manager[home_team]] = d_5d9c_9e31 * 16 + d_5d9c_9e2f;
    if (away_team < 80)
        manager_style_formation[team_manager[away_team]] = d_5d9c_9e2d * 16 + d_5d9c_9e2b;
}

void roll_player_match_form(int team)
{
    d_5d9c_9e29 = team == home_team ? home_interest : away_interest;
    for (loop_j = 0; loop_j <= 12; loop_j++) {
        if (team < 80) {
            cur_player = team_selection[team][loop_j];
            player_attrs[16][cur_player] = random_below(player_attrs[8][cur_player]) == 0
                ? max_int(player_attrs[15][cur_player] * (random_below(3) + 4) * 0.1, 10)
                : player_attrs[15][cur_player];
            if (d_5d9c_9e29 > 65) {
                if (cur_player % 8 == 0)
                    player_attrs[16][cur_player] = min_int(player_attrs[16][cur_player] + random_below(10) + 15,
                                                               player_attrs[9][cur_player] + 25);
                else if (cur_player % 8 == 1)
                    player_attrs[16][cur_player] = max_int(player_attrs[16][cur_player] - 15 - random_below(10), 10);
            }
        } else {
            if (team == 80)
                d_5d9c_9e27 = foreign_team_rating[home_club];
            else if (team == 81)
                d_5d9c_9e27 = foreign_team_rating[away_club];
            foreign_slot_ratings[team == 81][loop_j] = max_int(d_5d9c_9e27 + random_below(5) - random_below(5), 1);
        }
    }
}

void play_match(void)
{
    set_big_match_factor(home_team);
    set_big_match_factor(away_team);
    compute_team_strengths(home_team);
    compute_team_strengths(away_team);
    init_substitutions();
    strcpy(match_period_text, "1st Half");
    if (home_is_human + away_is_human > 0) {
        play_effect_stub(6);
        play_effect_stub(2);
        draw_match_screen(0);
        wait_for_click(1);
        wait_mouse_release();
    }
    d_5d9c_9e25 = 7;
    for (;;) {
        stoppage_time = 0;
        do
            play_attack();
        while (match_minute < period_end_minute);
        while (stoppage_time > 0) {
            play_attack();
            stoppage_time--;
        }
        if (home_is_human + away_is_human > 0) {
            play_effect_stub(6);
            wait_ticks(50);
        }
        empty_stub();
        if (period_end_minute == 45) {
            match_record[0] = home_goals;
            match_record[1] = away_goals;
            strcpy(match_period_text, "2nd Half");
            period_end_minute = 90;
            if (home_is_human + away_is_human > 0) {
                wait_for_click(0);
                finish_match_stats();
                match_stats_screen(home_club, away_club, 0);
                draw_match_screen(0);
                play_effect_stub(6);
                play_effect_stub(2);
            }
            continue;
        }
        empty_stub();
        if (period_end_minute == 90) {
            match_record[2] = home_goals;
            match_record[3] = away_goals;
            if (home_goals + home_first_leg_goals == away_goals + away_first_leg_goals
                && is_league_week(current_week) == 0 && current_week > 5) {
                if (is_second_leg != 0 && away_goals != home_first_leg_goals)
                    away_goals_winner();
                else if (has_extra_time(current_week, fixture_index + 1)) {
                    period_end_minute = 105;
                    strcpy(match_period_text, "Extra Time");
                    if (home_is_human + away_is_human > 0) {
                        show_commentary(home_team, match_period_text);
                        wait_for_click(1);
                        play_effect_stub(2);
                    }
                    continue;
                } else if (is_fa_cup_week(current_week) || current_week == 82)
                    add_fixture();
            }
        }
        empty_stub();
        if (period_end_minute == 105) {
            period_end_minute = 120;
            if (home_is_human + away_is_human > 0)
                wait_for_click(1);
            continue;
        }
        if (period_end_minute == 120) {
            match_record[4] = home_goals;
            match_record[5] = away_goals;
            if (home_goals + home_first_leg_goals == away_goals + away_first_leg_goals) {
                if (is_second_leg != 0 && away_goals != home_first_leg_goals)
                    away_goals_winner();
                else if (has_penalty_shootout(current_week, fixture_index + 1)) {
                    in_penalty_shootout = -1;
                    strcpy(match_period_text, "Penalty Shoot-Out !");
                    if (home_is_human + away_is_human > 0) {
                        play_effect_stub(2);
                        wait_for_click(1);
                    }
                    penalty_shootout();
                    match_record[6] = home_goals;
                    match_record[7] = away_goals;
                } else if (is_fa_cup_week(current_week) || current_week == 82)
                    add_fixture();
            }
        }
        empty_stub();
        break;
    }
}

char has_extra_time(int week, int fixture)
{
    if (is_second_leg != 0)
        return -1;
    if (is_zenith_match(week, fixture))
        return -1;
    if (is_cup_replay_week(week))
        return -1;
    if (week == 87 && fixture > 1)
        return -1;
    if (week == 71 && fixture > 12)
        return -1;
    switch (week) {
    case 19: case 27: case 33: case 43: case 73:
    case 76: case 82: case 88: case 91: case 94:
        return -1;
    }
    return 0;
}

char has_penalty_shootout(int week, int fixture)
{
    if (has_extra_time(week, fixture) && week != 76 && week != 82 && week != 88)
        return -1;
    return 0;
}

/* the formations' shirt numbers that 277b looks for */
static char far *clashing_colour_groups[] = {
    "04 10 11 12 13", "07 11", "02 09", "06 14", "03 13"
};

void pick_shirt_colours(int team, int home, int away)
{
    d_5d9c_9e21 = home < 80 ? team_colours[home] : foreign_team_colours[home];
    if (away < 80) {
        d_5d9c_9e1f = team_colours[away];
        d_5d9c_9e1d = team_away_colours[away];
    } else {
        d_5d9c_9e1f = foreign_team_colours[away];
        d_5d9c_9e1d = foreign_away_colours[away];
    }
    if (team == home) {
        shirt_bg = d_5d9c_9e21 / 16;
        shirt_fg = d_5d9c_9e21 % 16;
    } else {
        shirt_bg = d_5d9c_9e1f / 16;
        shirt_fg = d_5d9c_9e1f % 16;
        d_5d9c_9b6b = d_5d9c_9e21 % 16 == d_5d9c_9e1f % 16;
        if (d_5d9c_9b6b == 0) {
            sprintf(d_1f3e_4676, "%02d", d_5d9c_9e21 % 16);
            sprintf(d_1f3e_4626, "%02d", d_5d9c_9e1f % 16);
            for (d_5d9c_9e1b = 0; d_5d9c_9e1b <= 4; d_5d9c_9e1b++)
                if (strstr(clashing_colour_groups[d_5d9c_9e1b], d_1f3e_4676)
                    && strstr(clashing_colour_groups[d_5d9c_9e1b], d_1f3e_4626)) {
                    d_5d9c_9b6b = -1;
                    d_5d9c_9e1b = 4;
                }
        }
        if (d_5d9c_9b6b != 0) {
            shirt_bg = d_5d9c_9e1d / 16;
            shirt_fg = d_5d9c_9e1d % 16;
        }
    }
}

void play_attack(void)
{
    d_5d9c_9e19 = random_below(home_midfield - (derby_factor > 22
        ? (home_midfield - away_midfield) / 3 - late_attack_bonus(1, match_minute) : 0));
    d_5d9c_9e15 = random_below(away_midfield + (derby_factor > 22
        ? (home_midfield - away_midfield) / 3 - late_defence_bonus(1, match_minute) : 0));
    if (d_5d9c_9e19 >= d_5d9c_9e15) {
        home_attacks++;
        attacking_side = 1;
        if (home_is_human + away_is_human > 0)
            show_attack_direction(3.5, 21.5);
        advance_match_clock();
        home_attack_phase();
    } else {
        away_attacks++;
        attacking_side = 2;
        if (home_is_human + away_is_human > 0)
            show_attack_direction(21.5, 3.5);
        advance_match_clock();
        away_attack_phase();
    }
}

void home_attack_phase(void)
{
    do {
        attack_over = 0;
        d_5d9c_9e11 = random_below(home_attack_strength - late_attack_bonus(2, match_minute));
        d_5d9c_9e0d = random_below(away_defence - late_defence_bonus(0, match_minute));
        if (d_5d9c_9e11 >= d_5d9c_9e0d) {
            home_attack_wins++;
            advance_match_clock();
            home_chance();
        } else {
            away_defence_wins++;
            advance_match_clock();
        }
    } while (d_5d9c_9e0d <= d_5d9c_9e11 && attack_over == 0);
}

void away_attack_phase(void)
{
    do {
        attack_over = 0;
        d_5d9c_9e09 = random_below(away_attack_strength - late_defence_bonus(2, match_minute));
        d_5d9c_9e05 = random_below(home_defence - late_attack_bonus(0, match_minute));
        if (d_5d9c_9e09 >= d_5d9c_9e05) {
            away_attack_wins++;
            advance_match_clock();
            away_chance();
        } else {
            home_defence_wins++;
            advance_match_clock();
        }
    } while (d_5d9c_9e05 <= d_5d9c_9e09 && attack_over == 0);
}

void home_chance(void)
{
    is_set_piece = random_below(d_5d9c_9bb7) == 0 ? -1 : 0;
    ranked_manager = home_goals * 20 + 180;
    d_5d9c_9f51 = random_below(home_shooting) + (is_set_piece ? 100 : 0);
    if (d_5d9c_9f51 > ranked_manager) {
        home_attempts++;
        advance_match_clock();
        home_attempt_on_goal();
    } else
        advance_match_clock();
}

void away_chance(void)
{
    is_set_piece = random_below(d_5d9c_9bb5) == 0 ? -1 : 0;
    ranked_manager = away_goals * 20 + 180;
    d_5d9c_9f51 = random_below(away_shooting) + (is_set_piece ? 100 : 0);
    if (d_5d9c_9f51 > ranked_manager) {
        away_attempts++;
        advance_match_clock();
        away_attempt_on_goal();
    } else
        advance_match_clock();
}

void home_attempt_on_goal(void)
{
    char buf[320];

    if (home_is_human + away_is_human > 0) {
        present_screen_rect(0x57, 0x7e, 0x63, 0x84);
        sprintf(buf, "%d", home_attempts);
        draw_text_at(0x60, 0x84, 5, buf);
    }
    d_5d9c_9dfd = random_below(away_keeping);
    if (d_5d9c_9dfd < 26) {
        pick_goal_scorer(home_team);
        attack_over = 1;
        d_5d9c_9b6a = 0;
    } else if (d_5d9c_9dfd < 28) {
        take_penalty(home_team, away_keeping, 0);
        if (home_is_human + away_is_human > 0)
            draw_score();
        attack_over = -penalty_scored;
        d_5d9c_9b6a = -1;
    } else {
        if (d_5d9c_9dfd < 30)
            disallowed_goal(home_team);
        advance_match_clock();
    }
    if (attack_over == 1) {
        home_goals++;
        score_goal(cur_player, d_5d9c_9b6a, scorer_slot, home_team);
    }
}

void away_attempt_on_goal(void)
{
    char buf[320];

    if (home_is_human + away_is_human > 0) {
        present_screen_rect(0xe7, 0x7e, 0xf3, 0x84);
        sprintf(buf, "%d", away_attempts);
        draw_text_at(0xf0, 0x84, 5, buf);
    }
    d_5d9c_9dfd = random_below(home_keeping);
    if (d_5d9c_9dfd < 26) {
        pick_goal_scorer(away_team);
        attack_over = 1;
        d_5d9c_9b6a = 0;
    } else if (d_5d9c_9dfd < 28) {
        take_penalty(away_team, home_keeping, 0);
        if (home_is_human + away_is_human > 0)
            draw_score();
        attack_over = -penalty_scored;
        d_5d9c_9b6a = -1;
    } else {
        if (d_5d9c_9dfd < 30)
            disallowed_goal(away_team);
        advance_match_clock();
    }
    if (attack_over == 1) {
        away_goals++;
        score_goal(cur_player, d_5d9c_9b6a, scorer_slot, away_team);
    }
}

unsigned char late_attack_bonus(unsigned char row, int minute)
{
    return (minute < 60 ? 0 : d_2f3c_84a7[row][min_int(minute - 60, 59)]) ? -1 : 0;
}

unsigned char late_defence_bonus(unsigned char row, int minute)
{
    return minute < 60 ? 0 : d_2f3c_83f3[row][min_int(minute - 60, 59)];
}

void advance_match_clock(void)
{
    char key[4];
    char click;

    match_half_minutes++;
    match_minute = match_half_minutes / 2;
    if (match_minute > period_end_minute) {
        match_minute = period_end_minute;
        match_half_minutes = match_minute * 2;
    }
    if (home_is_human + away_is_human > 0) {
        print_match_minute(match_minute);
        draw_match_stat_bars();
        strcpy(key, strupr(poll_key_string()));
        click = take_mouse_clicks();
        if (click != 3 && key[0] != ' ') {
            wait_ticks(7);
            if (home_is_cpu == 0 && (click == 1 || click != 0 && away_is_cpu == 1 || key[0] == 'H'))
                tactical_move_menu(home_team, 0);
            if (away_is_cpu == 0 && (click == 2 || click != 0 && home_is_cpu == 1 || key[0] == 'A'))
                tactical_move_menu(away_team, 0);
        }
    }
    if (random_below(d_5d9c_9df5) == 0)
        commit_foul(home_team);
    if (random_below(d_5d9c_9df3) == 0)
        commit_foul(away_team);
    if (match_minute > 65) {
        if (home_is_cpu == 1 && match_minute > home_sub_minute && slot_status[0][11] == 4 && home_sub1_allowed)
            make_substitution(home_team, 1);
        if (away_is_cpu == 1 && match_minute > away_sub_minute && slot_status[1][11] == 4 && away_sub1_allowed)
            make_substitution(away_team, 1);
        if (home_is_cpu == 1 && match_minute > home_sub_minute && slot_status[0][12] == 4 && home_sub2_allowed)
            make_substitution(home_team, 1);
        if (away_is_cpu == 1 && match_minute > away_sub_minute && slot_status[1][12] == 4 && away_sub2_allowed)
            make_substitution(away_team, 1);
    }
}

void init_substitutions(void)
{
    home_sub_minute = random_below(20) + 65;
    away_sub_minute = random_below(20) + 65;
    home_sub1_allowed = 0;
    home_sub2_allowed = 0;
    away_sub1_allowed = 0;
    away_sub2_allowed = 0;
    if (home_goals + home_first_leg_goals < away_goals + away_first_leg_goals ||
        home_goals + home_first_leg_goals == away_goals + away_first_leg_goals && away_goals >= home_first_leg_goals) {
        home_sub1_allowed = -1;
        home_sub2_allowed = -1;
    }
    if (away_goals + away_first_leg_goals < home_goals + home_first_leg_goals ||
        away_goals + away_first_leg_goals == home_goals + home_first_leg_goals && home_goals >= away_first_leg_goals) {
        away_sub1_allowed = -1;
        away_sub2_allowed = -1;
    }
    set_bench_positions(home_team);
    set_bench_positions(away_team);
}

void set_bench_positions(int team)
{
    if (is_human_team(team) == 0) {
        for (loop_i = 11; loop_i <= 12; loop_i++) {
            for (loop_k = 2; loop_k <= 10; loop_k++) {
                if (can_play_position(team_selection[team][loop_i], loop_k)) {
                    team_tactics[team][0][loop_i] = loop_k + (loop_k < 5 ? 3 : 0);
                    saved_lineups[team == away_team][0][loop_i] = loop_k + (loop_k < 5 ? 3 : 0);
                }
            }
        }
    }
}

void pick_goal_scorer(int team)
{
    d_5d9c_9ecf = 0;
    cur_player = 1700;
    scorer_slot = -1;
    for (loop_j = 0; loop_j <= 12; loop_j++) {
        if (slot_status[team == away_team][loop_j] < 2) {
            if ((d_5d9c_9ded = scorer_chance(team, loop_j)) > d_5d9c_9ecf) {
                d_5d9c_9ecf = d_5d9c_9ded;
                cur_player = team_selection[team][loop_j];
                scorer_slot = loop_j;
            }
        }
    }
}

int scorer_chance(int team, int slot)
{
    d_5d9c_9eb7 = team_tactics[team][0][slot];
    if (d_5d9c_9eb7 > 1) {
        d_5d9c_9b9b = team_tactics[team][2][slot];
        if (d_5d9c_9b9b == 1)
            button_style = 1;
        else if (d_5d9c_9b9b == 2)
            button_style = -1;
        else
            button_style = 0;
        switch (d_5d9c_9eb7) {
        case 2:
        case 3:
        case 11:
            d_5d9c_9ded = 5;
            break;
        case 4:
            d_5d9c_9ded = 10;
            break;
        case 5:
        case 6:
            d_5d9c_9ded = 15;
            break;
        case 7:
        case 8:
        case 9:
            d_5d9c_9ded = 20;
            break;
        case 10:
            d_5d9c_9ded = 30;
            break;
        }
        d_5d9c_9ded += button_style * 5 + player_match_strength(slot, team) * 2;
        if (team < 80)
            d_5d9c_9ded = player_attrs[7][team_selection[team][slot]] * 0.75 +
                          (is_set_piece ? player_attrs[5][team_selection[team][slot]] * 10 : 0) + d_5d9c_9ded;
        else
            d_5d9c_9ded += 10;
        d_5d9c_9deb = d_5d9c_9ded;
        d_5d9c_9ded += random_below(75);
    } else {
        d_5d9c_9deb = 0;
        d_5d9c_9ded = 0;
    }
    return d_5d9c_9ded;
}

void commit_foul(int team)
{
    victim_retaliates = 0;
    transfer_other_club = team == home_team ? away_team : home_team;
    cur_player = -1;
    d_5d9c_9de9 = 0;
    do {
        do {
            loop_j = random_below(13);
        } while (team_tactics[team][0][loop_j] <= 1 ||
                 slot_status[team == away_team][loop_j] >= 2);
        if ((d_5d9c_9de7 = random_below(slot_status[team == away_team ? 5 : 4][loop_j] + 10)) > last_ranked_row ||
            cur_player == -1) {
            cur_player = loop_j;
            last_ranked_row = d_5d9c_9de7;
        }
        d_5d9c_9de9++;
    } while (cur_player <= -1 || d_5d9c_9de9 < 5);
    d_5d9c_9de5 = team_tactics[team][0][cur_player];
    foul_victim_slot = -1;
    d_5d9c_9de9 = 0;
    do {
        do {
            loop_j = random_below(13);
            d_5d9c_9de1 = team_tactics[transfer_other_club][0][loop_j];
        } while (d_5d9c_9de1 <= 1 ||
                 slot_status[transfer_other_club == away_team][loop_j] >= 2);
        d_5d9c_9de7 = is_defence_position(d_5d9c_9de5) && is_attack_position(d_5d9c_9de1) ||
                      is_midfield_position(d_5d9c_9de5) && is_midfield_position(d_5d9c_9de1) ||
                      is_attack_position(d_5d9c_9de5) && is_defence_position(d_5d9c_9de1) ? 11 : 0;
        d_5d9c_9de7 += is_left_position(d_5d9c_9de5) && is_right_position(d_5d9c_9de1) ||
                       is_centre_position(d_5d9c_9de5) && is_centre_position(d_5d9c_9de1) ||
                       is_right_position(d_5d9c_9de5) && is_left_position(d_5d9c_9de1) ? 10 : 0;
        if (d_5d9c_9de7 > last_ranked_row || foul_victim_slot == -1) {
            foul_victim_slot = loop_j;
            last_ranked_row = d_5d9c_9de7;
        }
        d_5d9c_9de9++;
    } while (foul_victim_slot <= -1 || d_5d9c_9de9 < 5);
    if (home_is_human + away_is_human > 0) {
        if (team < 80)
            strcpy(fouler_name, player_surname(team_selection[team][cur_player]));
        else
            sprintf(fouler_name, "No.%s", shirt_number_text(cur_player + 1));
        if (transfer_other_club < 80) {
            strcpy(victim_name, player_surname(team_selection[transfer_other_club][foul_victim_slot]));
            victim_retaliates = random_below(player_attrs[14][team_selection[transfer_other_club][foul_victim_slot]] + 10) < random_below(10);
        } else {
            sprintf(victim_name, "their no.%s", shirt_number_text(foul_victim_slot + 1));
            victim_retaliates = random_below(2) == 0;
        }
    }
    pick_foul_type();
    injury_shown = 0;
    switch (foul_type) {
    case 0:
    case 1:
    case 2:
    case 5:
    case 6:
    case 7:
    case 11:
    case 15:
    case 17:
    case 18:
    case 20:
        if (transfer_other_club < 80)
            d_5d9c_9b62 = random_below(player_attrs[13][team_selection[transfer_other_club][foul_victim_slot]]) > random_below(10);
        else
            d_5d9c_9b62 = random_below(10) > random_below(10);
        if (d_5d9c_9b62)
            foul_injury(team, cur_player, transfer_other_club, foul_victim_slot);
        break;
    }
    punish_foul(team, cur_player);
    if (victim_retaliates)
        slot_status[transfer_other_club == away_team ? 5 : 4][foul_victim_slot] = 20;
    if (home_is_human + away_is_human > 0)
        show_commentary(home_team, match_period_text);
}

void foul_injury(fouler_team, fouler, victim_team, victim)
int fouler_team, fouler; register int victim_team; int victim;
{
    int saved_victim;
    char buf[320];
    register int saved_player;

    saved_player = cur_player;
    saved_victim = foul_victim_slot;
    cur_player = fouler;
    foul_victim_slot = victim;
    if (home_is_human + away_is_human > 0) {
        sprintf(buf, "%s injured by %s", victim_name, fouler_name);
        show_commentary(victim_team, buf);
        wait_ticks(100);
        clear_commentary();
        sprintf(buf, "He was %s", foul_text);
        show_commentary(fouler_team, buf);
        wait_ticks(75);
        clear_commentary();
        injury_shown = -1;
    }
    slot_status[victim_team == away_team][foul_victim_slot] = 6;
    if (victim_team < 80) {
        sprintf(buf, "%s%04d", injured_list, team_selection[victim_team][foul_victim_slot]);
        strcpy(injured_list, buf);
    }
    d_5d9c_9ddd = 0;
    d_5d9c_9ddb = 1;
    if (team_tactics[victim_team][0][foul_victim_slot] > 7 && team_tactics[victim_team][0][foul_victim_slot] < 11) {
        d_5d9c_9ddd = 1;
        d_5d9c_9ddb = 0;
    }
    if (is_human_team(victim_team)) {
        in_match_tactics = -1;
        tactics_editor(victim_team);
        in_match_tactics = 0;
        for (loop_j = 0; loop_j <= 12; loop_j++)
            slot_status[victim_team == away_team ? 3 : 2][loop_j] = 0;
        compute_team_strengths(victim_team);
        draw_match_screen(attacking_side);
        show_commentary(home_team, match_period_text);
    } else if (d_2f3c_2d16[victim_team == away_team][d_5d9c_9ddd] == 4) {
        make_substitution(victim_team, d_5d9c_9ddd);
    } else if (d_2f3c_2d16[victim_team == away_team][d_5d9c_9ddb] == 4) {
        make_substitution(victim_team, d_5d9c_9ddb);
    } else {
        compute_team_strengths(victim_team);
        stoppage_time += random_below(3) * 2;
    }
    cur_player = saved_player;
    foul_victim_slot = saved_victim;
}

void punish_foul(int team, int slot)
{
    int pick;
    char buf[320];

    card_colour = 0;
    d_5d9c_9ecf = foul_type >= 15 ? random_below(3) : min_int(random_below(2), random_below(2));
    if (d_5d9c_9ecf == 2 || d_5d9c_9ecf == 1 && slot_status[team == away_team][slot] == 1) {
        if (random_below(2) == 0)
            strcpy(punishment_text, "SENT OFF");
        else
            strcpy(punishment_text, "SHOWN THE RED CARD");
        slot_status[team == away_team][slot] = 2;
        if (team < 80) {
            sprintf(buf, "%s%04d", sent_off_list, team_selection[team][slot]);
            strcpy(sent_off_list, buf);
        }
        card_colour = 2;
        compute_team_strengths(team);
        stoppage_time += random_below(2) * 2;
    } else if (d_5d9c_9ecf == 1) {
        if (random_below(2) == 0)
            strcpy(punishment_text, "BOOKED");
        else
            strcpy(punishment_text, "SHOWN THE YELLOW CARD");
        slot_status[team == away_team][slot] = 1;
        if (team < 80) {
            sprintf(buf, "%s%04d", booked_list, team_selection[team][slot]);
            strcpy(booked_list, buf);
        }
        card_colour = 6;
    } else if (d_5d9c_9ecf == 0) {
        pick = random_below(4);
        switch (pick) {
        case 0: strcpy(punishment_text, "WARNED"); break;
        case 1: strcpy(punishment_text, "LECTURED"); break;
        case 2: strcpy(punishment_text, "TICKED OFF"); break;
        case 3: strcpy(punishment_text, "SPOKEN TO"); break;
        }
        card_colour = 1;
    }
    if (home_is_human + away_is_human > 0 && card_colour > 0) {
        clear_commentary();
        if (team == home_team)
            pick_shirt_colours(home_club, home_club, away_club);
        else
            pick_shirt_colours(away_club, home_club, away_club);
        strcpy(buf, fouler_name);
        draw_text_box(3.0, 8.5, -shirt_bg, shirt_fg, 0, strupr(buf));
        play_effect_stub(1);
        draw_text_font2(strlen(fouler_name) + 5, 8.5, card_colour, punishment_text);
        if (injury_shown == 0) {
            if (strcmp(right_chars(foul_text, 1), "*") == 0) {
                foul_text[strlen(foul_text) - 1] = 0;
            } else {
                strcat(foul_text, " ");
                strcat(foul_text, victim_name);
            }
            wait_ticks(75);
            clear_commentary();
            sprintf(buf, "He %s", foul_text);
            show_commentary(team, buf);
        }
        wait_ticks(75);
        clear_commentary();
        if (card_colour == 2 && is_human_team(team)) {
            in_match_tactics = -1;
            tactics_editor(team);
            in_match_tactics = 0;
            for (loop_j = 0; loop_j <= 12; loop_j++)
                slot_status[team == away_team ? 3 : 2][loop_j] = 0;
            compute_team_strengths(team);
            draw_match_screen(attacking_side);
            show_commentary(home_team, match_period_text);
        }
        empty_stub();
        play_effect_stub(2);
    }
}

/* the commentary's fouls */
static char far *foul_descriptions[] = {
    "brought down", "hacked at", "kicked", "body checked", "obstructed", "up-ended",
    "flattened", "tripped", "pushed", "shoved", "held back", "clattered into",
    "handballed*", "said too much*", "kicked the ball away*", "punched", "headbutted",
    "brought down", "cynically hacked", "spat at", "elbowed"
};

void pick_foul_type(void)
{
    d_5d9c_9dd7 = random_below(100) + 1;
    if (d_5d9c_9dd7 <= 85)
        foul_type = random_below(15);
    else
        foul_type = random_below(6) + 15;
    strcpy(foul_text, foul_descriptions[foul_type]);
}

void tactical_move_menu(int team, char from_stats)
{
    int saved;
    char buf[320];
    int choice;

    saved = selected_team;
    selected_team = team;
    for (;;) {
        new_screen("Tactical move");
        draw_team_label(1.0, 4.0, selected_team);
        strcpy(buf, "*Exit|Tactical change|Opponents team|");
        if (from_stats == 0)
            strcat(buf, "Match Stats|");
        show_menu(7, "", buf);
        wait_menu_choice(from_stats + 3);
        choice = menu_choice;
        if (choice == 1) {
            in_match_tactics = -1;
            tactics_editor(selected_team);
            in_match_tactics = 0;
            for (loop_j = 0; loop_j <= 12; loop_j++)
                slot_status[selected_team == away_team ? 3 : 2][loop_j] = 0;
            compute_team_strengths(selected_team);
        } else if (choice == 2) {
            if (selected_team == home_team)
                opponent_team = away_team;
            else
                opponent_team = home_team;
            view_team_tactics(opponent_team);
        } else if (choice == 3) {
            finish_match_stats();
            match_stats_screen(home_club, away_club, 0);
        } else
            break;
    }
    if (from_stats == 0) {
        draw_match_screen(attacking_side);
        show_commentary(home_team, match_period_text);
    }
    selected_team = saved;
}

void make_substitution(int team)
{
    char buf[320];

    pick_best_substitute(team);
    if (team == home_team) {
        foul_victim_slot = away_team;
        d_5d9c_9dd5 = home_tactic_style;
    } else {
        foul_victim_slot = home_team;
        d_5d9c_9dd5 = away_tactic_style;
    }
    d_5d9c_9eb7 = team_tactics[team][0][sub_slot];
    if (d_5d9c_9dd5 == 0) {
        if (d_5d9c_9eb7 > 7) {
            loop_i = 5;
            loop_j = 10;
        } else {
            loop_i = 2;
            loop_j = 7;
        }
    }
    if (d_5d9c_9dd5 == 1) {
        loop_i = 8;
        loop_j = 10;
    }
    if (d_5d9c_9dd5 == 2) {
        loop_i = 2;
        loop_j = 10;
    }
    d_5d9c_9dd1 = 0;
    cur_player = -1;
    for (loop_k = 1; loop_k <= 12; loop_k++) {
        if (slot_status[team == away_team][loop_k] == 6) {
            cur_player = loop_k;
            loop_k = 12;
        } else if (team_tactics[team][0][loop_k] >= loop_i
                   && team_tactics[team][0][loop_k] <= loop_j
                   && slot_status[team == away_team][loop_k] < 2) {
            d_5d9c_9e27 = player_match_strength(loop_k, team);
            if (d_5d9c_9dcf - d_5d9c_9e27 > d_5d9c_9dd1) {
                d_5d9c_9dd1 = d_5d9c_9dcf - d_5d9c_9e27;
                cur_player = loop_k;
            }
        }
    }
    if (cur_player != -1) {
        strcpy(sub_kind_text, "TACTICAL");
        if (slot_status[team == away_team][cur_player] == 6) {
            strcpy(sub_kind_text, "ENFORCED");
            team_tactics[team][0][sub_slot] = team_tactics[team][0][cur_player];
        }
        if (team < 80) {
            strcpy(sub_text, player_short_name(team_selection[team][sub_slot]));
            strcat(sub_text, " on for ");
            strcat(sub_text, player_short_name(team_selection[team][cur_player]));
        } else {
            sprintf(sub_text, "Their No.%d on for their No.%d",
                    sub_slot + (sub_slot == 12 ? 0 : 1), cur_player + 1);
        }
        slot_status[team == away_team][sub_slot] = 0;
        if (slot_status[team == away_team][cur_player] == 6)
            slot_status[team == away_team][cur_player] = 3;
        else
            slot_status[team == away_team][cur_player] = 5;
        sub_replaced_slot[team == away_team][sub_slot == 12] = cur_player;
        sub_minutes[team == away_team][sub_slot == 12] = match_minute;
        compute_team_strengths(team);
        if (home_is_human + away_is_human > 0) {
            sprintf(buf, "%s %s MOVE", strupr(team_names[team]), sub_kind_text);
            show_commentary(team, buf);
            wait_ticks(75);
            show_commentary(team, sub_text);
            wait_ticks(100);
            show_commentary(home_team, match_period_text);
        }
    }
    if (team == home_team) {
        if (home_sub1_allowed)
            home_sub1_allowed = 0;
        else
            home_sub2_allowed = 0;
    } else {
        if (away_sub1_allowed)
            away_sub1_allowed = 0;
        else
            away_sub2_allowed = 0;
    }
}

void pick_best_substitute(int team)
{
    int rating11;
    int rating12;

    if (team == home_team)
        foul_victim_slot = away_team;
    else
        foul_victim_slot = home_team;
    rating11 = -5000;
    rating12 = -5000;
    if (slot_status[team == away_team][11] == 4)
        rating11 = player_match_strength(11, team);
    if (slot_status[team == away_team][12] == 4)
        rating12 = player_match_strength(12, team);
    if (rating12 > rating11) {
        sub_slot = 12;
        d_5d9c_9dcf = rating12;
    } else {
        sub_slot = 11;
        d_5d9c_9dcf = rating11;
    }
}

void show_attack_direction(float attack_x, float defend_x)
{
    present_screen_rect(18, 112, 261, 120);
    draw_text_font1(attack_x, 15.0, 6, "Attacking...");
    draw_text_font1(defend_x, 15.0, 12, "Defending...");
}

void draw_match_stat_bars(void)
{
    draw_zone_bar(home_defence_wins, away_attack_wins, 0, 2);
    draw_zone_bar(home_attacks, away_attacks, 1, 1);
    draw_zone_bar(home_attack_wins, away_defence_wins, 2, 0);
}
