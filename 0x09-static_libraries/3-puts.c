#include "main.h"
#include<stdio.h>

void _puts(char *str);

/**
 * _puts - A function that outputs a string
 * followed by a new line
 * @str: string to print
 * Return: 0
 */
void _puts(char *str)
{
	while (*str !='\0')
	{
		_putchar(str++);
	}
	_putchar('\n');
}
