/* Native port of decomp/src/67EE.C (see ../README.md). */
/* @at 67ee:0000 */
/* @data 5d9c:2cd6 */
/* @module */

/* Overlay 1: the season's main menu and the screens it leads to: tables, top scorers,
 * form guides, attendances and job news, manager rankings, hall of fame, awards,
 * international squads, fixtures, European seedings and groups, squads, transfers and
 * the league progress graph. */
#include "port.h"

/* the functions, in address order: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void season_main_menu(void);
void draw_main_menu_button(int16_t item, char pressed);
void tables_awards_menu(void);
void league_table_screen(int16_t division);
void build_league_table(int16_t division, unsigned char (*table)[20]);
char is_table_divider_pos(int16_t pos, int16_t division);
void top_players_screen(int16_t mode, int16_t team);
void team_ranking_screen(int16_t mode);
void manager_points_screen(void);
void manager_rankings_screen(void);
void hall_of_fame_screen(void);
void awards_screen(char year);
void national_squads_menu(void);
void international_squads_screen(void);
void fixture_info_menu(void);
void show_draw_not_made(void);
void euro_seedings_screen(void);
void european_cup_groups_screen(void);
void domark_groups_screen(void);
void draw_group_table(int16_t cup, int16_t group, float top);
void team_fixtures_screen(int16_t team);
void build_team_fixtures(int16_t team, char names[][94][20], unsigned char *comp, unsigned char *week);
void club_details_menu(void);
void club_squad_screen(int16_t team);
void draw_club_title(float left, int16_t team, char *title);
void club_transfers_screen(int16_t team);
void league_progress_graph(int16_t team);

int16_t contract_period_of_week(int16_t x);
void new_screen(char *title);
int32_t clock_ticks(void);
int16_t take_mouse_clicks(void);
int16_t get_mouse_x(void);
int16_t get_mouse_y(void);
void set_fill_colour(int16_t c);
void fill_rect(int16_t x1, int16_t y1, int16_t x2, int16_t y2);
void set_draw_colour(int16_t c);
void draw_rect(int16_t x1, int16_t y1, int16_t x2, int16_t y2);
uint16_t find_substring(char *s, char *set);
void draw_text_font1(float x, float y, int16_t colour, char *s);
void show_menu(int16_t n, char *title, char *items);
void message_box(char *);
int16_t top_human_division(void);
void *vm_map(int16_t handle, int16_t page);
void draw_label(float x, float y, int16_t bg, int16_t fg, int16_t w, char *s);
void draw_text_at(int16_t x, int16_t y, int16_t colour, char *s);
char is_human_team(int16_t x);
void add_button(int16_t a, float x, float y, int16_t c, int16_t d, int16_t e, char *s);
void draw_line(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2);
void swap_bytes(void *a, void *b, int16_t n);
void disable_button(int16_t team);
int16_t wait_for_button(int16_t a);
void print_league_table(int16_t div);
void draw_button(int16_t a, char b);
void match_reports_menu(void);
void find_player_or_shortlist(void);
void manager_options_menu(void);
void manager_jobs_menu(void);
void background_picture_menu(void);
void save_game_menu(void);
void squad_screen(int16_t);
int16_t max_int(int16_t a, int16_t b);
int16_t league_points_at(int16_t x);
extern char d_5d9c_9b8c;
extern char is_demo_game;
extern char in_main_menu;
extern char printer_on;
extern char no_matches_this_week;
extern int16_t loop_j;
extern int16_t current_week;
extern int16_t season;
extern int16_t menu_choice;
extern int16_t friendly_counts[];
extern int16_t fixture_index;
extern float menu_start_ticks;
extern float text_y;
extern int16_t main_menu_choice;
extern int16_t cur_x;
extern int16_t cur_y;
extern int16_t row_colour_a;
extern int16_t button_width;
extern int16_t button_border_colour;
extern int16_t label_split_pos;
extern int16_t label_indent;
extern int16_t d_5d9c_9f71;
extern int16_t shown_division;
extern int16_t loop_i;
extern int16_t row_colour_b;
extern int16_t d_5d9c_9f69;
extern int16_t selected_team;
extern int16_t shirt_fg;
extern int16_t last_button;
extern int16_t league_round;
extern int16_t table_marks_handle;
extern char *ems_window_ptr;
extern nearptr team_names[];
extern unsigned char slot_status[];
extern unsigned char d_2f3c_2d18[];
extern unsigned char league_table[][20];
extern char button_label[];
extern char button_label_line1[];
extern char button_label_line2[];
extern unsigned char league_table_rows[][20];
extern unsigned char season_status[];
extern unsigned char team_wins[];
extern unsigned char team_losses[];
extern unsigned char league_goals_for[];
extern unsigned char league_goals_against[];
extern unsigned char team_away_wins[];
extern unsigned char team_away_draws[];
extern unsigned char team_away_losses[];
extern unsigned char team_away_goals_for[];
extern unsigned char team_away_goals_against[];
void draw_text_box(float x, float y, int16_t a, int16_t b, int16_t c, char *s);
void draw_team_label(float x, float y, int16_t team);
char *player_full_name(int16_t player);
void player_details_screen(int16_t player, int16_t a, char b);
void do_player_action(int16_t player, int16_t a);
extern char exit_chosen;
extern char changed_division;
extern char menu_choice_done;
extern char division_wide_flag;
extern float text_x;
extern float average_rating;
extern int16_t player_screen_action;
extern int16_t row_name_colour;
extern int16_t player_stat;
extern int16_t best_stat;
extern int16_t last_ranked_row;
extern int16_t stats_division;
extern int16_t cur_player;
extern int16_t top_players_cache[4][3][2][30];
extern int16_t player_rating_total[];
extern int16_t player_old_club_rating[];
extern unsigned char player_attrs[][1702];
extern unsigned char player_stats[][1702];
extern char player_moved_club[];
extern char sub_kind_text[];
extern char sub_text[];
extern unsigned char squad_size[];
extern int16_t squad_players[][26];
char *manager_name(int16_t manager, char full);
extern int32_t best_long_value;
extern int32_t team_long_value;
extern int16_t loop_k;
extern int16_t best_league_slot;
extern char division_text[];
extern char form_text[];
extern char d_1f3e_54f4[];
extern char d_1f3e_2b9a[];
extern char d_1f3e_2b4a[];
extern char team_form[][82][5];
extern int32_t season_attendance_total[];
extern int16_t team_manager[];
extern unsigned char board_confidence[];
extern unsigned char home_games_played[];
extern unsigned char club_job_vacant[];
char *staff_rating_text(int16_t a, int16_t b);
extern int32_t manager_points;
extern int16_t d_5d9c_9f4b;
extern int16_t d_5d9c_9f4d;
extern int16_t ranked_manager;
extern int16_t d_5d9c_9f51;
extern int16_t rankings_page;
extern char draw_involves_human;
extern int16_t hall_of_fame_handle;
extern int16_t manager_points_handle;
extern int32_t *manager_points_ptr;
extern char *hall_of_fame_ptr;
extern unsigned char staff_skills[];
extern unsigned char staff_age[];
extern unsigned char manager_team[];
extern int32_t hall_of_fame_points[];
char *player_surname(int16_t player);
char *ordinal_text(int16_t division);
char *player_short_name(int16_t player);
void reset_buttons(void);
char *home_nation_name(int16_t n);
extern int16_t d_5d9c_9f47;
extern int16_t d_5d9c_9f43;
extern int16_t d_5d9c_9f45;
extern int16_t squad_nation;
extern int16_t under_21_flag;
extern int16_t d_5d9c_9f3d;
extern int16_t d_5d9c_9f3b;
extern int16_t national_squads_handle;
extern int16_t manager_award_winners[];
extern float d_5d9c_9afc;
extern unsigned char intl_squad_positions[];
extern int16_t (*intl_squads)[2][22];
extern char award_points_prefix[];
extern char award_period_name[];
extern char award_rating_text[];
extern char under_21_suffix[];
extern char squad_name_text[];
extern char squad_club_text[];
extern int32_t manager_award_points[];
extern float player_award_ratings[][4];
extern int16_t player_award_winners[][4];
extern farptr position_names[];
void wait_menu_choice(int16_t last);
void show_week_fixtures(int16_t, int16_t, int16_t);
char is_cup_replay_week(int16_t);
char is_second_leg_week(int16_t);
char *club_name(int16_t x);
void past_winners_screen(void);
extern int16_t fixture_menu_choice;
extern int16_t fixture_week;
extern int16_t zenith_qualifier_count;
extern char position_ok;
extern char is_second_leg;
extern char d_5d9c_9b85;
extern int16_t fa_cup_next_week;
extern int16_t league_cup_next_week;
extern int16_t zenith_cup_next_week;
extern int16_t domark_cup_next_week;
extern int16_t uefa_cup_next_week;
extern int16_t cup_winners_next_week;
extern int16_t european_cup_next_week;
extern int16_t week_fixture_counts[];
extern int16_t cup_entrants[][80];
extern int16_t d_5d9c_9f31;
extern int16_t d_5d9c_9f2f;
extern char euro_cup_title[];
extern unsigned char cup_seeding[];
extern unsigned char team_country[];
extern farptr country_names[];
extern int16_t domark_group_page;
extern int16_t d_5d9c_9f2b;
extern int16_t domark_groups[][5];
extern int16_t d_5d9c_9f29;
extern int16_t euro_cup_groups[][4];
extern unsigned char euro_group_stats[][2][4];
extern unsigned char domark_group_stats[][8][5];
void match_stats_screen(int16_t a, int16_t b, char c);
char is_fa_cup_week(int16_t);
char is_playoff_week(int16_t);
char is_rumbelows_match(int16_t, int16_t);
char is_uefa_match(int16_t, int16_t);
char is_cup_winners_match(int16_t, int16_t);
char is_european_cup_match(int16_t, int16_t);
char is_zenith_match(int16_t, int16_t);
char is_domark_match(int16_t, int16_t);
char is_neutral_venue_match(int16_t a, int16_t b);
void choose_team_by_division(int16_t);
void draw_squad_list(int16_t t);
void view_team_tactics(int16_t team);
void staff_screen(int16_t team);
int16_t random_below(int16_t n);
void show_accounts(int16_t team);
void club_info_screen(int16_t team);
void manager_job_menu(int16_t team);
extern unsigned char team_colours[];
extern int16_t week_fixtures[][2][94];
extern int16_t week_matchfax_base[];
extern char match_record[];
extern int16_t squad_list_players[];
extern int16_t squad_screen_choice;
extern int16_t d_5d9c_9f09;
extern int16_t d_5d9c_9f0b;
extern int16_t d_5d9c_9f0d;
extern int16_t d_5d9c_9f0f;
extern int16_t match_facts_record;
extern int16_t home_midfield;
extern int16_t fixture_week_index;
extern int16_t next_fixture_row;
extern int16_t button_style;
extern int16_t d_5d9c_9f1b;
extern int16_t d_5d9c_9f1d;
extern int16_t d_5d9c_9f1f;
extern int16_t d_5d9c_9f21;
extern int16_t d_5d9c_9f23;
extern int16_t fixture_count;
extern int16_t fixtures_per_column;
char *right_chars(char *s, uint16_t n);
char *mid_chars(char *s, uint16_t i, uint16_t n);
char *format_fee(int32_t amount);
struct label {
    int16_t x, y;
    char *s;
};
extern char club_title_text[];
extern char transfer_history_text[];
extern char transfer_entry_text[];
extern unsigned char league_position_history[][82];
extern float club_title_x;
extern int16_t transfer_history_handle;
extern char (*transfer_history)[82][391];
extern int16_t transfer_other_club;
extern int32_t transfer_fee;
extern int32_t transfer_total;
extern int16_t graph_prev_x;
extern int16_t graph_round;
extern int16_t graph_prev_y;
extern int16_t d_5d9c_9efd;

/* the main menu: its labels (the first and sixth are rewritten each week) and, per item,
 * the button's position and colour */
