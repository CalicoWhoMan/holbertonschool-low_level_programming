#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a num
 * @n: num
 *
 * Return: recursion to the power of n
 */

int _sqrt_recursion(int n)
{
return (process(0, n));
}

/**
 * process - returns the natural square root of a num
 * @x: num
 * @y: num
 * Return: square root or -1 if it doesnt have one
 */

int process(int x, int y)
{
if (y * y > x)
	return (-1);
if (y * y == x)
	return (x);
return (process(x, y + 1));
}
