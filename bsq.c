/*
** EPITECH PROJECT, 2017
** my_popup
** File description:
** a
*/

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void	baisecul(char *filepath)
{
	int a = 20000;
	int fd = open(filepath, O_RDWR);
	char buffer[30000];
	read(fd, buffer, a);
	my_putstr(buffer);
	close(fd);
}

/*void	skip1(char *str)
{
	int a = 0;

	while (str[a] != '\n')
}*/

int	main(int ag, char **av)
{
	baisecul(av[1]);
	return (0);
}
