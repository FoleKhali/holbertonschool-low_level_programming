#include <stdio.h>
#include <stdint.h>

int get_endianness(void)
{
	int a = 1;

	char *pa = (char *) &a;

	if (*pa == 1)
		return (1);

	return (0);
}
