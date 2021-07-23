#include "holberton.h"

/**
 * malloc_checked - func that allocates mem using malloc
 * @b: int
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)

{
unsigned int *pointer;

pointer = malloc(b);
if (pointer == NULL)
{
	exit(98);
}
	return (pointer);
}
