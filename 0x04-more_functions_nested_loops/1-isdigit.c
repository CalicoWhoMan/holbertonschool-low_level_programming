#include "holberton.h"
/**
 *_isdigit - checks digit 0 - 9
 *
 *@c: digit
 *
 *Return: 1 if a digit 0 if not
 *
 */
int _isdigit(int c)

{

if (c > 47 && c < 57)

{
	return (1);
}

else

{
	return (0);
}
}


