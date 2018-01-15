/*
** EPITECH PROJECT, 2017
** Joseph Maso
** File description:
** my putchar
*/

#include <unistd.h>
#include "bsq.h"

void my_putchar (char c)
{
	write(1, &c, 1);
}
