#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated with a key
 * @ht: Hash table to look at
 * @key: key im looking for
 * Return: Key's value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	for (; node != NULL; node = node->next)
	{
		if ((strcmp(key, node->key)) == 0)
			return (node->value);
	}
	return (NULL);
}
