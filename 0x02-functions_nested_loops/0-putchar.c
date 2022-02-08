#include <unistd.h>

/**
 * _putchar - prints a character c
 * @c: The character to print
 * Return: Always 1.
 *On error, -1 is returned, and error is set apropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
