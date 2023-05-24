#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array
 * @array: array
 * @size: element to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int z;

	if (array == NULL || action == NULL)
		return;

	for (z = 0; z < size; z++)
	{
		action(array[z]);
	}
}
