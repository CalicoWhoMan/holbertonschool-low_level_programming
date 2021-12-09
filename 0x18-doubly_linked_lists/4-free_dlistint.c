#include "lists.h"
#include <string.h>

/**
 * free_dlistint - Function that frees a DLL
 * @head: head of node
 * Return: freed up list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ru, *exe;

	ru = head;
	while (ru != NULL)
	{
		exe = ru;
		ru = ru->next;
		free(exe);
	}
}
