#include "holberton.h"

/**
 * _strncat - concats two strings
 *
 * @dest: destination
 * @src: string
 * @n: int
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
int i, j;
for (i = 0; dest[i] != 0; i++)
;
for (j = 0; j < n && src[j] != 0; j++)
dest[i + j] = src[j];
return (dest);
}
