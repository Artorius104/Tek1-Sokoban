/*
** EPITECH PROJECT, 2020
** B-PSU-200-PAR-2-1-mysokoban-gilbert.badiabo
** File description:
** player_movement.c
*/

#include "../include/sokoban.h"

struct map_t *player_movement(struct map_t *save, int ch)
{
    if (ch == KEY_UP)
        save = pl_goes_up(save);
    if (ch == KEY_DOWN)
        save = pl_goes_down(save);
    if (ch == KEY_RIGHT)
        save = pl_goes_right(save);
    if (ch == KEY_LEFT)
        save = pl_goes_left(save);
    return save;
}

struct map_t *pl_goes_up(struct map_t *save)
{
    if (save->map[save->pl_x - 1][save->pl_y] == ' ') {
        save->map[save->pl_x - 1][save->pl_y] = 'P';
        save->map[save->pl_x][save->pl_y] = ' ';
    }
    else if (save->map[save->pl_x - 1][save->pl_y] == 'O') {
        save->map[save->pl_x - 1][save->pl_y] = 'P';
        save->map[save->pl_x][save->pl_y] = ' ';
    }
    else if (save->map[save->pl_x - 1][save->pl_y] == 'X') {
        if (save->map[save->pl_x - 2][save->pl_y] != '#'
        && save->map[save->pl_x - 2][save->pl_y] != 'X') {
            save->map[save->pl_x - 2][save->pl_y] = 'X';
            save->map[save->pl_x - 1][save->pl_y] = 'P';
            save->map[save->pl_x][save->pl_y] = ' ';
        }
    }
    return save;
}

struct map_t *pl_goes_down(struct map_t *save)
{
    if (save->map[save->pl_x + 1][save->pl_y] == ' ') {
        save->map[save->pl_x + 1][save->pl_y] = 'P';
        save->map[save->pl_x][save->pl_y] = ' ';
    }
    else if (save->map[save->pl_x + 1][save->pl_y] == 'O') {
        save->map[save->pl_x + 1][save->pl_y] = 'P';
        save->map[save->pl_x][save->pl_y] = ' ';
    }
    else if (save->map[save->pl_x + 1][save->pl_y] == 'X') {
        if (save->map[save->pl_x + 2][save->pl_y] != '#'
        && save->map[save->pl_x + 2][save->pl_y] != 'X') {
            save->map[save->pl_x + 2][save->pl_y] = 'X';
            save->map[save->pl_x + 1][save->pl_y] = 'P';
            save->map[save->pl_x][save->pl_y] = ' ';
        }
    }
    return save;
}

struct map_t *pl_goes_right(struct map_t *save)
{
    if (save->map[save->pl_x][save->pl_y + 1] == ' ') {
        save->map[save->pl_x][save->pl_y + 1] = 'P';
        save->map[save->pl_x][save->pl_y] = ' ';
    }
    else if (save->map[save->pl_x][save->pl_y + 1] == 'O') {
        save->map[save->pl_x][save->pl_y + 1] = 'P';
        save->map[save->pl_x][save->pl_y] = ' ';
    }
    else if (save->map[save->pl_x][save->pl_y + 1] == 'X') {
        if (save->map[save->pl_x][save->pl_y + 2] != '#'
        && save->map[save->pl_x][save->pl_y + 2] != 'X') {
            save->map[save->pl_x][save->pl_y + 2] = 'X';
            save->map[save->pl_x][save->pl_y + 1] = 'P';
            save->map[save->pl_x][save->pl_y] = ' ';
        }
    }
    return save;
}

struct map_t *pl_goes_left(struct map_t *save)
{
    if (save->map[save->pl_x][save->pl_y - 1] == ' ') {
        save->map[save->pl_x][save->pl_y - 1] = 'P';
        save->map[save->pl_x][save->pl_y] = ' ';
    }
    else if (save->map[save->pl_x][save->pl_y - 1] == 'O') {
        save->map[save->pl_x][save->pl_y - 1] = 'P';
        save->map[save->pl_x][save->pl_y] = ' ';
    }
    else if (save->map[save->pl_x][save->pl_y - 1] == 'X') {
        if (save->map[save->pl_x][save->pl_y - 2] != '#'
        && save->map[save->pl_x][save->pl_y - 2] != 'X') {
            save->map[save->pl_x][save->pl_y - 2] = 'X';
            save->map[save->pl_x][save->pl_y - 1] = 'P';
            save->map[save->pl_x][save->pl_y] = ' ';
        }
    }
    return save;
}