/* port: labels 0 and 5 are rewritten in place (season_main_menu), which Borland's
 * string literals allowed: theirs are writable arrays here */
static char *main_menu_labels[] = {
    (char[]){ "Saturday Fixtures" }, "View Tables", "Fixture Info", "Club Details", "Match Reports",
    (char[]){ "Find Player" }, "Board Resign", "Manager Jobs", "National Squads", "New Picture",
    "Save Game"
};
static unsigned char main_menu_buttons[][3] = {
    {8, 32, 15}, {164, 32, 3}, {242, 32, 15}, {8, 88, 15}, {86, 88, 3}, {164, 88, 15},
    {242, 88, 3}, {8, 144, 3}, {86, 144, 15}, {164, 144, 3}, {242, 144, 15}
};

void season_main_menu(void)
{
    char buf[320];

    in_main_menu = -1;
    for (loop_j = 0; loop_j <= 12; loop_j++)
        d_2f3c_2d18[loop_j] = slot_status[loop_j] = loop_j > 10 ? 4 : 0;
    do {
        no_matches_this_week = 0;
        if (current_week < 5 && friendly_counts[current_week] == 0)
            no_matches_this_week = -1;
        if (no_matches_this_week)
            strcpy(main_menu_labels[0], "Continue Season");
        else if (current_week == 95)
            strcpy(main_menu_labels[0], "New Season");
        else if ((current_week & 1) && current_week > 6)
            strcpy(main_menu_labels[0], "Midweek Fixtures");
        else
            strcpy(main_menu_labels[0], "Saturday Fixtures");
        if (is_demo_game)
            strcpy(main_menu_labels[5], "Short Lists");
        else
            strcpy(main_menu_labels[5], "Find Player");
        sprintf(buf, "Week %d %s %d", contract_period_of_week(current_week),
                current_week > 6 ? "Season" : "Preseason", season);
        new_screen(buf);
        for (fixture_index = 0; fixture_index <= 10; fixture_index++)
            draw_main_menu_button(fixture_index, 0);
        menu_start_ticks = clock_ticks();
        do {
            main_menu_choice = -1;
            if (take_mouse_clicks() > 0) {
                for (fixture_index = 0; fixture_index <= 10; fixture_index++) {
                    cur_x = main_menu_buttons[fixture_index][0];
                    cur_y = main_menu_buttons[fixture_index][1];
                    if (get_mouse_x() >= cur_x
                        && get_mouse_x() <= cur_x + (fixture_index == 0 ? 148 : 70)
                        && get_mouse_y() >= cur_y
                        && get_mouse_y() <= cur_y + 48) {
                        draw_main_menu_button(fixture_index, -1);
                        main_menu_choice = fixture_index;
                        fixture_index = 10;
                    }
                }
            }
            if (is_demo_game && clock_ticks() - menu_start_ticks > 400 && main_menu_choice == -1) {
                main_menu_choice = 0;
                draw_main_menu_button(0, -1);
            }
        } while (main_menu_choice <= -1);
        if (main_menu_choice > 0) {
            switch (main_menu_choice) {
            case 1: tables_awards_menu(); break;
            case 2: fixture_info_menu(); break;
            case 3: club_details_menu(); break;
            case 4: match_reports_menu(); break;
            case 5: find_player_or_shortlist(); break;
            case 6: manager_options_menu(); break;
            case 7: manager_jobs_menu(); break;
            case 8: national_squads_menu(); break;
            case 9: background_picture_menu(); break;
            case 10: save_game_menu(); break;
            }
        }
    } while (main_menu_choice != 0);
    in_main_menu = 0;
}

void draw_main_menu_button(int16_t item, char pressed)
{
    strcpy(button_label, main_menu_labels[item]);
    strupr(button_label);
    cur_x = main_menu_buttons[item][0];
    cur_y = main_menu_buttons[item][1];
    row_colour_a = pressed ? 8 : main_menu_buttons[item][2];
    button_width = item == 0 ? 148 : 70;
    set_fill_colour(16);
    fill_rect(cur_x + 4, cur_y + 4,
                cur_x + button_width + 4, cur_y + 52);
    set_fill_colour(row_colour_a + 16);
    fill_rect(cur_x, cur_y, cur_x + button_width, cur_y + 48);
    if (row_colour_a == 3)
        button_border_colour = 15;
    else if (row_colour_a == 15)
        button_border_colour = 3;
    else
        button_border_colour = 1;
    set_draw_colour(button_border_colour + 16);
    draw_rect(cur_x, cur_y, cur_x + button_width, cur_y + 48);
    label_split_pos = find_substring(button_label, " ");
    strcpy(button_label_line1, button_label);
    button_label_line1[label_split_pos - 1] = 0;
    strcpy(button_label_line2, &button_label[label_split_pos]);
    label_indent = button_width / 2 - strlen(button_label_line1) * 4;
    draw_text_font1((cur_x + label_indent + 8) / 8.0, (cur_y + 23) / 8.0, 1, button_label_line1);
    label_indent = button_width / 2 - strlen(button_label_line2) * 4;
    draw_text_font1((cur_x + label_indent + 8) / 8.0, (cur_y + 31) / 8.0, 1, button_label_line2);
}

void tables_awards_menu(void)
{
    do {
        show_menu(0, "Tables/Awards", "*Exit|League Tables|Group Tables|Top Goalscorers|Worst Discipline|Average Ratings|Team Form Guide|Average Gates|Manager Scores|Manager Rankings|Hall Of Fame|Monthly Awards|");
        d_5d9c_9f71 = menu_choice;
        switch (d_5d9c_9f71) {
        case 1:
            league_table_screen(-1);
            break;
        case 2:
            show_menu(0, "Group Tables", "*Exit|European Cup|Domark Trophy|");
            if (menu_choice == 1) {
                if (current_week < 36)
                    message_box("Groups not yet decided");
                else
                    european_cup_groups_screen();
            } else if (menu_choice == 2)
                domark_groups_screen();
            break;
        case 3:
        case 4:
        case 5:
            top_players_screen(d_5d9c_9f71 - 3, -1);
            break;
        case 6:
            team_ranking_screen(0);
            break;
        case 7:
            team_ranking_screen(1);
            break;
        case 8:
            manager_points_screen();
            break;
        case 9:
            manager_rankings_screen();
            break;
        case 10:
            hall_of_fame_screen();
            break;
        case 11:
            awards_screen(0);
            break;
        }
    } while (d_5d9c_9f71 != 0);
}

/* the league table's column headings */
static char *league_table_headings[] = {
    "PL", "W", "D", "L", "F", "A", "W", "D", "L", "F", "A", "PT"
};

void league_table_screen(int16_t division)
{
    int16_t y;
    char buf[320];

    memset(league_table_rows, 0, 260);
    if (division == -1)
        shown_division = top_human_division();
    else
        shown_division = division;
    do {
        ems_window_ptr = vm_map(table_marks_handle, 1);
        build_league_table(shown_division, league_table_rows);
        new_screen("");
        sprintf(buf, " Division %d", shown_division + 1);
        draw_label(1.125, 1.25, 1, 2, 0x61, buf);
        for (loop_i = 0; loop_i <= 11; loop_i++) {
            sprintf(buf, "%-2s", league_table_headings[loop_i]);
            draw_label(loop_i * 2 + 15.625 + (loop_i == 0 ? -1 : 0), 1.25, 1, 8, 0, buf);
        }
        text_y = 2.5;
        y = 20;
        row_colour_a = 4;
        row_colour_b = 12;
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 19; d_5d9c_9f69++) {
            ems_window_ptr = vm_map(table_marks_handle, 0);
            draw_text_at(11, y, 1, ems_window_ptr + d_5d9c_9f69 * 2);
            if (is_human_team(selected_team = league_table_rows[0][d_5d9c_9f69]))
                shirt_fg = 3;
            else
                shirt_fg = row_colour_b;
            sprintf(buf, " %.15s", (char *)NEAR_PTR(team_names[selected_team]));
            add_button(0, 1.125, text_y, 1, shirt_fg, 0x61, buf);
            sprintf(buf, "%-2d", league_table_rows[1][d_5d9c_9f69]);
            draw_text_at(125, y, 5, buf);
            for (loop_j = 2; loop_j <= 11; loop_j++) {
                sprintf(buf, "%-2d", league_table_rows[loop_j][d_5d9c_9f69]);
                draw_text_at((loop_j - 2) * 16 + 149, y, loop_j > 6 ? 1 : 6, buf);
            }
            sprintf(buf, "%-2d", league_table_rows[12][d_5d9c_9f69]);
            draw_label(37.625, text_y, 1, 2, 0, buf);
            if (is_table_divider_pos(d_5d9c_9f69, shown_division)) {
                set_draw_colour(22);
                draw_line(8, text_y * 8.0 + 2.0, 105, text_y * 8.0 + 2.0);
                text_y = text_y + 1.125;
                y += 9;
            } else {
                text_y += 1;
                y += 8;
            }
            swap_bytes(&row_colour_a, &row_colour_b, 2);
        }
        add_button(2, 1.25, 23.0, 6, 2, 0x35, " - DIV");
        add_button(2, 32.25, 23.0, 6, 2, 0x35, " + DIV");
        add_button(2, 25.0, 23.0, 1, 4, 0x35, "  PRT");
        add_button(2, 8.5, 23.0, 1, 4, 0x7f, "      EXIT");
        if (printer_on == 0)
            disable_button(23);
        do {
            menu_choice = wait_for_button(last_button);
            if (menu_choice == 23) {
                print_league_table(shown_division);
                draw_button(23, 0);
            }
        } while (menu_choice <= 0 || menu_choice == 23);
        if (menu_choice >= 1 && menu_choice <= 20) {
            if (is_human_team(d_5d9c_9f69 = league_table_rows[0][menu_choice - 1]))
                squad_screen(d_5d9c_9f69);
            else
                club_squad_screen(d_5d9c_9f69);
        } else if (menu_choice == 21) {
            shown_division--;
            if (shown_division < 0)
                shown_division = 3;
        } else if (menu_choice == 22) {
            shown_division++;
            if (shown_division > 3)
                shown_division = 0;
        } else if (menu_choice == 24)
            shown_division = -1;
    } while (shown_division != -1);
}

