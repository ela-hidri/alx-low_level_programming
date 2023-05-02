#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - that reverses a listint_t linked list.
 * @head: list head
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = *head;

	if (tmp == NULL)
	{
		return (tmp);
	}
	reverse_listint(&(tmp->next));
	printf("%d\n", tmp->n);
	return (NULL);
}
