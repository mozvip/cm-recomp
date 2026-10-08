/* @at a1c3:0000 */
/* @data 5d9c:87a0 */
/* @module */

/* Overlay 9: the screens' helpers: the player's career and information pages, the club
 * Info screen, names and ordinals, rating and money formats, the title picture and the
 * palette, the text input box, buttons, menus and choices (new_screen, 2d08, 3298...),
 * the new game's menus, teams and personalities, future targets, the player details
 * screen with buying and the shortlist, and the history pages. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <stdlib.h>
#include <dos.h>
#include <ctype.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
long transfer_budget(int team);
void format_player_details(int player);
void toggle_future_line(void);
void blink_footer_arrow(void);
void new_game_setup(void);
int choose_new_game_team(int human);
int choose_personality(int human);
void reset_season_data(void);
void init_player_morale(void);
void build_nationality_pools(void);
void shuffle_league_order(void);
void news_message_box(int team, char far *title, char far *text);
void player_details_screen(int player, int team, char buy);
void player_history_screen(int player);
void draw_player_career(int player, int page);
void club_info_screen(int team);
void find_best_players(char current);
char far *pad_field(int width, char far *text);
int league_table_slot(int team);
int division_matches(int team);
char far *player_full_name(int player);
char far *player_short_name(int player);
char far *player_surname(int player);
char far *manager_name(int manager, char surname_only);
int player_nationality(int player);
char far *player_avg_rating_text(int season_idx, int player);
char far *format_average(int count, int total);
int top_human_division(void);
char far *number_in_words(int n);
char far *ordinal_text(int n);
void show_title_picture(void);
void clear_screen(void);
void blank_and_flip_screen(void);
void set_screen_palette(void);
void new_screen(char far *title);
void prompt_text_input(float x, int maxlen, char far *prompt);
void read_text_input(int x, float y, int colour, int maxlen);
void reset_buttons(void);
void add_button(int style, float x, float y, int bg, int fg, int width, char far *label);
void draw_button(int button, char inverted);
int wait_for_button(int prev_button);
void disable_button(int button);
void enable_all_buttons(void);
void wait_for_click(int mode);
void flush_input(void);
char far *capitalise_word(char far *text);

void draw_label(float x, float y, int bg, int fg, int w, char far *s);
void draw_text_box(float x, float y, int bg, int fg, int w, char far *s);
void draw_text_at(int x, int y, int colour, char far *s);
void set_fill_colour(int c);
void fill_rect(int x1, int y1, int x2, int y2);
void swap_bytes(void far *a, void far *b, int n);
struct label { int x, y; char far *s; };
extern unsigned char huge player_attrs[][1702];
extern unsigned char far team_colours[];
extern char far history_line[];
extern char far history_record[][6];
extern char far history_entries[][6];
extern unsigned char far d_2f3c_1b40[];
extern char near *team_names[];
extern char near *nonleague_names_from80[];
extern char menu_choice_done;
extern int cur_player;
extern int cur_y;
extern int loop_k;
extern int row_colour_a;
extern int d_5d9c_9bed;
extern int d_5d9c_9beb;
extern int d_5d9c_9be9;
extern int d_5d9c_9be7;
extern int d_5d9c_9be5;
extern int d_5d9c_9be3;
extern int d_5d9c_9bdd;
extern int d_5d9c_9bdb;
extern int history_count;
extern int d_5d9c_9dd1;
extern int d_5d9c_9c75;
extern int loop_j;
extern int d_5d9c_9cf3;
extern int d_5d9c_9d0b;
extern int d_5d9c_9d9b;
extern int d_5d9c_9cb1;
void draw_club_title(float x, int team, char far *title);
void set_text_opaque(int on);
char is_human_team(int x);
long overdraft_limit(int team);
long max_long(long a, long b);
int league_points_at(int x);
char far *fa_cup_round_name(int round);
char far *league_cup_round_name(int round);
char far *other_cup_round_name(int round, int cup);
void print_club_report(int team);
void club_history_screen(int team);
void club_records_screen(int team);
extern char is_demo_game;
extern char printer_on;
extern int d_5d9c_9be1;
extern int d_5d9c_9bdf;
extern int d_5d9c_9ca3;
extern float d_5d9c_9aec;
extern int cup_slot;
extern int best_league_slot;
extern int loop_i;
extern float text_x;
extern int d_5d9c_9f29;
extern int league_round;
extern int last_button;
extern int menu_choice;
extern int d_5d9c_9bd9;
extern int far team_manager[];
extern long far team_finances[][80];
extern long far season_attendance_total[];
extern int far player_rating_total[][0x6a6];
extern int far player_old_club_rating[];
extern unsigned char far club_records[][140];
extern unsigned char far fa_cup_round[];
extern unsigned char far d_2f3c_1160[];
extern unsigned char far d_2f3c_11ec[];
extern unsigned char far d_2f3c_1278[];
extern unsigned char far league_cup_round[];
extern unsigned char far ground_capacity[];
extern unsigned char far board_confidence[];
extern unsigned char far squad_size[];
extern unsigned char far league_record[][82];
extern unsigned char far team_wins[];
extern unsigned char far team_losses[];
extern unsigned char far home_games_played[];
extern int far squad_players[][26];
extern unsigned char huge player_stats[][1702];
extern char far intl_called_up[];
extern char far intl_under21[];
extern char far d_1f3e_2c4e[];
extern char far d_1f3e_2c9e[];
extern char far cup_short_name[];
extern char far round_name_long[];
extern char far club_title_text[];
extern char far award_rating_text[];
extern long far manager_award_points[];
extern float far player_award_ratings[][4];
extern int far player_award_winners[][4];
extern unsigned char far league_table[][20];
extern int far manager_first_name_idx[];
extern int far manager_surname_idx[];
extern int far manager_season_points[];
extern unsigned char far manager_team[];
extern int far player_first_name_idx[];
extern int far player_surname_idx[];
extern char far * far first_names[];
extern char far * far surnames[];
extern char far loaded_picture[];
extern char far factfile_name[];
extern char far key_text[];
extern char far input_text[];
extern char far manager_names[][4][20];
extern char far picture_file[];
extern char mouse_initialised;
extern char far *number_words_base[];
extern long manager_points;
extern float menu_start_ticks;
extern char d_5d9c_9b1a;
extern char d_5d9c_9b47;
extern int d_5d9c_9bd5;
extern int d_5d9c_9bd7;
extern int d_5d9c_9cf9;
extern int d_5d9c_9d9f;
extern int d_5d9c_9ded;
extern int human_count;
extern int d_5d9c_9f43;
extern int ranked_manager;
extern int stats_division;
extern int d_5d9c_9f71;
extern int manager_award_winners[];
extern long far *manager_points_ptr;
extern char video_mode;
extern int manager_points_handle;
extern int mouse_driver_present;
void install_keyboard_handler(void);
void remove_keyboard_handler(void);
char far *char_to_string();
void init_video_and_memory(void);
void set_palette_entry(int i, char r, char g, char b);
void show_screen_wait_click(void);
void present_screen(int noflip);
void present_screen_rect(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void set_draw_colour(int c);
void draw_rect(int x1, int y1, int x2, int y2);
void forget_font(void);
int take_mouse_clicks(void);
char far *poll_key_string(void);
long clock_ticks(void);
char far *next_text_buffer(void);
unsigned find_substring(char far *s, char far *set);
void far *vm_map(int handle, int page);
void show_pointer(void);
void hide_pointer(void);
void draw_text_font2(float x, float y, int colour, char far *s);
void load_title_picture(char c);
void set_picture_palette(void);
int get_mouse_x(void);
int get_mouse_y(void);
int random_below(int n);
void draw_label_font1(float x, float y, int bg, int fg, int w, char far *s);
long round_fee(long v, char c);
extern int button_colours_handle;
extern int button_geometry_handle;
extern int button_labels_handle;
extern int accounts_ems_handle;
extern unsigned char far *button_colours;
extern float (far *button_geometry)[100];
extern long (far *accounts_table)[80];
extern char far *button_labels;
extern unsigned char far button_disabled[];
extern char far tactics_text[];
extern char far targeted_by_text[];
extern int d_5d9c_9e9d;
extern int button_count;
extern int label_width;
extern int row_colour_b;
extern int button_style;
extern int label_split_pos;
extern int d_5d9c_9e8b;
extern int d_5d9c_9bcf;
extern int d_5d9c_9bcd;
extern float text_y;
extern float d_5d9c_9af0;
extern float d_5d9c_9afc;
extern float d_5d9c_9a70;
extern float d_5d9c_9a68;
extern float d_5d9c_9a64;
extern float d_5d9c_9a60;
extern char animate_footer;
extern char in_main_menu;
extern char d_5d9c_9b32;
extern long d_5d9c_99d8;
extern long d_5d9c_99d4;
extern long d_5d9c_99d0;
extern long d_5d9c_99cc;
char far *home_nation_name(int n);
int match_squad_slot(int player);
long player_value(int p, int n);
long round_value_estimate(long v);
char far *format_fee(long amount);
long insurance_premium(int player);
char player_wants_to_leave(int player);
char far *shirt_number_text(int x);
int shortlist_slot_of(int team, int p);
extern long team_long_value;
extern char player_unhappy;
extern int d_5d9c_9bf1;
extern int d_5d9c_9bf3;
extern int d_5d9c_9bf5;
extern int disallowed_reason;
extern int far contract_expiry[];
extern int far player_wages[];
extern char far * far injury_names[];
extern char far * far character_names[];
extern char far player_flags[][0x6a6];
extern char far player_sides[][0x6a6];
extern char far player_is_picked[];
extern char far is_transfer_listed[];
extern char far is_unapproachable[];
extern char far requested_transfer[];
extern char far at_lilleshall[];
extern char far is_insured[];
extern char far player_future_text[];
extern char far d_1f3e_2d3e[];
extern char far d_1f3e_2d8e[];
extern char far d_1f3e_2dde[];
extern char far morale_text[];
extern char far d_1f3e_2ece[];
extern char far d_1f3e_2f1e[];
extern char far d_1f3e_2f6e[];
extern char far d_1f3e_2fbe[];
extern char far d_1f3e_300e[];
extern char far d_1f3e_305e[];
extern char far d_1f3e_30ae[];
extern char far d_1f3e_30fe[];
extern char far availability_text[];
extern char far availability_title[];
extern char far d_1f3e_31ee[];
extern char far d_1f3e_323e[];
extern char far d_1f3e_328e[];
extern char far d_1f3e_32de[];
extern char far d_1f3e_332e[];
extern char far d_1f3e_337e[];
extern char far d_1f3e_33ce[];
extern char far d_1f3e_341e[];
extern char far d_1f3e_346e[];
extern char far d_1f3e_34be[];
extern char far d_1f3e_350e[];
extern char far d_1f3e_355e[];
extern char far d_1f3e_35ae[];
extern char far d_1f3e_35fe[];
extern char far d_1f3e_364e[];
extern char far d_1f3e_373e[];
extern char far d_1f3e_3e28[];
extern char far d_1f3e_4120[];
extern char far disallowed_text[];
extern char far punishment_text[];
extern char far squad_club_text[];
void show_menu(int n, char far *title, char far *items);
void wait_menu_choice(int last);
char far *club_name(int x);
float team_rating(int x);
void swap_into_division(int a, int b);
void enter_manager_name(int n);
extern char footer_arrow_on;
extern char footer_shows_targets;
extern char d_5d9c_9b22;
extern int d_5d9c_9c13;
extern int d_5d9c_9c15;
extern int swapped_team;
extern int d_5d9c_9c19;
extern int d_5d9c_9d8d;
extern int d_5d9c_9ecf;
extern int human_manager_index;
extern int human_manager_count;
extern int rankings_page;
extern int selected_team;
extern int d_5d9c_9f69;
extern char near *foreign_team_names[];
extern int far teams_by_name[];
extern unsigned char far staff_age[];
extern unsigned char far staff_contract[];
extern unsigned char far staff_character[];
extern unsigned char far staff_skills[];
extern unsigned char far staff_role[];
extern unsigned char far team_stats[][82];
extern unsigned char far foreign_team_rating[];
extern unsigned char far foreign_team_colours[];
extern unsigned char far foreign_away_colours[];
extern unsigned char far ground_coords[][140];
void clear_fixture_rows(int a, int b, int c);
void reset_team_selection(int t);
void swap_teams(int a, int b);
int min_int(int a, int b);
char is_league_week(int);
void vary_player_form(int p);
void draw_progress_step(int a, char c);
void draw_progress_step_bar(int a, char c, int i, int n);
extern int season;
extern int d_5d9c_9cef;
extern int d_5d9c_9d91;
extern int d_5d9c_9eb7;
extern int d_5d9c_9c1f;
extern int d_5d9c_9c1d;
extern int d_5d9c_9c0d;
extern int d_5d9c_9c0b;
extern int d_5d9c_9bff;
extern int d_5d9c_9bfd;
extern int current_week;
extern int match_counter;
extern int fa_cup_next_week;
extern int league_cup_next_week;
extern int zenith_cup_next_week;
extern int domark_cup_next_week;
extern int uefa_cup_next_week;
extern int cup_winners_next_week;
extern int european_cup_next_week;
extern int transfer_history_handle;
extern int d_5d9c_a342;
extern int d_5d9c_a340;
extern long d_5d9c_99c8;
extern char d_5d9c_9b1f;
extern int d_5d9c_a064[];
extern unsigned char cwc_english_entrant[];
extern char (far *transfer_history)[82][391];
extern int (far *intl_squads)[2][22];
extern int (far *d_5d9c_a006)[250];
extern int (far *d_5d9c_a002)[170];
extern unsigned char far injured_count[];
extern unsigned char far fit_keeper_count[];
extern unsigned char far season_status[];
extern int far week_fixtures[][2][94];
extern int far last_match_info[][80];
extern unsigned char far club_record_holders[];
extern int far shortlists[][16];
extern char far job_applicants[][101];
extern char far team_form[][82][5];
extern char far in_cup_draw[][80];
extern char far d_1f3e_b256[];
extern char far d_1f3e_36ee[];
extern int far week_matchfax_base[];
extern int far d_483b_a176[];
char far *upper_case(char far *s);
char far *right_chars(char far *s, unsigned n);
char is_after_transfer_deadline(int x);
char is_indispensable_player(int x);
void choose_manager(char all);
void list_managers(char redraw);
void message_box(char far *s);
extern unsigned char far transfer_bids_made[];
extern char far d_1f3e_369e[];
extern char playing_week_matches;
extern char exit_chosen;
extern int d_5d9c_9b9f;
extern int chosen_manager;
extern int d_5d9c_9bf7;
extern int away_is_human;
extern int home_is_human;
extern int player_screen_action;
extern int d_5d9c_9bef;

/* the career screen's buttons */
static struct label career_buttons[] = {
    {263, 50, "Seasons"}, {272, 84, "Apps"}, {269, 118, "Goals"}, {272, 152, "Av R"}
};

