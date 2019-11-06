/*
** EPITECH PROJECT, 2017
** final_print.c
** File description:
** algo bsq
*/

#include <my.h>

void	final_print(char *buffer, int max_value, int pos)
{
	int count = pos;
	int cols = max_value;
	int cols2 = max_value;
	int x = -1;
	int len = count_lines(buffer);

	while (cols > 0) {
		while (cols2 > 0) {
			buffer[pos] = 'x';
			cols2--;
			pos--;
		}
		cols2 = max_value;
		cols--;
		pos = count - (len - x);
		x--;
		count -= len;
	}
}
