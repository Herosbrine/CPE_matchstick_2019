/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** verify_error.c
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "printf/my.h"

void malloc_free(t_data *cordonnee)
{
    free(cordonnee->space);
    free(cordonnee->tab);
}

int verify_error(t_data *cordonnee)
{
    int bol_lines = 1;
    int bol_matches = 1;

    while (bol_lines != 0 || bol_matches != 0) {
        bol_lines = interaction(cordonnee);
        if (bol_lines == 0)
            bol_matches = interaction2(cordonnee);
        if (bol_lines == 84 || bol_matches == 84) {
            return (84);
        }
    }
    return (0);
}