void draw_player_career(int player, int page)
{
    struct label far *button;
    char buf[320];

    new_screen("");
    sprintf(buf, " %s - aged %d", player_full_name(player), player_attrs[17][cur_player]);
    draw_text_box(1.25, 1.25, team_colours[player_attrs[18][player]] / 16,
                team_colours[player_attrs[18][player]] % 16, 0, buf);
    draw_label(1.125, 5.25, 1, 8, 0, " YEAR ");
    draw_label(5.875, 5.25, 1, 8, 100, " CLUB");
    draw_label(18.625, 5.25, 1, 8, 0, " AP ");
    draw_label(21.875, 5.25, 1, 8, 0, " GL ");
    draw_label(25.125, 5.25, 1, 8, 0, " AV R ");
    cur_y = 6;
    loop_k = 4;
    row_colour_a = 12;
    d_5d9c_9bed = 0;
    d_5d9c_9beb = 0;
    d_5d9c_9be9 = 0;
    d_5d9c_9be7 = 0;
    if (history_count == 0) {
        draw_label(1.125, 4.0, 0, 6, 0x130, " NO LEAGUE CAREER TO DATE");
    } else {
        d_5d9c_9be5 = -1;
        d_5d9c_9be3 = -1;
        if (history_count > 22) {
            d_5d9c_9dd1 = history_count - 21;
            d_5d9c_9bdd = d_5d9c_9dd1 - 1;
        } else {
            d_5d9c_9dd1 = 1;
            d_5d9c_9bdd = history_count;
        }
        d_5d9c_9c75 = history_entries[d_5d9c_9dd1 - 1][0] + 1892;
        sprintf(buf, " FOOTBALL LEAGUE CAREER SINCE %d", d_5d9c_9c75);
        draw_label(1.125, 4.0, 0, 6, 0x130, buf);
        loop_j = d_5d9c_9dd1;
        d_5d9c_9bdb = 1;
        do {
            unsigned char far *rec;

            rec = (unsigned char far *)history_line;
            memcpy(history_line, &history_record[loop_j - 1][1], 6);
            history_line[6] = 0;
            d_5d9c_9c75 = history_line[0] + 1892;
            if (d_5d9c_9c75 != d_5d9c_9be5) {
                d_5d9c_9bed++;
                d_5d9c_9be5 = d_5d9c_9c75;
            }
            d_5d9c_9cf3 = d_2f3c_1b40[history_line[1]];
            d_5d9c_9d0b = history_line[2] - 32;
            d_5d9c_9beb += d_5d9c_9d0b;
            d_5d9c_9d9b = history_line[3] - 32;
            d_5d9c_9be9 += d_5d9c_9d9b;
            d_5d9c_9cb1 = (rec[4] << 8) | rec[5];
            d_5d9c_9be7 += d_5d9c_9cb1;
            if ((page == 0 && d_5d9c_9bdb < 17) || (page == 1 && d_5d9c_9bdb > 16)) {
                sprintf(buf, " %d ", d_5d9c_9c75);
                draw_label(1.125, cur_y + 0.25, 6, 3, 0, buf);
                if (d_5d9c_9cf3 != d_5d9c_9be3) {
                    if (d_5d9c_9cf3 < 80)
                        sprintf(buf, " %.15s", (char far *)team_names[d_5d9c_9cf3]);
                    else
                        sprintf(buf, " %.15s", nonleague_names_from80[d_5d9c_9cf3]);
                    d_5d9c_9be3 = d_5d9c_9cf3;
                } else
                    strcpy(buf, "");
                draw_label(5.875, cur_y + 0.25, 1, loop_k, 100, buf);
                sprintf(buf, " %02d ", d_5d9c_9d0b);
                draw_label(18.625, cur_y + 0.25, 1, 2, 0, buf);
                sprintf(buf, " %02d ", d_5d9c_9d9b);
                draw_label(21.875, cur_y + 0.25, 1, 2, 0, buf);
                sprintf(buf, " %s ", format_average(d_5d9c_9d0b, d_5d9c_9cb1));
                draw_label(25.125, cur_y + 0.25, 1, 9, 0, buf);
                swap_bytes(&loop_k, &row_colour_a, 2);
                cur_y++;
            }
            d_5d9c_9bdb++;
            menu_choice_done = loop_j == d_5d9c_9bdd;
            if (loop_j == 22)
                loop_j = 1;
            else
                loop_j++;
        } while (!menu_choice_done);
    }
    while (cur_y < 22) {
        draw_label(1.125, cur_y + 0.25, 6, 3, 0, "      ");
        draw_label(5.875, cur_y + 0.25, 1, loop_k, 100, "");
        draw_label(18.625, cur_y + 0.25, 1, 2, 0, "    ");
        draw_label(21.875, cur_y + 0.25, 1, 2, 0, "    ");
        draw_label(25.125, cur_y + 0.25, 1, 9, 0, "      ");
        swap_bytes(&loop_k, &row_colour_a, 2);
        cur_y++;
    }
    for (cur_y = 36, button = career_buttons; cur_y <= 138; cur_y += 34, button++) {
        set_fill_colour(24);
        fill_rect(238, cur_y, 312, cur_y + 15);
        draw_text_at(266, cur_y + 7, 1, "Career");
        draw_text_at(button->x, button->y, 1, button->s);
    }
    sprintf(buf, "   %03d", d_5d9c_9bed);
    draw_text_box(30.0, 7.25, 0, 1, 71, buf);
    sprintf(buf, "   %03d", d_5d9c_9beb);
    draw_text_box(30.0, 11.5, 0, 1, 71, buf);
    sprintf(buf, "   %03d", d_5d9c_9be9);
    draw_text_box(30.0, 15.75, 0, 1, 71, buf);
    sprintf(buf, "   %.3s", format_average(-d_5d9c_9beb, d_5d9c_9be7));
    draw_text_box(30.0, 20.0, 0, 1, 71, buf);
}

