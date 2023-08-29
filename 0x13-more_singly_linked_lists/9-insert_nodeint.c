#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts new node at a given position
 *
 * @head: parameter
 * @idx: parameter
 * @n: parameter
 * Return: address of new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int w;
	listint_t *temp, *temp_old, *new_node;

	temp = *head;
	if (head == NULL)
		return (NULL);
	new_node = create_new_node(n);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	if (idx == 0)
		*head = new_node;
	for (w = 0; w < idx - 1 && temp != NULL && idx != 0; w++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		new_node->next = temp;
	else
	{
		temp_old = temp->next;
		temp->next = new_node;
		new_node->next = temp_old;
	}
	return (new_node);
}

/**
 * *create_new_node - new node
 * @n: parameter
 * Return: (0)
 */
listint_t *create_new_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}
