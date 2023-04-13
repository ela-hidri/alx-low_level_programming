#include <stddef.h>
#include <stdlib.h>
/**
 * array_range - reates an array of integers.
 * @min: starting from
 * @max: until max
 *
 * Return:  pointer to the newly created array, else null
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;
	int l;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	arr = malloc(sizeof(int) * l);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= l; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
