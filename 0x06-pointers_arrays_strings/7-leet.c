#include "main.h"
/**
 * leet -  a function that encodes into 1337
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i, z;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (z = 0; z < 10; z++)
		{
			if (n[i] == s1[z])
			{
				n[i] = s2[z];
			}
		}
	}
	return (n);
}
