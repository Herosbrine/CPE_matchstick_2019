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

void move_p(t_data *cordonnee)
{
    if (manage_stick(cordonnee) != 1 && check_map(cordonnee) != -1) {
        my_printf("Player removed %d match(es)"\
        " from line %d\n", cordonnee->save_2, cordonnee->save);
        print_game_board(cordonnee);
        my_printf("\n\nYour turn:\n");
    }
}