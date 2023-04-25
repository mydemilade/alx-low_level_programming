#include <stdio.h>
/**
 *main - This program prints size of various computer types
 *Return: always 0 (success)
 */
int main(void)
{

	printf("size of a char: %ld byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}

