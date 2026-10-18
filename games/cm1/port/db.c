/* Championship Manager (1992): what the game's database (../../../port/db.c, made by
 * tools/port/mkdb.py) gives before the game starts. CM1 has no data files for its
 * teams: the executable holds them, and its players are made up by a new game from its
 * tables of names. All of these are put in place here, over the executable's data,
 * where the game reads them. */
#include "port.h"

extern unsigned char team_stats[][82];
extern unsigned char foreign_team_rating[];     /* by club, 80-539 */
extern unsigned char foreign_team_colours[];
extern unsigned char foreign_away_colours[];
extern unsigned char team_country[];
extern nearptr team_names[];
extern nearptr foreign_team_names[];
extern farptr first_names[];
extern farptr surnames[];
extern farptr country_names[];

void port_game_db(void)
{
    port_rows *r;
    int i;

    port_db_check_teams(80);
    r = port_db_query("SELECT * FROM teams");
    while (port_db_next(r)) {
        i = port_db_int(r, "id");
        team_stats[0][i] = port_db_int(r, "reputation");
        team_stats[1][i] = port_db_int(r, "capacity");
        team_stats[2][i] = port_db_int(r, "colours");
        team_stats[3][i] = port_db_int(r, "away_colours");
        team_stats[4][i] = port_db_int(r, "rating");
    }
    port_db_done(r);

    if (port_db_count("SELECT count(*) FROM clubs WHERE id BETWEEN 80 AND 539") != 460
        || port_db_count("SELECT count(*) FROM clubs") != 460) {
        fprintf(stderr, "the database's clubs: the game has 460, numbered 80 to 539\n");
        exit(1);
    }
    r = port_db_query("SELECT * FROM clubs");
    while (port_db_next(r)) {
        i = port_db_int(r, "id");
        foreign_team_rating[i] = port_db_int(r, "rating");
        foreign_team_colours[i] = port_db_int(r, "colours");
        foreign_away_colours[i] = port_db_int(r, "away_colours");
        team_country[i] = port_db_int(r, "country");
    }
    port_db_done(r);

    port_db_near_names("SELECT id, name FROM teams", team_names, 80);
    port_db_near_names("SELECT id, name FROM clubs", foreign_team_names, 540);
    port_db_far_names("SELECT id, name FROM first_names", first_names, 500);
    port_db_far_names("SELECT id, name FROM surnames", surnames, 880);
    port_db_far_names("SELECT id, name FROM countries", country_names, 32);
}
