#include "holberton.h"
/**
 * print_most_numbers - prints numbers 0 to 9 execpt
 * for 2 and 4 and new line
 */

void print_most_numbers(void)
{
int num;
	for (num = 48; num <= 57; num++)
	{
	if (num != 50 && num != 52)
	{
		_putchar(num);
	}
	}
		_putchar('\n');

}
