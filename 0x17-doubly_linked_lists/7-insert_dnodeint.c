#include "lists.h"
#include <stdlib.h>
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
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp = *h;
	new = malloc(sizeof(dlistint_t));
	if (new  == NULL)
		return (NULL);
	while (tmp)
	{
		if (idx == i + 1)
		{
			if (tmp->next == NULL)
				return (add_dnodeint_end(h, n));
			new->n = n;
			new->prev = tmp;
			new->next = tmp->next;
			tmp->next = new;
			tmp->next->prev = new;
			return (new);
		}
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
