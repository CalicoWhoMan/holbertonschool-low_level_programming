#include "lists.h"
#include <string.h>

/**
 * delete_dnodeint_at_index - Function that deletes the node at index of a DLL
 * @head: pointer to head of the DLL
 * @index: the index of the node
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
	dlistint_t *runode = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (runode == NULL)
			return (-1);
		runode = runode->next;
	}
	if (runode == *head)
	{
		*head = runode->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		runode->prev->next = runode->next;
		if (runode->next != NULL)
			runode->next->prev = runode->prev;
	}

	free(runode);
	return (1);
}
