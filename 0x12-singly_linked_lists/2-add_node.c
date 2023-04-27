#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of list
 * @str: data of node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->next = *head;
	tmp->str = strdup(str);
	tmp->len = _strlen(str);
	*head = tmp;
return (tmp);
}