void club_info_screen(int team)
{
    int best_player[3];
    char buf[320];
    char *columns[7] = { "PLD", "WON", "DRN", "LST", "FOR", "AGG", "PTS" };
    float best_value[3];
    unsigned i;
    int slot;

    do {
        draw_club_title(1.25, team, "Info");
        set_text_opaque(1);
        set_fill_colour(16);
        fill_rect(12, 28, 160, 86);
        fill_rect(12, 128, 316, 170);
        fill_rect(168, 28, 316, 86);
        fill_rect(12, 94, 316, 120);
        set_fill_colour(20);
        fill_rect(8, 24, 156, 82);
        set_fill_colour(19);
        fill_rect(8, 124, 312, 166);
        set_fill_colour(20);
        fill_rect(164, 24, 312, 82);
        set_fill_colour(30);
        fill_rect(8, 90, 312, 116);
        draw_label(1.375, 4.0, 0, 1, 144, "        General");
        draw_label(1.375, 5.0, 1, 12, 71, " Manager");
        sprintf(buf, " %.10s", manager_name(team_manager[team], -1));
        draw_label(10.5, 5.0, 1, 12, 71, buf);
        draw_label(1.375, 6.0, 1, 12, 71, " Board");
        sprintf(buf, " %d%%", board_confidence[team]);
        draw_label(10.5, 6.0, 1, 12, 71, buf);
        draw_label(1.375, 7.0, 1, 12, 71, " Capacity");
        sprintf(buf, " %ld", ground_capacity[team] * 1000L);
        draw_label(10.5, 7.0, 1, 12, 71, buf);
        draw_label(1.375, 8.0, 1, 12, 71, " Cash");
        if (is_demo_game != 0 || is_human_team(team))
            sprintf(buf, " %ld", max_long(team_finances[0][team] - overdraft_limit(team), 0L));
        else
            strcpy(buf, " Unknown");
        draw_label(10.5, 8.0, 1, 12, 71, buf);
        draw_label(1.375, 9.0, 1, 12, 71, " Ints");
        d_5d9c_9be1 = 0;
        d_5d9c_9bdf = 0;
        for (i = 0; i < 3; i++)
            best_value[i] = -1;
        for (slot = 0; slot <= squad_size[team] - 1; slot++) {
            cur_player = squad_players[team][slot];
            if (intl_called_up[cur_player] != 0) {
                if (intl_under21[cur_player] != 0)
                    d_5d9c_9bdf++;
                else
                    d_5d9c_9be1++;
            }
            d_5d9c_9d0b = player_stats[0][cur_player] - player_stats[12][cur_player];
            if (d_5d9c_9d0b > 0) {
                d_5d9c_9d9b = player_stats[1][cur_player] - player_stats[13][cur_player];
                d_5d9c_9aec = (float)(player_rating_total[0][cur_player] - player_old_club_rating[cur_player]) / d_5d9c_9d0b;
                d_5d9c_9ca3 = player_stats[2][cur_player] - player_stats[2][cur_player] % 5;
                if (d_5d9c_9d9b > best_value[0] || best_value[0] == -1) {
                    best_value[0] = d_5d9c_9d9b;
                    best_player[0] = cur_player;
                }
                if (d_5d9c_9aec > best_value[1] || best_value[1] == -1) {
                    best_value[1] = d_5d9c_9aec;
                    best_player[1] = cur_player;
                }
                if (d_5d9c_9ca3 > best_value[2] || best_value[2] == -1) {
                    best_value[2] = d_5d9c_9ca3;
                    best_player[2] = cur_player;
                }
            }
        }
        sprintf(buf, " %d", d_5d9c_9be1);
        draw_label(10.5, 9.0, 1, 12, 71, buf);
        draw_label(1.375, 10.0, 1, 12, 71, " U-21s");
        sprintf(buf, " %d", d_5d9c_9bdf);
        draw_label(10.5, 10.0, 1, 12, 71, buf);
        draw_label(20.875, 4.0, 0, 1, 144, "       CUP ROUNDS");
        draw_label(20.875, 5.0, 1, 12, 144, "       THE FA CUP");
        strcpy(d_1f3e_2c9e, "Draw Not Made");
        if (fa_cup_round[team] > 0) {
            strcpy(d_1f3e_2c4e, fa_cup_round_name(fa_cup_round[team]));
            strcpy(d_1f3e_2c9e, round_name_long);
        }
        sprintf(buf, "%*s", (72 - strlen(d_1f3e_2c9e) * 3) / 6 + strlen(d_1f3e_2c9e), d_1f3e_2c9e);
        draw_label(20.875, 6.0, 6, 12, 144, buf);
        strcpy(club_title_text, "THE Rumbelows CUP");
        sprintf(buf, "%*s", (72 - strlen(club_title_text) * 3) / 6 + strlen(club_title_text), club_title_text);
        draw_label(20.875, 7.0, 1, 12, 144, buf);
        strcpy(d_1f3e_2c9e, "Draw Not Made");
        if (league_cup_round[team] > 0) {
            strcpy(d_1f3e_2c4e, league_cup_round_name(league_cup_round[team]));
            strcpy(d_1f3e_2c9e, round_name_long);
        }
        sprintf(buf, "%*s", (72 - strlen(d_1f3e_2c9e) * 3) / 6 + strlen(d_1f3e_2c9e), d_1f3e_2c9e);
        draw_label(20.875, 8.0, 6, 12, 144, buf);
        if (d_2f3c_1160[team] > 0)
            cup_slot = 7;
        else if (d_2f3c_11ec[team] > 0)
            cup_slot = 8;
        else if (d_2f3c_1278[team] > 0)
            cup_slot = 9;
        else if (team < 40)
            cup_slot = 11;
        else
            cup_slot = 12;
        strcpy(d_1f3e_2c4e, other_cup_round_name(club_records[cup_slot][team], cup_slot - 6 - (cup_slot >= 11 ? 1 : 0)));
        sprintf(club_title_text, "THE %s", cup_short_name);
        sprintf(buf, "%*s", (72 - strlen(club_title_text) * 3) / 6 + strlen(club_title_text), club_title_text);
        draw_label(20.875, 9.0, 1, 12, 144, buf);
        strcpy(d_1f3e_2c9e, "Draw Not Made");
        if (club_records[cup_slot][team] > 0)
            strcpy(d_1f3e_2c9e, round_name_long);
        sprintf(buf, "%*s", (72 - strlen(d_1f3e_2c9e) * 3) / 6 + strlen(d_1f3e_2c9e), d_1f3e_2c9e);
        draw_label(20.875, 10.0, 6, 12, 144, buf);
        draw_label(1.375, 12.25, 1, 2, 300, "                  League Record");
        best_league_slot = league_table_slot(team);
        draw_label(1.375, 13.25, 0, 1, 34, " DIV");
        sprintf(buf, " %s", ordinal_text(best_league_slot / 20 + 1));
        draw_label(1.375, 14.25, 1, 4, 34, buf);
        draw_label(5.875, 13.25, 0, 1, 33, " POS");
        sprintf(buf, " %s", ordinal_text(best_league_slot % 20 + 1));
        draw_label(5.875, 14.25, 1, 4, 33, buf);
        for (loop_i = 0; loop_i <= 6; loop_i++) {
            text_x = loop_i * 4.125 + 10.25;
            sprintf(buf, " %s", columns[loop_i]);
            draw_label(text_x, 13.25, 0, 6, 31, buf);
            if (loop_i == 0)
                d_5d9c_9f29 = league_round - 1;
            else if (loop_i == 1)
                d_5d9c_9f29 = team_wins[team];
            else if (loop_i == 2)
                d_5d9c_9f29 = league_round - 1 - team_wins[team] - team_losses[team];
            else if (loop_i == 6)
                d_5d9c_9f29 = league_points_at(best_league_slot);
            else
                d_5d9c_9f29 = league_record[loop_i][team];
            sprintf(buf, "%3d", d_5d9c_9f29);
            draw_label(text_x, 14.25, 1, 4, 31, buf);
        }
        draw_label(1.375, 16.5, 0, 1, 300, "                   This season");
        draw_label(1.375, 17.5, 0, 6, 149, " Average attendance");
        strcpy(club_title_text, "");
        if (home_games_played[team] > 0)
            sprintf(club_title_text, " %ld", season_attendance_total[team] / home_games_played[team]);
        draw_label(20.25, 17.5, 0, 6, 149, club_title_text);
        draw_label(1.375, 18.5, 0, 6, 149, " Top Goalscorer");
        strcpy(club_title_text, "");
        if (best_value[0] > 0) {
            strcpy(buf, player_short_name(best_player[0]));
            buf[18] = 0;
            sprintf(club_title_text, " %s - %4.0f", buf, best_value[0]);
        }
        draw_label(20.25, 18.5, 0, 6, 149, club_title_text);
        draw_label(1.375, 19.5, 0, 6, 149, " Best Average Rating");
        strcpy(club_title_text, "");
        if (best_value[1] > 0) {
            sprintf(award_rating_text, "%4.2f", best_value[1]);
            strcpy(buf, player_short_name(best_player[1]));
            buf[16] = 0;
            sprintf(club_title_text, " %s - %s", buf, award_rating_text);
        }
        draw_label(20.25, 19.5, 0, 6, 149, club_title_text);
        draw_label(1.375, 20.5, 0, 6, 149, " Worst Discipline");
        strcpy(club_title_text, "");
        if (best_value[2] > 0) {
            strcpy(buf, player_short_name(best_player[2]));
            buf[18] = 0;
            sprintf(club_title_text, " %s - %4.2f", buf, best_value[2]);
        }
        draw_label(20.25, 20.5, 0, 6, 149, club_title_text);
        add_button(2, 25.75, 1.125, 1, 2, 31, "PRNT");
        add_button(2, 30.25, 1.125, 1, 2, 31, "HIST");
        add_button(2, 34.75, 1.125, 1, 2, 31, "RECS");
        add_button(2, 1.25, 22.5, 1, 4, 301, "                 DONE");
        if (printer_on == 0)
            disable_button(1);
        do {
            d_5d9c_9bd9 = menu_choice = wait_for_button(last_button);
            if (d_5d9c_9bd9 == 1) {
                print_club_report(team);
                draw_button(1, 0);
            }
        } while (d_5d9c_9bd9 <= 0);
        if (d_5d9c_9bd9 == 2)
            club_history_screen(team);
        else if (d_5d9c_9bd9 == 3)
            club_records_screen(team);
    } while (d_5d9c_9bd9 != 4);
}

void find_best_players(char current)
{
    unsigned i, j;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 4; j++)
            player_award_ratings[i][j] = 0;
    memset(player_award_winners, -1, 16);
    memset(manager_award_points, 0, 16);
    memset(manager_award_winners, -1, 8);
    d_5d9c_9bd7 = 3 - current * 17;
    for (cur_player = 0; cur_player <= 0x6a3; cur_player++) {
        if ((d_5d9c_9d0b = player_stats[current ? 0 : 21][cur_player]) >= d_5d9c_9bd7) {
            if (current)
                d_5d9c_9bd5 = player_rating_total[0][cur_player];
            else
                d_5d9c_9bd5 = (int)player_stats[22][cur_player];
            d_5d9c_9aec = (float)d_5d9c_9bd5 / d_5d9c_9d0b;
            stats_division = player_attrs[18][cur_player] / 20;
            d_5d9c_9f43 = player_attrs[17][cur_player] < 22;
            if (player_award_ratings[d_5d9c_9f43][stats_division] < d_5d9c_9aec) {
                player_award_winners[d_5d9c_9f43][stats_division] = cur_player;
                player_award_ratings[d_5d9c_9f43][stats_division] = d_5d9c_9aec;
            }
        }
    }
    for (ranked_manager = 0; ranked_manager <= human_count + 645; ranked_manager++) {
        if (manager_team[ranked_manager] < 0xff) {
            if (current) {
                manager_points_ptr = vm_map(manager_points_handle, 0);
                manager_points = manager_points_ptr[ranked_manager];
            } else
                manager_points = manager_season_points[ranked_manager];
            stats_division = manager_team[ranked_manager] / 20;
            if (manager_award_points[stats_division] < manager_points) {
                manager_award_winners[stats_division] = ranked_manager;
                manager_award_points[stats_division] = manager_points;
            }
        }
    }
}

char far *pad_field(int width, char far *text)
{
    char far *out;
    char tmp[320];

    out = next_text_buffer();
    if (strlen(text) > width - 1) {
        sprintf(tmp, "%.*s", width - 1, text);
        sprintf(out, " %s", tmp);
    } else
        sprintf(out, " %-*s", width - 1, text);
    return out;
}

