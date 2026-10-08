/* @at 6e68:0000 */
/* @data 5d9c:3a74 */
/* @module */

/* Overlay 2: club information: the accounts, board confidence, resignation and manager
 * jobs, match reports, background picture, save game, quitting, the week's fixture and
 * result titles and lists, cup rounds, the squad screen, the tactics editor, formations,
 * tactics and playing style. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <mem.h>
#include <ctype.h>

/* the functions, in address order: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void find_player_or_shortlist(void);
void show_accounts(int team);
void manager_options_menu(void);
void resign_menu(int team);
void manager_job_menu(int team);
void show_job_applicants(int team);
void manager_jobs_menu(void);
void add_human_player(void);
void match_reports_menu(void);
void show_match_report(int match, int week);
void background_picture_menu(void);
void save_game_menu(void);
void show_week_fixtures(int week, int mode, int comp_filter);
void show_fixture_range(int week, int mode, int from, int to, int comp_filter);
char fixture_in_comp_filter(int comp_filter, int week, int fixture);
int two_leg_comp_index(int week, int fixture);
void set_fixture_team_text(int club, int week, int fixture);
void sort_fixtures_by_home_team(int week, int from, int to, int comp_filter);
void add_replay_to_round_title(int week, int mode);
void draw_fixture_box(int count, int week, int from, int mode);
void show_season_start_message(void);
void squad_screen(int team);
void show_position_group_list(int group, int team);
void list_group_by_rating(int group, int team);
void tactics_editor(int team);
void highlight_slot_buttons(int slot);
char set_slot_position(int slot, int pos);
void tactics_message(char far *msg);
void draw_formation(int team);
void draw_formation_row(char far *row);
char far *order_centre_players(char far *row);
void formation_menu(int team);
void playing_style_menu(int team);

void find_player_menu(void);
void choose_team_by_division(int);
void view_shortlist(int team);
void draw_club_title(float x, int team, char far *title);
void draw_label(float x, float y, int bg, int fg, int w, char far *s);
void draw_text_box(float x, float y, int bg, int fg, int w, char far *s);
void far *vm_map(int handle, int page);
long overdraft_limit(int x);
long max_long(long a, long b);
void wait_for_click(int a);
void message_box(char far *);
void choose_manager(char all);
char far *manager_name(int manager, char full);
void show_menu(int n, char far *title, char far *items);
void board_reaction_to_leaving(int club);
void manager_leaves_club(int club, int a);
unsigned find_substring(char far *s, char far *set);
void new_screen(char far *title);
void add_button(int a, float x, float y, int c, int d, int e, char far *s);
int wait_for_button(int a);
void team_ranking_screen(int mode);
extern char is_demo_game;
extern char has_resigned;
extern int selected_team;
extern int current_week;
extern int button_style;
extern int loop_i;
extern int last_button;
extern int menu_choice;
extern int accounts_ems_handle;
extern int human_manager_count;
extern int human_count;
extern int result_rating;
extern int chosen_manager;
extern int d_5d9c_9bc9;
extern int d_5d9c_9bc7;
extern int d_5d9c_9bc5;
extern int d_5d9c_9bc3;
extern long total_income;
extern long total_spending;
extern long overdraft;
extern float text_x;
extern float text_y;
extern char near *team_names[];
extern long (far *accounts_table)[80];
extern char far sub_kind_text[];
extern char far sub_text[];
extern char far d_1f3e_5116[];
extern char far d_1f3e_50c6[];
extern char far d_1f3e_300e[];
extern char far job_applicants[][101];
extern long far team_finances[][80];
extern unsigned char far manager_team[];
extern unsigned char far board_confidence[];
extern unsigned char far team_colours[];
int contract_period_of_week(int x);
char choose_personality(int);
void enter_manager_name(int);
void reset_team_selection(int t);
void arrange_friendlies(void);
void wait_menu_choice(int last);
char is_league_week(int);
char is_fa_cup_week(int);
char is_rumbelows_week(int);
char is_zenith_week(int);
char is_domark_week(int);
char is_uefa_week(int);
char is_cup_winners_week(int);
char is_european_cup_week(int);
char is_playoff_week(int);
void match_stats_screen(int a, int b, char c);
void show_status_box(char far *s);
void load_title_picture(char c);
void set_picture_palette(void);
void save_game(void);
void restore_system(void);
extern int human_manager_index;
extern int d_5d9c_9eed;
extern int fixture_week;
extern int d_5d9c_9ef9;
extern int background_brightness;
extern int background_colour;
extern char d_5d9c_9b82;
extern char d_5d9c_9b83;
extern char menu_choice_done;
extern char video_mode;
extern int far team_manager[];
extern unsigned char far staff_contract[];
extern unsigned char far staff_age[];
extern unsigned char far staff_role[];
extern unsigned char far staff_skills[];
extern unsigned char far staff_character[];
extern int far shortlists[][16];
extern unsigned char far team_stats[][82];
extern int far week_fixtures[][2][94];
extern unsigned char huge player_stats[][1702];
extern int far week_fixture_counts[];
extern int far week_matchfax_base[];
extern char far match_record[];
extern char far picture_file[];
extern char far old_picture_file[];
int min_int(int a, int b);
char is_first_leg_week(int);
char is_second_leg_week(int);
extern char far competition_title[];
extern char far round_title[];
extern char far cup_winners_cup_name[];
extern char far uefa_cup_name[];
extern char far european_cup_name[];
extern char far leg_suffix[];
extern int friendly_counts[];
extern int week_match_count;
extern int zenith_qualifier_count;
extern int d_5d9c_9ee9;
extern int d_5d9c_9ee7;
extern int d_5d9c_9ee5;
extern int rankings_page;
void set_text_opaque(int on);
void draw_text_at(int x, int y, int colour, char far *s);
void draw_text_font1(float x, float y, int colour, char far *s);
void draw_text_font2(float x, float y, int colour, char far *s);
char is_human_team(int x);
char is_rumbelows_match(int, int);
char is_uefa_match(int, int);
char is_cup_winners_match(int, int);
char is_european_cup_match(int, int);
char is_zenith_match(int, int);
char is_domark_match(int, int);
int domark_group_of_match(int, int);
extern char near *foreign_team_names[];
extern float fixture_list_y_offset;
extern char is_highlighted_team;
extern char d_5d9c_9b81;
extern int away_first_leg_goals;
extern int home_first_leg_goals;
extern int cup_slot;
extern int shirt_bg;
extern int away_team;
extern int home_team;
extern int fixture_box_colour;
extern int fixture_text_colour;
extern int cur_y;
extern int first_leg_ems_handle;
extern char far *first_leg_scores;
extern char far fixture_team_tag[];
extern char far fixture_screen_title[];
extern char far club_title_text[];
extern char far fixture_team_name[];
extern int far penalty_winner[];
extern char far * far country_names[];
extern unsigned char far team_country[];
char is_cup_replay_week(int);
char far *club_name(int x);
void swap_bytes(void far *a, void far *b, int n);
void set_fill_colour(int c);
void set_draw_colour(int c);
void fill_rect(int x1, int y1, int x2, int y2);
void draw_rect(int x1, int y1, int x2, int y2);
void draw_line(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
extern int second_leg_week;
extern int loop_j;
extern int loop_k;
extern int d_5d9c_9ecf;
extern int d_5d9c_9ecd;
extern char d_5d9c_9b7f;
extern char far d_1f3e_4cfc[];
extern char far d_1f3e_4cac[];
extern char far d_1f3e_4c5c[];
extern int far fixture_table[][2][94];
void top_players_screen(int mode, int team);
void club_squad_screen(int team);
void club_transfers_screen(int team);
void league_progress_graph(int team);
void team_fixtures_screen(int team);
void staff_screen(int team);
void club_info_screen(int team);
void disable_button(int team);
void enable_all_buttons(void);
void draw_button(int a, char b);
void player_details_screen(int player, int a, char b);
void do_player_action(int player, int a);
void show_message_done(char far *msg);
void restore_menu_button(int slot);
void view_team_tactics(int team);
char far *shirt_number_text(int x);
void draw_squad_list(int t);
void set_squad_row_columns(int line);
char far *trim_spaces(char far *s);
int match_squad_slot(int player);
extern char playing_week_matches;
extern char swap_mode;
extern char exit_chosen;
extern int selected_slot;
extern int picked_count;
extern int opponent_team;
extern int captain_slot;
extern int squad_list_count;
extern int d_5d9c_9ec9;
extern int squad_view;
extern int d_5d9c_9f3d;
extern int player_screen_action;
extern int row_name_colour;
extern int cur_player;
extern int button_labels_handle;
extern char far *button_labels;
extern float d_5d9c_9af0;
extern int far squad_list_players[];
extern int far team_selection[][13];
extern int far last_match_info[][80];
extern char far d_1f3e_4bbc[];
extern char far shirt_label[];
extern char far player_is_picked[];
extern unsigned char huge player_attrs[][1702];
char far *player_short_name(int player);
struct col { float x; char far *title; };
extern int d_5d9c_9ebd;
extern int d_5d9c_9ebb;
extern int d_5d9c_9eb9;
extern int d_5d9c_9eb7;
extern int d_5d9c_9f71;
extern int shirt_fg;
extern int d_5d9c_9f51;
extern float d_5d9c_9aec;
extern float d_5d9c_9ae8;
extern char d_5d9c_9b7c;
extern int far squad_list_players_m1[];
extern int far player_rating_total[];
extern int far cup_rating_total[];
extern char far d_1f3e_4b6c[];
extern char far d_1f3e_4b1c[];
extern char far player_sides[][0x6a6];
extern char far player_position_groups[][0x6a6];
extern unsigned char far squad_size[];
extern int far squad_players[][26];
void draw_team_label(float x, float y, int team);
void draw_team_sheet(int team, int a);
char far *right_chars(char far *s, unsigned n);
void wait_ticks(int ticks);
extern char position_ok;
extern char in_match_tactics;
extern char d_5d9c_9b77;
extern char d_5d9c_9b78;
extern char d_5d9c_9b79;
extern char captain_selected;
extern char swap_slots_mode;
extern int style_and_formation;
extern int d_5d9c_9e9b;
extern int d_5d9c_9e9d;
extern int d_5d9c_9e9f;
extern int d_5d9c_9ea1;
extern int d_5d9c_9ea3;
extern int match_minute;
extern int d_5d9c_9ea7;
extern int d_5d9c_9ea9;
extern int d_5d9c_9eab;
extern int d_5d9c_9ead;
extern int d_5d9c_9eaf;
extern int tactics_button;
extern int selected_run_button;
extern int selected_side_button;
extern int best_league_slot;
extern unsigned char manager_captain[];
extern char sub_minutes[][2];
extern char sub_replaced_slot[][2];
extern int captain_slots[];
extern struct pos { unsigned char c, d; char far *s; } tactic_buttons_from1[];
extern unsigned char far edited_tactics[][13];
extern unsigned char far slot_status[][13];
extern unsigned char far team_tactics[][3][13];
extern unsigned char far manager_style_formation[];
extern char far tactics_text[];
char far *next_text_buffer(void);
char far *mid_chars(char far *s, unsigned i, unsigned n);
void draw_menu_item(int a, int b, int line);
void apply_formation(int t, int k, char c);
extern char first_menu_pass;
extern char d_5d9c_9b73;
extern char d_5d9c_9b74;
extern unsigned char d_5d9c_9b9e;
extern int away_club;
extern int home_club;
extern int d_5d9c_9e95;
extern int d_5d9c_9e97;
extern int d_5d9c_9e99;
extern int d_5d9c_9f29;
extern int ranked_manager;
extern int cur_x;
extern float d_5d9c_9ae4;
extern unsigned char d_5d9c_a035[][2];
extern float far menu_item_colours[];
extern char far * far style_names[];
extern char far button_label[];

/* the accounts' items */
static char far *account_item_names[] = {
    "GATE RECEIPTS", "SPONSOR PAYMENT", "PLAYERS SOLD", "INTEREST", "TELEVISION NETS",
    "CASH PRIZES", "OTHER GAINS", "STAFF WAGES", "RATES AND TAXES", "PLAYERS BOUGHT",
    "INTEREST ON OVERDRAFT", "GROUND IMPROVEMENTS", "LEAGUE FINES", "GENERAL EXPENSES"
};

