#include "holberton.h"
/**
 * print_diagonal - prints diagonal in term
 *
 * @n: times to be printed either space or slash
 */

void print_diagonal(int n)
{

int key, my;

if (n <= 0)
{
_putchar('\n');
return;
}

for (my = 0; my < n; my++)
{
for (key = 0; key < my; key++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
