#include "holberton.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: string
 * Return: pointer to beginning of substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
int s;
int h = 0;

if (!(*needle))
	return (haystack);

for (s = 0; *(haystack + s) != 0; s++)
{
if (*(haystack + s) != *(needle + h))
	h = 0;
else
	h++;
if (*(needle + h) == 0)
	return (haystack + s - h + 1);
}
return ('\0');
}