void find_player_or_shortlist(void)
{
    if (is_demo_game == 0)
        find_player_menu();
    else {
        choose_team_by_division(-1);
        view_shortlist(selected_team);
    }
}

void show_accounts(int team)
{
    char buf[320];

    if (current_week > 1) {
        draw_club_title(-1, team, "Accounts");
        draw_label(1, 5.25, 6, 2, 0, " ITEM                   ");
        draw_label(20, 5.25, 3, 6, 0, " INCOME     ");
        draw_label(30, 5.25, 3, 6, 0, " SPENDING   ");
        total_income = 0;
        total_spending = 0;
        for (button_style = 0; button_style <= 13; button_style++) {
            strcpy(buf, account_item_names[button_style]);
            if (button_style == 0 && current_week < 8)
                strcpy(buf, "GATE + SEASON TICKETS");
            sprintf(sub_kind_text, " %-23s", buf);
            accounts_table = vm_map(accounts_ems_handle, 0);
            sprintf(sub_text, "%-10ld", (accounts_table + 16)[button_style][team]);
            if (button_style < 7) {
                draw_label(1, button_style + 6.5, 1, 4, 0, sub_kind_text);
                sprintf(buf, " +%s", sub_text);
                draw_label(20, button_style + 6.5, 1, 12, 0, buf);
                accounts_table = vm_map(accounts_ems_handle, 0);
                total_income += (accounts_table + 16)[button_style][team];
            } else {
                draw_label(1, button_style + 6.75, 1, 4, 0, sub_kind_text);
                sprintf(buf, " -%s", sub_text);
                draw_label(30, button_style + 6.75, 1, 2, 0, buf);
                accounts_table = vm_map(accounts_ems_handle, 0);
                total_spending += (accounts_table + 16)[button_style][team];
            }
        }
        draw_label(1, 21, 6, 3, 0, " TOTALS                 ");
        sprintf(buf, " +%-10ld", total_income);
        draw_label(20, 21, 4, 1, 0, buf);
        sprintf(buf, " -%-10ld", total_spending);
        draw_label(30, 21, 2, 1, 0, buf);
        strcpy(d_1f3e_5116, "");
        if (total_income - total_spending > 0)
            sprintf(d_1f3e_5116, "(+%ld) ", total_income - total_spending);
        else if (total_spending - total_income > 0)
            sprintf(d_1f3e_5116, "(-%ld) ", total_spending - total_income);
        sprintf(buf, " %ld AVAILABLE %s",
                max_long(team_finances[0][team] - overdraft_limit(team), 0L), d_1f3e_5116);
        draw_label(1, 24, 1, 12, 0, buf);
        overdraft = overdraft_limit(team) - team_finances[0][team];
        sprintf(buf, " OVERDRAFT %ld (MAX %ld) ", overdraft > 0 ? overdraft : 0L,
                overdraft_limit(team));
        draw_label(1, 22.5, 1, 8, 0, buf);
        wait_for_click(0);
    } else
        message_box("No summary for last week");
}

void manager_options_menu(void)
{
    char buf[320];

    if (human_manager_count > 0) {
        choose_manager(0);
        if (chosen_manager > -1) {
            do {
                show_menu(0, manager_name(chosen_manager, 0), "*Exit|Board Confidence|Resign|");
                d_5d9c_9bc9 = menu_choice;
                if (d_5d9c_9bc9 == 1) {
                    if (team_finances[0][manager_team[chosen_manager]] < 0)
                        message_box("We are in financial trouble");
                    else {
                        if (board_confidence[manager_team[chosen_manager]] <= 24)
                            strcpy(d_1f3e_50c6, "are considering your future");
                        else if (board_confidence[manager_team[chosen_manager]] <= 39)
                            strcpy(d_1f3e_50c6, "are concerned");
                        else if (board_confidence[manager_team[chosen_manager]] <= 59)
                            strcpy(d_1f3e_50c6, "are not concerned");
                        else if (board_confidence[manager_team[chosen_manager]] <= 79)
                            strcpy(d_1f3e_50c6, "are pleased");
                        else if (board_confidence[manager_team[chosen_manager]] <= 94)
                            strcpy(d_1f3e_50c6, "are very pleased");
                        else
                            strcpy(d_1f3e_50c6, "are delighted");
                        sprintf(buf, "%d%% : We %s", board_confidence[manager_team[chosen_manager]], d_1f3e_50c6);
                        message_box(buf);
                    }
                } else if (d_5d9c_9bc9 == 2) {
                    resign_menu(chosen_manager);
                    if (has_resigned)
                        d_5d9c_9bc9 = 0;
                }
            } while (d_5d9c_9bc9 != 0);
        }
    } else
        message_box("Not available on demo");
}

void resign_menu(int team)
{
    has_resigned = 0;
    show_menu(0, "Resignation", "*Exit|Resign|");
    result_rating = menu_choice;
    if (result_rating > 0) {
        board_reaction_to_leaving(manager_team[chosen_manager]);
        manager_leaves_club(manager_team[chosen_manager], 1);
        has_resigned = -1;
    }
}

void manager_job_menu(int team)
{
    char num[4];
    char buf[320];

    if (human_count > 0) {
        do {
            sprintf(buf, "The %s job", (char far *)team_names[team]);
            show_menu(0, buf, "Exit|Applicants|Apply For It|");
            d_5d9c_9bc7 = menu_choice;
            if (d_5d9c_9bc7 == 1)
                show_job_applicants(team);
            else if (d_5d9c_9bc7 == 2) {
                choose_manager(-1);
                if (chosen_manager > -1) {
                    sprintf(num, "%03d", chosen_manager);
                    if (find_substring(job_applicants[team], num) == 0) {
                        sprintf(buf, "%s receive your application", (char far *)team_names[team]);
                        message_box(buf);
                        strcat(job_applicants[team], num);
                        strcat(job_applicants[team], " ");
                    } else
                        message_box("You have already applied");
                }
            }
        } while (d_5d9c_9bc7 != 0);
    } else
        show_job_applicants(team);
}

void show_job_applicants(int team)
{
    char buf[320];

    sprintf(buf, "The %s job", (char far *)team_names[team]);
    new_screen(buf);
    draw_text_box(1.25, 4.0, team_colours[team] / 16, team_colours[team] % 16, 0, " Applicants ");
    draw_label(1.125, 7.0, 2, 1, 0x4c, " NAME");
    draw_label(10.875, 7.0, 2, 1, 0x49, " CLUB");
    draw_label(20.25, 7.0, 2, 1, 0x4c, " NAME");
    draw_label(30, 7.0, 2, 1, 0x49, " CLUB");
    strcpy(d_1f3e_300e, job_applicants[team]);
    for (loop_i = 0; loop_i <= 21; loop_i++) {
        text_x = loop_i > 10 ? 20.25 : 1.125;
        text_y = loop_i + 9 - (loop_i > 10 ? 11 : 0);
        if ((loop_i + 1) * 4 <= strlen(d_1f3e_300e)) {
            strncpy(buf, &d_1f3e_300e[loop_i * 4], 3);
            buf[3] = 0;
            d_5d9c_9bc5 = atol(buf);
            sprintf(buf, " %s", manager_name(d_5d9c_9bc5, -1));
            draw_label(text_x, text_y, d_5d9c_9bc5 > 645 ? 6 : 1,
                        loop_i & 1 ? 15 : 3, 0x4c, buf);
            if (manager_team[d_5d9c_9bc5] < 255)
                sprintf(buf, " %.11s", (char far *)team_names[manager_team[d_5d9c_9bc5]]);
            else
                strcpy(buf, " None");
            draw_label(text_x + 9.75, text_y, 1, 4, 0x49, buf);
        } else {
            draw_label(text_x, text_y, 1, loop_i & 1 ? 15 : 3, 0x4c, "");
            draw_label(text_x + 9.75, text_y, 1, 4, 0x49, "");
        }
    }
    add_button(2, 1.25, 22.5, 1, 4, 0x12d, "                 EXIT");
    do
        menu_choice = wait_for_button(last_button);
    while (menu_choice == 0);
}

void manager_jobs_menu(void)
{
    do {
        show_menu(0, "Manager jobs", "*Exit|Add player|Job News|");
        d_5d9c_9bc3 = menu_choice;
        if (d_5d9c_9bc3 == 1)
            add_human_player();
        else if (d_5d9c_9bc3 == 2)
            team_ranking_screen(2);
    } while (d_5d9c_9bc3 != 0);
}

void add_human_player(void)
{
    int i;

    if (human_count == 4)
        message_box("Maximum four players");
    else if (contract_period_of_week(current_week) > 15)
        message_box("Only allowed before week 16");
    else {
        human_manager_count++;
        human_count++;
        choose_team_by_division(human_count - 1);
        manager_team[team_manager[selected_team]] = 255;
        staff_contract[team_manager[selected_team]] = 0;
        human_manager_index = human_count + 645;
        team_manager[selected_team] = human_manager_index;
        team_stats[0][selected_team] = 8;
        board_confidence[selected_team] = 50;
        for (i = 1; i <= shortlists[selected_team][0]; i++) {
            d_5d9c_9eed = shortlists[selected_team][i];
            player_stats[23][d_5d9c_9eed] -= 1;
        }
        shortlists[selected_team][0] = 0;
        manager_team[human_manager_index] = selected_team;
        staff_age[human_manager_index] = 35;
        staff_contract[human_manager_index] = 30;
        staff_role[human_manager_index] = 0;
        staff_skills[human_manager_index] = 80;
        staff_character[human_manager_index] = choose_personality(human_manager_index);
        enter_manager_name(human_count - 1);
        is_demo_game = 0;
        reset_team_selection(selected_team);
        arrange_friendlies();
    }
}

void match_reports_menu(void)
{
    do {
        new_screen("Match reports");
        show_menu(0, "", "*Exit|First Division|Second Division|Third Division|Fourth Division|FA Cup|Rumbelows Cup|Zenith Cup|Domark Trophy|UEFA Cup|Cup Winners Cup|European Cup|Playoffs|Charity Shield|");
        wait_menu_choice(13);
        d_5d9c_9b83 = 0;
        if (menu_choice > 0) {
            for (fixture_week = current_week - 1; fixture_week >= 1; fixture_week--) {
                d_5d9c_9b82 = 0;
                switch (menu_choice) {
                case 1:
                case 2:
                case 3:
                case 4:
                    d_5d9c_9b82 = is_league_week(fixture_week);
                    break;
                case 5:
                    d_5d9c_9b82 = is_fa_cup_week(fixture_week);
                    break;
                case 6:
                    d_5d9c_9b82 = is_rumbelows_week(fixture_week);
                    break;
                case 7:
                    d_5d9c_9b82 = is_zenith_week(fixture_week);
                    break;
                case 8:
                    d_5d9c_9b82 = is_domark_week(fixture_week);
                    break;
                case 9:
                    d_5d9c_9b82 = is_uefa_week(fixture_week);
                    break;
                case 10:
                    d_5d9c_9b82 = is_cup_winners_week(fixture_week);
                    break;
                case 11:
                    d_5d9c_9b82 = is_european_cup_week(fixture_week);
                    break;
                case 12:
                    d_5d9c_9b82 = is_playoff_week(fixture_week);
                    break;
                case 13:
                    d_5d9c_9b82 = fixture_week == 5;
                    break;
                }
                if (d_5d9c_9b82 && week_fixture_counts[fixture_week] > 0) {
                    if (menu_choice > 4)
                        d_5d9c_9ef9 = menu_choice - 4;
                    else
                        d_5d9c_9ef9 = menu_choice + 10;
                    show_week_fixtures(fixture_week, 3, d_5d9c_9ef9);
                    d_5d9c_9b83 = -1;
                    fixture_week = 1;
                }
            }
            if (d_5d9c_9b83 == 0)
                message_box("No matches played yet");
        }
    } while (menu_choice != 0);
}

