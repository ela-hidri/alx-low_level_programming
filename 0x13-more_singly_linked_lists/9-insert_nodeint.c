#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: node head
 * @idx: index of the list where the new node should be added
 * @n: node data
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new;
	unsigned int i = 0;

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = (*head);
		*head = new;
		return (new);
	}
	while (tmp != NULL)
	{
		if (idx == i + 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		i++;
	}
	free(new);
	return (NULL);
}
