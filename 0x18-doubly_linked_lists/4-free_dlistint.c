#include "lists.h"
#include <string.h>

/**
 * free_dlistint - Function that frees a DLL
 * @head: head of node
 * Return: freed up list
 */

void free_dlistint(dlistint_t *head)

{
	dlistint_t *ru_node;
	dlistint_t *fr;

	fr = head;
	while (fr != NULL)
	{
		ru_node = fr;
		fr = fr->next;
		free(ru_node);
	}
}
