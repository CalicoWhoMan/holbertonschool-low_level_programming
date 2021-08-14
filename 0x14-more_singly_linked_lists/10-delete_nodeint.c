#include "lists.h"
#include <stdlib.h>
/**
 *  delete_nodeint_at_index - F that deletes the node at "index" of linked list
 *  @head: double pointer
 *  @index: unsigned int
 *  Return: 1 if success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	unsigned int ui;
	listint_t *one;
	listint_t *two;

	one = *head;

	if (index != 0)
	{
		for (ui = 0; ui < index - 1 && one != NULL; ui++)
		{
			one = one->next;
		}
	}

	if (one == NULL || (one->next == NULL && index != 0))
	{
		return (-1);
	}

	two = one->next;

	if (index != 0)
	{
		one->next = two->next;
		free(two);
	}
	else
	{
		free(one);
		*head = two;
	}

	return (1);
}
