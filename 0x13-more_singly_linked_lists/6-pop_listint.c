#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: head node
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = (*head);
	n = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
