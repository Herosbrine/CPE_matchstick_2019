/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** interaction2.c
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "printf/my.h"

int interaction2(t_data *cordonnee)
{
    int fd = 0;

    my_printf("Matches: ");
    fd = read(0, cordonnee->buffer2, 256);
    cordonnee->buffer2[fd-1] = '\0';
    cordonnee->save_2 = my_getnbr(cordonnee->buffer2);
    free(cordonnee->buffer2);
    if (cordonnee->save_2 > cordonnee->params) {
        my_printf("Error: you cannot remove ");
        my_printf("more than %d matches per turn", cordonnee->params);
        interaction(cordonnee);
    }
    return (cordonnee->save_2);
}