void build_league_table(int16_t division, unsigned char (*table)[20])
{
    d_5d9c_9f71 = 0;
    for (loop_i = division * 20; loop_i <= division * 20 + 19; loop_i++) {
        selected_team = league_table[0][loop_i];
        strcpy(ems_window_ptr + d_5d9c_9f71 * 2, " ");
        if (season_status[selected_team] == 1)
            strcpy(ems_window_ptr + d_5d9c_9f71 * 2, "R");
        else if (season_status[selected_team] == 3)
            strcpy(ems_window_ptr + d_5d9c_9f71 * 2, "P");
        else if (season_status[selected_team] == 4)
            strcpy(ems_window_ptr + d_5d9c_9f71 * 2, "C");
        table[0][d_5d9c_9f71] = selected_team;
        table[1][d_5d9c_9f71] = league_round - 1;
        table[2][d_5d9c_9f71] = team_wins[selected_team] - team_away_wins[selected_team];
        table[3][d_5d9c_9f71] = max_int(league_round - 1 - team_wins[selected_team]
                                        - team_losses[selected_team], 0)
                            - team_away_draws[selected_team];
        table[4][d_5d9c_9f71] = team_losses[selected_team] - team_away_losses[selected_team];
        table[5][d_5d9c_9f71] = league_goals_for[selected_team] - team_away_goals_for[selected_team];
        table[6][d_5d9c_9f71] = league_goals_against[selected_team] - team_away_goals_against[selected_team];
        table[7][d_5d9c_9f71] = team_away_wins[selected_team];
        table[8][d_5d9c_9f71] = team_away_draws[selected_team];
        table[9][d_5d9c_9f71] = team_away_losses[selected_team];
        table[10][d_5d9c_9f71] = team_away_goals_for[selected_team];
        table[11][d_5d9c_9f71] = team_away_goals_against[selected_team];
        table[12][d_5d9c_9f71] = league_points_at(loop_i);
        d_5d9c_9f71++;
    }
}

char is_table_divider_pos(int16_t pos, int16_t division)
{
    d_5d9c_9b8c = 0;
    if ((pos == 0 && division == 0)
        || (division > 0 && (pos == 1 || pos == 5))
        || (division < 3 && pos == 16)
        || (division == 3 && pos == 18))
        d_5d9c_9b8c = -1;
    return d_5d9c_9b8c;
}

void top_players_screen(int16_t mode, int16_t team)
{
    char picked[1702];
    int16_t rows[30];
    char buf[320];

    division_wide_flag = team < 0 ? -1 : 0;
    if (division_wide_flag)
        stats_division = top_human_division();
    for (;;) {
        memset(picked, 0, 1702);
        memset(rows, -1, 60);
        if (mode == 0) {
            new_screen(division_wide_flag ? "Top Goalscorers" : "Goalscorers");
        } else if (mode == 1) {
            new_screen(division_wide_flag ? "Worst Discipline" : "Discipline");
        } else if (mode == 2) {
            new_screen(division_wide_flag ? "Top Av Ratings" : "Av Ratings");
        }
        if (division_wide_flag) {
            sprintf(buf, " Division %d ", stats_division + 1);
            draw_text_box(1.25, 4.0, 0, 9, 0, buf);
        } else
            draw_team_label(1.25, 4.0, team);
        row_colour_a = 4;
        row_colour_b = 12;
        menu_choice_done = 0;
        last_ranked_row = -1;
        for (d_5d9c_9f71 = 0; d_5d9c_9f71 <= 29; d_5d9c_9f71++) {
            cur_player = -1;
            best_stat = 0;
            if (menu_choice_done == 0) {
                if (division_wide_flag) {
                    if (top_players_cache[stats_division][mode][0][d_5d9c_9f71] == -2) {
                        for (loop_i = 0; loop_i <= 1699; loop_i++) {
                            int16_t club_div;
                            club_div = player_attrs[18][loop_i] / 20;
                            if (picked[loop_i] == 0 && (club_div == stats_division || player_stats[0][loop_i] / 20 == stats_division)) {
                                player_stat = 0;
                                changed_division = player_stats[10][loop_i] / 20 != club_div && player_moved_club[loop_i] ? -1 : 0;
                                if (club_div == stats_division || (changed_division && player_stats[10][loop_i] / 20 == stats_division && player_stats[12][loop_i] > 0)) {
                                    if (mode == 0) {
                                        if (changed_division) {
                                            if (club_div == stats_division)
                                                player_stat = player_stats[1][loop_i] - player_stats[13][loop_i];
                                            else
                                                player_stat = player_stats[13][loop_i];
                                        } else
                                            player_stat = player_stats[1][loop_i];
                                    } else if (mode == 1)
                                        player_stat = player_stats[2][loop_i] - player_stats[2][loop_i] % 5;
                                    else if (changed_division) {
                                        if (club_div == stats_division) {
                                            if (player_stats[0][loop_i] - player_stats[12][loop_i] > league_round / 2)
                                                player_stat = (float)(player_rating_total[loop_i] - player_old_club_rating[loop_i]) / (player_stats[0][loop_i] - player_stats[12][loop_i]) * 1000;
                                        } else {
                                            if (player_stats[12][loop_i] > league_round / 2)
                                                player_stat = (float)player_old_club_rating[loop_i] / player_stats[12][loop_i] * 1000;
                                        }
                                    } else {
                                        if (player_stats[0][loop_i] > league_round / 2)
                                            player_stat = (float)player_rating_total[loop_i] / player_stats[0][loop_i] * 1000;
                                    }
                                    if (player_stat > best_stat) {
                                        cur_player = loop_i;
                                        best_stat = player_stat;
                                    }
                                }
                            }
                        }
                        top_players_cache[stats_division][mode][0][d_5d9c_9f71] = cur_player;
                        top_players_cache[stats_division][mode][1][d_5d9c_9f71] = best_stat;
                    } else {
                        cur_player = top_players_cache[stats_division][mode][0][d_5d9c_9f71];
                        best_stat = top_players_cache[stats_division][mode][1][d_5d9c_9f71];
                    }
                } else {
                    for (loop_j = 0; loop_j <= squad_size[team] - 1; loop_j++) {
                        loop_i = squad_players[team][loop_j];
                        player_stat = 0;
                        if (picked[loop_i] == 0) {
                            if (mode == 0)
                                player_stat = player_stats[1][loop_i] - player_stats[13][loop_i];
                            else if (mode == 1)
                                player_stat = player_stats[2][loop_i] - player_stats[2][loop_i] % 5;
                            else if (player_stats[0][loop_i] - player_stats[12][loop_i] > 0)
                                player_stat = (float)(player_rating_total[loop_i] - player_old_club_rating[loop_i]) / (player_stats[0][loop_i] - player_stats[12][loop_i]) * 1000;
                            if (player_stat > best_stat) {
                                cur_player = loop_i;
                                best_stat = player_stat;
                            }
                        }
                    }
                }
            }
            row_name_colour = row_colour_b;
            if (cur_player > -1 && (best_stat > 0 && division_wide_flag || division_wide_flag == 0)) {
                sprintf(sub_kind_text, " %.17s", player_full_name(cur_player));
                if (mode < 2) {
                    if (best_stat > 0)
                        sprintf(sub_text, " %02d", best_stat);
                    else
                        strcpy(sub_text, " --");
                } else if (best_stat > 0) {
                    average_rating = best_stat / 1000.0;
                    average_rating = (int16_t)(average_rating * 100) / 100.0;
                    sprintf(sub_text, "%f", average_rating);
                    sub_text[4] = 0;
                } else
                    strcpy(sub_text, "----");
                picked[cur_player] = -1;
                rows[d_5d9c_9f71] = cur_player;
                last_ranked_row = d_5d9c_9f71;
                if (division_wide_flag && is_human_team(player_attrs[18][cur_player]))
                    row_name_colour = 3;
            } else {
                strcpy(sub_kind_text, "");
                strcpy(sub_text, "");
                menu_choice_done = -1;
            }
            if (d_5d9c_9f71 < 15) {
                text_x = 1.125;
                text_y = d_5d9c_9f71 + 7.25;
            } else {
                text_x = 20.25;
                text_y = d_5d9c_9f71 - 15 + 7.25;
            }
            sprintf(buf, "%02d", d_5d9c_9f71 + 1);
            draw_label(text_x, text_y, 6, 3, 0, buf);
            if (rows[d_5d9c_9f71] == -1)
                draw_label(text_x + 1.75, text_y, 1, row_name_colour, 111, sub_kind_text);
            else
                add_button(0, text_x + 1.75, text_y, 1, row_name_colour, 111, sub_kind_text);
            draw_label(text_x + 15.875, text_y, 1, 2, 24, sub_text);
            swap_bytes(&row_colour_a, &row_colour_b, 2);
        }
        if (division_wide_flag) {
            add_button(2, 8.5, 22.5, 1, 4, 185, "          EXIT");
            add_button(2, 1.25, 22.5, 6, 2, 53, " - DIV");
            add_button(2, 32.25, 22.5, 6, 2, 53, " + DIV");
        } else
            add_button(2, 1.25, 22.5, 1, 4, 301, "                 EXIT");
        do
            menu_choice = wait_for_button(last_button);
        while (menu_choice <= 0);
        if (last_ranked_row + 2 > menu_choice) {
            cur_player = rows[menu_choice - 1];
            do {
                player_details_screen(cur_player, -1, -1);
                do_player_action(cur_player, player_screen_action);
            } while (!exit_chosen);
        } else if (last_ranked_row + 3 == menu_choice) {
            stats_division--;
            if (stats_division < 0)
                stats_division = 3;
        } else if (last_ranked_row + 4 == menu_choice) {
            stats_division++;
            if (stats_division > 3)
                stats_division = 0;
        } else
            break;
    }
}

