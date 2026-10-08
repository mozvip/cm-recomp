/* @at 9100:0000 */
/* @data 5d9c:71bc */
/* @module */

/* Overlay 7: the seasons and the files: a new game and its clubs, the savegame, records
 * and history files, players' ratings and moods, team lists and money, non-league
 * clubs, retirements and insurance, the end of a season (attendances, ground capacity,
 * the club records and history), the club records, club history and past winners
 * screens, and the cups' round names. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <stdlib.h>
#include <math.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void init_new_game_clubs(void);
void create_game_files(void);
void generate_all_players(void);
void init_other_club_ratings(void);
void random_player_name(void);
void generate_player(int player, int team, unsigned char mode);
int random_potential(int player);
void generate_career_history(int player, unsigned char mode);
void assign_history_clubs(int player, int team);
void simulate_career_season(int player, int level, int share);
char career_should_move(int player, int level);
int career_new_level(int player, int level);
char random_skill_in_band(int band, char bonus);
void draw_season_end_panel(void);
void draw_progress_step(int step, char highlight);
void draw_progress_step_bar(int step, char highlight, int done, int total);
void update_hall_of_fame(void);
void promote_and_qualify(void);
void replace_with_nonleague_club(int team);
void end_season_player_update(void);
void process_retirements(void);
void develop_player_ability(int player, int age, int apps, int rating_total);
void append_player_history(int player);
void season_attendance_report(void);
void update_club_records_file(void);
void check_biggest_victory(int team, int opponent, int scored, int conceded);
void check_heaviest_defeat(int team, int opponent, int scored, int conceded);
void check_highest_attendance(int team, int opponent, long crowd);
void check_lowest_attendance(int team, int opponent, long crowd);
void check_match_goals_record(int team, int opponent, int player, int goals);
void set_club_season_result(int team, int row, int round);
void check_fee_paid_record(int player, int from, int to, long fee);
void check_fee_received_record(int player, int from, int to, long fee);
void check_player_season_records(int player, int team, int goals, int apps, int rating_total);
void club_records_screen(int team);
void club_history_screen(int team);
void record_cup_winners(int cup, int winner, int runner);
void past_winners_screen(void);
void draw_competition_button(int comp, char highlight);
char far *fa_cup_round_name(int round);
char far *league_cup_round_name(int round);
char far *other_cup_round_name(int round, int cup);

int random_below(int n);
int file_exists(char far *path);
int max_int(int a, int b);
char far *upper_case(char far *s);
char is_human_team(int x);
long overdraft_limit(int x);
void draw_loading_box(void);
void draw_loading_label(int i, char c);
void draw_loading_progress(int i, char c, int a, int b);
extern int selected_team;
extern int d_5d9c_9f69;
extern int loop_j;
extern int cur_player;
extern int d_5d9c_9ccd;
extern int d_5d9c_9ccf;
extern int button_style;
extern int d_5d9c_9cff;
extern int d_5d9c_9d01;
extern FILE *history_file;
extern char near *team_names[];
extern unsigned char far team_stats[][82];
extern unsigned char far other_club_ratings[];
extern unsigned char far d_5739_1992[];
extern int far d_2f3c_7e53[];
extern int far last_match_info[][80];
extern long far team_finances[][80];
extern unsigned char far history_club_ids[];
extern unsigned char far best_league_placing[];
extern char far fixture_team_name[];
extern char far factfile_name[];
extern char far full_name_buf[];
extern char far * far first_names[];
extern char far * far surnames[];
int min_int(int a, int b);
float team_rating(int x);
int player_rating(int x);
int division_matches(int team);
int player_wage_demand(int player, int team);
extern unsigned char huge player_attrs[][1702];
extern unsigned char huge player_stats[][1702];
extern char far player_flags[][0x6a6];
extern char far player_sides[][0x6a6];
extern char far d_1f3e_b256[];
extern int far player_rating_total[][0x6a6];
extern int far player_first_name_idx[];
extern int far player_surname_idx[];
extern int far team_manager[][80];
extern unsigned char far staff_character[];
extern int far player_wages[];
extern unsigned char far d_5471_2507[][9];
extern unsigned char far character_clash[][10];
extern unsigned char far squad_size[];
extern unsigned char far fit_keeper_count[];
extern char d_5d9c_9b30;
extern int d_5d9c_9dd7;
extern int d_5d9c_9e27;
extern int d_5d9c_9ccb;
extern int best_league_slot;
extern int d_5d9c_9cc9;
extern int d_5d9c_9cc7;
extern int d_5d9c_9cc5;
extern int d_5d9c_9cc3;
extern int d_5d9c_9cc1;
extern float d_5d9c_9a8c;
extern float d_5d9c_9a90;
extern float d_5d9c_9a94;
extern int d_5d9c_9de9;
extern int d_5d9c_9d65;
extern int d_5d9c_9ecf;
extern int d_5d9c_9cbf;
extern int d_5d9c_9cbd;
float max_float(float a, float b);
float min_float(float a, float b);
float random_fraction(void);
int contract_years_wanted(int age);
extern float d_5d9c_9a80;
extern float d_5d9c_9a84;
extern float d_5d9c_9a88;
extern char d_5d9c_9b2c;
extern char d_5d9c_9b2e;
extern char d_5d9c_9b2f;
extern int d_5d9c_9c9f;
extern int d_5d9c_9ca1;
extern int d_5d9c_9ca3;
extern int d_5d9c_9ca5;
extern int history_count;
extern int d_5d9c_9ca9;
extern int d_5d9c_9cab;
extern int d_5d9c_9cad;
extern int d_5d9c_9caf;
extern int d_5d9c_9cb1;
extern int d_5d9c_9cb3;
extern int d_5d9c_9cb5;
extern int d_5d9c_9cb7;
extern int d_5d9c_9cb9;
extern int d_5d9c_9cbb;
extern int d_5d9c_9ced;
extern int d_5d9c_9cf3;
extern int d_5d9c_9d07;
extern int d_5d9c_9d0b;
extern int d_5d9c_9d17;
extern int d_5d9c_9d4b;
extern int d_5d9c_9d8d;
extern int d_5d9c_9d9b;
extern int d_5d9c_9dbb;
extern int d_5d9c_9f51;
extern int last_ranked_row;
extern int label_split_pos;
extern int season;
extern char far history_record[];
extern char far history_entries[][6];
extern int far cup_rating_total[];
extern int far contract_expiry[];
void new_screen(char far *title);
void set_fill_colour(int c);
void fill_rect(int x1, int y1, int x2, int y2);
void draw_text_box(float x, float y, int bg, int fg, int w, char far *s);
void draw_bar(float x, float y, int bg, int fg, int w, int len, char far *s);
void far *vm_map(int handle, int page);
char far *manager_name(int manager, char full);
void swap_bytes(void far *a, void far *b, int n);
void save_hall_of_fame(void);
void swap_teams(int a, int b);
char is_european_entrant(int v);
void manager_leaves_club(int club, int a);
extern int d_5d9c_9e73;
extern int d_5d9c_9e71;
extern int d_5d9c_9f29;
extern int d_5d9c_9c9d;
extern char far *season_end_step_names[];
extern char d_5d9c_9b2d;
extern int ranked_manager;
extern int human_count;
extern int loop_k;
extern int loop_i;
extern int manager_points_handle;
extern int hall_of_fame_handle;
extern long far *manager_points_ptr;
extern char far *hall_of_fame_ptr;
extern int stats_division;
extern int d_5d9c_9d8f;
extern int d_5d9c_9d95;
extern int d_5d9c_9c9b;
extern int zenith_qualifier_count;
extern int team_voted_out;
extern unsigned char cwc_english_entrant[];
extern long far hall_of_fame_scores[];
extern unsigned char far manager_team[];
extern unsigned char far league_table[][20];
extern int far cup_entrants[][80];
extern unsigned char far staff_contract[];
int fit_outfield_players(int x);
void update_players_weekly(void);
void swap_team_records(int a, int b);
void swap_teams_in_draws(int a, int b);
void generate_staff_member(int p, int c, char flag);
long player_value(int p, int n);
long round_fee(long v, char c);
void remove_from_shortlists(int p, char all);
char far *player_full_name(int player);
char far *player_surname(int player);
void news_message_box(int team, char far *title, char far *text);
extern int d_5d9c_9c99;
extern int d_5d9c_9cf9;
extern int d_5d9c_9ba5;
extern int d_5d9c_9ce1;
extern int d_5d9c_9c97;
extern int d_5d9c_9c95;
extern int d_5d9c_9d11;
extern char d_5d9c_9b29;
extern char d_5d9c_9b2a;
extern char d_5d9c_9b2b;
extern int asking_prices_handle;
extern long far *asking_prices;
extern long d_5d9c_99fc;
extern char near *nonleague_names_by_team[];
extern unsigned char far d_5739_15fa[];
extern unsigned char far d_5739_17c6[];
extern unsigned char far ground_coords[][140];
extern unsigned char far club_job_vacant[];
extern unsigned char far injured_count[];
extern unsigned char far staff_skills[];
extern unsigned char far d_2f3c_60a3[];
extern unsigned char far d_2f3c_632d[];
extern unsigned char far d_2f3c_65b7[];
extern char far job_applicants[][101];
extern char far is_transfer_listed[];
extern char far player_injury_retiring[];
extern char far is_insured[];
long max_long(long a, long b);
int league_points_at(int x);
char far *club_name(int x);
char far *player_short_name(int player);
int league_table_slot(int team);
extern int far player_old_club_rating[];
extern long far season_attendance_total[];
extern unsigned char far ground_capacity[];
extern unsigned char far home_games_played[];
extern float d_5d9c_9aec;
extern int d_5d9c_9c8f;
extern int d_5d9c_9c91;
extern int d_5d9c_9c93;
extern long d_5d9c_99f0;
extern long d_5d9c_99f4;
extern long d_5d9c_99f8;
extern char far player_moved_club[];
extern char far history_line[];
extern char far d_1f3e_3ab8[];
extern char far club_history_lines[][12];
extern char far records_buf[];
extern char far d_1f3e_3b14[];
extern char far d_1f3e_3b80[];
extern char far d_1f3e_3b8c;
extern char far d_1f3e_3b8d[];
extern char far d_1f3e_3b99;
extern char far d_1f3e_3b9a[];
extern char far d_1f3e_3ba6;
extern char far d_1f3e_3ba7[];
extern char far d_1f3e_3bb3;
extern char far d_1f3e_3bb4[];
extern char far d_1f3e_3bc1;
extern char far d_1f3e_3bc2[];
extern char far d_1f3e_3bcf;
extern char far d_1f3e_3bd0[];
extern char far d_1f3e_3bdd[];
extern char far d_1f3e_3be9;
extern char far d_1f3e_3bea[];
extern char far d_1f3e_3bf7[];
extern char far d_1f3e_3c03;
extern char far d_1f3e_3c04;
extern char far d_1f3e_3c05[];
extern char far d_1f3e_3c12[];
extern char far d_1f3e_3c1e;
extern int far club_record_holders[][140];
extern unsigned char far club_records[][140];
extern int far season_top_goals[];
extern float far season_best_avg_rating[];
extern unsigned char far team_wins[];
extern unsigned char far team_losses[];
extern unsigned char far league_goals_for[];
extern unsigned char far league_goals_against[];
extern int league_round;
extern int d_5d9c_9c83;
extern int d_5d9c_9c85;
extern int d_5d9c_9c87;
extern int d_5d9c_9c89;
extern int d_5d9c_9c8b;
extern int d_5d9c_9c8d;
extern int season_best_players_handle;
extern int best_avg_rating_handle;
extern float far *best_avg_rating_records;
extern int (far *season_best_players)[80];
extern int d_5d9c_9c81;
extern int club_long_records_handle;
extern long (far *club_long_records)[140];
void draw_club_title(float x, int team, char far *title);
void draw_label(float x, float y, int bg, int fg, int w, char far *s);
char far *trim_spaces(char far *s);
char far *ordinal_text(int division);
void add_button(int a, float x, float y, int c, int d, int e, char far *s);
int wait_for_button(int a);
extern int last_button;
extern int menu_choice;
extern int d_5d9c_9c7b;
extern int d_5d9c_9c7d;
extern int d_5d9c_9c7f;
extern char far d_1f3e_396e[];
extern char far d_1f3e_39be[];
extern char far d_1f3e_3a0e[];
extern char far d_1f3e_3a5e[];
extern char far d_1f3e_3f90[];
extern char far penalty_score_text[];
extern char far squad_name_text[];
extern char far award_rating_text[];
extern unsigned char far d_2f3c_0e18[];
extern unsigned char far d_2f3c_0ea4[];
extern unsigned char far d_2f3c_0f30[];
extern unsigned char far d_2f3c_0fbc[];
extern unsigned char far d_2f3c_14a8[];
extern int far d_2f3c_03b4[];
extern int far d_2f3c_04cc[];
extern int far d_2f3c_05e4[];
extern int far d_2f3c_06fc[];
extern int far d_2f3c_0814[];
extern int far d_2f3c_092c[];
extern int far d_2f3c_0a44[];
extern int far d_2f3c_0b5c[];
extern int far d_2f3c_0c74[];
struct recpos { float x, y; int bg, fg, w; };
void wait_for_click(int a);
int get_mouse_x(void);
int get_mouse_y(void);
void present_screen_rect(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
extern int (far *past_winners)[16][8];
extern int past_winners_handle;
extern int cup_slot;
extern int d_5d9c_9c79;
extern int d_5d9c_9c77;
extern int d_5d9c_9c75;
extern int d_5d9c_9c73;
extern int d_5d9c_9c71;
extern int d_5d9c_9c6f;
extern int d_5d9c_9c6d;
extern int d_5d9c_9c6b;
extern float d_5d9c_9a7c;
extern float d_5d9c_9a78;
void set_draw_colour(int c);
void draw_rect(int x1, int y1, int x2, int y2);
unsigned find_substring(char far *s, char far *set);
unsigned find_last_substring(char far *s, char far *set);
char far *next_text_buffer(void);
char far *mid_chars(char far *s, unsigned i, unsigned n);
void draw_text_at(int x, int y, int colour, char far *s);
extern char far cup_round_text[];
extern char far cup_short_name[];
extern char far round_name_long[];

/* the competitions' names */
static char far *competition_names[] = {
    "League Champions", "FA Cup", "Rumbelows Cup", "Zenith Cup", "Domark Trophy",
    "UEFA Cup", "Cup Winners Cup", "European Cup"
};

