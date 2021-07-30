#include "variadic_functions.h"
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)

{
va_list io;
char args;
unsigned int i;

va_start(io, n);

for (i = 0; i < n; ++i)
{
args = va_arg(io, int);
if (args)
printf("%d", args);
else
printf("(nil)");
if (i < n - 1 && separator)
printf("%s", separator);
}
printf("\n");
va_end(io);
}
