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
		unsigned long int inc = 0;
	hash_node_t *nex = NULL, *tmp = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	inc = key_index((const unsigned char *) key, ht->size);
	tmp = ht->array[inc];

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	nex = malloc(sizeof(hash_node_t));
	if (nex == NULL)
	{
		return (0);
	}
	nex->key = strdup(key);
	if (nex->key == NULL)
	{
		free(nex);
		return (0);
	}
	nex->value = strdup(value);
	if (nex->value == NULL)
	{
		free(nex->key);
		free(nex);
		return (0);
	}
	nex->next = NULL;
	if (ht->array[inc] != NULL)
		nex->next = ht->array[inc];
	ht->array[inc] = nex;

	return (1);
}
