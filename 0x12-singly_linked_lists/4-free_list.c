#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_list - frees a list_t list.
 * @head: head of list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head->next != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
