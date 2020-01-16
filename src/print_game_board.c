/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** print_game_board.c
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "printf/my.h"
int interaction2()
{
    char * buffer = NULL;
    int fd = 0;
    int save = 0;

    buffer = malloc(sizeof(char) * 100);
    my_printf("Matches: ");
    fd = read(0, buffer, 256);
    buffer[fd-1] = '\0';
    save = my_getnbr(buffer);
    free(buffer);
    return (save);
}

int interaction(int params)
{
    char * buffer = NULL;
    int fd = 0;
    int save = 0;

    buffer = malloc(sizeof(char) * 100);
    my_printf("\nYour turn:\nLine: ");
    fd = read(0, buffer, 256);
    buffer[fd-1] = '\0';
    save = my_getnbr(buffer);
    free(buffer);
    if (save > params) {
        my_printf("Error: you cannot remove ");
        my_printf("more than %d matches per turn", params);
        interaction(params);
    }
    return (save);
}

int *print_game_board(int size)
{
    int j = 0;
    int i = 0;
    int x = 0;
    int *tab = NULL;
    int size2 = size;
    tab = malloc(sizeof(int) * size);

    tab[0] = 1;
    i++;

    while(i < size + 1) {
        tab[i] = tab[i-1] + 2;
        i++;
    }
    i = 0;
    while(i < size*2+1) {
        my_printf("*");
        i++;
    }
    i = 0;
    my_printf("\n");
    while(i < size) {
        x = size * 2 - 1;
        my_printf("*");
        while(tab[size2] > j+size2+2) {
            my_printf(" ");
            j++;
            x--;
        }
        j = 0;
        while(tab[i] > j) {
            my_printf("|");
            j++;
            x--;
        }
        j = 0;
        for (int k = 0; k < x; k++)
            my_printf(" ");
        my_printf("*");
        my_printf("\n");
        i++;
        size2--;
    }
    i = 0;
    while(i < size * 2 + 1) {
        my_printf("*");
        i++;
    }
    return (tab);
}

int main(int ac, char **argv)
{
    int size = my_getnbr(argv[1]);
    int params = my_getnbr(argv[2]);
    int Matches = 0;
    int Lines = 0;

    if (ac < 3 || ac > 3)
        return (84);
    print_game_board(size);
    Lines = interaction(params);
    Matches = interaction2();
}