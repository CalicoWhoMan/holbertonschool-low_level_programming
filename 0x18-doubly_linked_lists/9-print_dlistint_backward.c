#include "lists.h"

/**
 * print_dlistint_backward - prints all elements of a linked list 'backwards'
 * @h: head of list
 * Return: the number of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t inc = 0;

	while (h != NULL)
	{
		if (h->next == NULL)
		{
			while (h)
			{
				printf("%d\n", h->n);
				h = h->prev;
				inc++;
			}
			return (inc);
		}
		h = h->next;
	}
	return (inc);
}
