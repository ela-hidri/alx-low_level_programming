#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - he sum of all the data (n) of a dlistint_t linked list.
 * @head: head of list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	while (tmp)
	{
		sum +=tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
