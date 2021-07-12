/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** check_input.c
*/

#include "../include/sokoban.h"

int check_content(char *file, int op)
{
    int size = 0;
    struct stat statbuf;
    char *buffer = NULL;

    stat(file, &statbuf);
    buffer = malloc(statbuf.st_size + 1);
    buffer[statbuf.st_size + 1] = '\0';
    size = read(op, buffer, statbuf.st_size);
    if (size == -1) {
        write(2, "Failed to read file", 19);
        return 84;
    }
    if (check_map(buffer) == 84) {
        write(2, "File's content incorrect\n", 26);
        return 84;
    }
    close(op);
    free(buffer);
    return 0;
}

int check_file(char *file)
{
    int op = open(file, O_RDONLY);

    if (op == -1) {
        write(2, "Failed to open file\n", 21);
        return 84;
    }
    if (check_content(file, op) == 84)
        return 84;
    close(op);
    return 0;
}

int check_input(int ac, char **av)
{
    if (ac < 2 || ac > 2) {
        write(2, "ERROR : check arguments\n", 23);
        return 84;
    }
    if (check_file(av[1]) == 84)
        return 84;
    return 0;
}