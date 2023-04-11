#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it
 * @size: size of array
 * @c: charachter to initialise with
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	if (ar != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}
	}
	return (ar);
}
