/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** strlen
*/

unsigned char	my_strlen(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
		i++;
	return (i);
}