void show_match_report(int match, int week)
{
    FILE *fp;

    fp = fopen("matchfax", "rb");
    fseek(fp, (long)(week_matchfax_base[week - 1] + match - 1) * 149, 0);
    fread(match_record, 1, 149, fp);
    fclose(fp);
    match_stats_screen(week_fixtures[match][0][week - 1] / 32,
                week_fixtures[match][1][week - 1] / 32, -1);
}

void background_picture_menu(void)
{
    do {
        new_screen("Background Picture");
        if (video_mode == 2)
            show_menu(5, "", "*Exit|Picture 1|Picture 2|Picture 3|Change Colour|Change Brightness|");
        else
            show_menu(5, "", "*Exit|Picture 1|");
        strcpy(old_picture_file, picture_file);
        menu_choice_done = 0;
        do {
            wait_menu_choice(5);
            switch (menu_choice) {
            case 0:
                menu_choice_done = -1;
                break;
            case 1:
            case 2:
            case 3:
                sprintf(picture_file, video_mode == 2 ? "picture%d.lbm" : "picega.lbm", menu_choice);
                if (strcmp(picture_file, old_picture_file) != 0) {
                    show_status_box("Loading picture");
                    load_title_picture(-1);
                }
                menu_choice_done = -1;
                break;
            case 4:
                background_colour += background_colour == 5 ? -5 : 1;
                set_picture_palette();
                break;
            case 5:
                background_brightness += background_brightness == 4 ? -4 : 1;
                set_picture_palette();
                break;
            }
        } while (!menu_choice_done);
    } while (menu_choice != 0);
}

void save_game_menu(void)
{
    show_menu(0, "Save game", "*Exit|Save Game|");
    if (menu_choice == 1) {
        is_demo_game = human_manager_count == 0;
        save_game();
        show_menu(0, "System", "*Continue|Quit|");
        if (menu_choice == 1) {
            restore_system();
            exit(0);
        }
    }
}

void show_week_fixtures(int week, int mode, int comp_filter)
{
    if (week < 5) {
        strcpy(competition_title, "Preseason");
        week_match_count = friendly_counts[week];
        strcpy(round_title, "Friendly Match");
        if (week_match_count > 1)
            strcat(round_title, "es");
        sort_fixtures_by_home_team(week, 1, week_match_count, comp_filter);
        show_fixture_range(week, mode, 1, week_match_count, comp_filter);
    } else if (week == 5) {
        strcpy(competition_title, "Charity shield");
        week_match_count = 1;
        strcpy(round_title, "Friendly Match");
        show_fixture_range(week, mode, 1, 1, comp_filter);
    } else if (is_league_week(week)) {
        strcpy(competition_title, "League");
        week_match_count = 40;
        strcpy(round_title, "First Division");
        sort_fixtures_by_home_team(week, 1, 10, comp_filter);
        show_fixture_range(week, mode, 1, 10, comp_filter);
        strcpy(round_title, "Second Division");
        sort_fixtures_by_home_team(week, 11, 20, comp_filter);
        show_fixture_range(week, mode, 11, 20, comp_filter);
        strcpy(round_title, "Third Division");
        sort_fixtures_by_home_team(week, 21, 30, comp_filter);
        show_fixture_range(week, mode, 21, 30, comp_filter);
        strcpy(round_title, "Fourth Division");
        sort_fixtures_by_home_team(week, 31, 40, comp_filter);
        show_fixture_range(week, mode, 31, 40, comp_filter);
    } else if (is_fa_cup_week(week) || is_rumbelows_week(week)) {
        if (is_fa_cup_week(week))
            strcpy(competition_title, "FA Cup");
        else
            strcpy(competition_title, "Rumbelows Cup");
        switch (week) {
        case 9: case 13: case 38: case 39:
            week_match_count = is_rumbelows_week(week) * 12 + 28;
            strcpy(round_title, "1st Round");
            if (week == 9)
                strcat(round_title, ",1st Legs");
            else if (week == 13)
                strcat(round_title, ",2nd Legs");
            add_replay_to_round_title(week, mode);
            break;
        case 19: case 44: case 45:
            week_match_count = 24 - is_rumbelows_week(week) * 8;
            strcpy(round_title, "2nd Round");
            add_replay_to_round_title(week, mode);
            break;
        case 27: case 50: case 51:
            week_match_count = is_rumbelows_week(week) * 16 + 32;
            strcpy(round_title, "3rd Round");
            add_replay_to_round_title(week, mode);
            break;
        case 33: case 56: case 57:
            week_match_count = is_rumbelows_week(week) * 8 + 16;
            strcpy(round_title, "4th Round");
            add_replay_to_round_title(week, mode);
            break;
        case 62: case 63:
            week_match_count = 8;
            strcpy(round_title, "5th Round");
            add_replay_to_round_title(week, mode);
            break;
        case 43: case 68: case 69:
            week_match_count = 4;
            strcpy(round_title, "Quarter Finals");
            add_replay_to_round_title(week, mode);
            break;
        case 61: case 65: case 76: case 77:
            week_match_count = 2;
            strcpy(round_title, "Semi Finals");
            /* the code-free 0;s keep BCC from merging these strcats into the 1st Round ones */
            if (week == 61) {
                strcat(round_title, ",1st Legs");
                0;
            } else if (week == 65) {
                strcat(round_title, ",2nd Legs");
                0;
            }
            add_replay_to_round_title(week, mode);
            break;
        case 82: case 83: case 88: case 89:
            week_match_count = 1;
            strcpy(round_title, "Final");
            add_replay_to_round_title(week, mode);
            break;
        }
        sort_fixtures_by_home_team(week, 1, week_match_count, comp_filter);
        d_5d9c_9ee9 = 8;
        d_5d9c_9ee7 = -7;
        rankings_page = 0;
        do {
            d_5d9c_9ee7 += d_5d9c_9ee9;
            d_5d9c_9ee5 = min_int(week_match_count, d_5d9c_9ee9 + rankings_page * d_5d9c_9ee9);
            rankings_page++;
            show_fixture_range(week, mode, d_5d9c_9ee7, d_5d9c_9ee5, comp_filter);
        } while (d_5d9c_9ee5 != week_match_count);
    } else if (is_playoff_week(week)) {
        strcpy(competition_title, "League playoff");
        switch (week) {
        case 90: case 92:
            strcpy(round_title, "Semi Finals");
            week_match_count = 6;
            if (is_second_leg_week(week))
                strcat(round_title, ",2nd Legs");
            else
                strcat(round_title, ",1st Legs");
            break;
        case 94:
            strcpy(round_title, "Finals");
            week_match_count = 3;
            break;
        }
        show_fixture_range(week, mode, 1, week_match_count, comp_filter);
    } else if (is_uefa_week(week) || is_cup_winners_week(week) || is_european_cup_week(week)) {
        strcpy(cup_winners_cup_name, "Cup Winners Cup");
        strcpy(uefa_cup_name, "UEFA Cup");
        strcpy(european_cup_name, "European Cup");
        strcpy(leg_suffix, "");
        if (is_first_leg_week(week))
            strcpy(leg_suffix, ",1st Leg");
        else if (is_second_leg_week(week))
            strcpy(leg_suffix, ",2nd Leg");
        switch (week) {
        case 11: case 15:
            strcpy(competition_title, uefa_cup_name);
            sprintf(round_title, "Preliminaries%ss", leg_suffix);
            week_match_count = 32;
            sort_fixtures_by_home_team(week, 1, 32, comp_filter);
            show_fixture_range(week, mode, 1, 8, comp_filter);
            show_fixture_range(week, mode, 9, 16, comp_filter);
            show_fixture_range(week, mode, 17, 24, comp_filter);
            show_fixture_range(week, mode, 25, 32, comp_filter);
            break;
        case 17: case 21:
            strcpy(competition_title, cup_winners_cup_name);
            sprintf(round_title, "1st Round%ss", leg_suffix);
            week_match_count = 32;
            sort_fixtures_by_home_team(week, 1, 16, comp_filter);
            show_fixture_range(week, mode, 1, 8, comp_filter);
            show_fixture_range(week, mode, 9, 16, comp_filter);
            strcpy(competition_title, european_cup_name);
            sort_fixtures_by_home_team(week, 17, 32, comp_filter);
            show_fixture_range(week, mode, 17, 24, comp_filter);
            show_fixture_range(week, mode, 25, 32, comp_filter);
            break;
        case 23: case 25:
            strcpy(competition_title, uefa_cup_name);
            sprintf(round_title, "1st Round%ss", leg_suffix);
            week_match_count = 16;
            sort_fixtures_by_home_team(week, 1, 16, comp_filter);
            show_fixture_range(week, mode, 1, 8, comp_filter);
            show_fixture_range(week, mode, 9, 16, comp_filter);
            break;
        case 31: case 35:
            strcpy(competition_title, uefa_cup_name);
            sprintf(round_title, "2nd Round%ss", leg_suffix);
            week_match_count = 24;
            sort_fixtures_by_home_team(week, 1, 8, comp_filter);
            show_fixture_range(week, mode, 1, 8, comp_filter);
            strcpy(competition_title, cup_winners_cup_name);
            sort_fixtures_by_home_team(week, 9, 16, comp_filter);
            show_fixture_range(week, mode, 9, 16, comp_filter);
            strcpy(competition_title, european_cup_name);
            sort_fixtures_by_home_team(week, 17, 24, comp_filter);
            show_fixture_range(week, mode, 17, 24, comp_filter);
            break;
        case 53: case 59:
            strcpy(competition_title, european_cup_name);
            strcpy(round_title, "Group Matches");
            week_match_count = 4;
            show_fixture_range(week, mode, 1, 4, comp_filter);
            break;
        case 67: case 71:
            strcpy(competition_title, european_cup_name);
            strcpy(round_title, "Group Matches");
            week_match_count = 12;
            show_fixture_range(week, mode, 1, 4, comp_filter);
            strcpy(competition_title, uefa_cup_name);
            sprintf(round_title, "3rd Round%ss", leg_suffix);
            sort_fixtures_by_home_team(week, 5, 8, comp_filter);
            show_fixture_range(week, mode, 5, 8, comp_filter);
            strcpy(competition_title, cup_winners_cup_name);
            sort_fixtures_by_home_team(week, 9, 12, comp_filter);
            show_fixture_range(week, mode, 9, 12, comp_filter);
            break;
        case 75: case 79:
            strcpy(competition_title, european_cup_name);
            strcpy(round_title, "Group Matches");
            week_match_count = 8;
            show_fixture_range(week, mode, 1, 4, comp_filter);
            strcpy(competition_title, uefa_cup_name);
            sprintf(round_title, "Semi Finals%ss", leg_suffix);
            sort_fixtures_by_home_team(week, 5, 6, comp_filter);
            show_fixture_range(week, mode, 5, 6, comp_filter);
            strcpy(competition_title, cup_winners_cup_name);
            sort_fixtures_by_home_team(week, 7, 8, comp_filter);
            show_fixture_range(week, mode, 7, 8, comp_filter);
            break;
        case 87:
            strcpy(competition_title, uefa_cup_name);
            sprintf(round_title, "Final%s", leg_suffix);
            week_match_count = 1;
            show_fixture_range(week, mode, 1, 1, comp_filter);
            break;
        case 91:
            strcpy(competition_title, uefa_cup_name);
            strcpy(round_title, "Final,2nd Leg");
            week_match_count = 3;
            show_fixture_range(week, mode, 1, 1, comp_filter);
            strcpy(competition_title, cup_winners_cup_name);
            strcpy(round_title, "Final");
            show_fixture_range(week, mode, 2, 2, comp_filter);
            strcpy(competition_title, european_cup_name);
            show_fixture_range(week, mode, 3, 3, comp_filter);
            break;
        }
    }
    if (is_zenith_week(week)) {
        strcpy(competition_title, "Zenith Cup");
        switch (week) {
        case 7:
            if (zenith_qualifier_count == 0)
                return;
            strcpy(round_title, "Qualifier");
            if (zenith_qualifier_count > 1)
                strcat(round_title, "s");
            week_match_count = zenith_qualifier_count;
            sort_fixtures_by_home_team(week, 1, week_match_count, comp_filter);
            show_fixture_range(week, mode, 1, week_match_count, comp_filter);
            break;
        case 9:
            strcpy(round_title, "First Round");
            week_match_count = 32;
            sort_fixtures_by_home_team(week, 17, 32, comp_filter);
            show_fixture_range(week, mode, 17, 24, comp_filter);
            show_fixture_range(week, mode, 25, 32, comp_filter);
            break;
        case 11:
            strcpy(round_title, "Second Round");
            week_match_count = 40;
            sort_fixtures_by_home_team(week, 33, 40, comp_filter);
            show_fixture_range(week, mode, 33, 40, comp_filter);
            break;
        case 23:
            strcpy(round_title, "Quarter Finals");
            week_match_count = 20;
            sort_fixtures_by_home_team(week, 17, 20, comp_filter);
            show_fixture_range(week, mode, 17, 20, comp_filter);
            break;
        case 41:
            strcpy(round_title, "Semi Finals");
            week_match_count = 2;
            sort_fixtures_by_home_team(week, 1, 2, comp_filter);
            show_fixture_range(week, mode, 1, 2, comp_filter);
            break;
        case 53:
            strcpy(round_title, "Final");
            week_match_count = 5;
            show_fixture_range(week, mode, 5, 5, comp_filter);
            break;
        }
    }
    if (is_domark_week(week)) {
        strcpy(competition_title, "Domark Trophy");
        strcpy(round_title, "Group Matches");
        switch (week) {
        case 15: case 17: case 21:
            week_match_count = 40;
            show_fixture_range(week, mode, 33, 40, comp_filter);
            break;
        case 23:
            week_match_count = 36;
            show_fixture_range(week, mode, 21, 28, comp_filter);
            show_fixture_range(week, mode, 29, 36, comp_filter);
            break;
        case 25:
            week_match_count = 32;
            show_fixture_range(week, mode, 17, 24, comp_filter);
            show_fixture_range(week, mode, 25, 32, comp_filter);
            break;
        case 31: case 35:
            week_match_count = 40;
            show_fixture_range(week, mode, 25, 32, comp_filter);
            show_fixture_range(week, mode, 33, 40, comp_filter);
            break;
        case 41:
            week_match_count = 18;
            show_fixture_range(week, mode, 3, 10, comp_filter);
            show_fixture_range(week, mode, 11, 18, comp_filter);
            break;
        case 47:
            week_match_count = 16;
            show_fixture_range(week, mode, 1, 8, comp_filter);
            show_fixture_range(week, mode, 9, 16, comp_filter);
            break;
        case 53:
            week_match_count = 21;
            show_fixture_range(week, mode, 6, 13, comp_filter);
            show_fixture_range(week, mode, 14, 21, comp_filter);
            break;
        case 59:
            week_match_count = 20;
            show_fixture_range(week, mode, 5, 12, comp_filter);
            show_fixture_range(week, mode, 13, 20, comp_filter);
            break;
        case 67:
            week_match_count = 20;
            show_fixture_range(week, mode, 13, 20, comp_filter);
            break;
        case 71:
            strcpy(round_title, "Quarter Finals");
            week_match_count = 16;
            sort_fixtures_by_home_team(week, 13, 16, comp_filter);
            show_fixture_range(week, mode, 13, 16, comp_filter);
            break;
        case 73:
            strcpy(round_title, "Semi Finals");
            week_match_count = 2;
            sort_fixtures_by_home_team(week, 1, 2, comp_filter);
            show_fixture_range(week, mode, 1, 2, comp_filter);
            break;
        case 87:
            strcpy(round_title, "Final");
            week_match_count = 2;
            show_fixture_range(week, mode, 2, 2, comp_filter);
            break;
        }
    }
}

