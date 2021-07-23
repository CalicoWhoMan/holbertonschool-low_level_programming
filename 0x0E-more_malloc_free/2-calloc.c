#include "holberton.h"

/**
 * _calloc - func that allocates mem of an array
 * @nmemb: array
 * @size: bytes
 * Return: s1 followed by n bytes of s2 and NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *x;

if (nmemb == 0 || size == 0)
return (NULL);
x = malloc(nmemb * size);
if (x == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
x[i] = 0;
return (x);
}