void init_new_game_clubs(void)
{
    for (selected_team = 0; selected_team <= 79; selected_team++) {
        team_stats[5][selected_team] = random_below(5) + 5;
        if (is_human_team(selected_team) == 0) {
            team_stats[6][selected_team] = max_int(team_stats[0][selected_team] * 8 / 3 + 27, 50);
        } else {
            team_stats[0][selected_team] = 8;
            team_stats[6][selected_team] = 50;
        }
        team_stats[7][selected_team] = 0;
        team_stats[9][selected_team] = 0;
        team_stats[11][selected_team] = 2;
        d_2f3c_7e53[selected_team] = random_below(9);
        for (loop_j = (is_human_team(selected_team) != 0) + 5; loop_j <= 11; loop_j++)
            last_match_info[loop_j][selected_team] = 650;
        switch (selected_team / 20) {
        case 0:
            strcpy(fixture_team_name, upper_case(team_names[selected_team]));
            if (strcmp(fixture_team_name, "EVERTON") == 0 || strcmp(fixture_team_name, "LIVERPOOL") == 0
                || strcmp(fixture_team_name, "ARSENAL") == 0 || strcmp(fixture_team_name, "TOTTENHAM") == 0
                || strcmp(fixture_team_name, "MAN UTD") == 0)
                team_finances[0][selected_team] = random_below(16960) + 3000000L;
            else
                team_finances[0][selected_team] = random_below(16960) + 1000000L;
            team_stats[22][selected_team] = random_below(3);
            break;
        case 1:
            team_finances[0][selected_team] = random_below(41248) + 500000L;
            team_stats[22][selected_team] = random_below(3) + 1;
            break;
        case 2:
            team_finances[0][selected_team] = random_below(53392) + 250000L;
            team_stats[22][selected_team] = random_below(3) + 2;
            break;
        case 3:
            team_finances[0][selected_team] = random_below(59464) + 125000L;
            team_stats[22][selected_team] = random_below(3) + 2;
            break;
        }
        team_finances[0][selected_team] += overdraft_limit(selected_team);
    }
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 139; d_5d9c_9f69++) {
        history_club_ids[d_5d9c_9f69] = d_5d9c_9f69;
        best_league_placing[d_5d9c_9f69] = 80;
    }
}

void create_game_files(void)
{
    FILE *fp;
    char buf[320];

    draw_loading_box();
    draw_loading_label(0, -1);
    if (file_exists("savegame"))
        remove(buf);
    if (file_exists("records") == 0) {
        fp = fopen("records", "wb");
        memset(buf, 0, 279);
        for (d_5d9c_9ccf = 1; d_5d9c_9ccf <= 140; d_5d9c_9ccf++)
            fwrite(buf, 1, 279, fp);
        fclose(fp);
    }
    if (file_exists("history") == 0) {
        fp = fopen("history", "wb");
        fwrite(buf, 1, 133, fp);
        fclose(fp);
    }
    if (file_exists("matchfax") == 0) {
        fp = fopen("matchfax", "wb");
        fwrite(buf, 1, 149, fp);
        fclose(fp);
    }
}

void generate_all_players(void)
{
    draw_loading_label(1, 0);
    draw_loading_label(2, 0);
    history_file = fopen("history", "rb+");
    for (cur_player = 0; cur_player <= 1699; cur_player++) {
        generate_player(cur_player, -1, cur_player < 160 ? 0 : 1);
        draw_loading_progress(2, -1, cur_player, 1699);
    }
    fclose(history_file);
    history_file = 0;
}

void init_other_club_ratings(void)
{
    draw_loading_label(2, 0);
    draw_loading_label(3, 0);
    for (d_5d9c_9ccd = 0; d_5d9c_9ccd <= 459; d_5d9c_9ccd++) {
        draw_loading_progress(3, -1, d_5d9c_9ccd, 459);
        switch (other_club_ratings[d_5d9c_9ccd]) {
        case 0: other_club_ratings[d_5d9c_9ccd] = 20; break;
        case 1: other_club_ratings[d_5d9c_9ccd] = 17; break;
        case 2: other_club_ratings[d_5d9c_9ccd] = 15; break;
        case 3: other_club_ratings[d_5d9c_9ccd] = 12; break;
        case 4: other_club_ratings[d_5d9c_9ccd] = 10; break;
        case 5: other_club_ratings[d_5d9c_9ccd] = 7; break;
        case 6: other_club_ratings[d_5d9c_9ccd] = 5; break;
        case 7:
        case 8: other_club_ratings[d_5d9c_9ccd] = 3; break;
        }
        button_style = random_below(100);
        if (button_style <= 5)
            d_5739_1992[d_5d9c_9ccd] = 0;
        else if (button_style <= 6)
            d_5739_1992[d_5d9c_9ccd] = 1;
        else if (button_style <= 70)
            d_5739_1992[d_5d9c_9ccd] = 2;
        else if (button_style <= 80)
            d_5739_1992[d_5d9c_9ccd] = 6;
        else if (button_style <= 85)
            d_5739_1992[d_5d9c_9ccd] = 3;
        else if (button_style <= 88)
            d_5739_1992[d_5d9c_9ccd] = 4;
        else if (button_style <= 93)
            d_5739_1992[d_5d9c_9ccd] = 5;
        else
            d_5739_1992[d_5d9c_9ccd] = 7;
    }
}

void random_player_name(void)
{
    do {
        d_5d9c_9d01 = random_below(447) + 53;
        d_5d9c_9cff = random_below(747) + 53;
        strcpy(factfile_name, surnames[d_5d9c_9cff]);
        sprintf(full_name_buf, "%s %s", first_names[d_5d9c_9d01], factfile_name);
    } while (strlen(full_name_buf) >= 18 || strlen(factfile_name) >= 12);
}

void generate_player(int player, int team, unsigned char mode)
{
    d_5d9c_9b30 = (team > -1 && mode < 2) ? -1 : 0;
again:
    for (loop_j = 0; loop_j <= 47; loop_j++) {
        if (loop_j < 24) {
            player_attrs[loop_j][player] = 0;
            player_flags[loop_j][player] = 0;
            if (loop_j < 8)
                player_rating_total[loop_j][player] = 0;
        } else
            player_stats[loop_j - 24][player] = 0;
    }
    random_player_name();
    player_first_name_idx[player] = d_5d9c_9d01;
    player_surname_idx[player] = d_5d9c_9cff;
    do {
        d_5d9c_9dd7 = random_below(1000) + 1;
    } while (!(((mode == 0 || mode == 2) && d_5d9c_9dd7 < 101) ||
               (mode == 1 && d_5d9c_9dd7 > 100) || mode == 3));
    player_flags[0][player] = d_5d9c_9dd7 < 101 ? -1 : 0;
    player_flags[1][player] = (d_5d9c_9dd7 > 100 && d_5d9c_9dd7 < 400) ||
        (d_5d9c_9dd7 > 760 && d_5d9c_9dd7 < 855) || d_5d9c_9dd7 > 998 ? -1 : 0;
    player_flags[2][player] = (d_5d9c_9dd7 > 399 && d_5d9c_9dd7 < 572) ||
        d_5d9c_9dd7 > 760 ? -1 : 0;
    player_flags[3][player] = (d_5d9c_9dd7 > 571 && d_5d9c_9dd7 < 761) ||
        d_5d9c_9dd7 > 854 ? -1 : 0;
    if (player_flags[0][player] == 0) {
        d_5d9c_9dd7 = random_below(1000) + 1;
        player_sides[0][player] = d_5d9c_9dd7 < 153 ||
            (d_5d9c_9dd7 > 873 && d_5d9c_9dd7 < 930) || d_5d9c_9dd7 > 981 ? -1 : 0;
        player_sides[1][player] = (d_5d9c_9dd7 > 152 && d_5d9c_9dd7 < 331) ||
            d_5d9c_9dd7 > 929 ? -1 : 0;
        player_sides[2][player] = (d_5d9c_9dd7 > 330 && d_5d9c_9dd7 < 982) ||
            d_5d9c_9dd7 > 998 ? -1 : 0;
        if (player_flags[3][player] != 0 && player_sides[2][player] == 0 &&
            player_flags[2][player] == 0) {
            if (random_below(2) == 0)
                player_sides[2][player] = -1;
            else
                player_flags[2][player] = -1;
        }
        if (player_flags[2][player] != 0 && player_sides[2][player] == 0 &&
            player_flags[3][player] == 0 && player_flags[1][player] == 0) {
            d_5d9c_9dd7 = random_below(3);
            if (d_5d9c_9dd7 == 0)
                player_sides[2][player] = -1;
            else if (d_5d9c_9dd7 == 1)
                player_flags[3][player] = -1;
            else
                player_flags[1][player] = -1;
        }
        player_attrs[1][player] = random_skill_in_band(player_flags[2][player] || player_flags[3][player], 0);
        player_attrs[2][player] = random_skill_in_band(max_int(player_flags[1][player] ? 2 : 0,
                                                         player_flags[2][player] ? 1 : 0), 0);
        player_attrs[3][player] = random_skill_in_band(1,
            player_sides[0][player] || player_sides[1][player] ? -1 : 0);
        player_attrs[4][player] = random_skill_in_band(1,
            player_sides[2][player] && (player_flags[1][player] || player_flags[3][player]) ? -1 : 0);
        player_attrs[5][player] = random_skill_in_band(player_flags[3][player] ? 1 : 0,
            player_sides[0][player] || player_sides[1][player] ? -1 : 0);
        player_attrs[6][player] = random_skill_in_band(player_flags[2][player] || player_flags[3][player], 0);
        player_attrs[7][player] = random_skill_in_band(max_int(player_flags[2][player] ? 1 : 0,
                                                         player_flags[3][player] ? 2 : 0),
            player_sides[2][player] ? -1 : 0);
        for (d_5d9c_9e27 = 0; d_5d9c_9e27 <= 6; d_5d9c_9e27++) {
            d_5d9c_9ccb = 0;
            for (best_league_slot = 2; best_league_slot <= 10; best_league_slot++) {
                if (player_flags[(best_league_slot + 1) / 3][player] &&
                    player_sides[(best_league_slot + 1) % 3][player] &&
                    d_5471_2507[d_5d9c_9e27][best_league_slot] > d_5d9c_9ccb)
                    d_5d9c_9ccb = d_5471_2507[d_5d9c_9e27][best_league_slot];
            }
            player_attrs[d_5d9c_9e27 + 1][player] =
                max_int(player_attrs[d_5d9c_9e27 + 1][player], d_5d9c_9ccb);
        }
    }
    player_attrs[10][player] = random_skill_in_band(1, 0);
    player_attrs[11][player] = random_skill_in_band(1, 0);
    player_attrs[13][player] = random_skill_in_band(1, 0);
    if (mode < 2) {
        d_5d9c_9cc9 = random_below(18 - player_flags[0][player] * 5) + 17;
        d_5d9c_9cc7 = random_below(18 - player_flags[0][player] * 5) + 17;
        if (abs(d_5d9c_9cc9 - 28) < abs(d_5d9c_9cc7 - 28))
            player_attrs[17][player] = d_5d9c_9cc9;
        else
            player_attrs[17][player] = d_5d9c_9cc7;
    } else
        player_attrs[17][player] = random_below(5) + 16;
    player_attrs[0][player] = random_below(91) + 10;
    player_attrs[9][player] = random_potential(player);
    player_stats[17][player] = random_below(10);
    d_5d9c_9a94 = 1.0;
    d_5d9c_9a90 = 1.0;
    switch (player_stats[17][player]) {
    case 0:
        d_5d9c_9cc5 = random_below(3) + 1;
        d_5d9c_9cc3 = random_below(5) + 1;
        d_5d9c_9cc1 = random_below(20) + 1;
        d_5d9c_9a94 = 0.7;
        break;
    case 1:
        d_5d9c_9cc5 = random_below(4) + 3;
        d_5d9c_9cc3 = random_below(8) + 3;
        d_5d9c_9cc1 = random_below(5) + 16;
        break;
    case 2:
        d_5d9c_9cc5 = random_below(5) + 1;
        d_5d9c_9cc3 = random_below(8) + 5;
        d_5d9c_9cc1 = random_below(10) + 3;
        d_5d9c_9a94 = 2.0;
        d_5d9c_9a90 = 0.5;
        break;
    case 3:
        d_5d9c_9cc5 = random_below(6) + 3;
        d_5d9c_9cc3 = random_below(8) + 8;
        d_5d9c_9cc1 = random_below(11) + 5;
        d_5d9c_9a94 = 0.5;
        d_5d9c_9a90 = 2.0;
        break;
    case 4:
        d_5d9c_9cc5 = random_below(6) + 3;
        d_5d9c_9cc3 = random_below(7) + 4;
        d_5d9c_9cc1 = random_below(12) + 1;
        d_5d9c_9a90 = 0.75;
        d_5d9c_9a94 = 1.25;
        break;
    case 5:
        d_5d9c_9cc5 = random_below(8) + 3;
        d_5d9c_9cc3 = random_below(6) + 15;
        d_5d9c_9cc1 = random_below(5) + 16;
        break;
    case 6:
        d_5d9c_9cc5 = random_below(4) + 5;
        d_5d9c_9cc3 = random_below(8) + 8;
        d_5d9c_9cc1 = random_below(8) + 1;
        break;
    case 7:
        d_5d9c_9cc5 = random_below(3) + 8;
        d_5d9c_9cc3 = random_below(9) + 12;
        d_5d9c_9cc1 = random_below(11) + 5;
        d_5d9c_9a94 = 1.5;
        break;
    case 8:
        d_5d9c_9cc5 = random_below(8) + 2;
        d_5d9c_9cc3 = random_below(11) + 10;
        d_5d9c_9cc1 = random_below(11) + 10;
        d_5d9c_9a90 = 1.5;
        break;
    case 9:
        d_5d9c_9cc5 = random_below(6) + 1;
        d_5d9c_9cc3 = random_below(7) + 6;
        d_5d9c_9cc1 = random_below(3) + 1;
        d_5d9c_9a8c = 0.75;
        break;
    }
    player_attrs[6][player] = min_int(player_attrs[6][player] * d_5d9c_9a90, 20);
    player_attrs[7][player] = min_int(player_attrs[7][player] * d_5d9c_9a94, 20);
    player_attrs[8][player] = d_5d9c_9cc5;
    player_attrs[12][player] = d_5d9c_9cc3;
    player_attrs[14][player] = d_5d9c_9cc1;
    if (player_sides[2][player] && random_below(4) > 0)
        player_attrs[22][player] = random_below(11) + 10;
    else
        player_attrs[22][player] = random_below(20) + 1;
    player_stats[18][player] = random_potential(player);
    generate_career_history(player, mode);
    if (team > -1 || mode == 2) {
        selected_team = team;
        if (selected_team > -1 && mode < 2 &&
            player_rating(player) - team_rating(selected_team) >= 4.0)
            goto again;
    } else if (mode < 2) {
        selected_team = -1;
        d_5d9c_9de9 = 0;
        do {
            do {
                d_5d9c_9f69 = random_below(80);
            } while (squad_size[d_5d9c_9f69] >= division_matches(d_5d9c_9f69) ||
                     (mode != 1 && (mode != 0 || fit_keeper_count[d_5d9c_9f69] >= 2)));
            d_5d9c_9d65 = character_clash[staff_character[team_manager[0][d_5d9c_9f69]]][player_stats[17][player]];
            if ((abs(d_5d9c_9ecf = player_rating(player) - team_rating(d_5d9c_9f69)) < d_5d9c_9cbf ||
                 selected_team == -1) &&
                d_5d9c_9ecf < 4 && random_below(3) + 8 > d_5d9c_9d65) {
                selected_team = d_5d9c_9f69;
                d_5d9c_9cbf = abs(d_5d9c_9ecf);
            }
            d_5d9c_9de9++;
        } while (d_5d9c_9de9 < 10 || (d_5d9c_9de9 != 40 && selected_team <= -1));
        if (selected_team == -1)
            goto again;
    } else if (mode == 3) {
        selected_team = -1;
        d_5d9c_9de9 = 0;
        do {
            selected_team = random_below(80);
            d_5d9c_9de9++;
        } while (squad_size[selected_team] >= d_5d9c_9de9 / 80 + 14);
    }
    if (mode == 0) {
        if (fit_keeper_count[selected_team] == 0 && player_stats[5][player] < 40)
            goto again;
        if (fit_keeper_count[selected_team] > 0 && player_stats[5][player] > 5)
            goto again;
    }
    assign_history_clubs(player, selected_team);
    d_1f3e_b256[player] = mode > 1 ? -1 : 0;
    player_attrs[18][player] = selected_team;
    player_stats[10][player] = d_5d9c_9cbd;
    player_attrs[21][player] = 100;
    player_wages[player] = player_wage_demand(player, selected_team);
    squad_size[selected_team]++;
    fit_keeper_count[selected_team] -= player_flags[0][player];
}

