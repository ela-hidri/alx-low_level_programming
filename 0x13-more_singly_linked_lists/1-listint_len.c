#include "lists.h"
#include <stddef.h>
/**
 * listint_len -  returns the number of elements in a linked list_t list.
 * @h: list_t list.
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t l = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		l++;
		tmp = tmp->next;
	}
	return (l);
}
