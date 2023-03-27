#include "main.h"
/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: pointer to print it's value
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;
	int l=0;

	for (i = 0; s[i] != '\0'; i++)
		l++;
	for (i = l-1; s[i] >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
