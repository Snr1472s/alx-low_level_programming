#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a list_t list
 * @head: head parameter
 * @str: string parameter
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *temp = *head;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);

	if (!(*head))
	{
		*head = new_node;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		new_node->next = temp->next;
		temp->next = new_node;
	}

		return (new_node);
}
