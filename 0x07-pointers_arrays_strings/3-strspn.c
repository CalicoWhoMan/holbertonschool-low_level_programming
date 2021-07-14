#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial string
 * @accept: bytes containted hereinth
 * Return: len
 */

unsigned int _strspn(char *s, char *accept)
{
int len = 0;
int i = 0;

while (*s)
{
for (i = 0; accept[i] != 0; i++)
{
if (*s == accept[i])
{
len++;
}
}
s++;
}
return (len);
}