int random_potential(int player)
{
    d_5d9c_9d07 = player_attrs[0][player] + random_below(191 - player_attrs[0][player]) + 10;
    return d_5d9c_9d07;
}

void generate_career_history(int player, unsigned char mode)
{
    memset(history_record, 0, 152);
    d_5d9c_9cbb = player_attrs[17][player] + 1;
    d_5d9c_9cb9 = 1;
    d_5d9c_9cb7 = 0;
    d_5d9c_9d0b = 0;
    if (mode < 2) {
        d_5d9c_9b2f = 0;
        d_5d9c_9d8d = random_below(20) + 1;
        d_5d9c_9cbb = 17;
        for (label_split_pos = 16; label_split_pos <= player_attrs[17][player] - 1; label_split_pos++) {
            if (label_split_pos == d_5d9c_9cbb)
                d_5d9c_9cbb += contract_years_wanted(label_split_pos);
            if (career_should_move(player, d_5d9c_9d8d)) {
                d_5d9c_9cb7 = label_split_pos;
                d_5d9c_9cb5 = career_new_level(player, d_5d9c_9d8d);
                d_5d9c_9cb9 = random_below(46) + 1;
                if (d_5d9c_9cb9 > 4) {
                    last_ranked_row = (d_5d9c_9cb9 - 4) / 42.0 * 50.0;
                    simulate_career_season(player, d_5d9c_9d8d, last_ranked_row);
                    d_5d9c_9cb3 = d_5d9c_9cb1;
                    d_5d9c_9caf = d_5d9c_9d0b;
                    d_5d9c_9cad = d_5d9c_9ca3;
                    d_5d9c_9d8d = d_5d9c_9cb5;
                    simulate_career_season(player, d_5d9c_9d8d, 50 - last_ranked_row);
                    d_5d9c_9cb1 += d_5d9c_9cb3;
                    d_5d9c_9d0b += d_5d9c_9caf;
                    d_5d9c_9ca3 += d_5d9c_9cad;
                } else {
                    d_5d9c_9d8d = d_5d9c_9cb5;
                    simulate_career_season(player, d_5d9c_9d8d, 50);
                }
                d_5d9c_9cbb = label_split_pos + contract_years_wanted(label_split_pos);
            } else {
                simulate_career_season(player, d_5d9c_9d8d, 50);
            }
            develop_player_ability(player, label_split_pos, d_5d9c_9d0b, d_5d9c_9cb1);
        }
    }
    if (d_5d9c_9d0b > 0) {
        player_stats[5][player] = d_5d9c_9d0b;
        player_stats[6][player] = d_5d9c_9d9b;
        player_stats[7][player] = d_5d9c_9ca3;
        player_stats[8][player] = d_5d9c_9cab;
        player_stats[9][player] = d_5d9c_9ca9;
        cup_rating_total[player] = d_5d9c_9cb1;
    }
    contract_expiry[player] = (season + d_5d9c_9cbb - player_attrs[17][player]) * 100 + d_5d9c_9cb9;
}

void assign_history_clubs(int player, int team)
{
    FILE *fp;

    d_5d9c_9cbd = 255;
    history_count = (int)player_stats[20][player];
    for (d_5d9c_9ccf = history_count - 1; d_5d9c_9ccf >= 0; d_5d9c_9ccf--) {
        d_5d9c_9d8d = history_entries[d_5d9c_9ccf][1] - 32;
        if (history_count - 1 == d_5d9c_9ccf) {
            d_5d9c_9cf3 = team;
            d_5d9c_9d17 = d_5d9c_9d8d;
        } else if (d_5d9c_9d8d != d_5d9c_9d17) {
            d_5d9c_9b2e = d_5d9c_9cf3 == team && d_5d9c_9cbd == 255 ? -1 : 0;
            d_5d9c_9ced = d_5d9c_9cf3;
            d_5d9c_9cf3 = -1;
            d_5d9c_9de9 = 0;
            do {
                do {
                    if (d_5d9c_9b30) {
                        d_5d9c_9f69 = random_below(60) + 80;
                        d_5d9c_9ca5 = team_rating(d_5d9c_9f69 + 320);
                    } else {
                        d_5d9c_9f69 = random_below(80);
                        d_5d9c_9ca5 = team_rating(d_5d9c_9f69);
                    }
                } while (d_5d9c_9f69 == d_5d9c_9ced);
                d_5d9c_9ecf = abs(d_5d9c_9ca5 - d_5d9c_9d8d);
                if (d_5d9c_9de9 / 10 + 3 > d_5d9c_9ecf) {
                    d_5d9c_9cf3 = d_5d9c_9f69;
                    d_5d9c_9cbf = d_5d9c_9ecf;
                }
                d_5d9c_9de9++;
            } while (d_5d9c_9cf3 == -1);
            d_5d9c_9d17 = d_5d9c_9d8d;
            if (d_5d9c_9b2e)
                d_5d9c_9cbd = d_5d9c_9cf3;
        }
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 139; d_5d9c_9f69++) {
            if (history_club_ids[d_5d9c_9f69] == d_5d9c_9cf3) {
                history_entries[d_5d9c_9ccf][1] = d_5d9c_9f69 + 32;
                d_5d9c_9f69 = 139;
            }
        }
    }
    if (history_file == NULL) {
        fp = fopen("history", "rb+");
        fseek(fp, (long)player * 133, 0);
        fwrite(history_record, 1, 133, fp);
        fclose(fp);
    } else {
        fseek(history_file, (long)player * 133, 0);
        fwrite(history_record, 1, 133, history_file);
    }
}

void simulate_career_season(int player, int level, int share)
{
    char far *entry;

    d_5d9c_9dbb = max_int(min_int(player_attrs[0][player] + random_below(20) - random_below(20),
                                          player_attrs[9][player]), 10);
    d_5d9c_9d0b = max_int(min_int((d_5d9c_9dbb / 10.0 - level) * 16 + 70, 40) / 40.0 * share, 0);
    d_5d9c_9d0b = max_int(max_int(random_below(d_5d9c_9d0b), random_below(d_5d9c_9d0b)),
                              random_below(d_5d9c_9d0b));
    d_5d9c_9d9b = 0;
    d_5d9c_9ca3 = 0;
    d_5d9c_9cb1 = 0;
    if (d_5d9c_9d0b > 0) {
        d_5d9c_9b2f = -1;
        d_5d9c_9a88 = max_float(min_float(d_5d9c_9dbb / 40.0 + 3.0, 8.0), 3.0);
        d_5d9c_9cb1 = min_float(max_float((random_fraction() - random_fraction()) *
                                              (2.0 - d_5d9c_9d0b * 0.03) + d_5d9c_9a88, 1.0),
                                  10.0) * d_5d9c_9d0b + 0.5;
        d_5d9c_9a84 = (float)d_5d9c_9cb1 / d_5d9c_9d0b;
        d_5d9c_9cab = d_5d9c_9a84;
        d_5d9c_9ca9 = d_5d9c_9cab + (d_5d9c_9cab < d_5d9c_9a84);
        if (d_5d9c_9d0b > 2) {
            d_5d9c_9cab = max_int(d_5d9c_9cab - random_below(2), 1);
            d_5d9c_9ca9 = min_int(d_5d9c_9ca9 + random_below(2), 10);
        }
        d_5d9c_9ca3 = (max_int(random_below(player_attrs[11][player]), random_below(player_attrs[11][player])) + 1) *
                      ((float)d_5d9c_9d0b / share * 50.0) / 20.0;
        d_5d9c_9ca3 = d_5d9c_9ca3 / 5.0 * 5.0;
        if (player_flags[0][player] == 0) {
            if (player_flags[3][player])
                d_5d9c_9ca1 = min_int((player_flags[2][player] ? random_below(2) : 0) +
                                          (player_flags[1][player] ? random_below(2) : 0) * 2 + 1, 3);
            else if (player_flags[2][player])
                d_5d9c_9ca1 = (player_flags[1][player] ? random_below(2) : 0) + 2;
            else if (player_flags[1][player])
                d_5d9c_9ca1 = 3;
            d_5d9c_9a80 = (player_attrs[7][player] * 0.03 + 0.07) / d_5d9c_9ca1 - random_fraction() / 5.0 +
                          random_fraction() / 5.0;
            d_5d9c_9d9b = max_int(0, random_below(3) - random_below(3) + d_5d9c_9d0b * d_5d9c_9a80 + 0.5);
            if (d_5d9c_9d9b < 0 || d_5d9c_9d9b > 50)
                d_5d9c_9d9b = d_5d9c_9d9b;
        }
    }
    if (d_5d9c_9b2f) {
        history_count = (int)player_stats[20][player];
        if (history_count > 21)
            d_5d9c_9c9f = history_count - 22;
        else
            d_5d9c_9c9f = history_count;
        entry = history_entries[d_5d9c_9c9f];
        *entry = season + 99 - (player_attrs[17][player] - label_split_pos);
        entry++;
        *entry = level + 32;
        entry++;
        *entry = d_5d9c_9d0b + 32;
        entry++;
        *entry = d_5d9c_9d9b + 32;
        entry++;
        *entry = d_5d9c_9cb1 >> 8;
        entry++;
        *entry = d_5d9c_9cb1 & 0xff;
        player_stats[20][player] = history_count + 1;
    }
}