int league_table_slot(int team)
{
    d_5d9c_9cf9 = 80;
    for (d_5d9c_9f71 = 0; d_5d9c_9f71 <= 79; d_5d9c_9f71++) {
        if (league_table[0][d_5d9c_9f71] == team) {
            d_5d9c_9cf9 = d_5d9c_9f71;
            d_5d9c_9f71 = 79;
        }
    }
    return d_5d9c_9cf9;
}

int division_matches(int team)
{
    switch (team / 20) {
    case 0:
        d_5d9c_9d9f = 22;
        break;
    case 1:
    case 2:
    case 3:
        d_5d9c_9d9f = 21;
    }
    return d_5d9c_9d9f;
}

char far *player_full_name(int player)
{
    char far *buf;

    buf = next_text_buffer();
    if (player >= 0 && player <= 0x6a3)
        sprintf(buf, "%s %s", first_names[player_first_name_idx[player]], surnames[player_surname_idx[player]]);
    else
        strcpy(buf, "");
    return buf;
}

char far *player_short_name(int player)
{
    char has_space;
    char far *buf;

    buf = next_text_buffer();
    has_space = find_substring(player_full_name(player), " ");
    if (has_space != 0)
        sprintf(buf, "%c.", *player_full_name(player));
    strcat(buf, player_surname(player));
    return buf;
}

char far *player_surname(int player)
{
    char far *buf;
    char name[40];

    buf = next_text_buffer();
    strcpy(name, player_full_name(player));
    strcpy(buf, name + find_substring(name, " "));
    return buf;
}

char far *manager_name(int manager, char surname_only)
{
    char far *buf;
    char forename[80];

    buf = next_text_buffer();
    if (manager < 646) {
        strcpy(forename, first_names[manager_first_name_idx[manager]]);
        strcpy(factfile_name, surnames[manager_surname_idx[manager]]);
    } else {
        strcpy(forename, manager_names[0][manager - 646]);
        strcpy(factfile_name, manager_names[1][manager - 646]);
    }
    if (!surname_only)
        sprintf(buf, "%s %s", forename, factfile_name);
    else
        strcpy(buf, factfile_name);
    return buf;
}

int player_nationality(int player)
{
    int roll;

    roll = player % 100 + 1;
    if (roll <= 55)
        return 0;
    if (roll <= 70)
        return 1;
    if (roll <= 80)
        return 2;
    if (roll <= 90)
        return 3;
    return 4;
}

char far *player_avg_rating_text(int season_idx, int player)
{
    char far *buf;

    buf = next_text_buffer();
    if (player_stats[season_idx * 5][player] > 0)
        sprintf(buf, "%4.2f", (float)player_rating_total[season_idx][player] / player_stats[season_idx * 5][player]);
    else
        strcpy(buf, "----");
    return buf;
}

char far *format_average(int count, int total)
{
    char far *buf;

    buf = next_text_buffer();
    if (count == 0)
        strcpy(buf, "----");
    else if (count > 0)
        sprintf(buf, "%4.2f", (float)total / count);
    else if (count < 0)
        sprintf(buf, "%3.1f", (float)total / abs(count));
    return buf;
}

int top_human_division(void)
{
    int division;

    division = 4;
    if (is_demo_game == 0) {
        for (loop_i = 646; loop_i <= human_count + 645; loop_i++) {
            if (manager_team[loop_i] < 0xff) {
                stats_division = manager_team[loop_i] / 20;
                if (stats_division < division)
                    division = stats_division;
            }
        }
    }
    if (division == 4)
        division = 0;
    return division;
}

/* numbers in words. 25b0 reads it from entry 1 through number_words_base, one entry before:
 * BCC folds that base into the displacement as the original does */
static char far *number_words[] = {
    "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
    "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen"
};

char far *number_in_words(int n)
{
    char far *buf;

    buf = next_text_buffer();
    strcpy(buf, "");
    if (n >= 1 && n <= 15)
        strcpy(buf, number_words_base[n]);
    else
        sprintf(buf, "%d", n);
    return buf;
}

char far *ordinal_text(int n)
{
    char far *buf;

    buf = next_text_buffer();
    sprintf(buf, "%d", n);
    if (n % 10 == 1 && n != 11)
        strcat(buf, "ST");
    else if (n % 10 == 2 && n != 12)
        strcat(buf, "ND");
    else if (n % 10 == 3 && n != 13)
        strcat(buf, "RD");
    else
        strcat(buf, "TH");
    return buf;
}

void show_title_picture(void)
{
    clear_screen();
    forget_font();
    show_screen_wait_click();
    strcpy(loaded_picture, "");
    strcpy(picture_file, "picture1.lbm");
    load_title_picture(-1);
    set_screen_palette();
}

void clear_screen(void)
{
    init_video_and_memory();
    set_fill_colour(0);
    fill_rect(0, 0, 0x13f, 0xc7);
}

void blank_and_flip_screen(void)
{
    char pal[48];

    memset(pal, 0, 48);
    set_text_opaque(1);
    if (d_5d9c_9b1a != 0 && video_mode == 2) {
        _ES = _SS;
        _DX = (unsigned)pal;
        asm mov bx, 0;
        _CX = 16;
        _AX = 0x1012;
        geninterrupt(0x10);
    }
    present_screen(0);
    if (d_5d9c_9b1a != 0) {
        set_picture_palette();
        d_5d9c_9b1a = 0;
    }
}

/* colours 16-31 of the palette, as RGB triples */
static unsigned char screen_palette_rgb[] = {
    0, 0, 0, 15, 15, 15, 14, 2, 0, 0, 10, 4, 0, 4, 10, 0, 14, 14, 14, 14, 6, 12, 0, 14,
    10, 10, 10, 14, 8, 0, 2, 2, 8, 6, 0, 6, 2, 8, 12, 0, 10, 10, 7, 7, 7, 0, 8, 2
};

void set_screen_palette(void)
{
    int r, g, b;
    unsigned char far *rgb;

    rgb = screen_palette_rgb;
    for (d_5d9c_9ded = 16; d_5d9c_9ded <= 31; d_5d9c_9ded++) {
        r = *rgb++;
        g = *rgb++;
        b = *rgb++;
        set_palette_entry(d_5d9c_9ded, r, g, b);
    }
}

void new_screen(char far *title)
{
    char text[160];
    char buf[320];

    strcpy(text, title);
    reset_buttons();
    blank_and_flip_screen();
    set_draw_colour(17);
    draw_rect(0, 0, 0x13f, 0xc7);
    if (text[0] != 0) {
        text_x = 19.0 - strlen(text) / 2.0;
        set_fill_colour(16);
        fill_rect(text_x * 8.0 + 6.0, 6, (strlen(text) + text_x) * 8.0 + 19.0, 20);
        sprintf(buf, " %s ", text);
        draw_text_box(text_x, -1.0, 1, 4, 0, buf);
    }
    d_5d9c_9b47 = -1;
}

void prompt_text_input(float x, int maxlen, char far *prompt)
{
    draw_text_font2(x, 21.0, 5, prompt);
    read_text_input(x + 1 + strlen(prompt), 21.0, 9, maxlen);
    present_screen_rect(4, 0xa3, 0x13c, 0xb2);
}

void read_text_input(int x, float y, int colour, int maxlen)
{
    register int key;

    if (mouse_driver_present == 0) {
        mouse_initialised = 0;
        hide_pointer();
        remove_keyboard_handler();
    }
    flush_input();
    strcpy(input_text, "");
    do {
        menu_start_ticks = clock_ticks();
        do {
            strcpy(key_text, poll_key_string());
            if (take_mouse_clicks() == 0)
                menu_start_ticks = clock_ticks();
            else if (clock_ticks() - menu_start_ticks > 300)
                strcpy(key_text, char_to_string(13));
        } while (!(key_text[0] == 0x7f || key_text[0] == 13 || key_text[0] == 8
                   || key_text[0] == '.' || key_text[0] == ' ' || key_text[0] == '\''
                   || (key_text[0] >= '0' && key_text[0] <= '9')
                   || (key_text[0] >= 'A' && key_text[0] <= 'Z')
                   || (key_text[0] >= 'a' && key_text[0] <= 'z')));
        key = key_text[0];
        if ((key == 0x7f || key == 8) && input_text != "") {
            input_text[strlen(input_text) - 1] = 0;
            present_screen_rect(x * 8 - 10, y * 8.0 - 5.0, (x + maxlen - 1) * 8 - 1, y * 8.0 + 10.0);
            draw_text_font2(x, y, colour, input_text);
        } else if (strlen(input_text) < maxlen && key != 13 && key != 0x7f && key != 8) {
            strcat(input_text, key_text);
            present_screen_rect(x * 8 - 10, y * 8.0 - 5.0, (x + maxlen - 1) * 8 - 1, y * 8.0 + 10.0);
            draw_text_font2(x, y, colour, input_text);
        }
    } while (key != 13 && maxlen != 1);
    if (mouse_driver_present == 0) {
        install_keyboard_handler();
        mouse_initialised = 1;
        show_pointer();
    }
}

void reset_buttons(void)
{
    unsigned i, j;

    button_colours = vm_map(button_colours_handle, 1);
    _fmemset(button_colours, 0, 400);
    _fmemset(button_disabled, 0, 100);
    button_geometry = vm_map(button_geometry_handle, 1);
    for (i = 0; i < 7; i++)
        for (j = 0; j < 100; j++)
            button_geometry[i][j] = 0;
    button_labels = vm_map(button_labels_handle, 1);
    for (d_5d9c_9e9d = 0; d_5d9c_9e9d <= 99; d_5d9c_9e9d++)
        strcpy(button_labels + d_5d9c_9e9d * 40, "");
    button_count = 0;
    last_button = 0;
}

