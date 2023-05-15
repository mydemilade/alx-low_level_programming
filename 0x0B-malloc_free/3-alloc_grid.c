#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2-dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the 2-dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int a, b;

	if (width <= 0 || height <= 0)
	return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	return (NULL);

	for (a = 0; a < height; a++)
	{
	arr[a] = malloc(sizeof(int) * width);
	if (arr[a] == NULL)
	{
	for (b = 0; b < a; b++)
	free(arr[b]);
	free(arr);
	return (NULL);
	}
	for (b = 0; b < width; b++)
	arr[a][b] = 0;
	}

	return (arr);
}
