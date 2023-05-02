#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: string to be checked
 * Return: string length
 */
int _strlen(char *s)
{
	int s_length = 0;

	while (*s != '\0')
	{
		s_length++;
		s++;
	}

	return (s_length);
}
