#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_listint - frees a list_t list.
 * @head: head of list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
		listint_t *tmp;

		while (head)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
}
