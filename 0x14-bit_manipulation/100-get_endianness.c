#include <stdio.h>
#include <stdint.h>

/**
 * get_endianness - This function checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int a = 1;

	char *pa = (char *) &a;

	if (*pa == 1)
		return (1);

	return (0);
}
