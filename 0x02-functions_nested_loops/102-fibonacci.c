#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n = 0;
	long x1 = 1;
	long x2 = 2;
	long nx = x1 + x2;

	printf("%ld, ", x1);
	printf("%ld, ", x2);
	printf("%ld, ", nx);
	for (n = 3; n < 50; n++)
	{
		x1 = x2;
		x2 = nx;
		nx = x1 + x2;
		if (n == 49)
			printf("%ld\n", nx);
		else
			printf("%ld, ", nx);
	}
	return (0);
}
