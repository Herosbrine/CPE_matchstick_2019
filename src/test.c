/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** test.c
*/
#include <stddef.h>
#include <stdlib.h>
#include "printf/my.h"

char *my_memset(char *str, char c, int size)
{
	int count;

	for (count = 0; count < size; count++)
		str[count] = c;
	str[count] = '\0';
	return (str);
}

char **malloc_map(int size)
{
	char **map;
	int count = 0;

	map = malloc(sizeof(char *) * (size + 3));
	for (count = 0; count < (size + 2); count++) {
		map[count] = malloc(sizeof(char) * (size * 2) + 3);
	}
	map[count] = NULL;
	return (map);
}

char **generate_map(int size)
{
	char **map;
	int count = 1;

	map = malloc_map(size);
	map[0] = my_memset(map[0], '*', (size * 2) + 1);
	for (count = 1; count < size + 1; count++) {
		map[count] = my_memset(map[count], ' ', (size * 2) + 1);
		map[count][0] = '*';
		map[count][size * 2] = '*';
	}
	map[size + 1] = my_memset(map[size + 1], '*', (size * 2) + 1);
	return (map);
}

char **generate_matches(int size, char **map)
{
	int x_axis = size;
	int y_axis = 1;
	int count = 0;

	for (count = 0; y_axis <= size; count++) {
		x_axis = (size - count);
		while (x_axis < (size + count + 1)) {
			map[y_axis][x_axis] = '|';
			x_axis++;
		}
		y_axis++;
	}
	return (map);
}

void display_map(char **map)
{
	int count;

	for (count = 0; map[count] != NULL; count++) {
		my_putstr(map[count]);
		my_putchar('\n');
	}
	my_putchar('\n');
}

int main(int ac, char **argv)
{
    int size = my_getnbr(argv[1]);
    char **map;

    if (ac < 3 || ac > 3)
        return (84);
    map = generate_map(size);
    display_map(map);
}