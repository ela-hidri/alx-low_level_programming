#include <stdlib.h>
/**
 * int_index - searches for an integer.
 * @array: array of elements
 * @size: size of array
 * @cmp: funtion to compaire
 *
 * Return:  the index of the first element,
 * for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
