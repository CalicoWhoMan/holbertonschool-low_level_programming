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

if (size == 0)
{
return (NULL);
} 
a = malloc(sizeof(char) * size);
if (au == 0)

return (NULL);

for (i = 0; i < size; i++)
{
	au[i] = c;
}
}
return (au);
}
