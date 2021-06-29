#include "holberton.h"

/**
 * _islower - check the code for Holberton School students.
 *
 * @c: - checking
 *
 * Return: 1 otherwise 0
 */

int _islower(int c)

{

if (c >= "97" && c <= "122")

	return (1);
else
	return (0);
}
