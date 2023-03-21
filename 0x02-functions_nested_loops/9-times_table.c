#include "main.h"
/**
 * times_table -  prints the last digit of a number.
 * @i: The character to check
 *
 * Return: success (always).
 */
void times_table(void)
{
int i = 0;
int j = 0;
for (i = 0; i < 10; i++)
{
	for (j = 0; j < 10; j++)
	{
	_putchar(i*j);
	_putchar(',');
	_putchar(' ');
	}
_putchar('\n')
}
}
