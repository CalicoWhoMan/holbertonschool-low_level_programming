#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dim array of ints
 * @width: width of grid
 * @height: height of grid
 * Return: grid or NULL
 */

int **alloc_grid(int width, int height)
{
int  b, i;
int **grid;

grid = malloc(sizeof(int *) * height);
if (height == 0)
{
return (NULL);
}
if (width == 0)
{
return (NULL);
}
if (grid == NULL)
{
return (0);
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
return (0);
}
for (b = 0; b < width; b++)
{
*(grid[i] + b) = 0;
}
}
return (grid);
}
