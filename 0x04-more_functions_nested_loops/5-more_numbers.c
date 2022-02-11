#include "main.h"

/**
 * more_numbers - print 0 to 14, 10 times
 * Return: Always 0.
 */
void more_numbers(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 9; a++)
	{
	for (b = '0'; b <= '14'; b++)
	{
		c = b / 10;
		d = b % 10;
		if (b >= 10)
			_putchar(c + '0');
		if (b == 10)
			d = 0;
			_putchar(d + '0');

	}
	_putchar('\n');
	}
}
