/*
** EPITECH PROJECT, 2017
** algo.c
** File description:
** a
*/

#include <my.h>

int	*char_to_int(char *str, int buf_size)
{
	int *tab = malloc(sizeof(int) * buf_size);
	int count = 0;

	while (str[count] != '\0') {
		if (str[count] == '.')
			tab[count] = 1;
		if (str[count] == 'o')
			tab[count] = 0;
		if (str[count] == '\n')
			tab[count] = -42;
		count++;
	}
	tab[count - 1] = -41;
	tab[count] = -69;
	//free(tab);
	return (tab);
}
