#include "holberton.h"

/**
 * print_numbers - prints nums from 0 to 9 with a new line
 *
 * Return: void
 */

void print_numbers(void)

{
int a;

for (a = 0; a <= 9; a++)

	_putchar(a + '0');

	_putchar('\n');

}
