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
    size_t sizeb = 1000;

    my_printf("Line: ");
    if (getline(&cordonnee->buffer, &sizeb, stdin) == -1)
        return (84);
    for (int i = 0; cordonnee->buffer[i] != '\0'; i++) {
        if (cordonnee->buffer[i] == '\n')
            cordonnee->buffer[i] = '\0';
    }
    cordonnee->save = my_getnbr(cordonnee->buffer);
    if (error_management(cordonnee) == -1)
        return (-1);
    return (0);
}