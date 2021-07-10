#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters to uppercase
 *
 * @n: string
 *
 * Return: n
 */

char *string_toupper(char *n)

{
int i = 0;

while (n[i] != 0)
{
	if (*(n + i) >= 'a' && *(n + i) <= 'z')
		*(n + i) += ('A' - 'a');
i++;
}
return (n);
}
