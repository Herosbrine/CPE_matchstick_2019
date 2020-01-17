/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** init_var.c
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "printf/my.h"

void init_var(t_data *cordonnee)
{
    cordonnee->matches = 0;
    cordonnee->Lines = 0;
    cordonnee->save = 0;
    cordonnee->buffer = NULL;
    cordonnee->buffer2 = NULL;
    cordonnee->tab = NULL;
    cordonnee->save_2 = 0;

    cordonnee->tab = malloc(sizeof(int) * cordonnee->size);
    cordonnee->space = malloc(sizeof(int) * cordonnee->size);
    cordonnee->buffer = malloc(sizeof(char) * 100);
    cordonnee->buffer2 = malloc(sizeof(char) * 100);
}