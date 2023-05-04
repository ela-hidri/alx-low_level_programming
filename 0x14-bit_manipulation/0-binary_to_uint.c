#include "main.h"
#include <stdlib.h>
/**
 * _pow - returns the value of x raised to the power of y.
 * @x: int
 * @y: power
 *
 * Return: x power y
 */
long int _pow(long int x, long int y)
{
	if (y == 0)
		return (1);
	else
		return (x * _pow(x, y - 1));
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:  converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int power = 0, l, n, index;

	if (b == NULL)
	{
		return (0);
	}
	for (l = 0; b[l] != '\0'; l++)
		;
	for (n = 0; n < l; n++)
	{
		index = l - n - 1;
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}
		if (b[index] == '1')
		{
			i += 1 * _pow(2, power);
		}
		power++;
	}
	return (i);
}
