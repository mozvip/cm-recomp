/* @at 992a:0000 */
/* @data 5d9c:7c6a */
/* @module */

/* Overlay 8: the game's services: printed league tables, club reports and match stats,
 * player ratings, form and the weekly update, performances of the week, fines, bans,
 * injuries, the medical specialist and rehabilitation, takeovers and the board's
 * warnings, international squads, loading and saving the game and the hall of fame, the
 * title picture and palette, the competition tests the other overlays call
 * (is_fa_cup_week...), records and new players. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <mem.h>
#include <bios.h>
#include <fcntl.h>
#include <io.h>
#include <dos.h>
#include <math.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void print_league_table(int division);
void print_newlines(int n);
void show_message_box(char far *s);
void replace_in_match_squad(int player);
void try_into_match_squad(int player);
void replace_in_lineups(int player);
void try_into_lineups(int player);
int match_squad_slot(int player);
int lineup_slot(int player);
float selection_bias(int player, int team);
int position_rating(int pos, int player, int style);
int selection_score(int player, int team, unsigned char pos, char second);
int position_rating_norm(unsigned char pos);
void process_match_discipline(void);
void show_performance_of_week(void);
void fine_dirty_clubs(void);
void training_injuries_and_form(int n);
void injure_player(int player);
void put_player_out(int player, int injury, int weeks);
void player_returns(int player);
void offer_surgery(int player);
void offer_rehabilitation(int player);
void vary_player_form(int player);
void weekly_club_finances(void);
void pick_international_squads(void);
char far *home_nation_name(int nation);
void pack_flag_bits(unsigned char far *src, unsigned char far *dst, unsigned n);
void unpack_flag_bits(unsigned char far *dst, unsigned char far *src, unsigned n);
void load_game(void);
void save_game(void);
void load_hall_of_fame(void);
void save_hall_of_fame(void);
void load_title_picture(char reset_palette);
void set_picture_palette(void);
void show_status_box(char far *s);
char is_league_week(int week);
char is_fa_cup_round_week(int week);
char is_fa_cup_week(int week);
char is_rumbelows_week(int week);
char is_zenith_week(int week);
char is_domark_week(int week);
char is_uefa_week(int week);
char is_cup_winners_week(int week);
char is_european_cup_week(int week);
char is_uefa_match(int week, int match);
char is_cup_winners_match(int week, int match);
char is_european_cup_match(int week, int match);
char is_rumbelows_match(int week, int match);
char is_zenith_match(int week, int match);
char is_domark_match(int week, int match);
char is_first_leg_week(int week);
char is_second_leg_week(int week);
char is_minor_cup_week(int week);
char is_wembley_match(int week, int match);
char is_cup_replay_week(int week);
char is_neutral_venue_match(int week, int match);
char is_playoff_week(int week);
int domark_group_of_match(int week, int match);
unsigned char cup_crowd_percent(int week);
int league_crowd_bonus(int place, int round);
void swap_team_records(int team_a, int team_b);
void swap_teams_in_draws(int team_a, int team_b);
void enter_manager_name(int manager);
void print_string(char far *s);
void print_line(char far *s);
void print_match_stats(void);
void print_club_report(int team);
void save_hook_stub(void);
void load_hook_stub(void);

int contract_period_of_week(int x);
char is_human_team(int x);
char far *upper_case(char far *s);
char far *right_chars(char far *s, unsigned n);
char far *mid_chars(char far *s, unsigned i, unsigned n);
void swap_bytes(void far *a, void far *b, int n);
void far *vm_map(int handle, int page);
char is_table_divider_pos(int pos, int div);
void build_team_fixtures(int team, char far names[][94][20], unsigned char far *comp, unsigned char far *week);
long player_value(int p, int n);
long round_value_estimate(long v);
char far *format_fee(long amount);
char far *player_full_name(int player);
char far *player_short_name(int player);
char far *player_surname(int player);
char far *number_in_words(int player);
extern char near *team_names[];
extern long transfer_fee;
extern long team_long_value;
extern int d_5d9c_9bd5;
extern int d_5d9c_9d0b;
extern int d_5d9c_9d97;
extern int d_5d9c_9d99;
extern int d_5d9c_9d9b;
extern int attack_over;
extern int transfer_other_club;
extern int match_facts_record;
extern int home_midfield;
extern int fixture_week_index;
extern int button_style;
extern int fixture_count;
extern int d_5d9c_9f29;
extern int d_5d9c_9f69;
extern int loop_i;
extern int cur_player;
extern int loop_j;
extern int season;
extern int current_week;
extern char (far *transfer_history)[82][391];
extern char far *ems_window_ptr;
extern int table_marks_handle;
extern int transfer_history_handle;
extern char far d_1f3e_350e[];
extern char far transfer_fee_text[];
extern char far match_record[];
extern char far d_1f3e_49ee[];
extern unsigned char far record_player_ids[][13][2];
extern char far slot_goals[][13];
extern char far transfer_entry_text[];
extern char far award_rating_text[];
extern char far transfer_history_text[];
extern char far fixture_team_name[];
extern char far is_transfer_listed[];
extern char far player_moved_club[];
extern int far player_rating_total[];
extern int far player_old_club_rating[];
extern int far player_first_name_idx[];
extern int far player_surname_idx[];
extern unsigned char huge player_stats[][1702];
extern unsigned char huge player_attrs[][1702];
extern int far week_matchfax_base[];
extern unsigned char far league_table_rows[][20];
extern char far * far first_names[];
extern char far * far surnames[];
extern int far week_fixtures[][2][94];
void new_screen(char far *title);
void set_fill_colour(int c);
void fill_rect(int x1, int y1, int x2, int y2);
void set_draw_colour(int c);
void draw_rect(int x1, int y1, int x2, int y2);
void draw_text_font2(float x, float y, int colour, char far *s);
char can_play_position(int a, int b);
extern int stats_print_handle;
extern char far *stats_print_page;
extern int selected_team;
extern int d_5d9c_9f3d;
extern int d_5d9c_9eb7;
extern int d_5d9c_9e27;
extern int d_5d9c_9ee5;
extern int d_5d9c_9ee7;
extern int squad_level;
extern int d_5d9c_9d79;
extern int d_5d9c_9d7b;
extern int d_5d9c_9c43;
extern int d_5d9c_9c45;
extern int d_5d9c_9c47;
extern int d_5d9c_9c49;
extern int d_5d9c_9c4b;
extern int d_5d9c_9c4d;
extern int d_5d9c_9c4f;
extern int d_5d9c_9c51;
extern int d_5d9c_9c53;
extern int d_5d9c_9c55;
extern int d_5d9c_9c57;
extern int d_5d9c_9c59;
extern int d_5d9c_9c5b;
extern int d_5d9c_9c5d;
extern int d_5d9c_9c5f;
extern int d_5d9c_9c61;
extern int d_5d9c_9c63;
extern int d_5d9c_9c65;
extern int d_5d9c_9c67;
extern int d_5d9c_9c69;
extern int far squad_players[][26];
extern int far team_lineups[][2][12];
extern char far player_is_picked[];
extern char far player_flags[][0x6a6];
extern int far team_selection[][13];
extern unsigned char far team_tactics[][3][13];
extern int far team_manager[];
extern unsigned char far manager_style_formation[];
extern unsigned char far squad_size[];
int random_below(int n);
float random_fraction(void);
int max_int(int a, int b);
int min_int(int a, int b);
int fit_outfield_players(int x);
void player_fine_reaction(int player, char flag);
void news_message_box(int team, char far *title, char far *text);
extern int far d_2f3c_7ef3[];
extern int far position_rating_cache[];
extern unsigned char far staff_character[];
extern unsigned char far staff_skills[];
extern unsigned char far character_clash[][10];
extern int far d_5471_252c[][11][14];
extern char far sent_off_list[];
extern char far booked_list[];
extern char far injured_list[];
extern char far hat_trick_players[];
extern char far injury_context[];
extern char far d_1f3e_bfa2[];
extern char far in_cup_draw[][80];
extern int d_5d9c_9c41;
extern float d_5d9c_9a74;
extern int d_5d9c_9c3f;
extern int d_5d9c_9c3d;
extern int d_5d9c_9c3b;
extern int d_5d9c_9c39;
extern int d_5d9c_9c37;
extern int d_5d9c_9ca3;
extern int d_5d9c_9db5;
extern int d_5d9c_9d07;
extern int d_5d9c_9d4b;
char far *trim_spaces(char far *s);
float max_float(float a, float b);
void show_menu(int n, char far *title, char far *items);
void wait_menu_choice(int last);
char far *club_name(int x);
void draw_text_box(float x, float y, int bg, int fg, int w, char far *s);
void show_accounts(int team);
void print_screen_line(int line, char far *s);
void flash_message(char far *s);
char confirm_yes_no(void);
void wait_for_click(int a);
long transfer_budget(int team);
void player_details_screen(int player, int a, char b);
extern long fine_amount;
extern long insurance_cost;
extern char d_5d9c_9b27;
extern char d_5d9c_9b28;
extern char in_season_end;
extern char redo_menu;
extern char exit_chosen;
extern char menu_choice_done;
extern char in_preseason_setup;
extern unsigned char d_5d9c_9b94;
extern int d_5d9c_9c23;
extern int d_5d9c_9c25;
extern int d_5d9c_9c27;
extern int d_5d9c_9c29;
extern int d_5d9c_9c2b;
extern int d_5d9c_9c2d;
extern int d_5d9c_9c2f;
extern int d_5d9c_9c33;
extern int d_5d9c_9cbf;
extern int d_5d9c_9de7;
extern int d_5d9c_9de9;
extern int d_5d9c_9ecf;
extern int last_ranked_row;
extern int menu_choice;
extern long (far *accounts_table)[80];
extern int best_result_team;
extern int best_result_opponent;
extern int best_result_gf;
extern int best_result_ga;
extern int accounts_ems_handle;
extern char far best_result_desc[];
extern char far d_1f3e_2b23[];
extern char far surgeon_country[];
extern char far injury_duration_text[];
extern char far d_1f3e_3f40[];
extern int far last_match_info[][80];
extern char far * far injury_names[];
extern unsigned char far team_stats[][82];
float division_factor(int team);
long overdraft_limit(int team);
long insurance_premium(int player);
void manager_leaves_club(int club, int a);
char far *manager_name(int manager, char full);
extern char d_5d9c_9b25;
extern char d_5d9c_9b26;
extern long takeover_amount;
extern long d_5d9c_99e0;
extern long d_5d9c_99e4;
extern long d_5d9c_99e8;
extern int d_5d9c_9ba1;
extern int d_5d9c_9ba3;
extern int d_5d9c_9dbd;
extern int d_5d9c_9dd5;
extern char far is_insured[];
extern char far at_lilleshall[];
extern long far team_finances[][80];
extern int far player_wages[];
void message_box(char far *s);
extern int under_21_flag;
extern int d_5d9c_9d91;
extern int d_5d9c_9c21;
extern int d_5d9c_9f3b;
extern int d_5d9c_9c1f;
extern int d_5d9c_9c1d;
extern int d_5d9c_a342;
extern int d_5d9c_a340;
extern int national_squads_handle;
extern char d_5d9c_9b24;
extern unsigned char intl_squad_positions[];
extern int (far *d_5d9c_a006)[250];
extern int (far *d_5d9c_a002)[170];
extern int (far *intl_squads)[2][22];
extern char far intl_called_up[];
extern char far status_box_text[];
extern char far job_applicants[][101];
extern char far intl_under21[];
extern int far d_1f33_0000[];
extern float far age_value_factors[];
extern char far team_form[][82][5];
extern char far manager_names[][4][20];
extern char far picture_file[];
extern unsigned char far domark_group_stats[][8][5];
extern int far domark_groups[][5];
extern unsigned char far euro_group_stats[][2][4];
extern int far euro_cup_groups[][4];
extern long far manager_award_points[];
extern float far player_award_ratings[][4];
extern int far player_award_winners[][4];
extern unsigned char far cup_seeding[];
extern int far club_record_holders[][140];
extern unsigned char far club_records[][140];
extern int far penalty_winner[];
extern int far top_players_cache[4][3][2][30];
extern unsigned char far history_club_ids[];
extern int far shortlists[][16];
extern unsigned char far league_table[][20];
extern int far cup_entrants[][80];
extern int far manager_first_name_idx[];
extern unsigned char far manager_team[];
extern unsigned char far other_club_ratings[];
extern unsigned char far ground_coords[][140];
extern char near *nonleague_names_by_team[];
extern unsigned long random_seed;
extern char is_demo_game;
extern int match_counter;
extern int zenith_qualifier_count;
extern int human_manager_count;
extern int human_count;
extern int background_brightness;
extern int background_colour;
extern int domark_cup_next_week;
extern int zenith_cup_next_week;
extern int league_round;
extern int european_cup_next_week;
extern int cup_winners_next_week;
extern int uefa_cup_next_week;
extern int fa_cup_next_week;
extern int league_cup_next_week;
extern int euro_cup_through;
extern int cwc_through;
extern int uefa_cup_through;
extern int domark_through;
extern int zenith_cup_through;
extern int league_cup_through;
extern int fa_cup_through;
extern char (far *d_5d9c_9fb2)[151];
extern char (far *fined_this_week)[151];
extern char (far *talks_refused_this_week)[151];
extern int (far *past_winners)[16][8];
extern int manager_award_winners[];
extern float far *best_avg_rating_records;
extern long (far *club_long_records)[140];
extern char d_5d9c_a01e[];
extern char d_5d9c_a01f;
extern char d_5d9c_a020;
extern char d_5d9c_a021;
extern unsigned char cwc_english_entrant[];
extern char euro_english_entrant;
extern char d_5d9c_a024;
extern char d_5d9c_a025;
extern char far *first_leg_scores;
extern long far *manager_points_ptr;
extern long far *asking_prices;
extern int d_5d9c_a064;
extern int d_5d9c_a066;
extern int d_5d9c_a068;
extern int d_5d9c_a06a;
extern int d_5d9c_a330;
extern int d_5d9c_a332;
extern int refused_talks_handle;
extern int past_winners_handle;
extern int best_avg_rating_handle;
extern int club_long_records_handle;
extern int manager_points_handle;
extern int asking_prices_handle;
void read_line(FILE *fp, char far *buf);
extern char far *hall_of_fame_ptr;
extern int d_5d9c_9fad;
extern long far hall_of_fame_scores[];
extern int hall_of_fame_handle;
void write_line(FILE *fp, char far *s);
void planar_to_chunky(char far *src);
void unpack_ilbm(char far *src, char far *dst);
void show_ilbm(char far *buf, unsigned size);
extern char far loaded_picture[];
extern char video_mode;
extern int screen_vm_block;
extern char far *screen_buffer;
extern char d_5d9c_9b1a;
extern char d_5d9c_9b23;
extern int far picture_palette[];
extern int d_5d9c_9e67;
extern int d_5d9c_9dd7;
void prompt_text_input(float x, int w, char far *prompt);
extern int d_5d9c_9c1b;
extern unsigned char match_interest;
extern int week_match_count;
extern char far input_text[];


void print_league_table(int division)
{
    char num[20];
    char line[320];

    print_string("______________________________________________________________________________\r\n");
    print_newlines(2);
    sprintf(line, "    WEEK %d/SEASON %d\r\n", contract_period_of_week(current_week), season);
    print_string(line);
    print_newlines(2);
    sprintf(line, "                                  DIVISION %s\r", upper_case(number_in_words(division + 1)));
    print_string(line);
    print_newlines(2);
    print_string("                         PL   W   D   L   F   A   W   D   L   F   A  PT\r\n");
    print_newlines(2);
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 19; d_5d9c_9f69++) {
        strcpy(fixture_team_name, team_names[league_table_rows[0][d_5d9c_9f69]]);
        fixture_team_name[14] = 0;
        ems_window_ptr = vm_map(table_marks_handle, 0);
        sprintf(line, "       %s %-14.14s", ems_window_ptr + d_5d9c_9f69 * 2, fixture_team_name);
        for (loop_j = 1; loop_j <= 12; loop_j++) {
            sprintf(num, "%4d", league_table_rows[loop_j][d_5d9c_9f69]);
            strcat(line, num);
        }
        print_line(line);
        if (is_table_divider_pos(d_5d9c_9f69, division))
            print_string("         --------------------------------------------------------------\r\n");
    }
    _bios_printer(0, 0, 12);
}

void print_club_report(int team)
{
    int count;
    int i;
    int col;
    char sep[10];
    unsigned char far *pid;
    char home;
    int offset;
    FILE *fp;
    long gate;
    char names[4][94][20];
    char line[320];
    char scorers[80];
    unsigned char comp[94];
    unsigned char week[94];
    int players[100];
    char buf[300];

    count = 0;
    for (cur_player = 0; cur_player <= 1699; cur_player++)
        if (player_attrs[18][cur_player] == team
            || player_moved_club[cur_player] && player_stats[10][cur_player] == team)
            players[count++] = cur_player;
    for (loop_i = 0; count - 2 >= loop_i; loop_i++)
        for (loop_j = loop_i + 1; count - 1 >= loop_j; loop_j++)
            if (strcmp(player_surname(players[loop_i]), player_surname(players[loop_j])) > 0)
                swap_bytes((void *)&players[loop_i], (void *)&players[loop_j], 2);
    print_line("______________________________________________________________________________");
    print_newlines(2);
    sprintf(line, "    %s PLAYERS SEASON %d", upper_case(team_names[team]), season);
    print_line(line);
    print_newlines(2);
    print_line("         PLAYER                  APPS   GLS    AV R     VALUE");
    print_newlines(2);
    for (loop_i = 0; count - 1 >= loop_i; loop_i++) {
        cur_player = players[loop_i];
        sprintf(buf, "%s, %s", surnames[player_surname_idx[cur_player]], first_names[player_first_name_idx[cur_player]]);
        if (player_attrs[18][cur_player] == team) {
            d_5d9c_9d0b = player_stats[0][cur_player] - player_stats[12][cur_player];
            d_5d9c_9d9b = player_stats[1][cur_player] - player_stats[13][cur_player];
            d_5d9c_9bd5 = player_rating_total[cur_player] - player_old_club_rating[cur_player];
        } else {
            d_5d9c_9d0b = player_stats[12][cur_player];
            d_5d9c_9d9b = player_stats[13][cur_player];
            d_5d9c_9bd5 = player_old_club_rating[cur_player];
        }
        sprintf(line, "%-26.26s%-6d%-6d", buf, d_5d9c_9d0b, d_5d9c_9d9b);
        sprintf(buf, "%s%6d", line, d_5d9c_9d9b);
        if (d_5d9c_9d0b > 0)
            sprintf(award_rating_text, "%3.2f", (float)d_5d9c_9bd5 / d_5d9c_9d0b * 100 / 100);
        else
            strcpy(award_rating_text, "----");
        sprintf(buf, "%s%-9.9s", line, award_rating_text);
        team_long_value = player_value(cur_player, player_attrs[18][cur_player]);
        if (is_transfer_listed[cur_player] == 0 && is_human_team(player_attrs[18][cur_player]) == 0)
            team_long_value = round_value_estimate(team_long_value);
        strcpy(d_1f3e_350e, format_fee(team_long_value));
        strcat(buf, d_1f3e_350e);
        print_string("         ");
        print_line(buf);
    }
    print_newlines(2);
    print_line("         TRANSFERS");
    print_newlines(1);
    transfer_history = vm_map(transfer_history_handle, 0);
    for (i = 5; i >= 4; i--) {
        if (i == 5)
            print_line("         INCOMING                FROM                   FEE");
        else
            print_line("         OUTGOING                TO                     FEE");
        print_newlines(1);
        strcpy(transfer_history_text, transfer_history[i - 4][team]);
        if (strlen(transfer_history_text) > 0) {
            for (offset = 1; offset <= strlen(transfer_history_text); offset += 13) {
                strcpy(transfer_entry_text, mid_chars(transfer_history_text, offset, 13));
                strcpy(line, transfer_entry_text);
                line[4] = 0;
                cur_player = atol(line);
                transfer_fee = atol(mid_chars(transfer_entry_text, 5, 7));
                if (transfer_fee > 0)
                    sprintf(transfer_fee_text, "%ld", transfer_fee);
                else
                    strcpy(transfer_fee_text, "FREE");
                transfer_other_club = atol(right_chars(transfer_entry_text, 2));
                sprintf(buf, "         %-24.24s%-23.23s%s", player_full_name(cur_player),
                        (char far *)team_names[transfer_other_club], transfer_fee_text);
                print_line(buf);
            }
        } else
            print_line("         None");
        print_newlines(1);
    }
    _bios_printer(0, 0, 12);
    print_line("______________________________________________________________________________");
    print_newlines(2);
    sprintf("%s FIXTURES/RESULTS SEASON &d", upper_case(team_names[team]), season);
    print_newlines(2);
    print_line("COMP  OPPONENTS    VEN SCORE GATE   SCORERS");
    print_newlines(2);
    build_team_fixtures(team, names, comp, week);
    for (button_style = 0; fixture_count - 1 >= button_style; button_style++) {
        strcpy(line, names[0][button_style] + 2);
        sprintf(buf, " %s   %-13.13s(%s)  ", upper_case(line), names[1][button_style], names[2][button_style]);
        print_string(buf);
        if (week[button_style] < current_week) {
            fixture_week_index = week[button_style] - 1;
            home_midfield = comp[fixture_week_index];
            match_facts_record = week_matchfax_base[fixture_week_index] + home_midfield;
            home = week_fixtures[home_midfield][0][fixture_week_index] / 32 == team;
            fp = fopen("matchfax", "rb");
            fseek(fp, (long)(match_facts_record - 1) * 149, 0);
            fread(match_record, 1, 149, fp);
            fclose(fp);
            if (match_record[4] == 'Z' && match_record[5] == 'Z') {
                d_5d9c_9d99 = match_record[2];
                d_5d9c_9d97 = match_record[3];
            } else {
                d_5d9c_9d99 = match_record[4];
                d_5d9c_9d97 = match_record[5];
            }
            if (home == 0)
                swap_bytes(&d_5d9c_9d99, &d_5d9c_9d97, 2);
            sprintf(line, "%d-%d", d_5d9c_9d99, d_5d9c_9d97);
            memcpy(&gate, d_1f3e_49ee, 4);
            sprintf(buf, "%-5.5s%-7ld", line, gate);
            print_string(buf);
            if (d_5d9c_9d99 > 0) {
                d_5d9c_9f29 = 0;
                col = 38;
                for (loop_j = 0; loop_j <= 12; loop_j++) {
                    if (home) {
                        pid = record_player_ids[0][loop_j];
                        cur_player = pid[0] << 8 | pid[1];
                        attack_over = slot_goals[0][loop_j];
                    } else {
                        pid = record_player_ids[1][loop_j];
                        cur_player = pid[0] << 8 | pid[1];
                        attack_over = slot_goals[1][loop_j];
                    }
                    if (attack_over > 0) {
                        if (d_5d9c_9f29 > 0)
                            strcpy(sep, ",");
                        else
                            strcpy(sep, "");
                        strcpy(scorers, sep);
                        strcat(scorers, player_short_name(cur_player));
                        if (attack_over > 1) {
                            sprintf(line, " %d", attack_over);
                            strcat(scorers, line);
                        }
                        if (strlen(scorers) > col) {
                            if (sep[0]) {
                                print_line(sep);
                                strcpy(scorers, scorers + 1);
                            } else
                                print_newlines(1);
                            print_string("                                    ");
                            col = 38;
                        }
                        print_string(scorers);
                        col = col - strlen(scorers);
                        d_5d9c_9f29++;
                    }
                }
            }
        }
        print_newlines(1);
    }
    _bios_printer(0, 0, 12);
}

/* print the match stats to the printer */
void print_match_stats(void)
{
    char buf[320];
    unsigned i;

    print_string("______________________________________________________________________________\r\n");
    print_newlines(2);
    sprintf(buf, "MATCH STATS SEASON %d", season);
    print_string(buf);
    print_newlines(2);
    stats_print_page = vm_map(stats_print_handle, 0);
    for (i = 0; i <= 19; i++) {
        sprintf(buf, "         %-31.31s%s", stats_print_page + i * 80, stats_print_page + i * 80 + 1600);
        print_line(buf);
        switch (i) {
        case 0:
        case 1:
        case 14:
        case 18:
            print_newlines(1);
            break;
        case 12:
            sprintf(buf, "         ---------------------------    ---------------------------");
            print_line(buf);
            break;
        }
    }
    _bios_printer(0, 0, 12);
}

