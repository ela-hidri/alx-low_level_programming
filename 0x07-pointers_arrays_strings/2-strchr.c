#include <stddef.h>
/**
 * _strchr -  locates a character in a string.
 * @c: character to look for
 * @s: string to look in
 *
 * Return: to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*(s) != c)
			s++;
		else
			return (s);
	}
	if (*(s) == '\0')
		return (s);
	return (NULL);
}
