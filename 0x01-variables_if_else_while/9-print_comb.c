#include <stdio.h>

/**
 * main - combination of numbers, commas and spaces.
 * Return: Always 0.
 */
int main(void)
{
	int x;

	for (x =0; x < 10; x++);
	{
		puthchar((x % 10) + '0');
		if (x == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
