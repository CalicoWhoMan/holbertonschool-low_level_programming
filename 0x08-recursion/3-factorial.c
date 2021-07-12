#include "holberton.h"

/**
 * factorial - func that returns the factorial of a given num
 * @n: number
 *
 * Return: -1 if lower than 0, 1 if 0 or num
 */

int factorial(int n)

{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
