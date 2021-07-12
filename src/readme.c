/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** readme.c
*/

#include "../include/sokoban.h"

int readme(void)
{
    write(1, "USAGE/n   ./my_sokoban map\nDESCRIPTION\n", 38);
    write(1, "  map file representing the warehouse ", 38);
    write(1, "map, containing ‘#’ for walls", 29);
    write(1, "‘P’ for the player, ‘X’ for boxes ", 34);
    write(1, "and ‘O’ for storage locations.", 30);
    return 0;
}