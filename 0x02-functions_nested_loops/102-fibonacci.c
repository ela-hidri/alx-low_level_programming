#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n = 0;
	int x1 = 0;
	int x2 = 1;
	int nx = x1 + x2;
	printf("%d, ", x1);
	printf("%d, ", x2);
       	printf("%d, ", nx);
	for (n = 3; n < 50; n++)
	{
		x1 = x2;
		x2 = nx;
		nx = x1 + x2;
		if (n == 49)
			printf("%d\n", nx);
		else 
			printf("%d, ", nx);
	}
	return (0);
}
