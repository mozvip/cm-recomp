/* @at 144e:000e */
/* @data 5d9c:0094 */
/* @module */

/* The game's main module: the start-up menus and the season loop, one week per pass. */

#include <string.h>

void init_hardware(char c);
void seed_random_from_clock(void);
void protection_check(void);
void show_menu(int top, char far *title, char far *items);
void start_first_season(void);
void reset_monthly_stats(void);
void clear_fortnight_reports(void);
void clear_weekly_state(void);
void build_squad_lists(void);
void update_players_weekly(void);
void music_on(void);
void music_off(void);

void season_main_menu(void);
void awards_screen(char);
void show_week_fixtures(int, int, int);
void show_season_start_message(void);
void play_week_matches(void);
void settle_promotion_relegation(void);
void make_weekly_cup_draws(void);
void pick_european_entrants(void);
void seed_european_cups(void);
void pick_cup_entrants(void);
void set_playoff_fixtures(void);
void arrange_friendlies(void);
void sort_league_table(void);
void sort_euro_cup_groups(void);
void sort_cup_group_tables(void);
void weekly_transfer_activity(void);
void update_transfer_listings(void);
void add_players_to_shortlists(void);
void message_box(char far *);
void generate_all_staff(void);
void staff_retirements(void);
void weekly_board_review(void);
void collect_manager_candidates(void);
void appoint_new_managers(void);
void update_board_confidence(void);
void init_new_game_clubs(void);
void create_game_files(void);
void generate_all_players(void);
void init_other_club_ratings(void);
void draw_season_end_panel(void);
void update_hall_of_fame(void);
void promote_and_qualify(void);
void replace_with_nonleague_club(int);
void end_season_player_update(void);
void process_retirements(void);
void season_attendance_report(void);
void update_club_records_file(void);
void print_newlines(int);
void show_message_box(char far *);
void process_match_discipline(void);
void show_performance_of_week(void);
void fine_dirty_clubs(void);
void training_injuries_and_form(int);
void weekly_club_finances(void);
void pick_international_squads(void);
void load_game(void);
void load_hall_of_fame(void);
char is_league_week(int);
char is_fa_cup_round_week(int);
char is_fa_cup_week(int);
char is_rumbelows_week(int);
char is_zenith_week(int);
char is_domark_week(int);
char is_uefa_week(int);
char is_cup_winners_week(int);
char is_european_cup_week(int);
char is_second_leg_week(int);
char is_cup_replay_week(int);
void enter_manager_name(int);
void find_best_players(char);
void show_title_picture(void);
void new_game_setup(void);
void reset_season_data(void);
void init_player_morale(void);
void build_nationality_pools(void);
void shuffle_league_order(void);

extern int startup_flags_8000;
extern char sound_device;                /* music available */
extern char in_season_end, is_demo_game, printer_on, no_matches_this_week, week_has_matches, in_preseason_setup;
extern int menu_choice;                 /* menu choice */
extern int current_week;                 /* week of the season, 0..94 */
extern int team_voted_out, season;    /* season */
extern int zenith_qualifier_count;
extern int league_round, european_cup_next_week, cup_winners_next_week, uefa_cup_next_week, fa_cup_next_week, league_cup_next_week;
extern int replay_count, replays_pending, euro_cup_through, cwc_through, uefa_cup_through, domark_through;
extern int zenith_cup_through, league_cup_through, fa_cup_through;
extern int far week_fixture_counts[];

unsigned char intl_squad_positions[22] = {
    1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 5, 5, 6, 6, 7, 7, 7, 7, 10, 10, 10, 10
};
char *loading_labels[11] = {
    "Season Disk", "Managers/Staff", "Players", "Euro/Nonlge Teams", "Club Records",
    "Managers/Staff", "Players", "Fixture List", "Retirements", "Squads/Pools", "Short Lists"
};
unsigned char ega_text_colours[16] = { 1, 1, 9, 6, 12, 4, 6, 1, 1, 6, 12, 7, 5, 1, 8, 4 };
long history_file = 0;
int unused_12000 = 12000;