/* print n new lines */
void print_newlines(int n)
{
    int i;

    for (i = 1; i <= n; i++)
        print_string("\r\n");
}

/* print a string */
void print_string(char far *s)
{
    while (*s != 0)
        _bios_printer(0, 0, *s++);
}

/* print a line */
void print_line(char far *s)
{
    print_string(s);
    print_newlines(1);
}

/* a message box */
void show_message_box(char far *s)
{
    new_screen("");
    set_fill_colour(16);
    fill_rect(20, 121, 308, 89);
    set_fill_colour(31);
    fill_rect(16, 117, 304, 85);
    set_draw_colour(19);
    draw_rect(16, 117, 304, 85);
    draw_text_font2(-1.0, 12.5, 1, s);
}

void replace_in_match_squad(int player)
{
    d_5d9c_9c65 = player;
    if (player_is_picked[d_5d9c_9c65] != 0) {
        selected_team = player_attrs[18][d_5d9c_9c65];
        d_5d9c_9c61 = d_5d9c_9c63 = match_squad_slot(d_5d9c_9c65);
        player_is_picked[d_5d9c_9c65] = 0;
    again:
        team_selection[selected_team][d_5d9c_9c61] = 1700;
        d_5d9c_9c5f = -5000;
        d_5d9c_9c5d = -1;
        d_5d9c_9c5b = -1;
        for (d_5d9c_9f3d = 0; d_5d9c_9f3d <= squad_size[selected_team] - 1; d_5d9c_9f3d++) {
            d_5d9c_9c59 = squad_players[selected_team][d_5d9c_9f3d];
            if (player_attrs[20][d_5d9c_9c59] == 0) {
                d_5d9c_9eb7 = team_tactics[selected_team][0][d_5d9c_9c61];
                d_5d9c_9c57 = position_rating(d_5d9c_9eb7, d_5d9c_9c59, manager_style_formation[team_manager[selected_team]] / 16);
                d_5d9c_9c57 = (long)d_5d9c_9c57 * player_attrs[15][d_5d9c_9c59]
                              * selection_bias(d_5d9c_9c59, selected_team) / 17000.0;
                if (d_5d9c_9c57 > d_5d9c_9c5f) {
                    if (player_is_picked[d_5d9c_9c59] != 0) {
                        d_5d9c_9c63 = match_squad_slot(d_5d9c_9c59);
                        if ((d_5d9c_9c61 < 11 && d_5d9c_9c63 < 11) || (d_5d9c_9c61 > 10 && d_5d9c_9c63 > 10)
                            || (d_5d9c_9c63 > 10 && d_5d9c_9c61 < 11)) {
                            d_5d9c_9e27 = position_rating(team_tactics[selected_team][0][d_5d9c_9c63], d_5d9c_9c59,
                                                      manager_style_formation[team_manager[selected_team]] / 16);
                            d_5d9c_9e27 = (long)d_5d9c_9e27 * player_attrs[15][d_5d9c_9c59]
                                          * selection_bias(d_5d9c_9c59, selected_team) / 17000.0;
                            if (d_5d9c_9c57 > d_5d9c_9e27 || (d_5d9c_9c63 > 10 && d_5d9c_9c61 < 11)) {
                                d_5d9c_9c5f = d_5d9c_9c57;
                                d_5d9c_9c5d = d_5d9c_9c59;
                                d_5d9c_9c5b = d_5d9c_9c63;
                            }
                        }
                    }
                    if (player_is_picked[d_5d9c_9c59] == 0) {
                        d_5d9c_9c5f = d_5d9c_9c57;
                        d_5d9c_9c5d = d_5d9c_9c59;
                        d_5d9c_9c5b = -1;
                    }
                }
            }
        }
        d_5d9c_9c65 = d_5d9c_9c5d;
        team_selection[selected_team][d_5d9c_9c61] = d_5d9c_9c65;
        player_is_picked[d_5d9c_9c65] = -1;
        if (d_5d9c_9c5b > -1) {
            d_5d9c_9c61 = d_5d9c_9c5b;
            goto again;
        }
    }
}

