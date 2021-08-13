#include "holberton.h"

/**
 * get_bit - F that returns teh value of a bit at a given index
 * @n: unsigned long int
 * @index: unsigned long int
 * Return: The value of a bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)

{
	int bitsize;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	bitsize = (n >> index) & 1;

		return (bitsize);
}
