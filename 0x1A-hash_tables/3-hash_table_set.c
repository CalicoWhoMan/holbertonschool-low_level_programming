#include "hash_tables.h"

/**
 * hash_table_set - Adds and element to the table
 * @ht: hash table to add/update key/value to
 * @key: key
 * @value: value
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	new = ht->array[index];
	while(new)
	{
		if (strcmp(new->key, key) == 0)
		{
			free(new->value);
			new->value = strdup(value);
			return (1);
		}
		new = new->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
