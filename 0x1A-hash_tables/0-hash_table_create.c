#include "hash_tables.h"
/**
 * hash_table_create - function that create the hash table
 *
 * @size - the size of the array
 *
 * Return: pointer to a naw hash table or NULL if fail
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(sizeof(hash_node_t *), ht->size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
