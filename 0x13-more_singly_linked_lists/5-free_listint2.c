#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: head
 */

void free_listint2(listint_t **head)
{
	listint_t *x;

		if (*head == NULL)
		{
			printf("(nil)");
		}

		while (*head != NULL)
		{
			x = *head;
			*head = (*head)->next;
			free(x);
		}
}