char career_should_move(int player, int level)
{
    d_5d9c_9b2c = 0;
    d_5d9c_9d4b = player_attrs[0][player] * 0.1;
    if ((level + random_below(3) < d_5d9c_9d4b && random_below(5) == 0) ||
        (level - 2.5 - random_below(3) > d_5d9c_9d4b && random_below(5) == 0) ||
        random_below(10) == 0)
        d_5d9c_9b2c = -1;
    return d_5d9c_9b2c;
}

int career_new_level(int player, int level)
{
    d_5d9c_9de9 = 0;
    do {
        do {
            d_5d9c_9f51 = random_below(20) + 1;
        } while (d_5d9c_9f51 == level);
        d_5d9c_9d4b = player_attrs[0][player] * 0.1;
        if (abs(d_5d9c_9f51 - d_5d9c_9d4b) < abs(level - d_5d9c_9d4b) || d_5d9c_9de9 == 0)
            d_5d9c_9cb5 = d_5d9c_9f51;
        d_5d9c_9de9++;
    } while (d_5d9c_9cb5 <= -1 || d_5d9c_9de9 < 5);
    return d_5d9c_9cb5;
}

char random_skill_in_band(int band, char bonus)
{
    if (band == 0) {
        d_5d9c_9e73 = 1;
        d_5d9c_9e71 = 2;
    } else if (band == 1) {
        d_5d9c_9e73 = 0;
        d_5d9c_9e71 = 2;
    } else {
        d_5d9c_9e73 = 0;
        d_5d9c_9e71 = 1;
    }
    switch (random_below(20) + 1) {
    case 1:
    case 2:
    case 3:
    case 4:
        d_5d9c_9f29 = d_5d9c_9e73;
        break;
    case 5:
    case 6:
    case 7:
    case 8:
        d_5d9c_9f29 = d_5d9c_9e71;
        break;
    default:
        d_5d9c_9f29 = band;
    }
    return d_5d9c_9f29 = min_int(d_5d9c_9f29 * 7 + random_below(7)
                                     + (bonus ? random_below(5) : 0) + 1, 20);
}

void draw_season_end_panel(void)
{
    new_screen("");
    set_fill_colour(16);
    fill_rect(40, 34, 288, 177);
    set_fill_colour(20);
    fill_rect(36, 30, 284, 173);
    for (d_5d9c_9c9d = 0; d_5d9c_9c9d <= 6; d_5d9c_9c9d++)
        draw_progress_step(d_5d9c_9c9d, 0);
}

void draw_progress_step(int step, char highlight)
{
    char buf[320];

    sprintf(buf, "%*s", strlen(season_end_step_names[step]) / 2 + 15, season_end_step_names[step]);
    draw_text_box(5.25, step * 2.5 + 4.875, 0, highlight * 8 + 9, 237, buf);
}

void draw_progress_step_bar(int step, char highlight, int done, int total)
{
    char buf[320];

    sprintf(buf, "%*s", strlen(season_end_step_names[step]) / 2 + 15, season_end_step_names[step]);
    draw_bar(5.25, step * 2.5 + 4.875, 0, highlight * 8 + 9, 237, 237L * done / total, buf);
}

void update_hall_of_fame(void)
{
    d_5d9c_9b2d = 0;
    for (ranked_manager = 646; ranked_manager <= human_count + 645; ranked_manager++) {
        loop_k = 0;
        for (loop_j = 0; loop_j <= 19; loop_j++)
            if (hall_of_fame_scores[loop_j] < hall_of_fame_scores[loop_k])
                loop_k = loop_j;
        manager_points_ptr = vm_map(manager_points_handle, 0);
        if (hall_of_fame_scores[loop_k] < manager_points_ptr[ranked_manager]) {
            hall_of_fame_scores[loop_k] = manager_points_ptr[ranked_manager];
            hall_of_fame_ptr = vm_map(hall_of_fame_handle, 1);
            strcpy(hall_of_fame_ptr + loop_k * 80, manager_name(ranked_manager, 0));
            if (manager_team[ranked_manager] < 255)
                strcpy(fixture_team_name, team_names[manager_team[ranked_manager]]);
            else
                strcpy(fixture_team_name, "NO CLUB");
            strcpy(hall_of_fame_ptr + loop_k * 80 + 1600, fixture_team_name);
            d_5d9c_9b2d = -1;
        }
    }
    for (loop_i = 0; loop_i <= 18; loop_i++)
        for (loop_j = loop_i + 1; loop_j <= 19; loop_j++)
            if (hall_of_fame_scores[loop_i] < hall_of_fame_scores[loop_j]) {
                swap_bytes(&hall_of_fame_scores[loop_i], &hall_of_fame_scores[loop_j], 4);
                hall_of_fame_ptr = vm_map(hall_of_fame_handle, 1);
                swap_bytes(hall_of_fame_ptr + loop_i * 80,
                            hall_of_fame_ptr + loop_j * 80, 80);
                swap_bytes(hall_of_fame_ptr + loop_i * 80 + 1600,
                            hall_of_fame_ptr + loop_j * 80 + 1600, 80);
            }
    if (d_5d9c_9b2d != 0)
        save_hall_of_fame();
}

void promote_and_qualify(void)
{
    int playoff[3];
    int euro_teams[11];
    int cwc_teams[11];
    int uefa_teams[11];
    unsigned k;

    for (best_league_slot = 0; best_league_slot <= 79; best_league_slot++) {
        selected_team = league_table[0][best_league_slot];
        team_stats[0][selected_team] = (team_stats[0][selected_team] * 2 + 8) / 3;
        if (team_stats[11][selected_team] == 1 && best_league_slot < 79)
            team_finances[0][selected_team] = team_finances[0][selected_team]
                + (overdraft_limit(selected_team + 20) - overdraft_limit(selected_team));
        else if (team_stats[11][selected_team] > 2 && best_league_slot > 0)
            team_finances[0][selected_team] = team_finances[0][selected_team]
                + (overdraft_limit(selected_team - 20) - overdraft_limit(selected_team));
        team_stats[11][selected_team] = 2;
    }
    cwc_english_entrant[0] = league_table[0][0];
    cwc_english_entrant[1] = cup_entrants[0][0];
    if (cwc_english_entrant[0] == cwc_english_entrant[1])
        cwc_english_entrant[1] = league_table[0][1];
    euro_teams[0] = cup_entrants[6][0];
    euro_teams[1] = league_table[0][0];
    euro_teams[2] = cup_entrants[6][1];
    for (d_5d9c_9f69 = 3; d_5d9c_9f69 <= 10; d_5d9c_9f69++)
        euro_teams[d_5d9c_9f69] = league_table[0][d_5d9c_9f69 - 2];
    cwc_teams[0] = cup_entrants[5][0];
    cwc_teams[1] = cup_entrants[0][0];
    cwc_teams[2] = cup_entrants[5][1];
    cwc_teams[3] = cup_entrants[0][1];
    for (d_5d9c_9f69 = 4; d_5d9c_9f69 <= 10; d_5d9c_9f69++)
        cwc_teams[d_5d9c_9f69] = league_table[0][d_5d9c_9f69 - 3];
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 10; d_5d9c_9f69++)
        uefa_teams[d_5d9c_9f69] = league_table[0][d_5d9c_9f69 + 1];

    for (d_5d9c_9d8f = 0; d_5d9c_9d8f <= 1; d_5d9c_9d8f++)
        for (d_5d9c_9d95 = d_5d9c_9d8f + 1; d_5d9c_9d95 <= 10; d_5d9c_9d95++)
            if (euro_teams[d_5d9c_9d95] == euro_teams[d_5d9c_9d8f]) {
                for (k = d_5d9c_9d95; k < 10; k++)
                    euro_teams[k] = euro_teams[k + 1];
                d_5d9c_9d95--;
                euro_teams[10] = -1;
            }
    for (d_5d9c_9d8f = 0; d_5d9c_9d8f <= 1; d_5d9c_9d8f++)
        for (d_5d9c_9d95 = 0; d_5d9c_9d95 <= 10; d_5d9c_9d95++)
            if (cwc_teams[d_5d9c_9d95] == euro_teams[d_5d9c_9d8f]) {
                for (k = d_5d9c_9d95; k < 10; k++)
                    cwc_teams[k] = cwc_teams[k + 1];
                d_5d9c_9d95--;
                cwc_teams[10] = -1;
            }
    for (d_5d9c_9d8f = 0; d_5d9c_9d8f <= 1; d_5d9c_9d8f++)
        for (d_5d9c_9d95 = 0; d_5d9c_9d95 <= 10; d_5d9c_9d95++)
            if (uefa_teams[d_5d9c_9d95] == euro_teams[d_5d9c_9d8f]) {
                for (k = d_5d9c_9d95; k < 10; k++)
                    uefa_teams[k] = uefa_teams[k + 1];
                d_5d9c_9d95--;
                uefa_teams[10] = -1;
            }
    for (d_5d9c_9d8f = 0; d_5d9c_9d8f <= 1; d_5d9c_9d8f++)
        for (d_5d9c_9d95 = d_5d9c_9d8f + 1; d_5d9c_9d95 <= 10; d_5d9c_9d95++)
            if (cwc_teams[d_5d9c_9d95] == cwc_teams[d_5d9c_9d8f]) {
                for (k = d_5d9c_9d95; k < 10; k++)
                    cwc_teams[k] = cwc_teams[k + 1];
                d_5d9c_9d95--;
                cwc_teams[10] = -1;
            }
    for (d_5d9c_9d8f = 0; d_5d9c_9d8f <= 1; d_5d9c_9d8f++)
        for (d_5d9c_9d95 = 0; d_5d9c_9d95 <= 10; d_5d9c_9d95++)
            if (uefa_teams[d_5d9c_9d95] == cwc_teams[d_5d9c_9d8f]) {
                for (k = d_5d9c_9d95; k < 10; k++)
                    uefa_teams[k] = uefa_teams[k + 1];
                d_5d9c_9d95--;
                uefa_teams[10] = -1;
            }

    playoff[0] = cup_entrants[7][0];
    playoff[1] = cup_entrants[7][1];
    playoff[2] = cup_entrants[7][2];
    memset(cup_entrants, -1, 0x500);
    for (d_5d9c_9d8f = 0; d_5d9c_9d8f <= 3; d_5d9c_9d8f++) {
        cup_entrants[4][d_5d9c_9d8f] = uefa_teams[d_5d9c_9d8f];
        if (d_5d9c_9d8f < 2) {
            cup_entrants[5][d_5d9c_9d8f] = cwc_teams[d_5d9c_9d8f];
            cup_entrants[6][d_5d9c_9d8f] = euro_teams[d_5d9c_9d8f];
        }
    }
    for (d_5d9c_9f69 = 48; d_5d9c_9f69 <= 79; d_5d9c_9f69++)
        cup_entrants[1][d_5d9c_9f69 - 48] = league_table[0][d_5d9c_9f69];
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 47; d_5d9c_9f69++)
        cup_entrants[1][d_5d9c_9f69 + 32] = league_table[0][d_5d9c_9f69];

    for (stats_division = 0; stats_division <= 2; stats_division++) {
        for (best_league_slot = 0; best_league_slot <= 1; best_league_slot++) {
            staff_contract[team_manager[0][league_table[stats_division + 1][best_league_slot]]] =
                staff_contract[team_manager[0][league_table[stats_division + 1][best_league_slot]]] + 50;
            swap_teams(league_table[stats_division][best_league_slot + 18],
                        league_table[stats_division + 1][best_league_slot]);
        }
        staff_contract[team_manager[0][playoff[stats_division]]] =
            staff_contract[team_manager[0][playoff[stats_division]]] + 50;
        swap_teams(league_table[stats_division][17], playoff[stats_division]);
    }

    d_5d9c_9c9b = 0;
    for (d_5d9c_9f69 = 39; d_5d9c_9f69 >= 0; d_5d9c_9f69--)
        if (is_european_entrant(d_5d9c_9f69) == 0) {
            cup_entrants[2][d_5d9c_9c9b] = d_5d9c_9f69;
            d_5d9c_9c9b++;
        }
    zenith_qualifier_count = d_5d9c_9c9b - 32;
    team_voted_out = league_table[3][19];
    manager_leaves_club(team_voted_out, 2);
    draw_season_end_panel();
}

