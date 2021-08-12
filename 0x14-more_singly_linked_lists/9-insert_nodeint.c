#include "lists.h"
#include <stdlib.h>

/**
 *insert_nodeint_at_index - F that inserts a new node at a given position
 * @head: double pointer
 * @idx: unsigned int
 * @n: int
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *first_node, *expected_node;
	unsigned int inc;

	if (head == NULL)
	{
		return (0);
	}
	first_node = *head;
	for (inc = 0; inc < idx - 1; inc++)
	{
		first_node = first_node->next;
		if (first_node == NULL)
			return (NULL);
	}
	expected_node = malloc(sizeof(listint_t));
	if (expected_node == NULL)
	{
		return (NULL);
	}
	expected_node->n = n;
	expected_node->next = first_node->next;
	first_node->next = expected_node;
	return (*head);
}
