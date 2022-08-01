#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table completely
 *
 * @ht : hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		node = *(ht->array + index);
		while (node != NULL)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
