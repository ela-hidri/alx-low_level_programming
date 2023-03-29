#include <stdio.h>
/**
 * rot13 - encodes a string using rot13.
 * @str: string to encode
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i = 0;
	int j = 0;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char l[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i])
	{
		j = 0;
		while (s[j])
		{
			if (str[i] == s[j])
			{
				str[i] = l[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
