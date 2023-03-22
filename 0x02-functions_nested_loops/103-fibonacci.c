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
	long long sum = 0;

	sum = x2;
	while (nx < 4000000)
	{
		x1 = x2;
		x2 = nx;
		nx = x1 + x2;

		if (nx % 2 == 0)
			sum += nx;
	}
	printf("%ld\n", nx);
	return (0);
}
