/* @at 1680:0003 */
/* @data 5d9c:2970 */
/* @module */

#include <math.h>
#include <mem.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min_int(int a, int b);          /* min */
int max_int(int a, int b);          /* max */
char far *next_text_buffer(void);            /* next of six 320-byte text buffers */
float min_float(float a, float b);    /* float min */
int random_below(int n);                 /* random number below n */
void swap_bytes(void far *a, void far *b, int n);     /* swap n bytes */
void far *vm_map(int handle, int page);          /* map a page of an EMS/extended block */
void apply_formation(int team, int tactic, char edit);
void replace_in_match_squad(int p);
void replace_in_lineups(int p);
void swap_team_records(int a, int b);
void swap_teams_in_draws(int a, int b);
unsigned find_substring(char far *s, char far *set);          /* position (1-based) of a character of set in s */
void new_screen(char far *title);
void set_fill_colour(int c);
void fill_rect(int x1, int y1, int x2, int y2);
void draw_menu_item(int bg, int fg, int line);
void wait_menu_choice(int last_item);
void draw_text_box(float x, float y, int bg, int fg, int w, char far *s);
void flush_input(void);
long clock_ticks(void);
int take_mouse_clicks(void);
int get_mouse_x(void);
int get_mouse_y(void);
void list_managers(char all);
void draw_label(float x, float y, int bg, int fg, int w, char far *s);
char far *number_in_words(int player);
void add_button(int a, float x, float y, int c, int d, int e, char far *s);
void disable_button(int team);
int wait_for_button(int a);
char far *manager_name(int manager, char full);
void set_squad_row_columns(int line);
char far *player_surname(int player);     /* surname */
char far *player_full_name(int player);     /* first name */
int match_squad_slot(int player);
char player_wants_to_leave(int player);
void set_text_opaque(int on);
void select_font(int a);
void set_draw_colour(int colour);
void draw_text(int x, int y, char far *s);
char far *upper_case(char far *s);
void draw_rect(int x1, int y1, int x2, int y2);
void try_into_match_squad(int player);
void player_returns(int player);
void put_player_out(int player, int a, int b);
void news_message_box(int team, char far *title, char far *text);
char is_only_fit_keeper(int player);

extern int far team_manager[];
extern unsigned char far team_stats[][82];
extern unsigned char far d_5739_0148[];
extern unsigned char far season_status[];
extern unsigned char far foreign_team_rating[];
extern char far player_flags[][0x6a6];
extern char far player_sides[][0x6a6];
extern unsigned char far team_wins[];
extern unsigned char far team_losses[];
extern unsigned char far league_table[];
extern unsigned char far squad_size[];
extern unsigned char far injured_count[];
extern unsigned char far fit_keeper_count[];
extern unsigned char huge player_attrs[][1702];   /* per-player tables, 1702 players */
extern unsigned char far foreign_slot_ratings[][13];
extern unsigned char far manager_team[];
extern unsigned char far ground_coords[][140];
extern char near *team_names[];        /* team names */
extern char near *foreign_team_names[];
extern char d_5d9c_9b21;
extern int d_5d9c_9c15, swapped_team, d_5d9c_9d8d, human_count;
extern int d_5d9c_9f51, d_5d9c_9f69, loop_j;
extern int far cup_entrants[][80];
extern int far manager_season_points[];
extern int far fixtures[][2][94];
extern unsigned char huge player_stats[][1702];
extern char d_5d9c_9b20;
extern int d_5d9c_9c09, d_5d9c_9c0f, d_5d9c_9c11, d_5d9c_9dd7, d_5d9c_9f0f, d_5d9c_9f31;
extern int selected_team, cur_player, season;
extern char d_5d9c_a01e[];
extern int team_voted_out, cur_x, squad_level;
extern unsigned char far manager_style_formation[];
extern int far squad_players[][26];
extern char far player_is_picked[];
extern int far team_selection[][13];
extern int far team_lineups[][2][12];
extern char far d_1f3e_9117;
extern char far d_483b_7e51;
extern char far job_applicants[][101];
extern int far last_match_info[][80];
extern long far team_finances[][80];
extern int transfer_history_handle;
extern char (far *transfer_history)[82][391];
extern char far team_form[][82][5];
extern int far shortlists[][16];
extern int loop_k;
extern char far team_tactics[][3][13];
extern unsigned char cwc_english_entrant[];
extern unsigned char far history_club_ids[];
extern char far cup_seeding[];
extern char far edited_tactics[][13];
extern char menu_item_disabled[];
extern int d_5d9c_9c03, d_5d9c_9c05, menu_highlighted, d_5d9c_9f29, row_colour_a, menu_texts_handle;
extern char d_5d9c_9b1e;
extern float text_y;
extern char far button_label[];
extern char far club_title_text[];
extern float far menu_item_x[];
extern float far menu_item_y[];
extern float far menu_item_colour[];
extern char (far *menu_item_texts)[80];
extern int d_5d9c_9c01, menu_choice;
extern float menu_start_ticks;
extern int human_manager_count, ranked_manager, stats_division, row_colour_b, loop_i;
extern char d_5d9c_9b10, d_5d9c_9b22;
extern float text_x;
extern char far manager_list[];
extern char far fixture_team_name[];
extern int chosen_manager, d_5d9c_9bfb;
extern int d_5d9c_9bf9, row_name_colour, squad_list_count, shirt_fg, disallowed_reason;
extern float d_5d9c_9af0, d_5d9c_9a70, d_5d9c_9a6c;
extern char far d_1f3e_3e28[];
extern char far d_1f3e_364e[];
extern char far d_1f3e_4b6c[];
extern char far fixture_team_tag[];
extern char far shirt_label[];
extern char far is_transfer_listed[];
extern char far requested_transfer[];
extern char far d_1f3e_b256[];
extern int far contract_expiry[];
extern int far squad_list_players[];
extern int current_font_id, label_width;
extern unsigned char ega_text_colours[];
extern unsigned char far team_colours[];     /* team colours: bg * 16 + fg */
extern int d_5d9c_9c31, d_5d9c_9c35, d_5d9c_9db7, d_5d9c_9ecf, current_week;
extern char in_season_end;
extern int far d_2f3c_8353[];
extern unsigned char far d_2f3c_65b7[];
extern int button_style, human_manager_index, last_valued_player, best_result_team;
extern int d_5d9c_a330, d_5d9c_a332, refused_talks_handle, accounts_ems_handle;
extern long (far *accounts_table)[80];
extern char (far *talks_refused_this_week)[151];
extern char (far *fined_this_week)[151];
extern char (far *d_5d9c_9fb2)[151];
extern unsigned char far transfer_bids_made[];
extern char far in_cup_draw[][80];
extern int far top_players_cache[4][3][2][30];
extern char far injured_list[];
extern char far sent_off_list[];
extern char far booked_list[];
extern char far hat_trick_players[];
extern int league_round;

