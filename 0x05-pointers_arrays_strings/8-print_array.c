#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints n elements of an array of integers.
 * @a: inputs array name
 * @n: number of elements OF the array to be printed
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
