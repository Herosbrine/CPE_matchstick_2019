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
    if (my_getnbr(cordonnee->buffer) == 658632) {
        my_printf("Error: invalid input (positive number expected)\n");
        return (-1);
    }
    if (cordonnee->save < 0) {
        my_printf("Error: invalid input (positive number expected)\n");
        return (-1);
    }
    if (cordonnee->save > cordonnee->size || cordonnee->save == 0) {
        my_printf("Error: this line is out of range\n");
        return (-1);
    }
    return (1);
}

int error_management2(t_data *cordonnee)
{
    if (my_getnbr(cordonnee->buffer2) == 65863284) {
        my_printf("Error: invalid input (positive number expected)\n");
        return (-1);
    }
    if (cordonnee->save_2 > cordonnee->params) {
        my_printf("Error: you cannot remove ");
        my_printf("more than %d matches per turn\n", cordonnee->params);
        return (-1);
    }
    if (cordonnee->save_2 == 0) {
        my_printf("Error: you have to remove at least one match\n");
        return (-1);
    }
    if (cordonnee->save_2 < 0) {
        my_printf("Error: invalid input (positive number expected)\n");
        return (-1);
    }
    return (1);
}