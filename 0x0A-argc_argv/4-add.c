#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Success(always)
 */
int main(int  argc, char *argv[])
{
	int i, j = 0;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
