#if defined _ranksultimate_included
    #endinput
#endif

#define _ranksultimate_included

enum
{
    XP_REWARD,
    XP_TEAM_REWARD
}

/**
 * Called when the client's level changes.
 *
 * @param index     Client index.
 * @param level     New level.
 * @param levelup   True if the client gained a level, false if he lost one.
 * @noreturn
 * 
 */
forward rsu_user_level_updated(index, level, bool:levelup)

/**
 * Called right after the client's XP amount changes.
 *
 * @param index     Client index.
 * @param xp        Amount of XP the client has after the change.
 * @param teamxp    True if Team XP, false otherwise.
 * @noreturn
 */
forward rsu_user_xp_updated(index, xp, bool:teamxp)

/**
 * Called when the client's stats are saved.
 *
 * @param index     Client index.
 * @param saveinfo  Client save info string.
 * @param name      Client name.
 * @noreturn
 */
forward rsu_user_stats_saved(index, saveinfo[], name[])

/**
 * Called when the client's stats are loaded.
 *
 * @param index     Client index.
 * @param saveinfo  Client save info string.
 * @param name      Client name.
 * @noreturn
 */
forward rsu_user_stats_loaded(index, saveinfo[], name[])

/**
 * Returns client's current XP.
 * 
 * @param index     Client index.
 * @return          Client's current XP.
 * 
 */
native rsu_get_user_xp(index)

/**
 * Returns client's current XP as a percentage value.
 * 
 * @param index     Client index.
 * @return          Client's current XP as a percentage value.
 * 
 */
native rsu_get_user_xp_percent(index)

/**
 * Returns client's next rank XP.
 * 
 * @param index     Client index.
 * @return          Client's next rank XP.
 * 
 */
native rsu_get_user_next_xp(index)

/**
 * Returns XP by a specific level.
 * 
 * @param level     Level number.
 * @return          XP by a specific level.
 * 
 */
native rsu_get_xp_for_level(level)

/**
 * Returns client's current level.
 * 
 * @param index     Client index.
 * @return          Client's current level.
 * 
 */
native rsu_get_user_level(index)

/**
 * Returns client's kills.
 * 
 * @param index     Client index.
 * @return          Client's kills.
 * 
 */
native rsu_get_user_kills(index)

/**
 * Returns client's deaths.
 * 
 * @param index     Client index.
 * @return          Client's deaths.
 * 
 */
native rsu_get_user_deaths(index)

/**
 * Returns client's headshots.
 * 
 * @param index     Client index.
 * @return          Client's headshots.
 * 
 */
native rsu_get_user_headshots(index)

/**
 * Returns client's assists.
 * 
 * @param index     Client index.
 * @return          Client's assists.
 * 
 */
native rsu_get_user_assists(index)

/**
 * Returns client's shots.
 * 
 * @param index     Client index.
 * @return          Client's shots.
 * 
 */
native rsu_get_user_shots(index)

/**
 * Returns client's hits.
 * 
 * @param index     Client index.
 * @return          Client's hits.
 * 
 */
native rsu_get_user_hits(index)

/**
 * Returns client's damage.
 * 
 * @param index     Client index.
 * @return          Client's damage.
 * 
 */
native rsu_get_user_damage(index)

/**
 * Returns client's MVP count.
 * 
 * @param index     Client index.
 * @return          Client's MVP count.
 * 
 */
native rsu_get_user_mvp(index)

/**
 * Returns client's rounds won.
 * 
 * @param index     Client index.
 * @return          Client's rounds won.
 * 
 */
native rsu_get_user_rounds_won(index)

 /**
 * Returns client's amount of bombs planted.
 * 
 * @param index     Client index.
 * @return          Client's bombs planted amount.
 * 
 */
native rsu_get_user_bombs_planted(index)

 /**
 * Returns client's amount of bombs exploded.
 * 
 * @param index     Client index.
 * @return          Client's bombs exploded amount.
 * 
 */
native rsu_get_user_bombs_exploded(index)

 /**
 * Returns client's amount of bombs defused.
 * 
 * @param index     Client index.
 * @return          Client's bombs defused amount.
 * 
 */
native rsu_get_user_bombs_defused(index)

/**
 * Returns client's total played time in seconds.
 * 
 * @param index     Client index.
 * @return          Client's played time in seconds.
 * 
 */
native rsu_get_user_played_time(index)

/**
 * Returns rank's name by a specific level.
 * 
 * @param level     Level number.
 * @param buffer    String buffer to store the name.
 * @param len       Maximum buffer lenght.
 * @noreturn
 * 
 */
native rsu_get_rank_by_level(level, buffer[], len)

