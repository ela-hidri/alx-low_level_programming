#include "main.h"
/**
 * print_to_98 -  prints all natural numbers from n to 98.
 * @n: integer to star counting from
 *
 * Return: last digit of a number.
 */
void print_to_98(int n)
{
while (n != 99)
{
if (n < 10)
	_putchar(' ');
else
	_putchar (n / 10);
_putchar (n + 10);
if (n > 98)
	n--;
else 
	n++;
_putchar(',');
}
}
