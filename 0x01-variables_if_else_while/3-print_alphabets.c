#include <stdio.h>

/**
 * main - put the alphabet in lowercase and uppercase.
 * Return: Always 0.
 */
int main(void)
{

	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);

	putchar('\n');

	return (0);
}
