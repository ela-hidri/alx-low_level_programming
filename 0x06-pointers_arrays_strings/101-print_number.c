#include "main.h"
/**
 * print_number - print numbers
 * @n: number to print
 *
 * Retunr: nothing
 */
void print_number(int n)
{
	unsigned int nn = n;

	if (n < 0)
	{
		_putchar('-');
		nn *= -1;
	}
	if ((nn / 10) != 0)
	{
		print_number(nn / 10);
	}
	_putchar((nn % 10) + '0');
}
