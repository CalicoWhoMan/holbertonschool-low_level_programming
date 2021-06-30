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
	if (c > 96 && c < 123) || (c > 65 && c < 90) 
	{
	return (1);

	else

	return (0);
	}
}
