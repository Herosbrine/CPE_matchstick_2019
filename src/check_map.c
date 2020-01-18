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