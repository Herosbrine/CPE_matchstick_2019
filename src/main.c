/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** main.c
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "printf/my.h"

int main(int ac, char **argv)
{
    t_data cordonnee;
    int game_stat = 0;

    if (ac < 3 || ac > 3)
        return (84);
    cordonnee.size = my_getnbr(argv[1]);
    cordonnee.params = my_getnbr(argv[2]);
    init_var(&cordonnee);
    game_stat = game_loop(&cordonnee);
    if (game_stat == 84)
        return (0);
    if (game_stat == 2)
        return (2);
    if (game_stat == 1)
        return (1);
}