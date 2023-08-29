#include "lists.h"

/**
 * pop_listint - deletes head node of listint_t linked list
 *
 * @head: parameter
 * Return: head node’s data (n) / if the linked list is empty return (0)
 */

int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *temp = NULL;

	if (*head == NULL)
	{
		return (0);
	}

	else
	{
		temp = (*head)->next;
		node_data = (*head)->n;
		free(*head);
		*head = temp;

		return (node_data);
	}

	return (1);
}
