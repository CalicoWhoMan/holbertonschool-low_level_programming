#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - func that returns the sum of all its parameters
 * @n: int
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{

int try = 0;
unsigned int i;
va_list io;

if (n == 0)
{
return (0);
}
va_start(io, n);
for (i = 0; i < n; i++)
{
try += va_arg(io, int);
}
va_end(io);
return (try);
}
