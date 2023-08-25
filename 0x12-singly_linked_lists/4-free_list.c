#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: parameter
 *
 * Return: (0)
 */

void free_list(list_t *head)
{
	list_t *temp = NULL;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
