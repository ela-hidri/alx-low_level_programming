#include "hash_tables.h"
/**
 * hash_function - hush function
 * @str: string to hash
 * @size: size of hash table
 *
 * Return: index
 */
unsigned long hash_function(char *str, unsigned long int size)
{
	unsigned long int i = 0;

	for (int j = 0; str[j]; j++)
	{
		i += str[j];
	}
	return (i % size);
}
