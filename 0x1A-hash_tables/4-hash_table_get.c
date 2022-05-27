#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: ht
 * @key: key
 * Return: value associated with the element, NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *search_node = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	search_node = ht->array[index];

	while (search_node != NULL)
	{
		if (strcmp(search_node->key, key) == 0)
		{
			return (search_node->value);
		}
		if (search_node->next == NULL)
		{
			return (NULL);
		}
		search_node = search_node->next;
	}
	return (NULL);
}
