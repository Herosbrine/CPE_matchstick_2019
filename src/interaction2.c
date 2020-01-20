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
    size_t sizeb = 1000;

    my_printf("Matches: ");
    if (getline(&cordonnee->buffer2, &sizeb, stdin) == -1)
        return (84);
    for (int i = 0; cordonnee->buffer2[i] != '\0'; i++) {
        if (cordonnee->buffer2[i] == '\n')
            cordonnee->buffer2[i] = '\0';
    }
    cordonnee->save_2 = my_getnbr(cordonnee->buffer2);
    if (error_management2(cordonnee) == -1)
        return (-1);
    return (0);
}