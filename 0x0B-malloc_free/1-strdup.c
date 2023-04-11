#include <stdlib.h>
#include <stddef.h>
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

	if (str == NULL)
		return (NULL);
	ar = malloc(sizeof(*str));
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
