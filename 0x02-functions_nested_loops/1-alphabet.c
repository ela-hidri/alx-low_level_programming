#include "main.h"

/**
 *  print_alphabet - writs all the alphabet
 *
 * Return:  success always.
 */

void print_alphabet(void)
{
int c = 97;
while (c < 123)
{
_putchar(c);
c++;
}
_putchar('\n');
}
