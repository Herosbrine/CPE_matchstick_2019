/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** interaction.c
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "printf/my.h"

int interaction(t_data *cordonnee)
{
    int fd = 0;

    my_printf("\nLines: ");
    fd = read(0, cordonnee->buffer, 256);
    cordonnee->buffer[fd-1] = '\0';
    cordonnee->save = my_getnbr(cordonnee->buffer);
    free(cordonnee->buffer);
    if (cordonnee->save > cordonnee->size) {
        my_printf("Error: you cannot remove ");
        my_printf("more than %d matches per turn", cordonnee->params);
        interaction(cordonnee);
    }
    return (cordonnee->save);
}