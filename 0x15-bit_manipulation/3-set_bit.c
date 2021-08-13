#include "holberton.h"

/**
 * set_bit - F that sets the vale of a bit to 1 at a given index
 * @n: unsigned long int pointer
 * @index: unsigned int
 * Return: 1 if worked or -1 if an error
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);

	return (1);
}
