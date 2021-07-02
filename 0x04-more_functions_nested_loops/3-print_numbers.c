#include "holberton.h"

/**
 * print_numbers - prints nums from 0 to 9 with a new line
 *
 * Return: 0-9
 */

void print_numbers(void)

{
int a;

for (a = 0; a < 10; a++)


_putchar(a + '0');

_putchar('\n');

}
