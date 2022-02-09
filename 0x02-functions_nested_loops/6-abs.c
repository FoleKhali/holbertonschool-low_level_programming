#include "main.h"

/**
 * abs - compute the absolute value of an integer
 * @o: value
 * Always: Always 0.
 */
int _abs(int o)
{
	if (o < 0)
	{
		return (-o);
	}
	else
	{
		return (o);
	}
	return (0);
}
