#include "hash_tables.h"

/**
 * hash_table_print - print a hash table content
 *
 * @ht : hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *node;
	int printable = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		node = *(ht->array + index);
		while (node != NULL)
		{
			if (printable == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			printable = 1;
		}
	}

	printf("}\n");
}