void team_ranking_screen(int16_t mode)
{
    char used[80];
    int16_t order[21];
    char buf[318];
    unsigned char ch;

    shown_division = top_human_division();
    do {
        memset(used, 0, 80);
        new_screen("");
        sprintf(division_text, "Division %d", shown_division + 1);
        if (mode < 2) {
            if (mode == 0) {
                sprintf(buf, "Form Guide %s", division_text);
                draw_label(1.125, 1.5, 0, 1, 0x86, buf);
                draw_label(18.125, 1.5, 1, 8, 0, " HOME ");
                draw_label(22.875, 1.5, 1, 8, 0, " AWAY ");
                row_colour_a = 4;
                row_colour_b = 12;
            } else {
                sprintf(buf, "Attendance %s", division_text);
                draw_label(1.125, 1.5, 0, 1, 0x86, buf);
                draw_label(18.125, 1.5, 1, 2, 0x4a, " AVERAGE");
                row_colour_a = 14;
                row_colour_b = 8;
            }
            draw_label(27.625, 1.5, 1, 8 - mode * 6, 0, " LP ");
            draw_label(30.875, 1.5, 1, 8 - mode * 6, 0, "BOARD %  ");
        } else {
            sprintf(buf, "Job News %s", division_text);
            draw_label(1.125, 1.5, 0, 1, 0x86, buf);
            draw_label(18.125, 1.5, 1, 2, 0x53, " MANAGER");
            draw_label(28.75, 1.5, 0, 6, 0x53, " JOB");
            row_colour_a = 15;
            row_colour_b = 3;
        }
        cur_y = 6;
        loop_i = 1;
        while (loop_i <= 20) {
            selected_team = -1;
            best_long_value = 0;
            for (loop_j = shown_division * 20; loop_j <= shown_division * 20 + 19; loop_j++) {
                d_5d9c_9f69 = league_table[0][loop_j];
                if (used[d_5d9c_9f69] == 0) {
                    team_long_value = 0;
                    if (mode == 0) {
                        sprintf(form_text, "%s%s", team_form[0][d_5d9c_9f69], team_form[1][d_5d9c_9f69]);
                        for (loop_k = 1; loop_k <= strlen(form_text); loop_k++) {
                            ch = form_text[loop_k - 1];
                            if (ch == 'W')
                                team_long_value += 3;
                            else if (ch == 'D' || ch == 'X')
                                team_long_value += 1;
                        }
                    } else if (mode == 1) {
                        if (home_games_played[d_5d9c_9f69] > 0)
                            team_long_value = season_attendance_total[d_5d9c_9f69] / home_games_played[d_5d9c_9f69];
                    } else {
                        team_long_value = 100 - board_confidence[d_5d9c_9f69];
                        if (club_job_vacant[d_5d9c_9f69] > 0)
                            team_long_value = 255;
                    }
                    if (team_long_value > best_long_value || selected_team == -1) {
                        best_long_value = team_long_value;
                        best_league_slot = loop_j;
                        selected_team = d_5d9c_9f69;
                    }
                }
            }
            shirt_fg = row_colour_b;
            if (mode < 2) {
                if (is_human_team(selected_team))
                    shirt_fg = 3;
                sprintf(buf, " %02d ", loop_i);
                draw_label(1.125, cur_y + 0.25 - 3.5, 0, 6, 0, buf);
                sprintf(buf, " %.17s", (char *)NEAR_PTR(team_names[selected_team]));
                add_button(0, 4.375, cur_y + 0.25 - 3.5, 1, shirt_fg, 0x6c, buf);
                if (mode == 0) {
                    sprintf(buf, " %s", team_form[0][selected_team]);
                    draw_label(18.125, cur_y + 0.25 - 3.5, 6, 2, 0x24, buf);
                    sprintf(buf, " %s", team_form[1][selected_team]);
                    draw_label(22.875, cur_y + 0.25 - 3.5, 6, 2, 0x24, buf);
                } else {
                    strcpy(buf, "");
                    if (best_long_value > 0)
                        sprintf(buf, "   %d", best_long_value);
                    draw_label(18.125, cur_y + 0.25 - 3.5, 1, 4, 0x4a, buf);
                }
                sprintf(buf, " %02d ", best_league_slot + 1 - shown_division * 20);
                draw_label(27.625, cur_y + 0.25 - 3.5, 1, 9, 0, buf);
                sprintf(d_1f3e_54f4, "%d%%", board_confidence[selected_team]);
                sprintf(buf, "    %s", d_1f3e_54f4);
                draw_label(30.875, cur_y + 0.25 - 3.5, 6, 3, 0x42, buf);
            } else {
                if (is_human_team(selected_team))
                    shirt_fg = 12;
                sprintf(buf, " %.21s", (char *)NEAR_PTR(team_names[selected_team]));
                add_button(0, 1.125, cur_y - 3.25, 1, shirt_fg, 0x86, buf);
                if (club_job_vacant[selected_team] > 0) {
                    strcpy(d_1f3e_2b9a, "");
                    strcpy(d_1f3e_2b4a, "Available");
                } else {
                    strcpy(d_1f3e_2b9a, manager_name(team_manager[selected_team], -1));
                    ch = board_confidence[selected_team];
                    if (ch <= 29)
                        strcpy(d_1f3e_2b4a, "Under threat");
                    else if (ch <= 39)
                        strcpy(d_1f3e_2b4a, "Insecure");
                    else
                        strcpy(d_1f3e_2b4a, "Safe");
                }
                sprintf(buf, " %s", d_1f3e_2b9a);
                draw_label(18.125, cur_y - 3.25, 1, 9, 0x53, buf);
                sprintf(buf, " %s", d_1f3e_2b4a);
                draw_label(28.75, cur_y - 3.25, d_1f3e_2b9a[0] != 0 ? 1 : 4,
                            club_job_vacant[selected_team] > 0 ? 1 : 12, 0x53, buf);
            }
            cur_y++;
            swap_bytes(&row_colour_a, &row_colour_b, 2);
            used[selected_team] = -1;
            order[loop_i] = selected_team;
            loop_i++;
        }
        add_button(2, 1.25, 23.0, 6, 2, 0x35, " - DIV");
        add_button(2, 32.25, 23.0, 6, 2, 0x35, " + DIV");
        add_button(2, 8.5, 23.0, 1, 4, 0xb9, "          EXIT");
        do
            menu_choice = wait_for_button(last_button);
        while (menu_choice <= 0);
        if (menu_choice >= 1 && menu_choice <= 20) {
            if (is_human_team(d_5d9c_9f69 = order[menu_choice]))
                squad_screen(d_5d9c_9f69);
            else
                club_squad_screen(d_5d9c_9f69);
        } else if (menu_choice == 21) {
            shown_division--;
            if (shown_division < 0)
                shown_division = 3;
        } else if (menu_choice == 22) {
            shown_division++;
            if (shown_division > 3)
                shown_division = 0;
        } else if (menu_choice == 23)
            shown_division = -1;
    } while (shown_division != -1);
}

/* the managers' points table of a division */
void manager_points_screen(void)
{
    char used[80];
    char buf[320];

    stats_division = top_human_division();
    do {
        memset(used, 0, 80);
        new_screen("");
        sprintf(buf, "Manager Pts Division %d", stats_division + 1);
        draw_label(1.125, 1.5, 0, 1, 0x88, buf);
        draw_label(18.375, 1.5, 1, 4, 0x6e, " CLUB");
        draw_label(32.375, 1.5, 1, 4, 0x36, " PTS");
        cur_y = 6;
        row_colour_a = 2;
        row_colour_b = 9;
        for (loop_i = 1; loop_i <= 20; loop_i++) {
            best_long_value = 0;
            for (d_5d9c_9f69 = stats_division * 20; d_5d9c_9f69 <= stats_division * 20 + 19;
                 d_5d9c_9f69++) {
                if (used[d_5d9c_9f69] == 0) {
                    manager_points_ptr = vm_map(manager_points_handle, 0);
                    if ((manager_points = manager_points_ptr[team_manager[d_5d9c_9f69]]) >= best_long_value) {
                        best_long_value = manager_points;
                        selected_team = d_5d9c_9f69;
                    }
                }
            }
            if (is_human_team(selected_team))
                shirt_fg = 12;
            else
                shirt_fg = row_colour_b;
            sprintf(buf, " %02d ", loop_i);
            draw_label(1.125, cur_y + 0.25 - 3.5, 1, 8, 0, buf);
            sprintf(buf, " %s", manager_name(team_manager[selected_team], 0));
            draw_label(4.375, cur_y + 0.25 - 3.5, 1, shirt_fg, 0x6e, buf);
            sprintf(buf, " %.17s", (char *)NEAR_PTR(team_names[selected_team]));
            draw_label(18.375, cur_y + 0.25 - 3.5, 1, 3, 0x6e, buf);
            sprintf(buf, " %06d", best_long_value);
            draw_label(32.375, cur_y + 0.25 - 3.5, 2, 6, 0x36, buf);
            cur_y++;
            swap_bytes(&row_colour_a, &row_colour_b, 2);
            used[selected_team] = -1;
        }
        add_button(2, 1.25, 23.0, 6, 2, 0x35, " - DIV");
        add_button(2, 32.25, 23.0, 6, 2, 0x35, " + DIV");
        add_button(2, 8.5, 23.0, 1, 4, 0xb9, "          EXIT");
        do
            menu_choice = wait_for_button(last_button);
        while (menu_choice <= 0);
        if (menu_choice == 1) {
            stats_division--;
            if (stats_division < 0)
                stats_division = 3;
        } else if (menu_choice == 2) {
            stats_division++;
            if (stats_division > 3)
                stats_division = 0;
        } else
            stats_division = -1;
    } while (stats_division != -1);
}

