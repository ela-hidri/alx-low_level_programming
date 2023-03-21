#include "main.h"
/**
 * print_sign -  prints the sign of a number.
 * @n: The character to check
 *
 * Return: if greater than zero 1.
 * if equle to 0, 0 is returned, else , -1 returnd
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
}
