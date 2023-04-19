#include <stdlib.h>
/**
 * array_iterator -  executes a function given as a parameter
 * on each element of an array.
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function to use
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
