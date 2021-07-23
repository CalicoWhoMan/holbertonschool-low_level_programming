#include "holberton.h"

/**
 * array_range - func that creates an array of ints
 * @min: minimum amt of ints
 * @max: maximum amt of ints
 * Return: pointer
 */

int *array_range(int min, int max)

{
int *point, i;

if (min > max)
{
return (NULL);
}
point = malloc(((max - min) + 1) * sizeof(int));

if (point == NULL)
{
return (NULL);
}
for (i = 0; min <= max; i++)
{
point[i] = min;
min++;
}
return (point);
}
