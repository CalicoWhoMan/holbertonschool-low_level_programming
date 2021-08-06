#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints a string with newline
 * @n: number of strings to be printed
 * @separator: string printed between strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
char *args;
unsigned int i;


va_list io;
va_start(io, n);

for (i = 0; i < n; i++)
{
args = va_arg(io, char *);
if (args)
{
printf("%s", args);
}
else
{
printf("(nil)");
}
if (separator && i < (n - 1))
{
printf("%s", separator);
}
}
va_end(io);
printf("\n");
}
