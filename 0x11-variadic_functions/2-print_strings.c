#include "variadic_functions.h"
#include <stdio.h>

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