void replace_with_nonleague_club(int team)
{
    if (season > 1) {
        d_5d9c_9de9 = 0;
        do {
            d_5d9c_9f69 = random_below(60) + 400;
            d_5d9c_9d8d = other_club_ratings[d_5d9c_9f69];
            if (d_5d9c_9d8d > last_ranked_row || d_5d9c_9de9 == 0) {
                last_ranked_row = other_club_ratings[d_5d9c_9f69];
                d_5d9c_9c99 = d_5d9c_9f69;
            }
            d_5d9c_9de9++;
        } while (d_5d9c_9de9 < 30);
        swap_bytes((void *)&team_names[team], (void *)&nonleague_names_by_team[d_5d9c_9c99], 2);
        team_stats[0][team] = 10;
        team_stats[1][team] = random_below(10) + 10;
        swap_bytes((void *)&team_stats[2][team], (void *)&d_5739_15fa[d_5d9c_9c99], 1);
        swap_bytes((void *)&team_stats[3][team], (void *)&d_5739_17c6[d_5d9c_9c99], 1);
        team_stats[4][team] = 13;
        team_stats[5][team] = random_below(5) + 5;
        team_stats[6][team] = 100;
        team_stats[11][team] = 2;
        team_stats[22][team] = random_below(3) + 2;
        team_finances[0][team] = random_below(59464) + 125000L;
        team_finances[0][team] += overdraft_limit(team);
        other_club_ratings[d_5d9c_9c99] = 10;
        for (loop_j = 0; loop_j <= 0x8b; loop_j++) {
            if (history_club_ids[loop_j] == team)
                history_club_ids[loop_j] = d_5d9c_9c99 - 320;
            else if (history_club_ids[loop_j] == d_5d9c_9c99 - 320)
                history_club_ids[loop_j] = team;
        }
        for (loop_j = 0; loop_j <= 79; loop_j++)
            for (loop_k = 0; loop_k <= 7; loop_k++) {
                if (cup_entrants[loop_k][loop_j] == team)
                    cup_entrants[loop_k][loop_j] = d_5d9c_9c99 + 80;
                else if (cup_entrants[loop_k][loop_j] == d_5d9c_9c99 + 80)
                    cup_entrants[loop_k][loop_j] = team;
            }
        for (loop_j = 0; loop_j <= 1; loop_j++) {
            if (cwc_english_entrant[loop_j] == team)
                cwc_english_entrant[loop_j] = d_5d9c_9c99 + 80;
            else if (cwc_english_entrant[loop_j] == d_5d9c_9c99 + 80)
                cwc_english_entrant[loop_j] = team;
        }
        swap_bytes((void *)&ground_coords[0][team], (void *)&ground_coords[0][d_5d9c_9c99 - 320], 1);
        swap_bytes((void *)&ground_coords[1][team], (void *)&ground_coords[1][d_5d9c_9c99 - 320], 1);
        for (loop_j = 0; loop_j <= 0x6a3; loop_j++) {
            if (player_stats[10][loop_j] == team)
                player_stats[10][loop_j] = d_5d9c_9c99 - 320;
            else if (player_stats[10][loop_j] == d_5d9c_9c99 - 320)
                player_stats[10][loop_j] = team;
        }
        swap_team_records(team, d_5d9c_9c99 - 320);
        swap_teams_in_draws(team, d_5d9c_9c99 + 80);
        for (d_5d9c_9cf9 = 0; d_5d9c_9cf9 <= 6; d_5d9c_9cf9++)
            team_manager[d_5d9c_9cf9][team] = 650;
        for (d_5d9c_9ba5 = 0; d_5d9c_9ba5 <= 6; d_5d9c_9ba5++) {
            d_5d9c_9ce1 = -1;
            for (ranked_manager = 0; ranked_manager <= 0x285; ranked_manager++)
                if (manager_team[ranked_manager] == 0xff) {
                    d_5d9c_9d4b = max_int(staff_skills[ranked_manager],
                                  max_int(d_2f3c_60a3[ranked_manager],
                                  max_int(d_2f3c_632d[ranked_manager], d_2f3c_65b7[ranked_manager])));
                    if (d_5d9c_9d4b < d_5d9c_9cbf || d_5d9c_9ce1 == -1) {
                        d_5d9c_9ce1 = ranked_manager;
                        d_5d9c_9cbf = d_5d9c_9d4b;
                    }
                }
            generate_staff_member(d_5d9c_9ce1, team, 0);
        }
        club_job_vacant[team] = 0;
        strcpy(job_applicants[team], "");
        squad_size[team] = 0;
        injured_count[team] = 0;
        fit_keeper_count[team] = 0;
        d_5d9c_9c97 = 0;
        for (cur_player = 0; cur_player <= 0x6a3; cur_player++)
            if (player_attrs[18][cur_player] == team) {
                generate_player(cur_player, team, (d_5d9c_9c97 < 2) + 1);
                d_5d9c_9c97++;
                remove_from_shortlists(cur_player, -1);
            }
    }
}

void end_season_player_update(void)
{
    draw_progress_step(1, 0);
    draw_progress_step(2, 0);
    for (d_5d9c_9c95 = 1; d_5d9c_9c95 <= 3; d_5d9c_9c95++)
        update_players_weekly();
    for (cur_player = 0; cur_player <= 0x6a3; cur_player++) {
        draw_progress_step_bar(2, -1, cur_player, 1699);
        develop_player_ability(cur_player, player_attrs[17][cur_player], player_stats[0][cur_player], player_rating_total[0][cur_player]);
        append_player_history(cur_player);
        player_attrs[8][cur_player] = min_int(player_attrs[8][cur_player] + (random_below(3) == 0), 9);
        player_attrs[11][cur_player] = max_int(player_attrs[11][cur_player] - (random_below(3) == 0), 1);
        player_attrs[12][cur_player] = min_int(player_attrs[12][cur_player] + (random_below(3) == 0), 20);
        player_attrs[14][cur_player] = max_int(player_attrs[14][cur_player] - (random_below(3) == 0), 1);
        player_attrs[17][cur_player]++;
        for (loop_i = 29; loop_i <= 33; loop_i++)
            player_stats[loop_i - 24][cur_player] = player_stats[loop_i - 29][cur_player];
        player_stats[7][cur_player] = player_stats[7][cur_player] - player_stats[7][cur_player] % 5;
        cup_rating_total[cur_player] = player_rating_total[0][cur_player];
    }
}

void process_retirements(void)
{
    char buf[320];
    char title[80];
    char text[80];

    draw_progress_step(3, 0);
    draw_progress_step(4, 0);
    for (cur_player = 0; cur_player <= 0x6a3; cur_player++) {
        draw_progress_step_bar(4, -1, cur_player, 1699);
        d_5d9c_9cf3 = player_attrs[18][cur_player];
        d_5d9c_9d11 = player_attrs[17][cur_player];
        if (player_flags[0][cur_player] != 0 && d_5d9c_9d11 > 28)
            d_5d9c_9d11 = max_int(d_5d9c_9d11 - 4, 28);
        d_5d9c_9b2b = d_5d9c_9d11 > 30 && is_transfer_listed[cur_player] != 0;
        d_5d9c_9b2a = player_injury_retiring[cur_player];
        if (d_5d9c_9b2a != 0 || d_5d9c_9d11 > 38 ||
            (d_5d9c_9d11 > 33 && player_attrs[0][cur_player] < 40) ||
            (d_5d9c_9d11 > 30 && player_attrs[0][cur_player] < 30) || d_5d9c_9b2b != 0) {
            d_5d9c_9b29 = 0;
            if (is_human_team(d_5d9c_9cf3) && season > 1) {
                sprintf(title, "%s squad news", (char far *)team_names[d_5d9c_9cf3]);
                if (d_5d9c_9b2a != 0)
                    sprintf(buf, "%s has been forced to retire through injury", player_full_name(cur_player));
                else if (d_5d9c_9b2b != 0) {
                    asking_prices = vm_map(asking_prices_handle, 0);
                    sprintf(buf, "%s has decided to go into non league soccer", player_full_name(cur_player));
                    team_finances[0][d_5d9c_9cf3] += asking_prices[cur_player] / (random_fraction() + 1);
                } else
                    sprintf(buf, "%s has decided to hang up his boots", player_full_name(cur_player));
                sprintf(text, "%s at the age of %d.", buf, player_attrs[17][cur_player]);
                news_message_box(d_5d9c_9cf3, title, text);
                d_5d9c_9b29 = -1;
            }
            if (d_5d9c_9b2a != 0 && is_insured[cur_player] != 0) {
                d_5d9c_99fc = round_fee(player_value(cur_player, -1), 0);
                if (is_human_team(d_5d9c_9cf3) && season > 1) {
                    sprintf(title, "%s squad news", (char far *)team_names[d_5d9c_9cf3]);
                    sprintf(text, "The club receives %ld from the insurance company following %s's retirement.",
                            d_5d9c_99fc, player_surname(cur_player));
                    news_message_box(d_5d9c_9cf3, title, text);
                    d_5d9c_9b29 = -1;
                }
                team_finances[0][d_5d9c_9cf3] += d_5d9c_99fc;
            }
            if (d_5d9c_9b29 != 0) {
                draw_season_end_panel();
                draw_progress_step(4, 0);
            }
            squad_size[d_5d9c_9cf3]--;
            injured_count[d_5d9c_9cf3] -= player_attrs[20][cur_player] > 0 ? 1 : 0;
            fit_keeper_count[d_5d9c_9cf3] -= player_flags[0][cur_player] != 0 && player_attrs[20][cur_player] == 0 ? 1 : 0;
            if (fit_outfield_players(d_5d9c_9cf3) < 14 || fit_keeper_count[d_5d9c_9cf3] == 0)
                generate_player(cur_player, d_5d9c_9cf3, fit_keeper_count[d_5d9c_9cf3] == 0 ? 2 : 3);
            else
                generate_player(cur_player, -1, 3);
            remove_from_shortlists(cur_player, -1);
        }
    }
}

void develop_player_ability(int player, int age, int apps, int rating_total)
{
    if (apps > 0)
        d_5d9c_9aec = (float)rating_total / apps * 40.0 - 120.0;
    else
        d_5d9c_9aec = player_attrs[0][player];
    d_5d9c_9c93 = player_attrs[0][player];
    if (player_flags[0][player] != 0 && age > 28)
        d_5d9c_9c91 = max_int(age - 4, 28);
    else
        d_5d9c_9c91 = age;
    if (d_5d9c_9c91 <= 27) {
        player_attrs[0][player] = (player_attrs[0][player] * 4 + player_attrs[9][player]) / 5;
        d_5d9c_9c8f = min_int(38, apps);
        player_attrs[0][player] = max_int(min_int(
            (player_attrs[0][player] * (57 - d_5d9c_9c8f) + d_5d9c_9c8f * d_5d9c_9aec * 1.03) / 57.0,
            player_attrs[9][player]), 10);
    } else if (d_5d9c_9c91 >= 30)
        player_attrs[0][player] = (player_attrs[0][player] * 5 + 10) / 6;
}

void append_player_history(int player)
{
    char far *entry;
    FILE *fp;
    int rating;

    fp = fopen("history", "rb+");
    fseek(fp, (long)player * 133, 0);
    fread(history_record, 1, 133, fp);
    fclose(fp);
    history_count = (int)player_stats[20][player];
    if (history_count > 0 || player_stats[0][player] - player_stats[12][player] > 0) {
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 139; d_5d9c_9f69++) {
            if (player_attrs[18][player] == history_club_ids[d_5d9c_9f69]) {
                if (history_count > 21)
                    d_5d9c_9c9f = history_count - 22;
                else
                    d_5d9c_9c9f = history_count;
                entry = history_entries[d_5d9c_9c9f];
                *entry++ = season + 99;
                *entry++ = d_5d9c_9f69 + 32;
                *entry++ = player_stats[0][player] + 32 - player_stats[12][player];
                *entry++ = player_stats[1][player] + 32 - player_stats[13][player];
                rating = player_rating_total[0][player] - player_old_club_rating[player];
                *entry++ = rating >> 8;
                *entry = rating;
                player_stats[20][player] = history_count + 1;
                fp = fopen("history", "rb+");
                fseek(fp, (long)player * 133, 0);
                fwrite(history_record, 1, 133, fp);
                fclose(fp);
                break;
            }
        }
    }
}

