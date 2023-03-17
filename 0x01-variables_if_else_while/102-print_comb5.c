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
int l = 0;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 9; j++)
{
for (k = 0; k < 10; k++)
{
for (l = 0; l < 10; l++)
{
if (((i * 10 + j) != (k * 10 + l)) && ((i * 10 + j) < (k * 10 + l))) 
{
putchar(48 + i);
putchar(48 + j);
putchar(' ');
putchar(48 + k);
putchar(48 + l);
if (i != 9 || j != 8 || k != 9 || l != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