/* the manager rankings */
void manager_rankings_screen(void)
{
    int16_t i;
    char used[650];
    int16_t order[80];
    char buf[320];

    memset(used, 0, 650);
    rankings_page = 1;
    draw_involves_human = 0;
    for (i = 0; i <= 79; i++) {
        ranked_manager = -1;
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 79; d_5d9c_9f69++) {
            d_5d9c_9f51 = team_manager[d_5d9c_9f69];
            if (used[d_5d9c_9f51] == 0) {
                d_5d9c_9f4d = staff_skills[d_5d9c_9f51];
                if (staff_age[d_5d9c_9f51] == 35)
                    d_5d9c_9f4d = 0;
                if (d_5d9c_9f4d > last_ranked_row || ranked_manager == -1) {
                    ranked_manager = d_5d9c_9f51;
                    last_ranked_row = d_5d9c_9f4d;
                }
            }
        }
        order[i] = ranked_manager;
        if (ranked_manager != -1) {
            used[ranked_manager] = -1;
            if (ranked_manager >= 646 && draw_involves_human == 0) {
                rankings_page = i / 20 + 1;
                draw_involves_human = -1;
            }
        }
    }
    do {
        d_5d9c_9f4b = (rankings_page - 1) * 20;
        new_screen("");
        draw_label(1.125, 1.5, 0, 1, 0x88, "Manager Rankings");
        draw_label(18.375, 1.5, 1, 4, 0x6e, " CLUB");
        draw_label(32.375, 1.5, 1, 4, 0x36, " REP");
        cur_y = 6;
        row_colour_a = 14;
        row_colour_b = 8;
        for (loop_i = 1; loop_i <= 20; loop_i++) {
            d_5d9c_9f71 = loop_i + d_5d9c_9f4b;
            ranked_manager = order[d_5d9c_9f71 - 1];
            if (ranked_manager == -1)
                continue;
            if (ranked_manager >= 646)
                shirt_fg = 9;
            else
                shirt_fg = row_colour_b;
            if (d_5d9c_9f71 < 100)
                sprintf(buf, " %02d ", d_5d9c_9f71);
            else
                strcpy(buf, "100 ");
            draw_label(1.125, cur_y + 0.25 - 3.5, 1, 12, 0, buf);
            sprintf(buf, " %s", manager_name(ranked_manager, 0));
            draw_label(4.375, cur_y + 0.25 - 3.5, 1, shirt_fg, 0x6e, buf);
            selected_team = manager_team[ranked_manager];
            sprintf(buf, " %.17s", (char *)NEAR_PTR(team_names[selected_team]));
            draw_label(18.375, cur_y + 0.25 - 3.5, 1, 2, 0x6e, buf);
            sprintf(buf, " %s", staff_rating_text(ranked_manager, 0));
            draw_label(32.375, cur_y + 0.25 - 3.5, 1, 3, 0x36, buf);
            cur_y++;
            swap_bytes(&row_colour_a, &row_colour_b, 2);
        }
        add_button(2, 1.25, 23.0, 6, 2, 0x35, " - SCR");
        add_button(2, 32.25, 23.0, 6, 2, 0x35, " + SCR");
        add_button(2, 8.5, 23.0, 1, 4, 0xb9, "          EXIT");
        do
            menu_choice = wait_for_button(last_button);
        while (menu_choice <= 0);
        if (menu_choice == 1) {
            rankings_page--;
            if (rankings_page < 1)
                rankings_page = 4;
        } else if (menu_choice == 2) {
            rankings_page++;
            if (rankings_page > 4)
                rankings_page = 1;
        } else
            rankings_page = -1;
    } while (rankings_page != -1);
}

/* the hall of fame */
void hall_of_fame_screen(void)
{
    char buf[320];

    new_screen("");
    draw_label(1.125, 1.5, 0, 1, 0x88, "Hall of Fame");
    draw_label(18.375, 1.5, 1, 4, 0x6e, " CLUB");
    draw_label(32.375, 1.5, 1, 4, 0x36, " PTS");
    cur_y = 6;
    row_colour_a = 14;
    row_colour_b = 8;
    hall_of_fame_ptr = vm_map(hall_of_fame_handle, 0);
    for (loop_i = 1; loop_i <= 20; loop_i++) {
        sprintf(buf, " %02d ", loop_i);
        draw_label(1.125, cur_y + 0.25 - 3.5, 1, 2, 0, buf);
        sprintf(buf, " %.17s", hall_of_fame_ptr + (loop_i - 1) * 80);
        draw_label(4.375, cur_y + 0.25 - 3.5, 1, row_colour_b, 0x6e, buf);
        sprintf(buf, " %.17s", hall_of_fame_ptr + (loop_i - 1) * 80 + 1600);
        draw_label(18.375, cur_y + 0.25 - 3.5, 0, 6, 0x6e, buf);
        sprintf(buf, " %6d", hall_of_fame_points[loop_i]);
        draw_label(32.375, cur_y + 0.25 - 3.5, 1, 9, 0x36, buf);
        cur_y++;
        swap_bytes(&row_colour_a, &row_colour_b, 2);
    }
    add_button(2, 1.25, 23.0, 1, 4, 0x12d, "                 EXIT");
    do
        menu_choice = wait_for_button(last_button);
    while (menu_choice <= 0);
}

/* per-player tables, 1702 players */
void awards_screen(char year)
{
    char buf[320];

    if (current_week > 11) {
        if (year) {
            strcpy(award_points_prefix, "");
            strcpy(award_period_name, "Year");
        } else {
            strcpy(award_points_prefix, " ");
            strcpy(award_period_name, "Month");
        }
        sprintf(buf, "%sly Awards", award_period_name);
        new_screen(buf);
        sprintf(buf, " MANAGER OF THE %s", award_period_name);
        draw_label(1.125, 4.0, 0, 1, 178, buf);
        draw_label(23.625, 4.0, 0, 6, 36, " PTS");
        draw_label(28.375, 4.0, 0, 6, 86, " CLUB");
        for (d_5d9c_9f47 = 0; d_5d9c_9f47 <= 3; d_5d9c_9f47++) {
            sprintf(buf, " %s DIVISION", ordinal_text(d_5d9c_9f47 + 1));
            draw_label(1.125, d_5d9c_9f47 + 5.25, 1, d_5d9c_9f47 & 1 ? 8 : 14, 86, buf);
            if (manager_award_winners[d_5d9c_9f47] != -1) {
                sprintf(buf, " %s", manager_name(manager_award_winners[d_5d9c_9f47], -1));
                draw_label(12.125, d_5d9c_9f47 + 5.25, 1, manager_award_winners[d_5d9c_9f47] >= 646 ? 3 : 12, 90, buf);
                sprintf(buf, "%s%d", award_points_prefix, manager_award_points[d_5d9c_9f47]);
                draw_label(23.625, d_5d9c_9f47 + 5.25, 1, 9, 36, buf);
                sprintf(buf, " %.13s", (char *)NEAR_PTR(team_names[manager_team[manager_award_winners[d_5d9c_9f47]]]));
                draw_label(28.375, d_5d9c_9f47 + 5.25, 1, 2, 86, buf);
            } else {
                draw_label(12.125, d_5d9c_9f47 + 5.25, 1, 12, 90, "");
                draw_label(23.625, d_5d9c_9f47 + 5.25, 1, 9, 36, "");
                draw_label(28.375, d_5d9c_9f47 + 5.25, 1, 2, 86, "");
            }
        }
        sprintf(buf, " SENIOR PLAYER OF THE %s", award_period_name);
        draw_label(1.125, 10.0, 0, 1, 178, buf);
        draw_label(23.625, 10.0, 0, 6, 36, " AV R");
        draw_label(28.375, 10.0, 0, 6, 86, " CLUB");
        sprintf(buf, " YOUNG PLAYER OF THE %s", award_period_name);
        draw_label(1.125, 16.0, 0, 1, 178, buf);
        draw_label(23.625, 16.0, 0, 6, 36, " AV R");
        draw_label(28.375, 16.0, 0, 6, 86, " CLUB");
        for (d_5d9c_9f43 = 0; d_5d9c_9f43 <= 1; d_5d9c_9f43++) {
            d_5d9c_9afc = d_5d9c_9f43 * 6 + 11.25;
            for (d_5d9c_9f45 = 0; d_5d9c_9f45 <= 3; d_5d9c_9f45++) {
                cur_player = player_award_winners[d_5d9c_9f43][d_5d9c_9f45];
                if (cur_player != -1) {
                    sprintf(buf, " %s DIVISION", ordinal_text(d_5d9c_9f45 + 1));
                    draw_label(1.125, d_5d9c_9f45 + d_5d9c_9afc, 1, d_5d9c_9f45 & 1 ? 8 : 14, 86, buf);
                    sprintf(buf, " %.14s", player_short_name(cur_player));
                    draw_label(12.125, d_5d9c_9f45 + d_5d9c_9afc, 1, is_human_team(player_attrs[18][cur_player]) ? 21 : 12, 90, buf);
                    sprintf(award_rating_text, "%d", (int16_t)(player_award_ratings[d_5d9c_9f43][d_5d9c_9f45] * 100) / 100);
                    if (strlen(award_rating_text) == 1)
                        strcat(award_rating_text, ".00");
                    else if (strlen(award_rating_text) == 3)
                        strcat(award_rating_text, "0");
                    sprintf(buf, " %s", award_rating_text);
                    draw_label(23.625, d_5d9c_9f45 + d_5d9c_9afc, 1, 9, 36, buf);
                    sprintf(buf, " %.13s", (char *)NEAR_PTR(team_names[player_attrs[18][cur_player]]));
                    draw_label(28.375, d_5d9c_9f45 + d_5d9c_9afc, 1, 2, 86, buf);
                } else {
                    draw_label(1.125, d_5d9c_9f45 + d_5d9c_9afc, 1, d_5d9c_9f45 & 1 ? 8 : 14, 86, "");
                    draw_label(12.125, d_5d9c_9f45 + d_5d9c_9afc, 1, 12, 90, "");
                    draw_label(23.625, d_5d9c_9f45 + d_5d9c_9afc, 1, 9, 36, "");
                    draw_label(28.375, d_5d9c_9f45 + d_5d9c_9afc, 1, 2, 86, "");
                }
            }
        }
        add_button(2, 1.25, 22.5, 1, 4, 301, "                 DONE");
        do {
            menu_choice = wait_for_button(last_button);
        } while (menu_choice <= 0);
    } else
        message_box("No awards yet this season");
}

