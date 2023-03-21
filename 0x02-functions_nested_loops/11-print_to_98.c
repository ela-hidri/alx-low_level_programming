#include <stdio.h>
/**
 * print_to_98 -  prints all natural numbers from n to 98.
 * @n: integer to star counting from
 *
 * Return: last digit of a number.
 */
void print_to_98(int n)
{
if (n < 98)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("%d", n);
}
else 
{
        while (n > 98)
        {
                printf("%d, ", n);
                n--;
        }
        printf("%d", n);
}
}
