#include <stdio.h>
/**
 * main - numbers of base 16 in lowercase.
 * Return: Always 0.
 */
int main(void)
{
	int h;

	for (h = 0; h < 10; h++)
		putchar((h % 10) + '0');
	for (h = 'a'; h <= 'f'; h++)
		putchar(h);	
	putchar('\n');

	return (0);
}
