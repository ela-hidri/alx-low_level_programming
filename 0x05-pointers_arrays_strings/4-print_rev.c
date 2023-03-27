#include "main.h"
/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: pointer to print it's value
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int l = 0;
	
	while (s[l] != '\0')
		l++;
	for (l -=1; l>=0; l--)
		_putchar(s[l]);
	_putchar('\n');
}
