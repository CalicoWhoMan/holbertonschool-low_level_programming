#include "holberton.h"

/**
 * leet - encodes a string into 1337
 *
 * @n: string
 *
 * Return: n
 */

char *leet(char *n)

{
char go[] = {'a', 'e', 'l', 'o', 't', 'A', 'E', 'L', 'O', 'T'};
char and[] = {'4', '3', '1', '0', '7', '4', '3', '1', '0', '7'};
int i = 0;
int j = 0;

while (n[i] != 0)
{
	for (j = 0; j < 10; j++)
		if (n[i] == go[j])
			n[i] = and[j];
	i++;
}
return (n);
}
