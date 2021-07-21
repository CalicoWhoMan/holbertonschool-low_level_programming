#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - 2D grid
 * @grid: grid point
 * @height: height point
 * Return: 0
 */

void free_grid(int **grid, int height)

{
int a;

for (a = 0; a < height; a++)
{
free(grid[a]);
}
free(grid);
}
