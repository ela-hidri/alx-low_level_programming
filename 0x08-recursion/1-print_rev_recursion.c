#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string to print
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	char c = *s;

	if (*s)
	{
		_print_rev_recursion(++s);
		_putchar(c);
	}
}