void try_into_match_squad(int player)
{
    if (player_is_picked[player] == 0) {
        selected_team = player_attrs[18][player];
    again:
        d_5d9c_9c55 = -1;
        d_5d9c_9c53 = -5000;
        if (player_flags[0][player] != 0) {
            d_5d9c_9ee7 = 0;
            d_5d9c_9ee5 = 0;
        } else {
            d_5d9c_9ee7 = 1;
            d_5d9c_9ee5 = 12;
        }
        for (loop_j = d_5d9c_9ee7; loop_j <= d_5d9c_9ee5; loop_j++) {
            d_5d9c_9c69 = team_selection[selected_team][loop_j];
            d_5d9c_9d7b = position_rating(team_tactics[selected_team][0][loop_j], d_5d9c_9c69,
                                      manager_style_formation[team_manager[selected_team]] / 16);
            d_5d9c_9d7b = (long)d_5d9c_9d7b * player_attrs[15][d_5d9c_9c69]
                          * selection_bias(d_5d9c_9c69, selected_team) / 17000.0;
            d_5d9c_9d79 = position_rating(team_tactics[selected_team][0][loop_j], player,
                                      manager_style_formation[team_manager[selected_team]] / 16);
            d_5d9c_9d79 = (long)d_5d9c_9d79 * player_attrs[15][player]
                          * selection_bias(player, selected_team) / 17000.0;
            if (d_5d9c_9d79 > d_5d9c_9d7b && d_5d9c_9d79 - d_5d9c_9d7b > d_5d9c_9c53
                && (loop_j < 11 || (loop_j > 10 && d_5d9c_9c55 == -1))) {
                d_5d9c_9c53 = d_5d9c_9d79 - d_5d9c_9d7b;
                d_5d9c_9c55 = loop_j;
            }
        }
        if (d_5d9c_9c55 != -1) {
            player_is_picked[player] = -1;
            player_is_picked[team_selection[selected_team][d_5d9c_9c55]] = 0;
            d_5d9c_9c51 = team_selection[selected_team][d_5d9c_9c55];
            team_selection[selected_team][d_5d9c_9c55] = player;
            player = d_5d9c_9c51;
            if (d_5d9c_9c55 < 12)
                goto again;
        }
    }
}

void replace_in_lineups(int player)
{
    d_5d9c_9c65 = player;
    if (player_attrs[23][d_5d9c_9c65] != 3) {
        selected_team = player_attrs[18][d_5d9c_9c65];
        d_5d9c_9c61 = d_5d9c_9c63 = lineup_slot(d_5d9c_9c65);
        d_5d9c_9c4f = d_5d9c_9c4d;
        player_attrs[23][d_5d9c_9c65] = 3;
    again:
        d_5d9c_9c67 = 1700;
        team_lineups[selected_team][d_5d9c_9c4f][d_5d9c_9c61] = d_5d9c_9c67;
        d_5d9c_9c5f = -5000;
        d_5d9c_9c5d = -1;
        for (d_5d9c_9f3d = 0; d_5d9c_9f3d <= squad_size[selected_team] - 1; d_5d9c_9f3d++) {
            d_5d9c_9c59 = squad_players[selected_team][d_5d9c_9f3d];
            d_5d9c_9eb7 = team_tactics[selected_team][0][d_5d9c_9c61];
            if (can_play_position(d_5d9c_9c59, d_5d9c_9eb7)) {
                d_5d9c_9c57 = selection_score(d_5d9c_9c59, selected_team, d_5d9c_9eb7, d_5d9c_9c4f == 1 ? 1 : 0)
                              * selection_bias(d_5d9c_9c59, selected_team);
                if (d_5d9c_9c57 > d_5d9c_9c5f) {
                    if ((d_5d9c_9c4f == 0 && player_attrs[23][d_5d9c_9c59] < 3)
                        || (d_5d9c_9c4f == 1 && player_attrs[23][d_5d9c_9c59] == 2)) {
                        d_5d9c_9c63 = lineup_slot(d_5d9c_9c59);
                        d_5d9c_9e27 = selection_score(d_5d9c_9c59, selected_team, team_tactics[selected_team][0][d_5d9c_9c63],
                                                  d_5d9c_9c4f == 1 ? 1 : 0)
                                      * selection_bias(d_5d9c_9c59, selected_team);
                        if (d_5d9c_9c57 > d_5d9c_9e27 || (d_5d9c_9c4f == 0 && d_5d9c_9c4d == 1)) {
                            d_5d9c_9c5f = d_5d9c_9c57;
                            d_5d9c_9c5d = d_5d9c_9c59;
                            d_5d9c_9c4b = d_5d9c_9c63;
                            d_5d9c_9c49 = d_5d9c_9c4d;
                        }
                    }
                }
                if (d_5d9c_9c57 > d_5d9c_9c5f && player_attrs[23][d_5d9c_9c59] == 3) {
                    d_5d9c_9c5f = d_5d9c_9c57;
                    d_5d9c_9c5d = d_5d9c_9c59;
                    d_5d9c_9c4b = -1;
                    d_5d9c_9c49 = -1;
                }
            }
        }
        if (d_5d9c_9c5d > -1 && d_5d9c_9c5d < 1700) {
            d_5d9c_9c59 = d_5d9c_9c5d;
            team_lineups[selected_team][d_5d9c_9c4f][d_5d9c_9c61] = d_5d9c_9c59;
            player_attrs[23][d_5d9c_9c59] = d_5d9c_9c4f + 1;
            if (d_5d9c_9c4b > -1) {
                d_5d9c_9c61 = d_5d9c_9c4b;
                d_5d9c_9c4f = d_5d9c_9c49;
                goto again;
            }
        } else {
            d_5d9c_9c67 = 1700;
            team_lineups[selected_team][d_5d9c_9c4f][d_5d9c_9c61] = d_5d9c_9c67;
        }
    }
}

void try_into_lineups(int player)
{
    d_5d9c_9c65 = player;
    if (player_attrs[23][d_5d9c_9c65] != 1) {
        squad_level = 0;
        selected_team = player_attrs[18][d_5d9c_9c65];
    again:
        d_5d9c_9c63 = lineup_slot(d_5d9c_9c65);
        if (d_5d9c_9c4d > -1) {
            d_5d9c_9c67 = 1700;
            team_lineups[selected_team][d_5d9c_9c4d][d_5d9c_9c63] = d_5d9c_9c67;
        }
        player_attrs[23][d_5d9c_9c65] = 3;
        d_5d9c_9c47 = -1;
        d_5d9c_9c5f = -5000;
        if (player_flags[0][d_5d9c_9c65] != 0) {
            d_5d9c_9ee7 = 0;
            d_5d9c_9ee5 = 0;
        } else {
            d_5d9c_9ee7 = 1;
            d_5d9c_9ee5 = 10;
        }
        for (loop_j = d_5d9c_9ee7; loop_j <= d_5d9c_9ee5; loop_j++) {
            if (can_play_position(d_5d9c_9c65, team_tactics[selected_team][0][loop_j])) {
                d_5d9c_9c69 = team_lineups[selected_team][squad_level][loop_j];
                d_5d9c_9d7b = selection_score(d_5d9c_9c69, selected_team, team_tactics[selected_team][0][loop_j],
                                          squad_level == 1 ? 1 : 0)
                              * selection_bias(d_5d9c_9c69, selected_team);
                d_5d9c_9d79 = selection_score(d_5d9c_9c65, selected_team, team_tactics[selected_team][0][loop_j],
                                          squad_level == 1 ? 1 : 0)
                              * selection_bias(d_5d9c_9c65, selected_team);
                if (d_5d9c_9d79 > d_5d9c_9d7b && d_5d9c_9d79 > d_5d9c_9c5f) {
                    d_5d9c_9c5f = d_5d9c_9d79;
                    d_5d9c_9c47 = loop_j;
                }
            }
        }
        if (d_5d9c_9c47 == -1) {
            if (squad_level == 0) {
                squad_level = 1;
                goto again;
            }
        } else {
            player_attrs[23][d_5d9c_9c65] = squad_level + 1;
            player_attrs[23][team_lineups[selected_team][squad_level][d_5d9c_9c47]] = 3;
            d_5d9c_9c51 = team_lineups[selected_team][squad_level][d_5d9c_9c47];
            team_lineups[selected_team][squad_level][d_5d9c_9c47] = d_5d9c_9c65;
            d_5d9c_9c65 = d_5d9c_9c51;
            if (d_5d9c_9c65 > -1 && d_5d9c_9c65 < 1700) {
                squad_level = 0;
                goto again;
            }
        }
        for (squad_level = 0; squad_level <= 1; squad_level++) {
            for (loop_j = 0; loop_j <= 10; loop_j++) {
                if (team_lineups[selected_team][squad_level][loop_j] == 1700) {
                    d_5d9c_9c5f = -5000;
                    d_5d9c_9c45 = 1700;
                    for (d_5d9c_9f3d = 0; d_5d9c_9f3d <= squad_size[selected_team] - 1; d_5d9c_9f3d++) {
                        d_5d9c_9c43 = squad_players[selected_team][d_5d9c_9f3d];
                        if (can_play_position(d_5d9c_9c43, team_tactics[selected_team][0][loop_j])
                            && player_attrs[23][d_5d9c_9c43] == 3) {
                            d_5d9c_9e27 = selection_score(d_5d9c_9c43, selected_team,
                                                      team_tactics[selected_team][0][loop_j], squad_level == 1 ? 1 : 0)
                                          * selection_bias(d_5d9c_9c43, selected_team);
                            if (d_5d9c_9e27 > d_5d9c_9c5f) {
                                d_5d9c_9c5f = d_5d9c_9e27;
                                d_5d9c_9c45 = d_5d9c_9c43;
                            }
                        }
                    }
                    if (d_5d9c_9c45 < 1700) {
                        team_lineups[selected_team][squad_level][loop_j] = d_5d9c_9c45;
                        player_attrs[23][d_5d9c_9c45] = squad_level + 1;
                    }
                }
            }
        }
    }
}

