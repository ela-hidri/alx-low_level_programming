#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * allocMem - alloc memory
 * @str: string to allocate
 *
 * Return: allocated memory
 */
char **allocMem(char *str)
{
	int j = 0, w = 0, i = 0, h = 0;
	char **ar;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i + 1] == ' ')
			h++;
		i++;
	}
	ar = malloc(h * sizeof(char *) + 1);
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			ar[j] = malloc(w * sizeof(char) + 2);
			if (ar[j] == NULL)
			{
				while (j > 0)
				{
					free(ar[j]);
					j--;
				}
				return (NULL);
			}
			w = 0;
			j++;
		}
		else if (str[i] != ' ')
		{
			w++;
		}
		i++;
	}
	return (ar);
}
/**
 * strtow -  splits a string into words.
 * @str: string to split
 *
 * Return: splited string else null
 */
char **strtow(char *str)
{
	int i = 0, j = 0, w = 0;
	char **ar;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	ar = allocMem(str);
	if (ar == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			ar[j][w] = str[i];
			w++;
			ar[j][w] = '\0';
			j++;
			w = 0;
		}
		else if (str[i] != ' ')
		{
			ar[j][w] = str[i];
			w++;
		}
		i++;
	}
	ar[j] = NULL;
	return (ar);
}
