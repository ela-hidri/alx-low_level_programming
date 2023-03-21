include "main.h"

/**
 * _islower -  checks for lowercase character.
 * @c: The character to print
 *
 * Return: if true 1.
 * otherwise, 0 is returned.
 */
int _islower(int c)
{
int i = 97;
for (i = 97; i <= 122; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}
