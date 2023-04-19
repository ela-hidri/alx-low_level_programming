#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - performs simple operations.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Success(always)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int a, b;
	char *o;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	o = argv[2];
	b = atoi(argv[3]);

	if ((*o == '/' || *o == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(o) == NULL || *(o + 1) != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(o)(a, b));
	return (0);
}
