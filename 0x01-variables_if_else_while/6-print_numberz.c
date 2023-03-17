#include <stdio.h>
/**
 * main - Entry point
 *
 * Rerurn : Always 0 (Succes)
 */
int main(void)
{
int i = 0;
for (i = 0; i < 10; i++)
{
putchar(48 + i);
}
putchar('\n');
return (0);
}
