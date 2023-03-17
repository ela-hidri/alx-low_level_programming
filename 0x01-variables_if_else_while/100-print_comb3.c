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
for (i = 0; i < 9; i++)
{
for (j = 0; j < 10; j++)
{
if (i < j && i != j && j != i)
{
putchar(48 + i);
putchar(48 + j);
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
