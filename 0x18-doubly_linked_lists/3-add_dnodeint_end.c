#include "lists.h"
#include <string.h>

/**
 * add_dnodeint_end - Function that adds a new node at the end of a DLL
 * @head: head of the DLL
 * @n: int for new node
 * Return: address of new node otherwise NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{
	dlistint_t *nnode, *lnode;

	nnode = malloc(sizeof(dlistint_t));
	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	nnode->next = NULL;

	if (*head == NULL)
	{
		nnode->prev = NULL;
		*head = nnode;
		return (nnode);
	}

	lnode = *head;
	while (lnode->next != NULL)
		lnode = lnode->next;
	lnode->next = nnode;
	nnode->prev = lnode;

	return (nnode);
}
