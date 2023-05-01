#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_listint2 - Write a function that frees a listint_t list.
 * @head: head of list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
