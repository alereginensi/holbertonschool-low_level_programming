#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x = 0;
	hash_table_t *hash_t = NULL;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->array = malloc(size * sizeof(hash_node_t *));

	if (size == 0)
		return (NULL);
	hash_t->size = size;

	if (hash_t->array == NULL)
	{
		free(hash_t);
		return (NULL);
	}

	while (x < size)
	{
		hash_t->array[x] = NULL;
		x++;
	}
	return (hash_t);
}
