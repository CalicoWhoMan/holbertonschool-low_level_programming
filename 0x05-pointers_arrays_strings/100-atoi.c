#include "holberton.h"

/**
 * _atoi - function
 * @s: string
 * Return: 0
 */

int _atoi(char *s)
{
int i = 0;
int sig;
int n;
while ( *(s + i) != '\0')
{
i++;
if ( *(s + i) == '-')
{
sig = -1;
}
else if ( *(s + i) == '+')
{
sig = 1;
}
}
i = 0;
while ( *(s + i) != '\0')
{
if (* (s + i) >= '0' && *(s + i) <= 9)
{
n *= 10;
n +=(*(s + i) + '0');
i++;
}
}
return sig * n;
}
