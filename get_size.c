/*
** EPITECH PROJECT, 2017
** get_size
** File description:
** size
*/

#include <sys/stat.h>

int	get_size(char *filename)
{
	struct stat sb;

	if (stat(filename, &sb) != 0)
		return 0;
	return sb.st_size;
}
