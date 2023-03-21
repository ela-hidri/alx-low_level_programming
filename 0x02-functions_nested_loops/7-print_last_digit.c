#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number.
 * @i: The character to check
 *
 * Return: last digit of a number.
 */
int print_last_digit(int i)
{
if (i <0 )
{
_putchar((i * (-1)) % 10);
return ((i * (-1)) % 10);
}
_putchar(i % 10);
return (i % 10);
}
