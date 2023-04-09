#include <stdio.h>
/**
 * _strcmp -  compares two strings.
 * @s1: fisrt stirng
 * @s2: second string
 *
 * Return: 0 if equal, 0> if is greater and 0 < if less
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
