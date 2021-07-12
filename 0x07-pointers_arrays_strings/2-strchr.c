#include "holberton.h"

/**
 * _strchr - locates a char in a string
 * @s: string
 * @c: char
 *
 * Return: pointer or NULL
 */

char *_strchr(char *s, char c)
{
int a;

while (1)
{
a = *s++;
if (a == c)
{
	return (s - 1);
}
if (a == 0)
{
	return (NULL);
}
}
}