char formations[8][26] = {      /* 13 (position, flag) pairs per tactic */
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 5, 1, 7, 0, 10, 0, 10, 0, 6, 1, 7, 0, 10, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 8, 2, 7, 0, 10, 0, 10, 0, 9, 2, 7, 0, 7, 0 },
    { 1, 0, 2, 1, 3, 1, 4, 0, 4, 0, 4, 0, 5, 0, 7, 0, 10, 0, 10, 0, 6, 0, 7, 0, 10, 0 },
    { 1, 0, 2, 1, 3, 1, 11, 0, 4, 0, 4, 0, 5, 0, 7, 0, 10, 0, 10, 0, 6, 0, 7, 0, 10, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 5, 0, 6, 0, 10, 0, 10, 0, 10, 0, 7, 0, 10, 0 },
    { 1, 0, 2, 1, 3, 1, 4, 0, 4, 0, 4, 0, 8, 0, 7, 0, 10, 0, 7, 0, 9, 0, 7, 0, 10, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 0, 5, 0, 7, 0, 10, 0, 7, 1, 6, 0, 10, 0, 10, 0 },
    { 1, 0, 2, 0, 3, 0, 4, 0, 4, 0, 7, 2, 5, 0, 7, 0, 10, 0, 10, 0, 6, 0, 7, 0, 10, 0 }
};

char is_human_team(int team)
{
    if (team < 80 && team_manager[team] >= 0x286 && team_manager[team] < 0x28a)
        return -1;
    return 0;
}

float team_rating(int team)
{
    if (team <= 79)
        return max_int(min_int(d_5739_0148[team] - (team / 20 + min_int(season_status[team], 3) - 2) * 2 - 3
                                       + team_stats[0][team] / 16.0 - 0.5, 17), 6);
    if (team <= 479)
        return foreign_team_rating[team] - 3;
    return foreign_team_rating[team] - 5;
}

int player_rating(int player)
{
    return max_int(min_int(player_attrs[0][player] / 10.0, 17), 6);
}

char can_play_position(int player, int pos)
{
    if (pos == 11 || (pos == 1 && player_flags[0][player]) ||
        (player_flags[(pos + 1) / 3][player] && player_sides[(pos + 1) % 3][player]))
        return -1;
    return 0;
}

char is_defence_position(int pos)
{
    if (pos == 2 || pos == 3 || pos == 4 || pos == 11)
        return -1;
    return 0;
}

char is_midfield_position(int pos)
{
    if (pos == 5 || pos == 6 || pos == 7)
        return -1;
    return 0;
}

char is_attack_position(int pos)
{
    if (pos == 8 || pos == 9 || pos == 10)
        return -1;
    return 0;
}

char is_left_position(int pos)
{
    if (pos == 3 || pos == 6 || pos == 9 || pos == 11)
        return -1;
    return 0;
}

char is_right_position(int pos)
{
    if (pos == 2 || pos == 5 || pos == 8 || pos == 11)
        return -1;
    return 0;
}

char is_centre_position(int pos)
{
    if (pos == 4 || pos == 7 || pos == 10 || pos == 11)
        return -1;
    return 0;
}

char is_after_transfer_deadline(int week)
{
    if (week > 67)
        return -1;
    return 0;
}

int league_points_at(int place)
{
    return team_wins[league_table[place]] * 3 + league_round - 1
           - team_wins[league_table[place]] - team_losses[league_table[place]];
}

int fit_outfield_players(int team)
{
    return squad_size[team] - injured_count[team] - fit_keeper_count[team];
}

char is_indispensable_player(int player)
{
    if (player_attrs[20][player] == 0 && (fit_outfield_players(player_attrs[18][player]) < 14 || is_only_fit_keeper(player)))
        return -1;
    return 0;
}

char is_only_fit_keeper(int player)
{
    if (player_flags[0][player] && player_attrs[20][player] == 0 && fit_keeper_count[player_attrs[18][player]] == 1)
        return -1;
    return 0;
}

char far *shirt_number_text(int num)
{
    char far *s;

    s = next_text_buffer();
    sprintf(s, "%02d", num == 13 ? num + 1 : num);
    return s;
}

double player_match_rating(int player, int pos)
{
    return (min_float(player_attrs[15][player], player_attrs[9][player]) * 0.1 + player_attrs[12][player]
            + player_attrs[17][player] * 0.5 + (pos == 1 || pos == 4 || pos == 7 || pos > 9 ? 3 : 0)) / 3.0;
}

int foreign_player_rating(int slot, int team, int pos)
{
    return foreign_slot_ratings[team == 81][slot] + (pos == 1 || pos == 4 || pos == 7 || pos > 9 ? 2 : 0);
}

int contract_period_of_week(int week)
{
    return week <= 6 ? week : week / 2 + 3;
}

