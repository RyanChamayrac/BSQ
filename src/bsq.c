/*
** EPITECH PROJECT, 2017
** bsq
** File description:
** a
*/

#include <my.h>

void	baisecul(char *filepath)
{
	int size = get_size(filepath);
	//printf("%d", size);
	int fd;
	int str_count = 0;
	char bean[17];
	char *buffer;
	int *tab;

	buffer = malloc(size);
	fd = open(filepath, O_RDONLY);
	while (bean[str_count] != '\n')
		read(fd, bean, 1);
	read(fd, buffer, size);
	tab = char_to_int(buffer, size);
	algo(tab);
	int a = max_value(tab);
	int b = find_max_value(tab, a);
	final_print(buffer, a, b);
	my_putstr(buffer);
	//free(buffer);
	close(fd);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		baisecul(av[1]);
	else {
		my_putstr("Error : Map Needed\n");
		return (84);
	}
	return (0);
}
