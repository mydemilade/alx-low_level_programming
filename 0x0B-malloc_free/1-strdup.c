#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - A function that duplicate
 * a string to new memory space
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *zzz;
	int i, r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	zzz = malloc(sizeof(char) * (i + 1));

	if (zzz == NULL)
		return (NULL);

	for (int r = 0; str[r]; r++)
		zzz[r] = str[r];

	return (zzz);
}
