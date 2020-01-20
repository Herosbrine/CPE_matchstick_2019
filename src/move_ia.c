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

int move_ia2(int *a, int *x, int *i, t_data *cordonnee)
{
    if (cordonnee->tab[*i] == *x) {
        cordonnee->tab[*i] -= *x - 1;
        *x -= 1;
        return (4);
    }
    if (cordonnee->tab[*i] == *x - *a) {
        cordonnee->tab[*i] -= cordonnee->tab[*i] - 1;
        *x -= *a + 1;
        return (4);
    }
    return (0);
}

int move_ia1(int *x, int *i, int *count, t_data *cordonnee)
{
    if (cordonnee->tab[*i] == 1) {
        cordonnee->tab[*i] -= 1;
        *x = 1;
        return (4);
    }
    if (cordonnee->tab[*i] == *x + 1) {
        cordonnee->tab[*i] -= *x;
        return (4);
    }
    if (cordonnee->tab[*i] == *x + *count) {
        cordonnee->tab[*i] -= 1;
        *x = 1;
        return (4);
    }
    return (0);
}

int check_end(int *x, int *i, t_data *cordonnee)
{
    if (check_map(cordonnee) != -1 ) {
        my_printf("\n\nAI's turn...\n");
        my_printf("AI removed %d match(es) from line %d\n", *x, *i);
        print_game_board(cordonnee);
        my_printf("\n\nYour turn:\n");
    }
    if (check_map(cordonnee) == -1 ) {
        my_printf("\n\nAI's turn...\n");
        my_printf("AI removed %d match(es) from line %d\n", *x, *i);
        print_game_board(cordonnee);
        my_printf("\nI lost... snif... but I'll get you next time!!\n");
        return (1);
    }
    return (0);
}

int move_ia(t_data *cordonnee)
{
    int i = 0;
    int x = cordonnee->params;
    int a = 0;
    int count = 2;

    while (i < cordonnee->size + 1) {
        if (move_ia1(&x, &i, &count, cordonnee) == 4)
            break;
        if (move_ia2(&a, &x, &i, cordonnee) == 4)
            break;
        if (cordonnee->tab[i] != 0) {
            a++;
            count++;
        }
        if (cordonnee->tab[i] == 0)
            i++;
    }
    i++;
    if (check_end(&x, &i, cordonnee) == 1)
        return (1);
    return (0);
}