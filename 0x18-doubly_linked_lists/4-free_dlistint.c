#include "lists.h"
#include <string.h>

/**
 * free_dlistint - Function that frees a DLL
 * @head: head of node
 * Return: freed up list
 */

void free_dlistint(dlistint_t *head)

{
	dlistint_t *ru_node = head;
	while (ru_node != NULL)
	{
		ru_node = ru_node->next;
		free(head);
		head = ru_node;
	}
}
