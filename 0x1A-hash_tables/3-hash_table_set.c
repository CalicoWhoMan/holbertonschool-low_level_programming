#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: key (cannot be an empty string)
 * @value: value of key (must be duplicated & cannot be empty string)
 * Return: 1 if Success; otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_element, *element;

	if (!ht || !key || !value)
		return (0);
	if (strlen(key) < 1)
		return (0);
	element = malloc(sizeof(hash_node_t));
	new_element = malloc(sizeof(hash_node_t));
	if (!new_element)
	{
		free(new_element);
		return (0);
	}
	new_element->key = strdup(key);
	new_element->value = strdup(value);
	new_element->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);

	if (element == NULL)
	{
		ht->array[index] = new_element;
                return (1);
	}
	else
	{
		while (element != NULL)
		{
			element->next = ht->array[index];
			ht->array[index] = element;
		}
	}
	return (1);
}
