#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer
 * @n: const int
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *insomnia;
	listint_t *awake = *head;

	insomnia = malloc(sizeof(listint_t));
	if (insomnia == NULL)
		return (NULL);
	insomnia->n = n;
	insomnia->next = NULL;

	if (*head == NULL)
		*head = insomnia;
	else
	{
		while (awake->next != NULL)
		awake = awake->next;
		awake->next = insomnia;
	}
	return (insomnia);
}
