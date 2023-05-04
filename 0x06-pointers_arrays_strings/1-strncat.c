#include "main.h"
/**
 * _strncat -A function that concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int z;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	z = 0;
	while (z < n && src[z] != '\0')
	{
	dest[i] = src[z];
	i++;
	z++;
	}
	dest[i] = '\0';
	return (dest);
}
