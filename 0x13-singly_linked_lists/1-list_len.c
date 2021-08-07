#include "lists.h"

/**
 * list_len - returns the number of elements from list_t
 * @h: pointer funxtion
 * Return: i
 */

size_t list_len(const list_t *h)

{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
