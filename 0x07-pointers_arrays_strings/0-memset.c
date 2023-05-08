#include <stdio.h>
#include "main.h"

/**
 * _memset -  A  function that fills memory with a constant byte
 *@s: starting address of the memory to be filled
 *@b: value to be gotten
 *@n: number of bytes expected to be changes
 *
 *Return: changed number of n byte
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
		for (; n > 0; i++)
		{
			s[i] = b;
			n--;
		}
		return (s);
}
