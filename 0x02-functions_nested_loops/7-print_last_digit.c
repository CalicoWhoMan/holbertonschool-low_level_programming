#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @a: number
 * Return: last number
 */

int print_last_digit(int a)
{
	int last;

	last = (a % 10);
	_putchar (last + last);
	return (last);
}
