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
	char *ar;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ar = malloc(nmemb * size);
	if (ar == NULL)
	{
		free(ar);	
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
		ar[i] = 0;
	return (ar);
}