void swap_into_division(int team, int division)
{
    d_5d9c_9b21 = team / 20 < division - 1;
    swapped_team = -1;
    for (d_5d9c_9f69 = (division - 1) * 20; d_5d9c_9f69 <= (division - 1) * 20 + 19; d_5d9c_9f69++) {
        if (is_human_team(d_5d9c_9f69) == 0) {
            d_5d9c_9d8d = team_rating(d_5d9c_9f69) + random_below(2) - random_below(2);
            if (d_5d9c_9b21) {
                if (d_5d9c_9d8d > d_5d9c_9c15 || swapped_team == -1) {
                    d_5d9c_9c15 = d_5d9c_9d8d;
                    swapped_team = d_5d9c_9f69;
                }
            } else {
                if (d_5d9c_9d8d < d_5d9c_9c15 || swapped_team == -1) {
                    d_5d9c_9c15 = d_5d9c_9d8d;
                    swapped_team = d_5d9c_9f69;
                }
            }
        }
    }
    swap_bytes((void *)&team_names[team], (void *)&team_names[swapped_team], 2);
    for (loop_j = 0; loop_j <= 4; loop_j++)
        swap_bytes((void *)&team_stats[loop_j][team], (void *)&team_stats[loop_j][swapped_team], 1);
    swap_bytes((void *)&team_manager[team], (void *)&team_manager[swapped_team], 2);
    for (d_5d9c_9f51 = 0x286; d_5d9c_9f51 <= human_count + 0x285; d_5d9c_9f51++) {
        if (manager_team[d_5d9c_9f51] == team)
            manager_team[d_5d9c_9f51] = swapped_team;
        else if (manager_team[d_5d9c_9f51] == swapped_team)
            manager_team[d_5d9c_9f51] = team;
    }
    swap_bytes((void *)&ground_coords[0][team], (void *)&ground_coords[0][swapped_team], 1);
    swap_bytes((void *)&ground_coords[1][team], (void *)&ground_coords[1][swapped_team], 1);
}

float division_factor(int team)
{
    if (team <= 19 || team >= 80)
        return 1.1;
    if (team <= 39)
        return 1.5;
    if (team <= 59)
        return 2.5;
    return 3.5;
}

char is_european_entrant(int team)
{
    d_5d9c_9b20 = 0;
    for (d_5d9c_9f31 = 4; d_5d9c_9f31 <= 6; d_5d9c_9f31++)
        for (d_5d9c_9dd7 = 0; d_5d9c_9dd7 <= 3; d_5d9c_9dd7++)
            if ((d_5d9c_9dd7 < 2 || d_5d9c_9f31 == 4) && cup_entrants[d_5d9c_9f31][d_5d9c_9dd7] == team) {
                d_5d9c_9c11 = d_5d9c_9f31;
                d_5d9c_9c0f = d_5d9c_9dd7;
                d_5d9c_9b20 = -1;
                d_5d9c_9dd7 = 3;
                d_5d9c_9f31 = 6;
            }
    return d_5d9c_9b20;
}

void start_first_season(void)
{
    season = 1;
    memset(d_5d9c_a01e, 1, 4);
}

void clear_fixture_rows(int first_row, int last_row, int col)
{
    d_5d9c_9c09 = -32;
    for (d_5d9c_9f0f = first_row; d_5d9c_9f0f <= last_row; d_5d9c_9f0f++)
        for (selected_team = 0; selected_team <= 1; selected_team++)
            fixtures[d_5d9c_9f0f][selected_team][col] = d_5d9c_9c09;
}

void reset_monthly_stats(void)
{
    for (cur_player = 0; cur_player <= 0x6a3; cur_player++) {
        player_stats[21][cur_player] = 0;
        player_stats[22][cur_player] = 0;
    }
    for (d_5d9c_9f51 = 0; d_5d9c_9f51 <= human_count + 0x285; d_5d9c_9f51++)
        manager_season_points[d_5d9c_9f51] = 0;
}

void clear_fortnight_reports(void)
{
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 79; d_5d9c_9f69++) {
        for (button_style = 0; button_style <= 13; button_style++)
            if (button_style != 1) {
                accounts_table = vm_map(accounts_ems_handle, 1);
                accounts_table[button_style][d_5d9c_9f69] = 0;
            }
        transfer_bids_made[d_5d9c_9f69] = 0;
    }
    for (human_manager_index = 0; human_manager_index <= 3; human_manager_index++) {
        talks_refused_this_week = vm_map(refused_talks_handle, 1);
        strcpy(talks_refused_this_week[human_manager_index], "");
        fined_this_week = vm_map(d_5d9c_a332, 1);
        strcpy(fined_this_week[human_manager_index], "");
        d_5d9c_9fb2 = vm_map(d_5d9c_a330, 1);
        strcpy(d_5d9c_9fb2[human_manager_index], "");
    }
    best_result_team = -1;
}

void clear_weekly_state(void)
{
    unsigned i, j, k, l;

    for (d_5d9c_9f69 = 0; d_5d9c_9f69 < 80; d_5d9c_9f69++)
        in_cup_draw[0][d_5d9c_9f69] = 0;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++)
            for (k = 0; k < 2; k++)
                for (l = 0; l < 30; l++)
                    top_players_cache[i][j][k][l] = -2;
    strcpy(injured_list, "");
    strcpy(sent_off_list, "");
    strcpy(booked_list, "");
    strcpy(hat_trick_players, "");
    last_valued_player = -1;
}

void reset_team_selection(int team)
{
    int player;

    if (season == 1 || (season > 1 && team == team_voted_out))
        apply_formation(team, manager_style_formation[team_manager[team]] % 16, 0);
    for (loop_j = 0; loop_j <= squad_size[team] - 1; loop_j++) {
        player_is_picked[squad_players[team][loop_j]] = 0;
        player_attrs[23][squad_players[team][loop_j]] = 3;
    }
    for (loop_j = 0; loop_j <= 12; loop_j++) {
        team_selection[team][loop_j] = 1700;
        player = 1700;
        team_lineups[team][0][loop_j] = player;
        team_lineups[team][1][loop_j] = player;
    }
    if (is_human_team(team) == 0)
        for (cur_x = 0; cur_x <= 12; cur_x++) {
            team_selection[team][cur_x] = 1701;
            d_1f3e_9117 = 1;
            d_483b_7e51 = team;
            replace_in_match_squad(1701);
        }
    for (squad_level = 0; squad_level <= 1; squad_level++)
        for (cur_x = 0; cur_x <= 10; cur_x++) {
            player = 1701;
            team_lineups[team][squad_level][cur_x] = player;
            d_483b_7e51 = team;
            player_attrs[23][1701] = squad_level + 1;
            replace_in_lineups(1701);
        }
}