int match_squad_slot(int player)
{
    d_5d9c_9c63 = -1;
    for (d_5d9c_9c41 = 0; d_5d9c_9c41 <= 12; d_5d9c_9c41++) {
        if (team_selection[player_attrs[18][player]][d_5d9c_9c41] == player) {
            d_5d9c_9c63 = d_5d9c_9c41;
            d_5d9c_9c41 = 12;
        }
    }
    return d_5d9c_9c63;
}

int lineup_slot(int player)
{
    d_5d9c_9c63 = -1;
    d_5d9c_9c4d = -1;
    for (d_5d9c_9c41 = 0; d_5d9c_9c41 <= 10; d_5d9c_9c41++) {
        if (team_lineups[player_attrs[18][player]][0][d_5d9c_9c41] == player) {
            d_5d9c_9c63 = d_5d9c_9c41;
            d_5d9c_9c4d = 0;
            d_5d9c_9c41 = 10;
        } else if (team_lineups[player_attrs[18][player]][1][d_5d9c_9c41] == player) {
            d_5d9c_9c63 = d_5d9c_9c41;
            d_5d9c_9c4d = 1;
            d_5d9c_9c41 = 10;
        }
    }
    return d_5d9c_9c63;
}

float selection_bias(int player, int team)
{
    d_5d9c_9a74 = 1 - (character_clash[staff_character[team_manager[team]]][player_stats[17][player]] - 5) * 0.05;
    if (random_below(200) > staff_skills[team_manager[team]])
        d_5d9c_9a74 += random_fraction() * 0.25 - random_fraction() * 0.25;
    if (random_below(200) < staff_skills[team_manager[team]])
        d_5d9c_9a74 += player_attrs[12][player] / 100.0;
    return d_5d9c_9a74;
}

int position_rating(int pos, int player, int style)
{
    d_5d9c_9c3f = player_stats[16][player] / 16;
    d_5d9c_9c3d = player_stats[16][player] % 16;
    if (pos != d_5d9c_9c3f || style != d_5d9c_9c3d) {
        d_5d9c_9c3b = player_flags[1][player] ? d_5471_252c[style][pos][0] * 2 : 0;
        d_5d9c_9c3b += player_flags[2][player] ? d_5471_252c[style][pos][1] * 2 : 0;
        d_5d9c_9c3b += player_flags[3][player] ? d_5471_252c[style][pos][2] * 2 : 0;
        d_5d9c_9c3b = player_attrs[3][player] / 10.0 * d_5471_252c[style][pos][4] + d_5d9c_9c3b;
        d_5d9c_9c3b = player_attrs[1][player] / 10.0 * d_5471_252c[style][pos][6] + d_5d9c_9c3b;
        d_5d9c_9c3b = player_attrs[7][player] / 10.0 * d_5471_252c[style][pos][8] + d_5d9c_9c3b;
        d_5d9c_9c3b += player_flags[4][player] ? d_5471_252c[style][pos][10] * 2 : 0;
        d_5d9c_9c3b += player_flags[6][player] ? d_5471_252c[style][pos][12] * 2 : 0;
        d_5d9c_9c3b = player_attrs[4][player] / 10.0 * d_5471_252c[style][pos][3] + d_5d9c_9c3b;
        d_5d9c_9c3b = player_attrs[2][player] / 10.0 * d_5471_252c[style][pos][5] + d_5d9c_9c3b;
        d_5d9c_9c3b = player_attrs[6][player] / 10.0 * d_5471_252c[style][pos][7] + d_5d9c_9c3b;
        d_5d9c_9c3b = player_attrs[5][player] / 10.0 * d_5471_252c[style][pos][9] + d_5d9c_9c3b;
        d_5d9c_9c3b += player_flags[5][player] ? d_5471_252c[style][pos][11] * 2 : 0;
        d_5d9c_9c3b = d_5d9c_9c3b + (player_flags[0][player] ? d_5471_252c[style][pos][13] * 1.8 : 0);
        player_stats[16][player] = pos * 16 + style;
        position_rating_cache[player] = d_5d9c_9c3b;
    } else {
        d_5d9c_9c3b = position_rating_cache[player];
    }
    return d_5d9c_9c3b = (int)player_attrs[21][player] / 100.0 * d_5d9c_9c3b;
}

int selection_score(int player, int team, unsigned char pos, char second)
{
    d_5d9c_9db5 = position_rating(pos, player, manager_style_formation[team_manager[team]] / 16);
    d_5d9c_9d07 = (player_stats[18][player] * (200 - staff_skills[team_manager[team]])
                   + player_attrs[9][player] * staff_skills[team_manager[team]]) / 200;
    if (second == 0)
        d_5d9c_9d4b = max_int(player_attrs[15][player], player_attrs[0][player]) * 0.075 + d_5d9c_9d07 * 0.025;
    else
        d_5d9c_9d4b = max_int(player_attrs[15][player], player_attrs[0][player]) * 0.05 + d_5d9c_9d07 * 0.05;
    if (position_rating_norm(pos) >= d_5d9c_9db5)
        d_5d9c_9d4b = (long)d_5d9c_9d4b * d_5d9c_9db5 / position_rating_norm(pos);
    else
        d_5d9c_9d4b = (d_5d9c_9db5 / (position_rating_norm(pos) * 2.0) + 0.5) * d_5d9c_9d4b;
    return d_5d9c_9d4b;
}

int position_rating_norm(unsigned char pos)
{
    switch (pos) {
    case 1:
        d_5d9c_9c39 = 1700;
        break;
    case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
        d_5d9c_9c39 = 1400;
        break;
    case 11:
        d_5d9c_9c39 = 1000;
        break;
    }
    return d_5d9c_9c39;
}

void process_match_discipline(void)
{
    char sent_off[1700];
    char num[320];
    char title[80];
    char text[180];

    memset(sent_off, 0, 1700);
    if (sent_off_list[0] != 0 && current_week > 5) {
        for (loop_i = 1; loop_i <= strlen(sent_off_list); loop_i += 4) {
            strncpy(num, &sent_off_list[loop_i - 1], 4);
            num[4] = 0;
            cur_player = atol(num);
            player_stats[2][cur_player] = player_stats[2][cur_player] + 10;
            if (player_stats[2][cur_player] % 5 == 1)
                player_stats[2][cur_player]--;
            d_2f3c_7ef3[player_attrs[18][cur_player]] += 10;
            sent_off[cur_player] = -1;
        }
    }
    if (booked_list[0] != 0 && current_week > 5) {
        for (loop_i = 1; loop_i <= strlen(booked_list); loop_i += 4) {
            strncpy(num, &booked_list[loop_i - 1], 4);
            num[4] = 0;
            cur_player = atol(num);
            if (sent_off[cur_player] == 0) {
                player_stats[2][cur_player] = player_stats[2][cur_player] + 5;
                if (player_stats[2][cur_player] % 5 == 1)
                    player_stats[2][cur_player]--;
                d_2f3c_7ef3[player_attrs[18][cur_player]] += 5;
            }
        }
    }
    strcpy(injury_context, "suffered during the match");
    if (injured_list[0] != 0) {
        for (loop_i = 1; loop_i <= strlen(injured_list); loop_i += 4) {
            strncpy(num, &injured_list[loop_i - 1], 4);
            num[4] = 0;
            cur_player = atol(num);
            if (fit_outfield_players(player_attrs[18][cur_player]) > 13 && random_below(3) > 0) {
                injure_player(cur_player);
                player_attrs[20][cur_player] = (int)player_attrs[20][cur_player] - (player_attrs[20][cur_player] > 0);
            }
        }
    }
    if (hat_trick_players[0] != 0) {
        for (loop_i = 1; loop_i <= strlen(hat_trick_players); loop_i += 4) {
            strncpy(num, &hat_trick_players[loop_i - 1], 4);
            num[4] = 0;
            cur_player = atol(num);
            if (random_below(5) > 0)
                player_attrs[15][cur_player] = min_int(player_attrs[15][cur_player] + random_below(25),
                                                           player_attrs[9][cur_player] + 25);
        }
    }
    for (cur_player = 0; cur_player <= 1699; cur_player++) {
        selected_team = player_attrs[18][cur_player];
        if (player_attrs[20][cur_player] == 0) {
            d_5d9c_9ca3 = player_stats[2][cur_player];
            d_5d9c_9c37 = (sent_off[cur_player] != 0) + (d_5d9c_9ca3 > 0 && d_5d9c_9ca3 % 20 == 0 ? 2 : 0);
            if (d_5d9c_9c37 > 0) {
                if (fit_outfield_players(selected_team) < 14 || current_week < 5) {
                    player_attrs[19][cur_player] = d_5d9c_9c37 + 20;
                    if (is_human_team(selected_team)) {
                        sprintf(title, "%s squad news", (char far *)team_names[selected_team]);
                        sprintf(text, "%s put under delayed suspension, due to bad discipline.",
                                player_full_name(cur_player));
                        news_message_box(selected_team, title, text);
                    }
                } else {
                    put_player_out(cur_player, 20, d_5d9c_9c37);
                }
                d_1f3e_bfa2[cur_player] = -1;
                if (is_human_team(selected_team) == 0 && random_below(8) == 0)
                    player_fine_reaction(cur_player, -1);
            }
        } else if (player_attrs[19][cur_player] == 20 && in_cup_draw[0][selected_team] != 0 && current_week > 5) {
            player_attrs[20][cur_player] = (int)player_attrs[20][cur_player] - 1;
            if (player_attrs[20][cur_player] == 0)
                player_returns(cur_player);
        }
    }
}

void show_performance_of_week(void)
{
    char text[320];
    char score[80];

    if (best_result_team > -1) {
        new_screen("");
        draw_text_font2(-1.0, 10.0, 2, "Performance of the week");
        sprintf(d_1f3e_3f40, "%d-%d", abs(best_result_gf), best_result_ga);
        if (best_result_gf < 0)
            strcat(d_1f3e_3f40, " Pens");
        strcpy(score, best_result_desc);
        score[1] = 0;
        sprintf(text, "%s : %s v %s (%s)", trim_spaces(club_name(best_result_team)), d_1f3e_3f40,
                trim_spaces(club_name(best_result_opponent)), score);
        draw_text_font2(-1.0, 12.0, 6, text);
        strcpy(text, d_1f3e_2b23);
        draw_text_font2(-1.0, 14.0, 9, text);
        wait_for_click(0);
    }
}

void fine_dirty_clubs(void)
{
    char buf[320];

    for (selected_team = 0; selected_team <= 79; selected_team++) {
        d_5d9c_9ca3 = last_match_info[4][selected_team];
        d_5d9c_9b94 = selected_team / 20 + 1;
        if (d_5d9c_9b94 * 10 + 120 <= d_5d9c_9ca3 && d_5d9c_9ca3 % 5 == 0) {
            switch (d_5d9c_9b94) {
            case 1: fine_amount = random_below(6) * 5000 + 50000L; break;
            case 2: fine_amount = random_below(6) * 1000 + 25000; break;
            case 3:
            case 4: fine_amount = random_below(11) * 500 + 5000; break;
            }
            sprintf(buf, "%s have been fined %ld for excessive foul play.",
                    (char far *)team_names[selected_team], fine_amount);
            news_message_box(selected_team, "Disciplinary action", buf);
            accounts_table = vm_map(accounts_ems_handle, 1);
            accounts_table[12][selected_team] += fine_amount;
            last_match_info[4][selected_team]++;
        }
    }
}

void training_injuries_and_form(int n)
{
    strcpy(injury_context, "suffered during training");
    for (d_5d9c_9c33 = 1; d_5d9c_9c33 <= n; d_5d9c_9c33++) {
        loop_i = -1;
        d_5d9c_9de9 = 0;
        do {
            do {
                d_5d9c_9eb7 = random_below(1700);
                selected_team = player_attrs[18][d_5d9c_9eb7];
            } while (player_attrs[20][d_5d9c_9eb7] != 0
                     || player_flags[0][d_5d9c_9eb7] != 0 && team_stats[9][selected_team] <= 1
                     || fit_outfield_players(selected_team) <= 14);
            if ((d_5d9c_9de7 = random_below(player_attrs[13][d_5d9c_9eb7] + 10)) > last_ranked_row
                || loop_i == -1) {
                loop_i = d_5d9c_9eb7;
                last_ranked_row = d_5d9c_9de7;
            }
            d_5d9c_9de9++;
        } while (loop_i <= -1 || d_5d9c_9de9 < 10);
        injure_player(loop_i);
        if (in_preseason_setup == 0) {
            for (button_style = 1; button_style <= 15; button_style++) {
                loop_i = -1;
                d_5d9c_9de9 = 0;
                do {
                    d_5d9c_9eb7 = random_below(1700);
                    if ((d_5d9c_9de7 = random_below(player_attrs[17][d_5d9c_9eb7] - 6)) < d_5d9c_9cbf
                        || loop_i == -1) {
                        loop_i = d_5d9c_9eb7;
                        d_5d9c_9cbf = d_5d9c_9de7;
                    }
                    d_5d9c_9de9++;
                } while (d_5d9c_9de9 < 2 || loop_i <= -1);
                d_5d9c_9c2f = player_attrs[15][loop_i];
                vary_player_form(loop_i);
                if (in_preseason_setup == 0) {
                    if (player_attrs[15][loop_i] < d_5d9c_9c2f && player_flags[7][loop_i] != 0
                        && is_human_team(player_attrs[18][loop_i]) == 0)
                        replace_in_match_squad(loop_i);
                    else if (player_attrs[15][loop_i] > d_5d9c_9c2f && player_attrs[20][loop_i] == 0
                             && is_human_team(player_attrs[18][loop_i]) == 0)
                        try_into_match_squad(loop_i);
                }
            }
        }
    }
}