void show_fixture_range(int week, int mode, int from, int to, int comp_filter)
{
    char buf[320];

    if (fixture_in_comp_filter(comp_filter, week, from) == 0)
        return;
    if (mode < 3) {
        if (week <= 5) {
            fixture_text_colour = 1;
            fixture_box_colour = 12;
        } else if (is_fa_cup_week(week) || is_rumbelows_match(week, from) || is_uefa_match(week, from)
                   || is_cup_winners_match(week, from) || is_european_cup_match(week, from) || is_playoff_week(week)) {
            fixture_text_colour = 4;
            fixture_box_colour = 8;
        } else if (is_zenith_match(week, from) || is_domark_match(week, from)) {
            fixture_text_colour = 1;
            fixture_box_colour = 14;
        } else {
            fixture_text_colour = 1;
            fixture_box_colour = 3;
        }
        if (mode == 2)
            sprintf(fixture_screen_title, "%s draw", competition_title);
        else {
            if (mode != 1) {
                if (week > current_week)
                    sprintf(fixture_screen_title, "Next %s fixture", competition_title);
                else
                    sprintf(fixture_screen_title, "%s fixture", competition_title);
            } else
                sprintf(fixture_screen_title, "%s result", competition_title);
            if (to - from + 1 > 1)
                strcat(fixture_screen_title, "s");
        }
        draw_fixture_box(to - from + 1, week, from, mode);
        cur_y = 8;
    }
    for (loop_i = from - 1; to - 1 >= loop_i; loop_i++) {
        if (mode < 3) {
            home_team = week_fixtures[loop_i][0][week - 1] / 32;
            away_team = week_fixtures[loop_i][1][week - 1] / 32;
            set_fixture_team_text(home_team, week, loop_i);
            set_text_opaque(0);
            draw_text_at(40, 1 - (cur_y + fixture_list_y_offset) * 8, shirt_bg, fixture_team_name);
            draw_text_at(124, 1 - (cur_y + fixture_list_y_offset) * 8, 6, fixture_team_tag);
            if (mode == 1) {
                sprintf(club_title_text, "%d-%d", week_fixtures[loop_i][0][week - 1] % 32,
                        week_fixtures[loop_i][1][week - 1] % 32);
                if (penalty_winner[loop_i] == 1)
                    draw_text_at(155, 1 - (cur_y + fixture_list_y_offset) * 8, 1, "P");
                else if (penalty_winner[loop_i] == 2)
                    draw_text_at(184, 1 - (cur_y + fixture_list_y_offset) * 8, 1, "P");
            } else
                strcpy(club_title_text, " v");
            draw_text_font1(20, -(cur_y + fixture_list_y_offset), 1, club_title_text);
            set_fixture_team_text(away_team, week, loop_i);
            draw_text_at(200, 1 - (cur_y + fixture_list_y_offset) * 8, shirt_bg, fixture_team_name);
            draw_text_at(278, 1 - (cur_y + fixture_list_y_offset) * 8, 6, fixture_team_tag);
            if (strstr(round_title, "2ndLeg")) {
                cup_slot = two_leg_comp_index(week, loop_i + 1);
                first_leg_scores = vm_map(first_leg_ems_handle, 0);
                home_first_leg_goals = *(unsigned char far *)(first_leg_scores + cup_slot * 80 + loop_i * 2 + 1);
                away_first_leg_goals = *(unsigned char far *)(first_leg_scores + cup_slot * 80 + loop_i * 2);
                if (mode == 1) {
                    home_first_leg_goals += week_fixtures[loop_i][0][week - 1] % 32;
                    away_first_leg_goals += week_fixtures[loop_i][1][week - 1] % 32;
                }
                sprintf(buf, "%d", home_first_leg_goals);
                draw_text_font2(2, cur_y - 0.75 + fixture_list_y_offset, 1, buf);
                sprintf(buf, "%d", away_first_leg_goals);
                draw_text_font2(39, cur_y - 0.75 + fixture_list_y_offset, 1, buf);
            } else if (is_european_cup_match(week, loop_i + 1) && strstr(round_title, "Group")) {
                sprintf(buf, "%c", loop_i + 1 > 2 ? 'B' : 'A');
                draw_text_font2(2, cur_y - 0.75 + fixture_list_y_offset, 1, buf);
            } else if (is_domark_match(week, loop_i + 1) && strstr(round_title, "Group")) {
                sprintf(buf, "%c", domark_group_of_match(week, loop_i + 1) + 'A');
                draw_text_font2(2, cur_y - 0.75 + fixture_list_y_offset, 1, buf);
            }
            cur_y += 2;
        } else
            show_match_report(loop_i, week);
    }
    if (mode < 3)
        wait_for_click(0);
}

char fixture_in_comp_filter(int comp_filter, int week, int fixture)
{
    d_5d9c_9b81 = 0;
    if (comp_filter == -1)
        d_5d9c_9b81 = -1;
    else if (comp_filter == 1 && is_fa_cup_week(week))
        d_5d9c_9b81 = -1;
    else if (comp_filter == 2 && is_rumbelows_match(week, fixture))
        d_5d9c_9b81 = -1;
    else if (comp_filter == 3 && is_zenith_match(week, fixture))
        d_5d9c_9b81 = -1;
    else if (comp_filter == 4 && is_domark_match(week, fixture))
        d_5d9c_9b81 = -1;
    else if (comp_filter == 5 && is_uefa_match(week, fixture))
        d_5d9c_9b81 = -1;
    else if (comp_filter == 6 && is_cup_winners_match(week, fixture))
        d_5d9c_9b81 = -1;
    else if (comp_filter == 7 && is_european_cup_match(week, fixture))
        d_5d9c_9b81 = -1;
    else if (comp_filter == 8 && is_playoff_week(week))
        d_5d9c_9b81 = -1;
    else if (comp_filter == 9 && week == 5)
        d_5d9c_9b81 = -1;
    else if (comp_filter == 10 && week < 5)
        d_5d9c_9b81 = -1;
    else if (comp_filter >= 11 && is_league_week(week))
        d_5d9c_9b81 = (comp_filter - 11) * 10 + 1 == fixture ? -1 : 0;
    return d_5d9c_9b81;
}

int two_leg_comp_index(int week, int fixture)
{
    if (is_rumbelows_match(week, fixture))
        cup_slot = 0;
    else if (is_uefa_match(week, fixture))
        cup_slot = 1;
    else if (is_cup_winners_match(week, fixture))
        cup_slot = 2;
    else if (is_european_cup_match(week, fixture))
        cup_slot = 3;
    else if (is_playoff_week(week))
        cup_slot = 4;
    return cup_slot;
}

