/*
** EPITECH PROJECT, 2017
** littler.c
** File description:
** Function that takes 3 numbers and tells which one is the littler
*/

#include "bsq.h"

int littler(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	if (b <= a && b <= c)
		return (b);
	if (c <= a && c <= b)
		return (c);
	if (a == b && a == c)
		return (a);
	return (-1);
}
