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

int manage_stick(t_data *cordonnee)
{
    int i = 0;

    while (i < cordonnee->size + 1) {
        if (i == cordonnee->save - 1) {
            if (cordonnee->tab[i] >= cordonnee->save_2) {
                cordonnee->tab[i] -= cordonnee->save_2;
                return (0);
            }
            else
                return (1);
        }
        i++;
    }
    return (0);
}