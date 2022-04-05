#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list
 * @head: head of list
 * Return: sum of list (n), otherwise 0
 */

int sum_dlistint(dlistint_t *head)
{
	int inc = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		inc += head->n;
		head = head->next;
	}

	return (inc);
}
