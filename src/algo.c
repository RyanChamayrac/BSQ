/*
** EPITECH PROJECT, 2017
** algo.c
** File description:
** algo bsq
*/

#include <my.h>

void	algo(int *tab)
{
	int len = tablen(tab);
	int count = len + 2;
	int add;

	while (tab[count] != -69) {
		add = tab[count - 1];

		if (add > tab[count - len - 1])
			add = tab[count -len - 1];
		if (add > tab[count - len - 2])
			add = tab[count - len - 2];
		if (tab[count] > 0)
			tab[count] += add;
		if (tab[count] == -42)
			count++;
		count++;
	}
}
