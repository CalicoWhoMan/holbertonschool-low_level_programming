#include "holberton.h"
#include "2-strlen.c"

/**
 * puts2 - prints every other character of a string and\n
 * @str: string
 */

void puts2(char *str)

{
	int len = 0, rev = 0;

	len = _strlen(str);

	for (int rev = 0; rev < len; rev += 2)
{
	putchar(str[rev]);
}
	_putchar('\n');
}
