/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** center_map
*/

#include "../include/sokoban.h"

void my_center_map(struct map_t *save, int i, int j)
{
    mvprintw((LINES/2) + j, (COLS/2) - my_strlen(save->map[i]), save->map[i]);
}