void set_fixture_team_text(int club, int week, int fixture)
{
    is_highlighted_team = 0;
    if (club <= 79) {
        strcpy(fixture_team_name, team_names[club]);
        if (is_fa_cup_week(week) || is_playoff_week(week) || is_rumbelows_match(week, fixture + 1)
            || is_zenith_match(week, fixture + 1) || is_domark_match(week, fixture + 1) || week < 5) {
            sprintf(fixture_team_tag, "DIV%d", club / 20 + 1);
            if (is_human_team(club))
                is_highlighted_team = -1;
        } else if (is_uefa_match(week, fixture + 1) || is_cup_winners_match(week, fixture + 1) || is_european_cup_match(week, fixture + 1)) {
            strcpy(fixture_team_tag, "ENG");
            is_highlighted_team = -1;
        } else {
            strcpy(fixture_team_tag, "");
            if (is_human_team(club))
                is_highlighted_team = -1;
        }
    } else if (club <= 479) {
        strcpy(fixture_team_name, foreign_team_names[club]);
        sprintf(fixture_team_tag, "%.3s", country_names[team_country[club]]);
    } else {
        strcpy(fixture_team_name, foreign_team_names[club]);
        strcpy(fixture_team_tag, "NLGE");
    }
    shirt_bg = fixture_text_colour - is_highlighted_team * (fixture_text_colour == 4 ? 8 : 5);
}

void sort_fixtures_by_home_team(int week, int from, int to, int comp_filter)
{
    if (fixture_in_comp_filter(comp_filter, week, from) == 0)
        return;
    if (strstr(round_title, "1st Leg")) {
        if (week == 23)
            second_leg_week = 25;
        else
            second_leg_week = week + 4;
    }
    for (loop_j = from - 1; loop_j <= to - 2; loop_j++) {
        for (loop_k = loop_j + 1; loop_k <= to - 1; loop_k++) {
            strcpy(d_1f3e_4cfc, club_name(fixture_table[loop_j][0][week] / 32));
            strcpy(d_1f3e_4cac, club_name(fixture_table[loop_k][0][week] / 32));
            if (strcmp(d_1f3e_4cfc, d_1f3e_4cac) > 0) {
                for (d_5d9c_9ecf = 0; d_5d9c_9ecf <= 1; d_5d9c_9ecf++) {
                    swap_bytes(&fixture_table[loop_j][d_5d9c_9ecf][week],
                                &fixture_table[loop_k][d_5d9c_9ecf][week], 2);
                    if (strstr(round_title, "1st Leg")) {
                        swap_bytes(&fixture_table[loop_j][d_5d9c_9ecf][second_leg_week],
                                    &fixture_table[loop_k][d_5d9c_9ecf][second_leg_week], 2);
                    } else if (strstr(round_title, "2nd Leg")) {
                        cup_slot = two_leg_comp_index(week, from);
                        first_leg_scores = vm_map(first_leg_ems_handle, 1);
                        swap_bytes(first_leg_scores + cup_slot * 80 + loop_j * 2 + d_5d9c_9ecf,
                                    first_leg_scores + cup_slot * 80 + loop_k * 2 + d_5d9c_9ecf, 1);
                    }
                }
            }
        }
    }
}

void add_replay_to_round_title(int week, int mode)
{
    if (is_cup_replay_week(week) == 0)
        return;
    if (strcmp(round_title, "QuarterFinals") == 0 || strcmp(round_title, "SemiFinals") == 0)
        round_title[strlen(round_title) - 1] = 0;
    strcat(round_title, " Replay");
    week_match_count = week_fixture_counts[week];
    if (week_match_count > 1)
        strcat(round_title, "s");
    d_5d9c_9b7f = 0;
}

void draw_fixture_box(int count, int week, int from, int mode)
{
    char buf[320];

    if (count > 8) {
        new_screen("");
        set_fill_colour(16);
        sprintf(buf, " %s ", round_title);
        if (mode == 1)
            strcat(buf, "Results ");
        else
            strcat(buf, "Fixtures ");
        fill_rect(28, 9, (strlen(buf) + 3.25) * 8 + 3, 22);
        draw_text_box(3.25, 1.25, 0, 1, 0, buf);
        fixture_list_y_offset = -3.125;
    } else {
        new_screen(fixture_screen_title);
        sprintf(buf, " %s ", round_title);
        set_fill_colour(16);
        fill_rect(28, 31, (strlen(buf) + 3.25) * 8 + 3, 44);
        draw_text_box(3.25, 4.0, 0, 1, 0, buf);
        fixture_list_y_offset = 0;
    }
    set_fill_colour(16);
    fill_rect(28, 8 * fixture_list_y_offset + 54, 299, count * 16 + (8 * fixture_list_y_offset + 54));
    set_fill_colour(fixture_box_colour + 16);
    fill_rect(24, 8 * fixture_list_y_offset + 51, 296, count * 16 + (8 * fixture_list_y_offset + 51));
    set_draw_colour(17);
    draw_rect(24, 8 * fixture_list_y_offset + 51, 296, count * 16 + (8 * fixture_list_y_offset + 51));
    if (count > 1) {
        for (d_5d9c_9ecd = 1; d_5d9c_9ecd <= count - 1; d_5d9c_9ecd++)
            draw_line(24, d_5d9c_9ecd * 16 + 52 + 8 * fixture_list_y_offset,
                        296, d_5d9c_9ecd * 16 + 52 + 8 * fixture_list_y_offset);
    }
    draw_line(144, 8 * fixture_list_y_offset + 51, 144, count * 16 + 51 + 8 * fixture_list_y_offset);
    draw_line(184, 8 * fixture_list_y_offset + 51, 184, count * 16 + 51 + 8 * fixture_list_y_offset);
    if (strstr(round_title, "2ndLeg")) {
        draw_label(0.875, fixture_list_y_offset + 5.25, 1, 2, 0, "Ag");
        draw_label(37.875, fixture_list_y_offset + 5.25, 1, 2, 0, "Ag");
    } else if (strstr(round_title, "Group")) {
        draw_label(0.875, fixture_list_y_offset + 5.25, 1, 2, 0, "Gr");
    }
}

void show_season_start_message(void)
{
    char buf[320];

    switch (current_week) {
    case 1: strcpy(d_1f3e_4c5c, "in a month"); break;
    case 2: strcpy(d_1f3e_4c5c, "in three weeks"); break;
    case 3: strcpy(d_1f3e_4c5c, "in two weeks"); break;
    case 4: strcpy(d_1f3e_4c5c, "next week"); break;
    }
    sprintf(buf, "Season starts %s", d_1f3e_4c5c);
    message_box(buf);
}

