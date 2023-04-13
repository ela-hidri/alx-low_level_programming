#include <stddef.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr :  pointer to the memory previously allocated
 * @old_size: old size
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ar;
	char *old;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ar = malloc(new_size);
		if (ar == NULL)
			return (NULL);
		return (ar);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	old = ptr;
	ar = malloc(sizeof(*old) * new_size);
	if (ar == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size && i < old_size; i++)
		{
			*((char *)ar + i) = *(old + i);
		}
	}
	free(ptr);
	return (ar);
}
