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
    printf("save_2 : %d", cordonnee->save_2);
    if (error_management2(cordonnee) == -1) {
        return(-1);
    }
    return (0);
}