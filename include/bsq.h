/*
** EPITECH PROJECT, 2017
** bsq.h
** File description:
** bsq.h
*/

#ifndef _BSQ_H_
#define _BSQ_H_
int bigger_pos(int *nums);
void copy_buff(char *buffer);
void draw_square(char *map, int *nums, int big);
int littler(int a, int b, int c);
int map_width(char *map);
int my_getnbr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char *str);
int my_strlen(char *str);
void fill_map(char *map, int *nums);
void init_algo2(char *map, int *map_nums, int i);
int init_algo(char *map);
#endif /* _BSQ_H_ */
