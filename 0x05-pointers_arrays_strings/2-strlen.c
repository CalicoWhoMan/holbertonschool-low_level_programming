#include "holberton.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)

{
int count = 0;

while (*s++)
count++;

return (count);
}
