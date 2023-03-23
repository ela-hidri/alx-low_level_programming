#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i = 0;
	long num = 612852475143;
	int max;

	for (i = 2; num > 1; i++)
	{
	while (num % i == 0)
	{
		if (max < i)
			max = i;
		num = num / i;
	}
	}
	printf("%d\n", max);
	return (0);
}
