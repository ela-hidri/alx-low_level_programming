#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_list -  prints all the elements of a list_t list.
 * @h: list_t list.
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t l = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
		l++;
	}
	return (l);
}
