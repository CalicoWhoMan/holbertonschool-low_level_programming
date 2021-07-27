#include "function_pointers.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print-name - prints a functions name
 * @name: pointer
 * @f: pointer
 */

void print_name(char *name, void (*f)(char *))

{
if (f != NULL)
	f(name);
}
