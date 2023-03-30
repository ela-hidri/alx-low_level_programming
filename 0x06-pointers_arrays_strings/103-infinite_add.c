#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}
/**
 * infinite_add - adds two numbers.
 * @n1: fisrt number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: buffer that has the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, rest = 0;
	int nl1 = 0, val1 = 0;
	int nl2 = 0, val2 = 0;
	int tmp = 0;

	for (nl1 = 0; n1[nl1] != '\0'; nl1++)
		;
	for (nl2 = 0; n2[nl2] != '\0'; nl2++)
		;
	nl1--;
	nl2--;
	if (nl2 >= size_r || nl1 >= size_r)
		return (0);
	while (nl2 >= 0 || nl1 >= 0 || rest == 1)
	{
		if (nl1 < 0)
			val1 = 0;
		else
			val1 = *(n1 + nl1) - '0';
		if (nl2 < 0)
			val2 = 0;
		else
			val2 = *(n2 + nl2) - '0';
		tmp = val1 + val2 + rest;
		if (tmp > 9)
			rest = 1;
		else
			rest = 0;
		if (i >= (size_r - 1))
			return (0);
		*(r + i) = (tmp % 10) + '0';
		i++;
		nl1--;
		nl2--;
	}
	if (i == size_r)
		return (0);
	*(r + i) = '\0';
	rev_string(r);
	return (r);
}
