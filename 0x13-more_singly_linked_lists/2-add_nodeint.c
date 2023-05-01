#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * add_nodeint - adds a new node at the beginning of a list_t list.
 * @head: head of list
 * @n: data of node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->next = *head;
	tmp->n = n;
	*head = tmp;
	return (tmp);
}
