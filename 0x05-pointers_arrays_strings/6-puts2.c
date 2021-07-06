#include "holberton.h"
#include "2-strlen.c"

/**
 * puts2 - prints every other character of a string and\n
 * @str: string
 */

void puts2(char *str)

{
	int i, len = 0;

	len = _strlen(str);

	for (i = 0; i < len; i += 2)
{
	putchar(str[i]);
}
	_putchar('\n');
}
