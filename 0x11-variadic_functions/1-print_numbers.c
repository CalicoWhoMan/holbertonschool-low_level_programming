#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers -prints nums
 * @separator: seps
 * @n: int
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list io;
va_start(io, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(io, int));

if (separator != NULL && i != (n - 1))
{
printf("%s", separator);
}
}
printf("\n");
va_end(io);
}
