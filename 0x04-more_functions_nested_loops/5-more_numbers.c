#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: no return
 */
void more_numbers(void)
{
	char a;
	int b;
	int c;
	int d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			c = b / 10;
			d = b % 10;
			if (b >= 10)
			_putchar (c + '0');
			if (b == 10)
				d = 0;
			_putchar(d + '0');
		}
		_putchar('\n');
	}
}
