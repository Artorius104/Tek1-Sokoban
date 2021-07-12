/*
** EPITECH PROJECT, 2020
** tmp_sokoban
** File description:
** main.c
*/

#include "sokoban.h"

struct map_t *init_struct(void)
{
    struct map_t *save = malloc(sizeof(my_map));

    save->path = NULL;
    save->cols = 0;
    save->lines = 0;
    save->pl_x = 0;
    save->pl_y = 0;
    save->count = 0;
    return save;
}

int main(int ac, char **av)
{
    struct map_t *save = init_struct();
    char **second_map;

    if (my_strcmp(av[1], "-h") == 0)
        return readme();
    if (check_input(ac, av) == 84)
        return 84;
    else {
        save->path = av[1];
        save = get_map(save);
        second_map = copy_tab(save);
        sokoban(save, second_map);
    }
    return 0;
}