void injure_player(int player)
{
    d_5d9c_9ecf = random_below(100) + 1;
    if (d_5d9c_9ecf <= 2) {
        d_5d9c_9c2d = random_below(4) + 16;
        d_5d9c_9c2b = random_below(30) + 21;
    } else if (d_5d9c_9ecf <= 10) {
        d_5d9c_9c2d = random_below(5) + 11;
        d_5d9c_9c2b = random_below(16) + 5;
    } else if (d_5d9c_9ecf <= 35) {
        d_5d9c_9c2d = random_below(5) + 6;
        d_5d9c_9c2b = random_below(2) + 3;
    } else {
        d_5d9c_9c2d = random_below(6);
        d_5d9c_9c2b = random_below(2) + 1;
    }
    put_player_out(player, d_5d9c_9c2d, d_5d9c_9c2b);
    d_5d9c_9c29 = d_5d9c_9c2b;
    if (d_5d9c_9c2b >= 10)
        offer_surgery(player);
    if (d_5d9c_9c29 >= 8)
        offer_rehabilitation(player);
    if (d_5d9c_9c2b >= 13 && random_below(3) == 0) {
        player_attrs[0][player] = player_attrs[0][player] * max_float(random_fraction(), 0.5);
        if (random_below(3) == 0)
            player_attrs[9][player] = max_int(player_attrs[9][player] * max_float(random_fraction(), 0.5),
                                            player_attrs[0][player]);
    }
}

void put_player_out(int player, int injury, int weeks)
{
    char title[120];
    char text[120];

    selected_team = player_attrs[18][player];
    d_5d9c_9b28 = injury == 20 ? -1 : 0;
    player_attrs[19][player] = injury;
    player_attrs[20][player] = weeks;
    player_stats[2][player] += d_5d9c_9b28 ? 1 : 0;
    team_stats[8][selected_team]++;
    team_stats[9][selected_team] += player_flags[0][player];
    if (in_preseason_setup == 0 && in_season_end == 0) {
        if (is_human_team(selected_team) == 0)
            replace_in_match_squad(player);
        else if (player_flags[7][player] != 0) {
            team_selection[selected_team][match_squad_slot(player)] = 1700;
            player_flags[7][player] = 0;
        }
        if (is_human_team(selected_team) != 0) {
            if (d_5d9c_9b28) {
                sprintf(title, "%s squad news", (char far *)team_names[selected_team]);
                sprintf(text, "%s serves a %d match ban, due to bad discipline.", player_full_name(player), weeks);
            } else {
                if (weeks == 1)
                    strcpy(injury_duration_text, "a few days");
                else
                    sprintf(injury_duration_text, "about %d weeks", weeks);
                sprintf(title, "%s squad news", (char far *)team_names[selected_team]);
                sprintf(text, "%s out for %s with %s %s.", player_full_name(player), injury_duration_text, injury_names[injury],
                        injury_context);
            }
            news_message_box(selected_team, title, text);
        }
    }
    if (random_below(player_attrs[14][player] + 10) < random_below(10) && random_below(3) + 5 < weeks)
        player_attrs[15][player] = max_int(player_attrs[15][player] - random_below(25), 10);
}

void player_returns(int player)
{
    char msg[180];
    char title[80];
    char text[180];

    selected_team = player_attrs[18][player];
    d_5d9c_9b28 = player_attrs[19][player] == 20;
    player_attrs[19][player] = 0;
    player_attrs[20][player] = 0;
    player_flags[14][player] = 0;
    player_flags[23][player] = -1;
    team_stats[8][selected_team]--;
    team_stats[9][selected_team] -= player_flags[0][player];
    if (in_season_end == 0 && is_human_team(selected_team) != 0) {
        if (d_5d9c_9b28)
            strcpy(msg, "returns from his disciplinary ban.");
        else
            sprintf(msg, "resumes training at %d%% match fitness.", player_attrs[21][player]);
        sprintf(title, "%s squad news", (char far *)team_names[selected_team]);
        sprintf(text, "%s %s", player_full_name(player), msg);
        news_message_box(selected_team, title, text);
    }
}

void offer_surgery(int player)
{
    char buf[320];

    d_5d9c_9b27 = 0;
    d_5d9c_9c27 = player_attrs[18][player];
    insurance_cost = random_below(11) * 10000 + 100000L;
    if (is_human_team(d_5d9c_9c27) != 0 && in_preseason_setup == 0 && in_season_end == 0) {
        d_5d9c_9c25 = random_below(7);
        switch (d_5d9c_9c25) {
        case 0: strcpy(surgeon_country, "Norway"); break;
        case 1: strcpy(surgeon_country, "Germany"); break;
        case 2: strcpy(surgeon_country, "the USA"); break;
        case 3: strcpy(surgeon_country, "Italy"); break;
        case 4: strcpy(surgeon_country, "Sweden"); break;
        case 5: strcpy(surgeon_country, "Canada"); break;
        case 6: strcpy(surgeon_country, "Holland"); break;
        }
        do {
            redo_menu = 0;
            new_screen("Medical Specialist");
            sprintf(buf, " %s injury ", player_surname(player));
            draw_text_box(1.0, 4.0, -(team_stats[2][d_5d9c_9c27] / 16), team_stats[2][d_5d9c_9c27] % 16, 0, buf);
            sprintf(buf, "A top surgeon in %s can operate", surgeon_country);
            print_screen_line(7, buf);
            if (player_flags[20][player])
                strcpy(buf, "Cost is covered by insurance");
            else
                sprintf(buf, "It would cost %ld", insurance_cost);
            print_screen_line(9, buf);
            show_menu(12, "", "View Factfile|Last Finances|Accept Offer|Refuse Offer|");
            do {
                menu_choice_done = -1;
                wait_menu_choice(3);
                d_5d9c_9c23 = menu_choice;
                if (d_5d9c_9c23 == 0) {
                    do
                        player_details_screen(player, -1, 0);
                    while (!exit_chosen);
                    exit_chosen = 0;
                    redo_menu = -1;
                } else if (d_5d9c_9c23 == 1) {
                    show_accounts(d_5d9c_9c27);
                    redo_menu = -1;
                } else if (d_5d9c_9c23 == 2) {
                    if (confirm_yes_no()) {
                        if (player_flags[20][player] == 0 && insurance_cost > transfer_budget(d_5d9c_9c27) * 0.5) {
                            flash_message("The board refuse");
                            menu_choice_done = 0;
                        } else {
                            sprintf(buf, "%s has the operation", player_surname(player));
                            flash_message(buf);
                            if (random_below(5) == 0)
                                flash_message("But it is unsuccessful");
                            else {
                                flash_message("It is successful");
                                d_5d9c_9b27 = -1;
                            }
                        }
                    } else
                        menu_choice_done = 0;
                } else if (d_5d9c_9c23 == 3) {
                    if (confirm_yes_no())
                        flash_message("The offer is refused");
                    else
                        menu_choice_done = 0;
                }
            } while (!menu_choice_done);
        } while (redo_menu != 0);
    } else if (player_flags[20][player] != 0
               || player_attrs[23][player] == 1 && transfer_budget(d_5d9c_9c27) >= insurance_cost)
        d_5d9c_9b27 = random_below(5) > 0;
    if (d_5d9c_9b27 != 0) {
        player_attrs[20][player] = player_attrs[20][player] * ((random_below(10) + 80) / 100.0);
        if (player_flags[20][player] == 0) {
            accounts_table = vm_map(accounts_ems_handle, 1);
            accounts_table[13][d_5d9c_9c27] += insurance_cost;
        }
    } else if (random_below(4) == 0)
        player_flags[17][player] = -1;
}

void offer_rehabilitation(int player)
{
    char buf[320];

    d_5d9c_9b26 = 0;
    d_5d9c_9c27 = player_attrs[18][player];
    insurance_cost = (long)(d_5d9c_9c2b + random_below(3)) * 5000;
    if (is_human_team(d_5d9c_9c27) && in_preseason_setup == 0 && in_season_end == 0) {
        do {
            redo_menu = 0;
            new_screen("Rehabilitation");
            sprintf(buf, " %s injury ", player_surname(player));
            draw_text_box(1, 4, -(team_stats[2][d_5d9c_9c27] / 16), team_stats[2][d_5d9c_9c27] % 16, 0, buf);
            print_screen_line(7, "He could go to Lilleshall to recover");
            if (is_insured[player])
                strcpy(buf, "Cost is covered by insurance");
            else
                sprintf(buf, "It would cost %ld", insurance_cost);
            print_screen_line(9, buf);
            show_menu(12, "", "View Factfile|Last Finances|Accept Offer|Refuse Offer|");
            do {
                menu_choice_done = -1;
                wait_menu_choice(3);
                d_5d9c_9c23 = menu_choice;
                if (d_5d9c_9c23 == 0) {
                    do
                        player_details_screen(player, -1, 0);
                    while (!exit_chosen);
                    exit_chosen = 0;
                    redo_menu = -1;
                } else if (d_5d9c_9c23 == 1) {
                    show_accounts(d_5d9c_9c27);
                    redo_menu = -1;
                } else if (d_5d9c_9c23 == 2) {
                    if (confirm_yes_no()) {
                        if (is_insured[player] == 0 && insurance_cost > transfer_budget(d_5d9c_9c27) * 0.5)
                            flash_message("The board refuse");
                        else {
                            sprintf(buf, "%s sent to Lilleshall", player_surname(player));
                            flash_message(buf);
                            d_5d9c_9b26 = -1;
                            continue;
                        }
                    }
                    menu_choice_done = 0;
                } else if (d_5d9c_9c23 == 3) {
                    if (confirm_yes_no())
                        flash_message("The offer is refused");
                    else
                        menu_choice_done = 0;
                }
            } while (!menu_choice_done);
        } while (redo_menu);
    } else
        d_5d9c_9b26 = is_insured[player] || player_attrs[23][player] == 1 && transfer_budget(d_5d9c_9c27) >= insurance_cost;
    if (d_5d9c_9b26) {
        if (is_insured[player] == 0) {
            accounts_table = vm_map(accounts_ems_handle, 1);
            accounts_table[13][d_5d9c_9c27] += insurance_cost;
        }
        at_lilleshall[player] = -1;
    }
}

void vary_player_form(int player)
{
    d_5d9c_9dbd = 50 - (8.5 - team_stats[0][player_attrs[18][player]]) * 5;
    if (random_below(101) < d_5d9c_9dbd)
        d_5d9c_9dd5 = random_below(25);
    else
        d_5d9c_9dd5 = -random_below(25);
    d_5d9c_9ba3 = max_int(player_attrs[0][player] - 50, 10);
    d_5d9c_9ba1 = min_int(player_attrs[0][player] + 50, player_attrs[9][player] + 25);
    player_attrs[15][player] = max_int(min_int(player_attrs[15][player] + d_5d9c_9dd5, d_5d9c_9ba1), d_5d9c_9ba3);
}

