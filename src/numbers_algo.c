/*
** EPITECH PROJECT, 2017
** numbers_algo.c
** File description:
** Function that start replacing map chracters by numbers
*/

#include "bsq.h"
#include <stdlib.h>

void fill_map(char *map, int *nums)
{
	int i = 0;
	int w = map_width(map);

	while (nums[i] != -2) {
		if (nums[i] == -1)
			nums[i] = littler(nums[i - 1], nums[i - w - 2], nums[i - w - 1]) + 1;
		i = i + 1;
	}
}

void init_algo2(char *map, int *map_nums, int i)
{
	while (map[i] != '\0') {
		if (map[i] == '\n')
			map_nums[i] = -3;
		if (map[i] == 'o')
			map_nums[i] = 0;
		if (map[i] == '.' && map[i - 1] == '\n')
			map_nums[i] = 1;
		if (map[i] == '.' && map[i - 1] != '\n')
			map_nums[i] = -1;
		i = i + 1;
	}
	map_nums[i] = -2;
	fill_map(map, map_nums);
}

int init_algo(char *map)
{
	int *map_nums = malloc(sizeof(int) * my_strlen(map) + 1);
	int i = 0;

	while (map[i] != '\n') {
		if (map[i] == '.')
			map_nums[i] = 1;
		if (map[i] == 'o')
			map_nums[i] = 0;
		i = i + 1;
	}
	init_algo2(map, map_nums, i);
	draw_square(map, map_nums, bigger_pos(map_nums));
	free(map_nums);
	return (0);
}
