/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** 
*/

#include "bsq.h"

int my_put_nbr(int nb)
{
	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 0 && nb <= 9) {
		my_putchar(nb + '0');
	}
	if (nb > 9) {
		my_put_nbr(nb / 10);
		my_put_nbr(nb % 10);
	}
	return (0);
}