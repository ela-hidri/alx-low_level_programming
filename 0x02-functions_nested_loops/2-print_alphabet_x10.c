#include "main.h"

/**
 * print_alphabet_x10- writs all the alphabet 10 times
 *
 * Return:  success always.
 */

void print_alphabet_x10(void)
{
int j = 0;
for (j = 0; j <= 10; j++)
{
int c = 97;
while (c < 123)
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
