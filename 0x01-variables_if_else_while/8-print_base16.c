#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
for (i = 0; i < 10; i++)
{
putchar(48 + i);
}
for (i = 0; i < 6; i++)
{
putchar(97 + i);
}
putchar('\n');
return (0);
}