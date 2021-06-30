#include "holberton.h"

/**
 * jack_bauer - display the minutes and hours of the day military
 * Return: 0
 */

void jack_bauer(void)
{ int minute, hour;
	for (minute = 0; minute <= 59; minute++)
	{
	for (hour = 0; hour <= 23; hour++)

	{
	_putchar ((hour / 10) + '0');
	_putchar ((hour % 10) + '0');
	_putchar (':');
	_putchar ((minute / 10) + '0');
	_putchar ((minute % 10) + '0');
	_putchar ('\n');
}
}
}
