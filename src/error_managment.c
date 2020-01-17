/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** error_managment.c
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "printf/my.h"

int error_management(t_data *cordonnee)
{
    if (my_getnbr(cordonnee->buffer) == 84) {
        my_printf("Error: invalid input (positive number expected)");
        interaction(cordonnee);
    }
    if (cordonnee->save < 0) {
        my_printf("Error: invalid input (positive number expected)");
        interaction(cordonnee);
        }
    if (cordonnee->save > cordonnee->size) {
        my_printf("this line is out of range");
        interaction(cordonnee);
    }
    return (1);
}