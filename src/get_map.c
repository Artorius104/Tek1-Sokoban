/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** get_map.c
*/

#include "../include/sokoban.h"

struct map_t *count_target(struct map_t *save)
{
    for (int i = 0; i < save->lines; i++)
        for (int j = 0; j < save->cols; j++)
            if (save->map[i][j] == 'O')
                save->count++;
    return save;
}

char *open_file(char const *str)
{
    int op = open(str, O_RDONLY);
    struct stat statbuf;
    char *buffer = NULL;

    stat(str, &statbuf);
    buffer = malloc(statbuf.st_size + 1);
    buffer[statbuf.st_size + 1] = '\0';
    read(op, buffer, statbuf.st_size);
    close(op);
    return buffer;
}

struct map_t *get_map(struct map_t *save)
{
    char *buffer = open_file(save->path);

    save = buff_to_tab(buffer, save);
    save = count_target(save);
    return save;
}