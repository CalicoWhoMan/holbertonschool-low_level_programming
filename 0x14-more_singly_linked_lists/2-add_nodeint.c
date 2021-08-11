#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: dpointer
 * @n: const int
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)

{

	listint_t *insomnia = malloc(sizeof(listint_t));

	if (insomnia == NULL)
	{
		return (NULL);
	}
	insomnia->n = n;
	insomnia->next = *head;
	*head = insomnia;
	
	return (insomnia);
}
