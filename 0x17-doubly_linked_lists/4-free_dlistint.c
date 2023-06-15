#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: list to free
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head, *node;

	if (head == NULL)
		return;
	while (tmp)
	{
		node = tmp->next;
		free(tmp);
		tmp = node;
	}
}