void swap_teams(int team_a, int team_b)
{
    swap_bytes((void *)&team_names[team_a], (void *)&team_names[team_b], 2);
    swap_bytes((void *)job_applicants[team_a], (void *)job_applicants[team_b], 101);
    for (loop_j = 0; loop_j <= 62; loop_j++) {
        swap_bytes((void *)&team_stats[loop_j][team_a], (void *)&team_stats[loop_j][team_b], 1);
        if (loop_j < 12) {
            swap_bytes((void *)&last_match_info[loop_j][team_a], (void *)&last_match_info[loop_j][team_b], 2);
            if (loop_j < 9) {
                swap_bytes((void *)&in_cup_draw[loop_j][team_a], (void *)&in_cup_draw[loop_j][team_b], 1);
                if (loop_j < 6) {
                    swap_bytes((void *)&team_finances[loop_j][team_a], (void *)&team_finances[loop_j][team_b], 4);
                    if (loop_j < 2) {
                        transfer_history = vm_map(transfer_history_handle, 1);
                        swap_bytes((void *)transfer_history[loop_j][team_a], (void *)transfer_history[loop_j][team_b], 391);
                        swap_bytes((void *)team_form[loop_j][team_a], (void *)team_form[loop_j][team_b], 5);
                    }
                }
            }
        }
    }
    for (loop_j = 0; loop_j <= 15; loop_j++)
        swap_bytes((void *)&shortlists[team_a][loop_j], (void *)&shortlists[team_b][loop_j], 2);
    swap_team_records(team_a, team_b);
    for (loop_j = 0; loop_j <= 12; loop_j++)
        for (loop_k = 0; loop_k <= 2; loop_k++)
            swap_bytes((void *)&team_tactics[team_a][loop_k][loop_j],
                        (void *)&team_tactics[team_b][loop_k][loop_j], 1);
    for (loop_j = 0; loop_j <= 79; loop_j++)
        for (loop_k = 0; loop_k <= 7; loop_k++) {
            if (cup_entrants[loop_k][loop_j] == team_a)
                cup_entrants[loop_k][loop_j] = team_b;
            else if (cup_entrants[loop_k][loop_j] == team_b)
                cup_entrants[loop_k][loop_j] = team_a;
        }
    for (loop_j = 0; loop_j <= 1; loop_j++) {
        if (cwc_english_entrant[loop_j] == team_a)
            cwc_english_entrant[loop_j] = team_b;
        else if (cwc_english_entrant[loop_j] == team_b)
            cwc_english_entrant[loop_j] = team_a;
        swap_bytes((void *)&ground_coords[loop_j][team_a], (void *)&ground_coords[loop_j][team_b], 1);
    }
    for (loop_j = 0; loop_j <= human_count + 0x285; loop_j++) {
        if (manager_team[loop_j] == team_a)
            manager_team[loop_j] = team_b;
        else if (manager_team[loop_j] == team_b)
            manager_team[loop_j] = team_a;
    }
    for (loop_j = 0; loop_j <= 0x6a3; loop_j++) {
        if (player_attrs[18][loop_j] == team_a)
            player_attrs[18][loop_j] = team_b;
        else if (player_attrs[18][loop_j] == team_b)
            player_attrs[18][loop_j] = team_a;
        if (player_stats[10][loop_j] == team_a)
            player_stats[10][loop_j] = team_b;
        else if (player_stats[10][loop_j] == team_b)
            player_stats[10][loop_j] = team_a;
    }
    swap_teams_in_draws(team_a, team_b);
    if (team_voted_out == team_a)
        team_voted_out = team_b;
    else if (team_voted_out == team_b)
        team_voted_out = team_a;
    for (loop_j = 0; loop_j <= 0x8b; loop_j++) {
        if (history_club_ids[loop_j] == team_a)
            history_club_ids[loop_j] = team_b;
        else if (history_club_ids[loop_j] == team_b)
            history_club_ids[loop_j] = team_a;
    }
    swap_bytes((void *)&cup_seeding[team_a], (void *)&cup_seeding[team_b], 1);
}

void apply_formation(int team, int tactic, char edit)
{
    char far *src;

    switch (tactic) {
    case 0: src = formations[0]; break;
    case 1: src = formations[1]; break;
    case 2: src = formations[3]; break;
    case 3: src = formations[2]; break;
    case 4: src = formations[4]; break;
    case 5: src = formations[5]; break;
    case 6: src = formations[6]; break;
    case 7: src = formations[7]; break;
    }
    for (loop_j = 0; loop_j <= 12; loop_j++) {
        if (edit == 0) {
            team_tactics[team][0][loop_j] = *src++;
            team_tactics[team][1][loop_j] = *src++;
            team_tactics[team][2][loop_j] = 0;
        } else {
            edited_tactics[0][loop_j] = *src++;
            edited_tactics[1][loop_j] = *src++;
            edited_tactics[2][loop_j] = 0;
        }
    }
}

void build_squad_lists(void)
{
    unsigned char count[80];

    memset(count, 0, 80);
    for (cur_player = 0; cur_player <= 0x6a3; cur_player++) {
        selected_team = player_attrs[18][cur_player];
        squad_players[selected_team][count[selected_team]] = cur_player;
        count[selected_team]++;
    }
}

