#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array to be searched
 * @size: size of array
 * @value: value to search
 * Return: -1 if nothing else first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int L = 0, R = (int)size - 1;
	int m, i = 0;

	if (array == NULL)
		return (-1);
	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			printf("%d", array[i]);
			if (i != R)
				printf(", ");
			else
				printf("\n");
		}

		m = (L + R) / 2;
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}
