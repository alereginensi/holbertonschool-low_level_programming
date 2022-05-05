#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: h
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
{
		if (h->n != '\0')
		{
		printf("%u\n", h->n);
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