void show_menu(int top, char far *title, char far *items)
{
    char buf[320];
    int len;

    memset(menu_item_disabled, 0, 20);
    menu_highlighted = -1;
    if (strlen(title) > 1)
        new_screen(title);
    d_5d9c_9c05 = top > 0 ? top - 5 : 0;
    strcpy(button_label, items);
    d_5d9c_9f29 = 0;
    for (loop_k = 1; loop_k <= strlen(items); loop_k++)
        if (items[loop_k - 1] == '|')
            d_5d9c_9f29++;
    d_5d9c_9f29--;
    d_5d9c_9c03 = 0;
    row_colour_a = 30;
    while (button_label[0]) {
        len = find_substring(button_label, "|") - 1;
        strncpy(buf, button_label, len);
        buf[len] = 0;
        if (buf[0] == '*') {
            strcpy(buf, buf + 1);
            d_5d9c_9b1e = -1;
        } else
            d_5d9c_9b1e = 0;
        sprintf(club_title_text, " %-17s", buf);
        strcpy(button_label, &button_label[len + 1]);
        if ((d_5d9c_9f29 + 1) / 2 > d_5d9c_9c03) {
            cur_x = 1;
            text_y = d_5d9c_9c03 * 2.5 + d_5d9c_9c05 + 5.0;
        } else {
            if (d_5d9c_9c03 == d_5d9c_9f29 && !(d_5d9c_9f29 & 1))
                cur_x = 11;
            else
                cur_x = 21;
            text_y = (d_5d9c_9c03 - (d_5d9c_9f29 + 1) / 2) * 2.5 + d_5d9c_9c05 + 5.0;
        }
        menu_item_x[d_5d9c_9c03] = cur_x;
        menu_item_y[d_5d9c_9c03] = text_y;
        menu_item_texts = vm_map(menu_texts_handle, 1);
        strcpy(menu_item_texts[d_5d9c_9c03], club_title_text);
        set_fill_colour(0);
        fill_rect(cur_x * 8 + 6, text_y * 8.0 - 2.0,
                    (cur_x + strlen(club_title_text)) * 8 + 3, text_y * 8.0 + 13.0);
        if (d_5d9c_9b1e) {
            menu_item_colour[d_5d9c_9c03] = 24.0;
            draw_menu_item(1, 8, d_5d9c_9c03);
        } else {
            menu_item_colour[d_5d9c_9c03] = row_colour_a;
            draw_menu_item(row_colour_a / 16, row_colour_a % 16, d_5d9c_9c03);
        }
        d_5d9c_9c03++;
    }
    if (strlen(title) > 1)
        wait_menu_choice(d_5d9c_9c03 - 1);
}

void draw_menu_item(int bg, int fg, int line)
{
    menu_item_texts = vm_map(menu_texts_handle, 0);
    draw_text_box(menu_item_x[line], -menu_item_y[line], bg, fg, 0, menu_item_texts[line]);
}

void wait_menu_choice(int last_item)
{
    if (menu_highlighted > -1 && last_item > -1)
        draw_menu_item(menu_item_colour[menu_highlighted] / 16.0, (int)menu_item_colour[menu_highlighted] % 16, menu_highlighted);
    flush_input();
    menu_start_ticks = clock_ticks();
    do {
        menu_choice = -1;
        if (take_mouse_clicks() > 0)
            for (d_5d9c_9c01 = 0; d_5d9c_9c01 <= abs(last_item); d_5d9c_9c01++) {
                cur_x = menu_item_x[d_5d9c_9c01];
                text_y = menu_item_y[d_5d9c_9c01];
                if (menu_item_disabled[d_5d9c_9c01] == 0 && get_mouse_x() >= cur_x * 8 - 2 &&
                    get_mouse_x() <= (cur_x + 17) * 8 + 10 &&
                    get_mouse_y() >= text_y * 8.0 + 15.0 - 20.0 &&
                    get_mouse_y() <= text_y * 8.0 + 31.0 - 20.0)
                    menu_choice = d_5d9c_9c01;
            }
    } while (menu_choice <= -1);
    menu_item_texts = vm_map(menu_texts_handle, 0);
    if (last_item > -1 || menu_item_texts[menu_choice][0] == '*') {
        draw_menu_item(1, 12, menu_choice);
        menu_highlighted = menu_choice;
    }
}

void disable_menu_item(int item)
{
    menu_item_disabled[item] = -1;
}

char far *club_name(int team)
{
    char far *s;

    s = next_text_buffer();
    if (team < 80)
        strcpy(s, team_names[team]);
    else
        strcpy(s, foreign_team_names[team]);
    return s;
}