void season_attendance_report(void)
{
    char title[80];
    char text[80];
    char text2[100];

    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 79; d_5d9c_9f69++) {
        d_5d9c_99f8 = season_attendance_total[d_5d9c_9f69] / home_games_played[d_5d9c_9f69];
        if (is_human_team(d_5d9c_9f69)) {
            sprintf(title, "%s club news", (char far *)team_names[d_5d9c_9f69]);
            sprintf(text, "Our average attendance for the season was %ld.", d_5d9c_99f8);
            news_message_box(d_5d9c_9f69, title, text);
        }
        if (d_5d9c_99f8 > ground_capacity[d_5d9c_9f69] * 0.9) {
            d_5d9c_99f4 = max_long(team_finances[0][d_5d9c_9f69] - overdraft_limit(d_5d9c_9f69), 0L) * 0.6;
            label_split_pos = 0;
            if (d_5d9c_99f0 > 200000L)
                label_split_pos = 2;
            else if (d_5d9c_99f0 > 100000L)
                label_split_pos = 1;
            if (label_split_pos > 0) {
                team_finances[0][d_5d9c_9f69] -= label_split_pos * 100000L;
                ground_capacity[d_5d9c_9f69] += label_split_pos;
                if (is_human_team(d_5d9c_9f69)) {
                    sprintf(title, "%s club news", (char far *)team_names[d_5d9c_9f69]);
                    sprintf(text2, "The board has decided to increase ground capacity from %ld to %ld at a cost of %ld.",
                            (ground_capacity[d_5d9c_9f69] - label_split_pos) * 1000L,
                            ground_capacity[d_5d9c_9f69] * 1000L, label_split_pos * 100000L);
                    news_message_box(d_5d9c_9f69, title, text2);
                }
            }
        }
    }
}

void update_club_records_file(void)
{
    FILE *fp;
    char buf[320];

    draw_progress_step(0, -1);
    for (cur_player = 0; cur_player <= 1699; cur_player++) {
        d_5d9c_9c8d = player_stats[13][cur_player];
        d_5d9c_9c8b = player_stats[12][cur_player];
        d_5d9c_9c89 = player_old_club_rating[cur_player];
        check_player_season_records(cur_player, player_attrs[18][cur_player],
                    player_stats[1][cur_player] - d_5d9c_9c8d,
                    player_stats[0][cur_player] - d_5d9c_9c8b,
                    player_rating_total[0][cur_player] - d_5d9c_9c89);
        if (player_moved_club[cur_player])
            check_player_season_records(cur_player, player_stats[10][cur_player], d_5d9c_9c8d, d_5d9c_9c8b, d_5d9c_9c89);
    }
    fp = fopen("records", "rb+");
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 139; d_5d9c_9f69++) {
        fseek(fp, (long)d_5d9c_9f69 * 279, 0);
        fread(records_buf, 1, 279, fp);
        if (club_record_holders[0][d_5d9c_9f69] > -1) {
            sprintf(fixture_team_name, "%.12s", club_name(club_record_holders[0][d_5d9c_9f69]));
            sprintf(d_1f3e_3b80, "%-12s", fixture_team_name);
            d_1f3e_3b8c = season + 99;
        }
        if (club_record_holders[1][d_5d9c_9f69] > -1) {
            sprintf(fixture_team_name, "%.12s", club_name(club_record_holders[1][d_5d9c_9f69]));
            sprintf(d_1f3e_3b8d, "%-12s", fixture_team_name);
            d_1f3e_3b99 = season + 99;
        }
        if (club_record_holders[2][d_5d9c_9f69] > -1) {
            sprintf(fixture_team_name, "%.12s", club_name(club_record_holders[2][d_5d9c_9f69]));
            sprintf(d_1f3e_3b9a, "%-12s", fixture_team_name);
            d_1f3e_3ba6 = season + 99;
        }
        if (club_record_holders[3][d_5d9c_9f69] > -1) {
            sprintf(fixture_team_name, "%.12s", club_name(club_record_holders[3][d_5d9c_9f69]));
            sprintf(d_1f3e_3ba7, "%-12s", fixture_team_name);
            d_1f3e_3bb3 = season + 99;
        }
        if (club_record_holders[8][d_5d9c_9f69] > -1) {
            sprintf(d_1f3e_3ab8, "%.13s", player_short_name(club_record_holders[9][d_5d9c_9f69]));
            sprintf(d_1f3e_3c05, "%-13s", d_1f3e_3ab8);
            sprintf(fixture_team_name, "%.12s", club_name(club_record_holders[8][d_5d9c_9f69]));
            sprintf(d_1f3e_3c12, "%-12s", fixture_team_name);
            d_1f3e_3c1e = season + 99;
        }
        if (club_record_holders[4][d_5d9c_9f69] > -1) {
            sprintf(d_1f3e_3ab8, "%.13s", player_short_name(club_record_holders[4][d_5d9c_9f69]));
            sprintf(d_1f3e_3bd0, "%-13s", d_1f3e_3ab8);
            strcpy(fixture_team_name, team_names[club_record_holders[5][d_5d9c_9f69]]);
            sprintf(d_1f3e_3bdd, "%-12s", fixture_team_name);
            d_1f3e_3be9 = season + 99;
        }
        if (club_record_holders[6][d_5d9c_9f69] > -1) {
            sprintf(d_1f3e_3ab8, "%.13s", player_short_name(club_record_holders[6][d_5d9c_9f69]));
            sprintf(d_1f3e_3bea, "%-13s", d_1f3e_3ab8);
            sprintf(fixture_team_name, "%.12s", (char far *)team_names[club_record_holders[7][d_5d9c_9f69]]);
            sprintf(d_1f3e_3bf7, "%-12s", fixture_team_name);
            d_1f3e_3c03 = season + 99;
        }
        if (d_5d9c_9f69 < 80) {
            if (club_records[4][d_5d9c_9f69] < season_top_goals[d_5d9c_9f69]) {
                club_records[4][d_5d9c_9f69] = season_top_goals[d_5d9c_9f69];
                season_best_players = vm_map(season_best_players_handle, 0);
                sprintf(d_1f3e_3ab8, "%.13s", player_short_name(season_best_players[0][d_5d9c_9f69]));
                sprintf(d_1f3e_3bb4, "%-13s", d_1f3e_3ab8);
                d_1f3e_3bc1 = season + 99;
            }
            best_avg_rating_records = vm_map(best_avg_rating_handle, 1);
            if (season_best_avg_rating[d_5d9c_9f69] > best_avg_rating_records[d_5d9c_9f69]) {
                best_avg_rating_records[d_5d9c_9f69] = season_best_avg_rating[d_5d9c_9f69];
                season_best_players = vm_map(season_best_players_handle, 0);
                sprintf(d_1f3e_3ab8, "%.13s", player_short_name(season_best_players[1][d_5d9c_9f69]));
                sprintf(d_1f3e_3bc2, "%-13s", d_1f3e_3ab8);
                d_1f3e_3bcf = season + 99;
            }
        }
        best_league_slot = league_table_slot(d_5d9c_9f69);
        if (club_records[5][d_5d9c_9f69] > best_league_slot) {
            club_records[5][d_5d9c_9f69] = best_league_slot;
            d_1f3e_3c04 = season + 99;
        }
        sprintf(history_line, "%c%c", season + 99, best_league_slot + 32);
        if (d_5d9c_9f69 < 80) {
            d_5d9c_9c87 = team_wins[d_5d9c_9f69];
            d_5d9c_9c85 = team_losses[d_5d9c_9f69];
            d_5d9c_9c83 = league_round - d_5d9c_9c87 - d_5d9c_9c85 - 1;
            sprintf(buf, "%c%c%c%c%c%c", d_5d9c_9c87 + 32, d_5d9c_9c83 + 32, d_5d9c_9c85 + 32,
                    league_goals_for[d_5d9c_9f69] + 32, league_goals_against[d_5d9c_9f69] + 32,
                    league_points_at(best_league_slot) + 32);
            strcat(history_line, buf);
        } else
            strcat(history_line, "      ");
        sprintf(history_line + strlen(history_line), "%c%c",
                club_records[6][d_5d9c_9f69] + 32, club_records[10][d_5d9c_9f69] + 32);
        if (club_records[7][d_5d9c_9f69] > 0)
            sprintf(history_line + strlen(history_line), "%c%c", 33, club_records[7][d_5d9c_9f69] + 32);
        else if (club_records[8][d_5d9c_9f69] > 0)
            sprintf(history_line + strlen(history_line), "%c%c", 34, club_records[8][d_5d9c_9f69] + 32);
        else if (club_records[9][d_5d9c_9f69] > 0)
            sprintf(history_line + strlen(history_line), "%c%c", 35, club_records[9][d_5d9c_9f69] + 32);
        else if (club_records[11][d_5d9c_9f69] > 0)
            sprintf(history_line + strlen(history_line), "%c%c", 36, club_records[11][d_5d9c_9f69] + 32);
        else if (club_records[12][d_5d9c_9f69] > 0)
            sprintf(history_line + strlen(history_line), "%c%c", 37, club_records[12][d_5d9c_9f69] + 32);
        else
            strcat(history_line, "  ");
        d_5d9c_9c9f = min_int(season, 10);
        if (season > 10)
            memcpy(records_buf, d_1f3e_3b14, 108);
        memcpy(club_history_lines[d_5d9c_9c9f], history_line, 12);
        fseek(fp, (long)d_5d9c_9f69 * 279, 0);
        fwrite(records_buf, 1, 279, fp);
    }
    fclose(fp);
}

void check_biggest_victory(int team, int opponent, int scored, int conceded)
{
    if (team < 80 || team >= 480) {
        d_5d9c_9f69 = team - (team >= 480 ? 400 : 0);
        d_5d9c_9c81 = club_records[0][d_5d9c_9f69] - club_records[1][d_5d9c_9f69];
        if (scored - conceded > d_5d9c_9c81
            || (scored - conceded == d_5d9c_9c81 && club_records[0][d_5d9c_9f69] < scored)) {
            club_records[0][d_5d9c_9f69] = scored;
            club_records[1][d_5d9c_9f69] = conceded;
            club_record_holders[0][d_5d9c_9f69] = opponent;
        }
    }
}

void check_heaviest_defeat(int team, int opponent, int scored, int conceded)
{
    if (team < 80 || team >= 480) {
        d_5d9c_9f69 = team - (team >= 480 ? 400 : 0);
        d_5d9c_9c81 = club_records[3][d_5d9c_9f69] - club_records[2][d_5d9c_9f69];
        if (conceded - scored > d_5d9c_9c81
            || (conceded - scored == d_5d9c_9c81 && club_records[3][d_5d9c_9f69] < conceded)) {
            club_records[2][d_5d9c_9f69] = scored;
            club_records[3][d_5d9c_9f69] = conceded;
            club_record_holders[1][d_5d9c_9f69] = opponent;
        }
    }
}

void check_highest_attendance(int team, int opponent, long crowd)
{
    if (team < 80 || team >= 480) {
        d_5d9c_9f69 = team - (team >= 480 ? 400 : 0);
        club_long_records = vm_map(club_long_records_handle, 1);
        if (club_long_records[0][d_5d9c_9f69] < crowd) {
            club_long_records[0][d_5d9c_9f69] = crowd;
            club_record_holders[2][d_5d9c_9f69] = opponent;
        }
    }
}

void check_lowest_attendance(int team, int opponent, long crowd)
{
    if (team < 80 || team >= 480) {
        d_5d9c_9f69 = team - (team >= 480 ? 400 : 0);
        club_long_records = vm_map(club_long_records_handle, 1);
        if (club_long_records[1][d_5d9c_9f69] > crowd || club_long_records[1][d_5d9c_9f69] == 0) {
            club_long_records[1][d_5d9c_9f69] = crowd;
            club_record_holders[3][d_5d9c_9f69] = opponent;
        }
    }
}

void check_match_goals_record(int team, int opponent, int player, int goals)
{
    if (team < 80) {
        d_5d9c_9f69 = team;
        if (club_records[13][d_5d9c_9f69] < goals) {
            club_records[13][d_5d9c_9f69] = goals;
            club_record_holders[8][d_5d9c_9f69] = opponent;
            club_record_holders[9][d_5d9c_9f69] = player;
        }
    }
}

void set_club_season_result(int team, int row, int round)
{
    if (team < 80 || team >= 480) {
        d_5d9c_9f69 = team - (team >= 480 ? 400 : 0);
        club_records[row][d_5d9c_9f69] = round;
    }
}

void check_fee_paid_record(int player, int from, int to, long fee)
{
    club_long_records = vm_map(club_long_records_handle, 1);
    if (club_long_records[2][to] < fee) {
        club_long_records[2][to] = fee;
        club_record_holders[4][to] = player;
        club_record_holders[5][to] = from;
    }
}

void check_fee_received_record(int player, int from, int to, long fee)
{
    club_long_records = vm_map(club_long_records_handle, 1);
    if (club_long_records[3][from] < fee) {
        club_long_records[3][from] = fee;
        club_record_holders[6][from] = player;
        club_record_holders[7][from] = to;
    }
}

