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

int game_loop(t_data *cordonnee)
{
    cordonnee->tab = print_game_board(cordonnee);
    my_printf("\nYour turn:");
    //verify_error(cordonnee);
    cordonnee->Lines = interaction(cordonnee);
    cordonnee->matches = interaction2(cordonnee);
    return (0);
}