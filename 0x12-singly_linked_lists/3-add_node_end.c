#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head
 * @str: string
 * Return: node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;

	if (str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	last_node = *head;

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = new_node;

	return (new_node);
}