void check_player_season_records(int player, int team, int goals, int apps, int rating_total)
{
    if (season_top_goals[team] < goals) {
        season_top_goals[team] = goals;
        season_best_players = vm_map(season_best_players_handle, 1);
        season_best_players[0][team] = player;
    }
    if (apps >= 20) {
        d_5d9c_9aec = (int)((float)rating_total / apps * 100) / 100;
        if (season_best_avg_rating[team] < d_5d9c_9aec) {
            season_best_avg_rating[team] = d_5d9c_9aec;
            season_best_players = vm_map(season_best_players_handle, 1);
            season_best_players[1][team] = player;
        }
    }
}

void club_records_screen(int team)
{
    struct recpos far *cell;
    FILE *fp;
    char lines[20][80];
    char buf[320];
    char name[40];
    struct recpos pos[20] = {
        { 17.125, 6.5, 6, 2, 138 }, { 34.625, 6.5, 6, 3, 36 },
        { 17.125, 7.5, 6, 9, 138 }, { 34.625, 7.5, 6, 3, 36 },
        { 17.125, 8.5, 6, 2, 138 }, { 34.625, 8.5, 6, 3, 36 },
        { 17.125, 9.5, 6, 9, 138 }, { 34.625, 9.5, 6, 3, 36 },
        { 17.125, 10.5, 6, 2, 138 }, { 34.625, 10.5, 6, 3, 36 },
        { 17.125, 19.0, 6, 2, 138 }, { 34.625, 19.0, 6, 3, 36 },
        { 17.125, 20.0, 6, 9, 138 }, { 34.625, 20.0, 6, 3, 36 },
        { 1.125, 14.25, 6, 14, 151 }, { 1.125, 15.25, 6, 14, 151 },
        { 20.25, 14.25, 6, 14, 151 }, { 20.25, 15.25, 6, 14, 151 },
        { 17.125, 21.0, 6, 2, 138 }, { 34.625, 21.0, 6, 3, 36 }
    };

    fp = fopen("records", "rb+");
    fseek(fp, (long)team * 279, 0);
    fread(records_buf, 1, 279, fp);
    fclose(fp);

    draw_club_title(1.25, team, "Club Records");
    sprintf(d_1f3e_3a5e, "%d", season + 1991);
    draw_label(1.125, 4.0, 1, 8, 0x130, "                   CLUB RECORDS");
    draw_label(1.125, 11.75, 1, 8, 0x130, "                 TRANSFER RECORDS");
    draw_label(1.125, 16.5, 1, 8, 0x130, "                  PLAYER RECORDS");
    for (d_5d9c_9c7f = 0; d_5d9c_9c7f <= 1; d_5d9c_9c7f++) {
        draw_label(1.125, d_5d9c_9c7f * 12.5 + 5.25, 1, 12, 0x7e, " ACHIEVEMENT");
        draw_label(17.125, d_5d9c_9c7f * 12.5 + 5.25, 1, 4, 0x8a, " RECORD");
        draw_label(34.625, d_5d9c_9c7f * 12.5 + 5.25, 1, 4, 0x24, " YEAR");
    }
    for (d_5d9c_9c7d = 0; d_5d9c_9c7d <= 19; d_5d9c_9c7d++)
        strcpy(lines[d_5d9c_9c7d], "");

    /* best league placing */
    draw_label(1.125, 6.5, 1, 14, 0x7e, " BEST LEAGUE PLACING");
    stats_division = best_league_placing[team] / 20 + 1;
    if (stats_division < 5) {
        sprintf(lines[0], " %s IN DIVISION %d", ordinal_text(best_league_placing[team] % 20 + 1), stats_division);
        sprintf(lines[1], " %d", d_1f3e_3c04 + 1892);
    }

    /* biggest victory */
    draw_label(1.125, 7.5, 1, 14, 0x7e, " BIGGEST VICTORY");
    sprintf(penalty_score_text, "%d-%d", club_records[0][team], d_2f3c_0e18[team]);
    if (strcmp(penalty_score_text, "0-0")) {
        sprintf(lines[2], " %s V ", penalty_score_text);
        if (club_record_holders[0][team] == -1) {
            strncpy(buf, d_1f3e_3b80, 12);
            buf[12] = 0;
            strcat(lines[2], trim_spaces(buf));
            sprintf(lines[3], " %d", d_1f3e_3b8c + 1892);
        } else {
            sprintf(buf, "%.12s", club_name(club_record_holders[0][team]));
            strcat(lines[2], buf);
            sprintf(lines[3], " %s", d_1f3e_3a5e);
        }
    }

    /* heaviest defeat */
    draw_label(1.125, 8.5, 1, 14, 0x7e, " HEAVIEST DEFEAT");
    sprintf(penalty_score_text, "%d-%d", d_2f3c_0ea4[team], d_2f3c_0f30[team]);
    if (strcmp(penalty_score_text, "0-0")) {
        sprintf(lines[4], " %s V ", penalty_score_text);
        if (d_2f3c_03b4[team] == -1) {
            strncpy(buf, d_1f3e_3b8d, 12);
            buf[12] = 0;
            strcat(lines[4], trim_spaces(buf));
            sprintf(lines[5], " %d", d_1f3e_3b99 + 1892);
        } else {
            sprintf(buf, "%.12s", club_name(d_2f3c_03b4[team]));
            strcat(lines[4], buf);
            sprintf(lines[5], " %s", d_1f3e_3a5e);
        }
    }

    /* highest attendance */
    draw_label(1.125, 9.5, 1, 14, 0x7e, " HIGHEST ATTENDANCE");
    club_long_records = vm_map(club_long_records_handle, 0);
    sprintf(d_1f3e_3a0e, "%ld", club_long_records[0][team]);
    if (strcmp(d_1f3e_3a0e, "0")) {
        sprintf(lines[6], " %s V ", d_1f3e_3a0e);
        if (d_2f3c_04cc[team] == -1) {
            strncpy(buf, d_1f3e_3b9a, 12);
            buf[12] = 0;
            strcat(lines[6], trim_spaces(buf));
            sprintf(lines[7], " %d", d_1f3e_3ba6 + 1892);
        } else {
            sprintf(buf, "%.12s", club_name(d_2f3c_04cc[team]));
            strcat(lines[6], buf);
            sprintf(lines[7], " %s", d_1f3e_3a5e);
        }
    }

    /* lowest attendance */
    draw_label(1.125, 10.5, 1, 14, 0x7e, " LOWEST ATTENDANCE");
    club_long_records = vm_map(club_long_records_handle, 0);
    sprintf(d_1f3e_3a0e, "%ld", club_long_records[1][team]);
    if (strcmp(d_1f3e_3a0e, "0")) {
        sprintf(lines[8], " %s V ", d_1f3e_3a0e);
        if (d_2f3c_05e4[team] == -1) {
            strncpy(buf, d_1f3e_3ba7, 12);
            buf[12] = 0;
            strcat(lines[8], trim_spaces(buf));
            sprintf(lines[9], " %d", d_1f3e_3bb3 + 1892);
        } else {
            sprintf(buf, "%.12s", club_name(d_2f3c_05e4[team]));
            strcat(lines[8], buf);
            sprintf(lines[9], " %s", d_1f3e_3a5e);
        }
    }

    /* goals in a season */
    draw_label(1.125, 19.0, 1, 14, 0x7e, " GOALS IN A SEASON");
    sprintf(d_1f3e_39be, "%d", d_2f3c_0fbc[team]);
    if (strcmp(d_1f3e_39be, "0")) {
        strncpy(squad_name_text, d_1f3e_3bb4, 13);
        squad_name_text[13] = 0;
        sprintf(lines[10], " %s - %s", trim_spaces(squad_name_text), d_1f3e_39be);
        sprintf(lines[11], " %d", d_1f3e_3bc1 + 1892);
    }

    /* average rating in a season */
    draw_label(1.125, 20.0, 1, 14, 0x7e, " AV RT IN A SEASON");
    best_avg_rating_records = vm_map(best_avg_rating_handle, 0);
    if (best_avg_rating_records[team] > 0) {
        sprintf(award_rating_text, "%.2f", best_avg_rating_records[team]);
        strncpy(squad_name_text, d_1f3e_3bc2, 13);
        squad_name_text[13] = 0;
        sprintf(lines[12], " %s - %s", trim_spaces(squad_name_text), award_rating_text);
        sprintf(lines[13], " %d", d_1f3e_3bcf + 1892);
    }

    /* record fee paid */
    draw_label(1.125, 13.0, 1, 4, 0x97, " RECORD FEE PAID");
    club_long_records = vm_map(club_long_records_handle, 0);
    sprintf(d_1f3e_3f90, "%ld", club_long_records[2][team]);
    if (strcmp(d_1f3e_3f90, "0")) {
        sprintf(lines[14], " %s FOR ", d_1f3e_3f90);
        strcpy(lines[15], " FROM ");
        if (d_2f3c_06fc[team] == -1) {
            strncpy(buf, d_1f3e_3bd0, 13);
            buf[13] = 0;
            strcpy(name, trim_spaces(buf));
            strncpy(buf, d_1f3e_3bdd, 12);
            buf[12] = 0;
            strcat(lines[15], trim_spaces(buf));
            sprintf(buf, " %d", d_1f3e_3be9 + 1892);
        } else {
            strcpy(name, player_short_name(d_2f3c_06fc[team]));
            sprintf(buf, "%.12s %s", club_name(d_2f3c_0814[team]), d_1f3e_3a5e);
        }
        strcat(lines[15], buf);
        if (strlen(name) > 12)
            strcpy(name, name + 2);
        strcat(lines[14], name);
    }

    /* record fee recouped */
    draw_label(20.25, 13.0, 1, 4, 0x97, " RECORD FEE RECOUPED");
    club_long_records = vm_map(club_long_records_handle, 0);
    sprintf(d_1f3e_3f90, "%ld", club_long_records[3][team]);
    if (strcmp(d_1f3e_3f90, "0")) {
        sprintf(lines[16], " %s FOR ", d_1f3e_3f90);
        strcpy(lines[17], " TO ");
        if (d_2f3c_092c[team] == -1) {
            strncpy(buf, d_1f3e_3bea, 13);
            buf[13] = 0;
            strcpy(name, trim_spaces(buf));
            strncpy(buf, d_1f3e_3bf7, 12);
            buf[12] = 0;
            strcat(lines[17], trim_spaces(buf));
            sprintf(buf, " %d", d_1f3e_3be9 + 1892);
        } else {
            strcpy(name, player_short_name(d_2f3c_092c[team]));
            sprintf(buf, "%.12s %s", club_name(d_2f3c_0a44[team]), d_1f3e_3a5e);
        }
        strcat(lines[17], buf);
        if (strlen(name) > 12)
            strcpy(name, name + 2);
        strcat(lines[16], name);
    }

    /* goals in a match */
    draw_label(1.125, 21.0, 1, 14, 0x7e, " GOALS IN A MATCH");
    sprintf(d_1f3e_39be, "%d", d_2f3c_14a8[team]);
    if (strcmp(d_1f3e_39be, "0")) {
        if (d_2f3c_0b5c[team] == -1) {
            strncpy(buf, d_1f3e_3c05, 13);
            buf[13] = 0;
            strcpy(squad_name_text, trim_spaces(buf));
            strncpy(buf, d_1f3e_3c12, 12);
            buf[12] = 0;
            strcpy(d_1f3e_396e, trim_spaces(buf));
            sprintf(lines[19], " %d", d_1f3e_3c1e + 1892);
        } else {
            strcpy(squad_name_text, player_short_name(d_2f3c_0c74[team]));
            sprintf(d_1f3e_396e, "%.12s", club_name(d_2f3c_0b5c[team]));
            sprintf(lines[19], " %s", d_1f3e_3a5e);
        }
        sprintf(lines[18], " %s -  %s", squad_name_text, d_1f3e_39be);
    }

    for (cell = pos, d_5d9c_9c7b = 0; d_5d9c_9c7b <= 19; d_5d9c_9c7b++, cell++)
        draw_label(cell->x, cell->y, cell->bg, cell->fg, cell->w, lines[d_5d9c_9c7b]);
    add_button(2, 1.25, 22.5, 1, 4, 0x12d, "                 DONE");
    do
        menu_choice = wait_for_button(last_button);
    while (menu_choice <= 0);
}

