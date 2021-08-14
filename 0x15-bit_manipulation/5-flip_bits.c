#include "holberton.h"

/**
 * flip_bits - F that returns # of bits you would need to flip from 1 # to >>
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	n ^= m;

	for (m = 0; n != 0; n >>= 1)
		m += n & 1;

	return (m);
}
