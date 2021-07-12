/*
** EPITECH PROJECT, 2020
** B-PSU-200-PAR-2-1-mysokoban-gilbert.badiabo
** File description:
** win_or_lose.c
*/

#include "../include/sokoban.h"

int win_condt(struct map_t *save, char **second_map)
{
    int count = 0;

    for (int i = 0; i < save->lines; i++)
        for (int j = 0; j < save->cols; j++)
            if (second_map[i][j] == 'O' && save->map[i][j] == 'X')
                count++;
    if (count == save->count)
        return 1;
    else
        return 0;
}

int end_condt(struct map_t *save, char **second_map)
{
    int res = 0;

    if (win_condt(save, second_map) == 1)
        res = 1;
    return res;
}
