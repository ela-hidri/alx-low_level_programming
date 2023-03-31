#include <stdio.h>
/**
 * print_buffer - prints a buffer.
 * @b: pointer to buffer
 * @size: content to print
 *
 * Return: nothing;
 */
void print_buffer(char *b, int size)
{
	int i, j, k = 0;
	int c;

	if (size <= 0)
		printf("\n");
	while (k < size)
	{
		printf("%08x: ", k);
		if ((size - k) < 10)
			j = size - k;
		else
			j = 10;

		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + k + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}


		for (i = 0; i < j; i++)
		{
			c = *(b + k + i);
			if (c < 32 || c > 127)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		k += 10;
	}
}
