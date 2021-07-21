#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of c
 * hars, and initializes it with a specific char.
 * @size: size
 * @c: character
 *
 * Return: NULL
 */

char *create_array(unsigned int size, char c)

{
char *a;
unsigned int i = 0;

if (size > 0)
{
	a = malloc(sizeof(char) * size);
	if (a)
	{
	for (i = 0; i < size; i++)
		{
		a[i] = c;
		}
	}
	}
return (a);
}
