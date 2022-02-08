#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet two times
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int o = 0;
	int n;

	while(o<10)
	{
	for(n = 'a'; n <= 'z'; n++)
		_putchar(n);

	_putchar('\n')
	}
	o++;
}
