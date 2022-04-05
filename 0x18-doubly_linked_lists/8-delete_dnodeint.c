#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at index of a linked list
 * @head: head of list
 * @index: index of list
 * Return: 0 or 1, -1 is for failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *n1, *new, *n2 = *head;
	unsigned int inc = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		n1 = n2->next;
		if (n1 != NULL)
			n1->prev = NULL;
		*head = n1;
		free(n2);
		return (1);
	}
	while (n2)
	{
		if (n2 == NULL)
			return (-1);
		if (inc == index)
		{
			n2 = n1->prev;
			new = n1->next;
			if (n2->next != NULL)
				new->prev = n2;
			n2->next = new;
			free(n1);
			return (1);
		}
		n2 = n2->next;
		inc++;
	}
	return (-1);
}
