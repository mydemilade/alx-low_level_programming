#include <stdio.h>

/**
 * main - Program prints both lowercase and uppercase letters
 *
 * Return: 0
*/
int main(void)
{
char n;
	char a = 'a';
	char A = 'A';
	char z = 'z';
	char Z = 'Z';
	char n = ('\n');

	for (; a <= z; a++, A++)
	putchar(a), putchar(A);
	putchar(n);

return (0);
}
