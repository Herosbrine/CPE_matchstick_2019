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
    int x = 0;

    while (x < cordonnee->size + 1) {
        if (x == cordonnee->size)
            return(-1);
        if (cordonnee->tab[i] == 0)
            x++;
        if  (cordonnee->tab[i] != 0)
            return(0);
        i++;
    }
    return(0);
}

int manage_stick(t_data *cordonnee)
{
    int i = 0;

    while (i < cordonnee->size + 1) {
        if (i == cordonnee->save - 1) {
            if (cordonnee->tab[i] >= cordonnee->save_2) {
                cordonnee->tab[i] -= cordonnee->save_2;
                return (0);
            }
            else {
                my_printf("Error: not enough matches on this line\n");
                return (1);
            }
        }
        i++;
    }
    return (0);
}

int game_loop(t_data *cordonnee)
{
    fill(cordonnee);
    //cordonnee->tab = print_game_board(cordonnee);
    my_printf("\n\nYour turn:\n");
    while (1) {
        if (check_map(cordonnee) == -1) {
            my_printf("Player removed %d match(es)"\
            " from line %d\n", cordonnee->save_2, cordonnee->save);
            print_game_board(cordonnee);
            my_printf("\nYou lost, too bad...");
            exit(1);
        }
        verify_error(cordonnee);
        //manage_stick(cordonnee);
        if (manage_stick(cordonnee) != 1 && check_map(cordonnee) != -1) {
            my_printf("Player removed %d match(es)"\
            " from line %d\n", cordonnee->save_2, cordonnee->save);
            print_game_board(cordonnee);
            my_printf("\n\nYour turn:\n");
        }
    }
    return (0);
}