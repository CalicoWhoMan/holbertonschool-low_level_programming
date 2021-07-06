#include "holberton.h"
#include "2-strlen.c"

/**
 * puts2 - prints every other character of a string and\n
 * @str: string
 */

void puts2(char *str)

{
	int i = 0, len = 0;

	while (str[i])
		len++;

	for (i = 0; i < len; i += 2)
	{
		putchar(str[i]);
	}
	_putchar('\n');
}
