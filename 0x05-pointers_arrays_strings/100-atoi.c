#include <stdio.h>
/**
 * _atoi - convert a string to an integer
 * @s: pointer to char to convert
 *
 * Return: converted char
 */
int _atoi(char *s)
{
	unsigned int c = 0;
	int sign = 1;
	int l = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		if (c != 0 && *s == ' ')
			break;
		if (*s >= '0' && *s <= '9')
		{
			c = (c * 10) + (*s - '0');
		}
		l++;
		s++;
	}
	return (c * sign);
}
