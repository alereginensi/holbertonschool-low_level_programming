#include "lists.h"

/**
 *
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	new_node->prev = NULL;

	return (new_node);
}
