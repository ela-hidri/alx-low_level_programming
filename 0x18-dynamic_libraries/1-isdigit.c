#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: The character to check
 *
 * Return: if true 1.
 * otherwise, 0 is returned.
 */
int _isdigit(int c)
{
int i = 48;
for (i = 48; i <= 57; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}
