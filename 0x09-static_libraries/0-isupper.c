#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: The character to check
 *
 * Return: if true 1.
 * otherwise, 0 is returned.
 */
int _isupper(int c)
{
int i = 65;
for (i = 65; i <= 90; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}
