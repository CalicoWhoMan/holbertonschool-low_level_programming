#include "lists.h"
#include <string.h>

/**
 * get_dnodeint_at_index - Function that returns the nth node of a DLL
 * @head: head of the list
 * @index: index of list
 * Return: pointer to node otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

{
	size_t inc = 0;

	while (head != NULL)
	{
		if (inc == index)
			break;
		inc++;
		head = head->next;
	}

	return (head);
}
