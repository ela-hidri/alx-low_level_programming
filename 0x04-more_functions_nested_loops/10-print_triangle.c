#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 *
 * Return: success (always)
 */
void print_triangle(int size)
{
int i = 0;
int j = 0;

if (size > 0)
{
	for (i = 0; i < size; i++)
	{
		for (j = size; j > 0 ; j--)
		{
		if (i >= j - 1)
			_putchar('#');
		else
			_putchar(' ');
		}
		_putchar('\n');
	}
}
else
_putchar('\n');
}
