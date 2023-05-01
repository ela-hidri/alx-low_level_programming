#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint -  prints all the elements of a list_t list.
 * @h: list_t list.
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t l = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		l++;
	}
	return (l);
}
