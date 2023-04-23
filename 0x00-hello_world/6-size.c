#include <stdio.h>
/**
 * main - This program prints size of various computer types 
 * Return: always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));	
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu byte(s)\n",(unsigned long)sizeof(c));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(f));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
