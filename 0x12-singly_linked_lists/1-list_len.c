#include "lists.h"

/**
 * list_len - returns number of elements in linked list_t list
 * @h: parameter
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h)
	{
		h = h->next;
		element++;
	}
	return (element);
}
