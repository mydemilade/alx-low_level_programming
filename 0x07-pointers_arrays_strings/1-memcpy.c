#include <stdio.h>
#include "main.h"
/**
 *_memcpy - A function that copies memory area
 *@dest: where memory is stored
 *@src: memory been copied
 *@n: number of bytes
 *
 *Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int q = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[q] = src[q];
		n--;
	}
	return (dest);
}
