#include "lists.h"

/**
 * listint_len - returns number of elements in a linked listint_t list
 *
 * @h: parameter
 * Return: (0)
 */

size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	while (h)
	{
		elem++;
		h = h->next;
	}

	return (elem);
}
