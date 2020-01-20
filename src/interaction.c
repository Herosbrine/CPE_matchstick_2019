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

    my_printf("Lines: ");
    fd = read(0, cordonnee->buffer, 256);
    if (fd == 0)
        return (84);
    cordonnee->buffer[fd-1] = '\0';
    cordonnee->save = my_getnbr(cordonnee->buffer);
    if (error_management(cordonnee) == -1)
        return (-1);
    return (0);
}