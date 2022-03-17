#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: head
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h != NULL)
		{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		}
		else
		{
			printf("[0] (nil)\n");
			h = h->next;

		}
		count++;
	}
	return (count);
}


