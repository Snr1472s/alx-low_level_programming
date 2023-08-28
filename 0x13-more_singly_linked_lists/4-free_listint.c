#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: parameter
 * Return: (0)
 */

void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (temp)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
