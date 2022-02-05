#include <stdio.h>

/**
 * main - numbers again, but with putchar
 * Return: Always 0.
 */
int main(void)
{

	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10), n);

	putchar('\n');

	return (0);
}
