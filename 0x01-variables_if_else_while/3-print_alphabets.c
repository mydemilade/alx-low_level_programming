#include <stdio.h>
/**
 *main - Prints the alphabet in lowercase, and then in uppercase
 *Return: 0 (sucess)
 */

int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{

		putchar(n);
		n++;
	}
	while (m <= 90)
	{

		putchar(m);
		m++;
	}

	putchar('\n');

	return (0);
}

