#include <stdlib.h>
#include "main.h"

/**
 ** array_range - A function that creates an array of integers
 * @min: minimum range of value stored
 * @max: maximum range of value stored
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
