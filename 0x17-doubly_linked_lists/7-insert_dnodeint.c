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
	dlistint_t *tmp, *new, *prev;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp = *h;
	new = malloc(sizeof(dlistint_t));
	if (new  == NULL)
		return (NULL);
	prev = NULL;
	new->n = n;
	while (tmp)
	{
		if (idx == i)
		{
         		prev->next = new;
			tmp->prev = new;
			new->prev = prev;
			new->next = tmp;
			return (new);
       	}	
       		i++;
       		prev = tmp;
	       tmp = tmp->next;
	}
	if (idx == i)
	     	return (add_dnodeint_end(h, n));
	free(new);
	return (NULL);
}
