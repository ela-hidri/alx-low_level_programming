#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked -  allocates memory using malloc.
 * @b:  memory length
 *
 * Return: pointer, else status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(b);
	if (ar == NULL)
	{
		exit(98);
	}
	return (ar);
}
