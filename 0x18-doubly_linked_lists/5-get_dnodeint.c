#include "lists.h"

/**
 * get_dnodeint_at_index - returns the (n)th node of a linked lists
 * @head: head of list
 * @index: (n)th node
 * Return: (n)th node else, NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int inc = 0;
	dlistint_t *n_node;

	n_node = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (n_node)
	{
		if (inc == index)
			return (n_node);
		n_node = n_node->next;
		inc++;
	}
	return (NULL);
}
