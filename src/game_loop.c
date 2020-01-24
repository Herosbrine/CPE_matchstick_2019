/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** game_loop.c
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "printf/my.h"

int game_loop(t_data *cordonnee)
{
    fill(cordonnee);
    my_printf("\n\nYour turn:\n");
    while (1) {
        if (verify_error(cordonnee) == 84)
            return (84);
        if (print_move_p(cordonnee) == 2)
            return (2);
        if (move_ia(cordonnee) == 1) {
            return (1);
        }
    }
    return (0);
}