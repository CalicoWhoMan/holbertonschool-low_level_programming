#include "variadic_functions.h"
#include <stdarg.h>

void print_char(va_list, args);
void print_int(va_list, args);
void print_float(va_list, args);
void print_string(va_list, args);
void print_nil(va_list, args);

/**
 * print_all - prints anything
 * @format: char string format
 */

void print_all(const char * const format, ...)
{

printall types[] = {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_string}
	{NULL, NULL}
};

va_list io;
int i, x;
char *separator = "";

va_start(io, format);
i = 0;
while (format && format[i])
{	
x = 0;
while(types[j])
{
if (*(types[x]) == format[i])
{
printf("%s", separator);
types[j](io);
separator = ",";
}
x++;
}
i++;
}

/**
 * print_char - prints a char
 * @args: c
 */

void print_char(va_list, args)
{
printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: %d
 */

void print_int(va_list, args)
{
printf("%d", va_arg(args, int));
}

/**
 * print_float - prints an int
 * @args: %f
 */

void print_float(va_list, args)
{
printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string or nil if NULL
 * @args: ch
 */

void print_string(va_list, args)
{
char *ch;

ch = va_arg(args, char *);

if (ch == NULL)
printf("(nil)");
else
printf("%s", ch);
}
