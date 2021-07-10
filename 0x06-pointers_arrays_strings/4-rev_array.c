#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: pointer to array of ints
 * @n: bytes string
 */

void reverse_array(int *a, int n)
{
int i = 0, end;

n--;

while (i < n)
{
end = *(a + i);
*(a + i) = *(a + n);
*(a + n) = end;
n--;
i++;
}
}
