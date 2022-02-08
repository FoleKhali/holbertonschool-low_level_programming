#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet two times
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int o;
	int n;

	while(o<10)
	{
	for(n = 'a'; n <= 'z'; n++)
		_putchar(n);
	}
	_putchar(10);
	o++;
}
