/*
** EPITECH PROJECT, 2017
** bigger_pos.c
** File description:
** Function that finds the bigger number in the numbers map
*/

#include "bsq.h"

int bigger_pos(int *nums)
{
	int i = 0;
	int big = 0;

	while (nums[i] != -2) {
		if (nums[i] > big)
			big = nums[i];
		i = i + 1;
	}
	i = 0;
	while (nums[i] != -2) {
		if (nums[i] == big)
			return (i);
		i = i + 1;
	}
	return (0);
}
