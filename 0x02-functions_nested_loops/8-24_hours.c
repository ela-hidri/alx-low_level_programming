#include "main.h"
/**
 * jack_bauer -  prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: sucess (always).
 */
void jack_bauer(void)
{
	for (i = 0; i <= 24 ; i++)
	{
		for (j = i + 1; j <= 59 ; j++)
		{
		putchar((i / 10) + 48);
		putchar((i % 10) + 48);
		putchar(':');
		putchar((j / 10) + 48);
		putchar((j % 10) + 48);
		}
	}
}
