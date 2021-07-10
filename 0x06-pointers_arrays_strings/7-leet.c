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
int i, j;
char syi[] = "aAeEoOtTlL";
char ser[] = "4433007711";
for (i = 0; n[i] != 0; i++)
{
for (j = 0; n[j] != 0; j++)
{
if (n[i] == syi[j])
n[i] == ser[j];
}
}
return (n);
}