/* a club's history: its league and cup record over the last ten seasons */
void club_history_screen(int team)
{
    FILE *fp;
    char buf[12][80];
    int i;

    fp = fopen("records", "rb+");
    fseek(fp, (long)team * 279, 0);
    fread(records_buf, 1, 279, fp);
    fclose(fp);
    draw_club_title(1.25, team, "History");
    draw_label(1.125, 4.0, 0, 1, 0x130, "LEAGUE, FA CUP AND LEAGUE CUP");
    draw_label(1.125, 5.25, 1, 12, 0x22, " YEAR");
    draw_label(5.625, 5.25, 1, 12, 0x1c, " DIV");
    draw_label(9.375, 5.25, 1, 12, 0x12, "POS");
    draw_label(11.875, 5.25, 1, 12, 0x12, " W");
    draw_label(14.375, 5.25, 1, 12, 0x12, " D");
    draw_label(16.875, 5.25, 1, 12, 0x12, " L");
    draw_label(19.375, 5.25, 1, 12, 0x12, " F");
    draw_label(21.875, 5.25, 1, 12, 0x12, " A");
    draw_label(24.375, 5.25, 1, 12, 0x12, "PTS");
    draw_label(26.875, 5.25, 1, 12, 0x30, " FA CUP");
    draw_label(33.125, 5.25, 1, 12, 0x30, " LG CUP");
    draw_label(1.125, 16.75, 0, 1, 0x130, "EUROPEAN AND OTHER CUPS");
    for (d_5d9c_9c79 = 0; d_5d9c_9c79 <= 1; d_5d9c_9c79++) {
        draw_label(d_5d9c_9c79 * 19.125 + 1.125, 18.0, 1, 12, 0x22, " YEAR");
        draw_label(d_5d9c_9c79 * 19.125 + 5.625, 18.0, 1, 12, 0x73, " ACHIEVEMENT");
    }
    for (d_5d9c_9c7d = 0; d_5d9c_9c7d <= 11; d_5d9c_9c7d++)
        strcpy(buf[d_5d9c_9c7d], "");
    for (i = 1; i <= 10; i++) {
        memcpy(history_line, club_history_lines[i], 12);
        history_line[12] = 0;
        d_5d9c_9a7c = i + 5.5;
        if (i < 6) {
            d_5d9c_9a78 = 1.125;
            d_5d9c_9c77 = i + 18;
        } else {
            d_5d9c_9a78 = 20.25;
            d_5d9c_9c77 = i + 13;
        }
        d_5d9c_9c75 = history_line[0] + 1892;
        if (d_5d9c_9c75 > 1892 && season + 1991 > d_5d9c_9c75) {
            sprintf(buf[0], " %d", d_5d9c_9c75);
            best_league_slot = (unsigned char)history_line[1] - 32;
            if (best_league_slot < 80) {
                sprintf(buf[1], " %s", ordinal_text(best_league_slot / 20 + 1));
                sprintf(buf[2], "%3d", best_league_slot % 20 + 1);
                for (d_5d9c_9c73 = 3; d_5d9c_9c73 <= 8; d_5d9c_9c73++)
                    sprintf(buf[d_5d9c_9c73], "%3d", (unsigned char)history_line[d_5d9c_9c73 - 1] - 32);
            } else
                strcpy(buf[1], " NLG");
            d_5d9c_9c71 = (unsigned char)history_line[8] - 32;
            if (d_5d9c_9c71 > 0)
                sprintf(buf[9], " %s", fa_cup_round_name(d_5d9c_9c71));
            d_5d9c_9c6f = (unsigned char)history_line[9] - 32;
            if (d_5d9c_9c6f > 0)
                sprintf(buf[10], " %s", league_cup_round_name(d_5d9c_9c6f));
            d_5d9c_9c6d = (unsigned char)history_line[11] - 32;
            if (d_5d9c_9c6d > 0) {
                d_5d9c_9c6b = (unsigned char)history_line[10] - 32;
                sprintf(buf[11], " %s", other_cup_round_name(d_5d9c_9c6d, d_5d9c_9c6b));
            }
        }
        draw_label(1.125, d_5d9c_9a7c, 1, 4, 0x22, buf[0]);
        draw_label(d_5d9c_9a78, d_5d9c_9c77, 1, 4, 0x22, buf[0]);
        strcpy(buf[0], "");
        draw_label(5.625, d_5d9c_9a7c, 6, 3, 0x1c, buf[1]);
        strcpy(buf[1], "");
        for (d_5d9c_9c73 = 2; d_5d9c_9c73 <= 8; d_5d9c_9c73++) {
            draw_label((d_5d9c_9c73 - 2) * 2.5 + 9.375, d_5d9c_9a7c, 1, i & 1 ? 8 : 14, 0x12, buf[d_5d9c_9c73]);
            strcpy(buf[d_5d9c_9c73], "");
        }
        draw_label(26.875, d_5d9c_9a7c, 1, i & 1 ? 2 : 9, 0x30, buf[9]);
        strcpy(buf[9], "");
        draw_label(33.125, d_5d9c_9a7c, 1, i & 1 ? 2 : 9, 0x30, buf[10]);
        strcpy(buf[10], "");
        draw_label(d_5d9c_9a78 + 4.5, d_5d9c_9c77, 1, i & 1 ? 8 : 14, 0x73, buf[11]);
        strcpy(buf[11], "");
    }
    wait_for_click(0);
}

/* records a cup's winner and runner-up for this season, shifting the table up when full */
void record_cup_winners(int cup, int winner, int runner)
{
    past_winners = vm_map(past_winners_handle, 1);
    if (season <= 16)
        cup_slot = season - 1;
    else {
        for (label_split_pos = 0; label_split_pos <= 14; label_split_pos++)
            for (loop_j = 0; loop_j <= 2; loop_j++)
                past_winners[loop_j][label_split_pos][cup - 1] = past_winners[loop_j][label_split_pos + 1][cup - 1];
        cup_slot = 15;
    }
    past_winners[0][cup_slot][cup - 1] = season;
    past_winners[1][cup_slot][cup - 1] = winner;
    past_winners[2][cup_slot][cup - 1] = runner;
}

/* the past winners screen */
void past_winners_screen(void)
{
    int comp;
    char buf[160];

    new_screen("Past Winners");
    draw_label(1.125, 5.25, 0, 6, 0, " Year ");
    draw_label(5.875, 5.25, 0, 6, 0x5c, " Winners");
    draw_label(17.625, 5.25, 0, 6, 0x5c, " Runners up");
    for (label_split_pos = 0; label_split_pos <= 7; label_split_pos++)
        draw_competition_button(label_split_pos, 0);
    add_button(2, 1.25, 22.5, 1, 4, 0x12d, "                 Done");
    comp = 0;
    do {
        draw_competition_button(comp, -1);
        sprintf(buf, " Past %s", competition_names[comp]);
        if (comp > 0)
            strcat(buf, " Winners");
        draw_label(1.125, 4.0, 0, 1, 0x130, buf);
        past_winners = vm_map(past_winners_handle, 0);
        for (label_split_pos = 0; label_split_pos <= 15; label_split_pos++) {
            loop_k = label_split_pos & 1 ? 15 : 3;
            if (past_winners[0][label_split_pos][comp] > 0) {
                sprintf(buf, " %d", past_winners[0][label_split_pos][comp] + 1991);
                draw_label(1.125, label_split_pos + 6.25, 1, 4, 0x24, buf);
                sprintf(buf, " %s", club_name(past_winners[1][label_split_pos][comp]));
                draw_label(5.875, label_split_pos + 6.25, 1, loop_k, 0x5c, buf);
                sprintf(buf, " %s", club_name(past_winners[2][label_split_pos][comp]));
                draw_label(17.625, label_split_pos + 6.25, 1, loop_k, 0x5c, buf);
            } else {
                draw_label(1.125, label_split_pos + 6.25, 1, 4, 0x24, "");
                draw_label(5.875, label_split_pos + 6.25, 1, loop_k, 0x5c, "");
                draw_label(17.625, label_split_pos + 6.25, 1, loop_k, 0x5c, "");
            }
        }
        do {
            menu_choice = wait_for_button(-1);
            if (menu_choice == 0 && get_mouse_x() >= 0xec && get_mouse_x() <= 0x138
                && get_mouse_y() >= 0x24 && get_mouse_y() <= 0xaa)
                menu_choice = (get_mouse_y() - 36) / 17 + 2;
        } while (menu_choice <= 0 || comp + 2 == menu_choice || menu_choice > 9);
        if (menu_choice > 1) {
            draw_competition_button(comp, 0);
            comp = menu_choice - 2;
            present_screen_rect(8, 0x2c, 0xe8, 0xaa);
        }
    } while (menu_choice != 1);
}

void draw_competition_button(int comp, char highlight)
{
    char buf[160];
    int len;

    set_fill_colour(highlight ? 25 : 18);
    fill_rect(236, comp * 17 + 36, 312, comp * 17 + 51);
    set_draw_colour(25);
    draw_rect(236, comp * 17 + 36, 312, comp * 17 + 51);
    len = find_last_substring(competition_names[comp], " ");
    strcpy(buf, competition_names[comp]);
    buf[len - 1] = 0;
    draw_text_at(275 - strlen(buf) * 3 + 8, comp * 17 + 43, 1, buf);
    strcpy(buf, mid_chars(competition_names[comp], len + 1, 100));
    draw_text_at(275 - strlen(buf) * 3 + 8, comp * 17 + 50, 1, buf);
}

char far *fa_cup_round_name(int round)
{
    char far *s;

    s = next_text_buffer();
    switch (round) {
    case 38: case 39: strcpy(s, "  1ST"); break;
    case 44: case 45: strcpy(s, "  2ND"); break;
    case 50: case 51: strcpy(s, "  3RD"); break;
    case 56: case 57: strcpy(s, "  4TH"); break;
    case 62: case 63: strcpy(s, "  5TH"); break;
    case 68: case 69: strcpy(s, " Q FIN"); break;
    case 76: case 77: strcpy(s, " SEMIS"); break;
    case 88: case 89: strcpy(s, " FINAL"); break;
    case 100: strcpy(s, "  WON"); break;
    }
    strcpy(round_name_long, trim_spaces(s));
    if (round < 68)
        strcat(round_name_long, " ROUND");
    return s;
}

char far *league_cup_round_name(int round)
{
    char far *s;

    s = next_text_buffer();
    switch (round) {
    case 9: case 13: strcpy(s, "  1ST"); break;
    case 19: strcpy(s, "  2ND"); break;
    case 27: strcpy(s, "  3RD"); break;
    case 33: strcpy(s, "  4TH"); break;
    case 43: strcpy(s, " Q FIN"); break;
    case 61: case 65: strcpy(s, " SEMIS"); break;
    case 82: case 83: strcpy(s, " FINAL"); break;
    case 100: strcpy(s, "  WON"); break;
    }
    strcpy(round_name_long, trim_spaces(s));
    if (round < 43)
        strcat(round_name_long, " ROUND");
    return s;
}

char far *other_cup_round_name(int round, int cup)
{
    char far *s;

    s = next_text_buffer();
    if (cup == 1)
        strcpy(cup_short_name, "UEFA CUP");
    else if (cup == 2)
        strcpy(cup_short_name, "CW CUP");
    else if (cup == 3)
        strcpy(cup_short_name, "EURO CUP");
    else if (cup == 4)
        strcpy(cup_short_name, "Zenith CUP");
    else
        strcpy(cup_short_name, "Domark CUP");
    if (round == 100)
        strcpy(cup_round_text, "WINNERS");
    else if (cup < 3) {
        switch (round) {
        case 11: case 15: strcpy(cup_round_text, "PRELIMS"); break;
        case 17: case 21: case 23: case 25: strcpy(cup_round_text, "1ST RND"); break;
        case 31: case 35: strcpy(cup_round_text, "2ND RND"); break;
        case 53: case 59: strcpy(cup_round_text, "GROUPS"); break;
        case 67: case 71: strcpy(cup_round_text, "3RD RND"); break;
        case 75: case 79: strcpy(cup_round_text, "SEMIS"); break;
        case 87: case 91: strcpy(cup_round_text, "FINAL"); break;
        }
    } else if (cup == 3) {
        switch (round) {
        case 17: case 21: strcpy(cup_round_text, "1ST RND"); break;
        case 31: case 35: strcpy(cup_round_text, "2ND RND");
        case 53: case 59: case 67: case 71: case 75: case 79:
            strcpy(cup_round_text, "GROUPS"); break;
        case 91: strcpy(cup_round_text, "FINAL"); break;
        }
    } else if (cup == 4) {
        switch (round) {
        case 7: strcpy(cup_round_text, "QUALS"); break;
        case 9: strcpy(cup_round_text, "1ST RND"); break;
        case 11: strcpy(cup_round_text, "2ND RND"); break;
        case 23: strcpy(cup_round_text, "3RD RND"); break;
        case 41: strcpy(cup_round_text, "SEMIS"); break;
        case 53: strcpy(cup_round_text, "FINAL"); break;
        }
    } else {
        switch (round) {
        case 71: strcpy(cup_round_text, "Q FINS"); break;
        case 73: strcpy(cup_round_text, "SEMIS"); break;
        case 87: strcpy(cup_round_text, "FINAL"); break;
        default:
            if (round <= 67)
                strcpy(cup_round_text, "GROUPS");
            break;
        }
    }
    strcpy(round_name_long, cup_round_text);
    label_split_pos = find_substring(cup_round_text, "RND");
    if (label_split_pos > 0)
        strcpy(&round_name_long[label_split_pos], "ROUND");
    sprintf(s, "%s %s", cup_short_name, cup_round_text);
    return s;
}
