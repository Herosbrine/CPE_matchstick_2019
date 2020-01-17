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

int verify_error(t_data *cordonnee)
{
    int bol_lines = 0;
    int bol_matches = 0;

    while (bol_lines != 1 || bol_matches != 1)
        bol_lines = error_management(cordonnee);
    return(0);
}