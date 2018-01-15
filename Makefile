##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	./src/main.c	\
		./src/my_putchar.c	\
		./src/my_putstr.c	\
		./src/my_put_nbr.c	\
		./src/my_getnbr.c	\
		./src/copy_buff.c	\
		./src/my_strlen.c	\
		./src/map_width.c	\
		./src/numbers_algo.c	\
		./src/littler.c		\
		./src/bigger_pos.c	\
		./src/draw_square.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

INCLUDE	=	include

CFLAGS	=	-Wall -Wextra -pedantic -I./include

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
