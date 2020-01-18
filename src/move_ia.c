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

void move_ia(t_data *cordonnee)
{
    int i = 0;
    int x = 1;

    while (i < cordonnee->size + 1) {
        if (cordonnee->tab[i] >= 1) {
            cordonnee->tab[i] -= 1;
            break;
        }
        i++;
    }
    i++;
    if (check_map(cordonnee) != -1 ) {
        my_printf("\n\nAI's turn...\n");
        my_printf("AI removed %d match(es) from line %d\n", x, i);
        print_game_board(cordonnee);
        my_printf("\n\nYour turn:\n");
    }
    if (check_map(cordonnee) == -1 ) {
        my_printf("\n\nAI's turn...\n");
        my_printf("AI removed %d match(es) from line %d\n", x, i);
        print_game_board(cordonnee);
        my_printf("\nI lost... snif... but I'll get you next time!!\n");
        exit(1);
    }
}