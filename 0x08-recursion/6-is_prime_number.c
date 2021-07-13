#include "holberton.h"

/**
 * _prime_num - prime number -R
 *
 * @n: number
 * @a: num
 * Return: 1 if prime or 0
 */

int _prime_num(int n, int a)
{
if (a == 1)
return (1);
if (a > 0 && n % a == 0)
return (0);
return (_prime_num(n, a - 1));
}

/**
 * is_prime_number - 1 if prime num 0 otherwise
 *
 * @n: num
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (_prime_num(n, n - 1));
}

