#include "main.h"
/**
 * puts_half - prints half of a string,
 * str: pointer to string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0;
	int l = 0;

	for (l = 0; str[l] != '\0'; l++)
		;
	for (i = (l / 2); i <= l; i++)
		_putchar(str[i]);
	if (l % 2 != 0)
		_putchar((l - 1) / 2);
_putchar('\n');
}
