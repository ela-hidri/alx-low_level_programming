#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list.
 * @head: list
 * @n: value to add
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->prev = NULL;
	new->n = n;
	if (tmp == NULL)
	{

		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = tmp;
		*head = new;
	}
	return (tmp);
}
