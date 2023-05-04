#include "main.h"
#include <stdlib.h>
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: value
 * @index: index
 *
 * Return: value of index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned int)) * 8)
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	else
		return (1);
}
