#include "lists.h"

/**
 * sum_listint -  returns sum all the data (n) of listint_t linked list
 *
 * @head: parameter
 * Return: (0)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
