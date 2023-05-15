#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int a, b, z = 0, length = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			length++;
	}
	length += ac;

	str = malloc(sizeof(char) * length + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b]; b++)
	{
		str[z] = av[a][b];
		z++;
	}
	if (str[z] == '\0')
	{
		str[z++] = '\n';
	}
	}
	return (str);
}
