#include "main.h"
/**
 * puts_half - prints half of a string,
 * @str: pointer to string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0;
	int l = 0;
	int n;

	for (l = 0; str[l] != '\0'; l++)
		;
	if (l % 2 != 0)
		n = l / 2 + 1;
	else
		n = l / 2;
	for (i = n; i <= l; i++)
		_putchar(str[i]);
	_putchar('\n');
}
