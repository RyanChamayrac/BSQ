/*
** EPITECH PROJECT, 2017
** max_value.c
** File description:
** algo bsq
*/

int	max_value(int *tab)
{
	int count = 0;
	int value = 0;

	while (tab[count] != -69) {
		if (value < tab[count])
			value = tab[count];
		count++;
	}
	return (value);
}
