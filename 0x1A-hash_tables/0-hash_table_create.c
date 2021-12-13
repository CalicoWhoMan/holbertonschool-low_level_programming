#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table
 * @size: size of the array
 * Return: Pointer to the newly created Hash Table otherwise NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *p2table;
	hash_node_t **array4table;
	unsigned long int inc;

	p2table = malloc(sizeof(hash_table_t));

	if (p2table == NULL)
		return (NULL);

	p2table->size = size;
	array4table = malloc(sizeof(hash_node_t *) * size);

	if (array4table == NULL)
	{
		free(p2table);
		return (NULL);
	}

	for (inc = 0; inc < size; inc++)
	{
		array4table[inc] = NULL;
	}

	p2table->array = array4table;

	return (p2table);
}
