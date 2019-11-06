/*
** EPITECH PROJECT, 2017
** count_lines.c
** File description:
** algo bsq
*/

int	count_lines(char *str)
{
	int count = 0;

	while (str[count] != '\n')
		count++;
	return (count);
}
