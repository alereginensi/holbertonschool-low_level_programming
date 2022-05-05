#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *x;

	while (head != NULL)
	{
		x = head;
		free(x);
		head = head->next;
	}
}
