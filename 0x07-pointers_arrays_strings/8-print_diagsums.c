#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of 2 diagnols of a square
 * matrix of integers
 * @a: square matrix
 * @size: size of the square matrix
 * Return: function
 */

void print_diagsums(int *a, int size)
{
int d;
int d1 = 0, d2 = 0;

for (d = 0; d < size; d++)
{
d1 += a[d];
d2 += a[size - d - 1];
a += size;
}
printf("%d, %d\n", d1, d2);
}
