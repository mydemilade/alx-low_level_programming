#include "main.h"
/**
 * reverse_array - A function that reverses the content of an array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int z;

	for (i = 0; i < n--; i++)
	{
		z = a[i];
		a[i] = a[n];
		a[n] = z;
	}
}
