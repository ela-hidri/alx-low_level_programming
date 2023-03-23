#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 *
 * Return: success (always)
 */
void print_diagonal(int n)
{
int i = 0;
int j = 0;

if (n > 0)
{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n ; j++)
		{
		if (i == j)
			_putchar('\\');
		else
			if (i > j)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
else
_putchar('\n');
}
