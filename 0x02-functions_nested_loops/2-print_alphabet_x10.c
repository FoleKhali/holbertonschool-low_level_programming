#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet two times
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int o;
	int n;

	for (o = 0, o <= 9; o++)
	{
	for(n = 'a'; n <= 'z'; n++)
		_putchar(n);
	}
	_putchar('\n');
}
