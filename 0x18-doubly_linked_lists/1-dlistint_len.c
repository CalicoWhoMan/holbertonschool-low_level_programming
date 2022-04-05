#include "lists.h"

/**
 * dlistint_len - Returns number of elements in a linked list
 * @h: head of list
 * Return: Number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t inc = 0;

	while (h)
	{
		h = h->next;
		inc++;
	}
	return (inc);
}