void add_button(int style, float x, float y, int bg, int fg, int width, char far *label)
{
    int saved_bg, saved_fg, saved_style;
    float saved_x, saved_y;

    saved_bg = row_colour_a;
    saved_fg = row_colour_b;
    saved_x = text_x;
    saved_y = text_y;
    saved_style = button_style;
    row_colour_a = bg;
    row_colour_b = fg;
    button_style = style;
    text_x = x;
    text_y = y;
    strcpy(tactics_text, label);
    if (text_x == -1) {
        if (button_style > 0)
            text_x = 20.0 - strlen(tactics_text) / 2.0;
        else
            text_x = (160 - strlen(tactics_text) * 3) / 8.0;
    }
    button_labels = vm_map(button_labels_handle, 1);
    strcpy(button_labels + button_count * 40, tactics_text);
    button_colours = vm_map(button_colours_handle, 1);
    button_colours[button_count] = (row_colour_a << 4) + row_colour_b;
    (button_colours + 100)[button_count] = button_style;
    button_geometry = vm_map(button_geometry_handle, 1);
    button_geometry[0][button_count] = text_x;
    button_geometry[1][button_count] = text_y;
    if (width > 0)
        label_width = width;
    else
        label_width = strlen(tactics_text) * (8 - (button_style == 0 ? 2 : 0));
    if (button_style == 0) {
        d_5d9c_9af0 = text_x * 8.0 - 1;
        d_5d9c_9afc = text_y * 8.0 - 6.0;
        d_5d9c_9a70 = label_width + text_x * 8.0 - 1;
        d_5d9c_9a68 = text_y * 8.0;
    } else if (button_style == 1) {
        d_5d9c_9af0 = text_x * 8.0 - 2.0;
        d_5d9c_9afc = text_y * 8.0 - 8.0;
        d_5d9c_9a70 = label_width + text_x * 8.0 + 1;
        d_5d9c_9a68 = text_y * 8.0;
    } else if (button_style == 2) {
        d_5d9c_9af0 = text_x * 8.0 - 2.0;
        d_5d9c_9afc = text_y * 8.0 - 5.0;
        d_5d9c_9a70 = label_width + text_x * 8.0 + 1;
        d_5d9c_9a68 = text_y * 8.0 + 10.0;
    }
    button_geometry = vm_map(button_geometry_handle, 1);
    button_geometry[2][button_count] = d_5d9c_9af0;
    button_geometry[3][button_count] = d_5d9c_9afc;
    button_geometry[4][button_count] = d_5d9c_9a70;
    button_geometry[5][button_count] = d_5d9c_9a68;
    button_geometry[6][button_count] = width;
    button_count++;
    draw_button(button_count, 0);
    row_colour_a = saved_bg;
    row_colour_b = saved_fg;
    button_style = saved_style;
    text_x = saved_x;
    text_y = saved_y;
}

void draw_button(int button, char inverted)
{
    label_split_pos = button - 1;
    if (label_split_pos < 0)
        return;
    button_colours = vm_map(button_colours_handle, 0);
    row_colour_a = button_colours[label_split_pos] / 16;
    row_colour_b = button_colours[label_split_pos] % 16;
    if (row_colour_a <= 0 && row_colour_b <= 0)
        return;
    if (inverted != 0 && row_colour_b > 0)
        swap_bytes(&row_colour_a, &row_colour_b, 2);
    button_style = (button_colours + 100)[label_split_pos];
    button_geometry = vm_map(button_geometry_handle, 0);
    text_x = button_geometry[0][label_split_pos];
    text_y = button_geometry[1][label_split_pos];
    d_5d9c_9e8b = button_geometry[6][label_split_pos];
    button_labels = vm_map(button_labels_handle, 0);
    if (button_style == 0)
        draw_label(text_x, text_y, row_colour_a, row_colour_b, d_5d9c_9e8b,
                    button_labels + label_split_pos * 40);
    else if (button_style == 1)
        draw_label_font1(text_x, text_y, row_colour_a, row_colour_b, d_5d9c_9e8b,
                    button_labels + label_split_pos * 40);
    else if (button_style == 2)
        draw_text_box(text_x, text_y, row_colour_a, row_colour_b, d_5d9c_9e8b,
                    button_labels + label_split_pos * 40);
}

int wait_for_button(int prev_button)
{
    flush_input();
    d_5d9c_9bcf = -1;
    d_5d9c_9a64 = clock_ticks();
    d_5d9c_9a60 = clock_ticks();
    button_geometry = vm_map(button_geometry_handle, 0);
    do {
        if (take_mouse_clicks() > 0) {
            d_5d9c_9bcf = 0;
            for (d_5d9c_9e9d = 0; button_count - 1 >= d_5d9c_9e9d; d_5d9c_9e9d++) {
                if (get_mouse_x() >= button_geometry[2][d_5d9c_9e9d] &&
                    get_mouse_x() <= button_geometry[4][d_5d9c_9e9d] &&
                    get_mouse_y() >= button_geometry[3][d_5d9c_9e9d] &&
                    get_mouse_y() <= button_geometry[5][d_5d9c_9e9d]) {
                    if (button_disabled[d_5d9c_9e9d] == 0)
                        d_5d9c_9bcf = d_5d9c_9e9d + 1;
                    else
                        d_5d9c_9bcf = -1;
                    d_5d9c_9e9d = button_count - 1;
                }
            }
        }
        if (animate_footer != 0 && targeted_by_text[0] != 0) {
            if (clock_ticks() - d_5d9c_9a64 > 500) {
                toggle_future_line();
                d_5d9c_9a64 = clock_ticks();
            }
            if (clock_ticks() - d_5d9c_9a60 > 100) {
                blink_footer_arrow();
                d_5d9c_9a60 = clock_ticks();
            }
        }
    } while (d_5d9c_9bcf <= -1);
    if (prev_button > 0)
        draw_button(prev_button, 0);
    if (d_5d9c_9bcf > 0 && prev_button > -1)
        draw_button(d_5d9c_9bcf, -1);
    return last_button = d_5d9c_9bcf;
}

void disable_button(int button)
{
    button_disabled[button - 1] = 0xff;
}

void enable_all_buttons(void)
{
    for (d_5d9c_9e9d = 0; button_count - 1 >= d_5d9c_9e9d; d_5d9c_9e9d++)
        button_disabled[d_5d9c_9e9d] = 0;
}

void wait_for_click(int mode)
{
    draw_text_at(0xfc, 0xc5, 5, "CLICK MOUSE");
    if (is_demo_game != 0 && in_main_menu == 0 && d_5d9c_9b32 == 0) {
        menu_start_ticks = clock_ticks();
        do
            random_below(2);
        while (take_mouse_clicks() != 0 || clock_ticks() - menu_start_ticks <= 75);
    } else {
        flush_input();
        do {
            random_below(2);
            strcpy(key_text, "");
            if (mode == 2)
                strcpy(key_text, poll_key_string());
        } while (take_mouse_clicks() <= 0 && key_text[0] == 0);
    }
    present_screen_rect(0xf3, 0xbf, 0x13e, 0xc5);
    if (mode == 0)
        draw_text_at(0xfc, 0xc5, 5, "PLEASE WAIT");
}

void flush_input(void)
{
    char buf[10];

    do
        strcpy(buf, poll_key_string());
    while (buf[0] != 0 || take_mouse_clicks() != 0);
}

char far *capitalise_word(char far *text)
{
    char far *out;

    out = next_text_buffer();
    strcpy(out, text);
    for (d_5d9c_9bcd = 1; strlen(out) > d_5d9c_9bcd; d_5d9c_9bcd++)
        if (isupper(out[d_5d9c_9bcd]))
            out[d_5d9c_9bcd] = tolower(out[d_5d9c_9bcd]);
    return out;
}

long transfer_budget(int team)
{
    accounts_table = vm_map(accounts_ems_handle, 0);
    d_5d9c_99d8 = accounts_table[0][team] + accounts_table[5][team] + accounts_table[2][team];
    d_5d9c_99d4 = accounts_table[9][team] + accounts_table[12][team] + accounts_table[13][team];
    d_5d9c_99d0 = max_long(team_finances[0][team] - overdraft_limit(team), 0L) + d_5d9c_99d8 - d_5d9c_99d4;
    return d_5d9c_99cc = round_fee(d_5d9c_99d0 * 0.9, 0);
}

