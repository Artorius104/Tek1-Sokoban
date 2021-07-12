/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** find_pl
*/

#include "../include/sokoban.h"

struct map_t *find_player(struct map_t *save)
{
    save->pl_x = 0;
    save->pl_y = 0;

    for (int i = 0; i <= save->lines; i++) {
        for (int j = 0; save->map[i][j] != '\0'; j++) {
            if (save->map[i][j] == 'P') {
                save->pl_x = i;
                save->pl_y = j;
            }
        }
    }
    return save;
}