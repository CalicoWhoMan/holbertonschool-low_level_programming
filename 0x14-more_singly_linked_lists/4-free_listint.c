#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint_t list
 * @head: poiniter
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *awake;

	while (head != NULL)
	{
		awake = head;
		head = head->next;
		free(awake);
	}
}
