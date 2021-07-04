#include "holberton.h"
/**
 * swap_int - swaps the values of 2 integers
 * @a: int 1
 * @b: int 2
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int swap = *a;
*a = *b;
*b = swap;

}