void squad_screen(int team)
{
    char buf[80];
    int i;

    squad_view = 0;
    for (;;) {
        for (i = 0; i < 30; i++)
            squad_list_players[i] = -1;
        if (squad_view > 0)
            list_group_by_rating(squad_view - 1, team);
        draw_club_title(1.5, team, "Squad");
        for (loop_i = 1; loop_i <= 15; loop_i++) {
            switch (loop_i) {
            case 1: case 2: case 3: case 4: case 5: case 6: case 7:
            case 8: case 9: case 10: case 11: case 12: case 13:
                row_name_colour = 1;
                strcpy(shirt_label, shirt_number_text(loop_i));
                break;
            case 14:
                strcpy(shirt_label, "CLR");
                row_name_colour = 99;
                break;
            case 15:
                strcpy(shirt_label, "SWP");
                row_name_colour = 99;
                break;
            }
            add_button(0, (loop_i - 1) * 2.5 + 1.375 + (loop_i > 11 ? 0.125 : 0)
                        + (loop_i > 13 ? 0.125 : 0), 19.75,
                        row_name_colour / 16, row_name_colour % 16, 0x12, shirt_label);
        }
        add_button(0, 1.375, 20.75, 1, 12, 0x2f, "  GOAL");
        add_button(0, 7.5, 20.75, 1, 12, 0x30, "  DISP");
        add_button(0, 13.75, 20.75, 1, 12, 0x30, "  AV R");
        add_button(0, 20.0, 20.75, 1, 3, 0x31, "  PREV");
        add_button(0, 26.375, 20.75, 1, 3, 0x31, "  TACT");
        add_button(0, 32.75, 20.75, 1, 3, 0x31, "  OPPS");
        add_button(2, 1.5, 21.875, 1, 4, 0x90, "       DONE");
        add_button(2, 1.5, 4.0, 1, 14, 0x2e, " Trns");
        add_button(2, 7.875, 4.0, 1, 14, 0x2d, " Staf");
        add_button(2, 14.125, 4.0, 1, 14, 0x2d, " Leag");
        add_button(2, 20.375, 4.0, 1, 14, 0x2d, " Fixt");
        add_button(2, 26.625, 4.0, 1, 14, 0x2d, " Accs");
        add_button(2, 32.875, 4.0, 1, 14, 0x2e, " Info");
        add_button(2, 20.125, 21.875, 1, 4, 0x2e, squad_view == 1 ? " SQDL" : " DEFS");
        add_button(2, 26.5, 21.875, 1, 4, 0x2e, squad_view == 2 ? " SQDL" : " MIDS");
        add_button(2, 32.875, 21.875, 1, 4, 0x2e, squad_view == 3 ? " SQDL" : " ATTS");
        if (squad_view == 0)
            draw_squad_list(team);
        else
            show_position_group_list(squad_view - 1, team);
        selected_slot = 0;
        swap_mode = 0;
        for (;;) {
            if (selected_slot == 0) {
                disable_button(15);
                disable_button(14);
            } else
                enable_all_buttons();
            menu_choice = wait_for_button(0);
            if (menu_choice == 0) {
                restore_menu_button(selected_slot);
                if (swap_mode) {
                    swap_mode = 0;
                    draw_button(15, 0);
                }
                continue;
            } else if (menu_choice >= 1 && menu_choice <= 13) {
                d_5d9c_9ec9 = selected_slot;
                if ((selected_slot = menu_choice) == d_5d9c_9ec9)
                    continue;
                if (d_5d9c_9ec9 > 0)
                    draw_button(d_5d9c_9ec9, 0);
                if (swap_mode == 0)
                    continue;
                for (loop_i = 0; loop_i <= squad_list_count - 1; loop_i++) {
                    if (team_selection[team][selected_slot - 1] == squad_list_players[loop_i]) {
                        strcpy(shirt_label, shirt_number_text(d_5d9c_9ec9));
                        if (squad_view == 0) {
                            set_squad_row_columns(loop_i);
                            draw_label(d_5d9c_9af0, text_y, 2, 1, 0, shirt_label);
                        } else
                            draw_label(1.375, loop_i + 7.5, 2, 1, 0, shirt_label);
                    } else if (team_selection[team][d_5d9c_9ec9 - 1] == squad_list_players[loop_i]) {
                        strcpy(shirt_label, shirt_number_text(selected_slot));
                        if (squad_view == 0) {
                            set_squad_row_columns(loop_i);
                            draw_label(d_5d9c_9af0, text_y, 2, 1, 0, shirt_label);
                        } else
                            draw_label(1.375, loop_i + 7.5, 2, 1, 0, shirt_label);
                    }
                }
                swap_bytes(&team_selection[team][selected_slot - 1], &team_selection[team][d_5d9c_9ec9 - 1], 2);
                restore_menu_button(selected_slot);
                draw_button(15, 0);
                swap_mode = 0;
                continue;
            } else if (menu_choice == 14) {
                if (selected_slot > 0) {
                    cur_player = team_selection[team][selected_slot - 1];
                    if (cur_player < 1700) {
                        for (loop_i = 0; loop_i <= squad_list_count - 1; loop_i++) {
                            if (squad_list_players[loop_i] == cur_player) {
                                if (squad_view == 0) {
                                    set_squad_row_columns(loop_i);
                                    draw_label(d_5d9c_9af0, text_y, 1, 2, 0, "  ");
                                } else
                                    draw_label(1.375, loop_i + 7.5, 1, 2, 0, "  ");
                            }
                        }
                        player_is_picked[cur_player] = 0;
                        team_selection[team][selected_slot - 1] = 1700;
                    }
                    restore_menu_button(selected_slot);
                }
                if (swap_mode) {
                    swap_mode = 0;
                    draw_button(15, 0);
                }
                draw_button(14, 0);
                continue;
            } else if (menu_choice == 15) {
                swap_mode = !swap_mode;
                if (swap_mode == 0)
                    draw_button(15, 0);
                continue;
            } else if (menu_choice == 16 || menu_choice == 17 || menu_choice == 18) {
                top_players_screen(menu_choice - 16, team);
                break;
            } else if (menu_choice == 19) {
                if (last_match_info[0][team] == 0) {
                    show_message_done("No matches played");
                    draw_button(19, 0);
                } else {
                    FILE *fp;

                    fp = fopen("matchfax", "rb");
                    fseek(fp, (long)(last_match_info[0][team] - 1) * 149, 0);
                    fread(match_record, 1, 149, fp);
                    fclose(fp);
                    match_stats_screen(week_fixtures[last_match_info[1][team]][0][last_match_info[2][team]] / 32,
                                week_fixtures[last_match_info[1][team]][1][last_match_info[2][team]] / 32, -1);
                    break;
                }
            } else if (menu_choice == 20) {
                tactics_editor(team);
                break;
            } else if (menu_choice == 21) {
                if (playing_week_matches) {
                    captain_slot = 0;
                    if (opponent_team < 80)
                        club_squad_screen(opponent_team);
                    else
                        view_team_tactics(opponent_team);
                    break;
                }
                show_message_done("No details yet");
                continue;
            } else if (menu_choice == 22) {
                if (playing_week_matches == 0)
                    return;
                picked_count = 0;
                for (loop_i = 0; loop_i <= 12; loop_i++)
                    if (team_selection[team][loop_i] < 1700)
                        picked_count++;
                if (picked_count >= 13)
                    return;
                if (picked_count == 0)
                    show_message_done("Nobody picked");
                else {
                    sprintf(buf, "Only %d picked", picked_count);
                    show_message_done(buf);
                }
            } else if (menu_choice == 23) {
                club_transfers_screen(team);
                break;
            } else if (menu_choice == 24) {
                staff_screen(team);
                break;
            } else if (menu_choice == 25) {
                league_progress_graph(team);
                break;
            } else if (menu_choice == 26) {
                team_fixtures_screen(team);
                break;
            } else if (menu_choice == 27) {
                show_accounts(team);
                break;
            } else if (menu_choice == 28) {
                club_info_screen(team);
                break;
            } else if (menu_choice == 29 || menu_choice == 30 || menu_choice == 31) {
                button_labels = vm_map(button_labels_handle, 0);
                strcpy(d_1f3e_4bbc, trim_spaces(button_labels + (menu_choice - 1) * 40));
                if (strcmp(d_1f3e_4bbc, "SQDL") == 0)
                    squad_view = 0;
                else if (strcmp(d_1f3e_4bbc, "DEFS") == 0)
                    squad_view = 1;
                else if (strcmp(d_1f3e_4bbc, "MIDS") == 0)
                    squad_view = 2;
                else
                    squad_view = 3;
                break;
            } else if (menu_choice >= 32) {
                d_5d9c_9f3d = menu_choice - 32;
                cur_player = squad_list_players[d_5d9c_9f3d];
                if (selected_slot == 0) {
                    do {
                        player_details_screen(cur_player, -1, -1);
                        do_player_action(cur_player, player_screen_action);
                    } while (!exit_chosen);
                    break;
                }
                if (player_attrs[20][cur_player] > 0)
                    show_message_done("Not available");
                else {
                    if (team_selection[team][selected_slot - 1] != cur_player) {
                        if (team_selection[team][selected_slot - 1] < 1700) {
                            for (loop_i = 0; loop_i <= squad_list_count - 1; loop_i++) {
                                if (team_selection[team][selected_slot - 1] == squad_list_players[loop_i]) {
                                    if (squad_view == 0) {
                                        set_squad_row_columns(loop_i);
                                        draw_label(d_5d9c_9af0, text_y, 1, 2, 0, "  ");
                                    } else
                                        draw_label(1.375, loop_i + 7.5, 1, 2, 0, "  ");
                                }
                            }
                            player_is_picked[team_selection[team][selected_slot - 1]] = 0;
                        }
                        if (player_is_picked[cur_player])
                            team_selection[team][match_squad_slot(cur_player)] = 1700;
                        team_selection[team][selected_slot - 1] = cur_player;
                        player_is_picked[cur_player] = -1;
                        strcpy(shirt_label, shirt_number_text(selected_slot));
                        if (squad_view == 0) {
                            set_squad_row_columns(d_5d9c_9f3d);
                            draw_label(d_5d9c_9af0, text_y, 2, 1, 0, shirt_label);
                        } else
                            draw_label(1.375, d_5d9c_9f3d + 7.5, 2, 1, 0, shirt_label);
                    }
                    draw_button(menu_choice, 0);
                }
                0;
            } else
                return;
            restore_menu_button(selected_slot);
        }
    }
}

/* the squad screen's attribute columns: x position and heading */
static struct col squad_columns[] = {
    {14.875, "PS"}, {17.0, "TK"}, {19.125, "PA"}, {21.25, "HD"}, {23.375, "FL"},
    {25.5, "CR"}, {27.625, "AG"}, {29.75, "IF"}, {31.875, "SDE"}, {34.375, "FIT"},
    {36.875, "AVR"}
};

void show_position_group_list(int group, int team)
{
    char buf[320];

    if (group == 0)
        strcpy(buf, " DEFENDERS");
    else if (group == 1)
        strcpy(buf, " MIDFIELDERS");
    else
        strcpy(buf, " ATTACKERS");
    draw_label(1.375, 6.5, 0, 1, 0x68, buf);
    for (d_5d9c_9ebd = 0; d_5d9c_9ebd <= 10; d_5d9c_9ebd++)
        draw_label(squad_columns[d_5d9c_9ebd].x - 0.125, 6.5, 0, 6, d_5d9c_9ebd > 7 ? 0x12 : 0xf,
                    squad_columns[d_5d9c_9ebd].title);
    for (d_5d9c_9f71 = 1; d_5d9c_9f71 <= 12; d_5d9c_9f71++) {
        if (d_5d9c_9f71 & 1) {
            d_5d9c_9ebb = 14;
            d_5d9c_9eb9 = 4;
        } else {
            d_5d9c_9ebb = 8;
            d_5d9c_9eb9 = 12;
        }
        cur_player = squad_list_players_m1[d_5d9c_9f71];
        strcpy(d_1f3e_4b6c, "");
        shirt_fg = 0x12;
        if (cur_player > -1) {
            if (player_attrs[20][cur_player] > 0) {
                if (player_attrs[19][cur_player] == 20)
                    strcpy(d_1f3e_4b6c, "su");
                else
                    strcpy(d_1f3e_4b6c, "ij");
            } else if (player_is_picked[cur_player]) {
                strcpy(d_1f3e_4b6c, shirt_number_text(match_squad_slot(cur_player) + 1));
                shirt_fg = 0x21;
            }
            draw_label(1.375, d_5d9c_9f71 + 6.5, shirt_fg / 16, shirt_fg % 16, 12, d_1f3e_4b6c);
            sprintf(buf, " %.14s", player_short_name(cur_player));
            add_button(0, 3.125, d_5d9c_9f71 + 6.5, 1, d_5d9c_9ebb, 0x5a, buf);
        } else {
            draw_label(1.375, d_5d9c_9f71 + 6.5, shirt_fg / 16, shirt_fg % 16, 12, "");
            draw_label(3.125, d_5d9c_9f71 + 6.5, 1, d_5d9c_9ebb, 0x5a, "");
        }
        for (d_5d9c_9ebd = 0; d_5d9c_9ebd <= 10; d_5d9c_9ebd++) {
            if (cur_player > -1) {
                switch (d_5d9c_9ebd) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                    sprintf(d_1f3e_4b1c, "%02d", player_attrs[d_5d9c_9ebd + 1][cur_player]);
                    row_name_colour = 1;
                    break;
                case 6:
                    sprintf(d_1f3e_4b1c, "%02d", player_attrs[10][cur_player]);
                    row_name_colour = 6;
                    break;
                case 7:
                    sprintf(d_1f3e_4b1c, "%02d", player_attrs[12][cur_player]);
                    row_name_colour = 6;
                    break;
                case 8:
                    strcpy(d_1f3e_4b1c, "");
                    if (player_sides[0][cur_player])
                        strcat(d_1f3e_4b1c, "R");
                    if (player_sides[1][cur_player])
                        strcat(d_1f3e_4b1c, "L");
                    if (player_sides[2][cur_player])
                        strcat(d_1f3e_4b1c, "C");
                    if (strlen(d_1f3e_4b1c) == 1) {
                        d_1f3e_4b1c[1] = d_1f3e_4b1c[0];
                        d_1f3e_4b1c[0] = d_1f3e_4b1c[2] = ' ';
                        d_1f3e_4b1c[3] = 0;
                    } else if (strlen(d_1f3e_4b1c) == 2)
                        strcat(d_1f3e_4b1c, " ");
                    row_name_colour = 6;
                    break;
                case 9:
                    if (player_attrs[20][cur_player] == 0)
                        sprintf(d_1f3e_4b1c, "%03d", player_attrs[21][cur_player]);
                    else
                        strcpy(d_1f3e_4b1c, "");
                    0;
                    row_name_colour = 6;
                    break;
                case 10:
                    if (player_stats[0][cur_player] > 0) {
                        sprintf(d_1f3e_4b1c, "%d", player_rating_total[cur_player] / player_stats[0][cur_player] * 10 / 10);
                        if (strlen(d_1f3e_4b1c) == 1)
                            strcat(d_1f3e_4b1c, ".0");
                    } else
                        strcpy(d_1f3e_4b1c, "");
                    row_name_colour = 9;
                    break;
                }
            } else
                strcpy(d_1f3e_4b1c, "");
            draw_label(squad_columns[d_5d9c_9ebd].x, d_5d9c_9f71 + 6.5, row_name_colour, d_5d9c_9eb9,
                        d_5d9c_9ebd > 7 ? 0x12 : 0xf, d_1f3e_4b1c);
        }
    }
}

