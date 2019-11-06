/*
** EPITECH PROJECT, 2017
** find_max_value.c
** File description:
** algo bsq
*/

#include <my.h>

int	find_max_value(int *tab, int max_value)
{
	int count = 0;

	while (tab[count] != max_value)
		count++;
	return (count);
}
