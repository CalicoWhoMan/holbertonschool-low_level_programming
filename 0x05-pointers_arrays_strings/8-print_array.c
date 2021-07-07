#include "holberton.h"

/**
 * print_array - prints number elements of an array of ints
 * @a: array
 * @n: number of elements
 */

void print_array(int *a, int n)

{
int add = 1;

while (add <= n)
{
if (add != 1)
printf(", ");
printf("%i", *a);
add++;
a++;
}
printf("\n");
}
