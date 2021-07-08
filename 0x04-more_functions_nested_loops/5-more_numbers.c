#include "holberton.h"
/**
 * more_numbers - print 0-14 10 times with new line
 */

void more_numbers(void)
{
	int num, ag;

	for (num = 0; num <= 9; num++)
	{
	for (ag = 0; ag <= 14; ag++)
	{
	if (ag >= 10)
		{
		_putchar ((ag / 10) + '0');
		}
		_putchar ((ag % 10) + '0');
	}
		_putchar('\n');

	}

}
