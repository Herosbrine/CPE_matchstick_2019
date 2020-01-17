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

int check_map(t_data *cordonnee)
{
    int i = 0;

    while(i < cordonnee->size + 1) {
        if (i > 1)
            return (0);
        i++;
    }
    return (-1);
}

void manage_stick(t_data *cordonnee)
{
    int i = 0;

    while (i < cordonnee->size + 1) {
        if (i == cordonnee->save - 1) {
            cordonnee->tab[i] -= cordonnee->save_2;
            break;
        }
        i++;
    }
}

int game_loop(t_data *cordonnee)
{
    fill(cordonnee);
    //cordonnee->tab = print_game_board(cordonnee);
    my_printf("\nYour turn:");
    while (check_map(cordonnee) == 0) {
        verify_error(cordonnee);
        manage_stick(cordonnee);
        print_game_board(cordonnee);
    }
    return (0);
}