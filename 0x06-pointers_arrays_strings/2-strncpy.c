#include <stdio.h>
/**
 * _strncpy - copies a string
 * @dest: copy into
 * @src: string to be copied
 * @n: number of letters to copy
 *
 * Return: pinter to copied value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
