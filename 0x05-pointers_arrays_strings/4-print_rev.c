#include "holberton.h"
/**
 *
 * print_rev - prints a string in reverse
 * @s: string
 *
 * Return: (0)
 */

void print_rev(char *s)

{
	int len = 0, rev;

	len = _strlen(s);

	for (rev = len - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