void format_player_details(int player)
{
    char buf[320];
    int morale;

    sprintf(buf, "%d years", player_attrs[17][player]);
    strcpy(d_1f3e_373e, pad_field(12, buf));
    strcpy(buf, team_names[player_attrs[18][player]]);
    strcpy(squad_club_text, pad_field(12, buf));
    strcpy(buf, home_nation_name(player_nationality(player)));
    if (intl_called_up[player]) {
        if (intl_under21[player] == 0)
            strcat(buf, " I");
        else
            strcat(buf, " U");
    }
    strcpy(d_1f3e_35fe, pad_field(12, buf));
    if (contract_expiry[player] > 0)
        sprintf(buf, "EXP %d/%d", d_5d9c_9bf5 % 100, (d_5d9c_9bf5 = contract_expiry[player]) / 100);
    else
        strcpy(buf, "Free agent");
    strcpy(d_1f3e_35ae, pad_field(12, buf));
    sprintf(buf, "%d p/w", player_wages[player]);
    strcpy(d_1f3e_355e, pad_field(12, buf));
    if (is_transfer_listed[player]) {
        strcpy(buf, "Listed");
        if (requested_transfer[player])
            strcat(buf, " R");
    } else if (is_unapproachable[player])
        strcpy(buf, "Staying");
    else
        strcpy(buf, "Unknown");
    strcpy(d_1f3e_2d8e, pad_field(12, buf));
    team_long_value = player_value(player, player_attrs[18][player]);
    if (is_transfer_listed[player] == 0 && is_human_team(player_attrs[18][player]) == 0)
        team_long_value = round_value_estimate(team_long_value);
    strcpy(buf, format_fee(team_long_value));
    if (is_transfer_listed[player] == 0)
        strcat(buf, " C");
    strcpy(d_1f3e_350e, pad_field(12, buf));
    if (is_insured[player])
        sprintf(buf, "%d p/w", insurance_premium(player));
    else
        strcpy(buf, "NONE");
    strcpy(d_1f3e_34be, pad_field(12, buf));

    strcpy(d_1f3e_3e28, "");
    if (player_flags[0][player])
        strcat(d_1f3e_3e28, " GK");
    if (player_flags[1][player])
        strcat(d_1f3e_3e28, " DEF");
    if (player_flags[2][player])
        strcat(d_1f3e_3e28, " MID");
    if (player_flags[3][player])
        strcat(d_1f3e_3e28, " ATT");
    strcpy(buf, &d_1f3e_3e28[1]);
    strcpy(d_1f3e_3e28, pad_field(12, buf));
    strcpy(d_1f3e_364e, "");
    if (player_sides[0][player])
        strcat(d_1f3e_364e, " R");
    if (player_sides[1][player])
        strcat(d_1f3e_364e, " L");
    if (player_sides[2][player])
        strcat(d_1f3e_364e, " C");
    if (d_1f3e_364e[0])
        strcpy(d_1f3e_364e, &d_1f3e_364e[1]);
    strcpy(d_1f3e_364e, pad_field(12, d_1f3e_364e));

    sprintf(buf, "%d", player_stats[0][player]);
    strcpy(d_1f3e_30fe, pad_field(8, buf));
    sprintf(buf, "%d", player_stats[1][player]);
    strcpy(d_1f3e_4120, pad_field(8, buf));
    sprintf(buf, "%d", player_stats[2][player] / 5 * 5);
    strcpy(punishment_text, pad_field(8, buf));
    strcpy(award_rating_text, pad_field(8, player_avg_rating_text(0, player)));
    if (player_stats[0][player] > 0) {
        sprintf(buf, "%d", player_stats[3][player]);
        strcpy(d_1f3e_30ae, pad_field(8, buf));
        sprintf(buf, "%d", player_stats[4][player]);
        strcpy(d_1f3e_305e, pad_field(8, buf));
    } else {
        strcpy(d_1f3e_30ae, " -      ");
        strcpy(d_1f3e_305e, d_1f3e_30ae);
    }
    sprintf(buf, "%d", player_stats[5][player]);
    strcpy(d_1f3e_300e, pad_field(7, buf));
    sprintf(buf, "%d", player_stats[6][player]);
    strcpy(d_1f3e_2fbe, pad_field(7, buf));
    sprintf(buf, "%d", player_stats[7][player]);
    strcpy(d_1f3e_2f6e, pad_field(7, buf));
    strcpy(d_1f3e_2f1e, pad_field(7, player_avg_rating_text(1, player)));
    if (player_stats[5][player] > 0) {
        sprintf(buf, "%d", player_stats[8][player]);
        strcpy(d_1f3e_2ece, pad_field(7, buf));
        sprintf(buf, "%d", player_stats[9][player]);
        strcpy(d_1f3e_2dde, pad_field(7, buf));
    } else {
        strcpy(d_1f3e_2ece, " -     ");
        strcpy(d_1f3e_2dde, d_1f3e_2ece);
    }

    strcpy(availability_title, "                  AVAILABILITY");
    if (player_attrs[20][player] > 0) {
        if (player_attrs[19][player] < 20) {
            if (at_lilleshall[player])
                strcpy(availability_title, "             LATEST FROM LILLESHALL");
            if (player_attrs[20][player] < 3)
                strcpy(d_1f3e_2d3e, "soon");
            else
                sprintf(d_1f3e_2d3e, "in about %d weeks", player_attrs[20][player]);
            sprintf(availability_text, "Has %s - back %s", injury_names[player_attrs[19][player]], d_1f3e_2d3e);
        } else {
            if (player_attrs[20][player] == 1)
                strcpy(d_1f3e_2d3e, "match");
            else
                sprintf(d_1f3e_2d3e, "%d matches", player_attrs[20][player]);
            sprintf(availability_text, "Suspended for next %s", d_1f3e_2d3e);
        }
    } else {
        sprintf(availability_text, "%d%% match fit", player_attrs[21][player]);
        if (player_is_picked[player]) {
            sprintf(buf, " - Shirt No.%s", shirt_number_text(match_squad_slot(player) + 1));
            strcat(availability_text, buf);
        }
    }
    strcpy(d_1f3e_346e, character_names[player_stats[17][player]]);
    if (player_flags[0][player] == 0) {
        sprintf(d_1f3e_341e, "%d", player_attrs[1][player]);
        sprintf(d_1f3e_33ce, "%d", player_attrs[2][player]);
        sprintf(d_1f3e_337e, "%d", player_attrs[3][player]);
        sprintf(d_1f3e_332e, "%d", player_attrs[4][player]);
        sprintf(d_1f3e_32de, "%d", player_attrs[5][player]);
        sprintf(d_1f3e_328e, "%d", player_attrs[6][player]);
        sprintf(d_1f3e_323e, "%d", player_attrs[22][player]);
    } else {
        strcpy(d_1f3e_341e, "");
        strcpy(d_1f3e_33ce, "");
        strcpy(d_1f3e_337e, "");
        strcpy(d_1f3e_332e, "");
        strcpy(d_1f3e_32de, "");
        strcpy(d_1f3e_328e, "");
        strcpy(d_1f3e_323e, "");
    }
    sprintf(d_1f3e_31ee, "%d", player_attrs[12][player]);
    morale = (player_attrs[15][player] - player_attrs[0][player]) / 10;
    if (morale <= -4)
        strcpy(morale_text, "Morale is very low");
    else if (morale <= -2)
        strcpy(morale_text, "Morale is low");
    else if (morale <= 1)
        strcpy(morale_text, "Morale is Ok");
    else if (morale <= 3)
        strcpy(morale_text, "Morale is good");
    else
        strcpy(morale_text, "Morale is superb");

    player_unhappy = player_wants_to_leave(player);
    if (player_unhappy && disallowed_reason == 1 && player_stats[14][player] == 0)
        player_unhappy = 0;
    if (is_transfer_listed[player] && requested_transfer[player]) {
        if (player_unhappy == 0)
            strcpy(disallowed_text, "But having second thoughts");
        sprintf(player_future_text, "Requested move - %s", disallowed_text);
    } else if (player_unhappy) {
        if (player_stats[14][player] > 0)
            sprintf(player_future_text, "%s to leave - %s", is_transfer_listed[player] ? "Wants" : "May ask", disallowed_text);
        else
            sprintf(player_future_text, "Unhappy - %s", disallowed_text);
    } else
        sprintf(player_future_text, "%s happy to stay at the club", is_transfer_listed[player] ? "He would be" : "He is");

    strcpy(targeted_by_text, "");
    if (player_stats[23][player] > 0 && is_unapproachable[player] == 0) {
        d_5d9c_9bf3 = 0;
        for (d_5d9c_9bf1 = 0; d_5d9c_9bf1 <= 79; d_5d9c_9bf1++) {
            if (is_human_team(d_5d9c_9bf1) == 0 && shortlist_slot_of(d_5d9c_9bf1, player) > 0) {
                d_5d9c_9bf3++;
                if (d_5d9c_9bf3 > 1) {
                    if (player_stats[23][player] == d_5d9c_9bf3)
                        strcat(targeted_by_text, " and ");
                    else if (player_stats[23][player] > d_5d9c_9bf3)
                        strcat(targeted_by_text, ", ");
                }
                strcat(targeted_by_text, team_names[d_5d9c_9bf1]);
            }
        }
    }
}

void toggle_future_line(void)
{
    draw_label(1.375, 24.375, 6, 4, 0x12a, "");
    if (footer_shows_targets == 0) {
        draw_label(1.375, 23.5, 0, 1, 0x12a, "                     FUTURE");
        draw_label(-1.0, 24.375, 6, 4, 0, player_future_text);
    } else {
        draw_label(1.375, 23.5, 0, 6, 0x12a, "                   TARGETED BY");
        draw_label(-1.0, 24.375, 1, 4, 0, targeted_by_text);
    }
    footer_shows_targets = !footer_shows_targets;
}

void blink_footer_arrow(void)
{
    draw_label(37.375, 23.5, 2, footer_shows_targets ? 1 : 6, 0, footer_arrow_on ? ">" : " ");
    footer_arrow_on = !footer_arrow_on;
}

void new_game_setup(void)
{
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 139; d_5d9c_9f69++)
        teams_by_name[d_5d9c_9f69] = d_5d9c_9f69 + (d_5d9c_9f69 >= 80 ? 400 : 0);
    for (loop_i = 0; loop_i <= 138; loop_i++)
        for (loop_j = loop_i + 1; loop_j <= 139; loop_j++)
            if (strcmp(club_name(teams_by_name[loop_i]), club_name(teams_by_name[loop_j])) > 0)
                swap_bytes(&teams_by_name[loop_i], &teams_by_name[loop_j], 2);
    d_5d9c_9b22 = -1;
    for (human_manager_index = 0x286; human_manager_index < 0x28a; human_manager_index++)
        manager_team[human_manager_index] = 255;
    show_menu(0, "New game", "Demo Game|One Player|Two Players|Three Players|Four Players|");
    human_count = human_manager_count = menu_choice;
    is_demo_game = human_manager_count == 0 ? -1 : 0;
    if (human_manager_count > 0) {
        for (cur_player = 1; cur_player <= human_count; cur_player++) {
            selected_team = choose_new_game_team(human_manager_index = cur_player + 0x285);
            if (selected_team >= 400) {
                swapped_team = -1;
                for (d_5d9c_9f69 = 60; d_5d9c_9f69 <= 79; d_5d9c_9f69++) {
                    if (is_human_team(d_5d9c_9f69) == 0) {
                        if ((d_5d9c_9d8d = team_rating(d_5d9c_9f69) + random_below(2) - random_below(2)) < d_5d9c_9c15
                            || swapped_team == -1) {
                            d_5d9c_9c15 = d_5d9c_9d8d;
                            swapped_team = d_5d9c_9f69;
                        }
                    }
                }
                swap_bytes((void *)&team_names[swapped_team], (void *)&foreign_team_names[selected_team], 2);
                team_stats[0][swapped_team] = 10;
                team_stats[1][swapped_team] = random_below(10) + 10;
                swap_bytes((void *)&team_stats[2][swapped_team], (void *)&foreign_team_colours[selected_team], 1);
                swap_bytes((void *)&team_stats[3][swapped_team], (void *)&foreign_away_colours[selected_team], 1);
                team_stats[4][swapped_team] = 13;
                foreign_team_rating[selected_team] = 10;
                swap_bytes((void *)&ground_coords[0][swapped_team], (void *)&ground_coords[0][selected_team - 400], 1);
                swap_bytes((void *)&ground_coords[1][swapped_team], (void *)&ground_coords[1][selected_team - 400], 1);
                selected_team = swapped_team;
            }
            human_manager_index = cur_player + 0x285;
            team_manager[selected_team] = human_manager_index;
            manager_team[human_manager_index] = selected_team;
            staff_age[human_manager_index] = 35;
            staff_contract[human_manager_index] = 25;
            staff_role[human_manager_index] = 0;
            staff_skills[human_manager_index] = 80;
            staff_character[human_manager_index] = choose_personality(human_manager_index);
            enter_manager_name(cur_player - 1);
        }
        show_menu(0, "Starting Division", "Division One|Division Two|Division Three|Division Four|");
        d_5d9c_9c19 = menu_choice + 1;
        for (ranked_manager = 0x286; ranked_manager <= human_count + 0x285; ranked_manager++) {
            selected_team = manager_team[ranked_manager];
            if (selected_team < 255) {
                if ((stats_division = selected_team / 20 + 1) < d_5d9c_9c19) {
                    for (d_5d9c_9ecf = stats_division; d_5d9c_9ecf <= d_5d9c_9c19 - 1; d_5d9c_9ecf++) {
                        swap_into_division(selected_team, d_5d9c_9ecf + 1);
                        selected_team = swapped_team;
                    }
                } else if (stats_division > d_5d9c_9c19) {
                    for (d_5d9c_9ecf = stats_division; d_5d9c_9ecf >= d_5d9c_9c19 + 1; d_5d9c_9ecf--) {
                        swap_into_division(selected_team, d_5d9c_9ecf - 1);
                        selected_team = swapped_team;
                    }
                }
            }
        }
    }
    d_5d9c_9b22 = 0;
}

int choose_new_game_team(int human)
{
    char buf[320];
    int teams[48];

    selected_team = -1;
    rankings_page = 1;
    do {
        new_screen("Team Choice");
        sprintf(buf, " Player %s choose team ", number_in_words(human - 645));
        draw_label(1.125, 4.0, 1, 2, 0x130, buf);
        add_button(2, 1.25, 22.5, 1, 4, 0x12d, "                 MORE");
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= (rankings_page == 3 ? 43 : 47); d_5d9c_9f69++) {
            teams[d_5d9c_9f69] = teams_by_name[(rankings_page - 1) * 48 + d_5d9c_9f69];
            text_x = d_5d9c_9f69 / 16 * 12.75 + 1.125;
            text_y = d_5d9c_9f69 + 6 - d_5d9c_9f69 / 16 * 16;
            sprintf(buf, " %.15s", club_name(teams[d_5d9c_9f69]));
            add_button(0, text_x, text_y, is_human_team(teams[d_5d9c_9f69]) ? 6 : 1,
                        d_5d9c_9f69 & 1 ? 15 : 3, 100, buf);
            if (is_human_team(teams[d_5d9c_9f69]))
                disable_button(d_5d9c_9f69 + 2);
        }
        do {
            menu_choice = wait_for_button(last_button);
        } while (menu_choice == 0);
        if (menu_choice == 1) {
            rankings_page++;
            if (rankings_page == 4)
                rankings_page = 1;
        } else
            selected_team = teams[menu_choice - 2];
    } while (selected_team == -1);
    return selected_team;
}

