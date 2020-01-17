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

int *print_game_board(t_data *cordonnee)
{
    int j = 0;
    int i = 0;
    int x = 0;
    int size2 = cordonnee->size;

    cordonnee->tab[0] = 1;
    i++;

    while(i < cordonnee->size + 1) {
        cordonnee->tab[i] = cordonnee->tab[i-1] + 2;
        i++;
    }
    i = 0;
    while(i < cordonnee->size*2+1) {
        my_printf("*");
        i++;
    }
    i = 0;
    my_printf("\n");
    while(i < cordonnee->size) {
        x = cordonnee->size * 2 - 1;
        my_printf("*");
        while(cordonnee->tab[size2] > j+size2+2) {
            my_printf(" ");
            j++;
            x--;
        }
        j = 0;
        while(cordonnee->tab[i] > j) {
            my_printf("|");
            j++;
            x--;
        }
        j = 0;
        for (int k = 0; k < x; k++)
            my_printf(" ");
        my_printf("*");
        my_printf("\n");
        i++;
        size2--;
    }
    i = 0;
    while(i < cordonnee->size * 2 + 1) {
        my_printf("*");
        i++;
    }
    return (cordonnee->tab);
}