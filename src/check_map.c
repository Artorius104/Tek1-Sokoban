/*
** EPITECH PROJECT, 2020
** B-PSU-200-PAR-2-1-mysokoban-gilbert.badiabo
** File description:
** check_map.c
*/

#include "../include/sokoban.h"

int check_elements(char *buff)
{
    int p = 0;
    int o = 0;
    int x = 0;

    for (int i = 0; buff[i] != '\0'; i++) {
        if (buff[i] == 'P')
            p++;
        if (buff[i] == 'O')
            o++;
        if (buff[i] == 'X')
            x++;
    }
    if (p != 1 || o == 0 || x == 0)
        return 84;
    if (o != x)
        return 84;
    return 0;
}

int check_buffer_second(char *buff)
{
    int line, p, x, o, wall = 0;

    for (int i = 0; buff[i] != '\0'; i++) {
        if (buff[i] == '\n')
            line = 1;
        if (buff[i] == 'P')
            p = 1;
        if (buff[i] == 'X')
            x = 1;
        if (buff[i] == 'O')
            o = 1;
        if (buff[i] == '#')
            wall = 1;
    }
    if (line == 1 && p == 1 && x == 1 && o == 1 && wall == 1)
        return 0;
    else
        return 84;
}

int check_buffer(char *buff)
{
    if (my_strlen(buff) <= 0)
        return 84;
    for (int i = 0; buff[i] != '\0'; i++) {
        if (buff[i] != '\n' && buff[i] != 'P' &&
        buff[i] != 'X' && buff[i] != 'O' && buff[i] != '#' && buff[i] != ' ')
            return 84;
        if (check_buffer_second(buff) == 84)
            return 84;
    }
    return 0;
}

int check_map(char *buff)
{
    if (check_buffer(buff) == 84)
        return 84;
    if (check_elements(buff) == 84)
        return 84;
    return 0;
}