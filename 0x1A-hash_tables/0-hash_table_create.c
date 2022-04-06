#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of the array
 * Return: a pointer to the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int inc = 0;
	hash_table_t *table = NULL;
	hash_node_t **nodetable;

	if (!size)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	nodetable = malloc(sizeof(hash_node_t *) * size);
	if (nodetable == NULL)
	{
		free(table);
		return (NULL);
	}
	while (inc < size)
	{
		nodetable[inc] = NULL;
		inc++;
	}

	table->size = size;
	table->array = nodetable;
	return (table);
}
