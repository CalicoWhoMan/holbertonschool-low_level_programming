#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - funtion to that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: string
 * Return: NULL or string/pointer
 */

char *_strdup(char *str)
{
char *n;
int a, i;

for (i = 0; str[i];  i++)
{
continue;
}
n = malloc((i * sizeof(char)) +  1);
if (n == NULL || str == NULL)
{
return (NULL);
}
for (a = 0; a < i; a++)
{
n[a] = str[a];
}
n[i] = '\0';
return (n);
}
