#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head
 * @index: index
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (current == NULL)
	{
		return (NULL);
	}

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
			count++;
			current = current->next;
	}
	return (NULL);
}