/**
 * Returns client's current rank name.
 * 
 * @param index     Client index.
 * @param buffer    String buffer to store the name.
 * @param len       Maximum buffer lenght.
 * @noreturn
 * 
 */
native rsu_get_user_rank(index, buffer[], len)

/**
 * Returns client's current skill name.
 * 
 * @param index     Client index.
 * @param buffer    String buffer to store the name.
 * @param len       Maximum buffer lenght.
 * @noreturn
 * 
 */
native rsu_get_user_skill(index, buffer[], len)

/**
 * Returns the client's skill range.
 * 
 * @param index     Client's index.
 * @return          Client's skill range.
 * 
 */
native rsu_get_user_skill_range(index)

/**
 * Returns the client's server rank.
 * 
 * @param index     Client's index.
 * @return          Client's server rank.
 * 
 */
native rsu_get_user_server_rank(index)

/**
 * Returns the maximum amount of levels.
 * 
 * @return          Maximum amount of levels.
 * 
 */
native rsu_get_max_levels()

/**
 * Returns the maximum amount of server ranks.
 * 
 * @return          Maximum amount of server ranks.
 * 
 */
native rsu_get_max_server_ranks()

/**
 * Gives specific amount of XP to the client.
 * 
 * @param index     Client index.
 * @param amount    XP amount.
 * @return          Amount of XP.
 * 
 */
 native rsu_give_user_xp(index, amount = 0)

 /**
 * Gives specific amount of XP to the specific team.
 * 
 * @param team      0 - None, 1 - Terrorists, 2 - CTs, 3 - Spectators
 * @param amount    XP amount.
 * @return          Amount of XP.
 * 
 */
 native rsu_give_team_xp(team = 0, amount = 0)

/**
 * Checks if client's stats are loaded.
 * 
 * @param index     Client index.
 * @return          True if client's stats are loaded, false otherwise.
 * 
 */
 native rsu_is_level_loaded(index)

 /**
 * Returns the XP reward amount for a specific key and its type.
 * 
 * @param key       XP reward's key.
 * @param type      XP reward's type which are XP_REWARD and XP_TEAM_REWARD.
 * @return          The XP reward amount.
 * 
 */
 native rsu_get_xp_reward(key[], type = XP_REWARD)

 /**
 * Returns client's zombie wins if running on ZP mode.
 * 
 * @param index     Client index.
 * @return          Client's zombie wins.
 * 
 */
native rsu_get_user_zombie_wins(index)

 /**
 * Returns client's human wins if running on ZP mode.
 * 
 * @param index     Client index.
 * @return          Client's human wins.
 * 
 */
native rsu_get_user_human_wins(index)

 /**
 * Returns client's infections if running on ZP mode.
 * 
 * @param index     Client index.
 * @return          Client's infections.
 * 
 */
native rsu_get_user_infections(index)

/**
 * Returns client's survivals if running on ZP mode.
 * 
 * @param index     Client index.
 * @return          Client's survivals.
 * 
 */
native rsu_get_user_survivals(index)

/**
 * Returns client's round infections if running on ZP mode.
 * 
 * @param index     Client index.
 * @return          Client's round infections.
 * 
 */
native rsu_get_user_round_infections(index)

/**
 * Returns client's save info.
 * 
 * @param index     Client index.
 * @param buffer    String buffer to store the info.
 * @param len       Maximum buffer lenght.
 * @noreturn
 * 
 */
native rsu_get_user_saveinfo(index, buffer[], len)

/**
 * Returns client's first login date.
 * 
 * @param index     Client index.
 * @param buffer    String buffer to store the info.
 * @param len       Maximum buffer lenght.
 * @noreturn
 * 
 */
native rsu_get_user_first_login(index, buffer[], len)

/**
 * Returns client's last login date.
 * 
 * @param index     Client index.
 * @param buffer    String buffer to store the info.
 * @param len       Maximum buffer lenght.
 * @noreturn
 * 
 */
native rsu_get_user_last_login(index, buffer[], len)

/**
 * Returns client's weapon kills.
 * 
 * @param index     Client index.
 * @param weapon    Weapon index. 0 = Knife | 1 = Glock18 | 2 = USP | 3 = P228 | 4 = Deagle | 5 = Fiveseven | 6 = Elite | 7 = M3 | 8 = XM1014 | 9 = TMP | 10 = MAC10 | 11 = MP5 Navy |
 * 12 = UMP45 | 13 = P90 | 14 = M249 | 15 = Galil | 16 = Famas | 17 = AK47 | 18 = M4A1 | 19 = SG552 | 20 = AUG | 21 = Scout | 22 = AWP | 23 = G3SG1 | 24 = SG550 | 25 = HE Grenade
 * @return          Client's weapon kills.
 * 
 */
native rsu_get_user_weapon_kills(index, weapon)