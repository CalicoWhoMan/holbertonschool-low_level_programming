#include "holberton.h"

/**
 * _isalpha - check the code for Holberton School students.
 *
 * @c: - checking
 *
 * Return: 1 otherwise 0
 */

int _isalpha(int c)

{
	if (((c > 97) && (c < 122)) || ((c > 65) && (c < 90)))
		{
	return (1);
	}
	else
	{
	return (0);
	}}
