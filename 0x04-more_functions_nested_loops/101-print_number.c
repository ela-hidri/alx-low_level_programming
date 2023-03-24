#include "main.h"
/**
 * print_number - prints an Integer
 * @n: number to print
 *
 * Return: success (always)
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	num = n;
	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
