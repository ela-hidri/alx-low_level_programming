#include "main.h"
/**
 * _isalpha -  checks for alphabetic character.
 * @c: The character to print
 *
 * Return: if true 1.
 * otherwise, 0 is returned.
 */
int _isalpha(int c)
{
int i = 97;
for (i = 97; i <= 122; i++)
{
if (c == i)
{
return (1);
}
i = 65;
for (i = 65; i <= 90; i++)
{
if (c == i)
{
return (1);
}

}
return (0);
}
