#include "holberton.h"
/**
 * _puts - prints a string and new line
 *
 * @str: string
 *
 * Return: 0
 *
 */

void _puts(char *str)
{
	while (*str)
	{
	_putchar(*str++);
	}
	_putchar ('\n');
}
