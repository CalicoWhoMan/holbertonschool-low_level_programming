#include "lists.h"

/**
 * add_node_end - adds a new node at end of list_t
 * @head: pointer
 * @str: pointer
 *Return: size
 */

list_t *add_node_end(list_t **head, const char *str)

{
	list_t *end, *mono;

	if (str == NULL)
		return (NULL);

	end = (list_t *)malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);

	end->str = strdup(str);
	end->len = strlen(str);
	if (*head == NULL)
		*head = end;
	else
	{
		mono = *head;
		while (mono->next != NULL)
			mono = mono->next;
		mono->next = end;
	}
	return (end);
}
