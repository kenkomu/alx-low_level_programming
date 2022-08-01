#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value from a key
 *
 * @ht : hash table
 * @key : key
 *
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	node = *(ht->array + index);

	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
