#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that prints all the elements of a list_t list.
 * @h: head
 * Return: number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}


