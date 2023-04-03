#include <stdio.h>
/**
 * set_string - ets the value of a pointer to a char.
 * @s: pointer to pointer to set it's value
 * @to: pointer to change
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
