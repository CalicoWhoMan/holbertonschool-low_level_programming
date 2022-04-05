#include "lists.h"

/**
 * free_dlistint - Frees a linked list
 * @head: head of list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
