#include "holberton.h"
#include "2-strlen.c"
/**
 * _strcat - concats two strings
 *
 * @dest: first
 * @src: second
 *
 * Return: num
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;

	while (dest[j] != 0)
	{
		j++;
	}
	for (i = 0; src[i] != 0; i++, j++)
	{
		dest[j] = src[i];
	}
	dest[j] = 0;
	return (dest);
}
