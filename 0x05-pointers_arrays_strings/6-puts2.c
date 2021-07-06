#include "holberton.h"
#include "2-strlen.c"

/**
 * puts2 - prints every other character of a string and\n
 * @str: string
 */

void puts2(char *str)

{
	int len = 0;

	while (str[len] != 0)

	{
		if ((len % 2) == 0)
		{
			putchar(str[len]);
		}
	}
	_putchar('\n');
}
