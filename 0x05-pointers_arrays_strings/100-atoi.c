#include "holberton.h"

/**
 * _atoi - function
 * @s: string
 * Return: 0
 */

int _atoi(char *s)
{
int sig = 1, b = 0, i = 0;
while (*s)
{
if (i && !(*s >= '0' && *s <= '9'))
break;
if (*s == '-')
sig *= -1;
if ((*s >= '0' && *s <= '9'))
{
i = 1;
b = b * 10 + (int)*s - 48;
}
s++;
}
return (sig * b);
}
