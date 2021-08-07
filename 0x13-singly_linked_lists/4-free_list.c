#include "lists.h"

/*
 * free_list - frees list_t
 * @head: pointer
 * Return: void*
 */

void free_list(list_t *head)

{
list_t *point2 = head;

if (!head)
return;
free_list(head->next);
free(point2->str);
free(point2);
}
