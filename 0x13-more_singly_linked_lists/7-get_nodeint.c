#include "lists.h"

/**
 * *get_nodeint_at_index - returns nth node of listint_t linked list
 *
 * @head: parameter
 * @index: parameter
 * Return: (NULL)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int w;

	for (w = 0; w < index; w++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
