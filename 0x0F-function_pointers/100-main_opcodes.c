#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: sucess
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	int (*f)(int, char**);

	f = main;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes - 1; i++)
	{
		printf("%.2x ", *(unsigned char *)f);
		f++;
	}
	printf("%.2x\n", *(unsigned char *)f);
	return (0);
}
