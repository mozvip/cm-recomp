/* Championship Manager 93: what the game's database (../../../port/db.c, made by
 * tools/port/mkdb.py) gives before the game starts. The players and the teams' TEAM.DAT
 * data are read when a new game is made (src/ad38.c); the names, which the executable
 * holds, are put in place here. */
#include "port.h"

extern nearptr d_60ae_b572[];           /* the clubs' names (0-79: the league's) */
extern farptr d_59f5_0000[];            /* first names */
extern farptr d_59f5_0fc0[];            /* surnames */
extern farptr d_54d9_0000[];            /* countries */

void port_game_db(void)
{
    port_db_check_teams(80);
    port_db_check_players(80, 1700, 160);   /* player numbers: league 0-1699, abroad 1700-1859 */
    port_db_near_names("SELECT id, name FROM teams", d_60ae_b572, 80);
    port_db_far_names("SELECT id, name FROM first_names", d_59f5_0000, 392);
    port_db_far_names("SELECT id, name FROM surnames", d_59f5_0fc0, 1385);
    port_db_far_names("SELECT id, name FROM countries", d_54d9_0000, 60);
}
