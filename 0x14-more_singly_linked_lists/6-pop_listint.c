#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delets head node of linked list and return head node's data
 * @head: double pointer
 * Return: node's data unless empty then 0
 */

int pop_listint(listint_t **head)
{

	int node_data;
	listint_t *pointer;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	node_data = (*head)->n;
	pointer = *head;
	*head = (*head)->next;
	free(pointer);
	return (node_data);
}
