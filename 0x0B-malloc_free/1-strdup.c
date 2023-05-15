#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - A function that returns a pointer to
 * a newly allocated space in memory
 * which contains a copy of the string given as a parameter
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
