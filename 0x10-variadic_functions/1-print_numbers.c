#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n:  number of integers
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int x;

	va_start(args, n);
	for (i = 0; i < n - 1; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (separator != NULL && i == n - 1)
		printf("%s", *separator);
	}
	 printf("\n");
}
