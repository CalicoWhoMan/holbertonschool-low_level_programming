#include "holberton.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: string
 * @b: string
 * @n: string
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)

{
char *p = s;

while (n--)
{
*p++ = b;
}
return (s);
}
