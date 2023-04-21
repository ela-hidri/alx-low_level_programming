#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 * struct op - Struct op
 *
 * @sym: symbole
 * @f: The function associated
 */
typedef struct op
{
	char *sym;
	void (*f)(va_list arg);
} format_W;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
