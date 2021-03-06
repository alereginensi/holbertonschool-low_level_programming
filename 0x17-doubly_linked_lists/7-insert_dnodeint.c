#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: h
 * @idx: idx
 * @n: integer
 * Return: adress of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int cont = 0;
	dlistint_t *new_node, *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (h == NULL || new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	tmp = *h;
	while (cont < idx - 1)
	{
		tmp = tmp->next;
		cont++;
		if (tmp == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
