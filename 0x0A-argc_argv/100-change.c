#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the minimum number of coins to make change for
 * an amount of money.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Success(always)
 */
int main(int  argc, char *argv[])
{
	int amount = 0, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	while (amount / 25 != 0)
	{
		coins += amount / 25;
		amount = amount % 25;
	}
	while (amount / 10 != 0)
	{
		coins += amount / 10;
		amount = amount % 10;
	}
	while (amount / 5 != 0)
	{
		coins += amount / 5;
		amount = amount % 5;
	}
	while (amount / 2 != 0)
	{
		coins += amount / 2;
		amount = amount % 2;
	}
	if (amount == 1)
	{
		coins++;
		amount--;
	}
	printf("%d\n", coins);
	return (0);
}
