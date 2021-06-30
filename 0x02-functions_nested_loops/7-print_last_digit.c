#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @a: number
 * Return: last number
 */

int print_last_digit(int a)
{
	int last = a % 10;

	if (last < 0)
		last *= -1;
	_putchar (last + '0');

	return (last);
}
