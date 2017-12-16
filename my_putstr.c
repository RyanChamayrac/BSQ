/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** my_putstr.c
*/

#include <unistd.h>

void	my_putchar(char c)
{
	write (1, &c, 1);
}

void	my_putstr(char const *str)
{
       	while (*str != '\0'){
		my_putchar(*str);
       	       	str++;
	}
}
