/*
** EPITECH PROJECT, 2019
** src
** File description:
** fill.c
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "printf/my.h"

void fill_space(t_data *cordonnee)
{
    int i = 0;

    cordonnee->space = malloc(sizeof(int) * (cordonnee->size + 1));
    cordonnee->space[0] = cordonnee->size - 1;
    i++;
    while (i < cordonnee->size) {
        cordonnee->space[i] = cordonnee->space[i-1] - 1;
        i++;
    }
}

void fill(t_data *cordonnee)
{
    int i = 0;

    cordonnee->tab[0] = 1;
    i++;
    while (i < cordonnee->size + 1) {
        cordonnee->tab[i] = cordonnee->tab[i-1] + 2;
        i++;
    }
    fill_space(cordonnee);
    print_game_board(cordonnee);
}