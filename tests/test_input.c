/*
** EPITECH PROJECT, 2020
** B-PSU-200-PAR-2-1-mysokoban-gilbert.badiabo
** File description:
** test_input.c
*/

#include <criterion/criterion.h>

int check_buffer_second(char *buff);

Test(error, check_buffer_v1)
{
    char *buff = "##########\n#   X   O#\n##    ####\n#P     XO#\n"
    "#   X    #\n###   ####\n#        #\n#O     ###\n##########\0";
    cr_assert(check_buffer_second(buff) == 0);
}

Test(error, check_buffer_v2)
{
    char *buff = "##########\n#   X   O#\n##    ####\n#P     XO#\n"
    "#   X    #\n###   ####\n#        #\n#O     ###\n##########\0";
    cr_assert_not(check_buffer_second(buff) == 84);
}