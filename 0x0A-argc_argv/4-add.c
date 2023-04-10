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
	int i = 0;
	unsigned int sum = 0;

	if(argc < 2)
	{
		printf("0\n");	
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	}
	return (0);
}
