#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: string to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
int cont_string = 0, i, z;
	char *str, temp;

	while (cont_string >= 0)
	{
		if (s[cont_string] == '\0')

		cont_string++;
	}
	str = s;

	for (i = 0; i < (cont_string - 1); i++)
	{
		for (z = i + 1; z > 0; z--)
		{
			temp = *(str + z);
			*(str + z) = *(str + (z - 1));
			*(str + (z - 1)) = temp;
		}
	}
}
