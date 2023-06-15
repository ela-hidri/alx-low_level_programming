#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: list to print
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *tmp;
	size_t l = 0;

	tmp = (dlistint_t *)h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		l++;
	}
	return (l);
}
