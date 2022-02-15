#include "main.h"

/**
 * print_rev - Entry point
 * @s: pointer the string we want to reverse and print
 * Return: no return
 */
void print_rev(char *s)
{
	int a;

	i = 0;
	while (*(s + a) != '\0')
	{
		a++;
	}

	while (a > 0)
	{
		_putchar(*(s + a - 1));
		a--;

	}
	_putchar('\n');
}
