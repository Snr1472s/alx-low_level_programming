#include "lists.h"
/**
 * free_listp - frees a linked list
 * @head: head of a list
 * Return: no return
 */
void free_listp(listp_t **head)
{
	listp_t *tmp;
	listp_t *obi;

	if (head != NULL)
	{
		obi = *head;
		while ((tmp = obi) != NULL)
		{
			obi = obi->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - function that prints a linked list
 * @head: pointer
 * Return: no of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *snr, *new, *add;

	snr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = snr;
		snr = new;

		add = snr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&snr);
				return (nnodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}
	free_listp(&snr);
	return (nnodes);
}
