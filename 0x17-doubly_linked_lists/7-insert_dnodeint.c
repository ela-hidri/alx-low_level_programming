#include "lists.h"
#include <stdlib.h>
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
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: list
 * @idx: index
 * @n: value to add
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;
	unsigned int i = 0, l;

	l = (unsigned int)dlistint_len(*h);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == (l + 1))
		return (add_dnodeint_end(h, n));
	if (idx > (l + 1))
		return (NULL);

	tmp = *h;
	new = malloc(sizeof(dlistint_t));
	if (new  == NULL)
		return (NULL);
	while (tmp)
	{
		if (idx == i + 1)
		{
			new->n = n;
			new->prev = tmp;
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
