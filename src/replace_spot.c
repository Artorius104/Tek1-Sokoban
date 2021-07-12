/*
** EPITECH PROJECT, 2020
** B-PSU-200-PAR-2-1-mysokoban-gilbert.badiabo
** File description:
** replace_spot.c
*/

#include "../include/sokoban.h"

struct map_t *replace_spot(struct map_t *save, char **second_map)
{
    for (int i = 0; i < save->lines; i++) {
        for (int j = 0; j < save->cols; j++)
            if (second_map[i][j] == 'O' &&
            save->map[i][j] == ' ')
                save->map[i][j] = 'O';
    }
    return save;
}