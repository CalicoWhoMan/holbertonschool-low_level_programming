#include "holberton.h"

/**
 * print_numbers - prints nums from 0 to 9 with a new line
 *
 * Return: 0-9
 */

void print_numbers(void)

{
int ch;

for (ch = 0; ch <= 9; ch++)

{
_putchar(ch + '0');
}
_putchar('\n');
}