void weekly_club_finances(void)
{
    char title[80];
    char text[180];

    for (selected_team = 0; selected_team <= 79; selected_team++) {
        d_5d9c_99e8 = overdraft_limit(selected_team) - team_finances[0][selected_team];
        if (d_5d9c_99e8 < 0) {
            accounts_table = vm_map(accounts_ems_handle, 1);
            accounts_table[3][selected_team] += labs(d_5d9c_99e8) * 0.0005;
            d_5d9c_9b25 = 0;
        } else {
            accounts_table = vm_map(accounts_ems_handle, 1);
            accounts_table[10][selected_team] += d_5d9c_99e8 * 0.004;
            d_5d9c_9b25 = -1;
        }
        accounts_table = vm_map(accounts_ems_handle, 1);
        switch (selected_team / 20) {
        case 0:
            d_5d9c_99e4 = 15000;
            accounts_table[6][selected_team] += random_below(5000) + 5000;
            accounts_table[13][selected_team] += random_below(5000) + 30000;
            break;
        case 1:
            d_5d9c_99e4 = 5000;
            accounts_table[6][selected_team] += random_below(2500) + 2500;
            accounts_table[13][selected_team] += random_below(5000) + 25000;
            break;
        case 2:
            d_5d9c_99e4 = 2500;
            accounts_table[6][selected_team] += random_below(1250) + 1250;
            accounts_table[13][selected_team] += random_below(5000) + 10000;
            break;
        case 3:
            d_5d9c_99e4 = 1000;
            accounts_table[6][selected_team] += random_below(1250) + 1250;
            accounts_table[13][selected_team] += random_below(5000) + 7500;
            break;
        }
        if (current_week < 6)
            accounts_table[0][selected_team] += team_stats[1][selected_team] / (division_factor(selected_team) * 4) * 30000
                + random_below(10000) - random_below(10000);
        else
            accounts_table[4][selected_team] += d_5d9c_99e4;
        for (loop_j = 0; loop_j <= team_stats[7][selected_team] - 1; loop_j++) {
            cur_player = squad_players[selected_team][loop_j];
            accounts_table = vm_map(accounts_ems_handle, 1);
            accounts_table[7][selected_team] += player_wages[cur_player];
            if (is_insured[cur_player]) {
                insurance_cost = insurance_premium(cur_player);
                accounts_table = vm_map(accounts_ems_handle, 1);
                accounts_table[13][selected_team] += insurance_cost;
            }
        }
        accounts_table = vm_map(accounts_ems_handle, 1);
        accounts_table[11][selected_team] += team_stats[1][selected_team] * 200 / (1 << selected_team / 20);
        d_5d9c_99e0 = 0;
        for (button_style = 0; button_style <= 13; button_style++) {
            if (button_style <= 6) {
                accounts_table = vm_map(accounts_ems_handle, 0);
                d_5d9c_99e0 += accounts_table[button_style][selected_team];
            } else if (button_style != 8) {
                accounts_table = vm_map(accounts_ems_handle, 0);
                d_5d9c_99e0 -= accounts_table[button_style][selected_team];
            }
        }
        if (d_5d9c_99e0 > 0) {
            accounts_table = vm_map(accounts_ems_handle, 1);
            accounts_table[8][selected_team] += d_5d9c_99e0 * 0.4;
        }
        for (button_style = 0; button_style <= 13; button_style++) {
            accounts_table = vm_map(accounts_ems_handle, 0);
            if (button_style <= 6)
                team_finances[0][selected_team] += accounts_table[button_style][selected_team];
            else
                team_finances[0][selected_team] -= accounts_table[button_style][selected_team];
        }
        if (overdraft_limit(selected_team) + random_below(100000) + 250000 < d_5d9c_99e8) {
            switch (selected_team / 20) {
            case 0:
                takeover_amount = random_below(6) * 100000 + 500000;
                break;
            case 1:
                takeover_amount = random_below(6) * 50000 + 250000;
                break;
            case 2:
                takeover_amount = random_below(6) * 25000 + 125000;
                break;
            case 3:
                takeover_amount = random_below(6) * 12500 + 62500;
                break;
            }
            takeover_amount += d_5d9c_99e8;
            takeover_amount = takeover_amount / 10000 * 10000;
            sprintf(title, "%s takeover!", (char far *)team_names[selected_team]);
            sprintf(text, "%s have been rescued by a %ld takeover deal. ", (char far *)team_names[selected_team], takeover_amount);
            news_message_box(selected_team, title, text);
            accounts_table = vm_map(accounts_ems_handle, 1);
            accounts_table[6][selected_team] += takeover_amount;
            team_finances[0][selected_team] += takeover_amount;
            if (team_stats[6][selected_team] < random_below(31) + 20)
                manager_leaves_club(selected_team, 0);
        } else if (overdraft_limit(selected_team) < d_5d9c_99e8) {
            if (is_human_team(selected_team))
                news_message_box(selected_team, manager_name(team_manager[selected_team], 0),
                    "The club is in severe financial trouble, and you are urged to sell players.");
        } else if (overdraft_limit(selected_team) / 2 < d_5d9c_99e8) {
            if (is_human_team(selected_team))
                news_message_box(selected_team, manager_name(team_manager[selected_team], 0),
                    "The board is concerned at the club's financial situation.");
        }
        accounts_table = vm_map(accounts_ems_handle, 1);
        for (button_style = 0; button_style <= 13; button_style++)
            (accounts_table + 16)[button_style][selected_team] = accounts_table[button_style][selected_team];
    }
}

/* the international squads: picks each country's senior and under-21 players */
void pick_international_squads(void)
{
    unsigned char far *positions;
    char title[80];
    char text[180];
    char u21[20];
    unsigned i;

    message_box("New international squads|have been announced");
    for (cur_player = 0; cur_player <= 1699; cur_player++) {
        intl_called_up[cur_player] = 0;
        intl_under21[cur_player] = 0;
    }
    for (under_21_flag = 0; under_21_flag <= 1; under_21_flag++) {
        for (d_5d9c_9d91 = 0; d_5d9c_9d91 <= 4; d_5d9c_9d91++) {
            d_5d9c_9c21 = d_5d9c_9d91 > 1 ? 170 : 250;
            positions = intl_squad_positions;
            for (i = 0; i <= 21; i++) {
                d_5d9c_9f3b = *positions++;
                d_5d9c_9c1f = -1;
                d_5d9c_9b24 = 0;
                do {
                    for (d_5d9c_9eb7 = 1; d_5d9c_9eb7 <= d_5d9c_9c21; d_5d9c_9eb7++) {
                        if (d_5d9c_9d91 == 0 || d_5d9c_9d91 == 1) {
                            d_5d9c_a006 = vm_map(d_5d9c_a342, 0);
                            cur_player = d_5d9c_a006[d_5d9c_9d91][d_5d9c_9eb7 - 1];
                        } else {
                            d_5d9c_a002 = vm_map(d_5d9c_a340, 0);
                            cur_player = d_5d9c_a002[d_5d9c_9d91 - 2][d_5d9c_9eb7 - 1];
                        }
                        if (intl_called_up[cur_player] == 0 && player_attrs[20][cur_player] == 0 &&
                            (player_attrs[21][cur_player] > 90 || d_5d9c_9b24 != 0 || current_week < 8) &&
                            (under_21_flag == 0 || (under_21_flag == 1 && player_attrs[17][cur_player] < 22)) &&
                            (can_play_position(cur_player, d_5d9c_9f3b) || (d_5d9c_9b24 != 0 && d_5d9c_9f3b > 1))) {
                            d_5d9c_9e27 = player_attrs[0][cur_player] + player_attrs[15][cur_player] / 2;
                            if (player_stats[0][cur_player] > 0)
                                d_5d9c_9e27 += (float)player_rating_total[cur_player] / player_stats[0][cur_player] * 40 - 120;
                            if (d_5d9c_9c1f == -1 || d_5d9c_9e27 > d_5d9c_9c1d) {
                                d_5d9c_9c1d = d_5d9c_9e27;
                                d_5d9c_9c1f = cur_player;
                            }
                        }
                    }
                    menu_choice_done = -1;
                    if (d_5d9c_9c1f == -1 && d_5d9c_9b24 == 0) {
                        d_5d9c_9b24 = -1;
                        menu_choice_done = 0;
                    }
                } while (!menu_choice_done);
                intl_squads = vm_map(national_squads_handle, 1);
                intl_squads[d_5d9c_9d91][under_21_flag][i] = d_5d9c_9c1f;
                if (d_5d9c_9c1f > -1) {
                    intl_called_up[d_5d9c_9c1f] = -1;
                    intl_under21[d_5d9c_9c1f] = under_21_flag == 1 ? -1 : 0;
                    selected_team = player_attrs[18][d_5d9c_9c1f];
                    if (is_human_team(selected_team)) {
                        sprintf(title, "%s squad news", (char far *)team_names[selected_team]);
                        strcpy(u21, "");
                        if (under_21_flag == 1)
                            strcpy(u21, "under-21 ");
                        sprintf(text, "%s has been called up to the %s %ssquad.", player_full_name(d_5d9c_9c1f),
                                home_nation_name(d_5d9c_9d91), u21);
                        news_message_box(selected_team, title, text);
                    }
                }
            }
        }
    }
}

/* the name of home country n */
char far *home_nation_name(int nation)
{
    switch (nation) {
    case 0: return "England";
    case 1: return "Scotland";
    case 2: return "Ireland";
    case 3: return "N.Ireland";
    default: return "Wales";
    }
}

/* packs n flag bytes into bits, eight to a byte, high bit first */
void pack_flag_bits(unsigned char far *src, unsigned char far *dst, unsigned n)
{
    unsigned i, j;
    unsigned char c;

    for (i = 0; i < n; i += 8) {
        for (j = 0; j < 8; j++) {
            c <<= 1;
            if (*src++)
                c |= 1;
        }
        *dst++ = c;
    }
}

/* unpacks n bits into flag bytes (0xff or 0) */
void unpack_flag_bits(unsigned char far *dst, unsigned char far *src, unsigned n)
{
    unsigned i, j;
    unsigned char c;

    for (i = 0; i < n; i += 8) {
        c = *src++;
        for (j = 0; j < 8; j++) {
            if (c & 0x80)
                *dst = 0xff;
            else
                *dst = 0;
            dst++;
            c <<= 1;
        }
    }
}

/* loads the saved game */
void load_game(void)
{
    FILE *fp;
    char buf[5106];

    status_box_text[0] = 0;
    show_status_box("Ok - Loading Saved Game");
    fp = fopen("savegame", "rb");
    fread(job_applicants, 0x205a, 1, fp);
    fread(team_form, 820, 1, fp);
    transfer_history = vm_map(transfer_history_handle, 1);
    fread(transfer_history, 0xfa7c, 1, fp);
    talks_refused_this_week = vm_map(refused_talks_handle, 1);
    fread(talks_refused_this_week, 4, 1, fp);
    fined_this_week = vm_map(d_5d9c_a332, 1);
    fread(fined_this_week, 4, 1, fp);
    d_5d9c_9fb2 = vm_map(d_5d9c_a330, 1);
    fread(d_5d9c_9fb2, 4, 1, fp);
    fread(manager_names, 160, 1, fp);
    fread(&nonleague_names_by_team, 920, 1, fp);
    fread(&team_names, 164, 1, fp);
    load_hook_stub();
    fread(buf, 5106, 1, fp);
    unpack_flag_bits(player_flags, buf, 0x9f90);
    fread(player_attrs, 0x9f90, 1, fp);
    fread(player_stats, 0x9f90, 1, fp);
    fread(player_rating_total, 27232, 1, fp);
    asking_prices = vm_map(asking_prices_handle, 1);
    fread(asking_prices, 6804, 1, fp);
    fread(buf, 90, 1, fp);
    unpack_flag_bits(in_cup_draw, buf, 720);
    fread(team_stats, 5166, 1, fp);
    fread(history_club_ids, 140, 1, fp);
    fread(other_club_ratings, 2300, 1, fp);
    fread(last_match_info, 1920, 1, fp);
    fread(squad_players, 4160, 1, fp);
    fread(team_finances, 1920, 1, fp);
    fread(manager_team, 9100, 1, fp);
    fread(manager_first_name_idx, 3900, 1, fp);
    manager_points_ptr = vm_map(manager_points_handle, 1);
    fread(manager_points_ptr, 2600, 1, fp);
    fread(team_tactics, 3198, 1, fp);
    fread(team_selection, 2132, 1, fp);
    fread(team_lineups, 3840, 1, fp);
    fread(cup_entrants, 1280, 1, fp);
    fread(league_table, 80, 1, fp);
    fread(week_fixtures, 15040, 1, fp);
    fread(week_matchfax_base, 376, 1, fp);
    accounts_table = vm_map(accounts_ems_handle, 1);
    fread(accounts_table, 2560, 4, fp);
    fread(shortlists, 2560, 1, fp);
    fread(top_players_cache, 1440, 1, fp);
    fread(first_leg_scores, 4, 1, fp);
    fread(d_1f33_0000, 40, 1, fp);
    fread(age_value_factors, 120, 1, fp);
    fread(penalty_winner, 80, 1, fp);
    fread(club_records, 1960, 1, fp);
    fread(club_record_holders, 2800, 1, fp);
    club_long_records = vm_map(club_long_records_handle, 1);
    fread(club_long_records, 560, 4, fp);
    best_avg_rating_records = vm_map(best_avg_rating_handle, 1);
    fread(best_avg_rating_records, 140, 4, fp);
    fread(player_award_winners, 16, 1, fp);
    fread(player_award_ratings, 32, 1, fp);
    fread(&manager_award_winners, 8, 1, fp);
    fread(manager_award_points, 16, 1, fp);
    intl_squads = vm_map(national_squads_handle, 1);
    fread(intl_squads, 220, 2, fp);
    d_5d9c_a006 = vm_map(d_5d9c_a342, 1);
    fread(d_5d9c_a006, 500, 2, fp);
    d_5d9c_a002 = vm_map(d_5d9c_a340, 1);
    fread(d_5d9c_a002, 510, 2, fp);
    fread(euro_cup_groups, 16, 1, fp);
    fread(euro_group_stats, 48, 1, fp);
    fread(domark_groups, 80, 1, fp);
    fread(domark_group_stats, 240, 1, fp);
    fread(cup_seeding, 540, 1, fp);
    fread(ground_coords, 280, 1, fp);
    past_winners = vm_map(past_winners_handle, 1);
    fread(past_winners, 384, 2, fp);
    fread(&current_week, 2, 1, fp);
    fread(&league_round, 2, 1, fp);
    fread(&season, 2, 1, fp);
    fread(&match_counter, 2, 1, fp);
    fread(&fa_cup_through, 2, 1, fp);
    fread(&league_cup_through, 2, 1, fp);
    fread(&zenith_cup_through, 2, 1, fp);
    fread(&domark_through, 2, 1, fp);
    fread(&uefa_cup_through, 2, 1, fp);
    fread(&cwc_through, 2, 1, fp);
    fread(&euro_cup_through, 2, 1, fp);
    fread(&fa_cup_next_week, 2, 1, fp);
    fread(&league_cup_next_week, 2, 1, fp);
    fread(&zenith_cup_next_week, 2, 1, fp);
    fread(&domark_cup_next_week, 2, 1, fp);
    fread(&uefa_cup_next_week, 2, 1, fp);
    fread(&cup_winners_next_week, 2, 1, fp);
    fread(&european_cup_next_week, 2, 1, fp);
    fread(&d_5d9c_a024, 1, 1, fp);
    fread(&d_5d9c_a025, 1, 1, fp);
    fread(&cwc_english_entrant, 1, 1, fp);
    fread(&euro_english_entrant, 1, 1, fp);
    fread(&zenith_qualifier_count, 2, 1, fp);
    fread(&d_5d9c_a064, 2, 1, fp);
    fread(&d_5d9c_a066, 2, 1, fp);
    fread(&d_5d9c_a068, 2, 1, fp);
    fread(&d_5d9c_a06a, 2, 1, fp);
    fread(&d_5d9c_a01e, 1, 1, fp);
    fread(&d_5d9c_a01f, 1, 1, fp);
    fread(&d_5d9c_a020, 1, 1, fp);
    fread(&d_5d9c_a021, 1, 1, fp);
    fread(&human_manager_count, 2, 1, fp);
    fread(&human_count, 2, 1, fp);
    fread(&is_demo_game, 1, 1, fp);
    fread(&best_result_team, 2, 1, fp);
    fread(&best_result_opponent, 2, 1, fp);
    fread(&best_result_gf, 2, 1, fp);
    fread(&best_result_ga, 2, 1, fp);
    fread(best_result_desc, 40, 1, fp);
    fread(&background_colour, 2, 1, fp);
    fread(&background_brightness, 2, 1, fp);
    fread(picture_file, 20, 1, fp);
    fread(&random_seed, 4, 1, fp);
    fclose(fp);
    if (strcmp(picture_file, "picture1.lbm")) {
        load_title_picture(0);
        status_box_text[0] = 0;
    } else if (!(background_colour == 5 && background_brightness == 3))
        set_picture_palette();
}

