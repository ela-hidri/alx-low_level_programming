#include "search_algos.h"
#include "math.h"

/**
 * min - min value
 * @a: value 1
 * @b: value 2
 *
 * Return: min value
 */
int min(int a, int b)
{
	if (b > a)
		return (a);
	else
		return (b);
}
/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: array to be searched
 * @size: size of array
 * @value: value to search
 *
 * Return: -1 if nothing else first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int i = sqrt(size), p = 0;

	if (array == NULL)
		return (-1);

	while (array[min(i, size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", p, array[p]);
		p = i;
		i += sqrt(size);
		if (p >= (int)size)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", p, i);
	while (array[p] < value)
	{
		printf("Value checked array[%d] = [%d]\n", p, array[p]);
		p++;
		if (p == min(i, size))
			return (-1);
	}
	if (array[p] == value)
		return (p);
	return (-1);
}
