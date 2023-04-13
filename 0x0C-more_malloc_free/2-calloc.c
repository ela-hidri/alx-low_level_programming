#include <stddef.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array,
 * @nmemb: array of nmemb elements
 * @size: size of element
 *
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ar;
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ar = malloc(nmemb * size);
	if (ar == NULL)
	{
		return (NULL);
	}
	arr = ar;
	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;
	return (ar);
}
