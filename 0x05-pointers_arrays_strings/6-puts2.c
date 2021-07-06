#include "holberton.h"
#include "2-strlen.c"

/**
 * puts2 - prints every other character of a string and\n
 * @str: string
 */

void puts2(char *str)

{
	int len = 0, i = 0;

	len = _strlen(str);

	for (int i = 0; i < len; i += 2)
{
	putchar(str[i]);
}
	_putchar('\n');
}
