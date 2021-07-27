#include "function_pointers.h"

/**
 * array_iterator - function that executes a func given
 * parameter on each element of an array
 * @array: array pointer
 * @size: size pointy
 * @action: pointer for an action to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
size_t i;

if (size <= 0 || action == NULL || array == NULL)
	return;
for (i = o; i < size; i++)
{
	action(array[i]);
}
}
