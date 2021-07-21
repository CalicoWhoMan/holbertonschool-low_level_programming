#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strdup - funtion to that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 *
 * @str: string
 * Return: NULL or string/pointer
 *
 */

char *_strdup(char *str)
{
	char *n;
	int a, i;

	if (str != NULL)
	{
		for (i = 0; str[i];  i++)
			continue;
	n = malloc(i + 1);
	if (n != NULL)
	{
	for (a = 0; a < i; a++)

		n[a] = str[a];
	}
	}
	return (n);






}
