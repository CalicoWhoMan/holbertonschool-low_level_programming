#include "lists.h"

/**
 * print_list - prints all elements of list_t
 * @h: pointer
 * Return: the nodes
 */

size_t print_list(const list_t *h)

{
	unsigned int node = 0;
	const list_t *first_l = h;

	while (first_l)
	{
		if (first_l->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", first_l->len, first_l->str);
	node++;
	first_l = first_l->next;
	}
	return (node);
}
