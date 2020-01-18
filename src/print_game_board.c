/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** print_game_board.c
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "printf/my.h"

void print_game_space(int *j, int *x, int *i, t_data *cordonnee)
{
    while (*i < cordonnee->size) {
        *x = cordonnee->size * 2 - 1;
        my_printf("*");
        while (cordonnee->space[*i] > *j) {
            my_printf(" ");
            (*j)++;
            (*x)--;
        }
        *j = 0;
        while (cordonnee->tab[*i] > *j) {
            my_printf("|");
            (*j)++;
            (*x)--;
        }
        *j = 0;
        for (int k = 0; k < *x; k++)
            my_printf(" ");
        my_printf("*");
        my_printf("\n");
        (*i)++;
    }
}

int *print_game_board(t_data *cordonnee)
{
    int j = 0;
    int i = 0;
    int x = 0;

    i = 0;
    while (i < cordonnee->size * 2 + 1) {
        my_printf("*");
        i++;
    }
    i = 0;
    my_printf("\n");
    print_game_space(&j, &x, &i, cordonnee);
    i = 0;
    while (i < cordonnee->size * 2 + 1) {
        my_printf("*");
        i++;
    }
    return (cordonnee->tab);
}