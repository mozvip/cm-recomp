/* Championship Manager Italia 95: what the game's database (../../../port/db.c, made by
 * tools/port/mkdb.py) gives before the game starts. The players and the teams' TEAM.DAT
 * data are read when a new game is made (src/a7b6.c); the names, which the executable
 * holds, are put in place here. */
#include "port.h"

extern nearptr d_61eb_b0ec[];           /* the clubs' names (0-37: the league's) */
extern farptr d_5b9b_0000[];            /* first names */
extern farptr d_5b9b_1395[];            /* surnames */
extern farptr d_53fc_0000[];            /* countries */

void port_game_db(void)
{
    port_db_check_teams(38);
    port_db_check_players(38, 1000, 500);   /* player numbers: league 0-999, abroad 1000-1499 */
    port_db_near_names("SELECT id, name FROM teams", d_61eb_b0ec, 38);
    port_db_far_names("SELECT id, name FROM first_names", d_5b9b_0000, 443);
    port_db_far_names("SELECT id, name FROM surnames", d_5b9b_1395, 1135);
    port_db_far_names("SELECT id, name FROM countries", d_53fc_0000, 76);
}
