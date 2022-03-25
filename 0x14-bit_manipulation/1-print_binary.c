#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - This function prints the binary
 * representation of a number
 * @n: The binary number to be converted
 */

void print_binary(unsigned long int n)
{

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
