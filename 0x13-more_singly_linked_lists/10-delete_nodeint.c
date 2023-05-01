#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list.
 * @head: node head
 * @index: the index of the node that should be deleted;
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *alt;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	while (tmp != NULL)
	{
		if (i + 1 == index)
		{
			alt = tmp->next;
			tmp->next = tmp->next->next;
			free(alt);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
