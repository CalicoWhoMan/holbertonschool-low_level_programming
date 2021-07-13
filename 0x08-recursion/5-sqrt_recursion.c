#include "holberton.h"

/**
 * process - returns the natural square root of a num
 * @n: num ^* root
 * @y: square
 * Return: square root or -1 if it doesnt have one
 */

int process(int n, int y)
{
if ((n * n) == y)
        return (n);
if ((n * n) > y)
        return (-1);
return (process(n + 1, y));
}

/**
 * _sqrt_recursion - returns the natural square root of a num
 * @n: num
 *
 * Return: recursion to the power of n
 */

int _sqrt_recursion(int n)
{
        return (process(1, n));
}
