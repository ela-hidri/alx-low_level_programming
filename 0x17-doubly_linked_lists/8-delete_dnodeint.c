#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes the node at index index of
 * a dlistint_t linked list.
 * @head: head
 * @index: index
 *
 * Returns: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	for (i = 0; i != index; i++)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);

}
