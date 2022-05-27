#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: ht
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	char *coma = "";
	hash_node_t *node = NULL;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (index < ht->size)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			printf("%s'%s': '%s'", coma, node->key, node->value);
			coma = ", ";
			node = node->next;
		}
		index++;
	}
	printf("}");
	printf("\n");
}
