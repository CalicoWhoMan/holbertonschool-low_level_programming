#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of the array
 * Return: a pointer to the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	hash_node_t **nodetable = malloc(sizeof(hash_node_t *) * size);

	if (table == NULL)
		return (NULL);
	if (nodetable == NULL)
		return (NULL);

	table->size = size;
	table->array = arr;
	return (table);
}