void choose_team_by_division(int human)
{
    char buf[320];
    char item[80];
    unsigned i;

    selected_team = -1;
    d_5d9c_9b10 = 0;
    if (human == -1 && human_manager_count > 0) {
        list_managers(0);
        strcpy(button_label, "");
        for (i = 1; i <= strlen(&manager_list[1]); i += 3) {
            sprintf(buf, "%.3s", &manager_list[i]);
            ranked_manager = atol(buf);
            strcpy(fixture_team_name, team_names[manager_team[ranked_manager]]);
            sprintf(buf, "%.13s", fixture_team_name);
            sprintf(item, "%s|", buf);
            strcat(button_label, item);
        }
        sprintf(buf, "*Exit|%sAnother Team|", button_label);
        show_menu(0, "Team choice", buf);
        if (menu_choice == 0)
            d_5d9c_9b10 = -1;
        else if (menu_choice >= 1 && menu_choice <= human_manager_count) {
            sprintf(buf, "%.3s", &manager_list[menu_choice * 3 - 2]);
            selected_team = manager_team[atol(buf)];
            d_5d9c_9b10 = -1;
        }
    }
    if (d_5d9c_9b10 == 0) {
        stats_division = 0;
        if (human >= 0)
            sprintf(buf, "Player %s Team", number_in_words(human + 1));
        else
            strcpy(buf, "Team Choice");
        new_screen(buf);
        draw_label(1.5, 3.75, 1, 2, 0x49, " DIV ONE");
        draw_label(10.875, 3.75, 1, 2, 0x49, " DIV TWO");
        draw_label(20.25, 3.75, 1, 2, 0x49, " DIV THREE");
        draw_label(29.625, 3.75, 1, 2, 0x49, " DIV FOUR");
        row_colour_a = 12;
        row_colour_b = 4;
        for (loop_i = 0; loop_i <= 79; loop_i++) {
            if (loop_i <= 19) {
                text_x = 1.5;
                text_y = loop_i + 5;
            } else if (loop_i <= 39) {
                text_x = 10.875;
                text_y = loop_i - 15;
            } else if (loop_i <= 59) {
                text_x = 20.25;
                text_y = loop_i - 35;
            } else if (loop_i <= 79) {
                text_x = 29.625;
                text_y = loop_i - 55;
            }
            sprintf(buf, " %.11s", (char far *)team_names[loop_i]);
            add_button(0, text_x, text_y, 1 - is_human_team(loop_i) * 5, row_colour_a, 0x49, buf);
            swap_bytes(&row_colour_a, &row_colour_b, 2);
        }
        if (human > -1 && d_5d9c_9b22 == 0)
            for (loop_i = 0; loop_i <= 79; loop_i++)
                if (loop_i < 20 || is_human_team(loop_i))
                    disable_button(loop_i + 1);
        do
            menu_choice = wait_for_button(0);
        while (menu_choice <= 0);
        selected_team = menu_choice - 1;
    }
}

void choose_manager(char all)
{
    char buf[320];
    unsigned i;

    chosen_manager = -1;
    list_managers(all);
    if (strlen(&manager_list[1]) == 3)
        chosen_manager = atol(&manager_list[1]);
    else if (strlen(&manager_list[1]) > 3) {
        strcpy(button_label, "*Exit|");
        for (i = 1; i <= strlen(&manager_list[1]); i += 3) {
            sprintf(buf, "%.3s", &manager_list[i]);
            ranked_manager = atol(buf);
            sprintf(buf, "%s|", manager_name(ranked_manager, 0));
            strcat(button_label, buf);
        }
        show_menu(0, "Choose manager", button_label);
        if (menu_choice > 0) {
            sprintf(buf, "%.3s", &manager_list[menu_choice * 3 - 2]);
            chosen_manager = atol(buf);
        }
    }
}

void list_managers(char all)
{
    char buf[320];

    strcpy(&manager_list[1], "");
    for (d_5d9c_9bfb = 0x286; d_5d9c_9bfb <= human_count + 0x285; d_5d9c_9bfb++)
        if ((all == 0 && manager_team[d_5d9c_9bfb] < 0xff) || all != 0) {
            sprintf(buf, "%03d", d_5d9c_9bfb);
            strcat(&manager_list[1], buf);
        }
}

void draw_squad_list(int team)
{
    char buf[80];

    for (loop_i = 0; loop_i <= squad_size[team] - 2; loop_i++)
        for (loop_j = loop_i + 1; loop_j <= squad_size[team] - 1; loop_j++)
            if (strcmp(player_surname(squad_players[team][loop_i]), player_surname(squad_players[team][loop_j])) > 0)
                swap_bytes((void *)&squad_players[team][loop_i], (void *)&squad_players[team][loop_j], 2);
    d_5d9c_9bf9 = squad_size[team] - 1;
    row_name_colour = 12;
    squad_list_count = 0;
    for (loop_i = 0; loop_i <= 25; loop_i++) {
        set_squad_row_columns(loop_i);
        if (loop_i <= d_5d9c_9bf9) {
            cur_player = squad_players[team][loop_i];
            strcpy(d_1f3e_3e28, "");
            strcpy(d_1f3e_364e, "");
            strcpy(d_1f3e_4b6c, "");
            shirt_fg = 18;
            if (player_flags[0][cur_player])
                strcpy(d_1f3e_3e28, "G");
            if (player_flags[1][cur_player])
                strcat(d_1f3e_3e28, "D");
            if (player_flags[2][cur_player])
                strcat(d_1f3e_3e28, "M");
            if (player_flags[3][cur_player])
                strcat(d_1f3e_3e28, "A");
            if (player_flags[4][cur_player])
                strcpy(d_1f3e_364e, "R");
            if (player_flags[5][cur_player])
                strcat(d_1f3e_364e, "L");
            if (player_flags[6][cur_player])
                strcat(d_1f3e_364e, "C");
            sprintf(fixture_team_tag, "%s %s", d_1f3e_3e28, d_1f3e_364e);
            if (player_attrs[20][cur_player] > 0) {
                if (player_attrs[19][cur_player] == 20)
                    strcpy(d_1f3e_4b6c, "su");
                else
                    strcpy(d_1f3e_4b6c, "ij");
            } else if (player_is_picked[cur_player]) {
                strcpy(d_1f3e_4b6c, shirt_number_text(match_squad_slot(cur_player) + 1));
                shirt_fg = 33;
            }
            if (find_substring(player_full_name(cur_player), " ") > 0)
                sprintf(shirt_label, "%s %c", player_surname(cur_player), *player_full_name(cur_player));
            else
                strcpy(shirt_label, player_surname(cur_player));
            if (is_transfer_listed[cur_player] && requested_transfer[cur_player] == 0)
                sprintf(buf, "L %s", shirt_label);
            else if (is_transfer_listed[cur_player] && requested_transfer[cur_player])
                sprintf(buf, "R %s", shirt_label);
            else if (contract_expiry[cur_player] == 0)
                sprintf(buf, "C %s", shirt_label);
            else if (player_wants_to_leave(cur_player)) {
                if (disallowed_reason == 0 || player_stats[14][cur_player] > 0)
                    sprintf(buf, "U %s", shirt_label);
                else
                    sprintf(buf, "  %s", shirt_label);
            } else
                sprintf(buf, "  %s", shirt_label);
            strcpy(shirt_label, buf);
            draw_label(d_5d9c_9af0, text_y, shirt_fg / 16, shirt_fg % 16, 12, d_1f3e_4b6c);
            add_button(0, d_5d9c_9a70, text_y, 1 - d_1f3e_b256[cur_player] * 4, row_name_colour, 0x5a, shirt_label);
            draw_label(d_5d9c_9a6c, text_y, 2, 6, 0x2b, fixture_team_tag);
            squad_list_players[loop_i] = cur_player;
            squad_list_count++;
        } else {
            draw_label(d_5d9c_9af0, text_y, 1, 2, 12, "");
            draw_label(d_5d9c_9a70, text_y, 1, row_name_colour, 0x5a, "");
            draw_label(d_5d9c_9a6c, text_y, 2, 6, 0x2b, "");
        }
        if (row_name_colour == 12)
            row_name_colour = 4;
        else
            row_name_colour = 12;
    }
}

