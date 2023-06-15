#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *tmp;
	size_t l = 0;

	tmp = (dlistint_t *)h;
	while (tmp)
	{
		tmp = tmp->next;
		l++;
	}
	return (l);
}
