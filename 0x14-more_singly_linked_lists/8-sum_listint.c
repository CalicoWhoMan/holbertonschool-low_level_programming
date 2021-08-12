#include "lists.h"

/**
 * sum_listint - F that returns the sum of all data (n) of a linked list
 * @head: pointer
 * Return: 0 if empty otherwise the sum of data (n)
 */

int sum_listint(listint_t *head)
{
	int combined_sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		combined_sum = combined_sum + head->n;
		head = head->next;
	}
	return (combined_sum);
}
