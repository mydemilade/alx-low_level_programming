#include "main.h"
#include <stdlib.h>
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

	int j, r = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0)
		j++;
	zzz=malloc(sizeof(char) *(j+1))
		if (zzz == NULL)
			return (NULL)
	for (r = 0; str[r]; r++)
		zzz[r] = str[r];
	return (zzz);
}
