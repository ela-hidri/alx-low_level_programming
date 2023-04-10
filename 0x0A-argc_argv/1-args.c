#include <stdio.h>
/**
 * main -  prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Success(always)
 */
int main(int  argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
