#include "hash_tables.h"

/**
 * hash_table_set - set key/value association in hastable
 *
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if success
 *         0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = 0;
	hash_node_t *node, *new;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	node = *(ht->array + index);

	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	if (*(ht->array + index) != NULL)
		new->next = *(ht->array + index);
	*(ht->array + index) = new;

	return (1);
}
