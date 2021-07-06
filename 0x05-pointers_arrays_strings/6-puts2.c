#include "holberton.h"
#include "2-strlen.c"

/**
 * puts2 - prints every other character of a string and\n
 * @str: string
 */

void puts2(char *str)

{
	int integ, len = 0;

	while (str[integ++])
		len++;

	for (integ = 0; integ < len; integ += 2)
{
	putchar(str[integ]);
}
	_putchar('\n');
}
