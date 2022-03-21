#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 * @head: head
 */

void free_listint(listint_t *head)
{
	listint_t *x;

	while (head != NULL)
	{
		x = head;
		head = head->next;
		free(x);
	}
}
