/**
 * _checknumber - check if Prime
 * @i: iterative number
 * @n: number to check
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int _checknumber(int i, int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n == i)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}
	i++;
	return (_checknumber(i, n));
}
#include <stdio.h>
/**
 * is_prime_number - checks if the number is a prime number,
 * @n: number to check
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	return (_checknumber(2, n));
}
