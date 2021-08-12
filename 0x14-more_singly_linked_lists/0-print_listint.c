#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listin_t list
 * @h: pointer
 * Return: the node
 */

size_t print_listint(const listint_t *h)

{
	size_t insomnia = 0;

	while (h != NULL)
	{
		if (h->n != 0)
			printf("%i\n", h->n);
		else
			printf("%i\n", h->n);
		h = h->next;
		insomnia++;
	}
	return (insomnia);
}
