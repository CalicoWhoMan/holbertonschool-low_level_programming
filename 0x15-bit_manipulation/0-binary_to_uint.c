#include "holberton.h"
#include <string.h>
/**
 * int binary_to_uint - F that converts a binary number to an unsigned int
 * @b: 
 * Return: converted numer or 0
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int result;
	int i, exponent;

	if (!b)
			return (0);

	result = 0;

	for (i = 0; b[i] != '\0'; i++)
;
	for (i--, exponent = 1; i >= 0; i--, exponent *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] & 1)
		{
			result += exponent;
		}
	}
return (result);
}
