#include <stdlib.h>
/**
 * _strstr - locates a substring.
 * @haystack: substring to find
 * @needle: string to look into
 *
 * Return: pointer to the beginning of the located substring,
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, l = 0;

	while (needle[l] != '\0')
		l++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (needle[i] != haystack[i])
				break;
		}
		if (i != l)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