int choose_personality(int human)
{
    char buf[320];

    sprintf(buf, "Player %s", number_in_words(human - 645));
    new_screen(buf);
    draw_text_box(1.0, 4.0, 1, 2, 0, " Select Personality ");
    strcpy(buf, "");
    for (d_5d9c_9c13 = 0; d_5d9c_9c13 <= 9; d_5d9c_9c13++) {
        strcat(buf, character_names[d_5d9c_9c13]);
        strcat(buf, "|");
    }
    show_menu(7, "", buf);
    wait_menu_choice(9);
    return menu_choice;
}

void reset_season_data(void)
{
    for (loop_i = 0; loop_i <= 79; loop_i++) {
        for (loop_j = 0; loop_j <= 21; loop_j++) {
            switch (loop_j) {
            case 8: case 9: case 12: case 13: case 14: case 15: case 16: case 17: case 18:
            case 19: case 20:
                team_stats[loop_j][loop_i] = 0;
                break;
            case 0: case 1: case 2: case 4:
                last_match_info[loop_j][loop_i] = 0;
                break;
            }
        }
        season_status[loop_i] = 2;
        season_attendance_total[loop_i] = 0;
        home_games_played[loop_i] = 0;
        d_5d9c_99c8 = (team_rating(loop_i) + random_below(2) - random_below(2))
            * (4 - loop_i / 20) * 500.0f;
        accounts_table = vm_map(accounts_ems_handle, 0);
        accounts_table[1][loop_i] = d_5d9c_99c8 / 2500 * 2500;
        strcpy(job_applicants[loop_i], "");
        for (loop_j = 0; loop_j <= 1; loop_j++)
            strcpy(team_form[loop_j][loop_i], "");
        transfer_history = vm_map(transfer_history_handle, 1);
        for (loop_j = 0; loop_j <= 1; loop_j++)
            strcpy(transfer_history[loop_j][loop_i], "");
        for (loop_j = 2; loop_j <= 8; loop_j++)
            in_cup_draw[loop_j][loop_i] = 0;
    }
    memset(manager_points_ptr, 0, 4);
    for (loop_i = 0; loop_i <= 1699; loop_i++) {
        if (is_human_team(selected_team = player_attrs[18][loop_i]) == 0)
            is_unapproachable[loop_i] = 0;
        for (loop_j = 0; loop_j <= 47; loop_j++) {
            switch (loop_j) {
            case 11: case 12: case 13: case 15: case 16: case 17: case 18: case 19: case 23:
                player_flags[loop_j][loop_i] = 0;
                break;
            case 24: case 25: case 26: case 27: case 28: case 36: case 37: case 43: case 47:
                player_stats[loop_j - 24][loop_i] = 0;
                break;
            case 0: case 4:
                player_rating_total[loop_j][loop_i] = 0;
                break;
            }
        }
        player_attrs[21][loop_i] = 70;
        if (player_attrs[19][loop_i] == 20) {
            if (player_attrs[20][loop_i] > 0) {
                player_attrs[19][loop_i] = player_attrs[20][loop_i] + 20;
                player_attrs[20][loop_i] = 0;
            }
        }
        injured_count[selected_team] = injured_count[selected_team]
            - (player_attrs[20][loop_i] > 0 ? -1 : 0);
        fit_keeper_count[selected_team] = fit_keeper_count[selected_team]
            - (player_flags[0][loop_i] != 0 && player_attrs[20][loop_i] == 0 ? -1 : 0);
    }
    for (loop_i = 0; loop_i <= 139; loop_i++)
        for (loop_j = 6; loop_j <= 12; loop_j++)
            club_records[loop_j][loop_i] = 0;
    memset(club_record_holders, -1, 2800);
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 79; d_5d9c_9f69++)
        if (is_human_team(d_5d9c_9f69) == 0 || season == 1)
            shortlists[d_5d9c_9f69][0] = 0;
    memset(intl_squads, -1, 4);
    current_week = 1;
    league_round = 1;
    match_counter = 1;
    fa_cup_next_week = 0;
    league_cup_next_week = 0;
    zenith_cup_next_week = 0;
    domark_cup_next_week = 0;
    uefa_cup_next_week = 0;
    cup_winners_next_week = 0;
    european_cup_next_week = 0;
    for (button_style = 0; button_style <= 93; button_style++) {
        week_matchfax_base[button_style] = 0;
        d_483b_a176[button_style] = 0;
    }
    memset(d_5d9c_a064, 0, 8);
    for (d_5d9c_9cef = 1; d_5d9c_9cef <= 94; d_5d9c_9cef++)
        if (is_league_week(d_5d9c_9cef) == 0)
            clear_fixture_rows(1, 40, d_5d9c_9cef);
    week_fixtures[0][0][4] = cwc_english_entrant[0] * 32;
    week_fixtures[0][1][4] = cwc_english_entrant[1] * 32;
}

void init_player_morale(void)
{
    draw_progress_step(4, 0);
    draw_progress_step(5, 0);
    for (cur_player = 0; cur_player <= 1699; cur_player++) {
        draw_progress_step_bar(5, -1, cur_player, 2489);
        if (d_1f3e_b256[cur_player] != 0)
            player_attrs[15][cur_player] = min_int(player_attrs[0][cur_player] + random_below(10),
                player_attrs[9][cur_player] + 25);
        else {
            player_attrs[15][cur_player] = player_attrs[0][cur_player];
            vary_player_form(cur_player);
            player_attrs[15][cur_player] = (player_attrs[15][cur_player] * 2
                + player_attrs[0][cur_player]) / 3;
        }
    }
    for (selected_team = 0; selected_team <= 79; selected_team++) {
        draw_progress_step_bar(5, -1, selected_team * 10 + 1699, 2489);
        reset_team_selection(selected_team);
    }
}

void build_nationality_pools(void)
{
    int count[3];
    char used[1700];

    memset(used, 0, 1700);
    memset(count, 0, 6);
    for (d_5d9c_9d91 = 0; d_5d9c_9d91 <= 1; d_5d9c_9d91++) {
        d_5d9c_9b1f = 0;
        for (d_5d9c_9eb7 = 1; d_5d9c_9eb7 <= 250; d_5d9c_9eb7++) {
            d_5d9c_9c1f = -1;
            do {
                for (cur_player = 0; cur_player <= 1699; cur_player++) {
                    if (player_nationality(cur_player) == d_5d9c_9d91 && used[cur_player] == 0
                        && (d_5d9c_9eb7 < 126 && player_attrs[17][cur_player] < 22
                            || d_5d9c_9eb7 > 125 || d_5d9c_9b1f != 0)) {
                        if (d_5d9c_9c1f == -1 || player_attrs[0][cur_player] > d_5d9c_9c1d) {
                            d_5d9c_9c1f = cur_player;
                            d_5d9c_9c1d = player_attrs[0][cur_player];
                        }
                    }
                }
                if (d_5d9c_9c1f == -1)
                    d_5d9c_9b1f = -1;
            } while (d_5d9c_9c1f <= -1);
            d_5d9c_a006 = vm_map(d_5d9c_a342, 1);
            d_5d9c_a006[d_5d9c_9d91][d_5d9c_9eb7 - 1] = d_5d9c_9c1f;
            used[d_5d9c_9c1f] = -1;
        }
    }
    for (d_5d9c_9d91 = 2; d_5d9c_9d91 <= 4; d_5d9c_9d91++)
        for (cur_player = 0; cur_player <= 1699; cur_player++)
            if (player_nationality(cur_player) == d_5d9c_9d91) {
                d_5d9c_a002 = vm_map(d_5d9c_a340, 1);
                d_5d9c_a002[d_5d9c_9d91 - 2][count[d_5d9c_9d91 - 2]] = cur_player;
                count[d_5d9c_9d91 - 2]++;
            }
}

void shuffle_league_order(void)
{
    draw_progress_step(2, 0);
    draw_progress_step(3, 0);
    for (loop_i = 0; loop_i <= 79; loop_i++)
        league_table[0][loop_i] = loop_i;
    for (loop_i = 1; loop_i <= 20; loop_i++)
        for (stats_division = 0; stats_division <= 3; stats_division++) {
            draw_progress_step_bar(3, -1, loop_i * 4 + stats_division, 83);
            d_5d9c_9c0d = league_table[0][random_below(20) + stats_division * 20];
            d_5d9c_9c0b = league_table[0][random_below(20) + stats_division * 20];
            swap_teams(d_5d9c_9c0d, d_5d9c_9c0b);
        }
}

void news_message_box(int team, char far *title, char far *text)
{
    char buf[180];
    int x, y;

    new_screen("");
    d_5d9c_9bff = 3;
    set_fill_colour(16);
    fill_rect(40, 84, 288, d_5d9c_9bff * 8 + 104);
    set_fill_colour(19);
    fill_rect(36, 80, 284, d_5d9c_9bff * 8 + 100);
    row_colour_a = team_colours[team] / 16;
    row_colour_b = team_colours[team] % 16;
    if (row_colour_b == 3)
        swap_bytes(&row_colour_a, &row_colour_b, 2);
    draw_label(5.125, 11.5, row_colour_a, row_colour_b, 240, title);
    sprintf(buf, "%s ", text);
    x = 0;
    y = 104;
    while (find_substring(buf, " ") > 0) {
        d_5d9c_9bfd = find_substring(buf, " ");
        strncpy(d_1f3e_36ee, buf, d_5d9c_9bfd - 1);
        d_1f3e_36ee[d_5d9c_9bfd - 1] = 0;
        if (x + strlen(d_1f3e_36ee) * 6 > 240) {
            y += 8;
            x = 0;
        }
        draw_text_at(x + 49, y, 6, d_1f3e_36ee);
        x += (strlen(d_1f3e_36ee) + 1) * 6;
        strcpy(buf, buf + d_5d9c_9bfd);
    }
    wait_for_click(0);
}

