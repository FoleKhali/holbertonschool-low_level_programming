#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: number
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if else (n < 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
