#include "lists.h"
#include <stddef.h>
/**
 * list_len -  returns the number of elements in a linked list_t list.
 * @h: list_t list.
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t l = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		l++;
		tmp = tmp->next;
	}
	return (l);
}