void national_squads_menu(void)
{
    if (current_week < 16)
        message_box("National squads not chosen");
    else
        international_squads_screen();
}

void international_squads_screen(void)
{
    char buf[320];

    do {
        show_menu(0, "International Squads", "*Exit|England|Scotland|Ireland|N.Ireland|Wales|England U-21|Scotland U-21|Ireland U-21|N.Ireland U-21|Wales U-21|");
        squad_nation = menu_choice;
        if (squad_nation > 0) {
            under_21_flag = 0;
            strcpy(under_21_suffix, "");
            if (squad_nation > 5) {
                under_21_flag = 1;
                strcpy(under_21_suffix, "U-21 ");
                squad_nation -= 5;
            }
            do {
                new_screen("International squad");
                switch (squad_nation) {
                case 1:
                    loop_k = 65;
                    break;
                case 2:
                    loop_k = 20;
                    break;
                case 3:
                case 4:
                    loop_k = 19;
                    break;
                case 5:
                    loop_k = 18;
                    break;
                }
                sprintf(buf, " %s %s", home_nation_name(squad_nation - 1), under_21_suffix);
                draw_text_box(1.25, 4.0, loop_k / 16, loop_k % 16, 0, buf);
                draw_label(1.125, 7.0, 1, 2, 76, " NAME");
                draw_label(10.875, 7.0, 1, 2, 73, " CLUB");
                draw_label(20.25, 7.0, 1, 2, 76, " NAME");
                draw_label(30.0, 7.0, 1, 2, 73, " CLUB");
                reset_buttons();
                add_button(2, 1.25, 22.5, 1, 4, 301, "                 EXIT");
                for (d_5d9c_9f3d = 0; d_5d9c_9f3d <= 21; d_5d9c_9f3d++) {
                    d_5d9c_9f3b = intl_squad_positions[d_5d9c_9f3d];
                    text_x = d_5d9c_9f3d > 10 ? 20.25 : 1.125;
                    text_y = d_5d9c_9f3d > 10 ? d_5d9c_9f3d - 2 : d_5d9c_9f3d + 9;
                    loop_k = d_5d9c_9f3d & 1 ? 8 : 14;
                    intl_squads = vm_map(national_squads_handle, 0);
                    cur_player = intl_squads[squad_nation - 1][under_21_flag][d_5d9c_9f3d];
                    if (cur_player > -1) {
                        strcpy(squad_name_text, player_surname(cur_player));
                        strcpy(squad_club_text, NEAR_PTR(team_names[player_attrs[18][cur_player]]));
                        if (is_human_team(player_attrs[18][cur_player]))
                            loop_k = 3;
                    } else {
                        strcpy(squad_name_text, FAR_PTR(position_names[d_5d9c_9f3b]));
                        switch (squad_nation) {
                        case 1:
                        case 5:
                            strcpy(squad_club_text, "Non-lge");
                            break;
                        case 2:
                            strcpy(squad_club_text, "Scots-lge");
                            break;
                        case 3:
                        case 4:
                            strcpy(squad_club_text, "Irish-lge");
                            break;
                        }
                    }
                    sprintf(buf, " %.11s", squad_name_text);
                    add_button(0, text_x, text_y, 1, loop_k, 76, buf);
                    sprintf(buf, " %.11s", squad_club_text);
                    draw_label(text_x + 9.75, text_y, 1, 4, 73, buf);
                }
                do {
                    menu_choice = wait_for_button(last_button);
                } while (menu_choice <= 0);
                if (menu_choice > 1) {
                    intl_squads = vm_map(national_squads_handle, 0);
                    cur_player = intl_squads[squad_nation - 1][under_21_flag][menu_choice - 2];
                    if (cur_player > -1) {
                        do {
                            player_details_screen(cur_player, -1, -1);
                            do_player_action(cur_player, player_screen_action);
                        } while (!exit_chosen);
                    } else
                        message_box("No information available");
                }
            } while (menu_choice != 1);
        }
    } while (squad_nation != 0);
}

void fixture_info_menu(void)
{
    char buf[300];
    char cup_name[80];

    do {
        new_screen("Fixture Info");
        show_menu(0, "", "*Exit|Last Results|Next Fixtures|Next FA Cup|Next Rumbelows|Next Zenith|Next Domark|Next UEFA|Next Cup Winners|Next European|Next Playoffs|Euro Seedings|Past Winners|");
        wait_menu_choice(12);
        fixture_menu_choice = menu_choice;
        if (fixture_menu_choice == 1) {
            if (current_week > 1) {
                for (fixture_week = current_week - 1; fixture_week >= 1; fixture_week--) {
                    if (week_fixture_counts[fixture_week] > 0) {
                        show_week_fixtures(fixture_week, 1, -1);
                        fixture_week = 1;
                    }
                }
                0;      /* no code: an expression statement after the loop, which makes
                         * BCC merge the message_box tails into the last copy */
            } else
                message_box("No matches last week");
        } else if (fixture_menu_choice == 2) {
            if (current_week < 95) {
                fixture_week = current_week;
                do {
                    position_ok = -1;
                    if (is_cup_replay_week(fixture_week)) {
                        if (week_fixture_counts[fixture_week] == 0)
                            position_ok = 0;
                    } else if (fixture_week == 7 && zenith_qualifier_count == 0)
                        position_ok = 0;
                    else if (fixture_week == 81 || fixture_week == 93)
                        position_ok = 0;
                    else if (fixture_week < 5 && friendly_counts[fixture_week] == 0)
                        position_ok = 0;
                    fixture_week += position_ok != 0 ? 0 : 1;
                } while (!position_ok);
                show_week_fixtures(fixture_week, 0, -1);
            } else
                message_box("The season is over");
        } else if (fixture_menu_choice == 3) {
            if (fa_cup_next_week > -1) {
                if (fa_cup_next_week > 0)
                    show_week_fixtures(fa_cup_next_week, is_cup_replay_week(fa_cup_next_week) || fa_cup_next_week == 88 ? 0 : 2, 1);
                else
                    show_draw_not_made();
            } else {
                sprintf(buf, "%s won the FA Cup", (char *)NEAR_PTR(team_names[cup_entrants[0][0]]));
                message_box(buf);
            }
        } else if (fixture_menu_choice == 4) {
            if (league_cup_next_week > -1) {
                if (league_cup_next_week > 0)
                    show_week_fixtures(league_cup_next_week, league_cup_next_week == 13 || league_cup_next_week == 65 || league_cup_next_week == 82 || league_cup_next_week == 83 ? 0 : 2, 2);
                else
                    show_draw_not_made();
            } else {
                sprintf(buf, "%s won the Rumbelows Cup", (char *)NEAR_PTR(team_names[cup_entrants[1][0]]));
                message_box(buf);
            }
        } else if (fixture_menu_choice == 5) {
            if (zenith_cup_next_week > -1) {
                if (zenith_cup_next_week > 0)
                    show_week_fixtures(zenith_cup_next_week, zenith_cup_next_week == 53 ? 0 : 2, 3);
                else
                    show_draw_not_made();
            } else {
                sprintf(buf, "%s won the Zenith Cup", (char *)NEAR_PTR(team_names[cup_entrants[2][0]]));
                message_box(buf);
            }
        } else if (fixture_menu_choice == 6) {
            if (domark_cup_next_week > -1) {
                if (domark_cup_next_week > 0)
                    show_week_fixtures(domark_cup_next_week, domark_cup_next_week == 71 || domark_cup_next_week == 73 ? 2 : 0, 4);
                else
                    show_draw_not_made();
            } else {
                sprintf(buf, "%s won the Domark Cup", (char *)NEAR_PTR(team_names[cup_entrants[3][0]]));
                message_box(buf);
            }
        } else if (fixture_menu_choice == 7 || fixture_menu_choice == 8 || fixture_menu_choice == 9) {
            if (fixture_menu_choice == 7)
                fixture_week = uefa_cup_next_week;
            else if (fixture_menu_choice == 8)
                fixture_week = cup_winners_next_week;
            else
                fixture_week = european_cup_next_week;
            if (current_week <= 91) {
                if (fixture_week > 0) {
                    is_second_leg = is_second_leg_week(fixture_week) || fixture_week == 91 && fixture_menu_choice == 7 ? -1 : 0;
                    d_5d9c_9b85 = fixture_week == 87 || fixture_week == 91 ? -1 : 0;
                    show_week_fixtures(fixture_week, is_second_leg || d_5d9c_9b85 ? 0 : 2, fixture_menu_choice - 2);
                } else
                    show_draw_not_made();
            } else {
                if (fixture_menu_choice == 7)
                    strcpy(cup_name, "UEFA Cup");
                else if (fixture_menu_choice == 8)
                    strcpy(cup_name, "Cup Winners Cup");
                else
                    strcpy(cup_name, "European Cup");
                sprintf(buf, "%s won the %s", club_name(cup_entrants[fixture_menu_choice - 3][0]), cup_name);
                message_box(buf);
            }
        } else if (fixture_menu_choice == 10) {
            switch (current_week) {
            case 87: case 88: case 89: case 90:
                show_week_fixtures(90, 0, 8);
                break;
            case 91: case 92:
                show_week_fixtures(92, 0, 8);
                break;
            case 93: case 94:
                show_week_fixtures(94, 0, 8);
                break;
            default:
                if (current_week <= 86)
                    message_box("Playoffs not yet decided");
                else
                    message_box("Playoffs have finished");
            }
        } else if (fixture_menu_choice == 11)
            euro_seedings_screen();
        else if (fixture_menu_choice == 12)
            past_winners_screen();
    } while (fixture_menu_choice != 0);
}

void show_draw_not_made(void)
{
    message_box("Draw not yet made");
}

