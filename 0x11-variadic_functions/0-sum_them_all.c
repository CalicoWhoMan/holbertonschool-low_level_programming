#include "variadic_functions.h"

/**
 * sum_them_all - func that returns the sum of all its parameters
 * @n: int
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
int add = 0;

if (n == 0)
{
return (0);
}
for(int i=1; i<=n; i++)
{
add += i;
}
return add;
}
