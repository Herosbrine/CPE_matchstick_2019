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

int print_move_p(t_data *cordonnee)
{
    for (int y = 0; manage_stick(cordonnee) == 1; y++){
        my_printf("Error: not enough matches on this line\n");
        verify_error(cordonnee);
        if (y == 5000)
            return (2);
    }
    if (check_map(cordonnee) != -1) {
        my_printf("Player removed %d match(es)"\
            " from line %d\n", cordonnee->save_2, cordonnee->save);
        print_game_board(cordonnee);
    }
    if (check_map(cordonnee) == -1 ) {
        my_printf("Player removed %d match(es)"\
            " from line %d\n", cordonnee->save_2, cordonnee->save);
        print_game_board(cordonnee);
        my_printf("\nYou lost, too bad...\n");
        return (2);
    }
    return (0);
}