/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my.h
*/

#ifndef __MY_H__
#define __MY_H__

#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int get_size(char *filepath);
void baisecul(char *filepath);
void my_putchar(char const *str);
void my_putstr(char const *str);
void algo(int *tab);
void print_tab(int *tab);
int *char_to_int(char *str, int buf_size);
int max_value(int *tab);
int find_max_value(int *tab, int max_value);
void final_print(char *buffer, int max_value, int pos);
int count_lines(char *str);
unsigned char my_strlen(char *str);
int tablen(int *tab);

#endif
