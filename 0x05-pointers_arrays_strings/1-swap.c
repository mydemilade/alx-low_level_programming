#include "main.h"
#include <stdio.h>

/**
 * swap_int(int *a, int *b) - A function that swaps the values of two integers
 * @a: swaps the address of b and stores it
 * @b: swaps the address of a and stores it
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