void euro_seedings_screen(void)
{
    char listed[540];
    char buf[320];

    memset(listed, 0, 540);
    new_screen("European Seedings");
    for (d_5d9c_9f31 = 4; d_5d9c_9f31 <= 6; d_5d9c_9f31++) {
        if (d_5d9c_9f31 == 4)
            strcpy(euro_cup_title, "UEFA CUP");
        else if (d_5d9c_9f31 == 5)
            strcpy(euro_cup_title, "CUP WINNERS CUP");
        else
            strcpy(euro_cup_title, "EUROPEAN CUP");
        sprintf(buf, " %s", euro_cup_title);
        draw_label(1.125, (d_5d9c_9f31 - 4) * 6.25 + 4.0, 0, 1, 0x130, buf);
        for (d_5d9c_9f2f = 1; d_5d9c_9f2f <= 8; d_5d9c_9f2f++) {
            for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 539; d_5d9c_9f69++) {
                if (cup_seeding[d_5d9c_9f69] == d_5d9c_9f31 && listed[d_5d9c_9f69] == 0) {
                    text_x = d_5d9c_9f2f > 4 ? 20.25 : 1.125;
                    text_y = (d_5d9c_9f31 - 4) * 6.25 + 5.25 + d_5d9c_9f2f - 1 - (d_5d9c_9f2f > 4 ? 4 : 0);
                    sprintf(buf, " %.12s", club_name(d_5d9c_9f69));
                    buf[13] = 0;
                    if (is_human_team(d_5d9c_9f69))
                        row_colour_b = 3;
                    else
                        row_colour_b = d_5d9c_9f2f & 1 ? 8 : 14;
                    draw_label(text_x, text_y, d_5d9c_9f69 < 80 ? 6 : 1, row_colour_b, 0x59, buf);
                    if (d_5d9c_9f69 < 80)
                        strcpy(buf, " ENGLAND");
                    else {
                        sprintf(buf, " %s", FAR_PTR(country_names[team_country[d_5d9c_9f69]]));
                        buf[9] = 0;
                    }
                    draw_label(text_x + 11.375, text_y, 1, 2, 0x3c, buf);
                    listed[d_5d9c_9f69] = -1;
                    d_5d9c_9f69 = 539;
                }
            }
        }
    }
    add_button(2, 1.25, 22.5, 1, 4, 0x12d, "                 DONE");
    do
        menu_choice = wait_for_button(last_button);
    while (menu_choice <= 0);
}

void european_cup_groups_screen(void)
{
    new_screen("European Cup Groups");
    draw_group_table(0, 0, 4.0);
    draw_group_table(0, 1, 11.375);
    add_button(2, 1.25, 22.5, 1, 4, 0x12d, "                 DONE");
    do
        menu_choice = wait_for_button(last_button);
    while (menu_choice <= 0);
}

void domark_groups_screen(void)
{
    domark_group_page = 0;
    for (d_5d9c_9f2b = 0; d_5d9c_9f2b <= 7; d_5d9c_9f2b++)
        for (loop_j = 0; loop_j <= 4; loop_j++)
            if (is_human_team(domark_groups[d_5d9c_9f2b][loop_j])) {
                domark_group_page = d_5d9c_9f2b / 2;
                loop_j = 4;
                d_5d9c_9f2b = 7;
            }
    do {
        new_screen("Domark Trophy");
        d_5d9c_9f2b = domark_group_page * 2;
        draw_group_table(1, d_5d9c_9f2b, 4.0);
        draw_group_table(1, d_5d9c_9f2b + 1, 12.375);
        add_button(2, 1.25, 22.5, 6, 2, 0x35, " - SCR");
        add_button(2, 32.25, 22.5, 6, 2, 0x35, " + SCR");
        add_button(2, 8.5, 22.5, 1, 4, 0xb9, "          EXIT");
        do
            menu_choice = wait_for_button(last_button);
        while (menu_choice <= 0);
        if (menu_choice == 1) {
            domark_group_page--;
            if (domark_group_page == -1)
                domark_group_page = 3;
        } else if (menu_choice == 2) {
            domark_group_page++;
            if (domark_group_page == 4)
                domark_group_page = 0;
        }
    } while (menu_choice != 3);
}

/* the group table's column headings */
static char *group_table_headings[] = {
    " P ", " W ", " D ", " L ", " F ", " A ", "PTS"
};

void draw_group_table(int16_t cup, int16_t group, float top)
{
    float col;
    float cols[7];
    char buf[320];

    sprintf(buf, " Group %c", group + 'A');
    draw_label(1.125, top, 0, 1, 0x130, buf);
    draw_label(1.125, top + 1.125, 1, 12, 0x50, " Team");
    for (loop_i = 0, col = 11.375; loop_i <= 6; loop_i++, col += 4.0) {
        cols[loop_i] = col;
        sprintf(buf, " %s ", group_table_headings[loop_i]);
        draw_label(cols[loop_i], top + 1.125, 1, 2, 0, buf);
    }
    for (d_5d9c_9f71 = 0; d_5d9c_9f71 <= cup + 3; d_5d9c_9f71++) {
        if (cup == 0)
            d_5d9c_9f69 = euro_cup_groups[group][d_5d9c_9f71];
        else
            d_5d9c_9f69 = domark_groups[group][d_5d9c_9f71];
        if (is_human_team(d_5d9c_9f69))
            loop_k = 3;
        else
            loop_k = d_5d9c_9f71 & 1 ? 14 : 8;
        sprintf(buf, " %s", club_name(d_5d9c_9f69));
        draw_label(1.125, top + 2.375 + d_5d9c_9f71, cup == 0 && d_5d9c_9f69 < 80 ? 6 : 1, loop_k, 0x50, buf);
        for (loop_i = 0; loop_i <= 6; loop_i++) {
            if (loop_i < 6) {
                if (cup == 0)
                    d_5d9c_9f29 = euro_group_stats[loop_i][group][d_5d9c_9f71];
                else
                    d_5d9c_9f29 = domark_group_stats[loop_i][group][d_5d9c_9f71];
            } else {
                if (cup == 0)
                    d_5d9c_9f29 = euro_group_stats[1][group][d_5d9c_9f71] * 2 + euro_group_stats[2][group][d_5d9c_9f71];
                else
                    d_5d9c_9f29 = domark_group_stats[1][group][d_5d9c_9f71] * 2 + domark_group_stats[2][group][d_5d9c_9f71];
            }
            sprintf(buf, "  %d", d_5d9c_9f29);
            draw_label(cols[loop_i], top + 2.375 + d_5d9c_9f71, 1, 4, 0x1e, buf);
        }
    }
    if (top > 10.0)
        draw_label(1.125, top + 8.375 - (cup == 0), 1, 3, 0, " Top team in each group qualifies ");
}

void team_fixtures_screen(int16_t team)
{
    char names[4][94][20];
    char buf[320];
    unsigned char comp[94];
    unsigned char week[94];

    build_team_fixtures(team, names, comp, week);
    for (;;) {
        fixtures_per_column = fixture_count / 3.0 + 0.49;
        if (fixtures_per_column <= 20)
            draw_club_title(-1.0, team, "Fixtures");
        else {
            new_screen("");
            sprintf(buf, " %s fixtures ", (char *)NEAR_PTR(team_names[team]));
            draw_label(1.5, 1.5, -(team_colours[team] / 16), team_colours[team] % 16, 0, buf);
        }
        loop_k = 4;
        d_5d9c_9f21 = (d_5d9c_9f23 = fixtures_per_column) + 1;
        d_5d9c_9f1f = fixtures_per_column * 2;
        d_5d9c_9f1d = fixtures_per_column * 2 + 1;
        d_5d9c_9f1b = fixtures_per_column * 3;
        for (button_style = 0; fixture_count - 1 >= button_style; button_style++) {
            text_y = button_style % fixtures_per_column + 4.5 - (fixtures_per_column > 20 ? 1.5 : 0);
            if (button_style + 1 <= d_5d9c_9f23)
                text_x = 0.5;
            else if (button_style + 1 <= d_5d9c_9f1f)
                text_x = 13.3;
            else
                text_x = 26.1;
            sprintf(buf, "%.2s", names[0][button_style]);
            row_name_colour = atol(buf);
            sprintf(buf, "%s", names[0][button_style] + 2);
            draw_label(text_x + 1, text_y, row_name_colour / 16, row_name_colour % 16, 0, buf);
            if (button_style + 1 >= next_fixture_row && next_fixture_row > -1) {
                if (button_style + 1 == next_fixture_row)
                    row_name_colour = 3;
                else
                    row_name_colour = loop_k;
                sprintf(buf, "%-11s", names[1][button_style]);
                buf[11] = 0;
                draw_label(text_x + 3.0, text_y, 1, row_name_colour, 0, buf);
            } else {
                sprintf(buf, "%-11s", names[1][button_style]);
                buf[11] = 0;
                add_button(0, text_x + 3.0, text_y, 1, loop_k, 0, buf);
            }
            draw_label(text_x + 11.75, text_y, 3, 6, 0, names[2][button_style]);
            if (loop_k == 12)
                loop_k = 4;
            else
                loop_k = 12;
        }
        menu_choice = wait_for_button(last_button);
        if (menu_choice <= 0)
            break;
        {
        FILE *fp;
        fixture_week_index = week[menu_choice - 1] - 1;
        home_midfield = comp[fixture_week_index];
        match_facts_record = week_matchfax_base[fixture_week_index] + home_midfield;
        fp = fopen("matchfax", "rb");
        fseek(fp, (int32_t)(match_facts_record - 1) * 149, 0);
        fread(match_record, 1, 149, fp);
        fclose(fp);
        match_stats_screen(week_fixtures[comp[fixture_week_index]][0][fixture_week_index] / 32,
                    week_fixtures[comp[fixture_week_index]][1][fixture_week_index] / 32, -1);
        }
    }
}

