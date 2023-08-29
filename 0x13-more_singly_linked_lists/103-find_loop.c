#include "lists.h"
/**
 * find_listint_loop - function that inds the loop in a linked list
 * @head: head of a list
 * Return: the address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snr;
	listint_t *obi;

	snr = head;
	obi = head;
	while (head && snr && snr->next)
	{
		head = head->next;
		snr = snr->next->next;

		if (head == snr)
		{
			head = obi;
			obi = snr;
			while (1)
			{
				snr = obi;
				while (snr->next != head && snr->next != obi)
				{
					snr = snr->next;
				}
				if (snr->next == head)
					break;

				head = head->next;
			}
			return (snr->next);
		}
	}

	return (NULL);
}
