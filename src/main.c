/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main.c
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include "bsq.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *buffer = malloc(sizeof(char) * 50000000);
	int fs = 0;
	int fd = 0;

	if (argc == 1)
		return (84);
	fd = open(argv[1], O_RDONLY);
	fs = read(fd, buffer, 50000000);
	buffer[fs] = '\0';
	copy_buff(buffer);
	init_algo(buffer);
	write(1, buffer, my_strlen(buffer));
	free(buffer);
	return (0);
}
