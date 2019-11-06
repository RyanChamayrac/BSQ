/*
** EPITECH PROJECT, 2017
** tablen.c
** File description:
** tablen
*/

#include <my.h>

int	tablen(int *tab)
{
	int a = 0;

	while (tab[a] != -42)
		a++;
	return (a);
}
