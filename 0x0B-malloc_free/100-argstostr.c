#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument Vector
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, l = 0,  k = 0;
	char *ar;

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			l++;
		}
		l++;
	}
	ar = malloc(l * sizeof(char));
	if (ar == NULL)
	{
		free(ar);
		return (ar);
	}
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ar[k] = av[i][j];
			k++;
		}
		ar[k] = '\n';
		k++;
	}
	ar[k] = '\0';
	return (ar);
}
