#include "main.h"
/**
 * times_table -  prints the last digit of a number.
 *
 * Return: success (always).
 */
void times_table(void)
{
int i = 0;
int j = 0;
int rst = 0;
for (i = 0; i < 10; i++)
{
	for (j = 0; j < 10; j++)
	{
	rst = i * j;
	if (rst < 10)
		if(i != 0)
		_putchar(' ');
	else 
		_putchar(rst / 10 + '0');
	_putchar(rst % 10 + '0');
	if (j != 9)
	{
		_putchar(',');
		_putchar(' ');
	}
	}
_putchar('\n');
}
}
