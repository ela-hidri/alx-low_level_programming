#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * _strlen -  returns the length of a string.
 * @s: pointer of a stirng to return it's length
 *
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * add_nodeint_end - adds a new node at the end of a list_t list.
 * @head: head of list
 * @n: data of node
 *
 * Return:  the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tail;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	tail = *head;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = new;
	return (tail);
}
