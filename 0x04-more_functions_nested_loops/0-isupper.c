#include "holberton.h"
/**
 * _isupper - Checks for uppercase letter
 *
 *@c: char checked
 *
 * Return: 1
 */

int _isupper(int c)
{

if ((c >= 65) && (c <= 90))
{
	return (1);
}
else

return (0);
}
