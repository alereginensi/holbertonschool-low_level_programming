#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head
 * Return: data
 */

int pop_listint(listint_t **head)
{
	listint_t *x;
	int data = 0;

		if (*head == NULL)
		{
			return (0);
		}
		else
		{
			x = *head;
			data = x->n;
			*head = x->next;
			free(x);
		}

	return (data);
}
