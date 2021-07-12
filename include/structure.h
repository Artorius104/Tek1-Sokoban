/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** structure
*/

#ifndef STRUCTURE_H_
#define STRUCTURE_H_
# define UP 65
# define DOWN 66
# define LEFT 68
# define RIGHT 67
# define SPACE 32

typedef struct map_t {
    char **map;
    char *path;
    int lines;
    int cols;
    int pl_x;
    int pl_y;
    int count;
} my_map;

#endif
