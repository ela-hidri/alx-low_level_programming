#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always (Success)
 */
int main(void)
{
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
		k += j;

		if (k % 2 == 0)
			sum += k;

		j = k - j;
	}

	printf("%ld\n", sum);
	return (0);
}
