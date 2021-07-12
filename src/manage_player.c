/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** manage_pl
*/

#include "../include/sokoban.h"

struct map_t *manage_player(struct map_t *save, char **second_map, int ch)
{
    save = player_movement(save, ch);
    save = replace_spot(save, second_map);
    return save;
}