void player_details_screen(int player, int team, char buy)
{
    char buf[320];
    int len;

    footer_shows_targets = 0;
    footer_arrow_on = -1;
    format_player_details(player);
    new_screen("");
    sprintf(buf, " %s ", upper_case(player_full_name(player)));
    draw_text_box(1.25, 1.125, team_colours[player_attrs[18][player]] / 16, team_colours[player_attrs[18][player]] % 16, 0, buf);
    set_text_opaque(1);
    set_fill_colour(16);
    fill_rect(12, 26, 160, 98);
    fill_rect(166, 26, 312, 98);
    fill_rect(12, 104, 312, 116);
    fill_rect(12, 122, 212, 154);
    fill_rect(218, 122, 312, 178);
    fill_rect(12, 163, 212, 178);
    fill_rect(12, 184, 312, 197);
    set_fill_colour(19);
    fill_rect(8, 100, 310, 114);
    fill_rect(8, 118, 210, 152);
    fill_rect(214, 118, 310, 176);
    set_fill_colour(20);
    fill_rect(8, 22, 158, 96);
    fill_rect(162, 22, 310, 96);
    fill_rect(8, 157, 210, 176);
    fill_rect(8, 180, 310, 195);
    draw_label(1.375, 3.75, 1, 12, 0, " AGE        ");
    draw_label(10.625, 3.75, 1, 12, 0, d_1f3e_373e);
    draw_label(1.375, 4.75, 1, 12, 0, " CLUB       ");
    draw_label(10.625, 4.75, 1, 12, 0, squad_club_text);
    draw_label(1.375, 5.75, 1, 12, 0, " COUNTRY    ");
    draw_label(10.625, 5.75, 1, 12, 0, d_1f3e_35fe);
    draw_label(1.375, 6.75, 1, 12, 0, " CONTRACT   ");
    draw_label(10.625, 6.75, 1, 12, 0, d_1f3e_35ae);
    draw_label(1.375, 7.75, 1, 12, 0, " WAGES      ");
    draw_label(10.625, 7.75, 1, 12, 0, d_1f3e_355e);
    draw_label(1.375, 8.75, 1, 12, 0, " VALUATION  ");
    draw_label(10.625, 8.75, 1, 12, 0, d_1f3e_350e);
    draw_label(1.375, 9.75, 1, 12, 0, " INSURANCE  ");
    draw_label(10.625, 9.75, 1, 12, 0, d_1f3e_34be);
    draw_label(1.375, 10.75, 1, 12, 0, " POSITION   ");
    draw_label(10.625, 10.75, 1, 12, 0, d_1f3e_3e28);
    draw_label(1.375, 11.75, 1, 12, 0, " SIDE       ");
    draw_label(10.625, 11.75, 1, 12, 0, d_1f3e_364e);
    draw_label(20.625, 3.75, 1, 12, 71, " CHARACTER");
    sprintf(buf, " %s", d_1f3e_346e);
    draw_label(29.75, 3.75, 1, 12, 71, buf);
    draw_label(20.625, 4.75, 1, 12, 71, " PASSING");
    sprintf(buf, " %s", d_1f3e_341e);
    draw_label(29.75, 4.75, 1, 12, 71, buf);
    draw_label(20.625, 5.75, 1, 12, 71, " TACKLING");
    sprintf(buf, " %s", d_1f3e_33ce);
    draw_label(29.75, 5.75, 1, 12, 71, buf);
    draw_label(20.625, 6.75, 1, 12, 71, " PACE");
    sprintf(buf, " %s", d_1f3e_337e);
    draw_label(29.75, 6.75, 1, 12, 71, buf);
    draw_label(20.625, 7.75, 1, 12, 71, " HEADING");
    sprintf(buf, " %s", d_1f3e_332e);
    draw_label(29.75, 7.75, 1, 12, 71, buf);
    draw_label(20.625, 8.75, 1, 12, 71, " FLAIR    ");
    sprintf(buf, " %s", d_1f3e_32de);
    draw_label(29.75, 8.75, 1, 12, 71, buf);
    draw_label(20.625, 9.75, 1, 12, 71, " CREATIVITY");
    sprintf(buf, " %s", d_1f3e_328e);
    draw_label(29.75, 9.75, 1, 12, 71, buf);
    draw_label(20.625, 10.75, 1, 12, 71, " STAMINA   ");
    sprintf(buf, " %s", d_1f3e_323e);
    draw_label(29.75, 10.75, 1, 12, 71, buf);
    draw_label(20.625, 11.75, 1, 12, 71, " INFLUENCE");
    sprintf(buf, " %s", d_1f3e_31ee);
    draw_label(29.75, 11.75, 1, 12, 71, buf);
    draw_label(1.375, 13.375, 0, 6, 298, availability_title);
    draw_label(-1.0, 14.25, 1, 3, 0, availability_text);
    draw_label(1.375, 15.75, 0, 1, 198, "           THIS SEASON");
    draw_label(1.375, 16.75, 0, 6, 0, " APPS   ");
    draw_label(7.625, 16.75, 0, 6, 0, d_1f3e_30fe);
    draw_label(1.375, 17.75, 0, 6, 0, " GOALS  ");
    draw_label(7.625, 17.75, 0, 6, 0, d_1f3e_4120);
    draw_label(1.375, 18.75, 0, 6, 0, " DISP   ");
    draw_label(7.625, 18.75, 0, 6, 0, punishment_text);
    draw_label(13.875, 16.75, 0, 6, 0, " AV R   ");
    draw_label(20.125, 16.75, 0, 6, 0, award_rating_text);
    draw_label(13.875, 17.75, 0, 6, 0, " MIN R  ");
    draw_label(20.125, 17.75, 0, 6, 0, d_1f3e_30ae);
    draw_label(13.875, 18.75, 0, 6, 0, " MAX R  ");
    draw_label(20.125, 18.75, 0, 6, 0, d_1f3e_305e);
    draw_label(27.125, 15.75, 0, 1, 90, "  LAST SEASON");
    draw_label(37.875, 15.75, 0, 1, 0, " ");
    draw_label(27.125, 16.75, 0, 6, 0, " APPS   ");
    draw_label(33.375, 16.75, 0, 6, 0, d_1f3e_300e);
    draw_label(27.125, 17.75, 0, 6, 0, " GOALS  ");
    draw_label(33.375, 17.75, 0, 6, 0, d_1f3e_2fbe);
    draw_label(27.125, 18.75, 0, 6, 0, " DISP   ");
    draw_label(33.375, 18.75, 0, 6, 0, d_1f3e_2f6e);
    draw_label(27.125, 19.75, 0, 6, 0, " AV R   ");
    draw_label(33.375, 19.75, 0, 6, 0, d_1f3e_2f1e);
    draw_label(27.125, 20.75, 0, 6, 0, " MIN R  ");
    draw_label(33.375, 20.75, 0, 6, 0, d_1f3e_2ece);
    draw_label(27.125, 21.75, 0, 6, 0, " MAX R  ");
    draw_label(33.375, 21.75, 0, 6, 0, d_1f3e_2dde);
    draw_label(1.375, 20.625, 1, 2, 198, "              MORALE");
    len = strlen(morale_text);
    sprintf(buf, "%*s", (100 - len * 3) / 6 + len, morale_text);
    draw_label(1.375, 21.625, 5, 4, 198, buf);
    toggle_future_line();
    if (targeted_by_text[0] != 0)
        blink_footer_arrow();
    add_button(2, 35.5, 1.125, 1, 2, 24, "HST");
    if (buy != 0 && is_demo_game == 0) {
        add_button(2, 24.625, 1.125, 1, 3, 24, "STA");
        add_button(2, 28.25, 1.125, 1, 3, 24, "BUY");
        add_button(2, 31.875, 1.125, 1, 3, 24, "ADD");
        if (is_human_team(player_attrs[18][player]) == 0)
            disable_button(2);
        if (playing_week_matches != 0) {
            disable_button(2);
            disable_button(3);
        }
    }
    exit_chosen = 0;
    player_screen_action = 0;
    animate_footer = -1;
    d_5d9c_9bf7 = wait_for_button(0);
    animate_footer = 0;
    if (d_5d9c_9bf7 == 0)
        exit_chosen = -1;
    else if (d_5d9c_9bf7 == 1)
        player_history_screen(player);
    else if (d_5d9c_9bf7 == 2)
        player_screen_action = -1;
    else if (d_5d9c_9bf7 == 3 || d_5d9c_9bf7 == 4) {
        d_5d9c_9b9f = -1;
        if (team > -1)
            d_5d9c_9b9f = team;
        else if (human_manager_count == 2) {
            list_managers(0);
            sprintf(buf, "%.3s", d_1f3e_369e);
            home_is_human = atol(buf);
            away_is_human = atol(right_chars(d_1f3e_369e, 3));
            if (player_attrs[18][player] == manager_team[home_is_human])
                d_5d9c_9b9f = manager_team[away_is_human];
            else if (player_attrs[18][player] == manager_team[away_is_human])
                d_5d9c_9b9f = manager_team[home_is_human];
        }
        if (d_5d9c_9b9f == -1) {
            choose_manager(0);
            if (chosen_manager > -1)
                d_5d9c_9b9f = manager_team[chosen_manager];
        }
        if (d_5d9c_9b9f > -1) {
            if (d_5d9c_9bf7 == 3 && board_confidence[d_5d9c_9b9f] < 30)
                message_box("The board refuse any transfers");
            else if (player_attrs[18][player] == d_5d9c_9b9f) {
                sprintf(buf, "You already own %s", player_surname(player));
                message_box(buf);
            } else if (d_5d9c_9bf7 == 3 && is_after_transfer_deadline(current_week))
                message_box("Transfer deadline has passed");
            else if (d_5d9c_9bf7 == 3 && transfer_bids_made[d_5d9c_9b9f] > 3)
                message_box("Not enough time");
            else if (d_5d9c_9bf7 == 3 && is_human_team(player_attrs[18][player]) && is_unapproachable[player] != 0) {
                sprintf(buf, "%s not for sale", player_surname(player));
                message_box(buf);
            } else if (d_5d9c_9bf7 == 3 && squad_size[d_5d9c_9b9f] == 26)
                message_box("Maximum squad size is 26");
            else if (d_5d9c_9bf7 == 3 && is_indispensable_player(player)) {
                sprintf(buf, "%s have too few players", (char far *)team_names[player_attrs[18][player]]);
                message_box(buf);
            } else if (d_5d9c_9bf7 == 4 && shortlists[d_5d9c_9b9f][0] == 15)
                message_box("shortlist is full");
            else if (d_5d9c_9bf7 == 3)
                player_screen_action = d_5d9c_9b9f + 1;
            else if (d_5d9c_9bf7 == 4) {
                player_screen_action = -d_5d9c_9b9f - 2;
                if (shortlist_slot_of(d_5d9c_9b9f, player) > 0) {
                    player_screen_action = 0;
                    sprintf(buf, "%s already shortlisted", player_surname(player));
                    message_box(buf);
                }
            }
        }
    }
}

void player_history_screen(int player)
{
    FILE *fp;

    fp = fopen("history", "rb+");
    fseek(fp, (long)player * 133, 0);
    fread(history_record, 1, 133, fp);
    fclose(fp);
    history_count = (int)player_stats[20][player];
    if (history_count < 17) {
        draw_player_career(player, 0);
        add_button(2, 1.25, 22.5, 1, 4, 0x12d, "                 EXIT");
        do
            menu_choice = wait_for_button(last_button);
        while (menu_choice <= 0);
    } else {
        d_5d9c_9bef = 0;
        do {
            draw_player_career(player, d_5d9c_9bef);
            add_button(2, 1.25, 22.5, 1, 12, 0x49, "   MORE");
            add_button(2, 11.0, 22.5, 1, 4, 0xdf, "            EXIT");
            do
                menu_choice = wait_for_button(last_button);
            while (menu_choice <= 0);
            if (menu_choice == 1)
                d_5d9c_9bef = 1 - d_5d9c_9bef;
        } while (menu_choice != 2);
    }
}
