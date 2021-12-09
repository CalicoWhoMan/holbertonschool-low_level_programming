#include "lists.h"
#include <string.h>

/**
 * dlistint_len - Function that returns the # of elements in a linked DLL
 * @h: pointer to a DoublyLinkedList AKA DLL
 * Return: length of the DLL
 */

size_t dlistint_len(const dlistint_t *h)

{
size_t length = 0;

while (h != NULL)
{
h = h->next;
length++;
}
return (length);
}
