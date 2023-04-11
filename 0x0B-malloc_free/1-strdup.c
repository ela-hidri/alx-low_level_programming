#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: copy of a string
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *ar;
	int i = 0;
	int size;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		;
	ar = malloc(size * sizeof(*str) + 1);
	if (ar == NULL)
		return (NULL);
	while (*str != '\0')
	{
		ar[i] = *str;
		i++;
		str++;
	}
	ar[i] = '\0';
	return (ar);
}
