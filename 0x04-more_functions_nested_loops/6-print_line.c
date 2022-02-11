#include "main.h"

/**
 * print_line - Entry point
 *@n: number of times to print '_'
 * Return: no return
 */
void print_line(int n)
{
	int x;
	char z;

	z = '_';
	for (x = 0; x < n; n++)
	{
		if (n > 0)
			_putchar(z);
	}
	_putchar('\n');
}
