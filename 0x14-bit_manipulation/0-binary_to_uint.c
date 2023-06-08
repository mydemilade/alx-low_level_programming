#include "main.h"

/**
 * binary_to_uint - A function that converts
 * a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	if (!b)
		return (0);

	unsigned int dec_val = 0;

	for (int i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		dec_val = (dec_val << 1) | (b[i] - '0');
	}

	return (dec_val);
}
