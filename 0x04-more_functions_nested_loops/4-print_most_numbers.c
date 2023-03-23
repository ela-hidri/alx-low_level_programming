#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9 without 4 and 2.
 *
 * Return: if true 1.
 */
void print_most_numbers(void)
{
int i = 48;
for (i = 48; i <= 57; i++)
{
	if (i != 50 && i != 52)
		_putchar(i);
}
_putchar('\n');
}