void main(int argc, char *argv[])
{
    char buf[320];

    startup_flags_8000 = 0x8000;
    init_hardware(argc > 1 ? argv[1][0] : 0);
    seed_random_from_clock();
    show_title_picture();
    load_hall_of_fame();
    protection_check();
    strcpy(buf, "*Exit|Printer On|Printer Off|");
    if (sound_device)
        strcat(buf, "Music On|Music Off|");
    for (;;) {
        show_menu(0, "Printer Option", buf);
        if (menu_choice == 0)
            break;
        if (menu_choice == 1) {
            show_message_box("Put printer on line to continue");
            print_newlines(1);
            printer_on = -1;
        } else if (menu_choice == 2)
            printer_on = 0;
        if (menu_choice == 3)
            music_on();
        else if (menu_choice == 4)
            music_off();
    }
    show_menu(0, "Championship Manager", "New Game|Continue Season|Quick Start|");
    if (menu_choice == 1) {
        load_game();
        if (current_week < 95)
            goto week;
        goto season_end;
    }
    if (menu_choice == 2) {
        load_game();
        enter_manager_name(0);
        goto week;
    }
    new_game_setup();
    start_first_season();
    create_game_files();
    init_new_game_clubs();
    generate_all_staff();
    generate_all_players();
    init_other_club_ratings();
    pick_cup_entrants();
    draw_season_end_panel();
    for (;;) {
        in_preseason_setup = -1;
        shuffle_league_order();
        reset_season_data();
        replace_with_nonleague_club(team_voted_out);
        process_retirements();
        if (season == 1)
            training_injuries_and_form(120);
        build_squad_lists();
        init_player_morale();
        build_nationality_pools();
        update_transfer_listings();
        add_players_to_shortlists();
        pick_european_entrants();
        seed_european_cups();
        make_weekly_cup_draws();
        arrange_friendlies();
        in_preseason_setup = 0;
        while (current_week < 95) {
            if (current_week % 9 == 4 && current_week > 4) {
                find_best_players(0);
                if (!is_demo_game)
                    awards_screen(0);
                reset_monthly_stats();
            }
            if ((current_week & 1) || current_week < 7)
                clear_fortnight_reports();
            if (current_week < 5)
                show_season_start_message();
            else if (current_week == 66)
                message_box("Transfer deadline is this week");
            else if (current_week == 67)
                message_box("Transfer deadline has now passed");
            week_has_matches = -1;
            if (is_cup_replay_week(current_week)) {
                if (week_fixture_counts[current_week] == 0)
                    week_has_matches = 0;
            } else if (current_week == 7 && zenith_qualifier_count == 0)
                week_has_matches = 0;
            else if (current_week == 81 || current_week == 93)
                week_has_matches = 0;
            if (current_week % 16 == 0)
                pick_international_squads();
            clear_weekly_state();
            if (week_has_matches) {
                if (is_fa_cup_round_week(current_week))
                    fa_cup_through = 0;
                if (is_rumbelows_week(current_week))
                    league_cup_through = 0;
                if (is_zenith_week(current_week))
                    zenith_cup_through = 0;
                if (is_domark_week(current_week))
                    domark_through = 0;
                if (is_uefa_week(current_week))
                    uefa_cup_through = 0;
                if (is_cup_winners_week(current_week))
                    cwc_through = 0;
                if (is_european_cup_week(current_week))
                    euro_cup_through = 0;
week:
                season_main_menu();
                training_injuries_and_form(15);
                if (no_matches_this_week == 0) {
                    show_week_fixtures(current_week, 0, -1);
                    play_week_matches();
                    if (current_week == 94)
                        settle_promotion_relegation();
                    else if (is_league_week(current_week)) {
                        sort_league_table();
                        update_board_confidence();
                        settle_promotion_relegation();
                    } else {
                        if (current_week == 53 || current_week == 59 || current_week == 67 ||
                            current_week == 71 || current_week == 75 || current_week == 79)
                            sort_euro_cup_groups();
                        if (is_domark_week(current_week) && current_week < 68)
                            sort_cup_group_tables();
                    }
                    show_week_fixtures(current_week, 1, -1);
                    if (is_fa_cup_round_week(current_week) || current_week == 82) {
                        replays_pending = replay_count;
                        if (replays_pending > 0) {
                            if (current_week == 82) {
                                league_cup_next_week = 83;
                                week_fixture_counts[league_cup_next_week] = replays_pending;
                            } else {
                                fa_cup_next_week = current_week + 1;
                                week_fixture_counts[fa_cup_next_week] = replays_pending;
                            }
                        }
                    } else if (is_cup_replay_week(current_week))
                        replays_pending = 0;
                    if (current_week == 31)
                        make_weekly_cup_draws();
                    else if (is_fa_cup_week(current_week) && replays_pending == 0 && current_week < 88)
                        make_weekly_cup_draws();
                    else if (is_rumbelows_week(current_week) && current_week < 82 && current_week != 9 &&
                             current_week != 61)
                        make_weekly_cup_draws();
                    else if (is_second_leg_week(current_week) && current_week < 91 || current_week == 79)
                        make_weekly_cup_draws();
                    else if (current_week == 67 || current_week == 71 || current_week == 73)
                        make_weekly_cup_draws();
                    else if (is_zenith_week(current_week) && current_week < 53)
                        make_weekly_cup_draws();
                    switch (current_week) {
                    case 9:
                        league_cup_next_week = 13;
                        break;
                    case 11:
                        uefa_cup_next_week = 15;
                        break;
                    case 17:
                        cup_winners_next_week = 21;
                        european_cup_next_week = 21;
                        break;
                    case 23:
                        uefa_cup_next_week = 25;
                        break;
                    case 31:
                        uefa_cup_next_week = 35;
                        cup_winners_next_week = 35;
                        european_cup_next_week = 35;
                        break;
                    case 53:
                        european_cup_next_week = 59;
                        break;
                    case 59:
                        european_cup_next_week = 67;
                        break;
                    case 61:
                        league_cup_next_week = 65;
                        break;
                    case 67:
                    case 71:
                    case 75:
                        european_cup_next_week = current_week + 4;
                        uefa_cup_next_week = current_week + 4;
                        cup_winners_next_week = current_week + 4;
                        break;
                    case 79:
                        uefa_cup_next_week = 87;
                        cup_winners_next_week = 91;
                        european_cup_next_week = 91;
                        break;
                    case 87:
                        uefa_cup_next_week = 91;
                        break;
                    }
                    if (current_week == 86 || current_week == 92)
                        set_playoff_fixtures();
                    process_match_discipline();
                    fine_dirty_clubs();
                    league_round -= is_league_week(current_week);
                    if (current_week > 20)
                        weekly_board_review();
                    collect_manager_candidates();
                    appoint_new_managers();
                }
            }
            if ((current_week & 1) == 0 || current_week < 7) {
                if ((current_week & 1) == 0 && current_week > 5)
                    show_performance_of_week();
                update_players_weekly();
                weekly_transfer_activity();
                weekly_club_finances();
            }
            current_week++;
        }
season_end:
        season_main_menu();
        in_season_end = -1;
        find_best_players(-1);
        if (!is_demo_game)
            awards_screen(-1);
        update_hall_of_fame();
        season_attendance_report();
        draw_season_end_panel();
        update_club_records_file();
        promote_and_qualify();
        staff_retirements();
        end_season_player_update();
        in_season_end = 0;
        season++;
    }
}
