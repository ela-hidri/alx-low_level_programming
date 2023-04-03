#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: matrix
 * @size: size of matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i = 0;

	while (i <= (size * size - 1))
	{
		sum1 += a[i];
		i += size + 1;
	}
	i = size - 1;
	while (i < (size * size - 1))
	{
		sum2 += a[i];
		i += size - 1;
	}
	printf("%d, %d \n", sum1, sum2);
}
