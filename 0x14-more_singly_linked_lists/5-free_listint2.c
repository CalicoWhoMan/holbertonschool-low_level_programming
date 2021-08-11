#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer
 * Return: 0
 */

void free_listint2(listint_t **head)

{
	listint_t *awaken_node;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			awaken_node = *head;
			*head = (*head)->next;
			free(awaken_node);
		}
		*head = NULL;
	}
}
