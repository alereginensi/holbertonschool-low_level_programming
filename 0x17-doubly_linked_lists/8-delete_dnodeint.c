#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list.
 * @head: head
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *delete_node_next;
	unsigned int x = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (x = 0; temp != NULL && x < index - 1; x++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	delete_node_next = temp->next->next;

	free(temp->next);
	temp->next = delete_node_next;
	return (1);
}
