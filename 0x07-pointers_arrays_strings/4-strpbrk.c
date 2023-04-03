#include <stdlib.h>
/**
 * _strpbrk - earches a string for any of a set of bytes
 * @s: string to locate
 * @accept: string to locate in
 *
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int j = 0;

	while (*s)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*s == *(accept + j))
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
