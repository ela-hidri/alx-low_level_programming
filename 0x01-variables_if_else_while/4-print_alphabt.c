#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c = 97;
while (c < 123)
{
if (c != 'q' && c != 'e')
putchar(c);
c++;
}
putchar('\n');
return (0);
}