void build_team_fixtures(int16_t team, char names[][94][20], unsigned char *comp,
                 unsigned char *week)
{
    d_5d9c_9f0d = -1;
    fixture_count = 0;
    next_fixture_row = -1;
    for (button_style = 0; button_style <= 93; button_style++) {
        d_5d9c_9f0f = -1;
        for (loop_i = 0; loop_i <= 1; loop_i++)
            for (loop_j = 0; loop_j <= 39; loop_j++)
                if (week_fixtures[loop_j][loop_i][button_style] / 32 == team)
                    d_5d9c_9f0f = loop_j;
        if (d_5d9c_9f0f > -1) {
            if (button_style < 4)
                strcpy(names[0][fixture_count], "38PF");
            else if (button_style == 4)
                strcpy(names[0][fixture_count], "38CH");
            else if (is_fa_cup_week(button_style + 1))
                strcpy(names[0][fixture_count], "38FA");
            else if (is_rumbelows_match(button_style + 1, d_5d9c_9f0f + 1))
                strcpy(names[0][fixture_count], "38Ru");
            else if (is_zenith_match(button_style + 1, d_5d9c_9f0f + 1))
                strcpy(names[0][fixture_count], "38Ze");
            else if (is_domark_match(button_style + 1, d_5d9c_9f0f + 1))
                strcpy(names[0][fixture_count], "38Do");
            else if (is_playoff_week(button_style + 1))
                strcpy(names[0][fixture_count], "38PL");
            else if (is_european_cup_match(button_style + 1, d_5d9c_9f0f + 1))
                strcpy(names[0][fixture_count], "01EC");
            else if (is_cup_winners_match(button_style + 1, d_5d9c_9f0f + 1))
                strcpy(names[0][fixture_count], "01CW");
            else if (is_uefa_match(button_style + 1, d_5d9c_9f0f + 1))
                strcpy(names[0][fixture_count], "01UE");
            else
                strcpy(names[0][fixture_count], "98LG");
            strcpy(names[2][fixture_count], "");
            if (is_neutral_venue_match(button_style + 1, d_5d9c_9f0f + 1)
                && (button_style + 1 < 94 || d_5d9c_9f0f == 0))
                strcpy(names[2][fixture_count], "N");
            d_5d9c_9f0b = week_fixtures[d_5d9c_9f0f][0][button_style] / 32;
            d_5d9c_9f09 = week_fixtures[d_5d9c_9f0f][1][button_style] / 32;
            if (d_5d9c_9f0b == team) {
                strcpy(names[1][fixture_count], club_name(d_5d9c_9f09));
                if (strlen(names[2][fixture_count]) == 0)
                    strcpy(names[2][fixture_count], "H");
            } else {
                strcpy(names[1][fixture_count], club_name(d_5d9c_9f0b));
                if (strlen(names[2][fixture_count]) == 0)
                    strcpy(names[2][fixture_count], "A");
            }
            comp[button_style] = d_5d9c_9f0f;
            week[fixture_count] = button_style + 1;
            fixture_count++;
            if (next_fixture_row == -1 && button_style + 1 >= current_week)
                next_fixture_row = fixture_count;
        }
    }
}

void club_details_menu(void)
{
    choose_team_by_division(-1);
    if (selected_team > -1) {
        if (is_human_team(selected_team))
            squad_screen(selected_team);
        else
            club_squad_screen(selected_team);
    }
}

void club_squad_screen(int16_t team)
{
    char buf[320];

    do {
        draw_club_title(1.5, team, "Squad");
        add_button(2, 1.5, 19.625, 6, 3, 0x46, "  GOAL");
        add_button(2, 10.875, 19.625, 6, 3, 0x47, "  DISP");
        add_button(2, 20.375, 19.625, 6, 3, 0x47, "  AV R");
        add_button(2, 29.875, 19.625, 6, 3, 0x46, "  TEAM");
        add_button(2, 1.5, 22.0, 1, 4, 0x129, "                 DONE");
        add_button(2, 1.5, 4.0, 1, 14, 0x2e, " Trns");
        add_button(2, 7.875, 4.0, 1, 14, 0x2d, " Staf");
        add_button(2, 14.125, 4.0, 1, 14, 0x2d, " Leag");
        add_button(2, 20.375, 4.0, 1, 14, 0x2d, " Fixt");
        add_button(2, 26.625, 4.0, 1, 14, 0x2d, " Accs");
        add_button(2, 32.875, 4.0, 1, 14, 0x2e, " Info");
        if (club_job_vacant[team] > 0)
            add_button(2, 32.875, 1.125, 1, 2, 0x2e, " Appl");
        draw_squad_list(team);
        do
            squad_screen_choice = wait_for_button(0);
        while (squad_screen_choice <= 0);
        if (squad_screen_choice == 1 || squad_screen_choice == 2 || squad_screen_choice == 3)
            top_players_screen(squad_screen_choice - 1, team);
        else if (squad_screen_choice == 4)
            view_team_tactics(team);
        else if (squad_screen_choice == 6)
            club_transfers_screen(team);
        else if (squad_screen_choice == 7)
            staff_screen(team);
        else if (squad_screen_choice == 8)
            league_progress_graph(team);
        else if (squad_screen_choice == 9)
            team_fixtures_screen(team);
        else if (squad_screen_choice == 10) {
            if (is_demo_game || random_below(50) == 0)
                show_accounts(team);
            else {
                sprintf(buf, "%s refuse access|to their accounts", (char *)NEAR_PTR(team_names[team]));
                message_box(buf);
            }
        } else if (squad_screen_choice == 11)
            club_info_screen(team);
        else if (squad_screen_choice == 12 && club_job_vacant[team] > 0)
            manager_job_menu(team);
        else if ((club_job_vacant[team] > 0 ? 13 : 12) <= squad_screen_choice) {
            d_5d9c_9f3d = squad_screen_choice - (club_job_vacant[team] > 0 ? 13 : 12);
            cur_player = squad_list_players[d_5d9c_9f3d];
            do {
                player_details_screen(cur_player, -1, -1);
                do_player_action(cur_player, player_screen_action);
            } while (!exit_chosen);
        }
    } while (squad_screen_choice != 5);
}

void draw_club_title(float left, int16_t team, char *title)
{
    char buf[320];

    new_screen("");
    sprintf(club_title_text, "%s %s", (char *)NEAR_PTR(team_names[team]), title);
    if (left == -1)
        club_title_x = 19 - strlen(club_title_text) / 2;
    else
        club_title_x = left;
    set_fill_colour(16);
    fill_rect((club_title_x * 8 + 6), 7, ((strlen(club_title_text) + club_title_x) * 8 + 19), 21);
    sprintf(buf, " %s ", club_title_text);
    draw_text_box(club_title_x, 1.125, -(team_colours[team] / 16), team_colours[team] % 16, 0, buf);
}

void club_transfers_screen(int16_t team)
{
    char buf[320];
    register int16_t y;
    register int16_t x;

    draw_club_title(-1, team, "Transfers");
    draw_label(1.125, 4, 1, 8, 150, "RECENTLY BOUGHT");
    draw_label(20.375, 4, 1, 8, 150, "RECENTLY SOLD");
    for (d_5d9c_9f69 = 5; d_5d9c_9f69 >= 4; d_5d9c_9f69--) {
        text_x = d_5d9c_9f69 == 4 ? 21.375 : 2.125;
        x = d_5d9c_9f69 == 4 ? 171 : 17;
        transfer_history = vm_map(transfer_history_handle, 0);
        strcpy(transfer_history_text, right_chars(transfer_history[d_5d9c_9f69 - 4][team], 78));
        if (strlen(transfer_history_text) > 0) {
            text_y = 5.5;
            y = 44;
            transfer_total = 0;
            for (loop_i = 1; loop_i <= strlen(transfer_history_text); loop_i += 13) {
                sprintf(transfer_entry_text, "%13s", &transfer_history_text[loop_i - 1]);
                transfer_entry_text[13] = 0;
                sprintf(buf, "%4s", transfer_entry_text);
                buf[4] = 0;
                cur_player = atol(buf);
                transfer_fee = atol(mid_chars(transfer_entry_text, 5, 7));
                transfer_other_club = atol(right_chars(transfer_entry_text, 2));
                draw_text_at(x, y, 6, player_full_name(cur_player));
                sprintf(buf, "%s %s", (char *)NEAR_PTR(team_names[transfer_other_club]), format_fee(transfer_fee));
                draw_text_at(x, y + 8, 5, buf);
                text_y = text_y + 2.5;
                y += 20;
                transfer_total += transfer_fee;
            }
            sprintf(buf, "TOTAL %s", d_5d9c_9f69 == 5 ? "SPENDING" : "INCOME");
            draw_text_at(x, y, 1, buf);
            sprintf(buf, "%d", transfer_total);
            draw_text_at(x + (d_5d9c_9f69 == 5 ? 90 : 78), y, 2, buf);
        } else
            draw_text_at(x, 48, 5, "NOBODY");
    }
    add_button(2, 1.25, 22.5, 1, 4, 301, "                 DONE");
    do
        menu_choice = wait_for_button(last_button);
    while (menu_choice <= 0);
}

/* the league progress graph's axis labels */
static struct label progress_graph_labels[] = {
    {17, 34, "1"}, {17, 62, "5"}, {11, 97, "10"}, {11, 132, "15"}, {11, 167, "20"},
    {21, 30, "1"}, {162, 30, "19"}, {314, 30, "38"}
};

void league_progress_graph(int16_t team)
{
    draw_club_title(-1, team, "League Progress");
    set_fill_colour(16);
    fill_rect(19, 35, 315, 168);
    set_fill_colour(30);
    fill_rect(15, 31, 311, 164);
    set_draw_colour(24);
    for (cur_x = 15; cur_x <= 311; cur_x += 8)
        draw_line(cur_x, 31, cur_x, 164);
    for (cur_y = 31; cur_y <= 164; cur_y += 7)
        draw_line(15, cur_y, 311, cur_y);
    if (league_round > 1) {
        graph_prev_x = -1;
        for (graph_round = 1; graph_round <= league_round - 1; graph_round++) {
            cur_x = graph_round * 8 + 7;
            cur_y = league_position_history[graph_round][team] * 7 + 24;
            set_draw_colour(18);
            draw_line(cur_x - 2, cur_y + 2, cur_x + 2, cur_y - 2);
            draw_line(cur_x - 2, cur_y - 2, cur_x + 2, cur_y + 2);
            if (graph_prev_x > -1) {
                set_draw_colour(22);
                draw_line(graph_prev_x, graph_prev_y, cur_x, cur_y);
            }
            graph_prev_x = cur_x;
            graph_prev_y = cur_y;
        }
    }
    for (d_5d9c_9efd = 0; d_5d9c_9efd <= 7; d_5d9c_9efd++)
        draw_text_at(progress_graph_labels[d_5d9c_9efd].x, progress_graph_labels[d_5d9c_9efd].y, 1, progress_graph_labels[d_5d9c_9efd].s);
    add_button(2, 2.125, 22.75, 1, 4, 293, "                DONE");
    do
        menu_choice = wait_for_button(last_button);
    while (menu_choice <= 0);
}
