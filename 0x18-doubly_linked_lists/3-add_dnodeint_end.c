#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a linked list
 * @head: head of list
 * @n: data of element
 * Return: address of the new element or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *v2;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	v2 = *head;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (v2->next != NULL)
	{
		v2 = v2->next;
	}
	v2->next = new_node;
	new_node->prev = v2;

	return (new_node);
}
