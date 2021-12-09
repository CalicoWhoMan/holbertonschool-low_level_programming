#include "lists.h"
#include <string.h>

/**
 * sum_dlistint - Function that returns the sum of all the data (n) of a DLL
 * @head: head of list
 * Return: Sum of all the data in (a) list otherwise 0
 */

int sum_dlistint(dlistint_t *head)

{
int inc;
for (inc = 0; head != NULL; inc += head->n, head = head->next)
{
}
return (inc);
}
