#include "main.h"
#include <stdlib>

/**
 * create_array - A function that creates an array of chars
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to assign
 * Description: to create an array of and assign char c
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

		str = malloc(sizeof(char) * size);

		if (size == 0 || str == NULL)

			return (NULL);

		for (i = 0; i < size; ii++)
			str[1] = c;

		return (str);
}
