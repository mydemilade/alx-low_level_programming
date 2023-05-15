#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - Creates a duplicate of a string
 * @str: The string to duplicate
 * Return: Pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *d;
	int j = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
		j++;

	d = malloc(sizeof(char) * (j + 1));
	if (j == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		d[i] = str[i];
	d[j] = '\0';

	return (d);
}