void list_group_by_rating(int group, int team)
{
    char picked[30];

    memset(picked, 0, 30);
    d_5d9c_9b7c = 0;
    squad_list_count = 0;
    for (d_5d9c_9f71 = 1; d_5d9c_9f71 <= 12; d_5d9c_9f71++) {
        if (d_5d9c_9b7c == 0) {
            cur_player = -1;
            for (d_5d9c_9f51 = 0; d_5d9c_9f51 <= squad_size[team] - 1; d_5d9c_9f51++) {
                d_5d9c_9eb7 = squad_players[team][d_5d9c_9f51];
                if (player_position_groups[group][d_5d9c_9eb7] && picked[d_5d9c_9f51] == 0) {
                    if (player_stats[5][d_5d9c_9eb7] + player_stats[0][d_5d9c_9eb7] > 0)
                        d_5d9c_9aec = (cup_rating_total[d_5d9c_9eb7] + player_rating_total[d_5d9c_9eb7])
                                      / ((float)player_stats[5][d_5d9c_9eb7] + player_stats[0][d_5d9c_9eb7]);
                    else
                        d_5d9c_9aec = 0;
                    if (d_5d9c_9aec > d_5d9c_9ae8 || cur_player == -1) {
                        d_5d9c_9ae8 = d_5d9c_9aec;
                        cur_player = d_5d9c_9eb7;
                        d_5d9c_9f3d = d_5d9c_9f51;
                    }
                }
            }
        }
        if (cur_player > -1) {
            picked[d_5d9c_9f3d] = -1;
            squad_list_players_m1[d_5d9c_9f71] = cur_player;
            squad_list_count++;
        } else
            d_5d9c_9b7c = -1;
    }
}

/* the tactics editor's buttons: colours and label. The code reads entry i (from 1) as
 * tactic_buttons_from1[i], one entry before the table: BCC folds that base into the displacements
 * as the original does, where indexing this table with [i - 1] does not (it computes the
 * -5 of the second byte at run time). */
static struct pos tactic_buttons[] = {
    {1, 12, " GK"}, {1, 12, " SWP"}, {1, 12, " DEF"}, {1, 12, " MID"}, {1, 12, " ATT"},
    {6, 4, " RIGHT"}, {6, 4, " LEFT"}, {6, 4, " CENTRE"}, {1, 12, " NORM"},
    {1, 12, " FORW"}, {1, 12, " BACK"}, {1, 4, " CAPT"}, {1, 2, " STYLE"},
    {1, 2, " TACTIC"}
};

void tactics_editor(int team)
{
    for (loop_i = 0; loop_i <= 12; loop_i++)
        for (loop_j = 0; loop_j <= 2; loop_j++)
            edited_tactics[loop_j][loop_i] = team_tactics[team][loop_j][loop_i];
    style_and_formation = manager_style_formation[team_manager[team]];
    captain_slot = manager_captain[team_manager[team]];
    do {
        new_screen("Tactics editor");
        draw_team_label(1.0, 4.5, team);
        draw_team_sheet(team, 0);
        add_button(0, 21.25, 21.0, 6, 3, 0, "RE");
        add_button(0, 23.0, 21.0, 12, 6, 0x4e, " SWAP WITH");
        for (loop_i = 1; loop_i <= 14; loop_i++)
            add_button(0, 33.0, loop_i + 7, tactic_buttons_from1[loop_i].c,
                        tactic_buttons_from1[loop_i].d, 0x33, tactic_buttons_from1[loop_i].s);
        selected_slot = 0;
        swap_slots_mode = 0;
        do
            selected_slot++;
        while (slot_status[team == away_team][selected_slot - 1] >= 2);
        best_league_slot = -1;
        selected_side_button = -1;
        selected_run_button = -1;
        draw_button(selected_slot + 1, -1);
        highlight_slot_buttons(selected_slot);
        draw_formation(team);
        do {
            menu_choice_done = 0;
            tactics_button = wait_for_button(-1);
            switch (tactics_button) {
            case 1:
                if (captain_selected == 0) {
                    tactics_message("No Captain selected");
                    break;
                }
                menu_choice_done = -1;
                break;
            case 2: case 3: case 4: case 5: case 6: case 7: case 8:
            case 9: case 10: case 11: case 12: case 13: case 14:
                d_5d9c_9b79 = 0;
                d_5d9c_9b78 = 0;
                d_5d9c_9b77 = 0;
                d_5d9c_9eaf = slot_status[team == away_team][tactics_button - 2];
                d_5d9c_9ead = slot_status[team == away_team][selected_slot - 1];
                if (swap_slots_mode == 0 && (d_5d9c_9eaf < 2 || in_match_tactics && d_5d9c_9eaf == 6))
                    d_5d9c_9b79 = -1;
                else if (swap_slots_mode && d_5d9c_9eaf < 2 && d_5d9c_9ead < 2)
                    d_5d9c_9b78 = -1;
                else if (in_match_tactics && swap_slots_mode && d_5d9c_9eaf == 4 &&
                         (d_5d9c_9ead < 2 || d_5d9c_9ead == 6))
                    d_5d9c_9b77 = -1;
                if (d_5d9c_9b79 == 0 && d_5d9c_9b78 == 0 && d_5d9c_9b77 == 0)
                    break;
                d_5d9c_9eab = selected_slot;
                if ((selected_slot = tactics_button - 1) != d_5d9c_9eab) {
                    draw_button(d_5d9c_9eab + 1, 0);
                    draw_button(selected_slot + 1, -1);
                    if (swap_slots_mode) {
                        if (d_5d9c_9b77) {
                            d_5d9c_9ea9 = d_5d9c_9eab - 1;
                            d_5d9c_9ea7 = selected_slot - 1;
                            for (loop_j = 0; loop_j <= 2; loop_j++) {
                                edited_tactics[loop_j][d_5d9c_9ea7] = edited_tactics[loop_j][d_5d9c_9ea9];
                                team_tactics[team][loop_j][d_5d9c_9ea7] = team_tactics[team][loop_j][d_5d9c_9ea9];
                            }
                            slot_status[team == away_team][d_5d9c_9ea7] = 0;
                            if (slot_status[team == away_team][d_5d9c_9ea9] == 6)
                                slot_status[team == away_team][d_5d9c_9ea9] = 3;
                            else
                                slot_status[team == away_team][d_5d9c_9ea9] = 5;
                            sub_replaced_slot[team == away_team][d_5d9c_9ea7 == 12] = d_5d9c_9ea9;
                            sub_minutes[team == away_team][d_5d9c_9ea7 == 12] = match_minute;
                        } else if (d_5d9c_9b78) {
                            for (loop_j = 0; loop_j <= 2; loop_j++)
                                swap_bytes(&edited_tactics[loop_j][d_5d9c_9eab - 1],
                                            &edited_tactics[loop_j][selected_slot - 1], 1);
                        }
                        draw_formation(team);
                        swap_slots_mode = 0;
                        draw_button(29, 0);
                    }
                }
                highlight_slot_buttons(selected_slot);
                break;
            case 15: case 16: case 17: case 18: case 19: case 20: case 21:
            case 22: case 23: case 24: case 25: case 26: case 27:
                cur_player = team_selection[team][tactics_button - 15];
                if (cur_player >= 1700)
                    break;
                do {
                    player_details_screen(team_selection[team][tactics_button - 15], -1, -1);
                    do_player_action(cur_player, player_screen_action);
                } while (!exit_chosen);
                menu_choice_done = -1;
                break;
            case 28:
                draw_button(28, -1);
                for (loop_i = 0; loop_i <= 12; loop_i++)
                    for (loop_j = 0; loop_j <= 2; loop_j++)
                        edited_tactics[loop_j][loop_i] = team_tactics[team][loop_j][loop_i];
                style_and_formation = manager_style_formation[team_manager[team]];
                captain_slot = manager_captain[team_manager[team]];
                highlight_slot_buttons(selected_slot);
                draw_formation(team);
                draw_button(28, 0);
                break;
            case 29:
                draw_button(29, !swap_slots_mode);
                swap_slots_mode = !swap_slots_mode;
                break;
            case 30: case 31:
                position_ok = set_slot_position(selected_slot, tactics_button == 31 ? 11 : 1);
                if (position_ok) {
                    highlight_slot_buttons(selected_slot);
                    draw_formation(team);
                } else
                    tactics_message("Position occupied");
                break;
            case 32: case 33: case 34:
                sprintf(tactics_text, "%d", selected_side_button > 0 ? selected_side_button : 0);
                do {
                    position_ok = set_slot_position(selected_slot,
                        (tactics_button - 32) * 3 + (int)atol(right_chars(tactics_text, 1)) + 2);
                    if (position_ok) {
                        highlight_slot_buttons(selected_slot);
                        draw_formation(team);
                    } else if (strlen(tactics_text) < 3) {
                        if (strstr(tactics_text, "0") == 0)
                            strcat(tactics_text, "0");
                        else if (strstr(tactics_text, "1") == 0)
                            strcat(tactics_text, "1");
                        else if (strstr(tactics_text, "2") == 0)
                            strcat(tactics_text, "2");
                    } else
                        strcpy(tactics_text, "Fuck");
                } while (position_ok == 0 && strlen(tactics_text) != 4);
                if (position_ok)
                    break;
                tactics_message("Position occupied");
                break;
            case 35: case 36: case 37:
                position_ok = set_slot_position(selected_slot, (best_league_slot - 2) * 3 + tactics_button - 33);
                if (position_ok) {
                    highlight_slot_buttons(selected_slot);
                    draw_formation(team);
                } else
                    tactics_message("Position occupied");
                break;
            case 38: case 39: case 40:
                if (edited_tactics[0][selected_slot - 1] != 1 && edited_tactics[0][selected_slot - 1] != 11 &&
                    edited_tactics[1][selected_slot - 1] != tactics_button - 38) {
                    edited_tactics[1][selected_slot - 1] = tactics_button - 38;
                    highlight_slot_buttons(selected_slot);
                    draw_formation(team);
                }
                break;
            case 41:
                if (captain_slot == selected_slot)
                    captain_slot = 0;
                else
                    captain_slot = selected_slot;
                highlight_slot_buttons(selected_slot);
                draw_formation(team);
                break;
            case 42:
                playing_style_menu(team);
                menu_choice_done = -1;
                break;
            case 43:
                formation_menu(team);
                menu_choice_done = -1;
                break;
            }
        } while (!menu_choice_done);
    } while (tactics_button > 1);
    for (loop_i = 0; loop_i <= 12; loop_i++)
        for (loop_j = 0; loop_j <= 2; loop_j++)
            team_tactics[team][loop_j][loop_i] = edited_tactics[loop_j][loop_i];
    manager_captain[team_manager[team]] = captain_slot;
    manager_style_formation[team_manager[team]] = style_and_formation;
    captain_slots[team == away_team] = 0;
}

void highlight_slot_buttons(int slot)
{
    if (slot_status[selected_team == away_team][slot - 1] >= 2)
        return;
    d_5d9c_9ea3 = best_league_slot;
    d_5d9c_9ea1 = selected_side_button;
    d_5d9c_9e9f = selected_run_button;
    selected_run_button = edited_tactics[1][slot - 1];
    enable_all_buttons();
    d_5d9c_9eb7 = edited_tactics[0][slot - 1];
    if (d_5d9c_9eb7 == 1 || d_5d9c_9eb7 == 11) {
        best_league_slot = d_5d9c_9eb7 == 11;
        selected_side_button = -1;
        selected_run_button = -1;
        for (d_5d9c_9e9d = 35; d_5d9c_9e9d <= 40; d_5d9c_9e9d++)
            disable_button(d_5d9c_9e9d);
    } else if (d_5d9c_9eb7 >= 2 && d_5d9c_9eb7 <= 4) {
        best_league_slot = 2;
        selected_side_button = d_5d9c_9eb7 - 2;
    } else if (d_5d9c_9eb7 >= 5 && d_5d9c_9eb7 <= 7) {
        best_league_slot = 3;
        selected_side_button = d_5d9c_9eb7 - 5;
    } else if (d_5d9c_9eb7 >= 8 && d_5d9c_9eb7 <= 10) {
        best_league_slot = 4;
        selected_side_button = d_5d9c_9eb7 - 8;
    }
    if (best_league_slot != d_5d9c_9ea3) {
        if (d_5d9c_9ea3 > -1)
            draw_button(d_5d9c_9ea3 + 30, 0);
        if (best_league_slot > -1)
            draw_button(best_league_slot + 30, -1);
    }
    if (selected_side_button != d_5d9c_9ea1) {
        if (d_5d9c_9ea1 > -1)
            draw_button(d_5d9c_9ea1 + 35, 0);
        if (selected_side_button > -1)
            draw_button(selected_side_button + 35, -1);
    }
    if (selected_run_button != d_5d9c_9e9f) {
        if (d_5d9c_9e9f > -1)
            draw_button(d_5d9c_9e9f + 38, 0);
        if (selected_run_button > -1)
            draw_button(selected_run_button + 38, -1);
    }
    draw_button(41, selected_slot == captain_slot ? -1 : 0);
}

