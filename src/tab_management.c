/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** buff_to_tab.c
*/

#include "../include/sokoban.h"

struct map_t *count_lines_cols(struct map_t *save, char *buffer)
{
    save->lines = 0;
    save->cols = 0;

    for (int x = 0; buffer[x] != '\0'; x++) {
        if (buffer[x] == '\n' || buffer[x + 1] == '\0')
            save->lines++;
    }
    for (int y = 0; buffer[y] != '\0'; y++) {
        if (buffer[y] != '\n' && buffer[y] != '\0')
            save->cols++;
    }
    return save;
}

struct map_t *buff_to_tab(char *buffer, struct map_t *save)
{
    char **tab;
    int i = 0;

    save = count_lines_cols(save, buffer);
    tab = malloc(sizeof(char *) * save->lines + 1);
    for (int x = 0; x <= save->lines; x++) {
        tab[x] = malloc(sizeof(char) * (save->cols + 1));
        for (int y = 0; buffer[i] != '\0'; y++, i++) {
            if (buffer[y - 1] == '\n') {
                tab[x][y] = '\0';
                break;
            }
            else
                tab[x][y] = buffer[i];
        }
    }
    save->map = tab;
    return save;
}

char **copy_tab(struct map_t *save)
{
    char **second = malloc(sizeof(char *) * save->lines);

    for (int i = 0; i <= save->lines; i++)
        second[i] = malloc(sizeof(char) * save->cols);
    for (int i = 0; i <= save->lines; i++)
        for (int j = 0; j <= save->cols; j++)
            second[i][j] = save->map[i][j];
    return second;
}