#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list
 * @h: head of list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t inc = 0;

	while (h)
	{
		printf("%d\n", h->n);
		inc++;
		h = h->next;
	}
	return (inc);
}
