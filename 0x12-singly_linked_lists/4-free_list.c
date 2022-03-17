#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: head
 */

void free_list(list_t *head)
{
	list_t *x;

	while (head != NULL)
	{
		x = head;
		head = head->next;
		free(x);
	}
}


