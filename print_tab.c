/*
** EPITECH PROJECT, 2017
** print_tab.c
** File description:
** a
*/

void	print_tab(int *tab)
{
	int count = 0;

	while (tab[count] != -69) {
		printf("%d", tab[count]);
		if (tab[count] == -42)
			printf("\n");
		count++;
	}
}
