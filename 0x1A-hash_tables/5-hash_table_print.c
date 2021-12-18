#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int inc;
	int value;

	if (!ht)
		return;
	printf("{");
	for (inc = 0; inc < ht->size; inc++)
	{
		while (ht->array[inc] != NULL)
		{
			if (value == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[inc]->key, ht->array[inc]->value);
			ht->array[inc] = ht->array[inc]->next;
			value = 1;
		}
	}
	printf("}\n");
}