char set_slot_position(int slot, int pos)
{
    d_5d9c_9e9b = 0;
    for (loop_i = 0; loop_i <= 12; loop_i++)
        if (slot_status[selected_team == away_team][loop_i] < 2)
            d_5d9c_9e9b += edited_tactics[0][loop_i] == pos;
    position_ok = (pos == 4 || pos == 7 || pos == 10 ? 3 : 1) > d_5d9c_9e9b ? -1 : 0;
    if (position_ok)
        edited_tactics[0][slot - 1] = pos;
    return position_ok;
}

void tactics_message(char far *msg)
{
    char buf[80];

    sprintf(buf, "%*s", 19 - strlen(msg) / 2 + strlen(msg), msg);
    draw_text_box(1.0, 22.125, 1, 2, 0x131, buf);
    wait_ticks(75);
    draw_button(1, 0);
}

void draw_formation(int team)
{
    char lines[15][80];

    captain_selected = 0;
    set_fill_colour(0x13);
    fill_rect(8, 60, 164, 156);
    if (team < 80)
        sprintf(tactics_text, "%s style", style_names[style_and_formation / 16]);
    else if ((team == home_team && home_club < 400) ||
             (team == away_team && away_club < 400))
        strcpy(tactics_text, "Continental style");
    else
        strcpy(tactics_text, "Up and Under style");
    d_5d9c_9ae4 = (strlen(tactics_text) + 2) * 6 / 8.0;
    sprintf(lines[11], " %s ", tactics_text);
    draw_label(11.0 - d_5d9c_9ae4 / 2.0, 8.5, 2, 6, 0, lines[11]);
    for (loop_i = 1; loop_i <= 3; loop_i++)
        for (loop_j = 0; loop_j <= 12; loop_j++) {
            if (loop_i == 1 && loop_j < 11)
                strcpy(lines[loop_j], "");
            else if (loop_i == 2 && slot_status[team == away_team][loop_j] < 2) {
                d_5d9c_9b9e = edited_tactics[0][loop_j] - 1;
                sprintf(lines[11], "%02d", loop_j);
                strcat(lines[d_5d9c_9b9e], lines[11]);
            } else if (loop_i == 3 && loop_j < 11 && strlen(lines[loop_j]) == 0)
                strcpy(lines[loop_j], "  ");
        }
    cur_x = 5 - (strcmp(lines[10], "  ") ? 2 : 0);
    draw_formation_row(lines[0]);
    draw_formation_row(lines[10]);
    sprintf(lines[11], "%s%s%s", lines[2], order_centre_players(lines[3]), lines[1]);
    draw_formation_row(lines[11]);
    sprintf(lines[11], "%s%s%s", lines[5], order_centre_players(lines[6]), lines[4]);
    draw_formation_row(lines[11]);
    sprintf(lines[11], "%s%s%s", lines[8], order_centre_players(lines[9]), lines[7]);
    draw_formation_row(lines[11]);
}

void draw_formation_row(char far *row)
{
    char row_slots[20];
    char slot_text[20];

    if (strlen(row) == 0)
        return;
    d_5d9c_9f29 = strlen(row) / 2;
    if (d_5d9c_9f29 == 1)
        strcpy(row_slots, "07");
    else if (d_5d9c_9f29 == 2)
        strcpy(row_slots, "0509");
    else if (d_5d9c_9f29 == 3)
        strcpy(row_slots, "040710");
    else if (d_5d9c_9f29 == 4)
        strcpy(row_slots, "03060811");
    else
        strcpy(row_slots, "0305070911");
    d_5d9c_9b74 = 0;
    for (loop_i = 1; loop_i <= d_5d9c_9f29 * 2; loop_i += 2) {
        strcpy(slot_text, mid_chars(row, loop_i, 2));
        if (strcmp(slot_text, "  ") == 0)
            continue;
        d_5d9c_9f51 = atoi(slot_text);
        d_5d9c_9eb7 = edited_tactics[0][d_5d9c_9f51];
        text_y = (atoi(mid_chars(row_slots, loop_i, 2)) - 1) * 1.125 + 8.0;
        strcpy(shirt_label, shirt_number_text(d_5d9c_9f51 + 1));
        d_5d9c_9b73 = d_5d9c_9f51 + 1 == captain_slot;
        draw_text_at((cur_x + 1) * 8, text_y * 8.0, d_5d9c_9b73 ? 6 : 1, shirt_label);
        if (d_5d9c_9b73)
            captain_selected = -1;
        d_5d9c_9e99 = edited_tactics[1][d_5d9c_9f51];
        set_draw_colour(0x16);
        if (d_5d9c_9eb7 == 11) {
            draw_line(cur_x * 8 + 5, text_y * 8.0 - 8.0, cur_x * 8 + 5, text_y * 8.0 - 16.0);
            draw_line(cur_x * 8 + 5, text_y * 8.0 - 16.0, cur_x * 8 + 3, text_y * 8.0 - 14.0);
            draw_line(cur_x * 8 + 5, text_y * 8.0 - 16.0, cur_x * 8 + 7, text_y * 8.0 - 14.0);
            draw_line(cur_x * 8 + 5, text_y * 8.0 + 2.0, cur_x * 8 + 5, text_y * 8.0 + 10.0);
            draw_line(cur_x * 8 + 5, text_y * 8.0 + 10.0, cur_x * 8 + 3, text_y * 8.0 + 8.0);
            draw_line(cur_x * 8 + 5, text_y * 8.0 + 10.0, cur_x * 8 + 7, text_y * 8.0 + 8.0);
        } else if (d_5d9c_9e99 == 1) {
            draw_line(cur_x * 8 + 13, text_y * 8.0 - 3.0, cur_x * 8 + 20, text_y * 8.0 - 3.0);
            draw_line(cur_x * 8 + 20, text_y * 8.0 - 3.0, cur_x * 8 + 18, text_y * 8.0 - 5.0);
            draw_line(cur_x * 8 + 20, text_y * 8.0 - 3.0, cur_x * 8 + 18, text_y * 8.0 - 1.0);
        } else if (d_5d9c_9e99 == 2) {
            draw_line(cur_x * 8 - 2, text_y * 8.0 - 3.0, cur_x * 8 - 9, text_y * 8.0 - 3.0);
            draw_line(cur_x * 8 - 9, text_y * 8.0 - 3.0, cur_x * 8 - 7, text_y * 8.0 - 5.0);
            draw_line(cur_x * 8 - 9, text_y * 8.0 - 3.0, cur_x * 8 - 7, text_y * 8.0 - 1.0);
        }
        d_5d9c_9b74 = -1;
    }
    cur_x = cur_x + -d_5d9c_9b74 * (d_5d9c_9eb7 == 1 || d_5d9c_9eb7 == 11 ? 3.25 : 4.25);
}

char far *order_centre_players(char far *row)
{
    char slot_text[10];
    char far *result;
    char head_slots[20];
    char mid_slots[20];
    char tail_slots[20];
    char buf[320];

    result = next_text_buffer();
    strcpy(head_slots, "");
    strcpy(mid_slots, "");
    strcpy(tail_slots, "");
    for (loop_i = 1; strlen(row) >= loop_i; loop_i += 2) {
        strcpy(slot_text, mid_chars(row, loop_i, 2));
        if (strcmp(slot_text, "  ")) {
            switch (edited_tactics[2][atoi(slot_text)]) {
            case 0:
                strcat(mid_slots, slot_text);
                break;
            case 1:
                strcat(tail_slots, slot_text);
                break;
            case 2:
                strcat(head_slots, slot_text);
                break;
            }
        }
    }
    sprintf(result, "%s%s%s", head_slots, mid_slots, tail_slots);
    switch (strlen(result)) {
    case 2:
        edited_tactics[2][atoi(result)] = 0;
        break;
    case 4:
    case 6:
        sprintf(buf, "%.2s", result);
        edited_tactics[2][atoi(buf)] = 2;
        edited_tactics[2][atoi(right_chars(result, 2))] = 1;
        if (strlen(result) == 6)
            edited_tactics[2][atoi(mid_chars(result, 3, 2))] = 0;
        break;
    }
    return result;
}

void formation_menu(int team)
{
    new_screen("Tactics");
    show_menu(0, "", "*Exit|4-4-2|4-2-4|Sweeper|5-3-2|4-3-3|5-2-3|4-5-1|Anchor|");
    menu_choice = style_and_formation % 16 + 1;
    first_menu_pass = -1;
    do {
        if (menu_choice > 0) {
            d_5d9c_9e97 = style_and_formation / 16;
            d_5d9c_9e95 = style_and_formation % 16;
            if (d_5d9c_9e95 + 1 != menu_choice || first_menu_pass != 0) {
                draw_menu_item(1, 12, menu_choice);
                style_and_formation = menu_choice + d_5d9c_9e97 * 16 - 1;
                apply_formation(team, menu_choice - 1, -1);
                for (loop_j = 11; loop_j <= 12; loop_j++)
                    if (slot_status[team == away_team][loop_j] < 2)
                        for (loop_k = 0; loop_k <= 2; loop_k++)
                            edited_tactics[loop_k][loop_j] =
                                edited_tactics[loop_k][d_5d9c_a035[team == away_team][loop_j]];
                if (first_menu_pass == 0)
                    draw_menu_item((int)menu_item_colours[d_5d9c_9e95] / 16, (int)menu_item_colours[d_5d9c_9e95] % 16,
                                d_5d9c_9e95 + 1);
                first_menu_pass = 0;
            }
        }
        wait_menu_choice(-8);
    } while (menu_choice != 0);
}

void playing_style_menu(int team)
{
    char s[320];

    strcpy(button_label, "");
    for (ranked_manager = 0; ranked_manager <= 4; ranked_manager++) {
        strcpy(s, style_names[ranked_manager]);
        s[0] = toupper(s[0]);
        strcat(button_label, s);
        strcat(button_label, "|");
    }
    new_screen("Playing style");
    sprintf(s, "*Exit|%s", button_label);
    show_menu(0, "", s);
    menu_choice = style_and_formation / 16 + 1;
    first_menu_pass = -1;
    do {
        if (menu_choice > 0) {
            d_5d9c_9e97 = style_and_formation / 16;
            d_5d9c_9e95 = style_and_formation % 16;
            if (d_5d9c_9e97 + 1 != menu_choice || first_menu_pass != 0) {
                draw_menu_item(1, 12, menu_choice);
                style_and_formation = (menu_choice - 1) * 16 + d_5d9c_9e95;
                if (first_menu_pass == 0)
                    draw_menu_item((int)menu_item_colours[d_5d9c_9e97] / 16, (int)menu_item_colours[d_5d9c_9e97] % 16,
                                d_5d9c_9e97 + 1);
                first_menu_pass = 0;
            }
        }
        wait_menu_choice(-5);
    } while (menu_choice != 0);
}
