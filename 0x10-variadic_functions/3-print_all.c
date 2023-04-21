#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_int - print int
 * @arg: arg
 *
 * Return: nothing
 */
void print_int(va_list arg)
{
	int x;

	x = va_arg(arg, int);
	printf("%d", x);
}

/**
 * print_float- print float
 * @arg: arg
 *
 * Return: nothing
 */
void print_float(va_list arg)
{
	float x;

	x = va_arg(arg, double);
	printf("%f", x);
}
/**
 * print_char- print char
 * @arg: arg
 *
 * Return: nothing
 */
void print_char(va_list arg)
{
	char x;

	x = va_arg(arg, int);
	printf("%c", x);
}
/**
 * print_string- print char
 * @arg: arg
 *
 * Return: nothing
 */
void print_string(va_list arg)
{
	char *x;

	x = va_arg(arg, char *);
	if (x == NULL)
		printf("(nil)");
	else
		printf("%s", x);
}
/**
 * print_all - prints anything.
 * @format:  list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, l = 0;
	char *s = "";
	va_list arg;
	format_W form[] = {
		{"i", print_int},
		{"f", print_float},
		{"c", print_char},
		{"s", print_string}
	};

	va_start(arg, format);
	while (*(format + i))
	{
		l = 0;
		while (l < 4 && (*(format + i) != (*(form[l].sym))))
			l++;
	
			printf("%s", s);
			form[l].f(arg);
			s = ", ";
		
		i++;
	}
	printf("\n");
	va_end(arg);
}
