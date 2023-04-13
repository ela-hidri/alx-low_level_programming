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
	void *old;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	old = malloc(old_size);
	if (old == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		*((char *)old + i) = *((char *)ptr + i);

	ptr = malloc(sizeof(char *) * new_size);
	if (ptr == NULL)
		return (NULL);
	if (new_size < old_size)
	{
		for (i = 0; i < new_size && i < old_size; i++)
		{
			*((char *)ptr + i) = *((char *)old + i);
		}
	}
	return (ptr);
}
