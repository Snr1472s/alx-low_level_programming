#include "lists.h"

/**
 * *find_listint_loop - finds loop in a linked list
 *
 * @head: parameter
 * Return: address of node where the loop starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
				if (slow == fast)
					return (slow);
			}
		}
	}
	return (NULL);
}
