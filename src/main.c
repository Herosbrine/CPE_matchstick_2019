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
    cordonnee.size = my_getnbr(argv[1]);
    cordonnee.params = my_getnbr(argv[2]);

    if (ac < 3 || ac > 3)
        return (84);
    init_var(&cordonnee);
    game_loop(&cordonnee);
}