#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int inc;
	hash_node_t *element, *telement;

	if (!ht)
		return;
	for (inc = 0; inc < ht->size; inc++)
	{
		element = ht->array[inc];
		while (element != NULL)
		{
			telement = element;
			element = element->next;
			free(telement->key);
			free(telement->value);
			free(telement);
		}
	}
	free(ht->array);
	free(ht);
return;
}
