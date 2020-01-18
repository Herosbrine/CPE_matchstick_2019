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
        end_game(cordonnee);
        verify_error(cordonnee);
        move_p(cordonnee);
    }
    return (0);
}