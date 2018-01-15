/*
** EPITECH PROJECT, 2017
** map_width.c
** File description:
** Function that calculates the width of the BSQ map
*/

#include "bsq.h"

int map_width(char *map)
{
	int i = 0;

	while (map[i] != '\n')
		i = i + 1;
	return (i);
}