void save_game(void)
{
    FILE *fp;
    char buf[5106];

    status_box_text[0] = 0;
    show_status_box("Ok - Saving Data");
    fp = fopen("savegame", "wb");
    fwrite(job_applicants, 8282, 1, fp);
    fwrite(team_form, 820, 1, fp);
    transfer_history = vm_map(transfer_history_handle, 0);
    fwrite(transfer_history, 64124, 1, fp);
    talks_refused_this_week = vm_map(refused_talks_handle, 0);
    fwrite(talks_refused_this_week, 4, 1, fp);
    fined_this_week = vm_map(d_5d9c_a332, 0);
    fwrite(fined_this_week, 4, 1, fp);
    d_5d9c_9fb2 = vm_map(d_5d9c_a330, 0);
    fwrite(d_5d9c_9fb2, 4, 1, fp);
    fwrite(manager_names, 160, 1, fp);
    save_hook_stub();
    fwrite(nonleague_names_by_team, 920, 1, fp);
    fwrite(team_names, 164, 1, fp);
    load_hook_stub();
    pack_flag_bits(player_flags, buf, 40848);
    fwrite(buf, 5106, 1, fp);
    fwrite(player_attrs, 40848, 1, fp);
    fwrite(player_stats, 40848, 1, fp);
    fwrite(player_rating_total, 27232, 1, fp);
    asking_prices = vm_map(asking_prices_handle, 0);
    fwrite(asking_prices, 6804, 1, fp);
    pack_flag_bits(in_cup_draw, buf, 720);
    fwrite(buf, 90, 1, fp);
    fwrite(team_stats, 5166, 1, fp);
    fwrite(history_club_ids, 140, 1, fp);
    fwrite(other_club_ratings, 2300, 1, fp);
    fwrite(last_match_info, 1920, 1, fp);
    fwrite(squad_players, 4160, 1, fp);
    fwrite(team_finances, 1920, 1, fp);
    fwrite(manager_team, 9100, 1, fp);
    fwrite(manager_first_name_idx, 3900, 1, fp);
    manager_points_ptr = vm_map(manager_points_handle, 0);
    fwrite(manager_points_ptr, 2600, 1, fp);
    fwrite(team_tactics, 3198, 1, fp);
    fwrite(team_selection, 2132, 1, fp);
    fwrite(team_lineups, 3840, 1, fp);
    fwrite(cup_entrants, 1280, 1, fp);
    fwrite(league_table, 80, 1, fp);
    fwrite(week_fixtures, 15040, 1, fp);
    fwrite(week_matchfax_base, 376, 1, fp);
    accounts_table = vm_map(accounts_ems_handle, 0);
    fwrite(accounts_table, 2560, 4, fp);
    fwrite(shortlists, 2560, 1, fp);
    fwrite(top_players_cache, 1440, 1, fp);
    fwrite(first_leg_scores, 4, 1, fp);
    fwrite(d_1f33_0000, 40, 1, fp);
    fwrite(age_value_factors, 120, 1, fp);
    fwrite(penalty_winner, 80, 1, fp);
    fwrite(club_records, 1960, 1, fp);
    fwrite(club_record_holders, 2800, 1, fp);
    club_long_records = vm_map(club_long_records_handle, 0);
    fwrite(club_long_records, 560, 4, fp);
    best_avg_rating_records = vm_map(best_avg_rating_handle, 0);
    fwrite(best_avg_rating_records, 140, 4, fp);
    fwrite(player_award_winners, 16, 1, fp);
    fwrite(player_award_ratings, 32, 1, fp);
    fwrite(manager_award_winners, 8, 1, fp);
    fwrite(manager_award_points, 16, 1, fp);
    intl_squads = vm_map(national_squads_handle, 0);
    fwrite(intl_squads, 220, 2, fp);
    d_5d9c_a006 = vm_map(d_5d9c_a342, 0);
    fwrite(d_5d9c_a006, 500, 2, fp);
    d_5d9c_a002 = vm_map(d_5d9c_a340, 0);
    fwrite(d_5d9c_a002, 510, 2, fp);
    fwrite(euro_cup_groups, 16, 1, fp);
    fwrite(euro_group_stats, 48, 1, fp);
    fwrite(domark_groups, 80, 1, fp);
    fwrite(domark_group_stats, 240, 1, fp);
    fwrite(cup_seeding, 540, 1, fp);
    fwrite(ground_coords, 280, 1, fp);
    past_winners = vm_map(past_winners_handle, 0);
    fwrite(past_winners, 384, 2, fp);
    fwrite(&current_week, 2, 1, fp);
    fwrite(&league_round, 2, 1, fp);
    fwrite(&season, 2, 1, fp);
    fwrite(&match_counter, 2, 1, fp);
    fwrite(&fa_cup_through, 2, 1, fp);
    fwrite(&league_cup_through, 2, 1, fp);
    fwrite(&zenith_cup_through, 2, 1, fp);
    fwrite(&domark_through, 2, 1, fp);
    fwrite(&uefa_cup_through, 2, 1, fp);
    fwrite(&cwc_through, 2, 1, fp);
    fwrite(&euro_cup_through, 2, 1, fp);
    fwrite(&fa_cup_next_week, 2, 1, fp);
    fwrite(&league_cup_next_week, 2, 1, fp);
    fwrite(&zenith_cup_next_week, 2, 1, fp);
    fwrite(&domark_cup_next_week, 2, 1, fp);
    fwrite(&uefa_cup_next_week, 2, 1, fp);
    fwrite(&cup_winners_next_week, 2, 1, fp);
    fwrite(&european_cup_next_week, 2, 1, fp);
    fwrite(&d_5d9c_a024, 1, 1, fp);
    fwrite(&d_5d9c_a025, 1, 1, fp);
    fwrite(cwc_english_entrant, 1, 1, fp);
    fwrite(&euro_english_entrant, 1, 1, fp);
    fwrite(&zenith_qualifier_count, 2, 1, fp);
    fwrite(&d_5d9c_a064, 2, 1, fp);
    fwrite(&d_5d9c_a066, 2, 1, fp);
    fwrite(&d_5d9c_a068, 2, 1, fp);
    fwrite(&d_5d9c_a06a, 2, 1, fp);
    fwrite(d_5d9c_a01e, 1, 1, fp);
    fwrite(&d_5d9c_a01f, 1, 1, fp);
    fwrite(&d_5d9c_a020, 1, 1, fp);
    fwrite(&d_5d9c_a021, 1, 1, fp);
    fwrite(&human_manager_count, 2, 1, fp);
    fwrite(&human_count, 2, 1, fp);
    fwrite(&is_demo_game, 1, 1, fp);
    fwrite(&best_result_team, 2, 1, fp);
    fwrite(&best_result_opponent, 2, 1, fp);
    fwrite(&best_result_gf, 2, 1, fp);
    fwrite(&best_result_ga, 2, 1, fp);
    fwrite(best_result_desc, 40, 1, fp);
    fwrite(&background_colour, 2, 1, fp);
    fwrite(&background_brightness, 2, 1, fp);
    fwrite(picture_file, 20, 1, fp);
    fwrite(&random_seed, 4, 1, fp);
    fclose(fp);
    d_5d9c_9fad = -1;
}

void load_hall_of_fame(void)
{
    FILE *fp;

    status_box_text[0] = 0;
    fp = fopen("hiscores", "rb");
    hall_of_fame_ptr = vm_map(hall_of_fame_handle, 1);
    for (loop_i = 0; loop_i <= 19; loop_i++) {
        read_line(fp, hall_of_fame_ptr + loop_i * 80);
        read_line(fp, hall_of_fame_ptr + loop_i * 80 + 1600);
    }
    fread(hall_of_fame_scores, 80, 1, fp);
    fclose(fp);
}

void save_hall_of_fame(void)
{
    FILE *fp;

    show_status_box("Saving Hall of Fame");
    fp = fopen("hiscores", "wb");
    hall_of_fame_ptr = vm_map(hall_of_fame_handle, 0);
    for (loop_i = 0; loop_i <= 19; loop_i++) {
        write_line(fp, hall_of_fame_ptr + loop_i * 80);
        write_line(fp, hall_of_fame_ptr + loop_i * 80 + 1600);
    }
    fwrite(hall_of_fame_scores, 80, 1, fp);
    fclose(fp);
}

void load_title_picture(char reset_palette)
{
    int handle;

    if (_fstrcmp(picture_file, loaded_picture) != 0) {
        if (video_mode == 2) {
            if ((handle = open(picture_file, O_RDONLY)) >= 0) {
                screen_buffer = vm_map(screen_vm_block, 1);
                read(handle, screen_buffer + 0x7d00, 32000);
                close(handle);
                unpack_ilbm(screen_buffer + 0x7d00, screen_buffer);
                planar_to_chunky(screen_buffer);
            }
        } else {
            if ((handle = open("picega.lbm", O_RDONLY)) != 0) {
                screen_buffer = vm_map(screen_vm_block, 0);
                read(handle, screen_buffer, 32000);
                close(handle);
                show_ilbm(screen_buffer, 0xa400);
            }
        }
        if (reset_palette) {
            background_colour = 5;
            background_brightness = 4;
        }
        d_5d9c_9b1a = -1;
        _fstrcpy(loaded_picture, picture_file);
    }
}

