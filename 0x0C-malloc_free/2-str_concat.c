#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concats 2 strs
 * @s1: string one
 * @s2: string two
 * Return: Null or s3
 */

char *str_concat(char *s1, char *s2)
{
char *n;
int i, a;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
n = malloc(strlen(s1) + strlen(s2) + 1);
if
(n == 0)
{
return (NULL);
}
for (i = 0; s1[i]; i++)
{
n[i] = s1[i];
}
for (a = 0; s2[a]; i++, a++)
{
n[i] = s2[a];
}
n[i] = 0;
return (n);
}
