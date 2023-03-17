#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
int j = 0;
int k = 0;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 9; j++)
{
for (k = 0; k < 10; k++)
{
if ((i < j && j < k) && (i != j && i != k && k != j))
{
putchar(48 + i);
putchar(48 + j);
putchar(48 + k);
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