void set_squad_row_columns(int line)
{
    if (line < 13) {
        d_5d9c_9af0 = 1.375;
        d_5d9c_9a70 = 3.125;
        d_5d9c_9a6c = 14.625;
        text_y = line + 6.5;
    } else {
        d_5d9c_9af0 = 37.375;
        d_5d9c_9a70 = 20.25;
        d_5d9c_9a6c = 31.75;
        text_y = line - 13 + 6.5;
    }
}

long overdraft_limit(int team)
{
    if (team <= 19)
        return 500000L;
    if (team <= 39)
        return 250000L;
    return 125000L;
}

void draw_text_at(int x, int y, int colour, char far *s)
{
    if (*s) {
        if (x == -1)
            x = 160 - strlen(s) * 3;
        set_text_opaque(0);
        if (current_font_id)
            select_font(0);
        if (colour > 0 && y > 0) {
            set_draw_colour(16);
            draw_text(x - 9, y, upper_case(s));
        }
        set_draw_colour(colour + 16);
        draw_text(x - 8, abs(y) + 1, upper_case(s));
        set_text_opaque(1);
    }
}

void draw_label(float x, float y, int bg, int fg, int w, char far *s)
{
    if (*s || w > 0) {
        if (w > 0)
            label_width = w;
        else
            label_width = strlen(s) * 6;
        if (x == -1)
            x = (160.0 - label_width / 2.0) / 8.0;
        set_fill_colour(fg + 16);
        fill_rect(x * 8.0 - 1, fabs(y) * 8.0 - 6.0, label_width + (x * 8.0 - 1), fabs(y) * 8.0);
        if (*s) {
            set_text_opaque(0);
            if (current_font_id)
                select_font(0);
            if (y < 0) {
                set_draw_colour(16);
                draw_text(x * 8.0 - 1, fabs(y) * 8.0, upper_case(s));
            }
            set_draw_colour(abs(bg) + 16);
            draw_text(x * 8.0, fabs(y) * 8.0 + 1, upper_case(s));
            set_text_opaque(1);
        }
    }
}

void draw_text_font1(float x, float y, int colour, char far *s)
{
    if (*s) {
        if (x == -1)
            x = 21.0 - strlen(s) / 2.0;
        set_text_opaque(0);
        if (current_font_id != 1)
            select_font(1);
        if (colour > 0 && y > 0) {
            set_draw_colour(16);
            draw_text(x * 8.0 - 9.0, y * 8.0 - 1, s);
        }
        set_draw_colour(colour + 16);
        draw_text(x * 8.0 - 8.0, fabs(y) * 8.0 - 1, s);
        set_text_opaque(1);
    }
}

void draw_label_font1(float x, float y, int bg, int fg, int w, char far *s)
{
    if (*s || w > 0) {
        if (w > 0)
            label_width = w;
        else
            label_width = strlen(s) * 8;
        if (x == -1)
            x = (160.0 - label_width / 2.0) / 8.0;
        set_fill_colour(fg + 16);
        fill_rect(x * 8.0 - 2.0, fabs(y) * 8.0 - 8.0, label_width + x * 8.0 + 1, fabs(y) * 8.0);
        if (*s) {
            set_text_opaque(0);
            if (current_font_id != 1)
                select_font(1);
            if (y < 0) {
                set_draw_colour(16);
                draw_text(x * 8.0 - 1, fabs(y) * 8.0 - 1, s);
            }
            set_draw_colour(abs(bg) + 16);
            draw_text(x * 8.0, fabs(y) * 8.0 - 1, s);
            set_text_opaque(1);
        }
    }
}

void draw_text_font2(float x, float y, int colour, char far *s)
{
    if (*s) {
        if (x == -1)
            x = 21.0 - strlen(s) / 2.0;
        set_text_opaque(0);
        if (current_font_id != 2)
            select_font(2);
        if (colour > 0 && y > 0) {
            set_draw_colour(16);
            draw_text(x * 8.0 - 9.0, y * 8.0 + 9.0, s);
        }
        set_draw_colour(colour + 16);
        draw_text(x * 8.0 - 8.0, fabs(y) * 8.0 + 10.0, s);
        set_text_opaque(1);
    }
}

void draw_text_box(float x, float y, int bg, int fg, int w, char far *s)
{
    if (*s || w > 0) {
        if (w > 0)
            label_width = w;
        else
            label_width = strlen(s) * 8;
        if (x == -1)
            x = (160.0 - label_width / 2.0) / 8.0;
        set_fill_colour(fg + 16);
        fill_rect(x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0, label_width + x * 8.0 + 1, fabs(y) * 8.0 + 10.0);
        set_draw_colour(ega_text_colours[fg] + 16);
        draw_rect(x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0, label_width + x * 8.0 + 1, fabs(y) * 8.0 + 10.0);
        if (*s) {
            set_text_opaque(0);
            if (current_font_id != 2)
                select_font(2);
            if (y < 0) {
                set_draw_colour(16);
                draw_text(x * 8.0 - 1, fabs(y) * 8.0 + 9.0, s);
            }
            set_draw_colour(abs(bg) + 16);
            draw_text(x * 8.0, fabs(y) * 8.0 + 10.0, s);
            set_text_opaque(1);
        }
    }
}

