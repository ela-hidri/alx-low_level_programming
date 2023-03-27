#include "main.h"
/**
 *  rev_string - reverses a string.
 * @s: pointer to reverse it's value
 *
 * Return: nothing
 */
void rev_string(char *s)
{

	int i = 0;
	int l = 0;
	char tmp;

	while (s[i++])
		l++;

	for (i = l - 1; i >= l / 2; i--)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
	}
}
