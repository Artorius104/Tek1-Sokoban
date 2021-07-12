/*
** EPITECH PROJECT, 2020
** B-MUL-100-PAR-1-3-myrunner-gilbert.badiabo
** File description:
** sokoban.h
*/

#ifndef SOKOBAN_H_
#define SOKOBAN_H_

#include "my.h"
#include "structure.h"
#include <ncurses.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

int readme(void);
struct map_t *init_struct(void);
int check_input(int ac, char **av);
int check_file(char *file);
int check_content(char *file, int op);
int check_map(char *buff);
int check_buffer(char *buff);
int check_buffer_second(char *buff);
int check_elements(char *buff);
int sokoban(struct map_t *save, char **second_map);
struct map_t *get_map(struct map_t *save);
char *open_file(char const *str);
struct map_t *buff_to_tab(char *buffer, struct map_t *save);
char **copy_tab(struct map_t *save);
struct map_t *count_lines_cols(struct map_t *save, char *buffer);
struct map_t *find_player(struct map_t *save);
void play(struct map_t *save, char **second_map);
void my_center_map(struct map_t *save, int i, int j);
struct map_t *manage_player(struct map_t *save, char **second_map, int ch);
struct map_t *player_movement(struct map_t *save, int ch);
struct map_t *pl_goes_up(struct map_t *save);
struct map_t *pl_goes_down(struct map_t *save);
struct map_t *pl_goes_right(struct map_t *save);
struct map_t *pl_goes_left(struct map_t *save);
struct map_t *replace_spot(struct map_t *save, char **second_map);
int end_condt(struct map_t *save, char **second_map);
int win_condt(struct map_t *save, char **second_map);
int lose_condt(struct map_t *save, char **second_map);

#endif