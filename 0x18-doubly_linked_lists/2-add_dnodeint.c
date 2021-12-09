#include "lists.h"
#include <string.h>

/**
 * add_dnodeint - Function that adds a new node at the beginning of DLL
 * @head: **pointer to head of node
 * @n: value of n for node
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nnode;

	nnode = malloc(sizeof(dlistint_t *));
	if (nnode)
	{
		nnode->n = n;
		nnode->prev = NULL;
		nnode->next = *head;
	}

	*head = nnode;
	return (*head);
}
