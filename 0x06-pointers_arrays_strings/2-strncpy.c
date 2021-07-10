#include "holberton.h"

/**
 * _strncpy - copies a string
 *
 * @dest: points to destination
 * @src: string
 * @n: bytes
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int yi = 0;

	while (src[yi] != 0 && yi < n)
	{
		*(dest + yi) = *(src + yi);
		yi++;
	}
	while (yi < n)
	{
		*(dest + yi) = 0;
		yi++;
	}

	return (dest);
}