void set_picture_palette(void)
{
    float brightness;
    char far *p;
    register int avg;
    char pal[48];

    if (video_mode == 2) {
        p = pal;
        brightness = background_brightness * 0.15 + 0.4;
        for (loop_i = 0; loop_i <= 15; loop_i++) {
            loop_j = picture_palette[loop_i] & 0xf;
            d_5d9c_9e67 = (picture_palette[loop_i] >> 4) & 0xf;
            d_5d9c_9dd7 = (picture_palette[loop_i] >> 8) & 0xf;
            avg = (d_5d9c_9dd7 + d_5d9c_9e67 + loop_j) / 3;
            if (background_colour < 5) {
                if (background_colour == 1) {
                    d_5d9c_9dd7 = avg / 2;
                    d_5d9c_9e67 = avg / 2;
                    loop_j = avg;
                } else if (background_colour == 2) {
                    d_5d9c_9dd7 = avg;
                    d_5d9c_9e67 = avg;
                    loop_j = avg;
                } else if (background_colour == 3) {
                    d_5d9c_9dd7 = avg;
                    d_5d9c_9e67 = avg / 2;
                    loop_j = avg / 2;
                } else {
                    d_5d9c_9dd7 = avg / 2;
                    d_5d9c_9e67 = avg;
                    loop_j = avg / 2;
                }
            }
            *p++ = (char)(d_5d9c_9dd7 * brightness) << 2;
            *p++ = (char)(d_5d9c_9e67 * brightness) << 2;
            *p++ = (char)(loop_j * brightness) << 2;
        }
        _ES = _SS;
        _DX = (unsigned)pal;
        asm mov bx, 0;
        _CX = 16;
        _AX = 0x1012;
        geninterrupt(0x10);
    }
}

void show_status_box(char far *s)
{
    if (!status_box_text[0])
        new_screen("");
    if (_fstrcmp(status_box_text, s) != 0) {
        set_fill_colour(16);
        fill_rect(20, 0x79, 0x134, 0x59);
        set_fill_colour(20);
        fill_rect(16, 0x75, 0x130, 0x55);
        set_draw_colour(28);
        draw_rect(16, 0x75, 0x130, 0x55);
        draw_text_font2(-1.0, 12.5, 1, s);
        _fstrcpy(status_box_text, s);
    }
}

char is_league_week(int week)
{
    d_5d9c_9b23 = 0;
    if ((week & 1) == 0) {
        if (week > 5 && week < 87 && week != 82 && is_fa_cup_week(week) == 0)
            d_5d9c_9b23 = -1;
    } else if (week == 29 || week == 37 || week == 49 || week == 55 || week == 85)
        d_5d9c_9b23 = -1;
    return d_5d9c_9b23;
}

char is_fa_cup_round_week(int week)
{
    switch (week) {
    case 38: case 44: case 50: case 56: case 62: case 68: case 76: case 88:
        return -1;
    }
    return 0;
}

char is_fa_cup_week(int week)
{
    if (is_fa_cup_round_week(week))
        return -1;
    if (is_cup_replay_week(week) && week != 83)
        return -1;
    return 0;
}

char is_rumbelows_week(int week)
{
    switch (week) {
    case 9: case 13: case 19: case 27: case 33: case 43: case 61: case 65: case 82: case 83:
        return -1;
    }
    return 0;
}

char is_zenith_week(int week)
{
    switch (week) {
    case 7: case 9: case 11: case 23: case 41: case 53:
        return -1;
    }
    return 0;
}

char is_domark_week(int week)
{
    switch (week) {
    case 15: case 17: case 21: case 23: case 25: case 31: case 35: case 41: case 47: case 53:
    case 59: case 67: case 71: case 73: case 87:
        return -1;
    }
    return 0;
}

char is_uefa_week(int week)
{
    switch (week) {
    case 11: case 15: case 23: case 25: case 31: case 35: case 67: case 71: case 75: case 79:
    case 87: case 91:
        return -1;
    }
    return 0;
}

char is_cup_winners_week(int week)
{
    switch (week) {
    case 17: case 21: case 31: case 35: case 67: case 71: case 75: case 79: case 91:
        return -1;
    }
    return 0;
}

char is_european_cup_week(int week)
{
    switch (week) {
    case 17: case 21: case 31: case 35: case 53: case 59: case 67: case 71: case 75: case 79:
    case 91:
        return -1;
    }
    return 0;
}

char is_uefa_match(int week, int match)
{
    switch (week) {
    case 11: case 15:
        return match >= 1 && match <= 32 ? -1 : 0;
    case 23: case 25:
        return match >= 1 && match <= 16 ? -1 : 0;
    case 31: case 35:
        return match >= 1 && match <= 8 ? -1 : 0;
    case 67: case 71:
        return match >= 5 && match <= 8 ? -1 : 0;
    case 75: case 79:
        return match == 5 || match == 6 ? -1 : 0;
    case 87: case 91:
        return match == 1 ? -1 : 0;
    }
    return 0;
}

char is_cup_winners_match(int week, int match)
{
    switch (week) {
    case 17: case 21:
        return match >= 1 && match <= 16 ? -1 : 0;
    case 31: case 35:
        return match >= 9 && match <= 16 ? -1 : 0;
    case 67: case 71:
        return match >= 9 && match <= 12 ? -1 : 0;
    case 75: case 79:
        return match == 7 || match == 8 ? -1 : 0;
    case 91:
        return match == 2 ? -1 : 0;
    }
    return 0;
}

char is_european_cup_match(int week, int match)
{
    switch (week) {
    case 17: case 21:
        return match >= 17 && match <= 32 ? -1 : 0;
    case 31: case 35:
        return match >= 17 && match <= 24 ? -1 : 0;
    case 53: case 59: case 67: case 71: case 75: case 79:
        return match >= 1 && match <= 4 ? -1 : 0;
    case 91:
        return match == 3 ? -1 : 0;
    }
    return 0;
}

char is_rumbelows_match(int week, int match)
{
    switch (week) {
    case 9:
        return match >= 1 && match <= 16 ? -1 : 0;
    case 13: case 19: case 27: case 33: case 43: case 61: case 65: case 82: case 83:
        return -1;
    }
    return 0;
}

char is_zenith_match(int week, int match)
{
    switch (week) {
    case 7:
        return -1;
    case 9:
        return match >= 17 && match <= 32 ? -1 : 0;
    case 11:
        return match >= 33 && match <= 40 ? -1 : 0;
    case 23:
        return match >= 17 && match <= 20 ? -1 : 0;
    case 41:
        return match == 1 || match == 2 ? -1 : 0;
    case 53:
        return match == 5 ? -1 : 0;
    }
    return 0;
}

char is_domark_match(int week, int match)
{
    switch (week) {
    case 15: case 17: case 21:
        return match >= 33 && match <= 40 ? -1 : 0;
    case 23:
        return match >= 21 && match <= 36 ? -1 : 0;
    case 25:
        return match >= 17 && match <= 32 ? -1 : 0;
    case 31: case 35:
        return match >= 25 && match <= 40 ? -1 : 0;
    case 41:
        return match >= 3 && match <= 18 ? -1 : 0;
    case 47:
        return -1;
    case 53:
        return match >= 6 && match <= 21 ? -1 : 0;
    case 59:
        return match >= 5 && match <= 20 ? -1 : 0;
    case 67:
        return match >= 13 && match <= 20 ? -1 : 0;
    case 71:
        return match >= 13 && match <= 16 ? -1 : 0;
    case 73:
        return -1;
    case 87:
        return match == 2 ? -1 : 0;
    }
    return 0;
}

char is_first_leg_week(int week)
{
    switch (week) {
    case 9: case 11: case 17: case 23: case 31: case 61: case 67: case 75: case 87: case 90:
        return -1;
    }
    return 0;
}

char is_second_leg_week(int week)
{
    switch (week) {
    case 13: case 15: case 21: case 25: case 35: case 65: case 71: case 79: case 91: case 92:
        return -1;
    }
    return 0;
}

char is_minor_cup_week(int week)
{
    if (is_zenith_week(week))
        return -1;
    if (is_domark_week(week))
        return -1;
    switch (week) {
    case 9: case 13: case 38: case 39: case 44: case 45:
        return -1;
    }
    return 0;
}

char is_wembley_match(int week, int match)
{
    if (week == 53 && match == 5)
        return -1;
    if (week == 87 && match == 2)
        return -1;
    switch (week) {
    case 5: case 82: case 83: case 88: case 89: case 94:
        return -1;
    }
    return 0;
}

char is_cup_replay_week(int week)
{
    if (is_fa_cup_round_week(week - 1))
        return -1;
    if (week == 83)
        return -1;
    return 0;
}

char is_neutral_venue_match(int week, int match)
{
    if (week == 53 && match == 5)
        return -1;
    switch (week) {
    case 5: case 76: case 77: case 82: case 83: case 88: case 89: case 94:
        return -1;
    case 87: case 91:
        return match > 1 ? -1 : 0;
    }
    return 0;
}

char is_playoff_week(int week)
{
    if (week == 90 || week == 92 || week == 94)
        return -1;
    return 0;
}

int domark_group_of_match(int week, int match)
{
    d_5d9c_9c1b = -1;
    switch (week) {
    case 15: case 21:
        d_5d9c_9c1b = (match - 32) / 2.0 - 0.5;
        break;
    case 17:
        d_5d9c_9c1b = (match - 32) / 2.0 + 3.5;
        break;
    case 23:
        d_5d9c_9c1b = (match - 20) / 2.0 - 0.5;
        break;
    case 25:
        d_5d9c_9c1b = (match - 16) / 2.0 - 0.5;
        break;
    case 31: case 35:
        d_5d9c_9c1b = (match - 24) / 2.0 - 0.5;
        break;
    case 41:
        d_5d9c_9c1b = (match - 2) / 2.0 - 0.5;
        break;
    case 47:
        d_5d9c_9c1b = match / 2.0 - 0.5;
        break;
    case 53:
        d_5d9c_9c1b = (match - 5) / 2.0 - 0.5;
        break;
    case 59:
        d_5d9c_9c1b = (match - 4) / 2.0 - 0.5;
        break;
    case 67:
        d_5d9c_9c1b = (match - 12) / 2.0 + 3.5;
        break;
    }
    return d_5d9c_9c1b;
}

unsigned char cup_crowd_percent(int week)
{
    switch (week) {
    case 13: case 19: case 27:
        match_interest = 50;
        break;
    case 33: case 38: case 39: case 44: case 45:
        match_interest = 60;
        break;
    case 43: case 50: case 51: case 56: case 57:
        match_interest = 70;
        break;
    case 61: case 62: case 63: case 65:
        match_interest = 75;
        break;
    case 68: case 69:
        match_interest = 80;
        break;
    }
    return match_interest;
}

int league_crowd_bonus(int place, int round)
{
    return exp(fabs(10.5 - (place % 20 + 1)) / 2.0) / 10.0 * 0.005 * exp(round / 10.0) * 35.0;
}

void swap_team_records(int team_a, int team_b)
{
    FILE *fp;
    char rec_a[280];
    char rec_b[280];

    club_long_records = vm_map(club_long_records_handle, 1);
    for (loop_j = 0; loop_j <= 13; loop_j++) {
        swap_bytes(&club_records[loop_j][team_a], &club_records[loop_j][team_b], 1);
        if (loop_j < 10) {
            swap_bytes(&club_record_holders[loop_j][team_a], &club_record_holders[loop_j][team_b], 2);
            if (loop_j < 4)
                swap_bytes(&club_long_records[loop_j][team_a], &club_long_records[loop_j][team_b], 4);
        }
    }
    best_avg_rating_records = vm_map(best_avg_rating_handle, 1);
    swap_bytes(&best_avg_rating_records[team_a], &best_avg_rating_records[team_b], 4);
    fp = fopen("records", "rb+");
    fseek(fp, team_a * 279L, 0);
    fread(rec_a, 1, 279, fp);
    fseek(fp, team_b * 279L, 0);
    fread(rec_b, 1, 279, fp);
    fseek(fp, team_a * 279L, 0);
    fwrite(rec_b, 1, 279, fp);
    fseek(fp, team_b * 279L, 0);
    fwrite(rec_a, 1, 279, fp);
    fclose(fp);
}

void swap_teams_in_draws(int team_a, int team_b)
{
    unsigned k, j, i;

    past_winners = vm_map(past_winners_handle, 1);
    for (k = 0; k <= 7; k++)
        for (i = 0; i <= 15; i++)
            if (past_winners[0][i][k] > 0)
                for (j = 1; j <= 2; j++) {
                    if (past_winners[j][i][k] == team_a)
                        past_winners[j][i][k] = team_b;
                    else if (past_winners[j][i][k] == team_b)
                        past_winners[j][i][k] = team_a;
                }
}

void enter_manager_name(int manager)
{
    char buf[60];

    for (week_match_count = 0; week_match_count <= 1; week_match_count++) {
        if (week_match_count == 0)
            strcpy(buf, "First Name ?");
        else
            strcpy(buf, "Surname ?");
        prompt_text_input(2.625, week_match_count * 3 + 7, buf);
        if (input_text[0] == 0) {
            if (week_match_count == 0)
                strcpy(input_text, "Player");
            else
                strcpy(input_text, number_in_words(manager + 1));
        }
        strcpy(manager_names[week_match_count][manager], input_text);
    }
}

void save_hook_stub(void)
{
}

void load_hook_stub(void)
{
}
