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
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of list
 * @str: data of node
 *
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail;

	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
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