void draw_bar(float x, float y, int bg, int fg, int w, int len, char far *s)
{
    if (*s || w > 0) {
        if (w > 0)
            label_width = w;
        else
            label_width = strlen(s) * 8;
        if (x == -1)
            x = (160.0 - label_width / 2.0) / 8.0;
        set_fill_colour(fg + 16);
        fill_rect(x * 8.0 - 2.0, fabs(y) * 8.0 - 5.0, len + x * 8.0 + 1, fabs(y) * 8.0 + 10.0);
        if (*s) {
            set_text_opaque(0);
            if (current_font_id != 2)
                select_font(2);
            if (y < 0) {
                set_draw_colour(16);
                draw_text(x * 8.0 - 1, fabs(y) * 8.0 + 9.0, s);
            }
            set_draw_colour(abs(bg) + 16);
            draw_text(x * 8.0, fabs(y) * 8.0 + 10.0, s);
            set_text_opaque(1);
        }
    }
}

void draw_team_label_small(float x, float y, int team)
{
    char buf[160];

    sprintf(buf, " %s ", upper_case(team_names[team]));
    draw_label_font1(x, y, -(team_colours[team] / 16), team_colours[team] % 16, 0, buf);
}

void draw_team_label(float x, float y, int team)
{
    char buf[160];

    sprintf(buf, " %s ", (char far *)team_names[team]);
    draw_text_box(x, y, -(team_colours[team] / 16), team_colours[team] % 16, 0, buf);
}

void update_players_weekly(void)
{
    char title[80];
    char text[180];

    for (cur_player = 0; cur_player <= 0x6a3; cur_player++) {
        if (is_human_team(player_attrs[18][cur_player]) == 0) {
            stats_division = player_attrs[18][cur_player] / 20 + 1;
            if (player_flags[20][cur_player] == 0) {
                if (player_attrs[23][cur_player] == 1 && stats_division < 3 && player_attrs[20][cur_player] == 0)
                    player_flags[20][cur_player] = -1;
            } else if ((player_attrs[23][cur_player] > 1 || stats_division > 2) && player_flags[17][cur_player] == 0)
                player_flags[20][cur_player] = 0;
        }
        if (player_attrs[20][cur_player] > 0 && player_attrs[19][cur_player] < 20)
            player_attrs[21][cur_player] = max_int(player_attrs[21][cur_player] - 5 - random_below(6),
                                                       player_flags[14][cur_player] ? 55 : 70);
        if (player_attrs[21][cur_player] < 100)
            if (player_attrs[20][cur_player] == 0 ||
                (player_attrs[20][cur_player] > 0 && player_attrs[19][cur_player] == 20)) {
                player_attrs[21][cur_player] += (100 - player_attrs[21][cur_player]) / 2 + random_below(5);
                if (player_attrs[21][cur_player] > 100)
                    player_attrs[21][cur_player] = 100;
                if (is_human_team(player_attrs[18][cur_player]) == 0 && player_is_picked[cur_player] == 0 &&
                    player_attrs[20][cur_player] == 0 && player_attrs[21][cur_player] > 90 && in_season_end == 0)
                    try_into_match_squad(cur_player);
            }
        if (player_attrs[20][cur_player] > 0 && player_attrs[19][cur_player] < 20) {
            if (player_flags[14][cur_player] == 0) {
                d_5d9c_9c31 = d_2f3c_8353[player_attrs[18][cur_player]];
                d_5d9c_9db7 = max_int(random_below(d_2f3c_65b7[d_5d9c_9c31]),
                                          random_below(d_2f3c_65b7[d_5d9c_9c31])) / 10;
                d_5d9c_9ecf = random_below(15) < d_5d9c_9db7 ? 2 : 1;
            } else
                d_5d9c_9ecf = random_below(3) > 0 ? 2 : 1;
            if (player_flags[17][cur_player]) {
                if (player_attrs[20][cur_player] > 6)
                    d_5d9c_9ecf = random_below(6) == 0;
                else
                    d_5d9c_9ecf = 0;
            }
            player_attrs[20][cur_player] = max_int(player_attrs[20][cur_player] - d_5d9c_9ecf, 0);
            if (player_attrs[20][cur_player] == 0)
                player_returns(cur_player);
        } else if (player_attrs[19][cur_player] > 20 && fit_outfield_players(player_attrs[18][cur_player]) > 13 &&
                   current_week > 4)
            put_player_out(cur_player, 20, player_attrs[19][cur_player] - 20);
        if (in_season_end == 0) {
            player_stats[11][cur_player] -= is_transfer_listed[cur_player] && current_week < 67;
            if (player_wants_to_leave(cur_player)) {
                player_stats[14][cur_player] += is_transfer_listed[cur_player] == 0 ? 1 : 0;
                player_stats[15][cur_player] = 0;
            } else {
                player_stats[15][cur_player] += is_transfer_listed[cur_player] ? 1 : 0;
                player_stats[14][cur_player] = 0;
            }
            d_5d9c_9c35 = contract_expiry[cur_player];
            if (d_5d9c_9c35 / 100 == season && contract_period_of_week(current_week) == d_5d9c_9c35 % 100) {
                if (is_human_team(player_attrs[18][cur_player])) {
                    sprintf(title, "%s squad news", (char far *)team_names[player_attrs[18][cur_player]]);
                    sprintf(text, "%s's contract expired this week - he is now a free agent.",
                            player_full_name(cur_player));
                    news_message_box(player_attrs[18][cur_player], title, text);
                }
                contract_expiry[cur_player] = 0;
                player_flags[9][cur_player] = 0;
                player_stats[19][cur_player] = 0;
            }
            if (player_flags[16][cur_player] && random_below(10) == 0)
                player_flags[16][cur_player] = 0;
        }
    }
}
