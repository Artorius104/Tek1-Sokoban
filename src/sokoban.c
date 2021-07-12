/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** sokoban.c
*/

#include "../include/sokoban.h"

void play(struct map_t *save, char **second_map)
{
    int j = 0;
    int i = 0;
    int ch = 0;

    while (end_condt(save, second_map) == 0) {
        clear();
        refresh();
        for (i = 0, j = 0; i < save->lines; i++, j++)
            my_center_map(save, i, j);
        ch = getch();
        save = find_player(save);
        save = manage_player(save, second_map, ch);
        if (ch == ' ')
            break;
    }
}

int sokoban(struct map_t *save, char **second_map)
{
    save = find_player(save);
    initscr();
    noecho();
    keypad(stdscr, TRUE);
    refresh();
    curs_set(FALSE);
    play(save, second_map);
    endwin();
    return 0;
}