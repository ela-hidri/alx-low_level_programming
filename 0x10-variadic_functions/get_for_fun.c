#include <stdlib.h>
#include "variadic_functions.h"
/**
 * get_form_func - selects the correct function
 * @s: symbol
 *
 * Return: pointer to the function that corresponds
 */
int (*get_form_func(char *s))(int)
{
		forma_w forma[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*(forma[i].sym) == *s)
		{
			return (*(forma[i].f));
		}
		i++;
	}
	return (NULL);
}
