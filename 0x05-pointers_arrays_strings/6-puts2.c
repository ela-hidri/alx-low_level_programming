#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * @str: pointer to string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0' && str[i + 1] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
_putchar('\n');
}
